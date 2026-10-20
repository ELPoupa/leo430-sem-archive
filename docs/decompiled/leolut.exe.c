// Decompiled with Ghidra from leolut.exe
// Format: Portable Executable (PE), image base 00400000

// ---- FUN_00401000 @ 00401000

bool FUN_00401000(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_0042650c == 0) {
    hModule = GetModuleHandleA(s_USER32_0041e760);
    if ((((hModule != (HMODULE)0x0) &&
         (DAT_004264f4 = GetProcAddress(hModule,s_GetSystemMetrics_0041e768),
         DAT_004264f4 != (FARPROC)0x0)) &&
        (DAT_004264f8 = GetProcAddress(hModule,s_MonitorFromWindow_0041e77c),
        DAT_004264f8 != (FARPROC)0x0)) &&
       (((DAT_004264fc = GetProcAddress(hModule,s_MonitorFromRect_0041e790),
         DAT_004264fc != (FARPROC)0x0 &&
         (DAT_00426500 = GetProcAddress(hModule,s_MonitorFromPoint_0041e7a0),
         DAT_00426500 != (FARPROC)0x0)) &&
        ((DAT_00426508 = GetProcAddress(hModule,s_EnumDisplayMonitors_0041e7b4),
         DAT_00426508 != (FARPROC)0x0 &&
         (DAT_00426504 = GetProcAddress(hModule,s_GetMonitorInfoA_0041e7c8),
         DAT_00426504 != (FARPROC)0x0)))))) {
      DAT_0042650c = 1;
      return true;
    }
    DAT_004264f4 = (FARPROC)0x0;
    DAT_004264f8 = (FARPROC)0x0;
    DAT_004264fc = (FARPROC)0x0;
    DAT_00426500 = (FARPROC)0x0;
    DAT_00426504 = (FARPROC)0x0;
    DAT_00426508 = (FARPROC)0x0;
    DAT_0042650c = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_00426504 != (FARPROC)0x0;
  }
  return bVar1;
}


// ---- xGetSystemMetrics @ 00401149

/* Library Function - Single Match
    _xGetSystemMetrics@4
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug
   __stdcall xGetSystemMetrics,4 */

int xGetSystemMetrics(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_00401000();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    switch(param_1) {
    case 0x4c:
    case 0x4d:
      return 0;
    case 0x4e:
      param_1 = 0;
      break;
    case 0x4f:
      param_1 = 1;
      break;
    case 0x50:
    case 0x51:
      return 1;
    }
    iVar2 = GetSystemMetrics(param_1);
    return iVar2;
  }
  iVar2 = (*DAT_004264f4)(param_1);
  return iVar2;
}


// ---- FUN_004011c4 @ 004011c4

undefined4 FUN_004011c4(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_00401000();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_3 & 3) == 0) &&
       ((((param_1 < 0 || (iVar3 = GetSystemMetrics(0), iVar3 <= param_1)) || (param_2 < 0)) ||
        (iVar3 = GetSystemMetrics(1), iVar3 <= param_2)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12340042;
    }
    return uVar2;
  }
  uVar2 = (*DAT_00426500)(param_1,param_2,param_3);
  return uVar2;
}


// ---- FUN_00401221 @ 00401221

undefined4 FUN_00401221(int *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_00401000();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_2 & 3) == 0) &&
       ((((param_1[2] < 1 || (param_1[3] < 1)) || (iVar3 = GetSystemMetrics(0), iVar3 <= *param_1))
        || (iVar3 = GetSystemMetrics(1), iVar3 <= param_1[1])))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12340042;
    }
    return uVar2;
  }
  uVar2 = (*DAT_004264fc)(param_1,param_2);
  return uVar2;
}


// ---- FUN_00401285 @ 00401285

undefined4 FUN_00401285(HWND param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  int local_34;
  WINDOWPLACEMENT local_30;
  
  bVar1 = FUN_00401000();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((param_2 & 3) == 0) {
      BVar3 = IsIconic(param_1);
      if (BVar3 == 0) {
        local_34 = GetWindowRect(param_1,&local_30.rcNormalPosition);
      }
      else {
        local_34 = GetWindowPlacement(param_1,&local_30);
      }
      if (local_34 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00401221(&local_30.rcNormalPosition.left,param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_004264f8)(param_1,param_2);
  }
  return uVar2;
}


// ---- FUN_00401304 @ 00401304

undefined4 FUN_00401304(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  bVar1 = FUN_00401000();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((((param_1 == 0x12340042) && (param_2 != (uint *)0x0)) && (0x27 < *param_2)) &&
       (BVar3 = SystemParametersInfoA(0x30,0,&local_14,0), BVar3 != 0)) {
      param_2[1] = 0;
      param_2[2] = 0;
      uVar4 = GetSystemMetrics(0);
      param_2[3] = uVar4;
      uVar4 = GetSystemMetrics(1);
      param_2[4] = uVar4;
      param_2[5] = local_14;
      param_2[6] = local_10;
      param_2[7] = local_c;
      param_2[8] = local_8;
      param_2[9] = 1;
      if (0x47 < *param_2) {
        lstrcpyA((LPSTR)(param_2 + 10),s_DISPLAY_0041e7d8);
      }
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (*DAT_00426504)(param_1,param_2);
  }
  return uVar2;
}


// ---- xEnumDisplayMonitors @ 004013dd

/* Library Function - Single Match
    _xEnumDisplayMonitors@16
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug
   __stdcall xEnumDisplayMonitors,16 */

undefined4 xEnumDisplayMonitors(HDC param_1,RECT *param_2,undefined *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  tagRECT local_2c;
  tagPOINT local_1c;
  tagRECT local_14;
  
  bVar1 = FUN_00401000();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = (*DAT_00426508)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_3 == (undefined *)0x0) {
    return 0;
  }
  local_14.left = 0;
  local_14.top = 0;
  local_14.right = GetSystemMetrics(0);
  local_14.bottom = GetSystemMetrics(1);
  if (param_1 == (HDC)0x0) {
    if ((param_2 != (RECT *)0x0) && (BVar4 = IntersectRect(&local_14,&local_14,param_2), BVar4 == 0)
       ) {
      return 1;
    }
LAB_004014f2:
    uVar2 = (*(code *)param_3)(0x12340042,param_1,&local_14,param_4);
  }
  else {
    iVar3 = GetClipBox(param_1,&local_2c);
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 != 1) {
      BVar4 = GetDCOrgEx(param_1,&local_1c);
      if (BVar4 == 0) {
        return 0;
      }
      OffsetRect(&local_14,-local_1c.x,-local_1c.y);
      BVar4 = IntersectRect(&local_14,&local_14,&local_2c);
      if ((BVar4 != 0) &&
         ((param_2 == (RECT *)0x0 ||
          (BVar4 = IntersectRect(&local_14,&local_14,param_2), BVar4 != 0)))) goto LAB_004014f2;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_0040150c @ 0040150c

void FUN_0040150c(void)

{
  FUN_0040151b();
  FUN_0040152a();
  return;
}


// ---- FUN_0040151b @ 0040151b

void FUN_0040151b(void)

{
  FID_conflict_CArray<int,int_const&>((undefined4 *)&DAT_004264e0);
  return;
}


// ---- FUN_0040152a @ 0040152a

void FUN_0040152a(void)

{
  FUN_004188e6(FUN_0040153c);
  return;
}


// ---- FUN_0040153c @ 0040153c

void FUN_0040153c(void)

{
  if ((DAT_004264dc & 1) == 0) {
    DAT_004264dc = DAT_004264dc | 1;
    FUN_00402050((undefined4 *)&DAT_004264e0);
  }
  return;
}


// ---- FUN_00401568 @ 00401568

void FUN_00401568(void)

{
  FUN_00401577();
  FUN_00401586();
  return;
}


// ---- FUN_00401577 @ 00401577

void FUN_00401577(void)

{
  FID_conflict_CArray<int,int_const&>((undefined4 *)&DAT_004264c8);
  return;
}


// ---- FUN_00401586 @ 00401586

void FUN_00401586(void)

{
  FUN_004188e6(FUN_00401598);
  return;
}


// ---- FUN_00401598 @ 00401598

void FUN_00401598(void)

{
  if ((DAT_004264dc & 2) == 0) {
    DAT_004264dc = DAT_004264dc | 2;
    FUN_00401ec0((undefined4 *)&DAT_004264c8);
  }
  return;
}


// ---- FUN_004015c4 @ 004015c4

void FUN_004015c4(void)

{
  FUN_004015ce();
  return;
}


// ---- FUN_004015ce @ 004015ce

void FUN_004015ce(void)

{
  FUN_004028d0(&DAT_004264b8,0,0,0,0);
  return;
}


// ---- FUN_004015e5 @ 004015e5

void FUN_004015e5(void)

{
  FUN_004015ef();
  return;
}


// ---- FUN_004015ef @ 004015ef

void FUN_004015ef(void)

{
  FUN_004028d0(&DAT_004264a8,0,0,0,0);
  return;
}


// ---- FUN_00401606 @ 00401606

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00401606(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  *param_1 = &PTR_FUN_0041a568;
  DAT_00426510 = 0;
  FUN_00401e50(&DAT_004264c8);
  puVar1 = FUN_004028d0(local_14,0,0,0,0);
  DAT_004264b8 = *puVar1;
  DAT_004264bc = puVar1[1];
  DAT_004264c0 = puVar1[2];
  DAT_004264c4 = puVar1[3];
  puVar1 = FUN_004028d0(local_24,0,0,0,0);
  DAT_004264a8 = *puVar1;
  DAT_004264ac = puVar1[1];
  DAT_004264b0 = puVar1[2];
  DAT_004264b4 = puVar1[3];
  _DAT_00426514 = 1;
  xEnumDisplayMonitors((HDC)0x0,(RECT *)0x0,FUN_004016c7,0);
  return param_1;
}


// ---- FUN_004016b3 @ 004016b3

void __fastcall FUN_004016b3(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0041a568;
  return;
}


// ---- FUN_004016c7 @ 004016c7

int FUN_004016c7(int param_1,undefined4 param_2,RECT *param_3)

{
  int iVar1;
  RECT *pRVar2;
  RECT *pRVar3;
  uint local_4c [9];
  uint local_28;
  
  local_4c[0] = 0x48;
  iVar1 = FUN_00401304(param_1,local_4c);
  if (iVar1 != 0) {
    Add(&DAT_004264e0,local_4c);
    Add(&DAT_004264c8,&param_1);
    if ((local_28 & 1) != 0) {
      DAT_00426510 = FUN_00401e30(0x4264c8);
      FUN_004029f0(&DAT_004264a8,param_3);
    }
    pRVar3 = param_3;
    pRVar2 = (RECT *)FUN_00402970(&DAT_004264b8);
    FUN_004029d0(&DAT_004264b8,pRVar2,pRVar3);
  }
  return iVar1;
}


// ---- FUN_0040174f @ 0040174f

undefined4 * __cdecl FUN_0040174f(undefined4 *param_1)

{
  *param_1 = DAT_004264a8;
  param_1[1] = DAT_004264ac;
  param_1[2] = DAT_004264b0;
  param_1[3] = DAT_004264b4;
  return param_1;
}


// ---- FUN_0040177d @ 0040177d

undefined4 * __cdecl FUN_0040177d(undefined4 *param_1)

{
  *param_1 = DAT_004264b8;
  param_1[1] = DAT_004264bc;
  param_1[2] = DAT_004264c0;
  param_1[3] = DAT_004264c4;
  return param_1;
}


// ---- FUN_004017ab @ 004017ab

void FUN_004017ab(void)

{
  FUN_00401e10(0x4264c8);
  return;
}


// ---- FUN_004017ba @ 004017ba

undefined4 __cdecl FUN_004017ba(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_004011c4(param_1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)FUN_00401ea0(&DAT_004264c8,DAT_00426510);
    if (iVar1 == *piVar3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ---- FUN_004017ff @ 004017ff

undefined4 FUN_004017ff(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar1 = (int *)FUN_00402970(&stack0x00000004);
  iVar2 = FUN_00401221(piVar1,uVar4);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    piVar1 = (int *)FUN_00401ea0(&DAT_004264c8,DAT_00426510);
    if (iVar2 == *piVar1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ---- FUN_00401844 @ 00401844

undefined4 __cdecl FUN_00401844(HWND param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_00401285(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)FUN_00401ea0(&DAT_004264c8,DAT_00426510);
    if (iVar1 == *piVar3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ---- FUN_00401885 @ 00401885

bool __cdecl FUN_00401885(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004011c4(param_1,param_2,0);
  return iVar1 != 0;
}


// ---- FUN_004018ae @ 004018ae

undefined4 __cdecl FUN_004018ae(HWND param_1)

{
  int iVar1;
  RECT *pRVar2;
  RECT *pRVar3;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  int local_1c;
  tagRECT local_18;
  int local_8;
  
  local_8 = FUN_00401285(param_1,0);
  if (local_8 != 0) {
    FUN_004028c0(&local_18);
    GetWindowRect(param_1,&local_18);
    local_18.bottom = xGetSystemMetrics(4);
    local_18.bottom = local_18.top + local_18.bottom;
    FUN_004028c0(local_2c);
    local_1c = 0;
    while (iVar1 = FUN_00401e10(0x4264e0), local_1c < iVar1) {
      iVar1 = FUN_00402030(&DAT_004264e0,local_1c);
      CRect(local_3c,(RECT *)(iVar1 + 0x14));
      FUN_00402980(local_3c,10,10);
      pRVar2 = (RECT *)FUN_00402970(&local_18);
      pRVar3 = (RECT *)FUN_00402970(local_3c);
      iVar1 = FUN_004029b0(local_2c,pRVar3,pRVar2);
      if (iVar1 != 0) {
        return 1;
      }
      local_1c = local_1c + 1;
    }
  }
  return 0;
}


// ---- FUN_0040196d @ 0040196d

void __cdecl FUN_0040196d(int param_1)

{
  FUN_00401981(*(HWND *)(param_1 + 0x20));
  return;
}


// ---- FUN_00401981 @ 00401981

BOOL __cdecl FUN_00401981(HWND param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int local_5c;
  int local_58;
  int local_4c;
  tagRECT local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  RECT local_28 [2];
  
  local_4c = FUN_00401285(param_1,2);
  if (local_4c == 0) {
    BVar1 = 0;
  }
  else {
    FUN_004028c0(&local_48);
    GetWindowRect(param_1,&local_48);
    local_2c = 0x28;
    local_30 = FUN_00401304(local_4c,&local_2c);
    FUN_004028c0(&local_38);
    CRect(&local_5c,local_28);
    iVar2 = FUN_00402930(&local_5c);
    iVar3 = FUN_00402930(&local_48.left);
    local_38 = (local_5c + iVar2 / 2) - iVar3 / 2;
    iVar2 = FUN_00402950((int)&local_5c);
    iVar3 = FUN_00402950((int)&local_48);
    local_34 = (local_58 + iVar2 / 2) - iVar3 / 2;
    BVar1 = SetWindowPos(param_1,(HWND)0x0,local_38,local_34,0,0,5);
  }
  return BVar1;
}


// ---- FUN_00401a4b @ 00401a4b

void __cdecl FUN_00401a4b(int param_1)

{
  FUN_00401a5f(*(HWND *)(param_1 + 0x20));
  return;
}


// ---- FUN_00401a5f @ 00401a5f

void __cdecl FUN_00401a5f(HWND param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  FUN_004028c0(&local_c);
  FUN_004028c0(&local_1c);
  GetWindowRect(param_1,&local_1c);
  iVar1 = FUN_00402930(&DAT_004264a8);
  iVar2 = DAT_004264a8 + iVar1 / 2;
  iVar1 = FUN_00402930(&local_1c.left);
  local_c = iVar2 - iVar1 / 2;
  iVar1 = FUN_00402950(0x4264a8);
  iVar2 = DAT_004264ac + iVar1 / 2;
  iVar1 = FUN_00402950((int)&local_1c);
  local_8 = iVar2 - iVar1 / 2;
  SetWindowPos(param_1,(HWND)0x0,local_c,local_8,0,0,5);
  return;
}


// ---- FUN_00401af5 @ 00401af5

int __cdecl FUN_00401af5(HWND param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  iVar1 = FUN_00401285(param_1,2);
  if (iVar1 != 0) {
    for (local_c = 0; iVar2 = FUN_00401e30(0x4264c8), local_c < iVar2; local_c = local_c + 1) {
    }
    piVar3 = (int *)FUN_00401ea0(&DAT_004264c8,local_c);
    if (iVar1 == *piVar3) {
      return local_c;
    }
  }
  return 0;
}


// ---- FUN_00401b52 @ 00401b52

undefined4 * __cdecl FUN_00401b52(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_14 [16];
  
  iVar1 = FUN_00401e30(0x4264c8);
  if (iVar1 < param_2) {
    puVar2 = FUN_004028d0(local_14,0,0,0,0);
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
    param_1[2] = puVar2[2];
    param_1[3] = puVar2[3];
  }
  else {
    iVar1 = FUN_00402030(&DAT_004264e0,param_2);
    CRect(param_1,(RECT *)(iVar1 + 4));
  }
  return param_1;
}


// ---- FUN_00401bb6 @ 00401bb6

bool __cdecl FUN_00401bb6(HWND param_1)

{
  int iVar1;
  
  iVar1 = FUN_004018ae(param_1);
  if (iVar1 == 0) {
    FUN_00401a5f(param_1);
  }
  return iVar1 != 0;
}


// ---- FUN_00401be8 @ 00401be8

void __cdecl FUN_00401be8(int param_1)

{
  FUN_00401bb6(*(HWND *)(param_1 + 0x20));
  return;
}


// ---- FUN_00401bfc @ 00401bfc

BOOL __cdecl FUN_00401bfc(HWND param_1,HWND param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int local_5c;
  int local_58;
  int local_4c;
  tagRECT local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  RECT local_28 [2];
  
  local_4c = FUN_00401285(param_2,2);
  if (local_4c == 0) {
    BVar1 = 0;
  }
  else {
    FUN_004028c0(&local_48);
    GetWindowRect(param_1,&local_48);
    local_2c = 0x28;
    local_30 = FUN_00401304(local_4c,&local_2c);
    FUN_004028c0(&local_38);
    CRect(&local_5c,local_28);
    iVar2 = FUN_00402930(&local_5c);
    iVar3 = FUN_00402930(&local_48.left);
    local_38 = (local_5c + iVar2 / 2) - iVar3 / 2;
    iVar2 = FUN_00402950((int)&local_5c);
    iVar3 = FUN_00402950((int)&local_48);
    local_34 = (local_58 + iVar2 / 2) - iVar3 / 2;
    BVar1 = SetWindowPos(param_1,(HWND)0x0,local_38,local_34,0,0,5);
  }
  return BVar1;
}


// ---- FUN_00401cc6 @ 00401cc6

int __cdecl FUN_00401cc6(CWnd *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_5c;
  int local_58;
  int local_4c;
  tagRECT local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  RECT local_28 [2];
  
  local_4c = FUN_00401285(*(HWND *)(param_2 + 0x20),2);
  if (local_4c == 0) {
    iVar1 = 0;
  }
  else {
    FUN_004028c0(&local_48);
    FUN_00402a10(param_1,&local_48);
    local_2c = 0x28;
    local_30 = FUN_00401304(local_4c,&local_2c);
    FUN_004028c0(&local_38);
    CRect(&local_5c,local_28);
    iVar1 = FUN_00402930(&local_5c);
    iVar2 = FUN_00402930(&local_48.left);
    local_38 = (local_5c + iVar1 / 2) - iVar2 / 2;
    iVar1 = FUN_00402950((int)&local_5c);
    iVar2 = FUN_00402950((int)&local_48);
    local_34 = (local_58 + iVar1 / 2) - iVar2 / 2;
    iVar1 = CWnd::SetWindowPos(param_1,(CWnd *)0x0,local_38,local_34,0,0,5);
  }
  return iVar1;
}


// ---- FUN_00401d90 @ 00401d90

undefined4 * __thiscall FUN_00401d90(void *this,uint param_1)

{
  FUN_004016b3(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FID_conflict:CArray<int,int_const&> @ 00401dc0

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CArray<int,int const &>::CArray<int,int const &>(void)
    public: __thiscall CArray<int,int>::CArray<int,int>(void)
    public: __thiscall CArray<unsigned int,unsigned int>::CArray<unsigned int,unsigned int>(void)
    public: __thiscall CArray<long,long>::CArray<long,long>(void)
     33 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

undefined4 * __fastcall FID_conflict_CArray<int,int_const&>(undefined4 *param_1)

{
  FUN_00402800(param_1);
  *param_1 = &PTR_LAB_0041a56c;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_1;
}


// ---- FUN_00401e10 @ 00401e10

undefined4 __fastcall FUN_00401e10(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ---- FUN_00401e30 @ 00401e30

int __fastcall FUN_00401e30(int param_1)

{
  return *(int *)(param_1 + 8) + -1;
}


// ---- FUN_00401e50 @ 00401e50

void __fastcall FUN_00401e50(void *param_1)

{
  FUN_004021a0(param_1,0,-1);
  return;
}


// ---- Add @ 00401e70

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<int,int>::Add(int)
    public: int __thiscall CArray<unsigned int,unsigned int>::Add(unsigned int)
    public: int __thiscall CArray<long,long>::Add(long)
    public: int __thiscall CArray<unsigned long,unsigned long>::Add(unsigned long)
     29 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __thiscall Add(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  FUN_004023f0(this,iVar1,param_1);
  return iVar1;
}


// ---- FUN_00401ea0 @ 00401ea0

void __thiscall FUN_00401ea0(void *this,int param_1)

{
  FUN_004023d0(this,param_1);
  return;
}


// ---- FUN_00401ec0 @ 00401ec0

void __fastcall FUN_00401ec0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00418b79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_0041a56c;
  local_8 = 0;
  if (param_1[1] != 0) {
    FUN_00402430(param_1[1],param_1[2]);
    operator_delete((void *)param_1[1]);
  }
  local_8 = 0xffffffff;
  FUN_00402850(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_00401f40 @ 00401f40

void __thiscall FUN_00401f40(void *this,CArchive *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  ulong uVar2;
  
  FUN_00404f40();
  bVar1 = FUN_004028a0((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = CArchive::ReadCount(param_1);
    FUN_004021a0(this,uVar2,-1);
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 8));
  }
  FUN_00402460(param_1,*(void **)((int)this + 4),*(int *)((int)this + 8));
  return;
}


// ---- FID_conflict:CArray<int,int_const&> @ 00401fb0

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CArray<int,int const &>::CArray<int,int const &>(void)
    public: __thiscall CArray<int,int>::CArray<int,int>(void)
    public: __thiscall CArray<unsigned int,unsigned int>::CArray<unsigned int,unsigned int>(void)
    public: __thiscall CArray<long,long>::CArray<long,long>(void)
     33 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

undefined4 * __fastcall FID_conflict_CArray<int,int_const&>(undefined4 *param_1)

{
  FUN_00402800(param_1);
  *param_1 = &PTR_LAB_0041a580;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_1;
}


// ---- Add @ 00402000

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<int,int>::Add(int)
    public: int __thiscall CArray<unsigned int,unsigned int>::Add(unsigned int)
    public: int __thiscall CArray<long,long>::Add(long)
    public: int __thiscall CArray<unsigned long,unsigned long>::Add(unsigned long)
     29 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __thiscall Add(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  FUN_004026f0(this,iVar1,param_1);
  return iVar1;
}


// ---- FUN_00402030 @ 00402030

void __thiscall FUN_00402030(void *this,int param_1)

{
  FUN_004026d0(this,param_1);
  return;
}


// ---- FUN_00402050 @ 00402050

void __fastcall FUN_00402050(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00418b99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_0041a580;
  local_8 = 0;
  if (param_1[1] != 0) {
    FUN_00402740(param_1[1],param_1[2]);
    operator_delete((void *)param_1[1]);
  }
  local_8 = 0xffffffff;
  FUN_00402850(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_004020d0 @ 004020d0

void __thiscall FUN_004020d0(void *this,CArchive *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  ulong uVar2;
  
  FUN_00404f40();
  bVar1 = FUN_004028a0((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = CArchive::ReadCount(param_1);
    FUN_004024a0(this,uVar2,-1);
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 8));
  }
  FUN_00402770(param_1,*(void **)((int)this + 4),*(int *)((int)this + 8));
  return;
}


// ---- FUN_00402140 @ 00402140

undefined4 * __thiscall FUN_00402140(void *this,uint param_1)

{
  FUN_00401ec0(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_00402170 @ 00402170

undefined4 * __thiscall FUN_00402170(void *this,uint param_1)

{
  FUN_00402050(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_004021a0 @ 004021a0

void __thiscall FUN_004021a0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int local_2c;
  int local_28;
  int local_10;
  int local_c;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      FUN_00402430(*(undefined4 *)((int)this + 4),*(int *)((int)this + 8));
      operator_delete(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else if (*(int *)((int)this + 4) == 0) {
    pvVar1 = operator_new(param_1 << 2);
    *(void **)((int)this + 4) = pvVar1;
    FUN_004182f0(*(void **)((int)this + 4),param_1);
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 8) = param_1;
  }
  else if (*(int *)((int)this + 0xc) < param_1) {
    local_c = *(int *)((int)this + 0x10);
    if (local_c == 0) {
      local_2c = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (local_2c < 4) {
        local_28 = 4;
      }
      else {
        if (0x400 < local_2c) {
          local_2c = 0x400;
        }
        local_28 = local_2c;
      }
      local_c = local_28;
    }
    if (param_1 < *(int *)((int)this + 0xc) + local_c) {
      local_10 = *(int *)((int)this + 0xc) + local_c;
    }
    else {
      local_10 = param_1;
    }
    pvVar1 = operator_new(local_10 << 2);
    memcpy(pvVar1,*(void **)((int)this + 4),*(int *)((int)this + 8) << 2);
    FUN_004182f0((void *)((int)pvVar1 + *(int *)((int)this + 8) * 4),
                 param_1 - *(int *)((int)this + 8));
    operator_delete(*(void **)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = local_10;
  }
  else {
    if (*(int *)((int)this + 8) < param_1) {
      FUN_004182f0((void *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4),
                   param_1 - *(int *)((int)this + 8));
    }
    else if (param_1 < *(int *)((int)this + 8)) {
      FUN_00402430(*(int *)((int)this + 4) + param_1 * 4,*(int *)((int)this + 8) - param_1);
    }
    *(int *)((int)this + 8) = param_1;
  }
  return;
}


// ---- FUN_004023d0 @ 004023d0

int __thiscall FUN_004023d0(void *this,int param_1)

{
  return *(int *)((int)this + 4) + param_1 * 4;
}


// ---- FUN_004023f0 @ 004023f0

void __thiscall FUN_004023f0(void *this,int param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 8) <= param_1) {
    FUN_004021a0(this,param_1 + 1,-1);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4) = *param_2;
  return;
}


// ---- FUN_00402430 @ 00402430

void FUN_00402430(undefined4 param_1,int param_2)

{
  bool bVar1;
  
  do {
    bVar1 = param_2 != 0;
    param_2 = param_2 + -1;
  } while (bVar1);
  return;
}


// ---- FUN_00402460 @ 00402460

void FUN_00402460(CArchive *param_1,void *param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004028a0((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    CArchive::Read(param_1,param_2,param_3 << 2);
  }
  else {
    CArchive::Write(param_1,param_2,param_3 << 2);
  }
  return;
}


// ---- FUN_004024a0 @ 004024a0

void __thiscall FUN_004024a0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int local_2c;
  int local_28;
  int local_10;
  int local_c;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      FUN_00402740(*(undefined4 *)((int)this + 4),*(int *)((int)this + 8));
      operator_delete(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else if (*(int *)((int)this + 4) == 0) {
    pvVar1 = operator_new(param_1 * 0x48);
    *(void **)((int)this + 4) = pvVar1;
    FUN_004027b0(*(void **)((int)this + 4),param_1);
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 8) = param_1;
  }
  else if (*(int *)((int)this + 0xc) < param_1) {
    local_c = *(int *)((int)this + 0x10);
    if (local_c == 0) {
      local_2c = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (local_2c < 4) {
        local_28 = 4;
      }
      else {
        if (0x400 < local_2c) {
          local_2c = 0x400;
        }
        local_28 = local_2c;
      }
      local_c = local_28;
    }
    if (param_1 < *(int *)((int)this + 0xc) + local_c) {
      local_10 = *(int *)((int)this + 0xc) + local_c;
    }
    else {
      local_10 = param_1;
    }
    pvVar1 = operator_new(local_10 * 0x48);
    memcpy(pvVar1,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x48);
    FUN_004027b0((void *)((int)pvVar1 + *(int *)((int)this + 8) * 0x48),
                 param_1 - *(int *)((int)this + 8));
    operator_delete(*(void **)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = local_10;
  }
  else {
    if (*(int *)((int)this + 8) < param_1) {
      FUN_004027b0((void *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 0x48),
                   param_1 - *(int *)((int)this + 8));
    }
    else if (param_1 < *(int *)((int)this + 8)) {
      FUN_00402740(*(int *)((int)this + 4) + param_1 * 0x48,*(int *)((int)this + 8) - param_1);
    }
    *(int *)((int)this + 8) = param_1;
  }
  return;
}


// ---- FUN_004026d0 @ 004026d0

int __thiscall FUN_004026d0(void *this,int param_1)

{
  return param_1 * 0x48 + *(int *)((int)this + 4);
}


// ---- FUN_004026f0 @ 004026f0

void __thiscall FUN_004026f0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 8) <= param_1) {
    FUN_004024a0(this,param_1 + 1,-1);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) + param_1 * 0x48);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ---- FUN_00402740 @ 00402740

void FUN_00402740(undefined4 param_1,int param_2)

{
  bool bVar1;
  
  do {
    bVar1 = param_2 != 0;
    param_2 = param_2 + -1;
  } while (bVar1);
  return;
}


// ---- FUN_00402770 @ 00402770

void FUN_00402770(CArchive *param_1,void *param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004028a0((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    CArchive::Read(param_1,param_2,param_3 * 0x48);
  }
  else {
    CArchive::Write(param_1,param_2,param_3 * 0x48);
  }
  return;
}


// ---- FUN_004027b0 @ 004027b0

void FUN_004027b0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 0x48);
  while (param_2 != 0) {
    FUN_00402a30(0x48,param_1);
    param_1 = (void *)((int)param_1 + 0x48);
    param_2 = param_2 + -1;
  }
  return;
}


// ---- FUN_00402800 @ 00402800

undefined4 * __fastcall FUN_00402800(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0041a594;
  return param_1;
}


// ---- FUN_00402820 @ 00402820

undefined4 * __thiscall FUN_00402820(void *this,uint param_1)

{
  FUN_00402850(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_00402850 @ 00402850

void __fastcall FUN_00402850(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0041a594;
  return;
}


// ---- FUN_00402870 @ 00402870

void FUN_00402870(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_00402890 @ 00402890

void FUN_00402890(void)

{
  return;
}


// ---- FUN_004028a0 @ 004028a0

bool __fastcall FUN_004028a0(int param_1)

{
  return (bool)('\x01' - ((*(uint *)(param_1 + 0x14) & 1) != 0));
}


// ---- FUN_004028c0 @ 004028c0

undefined4 __fastcall FUN_004028c0(undefined4 param_1)

{
  return param_1;
}


// ---- FUN_004028d0 @ 004028d0

undefined4 * __thiscall
FUN_004028d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return this;
}


// ---- CRect @ 00402910

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CRect::CRect(struct tagRECT const &)
    public: __thiscall CRect::CRect(struct tagRECT const *)
   
   Library: Visual Studio */

LPRECT __thiscall CRect(void *this,RECT *param_1)

{
  CopyRect(this,param_1);
  return this;
}


// ---- FUN_00402930 @ 00402930

int __fastcall FUN_00402930(int *param_1)

{
  return param_1[2] - *param_1;
}


// ---- FUN_00402950 @ 00402950

int __fastcall FUN_00402950(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
}


// ---- FUN_00402970 @ 00402970

undefined4 __fastcall FUN_00402970(undefined4 param_1)

{
  return param_1;
}


// ---- FUN_00402980 @ 00402980

void __thiscall FUN_00402980(void *this,int param_1,int param_2)

{
  InflateRect(this,-param_1,-param_2);
  return;
}


// ---- FUN_004029b0 @ 004029b0

void __thiscall FUN_004029b0(void *this,RECT *param_1,RECT *param_2)

{
  IntersectRect(this,param_1,param_2);
  return;
}


// ---- FUN_004029d0 @ 004029d0

void __thiscall FUN_004029d0(void *this,RECT *param_1,RECT *param_2)

{
  UnionRect(this,param_1,param_2);
  return;
}


// ---- FUN_004029f0 @ 004029f0

void __thiscall FUN_004029f0(void *this,RECT *param_1)

{
  CopyRect(this,param_1);
  return;
}


// ---- FUN_00402a10 @ 00402a10

void __thiscall FUN_00402a10(void *this,LPRECT param_1)

{
  GetWindowRect(*(HWND *)((int)this + 0x20),param_1);
  return;
}


// ---- FUN_00402a30 @ 00402a30

undefined4 __cdecl FUN_00402a30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ---- FUN_00402a40 @ 00402a40

void FUN_00402a40(void)

{
  FUN_00402a4a();
  return;
}


// ---- FUN_00402a4a @ 00402a4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402a4a(void)

{
  _DAT_004268f0 = RegisterWindowMessageA(s_LEO_D_SET_STATE_0041e7e0);
  return;
}


// ---- FUN_00402a5f @ 00402a5f

void FUN_00402a5f(void)

{
  FUN_00402a69();
  return;
}


// ---- FUN_00402a69 @ 00402a69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402a69(void)

{
  _DAT_004268ec = RegisterWindowMessageA(s_LEO_D_SET_STRING_0041e7f0);
  return;
}


// ---- FUN_00402a7e @ 00402a7e

void FUN_00402a7e(void)

{
  FUN_00402a88();
  return;
}


// ---- FUN_00402a88 @ 00402a88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402a88(void)

{
  _DAT_004268e8 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_0041e804);
  return;
}


// ---- FUN_00402a9d @ 00402a9d

void FUN_00402a9d(void)

{
  FUN_00402aa7();
  return;
}


// ---- FUN_00402aa7 @ 00402aa7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402aa7(void)

{
  _DAT_004268e4 = RegisterWindowMessageA(s_LEO_D_SET_XY_0041e814);
  return;
}


// ---- FUN_00402abc @ 00402abc

void FUN_00402abc(void)

{
  FUN_00402ac6();
  return;
}


// ---- FUN_00402ac6 @ 00402ac6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ac6(void)

{
  _DAT_004268e0 = RegisterWindowMessageA(s_LEO_D_GET_XY_0041e824);
  return;
}


// ---- FUN_00402adb @ 00402adb

void FUN_00402adb(void)

{
  FUN_00402ae5();
  return;
}


// ---- FUN_00402ae5 @ 00402ae5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ae5(void)

{
  _DAT_004268dc = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_0041e834);
  return;
}


// ---- FUN_00402afa @ 00402afa

void FUN_00402afa(void)

{
  FUN_00402b04();
  return;
}


// ---- FUN_00402b04 @ 00402b04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b04(void)

{
  _DAT_004268d8 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_0041e84c);
  return;
}


// ---- FUN_00402b19 @ 00402b19

void FUN_00402b19(void)

{
  FUN_00402b23();
  return;
}


// ---- FUN_00402b23 @ 00402b23

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b23(void)

{
  _DAT_004268d4 = RegisterWindowMessageA(s_LEO_D_STEP_0041e868);
  return;
}


// ---- FUN_00402b38 @ 00402b38

void FUN_00402b38(void)

{
  FUN_00402b42();
  return;
}


// ---- FUN_00402b42 @ 00402b42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b42(void)

{
  _DAT_004268d0 = RegisterWindowMessageA(s_LEO_D_EXECUTE_0041e874);
  return;
}


// ---- FUN_00402b57 @ 00402b57

void FUN_00402b57(void)

{
  FUN_00402b61();
  return;
}


// ---- FUN_00402b61 @ 00402b61

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b61(void)

{
  _DAT_004268cc = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_0041e884);
  return;
}


// ---- FUN_00402b76 @ 00402b76

void FUN_00402b76(void)

{
  FUN_00402b80();
  return;
}


// ---- FUN_00402b80 @ 00402b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b80(void)

{
  _DAT_004268c8 = RegisterWindowMessageA(s_LEO_D_GET_STATE_0041e898);
  return;
}


// ---- FUN_00402b95 @ 00402b95

void FUN_00402b95(void)

{
  FUN_00402b9f();
  return;
}


// ---- FUN_00402b9f @ 00402b9f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b9f(void)

{
  _DAT_004268c4 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_0041e8a8);
  return;
}


// ---- FUN_00402bb4 @ 00402bb4

void FUN_00402bb4(void)

{
  FUN_00402bbe();
  return;
}


// ---- FUN_00402bbe @ 00402bbe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402bbe(void)

{
  _DAT_004268c0 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_0041e8c0);
  return;
}


// ---- FUN_00402bd3 @ 00402bd3

void FUN_00402bd3(void)

{
  FUN_00402bdd();
  return;
}


// ---- FUN_00402bdd @ 00402bdd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402bdd(void)

{
  _DAT_004268bc = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_0041e8d0);
  return;
}


// ---- FUN_00402bf2 @ 00402bf2

void FUN_00402bf2(void)

{
  FUN_00402bfc();
  return;
}


// ---- FUN_00402bfc @ 00402bfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402bfc(void)

{
  _DAT_004268b8 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_0041e8e4);
  return;
}


// ---- FUN_00402c11 @ 00402c11

void FUN_00402c11(void)

{
  FUN_00402c1b();
  return;
}


// ---- FUN_00402c1b @ 00402c1b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402c1b(void)

{
  _DAT_004268b4 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_0041e900);
  return;
}


// ---- FUN_00402c30 @ 00402c30

void FUN_00402c30(void)

{
  FUN_00402c3a();
  return;
}


// ---- FUN_00402c3a @ 00402c3a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402c3a(void)

{
  _DAT_004268b0 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_0041e91c);
  return;
}


// ---- FUN_00402c4f @ 00402c4f

void FUN_00402c4f(void)

{
  FUN_00402c59();
  return;
}


// ---- FUN_00402c59 @ 00402c59

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402c59(void)

{
  _DAT_004268ac = RegisterWindowMessageA(s_PM_SERVER_READY_0041e938);
  return;
}


// ---- FUN_00402c6e @ 00402c6e

void FUN_00402c6e(void)

{
  FUN_00402c78();
  return;
}


// ---- FUN_00402c78 @ 00402c78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402c78(void)

{
  _DAT_004268a8 = RegisterWindowMessageA(s_PM_SERVER_LOADING_0041e948);
  return;
}


// ---- FUN_00402c8d @ 00402c8d

void FUN_00402c8d(void)

{
  FUN_00402c97();
  return;
}


// ---- FUN_00402c97 @ 00402c97

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402c97(void)

{
  _DAT_004268a4 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_0041e95c);
  return;
}


// ---- FUN_00402cac @ 00402cac

void FUN_00402cac(void)

{
  FUN_00402cb6();
  return;
}


// ---- FUN_00402cb6 @ 00402cb6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402cb6(void)

{
  _DAT_004268a0 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_0041e970);
  return;
}


// ---- FUN_00402ccb @ 00402ccb

void FUN_00402ccb(void)

{
  FUN_00402cd5();
  return;
}


// ---- FUN_00402cd5 @ 00402cd5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402cd5(void)

{
  _DAT_0042689c = RegisterWindowMessageA(s_PM_SEM_CLOSE_0041e984);
  return;
}


// ---- FUN_00402cea @ 00402cea

void FUN_00402cea(void)

{
  FUN_00402cf4();
  return;
}


// ---- FUN_00402cf4 @ 00402cf4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402cf4(void)

{
  _DAT_00426898 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_0041e994);
  return;
}


// ---- FUN_00402d09 @ 00402d09

void FUN_00402d09(void)

{
  FUN_00402d13();
  return;
}


// ---- FUN_00402d13 @ 00402d13

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d13(void)

{
  _DAT_00426894 = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_0041e9b0);
  return;
}


// ---- FUN_00402d28 @ 00402d28

void FUN_00402d28(void)

{
  FUN_00402d32();
  return;
}


// ---- FUN_00402d32 @ 00402d32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d32(void)

{
  _DAT_00426890 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_0041e9c4);
  return;
}


// ---- FUN_00402d47 @ 00402d47

void FUN_00402d47(void)

{
  FUN_00402d51();
  return;
}


// ---- FUN_00402d51 @ 00402d51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d51(void)

{
  _DAT_0042688c = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_0041e9dc);
  return;
}


// ---- FUN_00402d66 @ 00402d66

void FUN_00402d66(void)

{
  FUN_00402d70();
  return;
}


// ---- FUN_00402d70 @ 00402d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d70(void)

{
  _DAT_00426888 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_0041e9f0);
  return;
}


// ---- FUN_00402d85 @ 00402d85

void FUN_00402d85(void)

{
  FUN_00402d8f();
  return;
}


// ---- FUN_00402d8f @ 00402d8f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d8f(void)

{
  _DAT_00426884 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_0041ea08);
  return;
}


// ---- FUN_00402da4 @ 00402da4

void FUN_00402da4(void)

{
  FUN_00402dae();
  return;
}


// ---- FUN_00402dae @ 00402dae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402dae(void)

{
  _DAT_00426880 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_0041ea24);
  return;
}


// ---- FUN_00402dc3 @ 00402dc3

void FUN_00402dc3(void)

{
  FUN_00402dcd();
  return;
}


// ---- FUN_00402dcd @ 00402dcd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402dcd(void)

{
  _DAT_0042687c = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_0041ea40);
  return;
}


// ---- FUN_00402de2 @ 00402de2

void FUN_00402de2(void)

{
  FUN_00402dec();
  return;
}


// ---- FUN_00402dec @ 00402dec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402dec(void)

{
  _DAT_00426878 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_0041ea5c);
  return;
}


// ---- FUN_00402e01 @ 00402e01

void FUN_00402e01(void)

{
  FUN_00402e0b();
  return;
}


// ---- FUN_00402e0b @ 00402e0b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e0b(void)

{
  _DAT_00426874 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_0041ea78);
  return;
}


// ---- FUN_00402e20 @ 00402e20

void FUN_00402e20(void)

{
  FUN_00402e2a();
  return;
}


// ---- FUN_00402e2a @ 00402e2a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e2a(void)

{
  _DAT_00426870 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_0041ea8c);
  return;
}


// ---- FUN_00402e3f @ 00402e3f

void FUN_00402e3f(void)

{
  FUN_00402e49();
  return;
}


// ---- FUN_00402e49 @ 00402e49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e49(void)

{
  _DAT_0042686c = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_0041eaa4);
  return;
}


// ---- FUN_00402e5e @ 00402e5e

void FUN_00402e5e(void)

{
  FUN_00402e68();
  return;
}


// ---- FUN_00402e68 @ 00402e68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e68(void)

{
  _DAT_00426868 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_0041eac0);
  return;
}


// ---- FUN_00402e7d @ 00402e7d

void FUN_00402e7d(void)

{
  FUN_00402e87();
  return;
}


// ---- FUN_00402e87 @ 00402e87

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e87(void)

{
  _DAT_00426864 = RegisterWindowMessageA(s_PM_IMEX_DONE_0041ead4);
  return;
}


// ---- FUN_00402e9c @ 00402e9c

void FUN_00402e9c(void)

{
  FUN_00402ea6();
  return;
}


// ---- FUN_00402ea6 @ 00402ea6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ea6(void)

{
  _DAT_00426860 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_0041eae4);
  return;
}


// ---- FUN_00402ebb @ 00402ebb

void FUN_00402ebb(void)

{
  FUN_00402ec5();
  return;
}


// ---- FUN_00402ec5 @ 00402ec5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ec5(void)

{
  _DAT_0042685c = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_0041eaf8);
  return;
}


// ---- FUN_00402eda @ 00402eda

void FUN_00402eda(void)

{
  FUN_00402ee4();
  return;
}


// ---- FUN_00402ee4 @ 00402ee4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ee4(void)

{
  _DAT_00426858 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_0041eb0c);
  return;
}


// ---- FUN_00402ef9 @ 00402ef9

void FUN_00402ef9(void)

{
  FUN_00402f03();
  return;
}


// ---- FUN_00402f03 @ 00402f03

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402f03(void)

{
  _DAT_00426854 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_0041eb20);
  return;
}


// ---- FUN_00402f18 @ 00402f18

void FUN_00402f18(void)

{
  FUN_00402f22();
  return;
}


// ---- FUN_00402f22 @ 00402f22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402f22(void)

{
  _DAT_00426850 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_0041eb34);
  return;
}


// ---- FUN_00402f37 @ 00402f37

void FUN_00402f37(void)

{
  FUN_00402f41();
  return;
}


// ---- FUN_00402f41 @ 00402f41

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402f41(void)

{
  _DAT_0042684c = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_0041eb4c);
  return;
}


// ---- FUN_00402f56 @ 00402f56

void FUN_00402f56(void)

{
  FUN_00402f60();
  return;
}


// ---- FUN_00402f60 @ 00402f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402f60(void)

{
  _DAT_00426848 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_0041eb60);
  return;
}


// ---- FUN_00402f75 @ 00402f75

void FUN_00402f75(void)

{
  FUN_00402f7f();
  return;
}


// ---- FUN_00402f7f @ 00402f7f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402f7f(void)

{
  _DAT_00426844 = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_0041eb74);
  return;
}


// ---- FUN_00402f94 @ 00402f94

void FUN_00402f94(void)

{
  FUN_00402f9e();
  return;
}


// ---- FUN_00402f9e @ 00402f9e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402f9e(void)

{
  _DAT_00426840 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_0041eb88);
  return;
}


// ---- FUN_00402fb3 @ 00402fb3

void FUN_00402fb3(void)

{
  FUN_00402fbd();
  return;
}


// ---- FUN_00402fbd @ 00402fbd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402fbd(void)

{
  _DAT_0042683c = RegisterWindowMessageA(s_PM_GET_DLG_NAME_0041eb98);
  return;
}


// ---- FUN_00402fd2 @ 00402fd2

void FUN_00402fd2(void)

{
  FUN_00402fdc();
  return;
}


// ---- FUN_00402fdc @ 00402fdc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402fdc(void)

{
  _DAT_00426838 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_0041eba8);
  return;
}


// ---- FUN_00402ff1 @ 00402ff1

void FUN_00402ff1(void)

{
  FUN_00402ffb();
  return;
}


// ---- FUN_00402ffb @ 00402ffb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ffb(void)

{
  _DAT_00426834 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_0041ebc0);
  return;
}


// ---- FUN_00403010 @ 00403010

void FUN_00403010(void)

{
  FUN_0040301a();
  return;
}


// ---- FUN_0040301a @ 0040301a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040301a(void)

{
  _DAT_00426830 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_0041ebd8);
  return;
}


// ---- FUN_0040302f @ 0040302f

void FUN_0040302f(void)

{
  FUN_00403039();
  return;
}


// ---- FUN_00403039 @ 00403039

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403039(void)

{
  _DAT_0042682c = RegisterWindowMessageA(s_PM_STEP_MACRO_0041ebf4);
  return;
}


// ---- FUN_0040304e @ 0040304e

void FUN_0040304e(void)

{
  FUN_00403058();
  return;
}


// ---- FUN_00403058 @ 00403058

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403058(void)

{
  _DAT_00426828 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_0041ec04);
  return;
}


// ---- FUN_0040306d @ 0040306d

void FUN_0040306d(void)

{
  FUN_00403077();
  return;
}


// ---- FUN_00403077 @ 00403077

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403077(void)

{
  _DAT_00426824 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_0041ec18);
  return;
}


// ---- FUN_0040308c @ 0040308c

void FUN_0040308c(void)

{
  FUN_00403096();
  return;
}


// ---- FUN_00403096 @ 00403096

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403096(void)

{
  _DAT_00426820 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_0041ec34);
  return;
}


// ---- FUN_004030ab @ 004030ab

void FUN_004030ab(void)

{
  FUN_004030b5();
  return;
}


// ---- FUN_004030b5 @ 004030b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004030b5(void)

{
  _DAT_0042681c = RegisterWindowMessageA(s_PM_HALT_MACRO_0041ec4c);
  return;
}


// ---- FUN_004030ca @ 004030ca

void FUN_004030ca(void)

{
  FUN_004030d4();
  return;
}


// ---- FUN_004030d4 @ 004030d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004030d4(void)

{
  _DAT_00426818 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_0041ec5c);
  return;
}


// ---- FUN_004030e9 @ 004030e9

void FUN_004030e9(void)

{
  FUN_004030f3();
  return;
}


// ---- FUN_004030f3 @ 004030f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004030f3(void)

{
  _DAT_00426814 = RegisterWindowMessageA(s_PM_MACRO_STATUS_0041ec6c);
  return;
}


// ---- FUN_00403108 @ 00403108

void FUN_00403108(void)

{
  FUN_00403112();
  return;
}


// ---- FUN_00403112 @ 00403112

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403112(void)

{
  _DAT_00426810 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_0041ec7c);
  return;
}


// ---- FUN_00403127 @ 00403127

void FUN_00403127(void)

{
  FUN_00403131();
  return;
}


// ---- FUN_00403131 @ 00403131

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403131(void)

{
  _DAT_0042680c = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_0041ec8c);
  return;
}


// ---- FUN_00403146 @ 00403146

void FUN_00403146(void)

{
  FUN_00403150();
  return;
}


// ---- FUN_00403150 @ 00403150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403150(void)

{
  _DAT_00426808 = RegisterWindowMessageA(s_PM_SAVE_STATE_0041eca8);
  return;
}


// ---- FUN_00403165 @ 00403165

void FUN_00403165(void)

{
  FUN_0040316f();
  return;
}


// ---- FUN_0040316f @ 0040316f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040316f(void)

{
  _DAT_00426804 = RegisterWindowMessageA(s_PM_LOAD_STATE_0041ecb8);
  return;
}


// ---- FUN_00403184 @ 00403184

void FUN_00403184(void)

{
  FUN_0040318e();
  return;
}


// ---- FUN_0040318e @ 0040318e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040318e(void)

{
  _DAT_00426800 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_0041ecc8);
  return;
}


// ---- FUN_004031a3 @ 004031a3

void FUN_004031a3(void)

{
  FUN_004031ad();
  return;
}


// ---- FUN_004031ad @ 004031ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031ad(void)

{
  _DAT_004267fc = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_0041ece0);
  return;
}


// ---- FUN_004031c2 @ 004031c2

void FUN_004031c2(void)

{
  FUN_004031cc();
  return;
}


// ---- FUN_004031cc @ 004031cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031cc(void)

{
  _DAT_004267f8 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_0041ed00);
  return;
}


// ---- FUN_004031e1 @ 004031e1

void FUN_004031e1(void)

{
  FUN_004031eb();
  return;
}


// ---- FUN_004031eb @ 004031eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031eb(void)

{
  _DAT_004267f4 = RegisterWindowMessageA(s_PM_REVIEW_STATE_0041ed14);
  return;
}


// ---- FUN_00403200 @ 00403200

void FUN_00403200(void)

{
  FUN_0040320a();
  return;
}


// ---- FUN_0040320a @ 0040320a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040320a(void)

{
  _DAT_004267f0 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_0041ed24);
  return;
}


// ---- FUN_0040321f @ 0040321f

void FUN_0040321f(void)

{
  FUN_00403229();
  return;
}


// ---- FUN_00403229 @ 00403229

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403229(void)

{
  _DAT_004267ec = RegisterWindowMessageA(s_PM_QUERY_SERVER_0041ed3c);
  return;
}


// ---- FUN_0040323e @ 0040323e

void FUN_0040323e(void)

{
  FUN_00403248();
  return;
}


// ---- FUN_00403248 @ 00403248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403248(void)

{
  _DAT_004267e8 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_0041ed4c);
  return;
}


// ---- FUN_0040325d @ 0040325d

void FUN_0040325d(void)

{
  FUN_00403267();
  return;
}


// ---- FUN_00403267 @ 00403267

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403267(void)

{
  _DAT_004267e4 = RegisterWindowMessageA(s_PM_REGISTER_0041ed64);
  return;
}


// ---- FUN_0040327c @ 0040327c

void FUN_0040327c(void)

{
  FUN_00403286();
  return;
}


// ---- FUN_00403286 @ 00403286

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403286(void)

{
  _DAT_004267e0 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_0041ed70);
  return;
}


// ---- FUN_0040329b @ 0040329b

void FUN_0040329b(void)

{
  FUN_004032a5();
  return;
}


// ---- FUN_004032a5 @ 004032a5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004032a5(void)

{
  _DAT_004267dc = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_0041ed88);
  return;
}


// ---- FUN_004032ba @ 004032ba

void FUN_004032ba(void)

{
  FUN_004032c4();
  return;
}


// ---- FUN_004032c4 @ 004032c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004032c4(void)

{
  _DAT_004267d8 = RegisterWindowMessageA(s_PM_SEM_REGISTER_0041eda0);
  return;
}


// ---- FUN_004032d9 @ 004032d9

void FUN_004032d9(void)

{
  FUN_004032e3();
  return;
}


// ---- FUN_004032e3 @ 004032e3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004032e3(void)

{
  _DAT_004267d4 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_0041edb0);
  return;
}


// ---- FUN_004032f8 @ 004032f8

void FUN_004032f8(void)

{
  FUN_00403302();
  return;
}


// ---- FUN_00403302 @ 00403302

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403302(void)

{
  _DAT_004267d0 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_0041edc8);
  return;
}


// ---- FUN_00403317 @ 00403317

void FUN_00403317(void)

{
  FUN_00403321();
  return;
}


// ---- FUN_00403321 @ 00403321

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403321(void)

{
  _DAT_004267cc = RegisterWindowMessageA(s_PM_LOG_OFF_0041eddc);
  return;
}


// ---- FUN_00403336 @ 00403336

void FUN_00403336(void)

{
  FUN_00403340();
  return;
}


// ---- FUN_00403340 @ 00403340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403340(void)

{
  _DAT_004267c8 = RegisterWindowMessageA(s_PM_LOG_ON_0041ede8);
  return;
}


// ---- FUN_00403355 @ 00403355

void FUN_00403355(void)

{
  FUN_0040335f();
  return;
}


// ---- FUN_0040335f @ 0040335f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040335f(void)

{
  _DAT_004267c4 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_0041edf4);
  return;
}


// ---- FUN_00403374 @ 00403374

void FUN_00403374(void)

{
  FUN_0040337e();
  return;
}


// ---- FUN_0040337e @ 0040337e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040337e(void)

{
  _DAT_004267c0 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_0041ee0c);
  return;
}


// ---- FUN_00403393 @ 00403393

void FUN_00403393(void)

{
  FUN_0040339d();
  return;
}


// ---- FUN_0040339d @ 0040339d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040339d(void)

{
  _DAT_004267bc = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_0041ee20);
  return;
}


// ---- FUN_004033b2 @ 004033b2

void FUN_004033b2(void)

{
  FUN_004033bc();
  return;
}


// ---- FUN_004033bc @ 004033bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004033bc(void)

{
  _DAT_004267b8 = RegisterWindowMessageA(s_PM_GET_STRING_0041ee38);
  return;
}


// ---- FUN_004033d1 @ 004033d1

void FUN_004033d1(void)

{
  FUN_004033db();
  return;
}


// ---- FUN_004033db @ 004033db

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004033db(void)

{
  _DAT_004267b4 = RegisterWindowMessageA(s_PM_GET_NAME_0041ee48);
  return;
}


// ---- FUN_004033f0 @ 004033f0

void FUN_004033f0(void)

{
  FUN_004033fa();
  return;
}


// ---- FUN_004033fa @ 004033fa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004033fa(void)

{
  _DAT_004267b0 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_0041ee54);
  return;
}


// ---- FUN_0040340f @ 0040340f

void FUN_0040340f(void)

{
  FUN_00403419();
  return;
}


// ---- FUN_00403419 @ 00403419

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403419(void)

{
  _DAT_004267ac = RegisterWindowMessageA(s_PM_GET_VALUE_0041ee64);
  return;
}


// ---- FUN_0040342e @ 0040342e

void FUN_0040342e(void)

{
  FUN_00403438();
  return;
}


// ---- FUN_00403438 @ 00403438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403438(void)

{
  _DAT_004267a8 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_0041ee74);
  return;
}


// ---- FUN_0040344d @ 0040344d

void FUN_0040344d(void)

{
  FUN_00403457();
  return;
}


// ---- FUN_00403457 @ 00403457

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403457(void)

{
  _DAT_004267a4 = RegisterWindowMessageA(s_PM_STAGE_GOTO_0041ee90);
  return;
}


// ---- FUN_0040346c @ 0040346c

void FUN_0040346c(void)

{
  FUN_00403476();
  return;
}


// ---- FUN_00403476 @ 00403476

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403476(void)

{
  _DAT_004267a0 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_0041eea0);
  return;
}


// ---- FUN_0040348b @ 0040348b

void FUN_0040348b(void)

{
  FUN_00403495();
  return;
}


// ---- FUN_00403495 @ 00403495

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403495(void)

{
  _DAT_0042679c = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_0041eeb8);
  return;
}


// ---- FUN_004034aa @ 004034aa

void FUN_004034aa(void)

{
  FUN_004034b4();
  return;
}


// ---- FUN_004034b4 @ 004034b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034b4(void)

{
  _DAT_00426798 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_0041eed0);
  return;
}


// ---- FUN_004034c9 @ 004034c9

void FUN_004034c9(void)

{
  FUN_004034d3();
  return;
}


// ---- FUN_004034d3 @ 004034d3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034d3(void)

{
  _DAT_00426794 = RegisterWindowMessageA(s_PM_GET_ERROR_0041eef4);
  return;
}


// ---- FUN_004034e8 @ 004034e8

void FUN_004034e8(void)

{
  FUN_004034f2();
  return;
}


// ---- FUN_004034f2 @ 004034f2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034f2(void)

{
  _DAT_00426790 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_0041ef04);
  return;
}


// ---- FUN_00403507 @ 00403507

void FUN_00403507(void)

{
  FUN_00403511();
  return;
}


// ---- FUN_00403511 @ 00403511

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403511(void)

{
  _DAT_0042678c = RegisterWindowMessageA(s_PM_END_MAG_TABLE_0041ef18);
  return;
}


// ---- FUN_00403526 @ 00403526

void FUN_00403526(void)

{
  FUN_00403530();
  return;
}


// ---- FUN_00403530 @ 00403530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403530(void)

{
  _DAT_00426788 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_0041ef2c);
  return;
}


// ---- FUN_00403545 @ 00403545

void FUN_00403545(void)

{
  FUN_0040354f();
  return;
}


// ---- FUN_0040354f @ 0040354f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040354f(void)

{
  _DAT_00426784 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_0041ef4c);
  return;
}


// ---- FUN_00403564 @ 00403564

void FUN_00403564(void)

{
  FUN_0040356e();
  return;
}


// ---- FUN_0040356e @ 0040356e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040356e(void)

{
  _DAT_00426780 = RegisterWindowMessageA(s_PM_GET_HANDLES_0041ef60);
  return;
}


// ---- FUN_00403583 @ 00403583

void FUN_00403583(void)

{
  FUN_0040358d();
  return;
}


// ---- FUN_0040358d @ 0040358d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040358d(void)

{
  _DAT_0042677c = RegisterWindowMessageA(s_PM_GET_STATES_0041ef70);
  return;
}


// ---- FUN_004035a2 @ 004035a2

void FUN_004035a2(void)

{
  FUN_004035ac();
  return;
}


// ---- FUN_004035ac @ 004035ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004035ac(void)

{
  _DAT_00426778 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_0041ef80);
  return;
}


// ---- FUN_004035c1 @ 004035c1

void FUN_004035c1(void)

{
  FUN_004035cb();
  return;
}


// ---- FUN_004035cb @ 004035cb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004035cb(void)

{
  _DAT_00426774 = RegisterWindowMessageA(s_PM_GET_LICENCE_0041ef94);
  return;
}


// ---- FUN_004035e0 @ 004035e0

void FUN_004035e0(void)

{
  FUN_004035ea();
  return;
}


// ---- FUN_004035ea @ 004035ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004035ea(void)

{
  _DAT_00426770 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_0041efa4);
  return;
}


// ---- FUN_004035ff @ 004035ff

void FUN_004035ff(void)

{
  FUN_00403609();
  return;
}


// ---- FUN_00403609 @ 00403609

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403609(void)

{
  _DAT_0042676c = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_0041efb8);
  return;
}


// ---- FUN_0040361e @ 0040361e

void FUN_0040361e(void)

{
  FUN_00403628();
  return;
}


// ---- FUN_00403628 @ 00403628

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403628(void)

{
  _DAT_00426768 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_0041efcc);
  return;
}


// ---- FUN_0040363d @ 0040363d

void FUN_0040363d(void)

{
  FUN_00403647();
  return;
}


// ---- FUN_00403647 @ 00403647

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403647(void)

{
  _DAT_00426764 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_0041efe0);
  return;
}


// ---- FUN_0040365c @ 0040365c

void FUN_0040365c(void)

{
  FUN_00403666();
  return;
}


// ---- FUN_00403666 @ 00403666

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403666(void)

{
  _DAT_00426760 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_0041eff4);
  return;
}


// ---- FUN_0040367b @ 0040367b

void FUN_0040367b(void)

{
  FUN_00403685();
  return;
}


// ---- FUN_00403685 @ 00403685

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403685(void)

{
  _DAT_0042675c = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_0041f008);
  return;
}


// ---- FUN_0040369a @ 0040369a

void FUN_0040369a(void)

{
  FUN_004036a4();
  return;
}


// ---- FUN_004036a4 @ 004036a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004036a4(void)

{
  _DAT_00426758 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_0041f020);
  return;
}


// ---- FUN_004036b9 @ 004036b9

void FUN_004036b9(void)

{
  FUN_004036c3();
  return;
}


// ---- FUN_004036c3 @ 004036c3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004036c3(void)

{
  _DAT_00426754 = RegisterWindowMessageA(s_PM_SET_VALUE_0041f034);
  return;
}


// ---- FUN_004036d8 @ 004036d8

void FUN_004036d8(void)

{
  FUN_004036e2();
  return;
}


// ---- FUN_004036e2 @ 004036e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004036e2(void)

{
  _DAT_00426750 = RegisterWindowMessageA(s_PM_SET_COARSE_0041f044);
  return;
}


// ---- FUN_004036f7 @ 004036f7

void FUN_004036f7(void)

{
  FUN_00403701();
  return;
}


// ---- FUN_00403701 @ 00403701

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403701(void)

{
  _DAT_0042674c = RegisterWindowMessageA(s_PM_GET_COARSE_0041f054);
  return;
}


// ---- FUN_00403716 @ 00403716

void FUN_00403716(void)

{
  FUN_00403720();
  return;
}


// ---- FUN_00403720 @ 00403720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403720(void)

{
  _DAT_00426748 = RegisterWindowMessageA(s_PM_SET_NOTIFY_0041f064);
  return;
}


// ---- FUN_00403735 @ 00403735

void FUN_00403735(void)

{
  FUN_0040373f();
  return;
}


// ---- FUN_0040373f @ 0040373f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040373f(void)

{
  _DAT_00426744 = RegisterWindowMessageA(s_PM_SET_USER_MODE_0041f074);
  return;
}


// ---- FUN_00403754 @ 00403754

void FUN_00403754(void)

{
  FUN_0040375e();
  return;
}


// ---- FUN_0040375e @ 0040375e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040375e(void)

{
  _DAT_00426740 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_0041f088);
  return;
}


// ---- FUN_00403773 @ 00403773

void FUN_00403773(void)

{
  FUN_0040377d();
  return;
}


// ---- FUN_0040377d @ 0040377d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040377d(void)

{
  _DAT_0042673c = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_0041f0a4);
  return;
}


// ---- FUN_00403792 @ 00403792

void FUN_00403792(void)

{
  FUN_0040379c();
  return;
}


// ---- FUN_0040379c @ 0040379c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040379c(void)

{
  _DAT_00426738 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_0041f0c0);
  return;
}


// ---- FUN_004037b1 @ 004037b1

void FUN_004037b1(void)

{
  FUN_004037bb();
  return;
}


// ---- FUN_004037bb @ 004037bb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037bb(void)

{
  _DAT_00426734 = RegisterWindowMessageA(s_PM_IS_ENABLED_0041f0d8);
  return;
}


// ---- FUN_004037d0 @ 004037d0

void FUN_004037d0(void)

{
  FUN_004037da();
  return;
}


// ---- FUN_004037da @ 004037da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037da(void)

{
  _DAT_00426730 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_0041f0e8);
  return;
}


// ---- FUN_004037ef @ 004037ef

void FUN_004037ef(void)

{
  FUN_004037f9();
  return;
}


// ---- FUN_004037f9 @ 004037f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037f9(void)

{
  _DAT_0042672c = RegisterWindowMessageA(s_PM_IS_VECTOR_0041f0f8);
  return;
}


// ---- FUN_0040380e @ 0040380e

void FUN_0040380e(void)

{
  FUN_00403818();
  return;
}


// ---- FUN_00403818 @ 00403818

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403818(void)

{
  _DAT_00426728 = RegisterWindowMessageA(s_PM_IS_VISIBLE_0041f108);
  return;
}


// ---- FUN_0040382d @ 0040382d

void FUN_0040382d(void)

{
  FUN_00403837();
  return;
}


// ---- FUN_00403837 @ 00403837

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403837(void)

{
  _DAT_00426724 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_0041f118);
  return;
}


// ---- FUN_0040384c @ 0040384c

void FUN_0040384c(void)

{
  FUN_00403856();
  return;
}


// ---- FUN_00403856 @ 00403856

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403856(void)

{
  _DAT_00426720 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_0041f128);
  return;
}


// ---- FUN_0040386b @ 0040386b

void FUN_0040386b(void)

{
  FUN_00403875();
  return;
}


// ---- FUN_00403875 @ 00403875

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403875(void)

{
  _DAT_0042671c = RegisterWindowMessageA(s_PM_IS_READ_WRITE_0041f13c);
  return;
}


// ---- FUN_0040388a @ 0040388a

void FUN_0040388a(void)

{
  FUN_00403894();
  return;
}


// ---- FUN_00403894 @ 00403894

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403894(void)

{
  _DAT_00426718 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_0041f150);
  return;
}


// ---- FUN_004038a9 @ 004038a9

void FUN_004038a9(void)

{
  FUN_004038b3();
  return;
}


// ---- FUN_004038b3 @ 004038b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004038b3(void)

{
  _DAT_00426714 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_0041f164);
  return;
}


// ---- FUN_004038c8 @ 004038c8

void FUN_004038c8(void)

{
  FUN_004038d2();
  return;
}


// ---- FUN_004038d2 @ 004038d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004038d2(void)

{
  _DAT_00426710 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_0041f17c);
  return;
}


// ---- FUN_004038e7 @ 004038e7

void FUN_004038e7(void)

{
  FUN_004038f1();
  return;
}


// ---- FUN_004038f1 @ 004038f1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004038f1(void)

{
  _DAT_0042670c = RegisterWindowMessageA(s_PM_SERVER_HELP_0041f194);
  return;
}


// ---- FUN_00403906 @ 00403906

void FUN_00403906(void)

{
  FUN_00403910();
  return;
}


// ---- FUN_00403910 @ 00403910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403910(void)

{
  _DAT_00426708 = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_0041f1a4);
  return;
}


// ---- FUN_00403925 @ 00403925

void FUN_00403925(void)

{
  FUN_0040392f();
  return;
}


// ---- FUN_0040392f @ 0040392f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040392f(void)

{
  _DAT_00426704 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_0041f1c0);
  return;
}


// ---- FUN_00403944 @ 00403944

void FUN_00403944(void)

{
  FUN_0040394e();
  return;
}


// ---- FUN_0040394e @ 0040394e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040394e(void)

{
  _DAT_00426700 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_0041f1d4);
  return;
}


// ---- FUN_00403963 @ 00403963

void FUN_00403963(void)

{
  FUN_0040396d();
  return;
}


// ---- FUN_0040396d @ 0040396d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040396d(void)

{
  _DAT_004266fc = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_0041f1f0);
  return;
}


// ---- FUN_00403982 @ 00403982

void FUN_00403982(void)

{
  FUN_0040398c();
  return;
}


// ---- FUN_0040398c @ 0040398c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040398c(void)

{
  _DAT_004266f8 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_0041f208);
  return;
}


// ---- FUN_004039a1 @ 004039a1

void FUN_004039a1(void)

{
  FUN_004039ab();
  return;
}


// ---- FUN_004039ab @ 004039ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004039ab(void)

{
  _DAT_004266f4 = RegisterWindowMessageA(s_PM_STEP_VALUE_0041f21c);
  return;
}


// ---- FUN_004039c0 @ 004039c0

void FUN_004039c0(void)

{
  FUN_004039ca();
  return;
}


// ---- FUN_004039ca @ 004039ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004039ca(void)

{
  _DAT_004266f0 = RegisterWindowMessageA(s_PM_HELP_MODE_0041f22c);
  return;
}


// ---- FUN_004039df @ 004039df

void FUN_004039df(void)

{
  FUN_004039e9();
  return;
}


// ---- FUN_004039e9 @ 004039e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004039e9(void)

{
  _DAT_004266ec = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_0041f23c);
  return;
}


// ---- FUN_004039fe @ 004039fe

void FUN_004039fe(void)

{
  FUN_00403a08();
  return;
}


// ---- FUN_00403a08 @ 00403a08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a08(void)

{
  _DAT_004266e8 = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_0041f250);
  return;
}


// ---- FUN_00403a1d @ 00403a1d

void FUN_00403a1d(void)

{
  FUN_00403a27();
  return;
}


// ---- FUN_00403a27 @ 00403a27

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a27(void)

{
  _DAT_004266e4 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_0041f264);
  return;
}


// ---- FUN_00403a3c @ 00403a3c

void FUN_00403a3c(void)

{
  FUN_00403a46();
  return;
}


// ---- FUN_00403a46 @ 00403a46

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a46(void)

{
  _DAT_004266e0 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_0041f27c);
  return;
}


// ---- FUN_00403a5b @ 00403a5b

void FUN_00403a5b(void)

{
  FUN_00403a65();
  return;
}


// ---- FUN_00403a65 @ 00403a65

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a65(void)

{
  _DAT_004266dc = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_0041f298);
  return;
}


// ---- FUN_00403a7a @ 00403a7a

void FUN_00403a7a(void)

{
  FUN_00403a84();
  return;
}


// ---- FUN_00403a84 @ 00403a84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a84(void)

{
  _DAT_004266d8 = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_0041f2ac);
  return;
}


// ---- FUN_00403a99 @ 00403a99

void FUN_00403a99(void)

{
  FUN_00403aa3();
  return;
}


// ---- FUN_00403aa3 @ 00403aa3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403aa3(void)

{
  _DAT_004266d4 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_0041f2c4);
  return;
}


// ---- FUN_00403ab8 @ 00403ab8

void FUN_00403ab8(void)

{
  FUN_00403ac2();
  return;
}


// ---- FUN_00403ac2 @ 00403ac2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ac2(void)

{
  _DAT_004266d0 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_0041f2dc);
  return;
}


// ---- FUN_00403ad7 @ 00403ad7

void FUN_00403ad7(void)

{
  FUN_00403ae1();
  return;
}


// ---- FUN_00403ae1 @ 00403ae1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ae1(void)

{
  _DAT_004266cc = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_0041f2f4);
  return;
}


// ---- FUN_00403af6 @ 00403af6

void FUN_00403af6(void)

{
  FUN_00403b00();
  return;
}


// ---- FUN_00403b00 @ 00403b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b00(void)

{
  _DAT_004266c8 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_0041f30c);
  return;
}


// ---- FUN_00403b15 @ 00403b15

void FUN_00403b15(void)

{
  FUN_00403b1f();
  return;
}


// ---- FUN_00403b1f @ 00403b1f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b1f(void)

{
  _DAT_004266c4 = RegisterWindowMessageA(s_PM_LUT_EDITOR_0041f328);
  return;
}


// ---- FUN_00403b34 @ 00403b34

void FUN_00403b34(void)

{
  FUN_00403b3e();
  return;
}


// ---- FUN_00403b3e @ 00403b3e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b3e(void)

{
  _DAT_004266c0 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_0041f338);
  return;
}


// ---- FUN_00403b53 @ 00403b53

void FUN_00403b53(void)

{
  FUN_00403b5d();
  return;
}


// ---- FUN_00403b5d @ 00403b5d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b5d(void)

{
  _DAT_004266bc = RegisterWindowMessageA(s_PM_SET_LUT_RGB_0041f34c);
  return;
}


// ---- FUN_00403b72 @ 00403b72

void FUN_00403b72(void)

{
  FUN_00403b7c();
  return;
}


// ---- FUN_00403b7c @ 00403b7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b7c(void)

{
  _DAT_004266b8 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_0041f35c);
  return;
}


// ---- FUN_00403b91 @ 00403b91

void FUN_00403b91(void)

{
  FUN_00403b9b();
  return;
}


// ---- FUN_00403b9b @ 00403b9b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b9b(void)

{
  _DAT_004266b4 = RegisterWindowMessageA(s_PM_SET_LUT_BC_0041f370);
  return;
}


// ---- FUN_00403bb0 @ 00403bb0

void FUN_00403bb0(void)

{
  FUN_00403bba();
  return;
}


// ---- FUN_00403bba @ 00403bba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403bba(void)

{
  _DAT_004266b0 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_0041f380);
  return;
}


// ---- FUN_00403bcf @ 00403bcf

void FUN_00403bcf(void)

{
  FUN_00403bd9();
  return;
}


// ---- FUN_00403bd9 @ 00403bd9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403bd9(void)

{
  _DAT_004266ac = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_0041f394);
  return;
}


// ---- FUN_00403bee @ 00403bee

void FUN_00403bee(void)

{
  FUN_00403bf8();
  return;
}


// ---- FUN_00403bf8 @ 00403bf8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403bf8(void)

{
  _DAT_004266a8 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_0041f3a8);
  return;
}


// ---- FUN_00403c0d @ 00403c0d

void FUN_00403c0d(void)

{
  FUN_00403c17();
  return;
}


// ---- FUN_00403c17 @ 00403c17

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c17(void)

{
  _DAT_004266a4 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_0041f3bc);
  return;
}


// ---- FUN_00403c2c @ 00403c2c

void FUN_00403c2c(void)

{
  FUN_00403c36();
  return;
}


// ---- FUN_00403c36 @ 00403c36

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c36(void)

{
  _DAT_004266a0 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_0041f3d0);
  return;
}


// ---- FUN_00403c4b @ 00403c4b

void FUN_00403c4b(void)

{
  FUN_00403c55();
  return;
}


// ---- FUN_00403c55 @ 00403c55

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c55(void)

{
  _DAT_0042669c = RegisterWindowMessageA(s_PM_RGB_READ_0041f3e4);
  return;
}


// ---- FUN_00403c6a @ 00403c6a

void FUN_00403c6a(void)

{
  FUN_00403c74();
  return;
}


// ---- FUN_00403c74 @ 00403c74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c74(void)

{
  _DAT_00426698 = RegisterWindowMessageA(s_PM_LUT_LOAD_0041f3f0);
  return;
}


// ---- FUN_00403c89 @ 00403c89

void FUN_00403c89(void)

{
  FUN_00403c93();
  return;
}


// ---- FUN_00403c93 @ 00403c93

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c93(void)

{
  _DAT_00426694 = RegisterWindowMessageA(s_PM_LUT_READ_0041f3fc);
  return;
}


// ---- FUN_00403ca8 @ 00403ca8

void FUN_00403ca8(void)

{
  FUN_00403cb2();
  return;
}


// ---- FUN_00403cb2 @ 00403cb2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403cb2(void)

{
  _DAT_00426690 = RegisterWindowMessageA(s_PM_READ_COLOR_0041f408);
  return;
}


// ---- FUN_00403cc7 @ 00403cc7

void FUN_00403cc7(void)

{
  FUN_00403cd1();
  return;
}


// ---- FUN_00403cd1 @ 00403cd1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403cd1(void)

{
  _DAT_0042668c = RegisterWindowMessageA(s_PM_LUT_FILL_0041f418);
  return;
}


// ---- FUN_00403ce6 @ 00403ce6

void FUN_00403ce6(void)

{
  FUN_00403cf0();
  return;
}


// ---- FUN_00403cf0 @ 00403cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403cf0(void)

{
  _DAT_00426688 = RegisterWindowMessageA(s_PM_LUT_QLIN_0041f424);
  return;
}


// ---- FUN_00403d05 @ 00403d05

void FUN_00403d05(void)

{
  FUN_00403d0f();
  return;
}


// ---- FUN_00403d0f @ 00403d0f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403d0f(void)

{
  _DAT_00426684 = RegisterWindowMessageA(s_PM_LUT_QINV_0041f430);
  return;
}


// ---- FUN_00403d24 @ 00403d24

void FUN_00403d24(void)

{
  FUN_00403d2e();
  return;
}


// ---- FUN_00403d2e @ 00403d2e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403d2e(void)

{
  _DAT_00426680 = RegisterWindowMessageA(s_PM_LUT_SAVE_0041f43c);
  return;
}


// ---- FUN_00403d43 @ 00403d43

void FUN_00403d43(void)

{
  FUN_00403d4d();
  return;
}


// ---- FUN_00403d4d @ 00403d4d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403d4d(void)

{
  _DAT_0042667c = RegisterWindowMessageA(s_PM_LUT_RESTORE_0041f448);
  return;
}


// ---- FUN_00403d62 @ 00403d62

void FUN_00403d62(void)

{
  FUN_00403d6c();
  return;
}


// ---- FUN_00403d6c @ 00403d6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403d6c(void)

{
  _DAT_00426678 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_0041f458);
  return;
}


// ---- FUN_00403d81 @ 00403d81

void FUN_00403d81(void)

{
  FUN_00403d8b();
  return;
}


// ---- FUN_00403d8b @ 00403d8b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403d8b(void)

{
  _DAT_00426674 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_0041f46c);
  return;
}


// ---- FUN_00403da0 @ 00403da0

void FUN_00403da0(void)

{
  FUN_00403daa();
  return;
}


// ---- FUN_00403daa @ 00403daa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403daa(void)

{
  _DAT_00426670 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_0041f480);
  return;
}


// ---- FUN_00403dbf @ 00403dbf

void FUN_00403dbf(void)

{
  FUN_00403dc9();
  return;
}


// ---- FUN_00403dc9 @ 00403dc9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403dc9(void)

{
  _DAT_0042666c = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_0041f494);
  return;
}


// ---- FUN_00403dde @ 00403dde

void FUN_00403dde(void)

{
  FUN_00403de8();
  return;
}


// ---- FUN_00403de8 @ 00403de8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403de8(void)

{
  _DAT_00426668 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_0041f4a8);
  return;
}


// ---- FUN_00403dfd @ 00403dfd

void FUN_00403dfd(void)

{
  FUN_00403e07();
  return;
}


// ---- FUN_00403e07 @ 00403e07

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e07(void)

{
  _DAT_00426664 = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_0041f4bc);
  return;
}


// ---- FUN_00403e1c @ 00403e1c

void FUN_00403e1c(void)

{
  FUN_00403e26();
  return;
}


// ---- FUN_00403e26 @ 00403e26

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e26(void)

{
  _DAT_00426660 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_0041f4d4);
  return;
}


// ---- FUN_00403e3b @ 00403e3b

void FUN_00403e3b(void)

{
  FUN_00403e45();
  return;
}


// ---- FUN_00403e45 @ 00403e45

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e45(void)

{
  _DAT_0042665c = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_0041f4e8);
  return;
}


// ---- FUN_00403e5a @ 00403e5a

void FUN_00403e5a(void)

{
  FUN_00403e64();
  return;
}


// ---- FUN_00403e64 @ 00403e64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e64(void)

{
  _DAT_00426658 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_0041f4fc);
  return;
}


// ---- FUN_00403e79 @ 00403e79

void FUN_00403e79(void)

{
  FUN_00403e83();
  return;
}


// ---- FUN_00403e83 @ 00403e83

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e83(void)

{
  _DAT_00426654 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_0041f510);
  return;
}


// ---- FUN_00403e98 @ 00403e98

void FUN_00403e98(void)

{
  FUN_00403ea2();
  return;
}


// ---- FUN_00403ea2 @ 00403ea2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ea2(void)

{
  _DAT_00426650 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_0041f524);
  return;
}


// ---- FUN_00403eb7 @ 00403eb7

void FUN_00403eb7(void)

{
  FUN_00403ec1();
  return;
}


// ---- FUN_00403ec1 @ 00403ec1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ec1(void)

{
  _DAT_0042664c = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_0041f53c);
  return;
}


// ---- FUN_00403ed6 @ 00403ed6

void FUN_00403ed6(void)

{
  FUN_00403ee0();
  return;
}


// ---- FUN_00403ee0 @ 00403ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ee0(void)

{
  _DAT_00426648 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_0041f554);
  return;
}


// ---- FUN_00403ef5 @ 00403ef5

void FUN_00403ef5(void)

{
  FUN_00403eff();
  return;
}


// ---- FUN_00403eff @ 00403eff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403eff(void)

{
  _DAT_00426644 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_0041f568);
  return;
}


// ---- FUN_00403f14 @ 00403f14

void FUN_00403f14(void)

{
  FUN_00403f1e();
  return;
}


// ---- FUN_00403f1e @ 00403f1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f1e(void)

{
  _DAT_00426640 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_0041f57c);
  return;
}


// ---- FUN_00403f33 @ 00403f33

void FUN_00403f33(void)

{
  FUN_00403f3d();
  return;
}


// ---- FUN_00403f3d @ 00403f3d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f3d(void)

{
  _DAT_0042663c = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_0041f590);
  return;
}


// ---- FUN_00403f52 @ 00403f52

void FUN_00403f52(void)

{
  FUN_00403f5c();
  return;
}


// ---- FUN_00403f5c @ 00403f5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f5c(void)

{
  _DAT_00426638 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_0041f5a4);
  return;
}


// ---- FUN_00403f71 @ 00403f71

void FUN_00403f71(void)

{
  FUN_00403f7b();
  return;
}


// ---- FUN_00403f7b @ 00403f7b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f7b(void)

{
  _DAT_00426634 = RegisterWindowMessageA(s_PM_SAVE_TIFF_0041f5b8);
  return;
}


// ---- FUN_00403f90 @ 00403f90

void FUN_00403f90(void)

{
  FUN_00403f9a();
  return;
}


// ---- FUN_00403f9a @ 00403f9a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f9a(void)

{
  _DAT_00426630 = RegisterWindowMessageA(s_PM_LOAD_TIFF_0041f5c8);
  return;
}


// ---- FUN_00403faf @ 00403faf

void FUN_00403faf(void)

{
  FUN_00403fb9();
  return;
}


// ---- FUN_00403fb9 @ 00403fb9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403fb9(void)

{
  _DAT_0042662c = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_0041f5d8);
  return;
}


// ---- FUN_00403fce @ 00403fce

void FUN_00403fce(void)

{
  FUN_00403fd8();
  return;
}


// ---- FUN_00403fd8 @ 00403fd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403fd8(void)

{
  _DAT_00426628 = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_0041f5e8);
  return;
}


// ---- FUN_00403fed @ 00403fed

void FUN_00403fed(void)

{
  FUN_00403ff7();
  return;
}


// ---- FUN_00403ff7 @ 00403ff7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ff7(void)

{
  _DAT_00426624 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_0041f5fc);
  return;
}


// ---- FUN_0040400c @ 0040400c

void FUN_0040400c(void)

{
  FUN_00404016();
  return;
}


// ---- FUN_00404016 @ 00404016

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404016(void)

{
  _DAT_00426620 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_0041f614);
  return;
}


// ---- FUN_0040402b @ 0040402b

void FUN_0040402b(void)

{
  FUN_00404035();
  return;
}


// ---- FUN_00404035 @ 00404035

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404035(void)

{
  _DAT_0042661c = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_0041f628);
  return;
}


// ---- FUN_0040404a @ 0040404a

void FUN_0040404a(void)

{
  FUN_00404054();
  return;
}


// ---- FUN_00404054 @ 00404054

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404054(void)

{
  _DAT_00426618 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_0041f63c);
  return;
}


// ---- FUN_00404069 @ 00404069

void FUN_00404069(void)

{
  FUN_00404073();
  return;
}


// ---- FUN_00404073 @ 00404073

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404073(void)

{
  _DAT_00426614 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_0041f654);
  return;
}


// ---- FUN_00404088 @ 00404088

void FUN_00404088(void)

{
  FUN_00404092();
  return;
}


// ---- FUN_00404092 @ 00404092

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404092(void)

{
  _DAT_00426610 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_0041f668);
  return;
}


// ---- FUN_004040a7 @ 004040a7

void FUN_004040a7(void)

{
  FUN_004040b1();
  return;
}


// ---- FUN_004040b1 @ 004040b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004040b1(void)

{
  _DAT_0042660c = RegisterWindowMessageA(s_PM_PRINT_IMAGE_0041f684);
  return;
}


// ---- FUN_004040c6 @ 004040c6

void FUN_004040c6(void)

{
  FUN_004040d0();
  return;
}


// ---- FUN_004040d0 @ 004040d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004040d0(void)

{
  _DAT_00426608 = RegisterWindowMessageA(s_PM_CLIP_COPY_0041f694);
  return;
}


// ---- FUN_004040e5 @ 004040e5

void FUN_004040e5(void)

{
  FUN_004040ef();
  return;
}


// ---- FUN_004040ef @ 004040ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004040ef(void)

{
  _DAT_00426604 = RegisterWindowMessageA(s_PM_CLIP_INFO_0041f6a4);
  return;
}


// ---- FUN_00404104 @ 00404104

void FUN_00404104(void)

{
  FUN_0040410e();
  return;
}


// ---- FUN_0040410e @ 0040410e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040410e(void)

{
  _DAT_00426600 = RegisterWindowMessageA(s_PM_CLIP_PASTE_0041f6b4);
  return;
}


// ---- FUN_00404123 @ 00404123

void FUN_00404123(void)

{
  FUN_0040412d();
  return;
}


// ---- FUN_0040412d @ 0040412d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040412d(void)

{
  _DAT_004265fc = RegisterWindowMessageA(s_PM_HRRU_PHOTO_0041f6c4);
  return;
}


// ---- FUN_00404142 @ 00404142

void FUN_00404142(void)

{
  FUN_0040414c();
  return;
}


// ---- FUN_0040414c @ 0040414c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040414c(void)

{
  _DAT_004265f8 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_0041f6d4);
  return;
}


// ---- FUN_00404161 @ 00404161

void FUN_00404161(void)

{
  FUN_0040416b();
  return;
}


// ---- FUN_0040416b @ 0040416b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040416b(void)

{
  _DAT_004265f4 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_0041f6e8);
  return;
}


// ---- FUN_00404180 @ 00404180

void FUN_00404180(void)

{
  FUN_0040418a();
  return;
}


// ---- FUN_0040418a @ 0040418a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040418a(void)

{
  _DAT_004265f0 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_0041f6fc);
  return;
}


// ---- FUN_0040419f @ 0040419f

void FUN_0040419f(void)

{
  FUN_004041a9();
  return;
}


// ---- FUN_004041a9 @ 004041a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004041a9(void)

{
  _DAT_004265ec = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_0041f710);
  return;
}


// ---- FUN_004041be @ 004041be

void FUN_004041be(void)

{
  FUN_004041c8();
  return;
}


// ---- FUN_004041c8 @ 004041c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004041c8(void)

{
  _DAT_004265e8 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_0041f720);
  return;
}


// ---- FUN_004041dd @ 004041dd

void FUN_004041dd(void)

{
  FUN_004041e7();
  return;
}


// ---- FUN_004041e7 @ 004041e7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004041e7(void)

{
  _DAT_004265e4 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_0041f738);
  return;
}


// ---- FUN_004041fc @ 004041fc

void FUN_004041fc(void)

{
  FUN_00404206();
  return;
}


// ---- FUN_00404206 @ 00404206

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404206(void)

{
  _DAT_004265e0 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_0041f750);
  return;
}


// ---- FUN_0040421b @ 0040421b

void FUN_0040421b(void)

{
  FUN_00404225();
  return;
}


// ---- FUN_00404225 @ 00404225

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404225(void)

{
  _DAT_004265dc = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_0041f76c);
  return;
}


// ---- FUN_0040423a @ 0040423a

void FUN_0040423a(void)

{
  FUN_00404244();
  return;
}


// ---- FUN_00404244 @ 00404244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404244(void)

{
  _DAT_004265d8 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_0041f788);
  return;
}


// ---- FUN_00404259 @ 00404259

void FUN_00404259(void)

{
  FUN_00404263();
  return;
}


// ---- FUN_00404263 @ 00404263

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404263(void)

{
  _DAT_004265d4 = RegisterWindowMessageA(s_PM_STAGE_LABEL_0041f7a0);
  return;
}


// ---- FUN_00404278 @ 00404278

void FUN_00404278(void)

{
  FUN_00404282();
  return;
}


// ---- FUN_00404282 @ 00404282

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404282(void)

{
  _DAT_004265d0 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_0041f7b0);
  return;
}


// ---- FUN_00404297 @ 00404297

void FUN_00404297(void)

{
  FUN_004042a1();
  return;
}


// ---- FUN_004042a1 @ 004042a1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004042a1(void)

{
  _DAT_004265cc = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_0041f7c4);
  return;
}


// ---- FUN_004042b6 @ 004042b6

void FUN_004042b6(void)

{
  FUN_004042c0();
  return;
}


// ---- FUN_004042c0 @ 004042c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004042c0(void)

{
  _DAT_004265c8 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_0041f7e0);
  return;
}


// ---- FUN_004042d5 @ 004042d5

void FUN_004042d5(void)

{
  FUN_004042df();
  return;
}


// ---- FUN_004042df @ 004042df

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004042df(void)

{
  _DAT_004265c4 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_0041f7fc);
  return;
}


// ---- FUN_004042f4 @ 004042f4

void FUN_004042f4(void)

{
  FUN_004042fe();
  return;
}


// ---- FUN_004042fe @ 004042fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004042fe(void)

{
  _DAT_004265c0 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_0041f814);
  return;
}


// ---- FUN_00404313 @ 00404313

void FUN_00404313(void)

{
  FUN_0040431d();
  return;
}


// ---- FUN_0040431d @ 0040431d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040431d(void)

{
  _DAT_004265bc = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_0041f82c);
  return;
}


// ---- FUN_00404332 @ 00404332

void FUN_00404332(void)

{
  FUN_0040433c();
  return;
}


// ---- FUN_0040433c @ 0040433c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040433c(void)

{
  _DAT_004265b8 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_0041f84c);
  return;
}


// ---- FUN_00404351 @ 00404351

void FUN_00404351(void)

{
  FUN_0040435b();
  return;
}


// ---- FUN_0040435b @ 0040435b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040435b(void)

{
  _DAT_004265b4 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_0041f868);
  return;
}


// ---- FUN_00404370 @ 00404370

void FUN_00404370(void)

{
  FUN_0040437a();
  return;
}


// ---- FUN_0040437a @ 0040437a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040437a(void)

{
  _DAT_004265b0 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_0041f884);
  return;
}


// ---- FUN_0040438f @ 0040438f

void FUN_0040438f(void)

{
  FUN_00404399();
  return;
}


// ---- FUN_00404399 @ 00404399

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404399(void)

{
  _DAT_004265ac = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_0041f8a0);
  return;
}


// ---- FUN_004043ae @ 004043ae

void FUN_004043ae(void)

{
  FUN_004043b8();
  return;
}


// ---- FUN_004043b8 @ 004043b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004043b8(void)

{
  _DAT_004265a8 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_0041f8b8);
  return;
}


// ---- FUN_004043cd @ 004043cd

void FUN_004043cd(void)

{
  FUN_004043d7();
  return;
}


// ---- FUN_004043d7 @ 004043d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004043d7(void)

{
  _DAT_004265a4 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_0041f8d0);
  return;
}


// ---- FUN_004043ec @ 004043ec

void FUN_004043ec(void)

{
  FUN_004043f6();
  return;
}


// ---- FUN_004043f6 @ 004043f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004043f6(void)

{
  _DAT_004265a0 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_0041f8ec);
  return;
}


// ---- FUN_0040440b @ 0040440b

void FUN_0040440b(void)

{
  FUN_00404415();
  return;
}


// ---- FUN_00404415 @ 00404415

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404415(void)

{
  _DAT_0042659c = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_0041f90c);
  return;
}


// ---- FUN_0040442a @ 0040442a

void FUN_0040442a(void)

{
  FUN_00404434();
  return;
}


// ---- FUN_00404434 @ 00404434

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404434(void)

{
  _DAT_00426598 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_0041f920);
  return;
}


// ---- FUN_00404449 @ 00404449

void FUN_00404449(void)

{
  FUN_00404453();
  return;
}


// ---- FUN_00404453 @ 00404453

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404453(void)

{
  _DAT_00426594 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_0041f938);
  return;
}


// ---- FUN_00404468 @ 00404468

void FUN_00404468(void)

{
  FUN_00404472();
  return;
}


// ---- FUN_00404472 @ 00404472

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404472(void)

{
  _DAT_00426590 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_0041f94c);
  return;
}


// ---- FUN_00404487 @ 00404487

void FUN_00404487(void)

{
  FUN_00404491();
  return;
}


// ---- FUN_00404491 @ 00404491

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404491(void)

{
  _DAT_0042658c = RegisterWindowMessageA(s_PM_NAVMGR_DONE_0041f968);
  return;
}


// ---- FUN_004044a6 @ 004044a6

void FUN_004044a6(void)

{
  FUN_004044b0();
  return;
}


// ---- FUN_004044b0 @ 004044b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004044b0(void)

{
  _DAT_00426588 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_0041f978);
  return;
}


// ---- FUN_004044c5 @ 004044c5

void FUN_004044c5(void)

{
  FUN_004044cf();
  return;
}


// ---- FUN_004044cf @ 004044cf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004044cf(void)

{
  _DAT_00426584 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_0041f98c);
  return;
}


// ---- FUN_004044e4 @ 004044e4

void FUN_004044e4(void)

{
  FUN_004044ee();
  return;
}


// ---- FUN_004044ee @ 004044ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004044ee(void)

{
  _DAT_00426580 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_0041f9a4);
  return;
}


// ---- FUN_00404503 @ 00404503

void FUN_00404503(void)

{
  FUN_0040450d();
  return;
}


// ---- FUN_0040450d @ 0040450d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040450d(void)

{
  _DAT_0042657c = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_0041f9b4);
  return;
}


// ---- FUN_00404522 @ 00404522

void FUN_00404522(void)

{
  FUN_0040452c();
  return;
}


// ---- FUN_0040452c @ 0040452c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040452c(void)

{
  _DAT_00426578 = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_0041f9c8);
  return;
}


// ---- FUN_00404541 @ 00404541

void FUN_00404541(void)

{
  FUN_0040454b();
  return;
}


// ---- FUN_0040454b @ 0040454b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040454b(void)

{
  _DAT_00426574 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_0041f9e4);
  return;
}


// ---- FUN_00404560 @ 00404560

void FUN_00404560(void)

{
  FUN_0040456a();
  return;
}


// ---- FUN_0040456a @ 0040456a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040456a(void)

{
  _DAT_00426570 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_0041fa00);
  return;
}


// ---- FUN_0040457f @ 0040457f

void FUN_0040457f(void)

{
  FUN_00404589();
  return;
}


// ---- FUN_00404589 @ 00404589

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404589(void)

{
  _DAT_0042656c = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_0041fa14);
  return;
}


// ---- FUN_0040459e @ 0040459e

void FUN_0040459e(void)

{
  FUN_004045a8();
  return;
}


// ---- FUN_004045a8 @ 004045a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004045a8(void)

{
  _DAT_00426568 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_0041fa34);
  return;
}


// ---- FUN_004045bd @ 004045bd

void FUN_004045bd(void)

{
  FUN_004045c7();
  return;
}


// ---- FUN_004045c7 @ 004045c7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004045c7(void)

{
  _DAT_00426564 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_0041fa58);
  return;
}


// ---- FUN_004045dc @ 004045dc

void FUN_004045dc(void)

{
  FUN_004045e6();
  return;
}


// ---- FUN_004045e6 @ 004045e6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004045e6(void)

{
  _DAT_00426560 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_0041fa78);
  return;
}


// ---- FUN_004045fb @ 004045fb

void FUN_004045fb(void)

{
  FUN_00404605();
  return;
}


// ---- FUN_00404605 @ 00404605

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404605(void)

{
  _DAT_0042655c = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_0041fa98);
  return;
}


// ---- FUN_0040461a @ 0040461a

void FUN_0040461a(void)

{
  FUN_00404624();
  return;
}


// ---- FUN_00404624 @ 00404624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404624(void)

{
  _DAT_00426558 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_0041fab8);
  return;
}


// ---- FUN_00404639 @ 00404639

void FUN_00404639(void)

{
  FUN_00404643();
  return;
}


// ---- FUN_00404643 @ 00404643

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404643(void)

{
  _DAT_00426554 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_0041fad8);
  return;
}


// ---- FUN_00404658 @ 00404658

void FUN_00404658(void)

{
  FUN_00404662();
  return;
}


// ---- FUN_00404662 @ 00404662

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404662(void)

{
  _DAT_00426550 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_0041faf8);
  return;
}


// ---- FUN_00404677 @ 00404677

void FUN_00404677(void)

{
  FUN_00404681();
  return;
}


// ---- FUN_00404681 @ 00404681

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404681(void)

{
  _DAT_0042654c = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_0041fb10);
  return;
}


// ---- FUN_00404696 @ 00404696

void FUN_00404696(void)

{
  FUN_004046a0();
  return;
}


// ---- FUN_004046a0 @ 004046a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004046a0(void)

{
  _DAT_00426548 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_0041fb2c);
  return;
}


// ---- FUN_004046b5 @ 004046b5

void FUN_004046b5(void)

{
  FUN_004046bf();
  return;
}


// ---- FUN_004046bf @ 004046bf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004046bf(void)

{
  _DAT_00426544 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_0041fb48);
  return;
}


// ---- FUN_004046d4 @ 004046d4

void FUN_004046d4(void)

{
  FUN_004046de();
  return;
}


// ---- FUN_004046de @ 004046de

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004046de(void)

{
  _DAT_00426540 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_0041fb5c);
  return;
}


// ---- FUN_004046f3 @ 004046f3

void FUN_004046f3(void)

{
  FUN_004046fd();
  return;
}


// ---- FUN_004046fd @ 004046fd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004046fd(void)

{
  _DAT_0042653c = RegisterWindowMessageA(s_PM_READ_USER_AREA_0041fb70);
  return;
}


// ---- FUN_00404712 @ 00404712

void FUN_00404712(void)

{
  FUN_0040471c();
  return;
}


// ---- FUN_0040471c @ 0040471c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040471c(void)

{
  _DAT_00426538 = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_0041fb84);
  return;
}


// ---- FUN_00404731 @ 00404731

void FUN_00404731(void)

{
  FUN_0040473b();
  return;
}


// ---- FUN_0040473b @ 0040473b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040473b(void)

{
  _DAT_00426534 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_0041fb98);
  return;
}


// ---- FUN_00404750 @ 00404750

void FUN_00404750(void)

{
  FUN_0040475a();
  return;
}


// ---- FUN_0040475a @ 0040475a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040475a(void)

{
  _DAT_00426530 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_0041fbac);
  return;
}


// ---- FUN_0040476f @ 0040476f

void FUN_0040476f(void)

{
  FUN_00404779();
  return;
}


// ---- FUN_00404779 @ 00404779

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404779(void)

{
  _DAT_0042652c = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_0041fbc0);
  return;
}


// ---- FUN_0040478e @ 0040478e

void FUN_0040478e(void)

{
  FUN_00404798();
  return;
}


// ---- FUN_00404798 @ 00404798

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404798(void)

{
  _DAT_00426528 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_0041fbd8);
  return;
}


// ---- FUN_004047ad @ 004047ad

void FUN_004047ad(void)

{
  FUN_004047b7();
  return;
}


// ---- FUN_004047b7 @ 004047b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004047b7(void)

{
  _DAT_00426524 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_0041fbf0);
  return;
}


// ---- FUN_004047cc @ 004047cc

void FUN_004047cc(void)

{
  FUN_004047d6();
  return;
}


// ---- FUN_004047d6 @ 004047d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004047d6(void)

{
  _DAT_00426520 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_0041fc04);
  return;
}


// ---- FUN_004047eb @ 004047eb

void FUN_004047eb(void)

{
  FUN_004047f5();
  return;
}


// ---- FUN_004047f5 @ 004047f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004047f5(void)

{
  _DAT_0042651c = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_0041fc18);
  return;
}


// ---- FUN_0040480a @ 0040480a

void FUN_0040480a(void)

{
  FUN_00404814();
  return;
}


// ---- FUN_00404814 @ 00404814

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404814(void)

{
  _DAT_00426518 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_0041fc2c);
  return;
}


// ---- CreateObject @ 00404829

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<struct
   _AFX_PROPPAGEFONTINFO>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_CHECKLIST_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_COLOR_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_DEBUG_STATE>::CreateObject(void)
     10 names - too many to list
   
   Library: Visual Studio 2003 Debug */

CDialog * CreateObject(void)

{
  CDialog *pCVar1;
  CDialog *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418bba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (CDialog *)FUN_00404e50(100);
  local_8 = 0;
  if (pCVar1 == (CDialog *)0x0) {
    local_1c = (CDialog *)0x0;
  }
  else {
    local_1c = FUN_00404967(pCVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_0040488d @ 0040488d

undefined * FUN_0040488d(void)

{
  return classCDialog_exref;
}


// ---- FUN_00404897 @ 00404897

undefined ** FUN_00404897(void)

{
  return &PTR_s_CLeoDialog_0041a5a8;
}


// ---- FUN_004048a7 @ 004048a7

CDialog * __thiscall FUN_004048a7(void *this,CWnd *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418bcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CDialog::CDialog(this,0,param_1);
  local_8 = 0;
  FUN_00401606((undefined4 *)((int)this + 0x60));
  *(undefined ***)this = &PTR_FUN_0041a5e0;
  ExceptionList = local_10;
  return this;
}


// ---- FUN_00404906 @ 00404906

CDialog * __thiscall FUN_00404906(void *this,uint param_1,CWnd *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418be0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CDialog::CDialog(this,param_1,param_2);
  local_8 = 0;
  FUN_00401606((undefined4 *)((int)this + 0x60));
  *(undefined ***)this = &PTR_FUN_0041a5e0;
  ExceptionList = local_10;
  return this;
}


// ---- FUN_00404967 @ 00404967

CDialog * __fastcall FUN_00404967(CDialog *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418bf3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CDialog::CDialog(param_1);
  local_8 = 0;
  FUN_00401606((undefined4 *)(param_1 + 0x60));
  *(undefined ***)param_1 = &PTR_FUN_0041a5e0;
  ExceptionList = local_10;
  return param_1;
}


// ---- DoDataExchange @ 004049be

/* Library Function - Single Match
    protected: virtual void __thiscall CFindReplaceDialog::DoDataExchange(class CDataExchange *)
   
   Library: Visual Studio 2008 Debug */

void __thiscall CFindReplaceDialog::DoDataExchange(CFindReplaceDialog *this,CDataExchange *param_1)

{
  FUN_00404f40();
  return;
}


// ---- FUN_004049d7 @ 004049d7

undefined * FUN_004049d7(void)

{
  return messageMap_exref;
}


// ---- FUN_004049e1 @ 004049e1

undefined ** FUN_004049e1(void)

{
  return &PTR_FUN_0041a5c0;
}


// ---- FUN_004049f1 @ 004049f1

undefined4 FUN_004049f1(void)

{
  return DAT_004268f4;
}


// ---- FUN_004049fb @ 004049fb

void __cdecl FUN_004049fb(undefined4 param_1)

{
  DAT_004268f4 = param_1;
  return;
}


// ---- FUN_00404a08 @ 00404a08

int __thiscall FUN_00404a08(void *this,uint param_1,CWnd *param_2)

{
  undefined4 uVar1;
  char *lpName;
  HINSTANCE__ *hModule;
  HGLOBAL hResData;
  int iVar2;
  undefined4 local_14;
  undefined2 local_c;
  
  if (DAT_004268f4 == 0) {
    local_c = 0x809;
  }
  else {
    uVar1 = FUN_00412f3b(DAT_004268f4);
    local_c = (WORD)uVar1;
  }
  lpName = (char *)(param_1 & 0xffff);
  *(char **)((int)this + 0x44) = lpName;
  if ((*(uint *)((int)this + 0x44) >> 0x10 == 0) && (*(int *)((int)this + 0x40) == 0)) {
    *(uint *)((int)this + 0x40) = (uint)*(ushort *)((int)this + 0x44);
  }
  hModule = AfxFindResourceHandle(lpName,(char *)0x5);
  local_14 = FindResourceExA(hModule,(LPCSTR)0x5,lpName,local_c);
  if (local_14 == (HRSRC)0x0) {
    local_14 = FindResourceA(hModule,lpName,(LPCSTR)0x5);
  }
  hResData = LoadResource(hModule,local_14);
  iVar2 = CDialog::CreateIndirect(this,hResData,param_2,hModule);
  FreeResource(hResData);
  return iVar2;
}


// ---- FUN_00404af0 @ 00404af0

int __thiscall FUN_00404af0(void *this,uint param_1,CWnd *param_2)

{
  undefined4 uVar1;
  char *lpName;
  HINSTANCE__ *hModule;
  HGLOBAL pvVar2;
  int iVar3;
  undefined4 local_14;
  undefined2 local_c;
  
  if (DAT_004268f4 == 0) {
    local_c = 0x809;
  }
  else {
    uVar1 = FUN_00412f3b(DAT_004268f4);
    local_c = (WORD)uVar1;
  }
  lpName = (char *)(param_1 & 0xffff);
  if (*(int *)((int)this + 0x40) == 0) {
    *(char **)((int)this + 0x40) = lpName;
  }
  hModule = AfxFindResourceHandle(lpName,(char *)0x5);
  local_14 = FindResourceExA(hModule,(LPCSTR)0x5,lpName,local_c);
  if (local_14 == (HRSRC)0x0) {
    local_14 = FindResourceA(hModule,lpName,(LPCSTR)0x5);
  }
  pvVar2 = LoadResource(hModule,local_14);
  *(undefined4 *)((int)this + 0x44) = 0;
  iVar3 = CDialog::InitModalIndirect(this,pvVar2,param_2);
  return iVar3;
}


// ---- FUN_00404bc7 @ 00404bc7

undefined4 __fastcall FUN_00404bc7(CDialog *param_1)

{
  BOOL BVar1;
  CWnd *pCVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_3c;
  AFX_EXCEPTION_LINK local_38 [8];
  HRSRC local_30;
  undefined4 local_2c;
  DLGTEMPLATE *local_28;
  HGLOBAL local_24;
  HWND local_20;
  HMODULE local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418c06;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_28 = *(DLGTEMPLATE **)(param_1 + 0x4c);
  local_24 = *(HGLOBAL *)(param_1 + 0x48);
  ExceptionList = &pvStack_10;
  local_1c = (HMODULE)FUN_00404f10();
  if (DAT_004268f4 == 0) {
    local_18 = 0x809;
  }
  else {
    local_18 = FUN_00412f3b(DAT_004268f4);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    local_1c = AfxFindResourceHandle(*(char **)(param_1 + 0x44),(char *)0x5);
    local_30 = FindResourceExA(local_1c,(LPCSTR)0x5,*(LPCSTR *)(param_1 + 0x44),(WORD)local_18);
    local_24 = LoadResource(local_1c,local_30);
  }
  if (local_24 != (HGLOBAL)0x0) {
    local_28 = LockResource(local_24);
  }
  if (local_28 == (DLGTEMPLATE *)0x0) {
    ExceptionList = pvStack_10;
    return 0xffffffff;
  }
  local_20 = CDialog::PreModal(param_1);
  AfxUnhookWindowCreate();
  local_2c = 0;
  if (local_20 != (HWND)0x0) {
    BVar1 = IsWindowEnabled(local_20);
    if (BVar1 != 0) {
      EnableWindow(local_20,0);
      local_2c = 1;
    }
  }
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_38);
  local_8 = 1;
  AfxHookWindowCreate((CWnd *)param_1);
  pCVar2 = CWnd::FromHandle(local_20);
  iVar3 = CWnd::CreateDlgIndirect((CWnd *)param_1,local_28,pCVar2,local_1c);
  if (iVar3 != 0) {
    if ((*(uint *)(param_1 + 0x28) & 0x10) != 0) {
      local_3c = 4;
      uVar4 = CWnd::GetStyle((CWnd *)param_1);
      if ((uVar4 & 0x100) != 0) {
        local_3c = 5;
      }
      CWnd::RunModalLoop((CWnd *)param_1,local_3c);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,0x97);
    }
  }
  uVar5 = FUN_00404d88();
  return uVar5;
}


// ---- Catch@00404d72 @ 00404d72

undefined * Catch_00404d72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x3c);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0x30) = 0xffffffff;
  return FUN_00404d88;
}


// ---- FUN_00404d88 @ 00404d88

undefined4 FUN_00404d88(void)

{
  HWND pHVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00404f00();
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    EnableWindow(*(HWND *)(unaff_EBP + -0x1c),1);
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pHVar1 = GetActiveWindow();
    if (pHVar1 == *(HWND *)(*(int *)(unaff_EBP + -0x40) + 0x20)) {
      SetActiveWindow(*(HWND *)(unaff_EBP + -0x1c));
    }
  }
  (**(code **)(**(int **)(unaff_EBP + -0x40) + 0x60))();
  CDialog::PostModal(*(CDialog **)(unaff_EBP + -0x40));
  if ((*(int *)(*(int *)(unaff_EBP + -0x40) + 0x44) != 0) ||
     (*(int *)(*(int *)(unaff_EBP + -0x40) + 0x48) != 0)) {
    FUN_00404ef0();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x40) + 0x44) != 0) {
    FreeResource(*(HGLOBAL *)(unaff_EBP + -0x20));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0x30);
}


// ---- FUN_00404e1f @ 00404e1f

void __thiscall FUN_00404e1f(void *this,int param_1)

{
  FUN_00404f20(this);
  if (param_1 != 0) {
    FUN_00401be8((int)this);
  }
  return;
}


// ---- FUN_00404e50 @ 00404e50

void FUN_00404e50(uint param_1)

{
  operator_new(param_1);
  return;
}


// ---- FUN_00404e70 @ 00404e70

CDialog * __thiscall FUN_00404e70(void *this,uint param_1)

{
  FUN_00404ea0(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_00404ea0 @ 00404ea0

void __fastcall FUN_00404ea0(CDialog *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00418c19;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004016b3((undefined4 *)(param_1 + 0x60));
  local_8 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_00404ef0 @ 00404ef0

undefined4 FUN_00404ef0(void)

{
  return 0;
}


// ---- FUN_00404f00 @ 00404f00

void FUN_00404f00(void)

{
  AfxTryCleanup();
  return;
}


// ---- FUN_00404f10 @ 00404f10

undefined4 FUN_00404f10(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return *(undefined4 *)(pAVar1 + 0xc);
}


// ---- FUN_00404f20 @ 00404f20

void __fastcall FUN_00404f20(CWnd *param_1)

{
  CWnd::Default(param_1);
  return;
}


// ---- FUN_00404f40 @ 00404f40

void FUN_00404f40(void)

{
  return;
}


// ---- FUN_00404f50 @ 00404f50

void __fastcall FUN_00404f50(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_00404f70 @ 00404f70

void __fastcall FUN_00404f70(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_00404f90 @ 00404f90

void FUN_00404f90(void)

{
  FUN_00404f9a();
  return;
}


// ---- FUN_00404f9a @ 00404f9a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f9a(void)

{
  _DAT_00426da8 = RegisterWindowMessageA(s_LEO_D_SET_STATE_0041fc6c);
  return;
}


// ---- FUN_00404faf @ 00404faf

void FUN_00404faf(void)

{
  FUN_00404fb9();
  return;
}


// ---- FUN_00404fb9 @ 00404fb9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404fb9(void)

{
  _DAT_00426da4 = RegisterWindowMessageA(s_LEO_D_SET_STRING_0041fc7c);
  return;
}


// ---- FUN_00404fce @ 00404fce

void FUN_00404fce(void)

{
  FUN_00404fd8();
  return;
}


// ---- FUN_00404fd8 @ 00404fd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404fd8(void)

{
  _DAT_00426da0 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_0041fc90);
  return;
}


// ---- FUN_00404fed @ 00404fed

void FUN_00404fed(void)

{
  FUN_00404ff7();
  return;
}


// ---- FUN_00404ff7 @ 00404ff7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ff7(void)

{
  _DAT_00426d9c = RegisterWindowMessageA(s_LEO_D_SET_XY_0041fca0);
  return;
}


// ---- FUN_0040500c @ 0040500c

void FUN_0040500c(void)

{
  FUN_00405016();
  return;
}


// ---- FUN_00405016 @ 00405016

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405016(void)

{
  _DAT_00426d98 = RegisterWindowMessageA(s_LEO_D_GET_XY_0041fcb0);
  return;
}


// ---- FUN_0040502b @ 0040502b

void FUN_0040502b(void)

{
  FUN_00405035();
  return;
}


// ---- FUN_00405035 @ 00405035

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405035(void)

{
  _DAT_00426d94 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_0041fcc0);
  return;
}


// ---- FUN_0040504a @ 0040504a

void FUN_0040504a(void)

{
  FUN_00405054();
  return;
}


// ---- FUN_00405054 @ 00405054

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405054(void)

{
  _DAT_00426d90 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_0041fcd8);
  return;
}


// ---- FUN_00405069 @ 00405069

void FUN_00405069(void)

{
  FUN_00405073();
  return;
}


// ---- FUN_00405073 @ 00405073

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405073(void)

{
  _DAT_00426d8c = RegisterWindowMessageA(s_LEO_D_STEP_0041fcf4);
  return;
}


// ---- FUN_00405088 @ 00405088

void FUN_00405088(void)

{
  FUN_00405092();
  return;
}


// ---- FUN_00405092 @ 00405092

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405092(void)

{
  _DAT_00426d88 = RegisterWindowMessageA(s_LEO_D_EXECUTE_0041fd00);
  return;
}


// ---- FUN_004050a7 @ 004050a7

void FUN_004050a7(void)

{
  FUN_004050b1();
  return;
}


// ---- FUN_004050b1 @ 004050b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004050b1(void)

{
  _DAT_00426d84 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_0041fd10);
  return;
}


// ---- FUN_004050c6 @ 004050c6

void FUN_004050c6(void)

{
  FUN_004050d0();
  return;
}


// ---- FUN_004050d0 @ 004050d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004050d0(void)

{
  _DAT_00426d80 = RegisterWindowMessageA(s_LEO_D_GET_STATE_0041fd24);
  return;
}


// ---- FUN_004050e5 @ 004050e5

void FUN_004050e5(void)

{
  FUN_004050ef();
  return;
}


// ---- FUN_004050ef @ 004050ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004050ef(void)

{
  _DAT_00426d7c = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_0041fd34);
  return;
}


// ---- FUN_00405104 @ 00405104

void FUN_00405104(void)

{
  FUN_0040510e();
  return;
}


// ---- FUN_0040510e @ 0040510e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040510e(void)

{
  _DAT_00426d78 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_0041fd4c);
  return;
}


// ---- FUN_00405123 @ 00405123

void FUN_00405123(void)

{
  FUN_0040512d();
  return;
}


// ---- FUN_0040512d @ 0040512d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040512d(void)

{
  _DAT_00426d74 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_0041fd5c);
  return;
}


// ---- FUN_00405142 @ 00405142

void FUN_00405142(void)

{
  FUN_0040514c();
  return;
}


// ---- FUN_0040514c @ 0040514c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040514c(void)

{
  _DAT_00426d70 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_0041fd70);
  return;
}


// ---- FUN_00405161 @ 00405161

void FUN_00405161(void)

{
  FUN_0040516b();
  return;
}


// ---- FUN_0040516b @ 0040516b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040516b(void)

{
  _DAT_00426d6c = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_0041fd8c);
  return;
}


// ---- FUN_00405180 @ 00405180

void FUN_00405180(void)

{
  FUN_0040518a();
  return;
}


// ---- FUN_0040518a @ 0040518a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040518a(void)

{
  _DAT_00426d68 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_0041fda8);
  return;
}


// ---- FUN_0040519f @ 0040519f

void FUN_0040519f(void)

{
  FUN_004051a9();
  return;
}


// ---- FUN_004051a9 @ 004051a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004051a9(void)

{
  _DAT_00426d64 = RegisterWindowMessageA(s_PM_SERVER_READY_0041fdc4);
  return;
}


// ---- FUN_004051be @ 004051be

void FUN_004051be(void)

{
  FUN_004051c8();
  return;
}


// ---- FUN_004051c8 @ 004051c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004051c8(void)

{
  _DAT_00426d60 = RegisterWindowMessageA(s_PM_SERVER_LOADING_0041fdd4);
  return;
}


// ---- FUN_004051dd @ 004051dd

void FUN_004051dd(void)

{
  FUN_004051e7();
  return;
}


// ---- FUN_004051e7 @ 004051e7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004051e7(void)

{
  _DAT_00426d5c = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_0041fde8);
  return;
}


// ---- FUN_004051fc @ 004051fc

void FUN_004051fc(void)

{
  FUN_00405206();
  return;
}


// ---- FUN_00405206 @ 00405206

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405206(void)

{
  _DAT_00426d58 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_0041fdfc);
  return;
}


// ---- FUN_0040521b @ 0040521b

void FUN_0040521b(void)

{
  FUN_00405225();
  return;
}


// ---- FUN_00405225 @ 00405225

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405225(void)

{
  _DAT_00426d54 = RegisterWindowMessageA(s_PM_SEM_CLOSE_0041fe10);
  return;
}


// ---- FUN_0040523a @ 0040523a

void FUN_0040523a(void)

{
  FUN_00405244();
  return;
}


// ---- FUN_00405244 @ 00405244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405244(void)

{
  _DAT_00426d50 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_0041fe20);
  return;
}


// ---- FUN_00405259 @ 00405259

void FUN_00405259(void)

{
  FUN_00405263();
  return;
}


// ---- FUN_00405263 @ 00405263

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405263(void)

{
  _DAT_00426d4c = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_0041fe3c);
  return;
}


// ---- FUN_00405278 @ 00405278

void FUN_00405278(void)

{
  FUN_00405282();
  return;
}


// ---- FUN_00405282 @ 00405282

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405282(void)

{
  _DAT_00426d48 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_0041fe50);
  return;
}


// ---- FUN_00405297 @ 00405297

void FUN_00405297(void)

{
  FUN_004052a1();
  return;
}


// ---- FUN_004052a1 @ 004052a1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052a1(void)

{
  _DAT_00426d44 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_0041fe68);
  return;
}


// ---- FUN_004052b6 @ 004052b6

void FUN_004052b6(void)

{
  FUN_004052c0();
  return;
}


// ---- FUN_004052c0 @ 004052c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052c0(void)

{
  _DAT_00426d40 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_0041fe7c);
  return;
}


// ---- FUN_004052d5 @ 004052d5

void FUN_004052d5(void)

{
  FUN_004052df();
  return;
}


// ---- FUN_004052df @ 004052df

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052df(void)

{
  _DAT_00426d3c = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_0041fe94);
  return;
}


// ---- FUN_004052f4 @ 004052f4

void FUN_004052f4(void)

{
  FUN_004052fe();
  return;
}


// ---- FUN_004052fe @ 004052fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052fe(void)

{
  _DAT_00426d38 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_0041feb0);
  return;
}


// ---- FUN_00405313 @ 00405313

void FUN_00405313(void)

{
  FUN_0040531d();
  return;
}


// ---- FUN_0040531d @ 0040531d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040531d(void)

{
  _DAT_00426d34 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_0041fecc);
  return;
}


// ---- FUN_00405332 @ 00405332

void FUN_00405332(void)

{
  FUN_0040533c();
  return;
}


// ---- FUN_0040533c @ 0040533c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040533c(void)

{
  _DAT_00426d30 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_0041fee8);
  return;
}


// ---- FUN_00405351 @ 00405351

void FUN_00405351(void)

{
  FUN_0040535b();
  return;
}


// ---- FUN_0040535b @ 0040535b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040535b(void)

{
  _DAT_00426d2c = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_0041ff04);
  return;
}


// ---- FUN_00405370 @ 00405370

void FUN_00405370(void)

{
  FUN_0040537a();
  return;
}


// ---- FUN_0040537a @ 0040537a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040537a(void)

{
  _DAT_00426d28 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_0041ff18);
  return;
}


// ---- FUN_0040538f @ 0040538f

void FUN_0040538f(void)

{
  FUN_00405399();
  return;
}


// ---- FUN_00405399 @ 00405399

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405399(void)

{
  _DAT_00426d24 = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_0041ff30);
  return;
}


// ---- FUN_004053ae @ 004053ae

void FUN_004053ae(void)

{
  FUN_004053b8();
  return;
}


// ---- FUN_004053b8 @ 004053b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004053b8(void)

{
  _DAT_00426d20 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_0041ff4c);
  return;
}


// ---- FUN_004053cd @ 004053cd

void FUN_004053cd(void)

{
  FUN_004053d7();
  return;
}


// ---- FUN_004053d7 @ 004053d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004053d7(void)

{
  _DAT_00426d1c = RegisterWindowMessageA(s_PM_IMEX_DONE_0041ff60);
  return;
}


// ---- FUN_004053ec @ 004053ec

void FUN_004053ec(void)

{
  FUN_004053f6();
  return;
}


// ---- FUN_004053f6 @ 004053f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004053f6(void)

{
  _DAT_00426d18 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_0041ff70);
  return;
}


// ---- FUN_0040540b @ 0040540b

void FUN_0040540b(void)

{
  FUN_00405415();
  return;
}


// ---- FUN_00405415 @ 00405415

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405415(void)

{
  _DAT_00426d14 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_0041ff84);
  return;
}


// ---- FUN_0040542a @ 0040542a

void FUN_0040542a(void)

{
  FUN_00405434();
  return;
}


// ---- FUN_00405434 @ 00405434

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405434(void)

{
  _DAT_00426d10 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_0041ff98);
  return;
}


// ---- FUN_00405449 @ 00405449

void FUN_00405449(void)

{
  FUN_00405453();
  return;
}


// ---- FUN_00405453 @ 00405453

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405453(void)

{
  _DAT_00426d0c = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_0041ffac);
  return;
}


// ---- FUN_00405468 @ 00405468

void FUN_00405468(void)

{
  FUN_00405472();
  return;
}


// ---- FUN_00405472 @ 00405472

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405472(void)

{
  _DAT_00426d08 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_0041ffc0);
  return;
}


// ---- FUN_00405487 @ 00405487

void FUN_00405487(void)

{
  FUN_00405491();
  return;
}


// ---- FUN_00405491 @ 00405491

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405491(void)

{
  _DAT_00426d04 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_0041ffd8);
  return;
}


// ---- FUN_004054a6 @ 004054a6

void FUN_004054a6(void)

{
  FUN_004054b0();
  return;
}


// ---- FUN_004054b0 @ 004054b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004054b0(void)

{
  _DAT_00426d00 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_0041ffec);
  return;
}


// ---- FUN_004054c5 @ 004054c5

void FUN_004054c5(void)

{
  FUN_004054cf();
  return;
}


// ---- FUN_004054cf @ 004054cf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004054cf(void)

{
  _DAT_00426cfc = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_00420000);
  return;
}


// ---- FUN_004054e4 @ 004054e4

void FUN_004054e4(void)

{
  FUN_004054ee();
  return;
}


// ---- FUN_004054ee @ 004054ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004054ee(void)

{
  _DAT_00426cf8 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_00420014);
  return;
}


// ---- FUN_00405503 @ 00405503

void FUN_00405503(void)

{
  FUN_0040550d();
  return;
}


// ---- FUN_0040550d @ 0040550d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040550d(void)

{
  _DAT_00426cf4 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_00420024);
  return;
}


// ---- FUN_00405522 @ 00405522

void FUN_00405522(void)

{
  FUN_0040552c();
  return;
}


// ---- FUN_0040552c @ 0040552c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040552c(void)

{
  _DAT_00426cf0 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_00420034);
  return;
}


// ---- FUN_00405541 @ 00405541

void FUN_00405541(void)

{
  FUN_0040554b();
  return;
}


// ---- FUN_0040554b @ 0040554b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040554b(void)

{
  _DAT_00426cec = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_0042004c);
  return;
}


// ---- FUN_00405560 @ 00405560

void FUN_00405560(void)

{
  FUN_0040556a();
  return;
}


// ---- FUN_0040556a @ 0040556a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040556a(void)

{
  _DAT_00426ce8 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_00420064);
  return;
}


// ---- FUN_0040557f @ 0040557f

void FUN_0040557f(void)

{
  FUN_00405589();
  return;
}


// ---- FUN_00405589 @ 00405589

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405589(void)

{
  _DAT_00426ce4 = RegisterWindowMessageA(s_PM_STEP_MACRO_00420080);
  return;
}


// ---- FUN_0040559e @ 0040559e

void FUN_0040559e(void)

{
  FUN_004055a8();
  return;
}


// ---- FUN_004055a8 @ 004055a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055a8(void)

{
  _DAT_00426ce0 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_00420090);
  return;
}


// ---- FUN_004055bd @ 004055bd

void FUN_004055bd(void)

{
  FUN_004055c7();
  return;
}


// ---- FUN_004055c7 @ 004055c7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055c7(void)

{
  _DAT_00426cdc = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_004200a4);
  return;
}


// ---- FUN_004055dc @ 004055dc

void FUN_004055dc(void)

{
  FUN_004055e6();
  return;
}


// ---- FUN_004055e6 @ 004055e6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055e6(void)

{
  _DAT_00426cd8 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_004200c0);
  return;
}


// ---- FUN_004055fb @ 004055fb

void FUN_004055fb(void)

{
  FUN_00405605();
  return;
}


// ---- FUN_00405605 @ 00405605

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405605(void)

{
  _DAT_00426cd4 = RegisterWindowMessageA(s_PM_HALT_MACRO_004200d8);
  return;
}


// ---- FUN_0040561a @ 0040561a

void FUN_0040561a(void)

{
  FUN_00405624();
  return;
}


// ---- FUN_00405624 @ 00405624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405624(void)

{
  _DAT_00426cd0 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_004200e8);
  return;
}


// ---- FUN_00405639 @ 00405639

void FUN_00405639(void)

{
  FUN_00405643();
  return;
}


// ---- FUN_00405643 @ 00405643

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405643(void)

{
  _DAT_00426ccc = RegisterWindowMessageA(s_PM_MACRO_STATUS_004200f8);
  return;
}


// ---- FUN_00405658 @ 00405658

void FUN_00405658(void)

{
  FUN_00405662();
  return;
}


// ---- FUN_00405662 @ 00405662

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405662(void)

{
  _DAT_00426cc8 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_00420108);
  return;
}


// ---- FUN_00405677 @ 00405677

void FUN_00405677(void)

{
  FUN_00405681();
  return;
}


// ---- FUN_00405681 @ 00405681

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405681(void)

{
  _DAT_00426cc4 = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_00420118);
  return;
}


// ---- FUN_00405696 @ 00405696

void FUN_00405696(void)

{
  FUN_004056a0();
  return;
}


// ---- FUN_004056a0 @ 004056a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004056a0(void)

{
  _DAT_00426cc0 = RegisterWindowMessageA(s_PM_SAVE_STATE_00420134);
  return;
}


// ---- FUN_004056b5 @ 004056b5

void FUN_004056b5(void)

{
  FUN_004056bf();
  return;
}


// ---- FUN_004056bf @ 004056bf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004056bf(void)

{
  _DAT_00426cbc = RegisterWindowMessageA(s_PM_LOAD_STATE_00420144);
  return;
}


// ---- FUN_004056d4 @ 004056d4

void FUN_004056d4(void)

{
  FUN_004056de();
  return;
}


// ---- FUN_004056de @ 004056de

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004056de(void)

{
  _DAT_00426cb8 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_00420154);
  return;
}


// ---- FUN_004056f3 @ 004056f3

void FUN_004056f3(void)

{
  FUN_004056fd();
  return;
}


// ---- FUN_004056fd @ 004056fd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004056fd(void)

{
  _DAT_00426cb4 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_0042016c);
  return;
}


// ---- FUN_00405712 @ 00405712

void FUN_00405712(void)

{
  FUN_0040571c();
  return;
}


// ---- FUN_0040571c @ 0040571c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040571c(void)

{
  _DAT_00426cb0 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_0042018c);
  return;
}


// ---- FUN_00405731 @ 00405731

void FUN_00405731(void)

{
  FUN_0040573b();
  return;
}


// ---- FUN_0040573b @ 0040573b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040573b(void)

{
  _DAT_00426cac = RegisterWindowMessageA(s_PM_REVIEW_STATE_004201a0);
  return;
}


// ---- FUN_00405750 @ 00405750

void FUN_00405750(void)

{
  FUN_0040575a();
  return;
}


// ---- FUN_0040575a @ 0040575a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040575a(void)

{
  _DAT_00426ca8 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_004201b0);
  return;
}


// ---- FUN_0040576f @ 0040576f

void FUN_0040576f(void)

{
  FUN_00405779();
  return;
}


// ---- FUN_00405779 @ 00405779

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405779(void)

{
  _DAT_00426ca4 = RegisterWindowMessageA(s_PM_QUERY_SERVER_004201c8);
  return;
}


// ---- FUN_0040578e @ 0040578e

void FUN_0040578e(void)

{
  FUN_00405798();
  return;
}


// ---- FUN_00405798 @ 00405798

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405798(void)

{
  _DAT_00426ca0 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_004201d8);
  return;
}


// ---- FUN_004057ad @ 004057ad

void FUN_004057ad(void)

{
  FUN_004057b7();
  return;
}


// ---- FUN_004057b7 @ 004057b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004057b7(void)

{
  _DAT_00426c9c = RegisterWindowMessageA(s_PM_REGISTER_004201f0);
  return;
}


// ---- FUN_004057cc @ 004057cc

void FUN_004057cc(void)

{
  FUN_004057d6();
  return;
}


// ---- FUN_004057d6 @ 004057d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004057d6(void)

{
  _DAT_00426c98 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_004201fc);
  return;
}


// ---- FUN_004057eb @ 004057eb

void FUN_004057eb(void)

{
  FUN_004057f5();
  return;
}


// ---- FUN_004057f5 @ 004057f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004057f5(void)

{
  _DAT_00426c94 = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_00420214);
  return;
}


// ---- FUN_0040580a @ 0040580a

void FUN_0040580a(void)

{
  FUN_00405814();
  return;
}


// ---- FUN_00405814 @ 00405814

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405814(void)

{
  _DAT_00426c90 = RegisterWindowMessageA(s_PM_SEM_REGISTER_0042022c);
  return;
}


// ---- FUN_00405829 @ 00405829

void FUN_00405829(void)

{
  FUN_00405833();
  return;
}


// ---- FUN_00405833 @ 00405833

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405833(void)

{
  _DAT_00426c8c = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_0042023c);
  return;
}


// ---- FUN_00405848 @ 00405848

void FUN_00405848(void)

{
  FUN_00405852();
  return;
}


// ---- FUN_00405852 @ 00405852

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405852(void)

{
  _DAT_00426c88 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_00420254);
  return;
}


// ---- FUN_00405867 @ 00405867

void FUN_00405867(void)

{
  FUN_00405871();
  return;
}


// ---- FUN_00405871 @ 00405871

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405871(void)

{
  _DAT_00426c84 = RegisterWindowMessageA(s_PM_LOG_OFF_00420268);
  return;
}


// ---- FUN_00405886 @ 00405886

void FUN_00405886(void)

{
  FUN_00405890();
  return;
}


// ---- FUN_00405890 @ 00405890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405890(void)

{
  _DAT_00426c80 = RegisterWindowMessageA(s_PM_LOG_ON_00420274);
  return;
}


// ---- FUN_004058a5 @ 004058a5

void FUN_004058a5(void)

{
  FUN_004058af();
  return;
}


// ---- FUN_004058af @ 004058af

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004058af(void)

{
  _DAT_00426c7c = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_00420280);
  return;
}


// ---- FUN_004058c4 @ 004058c4

void FUN_004058c4(void)

{
  FUN_004058ce();
  return;
}


// ---- FUN_004058ce @ 004058ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004058ce(void)

{
  _DAT_00426c78 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_00420298);
  return;
}


// ---- FUN_004058e3 @ 004058e3

void FUN_004058e3(void)

{
  FUN_004058ed();
  return;
}


// ---- FUN_004058ed @ 004058ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004058ed(void)

{
  _DAT_00426c74 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_004202ac);
  return;
}


// ---- FUN_00405902 @ 00405902

void FUN_00405902(void)

{
  FUN_0040590c();
  return;
}


// ---- FUN_0040590c @ 0040590c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040590c(void)

{
  _DAT_00426c70 = RegisterWindowMessageA(s_PM_GET_STRING_004202c4);
  return;
}


// ---- FUN_00405921 @ 00405921

void FUN_00405921(void)

{
  FUN_0040592b();
  return;
}


// ---- FUN_0040592b @ 0040592b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040592b(void)

{
  _DAT_00426c6c = RegisterWindowMessageA(s_PM_GET_NAME_004202d4);
  return;
}


// ---- FUN_00405940 @ 00405940

void FUN_00405940(void)

{
  FUN_0040594a();
  return;
}


// ---- FUN_0040594a @ 0040594a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040594a(void)

{
  _DAT_00426c68 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_004202e0);
  return;
}


// ---- FUN_0040595f @ 0040595f

void FUN_0040595f(void)

{
  FUN_00405969();
  return;
}


// ---- FUN_00405969 @ 00405969

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405969(void)

{
  _DAT_00426c64 = RegisterWindowMessageA(s_PM_GET_VALUE_004202f0);
  return;
}


// ---- FUN_0040597e @ 0040597e

void FUN_0040597e(void)

{
  FUN_00405988();
  return;
}


// ---- FUN_00405988 @ 00405988

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405988(void)

{
  _DAT_00426c60 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_00420300);
  return;
}


// ---- FUN_0040599d @ 0040599d

void FUN_0040599d(void)

{
  FUN_004059a7();
  return;
}


// ---- FUN_004059a7 @ 004059a7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004059a7(void)

{
  _DAT_00426c5c = RegisterWindowMessageA(s_PM_STAGE_GOTO_0042031c);
  return;
}


// ---- FUN_004059bc @ 004059bc

void FUN_004059bc(void)

{
  FUN_004059c6();
  return;
}


// ---- FUN_004059c6 @ 004059c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004059c6(void)

{
  _DAT_00426c58 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_0042032c);
  return;
}


// ---- FUN_004059db @ 004059db

void FUN_004059db(void)

{
  FUN_004059e5();
  return;
}


// ---- FUN_004059e5 @ 004059e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004059e5(void)

{
  _DAT_00426c54 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_00420344);
  return;
}


// ---- FUN_004059fa @ 004059fa

void FUN_004059fa(void)

{
  FUN_00405a04();
  return;
}


// ---- FUN_00405a04 @ 00405a04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a04(void)

{
  _DAT_00426c50 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_0042035c);
  return;
}


// ---- FUN_00405a19 @ 00405a19

void FUN_00405a19(void)

{
  FUN_00405a23();
  return;
}


// ---- FUN_00405a23 @ 00405a23

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a23(void)

{
  _DAT_00426c4c = RegisterWindowMessageA(s_PM_GET_ERROR_00420380);
  return;
}


// ---- FUN_00405a38 @ 00405a38

void FUN_00405a38(void)

{
  FUN_00405a42();
  return;
}


// ---- FUN_00405a42 @ 00405a42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a42(void)

{
  _DAT_00426c48 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_00420390);
  return;
}


// ---- FUN_00405a57 @ 00405a57

void FUN_00405a57(void)

{
  FUN_00405a61();
  return;
}


// ---- FUN_00405a61 @ 00405a61

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a61(void)

{
  _DAT_00426c44 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_004203a4);
  return;
}


// ---- FUN_00405a76 @ 00405a76

void FUN_00405a76(void)

{
  FUN_00405a80();
  return;
}


// ---- FUN_00405a80 @ 00405a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a80(void)

{
  _DAT_00426c40 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_004203b8);
  return;
}


// ---- FUN_00405a95 @ 00405a95

void FUN_00405a95(void)

{
  FUN_00405a9f();
  return;
}


// ---- FUN_00405a9f @ 00405a9f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a9f(void)

{
  _DAT_00426c3c = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_004203d8);
  return;
}


// ---- FUN_00405ab4 @ 00405ab4

void FUN_00405ab4(void)

{
  FUN_00405abe();
  return;
}


// ---- FUN_00405abe @ 00405abe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405abe(void)

{
  _DAT_00426c38 = RegisterWindowMessageA(s_PM_GET_HANDLES_004203ec);
  return;
}


// ---- FUN_00405ad3 @ 00405ad3

void FUN_00405ad3(void)

{
  FUN_00405add();
  return;
}


// ---- FUN_00405add @ 00405add

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405add(void)

{
  _DAT_00426c34 = RegisterWindowMessageA(s_PM_GET_STATES_004203fc);
  return;
}


// ---- FUN_00405af2 @ 00405af2

void FUN_00405af2(void)

{
  FUN_00405afc();
  return;
}


// ---- FUN_00405afc @ 00405afc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405afc(void)

{
  _DAT_00426c30 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_0042040c);
  return;
}


// ---- FUN_00405b11 @ 00405b11

void FUN_00405b11(void)

{
  FUN_00405b1b();
  return;
}


// ---- FUN_00405b1b @ 00405b1b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b1b(void)

{
  _DAT_00426c2c = RegisterWindowMessageA(s_PM_GET_LICENCE_00420420);
  return;
}


// ---- FUN_00405b30 @ 00405b30

void FUN_00405b30(void)

{
  FUN_00405b3a();
  return;
}


// ---- FUN_00405b3a @ 00405b3a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b3a(void)

{
  _DAT_00426c28 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_00420430);
  return;
}


// ---- FUN_00405b4f @ 00405b4f

void FUN_00405b4f(void)

{
  FUN_00405b59();
  return;
}


// ---- FUN_00405b59 @ 00405b59

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b59(void)

{
  _DAT_00426c24 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_00420444);
  return;
}


// ---- FUN_00405b6e @ 00405b6e

void FUN_00405b6e(void)

{
  FUN_00405b78();
  return;
}


// ---- FUN_00405b78 @ 00405b78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b78(void)

{
  _DAT_00426c20 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_00420458);
  return;
}


// ---- FUN_00405b8d @ 00405b8d

void FUN_00405b8d(void)

{
  FUN_00405b97();
  return;
}


// ---- FUN_00405b97 @ 00405b97

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b97(void)

{
  _DAT_00426c1c = RegisterWindowMessageA(s_PM_SET_XY_VALUES_0042046c);
  return;
}


// ---- FUN_00405bac @ 00405bac

void FUN_00405bac(void)

{
  FUN_00405bb6();
  return;
}


// ---- FUN_00405bb6 @ 00405bb6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405bb6(void)

{
  _DAT_00426c18 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_00420480);
  return;
}


// ---- FUN_00405bcb @ 00405bcb

void FUN_00405bcb(void)

{
  FUN_00405bd5();
  return;
}


// ---- FUN_00405bd5 @ 00405bd5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405bd5(void)

{
  _DAT_00426c14 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_00420494);
  return;
}


// ---- FUN_00405bea @ 00405bea

void FUN_00405bea(void)

{
  FUN_00405bf4();
  return;
}


// ---- FUN_00405bf4 @ 00405bf4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405bf4(void)

{
  _DAT_00426c10 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_004204ac);
  return;
}


// ---- FUN_00405c09 @ 00405c09

void FUN_00405c09(void)

{
  FUN_00405c13();
  return;
}


// ---- FUN_00405c13 @ 00405c13

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c13(void)

{
  _DAT_00426c0c = RegisterWindowMessageA(s_PM_SET_VALUE_004204c0);
  return;
}


// ---- FUN_00405c28 @ 00405c28

void FUN_00405c28(void)

{
  FUN_00405c32();
  return;
}


// ---- FUN_00405c32 @ 00405c32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c32(void)

{
  _DAT_00426c08 = RegisterWindowMessageA(s_PM_SET_COARSE_004204d0);
  return;
}


// ---- FUN_00405c47 @ 00405c47

void FUN_00405c47(void)

{
  FUN_00405c51();
  return;
}


// ---- FUN_00405c51 @ 00405c51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c51(void)

{
  _DAT_00426c04 = RegisterWindowMessageA(s_PM_GET_COARSE_004204e0);
  return;
}


// ---- FUN_00405c66 @ 00405c66

void FUN_00405c66(void)

{
  FUN_00405c70();
  return;
}


// ---- FUN_00405c70 @ 00405c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c70(void)

{
  _DAT_00426c00 = RegisterWindowMessageA(s_PM_SET_NOTIFY_004204f0);
  return;
}


// ---- FUN_00405c85 @ 00405c85

void FUN_00405c85(void)

{
  FUN_00405c8f();
  return;
}


// ---- FUN_00405c8f @ 00405c8f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c8f(void)

{
  _DAT_00426bfc = RegisterWindowMessageA(s_PM_SET_USER_MODE_00420500);
  return;
}


// ---- FUN_00405ca4 @ 00405ca4

void FUN_00405ca4(void)

{
  FUN_00405cae();
  return;
}


// ---- FUN_00405cae @ 00405cae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405cae(void)

{
  _DAT_00426bf8 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_00420514);
  return;
}


// ---- FUN_00405cc3 @ 00405cc3

void FUN_00405cc3(void)

{
  FUN_00405ccd();
  return;
}


// ---- FUN_00405ccd @ 00405ccd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ccd(void)

{
  _DAT_00426bf4 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_00420530);
  return;
}


// ---- FUN_00405ce2 @ 00405ce2

void FUN_00405ce2(void)

{
  FUN_00405cec();
  return;
}


// ---- FUN_00405cec @ 00405cec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405cec(void)

{
  _DAT_00426bf0 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_0042054c);
  return;
}


// ---- FUN_00405d01 @ 00405d01

void FUN_00405d01(void)

{
  FUN_00405d0b();
  return;
}


// ---- FUN_00405d0b @ 00405d0b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405d0b(void)

{
  _DAT_00426bec = RegisterWindowMessageA(s_PM_IS_ENABLED_00420564);
  return;
}


// ---- FUN_00405d20 @ 00405d20

void FUN_00405d20(void)

{
  FUN_00405d2a();
  return;
}


// ---- FUN_00405d2a @ 00405d2a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405d2a(void)

{
  _DAT_00426be8 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_00420574);
  return;
}


// ---- FUN_00405d3f @ 00405d3f

void FUN_00405d3f(void)

{
  FUN_00405d49();
  return;
}


// ---- FUN_00405d49 @ 00405d49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405d49(void)

{
  _DAT_00426be4 = RegisterWindowMessageA(s_PM_IS_VECTOR_00420584);
  return;
}


// ---- FUN_00405d5e @ 00405d5e

void FUN_00405d5e(void)

{
  FUN_00405d68();
  return;
}


// ---- FUN_00405d68 @ 00405d68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405d68(void)

{
  _DAT_00426be0 = RegisterWindowMessageA(s_PM_IS_VISIBLE_00420594);
  return;
}


// ---- FUN_00405d7d @ 00405d7d

void FUN_00405d7d(void)

{
  FUN_00405d87();
  return;
}


// ---- FUN_00405d87 @ 00405d87

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405d87(void)

{
  _DAT_00426bdc = RegisterWindowMessageA(s_PM_IS_READ_ONLY_004205a4);
  return;
}


// ---- FUN_00405d9c @ 00405d9c

void FUN_00405d9c(void)

{
  FUN_00405da6();
  return;
}


// ---- FUN_00405da6 @ 00405da6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405da6(void)

{
  _DAT_00426bd8 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_004205b4);
  return;
}


// ---- FUN_00405dbb @ 00405dbb

void FUN_00405dbb(void)

{
  FUN_00405dc5();
  return;
}


// ---- FUN_00405dc5 @ 00405dc5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405dc5(void)

{
  _DAT_00426bd4 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_004205c8);
  return;
}


// ---- FUN_00405dda @ 00405dda

void FUN_00405dda(void)

{
  FUN_00405de4();
  return;
}


// ---- FUN_00405de4 @ 00405de4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405de4(void)

{
  _DAT_00426bd0 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_004205dc);
  return;
}


// ---- FUN_00405df9 @ 00405df9

void FUN_00405df9(void)

{
  FUN_00405e03();
  return;
}


// ---- FUN_00405e03 @ 00405e03

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e03(void)

{
  _DAT_00426bcc = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_004205f0);
  return;
}


// ---- FUN_00405e18 @ 00405e18

void FUN_00405e18(void)

{
  FUN_00405e22();
  return;
}


// ---- FUN_00405e22 @ 00405e22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e22(void)

{
  _DAT_00426bc8 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_00420608);
  return;
}


// ---- FUN_00405e37 @ 00405e37

void FUN_00405e37(void)

{
  FUN_00405e41();
  return;
}


// ---- FUN_00405e41 @ 00405e41

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e41(void)

{
  _DAT_00426bc4 = RegisterWindowMessageA(s_PM_SERVER_HELP_00420620);
  return;
}


// ---- FUN_00405e56 @ 00405e56

void FUN_00405e56(void)

{
  FUN_00405e60();
  return;
}


// ---- FUN_00405e60 @ 00405e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e60(void)

{
  _DAT_00426bc0 = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_00420630);
  return;
}


// ---- FUN_00405e75 @ 00405e75

void FUN_00405e75(void)

{
  FUN_00405e7f();
  return;
}


// ---- FUN_00405e7f @ 00405e7f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e7f(void)

{
  _DAT_00426bbc = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_0042064c);
  return;
}


// ---- FUN_00405e94 @ 00405e94

void FUN_00405e94(void)

{
  FUN_00405e9e();
  return;
}


// ---- FUN_00405e9e @ 00405e9e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e9e(void)

{
  _DAT_00426bb8 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_00420660);
  return;
}


// ---- FUN_00405eb3 @ 00405eb3

void FUN_00405eb3(void)

{
  FUN_00405ebd();
  return;
}


// ---- FUN_00405ebd @ 00405ebd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ebd(void)

{
  _DAT_00426bb4 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_0042067c);
  return;
}


// ---- FUN_00405ed2 @ 00405ed2

void FUN_00405ed2(void)

{
  FUN_00405edc();
  return;
}


// ---- FUN_00405edc @ 00405edc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405edc(void)

{
  _DAT_00426bb0 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_00420694);
  return;
}


// ---- FUN_00405ef1 @ 00405ef1

void FUN_00405ef1(void)

{
  FUN_00405efb();
  return;
}


// ---- FUN_00405efb @ 00405efb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405efb(void)

{
  _DAT_00426bac = RegisterWindowMessageA(s_PM_STEP_VALUE_004206a8);
  return;
}


// ---- FUN_00405f10 @ 00405f10

void FUN_00405f10(void)

{
  FUN_00405f1a();
  return;
}


// ---- FUN_00405f1a @ 00405f1a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f1a(void)

{
  _DAT_00426ba8 = RegisterWindowMessageA(s_PM_HELP_MODE_004206b8);
  return;
}


// ---- FUN_00405f2f @ 00405f2f

void FUN_00405f2f(void)

{
  FUN_00405f39();
  return;
}


// ---- FUN_00405f39 @ 00405f39

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f39(void)

{
  _DAT_00426ba4 = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_004206c8);
  return;
}


// ---- FUN_00405f4e @ 00405f4e

void FUN_00405f4e(void)

{
  FUN_00405f58();
  return;
}


// ---- FUN_00405f58 @ 00405f58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f58(void)

{
  _DAT_00426ba0 = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_004206dc);
  return;
}


// ---- FUN_00405f6d @ 00405f6d

void FUN_00405f6d(void)

{
  FUN_00405f77();
  return;
}


// ---- FUN_00405f77 @ 00405f77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f77(void)

{
  _DAT_00426b9c = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_004206f0);
  return;
}


// ---- FUN_00405f8c @ 00405f8c

void FUN_00405f8c(void)

{
  FUN_00405f96();
  return;
}


// ---- FUN_00405f96 @ 00405f96

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f96(void)

{
  _DAT_00426b98 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_00420708);
  return;
}


// ---- FUN_00405fab @ 00405fab

void FUN_00405fab(void)

{
  FUN_00405fb5();
  return;
}


// ---- FUN_00405fb5 @ 00405fb5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405fb5(void)

{
  _DAT_00426b94 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_00420724);
  return;
}


// ---- FUN_00405fca @ 00405fca

void FUN_00405fca(void)

{
  FUN_00405fd4();
  return;
}


// ---- FUN_00405fd4 @ 00405fd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405fd4(void)

{
  _DAT_00426b90 = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_00420738);
  return;
}


// ---- FUN_00405fe9 @ 00405fe9

void FUN_00405fe9(void)

{
  FUN_00405ff3();
  return;
}


// ---- FUN_00405ff3 @ 00405ff3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ff3(void)

{
  _DAT_00426b8c = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_00420750);
  return;
}


// ---- FUN_00406008 @ 00406008

void FUN_00406008(void)

{
  FUN_00406012();
  return;
}


// ---- FUN_00406012 @ 00406012

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406012(void)

{
  _DAT_00426b88 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_00420768);
  return;
}


// ---- FUN_00406027 @ 00406027

void FUN_00406027(void)

{
  FUN_00406031();
  return;
}


// ---- FUN_00406031 @ 00406031

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406031(void)

{
  _DAT_00426b84 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_00420780);
  return;
}


// ---- FUN_00406046 @ 00406046

void FUN_00406046(void)

{
  FUN_00406050();
  return;
}


// ---- FUN_00406050 @ 00406050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406050(void)

{
  _DAT_00426b80 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_00420798);
  return;
}


// ---- FUN_00406065 @ 00406065

void FUN_00406065(void)

{
  FUN_0040606f();
  return;
}


// ---- FUN_0040606f @ 0040606f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040606f(void)

{
  _DAT_00426b7c = RegisterWindowMessageA(s_PM_LUT_EDITOR_004207b4);
  return;
}


// ---- FUN_00406084 @ 00406084

void FUN_00406084(void)

{
  FUN_0040608e();
  return;
}


// ---- FUN_0040608e @ 0040608e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040608e(void)

{
  _DAT_00426b78 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_004207c4);
  return;
}


// ---- FUN_004060a3 @ 004060a3

void FUN_004060a3(void)

{
  FUN_004060ad();
  return;
}


// ---- FUN_004060ad @ 004060ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004060ad(void)

{
  _DAT_00426b74 = RegisterWindowMessageA(s_PM_SET_LUT_RGB_004207d8);
  return;
}


// ---- FUN_004060c2 @ 004060c2

void FUN_004060c2(void)

{
  FUN_004060cc();
  return;
}


// ---- FUN_004060cc @ 004060cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004060cc(void)

{
  _DAT_00426b70 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_004207e8);
  return;
}


// ---- FUN_004060e1 @ 004060e1

void FUN_004060e1(void)

{
  FUN_004060eb();
  return;
}


// ---- FUN_004060eb @ 004060eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004060eb(void)

{
  _DAT_00426b6c = RegisterWindowMessageA(s_PM_SET_LUT_BC_004207fc);
  return;
}


// ---- FUN_00406100 @ 00406100

void FUN_00406100(void)

{
  FUN_0040610a();
  return;
}


// ---- FUN_0040610a @ 0040610a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040610a(void)

{
  _DAT_00426b68 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_0042080c);
  return;
}


// ---- FUN_0040611f @ 0040611f

void FUN_0040611f(void)

{
  FUN_00406129();
  return;
}


// ---- FUN_00406129 @ 00406129

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406129(void)

{
  _DAT_00426b64 = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_00420820);
  return;
}


// ---- FUN_0040613e @ 0040613e

void FUN_0040613e(void)

{
  FUN_00406148();
  return;
}


// ---- FUN_00406148 @ 00406148

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406148(void)

{
  _DAT_00426b60 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_00420834);
  return;
}


// ---- FUN_0040615d @ 0040615d

void FUN_0040615d(void)

{
  FUN_00406167();
  return;
}


// ---- FUN_00406167 @ 00406167

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406167(void)

{
  _DAT_00426b5c = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_00420848);
  return;
}


// ---- FUN_0040617c @ 0040617c

void FUN_0040617c(void)

{
  FUN_00406186();
  return;
}


// ---- FUN_00406186 @ 00406186

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406186(void)

{
  _DAT_00426b58 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_0042085c);
  return;
}


// ---- FUN_0040619b @ 0040619b

void FUN_0040619b(void)

{
  FUN_004061a5();
  return;
}


// ---- FUN_004061a5 @ 004061a5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004061a5(void)

{
  _DAT_00426b54 = RegisterWindowMessageA(s_PM_RGB_READ_00420870);
  return;
}


// ---- FUN_004061ba @ 004061ba

void FUN_004061ba(void)

{
  FUN_004061c4();
  return;
}


// ---- FUN_004061c4 @ 004061c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004061c4(void)

{
  _DAT_00426b50 = RegisterWindowMessageA(s_PM_LUT_LOAD_0042087c);
  return;
}


// ---- FUN_004061d9 @ 004061d9

void FUN_004061d9(void)

{
  FUN_004061e3();
  return;
}


// ---- FUN_004061e3 @ 004061e3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004061e3(void)

{
  _DAT_00426b4c = RegisterWindowMessageA(s_PM_LUT_READ_00420888);
  return;
}


// ---- FUN_004061f8 @ 004061f8

void FUN_004061f8(void)

{
  FUN_00406202();
  return;
}


// ---- FUN_00406202 @ 00406202

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406202(void)

{
  _DAT_00426b48 = RegisterWindowMessageA(s_PM_READ_COLOR_00420894);
  return;
}


// ---- FUN_00406217 @ 00406217

void FUN_00406217(void)

{
  FUN_00406221();
  return;
}


// ---- FUN_00406221 @ 00406221

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406221(void)

{
  _DAT_00426b44 = RegisterWindowMessageA(s_PM_LUT_FILL_004208a4);
  return;
}


// ---- FUN_00406236 @ 00406236

void FUN_00406236(void)

{
  FUN_00406240();
  return;
}


// ---- FUN_00406240 @ 00406240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406240(void)

{
  _DAT_00426b40 = RegisterWindowMessageA(s_PM_LUT_QLIN_004208b0);
  return;
}


// ---- FUN_00406255 @ 00406255

void FUN_00406255(void)

{
  FUN_0040625f();
  return;
}


// ---- FUN_0040625f @ 0040625f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040625f(void)

{
  _DAT_00426b3c = RegisterWindowMessageA(s_PM_LUT_QINV_004208bc);
  return;
}


// ---- FUN_00406274 @ 00406274

void FUN_00406274(void)

{
  FUN_0040627e();
  return;
}


// ---- FUN_0040627e @ 0040627e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040627e(void)

{
  _DAT_00426b38 = RegisterWindowMessageA(s_PM_LUT_SAVE_004208c8);
  return;
}


// ---- FUN_00406293 @ 00406293

void FUN_00406293(void)

{
  FUN_0040629d();
  return;
}


// ---- FUN_0040629d @ 0040629d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040629d(void)

{
  _DAT_00426b34 = RegisterWindowMessageA(s_PM_LUT_RESTORE_004208d4);
  return;
}


// ---- FUN_004062b2 @ 004062b2

void FUN_004062b2(void)

{
  FUN_004062bc();
  return;
}


// ---- FUN_004062bc @ 004062bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004062bc(void)

{
  _DAT_00426b30 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_004208e4);
  return;
}


// ---- FUN_004062d1 @ 004062d1

void FUN_004062d1(void)

{
  FUN_004062db();
  return;
}


// ---- FUN_004062db @ 004062db

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004062db(void)

{
  _DAT_00426b2c = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_004208f8);
  return;
}


// ---- FUN_004062f0 @ 004062f0

void FUN_004062f0(void)

{
  FUN_004062fa();
  return;
}


// ---- FUN_004062fa @ 004062fa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004062fa(void)

{
  _DAT_00426b28 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_0042090c);
  return;
}


// ---- FUN_0040630f @ 0040630f

void FUN_0040630f(void)

{
  FUN_00406319();
  return;
}


// ---- FUN_00406319 @ 00406319

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406319(void)

{
  _DAT_00426b24 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_00420920);
  return;
}


// ---- FUN_0040632e @ 0040632e

void FUN_0040632e(void)

{
  FUN_00406338();
  return;
}


// ---- FUN_00406338 @ 00406338

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406338(void)

{
  _DAT_00426b20 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_00420934);
  return;
}


// ---- FUN_0040634d @ 0040634d

void FUN_0040634d(void)

{
  FUN_00406357();
  return;
}


// ---- FUN_00406357 @ 00406357

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406357(void)

{
  _DAT_00426b1c = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_00420948);
  return;
}


// ---- FUN_0040636c @ 0040636c

void FUN_0040636c(void)

{
  FUN_00406376();
  return;
}


// ---- FUN_00406376 @ 00406376

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406376(void)

{
  _DAT_00426b18 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_00420960);
  return;
}


// ---- FUN_0040638b @ 0040638b

void FUN_0040638b(void)

{
  FUN_00406395();
  return;
}


// ---- FUN_00406395 @ 00406395

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406395(void)

{
  _DAT_00426b14 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_00420974);
  return;
}


// ---- FUN_004063aa @ 004063aa

void FUN_004063aa(void)

{
  FUN_004063b4();
  return;
}


// ---- FUN_004063b4 @ 004063b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004063b4(void)

{
  _DAT_00426b10 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_00420988);
  return;
}


// ---- FUN_004063c9 @ 004063c9

void FUN_004063c9(void)

{
  FUN_004063d3();
  return;
}


// ---- FUN_004063d3 @ 004063d3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004063d3(void)

{
  _DAT_00426b0c = RegisterWindowMessageA(s_PM_D_SET_LICENCES_0042099c);
  return;
}


// ---- FUN_004063e8 @ 004063e8

void FUN_004063e8(void)

{
  FUN_004063f2();
  return;
}


// ---- FUN_004063f2 @ 004063f2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004063f2(void)

{
  _DAT_00426b08 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_004209b0);
  return;
}


// ---- FUN_00406407 @ 00406407

void FUN_00406407(void)

{
  FUN_00406411();
  return;
}


// ---- FUN_00406411 @ 00406411

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406411(void)

{
  _DAT_00426b04 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_004209c8);
  return;
}


// ---- FUN_00406426 @ 00406426

void FUN_00406426(void)

{
  FUN_00406430();
  return;
}


// ---- FUN_00406430 @ 00406430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406430(void)

{
  _DAT_00426b00 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_004209e0);
  return;
}


// ---- FUN_00406445 @ 00406445

void FUN_00406445(void)

{
  FUN_0040644f();
  return;
}


// ---- FUN_0040644f @ 0040644f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040644f(void)

{
  _DAT_00426afc = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_004209f4);
  return;
}


// ---- FUN_00406464 @ 00406464

void FUN_00406464(void)

{
  FUN_0040646e();
  return;
}


// ---- FUN_0040646e @ 0040646e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040646e(void)

{
  _DAT_00426af8 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_00420a08);
  return;
}


// ---- FUN_00406483 @ 00406483

void FUN_00406483(void)

{
  FUN_0040648d();
  return;
}


// ---- FUN_0040648d @ 0040648d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040648d(void)

{
  _DAT_00426af4 = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_00420a1c);
  return;
}


// ---- FUN_004064a2 @ 004064a2

void FUN_004064a2(void)

{
  FUN_004064ac();
  return;
}


// ---- FUN_004064ac @ 004064ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004064ac(void)

{
  _DAT_00426af0 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_00420a30);
  return;
}


// ---- FUN_004064c1 @ 004064c1

void FUN_004064c1(void)

{
  FUN_004064cb();
  return;
}


// ---- FUN_004064cb @ 004064cb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004064cb(void)

{
  _DAT_00426aec = RegisterWindowMessageA(s_PM_SAVE_TIFF_00420a44);
  return;
}


// ---- FUN_004064e0 @ 004064e0

void FUN_004064e0(void)

{
  FUN_004064ea();
  return;
}


// ---- FUN_004064ea @ 004064ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004064ea(void)

{
  _DAT_00426ae8 = RegisterWindowMessageA(s_PM_LOAD_TIFF_00420a54);
  return;
}


// ---- FUN_004064ff @ 004064ff

void FUN_004064ff(void)

{
  FUN_00406509();
  return;
}


// ---- FUN_00406509 @ 00406509

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406509(void)

{
  _DAT_00426ae4 = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_00420a64);
  return;
}


// ---- FUN_0040651e @ 0040651e

void FUN_0040651e(void)

{
  FUN_00406528();
  return;
}


// ---- FUN_00406528 @ 00406528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406528(void)

{
  _DAT_00426ae0 = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_00420a74);
  return;
}


// ---- FUN_0040653d @ 0040653d

void FUN_0040653d(void)

{
  FUN_00406547();
  return;
}


// ---- FUN_00406547 @ 00406547

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406547(void)

{
  _DAT_00426adc = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_00420a88);
  return;
}


// ---- FUN_0040655c @ 0040655c

void FUN_0040655c(void)

{
  FUN_00406566();
  return;
}


// ---- FUN_00406566 @ 00406566

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406566(void)

{
  _DAT_00426ad8 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_00420aa0);
  return;
}


// ---- FUN_0040657b @ 0040657b

void FUN_0040657b(void)

{
  FUN_00406585();
  return;
}


// ---- FUN_00406585 @ 00406585

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406585(void)

{
  _DAT_00426ad4 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_00420ab4);
  return;
}


// ---- FUN_0040659a @ 0040659a

void FUN_0040659a(void)

{
  FUN_004065a4();
  return;
}


// ---- FUN_004065a4 @ 004065a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004065a4(void)

{
  _DAT_00426ad0 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_00420ac8);
  return;
}


// ---- FUN_004065b9 @ 004065b9

void FUN_004065b9(void)

{
  FUN_004065c3();
  return;
}


// ---- FUN_004065c3 @ 004065c3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004065c3(void)

{
  _DAT_00426acc = RegisterWindowMessageA(s_PM_GET_LINE_DATA_00420ae0);
  return;
}


// ---- FUN_004065d8 @ 004065d8

void FUN_004065d8(void)

{
  FUN_004065e2();
  return;
}


// ---- FUN_004065e2 @ 004065e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004065e2(void)

{
  _DAT_00426ac8 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_00420af4);
  return;
}


// ---- FUN_004065f7 @ 004065f7

void FUN_004065f7(void)

{
  FUN_00406601();
  return;
}


// ---- FUN_00406601 @ 00406601

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406601(void)

{
  _DAT_00426ac4 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_00420b10);
  return;
}


// ---- FUN_00406616 @ 00406616

void FUN_00406616(void)

{
  FUN_00406620();
  return;
}


// ---- FUN_00406620 @ 00406620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406620(void)

{
  _DAT_00426ac0 = RegisterWindowMessageA(s_PM_CLIP_COPY_00420b20);
  return;
}


// ---- FUN_00406635 @ 00406635

void FUN_00406635(void)

{
  FUN_0040663f();
  return;
}


// ---- FUN_0040663f @ 0040663f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040663f(void)

{
  _DAT_00426abc = RegisterWindowMessageA(s_PM_CLIP_INFO_00420b30);
  return;
}


// ---- FUN_00406654 @ 00406654

void FUN_00406654(void)

{
  FUN_0040665e();
  return;
}


// ---- FUN_0040665e @ 0040665e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040665e(void)

{
  _DAT_00426ab8 = RegisterWindowMessageA(s_PM_CLIP_PASTE_00420b40);
  return;
}


// ---- FUN_00406673 @ 00406673

void FUN_00406673(void)

{
  FUN_0040667d();
  return;
}


// ---- FUN_0040667d @ 0040667d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040667d(void)

{
  _DAT_00426ab4 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_00420b50);
  return;
}


// ---- FUN_00406692 @ 00406692

void FUN_00406692(void)

{
  FUN_0040669c();
  return;
}


// ---- FUN_0040669c @ 0040669c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040669c(void)

{
  _DAT_00426ab0 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_00420b60);
  return;
}


// ---- FUN_004066b1 @ 004066b1

void FUN_004066b1(void)

{
  FUN_004066bb();
  return;
}


// ---- FUN_004066bb @ 004066bb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004066bb(void)

{
  _DAT_00426aac = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_00420b74);
  return;
}


// ---- FUN_004066d0 @ 004066d0

void FUN_004066d0(void)

{
  FUN_004066da();
  return;
}


// ---- FUN_004066da @ 004066da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004066da(void)

{
  _DAT_00426aa8 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_00420b88);
  return;
}


// ---- FUN_004066ef @ 004066ef

void FUN_004066ef(void)

{
  FUN_004066f9();
  return;
}


// ---- FUN_004066f9 @ 004066f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004066f9(void)

{
  _DAT_00426aa4 = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_00420b9c);
  return;
}


// ---- FUN_0040670e @ 0040670e

void FUN_0040670e(void)

{
  FUN_00406718();
  return;
}


// ---- FUN_00406718 @ 00406718

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406718(void)

{
  _DAT_00426aa0 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_00420bac);
  return;
}


// ---- FUN_0040672d @ 0040672d

void FUN_0040672d(void)

{
  FUN_00406737();
  return;
}


// ---- FUN_00406737 @ 00406737

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406737(void)

{
  _DAT_00426a9c = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_00420bc4);
  return;
}


// ---- FUN_0040674c @ 0040674c

void FUN_0040674c(void)

{
  FUN_00406756();
  return;
}


// ---- FUN_00406756 @ 00406756

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406756(void)

{
  _DAT_00426a98 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_00420bdc);
  return;
}


// ---- FUN_0040676b @ 0040676b

void FUN_0040676b(void)

{
  FUN_00406775();
  return;
}


// ---- FUN_00406775 @ 00406775

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406775(void)

{
  _DAT_00426a94 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_00420bf8);
  return;
}


// ---- FUN_0040678a @ 0040678a

void FUN_0040678a(void)

{
  FUN_00406794();
  return;
}


// ---- FUN_00406794 @ 00406794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406794(void)

{
  _DAT_00426a90 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_00420c14);
  return;
}


// ---- FUN_004067a9 @ 004067a9

void FUN_004067a9(void)

{
  FUN_004067b3();
  return;
}


// ---- FUN_004067b3 @ 004067b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004067b3(void)

{
  _DAT_00426a8c = RegisterWindowMessageA(s_PM_STAGE_LABEL_00420c2c);
  return;
}


// ---- FUN_004067c8 @ 004067c8

void FUN_004067c8(void)

{
  FUN_004067d2();
  return;
}


// ---- FUN_004067d2 @ 004067d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004067d2(void)

{
  _DAT_00426a88 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_00420c3c);
  return;
}


// ---- FUN_004067e7 @ 004067e7

void FUN_004067e7(void)

{
  FUN_004067f1();
  return;
}


// ---- FUN_004067f1 @ 004067f1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004067f1(void)

{
  _DAT_00426a84 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_00420c50);
  return;
}


// ---- FUN_00406806 @ 00406806

void FUN_00406806(void)

{
  FUN_00406810();
  return;
}


// ---- FUN_00406810 @ 00406810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406810(void)

{
  _DAT_00426a80 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_00420c6c);
  return;
}


// ---- FUN_00406825 @ 00406825

void FUN_00406825(void)

{
  FUN_0040682f();
  return;
}


// ---- FUN_0040682f @ 0040682f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040682f(void)

{
  _DAT_00426a7c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_00420c88);
  return;
}


// ---- FUN_00406844 @ 00406844

void FUN_00406844(void)

{
  FUN_0040684e();
  return;
}


// ---- FUN_0040684e @ 0040684e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040684e(void)

{
  _DAT_00426a78 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_00420ca0);
  return;
}


// ---- FUN_00406863 @ 00406863

void FUN_00406863(void)

{
  FUN_0040686d();
  return;
}


// ---- FUN_0040686d @ 0040686d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040686d(void)

{
  _DAT_00426a74 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_00420cb8);
  return;
}


// ---- FUN_00406882 @ 00406882

void FUN_00406882(void)

{
  FUN_0040688c();
  return;
}


// ---- FUN_0040688c @ 0040688c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040688c(void)

{
  _DAT_00426a70 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_00420cd8);
  return;
}


// ---- FUN_004068a1 @ 004068a1

void FUN_004068a1(void)

{
  FUN_004068ab();
  return;
}


// ---- FUN_004068ab @ 004068ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004068ab(void)

{
  _DAT_00426a6c = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_00420cf4);
  return;
}


// ---- FUN_004068c0 @ 004068c0

void FUN_004068c0(void)

{
  FUN_004068ca();
  return;
}


// ---- FUN_004068ca @ 004068ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004068ca(void)

{
  _DAT_00426a68 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_00420d10);
  return;
}


// ---- FUN_004068df @ 004068df

void FUN_004068df(void)

{
  FUN_004068e9();
  return;
}


// ---- FUN_004068e9 @ 004068e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004068e9(void)

{
  _DAT_00426a64 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_00420d2c);
  return;
}


// ---- FUN_004068fe @ 004068fe

void FUN_004068fe(void)

{
  FUN_00406908();
  return;
}


// ---- FUN_00406908 @ 00406908

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406908(void)

{
  _DAT_00426a60 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_00420d44);
  return;
}


// ---- FUN_0040691d @ 0040691d

void FUN_0040691d(void)

{
  FUN_00406927();
  return;
}


// ---- FUN_00406927 @ 00406927

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406927(void)

{
  _DAT_00426a5c = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_00420d5c);
  return;
}


// ---- FUN_0040693c @ 0040693c

void FUN_0040693c(void)

{
  FUN_00406946();
  return;
}


// ---- FUN_00406946 @ 00406946

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406946(void)

{
  _DAT_00426a58 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_00420d78);
  return;
}


// ---- FUN_0040695b @ 0040695b

void FUN_0040695b(void)

{
  FUN_00406965();
  return;
}


// ---- FUN_00406965 @ 00406965

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406965(void)

{
  _DAT_00426a54 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_00420d98);
  return;
}


// ---- FUN_0040697a @ 0040697a

void FUN_0040697a(void)

{
  FUN_00406984();
  return;
}


// ---- FUN_00406984 @ 00406984

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406984(void)

{
  _DAT_00426a50 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_00420dac);
  return;
}


// ---- FUN_00406999 @ 00406999

void FUN_00406999(void)

{
  FUN_004069a3();
  return;
}


// ---- FUN_004069a3 @ 004069a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004069a3(void)

{
  _DAT_00426a4c = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_00420dc4);
  return;
}


// ---- FUN_004069b8 @ 004069b8

void FUN_004069b8(void)

{
  FUN_004069c2();
  return;
}


// ---- FUN_004069c2 @ 004069c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004069c2(void)

{
  _DAT_00426a48 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_00420dd8);
  return;
}


// ---- FUN_004069d7 @ 004069d7

void FUN_004069d7(void)

{
  FUN_004069e1();
  return;
}


// ---- FUN_004069e1 @ 004069e1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004069e1(void)

{
  _DAT_00426a44 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_00420df4);
  return;
}


// ---- FUN_004069f6 @ 004069f6

void FUN_004069f6(void)

{
  FUN_00406a00();
  return;
}


// ---- FUN_00406a00 @ 00406a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a00(void)

{
  _DAT_00426a40 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_00420e04);
  return;
}


// ---- FUN_00406a15 @ 00406a15

void FUN_00406a15(void)

{
  FUN_00406a1f();
  return;
}


// ---- FUN_00406a1f @ 00406a1f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a1f(void)

{
  _DAT_00426a3c = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_00420e18);
  return;
}


// ---- FUN_00406a34 @ 00406a34

void FUN_00406a34(void)

{
  FUN_00406a3e();
  return;
}


// ---- FUN_00406a3e @ 00406a3e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a3e(void)

{
  _DAT_00426a38 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_00420e30);
  return;
}


// ---- FUN_00406a53 @ 00406a53

void FUN_00406a53(void)

{
  FUN_00406a5d();
  return;
}


// ---- FUN_00406a5d @ 00406a5d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a5d(void)

{
  _DAT_00426a34 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_00420e40);
  return;
}


// ---- FUN_00406a72 @ 00406a72

void FUN_00406a72(void)

{
  FUN_00406a7c();
  return;
}


// ---- FUN_00406a7c @ 00406a7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a7c(void)

{
  _DAT_00426a30 = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_00420e54);
  return;
}


// ---- FUN_00406a91 @ 00406a91

void FUN_00406a91(void)

{
  FUN_00406a9b();
  return;
}


// ---- FUN_00406a9b @ 00406a9b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a9b(void)

{
  _DAT_00426a2c = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_00420e70);
  return;
}


// ---- FUN_00406ab0 @ 00406ab0

void FUN_00406ab0(void)

{
  FUN_00406aba();
  return;
}


// ---- FUN_00406aba @ 00406aba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406aba(void)

{
  _DAT_00426a28 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_00420e8c);
  return;
}


// ---- FUN_00406acf @ 00406acf

void FUN_00406acf(void)

{
  FUN_00406ad9();
  return;
}


// ---- FUN_00406ad9 @ 00406ad9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406ad9(void)

{
  _DAT_00426a24 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_00420ea0);
  return;
}


// ---- FUN_00406aee @ 00406aee

void FUN_00406aee(void)

{
  FUN_00406af8();
  return;
}


// ---- FUN_00406af8 @ 00406af8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406af8(void)

{
  _DAT_00426a20 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_00420ec0);
  return;
}


// ---- FUN_00406b0d @ 00406b0d

void FUN_00406b0d(void)

{
  FUN_00406b17();
  return;
}


// ---- FUN_00406b17 @ 00406b17

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b17(void)

{
  _DAT_00426a1c = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_00420ee4);
  return;
}


// ---- FUN_00406b2c @ 00406b2c

void FUN_00406b2c(void)

{
  FUN_00406b36();
  return;
}


// ---- FUN_00406b36 @ 00406b36

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b36(void)

{
  _DAT_00426a18 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_00420f04);
  return;
}


// ---- FUN_00406b4b @ 00406b4b

void FUN_00406b4b(void)

{
  FUN_00406b55();
  return;
}


// ---- FUN_00406b55 @ 00406b55

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b55(void)

{
  _DAT_00426a14 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_00420f24);
  return;
}


// ---- FUN_00406b6a @ 00406b6a

void FUN_00406b6a(void)

{
  FUN_00406b74();
  return;
}


// ---- FUN_00406b74 @ 00406b74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b74(void)

{
  _DAT_00426a10 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_00420f44);
  return;
}


// ---- FUN_00406b89 @ 00406b89

void FUN_00406b89(void)

{
  FUN_00406b93();
  return;
}


// ---- FUN_00406b93 @ 00406b93

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b93(void)

{
  _DAT_00426a0c = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_00420f64);
  return;
}


// ---- FUN_00406ba8 @ 00406ba8

void FUN_00406ba8(void)

{
  FUN_00406bb2();
  return;
}


// ---- FUN_00406bb2 @ 00406bb2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406bb2(void)

{
  _DAT_00426a08 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_00420f84);
  return;
}


// ---- FUN_00406bc7 @ 00406bc7

void FUN_00406bc7(void)

{
  FUN_00406bd1();
  return;
}


// ---- FUN_00406bd1 @ 00406bd1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406bd1(void)

{
  _DAT_00426a04 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_00420f9c);
  return;
}


// ---- FUN_00406be6 @ 00406be6

void FUN_00406be6(void)

{
  FUN_00406bf0();
  return;
}


// ---- FUN_00406bf0 @ 00406bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406bf0(void)

{
  _DAT_00426a00 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_00420fb8);
  return;
}


// ---- FUN_00406c05 @ 00406c05

void FUN_00406c05(void)

{
  FUN_00406c0f();
  return;
}


// ---- FUN_00406c0f @ 00406c0f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406c0f(void)

{
  _DAT_004269fc = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_00420fd4);
  return;
}


// ---- FUN_00406c24 @ 00406c24

void FUN_00406c24(void)

{
  FUN_00406c2e();
  return;
}


// ---- FUN_00406c2e @ 00406c2e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406c2e(void)

{
  _DAT_004269f8 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_00420fe8);
  return;
}


// ---- FUN_00406c43 @ 00406c43

void FUN_00406c43(void)

{
  FUN_00406c4d();
  return;
}


// ---- FUN_00406c4d @ 00406c4d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406c4d(void)

{
  _DAT_004269f4 = RegisterWindowMessageA(s_PM_READ_USER_AREA_00420ffc);
  return;
}


// ---- FUN_00406c62 @ 00406c62

void FUN_00406c62(void)

{
  FUN_00406c6c();
  return;
}


// ---- FUN_00406c6c @ 00406c6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406c6c(void)

{
  _DAT_004269f0 = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_00421010);
  return;
}


// ---- FUN_00406c81 @ 00406c81

void FUN_00406c81(void)

{
  FUN_00406c8b();
  return;
}


// ---- FUN_00406c8b @ 00406c8b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406c8b(void)

{
  _DAT_004269ec = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_00421024);
  return;
}


// ---- FUN_00406ca0 @ 00406ca0

void FUN_00406ca0(void)

{
  FUN_00406caa();
  return;
}


// ---- FUN_00406caa @ 00406caa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406caa(void)

{
  _DAT_004269e8 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_00421038);
  return;
}


// ---- FUN_00406cbf @ 00406cbf

void FUN_00406cbf(void)

{
  FUN_00406cc9();
  return;
}


// ---- FUN_00406cc9 @ 00406cc9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406cc9(void)

{
  _DAT_004269e4 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_0042104c);
  return;
}


// ---- FUN_00406cde @ 00406cde

void FUN_00406cde(void)

{
  FUN_00406ce8();
  return;
}


// ---- FUN_00406ce8 @ 00406ce8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406ce8(void)

{
  _DAT_004269e0 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_00421064);
  return;
}


// ---- FUN_00406cfd @ 00406cfd

void FUN_00406cfd(void)

{
  FUN_00406d07();
  return;
}


// ---- FUN_00406d07 @ 00406d07

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d07(void)

{
  _DAT_004269dc = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_0042107c);
  return;
}


// ---- FUN_00406d1c @ 00406d1c

void FUN_00406d1c(void)

{
  FUN_00406d26();
  return;
}


// ---- FUN_00406d26 @ 00406d26

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d26(void)

{
  _DAT_004269d8 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_00421090);
  return;
}


// ---- FUN_00406d3b @ 00406d3b

void FUN_00406d3b(void)

{
  FUN_00406d45();
  return;
}


// ---- FUN_00406d45 @ 00406d45

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d45(void)

{
  _DAT_004269d4 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_004210a4);
  return;
}


// ---- FUN_00406d5a @ 00406d5a

void FUN_00406d5a(void)

{
  FUN_00406d64();
  return;
}


// ---- FUN_00406d64 @ 00406d64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d64(void)

{
  _DAT_004269d0 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_004210b8);
  return;
}


// ---- FUN_00406d79 @ 00406d79

undefined * FUN_00406d79(void)

{
  return messageMap_exref;
}


// ---- FUN_00406d83 @ 00406d83

undefined ** FUN_00406d83(void)

{
  return &PTR_FUN_0041a6b8;
}


// ---- FUN_00406d93 @ 00406d93

CWinApp * __fastcall FUN_00406d93(CWinApp *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418c39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CWinApp::CWinApp(param_1,(char *)0x0);
  local_8 = 0;
  CString::CString((CString *)(param_1 + 0xc4));
  *(undefined ***)param_1 = &PTR_LAB_0041a728;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00406e09 @ 00406e09

void __fastcall FUN_00406e09(CWinApp *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00418c5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = &PTR_LAB_0041a728;
  local_8 = 1;
  if ((DAT_004269cc != (int *)0x0) && (DAT_004269cc != (int *)0x0)) {
    (**(code **)(*DAT_004269cc + 4))(1);
  }
  if ((*(int *)(param_1 + 0xcc) != 0) && (*(int **)(param_1 + 0xcc) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xcc) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 200);
  local_8 = local_8 & 0xffffff00;
  CString::~CString((CString *)(param_1 + 0xc4));
  local_8 = 0xffffffff;
  CWinApp::~CWinApp(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_00406eec @ 00406eec

void FUN_00406eec(void)

{
  FUN_00406efb();
  FUN_00406f0a();
  return;
}


// ---- FUN_00406efb @ 00406efb

void FUN_00406efb(void)

{
  FUN_00406d93((CWinApp *)&DAT_004268f8);
  return;
}


// ---- FUN_00406f0a @ 00406f0a

void FUN_00406f0a(void)

{
  FUN_004188e6(FUN_00406f1c);
  return;
}


// ---- FUN_00406f1c @ 00406f1c

void FUN_00406f1c(void)

{
  FUN_00406e09((CWinApp *)&DAT_004268f8);
  return;
}


// ---- FUN_00406f2b @ 00406f2b

void FUN_00406f2b(void)

{
  FUN_00406f35();
  return;
}


// ---- FUN_00406f35 @ 00406f35

void FUN_00406f35(void)

{
  void *this;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418c6f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_00404e50(0x14);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_0040f330(this,s_LUT_Editor_004210cc);
  }
  DAT_004269cc = local_1c;
  ExceptionList = local_10;
  return;
}


// ---- FUN_00406fa4 @ 00406fa4

undefined4 __fastcall FUN_00406fa4(CWinApp *param_1)

{
  LPCSTR lpWindowName;
  HWND pHVar1;
  undefined4 *puVar2;
  CSingleDocTemplate *this;
  int iVar3;
  undefined4 uVar4;
  CDocTemplate *local_64;
  undefined4 *local_60;
  CCommandLineInfo local_3c [36];
  CString local_18 [4];
  CDocTemplate *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418c9f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  CString::LoadStringA(local_18,0x7d02);
  lpWindowName = (LPCSTR)FUN_004072e0((undefined4 *)local_18);
  pHVar1 = FindWindowA((LPCSTR)0x0,lpWindowName);
  if (pHVar1 == (HWND)0x0) {
    AfxEnableControlContainer((COccManager *)0x0);
    CWinApp::Enable3dControls(param_1);
    puVar2 = (undefined4 *)FUN_00404e50(0x20);
    local_8._0_1_ = 1;
    if (puVar2 == (undefined4 *)0x0) {
      local_60 = (undefined4 *)0x0;
    }
    else {
      local_60 = FUN_004127d7(puVar2);
    }
    local_8._0_1_ = 0;
    *(undefined4 **)(param_1 + 0xcc) = local_60;
    this = (CSingleDocTemplate *)FUN_00404e50(0x6c);
    local_8._0_1_ = 2;
    if (this == (CSingleDocTemplate *)0x0) {
      local_64 = (CDocTemplate *)0x0;
    }
    else {
      local_64 = (CDocTemplate *)
                 CSingleDocTemplate::CSingleDocTemplate
                           (this,0x80,(CRuntimeClass *)&PTR_s_CLEOLutDoc_0041a8a8,
                            (CRuntimeClass *)&PTR_s_CMainFrame_0041ac80,
                            (CRuntimeClass *)&PTR_s_CLEOLutView_0041a998);
    }
    local_8._0_1_ = 0;
    local_14 = local_64;
    CWinApp::AddDocTemplate(param_1,local_64);
    CWinApp::EnableShellOpen(param_1);
    CWinApp::RegisterShellFileTypes(param_1,1);
    CCommandLineInfo::CCommandLineInfo(local_3c);
    local_8._0_1_ = 3;
    CWinApp::ParseCommandLine(param_1,local_3c);
    iVar3 = CWinApp::ProcessShellCommand(param_1,local_3c);
    if (iVar3 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      CCommandLineInfo::~CCommandLineInfo(local_3c);
      local_8 = 0xffffffff;
      CString::~CString(local_18);
      uVar4 = 0;
    }
    else {
      CWnd::DragAcceptFiles(*(CWnd **)(param_1 + 0x20),1);
      local_8 = (uint)local_8._1_3_ << 8;
      CCommandLineInfo::~CCommandLineInfo(local_3c);
      local_8 = 0xffffffff;
      CString::~CString(local_18);
      uVar4 = 1;
    }
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    uVar4 = 0;
  }
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_0040715a @ 0040715a

void __thiscall FUN_0040715a(void *this,char *param_1)

{
  CString *pCVar1;
  undefined4 uVar2;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418cb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (CString *)operator+(local_14,param_1);
  local_8 = 0;
  CString::operator=((CString *)((int)this + 0xc4),pCVar1);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  if (*(int *)((int)this + 200) == 0) {
    *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0x90);
  }
  uVar2 = FUN_004072e0((undefined4 *)((int)this + 0xc4));
  *(undefined4 *)((int)this + 0x90) = uVar2;
  ExceptionList = local_10;
  return;
}


// ---- FUN_00407200 @ 00407200

CDialog * __fastcall FUN_00407200(CDialog *param_1)

{
  CDialog::CDialog(param_1,99,(CWnd *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_0041a7cc;
  return param_1;
}


// ---- DoDataExchange @ 00407223

/* Library Function - Single Match
    protected: virtual void __thiscall CFindReplaceDialog::DoDataExchange(class CDataExchange *)
   
   Library: Visual Studio 2008 Debug */

void __thiscall CFindReplaceDialog::DoDataExchange(CFindReplaceDialog *this,CDataExchange *param_1)

{
  FUN_00404f40();
  return;
}


// ---- FUN_0040723c @ 0040723c

undefined * FUN_0040723c(void)

{
  return messageMap_exref;
}


// ---- FUN_00407246 @ 00407246

undefined ** FUN_00407246(void)

{
  return &PTR_FUN_0041a708;
}


// ---- FUN_00407256 @ 00407256

void FUN_00407256(void)

{
  CDialog local_70 [96];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418cc5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00407200(local_70);
  local_8 = 0;
  CDialog::DoModal(local_70);
  local_8 = 0xffffffff;
  FUN_00407320(local_70);
  ExceptionList = local_10;
  return;
}


// ---- FUN_004072b0 @ 004072b0

CWinApp * __thiscall FUN_004072b0(void *this,uint param_1)

{
  FUN_00406e09(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_004072e0 @ 004072e0

undefined4 __fastcall FUN_004072e0(undefined4 *param_1)

{
  return *param_1;
}


// ---- FUN_004072f0 @ 004072f0

CDialog * __thiscall FUN_004072f0(void *this,uint param_1)

{
  FUN_00407320(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_00407320 @ 00407320

void __fastcall FUN_00407320(CDialog *param_1)

{
  CDialog::~CDialog(param_1);
  return;
}


// ---- FUN_00407340 @ 00407340

void FUN_00407340(void)

{
  FUN_0040734a();
  return;
}


// ---- FUN_0040734a @ 0040734a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040734a(void)

{
  _DAT_00427184 = RegisterWindowMessageA(s_LEO_D_SET_STATE_004210e4);
  return;
}


// ---- FUN_0040735f @ 0040735f

void FUN_0040735f(void)

{
  FUN_00407369();
  return;
}


// ---- FUN_00407369 @ 00407369

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407369(void)

{
  _DAT_00427180 = RegisterWindowMessageA(s_LEO_D_SET_STRING_004210f4);
  return;
}


// ---- FUN_0040737e @ 0040737e

void FUN_0040737e(void)

{
  FUN_00407388();
  return;
}


// ---- FUN_00407388 @ 00407388

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407388(void)

{
  _DAT_0042717c = RegisterWindowMessageA(s_LEO_D_SET_VALUE_00421108);
  return;
}


// ---- FUN_0040739d @ 0040739d

void FUN_0040739d(void)

{
  FUN_004073a7();
  return;
}


// ---- FUN_004073a7 @ 004073a7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004073a7(void)

{
  _DAT_00427178 = RegisterWindowMessageA(s_LEO_D_SET_XY_00421118);
  return;
}


// ---- FUN_004073bc @ 004073bc

void FUN_004073bc(void)

{
  FUN_004073c6();
  return;
}


// ---- FUN_004073c6 @ 004073c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004073c6(void)

{
  _DAT_00427174 = RegisterWindowMessageA(s_LEO_D_GET_XY_00421128);
  return;
}


// ---- FUN_004073db @ 004073db

void FUN_004073db(void)

{
  FUN_004073e5();
  return;
}


// ---- FUN_004073e5 @ 004073e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004073e5(void)

{
  _DAT_00427170 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_00421138);
  return;
}


// ---- FUN_004073fa @ 004073fa

void FUN_004073fa(void)

{
  FUN_00407404();
  return;
}


// ---- FUN_00407404 @ 00407404

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407404(void)

{
  _DAT_0042716c = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_00421150);
  return;
}


// ---- FUN_00407419 @ 00407419

void FUN_00407419(void)

{
  FUN_00407423();
  return;
}


// ---- FUN_00407423 @ 00407423

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407423(void)

{
  _DAT_00427168 = RegisterWindowMessageA(s_LEO_D_STEP_0042116c);
  return;
}


// ---- FUN_00407438 @ 00407438

void FUN_00407438(void)

{
  FUN_00407442();
  return;
}


// ---- FUN_00407442 @ 00407442

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407442(void)

{
  _DAT_00427164 = RegisterWindowMessageA(s_LEO_D_EXECUTE_00421178);
  return;
}


// ---- FUN_00407457 @ 00407457

void FUN_00407457(void)

{
  FUN_00407461();
  return;
}


// ---- FUN_00407461 @ 00407461

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407461(void)

{
  _DAT_00427160 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_00421188);
  return;
}


// ---- FUN_00407476 @ 00407476

void FUN_00407476(void)

{
  FUN_00407480();
  return;
}


// ---- FUN_00407480 @ 00407480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407480(void)

{
  _DAT_0042715c = RegisterWindowMessageA(s_LEO_D_GET_STATE_0042119c);
  return;
}


// ---- FUN_00407495 @ 00407495

void FUN_00407495(void)

{
  FUN_0040749f();
  return;
}


// ---- FUN_0040749f @ 0040749f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040749f(void)

{
  _DAT_00427158 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_004211ac);
  return;
}


// ---- FUN_004074b4 @ 004074b4

void FUN_004074b4(void)

{
  FUN_004074be();
  return;
}


// ---- FUN_004074be @ 004074be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004074be(void)

{
  _DAT_00427154 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_004211c4);
  return;
}


// ---- FUN_004074d3 @ 004074d3

void FUN_004074d3(void)

{
  FUN_004074dd();
  return;
}


// ---- FUN_004074dd @ 004074dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004074dd(void)

{
  _DAT_00427150 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_004211d4);
  return;
}


// ---- FUN_004074f2 @ 004074f2

void FUN_004074f2(void)

{
  FUN_004074fc();
  return;
}


// ---- FUN_004074fc @ 004074fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004074fc(void)

{
  _DAT_0042714c = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_004211e8);
  return;
}


// ---- FUN_00407511 @ 00407511

void FUN_00407511(void)

{
  FUN_0040751b();
  return;
}


// ---- FUN_0040751b @ 0040751b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040751b(void)

{
  _DAT_00427148 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_00421204);
  return;
}


// ---- FUN_00407530 @ 00407530

void FUN_00407530(void)

{
  FUN_0040753a();
  return;
}


// ---- FUN_0040753a @ 0040753a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040753a(void)

{
  _DAT_00427144 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_00421220);
  return;
}


// ---- FUN_0040754f @ 0040754f

void FUN_0040754f(void)

{
  FUN_00407559();
  return;
}


// ---- FUN_00407559 @ 00407559

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407559(void)

{
  _DAT_00427140 = RegisterWindowMessageA(s_PM_SERVER_READY_0042123c);
  return;
}


// ---- FUN_0040756e @ 0040756e

void FUN_0040756e(void)

{
  FUN_00407578();
  return;
}


// ---- FUN_00407578 @ 00407578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407578(void)

{
  _DAT_0042713c = RegisterWindowMessageA(s_PM_SERVER_LOADING_0042124c);
  return;
}


// ---- FUN_0040758d @ 0040758d

void FUN_0040758d(void)

{
  FUN_00407597();
  return;
}


// ---- FUN_00407597 @ 00407597

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407597(void)

{
  _DAT_00427138 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_00421260);
  return;
}


// ---- FUN_004075ac @ 004075ac

void FUN_004075ac(void)

{
  FUN_004075b6();
  return;
}


// ---- FUN_004075b6 @ 004075b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004075b6(void)

{
  _DAT_00427134 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_00421274);
  return;
}


// ---- FUN_004075cb @ 004075cb

void FUN_004075cb(void)

{
  FUN_004075d5();
  return;
}


// ---- FUN_004075d5 @ 004075d5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004075d5(void)

{
  _DAT_00427130 = RegisterWindowMessageA(s_PM_SEM_CLOSE_00421288);
  return;
}


// ---- FUN_004075ea @ 004075ea

void FUN_004075ea(void)

{
  FUN_004075f4();
  return;
}


// ---- FUN_004075f4 @ 004075f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004075f4(void)

{
  _DAT_0042712c = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_00421298);
  return;
}


// ---- FUN_00407609 @ 00407609

void FUN_00407609(void)

{
  FUN_00407613();
  return;
}


// ---- FUN_00407613 @ 00407613

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407613(void)

{
  _DAT_00427128 = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_004212b4);
  return;
}


// ---- FUN_00407628 @ 00407628

void FUN_00407628(void)

{
  FUN_00407632();
  return;
}


// ---- FUN_00407632 @ 00407632

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407632(void)

{
  _DAT_00427124 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_004212c8);
  return;
}


// ---- FUN_00407647 @ 00407647

void FUN_00407647(void)

{
  FUN_00407651();
  return;
}


// ---- FUN_00407651 @ 00407651

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407651(void)

{
  _DAT_00427120 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_004212e0);
  return;
}


// ---- FUN_00407666 @ 00407666

void FUN_00407666(void)

{
  FUN_00407670();
  return;
}


// ---- FUN_00407670 @ 00407670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407670(void)

{
  _DAT_0042711c = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_004212f4);
  return;
}


// ---- FUN_00407685 @ 00407685

void FUN_00407685(void)

{
  FUN_0040768f();
  return;
}


// ---- FUN_0040768f @ 0040768f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040768f(void)

{
  _DAT_00427118 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_0042130c);
  return;
}


// ---- FUN_004076a4 @ 004076a4

void FUN_004076a4(void)

{
  FUN_004076ae();
  return;
}


// ---- FUN_004076ae @ 004076ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004076ae(void)

{
  _DAT_00427114 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_00421328);
  return;
}


// ---- FUN_004076c3 @ 004076c3

void FUN_004076c3(void)

{
  FUN_004076cd();
  return;
}


// ---- FUN_004076cd @ 004076cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004076cd(void)

{
  _DAT_00427110 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_00421344);
  return;
}


// ---- FUN_004076e2 @ 004076e2

void FUN_004076e2(void)

{
  FUN_004076ec();
  return;
}


// ---- FUN_004076ec @ 004076ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004076ec(void)

{
  _DAT_0042710c = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_00421360);
  return;
}


// ---- FUN_00407701 @ 00407701

void FUN_00407701(void)

{
  FUN_0040770b();
  return;
}


// ---- FUN_0040770b @ 0040770b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040770b(void)

{
  _DAT_00427108 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_0042137c);
  return;
}


// ---- FUN_00407720 @ 00407720

void FUN_00407720(void)

{
  FUN_0040772a();
  return;
}


// ---- FUN_0040772a @ 0040772a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040772a(void)

{
  _DAT_00427104 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_00421390);
  return;
}


// ---- FUN_0040773f @ 0040773f

void FUN_0040773f(void)

{
  FUN_00407749();
  return;
}


// ---- FUN_00407749 @ 00407749

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407749(void)

{
  _DAT_00427100 = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_004213a8);
  return;
}


// ---- FUN_0040775e @ 0040775e

void FUN_0040775e(void)

{
  FUN_00407768();
  return;
}


// ---- FUN_00407768 @ 00407768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407768(void)

{
  _DAT_004270fc = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_004213c4);
  return;
}


// ---- FUN_0040777d @ 0040777d

void FUN_0040777d(void)

{
  FUN_00407787();
  return;
}


// ---- FUN_00407787 @ 00407787

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407787(void)

{
  _DAT_004270f8 = RegisterWindowMessageA(s_PM_IMEX_DONE_004213d8);
  return;
}


// ---- FUN_0040779c @ 0040779c

void FUN_0040779c(void)

{
  FUN_004077a6();
  return;
}


// ---- FUN_004077a6 @ 004077a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004077a6(void)

{
  _DAT_004270f4 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_004213e8);
  return;
}


// ---- FUN_004077bb @ 004077bb

void FUN_004077bb(void)

{
  FUN_004077c5();
  return;
}


// ---- FUN_004077c5 @ 004077c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004077c5(void)

{
  _DAT_004270f0 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_004213fc);
  return;
}


// ---- FUN_004077da @ 004077da

void FUN_004077da(void)

{
  FUN_004077e4();
  return;
}


// ---- FUN_004077e4 @ 004077e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004077e4(void)

{
  _DAT_004270ec = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_00421410);
  return;
}


// ---- FUN_004077f9 @ 004077f9

void FUN_004077f9(void)

{
  FUN_00407803();
  return;
}


// ---- FUN_00407803 @ 00407803

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407803(void)

{
  _DAT_004270e8 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_00421424);
  return;
}


// ---- FUN_00407818 @ 00407818

void FUN_00407818(void)

{
  FUN_00407822();
  return;
}


// ---- FUN_00407822 @ 00407822

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407822(void)

{
  _DAT_004270e4 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_00421438);
  return;
}


// ---- FUN_00407837 @ 00407837

void FUN_00407837(void)

{
  FUN_00407841();
  return;
}


// ---- FUN_00407841 @ 00407841

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407841(void)

{
  _DAT_004270e0 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_00421450);
  return;
}


// ---- FUN_00407856 @ 00407856

void FUN_00407856(void)

{
  FUN_00407860();
  return;
}


// ---- FUN_00407860 @ 00407860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407860(void)

{
  _DAT_004270dc = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_00421464);
  return;
}


// ---- FUN_00407875 @ 00407875

void FUN_00407875(void)

{
  FUN_0040787f();
  return;
}


// ---- FUN_0040787f @ 0040787f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040787f(void)

{
  _DAT_004270d8 = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_00421478);
  return;
}


// ---- FUN_00407894 @ 00407894

void FUN_00407894(void)

{
  FUN_0040789e();
  return;
}


// ---- FUN_0040789e @ 0040789e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040789e(void)

{
  _DAT_004270d4 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_0042148c);
  return;
}


// ---- FUN_004078b3 @ 004078b3

void FUN_004078b3(void)

{
  FUN_004078bd();
  return;
}


// ---- FUN_004078bd @ 004078bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004078bd(void)

{
  _DAT_004270d0 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_0042149c);
  return;
}


// ---- FUN_004078d2 @ 004078d2

void FUN_004078d2(void)

{
  FUN_004078dc();
  return;
}


// ---- FUN_004078dc @ 004078dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004078dc(void)

{
  _DAT_004270cc = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_004214ac);
  return;
}


// ---- FUN_004078f1 @ 004078f1

void FUN_004078f1(void)

{
  FUN_004078fb();
  return;
}


// ---- FUN_004078fb @ 004078fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004078fb(void)

{
  _DAT_004270c8 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_004214c4);
  return;
}


// ---- FUN_00407910 @ 00407910

void FUN_00407910(void)

{
  FUN_0040791a();
  return;
}


// ---- FUN_0040791a @ 0040791a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040791a(void)

{
  _DAT_004270c4 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_004214dc);
  return;
}


// ---- FUN_0040792f @ 0040792f

void FUN_0040792f(void)

{
  FUN_00407939();
  return;
}


// ---- FUN_00407939 @ 00407939

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407939(void)

{
  _DAT_004270c0 = RegisterWindowMessageA(s_PM_STEP_MACRO_004214f8);
  return;
}


// ---- FUN_0040794e @ 0040794e

void FUN_0040794e(void)

{
  FUN_00407958();
  return;
}


// ---- FUN_00407958 @ 00407958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407958(void)

{
  _DAT_004270bc = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_00421508);
  return;
}


// ---- FUN_0040796d @ 0040796d

void FUN_0040796d(void)

{
  FUN_00407977();
  return;
}


// ---- FUN_00407977 @ 00407977

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407977(void)

{
  _DAT_004270b8 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_0042151c);
  return;
}


// ---- FUN_0040798c @ 0040798c

void FUN_0040798c(void)

{
  FUN_00407996();
  return;
}


// ---- FUN_00407996 @ 00407996

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407996(void)

{
  _DAT_004270b4 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_00421538);
  return;
}


// ---- FUN_004079ab @ 004079ab

void FUN_004079ab(void)

{
  FUN_004079b5();
  return;
}


// ---- FUN_004079b5 @ 004079b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004079b5(void)

{
  _DAT_004270b0 = RegisterWindowMessageA(s_PM_HALT_MACRO_00421550);
  return;
}


// ---- FUN_004079ca @ 004079ca

void FUN_004079ca(void)

{
  FUN_004079d4();
  return;
}


// ---- FUN_004079d4 @ 004079d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004079d4(void)

{
  _DAT_004270ac = RegisterWindowMessageA(s_PM_PAUSE_MACRO_00421560);
  return;
}


// ---- FUN_004079e9 @ 004079e9

void FUN_004079e9(void)

{
  FUN_004079f3();
  return;
}


// ---- FUN_004079f3 @ 004079f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004079f3(void)

{
  _DAT_004270a8 = RegisterWindowMessageA(s_PM_MACRO_STATUS_00421570);
  return;
}


// ---- FUN_00407a08 @ 00407a08

void FUN_00407a08(void)

{
  FUN_00407a12();
  return;
}


// ---- FUN_00407a12 @ 00407a12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a12(void)

{
  _DAT_004270a4 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_00421580);
  return;
}


// ---- FUN_00407a27 @ 00407a27

void FUN_00407a27(void)

{
  FUN_00407a31();
  return;
}


// ---- FUN_00407a31 @ 00407a31

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a31(void)

{
  _DAT_004270a0 = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_00421590);
  return;
}


// ---- FUN_00407a46 @ 00407a46

void FUN_00407a46(void)

{
  FUN_00407a50();
  return;
}


// ---- FUN_00407a50 @ 00407a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a50(void)

{
  _DAT_0042709c = RegisterWindowMessageA(s_PM_SAVE_STATE_004215ac);
  return;
}


// ---- FUN_00407a65 @ 00407a65

void FUN_00407a65(void)

{
  FUN_00407a6f();
  return;
}


// ---- FUN_00407a6f @ 00407a6f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a6f(void)

{
  _DAT_00427098 = RegisterWindowMessageA(s_PM_LOAD_STATE_004215bc);
  return;
}


// ---- FUN_00407a84 @ 00407a84

void FUN_00407a84(void)

{
  FUN_00407a8e();
  return;
}


// ---- FUN_00407a8e @ 00407a8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a8e(void)

{
  _DAT_00427094 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_004215cc);
  return;
}


// ---- FUN_00407aa3 @ 00407aa3

void FUN_00407aa3(void)

{
  FUN_00407aad();
  return;
}


// ---- FUN_00407aad @ 00407aad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407aad(void)

{
  _DAT_00427090 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_004215e4);
  return;
}


// ---- FUN_00407ac2 @ 00407ac2

void FUN_00407ac2(void)

{
  FUN_00407acc();
  return;
}


// ---- FUN_00407acc @ 00407acc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407acc(void)

{
  _DAT_0042708c = RegisterWindowMessageA(s_PM_EXECUTING_LINE_00421604);
  return;
}


// ---- FUN_00407ae1 @ 00407ae1

void FUN_00407ae1(void)

{
  FUN_00407aeb();
  return;
}


// ---- FUN_00407aeb @ 00407aeb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407aeb(void)

{
  _DAT_00427088 = RegisterWindowMessageA(s_PM_REVIEW_STATE_00421618);
  return;
}


// ---- FUN_00407b00 @ 00407b00

void FUN_00407b00(void)

{
  FUN_00407b0a();
  return;
}


// ---- FUN_00407b0a @ 00407b0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407b0a(void)

{
  _DAT_00427084 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_00421628);
  return;
}


// ---- FUN_00407b1f @ 00407b1f

void FUN_00407b1f(void)

{
  FUN_00407b29();
  return;
}


// ---- FUN_00407b29 @ 00407b29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407b29(void)

{
  _DAT_00427080 = RegisterWindowMessageA(s_PM_QUERY_SERVER_00421640);
  return;
}


// ---- FUN_00407b3e @ 00407b3e

void FUN_00407b3e(void)

{
  FUN_00407b48();
  return;
}


// ---- FUN_00407b48 @ 00407b48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407b48(void)

{
  _DAT_0042707c = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_00421650);
  return;
}


// ---- FUN_00407b5d @ 00407b5d

void FUN_00407b5d(void)

{
  FUN_00407b67();
  return;
}


// ---- FUN_00407b67 @ 00407b67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407b67(void)

{
  _DAT_00427078 = RegisterWindowMessageA(s_PM_REGISTER_00421668);
  return;
}


// ---- FUN_00407b7c @ 00407b7c

void FUN_00407b7c(void)

{
  FUN_00407b86();
  return;
}


// ---- FUN_00407b86 @ 00407b86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407b86(void)

{
  _DAT_00427074 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_00421674);
  return;
}


// ---- FUN_00407b9b @ 00407b9b

void FUN_00407b9b(void)

{
  FUN_00407ba5();
  return;
}


// ---- FUN_00407ba5 @ 00407ba5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407ba5(void)

{
  _DAT_00427070 = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_0042168c);
  return;
}


// ---- FUN_00407bba @ 00407bba

void FUN_00407bba(void)

{
  FUN_00407bc4();
  return;
}


// ---- FUN_00407bc4 @ 00407bc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407bc4(void)

{
  _DAT_0042706c = RegisterWindowMessageA(s_PM_SEM_REGISTER_004216a4);
  return;
}


// ---- FUN_00407bd9 @ 00407bd9

void FUN_00407bd9(void)

{
  FUN_00407be3();
  return;
}


// ---- FUN_00407be3 @ 00407be3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407be3(void)

{
  _DAT_00427068 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_004216b4);
  return;
}


// ---- FUN_00407bf8 @ 00407bf8

void FUN_00407bf8(void)

{
  FUN_00407c02();
  return;
}


// ---- FUN_00407c02 @ 00407c02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c02(void)

{
  _DAT_00427064 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_004216cc);
  return;
}


// ---- FUN_00407c17 @ 00407c17

void FUN_00407c17(void)

{
  FUN_00407c21();
  return;
}


// ---- FUN_00407c21 @ 00407c21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c21(void)

{
  _DAT_00427060 = RegisterWindowMessageA(s_PM_LOG_OFF_004216e0);
  return;
}


// ---- FUN_00407c36 @ 00407c36

void FUN_00407c36(void)

{
  FUN_00407c40();
  return;
}


// ---- FUN_00407c40 @ 00407c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c40(void)

{
  _DAT_0042705c = RegisterWindowMessageA(s_PM_LOG_ON_004216ec);
  return;
}


// ---- FUN_00407c55 @ 00407c55

void FUN_00407c55(void)

{
  FUN_00407c5f();
  return;
}


// ---- FUN_00407c5f @ 00407c5f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c5f(void)

{
  _DAT_00427058 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_004216f8);
  return;
}


// ---- FUN_00407c74 @ 00407c74

void FUN_00407c74(void)

{
  FUN_00407c7e();
  return;
}


// ---- FUN_00407c7e @ 00407c7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c7e(void)

{
  _DAT_00427054 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_00421710);
  return;
}


// ---- FUN_00407c93 @ 00407c93

void FUN_00407c93(void)

{
  FUN_00407c9d();
  return;
}


// ---- FUN_00407c9d @ 00407c9d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c9d(void)

{
  _DAT_00427050 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_00421724);
  return;
}


// ---- FUN_00407cb2 @ 00407cb2

void FUN_00407cb2(void)

{
  FUN_00407cbc();
  return;
}


// ---- FUN_00407cbc @ 00407cbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407cbc(void)

{
  _DAT_0042704c = RegisterWindowMessageA(s_PM_GET_STRING_0042173c);
  return;
}


// ---- FUN_00407cd1 @ 00407cd1

void FUN_00407cd1(void)

{
  FUN_00407cdb();
  return;
}


// ---- FUN_00407cdb @ 00407cdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407cdb(void)

{
  _DAT_00427048 = RegisterWindowMessageA(s_PM_GET_NAME_0042174c);
  return;
}


// ---- FUN_00407cf0 @ 00407cf0

void FUN_00407cf0(void)

{
  FUN_00407cfa();
  return;
}


// ---- FUN_00407cfa @ 00407cfa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407cfa(void)

{
  _DAT_00427044 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_00421758);
  return;
}


// ---- FUN_00407d0f @ 00407d0f

void FUN_00407d0f(void)

{
  FUN_00407d19();
  return;
}


// ---- FUN_00407d19 @ 00407d19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d19(void)

{
  _DAT_00427040 = RegisterWindowMessageA(s_PM_GET_VALUE_00421768);
  return;
}


// ---- FUN_00407d2e @ 00407d2e

void FUN_00407d2e(void)

{
  FUN_00407d38();
  return;
}


// ---- FUN_00407d38 @ 00407d38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d38(void)

{
  _DAT_0042703c = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_00421778);
  return;
}


// ---- FUN_00407d4d @ 00407d4d

void FUN_00407d4d(void)

{
  FUN_00407d57();
  return;
}


// ---- FUN_00407d57 @ 00407d57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d57(void)

{
  _DAT_00427038 = RegisterWindowMessageA(s_PM_STAGE_GOTO_00421794);
  return;
}


// ---- FUN_00407d6c @ 00407d6c

void FUN_00407d6c(void)

{
  FUN_00407d76();
  return;
}


// ---- FUN_00407d76 @ 00407d76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d76(void)

{
  _DAT_00427034 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_004217a4);
  return;
}


// ---- FUN_00407d8b @ 00407d8b

void FUN_00407d8b(void)

{
  FUN_00407d95();
  return;
}


// ---- FUN_00407d95 @ 00407d95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d95(void)

{
  _DAT_00427030 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_004217bc);
  return;
}


// ---- FUN_00407daa @ 00407daa

void FUN_00407daa(void)

{
  FUN_00407db4();
  return;
}


// ---- FUN_00407db4 @ 00407db4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407db4(void)

{
  _DAT_0042702c = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_004217d4);
  return;
}


// ---- FUN_00407dc9 @ 00407dc9

void FUN_00407dc9(void)

{
  FUN_00407dd3();
  return;
}


// ---- FUN_00407dd3 @ 00407dd3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407dd3(void)

{
  _DAT_00427028 = RegisterWindowMessageA(s_PM_GET_ERROR_004217f8);
  return;
}


// ---- FUN_00407de8 @ 00407de8

void FUN_00407de8(void)

{
  FUN_00407df2();
  return;
}


// ---- FUN_00407df2 @ 00407df2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407df2(void)

{
  _DAT_00427024 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_00421808);
  return;
}


// ---- FUN_00407e07 @ 00407e07

void FUN_00407e07(void)

{
  FUN_00407e11();
  return;
}


// ---- FUN_00407e11 @ 00407e11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407e11(void)

{
  _DAT_00427020 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_0042181c);
  return;
}


// ---- FUN_00407e26 @ 00407e26

void FUN_00407e26(void)

{
  FUN_00407e30();
  return;
}


// ---- FUN_00407e30 @ 00407e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407e30(void)

{
  _DAT_0042701c = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_00421830);
  return;
}


// ---- FUN_00407e45 @ 00407e45

void FUN_00407e45(void)

{
  FUN_00407e4f();
  return;
}


// ---- FUN_00407e4f @ 00407e4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407e4f(void)

{
  _DAT_00427018 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_00421850);
  return;
}


// ---- FUN_00407e64 @ 00407e64

void FUN_00407e64(void)

{
  FUN_00407e6e();
  return;
}


// ---- FUN_00407e6e @ 00407e6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407e6e(void)

{
  _DAT_00427014 = RegisterWindowMessageA(s_PM_GET_HANDLES_00421864);
  return;
}


// ---- FUN_00407e83 @ 00407e83

void FUN_00407e83(void)

{
  FUN_00407e8d();
  return;
}


// ---- FUN_00407e8d @ 00407e8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407e8d(void)

{
  _DAT_00427010 = RegisterWindowMessageA(s_PM_GET_STATES_00421874);
  return;
}


// ---- FUN_00407ea2 @ 00407ea2

void FUN_00407ea2(void)

{
  FUN_00407eac();
  return;
}


// ---- FUN_00407eac @ 00407eac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407eac(void)

{
  _DAT_0042700c = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_00421884);
  return;
}


// ---- FUN_00407ec1 @ 00407ec1

void FUN_00407ec1(void)

{
  FUN_00407ecb();
  return;
}


// ---- FUN_00407ecb @ 00407ecb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407ecb(void)

{
  _DAT_00427008 = RegisterWindowMessageA(s_PM_GET_LICENCE_00421898);
  return;
}


// ---- FUN_00407ee0 @ 00407ee0

void FUN_00407ee0(void)

{
  FUN_00407eea();
  return;
}


// ---- FUN_00407eea @ 00407eea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407eea(void)

{
  _DAT_00427004 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_004218a8);
  return;
}


// ---- FUN_00407eff @ 00407eff

void FUN_00407eff(void)

{
  FUN_00407f09();
  return;
}


// ---- FUN_00407f09 @ 00407f09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407f09(void)

{
  _DAT_00427000 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_004218bc);
  return;
}


// ---- FUN_00407f1e @ 00407f1e

void FUN_00407f1e(void)

{
  FUN_00407f28();
  return;
}


// ---- FUN_00407f28 @ 00407f28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407f28(void)

{
  _DAT_00426ffc = RegisterWindowMessageA(s_PM_GET_XY_VALUES_004218d0);
  return;
}


// ---- FUN_00407f3d @ 00407f3d

void FUN_00407f3d(void)

{
  FUN_00407f47();
  return;
}


// ---- FUN_00407f47 @ 00407f47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407f47(void)

{
  _DAT_00426ff8 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_004218e4);
  return;
}


// ---- FUN_00407f5c @ 00407f5c

void FUN_00407f5c(void)

{
  FUN_00407f66();
  return;
}


// ---- FUN_00407f66 @ 00407f66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407f66(void)

{
  _DAT_00426ff4 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_004218f8);
  return;
}


// ---- FUN_00407f7b @ 00407f7b

void FUN_00407f7b(void)

{
  FUN_00407f85();
  return;
}


// ---- FUN_00407f85 @ 00407f85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407f85(void)

{
  _DAT_00426ff0 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_0042190c);
  return;
}


// ---- FUN_00407f9a @ 00407f9a

void FUN_00407f9a(void)

{
  FUN_00407fa4();
  return;
}


// ---- FUN_00407fa4 @ 00407fa4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407fa4(void)

{
  _DAT_00426fec = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_00421924);
  return;
}


// ---- FUN_00407fb9 @ 00407fb9

void FUN_00407fb9(void)

{
  FUN_00407fc3();
  return;
}


// ---- FUN_00407fc3 @ 00407fc3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407fc3(void)

{
  _DAT_00426fe8 = RegisterWindowMessageA(s_PM_SET_VALUE_00421938);
  return;
}


// ---- FUN_00407fd8 @ 00407fd8

void FUN_00407fd8(void)

{
  FUN_00407fe2();
  return;
}


// ---- FUN_00407fe2 @ 00407fe2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407fe2(void)

{
  _DAT_00426fe4 = RegisterWindowMessageA(s_PM_SET_COARSE_00421948);
  return;
}


// ---- FUN_00407ff7 @ 00407ff7

void FUN_00407ff7(void)

{
  FUN_00408001();
  return;
}


// ---- FUN_00408001 @ 00408001

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408001(void)

{
  _DAT_00426fe0 = RegisterWindowMessageA(s_PM_GET_COARSE_00421958);
  return;
}


// ---- FUN_00408016 @ 00408016

void FUN_00408016(void)

{
  FUN_00408020();
  return;
}


// ---- FUN_00408020 @ 00408020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408020(void)

{
  _DAT_00426fdc = RegisterWindowMessageA(s_PM_SET_NOTIFY_00421968);
  return;
}


// ---- FUN_00408035 @ 00408035

void FUN_00408035(void)

{
  FUN_0040803f();
  return;
}


// ---- FUN_0040803f @ 0040803f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040803f(void)

{
  _DAT_00426fd8 = RegisterWindowMessageA(s_PM_SET_USER_MODE_00421978);
  return;
}


// ---- FUN_00408054 @ 00408054

void FUN_00408054(void)

{
  FUN_0040805e();
  return;
}


// ---- FUN_0040805e @ 0040805e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040805e(void)

{
  _DAT_00426fd4 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_0042198c);
  return;
}


// ---- FUN_00408073 @ 00408073

void FUN_00408073(void)

{
  FUN_0040807d();
  return;
}


// ---- FUN_0040807d @ 0040807d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040807d(void)

{
  _DAT_00426fd0 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_004219a8);
  return;
}


// ---- FUN_00408092 @ 00408092

void FUN_00408092(void)

{
  FUN_0040809c();
  return;
}


// ---- FUN_0040809c @ 0040809c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040809c(void)

{
  _DAT_00426fcc = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_004219c4);
  return;
}


// ---- FUN_004080b1 @ 004080b1

void FUN_004080b1(void)

{
  FUN_004080bb();
  return;
}


// ---- FUN_004080bb @ 004080bb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004080bb(void)

{
  _DAT_00426fc8 = RegisterWindowMessageA(s_PM_IS_ENABLED_004219dc);
  return;
}


// ---- FUN_004080d0 @ 004080d0

void FUN_004080d0(void)

{
  FUN_004080da();
  return;
}


// ---- FUN_004080da @ 004080da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004080da(void)

{
  _DAT_00426fc4 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_004219ec);
  return;
}


// ---- FUN_004080ef @ 004080ef

void FUN_004080ef(void)

{
  FUN_004080f9();
  return;
}


// ---- FUN_004080f9 @ 004080f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004080f9(void)

{
  _DAT_00426fc0 = RegisterWindowMessageA(s_PM_IS_VECTOR_004219fc);
  return;
}


// ---- FUN_0040810e @ 0040810e

void FUN_0040810e(void)

{
  FUN_00408118();
  return;
}


// ---- FUN_00408118 @ 00408118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408118(void)

{
  _DAT_00426fbc = RegisterWindowMessageA(s_PM_IS_VISIBLE_00421a0c);
  return;
}


// ---- FUN_0040812d @ 0040812d

void FUN_0040812d(void)

{
  FUN_00408137();
  return;
}


// ---- FUN_00408137 @ 00408137

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408137(void)

{
  _DAT_00426fb8 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_00421a1c);
  return;
}


// ---- FUN_0040814c @ 0040814c

void FUN_0040814c(void)

{
  FUN_00408156();
  return;
}


// ---- FUN_00408156 @ 00408156

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408156(void)

{
  _DAT_00426fb4 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_00421a2c);
  return;
}


// ---- FUN_0040816b @ 0040816b

void FUN_0040816b(void)

{
  FUN_00408175();
  return;
}


// ---- FUN_00408175 @ 00408175

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408175(void)

{
  _DAT_00426fb0 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_00421a40);
  return;
}


// ---- FUN_0040818a @ 0040818a

void FUN_0040818a(void)

{
  FUN_00408194();
  return;
}


// ---- FUN_00408194 @ 00408194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408194(void)

{
  _DAT_00426fac = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_00421a54);
  return;
}


// ---- FUN_004081a9 @ 004081a9

void FUN_004081a9(void)

{
  FUN_004081b3();
  return;
}


// ---- FUN_004081b3 @ 004081b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004081b3(void)

{
  _DAT_00426fa8 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_00421a68);
  return;
}


// ---- FUN_004081c8 @ 004081c8

void FUN_004081c8(void)

{
  FUN_004081d2();
  return;
}


// ---- FUN_004081d2 @ 004081d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004081d2(void)

{
  _DAT_00426fa4 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_00421a80);
  return;
}


// ---- FUN_004081e7 @ 004081e7

void FUN_004081e7(void)

{
  FUN_004081f1();
  return;
}


// ---- FUN_004081f1 @ 004081f1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004081f1(void)

{
  _DAT_00426fa0 = RegisterWindowMessageA(s_PM_SERVER_HELP_00421a98);
  return;
}


// ---- FUN_00408206 @ 00408206

void FUN_00408206(void)

{
  FUN_00408210();
  return;
}


// ---- FUN_00408210 @ 00408210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408210(void)

{
  _DAT_00426f9c = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_00421aa8);
  return;
}


// ---- FUN_00408225 @ 00408225

void FUN_00408225(void)

{
  FUN_0040822f();
  return;
}


// ---- FUN_0040822f @ 0040822f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040822f(void)

{
  _DAT_00426f98 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_00421ac4);
  return;
}


// ---- FUN_00408244 @ 00408244

void FUN_00408244(void)

{
  FUN_0040824e();
  return;
}


// ---- FUN_0040824e @ 0040824e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040824e(void)

{
  _DAT_00426f94 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_00421ad8);
  return;
}


// ---- FUN_00408263 @ 00408263

void FUN_00408263(void)

{
  FUN_0040826d();
  return;
}


// ---- FUN_0040826d @ 0040826d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040826d(void)

{
  _DAT_00426f90 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_00421af4);
  return;
}


// ---- FUN_00408282 @ 00408282

void FUN_00408282(void)

{
  FUN_0040828c();
  return;
}


// ---- FUN_0040828c @ 0040828c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040828c(void)

{
  _DAT_00426f8c = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_00421b0c);
  return;
}


// ---- FUN_004082a1 @ 004082a1

void FUN_004082a1(void)

{
  FUN_004082ab();
  return;
}


// ---- FUN_004082ab @ 004082ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004082ab(void)

{
  _DAT_00426f88 = RegisterWindowMessageA(s_PM_STEP_VALUE_00421b20);
  return;
}


// ---- FUN_004082c0 @ 004082c0

void FUN_004082c0(void)

{
  FUN_004082ca();
  return;
}


// ---- FUN_004082ca @ 004082ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004082ca(void)

{
  _DAT_00426f84 = RegisterWindowMessageA(s_PM_HELP_MODE_00421b30);
  return;
}


// ---- FUN_004082df @ 004082df

void FUN_004082df(void)

{
  FUN_004082e9();
  return;
}


// ---- FUN_004082e9 @ 004082e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004082e9(void)

{
  _DAT_00426f80 = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_00421b40);
  return;
}


// ---- FUN_004082fe @ 004082fe

void FUN_004082fe(void)

{
  FUN_00408308();
  return;
}


// ---- FUN_00408308 @ 00408308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408308(void)

{
  _DAT_00426f7c = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_00421b54);
  return;
}


// ---- FUN_0040831d @ 0040831d

void FUN_0040831d(void)

{
  FUN_00408327();
  return;
}


// ---- FUN_00408327 @ 00408327

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408327(void)

{
  _DAT_00426f78 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_00421b68);
  return;
}


// ---- FUN_0040833c @ 0040833c

void FUN_0040833c(void)

{
  FUN_00408346();
  return;
}


// ---- FUN_00408346 @ 00408346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408346(void)

{
  _DAT_00426f74 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_00421b80);
  return;
}


// ---- FUN_0040835b @ 0040835b

void FUN_0040835b(void)

{
  FUN_00408365();
  return;
}


// ---- FUN_00408365 @ 00408365

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408365(void)

{
  _DAT_00426f70 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_00421b9c);
  return;
}


// ---- FUN_0040837a @ 0040837a

void FUN_0040837a(void)

{
  FUN_00408384();
  return;
}


// ---- FUN_00408384 @ 00408384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408384(void)

{
  _DAT_00426f6c = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_00421bb0);
  return;
}


// ---- FUN_00408399 @ 00408399

void FUN_00408399(void)

{
  FUN_004083a3();
  return;
}


// ---- FUN_004083a3 @ 004083a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004083a3(void)

{
  _DAT_00426f68 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_00421bc8);
  return;
}


// ---- FUN_004083b8 @ 004083b8

void FUN_004083b8(void)

{
  FUN_004083c2();
  return;
}


// ---- FUN_004083c2 @ 004083c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004083c2(void)

{
  _DAT_00426f64 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_00421be0);
  return;
}


// ---- FUN_004083d7 @ 004083d7

void FUN_004083d7(void)

{
  FUN_004083e1();
  return;
}


// ---- FUN_004083e1 @ 004083e1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004083e1(void)

{
  _DAT_00426f60 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_00421bf8);
  return;
}


// ---- FUN_004083f6 @ 004083f6

void FUN_004083f6(void)

{
  FUN_00408400();
  return;
}


// ---- FUN_00408400 @ 00408400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408400(void)

{
  _DAT_00426f5c = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_00421c10);
  return;
}


// ---- FUN_00408415 @ 00408415

void FUN_00408415(void)

{
  FUN_0040841f();
  return;
}


// ---- FUN_0040841f @ 0040841f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040841f(void)

{
  _DAT_00426f58 = RegisterWindowMessageA(s_PM_LUT_EDITOR_00421c2c);
  return;
}


// ---- FUN_00408434 @ 00408434

void FUN_00408434(void)

{
  FUN_0040843e();
  return;
}


// ---- FUN_0040843e @ 0040843e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040843e(void)

{
  _DAT_00426f54 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_00421c3c);
  return;
}


// ---- FUN_00408453 @ 00408453

void FUN_00408453(void)

{
  FUN_0040845d();
  return;
}


// ---- FUN_0040845d @ 0040845d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040845d(void)

{
  _DAT_00426f50 = RegisterWindowMessageA(s_PM_SET_LUT_RGB_00421c50);
  return;
}


// ---- FUN_00408472 @ 00408472

void FUN_00408472(void)

{
  FUN_0040847c();
  return;
}


// ---- FUN_0040847c @ 0040847c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040847c(void)

{
  _DAT_00426f4c = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_00421c60);
  return;
}


// ---- FUN_00408491 @ 00408491

void FUN_00408491(void)

{
  FUN_0040849b();
  return;
}


// ---- FUN_0040849b @ 0040849b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040849b(void)

{
  _DAT_00426f48 = RegisterWindowMessageA(s_PM_SET_LUT_BC_00421c74);
  return;
}


// ---- FUN_004084b0 @ 004084b0

void FUN_004084b0(void)

{
  FUN_004084ba();
  return;
}


// ---- FUN_004084ba @ 004084ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004084ba(void)

{
  _DAT_00426f44 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_00421c84);
  return;
}


// ---- FUN_004084cf @ 004084cf

void FUN_004084cf(void)

{
  FUN_004084d9();
  return;
}


// ---- FUN_004084d9 @ 004084d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004084d9(void)

{
  _DAT_00426f40 = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_00421c98);
  return;
}


// ---- FUN_004084ee @ 004084ee

void FUN_004084ee(void)

{
  FUN_004084f8();
  return;
}


// ---- FUN_004084f8 @ 004084f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004084f8(void)

{
  _DAT_00426f3c = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_00421cac);
  return;
}


// ---- FUN_0040850d @ 0040850d

void FUN_0040850d(void)

{
  FUN_00408517();
  return;
}


// ---- FUN_00408517 @ 00408517

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408517(void)

{
  _DAT_00426f38 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_00421cc0);
  return;
}


// ---- FUN_0040852c @ 0040852c

void FUN_0040852c(void)

{
  FUN_00408536();
  return;
}


// ---- FUN_00408536 @ 00408536

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408536(void)

{
  _DAT_00426f34 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_00421cd4);
  return;
}


// ---- FUN_0040854b @ 0040854b

void FUN_0040854b(void)

{
  FUN_00408555();
  return;
}


// ---- FUN_00408555 @ 00408555

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408555(void)

{
  _DAT_00426f30 = RegisterWindowMessageA(s_PM_RGB_READ_00421ce8);
  return;
}


// ---- FUN_0040856a @ 0040856a

void FUN_0040856a(void)

{
  FUN_00408574();
  return;
}


// ---- FUN_00408574 @ 00408574

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408574(void)

{
  _DAT_00426f2c = RegisterWindowMessageA(s_PM_LUT_LOAD_00421cf4);
  return;
}


// ---- FUN_00408589 @ 00408589

void FUN_00408589(void)

{
  FUN_00408593();
  return;
}


// ---- FUN_00408593 @ 00408593

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408593(void)

{
  _DAT_00426f28 = RegisterWindowMessageA(s_PM_LUT_READ_00421d00);
  return;
}


// ---- FUN_004085a8 @ 004085a8

void FUN_004085a8(void)

{
  FUN_004085b2();
  return;
}


// ---- FUN_004085b2 @ 004085b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004085b2(void)

{
  _DAT_00426f24 = RegisterWindowMessageA(s_PM_READ_COLOR_00421d0c);
  return;
}


// ---- FUN_004085c7 @ 004085c7

void FUN_004085c7(void)

{
  FUN_004085d1();
  return;
}


// ---- FUN_004085d1 @ 004085d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004085d1(void)

{
  _DAT_00426f20 = RegisterWindowMessageA(s_PM_LUT_FILL_00421d1c);
  return;
}


// ---- FUN_004085e6 @ 004085e6

void FUN_004085e6(void)

{
  FUN_004085f0();
  return;
}


// ---- FUN_004085f0 @ 004085f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004085f0(void)

{
  _DAT_00426f1c = RegisterWindowMessageA(s_PM_LUT_QLIN_00421d28);
  return;
}


// ---- FUN_00408605 @ 00408605

void FUN_00408605(void)

{
  FUN_0040860f();
  return;
}


// ---- FUN_0040860f @ 0040860f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040860f(void)

{
  _DAT_00426f18 = RegisterWindowMessageA(s_PM_LUT_QINV_00421d34);
  return;
}


// ---- FUN_00408624 @ 00408624

void FUN_00408624(void)

{
  FUN_0040862e();
  return;
}


// ---- FUN_0040862e @ 0040862e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040862e(void)

{
  _DAT_00426f14 = RegisterWindowMessageA(s_PM_LUT_SAVE_00421d40);
  return;
}


// ---- FUN_00408643 @ 00408643

void FUN_00408643(void)

{
  FUN_0040864d();
  return;
}


// ---- FUN_0040864d @ 0040864d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040864d(void)

{
  _DAT_00426f10 = RegisterWindowMessageA(s_PM_LUT_RESTORE_00421d4c);
  return;
}


// ---- FUN_00408662 @ 00408662

void FUN_00408662(void)

{
  FUN_0040866c();
  return;
}


// ---- FUN_0040866c @ 0040866c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040866c(void)

{
  _DAT_00426f0c = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_00421d5c);
  return;
}


// ---- FUN_00408681 @ 00408681

void FUN_00408681(void)

{
  FUN_0040868b();
  return;
}


// ---- FUN_0040868b @ 0040868b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040868b(void)

{
  _DAT_00426f08 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_00421d70);
  return;
}


// ---- FUN_004086a0 @ 004086a0

void FUN_004086a0(void)

{
  FUN_004086aa();
  return;
}


// ---- FUN_004086aa @ 004086aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004086aa(void)

{
  _DAT_00426f04 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_00421d84);
  return;
}


// ---- FUN_004086bf @ 004086bf

void FUN_004086bf(void)

{
  FUN_004086c9();
  return;
}


// ---- FUN_004086c9 @ 004086c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004086c9(void)

{
  _DAT_00426f00 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_00421d98);
  return;
}


// ---- FUN_004086de @ 004086de

void FUN_004086de(void)

{
  FUN_004086e8();
  return;
}


// ---- FUN_004086e8 @ 004086e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004086e8(void)

{
  _DAT_00426efc = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_00421dac);
  return;
}


// ---- FUN_004086fd @ 004086fd

void FUN_004086fd(void)

{
  FUN_00408707();
  return;
}


// ---- FUN_00408707 @ 00408707

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408707(void)

{
  _DAT_00426ef8 = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_00421dc0);
  return;
}


// ---- FUN_0040871c @ 0040871c

void FUN_0040871c(void)

{
  FUN_00408726();
  return;
}


// ---- FUN_00408726 @ 00408726

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408726(void)

{
  _DAT_00426ef4 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_00421dd8);
  return;
}


// ---- FUN_0040873b @ 0040873b

void FUN_0040873b(void)

{
  FUN_00408745();
  return;
}


// ---- FUN_00408745 @ 00408745

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408745(void)

{
  _DAT_00426ef0 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_00421dec);
  return;
}


// ---- FUN_0040875a @ 0040875a

void FUN_0040875a(void)

{
  FUN_00408764();
  return;
}


// ---- FUN_00408764 @ 00408764

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408764(void)

{
  _DAT_00426eec = RegisterWindowMessageA(s_PM_D_GET_LICENCES_00421e00);
  return;
}


// ---- FUN_00408779 @ 00408779

void FUN_00408779(void)

{
  FUN_00408783();
  return;
}


// ---- FUN_00408783 @ 00408783

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408783(void)

{
  _DAT_00426ee8 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_00421e14);
  return;
}


// ---- FUN_00408798 @ 00408798

void FUN_00408798(void)

{
  FUN_004087a2();
  return;
}


// ---- FUN_004087a2 @ 004087a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004087a2(void)

{
  _DAT_00426ee4 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_00421e28);
  return;
}


// ---- FUN_004087b7 @ 004087b7

void FUN_004087b7(void)

{
  FUN_004087c1();
  return;
}


// ---- FUN_004087c1 @ 004087c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004087c1(void)

{
  _DAT_00426ee0 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_00421e40);
  return;
}


// ---- FUN_004087d6 @ 004087d6

void FUN_004087d6(void)

{
  FUN_004087e0();
  return;
}


// ---- FUN_004087e0 @ 004087e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004087e0(void)

{
  _DAT_00426edc = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_00421e58);
  return;
}


// ---- FUN_004087f5 @ 004087f5

void FUN_004087f5(void)

{
  FUN_004087ff();
  return;
}


// ---- FUN_004087ff @ 004087ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004087ff(void)

{
  _DAT_00426ed8 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_00421e6c);
  return;
}


// ---- FUN_00408814 @ 00408814

void FUN_00408814(void)

{
  FUN_0040881e();
  return;
}


// ---- FUN_0040881e @ 0040881e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040881e(void)

{
  _DAT_00426ed4 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_00421e80);
  return;
}


// ---- FUN_00408833 @ 00408833

void FUN_00408833(void)

{
  FUN_0040883d();
  return;
}


// ---- FUN_0040883d @ 0040883d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040883d(void)

{
  _DAT_00426ed0 = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_00421e94);
  return;
}


// ---- FUN_00408852 @ 00408852

void FUN_00408852(void)

{
  FUN_0040885c();
  return;
}


// ---- FUN_0040885c @ 0040885c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040885c(void)

{
  _DAT_00426ecc = RegisterWindowMessageA(s_PM_GET_HELP_PATH_00421ea8);
  return;
}


// ---- FUN_00408871 @ 00408871

void FUN_00408871(void)

{
  FUN_0040887b();
  return;
}


// ---- FUN_0040887b @ 0040887b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040887b(void)

{
  _DAT_00426ec8 = RegisterWindowMessageA(s_PM_SAVE_TIFF_00421ebc);
  return;
}


// ---- FUN_00408890 @ 00408890

void FUN_00408890(void)

{
  FUN_0040889a();
  return;
}


// ---- FUN_0040889a @ 0040889a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040889a(void)

{
  _DAT_00426ec4 = RegisterWindowMessageA(s_PM_LOAD_TIFF_00421ecc);
  return;
}


// ---- FUN_004088af @ 004088af

void FUN_004088af(void)

{
  FUN_004088b9();
  return;
}


// ---- FUN_004088b9 @ 004088b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004088b9(void)

{
  _DAT_00426ec0 = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_00421edc);
  return;
}


// ---- FUN_004088ce @ 004088ce

void FUN_004088ce(void)

{
  FUN_004088d8();
  return;
}


// ---- FUN_004088d8 @ 004088d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004088d8(void)

{
  _DAT_00426ebc = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_00421eec);
  return;
}


// ---- FUN_004088ed @ 004088ed

void FUN_004088ed(void)

{
  FUN_004088f7();
  return;
}


// ---- FUN_004088f7 @ 004088f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004088f7(void)

{
  _DAT_00426eb8 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_00421f00);
  return;
}


// ---- FUN_0040890c @ 0040890c

void FUN_0040890c(void)

{
  FUN_00408916();
  return;
}


// ---- FUN_00408916 @ 00408916

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408916(void)

{
  _DAT_00426eb4 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_00421f18);
  return;
}


// ---- FUN_0040892b @ 0040892b

void FUN_0040892b(void)

{
  FUN_00408935();
  return;
}


// ---- FUN_00408935 @ 00408935

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408935(void)

{
  _DAT_00426eb0 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_00421f2c);
  return;
}


// ---- FUN_0040894a @ 0040894a

void FUN_0040894a(void)

{
  FUN_00408954();
  return;
}


// ---- FUN_00408954 @ 00408954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408954(void)

{
  _DAT_00426eac = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_00421f40);
  return;
}


// ---- FUN_00408969 @ 00408969

void FUN_00408969(void)

{
  FUN_00408973();
  return;
}


// ---- FUN_00408973 @ 00408973

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408973(void)

{
  _DAT_00426ea8 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_00421f58);
  return;
}


// ---- FUN_00408988 @ 00408988

void FUN_00408988(void)

{
  FUN_00408992();
  return;
}


// ---- FUN_00408992 @ 00408992

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408992(void)

{
  _DAT_00426ea4 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_00421f6c);
  return;
}


// ---- FUN_004089a7 @ 004089a7

void FUN_004089a7(void)

{
  FUN_004089b1();
  return;
}


// ---- FUN_004089b1 @ 004089b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004089b1(void)

{
  _DAT_00426ea0 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_00421f88);
  return;
}


// ---- FUN_004089c6 @ 004089c6

void FUN_004089c6(void)

{
  FUN_004089d0();
  return;
}


// ---- FUN_004089d0 @ 004089d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004089d0(void)

{
  _DAT_00426e9c = RegisterWindowMessageA(s_PM_CLIP_COPY_00421f98);
  return;
}


// ---- FUN_004089e5 @ 004089e5

void FUN_004089e5(void)

{
  FUN_004089ef();
  return;
}


// ---- FUN_004089ef @ 004089ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004089ef(void)

{
  _DAT_00426e98 = RegisterWindowMessageA(s_PM_CLIP_INFO_00421fa8);
  return;
}


// ---- FUN_00408a04 @ 00408a04

void FUN_00408a04(void)

{
  FUN_00408a0e();
  return;
}


// ---- FUN_00408a0e @ 00408a0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a0e(void)

{
  _DAT_00426e94 = RegisterWindowMessageA(s_PM_CLIP_PASTE_00421fb8);
  return;
}


// ---- FUN_00408a23 @ 00408a23

void FUN_00408a23(void)

{
  FUN_00408a2d();
  return;
}


// ---- FUN_00408a2d @ 00408a2d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a2d(void)

{
  _DAT_00426e90 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_00421fc8);
  return;
}


// ---- FUN_00408a42 @ 00408a42

void FUN_00408a42(void)

{
  FUN_00408a4c();
  return;
}


// ---- FUN_00408a4c @ 00408a4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a4c(void)

{
  _DAT_00426e8c = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_00421fd8);
  return;
}


// ---- FUN_00408a61 @ 00408a61

void FUN_00408a61(void)

{
  FUN_00408a6b();
  return;
}


// ---- FUN_00408a6b @ 00408a6b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a6b(void)

{
  _DAT_00426e88 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_00421fec);
  return;
}


// ---- FUN_00408a80 @ 00408a80

void FUN_00408a80(void)

{
  FUN_00408a8a();
  return;
}


// ---- FUN_00408a8a @ 00408a8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a8a(void)

{
  _DAT_00426e84 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_00422000);
  return;
}


// ---- FUN_00408a9f @ 00408a9f

void FUN_00408a9f(void)

{
  FUN_00408aa9();
  return;
}


// ---- FUN_00408aa9 @ 00408aa9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408aa9(void)

{
  _DAT_00426e80 = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_00422014);
  return;
}


// ---- FUN_00408abe @ 00408abe

void FUN_00408abe(void)

{
  FUN_00408ac8();
  return;
}


// ---- FUN_00408ac8 @ 00408ac8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ac8(void)

{
  _DAT_00426e7c = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_00422024);
  return;
}


// ---- FUN_00408add @ 00408add

void FUN_00408add(void)

{
  FUN_00408ae7();
  return;
}


// ---- FUN_00408ae7 @ 00408ae7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ae7(void)

{
  _DAT_00426e78 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_0042203c);
  return;
}


// ---- FUN_00408afc @ 00408afc

void FUN_00408afc(void)

{
  FUN_00408b06();
  return;
}


// ---- FUN_00408b06 @ 00408b06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b06(void)

{
  _DAT_00426e74 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_00422054);
  return;
}


// ---- FUN_00408b1b @ 00408b1b

void FUN_00408b1b(void)

{
  FUN_00408b25();
  return;
}


// ---- FUN_00408b25 @ 00408b25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b25(void)

{
  _DAT_00426e70 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_00422070);
  return;
}


// ---- FUN_00408b3a @ 00408b3a

void FUN_00408b3a(void)

{
  FUN_00408b44();
  return;
}


// ---- FUN_00408b44 @ 00408b44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b44(void)

{
  _DAT_00426e6c = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_0042208c);
  return;
}


// ---- FUN_00408b59 @ 00408b59

void FUN_00408b59(void)

{
  FUN_00408b63();
  return;
}


// ---- FUN_00408b63 @ 00408b63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b63(void)

{
  _DAT_00426e68 = RegisterWindowMessageA(s_PM_STAGE_LABEL_004220a4);
  return;
}


// ---- FUN_00408b78 @ 00408b78

void FUN_00408b78(void)

{
  FUN_00408b82();
  return;
}


// ---- FUN_00408b82 @ 00408b82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b82(void)

{
  _DAT_00426e64 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_004220b4);
  return;
}


// ---- FUN_00408b97 @ 00408b97

void FUN_00408b97(void)

{
  FUN_00408ba1();
  return;
}


// ---- FUN_00408ba1 @ 00408ba1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ba1(void)

{
  _DAT_00426e60 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_004220c8);
  return;
}


// ---- FUN_00408bb6 @ 00408bb6

void FUN_00408bb6(void)

{
  FUN_00408bc0();
  return;
}


// ---- FUN_00408bc0 @ 00408bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408bc0(void)

{
  _DAT_00426e5c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_004220e4);
  return;
}


// ---- FUN_00408bd5 @ 00408bd5

void FUN_00408bd5(void)

{
  FUN_00408bdf();
  return;
}


// ---- FUN_00408bdf @ 00408bdf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408bdf(void)

{
  _DAT_00426e58 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_00422100);
  return;
}


// ---- FUN_00408bf4 @ 00408bf4

void FUN_00408bf4(void)

{
  FUN_00408bfe();
  return;
}


// ---- FUN_00408bfe @ 00408bfe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408bfe(void)

{
  _DAT_00426e54 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_00422118);
  return;
}


// ---- FUN_00408c13 @ 00408c13

void FUN_00408c13(void)

{
  FUN_00408c1d();
  return;
}


// ---- FUN_00408c1d @ 00408c1d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c1d(void)

{
  _DAT_00426e50 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_00422130);
  return;
}


// ---- FUN_00408c32 @ 00408c32

void FUN_00408c32(void)

{
  FUN_00408c3c();
  return;
}


// ---- FUN_00408c3c @ 00408c3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c3c(void)

{
  _DAT_00426e4c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_00422150);
  return;
}


// ---- FUN_00408c51 @ 00408c51

void FUN_00408c51(void)

{
  FUN_00408c5b();
  return;
}


// ---- FUN_00408c5b @ 00408c5b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c5b(void)

{
  _DAT_00426e48 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_0042216c);
  return;
}


// ---- FUN_00408c70 @ 00408c70

void FUN_00408c70(void)

{
  FUN_00408c7a();
  return;
}


// ---- FUN_00408c7a @ 00408c7a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c7a(void)

{
  _DAT_00426e44 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_00422188);
  return;
}


// ---- FUN_00408c8f @ 00408c8f

void FUN_00408c8f(void)

{
  FUN_00408c99();
  return;
}


// ---- FUN_00408c99 @ 00408c99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c99(void)

{
  _DAT_00426e40 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_004221a4);
  return;
}


// ---- FUN_00408cae @ 00408cae

void FUN_00408cae(void)

{
  FUN_00408cb8();
  return;
}


// ---- FUN_00408cb8 @ 00408cb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408cb8(void)

{
  _DAT_00426e3c = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_004221bc);
  return;
}


// ---- FUN_00408ccd @ 00408ccd

void FUN_00408ccd(void)

{
  FUN_00408cd7();
  return;
}


// ---- FUN_00408cd7 @ 00408cd7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408cd7(void)

{
  _DAT_00426e38 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_004221d4);
  return;
}


// ---- FUN_00408cec @ 00408cec

void FUN_00408cec(void)

{
  FUN_00408cf6();
  return;
}


// ---- FUN_00408cf6 @ 00408cf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408cf6(void)

{
  _DAT_00426e34 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_004221f0);
  return;
}


// ---- FUN_00408d0b @ 00408d0b

void FUN_00408d0b(void)

{
  FUN_00408d15();
  return;
}


// ---- FUN_00408d15 @ 00408d15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408d15(void)

{
  _DAT_00426e30 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_00422210);
  return;
}


// ---- FUN_00408d2a @ 00408d2a

void FUN_00408d2a(void)

{
  FUN_00408d34();
  return;
}


// ---- FUN_00408d34 @ 00408d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408d34(void)

{
  _DAT_00426e2c = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_00422224);
  return;
}


// ---- FUN_00408d49 @ 00408d49

void FUN_00408d49(void)

{
  FUN_00408d53();
  return;
}


// ---- FUN_00408d53 @ 00408d53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408d53(void)

{
  _DAT_00426e28 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_0042223c);
  return;
}


// ---- FUN_00408d68 @ 00408d68

void FUN_00408d68(void)

{
  FUN_00408d72();
  return;
}


// ---- FUN_00408d72 @ 00408d72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408d72(void)

{
  _DAT_00426e24 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_00422250);
  return;
}


// ---- FUN_00408d87 @ 00408d87

void FUN_00408d87(void)

{
  FUN_00408d91();
  return;
}


// ---- FUN_00408d91 @ 00408d91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408d91(void)

{
  _DAT_00426e20 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_0042226c);
  return;
}


// ---- FUN_00408da6 @ 00408da6

void FUN_00408da6(void)

{
  FUN_00408db0();
  return;
}


// ---- FUN_00408db0 @ 00408db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408db0(void)

{
  _DAT_00426e1c = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_0042227c);
  return;
}


// ---- FUN_00408dc5 @ 00408dc5

void FUN_00408dc5(void)

{
  FUN_00408dcf();
  return;
}


// ---- FUN_00408dcf @ 00408dcf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408dcf(void)

{
  _DAT_00426e18 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_00422290);
  return;
}


// ---- FUN_00408de4 @ 00408de4

void FUN_00408de4(void)

{
  FUN_00408dee();
  return;
}


// ---- FUN_00408dee @ 00408dee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408dee(void)

{
  _DAT_00426e14 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_004222a8);
  return;
}


// ---- FUN_00408e03 @ 00408e03

void FUN_00408e03(void)

{
  FUN_00408e0d();
  return;
}


// ---- FUN_00408e0d @ 00408e0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408e0d(void)

{
  _DAT_00426e10 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_004222b8);
  return;
}


// ---- FUN_00408e22 @ 00408e22

void FUN_00408e22(void)

{
  FUN_00408e2c();
  return;
}


// ---- FUN_00408e2c @ 00408e2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408e2c(void)

{
  _DAT_00426e0c = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_004222cc);
  return;
}


// ---- FUN_00408e41 @ 00408e41

void FUN_00408e41(void)

{
  FUN_00408e4b();
  return;
}


// ---- FUN_00408e4b @ 00408e4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408e4b(void)

{
  _DAT_00426e08 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_004222e8);
  return;
}


// ---- FUN_00408e60 @ 00408e60

void FUN_00408e60(void)

{
  FUN_00408e6a();
  return;
}


// ---- FUN_00408e6a @ 00408e6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408e6a(void)

{
  _DAT_00426e04 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_00422304);
  return;
}


// ---- FUN_00408e7f @ 00408e7f

void FUN_00408e7f(void)

{
  FUN_00408e89();
  return;
}


// ---- FUN_00408e89 @ 00408e89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408e89(void)

{
  _DAT_00426e00 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_00422318);
  return;
}


// ---- FUN_00408e9e @ 00408e9e

void FUN_00408e9e(void)

{
  FUN_00408ea8();
  return;
}


// ---- FUN_00408ea8 @ 00408ea8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ea8(void)

{
  _DAT_00426dfc = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_00422338);
  return;
}


// ---- FUN_00408ebd @ 00408ebd

void FUN_00408ebd(void)

{
  FUN_00408ec7();
  return;
}


// ---- FUN_00408ec7 @ 00408ec7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ec7(void)

{
  _DAT_00426df8 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_0042235c);
  return;
}


// ---- FUN_00408edc @ 00408edc

void FUN_00408edc(void)

{
  FUN_00408ee6();
  return;
}


// ---- FUN_00408ee6 @ 00408ee6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ee6(void)

{
  _DAT_00426df4 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_0042237c);
  return;
}


// ---- FUN_00408efb @ 00408efb

void FUN_00408efb(void)

{
  FUN_00408f05();
  return;
}


// ---- FUN_00408f05 @ 00408f05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f05(void)

{
  _DAT_00426df0 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_0042239c);
  return;
}


// ---- FUN_00408f1a @ 00408f1a

void FUN_00408f1a(void)

{
  FUN_00408f24();
  return;
}


// ---- FUN_00408f24 @ 00408f24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f24(void)

{
  _DAT_00426dec = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_004223bc);
  return;
}


// ---- FUN_00408f39 @ 00408f39

void FUN_00408f39(void)

{
  FUN_00408f43();
  return;
}


// ---- FUN_00408f43 @ 00408f43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f43(void)

{
  _DAT_00426de8 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_004223dc);
  return;
}


// ---- FUN_00408f58 @ 00408f58

void FUN_00408f58(void)

{
  FUN_00408f62();
  return;
}


// ---- FUN_00408f62 @ 00408f62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f62(void)

{
  _DAT_00426de4 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_004223fc);
  return;
}


// ---- FUN_00408f77 @ 00408f77

void FUN_00408f77(void)

{
  FUN_00408f81();
  return;
}


// ---- FUN_00408f81 @ 00408f81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f81(void)

{
  _DAT_00426de0 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_00422414);
  return;
}


// ---- FUN_00408f96 @ 00408f96

void FUN_00408f96(void)

{
  FUN_00408fa0();
  return;
}


// ---- FUN_00408fa0 @ 00408fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408fa0(void)

{
  _DAT_00426ddc = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_00422430);
  return;
}


// ---- FUN_00408fb5 @ 00408fb5

void FUN_00408fb5(void)

{
  FUN_00408fbf();
  return;
}


// ---- FUN_00408fbf @ 00408fbf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408fbf(void)

{
  _DAT_00426dd8 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_0042244c);
  return;
}


// ---- FUN_00408fd4 @ 00408fd4

void FUN_00408fd4(void)

{
  FUN_00408fde();
  return;
}


// ---- FUN_00408fde @ 00408fde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408fde(void)

{
  _DAT_00426dd4 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_00422460);
  return;
}


// ---- FUN_00408ff3 @ 00408ff3

void FUN_00408ff3(void)

{
  FUN_00408ffd();
  return;
}


// ---- FUN_00408ffd @ 00408ffd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ffd(void)

{
  _DAT_00426dd0 = RegisterWindowMessageA(s_PM_READ_USER_AREA_00422474);
  return;
}


// ---- FUN_00409012 @ 00409012

void FUN_00409012(void)

{
  FUN_0040901c();
  return;
}


// ---- FUN_0040901c @ 0040901c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040901c(void)

{
  _DAT_00426dcc = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_00422488);
  return;
}


// ---- FUN_00409031 @ 00409031

void FUN_00409031(void)

{
  FUN_0040903b();
  return;
}


// ---- FUN_0040903b @ 0040903b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040903b(void)

{
  _DAT_00426dc8 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_0042249c);
  return;
}


// ---- FUN_00409050 @ 00409050

void FUN_00409050(void)

{
  FUN_0040905a();
  return;
}


// ---- FUN_0040905a @ 0040905a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040905a(void)

{
  _DAT_00426dc4 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_004224b0);
  return;
}


// ---- FUN_0040906f @ 0040906f

void FUN_0040906f(void)

{
  FUN_00409079();
  return;
}


// ---- FUN_00409079 @ 00409079

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409079(void)

{
  _DAT_00426dc0 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_004224c4);
  return;
}


// ---- FUN_0040908e @ 0040908e

void FUN_0040908e(void)

{
  FUN_00409098();
  return;
}


// ---- FUN_00409098 @ 00409098

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409098(void)

{
  _DAT_00426dbc = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_004224dc);
  return;
}


// ---- FUN_004090ad @ 004090ad

void FUN_004090ad(void)

{
  FUN_004090b7();
  return;
}


// ---- FUN_004090b7 @ 004090b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004090b7(void)

{
  _DAT_00426db8 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_004224f4);
  return;
}


// ---- FUN_004090cc @ 004090cc

void FUN_004090cc(void)

{
  FUN_004090d6();
  return;
}


// ---- FUN_004090d6 @ 004090d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004090d6(void)

{
  _DAT_00426db4 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_00422508);
  return;
}


// ---- FUN_004090eb @ 004090eb

void FUN_004090eb(void)

{
  FUN_004090f5();
  return;
}


// ---- FUN_004090f5 @ 004090f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004090f5(void)

{
  _DAT_00426db0 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_0042251c);
  return;
}


// ---- FUN_0040910a @ 0040910a

void FUN_0040910a(void)

{
  FUN_00409114();
  return;
}


// ---- FUN_00409114 @ 00409114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409114(void)

{
  _DAT_00426dac = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_00422530);
  return;
}


// ---- CreateObject @ 00409129

/* Library Function - Single Match
    public: static class CObject * __stdcall CGdiObject::CreateObject(void)
   
   Library: Visual Studio 2003 Debug */

CObject * CGdiObject::CreateObject(void)

{
  CDocument *pCVar1;
  CDocument *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418cda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (CDocument *)FUN_00404e50(0x58);
  local_8 = 0;
  if (pCVar1 == (CDocument *)0x0) {
    local_1c = (CDocument *)0x0;
  }
  else {
    local_1c = FUN_004091c1(pCVar1);
  }
  ExceptionList = local_10;
  return (CObject *)local_1c;
}


// ---- FUN_0040918d @ 0040918d

undefined * FUN_0040918d(void)

{
  return classCDocument_exref;
}


// ---- FUN_00409197 @ 00409197

undefined ** FUN_00409197(void)

{
  return &PTR_s_CLEOLutDoc_0041a8a8;
}


// ---- FUN_004091a7 @ 004091a7

undefined * FUN_004091a7(void)

{
  return messageMap_exref;
}


// ---- FUN_004091b1 @ 004091b1

undefined ** FUN_004091b1(void)

{
  return &PTR_FUN_0041a8c0;
}


// ---- FUN_004091c1 @ 004091c1

CDocument * __fastcall FUN_004091c1(CDocument *param_1)

{
  CDocument::CDocument(param_1);
  *(undefined ***)param_1 = &PTR_FUN_0041a8e0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return param_1;
}


// ---- FUN_004091ea @ 004091ea

void __fastcall FUN_004091ea(CDocument *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0041a8e0;
  CDocument::~CDocument(param_1);
  return;
}


// ---- OnNewDocument @ 00409206

/* Library Function - Single Match
    protected: virtual int __thiscall COleServerDocEx::OnNewDocument(void)
   
   Library: Visual Studio 2010 Debug */

int __thiscall COleServerDocEx::OnNewDocument(COleServerDocEx *this)

{
  int iVar1;
  
  iVar1 = CDocument::OnNewDocument((CDocument *)this);
  return (uint)(iVar1 != 0);
}


// ---- FUN_00409226 @ 00409226

void FUN_00409226(int param_1)

{
  FUN_004028a0(param_1);
  return;
}


// ---- FUN_0040923b @ 0040923b

undefined4 __fastcall FUN_0040923b(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}


// ---- FUN_00409250 @ 00409250

CDocument * __thiscall FUN_00409250(void *this,uint param_1)

{
  FUN_004091ea(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_00409280 @ 00409280

undefined4 __fastcall FUN_00409280(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ---- FUN_004092a0 @ 004092a0

void __thiscall FUN_004092a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x48) = param_1;
  return;
}


// ---- FUN_004092c0 @ 004092c0

void FUN_004092c0(void)

{
  FUN_004092ca();
  return;
}


// ---- FUN_004092ca @ 004092ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004092ca(void)

{
  _DAT_004275a0 = RegisterWindowMessageA(s_LEO_D_SET_STATE_00422554);
  return;
}


// ---- FUN_004092df @ 004092df

void FUN_004092df(void)

{
  FUN_004092e9();
  return;
}


// ---- FUN_004092e9 @ 004092e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004092e9(void)

{
  _DAT_0042759c = RegisterWindowMessageA(s_LEO_D_SET_STRING_00422564);
  return;
}


// ---- FUN_004092fe @ 004092fe

void FUN_004092fe(void)

{
  FUN_00409308();
  return;
}


// ---- FUN_00409308 @ 00409308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409308(void)

{
  _DAT_00427598 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_00422578);
  return;
}


// ---- FUN_0040931d @ 0040931d

void FUN_0040931d(void)

{
  FUN_00409327();
  return;
}


// ---- FUN_00409327 @ 00409327

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409327(void)

{
  _DAT_00427594 = RegisterWindowMessageA(s_LEO_D_SET_XY_00422588);
  return;
}


// ---- FUN_0040933c @ 0040933c

void FUN_0040933c(void)

{
  FUN_00409346();
  return;
}


// ---- FUN_00409346 @ 00409346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409346(void)

{
  _DAT_00427590 = RegisterWindowMessageA(s_LEO_D_GET_XY_00422598);
  return;
}


// ---- FUN_0040935b @ 0040935b

void FUN_0040935b(void)

{
  FUN_00409365();
  return;
}


// ---- FUN_00409365 @ 00409365

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409365(void)

{
  _DAT_0042758c = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_004225a8);
  return;
}


// ---- FUN_0040937a @ 0040937a

void FUN_0040937a(void)

{
  FUN_00409384();
  return;
}


// ---- FUN_00409384 @ 00409384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409384(void)

{
  _DAT_00427588 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_004225c0);
  return;
}


// ---- FUN_00409399 @ 00409399

void FUN_00409399(void)

{
  FUN_004093a3();
  return;
}


// ---- FUN_004093a3 @ 004093a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004093a3(void)

{
  _DAT_00427584 = RegisterWindowMessageA(s_LEO_D_STEP_004225dc);
  return;
}


// ---- FUN_004093b8 @ 004093b8

void FUN_004093b8(void)

{
  FUN_004093c2();
  return;
}


// ---- FUN_004093c2 @ 004093c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004093c2(void)

{
  _DAT_00427580 = RegisterWindowMessageA(s_LEO_D_EXECUTE_004225e8);
  return;
}


// ---- FUN_004093d7 @ 004093d7

void FUN_004093d7(void)

{
  FUN_004093e1();
  return;
}


// ---- FUN_004093e1 @ 004093e1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004093e1(void)

{
  _DAT_0042757c = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_004225f8);
  return;
}


// ---- FUN_004093f6 @ 004093f6

void FUN_004093f6(void)

{
  FUN_00409400();
  return;
}


// ---- FUN_00409400 @ 00409400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409400(void)

{
  _DAT_00427578 = RegisterWindowMessageA(s_LEO_D_GET_STATE_0042260c);
  return;
}


// ---- FUN_00409415 @ 00409415

void FUN_00409415(void)

{
  FUN_0040941f();
  return;
}


// ---- FUN_0040941f @ 0040941f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040941f(void)

{
  _DAT_00427574 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_0042261c);
  return;
}


// ---- FUN_00409434 @ 00409434

void FUN_00409434(void)

{
  FUN_0040943e();
  return;
}


// ---- FUN_0040943e @ 0040943e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040943e(void)

{
  _DAT_00427570 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_00422634);
  return;
}


// ---- FUN_00409453 @ 00409453

void FUN_00409453(void)

{
  FUN_0040945d();
  return;
}


// ---- FUN_0040945d @ 0040945d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040945d(void)

{
  _DAT_0042756c = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_00422644);
  return;
}


// ---- FUN_00409472 @ 00409472

void FUN_00409472(void)

{
  FUN_0040947c();
  return;
}


// ---- FUN_0040947c @ 0040947c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040947c(void)

{
  _DAT_00427568 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_00422658);
  return;
}


// ---- FUN_00409491 @ 00409491

void FUN_00409491(void)

{
  FUN_0040949b();
  return;
}


// ---- FUN_0040949b @ 0040949b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040949b(void)

{
  _DAT_00427564 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_00422674);
  return;
}


// ---- FUN_004094b0 @ 004094b0

void FUN_004094b0(void)

{
  FUN_004094ba();
  return;
}


// ---- FUN_004094ba @ 004094ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004094ba(void)

{
  _DAT_00427560 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_00422690);
  return;
}


// ---- FUN_004094cf @ 004094cf

void FUN_004094cf(void)

{
  FUN_004094d9();
  return;
}


// ---- FUN_004094d9 @ 004094d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004094d9(void)

{
  _DAT_0042755c = RegisterWindowMessageA(s_PM_SERVER_READY_004226ac);
  return;
}


// ---- FUN_004094ee @ 004094ee

void FUN_004094ee(void)

{
  FUN_004094f8();
  return;
}


// ---- FUN_004094f8 @ 004094f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004094f8(void)

{
  _DAT_00427558 = RegisterWindowMessageA(s_PM_SERVER_LOADING_004226bc);
  return;
}


// ---- FUN_0040950d @ 0040950d

void FUN_0040950d(void)

{
  FUN_00409517();
  return;
}


// ---- FUN_00409517 @ 00409517

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409517(void)

{
  _DAT_00427554 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_004226d0);
  return;
}


// ---- FUN_0040952c @ 0040952c

void FUN_0040952c(void)

{
  FUN_00409536();
  return;
}


// ---- FUN_00409536 @ 00409536

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409536(void)

{
  _DAT_00427550 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_004226e4);
  return;
}


// ---- FUN_0040954b @ 0040954b

void FUN_0040954b(void)

{
  FUN_00409555();
  return;
}


// ---- FUN_00409555 @ 00409555

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409555(void)

{
  _DAT_0042754c = RegisterWindowMessageA(s_PM_SEM_CLOSE_004226f8);
  return;
}


// ---- FUN_0040956a @ 0040956a

void FUN_0040956a(void)

{
  FUN_00409574();
  return;
}


// ---- FUN_00409574 @ 00409574

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409574(void)

{
  _DAT_00427548 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_00422708);
  return;
}


// ---- FUN_00409589 @ 00409589

void FUN_00409589(void)

{
  FUN_00409593();
  return;
}


// ---- FUN_00409593 @ 00409593

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409593(void)

{
  _DAT_00427544 = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_00422724);
  return;
}


// ---- FUN_004095a8 @ 004095a8

void FUN_004095a8(void)

{
  FUN_004095b2();
  return;
}


// ---- FUN_004095b2 @ 004095b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004095b2(void)

{
  _DAT_00427540 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_00422738);
  return;
}


// ---- FUN_004095c7 @ 004095c7

void FUN_004095c7(void)

{
  FUN_004095d1();
  return;
}


// ---- FUN_004095d1 @ 004095d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004095d1(void)

{
  _DAT_0042753c = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_00422750);
  return;
}


// ---- FUN_004095e6 @ 004095e6

void FUN_004095e6(void)

{
  FUN_004095f0();
  return;
}


// ---- FUN_004095f0 @ 004095f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004095f0(void)

{
  _DAT_00427538 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_00422764);
  return;
}


// ---- FUN_00409605 @ 00409605

void FUN_00409605(void)

{
  FUN_0040960f();
  return;
}


// ---- FUN_0040960f @ 0040960f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040960f(void)

{
  _DAT_00427534 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_0042277c);
  return;
}


// ---- FUN_00409624 @ 00409624

void FUN_00409624(void)

{
  FUN_0040962e();
  return;
}


// ---- FUN_0040962e @ 0040962e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040962e(void)

{
  _DAT_00427530 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_00422798);
  return;
}


// ---- FUN_00409643 @ 00409643

void FUN_00409643(void)

{
  FUN_0040964d();
  return;
}


// ---- FUN_0040964d @ 0040964d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040964d(void)

{
  _DAT_0042752c = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_004227b4);
  return;
}


// ---- FUN_00409662 @ 00409662

void FUN_00409662(void)

{
  FUN_0040966c();
  return;
}


// ---- FUN_0040966c @ 0040966c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040966c(void)

{
  _DAT_00427528 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_004227d0);
  return;
}


// ---- FUN_00409681 @ 00409681

void FUN_00409681(void)

{
  FUN_0040968b();
  return;
}


// ---- FUN_0040968b @ 0040968b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040968b(void)

{
  _DAT_00427524 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_004227ec);
  return;
}


// ---- FUN_004096a0 @ 004096a0

void FUN_004096a0(void)

{
  FUN_004096aa();
  return;
}


// ---- FUN_004096aa @ 004096aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004096aa(void)

{
  _DAT_00427520 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_00422800);
  return;
}


// ---- FUN_004096bf @ 004096bf

void FUN_004096bf(void)

{
  FUN_004096c9();
  return;
}


// ---- FUN_004096c9 @ 004096c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004096c9(void)

{
  _DAT_0042751c = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_00422818);
  return;
}


// ---- FUN_004096de @ 004096de

void FUN_004096de(void)

{
  FUN_004096e8();
  return;
}


// ---- FUN_004096e8 @ 004096e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004096e8(void)

{
  _DAT_00427518 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_00422834);
  return;
}


// ---- FUN_004096fd @ 004096fd

void FUN_004096fd(void)

{
  FUN_00409707();
  return;
}


// ---- FUN_00409707 @ 00409707

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409707(void)

{
  _DAT_00427514 = RegisterWindowMessageA(s_PM_IMEX_DONE_00422848);
  return;
}


// ---- FUN_0040971c @ 0040971c

void FUN_0040971c(void)

{
  FUN_00409726();
  return;
}


// ---- FUN_00409726 @ 00409726

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409726(void)

{
  _DAT_00427510 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_00422858);
  return;
}


// ---- FUN_0040973b @ 0040973b

void FUN_0040973b(void)

{
  FUN_00409745();
  return;
}


// ---- FUN_00409745 @ 00409745

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409745(void)

{
  _DAT_0042750c = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_0042286c);
  return;
}


// ---- FUN_0040975a @ 0040975a

void FUN_0040975a(void)

{
  FUN_00409764();
  return;
}


// ---- FUN_00409764 @ 00409764

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409764(void)

{
  _DAT_00427508 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_00422880);
  return;
}


// ---- FUN_00409779 @ 00409779

void FUN_00409779(void)

{
  FUN_00409783();
  return;
}


// ---- FUN_00409783 @ 00409783

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409783(void)

{
  _DAT_00427504 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_00422894);
  return;
}


// ---- FUN_00409798 @ 00409798

void FUN_00409798(void)

{
  FUN_004097a2();
  return;
}


// ---- FUN_004097a2 @ 004097a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004097a2(void)

{
  _DAT_00427500 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_004228a8);
  return;
}


// ---- FUN_004097b7 @ 004097b7

void FUN_004097b7(void)

{
  FUN_004097c1();
  return;
}


// ---- FUN_004097c1 @ 004097c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004097c1(void)

{
  _DAT_004274fc = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_004228c0);
  return;
}


// ---- FUN_004097d6 @ 004097d6

void FUN_004097d6(void)

{
  FUN_004097e0();
  return;
}


// ---- FUN_004097e0 @ 004097e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004097e0(void)

{
  _DAT_004274f8 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_004228d4);
  return;
}


// ---- FUN_004097f5 @ 004097f5

void FUN_004097f5(void)

{
  FUN_004097ff();
  return;
}


// ---- FUN_004097ff @ 004097ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004097ff(void)

{
  _DAT_004274f4 = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_004228e8);
  return;
}


// ---- FUN_00409814 @ 00409814

void FUN_00409814(void)

{
  FUN_0040981e();
  return;
}


// ---- FUN_0040981e @ 0040981e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040981e(void)

{
  _DAT_004274f0 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_004228fc);
  return;
}


// ---- FUN_00409833 @ 00409833

void FUN_00409833(void)

{
  FUN_0040983d();
  return;
}


// ---- FUN_0040983d @ 0040983d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040983d(void)

{
  _DAT_004274ec = RegisterWindowMessageA(s_PM_GET_DLG_NAME_0042290c);
  return;
}


// ---- FUN_00409852 @ 00409852

void FUN_00409852(void)

{
  FUN_0040985c();
  return;
}


// ---- FUN_0040985c @ 0040985c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040985c(void)

{
  _DAT_004274e8 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_0042291c);
  return;
}


// ---- FUN_00409871 @ 00409871

void FUN_00409871(void)

{
  FUN_0040987b();
  return;
}


// ---- FUN_0040987b @ 0040987b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040987b(void)

{
  _DAT_004274e4 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_00422934);
  return;
}


// ---- FUN_00409890 @ 00409890

void FUN_00409890(void)

{
  FUN_0040989a();
  return;
}


// ---- FUN_0040989a @ 0040989a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040989a(void)

{
  _DAT_004274e0 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_0042294c);
  return;
}


// ---- FUN_004098af @ 004098af

void FUN_004098af(void)

{
  FUN_004098b9();
  return;
}


// ---- FUN_004098b9 @ 004098b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004098b9(void)

{
  _DAT_004274dc = RegisterWindowMessageA(s_PM_STEP_MACRO_00422968);
  return;
}


// ---- FUN_004098ce @ 004098ce

void FUN_004098ce(void)

{
  FUN_004098d8();
  return;
}


// ---- FUN_004098d8 @ 004098d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004098d8(void)

{
  _DAT_004274d8 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_00422978);
  return;
}


// ---- FUN_004098ed @ 004098ed

void FUN_004098ed(void)

{
  FUN_004098f7();
  return;
}


// ---- FUN_004098f7 @ 004098f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004098f7(void)

{
  _DAT_004274d4 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_0042298c);
  return;
}


// ---- FUN_0040990c @ 0040990c

void FUN_0040990c(void)

{
  FUN_00409916();
  return;
}


// ---- FUN_00409916 @ 00409916

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409916(void)

{
  _DAT_004274d0 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_004229a8);
  return;
}


// ---- FUN_0040992b @ 0040992b

void FUN_0040992b(void)

{
  FUN_00409935();
  return;
}


// ---- FUN_00409935 @ 00409935

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409935(void)

{
  _DAT_004274cc = RegisterWindowMessageA(s_PM_HALT_MACRO_004229c0);
  return;
}


// ---- FUN_0040994a @ 0040994a

void FUN_0040994a(void)

{
  FUN_00409954();
  return;
}


// ---- FUN_00409954 @ 00409954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409954(void)

{
  _DAT_004274c8 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_004229d0);
  return;
}


// ---- FUN_00409969 @ 00409969

void FUN_00409969(void)

{
  FUN_00409973();
  return;
}


// ---- FUN_00409973 @ 00409973

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409973(void)

{
  _DAT_004274c4 = RegisterWindowMessageA(s_PM_MACRO_STATUS_004229e0);
  return;
}


// ---- FUN_00409988 @ 00409988

void FUN_00409988(void)

{
  FUN_00409992();
  return;
}


// ---- FUN_00409992 @ 00409992

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409992(void)

{
  _DAT_004274c0 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_004229f0);
  return;
}


// ---- FUN_004099a7 @ 004099a7

void FUN_004099a7(void)

{
  FUN_004099b1();
  return;
}


// ---- FUN_004099b1 @ 004099b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004099b1(void)

{
  _DAT_004274bc = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_00422a00);
  return;
}


// ---- FUN_004099c6 @ 004099c6

void FUN_004099c6(void)

{
  FUN_004099d0();
  return;
}


// ---- FUN_004099d0 @ 004099d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004099d0(void)

{
  _DAT_004274b8 = RegisterWindowMessageA(s_PM_SAVE_STATE_00422a1c);
  return;
}


// ---- FUN_004099e5 @ 004099e5

void FUN_004099e5(void)

{
  FUN_004099ef();
  return;
}


// ---- FUN_004099ef @ 004099ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004099ef(void)

{
  _DAT_004274b4 = RegisterWindowMessageA(s_PM_LOAD_STATE_00422a2c);
  return;
}


// ---- FUN_00409a04 @ 00409a04

void FUN_00409a04(void)

{
  FUN_00409a0e();
  return;
}


// ---- FUN_00409a0e @ 00409a0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409a0e(void)

{
  _DAT_004274b0 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_00422a3c);
  return;
}


// ---- FUN_00409a23 @ 00409a23

void FUN_00409a23(void)

{
  FUN_00409a2d();
  return;
}


// ---- FUN_00409a2d @ 00409a2d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409a2d(void)

{
  _DAT_004274ac = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_00422a54);
  return;
}


// ---- FUN_00409a42 @ 00409a42

void FUN_00409a42(void)

{
  FUN_00409a4c();
  return;
}


// ---- FUN_00409a4c @ 00409a4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409a4c(void)

{
  _DAT_004274a8 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_00422a74);
  return;
}


// ---- FUN_00409a61 @ 00409a61

void FUN_00409a61(void)

{
  FUN_00409a6b();
  return;
}


// ---- FUN_00409a6b @ 00409a6b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409a6b(void)

{
  _DAT_004274a4 = RegisterWindowMessageA(s_PM_REVIEW_STATE_00422a88);
  return;
}


// ---- FUN_00409a80 @ 00409a80

void FUN_00409a80(void)

{
  FUN_00409a8a();
  return;
}


// ---- FUN_00409a8a @ 00409a8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409a8a(void)

{
  _DAT_004274a0 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_00422a98);
  return;
}


// ---- FUN_00409a9f @ 00409a9f

void FUN_00409a9f(void)

{
  FUN_00409aa9();
  return;
}


// ---- FUN_00409aa9 @ 00409aa9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409aa9(void)

{
  _DAT_0042749c = RegisterWindowMessageA(s_PM_QUERY_SERVER_00422ab0);
  return;
}


// ---- FUN_00409abe @ 00409abe

void FUN_00409abe(void)

{
  FUN_00409ac8();
  return;
}


// ---- FUN_00409ac8 @ 00409ac8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ac8(void)

{
  _DAT_00427498 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_00422ac0);
  return;
}


// ---- FUN_00409add @ 00409add

void FUN_00409add(void)

{
  FUN_00409ae7();
  return;
}


// ---- FUN_00409ae7 @ 00409ae7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ae7(void)

{
  _DAT_00427494 = RegisterWindowMessageA(s_PM_REGISTER_00422ad8);
  return;
}


// ---- FUN_00409afc @ 00409afc

void FUN_00409afc(void)

{
  FUN_00409b06();
  return;
}


// ---- FUN_00409b06 @ 00409b06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409b06(void)

{
  _DAT_00427490 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_00422ae4);
  return;
}


// ---- FUN_00409b1b @ 00409b1b

void FUN_00409b1b(void)

{
  FUN_00409b25();
  return;
}


// ---- FUN_00409b25 @ 00409b25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409b25(void)

{
  _DAT_0042748c = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_00422afc);
  return;
}


// ---- FUN_00409b3a @ 00409b3a

void FUN_00409b3a(void)

{
  FUN_00409b44();
  return;
}


// ---- FUN_00409b44 @ 00409b44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409b44(void)

{
  _DAT_00427488 = RegisterWindowMessageA(s_PM_SEM_REGISTER_00422b14);
  return;
}


// ---- FUN_00409b59 @ 00409b59

void FUN_00409b59(void)

{
  FUN_00409b63();
  return;
}


// ---- FUN_00409b63 @ 00409b63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409b63(void)

{
  _DAT_00427484 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_00422b24);
  return;
}


// ---- FUN_00409b78 @ 00409b78

void FUN_00409b78(void)

{
  FUN_00409b82();
  return;
}


// ---- FUN_00409b82 @ 00409b82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409b82(void)

{
  _DAT_00427480 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_00422b3c);
  return;
}


// ---- FUN_00409b97 @ 00409b97

void FUN_00409b97(void)

{
  FUN_00409ba1();
  return;
}


// ---- FUN_00409ba1 @ 00409ba1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ba1(void)

{
  _DAT_0042747c = RegisterWindowMessageA(s_PM_LOG_OFF_00422b50);
  return;
}


// ---- FUN_00409bb6 @ 00409bb6

void FUN_00409bb6(void)

{
  FUN_00409bc0();
  return;
}


// ---- FUN_00409bc0 @ 00409bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409bc0(void)

{
  _DAT_00427478 = RegisterWindowMessageA(s_PM_LOG_ON_00422b5c);
  return;
}


// ---- FUN_00409bd5 @ 00409bd5

void FUN_00409bd5(void)

{
  FUN_00409bdf();
  return;
}


// ---- FUN_00409bdf @ 00409bdf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409bdf(void)

{
  _DAT_00427474 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_00422b68);
  return;
}


// ---- FUN_00409bf4 @ 00409bf4

void FUN_00409bf4(void)

{
  FUN_00409bfe();
  return;
}


// ---- FUN_00409bfe @ 00409bfe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409bfe(void)

{
  _DAT_00427470 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_00422b80);
  return;
}


// ---- FUN_00409c13 @ 00409c13

void FUN_00409c13(void)

{
  FUN_00409c1d();
  return;
}


// ---- FUN_00409c1d @ 00409c1d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c1d(void)

{
  _DAT_0042746c = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_00422b94);
  return;
}


// ---- FUN_00409c32 @ 00409c32

void FUN_00409c32(void)

{
  FUN_00409c3c();
  return;
}


// ---- FUN_00409c3c @ 00409c3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c3c(void)

{
  _DAT_00427468 = RegisterWindowMessageA(s_PM_GET_STRING_00422bac);
  return;
}


// ---- FUN_00409c51 @ 00409c51

void FUN_00409c51(void)

{
  FUN_00409c5b();
  return;
}


// ---- FUN_00409c5b @ 00409c5b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c5b(void)

{
  _DAT_00427464 = RegisterWindowMessageA(s_PM_GET_NAME_00422bbc);
  return;
}


// ---- FUN_00409c70 @ 00409c70

void FUN_00409c70(void)

{
  FUN_00409c7a();
  return;
}


// ---- FUN_00409c7a @ 00409c7a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c7a(void)

{
  _DAT_00427460 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_00422bc8);
  return;
}


// ---- FUN_00409c8f @ 00409c8f

void FUN_00409c8f(void)

{
  FUN_00409c99();
  return;
}


// ---- FUN_00409c99 @ 00409c99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c99(void)

{
  _DAT_0042745c = RegisterWindowMessageA(s_PM_GET_VALUE_00422bd8);
  return;
}


// ---- FUN_00409cae @ 00409cae

void FUN_00409cae(void)

{
  FUN_00409cb8();
  return;
}


// ---- FUN_00409cb8 @ 00409cb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cb8(void)

{
  _DAT_00427458 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_00422be8);
  return;
}


// ---- FUN_00409ccd @ 00409ccd

void FUN_00409ccd(void)

{
  FUN_00409cd7();
  return;
}


// ---- FUN_00409cd7 @ 00409cd7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cd7(void)

{
  _DAT_00427454 = RegisterWindowMessageA(s_PM_STAGE_GOTO_00422c04);
  return;
}


// ---- FUN_00409cec @ 00409cec

void FUN_00409cec(void)

{
  FUN_00409cf6();
  return;
}


// ---- FUN_00409cf6 @ 00409cf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cf6(void)

{
  _DAT_00427450 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_00422c14);
  return;
}


// ---- FUN_00409d0b @ 00409d0b

void FUN_00409d0b(void)

{
  FUN_00409d15();
  return;
}


// ---- FUN_00409d15 @ 00409d15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409d15(void)

{
  _DAT_0042744c = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_00422c2c);
  return;
}


// ---- FUN_00409d2a @ 00409d2a

void FUN_00409d2a(void)

{
  FUN_00409d34();
  return;
}


// ---- FUN_00409d34 @ 00409d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409d34(void)

{
  _DAT_00427448 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_00422c44);
  return;
}


// ---- FUN_00409d49 @ 00409d49

void FUN_00409d49(void)

{
  FUN_00409d53();
  return;
}


// ---- FUN_00409d53 @ 00409d53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409d53(void)

{
  _DAT_00427444 = RegisterWindowMessageA(s_PM_GET_ERROR_00422c68);
  return;
}


// ---- FUN_00409d68 @ 00409d68

void FUN_00409d68(void)

{
  FUN_00409d72();
  return;
}


// ---- FUN_00409d72 @ 00409d72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409d72(void)

{
  _DAT_00427440 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_00422c78);
  return;
}


// ---- FUN_00409d87 @ 00409d87

void FUN_00409d87(void)

{
  FUN_00409d91();
  return;
}


// ---- FUN_00409d91 @ 00409d91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409d91(void)

{
  _DAT_0042743c = RegisterWindowMessageA(s_PM_END_MAG_TABLE_00422c8c);
  return;
}


// ---- FUN_00409da6 @ 00409da6

void FUN_00409da6(void)

{
  FUN_00409db0();
  return;
}


// ---- FUN_00409db0 @ 00409db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409db0(void)

{
  _DAT_00427438 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_00422ca0);
  return;
}


// ---- FUN_00409dc5 @ 00409dc5

void FUN_00409dc5(void)

{
  FUN_00409dcf();
  return;
}


// ---- FUN_00409dcf @ 00409dcf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409dcf(void)

{
  _DAT_00427434 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_00422cc0);
  return;
}


// ---- FUN_00409de4 @ 00409de4

void FUN_00409de4(void)

{
  FUN_00409dee();
  return;
}


// ---- FUN_00409dee @ 00409dee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409dee(void)

{
  _DAT_00427430 = RegisterWindowMessageA(s_PM_GET_HANDLES_00422cd4);
  return;
}


// ---- FUN_00409e03 @ 00409e03

void FUN_00409e03(void)

{
  FUN_00409e0d();
  return;
}


// ---- FUN_00409e0d @ 00409e0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e0d(void)

{
  _DAT_0042742c = RegisterWindowMessageA(s_PM_GET_STATES_00422ce4);
  return;
}


// ---- FUN_00409e22 @ 00409e22

void FUN_00409e22(void)

{
  FUN_00409e2c();
  return;
}


// ---- FUN_00409e2c @ 00409e2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e2c(void)

{
  _DAT_00427428 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_00422cf4);
  return;
}


// ---- FUN_00409e41 @ 00409e41

void FUN_00409e41(void)

{
  FUN_00409e4b();
  return;
}


// ---- FUN_00409e4b @ 00409e4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e4b(void)

{
  _DAT_00427424 = RegisterWindowMessageA(s_PM_GET_LICENCE_00422d08);
  return;
}


// ---- FUN_00409e60 @ 00409e60

void FUN_00409e60(void)

{
  FUN_00409e6a();
  return;
}


// ---- FUN_00409e6a @ 00409e6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e6a(void)

{
  _DAT_00427420 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_00422d18);
  return;
}


// ---- FUN_00409e7f @ 00409e7f

void FUN_00409e7f(void)

{
  FUN_00409e89();
  return;
}


// ---- FUN_00409e89 @ 00409e89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e89(void)

{
  _DAT_0042741c = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_00422d2c);
  return;
}


// ---- FUN_00409e9e @ 00409e9e

void FUN_00409e9e(void)

{
  FUN_00409ea8();
  return;
}


// ---- FUN_00409ea8 @ 00409ea8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ea8(void)

{
  _DAT_00427418 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_00422d40);
  return;
}


// ---- FUN_00409ebd @ 00409ebd

void FUN_00409ebd(void)

{
  FUN_00409ec7();
  return;
}


// ---- FUN_00409ec7 @ 00409ec7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ec7(void)

{
  _DAT_00427414 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_00422d54);
  return;
}


// ---- FUN_00409edc @ 00409edc

void FUN_00409edc(void)

{
  FUN_00409ee6();
  return;
}


// ---- FUN_00409ee6 @ 00409ee6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ee6(void)

{
  _DAT_00427410 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_00422d68);
  return;
}


// ---- FUN_00409efb @ 00409efb

void FUN_00409efb(void)

{
  FUN_00409f05();
  return;
}


// ---- FUN_00409f05 @ 00409f05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f05(void)

{
  _DAT_0042740c = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_00422d7c);
  return;
}


// ---- FUN_00409f1a @ 00409f1a

void FUN_00409f1a(void)

{
  FUN_00409f24();
  return;
}


// ---- FUN_00409f24 @ 00409f24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f24(void)

{
  _DAT_00427408 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_00422d94);
  return;
}


// ---- FUN_00409f39 @ 00409f39

void FUN_00409f39(void)

{
  FUN_00409f43();
  return;
}


// ---- FUN_00409f43 @ 00409f43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f43(void)

{
  _DAT_00427404 = RegisterWindowMessageA(s_PM_SET_VALUE_00422da8);
  return;
}


// ---- FUN_00409f58 @ 00409f58

void FUN_00409f58(void)

{
  FUN_00409f62();
  return;
}


// ---- FUN_00409f62 @ 00409f62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f62(void)

{
  _DAT_00427400 = RegisterWindowMessageA(s_PM_SET_COARSE_00422db8);
  return;
}


// ---- FUN_00409f77 @ 00409f77

void FUN_00409f77(void)

{
  FUN_00409f81();
  return;
}


// ---- FUN_00409f81 @ 00409f81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f81(void)

{
  _DAT_004273fc = RegisterWindowMessageA(s_PM_GET_COARSE_00422dc8);
  return;
}


// ---- FUN_00409f96 @ 00409f96

void FUN_00409f96(void)

{
  FUN_00409fa0();
  return;
}


// ---- FUN_00409fa0 @ 00409fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409fa0(void)

{
  _DAT_004273f8 = RegisterWindowMessageA(s_PM_SET_NOTIFY_00422dd8);
  return;
}


// ---- FUN_00409fb5 @ 00409fb5

void FUN_00409fb5(void)

{
  FUN_00409fbf();
  return;
}


// ---- FUN_00409fbf @ 00409fbf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409fbf(void)

{
  _DAT_004273f4 = RegisterWindowMessageA(s_PM_SET_USER_MODE_00422de8);
  return;
}


// ---- FUN_00409fd4 @ 00409fd4

void FUN_00409fd4(void)

{
  FUN_00409fde();
  return;
}


// ---- FUN_00409fde @ 00409fde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409fde(void)

{
  _DAT_004273f0 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_00422dfc);
  return;
}


// ---- FUN_00409ff3 @ 00409ff3

void FUN_00409ff3(void)

{
  FUN_00409ffd();
  return;
}


// ---- FUN_00409ffd @ 00409ffd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409ffd(void)

{
  _DAT_004273ec = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_00422e18);
  return;
}


// ---- FUN_0040a012 @ 0040a012

void FUN_0040a012(void)

{
  FUN_0040a01c();
  return;
}


// ---- FUN_0040a01c @ 0040a01c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a01c(void)

{
  _DAT_004273e8 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_00422e34);
  return;
}


// ---- FUN_0040a031 @ 0040a031

void FUN_0040a031(void)

{
  FUN_0040a03b();
  return;
}


// ---- FUN_0040a03b @ 0040a03b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a03b(void)

{
  _DAT_004273e4 = RegisterWindowMessageA(s_PM_IS_ENABLED_00422e4c);
  return;
}


// ---- FUN_0040a050 @ 0040a050

void FUN_0040a050(void)

{
  FUN_0040a05a();
  return;
}


// ---- FUN_0040a05a @ 0040a05a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a05a(void)

{
  _DAT_004273e0 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_00422e5c);
  return;
}


// ---- FUN_0040a06f @ 0040a06f

void FUN_0040a06f(void)

{
  FUN_0040a079();
  return;
}


// ---- FUN_0040a079 @ 0040a079

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a079(void)

{
  _DAT_004273dc = RegisterWindowMessageA(s_PM_IS_VECTOR_00422e6c);
  return;
}


// ---- FUN_0040a08e @ 0040a08e

void FUN_0040a08e(void)

{
  FUN_0040a098();
  return;
}


// ---- FUN_0040a098 @ 0040a098

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a098(void)

{
  _DAT_004273d8 = RegisterWindowMessageA(s_PM_IS_VISIBLE_00422e7c);
  return;
}


// ---- FUN_0040a0ad @ 0040a0ad

void FUN_0040a0ad(void)

{
  FUN_0040a0b7();
  return;
}


// ---- FUN_0040a0b7 @ 0040a0b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a0b7(void)

{
  _DAT_004273d4 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_00422e8c);
  return;
}


// ---- FUN_0040a0cc @ 0040a0cc

void FUN_0040a0cc(void)

{
  FUN_0040a0d6();
  return;
}


// ---- FUN_0040a0d6 @ 0040a0d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a0d6(void)

{
  _DAT_004273d0 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_00422e9c);
  return;
}


// ---- FUN_0040a0eb @ 0040a0eb

void FUN_0040a0eb(void)

{
  FUN_0040a0f5();
  return;
}


// ---- FUN_0040a0f5 @ 0040a0f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a0f5(void)

{
  _DAT_004273cc = RegisterWindowMessageA(s_PM_IS_READ_WRITE_00422eb0);
  return;
}


// ---- FUN_0040a10a @ 0040a10a

void FUN_0040a10a(void)

{
  FUN_0040a114();
  return;
}


// ---- FUN_0040a114 @ 0040a114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a114(void)

{
  _DAT_004273c8 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_00422ec4);
  return;
}


// ---- FUN_0040a129 @ 0040a129

void FUN_0040a129(void)

{
  FUN_0040a133();
  return;
}


// ---- FUN_0040a133 @ 0040a133

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a133(void)

{
  _DAT_004273c4 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_00422ed8);
  return;
}


// ---- FUN_0040a148 @ 0040a148

void FUN_0040a148(void)

{
  FUN_0040a152();
  return;
}


// ---- FUN_0040a152 @ 0040a152

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a152(void)

{
  _DAT_004273c0 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_00422ef0);
  return;
}


// ---- FUN_0040a167 @ 0040a167

void FUN_0040a167(void)

{
  FUN_0040a171();
  return;
}


// ---- FUN_0040a171 @ 0040a171

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a171(void)

{
  _DAT_004273bc = RegisterWindowMessageA(s_PM_SERVER_HELP_00422f08);
  return;
}


// ---- FUN_0040a186 @ 0040a186

void FUN_0040a186(void)

{
  FUN_0040a190();
  return;
}


// ---- FUN_0040a190 @ 0040a190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a190(void)

{
  _DAT_004273b8 = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_00422f18);
  return;
}


// ---- FUN_0040a1a5 @ 0040a1a5

void FUN_0040a1a5(void)

{
  FUN_0040a1af();
  return;
}


// ---- FUN_0040a1af @ 0040a1af

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a1af(void)

{
  _DAT_004273b4 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_00422f34);
  return;
}


// ---- FUN_0040a1c4 @ 0040a1c4

void FUN_0040a1c4(void)

{
  FUN_0040a1ce();
  return;
}


// ---- FUN_0040a1ce @ 0040a1ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a1ce(void)

{
  _DAT_004273b0 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_00422f48);
  return;
}


// ---- FUN_0040a1e3 @ 0040a1e3

void FUN_0040a1e3(void)

{
  FUN_0040a1ed();
  return;
}


// ---- FUN_0040a1ed @ 0040a1ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a1ed(void)

{
  _DAT_004273ac = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_00422f64);
  return;
}


// ---- FUN_0040a202 @ 0040a202

void FUN_0040a202(void)

{
  FUN_0040a20c();
  return;
}


// ---- FUN_0040a20c @ 0040a20c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a20c(void)

{
  _DAT_004273a8 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_00422f7c);
  return;
}


// ---- FUN_0040a221 @ 0040a221

void FUN_0040a221(void)

{
  FUN_0040a22b();
  return;
}


// ---- FUN_0040a22b @ 0040a22b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a22b(void)

{
  _DAT_004273a4 = RegisterWindowMessageA(s_PM_STEP_VALUE_00422f90);
  return;
}


// ---- FUN_0040a240 @ 0040a240

void FUN_0040a240(void)

{
  FUN_0040a24a();
  return;
}


// ---- FUN_0040a24a @ 0040a24a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a24a(void)

{
  _DAT_004273a0 = RegisterWindowMessageA(s_PM_HELP_MODE_00422fa0);
  return;
}


// ---- FUN_0040a25f @ 0040a25f

void FUN_0040a25f(void)

{
  FUN_0040a269();
  return;
}


// ---- FUN_0040a269 @ 0040a269

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a269(void)

{
  _DAT_0042739c = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_00422fb0);
  return;
}


// ---- FUN_0040a27e @ 0040a27e

void FUN_0040a27e(void)

{
  FUN_0040a288();
  return;
}


// ---- FUN_0040a288 @ 0040a288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a288(void)

{
  _DAT_00427398 = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_00422fc4);
  return;
}


// ---- FUN_0040a29d @ 0040a29d

void FUN_0040a29d(void)

{
  FUN_0040a2a7();
  return;
}


// ---- FUN_0040a2a7 @ 0040a2a7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a2a7(void)

{
  _DAT_00427394 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_00422fd8);
  return;
}


// ---- FUN_0040a2bc @ 0040a2bc

void FUN_0040a2bc(void)

{
  FUN_0040a2c6();
  return;
}


// ---- FUN_0040a2c6 @ 0040a2c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a2c6(void)

{
  _DAT_00427390 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_00422ff0);
  return;
}


// ---- FUN_0040a2db @ 0040a2db

void FUN_0040a2db(void)

{
  FUN_0040a2e5();
  return;
}


// ---- FUN_0040a2e5 @ 0040a2e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a2e5(void)

{
  _DAT_0042738c = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_0042300c);
  return;
}


// ---- FUN_0040a2fa @ 0040a2fa

void FUN_0040a2fa(void)

{
  FUN_0040a304();
  return;
}


// ---- FUN_0040a304 @ 0040a304

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a304(void)

{
  _DAT_00427388 = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_00423020);
  return;
}


// ---- FUN_0040a319 @ 0040a319

void FUN_0040a319(void)

{
  FUN_0040a323();
  return;
}


// ---- FUN_0040a323 @ 0040a323

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a323(void)

{
  _DAT_00427384 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_00423038);
  return;
}


// ---- FUN_0040a338 @ 0040a338

void FUN_0040a338(void)

{
  FUN_0040a342();
  return;
}


// ---- FUN_0040a342 @ 0040a342

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a342(void)

{
  _DAT_00427380 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_00423050);
  return;
}


// ---- FUN_0040a357 @ 0040a357

void FUN_0040a357(void)

{
  FUN_0040a361();
  return;
}


// ---- FUN_0040a361 @ 0040a361

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a361(void)

{
  _DAT_0042737c = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_00423068);
  return;
}


// ---- FUN_0040a376 @ 0040a376

void FUN_0040a376(void)

{
  FUN_0040a380();
  return;
}


// ---- FUN_0040a380 @ 0040a380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a380(void)

{
  _DAT_00427378 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_00423080);
  return;
}


// ---- FUN_0040a395 @ 0040a395

void FUN_0040a395(void)

{
  FUN_0040a39f();
  return;
}


// ---- FUN_0040a39f @ 0040a39f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a39f(void)

{
  _DAT_00427374 = RegisterWindowMessageA(s_PM_LUT_EDITOR_0042309c);
  return;
}


// ---- FUN_0040a3b4 @ 0040a3b4

void FUN_0040a3b4(void)

{
  FUN_0040a3be();
  return;
}


// ---- FUN_0040a3be @ 0040a3be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a3be(void)

{
  _DAT_00427370 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_004230ac);
  return;
}


// ---- FUN_0040a3d3 @ 0040a3d3

void FUN_0040a3d3(void)

{
  FUN_0040a3dd();
  return;
}


// ---- FUN_0040a3dd @ 0040a3dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a3dd(void)

{
  _DAT_0042736c = RegisterWindowMessageA(s_PM_SET_LUT_RGB_004230c0);
  return;
}


// ---- FUN_0040a3f2 @ 0040a3f2

void FUN_0040a3f2(void)

{
  FUN_0040a3fc();
  return;
}


// ---- FUN_0040a3fc @ 0040a3fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a3fc(void)

{
  _DAT_00427368 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_004230d0);
  return;
}


// ---- FUN_0040a411 @ 0040a411

void FUN_0040a411(void)

{
  FUN_0040a41b();
  return;
}


// ---- FUN_0040a41b @ 0040a41b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a41b(void)

{
  _DAT_00427364 = RegisterWindowMessageA(s_PM_SET_LUT_BC_004230e4);
  return;
}


// ---- FUN_0040a430 @ 0040a430

void FUN_0040a430(void)

{
  FUN_0040a43a();
  return;
}


// ---- FUN_0040a43a @ 0040a43a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a43a(void)

{
  _DAT_00427360 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_004230f4);
  return;
}


// ---- FUN_0040a44f @ 0040a44f

void FUN_0040a44f(void)

{
  FUN_0040a459();
  return;
}


// ---- FUN_0040a459 @ 0040a459

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a459(void)

{
  _DAT_0042735c = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_00423108);
  return;
}


// ---- FUN_0040a46e @ 0040a46e

void FUN_0040a46e(void)

{
  FUN_0040a478();
  return;
}


// ---- FUN_0040a478 @ 0040a478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a478(void)

{
  _DAT_00427358 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_0042311c);
  return;
}


// ---- FUN_0040a48d @ 0040a48d

void FUN_0040a48d(void)

{
  FUN_0040a497();
  return;
}


// ---- FUN_0040a497 @ 0040a497

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a497(void)

{
  _DAT_00427354 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_00423130);
  return;
}


// ---- FUN_0040a4ac @ 0040a4ac

void FUN_0040a4ac(void)

{
  FUN_0040a4b6();
  return;
}


// ---- FUN_0040a4b6 @ 0040a4b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a4b6(void)

{
  _DAT_00427350 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_00423144);
  return;
}


// ---- FUN_0040a4cb @ 0040a4cb

void FUN_0040a4cb(void)

{
  FUN_0040a4d5();
  return;
}


// ---- FUN_0040a4d5 @ 0040a4d5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a4d5(void)

{
  _DAT_0042734c = RegisterWindowMessageA(s_PM_RGB_READ_00423158);
  return;
}


// ---- FUN_0040a4ea @ 0040a4ea

void FUN_0040a4ea(void)

{
  FUN_0040a4f4();
  return;
}


// ---- FUN_0040a4f4 @ 0040a4f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a4f4(void)

{
  _DAT_00427348 = RegisterWindowMessageA(s_PM_LUT_LOAD_00423164);
  return;
}


// ---- FUN_0040a509 @ 0040a509

void FUN_0040a509(void)

{
  FUN_0040a513();
  return;
}


// ---- FUN_0040a513 @ 0040a513

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a513(void)

{
  _DAT_00427344 = RegisterWindowMessageA(s_PM_LUT_READ_00423170);
  return;
}


// ---- FUN_0040a528 @ 0040a528

void FUN_0040a528(void)

{
  FUN_0040a532();
  return;
}


// ---- FUN_0040a532 @ 0040a532

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a532(void)

{
  _DAT_00427340 = RegisterWindowMessageA(s_PM_READ_COLOR_0042317c);
  return;
}


// ---- FUN_0040a547 @ 0040a547

void FUN_0040a547(void)

{
  FUN_0040a551();
  return;
}


// ---- FUN_0040a551 @ 0040a551

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a551(void)

{
  _DAT_0042733c = RegisterWindowMessageA(s_PM_LUT_FILL_0042318c);
  return;
}


// ---- FUN_0040a566 @ 0040a566

void FUN_0040a566(void)

{
  FUN_0040a570();
  return;
}


// ---- FUN_0040a570 @ 0040a570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a570(void)

{
  _DAT_00427338 = RegisterWindowMessageA(s_PM_LUT_QLIN_00423198);
  return;
}


// ---- FUN_0040a585 @ 0040a585

void FUN_0040a585(void)

{
  FUN_0040a58f();
  return;
}


// ---- FUN_0040a58f @ 0040a58f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a58f(void)

{
  _DAT_00427334 = RegisterWindowMessageA(s_PM_LUT_QINV_004231a4);
  return;
}


// ---- FUN_0040a5a4 @ 0040a5a4

void FUN_0040a5a4(void)

{
  FUN_0040a5ae();
  return;
}


// ---- FUN_0040a5ae @ 0040a5ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a5ae(void)

{
  _DAT_00427330 = RegisterWindowMessageA(s_PM_LUT_SAVE_004231b0);
  return;
}


// ---- FUN_0040a5c3 @ 0040a5c3

void FUN_0040a5c3(void)

{
  FUN_0040a5cd();
  return;
}


// ---- FUN_0040a5cd @ 0040a5cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a5cd(void)

{
  _DAT_0042732c = RegisterWindowMessageA(s_PM_LUT_RESTORE_004231bc);
  return;
}


// ---- FUN_0040a5e2 @ 0040a5e2

void FUN_0040a5e2(void)

{
  FUN_0040a5ec();
  return;
}


// ---- FUN_0040a5ec @ 0040a5ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a5ec(void)

{
  _DAT_00427328 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_004231cc);
  return;
}


// ---- FUN_0040a601 @ 0040a601

void FUN_0040a601(void)

{
  FUN_0040a60b();
  return;
}


// ---- FUN_0040a60b @ 0040a60b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a60b(void)

{
  _DAT_00427324 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_004231e0);
  return;
}


// ---- FUN_0040a620 @ 0040a620

void FUN_0040a620(void)

{
  FUN_0040a62a();
  return;
}


// ---- FUN_0040a62a @ 0040a62a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a62a(void)

{
  _DAT_00427320 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_004231f4);
  return;
}


// ---- FUN_0040a63f @ 0040a63f

void FUN_0040a63f(void)

{
  FUN_0040a649();
  return;
}


// ---- FUN_0040a649 @ 0040a649

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a649(void)

{
  _DAT_0042731c = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_00423208);
  return;
}


// ---- FUN_0040a65e @ 0040a65e

void FUN_0040a65e(void)

{
  FUN_0040a668();
  return;
}


// ---- FUN_0040a668 @ 0040a668

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a668(void)

{
  _DAT_00427318 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_0042321c);
  return;
}


// ---- FUN_0040a67d @ 0040a67d

void FUN_0040a67d(void)

{
  FUN_0040a687();
  return;
}


// ---- FUN_0040a687 @ 0040a687

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a687(void)

{
  _DAT_00427314 = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_00423230);
  return;
}


// ---- FUN_0040a69c @ 0040a69c

void FUN_0040a69c(void)

{
  FUN_0040a6a6();
  return;
}


// ---- FUN_0040a6a6 @ 0040a6a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a6a6(void)

{
  _DAT_00427310 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_00423248);
  return;
}


// ---- FUN_0040a6bb @ 0040a6bb

void FUN_0040a6bb(void)

{
  FUN_0040a6c5();
  return;
}


// ---- FUN_0040a6c5 @ 0040a6c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a6c5(void)

{
  _DAT_0042730c = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_0042325c);
  return;
}


// ---- FUN_0040a6da @ 0040a6da

void FUN_0040a6da(void)

{
  FUN_0040a6e4();
  return;
}


// ---- FUN_0040a6e4 @ 0040a6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a6e4(void)

{
  _DAT_00427308 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_00423270);
  return;
}


// ---- FUN_0040a6f9 @ 0040a6f9

void FUN_0040a6f9(void)

{
  FUN_0040a703();
  return;
}


// ---- FUN_0040a703 @ 0040a703

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a703(void)

{
  _DAT_00427304 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_00423284);
  return;
}


// ---- FUN_0040a718 @ 0040a718

void FUN_0040a718(void)

{
  FUN_0040a722();
  return;
}


// ---- FUN_0040a722 @ 0040a722

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a722(void)

{
  _DAT_00427300 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_00423298);
  return;
}


// ---- FUN_0040a737 @ 0040a737

void FUN_0040a737(void)

{
  FUN_0040a741();
  return;
}


// ---- FUN_0040a741 @ 0040a741

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a741(void)

{
  _DAT_004272fc = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_004232b0);
  return;
}


// ---- FUN_0040a756 @ 0040a756

void FUN_0040a756(void)

{
  FUN_0040a760();
  return;
}


// ---- FUN_0040a760 @ 0040a760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a760(void)

{
  _DAT_004272f8 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_004232c8);
  return;
}


// ---- FUN_0040a775 @ 0040a775

void FUN_0040a775(void)

{
  FUN_0040a77f();
  return;
}


// ---- FUN_0040a77f @ 0040a77f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a77f(void)

{
  _DAT_004272f4 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_004232dc);
  return;
}


// ---- FUN_0040a794 @ 0040a794

void FUN_0040a794(void)

{
  FUN_0040a79e();
  return;
}


// ---- FUN_0040a79e @ 0040a79e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a79e(void)

{
  _DAT_004272f0 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_004232f0);
  return;
}


// ---- FUN_0040a7b3 @ 0040a7b3

void FUN_0040a7b3(void)

{
  FUN_0040a7bd();
  return;
}


// ---- FUN_0040a7bd @ 0040a7bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a7bd(void)

{
  _DAT_004272ec = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_00423304);
  return;
}


// ---- FUN_0040a7d2 @ 0040a7d2

void FUN_0040a7d2(void)

{
  FUN_0040a7dc();
  return;
}


// ---- FUN_0040a7dc @ 0040a7dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a7dc(void)

{
  _DAT_004272e8 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_00423318);
  return;
}


// ---- FUN_0040a7f1 @ 0040a7f1

void FUN_0040a7f1(void)

{
  FUN_0040a7fb();
  return;
}


// ---- FUN_0040a7fb @ 0040a7fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a7fb(void)

{
  _DAT_004272e4 = RegisterWindowMessageA(s_PM_SAVE_TIFF_0042332c);
  return;
}


// ---- FUN_0040a810 @ 0040a810

void FUN_0040a810(void)

{
  FUN_0040a81a();
  return;
}


// ---- FUN_0040a81a @ 0040a81a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a81a(void)

{
  _DAT_004272e0 = RegisterWindowMessageA(s_PM_LOAD_TIFF_0042333c);
  return;
}


// ---- FUN_0040a82f @ 0040a82f

void FUN_0040a82f(void)

{
  FUN_0040a839();
  return;
}


// ---- FUN_0040a839 @ 0040a839

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a839(void)

{
  _DAT_004272dc = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_0042334c);
  return;
}


// ---- FUN_0040a84e @ 0040a84e

void FUN_0040a84e(void)

{
  FUN_0040a858();
  return;
}


// ---- FUN_0040a858 @ 0040a858

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a858(void)

{
  _DAT_004272d8 = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_0042335c);
  return;
}


// ---- FUN_0040a86d @ 0040a86d

void FUN_0040a86d(void)

{
  FUN_0040a877();
  return;
}


// ---- FUN_0040a877 @ 0040a877

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a877(void)

{
  _DAT_004272d4 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_00423370);
  return;
}


// ---- FUN_0040a88c @ 0040a88c

void FUN_0040a88c(void)

{
  FUN_0040a896();
  return;
}


// ---- FUN_0040a896 @ 0040a896

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a896(void)

{
  _DAT_004272d0 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_00423388);
  return;
}


// ---- FUN_0040a8ab @ 0040a8ab

void FUN_0040a8ab(void)

{
  FUN_0040a8b5();
  return;
}


// ---- FUN_0040a8b5 @ 0040a8b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a8b5(void)

{
  _DAT_004272cc = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_0042339c);
  return;
}


// ---- FUN_0040a8ca @ 0040a8ca

void FUN_0040a8ca(void)

{
  FUN_0040a8d4();
  return;
}


// ---- FUN_0040a8d4 @ 0040a8d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a8d4(void)

{
  _DAT_004272c8 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_004233b0);
  return;
}


// ---- FUN_0040a8e9 @ 0040a8e9

void FUN_0040a8e9(void)

{
  FUN_0040a8f3();
  return;
}


// ---- FUN_0040a8f3 @ 0040a8f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a8f3(void)

{
  _DAT_004272c4 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_004233c8);
  return;
}


// ---- FUN_0040a908 @ 0040a908

void FUN_0040a908(void)

{
  FUN_0040a912();
  return;
}


// ---- FUN_0040a912 @ 0040a912

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a912(void)

{
  _DAT_004272c0 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_004233dc);
  return;
}


// ---- FUN_0040a927 @ 0040a927

void FUN_0040a927(void)

{
  FUN_0040a931();
  return;
}


// ---- FUN_0040a931 @ 0040a931

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a931(void)

{
  _DAT_004272bc = RegisterWindowMessageA(s_PM_PRINT_IMAGE_004233f8);
  return;
}


// ---- FUN_0040a946 @ 0040a946

void FUN_0040a946(void)

{
  FUN_0040a950();
  return;
}


// ---- FUN_0040a950 @ 0040a950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a950(void)

{
  _DAT_004272b8 = RegisterWindowMessageA(s_PM_CLIP_COPY_00423408);
  return;
}


// ---- FUN_0040a965 @ 0040a965

void FUN_0040a965(void)

{
  FUN_0040a96f();
  return;
}


// ---- FUN_0040a96f @ 0040a96f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a96f(void)

{
  _DAT_004272b4 = RegisterWindowMessageA(s_PM_CLIP_INFO_00423418);
  return;
}


// ---- FUN_0040a984 @ 0040a984

void FUN_0040a984(void)

{
  FUN_0040a98e();
  return;
}


// ---- FUN_0040a98e @ 0040a98e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a98e(void)

{
  _DAT_004272b0 = RegisterWindowMessageA(s_PM_CLIP_PASTE_00423428);
  return;
}


// ---- FUN_0040a9a3 @ 0040a9a3

void FUN_0040a9a3(void)

{
  FUN_0040a9ad();
  return;
}


// ---- FUN_0040a9ad @ 0040a9ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a9ad(void)

{
  _DAT_004272ac = RegisterWindowMessageA(s_PM_HRRU_PHOTO_00423438);
  return;
}


// ---- FUN_0040a9c2 @ 0040a9c2

void FUN_0040a9c2(void)

{
  FUN_0040a9cc();
  return;
}


// ---- FUN_0040a9cc @ 0040a9cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a9cc(void)

{
  _DAT_004272a8 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_00423448);
  return;
}


// ---- FUN_0040a9e1 @ 0040a9e1

void FUN_0040a9e1(void)

{
  FUN_0040a9eb();
  return;
}


// ---- FUN_0040a9eb @ 0040a9eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a9eb(void)

{
  _DAT_004272a4 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_0042345c);
  return;
}


// ---- FUN_0040aa00 @ 0040aa00

void FUN_0040aa00(void)

{
  FUN_0040aa0a();
  return;
}


// ---- FUN_0040aa0a @ 0040aa0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aa0a(void)

{
  _DAT_004272a0 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_00423470);
  return;
}


// ---- FUN_0040aa1f @ 0040aa1f

void FUN_0040aa1f(void)

{
  FUN_0040aa29();
  return;
}


// ---- FUN_0040aa29 @ 0040aa29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aa29(void)

{
  _DAT_0042729c = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_00423484);
  return;
}


// ---- FUN_0040aa3e @ 0040aa3e

void FUN_0040aa3e(void)

{
  FUN_0040aa48();
  return;
}


// ---- FUN_0040aa48 @ 0040aa48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aa48(void)

{
  _DAT_00427298 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_00423494);
  return;
}


// ---- FUN_0040aa5d @ 0040aa5d

void FUN_0040aa5d(void)

{
  FUN_0040aa67();
  return;
}


// ---- FUN_0040aa67 @ 0040aa67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aa67(void)

{
  _DAT_00427294 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_004234ac);
  return;
}


// ---- FUN_0040aa7c @ 0040aa7c

void FUN_0040aa7c(void)

{
  FUN_0040aa86();
  return;
}


// ---- FUN_0040aa86 @ 0040aa86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aa86(void)

{
  _DAT_00427290 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_004234c4);
  return;
}


// ---- FUN_0040aa9b @ 0040aa9b

void FUN_0040aa9b(void)

{
  FUN_0040aaa5();
  return;
}


// ---- FUN_0040aaa5 @ 0040aaa5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aaa5(void)

{
  _DAT_0042728c = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_004234e0);
  return;
}


// ---- FUN_0040aaba @ 0040aaba

void FUN_0040aaba(void)

{
  FUN_0040aac4();
  return;
}


// ---- FUN_0040aac4 @ 0040aac4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aac4(void)

{
  _DAT_00427288 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_004234fc);
  return;
}


// ---- FUN_0040aad9 @ 0040aad9

void FUN_0040aad9(void)

{
  FUN_0040aae3();
  return;
}


// ---- FUN_0040aae3 @ 0040aae3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aae3(void)

{
  _DAT_00427284 = RegisterWindowMessageA(s_PM_STAGE_LABEL_00423514);
  return;
}


// ---- FUN_0040aaf8 @ 0040aaf8

void FUN_0040aaf8(void)

{
  FUN_0040ab02();
  return;
}


// ---- FUN_0040ab02 @ 0040ab02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab02(void)

{
  _DAT_00427280 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_00423524);
  return;
}


// ---- FUN_0040ab17 @ 0040ab17

void FUN_0040ab17(void)

{
  FUN_0040ab21();
  return;
}


// ---- FUN_0040ab21 @ 0040ab21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab21(void)

{
  _DAT_0042727c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_00423538);
  return;
}


// ---- FUN_0040ab36 @ 0040ab36

void FUN_0040ab36(void)

{
  FUN_0040ab40();
  return;
}


// ---- FUN_0040ab40 @ 0040ab40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab40(void)

{
  _DAT_00427278 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_00423554);
  return;
}


// ---- FUN_0040ab55 @ 0040ab55

void FUN_0040ab55(void)

{
  FUN_0040ab5f();
  return;
}


// ---- FUN_0040ab5f @ 0040ab5f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab5f(void)

{
  _DAT_00427274 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_00423570);
  return;
}


// ---- FUN_0040ab74 @ 0040ab74

void FUN_0040ab74(void)

{
  FUN_0040ab7e();
  return;
}


// ---- FUN_0040ab7e @ 0040ab7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab7e(void)

{
  _DAT_00427270 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_00423588);
  return;
}


// ---- FUN_0040ab93 @ 0040ab93

void FUN_0040ab93(void)

{
  FUN_0040ab9d();
  return;
}


// ---- FUN_0040ab9d @ 0040ab9d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab9d(void)

{
  _DAT_0042726c = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_004235a0);
  return;
}


// ---- FUN_0040abb2 @ 0040abb2

void FUN_0040abb2(void)

{
  FUN_0040abbc();
  return;
}


// ---- FUN_0040abbc @ 0040abbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040abbc(void)

{
  _DAT_00427268 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_004235c0);
  return;
}


// ---- FUN_0040abd1 @ 0040abd1

void FUN_0040abd1(void)

{
  FUN_0040abdb();
  return;
}


// ---- FUN_0040abdb @ 0040abdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040abdb(void)

{
  _DAT_00427264 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_004235dc);
  return;
}


// ---- FUN_0040abf0 @ 0040abf0

void FUN_0040abf0(void)

{
  FUN_0040abfa();
  return;
}


// ---- FUN_0040abfa @ 0040abfa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040abfa(void)

{
  _DAT_00427260 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_004235f8);
  return;
}


// ---- FUN_0040ac0f @ 0040ac0f

void FUN_0040ac0f(void)

{
  FUN_0040ac19();
  return;
}


// ---- FUN_0040ac19 @ 0040ac19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ac19(void)

{
  _DAT_0042725c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_00423614);
  return;
}


// ---- FUN_0040ac2e @ 0040ac2e

void FUN_0040ac2e(void)

{
  FUN_0040ac38();
  return;
}


// ---- FUN_0040ac38 @ 0040ac38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ac38(void)

{
  _DAT_00427258 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_0042362c);
  return;
}


// ---- FUN_0040ac4d @ 0040ac4d

void FUN_0040ac4d(void)

{
  FUN_0040ac57();
  return;
}


// ---- FUN_0040ac57 @ 0040ac57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ac57(void)

{
  _DAT_00427254 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_00423644);
  return;
}


// ---- FUN_0040ac6c @ 0040ac6c

void FUN_0040ac6c(void)

{
  FUN_0040ac76();
  return;
}


// ---- FUN_0040ac76 @ 0040ac76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ac76(void)

{
  _DAT_00427250 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_00423660);
  return;
}


// ---- FUN_0040ac8b @ 0040ac8b

void FUN_0040ac8b(void)

{
  FUN_0040ac95();
  return;
}


// ---- FUN_0040ac95 @ 0040ac95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ac95(void)

{
  _DAT_0042724c = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_00423680);
  return;
}


// ---- FUN_0040acaa @ 0040acaa

void FUN_0040acaa(void)

{
  FUN_0040acb4();
  return;
}


// ---- FUN_0040acb4 @ 0040acb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040acb4(void)

{
  _DAT_00427248 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_00423694);
  return;
}


// ---- FUN_0040acc9 @ 0040acc9

void FUN_0040acc9(void)

{
  FUN_0040acd3();
  return;
}


// ---- FUN_0040acd3 @ 0040acd3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040acd3(void)

{
  _DAT_00427244 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_004236ac);
  return;
}


// ---- FUN_0040ace8 @ 0040ace8

void FUN_0040ace8(void)

{
  FUN_0040acf2();
  return;
}


// ---- FUN_0040acf2 @ 0040acf2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040acf2(void)

{
  _DAT_00427240 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_004236c0);
  return;
}


// ---- FUN_0040ad07 @ 0040ad07

void FUN_0040ad07(void)

{
  FUN_0040ad11();
  return;
}


// ---- FUN_0040ad11 @ 0040ad11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ad11(void)

{
  _DAT_0042723c = RegisterWindowMessageA(s_PM_NAVMGR_DONE_004236dc);
  return;
}


// ---- FUN_0040ad26 @ 0040ad26

void FUN_0040ad26(void)

{
  FUN_0040ad30();
  return;
}


// ---- FUN_0040ad30 @ 0040ad30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ad30(void)

{
  _DAT_00427238 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_004236ec);
  return;
}


// ---- FUN_0040ad45 @ 0040ad45

void FUN_0040ad45(void)

{
  FUN_0040ad4f();
  return;
}


// ---- FUN_0040ad4f @ 0040ad4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ad4f(void)

{
  _DAT_00427234 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_00423700);
  return;
}


// ---- FUN_0040ad64 @ 0040ad64

void FUN_0040ad64(void)

{
  FUN_0040ad6e();
  return;
}


// ---- FUN_0040ad6e @ 0040ad6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ad6e(void)

{
  _DAT_00427230 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_00423718);
  return;
}


// ---- FUN_0040ad83 @ 0040ad83

void FUN_0040ad83(void)

{
  FUN_0040ad8d();
  return;
}


// ---- FUN_0040ad8d @ 0040ad8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ad8d(void)

{
  _DAT_0042722c = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_00423728);
  return;
}


// ---- FUN_0040ada2 @ 0040ada2

void FUN_0040ada2(void)

{
  FUN_0040adac();
  return;
}


// ---- FUN_0040adac @ 0040adac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040adac(void)

{
  _DAT_00427228 = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_0042373c);
  return;
}


// ---- FUN_0040adc1 @ 0040adc1

void FUN_0040adc1(void)

{
  FUN_0040adcb();
  return;
}


// ---- FUN_0040adcb @ 0040adcb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040adcb(void)

{
  _DAT_00427224 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_00423758);
  return;
}


// ---- FUN_0040ade0 @ 0040ade0

void FUN_0040ade0(void)

{
  FUN_0040adea();
  return;
}


// ---- FUN_0040adea @ 0040adea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040adea(void)

{
  _DAT_00427220 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_00423774);
  return;
}


// ---- FUN_0040adff @ 0040adff

void FUN_0040adff(void)

{
  FUN_0040ae09();
  return;
}


// ---- FUN_0040ae09 @ 0040ae09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ae09(void)

{
  _DAT_0042721c = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_00423788);
  return;
}


// ---- FUN_0040ae1e @ 0040ae1e

void FUN_0040ae1e(void)

{
  FUN_0040ae28();
  return;
}


// ---- FUN_0040ae28 @ 0040ae28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ae28(void)

{
  _DAT_00427218 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_004237a8);
  return;
}


// ---- FUN_0040ae3d @ 0040ae3d

void FUN_0040ae3d(void)

{
  FUN_0040ae47();
  return;
}


// ---- FUN_0040ae47 @ 0040ae47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ae47(void)

{
  _DAT_00427214 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_004237cc);
  return;
}


// ---- FUN_0040ae5c @ 0040ae5c

void FUN_0040ae5c(void)

{
  FUN_0040ae66();
  return;
}


// ---- FUN_0040ae66 @ 0040ae66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ae66(void)

{
  _DAT_00427210 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_004237ec);
  return;
}


// ---- FUN_0040ae7b @ 0040ae7b

void FUN_0040ae7b(void)

{
  FUN_0040ae85();
  return;
}


// ---- FUN_0040ae85 @ 0040ae85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ae85(void)

{
  _DAT_0042720c = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_0042380c);
  return;
}


// ---- FUN_0040ae9a @ 0040ae9a

void FUN_0040ae9a(void)

{
  FUN_0040aea4();
  return;
}


// ---- FUN_0040aea4 @ 0040aea4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aea4(void)

{
  _DAT_00427208 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_0042382c);
  return;
}


// ---- FUN_0040aeb9 @ 0040aeb9

void FUN_0040aeb9(void)

{
  FUN_0040aec3();
  return;
}


// ---- FUN_0040aec3 @ 0040aec3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aec3(void)

{
  _DAT_00427204 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_0042384c);
  return;
}


// ---- FUN_0040aed8 @ 0040aed8

void FUN_0040aed8(void)

{
  FUN_0040aee2();
  return;
}


// ---- FUN_0040aee2 @ 0040aee2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aee2(void)

{
  _DAT_00427200 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_0042386c);
  return;
}


// ---- FUN_0040aef7 @ 0040aef7

void FUN_0040aef7(void)

{
  FUN_0040af01();
  return;
}


// ---- FUN_0040af01 @ 0040af01

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040af01(void)

{
  _DAT_004271fc = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_00423884);
  return;
}


// ---- FUN_0040af16 @ 0040af16

void FUN_0040af16(void)

{
  FUN_0040af20();
  return;
}


// ---- FUN_0040af20 @ 0040af20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040af20(void)

{
  _DAT_004271f8 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_004238a0);
  return;
}


// ---- FUN_0040af35 @ 0040af35

void FUN_0040af35(void)

{
  FUN_0040af3f();
  return;
}


// ---- FUN_0040af3f @ 0040af3f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040af3f(void)

{
  _DAT_004271f4 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_004238bc);
  return;
}


// ---- FUN_0040af54 @ 0040af54

void FUN_0040af54(void)

{
  FUN_0040af5e();
  return;
}


// ---- FUN_0040af5e @ 0040af5e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040af5e(void)

{
  _DAT_004271f0 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_004238d0);
  return;
}


// ---- FUN_0040af73 @ 0040af73

void FUN_0040af73(void)

{
  FUN_0040af7d();
  return;
}


// ---- FUN_0040af7d @ 0040af7d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040af7d(void)

{
  _DAT_004271ec = RegisterWindowMessageA(s_PM_READ_USER_AREA_004238e4);
  return;
}


// ---- FUN_0040af92 @ 0040af92

void FUN_0040af92(void)

{
  FUN_0040af9c();
  return;
}


// ---- FUN_0040af9c @ 0040af9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040af9c(void)

{
  _DAT_004271e8 = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_004238f8);
  return;
}


// ---- FUN_0040afb1 @ 0040afb1

void FUN_0040afb1(void)

{
  FUN_0040afbb();
  return;
}


// ---- FUN_0040afbb @ 0040afbb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040afbb(void)

{
  _DAT_004271e4 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_0042390c);
  return;
}


// ---- FUN_0040afd0 @ 0040afd0

void FUN_0040afd0(void)

{
  FUN_0040afda();
  return;
}


// ---- FUN_0040afda @ 0040afda

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040afda(void)

{
  _DAT_004271e0 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_00423920);
  return;
}


// ---- FUN_0040afef @ 0040afef

void FUN_0040afef(void)

{
  FUN_0040aff9();
  return;
}


// ---- FUN_0040aff9 @ 0040aff9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aff9(void)

{
  _DAT_004271dc = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_00423934);
  return;
}


// ---- FUN_0040b00e @ 0040b00e

void FUN_0040b00e(void)

{
  FUN_0040b018();
  return;
}


// ---- FUN_0040b018 @ 0040b018

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b018(void)

{
  _DAT_004271d8 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_0042394c);
  return;
}


// ---- FUN_0040b02d @ 0040b02d

void FUN_0040b02d(void)

{
  FUN_0040b037();
  return;
}


// ---- FUN_0040b037 @ 0040b037

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b037(void)

{
  _DAT_004271d4 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_00423964);
  return;
}


// ---- FUN_0040b04c @ 0040b04c

void FUN_0040b04c(void)

{
  FUN_0040b056();
  return;
}


// ---- FUN_0040b056 @ 0040b056

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b056(void)

{
  _DAT_004271d0 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_00423978);
  return;
}


// ---- FUN_0040b06b @ 0040b06b

void FUN_0040b06b(void)

{
  FUN_0040b075();
  return;
}


// ---- FUN_0040b075 @ 0040b075

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b075(void)

{
  _DAT_004271cc = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_0042398c);
  return;
}


// ---- FUN_0040b08a @ 0040b08a

void FUN_0040b08a(void)

{
  FUN_0040b094();
  return;
}


// ---- FUN_0040b094 @ 0040b094

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b094(void)

{
  _DAT_004271c8 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_004239a0);
  return;
}


// ---- FUN_0040b0a9 @ 0040b0a9

void FUN_0040b0a9(void)

{
  FUN_0040b0b8();
  FUN_0040b0c7();
  return;
}


// ---- FUN_0040b0b8 @ 0040b0b8

void FUN_0040b0b8(void)

{
  FUN_0040b470((CWnd *)&DAT_00427188);
  return;
}


// ---- FUN_0040b0c7 @ 0040b0c7

void FUN_0040b0c7(void)

{
  FUN_004188e6(FUN_0040b0d9);
  return;
}


// ---- FUN_0040b0d9 @ 0040b0d9

void FUN_0040b0d9(void)

{
  FUN_0040b450((CWnd *)&DAT_00427188);
  return;
}


// ---- CreateObject @ 0040b0e8

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<struct
   _AFX_PROPPAGEFONTINFO>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_CHECKLIST_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_COLOR_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_DEBUG_STATE>::CreateObject(void)
     10 names - too many to list
   
   Library: Visual Studio 2003 Debug */

CView * CreateObject(void)

{
  CView *pCVar1;
  CView *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418cfa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (CView *)FUN_00404e50(0x4c);
  local_8 = 0;
  if (pCVar1 == (CView *)0x0) {
    local_1c = (CView *)0x0;
  }
  else {
    local_1c = FUN_0040b19a(pCVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_0040b14c @ 0040b14c

undefined * FUN_0040b14c(void)

{
  return classCView_exref;
}


// ---- FUN_0040b156 @ 0040b156

undefined ** FUN_0040b156(void)

{
  return &PTR_s_CLEOLutView_0041a998;
}


// ---- FUN_0040b166 @ 0040b166

undefined * FUN_0040b166(void)

{
  return messageMap_exref;
}


// ---- FUN_0040b170 @ 0040b170

undefined ** FUN_0040b170(void)

{
  return &PTR_FUN_0041a9b0;
}


// ---- FUN_0040b180 @ 0040b180

undefined * FUN_0040b180(void)

{
  return eventsinkMap_exref;
}


// ---- FUN_0040b18a @ 0040b18a

undefined ** FUN_0040b18a(void)

{
  return &PTR_FUN_0041aa00;
}


// ---- FUN_0040b19a @ 0040b19a

CView * __fastcall FUN_0040b19a(CView *param_1)

{
  CView::CView(param_1);
  *(undefined ***)param_1 = &PTR_FUN_0041ab58;
  *(undefined4 *)(param_1 + 0x44) = DAT_004269c4;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}


// ---- FUN_0040b1cf @ 0040b1cf

void __fastcall FUN_0040b1cf(CView *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0041ab58;
  CView::~CView(param_1);
  return;
}


// ---- FUN_0040b1eb @ 0040b1eb

void __thiscall FUN_0040b1eb(void *this,tagCREATESTRUCTA *param_1)

{
  CView::PreCreateWindow(this,param_1);
  return;
}


// ---- FUN_0040b204 @ 0040b204

void __fastcall FUN_0040b204(int param_1)

{
  FUN_0040b540(param_1);
  return;
}


// ---- FUN_0040b21e @ 0040b21e

void __thiscall FUN_0040b21e(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x48) = param_1;
  return;
}


// ---- FUN_0040b234 @ 0040b234

undefined4 __thiscall FUN_0040b234(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  tagRECT *ptVar3;
  CWnd *pCVar4;
  uint uVar5;
  CFile *pCVar6;
  ushort *puVar7;
  undefined1 local_14 [16];
  
  iVar1 = CView::OnCreate(this,param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar7 = (ushort *)0x0;
    iVar1 = 0;
    pCVar6 = (CFile *)0x0;
    uVar5 = 0x7d03;
    pCVar4 = this;
    ptVar3 = (tagRECT *)FUN_004028d0(local_14,0,0,0,0);
    iVar1 = FUN_0040b560(&DAT_00427188,(char *)0x0,0x50000000,ptVar3,pCVar4,uVar5,pCVar6,iVar1,
                         puVar7);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      DAT_004269c8 = this;
    }
  }
  return uVar2;
}


// ---- FUN_0040b29e @ 0040b29e

void __thiscall FUN_0040b29e(void *this,undefined4 param_1,int param_2,int param_3)

{
  FUN_0040b610(this);
  CWnd::SetWindowPos((CWnd *)&DAT_00427188,(CWnd *)wndTop_exref,0,0,param_2,param_3,2);
  return;
}


// ---- FUN_0040b2de @ 0040b2de

void __thiscall FUN_0040b2de(void *this,char *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (*(int *)((int)this + 0x48) != 0) {
    hWnd = (HWND)FUN_0040b5e0(*(int *)((int)this + 0x48));
    BVar1 = IsWindow(hWnd);
    if (BVar1 != 0) {
      CStatusBar::SetPaneText(*(CStatusBar **)((int)this + 0x48),0,param_1,1);
    }
  }
  return;
}


// ---- FUN_0040b31d @ 0040b31d

void __fastcall FUN_0040b31d(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  CString *pCVar2;
  char *pcVar3;
  CString local_24 [4];
  CString local_20 [4];
  CString local_1c [4];
  CString local_18 [4];
  CWnd *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418d28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = AfxGetMainWnd();
  if (local_14 != (CWnd *)0x0) {
    hWnd = (HWND)FUN_0040b5e0((int)local_14);
    BVar1 = IsWindow(hWnd);
    if (BVar1 != 0) {
      CString::CString(local_18);
      local_8 = 0;
      CString::CString(local_20);
      local_8._0_1_ = 1;
      CString::CString(local_1c);
      local_8._0_1_ = 2;
      CString::LoadStringA(local_18,0x7d04);
      if (*(int *)(param_1 + 0x44) == 0) {
        CString::LoadStringA(local_20,0x7d02);
      }
      else {
        pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x44),local_24,0x7d02);
        local_8._0_1_ = 3;
        CString::operator=(local_20,pCVar2);
        local_8._0_1_ = 2;
        CString::~CString(local_24);
      }
      FUN_004072e0((undefined4 *)local_18);
      CString::Format(local_1c,(char *)local_1c);
      pcVar3 = (char *)FUN_004072e0((undefined4 *)local_1c);
      CWnd::SetWindowTextA(local_14,pcVar3);
      local_8._0_1_ = 1;
      CString::~CString(local_1c);
      local_8 = (uint)local_8._1_3_ << 8;
      CString::~CString(local_20);
      local_8 = 0xffffffff;
      CString::~CString(local_18);
    }
  }
  ExceptionList = local_10;
  return;
}


// ---- FUN_0040b450 @ 0040b450

void __fastcall FUN_0040b450(CWnd *param_1)

{
  CWnd::~CWnd(param_1);
  return;
}


// ---- FUN_0040b470 @ 0040b470

CWnd * __fastcall FUN_0040b470(CWnd *param_1)

{
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = &PTR_FUN_0041aa88;
  return param_1;
}


// ---- FUN_0040b490 @ 0040b490

void __thiscall
FUN_0040b490(void *this,undefined4 param_1,char *param_2,ulong param_3,tagRECT *param_4,
            CWnd *param_5,uint param_6)

{
  _GUID *p_Var1;
  CFile *pCVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)0x0;
  iVar3 = 0;
  pCVar2 = (CFile *)0x0;
  p_Var1 = (_GUID *)FUN_0040b4d0();
  CWnd::CreateControl(this,p_Var1,param_2,param_3,param_4,param_5,param_6,pCVar2,iVar3,puVar4);
  return;
}


// ---- FUN_0040b4d0 @ 0040b4d0

undefined * FUN_0040b4d0(void)

{
  return &DAT_0041ab48;
}


// ---- FUN_0040b4e0 @ 0040b4e0

CWnd * __thiscall FUN_0040b4e0(void *this,uint param_1)

{
  FUN_0040b450(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_0040b510 @ 0040b510

CView * __thiscall FUN_0040b510(void *this,uint param_1)

{
  FUN_0040b1cf(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_0040b540 @ 0040b540

undefined4 __fastcall FUN_0040b540(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ---- FUN_0040b560 @ 0040b560

void __thiscall
FUN_0040b560(void *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5,
            CFile *param_6,int param_7,ushort *param_8)

{
  _GUID *p_Var1;
  
  p_Var1 = (_GUID *)FUN_0040b4d0();
  CWnd::CreateControl(this,p_Var1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// ---- AfxGetMainWnd @ 0040b5a0

/* Library Function - Single Match
    class CWnd * __stdcall AfxGetMainWnd(void)
   
   Library: Visual Studio 2003 Debug */

CWnd * AfxGetMainWnd(void)

{
  CWinThread *pCVar1;
  undefined4 local_c;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    local_c = (CWnd *)0x0;
  }
  else {
    local_c = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  return local_c;
}


// ---- FUN_0040b5e0 @ 0040b5e0

undefined4 __fastcall FUN_0040b5e0(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 0x20);
  }
  return local_c;
}


// ---- FUN_0040b610 @ 0040b610

void __fastcall FUN_0040b610(CWnd *param_1)

{
  CWnd::Default(param_1);
  return;
}


// ---- CreateObject @ 0040b630

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_OLE_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_RICHEDIT_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2003 Debug */

CWnd * CreateObject(void)

{
  CWnd *pCVar1;
  CWnd *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418d4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (CWnd *)FUN_00404e50(0x40);
  local_8 = 0;
  if (pCVar1 == (CWnd *)0x0) {
    local_1c = (CWnd *)0x0;
  }
  else {
    local_1c = FUN_0040b470(pCVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_0040b694 @ 0040b694

undefined * FUN_0040b694(void)

{
  return classCWnd_exref;
}


// ---- FUN_0040b69e @ 0040b69e

undefined ** FUN_0040b69e(void)

{
  return &PTR_s_CLUTMgr_0041ac68;
}


// ---- FUN_0040b6ae @ 0040b6ae

undefined4 __fastcall FUN_0040b6ae(long param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper((CWnd *)&local_8,param_1,1,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b6df @ 0040b6df

undefined4 __fastcall FUN_0040b6df(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,2,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b707 @ 0040b707

undefined4 __fastcall FUN_0040b707(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,3,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b72f @ 0040b72f

undefined4 __fastcall FUN_0040b72f(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,4,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b757 @ 0040b757

undefined4 __fastcall FUN_0040b757(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,5,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b77f @ 0040b77f

undefined4 __fastcall FUN_0040b77f(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,6,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b7a7 @ 0040b7a7

undefined4 __fastcall FUN_0040b7a7(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,7,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b7cf @ 0040b7cf

undefined4 __fastcall FUN_0040b7cf(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,8,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b7f7 @ 0040b7f7

undefined4 __fastcall FUN_0040b7f7(long param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper((CWnd *)&local_8,param_1,9,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b828 @ 0040b828

undefined4 __fastcall FUN_0040b828(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,10,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b850 @ 0040b850

undefined4 __fastcall FUN_0040b850(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0xb,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b878 @ 0040b878

undefined4 __fastcall FUN_0040b878(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0xc,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b8a0 @ 0040b8a0

undefined4 __fastcall FUN_0040b8a0(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0xd,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b8c8 @ 0040b8c8

undefined4 __fastcall FUN_0040b8c8(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0xe,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b8f0 @ 0040b8f0

undefined4 __fastcall FUN_0040b8f0(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0xf,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b918 @ 0040b918

undefined4 __fastcall FUN_0040b918(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x10,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b940 @ 0040b940

undefined4 __fastcall FUN_0040b940(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x11,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b968 @ 0040b968

undefined4 __fastcall FUN_0040b968(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x12,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b990 @ 0040b990

undefined4 __fastcall FUN_0040b990(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x13,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b9b8 @ 0040b9b8

undefined4 __fastcall FUN_0040b9b8(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x14,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040b9e0 @ 0040b9e0

undefined4 __fastcall FUN_0040b9e0(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x15,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040ba08 @ 0040ba08

undefined4 __thiscall FUN_0040ba08(void *this,CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)this,0x16,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040ba49 @ 0040ba49

undefined4 __fastcall FUN_0040ba49(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x17,1,(void *)0x3,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040ba71 @ 0040ba71

undefined4 __fastcall FUN_0040ba71(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x18,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040ba99 @ 0040ba99

void __fastcall FUN_0040ba99(CWnd *param_1)

{
  CWnd::InvokeHelper(param_1,(long)param_1,0x19,1,(void *)0x0,(uchar *)0x0);
  return;
}


// ---- FUN_0040baba @ 0040baba

undefined4 __fastcall FUN_0040baba(long param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper((CWnd *)&local_8,param_1,0x1a,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040baeb @ 0040baeb

undefined4 __thiscall FUN_0040baeb(void *this,CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)this,0x1b,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040bb20 @ 0040bb20

undefined4 __fastcall FUN_0040bb20(CWnd *param_1)

{
  undefined4 local_8;
  
  CWnd::InvokeHelper(param_1,(long)param_1,0x1c,1,(void *)0xb,(uchar *)&local_8);
  return local_8;
}


// ---- FUN_0040bb59 @ 0040bb59

void __fastcall FUN_0040bb59(CWnd *param_1)

{
  CWnd::InvokeHelper(param_1,(long)param_1,0xfdd8,1,(void *)0x0,(uchar *)0x0);
  return;
}


// ---- FUN_0040bb80 @ 0040bb80

void FUN_0040bb80(void)

{
  FUN_0040bb8a();
  return;
}


// ---- FUN_0040bb8a @ 0040bb8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bb8a(void)

{
  _DAT_00427984 = RegisterWindowMessageA(s_LEO_D_SET_STATE_004239f4);
  return;
}


// ---- FUN_0040bb9f @ 0040bb9f

void FUN_0040bb9f(void)

{
  FUN_0040bba9();
  return;
}


// ---- FUN_0040bba9 @ 0040bba9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bba9(void)

{
  _DAT_00427980 = RegisterWindowMessageA(s_LEO_D_SET_STRING_00423a04);
  return;
}


// ---- FUN_0040bbbe @ 0040bbbe

void FUN_0040bbbe(void)

{
  FUN_0040bbc8();
  return;
}


// ---- FUN_0040bbc8 @ 0040bbc8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bbc8(void)

{
  _DAT_0042797c = RegisterWindowMessageA(s_LEO_D_SET_VALUE_00423a18);
  return;
}


// ---- FUN_0040bbdd @ 0040bbdd

void FUN_0040bbdd(void)

{
  FUN_0040bbe7();
  return;
}


// ---- FUN_0040bbe7 @ 0040bbe7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bbe7(void)

{
  _DAT_00427978 = RegisterWindowMessageA(s_LEO_D_SET_XY_00423a28);
  return;
}


// ---- FUN_0040bbfc @ 0040bbfc

void FUN_0040bbfc(void)

{
  FUN_0040bc06();
  return;
}


// ---- FUN_0040bc06 @ 0040bc06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc06(void)

{
  _DAT_00427974 = RegisterWindowMessageA(s_LEO_D_GET_XY_00423a38);
  return;
}


// ---- FUN_0040bc1b @ 0040bc1b

void FUN_0040bc1b(void)

{
  FUN_0040bc25();
  return;
}


// ---- FUN_0040bc25 @ 0040bc25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc25(void)

{
  _DAT_00427970 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_00423a48);
  return;
}


// ---- FUN_0040bc3a @ 0040bc3a

void FUN_0040bc3a(void)

{
  FUN_0040bc44();
  return;
}


// ---- FUN_0040bc44 @ 0040bc44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc44(void)

{
  _DAT_0042796c = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_00423a60);
  return;
}


// ---- FUN_0040bc59 @ 0040bc59

void FUN_0040bc59(void)

{
  FUN_0040bc63();
  return;
}


// ---- FUN_0040bc63 @ 0040bc63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc63(void)

{
  _DAT_00427968 = RegisterWindowMessageA(s_LEO_D_STEP_00423a7c);
  return;
}


// ---- FUN_0040bc78 @ 0040bc78

void FUN_0040bc78(void)

{
  FUN_0040bc82();
  return;
}


// ---- FUN_0040bc82 @ 0040bc82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc82(void)

{
  _DAT_00427964 = RegisterWindowMessageA(s_LEO_D_EXECUTE_00423a88);
  return;
}


// ---- FUN_0040bc97 @ 0040bc97

void FUN_0040bc97(void)

{
  FUN_0040bca1();
  return;
}


// ---- FUN_0040bca1 @ 0040bca1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bca1(void)

{
  _DAT_00427960 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_00423a98);
  return;
}


// ---- FUN_0040bcb6 @ 0040bcb6

void FUN_0040bcb6(void)

{
  FUN_0040bcc0();
  return;
}


// ---- FUN_0040bcc0 @ 0040bcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bcc0(void)

{
  _DAT_0042795c = RegisterWindowMessageA(s_LEO_D_GET_STATE_00423aac);
  return;
}


// ---- FUN_0040bcd5 @ 0040bcd5

void FUN_0040bcd5(void)

{
  FUN_0040bcdf();
  return;
}


// ---- FUN_0040bcdf @ 0040bcdf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bcdf(void)

{
  _DAT_00427958 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_00423abc);
  return;
}


// ---- FUN_0040bcf4 @ 0040bcf4

void FUN_0040bcf4(void)

{
  FUN_0040bcfe();
  return;
}


// ---- FUN_0040bcfe @ 0040bcfe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bcfe(void)

{
  _DAT_00427954 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_00423ad4);
  return;
}


// ---- FUN_0040bd13 @ 0040bd13

void FUN_0040bd13(void)

{
  FUN_0040bd1d();
  return;
}


// ---- FUN_0040bd1d @ 0040bd1d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bd1d(void)

{
  _DAT_00427950 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_00423ae4);
  return;
}


// ---- FUN_0040bd32 @ 0040bd32

void FUN_0040bd32(void)

{
  FUN_0040bd3c();
  return;
}


// ---- FUN_0040bd3c @ 0040bd3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bd3c(void)

{
  _DAT_0042794c = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_00423af8);
  return;
}


// ---- FUN_0040bd51 @ 0040bd51

void FUN_0040bd51(void)

{
  FUN_0040bd5b();
  return;
}


// ---- FUN_0040bd5b @ 0040bd5b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bd5b(void)

{
  _DAT_00427948 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_00423b14);
  return;
}


// ---- FUN_0040bd70 @ 0040bd70

void FUN_0040bd70(void)

{
  FUN_0040bd7a();
  return;
}


// ---- FUN_0040bd7a @ 0040bd7a

void FUN_0040bd7a(void)

{
  DAT_00427944 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_00423b30);
  return;
}


// ---- FUN_0040bd8f @ 0040bd8f

void FUN_0040bd8f(void)

{
  FUN_0040bd99();
  return;
}


// ---- FUN_0040bd99 @ 0040bd99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bd99(void)

{
  _DAT_00427940 = RegisterWindowMessageA(s_PM_SERVER_READY_00423b4c);
  return;
}


// ---- FUN_0040bdae @ 0040bdae

void FUN_0040bdae(void)

{
  FUN_0040bdb8();
  return;
}


// ---- FUN_0040bdb8 @ 0040bdb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bdb8(void)

{
  _DAT_0042793c = RegisterWindowMessageA(s_PM_SERVER_LOADING_00423b5c);
  return;
}


// ---- FUN_0040bdcd @ 0040bdcd

void FUN_0040bdcd(void)

{
  FUN_0040bdd7();
  return;
}


// ---- FUN_0040bdd7 @ 0040bdd7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bdd7(void)

{
  _DAT_00427938 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_00423b70);
  return;
}


// ---- FUN_0040bdec @ 0040bdec

void FUN_0040bdec(void)

{
  FUN_0040bdf6();
  return;
}


// ---- FUN_0040bdf6 @ 0040bdf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bdf6(void)

{
  _DAT_00427934 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_00423b84);
  return;
}


// ---- FUN_0040be0b @ 0040be0b

void FUN_0040be0b(void)

{
  FUN_0040be15();
  return;
}


// ---- FUN_0040be15 @ 0040be15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be15(void)

{
  _DAT_00427930 = RegisterWindowMessageA(s_PM_SEM_CLOSE_00423b98);
  return;
}


// ---- FUN_0040be2a @ 0040be2a

void FUN_0040be2a(void)

{
  FUN_0040be34();
  return;
}


// ---- FUN_0040be34 @ 0040be34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be34(void)

{
  _DAT_0042792c = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_00423ba8);
  return;
}


// ---- FUN_0040be49 @ 0040be49

void FUN_0040be49(void)

{
  FUN_0040be53();
  return;
}


// ---- FUN_0040be53 @ 0040be53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be53(void)

{
  _DAT_00427928 = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_00423bc4);
  return;
}


// ---- FUN_0040be68 @ 0040be68

void FUN_0040be68(void)

{
  FUN_0040be72();
  return;
}


// ---- FUN_0040be72 @ 0040be72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be72(void)

{
  _DAT_00427924 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_00423bd8);
  return;
}


// ---- FUN_0040be87 @ 0040be87

void FUN_0040be87(void)

{
  FUN_0040be91();
  return;
}


// ---- FUN_0040be91 @ 0040be91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be91(void)

{
  _DAT_00427920 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_00423bf0);
  return;
}


// ---- FUN_0040bea6 @ 0040bea6

void FUN_0040bea6(void)

{
  FUN_0040beb0();
  return;
}


// ---- FUN_0040beb0 @ 0040beb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040beb0(void)

{
  _DAT_0042791c = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_00423c04);
  return;
}


// ---- FUN_0040bec5 @ 0040bec5

void FUN_0040bec5(void)

{
  FUN_0040becf();
  return;
}


// ---- FUN_0040becf @ 0040becf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040becf(void)

{
  _DAT_00427918 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_00423c1c);
  return;
}


// ---- FUN_0040bee4 @ 0040bee4

void FUN_0040bee4(void)

{
  FUN_0040beee();
  return;
}


// ---- FUN_0040beee @ 0040beee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040beee(void)

{
  _DAT_00427914 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_00423c38);
  return;
}


// ---- FUN_0040bf03 @ 0040bf03

void FUN_0040bf03(void)

{
  FUN_0040bf0d();
  return;
}


// ---- FUN_0040bf0d @ 0040bf0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf0d(void)

{
  _DAT_00427910 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_00423c54);
  return;
}


// ---- FUN_0040bf22 @ 0040bf22

void FUN_0040bf22(void)

{
  FUN_0040bf2c();
  return;
}


// ---- FUN_0040bf2c @ 0040bf2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf2c(void)

{
  _DAT_0042790c = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_00423c70);
  return;
}


// ---- FUN_0040bf41 @ 0040bf41

void FUN_0040bf41(void)

{
  FUN_0040bf4b();
  return;
}


// ---- FUN_0040bf4b @ 0040bf4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf4b(void)

{
  _DAT_00427908 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_00423c8c);
  return;
}


// ---- FUN_0040bf60 @ 0040bf60

void FUN_0040bf60(void)

{
  FUN_0040bf6a();
  return;
}


// ---- FUN_0040bf6a @ 0040bf6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf6a(void)

{
  _DAT_00427904 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_00423ca0);
  return;
}


// ---- FUN_0040bf7f @ 0040bf7f

void FUN_0040bf7f(void)

{
  FUN_0040bf89();
  return;
}


// ---- FUN_0040bf89 @ 0040bf89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf89(void)

{
  _DAT_00427900 = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_00423cb8);
  return;
}


// ---- FUN_0040bf9e @ 0040bf9e

void FUN_0040bf9e(void)

{
  FUN_0040bfa8();
  return;
}


// ---- FUN_0040bfa8 @ 0040bfa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bfa8(void)

{
  _DAT_004278fc = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_00423cd4);
  return;
}


// ---- FUN_0040bfbd @ 0040bfbd

void FUN_0040bfbd(void)

{
  FUN_0040bfc7();
  return;
}


// ---- FUN_0040bfc7 @ 0040bfc7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bfc7(void)

{
  _DAT_004278f8 = RegisterWindowMessageA(s_PM_IMEX_DONE_00423ce8);
  return;
}


// ---- FUN_0040bfdc @ 0040bfdc

void FUN_0040bfdc(void)

{
  FUN_0040bfe6();
  return;
}


// ---- FUN_0040bfe6 @ 0040bfe6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bfe6(void)

{
  _DAT_004278f4 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_00423cf8);
  return;
}


// ---- FUN_0040bffb @ 0040bffb

void FUN_0040bffb(void)

{
  FUN_0040c005();
  return;
}


// ---- FUN_0040c005 @ 0040c005

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c005(void)

{
  _DAT_004278f0 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_00423d0c);
  return;
}


// ---- FUN_0040c01a @ 0040c01a

void FUN_0040c01a(void)

{
  FUN_0040c024();
  return;
}


// ---- FUN_0040c024 @ 0040c024

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c024(void)

{
  _DAT_004278ec = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_00423d20);
  return;
}


// ---- FUN_0040c039 @ 0040c039

void FUN_0040c039(void)

{
  FUN_0040c043();
  return;
}


// ---- FUN_0040c043 @ 0040c043

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c043(void)

{
  _DAT_004278e8 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_00423d34);
  return;
}


// ---- FUN_0040c058 @ 0040c058

void FUN_0040c058(void)

{
  FUN_0040c062();
  return;
}


// ---- FUN_0040c062 @ 0040c062

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c062(void)

{
  _DAT_004278e4 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_00423d48);
  return;
}


// ---- FUN_0040c077 @ 0040c077

void FUN_0040c077(void)

{
  FUN_0040c081();
  return;
}


// ---- FUN_0040c081 @ 0040c081

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c081(void)

{
  _DAT_004278e0 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_00423d60);
  return;
}


// ---- FUN_0040c096 @ 0040c096

void FUN_0040c096(void)

{
  FUN_0040c0a0();
  return;
}


// ---- FUN_0040c0a0 @ 0040c0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c0a0(void)

{
  _DAT_004278dc = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_00423d74);
  return;
}


// ---- FUN_0040c0b5 @ 0040c0b5

void FUN_0040c0b5(void)

{
  FUN_0040c0bf();
  return;
}


// ---- FUN_0040c0bf @ 0040c0bf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c0bf(void)

{
  _DAT_004278d8 = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_00423d88);
  return;
}


// ---- FUN_0040c0d4 @ 0040c0d4

void FUN_0040c0d4(void)

{
  FUN_0040c0de();
  return;
}


// ---- FUN_0040c0de @ 0040c0de

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c0de(void)

{
  _DAT_004278d4 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_00423d9c);
  return;
}


// ---- FUN_0040c0f3 @ 0040c0f3

void FUN_0040c0f3(void)

{
  FUN_0040c0fd();
  return;
}


// ---- FUN_0040c0fd @ 0040c0fd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c0fd(void)

{
  _DAT_004278d0 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_00423dac);
  return;
}


// ---- FUN_0040c112 @ 0040c112

void FUN_0040c112(void)

{
  FUN_0040c11c();
  return;
}


// ---- FUN_0040c11c @ 0040c11c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c11c(void)

{
  _DAT_004278cc = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_00423dbc);
  return;
}


// ---- FUN_0040c131 @ 0040c131

void FUN_0040c131(void)

{
  FUN_0040c13b();
  return;
}


// ---- FUN_0040c13b @ 0040c13b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c13b(void)

{
  _DAT_004278c8 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_00423dd4);
  return;
}


// ---- FUN_0040c150 @ 0040c150

void FUN_0040c150(void)

{
  FUN_0040c15a();
  return;
}


// ---- FUN_0040c15a @ 0040c15a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c15a(void)

{
  _DAT_004278c4 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_00423dec);
  return;
}


// ---- FUN_0040c16f @ 0040c16f

void FUN_0040c16f(void)

{
  FUN_0040c179();
  return;
}


// ---- FUN_0040c179 @ 0040c179

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c179(void)

{
  _DAT_004278c0 = RegisterWindowMessageA(s_PM_STEP_MACRO_00423e08);
  return;
}


// ---- FUN_0040c18e @ 0040c18e

void FUN_0040c18e(void)

{
  FUN_0040c198();
  return;
}


// ---- FUN_0040c198 @ 0040c198

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c198(void)

{
  _DAT_004278bc = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_00423e18);
  return;
}


// ---- FUN_0040c1ad @ 0040c1ad

void FUN_0040c1ad(void)

{
  FUN_0040c1b7();
  return;
}


// ---- FUN_0040c1b7 @ 0040c1b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c1b7(void)

{
  _DAT_004278b8 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_00423e2c);
  return;
}


// ---- FUN_0040c1cc @ 0040c1cc

void FUN_0040c1cc(void)

{
  FUN_0040c1d6();
  return;
}


// ---- FUN_0040c1d6 @ 0040c1d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c1d6(void)

{
  _DAT_004278b4 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_00423e48);
  return;
}


// ---- FUN_0040c1eb @ 0040c1eb

void FUN_0040c1eb(void)

{
  FUN_0040c1f5();
  return;
}


// ---- FUN_0040c1f5 @ 0040c1f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c1f5(void)

{
  _DAT_004278b0 = RegisterWindowMessageA(s_PM_HALT_MACRO_00423e60);
  return;
}


// ---- FUN_0040c20a @ 0040c20a

void FUN_0040c20a(void)

{
  FUN_0040c214();
  return;
}


// ---- FUN_0040c214 @ 0040c214

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c214(void)

{
  _DAT_004278ac = RegisterWindowMessageA(s_PM_PAUSE_MACRO_00423e70);
  return;
}


// ---- FUN_0040c229 @ 0040c229

void FUN_0040c229(void)

{
  FUN_0040c233();
  return;
}


// ---- FUN_0040c233 @ 0040c233

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c233(void)

{
  _DAT_004278a8 = RegisterWindowMessageA(s_PM_MACRO_STATUS_00423e80);
  return;
}


// ---- FUN_0040c248 @ 0040c248

void FUN_0040c248(void)

{
  FUN_0040c252();
  return;
}


// ---- FUN_0040c252 @ 0040c252

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c252(void)

{
  _DAT_004278a4 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_00423e90);
  return;
}


// ---- FUN_0040c267 @ 0040c267

void FUN_0040c267(void)

{
  FUN_0040c271();
  return;
}


// ---- FUN_0040c271 @ 0040c271

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c271(void)

{
  _DAT_004278a0 = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_00423ea0);
  return;
}


// ---- FUN_0040c286 @ 0040c286

void FUN_0040c286(void)

{
  FUN_0040c290();
  return;
}


// ---- FUN_0040c290 @ 0040c290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c290(void)

{
  _DAT_0042789c = RegisterWindowMessageA(s_PM_SAVE_STATE_00423ebc);
  return;
}


// ---- FUN_0040c2a5 @ 0040c2a5

void FUN_0040c2a5(void)

{
  FUN_0040c2af();
  return;
}


// ---- FUN_0040c2af @ 0040c2af

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c2af(void)

{
  _DAT_00427898 = RegisterWindowMessageA(s_PM_LOAD_STATE_00423ecc);
  return;
}


// ---- FUN_0040c2c4 @ 0040c2c4

void FUN_0040c2c4(void)

{
  FUN_0040c2ce();
  return;
}


// ---- FUN_0040c2ce @ 0040c2ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c2ce(void)

{
  _DAT_00427894 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_00423edc);
  return;
}


// ---- FUN_0040c2e3 @ 0040c2e3

void FUN_0040c2e3(void)

{
  FUN_0040c2ed();
  return;
}


// ---- FUN_0040c2ed @ 0040c2ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c2ed(void)

{
  _DAT_00427890 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_00423ef4);
  return;
}


// ---- FUN_0040c302 @ 0040c302

void FUN_0040c302(void)

{
  FUN_0040c30c();
  return;
}


// ---- FUN_0040c30c @ 0040c30c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c30c(void)

{
  _DAT_0042788c = RegisterWindowMessageA(s_PM_EXECUTING_LINE_00423f14);
  return;
}


// ---- FUN_0040c321 @ 0040c321

void FUN_0040c321(void)

{
  FUN_0040c32b();
  return;
}


// ---- FUN_0040c32b @ 0040c32b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c32b(void)

{
  _DAT_00427888 = RegisterWindowMessageA(s_PM_REVIEW_STATE_00423f28);
  return;
}


// ---- FUN_0040c340 @ 0040c340

void FUN_0040c340(void)

{
  FUN_0040c34a();
  return;
}


// ---- FUN_0040c34a @ 0040c34a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c34a(void)

{
  _DAT_00427884 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_00423f38);
  return;
}


// ---- FUN_0040c35f @ 0040c35f

void FUN_0040c35f(void)

{
  FUN_0040c369();
  return;
}


// ---- FUN_0040c369 @ 0040c369

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c369(void)

{
  _DAT_00427880 = RegisterWindowMessageA(s_PM_QUERY_SERVER_00423f50);
  return;
}


// ---- FUN_0040c37e @ 0040c37e

void FUN_0040c37e(void)

{
  FUN_0040c388();
  return;
}


// ---- FUN_0040c388 @ 0040c388

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c388(void)

{
  _DAT_0042787c = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_00423f60);
  return;
}


// ---- FUN_0040c39d @ 0040c39d

void FUN_0040c39d(void)

{
  FUN_0040c3a7();
  return;
}


// ---- FUN_0040c3a7 @ 0040c3a7

void FUN_0040c3a7(void)

{
  DAT_00427878 = RegisterWindowMessageA(s_PM_REGISTER_00423f78);
  return;
}


// ---- FUN_0040c3bc @ 0040c3bc

void FUN_0040c3bc(void)

{
  FUN_0040c3c6();
  return;
}


// ---- FUN_0040c3c6 @ 0040c3c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c3c6(void)

{
  _DAT_00427874 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_00423f84);
  return;
}


// ---- FUN_0040c3db @ 0040c3db

void FUN_0040c3db(void)

{
  FUN_0040c3e5();
  return;
}


// ---- FUN_0040c3e5 @ 0040c3e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c3e5(void)

{
  _DAT_00427870 = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_00423f9c);
  return;
}


// ---- FUN_0040c3fa @ 0040c3fa

void FUN_0040c3fa(void)

{
  FUN_0040c404();
  return;
}


// ---- FUN_0040c404 @ 0040c404

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c404(void)

{
  _DAT_0042786c = RegisterWindowMessageA(s_PM_SEM_REGISTER_00423fb4);
  return;
}


// ---- FUN_0040c419 @ 0040c419

void FUN_0040c419(void)

{
  FUN_0040c423();
  return;
}


// ---- FUN_0040c423 @ 0040c423

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c423(void)

{
  _DAT_00427868 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_00423fc4);
  return;
}


// ---- FUN_0040c438 @ 0040c438

void FUN_0040c438(void)

{
  FUN_0040c442();
  return;
}


// ---- FUN_0040c442 @ 0040c442

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c442(void)

{
  _DAT_00427864 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_00423fdc);
  return;
}


// ---- FUN_0040c457 @ 0040c457

void FUN_0040c457(void)

{
  FUN_0040c461();
  return;
}


// ---- FUN_0040c461 @ 0040c461

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c461(void)

{
  _DAT_00427860 = RegisterWindowMessageA(s_PM_LOG_OFF_00423ff0);
  return;
}


// ---- FUN_0040c476 @ 0040c476

void FUN_0040c476(void)

{
  FUN_0040c480();
  return;
}


// ---- FUN_0040c480 @ 0040c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c480(void)

{
  _DAT_0042785c = RegisterWindowMessageA(s_PM_LOG_ON_00423ffc);
  return;
}


// ---- FUN_0040c495 @ 0040c495

void FUN_0040c495(void)

{
  FUN_0040c49f();
  return;
}


// ---- FUN_0040c49f @ 0040c49f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c49f(void)

{
  _DAT_00427858 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_00424008);
  return;
}


// ---- FUN_0040c4b4 @ 0040c4b4

void FUN_0040c4b4(void)

{
  FUN_0040c4be();
  return;
}


// ---- FUN_0040c4be @ 0040c4be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c4be(void)

{
  _DAT_00427854 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_00424020);
  return;
}


// ---- FUN_0040c4d3 @ 0040c4d3

void FUN_0040c4d3(void)

{
  FUN_0040c4dd();
  return;
}


// ---- FUN_0040c4dd @ 0040c4dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c4dd(void)

{
  _DAT_00427850 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_00424034);
  return;
}


// ---- FUN_0040c4f2 @ 0040c4f2

void FUN_0040c4f2(void)

{
  FUN_0040c4fc();
  return;
}


// ---- FUN_0040c4fc @ 0040c4fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c4fc(void)

{
  _DAT_0042784c = RegisterWindowMessageA(s_PM_GET_STRING_0042404c);
  return;
}


// ---- FUN_0040c511 @ 0040c511

void FUN_0040c511(void)

{
  FUN_0040c51b();
  return;
}


// ---- FUN_0040c51b @ 0040c51b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c51b(void)

{
  _DAT_00427848 = RegisterWindowMessageA(s_PM_GET_NAME_0042405c);
  return;
}


// ---- FUN_0040c530 @ 0040c530

void FUN_0040c530(void)

{
  FUN_0040c53a();
  return;
}


// ---- FUN_0040c53a @ 0040c53a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c53a(void)

{
  _DAT_00427844 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_00424068);
  return;
}


// ---- FUN_0040c54f @ 0040c54f

void FUN_0040c54f(void)

{
  FUN_0040c559();
  return;
}


// ---- FUN_0040c559 @ 0040c559

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c559(void)

{
  _DAT_00427840 = RegisterWindowMessageA(s_PM_GET_VALUE_00424078);
  return;
}


// ---- FUN_0040c56e @ 0040c56e

void FUN_0040c56e(void)

{
  FUN_0040c578();
  return;
}


// ---- FUN_0040c578 @ 0040c578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c578(void)

{
  _DAT_0042783c = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_00424088);
  return;
}


// ---- FUN_0040c58d @ 0040c58d

void FUN_0040c58d(void)

{
  FUN_0040c597();
  return;
}


// ---- FUN_0040c597 @ 0040c597

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c597(void)

{
  _DAT_00427838 = RegisterWindowMessageA(s_PM_STAGE_GOTO_004240a4);
  return;
}


// ---- FUN_0040c5ac @ 0040c5ac

void FUN_0040c5ac(void)

{
  FUN_0040c5b6();
  return;
}


// ---- FUN_0040c5b6 @ 0040c5b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c5b6(void)

{
  _DAT_00427834 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_004240b4);
  return;
}


// ---- FUN_0040c5cb @ 0040c5cb

void FUN_0040c5cb(void)

{
  FUN_0040c5d5();
  return;
}


// ---- FUN_0040c5d5 @ 0040c5d5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c5d5(void)

{
  _DAT_00427830 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_004240cc);
  return;
}


// ---- FUN_0040c5ea @ 0040c5ea

void FUN_0040c5ea(void)

{
  FUN_0040c5f4();
  return;
}


// ---- FUN_0040c5f4 @ 0040c5f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c5f4(void)

{
  _DAT_0042782c = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_004240e4);
  return;
}


// ---- FUN_0040c609 @ 0040c609

void FUN_0040c609(void)

{
  FUN_0040c613();
  return;
}


// ---- FUN_0040c613 @ 0040c613

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c613(void)

{
  _DAT_00427828 = RegisterWindowMessageA(s_PM_GET_ERROR_00424108);
  return;
}


// ---- FUN_0040c628 @ 0040c628

void FUN_0040c628(void)

{
  FUN_0040c632();
  return;
}


// ---- FUN_0040c632 @ 0040c632

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c632(void)

{
  _DAT_00427824 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_00424118);
  return;
}


// ---- FUN_0040c647 @ 0040c647

void FUN_0040c647(void)

{
  FUN_0040c651();
  return;
}


// ---- FUN_0040c651 @ 0040c651

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c651(void)

{
  _DAT_00427820 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_0042412c);
  return;
}


// ---- FUN_0040c666 @ 0040c666

void FUN_0040c666(void)

{
  FUN_0040c670();
  return;
}


// ---- FUN_0040c670 @ 0040c670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c670(void)

{
  _DAT_0042781c = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_00424140);
  return;
}


// ---- FUN_0040c685 @ 0040c685

void FUN_0040c685(void)

{
  FUN_0040c68f();
  return;
}


// ---- FUN_0040c68f @ 0040c68f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c68f(void)

{
  _DAT_00427818 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_00424160);
  return;
}


// ---- FUN_0040c6a4 @ 0040c6a4

void FUN_0040c6a4(void)

{
  FUN_0040c6ae();
  return;
}


// ---- FUN_0040c6ae @ 0040c6ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c6ae(void)

{
  _DAT_00427814 = RegisterWindowMessageA(s_PM_GET_HANDLES_00424174);
  return;
}


// ---- FUN_0040c6c3 @ 0040c6c3

void FUN_0040c6c3(void)

{
  FUN_0040c6cd();
  return;
}


// ---- FUN_0040c6cd @ 0040c6cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c6cd(void)

{
  _DAT_00427810 = RegisterWindowMessageA(s_PM_GET_STATES_00424184);
  return;
}


// ---- FUN_0040c6e2 @ 0040c6e2

void FUN_0040c6e2(void)

{
  FUN_0040c6ec();
  return;
}


// ---- FUN_0040c6ec @ 0040c6ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c6ec(void)

{
  _DAT_0042780c = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_00424194);
  return;
}


// ---- FUN_0040c701 @ 0040c701

void FUN_0040c701(void)

{
  FUN_0040c70b();
  return;
}


// ---- FUN_0040c70b @ 0040c70b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c70b(void)

{
  _DAT_00427808 = RegisterWindowMessageA(s_PM_GET_LICENCE_004241a8);
  return;
}


// ---- FUN_0040c720 @ 0040c720

void FUN_0040c720(void)

{
  FUN_0040c72a();
  return;
}


// ---- FUN_0040c72a @ 0040c72a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c72a(void)

{
  _DAT_00427804 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_004241b8);
  return;
}


// ---- FUN_0040c73f @ 0040c73f

void FUN_0040c73f(void)

{
  FUN_0040c749();
  return;
}


// ---- FUN_0040c749 @ 0040c749

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c749(void)

{
  _DAT_00427800 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_004241cc);
  return;
}


// ---- FUN_0040c75e @ 0040c75e

void FUN_0040c75e(void)

{
  FUN_0040c768();
  return;
}


// ---- FUN_0040c768 @ 0040c768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c768(void)

{
  _DAT_004277fc = RegisterWindowMessageA(s_PM_GET_XY_VALUES_004241e0);
  return;
}


// ---- FUN_0040c77d @ 0040c77d

void FUN_0040c77d(void)

{
  FUN_0040c787();
  return;
}


// ---- FUN_0040c787 @ 0040c787

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c787(void)

{
  _DAT_004277f8 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_004241f4);
  return;
}


// ---- FUN_0040c79c @ 0040c79c

void FUN_0040c79c(void)

{
  FUN_0040c7a6();
  return;
}


// ---- FUN_0040c7a6 @ 0040c7a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c7a6(void)

{
  _DAT_004277f4 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_00424208);
  return;
}


// ---- FUN_0040c7bb @ 0040c7bb

void FUN_0040c7bb(void)

{
  FUN_0040c7c5();
  return;
}


// ---- FUN_0040c7c5 @ 0040c7c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c7c5(void)

{
  _DAT_004277f0 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_0042421c);
  return;
}


// ---- FUN_0040c7da @ 0040c7da

void FUN_0040c7da(void)

{
  FUN_0040c7e4();
  return;
}


// ---- FUN_0040c7e4 @ 0040c7e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c7e4(void)

{
  _DAT_004277ec = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_00424234);
  return;
}


// ---- FUN_0040c7f9 @ 0040c7f9

void FUN_0040c7f9(void)

{
  FUN_0040c803();
  return;
}


// ---- FUN_0040c803 @ 0040c803

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c803(void)

{
  _DAT_004277e8 = RegisterWindowMessageA(s_PM_SET_VALUE_00424248);
  return;
}


// ---- FUN_0040c818 @ 0040c818

void FUN_0040c818(void)

{
  FUN_0040c822();
  return;
}


// ---- FUN_0040c822 @ 0040c822

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c822(void)

{
  _DAT_004277e4 = RegisterWindowMessageA(s_PM_SET_COARSE_00424258);
  return;
}


// ---- FUN_0040c837 @ 0040c837

void FUN_0040c837(void)

{
  FUN_0040c841();
  return;
}


// ---- FUN_0040c841 @ 0040c841

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c841(void)

{
  _DAT_004277e0 = RegisterWindowMessageA(s_PM_GET_COARSE_00424268);
  return;
}


// ---- FUN_0040c856 @ 0040c856

void FUN_0040c856(void)

{
  FUN_0040c860();
  return;
}


// ---- FUN_0040c860 @ 0040c860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c860(void)

{
  _DAT_004277dc = RegisterWindowMessageA(s_PM_SET_NOTIFY_00424278);
  return;
}


// ---- FUN_0040c875 @ 0040c875

void FUN_0040c875(void)

{
  FUN_0040c87f();
  return;
}


// ---- FUN_0040c87f @ 0040c87f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c87f(void)

{
  _DAT_004277d8 = RegisterWindowMessageA(s_PM_SET_USER_MODE_00424288);
  return;
}


// ---- FUN_0040c894 @ 0040c894

void FUN_0040c894(void)

{
  FUN_0040c89e();
  return;
}


// ---- FUN_0040c89e @ 0040c89e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c89e(void)

{
  _DAT_004277d4 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_0042429c);
  return;
}


// ---- FUN_0040c8b3 @ 0040c8b3

void FUN_0040c8b3(void)

{
  FUN_0040c8bd();
  return;
}


// ---- FUN_0040c8bd @ 0040c8bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c8bd(void)

{
  _DAT_004277d0 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_004242b8);
  return;
}


// ---- FUN_0040c8d2 @ 0040c8d2

void FUN_0040c8d2(void)

{
  FUN_0040c8dc();
  return;
}


// ---- FUN_0040c8dc @ 0040c8dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c8dc(void)

{
  _DAT_004277cc = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_004242d4);
  return;
}


// ---- FUN_0040c8f1 @ 0040c8f1

void FUN_0040c8f1(void)

{
  FUN_0040c8fb();
  return;
}


// ---- FUN_0040c8fb @ 0040c8fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c8fb(void)

{
  _DAT_004277c8 = RegisterWindowMessageA(s_PM_IS_ENABLED_004242ec);
  return;
}


// ---- FUN_0040c910 @ 0040c910

void FUN_0040c910(void)

{
  FUN_0040c91a();
  return;
}


// ---- FUN_0040c91a @ 0040c91a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c91a(void)

{
  _DAT_004277c4 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_004242fc);
  return;
}


// ---- FUN_0040c92f @ 0040c92f

void FUN_0040c92f(void)

{
  FUN_0040c939();
  return;
}


// ---- FUN_0040c939 @ 0040c939

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c939(void)

{
  _DAT_004277c0 = RegisterWindowMessageA(s_PM_IS_VECTOR_0042430c);
  return;
}


// ---- FUN_0040c94e @ 0040c94e

void FUN_0040c94e(void)

{
  FUN_0040c958();
  return;
}


// ---- FUN_0040c958 @ 0040c958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c958(void)

{
  _DAT_004277bc = RegisterWindowMessageA(s_PM_IS_VISIBLE_0042431c);
  return;
}


// ---- FUN_0040c96d @ 0040c96d

void FUN_0040c96d(void)

{
  FUN_0040c977();
  return;
}


// ---- FUN_0040c977 @ 0040c977

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c977(void)

{
  _DAT_004277b8 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_0042432c);
  return;
}


// ---- FUN_0040c98c @ 0040c98c

void FUN_0040c98c(void)

{
  FUN_0040c996();
  return;
}


// ---- FUN_0040c996 @ 0040c996

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c996(void)

{
  _DAT_004277b4 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_0042433c);
  return;
}


// ---- FUN_0040c9ab @ 0040c9ab

void FUN_0040c9ab(void)

{
  FUN_0040c9b5();
  return;
}


// ---- FUN_0040c9b5 @ 0040c9b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c9b5(void)

{
  _DAT_004277b0 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_00424350);
  return;
}


// ---- FUN_0040c9ca @ 0040c9ca

void FUN_0040c9ca(void)

{
  FUN_0040c9d4();
  return;
}


// ---- FUN_0040c9d4 @ 0040c9d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c9d4(void)

{
  _DAT_004277ac = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_00424364);
  return;
}


// ---- FUN_0040c9e9 @ 0040c9e9

void FUN_0040c9e9(void)

{
  FUN_0040c9f3();
  return;
}


// ---- FUN_0040c9f3 @ 0040c9f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c9f3(void)

{
  _DAT_004277a8 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_00424378);
  return;
}


// ---- FUN_0040ca08 @ 0040ca08

void FUN_0040ca08(void)

{
  FUN_0040ca12();
  return;
}


// ---- FUN_0040ca12 @ 0040ca12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca12(void)

{
  _DAT_004277a4 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_00424390);
  return;
}


// ---- FUN_0040ca27 @ 0040ca27

void FUN_0040ca27(void)

{
  FUN_0040ca31();
  return;
}


// ---- FUN_0040ca31 @ 0040ca31

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca31(void)

{
  _DAT_004277a0 = RegisterWindowMessageA(s_PM_SERVER_HELP_004243a8);
  return;
}


// ---- FUN_0040ca46 @ 0040ca46

void FUN_0040ca46(void)

{
  FUN_0040ca50();
  return;
}


// ---- FUN_0040ca50 @ 0040ca50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca50(void)

{
  _DAT_0042779c = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_004243b8);
  return;
}


// ---- FUN_0040ca65 @ 0040ca65

void FUN_0040ca65(void)

{
  FUN_0040ca6f();
  return;
}


// ---- FUN_0040ca6f @ 0040ca6f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca6f(void)

{
  _DAT_00427798 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_004243d4);
  return;
}


// ---- FUN_0040ca84 @ 0040ca84

void FUN_0040ca84(void)

{
  FUN_0040ca8e();
  return;
}


// ---- FUN_0040ca8e @ 0040ca8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca8e(void)

{
  _DAT_00427794 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_004243e8);
  return;
}


// ---- FUN_0040caa3 @ 0040caa3

void FUN_0040caa3(void)

{
  FUN_0040caad();
  return;
}


// ---- FUN_0040caad @ 0040caad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040caad(void)

{
  _DAT_00427790 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_00424404);
  return;
}


// ---- FUN_0040cac2 @ 0040cac2

void FUN_0040cac2(void)

{
  FUN_0040cacc();
  return;
}


// ---- FUN_0040cacc @ 0040cacc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cacc(void)

{
  _DAT_0042778c = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_0042441c);
  return;
}


// ---- FUN_0040cae1 @ 0040cae1

void FUN_0040cae1(void)

{
  FUN_0040caeb();
  return;
}


// ---- FUN_0040caeb @ 0040caeb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040caeb(void)

{
  _DAT_00427788 = RegisterWindowMessageA(s_PM_STEP_VALUE_00424430);
  return;
}


// ---- FUN_0040cb00 @ 0040cb00

void FUN_0040cb00(void)

{
  FUN_0040cb0a();
  return;
}


// ---- FUN_0040cb0a @ 0040cb0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cb0a(void)

{
  _DAT_00427784 = RegisterWindowMessageA(s_PM_HELP_MODE_00424440);
  return;
}


// ---- FUN_0040cb1f @ 0040cb1f

void FUN_0040cb1f(void)

{
  FUN_0040cb29();
  return;
}


// ---- FUN_0040cb29 @ 0040cb29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cb29(void)

{
  _DAT_00427780 = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_00424450);
  return;
}


// ---- FUN_0040cb3e @ 0040cb3e

void FUN_0040cb3e(void)

{
  FUN_0040cb48();
  return;
}


// ---- FUN_0040cb48 @ 0040cb48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cb48(void)

{
  _DAT_0042777c = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_00424464);
  return;
}


// ---- FUN_0040cb5d @ 0040cb5d

void FUN_0040cb5d(void)

{
  FUN_0040cb67();
  return;
}


// ---- FUN_0040cb67 @ 0040cb67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cb67(void)

{
  _DAT_00427778 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_00424478);
  return;
}


// ---- FUN_0040cb7c @ 0040cb7c

void FUN_0040cb7c(void)

{
  FUN_0040cb86();
  return;
}


// ---- FUN_0040cb86 @ 0040cb86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cb86(void)

{
  _DAT_00427774 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_00424490);
  return;
}


// ---- FUN_0040cb9b @ 0040cb9b

void FUN_0040cb9b(void)

{
  FUN_0040cba5();
  return;
}


// ---- FUN_0040cba5 @ 0040cba5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cba5(void)

{
  _DAT_00427770 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_004244ac);
  return;
}


// ---- FUN_0040cbba @ 0040cbba

void FUN_0040cbba(void)

{
  FUN_0040cbc4();
  return;
}


// ---- FUN_0040cbc4 @ 0040cbc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cbc4(void)

{
  _DAT_0042776c = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_004244c0);
  return;
}


// ---- FUN_0040cbd9 @ 0040cbd9

void FUN_0040cbd9(void)

{
  FUN_0040cbe3();
  return;
}


// ---- FUN_0040cbe3 @ 0040cbe3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cbe3(void)

{
  _DAT_00427768 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_004244d8);
  return;
}


// ---- FUN_0040cbf8 @ 0040cbf8

void FUN_0040cbf8(void)

{
  FUN_0040cc02();
  return;
}


// ---- FUN_0040cc02 @ 0040cc02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc02(void)

{
  _DAT_00427764 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_004244f0);
  return;
}


// ---- FUN_0040cc17 @ 0040cc17

void FUN_0040cc17(void)

{
  FUN_0040cc21();
  return;
}


// ---- FUN_0040cc21 @ 0040cc21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc21(void)

{
  _DAT_00427760 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_00424508);
  return;
}


// ---- FUN_0040cc36 @ 0040cc36

void FUN_0040cc36(void)

{
  FUN_0040cc40();
  return;
}


// ---- FUN_0040cc40 @ 0040cc40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc40(void)

{
  _DAT_0042775c = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_00424520);
  return;
}


// ---- FUN_0040cc55 @ 0040cc55

void FUN_0040cc55(void)

{
  FUN_0040cc5f();
  return;
}


// ---- FUN_0040cc5f @ 0040cc5f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc5f(void)

{
  _DAT_00427758 = RegisterWindowMessageA(s_PM_LUT_EDITOR_0042453c);
  return;
}


// ---- FUN_0040cc74 @ 0040cc74

void FUN_0040cc74(void)

{
  FUN_0040cc7e();
  return;
}


// ---- FUN_0040cc7e @ 0040cc7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc7e(void)

{
  _DAT_00427754 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_0042454c);
  return;
}


// ---- FUN_0040cc93 @ 0040cc93

void FUN_0040cc93(void)

{
  FUN_0040cc9d();
  return;
}


// ---- FUN_0040cc9d @ 0040cc9d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc9d(void)

{
  _DAT_00427750 = RegisterWindowMessageA(s_PM_SET_LUT_RGB_00424560);
  return;
}


// ---- FUN_0040ccb2 @ 0040ccb2

void FUN_0040ccb2(void)

{
  FUN_0040ccbc();
  return;
}


// ---- FUN_0040ccbc @ 0040ccbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ccbc(void)

{
  _DAT_0042774c = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_00424570);
  return;
}


// ---- FUN_0040ccd1 @ 0040ccd1

void FUN_0040ccd1(void)

{
  FUN_0040ccdb();
  return;
}


// ---- FUN_0040ccdb @ 0040ccdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ccdb(void)

{
  _DAT_00427748 = RegisterWindowMessageA(s_PM_SET_LUT_BC_00424584);
  return;
}


// ---- FUN_0040ccf0 @ 0040ccf0

void FUN_0040ccf0(void)

{
  FUN_0040ccfa();
  return;
}


// ---- FUN_0040ccfa @ 0040ccfa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ccfa(void)

{
  _DAT_00427744 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_00424594);
  return;
}


// ---- FUN_0040cd0f @ 0040cd0f

void FUN_0040cd0f(void)

{
  FUN_0040cd19();
  return;
}


// ---- FUN_0040cd19 @ 0040cd19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cd19(void)

{
  _DAT_00427740 = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_004245a8);
  return;
}


// ---- FUN_0040cd2e @ 0040cd2e

void FUN_0040cd2e(void)

{
  FUN_0040cd38();
  return;
}


// ---- FUN_0040cd38 @ 0040cd38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cd38(void)

{
  _DAT_0042773c = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_004245bc);
  return;
}


// ---- FUN_0040cd4d @ 0040cd4d

void FUN_0040cd4d(void)

{
  FUN_0040cd57();
  return;
}


// ---- FUN_0040cd57 @ 0040cd57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cd57(void)

{
  _DAT_00427738 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_004245d0);
  return;
}


// ---- FUN_0040cd6c @ 0040cd6c

void FUN_0040cd6c(void)

{
  FUN_0040cd76();
  return;
}


// ---- FUN_0040cd76 @ 0040cd76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cd76(void)

{
  _DAT_00427734 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_004245e4);
  return;
}


// ---- FUN_0040cd8b @ 0040cd8b

void FUN_0040cd8b(void)

{
  FUN_0040cd95();
  return;
}


// ---- FUN_0040cd95 @ 0040cd95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cd95(void)

{
  _DAT_00427730 = RegisterWindowMessageA(s_PM_RGB_READ_004245f8);
  return;
}


// ---- FUN_0040cdaa @ 0040cdaa

void FUN_0040cdaa(void)

{
  FUN_0040cdb4();
  return;
}


// ---- FUN_0040cdb4 @ 0040cdb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cdb4(void)

{
  _DAT_0042772c = RegisterWindowMessageA(s_PM_LUT_LOAD_00424604);
  return;
}


// ---- FUN_0040cdc9 @ 0040cdc9

void FUN_0040cdc9(void)

{
  FUN_0040cdd3();
  return;
}


// ---- FUN_0040cdd3 @ 0040cdd3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cdd3(void)

{
  _DAT_00427728 = RegisterWindowMessageA(s_PM_LUT_READ_00424610);
  return;
}


// ---- FUN_0040cde8 @ 0040cde8

void FUN_0040cde8(void)

{
  FUN_0040cdf2();
  return;
}


// ---- FUN_0040cdf2 @ 0040cdf2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cdf2(void)

{
  _DAT_00427724 = RegisterWindowMessageA(s_PM_READ_COLOR_0042461c);
  return;
}


// ---- FUN_0040ce07 @ 0040ce07

void FUN_0040ce07(void)

{
  FUN_0040ce11();
  return;
}


// ---- FUN_0040ce11 @ 0040ce11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ce11(void)

{
  _DAT_00427720 = RegisterWindowMessageA(s_PM_LUT_FILL_0042462c);
  return;
}


// ---- FUN_0040ce26 @ 0040ce26

void FUN_0040ce26(void)

{
  FUN_0040ce30();
  return;
}


// ---- FUN_0040ce30 @ 0040ce30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ce30(void)

{
  _DAT_0042771c = RegisterWindowMessageA(s_PM_LUT_QLIN_00424638);
  return;
}


// ---- FUN_0040ce45 @ 0040ce45

void FUN_0040ce45(void)

{
  FUN_0040ce4f();
  return;
}


// ---- FUN_0040ce4f @ 0040ce4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ce4f(void)

{
  _DAT_00427718 = RegisterWindowMessageA(s_PM_LUT_QINV_00424644);
  return;
}


// ---- FUN_0040ce64 @ 0040ce64

void FUN_0040ce64(void)

{
  FUN_0040ce6e();
  return;
}


// ---- FUN_0040ce6e @ 0040ce6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ce6e(void)

{
  _DAT_00427714 = RegisterWindowMessageA(s_PM_LUT_SAVE_00424650);
  return;
}


// ---- FUN_0040ce83 @ 0040ce83

void FUN_0040ce83(void)

{
  FUN_0040ce8d();
  return;
}


// ---- FUN_0040ce8d @ 0040ce8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ce8d(void)

{
  _DAT_00427710 = RegisterWindowMessageA(s_PM_LUT_RESTORE_0042465c);
  return;
}


// ---- FUN_0040cea2 @ 0040cea2

void FUN_0040cea2(void)

{
  FUN_0040ceac();
  return;
}


// ---- FUN_0040ceac @ 0040ceac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ceac(void)

{
  _DAT_0042770c = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_0042466c);
  return;
}


// ---- FUN_0040cec1 @ 0040cec1

void FUN_0040cec1(void)

{
  FUN_0040cecb();
  return;
}


// ---- FUN_0040cecb @ 0040cecb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cecb(void)

{
  _DAT_00427708 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_00424680);
  return;
}


// ---- FUN_0040cee0 @ 0040cee0

void FUN_0040cee0(void)

{
  FUN_0040ceea();
  return;
}


// ---- FUN_0040ceea @ 0040ceea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ceea(void)

{
  _DAT_00427704 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_00424694);
  return;
}


// ---- FUN_0040ceff @ 0040ceff

void FUN_0040ceff(void)

{
  FUN_0040cf09();
  return;
}


// ---- FUN_0040cf09 @ 0040cf09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf09(void)

{
  _DAT_00427700 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_004246a8);
  return;
}


// ---- FUN_0040cf1e @ 0040cf1e

void FUN_0040cf1e(void)

{
  FUN_0040cf28();
  return;
}


// ---- FUN_0040cf28 @ 0040cf28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf28(void)

{
  _DAT_004276fc = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_004246bc);
  return;
}


// ---- FUN_0040cf3d @ 0040cf3d

void FUN_0040cf3d(void)

{
  FUN_0040cf47();
  return;
}


// ---- FUN_0040cf47 @ 0040cf47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf47(void)

{
  _DAT_004276f8 = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_004246d0);
  return;
}


// ---- FUN_0040cf5c @ 0040cf5c

void FUN_0040cf5c(void)

{
  FUN_0040cf66();
  return;
}


// ---- FUN_0040cf66 @ 0040cf66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf66(void)

{
  _DAT_004276f4 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_004246e8);
  return;
}


// ---- FUN_0040cf7b @ 0040cf7b

void FUN_0040cf7b(void)

{
  FUN_0040cf85();
  return;
}


// ---- FUN_0040cf85 @ 0040cf85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf85(void)

{
  _DAT_004276f0 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_004246fc);
  return;
}


// ---- FUN_0040cf9a @ 0040cf9a

void FUN_0040cf9a(void)

{
  FUN_0040cfa4();
  return;
}


// ---- FUN_0040cfa4 @ 0040cfa4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cfa4(void)

{
  _DAT_004276ec = RegisterWindowMessageA(s_PM_D_GET_LICENCES_00424710);
  return;
}


// ---- FUN_0040cfb9 @ 0040cfb9

void FUN_0040cfb9(void)

{
  FUN_0040cfc3();
  return;
}


// ---- FUN_0040cfc3 @ 0040cfc3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cfc3(void)

{
  _DAT_004276e8 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_00424724);
  return;
}


// ---- FUN_0040cfd8 @ 0040cfd8

void FUN_0040cfd8(void)

{
  FUN_0040cfe2();
  return;
}


// ---- FUN_0040cfe2 @ 0040cfe2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cfe2(void)

{
  _DAT_004276e4 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_00424738);
  return;
}


// ---- FUN_0040cff7 @ 0040cff7

void FUN_0040cff7(void)

{
  FUN_0040d001();
  return;
}


// ---- FUN_0040d001 @ 0040d001

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d001(void)

{
  _DAT_004276e0 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_00424750);
  return;
}


// ---- FUN_0040d016 @ 0040d016

void FUN_0040d016(void)

{
  FUN_0040d020();
  return;
}


// ---- FUN_0040d020 @ 0040d020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d020(void)

{
  _DAT_004276dc = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_00424768);
  return;
}


// ---- FUN_0040d035 @ 0040d035

void FUN_0040d035(void)

{
  FUN_0040d03f();
  return;
}


// ---- FUN_0040d03f @ 0040d03f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d03f(void)

{
  _DAT_004276d8 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_0042477c);
  return;
}


// ---- FUN_0040d054 @ 0040d054

void FUN_0040d054(void)

{
  FUN_0040d05e();
  return;
}


// ---- FUN_0040d05e @ 0040d05e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d05e(void)

{
  _DAT_004276d4 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_00424790);
  return;
}


// ---- FUN_0040d073 @ 0040d073

void FUN_0040d073(void)

{
  FUN_0040d07d();
  return;
}


// ---- FUN_0040d07d @ 0040d07d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d07d(void)

{
  _DAT_004276d0 = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_004247a4);
  return;
}


// ---- FUN_0040d092 @ 0040d092

void FUN_0040d092(void)

{
  FUN_0040d09c();
  return;
}


// ---- FUN_0040d09c @ 0040d09c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d09c(void)

{
  _DAT_004276cc = RegisterWindowMessageA(s_PM_GET_HELP_PATH_004247b8);
  return;
}


// ---- FUN_0040d0b1 @ 0040d0b1

void FUN_0040d0b1(void)

{
  FUN_0040d0bb();
  return;
}


// ---- FUN_0040d0bb @ 0040d0bb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d0bb(void)

{
  _DAT_004276c8 = RegisterWindowMessageA(s_PM_SAVE_TIFF_004247cc);
  return;
}


// ---- FUN_0040d0d0 @ 0040d0d0

void FUN_0040d0d0(void)

{
  FUN_0040d0da();
  return;
}


// ---- FUN_0040d0da @ 0040d0da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d0da(void)

{
  _DAT_004276c4 = RegisterWindowMessageA(s_PM_LOAD_TIFF_004247dc);
  return;
}


// ---- FUN_0040d0ef @ 0040d0ef

void FUN_0040d0ef(void)

{
  FUN_0040d0f9();
  return;
}


// ---- FUN_0040d0f9 @ 0040d0f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d0f9(void)

{
  _DAT_004276c0 = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_004247ec);
  return;
}


// ---- FUN_0040d10e @ 0040d10e

void FUN_0040d10e(void)

{
  FUN_0040d118();
  return;
}


// ---- FUN_0040d118 @ 0040d118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d118(void)

{
  _DAT_004276bc = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_004247fc);
  return;
}


// ---- FUN_0040d12d @ 0040d12d

void FUN_0040d12d(void)

{
  FUN_0040d137();
  return;
}


// ---- FUN_0040d137 @ 0040d137

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d137(void)

{
  _DAT_004276b8 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_00424810);
  return;
}


// ---- FUN_0040d14c @ 0040d14c

void FUN_0040d14c(void)

{
  FUN_0040d156();
  return;
}


// ---- FUN_0040d156 @ 0040d156

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d156(void)

{
  _DAT_004276b4 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_00424828);
  return;
}


// ---- FUN_0040d16b @ 0040d16b

void FUN_0040d16b(void)

{
  FUN_0040d175();
  return;
}


// ---- FUN_0040d175 @ 0040d175

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d175(void)

{
  _DAT_004276b0 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_0042483c);
  return;
}


// ---- FUN_0040d18a @ 0040d18a

void FUN_0040d18a(void)

{
  FUN_0040d194();
  return;
}


// ---- FUN_0040d194 @ 0040d194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d194(void)

{
  _DAT_004276ac = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_00424850);
  return;
}


// ---- FUN_0040d1a9 @ 0040d1a9

void FUN_0040d1a9(void)

{
  FUN_0040d1b3();
  return;
}


// ---- FUN_0040d1b3 @ 0040d1b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d1b3(void)

{
  _DAT_004276a8 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_00424868);
  return;
}


// ---- FUN_0040d1c8 @ 0040d1c8

void FUN_0040d1c8(void)

{
  FUN_0040d1d2();
  return;
}


// ---- FUN_0040d1d2 @ 0040d1d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d1d2(void)

{
  _DAT_004276a4 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_0042487c);
  return;
}


// ---- FUN_0040d1e7 @ 0040d1e7

void FUN_0040d1e7(void)

{
  FUN_0040d1f1();
  return;
}


// ---- FUN_0040d1f1 @ 0040d1f1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d1f1(void)

{
  _DAT_004276a0 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_00424898);
  return;
}


// ---- FUN_0040d206 @ 0040d206

void FUN_0040d206(void)

{
  FUN_0040d210();
  return;
}


// ---- FUN_0040d210 @ 0040d210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d210(void)

{
  _DAT_0042769c = RegisterWindowMessageA(s_PM_CLIP_COPY_004248a8);
  return;
}


// ---- FUN_0040d225 @ 0040d225

void FUN_0040d225(void)

{
  FUN_0040d22f();
  return;
}


// ---- FUN_0040d22f @ 0040d22f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d22f(void)

{
  _DAT_00427698 = RegisterWindowMessageA(s_PM_CLIP_INFO_004248b8);
  return;
}


// ---- FUN_0040d244 @ 0040d244

void FUN_0040d244(void)

{
  FUN_0040d24e();
  return;
}


// ---- FUN_0040d24e @ 0040d24e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d24e(void)

{
  _DAT_00427694 = RegisterWindowMessageA(s_PM_CLIP_PASTE_004248c8);
  return;
}


// ---- FUN_0040d263 @ 0040d263

void FUN_0040d263(void)

{
  FUN_0040d26d();
  return;
}


// ---- FUN_0040d26d @ 0040d26d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d26d(void)

{
  _DAT_00427690 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_004248d8);
  return;
}


// ---- FUN_0040d282 @ 0040d282

void FUN_0040d282(void)

{
  FUN_0040d28c();
  return;
}


// ---- FUN_0040d28c @ 0040d28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d28c(void)

{
  _DAT_0042768c = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_004248e8);
  return;
}


// ---- FUN_0040d2a1 @ 0040d2a1

void FUN_0040d2a1(void)

{
  FUN_0040d2ab();
  return;
}


// ---- FUN_0040d2ab @ 0040d2ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2ab(void)

{
  _DAT_00427688 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_004248fc);
  return;
}


// ---- FUN_0040d2c0 @ 0040d2c0

void FUN_0040d2c0(void)

{
  FUN_0040d2ca();
  return;
}


// ---- FUN_0040d2ca @ 0040d2ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2ca(void)

{
  _DAT_00427684 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_00424910);
  return;
}


// ---- FUN_0040d2df @ 0040d2df

void FUN_0040d2df(void)

{
  FUN_0040d2e9();
  return;
}


// ---- FUN_0040d2e9 @ 0040d2e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2e9(void)

{
  _DAT_00427680 = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_00424924);
  return;
}


// ---- FUN_0040d2fe @ 0040d2fe

void FUN_0040d2fe(void)

{
  FUN_0040d308();
  return;
}


// ---- FUN_0040d308 @ 0040d308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d308(void)

{
  _DAT_0042767c = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_00424934);
  return;
}


// ---- FUN_0040d31d @ 0040d31d

void FUN_0040d31d(void)

{
  FUN_0040d327();
  return;
}


// ---- FUN_0040d327 @ 0040d327

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d327(void)

{
  _DAT_00427678 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_0042494c);
  return;
}


// ---- FUN_0040d33c @ 0040d33c

void FUN_0040d33c(void)

{
  FUN_0040d346();
  return;
}


// ---- FUN_0040d346 @ 0040d346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d346(void)

{
  _DAT_00427674 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_00424964);
  return;
}


// ---- FUN_0040d35b @ 0040d35b

void FUN_0040d35b(void)

{
  FUN_0040d365();
  return;
}


// ---- FUN_0040d365 @ 0040d365

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d365(void)

{
  _DAT_00427670 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_00424980);
  return;
}


// ---- FUN_0040d37a @ 0040d37a

void FUN_0040d37a(void)

{
  FUN_0040d384();
  return;
}


// ---- FUN_0040d384 @ 0040d384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d384(void)

{
  _DAT_0042766c = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_0042499c);
  return;
}


// ---- FUN_0040d399 @ 0040d399

void FUN_0040d399(void)

{
  FUN_0040d3a3();
  return;
}


// ---- FUN_0040d3a3 @ 0040d3a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d3a3(void)

{
  _DAT_00427668 = RegisterWindowMessageA(s_PM_STAGE_LABEL_004249b4);
  return;
}


// ---- FUN_0040d3b8 @ 0040d3b8

void FUN_0040d3b8(void)

{
  FUN_0040d3c2();
  return;
}


// ---- FUN_0040d3c2 @ 0040d3c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d3c2(void)

{
  _DAT_00427664 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_004249c4);
  return;
}


// ---- FUN_0040d3d7 @ 0040d3d7

void FUN_0040d3d7(void)

{
  FUN_0040d3e1();
  return;
}


// ---- FUN_0040d3e1 @ 0040d3e1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d3e1(void)

{
  _DAT_00427660 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_004249d8);
  return;
}


// ---- FUN_0040d3f6 @ 0040d3f6

void FUN_0040d3f6(void)

{
  FUN_0040d400();
  return;
}


// ---- FUN_0040d400 @ 0040d400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d400(void)

{
  _DAT_0042765c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_004249f4);
  return;
}


// ---- FUN_0040d415 @ 0040d415

void FUN_0040d415(void)

{
  FUN_0040d41f();
  return;
}


// ---- FUN_0040d41f @ 0040d41f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d41f(void)

{
  _DAT_00427658 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_00424a10);
  return;
}


// ---- FUN_0040d434 @ 0040d434

void FUN_0040d434(void)

{
  FUN_0040d43e();
  return;
}


// ---- FUN_0040d43e @ 0040d43e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d43e(void)

{
  _DAT_00427654 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_00424a28);
  return;
}


// ---- FUN_0040d453 @ 0040d453

void FUN_0040d453(void)

{
  FUN_0040d45d();
  return;
}


// ---- FUN_0040d45d @ 0040d45d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d45d(void)

{
  _DAT_00427650 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_00424a40);
  return;
}


// ---- FUN_0040d472 @ 0040d472

void FUN_0040d472(void)

{
  FUN_0040d47c();
  return;
}


// ---- FUN_0040d47c @ 0040d47c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d47c(void)

{
  _DAT_0042764c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_00424a60);
  return;
}


// ---- FUN_0040d491 @ 0040d491

void FUN_0040d491(void)

{
  FUN_0040d49b();
  return;
}


// ---- FUN_0040d49b @ 0040d49b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d49b(void)

{
  _DAT_00427648 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_00424a7c);
  return;
}


// ---- FUN_0040d4b0 @ 0040d4b0

void FUN_0040d4b0(void)

{
  FUN_0040d4ba();
  return;
}


// ---- FUN_0040d4ba @ 0040d4ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d4ba(void)

{
  _DAT_00427644 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_00424a98);
  return;
}


// ---- FUN_0040d4cf @ 0040d4cf

void FUN_0040d4cf(void)

{
  FUN_0040d4d9();
  return;
}


// ---- FUN_0040d4d9 @ 0040d4d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d4d9(void)

{
  _DAT_00427640 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_00424ab4);
  return;
}


// ---- FUN_0040d4ee @ 0040d4ee

void FUN_0040d4ee(void)

{
  FUN_0040d4f8();
  return;
}


// ---- FUN_0040d4f8 @ 0040d4f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d4f8(void)

{
  _DAT_0042763c = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_00424acc);
  return;
}


// ---- FUN_0040d50d @ 0040d50d

void FUN_0040d50d(void)

{
  FUN_0040d517();
  return;
}


// ---- FUN_0040d517 @ 0040d517

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d517(void)

{
  _DAT_00427638 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_00424ae4);
  return;
}


// ---- FUN_0040d52c @ 0040d52c

void FUN_0040d52c(void)

{
  FUN_0040d536();
  return;
}


// ---- FUN_0040d536 @ 0040d536

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d536(void)

{
  _DAT_00427634 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_00424b00);
  return;
}


// ---- FUN_0040d54b @ 0040d54b

void FUN_0040d54b(void)

{
  FUN_0040d555();
  return;
}


// ---- FUN_0040d555 @ 0040d555

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d555(void)

{
  _DAT_00427630 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_00424b20);
  return;
}


// ---- FUN_0040d56a @ 0040d56a

void FUN_0040d56a(void)

{
  FUN_0040d574();
  return;
}


// ---- FUN_0040d574 @ 0040d574

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d574(void)

{
  _DAT_0042762c = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_00424b34);
  return;
}


// ---- FUN_0040d589 @ 0040d589

void FUN_0040d589(void)

{
  FUN_0040d593();
  return;
}


// ---- FUN_0040d593 @ 0040d593

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d593(void)

{
  _DAT_00427628 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_00424b4c);
  return;
}


// ---- FUN_0040d5a8 @ 0040d5a8

void FUN_0040d5a8(void)

{
  FUN_0040d5b2();
  return;
}


// ---- FUN_0040d5b2 @ 0040d5b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d5b2(void)

{
  _DAT_00427624 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_00424b60);
  return;
}


// ---- FUN_0040d5c7 @ 0040d5c7

void FUN_0040d5c7(void)

{
  FUN_0040d5d1();
  return;
}


// ---- FUN_0040d5d1 @ 0040d5d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d5d1(void)

{
  _DAT_00427620 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_00424b7c);
  return;
}


// ---- FUN_0040d5e6 @ 0040d5e6

void FUN_0040d5e6(void)

{
  FUN_0040d5f0();
  return;
}


// ---- FUN_0040d5f0 @ 0040d5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d5f0(void)

{
  _DAT_0042761c = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_00424b8c);
  return;
}


// ---- FUN_0040d605 @ 0040d605

void FUN_0040d605(void)

{
  FUN_0040d60f();
  return;
}


// ---- FUN_0040d60f @ 0040d60f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d60f(void)

{
  _DAT_00427618 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_00424ba0);
  return;
}


// ---- FUN_0040d624 @ 0040d624

void FUN_0040d624(void)

{
  FUN_0040d62e();
  return;
}


// ---- FUN_0040d62e @ 0040d62e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d62e(void)

{
  _DAT_00427614 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_00424bb8);
  return;
}


// ---- FUN_0040d643 @ 0040d643

void FUN_0040d643(void)

{
  FUN_0040d64d();
  return;
}


// ---- FUN_0040d64d @ 0040d64d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d64d(void)

{
  _DAT_00427610 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_00424bc8);
  return;
}


// ---- FUN_0040d662 @ 0040d662

void FUN_0040d662(void)

{
  FUN_0040d66c();
  return;
}


// ---- FUN_0040d66c @ 0040d66c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d66c(void)

{
  _DAT_0042760c = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_00424bdc);
  return;
}


// ---- FUN_0040d681 @ 0040d681

void FUN_0040d681(void)

{
  FUN_0040d68b();
  return;
}


// ---- FUN_0040d68b @ 0040d68b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d68b(void)

{
  _DAT_00427608 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_00424bf8);
  return;
}


// ---- FUN_0040d6a0 @ 0040d6a0

void FUN_0040d6a0(void)

{
  FUN_0040d6aa();
  return;
}


// ---- FUN_0040d6aa @ 0040d6aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d6aa(void)

{
  _DAT_00427604 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_00424c14);
  return;
}


// ---- FUN_0040d6bf @ 0040d6bf

void FUN_0040d6bf(void)

{
  FUN_0040d6c9();
  return;
}


// ---- FUN_0040d6c9 @ 0040d6c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d6c9(void)

{
  _DAT_00427600 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_00424c28);
  return;
}


// ---- FUN_0040d6de @ 0040d6de

void FUN_0040d6de(void)

{
  FUN_0040d6e8();
  return;
}


// ---- FUN_0040d6e8 @ 0040d6e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d6e8(void)

{
  _DAT_004275fc = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_00424c48);
  return;
}


// ---- FUN_0040d6fd @ 0040d6fd

void FUN_0040d6fd(void)

{
  FUN_0040d707();
  return;
}


// ---- FUN_0040d707 @ 0040d707

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d707(void)

{
  _DAT_004275f8 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_00424c6c);
  return;
}


// ---- FUN_0040d71c @ 0040d71c

void FUN_0040d71c(void)

{
  FUN_0040d726();
  return;
}


// ---- FUN_0040d726 @ 0040d726

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d726(void)

{
  _DAT_004275f4 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_00424c8c);
  return;
}


// ---- FUN_0040d73b @ 0040d73b

void FUN_0040d73b(void)

{
  FUN_0040d745();
  return;
}


// ---- FUN_0040d745 @ 0040d745

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d745(void)

{
  _DAT_004275f0 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_00424cac);
  return;
}


// ---- FUN_0040d75a @ 0040d75a

void FUN_0040d75a(void)

{
  FUN_0040d764();
  return;
}


// ---- FUN_0040d764 @ 0040d764

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d764(void)

{
  _DAT_004275ec = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_00424ccc);
  return;
}


// ---- FUN_0040d779 @ 0040d779

void FUN_0040d779(void)

{
  FUN_0040d783();
  return;
}


// ---- FUN_0040d783 @ 0040d783

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d783(void)

{
  _DAT_004275e8 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_00424cec);
  return;
}


// ---- FUN_0040d798 @ 0040d798

void FUN_0040d798(void)

{
  FUN_0040d7a2();
  return;
}


// ---- FUN_0040d7a2 @ 0040d7a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d7a2(void)

{
  _DAT_004275e4 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_00424d0c);
  return;
}


// ---- FUN_0040d7b7 @ 0040d7b7

void FUN_0040d7b7(void)

{
  FUN_0040d7c1();
  return;
}


// ---- FUN_0040d7c1 @ 0040d7c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d7c1(void)

{
  _DAT_004275e0 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_00424d24);
  return;
}


// ---- FUN_0040d7d6 @ 0040d7d6

void FUN_0040d7d6(void)

{
  FUN_0040d7e0();
  return;
}


// ---- FUN_0040d7e0 @ 0040d7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d7e0(void)

{
  _DAT_004275dc = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_00424d40);
  return;
}


// ---- FUN_0040d7f5 @ 0040d7f5

void FUN_0040d7f5(void)

{
  FUN_0040d7ff();
  return;
}


// ---- FUN_0040d7ff @ 0040d7ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d7ff(void)

{
  _DAT_004275d8 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_00424d5c);
  return;
}


// ---- FUN_0040d814 @ 0040d814

void FUN_0040d814(void)

{
  FUN_0040d81e();
  return;
}


// ---- FUN_0040d81e @ 0040d81e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d81e(void)

{
  _DAT_004275d4 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_00424d70);
  return;
}


// ---- FUN_0040d833 @ 0040d833

void FUN_0040d833(void)

{
  FUN_0040d83d();
  return;
}


// ---- FUN_0040d83d @ 0040d83d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d83d(void)

{
  _DAT_004275d0 = RegisterWindowMessageA(s_PM_READ_USER_AREA_00424d84);
  return;
}


// ---- FUN_0040d852 @ 0040d852

void FUN_0040d852(void)

{
  FUN_0040d85c();
  return;
}


// ---- FUN_0040d85c @ 0040d85c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d85c(void)

{
  _DAT_004275cc = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_00424d98);
  return;
}


// ---- FUN_0040d871 @ 0040d871

void FUN_0040d871(void)

{
  FUN_0040d87b();
  return;
}


// ---- FUN_0040d87b @ 0040d87b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d87b(void)

{
  _DAT_004275c8 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_00424dac);
  return;
}


// ---- FUN_0040d890 @ 0040d890

void FUN_0040d890(void)

{
  FUN_0040d89a();
  return;
}


// ---- FUN_0040d89a @ 0040d89a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d89a(void)

{
  _DAT_004275c4 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_00424dc0);
  return;
}


// ---- FUN_0040d8af @ 0040d8af

void FUN_0040d8af(void)

{
  FUN_0040d8b9();
  return;
}


// ---- FUN_0040d8b9 @ 0040d8b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d8b9(void)

{
  _DAT_004275c0 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_00424dd4);
  return;
}


// ---- FUN_0040d8ce @ 0040d8ce

void FUN_0040d8ce(void)

{
  FUN_0040d8d8();
  return;
}


// ---- FUN_0040d8d8 @ 0040d8d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d8d8(void)

{
  _DAT_004275bc = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_00424dec);
  return;
}


// ---- FUN_0040d8ed @ 0040d8ed

void FUN_0040d8ed(void)

{
  FUN_0040d8f7();
  return;
}


// ---- FUN_0040d8f7 @ 0040d8f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d8f7(void)

{
  _DAT_004275b8 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_00424e04);
  return;
}


// ---- FUN_0040d90c @ 0040d90c

void FUN_0040d90c(void)

{
  FUN_0040d916();
  return;
}


// ---- FUN_0040d916 @ 0040d916

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d916(void)

{
  _DAT_004275b4 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_00424e18);
  return;
}


// ---- FUN_0040d92b @ 0040d92b

void FUN_0040d92b(void)

{
  FUN_0040d935();
  return;
}


// ---- FUN_0040d935 @ 0040d935

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d935(void)

{
  _DAT_004275b0 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_00424e2c);
  return;
}


// ---- FUN_0040d94a @ 0040d94a

void FUN_0040d94a(void)

{
  FUN_0040d954();
  return;
}


// ---- FUN_0040d954 @ 0040d954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d954(void)

{
  _DAT_004275ac = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_00424e40);
  return;
}


// ---- CreateObject @ 0040d969

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_BASE_MODULE_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __stdcall CMDIChildWnd::CreateObject(void)
     6 names - too many to list
   
   Library: Visual Studio 2003 Debug */

CFrameWnd * CreateObject(void)

{
  CFrameWnd *pCVar1;
  CFrameWnd *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418d6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (CFrameWnd *)FUN_00404e50(0x184);
  local_8 = 0;
  if (pCVar1 == (CFrameWnd *)0x0) {
    local_1c = (CFrameWnd *)0x0;
  }
  else {
    local_1c = FUN_0040e2ec(pCVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_0040d9d0 @ 0040d9d0

undefined * FUN_0040d9d0(void)

{
  return classCFrameWnd_exref;
}


// ---- FUN_0040d9da @ 0040d9da

undefined ** FUN_0040d9da(void)

{
  return &PTR_s_CMainFrame_0041ac80;
}


// ---- FUN_0040d9ea @ 0040d9ea

undefined * FUN_0040d9ea(void)

{
  return messageMap_exref;
}


// ---- FUN_0040d9f4 @ 0040d9f4

undefined ** FUN_0040d9f4(void)

{
  return &PTR_FUN_0041ac98;
}


// ---- FUN_0040da04 @ 0040da04

void __thiscall FUN_0040da04(void *this,CWnd *param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  WPARAM wParam;
  UINT Msg;
  LPARAM lParam;
  
  CFrameWnd::OnPaletteChanged(this,param_1);
  pHVar1 = (HWND)FUN_0040b5e0(0x427188);
  BVar2 = IsWindow(pHVar1);
  if (BVar2 != 0) {
    lParam = 0;
    wParam = FUN_0040b5e0((int)param_1);
    Msg = 0x311;
    pHVar1 = (HWND)FUN_0040b5e0(0x427188);
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  return;
}


// ---- FUN_0040da53 @ 0040da53

int __fastcall FUN_0040da53(CFrameWnd *param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = CFrameWnd::OnQueryNewPalette(param_1);
  local_8 = 0;
  pHVar1 = (HWND)FUN_0040b5e0(0x427188);
  BVar2 = IsWindow(pHVar1);
  if (BVar2 != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x30f;
    pHVar1 = (HWND)FUN_0040b5e0(0x427188);
    local_8 = SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  if (local_8 != 0) {
    local_c = 1;
  }
  return local_c;
}


// ---- FUN_0040dab4 @ 0040dab4

undefined4 __thiscall FUN_0040dab4(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  
  if ((*(int *)((int)this + 0x148) != 0) && (*(int *)((int)this + 0x150) == 0)) {
    uVar1 = FUN_0040b5e0((int)this);
    FUN_00412913(*(void **)((int)this + 0x148),param_1,uVar1);
    FUN_0040dc1f(this);
    *(undefined4 *)((int)this + 0x150) = 1;
    FUN_0040e685(this);
    FUN_0040e74f((int)this);
    hWnd = (HWND)FUN_0040b5e0((int)this);
    DrawMenuBar(hWnd);
    FUN_00414d3f(*(void **)((int)this + 0x148),(undefined4 *)((int)this + 0x15c),
                 s_DP_INPUT_LUT_MODE_00424e60);
    FUN_00414d3f(*(void **)((int)this + 0x148),(undefined4 *)((int)this + 0x160),
                 s_DP_LUT_MODE_00424e74);
    uVar1 = FUN_0040b5e0((int)this);
    FUN_00414808(*(void **)((int)this + 0x148),*(undefined4 *)((int)this + 0x15c),1,uVar1);
    uVar1 = FUN_0040b5e0((int)this);
    FUN_00414808(*(void **)((int)this + 0x148),*(undefined4 *)((int)this + 0x160),1,uVar1);
    *(undefined4 *)((int)this + 0x180) = 0;
    uVar1 = FUN_0040b5e0((int)this);
    FUN_00414808(*(void **)((int)this + 0x148),1,1,uVar1);
  }
  return 0;
}


// ---- FUN_0040dbdd @ 0040dbdd

undefined4 __fastcall FUN_0040dbdd(void *param_1)

{
  if (*(int *)((int)param_1 + 0x14c) != 0) {
    FUN_0040ba99((CWnd *)&DAT_00427188);
  }
  FUN_0040f190(param_1,0x10,0,0);
  return 0;
}


// ---- FUN_0040dc10 @ 0040dc10

undefined4 FUN_0040dc10(void)

{
  return 0;
}


// ---- FUN_0040dc1f @ 0040dc1f

undefined4 __fastcall FUN_0040dc1f(void *param_1)

{
  bool bVar1;
  HWND hWnd;
  char local_c68 [700];
  char local_9ac [700];
  char local_6f0 [350];
  uchar local_592 [350];
  uchar local_434 [704];
  char local_174 [352];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418d7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  FUN_00412e5a(*(void **)((int)param_1 + 0x148),(int)local_c68);
  FUN_0040f46a(DAT_004269cc,local_174);
  bVar1 = FUN_0040f080(local_434,(void *)((int)param_1 + 0x16c));
  if (bVar1) {
    CString::operator=((CString *)((int)param_1 + 0x16c),(char *)local_434);
    FUN_0041571d(*(void **)((int)param_1 + 0x148),local_14);
    FUN_0040715a(&DAT_004268f8,(char *)local_14);
    FUN_0040e685(param_1);
    FUN_0040e74f((int)param_1);
    hWnd = (HWND)FUN_0040b5e0((int)param_1);
    DrawMenuBar(hWnd);
  }
  bVar1 = FUN_0040f080(local_592,(void *)((int)param_1 + 0x170));
  if (bVar1) {
    CString::operator=((CString *)((int)param_1 + 0x170),(char *)local_592);
  }
  CString::operator=((CString *)((int)param_1 + 0x174),local_9ac);
  CString::operator=((CString *)((int)param_1 + 0x178),local_6f0);
  CString::operator=((CString *)((int)param_1 + 0x17c),local_c68);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return 1;
}


// ---- FUN_0040ddb0 @ 0040ddb0

undefined4 __thiscall FUN_0040ddb0(void *this,int param_1)

{
  int iVar1;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418d90;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x150) != 0) {
    local_14 = 0;
    ExceptionList = &local_10;
    CString::CString(local_18,&DAT_0042798c);
    local_8 = 0;
    if (param_1 == *(int *)((int)this + 0x15c)) {
      FUN_00413934(*(void **)((int)this + 0x148),*(undefined4 *)((int)this + 0x15c),&local_14,
                   local_18);
      iVar1 = ftol();
      if ((iVar1 == 3) && (*(int *)((int)this + 0x180) == 0)) {
        iVar1 = ftol();
        if (iVar1 != DAT_004239ec) {
          FUN_0040df56(this,0,3);
        }
      }
      else if ((*(int *)((int)this + 0x158) == 3) && (*(int *)((int)this + 0x14c) != 0)) {
        FUN_0040ea00(this);
      }
      DAT_004239ec = ftol();
    }
    else if (param_1 == *(int *)((int)this + 0x160)) {
      FUN_00413934(*(void **)((int)this + 0x148),*(undefined4 *)((int)this + 0x160),&local_14,
                   local_18);
      iVar1 = ftol();
      if (iVar1 == 3) {
        iVar1 = ftol();
        if (iVar1 != DAT_004239f0) {
          FUN_0040df56(this,0,1);
        }
      }
      else if (((*(int *)((int)this + 0x158) == 1) || (*(int *)((int)this + 0x158) == 2)) &&
              (*(int *)((int)this + 0x14c) != 0)) {
        FUN_0040ea00(this);
      }
      DAT_004239f0 = ftol();
    }
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  ExceptionList = local_10;
  return 0;
}


// ---- FUN_0040df56 @ 0040df56

undefined4 __thiscall FUN_0040df56(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  CWnd *pCVar3;
  HWND hWnd;
  HWND__ *pHVar4;
  uint uVar5;
  LONG dwNewLong;
  tagRECT local_6c;
  CWnd *local_5c;
  tagRECT local_58;
  tagRECT local_48;
  uint local_38;
  tagRECT local_34;
  UINT local_24;
  UINT local_20;
  UINT local_1c;
  UINT local_18;
  CWnd *local_14;
  CView *local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x150) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)((int)this + 0x14c) != 0) && (iVar2 = FUN_0040f240(0x427188), iVar2 != 0)) {
      FUN_0040ba99((CWnd *)&DAT_00427188);
    }
    *(undefined4 *)((int)this + 0x158) = param_2;
    FUN_0040f0e0(*(int *)((int)this + 0x148));
    FUN_0040b5e0((int)this);
    pCVar3 = (CWnd *)FUN_0040b5e0((int)this);
    uVar1 = FUN_0040ba08(&DAT_00427188,pCVar3);
    *(undefined4 *)((int)this + 0x14c) = uVar1;
    if (*(int *)((int)this + 0x14c) == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = GetSystemMetrics(0);
      local_8 = GetSystemMetrics(0x20);
      local_8 = iVar2 - local_8;
      iVar2 = GetSystemMetrics(1);
      local_c = GetSystemMetrics(4);
      local_c = iVar2 - local_c;
      if (*(int *)((int)this + 0x154) == 0) {
        local_10 = CFrameWnd::GetActiveView(this);
        dwNewLong = *(LONG *)((int)this + 0xc4);
        iVar2 = -10;
        hWnd = (HWND)FUN_0040b5e0((int)local_10);
        SetClassLongA(hWnd,iVar2,dwNewLong);
        if ((param_1 != 0) && (iVar2 = FUN_0040b5e0((int)this), param_1 != iVar2)) {
          if (DAT_004269cc == (void *)0x0) {
            CWnd::CenterWindow(this,(CWnd *)0x0);
          }
          else {
            local_18 = FUN_0040fa83(DAT_004269cc,s_WINDOWPOS_00424e84,&DAT_00424e80,0xffffffff);
            local_1c = FUN_0040fa83(DAT_004269cc,s_WINDOWPOS_00424e94,&DAT_00424e90,0xffffffff);
            local_20 = FUN_0040fa83(DAT_004269cc,s_WINDOWPOS_00424ea4,&DAT_00424ea0,0xffffffff);
            local_24 = FUN_0040fa83(DAT_004269cc,s_WINDOWPOS_00424eb4,&DAT_00424eb0,0xffffffff);
            if (((((int)local_18 < 0) || ((int)local_1c < 0)) || (local_8 <= (int)local_18)) ||
               (local_c <= (int)local_1c)) {
              CWnd::CenterWindow(this,(CWnd *)0x0);
            }
            else {
              CWnd::SetWindowPos(this,(CWnd *)0x0,local_18,local_1c,local_20,local_24,4);
            }
          }
        }
        pHVar4 = (HWND__ *)FUN_0040ba49((CWnd *)&DAT_00427188);
        local_14 = CWnd::FromHandle(pHVar4);
        if (local_14 != (CWnd *)0x0) {
          FUN_004028c0(&local_34);
          FUN_004028c0(&local_48);
          FUN_00402a10(local_14,&local_34);
          FUN_00402a10(this,&local_48);
          iVar2 = FUN_00402930(&local_34.left);
          local_38 = (local_48.left + -5) - iVar2;
          CWnd::SetWindowPos(local_14,(CWnd *)0x0,((int)local_38 < 1) - 1 & local_38,local_48.top,0,
                             0,5);
        }
        *(undefined4 *)((int)this + 0x154) = 1;
      }
      else {
        FUN_004028c0(&local_58);
        FUN_00402a10(this,&local_58);
        if ((((local_58.left < 0) || (local_58.top < 0)) || (local_8 <= local_58.right)) ||
           (local_c <= local_58.bottom)) {
          CWnd::CenterWindow(this,(CWnd *)0x0);
        }
        pHVar4 = (HWND__ *)FUN_0040ba49((CWnd *)&DAT_00427188);
        local_5c = CWnd::FromHandle(pHVar4);
        if (local_5c != (CWnd *)0x0) {
          FUN_004028c0(&local_6c);
          FUN_00402a10(local_5c,&local_6c);
          if (((local_6c.left < 0) || (local_6c.top < 0)) ||
             ((local_8 <= local_6c.right || (local_c <= local_6c.bottom)))) {
            FUN_00402a10(this,&local_58);
            iVar2 = FUN_00402930(&local_6c.left);
            uVar5 = (local_58.left + -5) - iVar2;
            CWnd::SetWindowPos(local_5c,(CWnd *)0x0,((int)uVar5 < 1) - 1 & uVar5,local_58.top,0,0,5)
            ;
          }
        }
      }
      CWnd::SetWindowPos(this,(CWnd *)wndTopMost_exref,0,0,0,0,0x43);
      CWnd::ShowWindow(this,9);
      FUN_0040b6ae(0x427188);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ---- FUN_0040e2c1 @ 0040e2c1

void __thiscall FUN_0040e2c1(void *this,WPARAM param_1,UINT *param_2)

{
  FUN_0040f160(this,*param_2,param_1,(LPARAM)param_2);
  return;
}


// ---- FUN_0040e2ec @ 0040e2ec

CFrameWnd * __fastcall FUN_0040e2ec(CFrameWnd *param_1)

{
  HBRUSH pHVar1;
  LOGBRUSH local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418dee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CFrameWnd::CFrameWnd(param_1);
  local_8 = 0;
  CStatusBar::CStatusBar((CStatusBar *)(param_1 + 200));
  local_8._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x16c));
  local_8._0_1_ = 2;
  CString::CString((CString *)(param_1 + 0x170));
  local_8._0_1_ = 3;
  CString::CString((CString *)(param_1 + 0x174));
  local_8._0_1_ = 4;
  CString::CString((CString *)(param_1 + 0x178));
  local_8 = CONCAT31(local_8._1_3_,5);
  CString::CString((CString *)(param_1 + 0x17c));
  *(undefined ***)param_1 = &PTR_FUN_0041af70;
  *(undefined4 *)(param_1 + 0x148) = DAT_004269c4;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 3;
  *(undefined4 *)(param_1 + 0x168) = 3;
  local_1c.lbStyle = 1;
  pHVar1 = CreateBrushIndirect(&local_1c);
  *(HBRUSH *)(param_1 + 0xc4) = pHVar1;
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_0040e433 @ 0040e433

void __fastcall FUN_0040e433(CFrameWnd *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00418e4c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = &PTR_FUN_0041af70;
  local_8 = 5;
  DeleteObject(*(HGDIOBJ *)(param_1 + 0xc4));
  CString::~CString((CString *)(param_1 + 0x17c));
  local_8._0_1_ = 4;
  CString::~CString((CString *)(param_1 + 0x178));
  local_8._0_1_ = 3;
  CString::~CString((CString *)(param_1 + 0x174));
  local_8._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 0x170));
  local_8._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 0x16c));
  local_8 = (uint)local_8._1_3_ << 8;
  CStatusBar::~CStatusBar((CStatusBar *)(param_1 + 200));
  local_8 = 0xffffffff;
  CFrameWnd::~CFrameWnd(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_0040e4f4 @ 0040e4f4

void __thiscall FUN_0040e4f4(void *this,tagCREATESTRUCTA *param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffff7fff;
  CFrameWnd::PreCreateWindow(this,param_1);
  return;
}


// ---- FUN_0040e51c @ 0040e51c

void __thiscall FUN_0040e51c(void *this,uint param_1,CString *param_2)

{
  bool bVar1;
  CString *pCVar2;
  CString local_24 [4];
  CString local_20 [4];
  int local_1c;
  CString local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418e71;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x148) == 0) {
    ExceptionList = &local_10;
    CFrameWnd::GetMessageString(this,param_1,param_2);
  }
  else {
    ExceptionList = &local_10;
    FUN_00412f4c(*(void **)((int)this + 0x148),local_18,param_1);
    local_8 = 0;
    bVar1 = FUN_0040f130(local_18,(uchar *)s_________00424ec0);
    if (bVar1) {
      CString::operator=(local_18,&DAT_00427990);
    }
    local_14 = CString::Find(local_18,'\n');
    if (local_14 != -1) {
      CString::SetAt(local_18,local_14,'\t');
    }
    local_1c = CString::Find(local_18,'\t');
    CString::operator=(param_2,local_18);
    if (local_1c != -1) {
      pCVar2 = (CString *)CString::Left(local_18,(int)local_20);
      local_8._0_1_ = 1;
      CString::operator=(param_2,pCVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      CString::~CString(local_20);
      CString::operator=(local_18,param_2);
    }
    local_1c = CString::Find(local_18,'.');
    if (local_1c != -1) {
      pCVar2 = (CString *)CString::Left(local_18,(int)local_24);
      local_8._0_1_ = 2;
      CString::operator=(param_2,pCVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      CString::~CString(local_24);
    }
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ---- FUN_0040e685 @ 0040e685

void __fastcall FUN_0040e685(void *param_1)

{
  CMenu *pCVar1;
  undefined4 uVar2;
  HMODULE pHVar3;
  HRSRC hResInfo;
  HGLOBAL lpMenuTemplate;
  HMENU pHVar4;
  LPCSTR lpType;
  LPCSTR lpName;
  undefined2 local_1c;
  
  if (*(int *)((int)param_1 + 0x148) != 0) {
    pCVar1 = (CMenu *)FUN_0040f1c0((int)param_1);
    FUN_0040f1e0(param_1,0);
    if (pCVar1 != (CMenu *)0x0) {
      CMenu::DestroyMenu(pCVar1);
    }
    *(undefined4 *)((int)param_1 + 0x48) = 0;
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_1c = 0x809;
    }
    else {
      uVar2 = FUN_00412f3b(*(int *)((int)param_1 + 0x148));
      local_1c = (WORD)uVar2;
    }
    lpName = (LPCSTR)0x80;
    lpType = (LPCSTR)0x4;
    pHVar3 = (HMODULE)FUN_00404f10();
    hResInfo = FindResourceExA(pHVar3,lpType,lpName,local_1c);
    pHVar3 = (HMODULE)FUN_00404f10();
    lpMenuTemplate = LoadResource(pHVar3,hResInfo);
    pHVar4 = LoadMenuIndirectA(lpMenuTemplate);
    *(HMENU *)((int)param_1 + 0x48) = pHVar4;
    pCVar1 = CMenu::FromHandle(*(HMENU__ **)((int)param_1 + 0x48));
    FUN_0040f1e0(param_1,(int)pCVar1);
  }
  return;
}


// ---- FUN_0040e74f @ 0040e74f

void __fastcall FUN_0040e74f(int param_1)

{
  HWND pHVar1;
  CString *pCVar2;
  LPCSTR pCVar3;
  BOOL BVar4;
  CString local_30 [4];
  CString local_2c [4];
  CString local_28 [4];
  CString local_24 [4];
  CString local_20 [4];
  CString local_1c [4];
  HMENU local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418eba;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0x148) != 0) {
    BVar4 = 1;
    ExceptionList = &local_10;
    pHVar1 = (HWND)FUN_0040b5e0(param_1);
    GetSystemMenu(pHVar1,BVar4);
    BVar4 = 0;
    pHVar1 = (HWND)FUN_0040b5e0(param_1);
    local_18 = GetSystemMenu(pHVar1,BVar4);
    CString::CString(local_14,&DAT_00427994);
    local_8 = 0;
    if (local_18 != (HMENU)0x0) {
      pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x148),local_1c,0x812f);
      local_8._0_1_ = 1;
      CString::operator=(local_14,pCVar2);
      local_8._0_1_ = 0;
      CString::~CString(local_1c);
      pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
      ModifyMenuA(local_18,0xf120,0,0xf120,pCVar3);
      pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x148),local_20,0x8130);
      local_8._0_1_ = 2;
      CString::operator=(local_14,pCVar2);
      local_8._0_1_ = 0;
      CString::~CString(local_20);
      pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
      ModifyMenuA(local_18,0xf010,0,0xf010,pCVar3);
      pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x148),local_24,0x8131);
      local_8._0_1_ = 3;
      CString::operator=(local_14,pCVar2);
      local_8._0_1_ = 0;
      CString::~CString(local_24);
      pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
      ModifyMenuA(local_18,0xf000,0,0xf000,pCVar3);
      pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x148),local_28,0x8133);
      local_8._0_1_ = 4;
      CString::operator=(local_14,pCVar2);
      local_8._0_1_ = 0;
      CString::~CString(local_28);
      pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
      ModifyMenuA(local_18,0xf030,0,0xf030,pCVar3);
      pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x148),local_2c,0x8132);
      local_8._0_1_ = 5;
      CString::operator=(local_14,pCVar2);
      local_8._0_1_ = 0;
      CString::~CString(local_2c);
      pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
      ModifyMenuA(local_18,0xf020,0,0xf020,pCVar3);
      pCVar2 = FUN_00412f4c(*(void **)(param_1 + 0x148),local_30,0x8134);
      local_8._0_1_ = 6;
      CString::operator=(local_14,pCVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      CString::~CString(local_30);
      pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
      ModifyMenuA(local_18,0xf060,0,0xf060,pCVar3);
    }
    local_8 = 0xffffffff;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return;
}


// ---- FUN_0040ea00 @ 0040ea00

void __fastcall FUN_0040ea00(CWnd *param_1)

{
  int iVar1;
  tagRECT local_14;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    if ((DAT_004269cc != (void *)0x0) && (*(int *)(param_1 + 0x154) != 0)) {
      FUN_004028c0(&local_14);
      FUN_00402a10(param_1,&local_14);
      FUN_0040f9a1(DAT_004269cc,s_WINDOWPOS_00424ecc,&DAT_00424ec8,local_14.left);
      FUN_0040f9a1(DAT_004269cc,s_WINDOWPOS_00424edc,&DAT_00424ed8,local_14.top);
      iVar1 = FUN_00402930(&local_14.left);
      FUN_0040f9a1(DAT_004269cc,s_WINDOWPOS_00424eec,&DAT_00424ee8,iVar1);
      iVar1 = FUN_00402950((int)&local_14);
      FUN_0040f9a1(DAT_004269cc,s_WINDOWPOS_00424efc,&DAT_00424ef8,iVar1);
    }
    FUN_0040ba99((CWnd *)&DAT_00427188);
    FUN_0040b6df((CWnd *)&DAT_00427188);
  }
  CWnd::ShowWindow(param_1,0);
  return;
}


// ---- FUN_0040eada @ 0040eada

undefined4 __thiscall FUN_0040eada(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  WPARAM WVar4;
  uint uVar5;
  undefined4 *lParam;
  LPARAM lParam_00;
  CString local_18c [4];
  HWND local_188;
  CString local_184 [4];
  char local_180 [352];
  CString local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418ee5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = CFrameWnd::OnCreate(this,param_1);
  if (((iVar1 == -1) ||
      (iVar1 = CStatusBar::Create((CStatusBar *)((int)this + 200),this,0x50008200,0xe801),
      iVar1 == 0)) ||
     (iVar1 = CStatusBar::SetIndicators((CStatusBar *)((int)this + 200),(uint *)&DAT_00427988,1),
     iVar1 == 0)) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  if (DAT_004269c8 != (void *)0x0) {
    FUN_0040b21e(DAT_004269c8,(int)this + 200);
  }
  uVar5 = 0x81;
  FUN_0040f150();
  uVar2 = FUN_0040f300(uVar5);
  *(undefined4 *)((int)this + 0xc0) = uVar2;
  FUN_0040f2b0(this,*(LPARAM *)((int)this + 0xc0),1);
  FUN_0040f2b0(this,*(LPARAM *)((int)this + 0xc0),0);
  CString::CString(local_20);
  local_8 = 0;
  CString::LoadStringA(local_20,0x7d02);
  pcVar3 = (char *)FUN_004072e0((undefined4 *)local_20);
  CWnd::SetWindowTextA(this,pcVar3);
  CWnd::CenterWindow(this,(CWnd *)0x0);
  local_188 = (HWND)FUN_00412932(*(int *)((int)this + 0x148));
  if (local_188 != (HWND)0x0) {
    CString::CString(local_18c);
    local_8._0_1_ = 1;
    CString::CString(local_184);
    local_8._0_1_ = 2;
    CString::LoadStringA(local_18c,32000);
    CString::LoadStringA(local_184,0x7d01);
    CString::operator+=(local_18c,local_184);
    pcVar3 = (char *)FUN_004072e0((undefined4 *)local_18c);
    strcpy(local_180,pcVar3);
    local_1c = DAT_00427878;
    local_18 = 0x15e;
    local_14 = local_180;
    lParam = &local_1c;
    WVar4 = FUN_0040b5e0((int)this);
    SendMessageA(local_188,0x4a,WVar4,(LPARAM)lParam);
    lParam_00 = 0;
    WVar4 = FUN_0040b5e0((int)this);
    SendMessageA(local_188,DAT_00427944,WVar4,lParam_00);
    local_8._0_1_ = 1;
    CString::~CString(local_184);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18c);
    local_8 = 0xffffffff;
    CString::~CString(local_20);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0xffffffff;
  CString::~CString(local_20);
  ExceptionList = local_10;
  return 0xffffffff;
}


// ---- FUN_0040ed68 @ 0040ed68

void __thiscall FUN_0040ed68(void *this,uint param_1)

{
  if ((param_1 & 0xfff0) == 0xf060) {
    FUN_0040ea00(this);
  }
  else {
    CWnd::Default(this);
  }
  return;
}


// ---- FUN_0040ed9d @ 0040ed9d

void __fastcall FUN_0040ed9d(CFrameWnd *param_1)

{
  if (*(int *)(param_1 + 0x150) != 0) {
    FUN_00412a93(*(int *)(param_1 + 0x148));
  }
  CFrameWnd::OnClose(param_1);
  return;
}


// ---- FUN_0040edca @ 0040edca

void __thiscall FUN_0040edca(void *this,undefined4 *param_1)

{
  (**(code **)*param_1)(*(undefined4 *)((int)this + 0x150));
  return;
}


// ---- FUN_0040edeb @ 0040edeb

void __fastcall FUN_0040edeb(void *param_1)

{
  FUN_0040df56(param_1,0,1);
  return;
}


// ---- FUN_0040ee02 @ 0040ee02

void __thiscall FUN_0040ee02(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_c;
  
  if (*(int *)((int)this + 0x150) != 0) {
    bVar1 = FUN_00414096(*(void **)((int)this + 0x148),0xb);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      local_c = 1;
      goto LAB_0040ee3b;
    }
  }
  local_c = 0;
LAB_0040ee3b:
  (**(code **)*param_1)(local_c);
  return;
}


// ---- FUN_0040ee4f @ 0040ee4f

void __fastcall FUN_0040ee4f(void *param_1)

{
  FUN_0040df56(param_1,0,3);
  return;
}


// ---- FUN_0040ee66 @ 0040ee66

void __thiscall FUN_0040ee66(void *this,undefined4 *param_1)

{
  (**(code **)*param_1)(*(undefined4 *)((int)this + 0x14c));
  return;
}


// ---- FUN_0040ee87 @ 0040ee87

void __fastcall FUN_0040ee87(int param_1)

{
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_0040b77f((CWnd *)&DAT_00427188);
  }
  return;
}


// ---- FUN_0040eea8 @ 0040eea8

void __thiscall FUN_0040eea8(void *this,undefined4 *param_1)

{
  (**(code **)*param_1)(*(undefined4 *)((int)this + 0x14c));
  return;
}


// ---- FUN_0040eec9 @ 0040eec9

void __fastcall FUN_0040eec9(int param_1)

{
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_0040b757((CWnd *)&DAT_00427188);
  }
  return;
}


// ---- FUN_0040eeea @ 0040eeea

void __thiscall FUN_0040eeea(void *this,undefined4 *param_1)

{
  (**(code **)*param_1)(1,this);
  return;
}


// ---- FUN_0040ef03 @ 0040ef03

void __fastcall FUN_0040ef03(CWnd *param_1)

{
  FUN_0040ea00(param_1);
  return;
}


// ---- FUN_0040ef16 @ 0040ef16

undefined4 __thiscall FUN_0040ef16(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CString local_20 [4];
  int local_1c;
  char *local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418f01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040ea00(this);
  local_1c = param_2;
  local_18 = *(char **)(param_2 + 8);
  CString::CString(local_14);
  local_8 = 0;
  CString::operator=(local_14,local_18);
  CString::Find(local_14,&DAT_00424f08);
  CString::Mid(local_14,(int)local_20);
  local_8 = CONCAT31(local_8._1_3_,1);
  CString::MakeUpper(local_20);
  bVar1 = FUN_0040f130(local_20,&DAT_00424f0c);
  if (bVar1) {
    iVar2 = FUN_0040f260(this,1,1000,(TIMERPROC)0x0);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 0x180) = 1;
      FUN_0041464c(*(void **)((int)this + 0x148),*(undefined4 *)((int)this + 0x15c),0x40400000);
    }
  }
  FUN_004072e0((undefined4 *)local_14);
  FUN_0040b5e0((int)this);
  FUN_0040f0e0(*(int *)((int)this + 0x148));
  uVar3 = FUN_0040bb20((CWnd *)&DAT_00427188);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_20);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar3;
}


// ---- FUN_0040f044 @ 0040f044

void __thiscall FUN_0040f044(void *this,UINT_PTR param_1)

{
  FUN_0040f290(this,param_1);
  *(undefined4 *)((int)this + 0x180) = 0;
  FUN_0040f2e0(this);
  return;
}


// ---- FUN_0040f080 @ 0040f080

bool FUN_0040f080(uchar *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f0a0(param_2,param_1);
  return iVar1 != 0;
}


// ---- FUN_0040f0a0 @ 0040f0a0

void __thiscall FUN_0040f0a0(void *this,uchar *param_1)

{
  FUN_0040f0c0(*(uchar **)this,param_1);
  return;
}


// ---- FUN_0040f0c0 @ 0040f0c0

void __cdecl FUN_0040f0c0(uchar *param_1,uchar *param_2)

{
  _mbscmp(param_1,param_2);
  return;
}


// ---- FUN_0040f0e0 @ 0040f0e0

undefined4 __fastcall FUN_0040f0e0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ---- FUN_0040f100 @ 0040f100

CFrameWnd * __thiscall FUN_0040f100(void *this,uint param_1)

{
  FUN_0040e433(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_0040f130 @ 0040f130

bool FUN_0040f130(void *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f0a0(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


// ---- FUN_0040f150 @ 0040f150

undefined4 FUN_0040f150(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return *(undefined4 *)(pAVar1 + 4);
}


// ---- FUN_0040f160 @ 0040f160

void __thiscall FUN_0040f160(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  SendMessageA(*(HWND *)((int)this + 0x20),param_1,param_2,param_3);
  return;
}


// ---- FUN_0040f190 @ 0040f190

void __thiscall FUN_0040f190(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  PostMessageA(*(HWND *)((int)this + 0x20),param_1,param_2,param_3);
  return;
}


// ---- FUN_0040f1c0 @ 0040f1c0

void __fastcall FUN_0040f1c0(int param_1)

{
  HMENU pHVar1;
  
  pHVar1 = GetMenu(*(HWND *)(param_1 + 0x20));
  CMenu::FromHandle(pHVar1);
  return;
}


// ---- FUN_0040f1e0 @ 0040f1e0

void __thiscall FUN_0040f1e0(void *this,int param_1)

{
  HMENU hMenu;
  
  hMenu = (HMENU)FUN_0040f210(param_1);
  SetMenu(*(HWND *)((int)this + 0x20),hMenu);
  return;
}


// ---- FUN_0040f210 @ 0040f210

undefined4 __fastcall FUN_0040f210(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 4);
  }
  return local_c;
}


// ---- FUN_0040f240 @ 0040f240

void __fastcall FUN_0040f240(int param_1)

{
  IsWindowVisible(*(HWND *)(param_1 + 0x20));
  return;
}


// ---- FUN_0040f260 @ 0040f260

void __thiscall FUN_0040f260(void *this,UINT_PTR param_1,UINT param_2,TIMERPROC param_3)

{
  SetTimer(*(HWND *)((int)this + 0x20),param_1,param_2,param_3);
  return;
}


// ---- FUN_0040f290 @ 0040f290

void __thiscall FUN_0040f290(void *this,UINT_PTR param_1)

{
  KillTimer(*(HWND *)((int)this + 0x20),param_1);
  return;
}


// ---- FUN_0040f2b0 @ 0040f2b0

void __thiscall FUN_0040f2b0(void *this,LPARAM param_1,WPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 0x20),0x80,param_2,param_1);
  return;
}


// ---- FUN_0040f2e0 @ 0040f2e0

void __fastcall FUN_0040f2e0(CWnd *param_1)

{
  CWnd::Default(param_1);
  return;
}


// ---- FUN_0040f300 @ 0040f300

void FUN_0040f300(uint param_1)

{
  LPCSTR lpIconName;
  HINSTANCE__ *hInstance;
  
  lpIconName = (LPCSTR)(param_1 & 0xffff);
  hInstance = AfxFindResourceHandle((char *)(param_1 & 0xffff),(char *)0xe);
  LoadIconA(hInstance,lpIconName);
  return;
}


// ---- FUN_0040f330 @ 0040f330

undefined4 * __thiscall FUN_0040f330(void *this,char *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418f49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00402800(this);
  local_8 = 0;
  CString::CString((CString *)((int)this + 4));
  local_8._0_1_ = 1;
  CString::CString((CString *)((int)this + 8));
  local_8._0_1_ = 2;
  CString::CString((CString *)((int)this + 0xc));
  local_8._0_1_ = 3;
  CString::CString((CString *)((int)this + 0x10));
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined ***)this = &PTR_LAB_0041b0a0;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_00424f14);
  CString::operator=((CString *)((int)this + 0xc),&DAT_00424f1c);
  CString::operator=((CString *)((int)this + 0x10),param_1);
  ExceptionList = local_10;
  return this;
}


// ---- FUN_0040f3e9 @ 0040f3e9

void __fastcall FUN_0040f3e9(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00418f80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_0041b0a0;
  local_8 = 3;
  CString::~CString((CString *)(param_1 + 4));
  local_8._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 3));
  local_8._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 2));
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 1));
  local_8 = 0xffffffff;
  FUN_00402850(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_0040f46a @ 0040f46a

void __thiscall FUN_0040f46a(void *this,char *param_1)

{
  CString::operator=((CString *)((int)this + 8),param_1);
  return;
}


// ---- FUN_0040f486 @ 0040f486

CString * __thiscall FUN_0040f486(void *this,CString *param_1)

{
  CString::CString(param_1,(CString *)((int)this + 8));
  return param_1;
}


// ---- FUN_0040f4b7 @ 0040f4b7

CString * __thiscall FUN_0040f4b7(void *this,CString *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418fbc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 1;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 2;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 3;
    CString::operator=(local_14,pCVar2);
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


// ---- FUN_0040f596 @ 0040f596

CString * FUN_0040f596(CString *param_1,LPCSTR param_2,char *param_3)

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
  puStack_c = &LAB_00418fe6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0040fd31();
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


// ---- FUN_0040f6b6 @ 0040f6b6

undefined4 FUN_0040f6b6(LPCSTR param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  undefined4 local_8;
  
  local_c = FUN_0040fd31();
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


// ---- FUN_0040f719 @ 0040f719

bool FUN_0040f719(LPCSTR param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  bool bVar2;
  
  hKey = FUN_0040fd31();
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


// ---- FUN_0040f772 @ 0040f772

bool FUN_0040f772(LPCSTR param_1,BYTE *param_2)

{
  HKEY hKey;
  int iVar1;
  LSTATUS LVar2;
  bool bVar3;
  
  hKey = FUN_0040fd31();
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


// ---- FUN_0040f7d0 @ 0040f7d0

CString * __thiscall
FUN_0040f7d0(void *this,CString *param_1,LPCSTR param_2,char *param_3,undefined *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419022;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_3);
  local_8 = 1;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 2;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 3;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 2;
    CString::~CString(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
  FUN_0040ff69(param_1,param_2,pCVar3,param_4);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_0040f8bf @ 0040f8bf

uint __thiscall FUN_0040f8bf(void *this,LPCSTR param_1,char *param_2,BYTE *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419047;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
  uVar4 = FUN_004101cf(this,param_1,pCVar3,param_3);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_0040f9a1 @ 0040f9a1

uint __thiscall FUN_0040f9a1(void *this,LPCSTR param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041906c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
  uVar4 = FUN_00410134(this,param_1,pCVar3,param_3);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_0040fa83 @ 0040fa83

UINT __thiscall FUN_0040fa83(void *this,LPCSTR param_1,char *param_2,UINT param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  UINT UVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419091;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
  UVar4 = FUN_0040fed3(this,param_1,pCVar3,param_3);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return UVar4;
}


// ---- FUN_0040fb65 @ 0040fb65

undefined4 __thiscall
FUN_0040fb65(void *this,LPCSTR param_1,char *param_2,int *param_3,uint *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  undefined4 uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004190b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
  uVar4 = FUN_004102e1(this,param_1,pCVar3,param_3,param_4);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_0040fc4b @ 0040fc4b

uint __thiscall FUN_0040fc4b(void *this,LPCSTR param_1,char *param_2,BYTE *param_3,uint param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004190db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_00410930((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_004072e0((undefined4 *)local_14);
  uVar4 = FUN_004104e4(this,param_1,pCVar3,param_3,param_4);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_0040fd31 @ 0040fd31

HKEY FUN_0040fd31(void)

{
  HKEY pHVar1;
  LPCSTR lpSubKey;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  CString local_1c [4];
  HKEY local_18;
  LSTATUS local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004190ee;
  local_10 = ExceptionList;
  local_18 = (HKEY)0x0;
  ExceptionList = &local_10;
  operator+((char *)local_1c,(CString *)"Software\\Leo Electron Microscopy Ltd\\");
  local_8 = 0;
  phkResult = &local_18;
  samDesired = 0x2001f;
  ulOptions = 0;
  lpSubKey = (LPCSTR)FUN_004072e0((undefined4 *)local_1c);
  local_14 = RegOpenKeyExA((HKEY)0x80000002,lpSubKey,ulOptions,samDesired,phkResult);
  pHVar1 = local_18;
  local_8 = 0xffffffff;
  CString::~CString(local_1c);
  ExceptionList = local_10;
  return pHVar1;
}


// ---- FUN_0040fdba @ 0040fdba

HKEY __fastcall FUN_0040fdba(int param_1)

{
  LSTATUS LVar1;
  LPCSTR pCVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  DWORD DVar5;
  REGSAM RVar6;
  LPSECURITY_ATTRIBUTES p_Var7;
  HKEY *ppHVar8;
  DWORD *pDVar9;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_c = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  local_10 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_8);
  if (LVar1 == 0) {
    pDVar9 = &local_14;
    ppHVar8 = &local_10;
    p_Var7 = (LPSECURITY_ATTRIBUTES)0x0;
    RVar6 = 0x2001f;
    DVar5 = 0;
    pCVar4 = (LPSTR)0x0;
    DVar3 = 0;
    pCVar2 = (LPCSTR)FUN_004072e0((undefined4 *)(param_1 + 0xc));
    LVar1 = RegCreateKeyExA(local_8,pCVar2,DVar3,pCVar4,DVar5,RVar6,p_Var7,ppHVar8,pDVar9);
    if (LVar1 == 0) {
      pDVar9 = &local_14;
      ppHVar8 = &local_c;
      p_Var7 = (LPSECURITY_ATTRIBUTES)0x0;
      RVar6 = 0x2001f;
      DVar5 = 0;
      pCVar4 = (LPSTR)0x0;
      DVar3 = 0;
      pCVar2 = (LPCSTR)FUN_004072e0((undefined4 *)(param_1 + 0x10));
      RegCreateKeyExA(local_10,pCVar2,DVar3,pCVar4,DVar5,RVar6,p_Var7,ppHVar8,pDVar9);
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


// ---- FUN_0040fe78 @ 0040fe78

HKEY __thiscall FUN_0040fe78(void *this,LPCSTR param_1)

{
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = FUN_0040fdba((int)this);
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


// ---- FUN_0040fed3 @ 0040fed3

UINT __thiscall FUN_0040fed3(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  LSTATUS LVar2;
  LPCSTR lpFileName;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  UINT local_8;
  
  bVar1 = FUN_00410930((int *)((int)this + 0xc));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_c = FUN_0040fe78(this,param_1);
    if (local_c != (HKEY)0x0) {
      local_14 = 4;
      LVar2 = RegQueryValueExA(local_c,param_2,(LPDWORD)0x0,&local_10,(LPBYTE)&local_8,&local_14);
      RegCloseKey(local_c);
      if (LVar2 == 0) {
        param_3 = local_8;
      }
    }
  }
  else {
    lpFileName = (LPCSTR)FUN_004072e0((undefined4 *)((int)this + 0x10));
    param_3 = GetPrivateProfileIntA(param_1,param_2,param_3,lpFileName);
  }
  return param_3;
}


// ---- FUN_0040ff69 @ 0040ff69

CString * FUN_0040ff69(CString *param_1,LPCSTR param_2,LPCSTR param_3,undefined *param_4)

{
  int iVar1;
  HKEY pHVar2;
  LSTATUS LVar3;
  LPBYTE lpData;
  LPCSTR lpFileName;
  void *this;
  CHAR local_1024 [4088];
  undefined4 uStackY_2c;
  HKEY__ lpType;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419101;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00418940();
  iVar1 = FUN_004072e0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = afxChNil_exref;
    }
    lpFileName = (LPCSTR)FUN_004072e0((undefined4 *)((int)this + 0x10));
    uStackY_2c = 0x4100fd;
    GetPrivateProfileStringA(param_2,param_3,param_4,local_1024,0x1000,lpFileName);
    CString::CString(param_1,local_1024);
  }
  else {
    pHVar2 = FUN_0040fe78(this,param_2);
    if (pHVar2 == (HKEY)0x0) {
      CString::CString(param_1,param_4);
    }
    else {
      CString::CString((CString *)&stack0xffffffe0);
      local_8 = 0;
      pHVar2 = (HKEY)&stack0xffffffe4;
      lpType.unused = (int)&stack0xffffffe8;
      uStackY_2c = 0x410015;
      LVar3 = RegQueryValueExA(pHVar2,param_3,(LPDWORD)0x0,(LPDWORD)lpType.unused,(LPBYTE)0x0,
                               (LPDWORD)pHVar2);
      if (LVar3 == 0) {
        pHVar2 = (HKEY)&stack0xffffffe4;
        lpData = (LPBYTE)CString::GetBuffer((CString *)&stack0xffffffe0,lpType.unused);
        uStackY_2c = 0x410043;
        LVar3 = RegQueryValueExA(pHVar2,param_3,(LPDWORD)0x0,(LPDWORD)&stack0xffffffe8,lpData,
                                 (LPDWORD)pHVar2);
        pHVar2 = (HKEY)0xffffffff;
        CString::ReleaseBuffer((CString *)&stack0xffffffe0,-1);
      }
      RegCloseKey(pHVar2);
      if (LVar3 == 0) {
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


// ---- FUN_00410134 @ 00410134

uint __thiscall FUN_00410134(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  LPCSTR lpFileName;
  CHAR local_1c [16];
  int local_c;
  HKEY local_8;
  
  iVar1 = FUN_004072e0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    wsprintfA(local_1c,&DAT_00424f3c,param_3);
    lpFileName = (LPCSTR)FUN_004072e0((undefined4 *)((int)this + 0x10));
    uVar2 = WritePrivateProfileStringA(param_1,param_2,local_1c,lpFileName);
  }
  else {
    local_8 = FUN_0040fe78(this,param_1);
    if (local_8 == (HKEY)0x0) {
      uVar2 = 0;
    }
    else {
      local_c = RegSetValueExA(local_8,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(local_8);
      uVar2 = (uint)(local_c == 0);
    }
  }
  return uVar2;
}


// ---- FUN_004101cf @ 004101cf

uint __thiscall FUN_004101cf(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

{
  int iVar1;
  HKEY pHVar2;
  LPCSTR lpFileName;
  uint uVar3;
  int local_8;
  
  iVar1 = FUN_004072e0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    lpFileName = (LPCSTR)FUN_004072e0((undefined4 *)((int)this + 0x10));
    uVar3 = WritePrivateProfileStringA(param_1,param_2,(LPCSTR)param_3,lpFileName);
  }
  else {
    if (param_2 == (LPCSTR)0x0) {
      pHVar2 = FUN_0040fdba((int)this);
      if (pHVar2 == (HKEY)0x0) {
        return 0;
      }
      local_8 = RegDeleteKeyA(pHVar2,param_1);
      RegCloseKey(pHVar2);
    }
    else if (param_3 == (BYTE *)0x0) {
      pHVar2 = FUN_0040fe78(this,param_1);
      if (pHVar2 == (HKEY)0x0) {
        return 0;
      }
      local_8 = RegDeleteValueA(pHVar2,param_2);
      RegCloseKey(pHVar2);
    }
    else {
      pHVar2 = FUN_0040fe78(this,param_1);
      if (pHVar2 == (HKEY)0x0) {
        return 0;
      }
      iVar1 = lstrlenA((LPCSTR)param_3);
      local_8 = RegSetValueExA(pHVar2,param_2,0,1,param_3,iVar1 + 1);
      RegCloseKey(pHVar2);
    }
    uVar3 = (uint)(local_8 == 0);
  }
  return uVar3;
}


// ---- FUN_004102e1 @ 004102e1

undefined4 __thiscall
FUN_004102e1(void *this,LPCSTR param_1,LPCSTR param_2,int *param_3,uint *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined3 extraout_var;
  int local_2c;
  CString local_28 [4];
  LSTATUS local_24;
  undefined4 local_20;
  uint local_1c;
  DWORD local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419114;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_3 = 0;
  *param_4 = 0;
  iVar4 = FUN_004072e0((undefined4 *)((int)this + 0xc));
  if (iVar4 == 0) {
    FUN_0040f7d0(this,local_28,param_1,param_2,(undefined *)0x0);
    local_8 = 0;
    bVar1 = FUN_00410930((int *)local_28);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar4 = FUN_004108f0((int *)local_28);
      *param_4 = iVar4 / 2;
      pvVar6 = operator_new(*param_4);
      *param_3 = (int)pvVar6;
      for (local_2c = 0; local_2c < iVar4; local_2c = local_2c + 2) {
        cVar2 = FUN_00410950(local_28,local_2c + 1);
        cVar3 = FUN_00410950(local_28,local_2c);
        *(char *)(*param_3 + local_2c / 2) = (cVar2 + -0x41) * '\x10' + -0x41 + cVar3;
      }
      local_8 = 0xffffffff;
      CString::~CString(local_28);
      uVar5 = 1;
    }
    else {
      local_8 = 0xffffffff;
      CString::~CString(local_28);
      uVar5 = 0;
    }
  }
  else {
    local_20 = 0;
    local_14 = FUN_0040fe78(this,param_1);
    if (local_14 == (HKEY)0x0) {
      uVar5 = 0;
    }
    else {
      local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)0x0,&local_1c);
      *param_4 = local_1c;
      if (local_24 == 0) {
        pvVar6 = operator_new(*param_4);
        *param_3 = (int)pvVar6;
        local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)*param_3,
                                    &local_1c);
      }
      RegCloseKey(local_14);
      if (local_24 == 0) {
        uVar5 = 1;
      }
      else {
        operator_delete((void *)*param_3);
        *param_3 = 0;
        uVar5 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return uVar5;
}


// ---- FUN_004104e4 @ 004104e4

uint __thiscall FUN_004104e4(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3,uint param_4)

{
  int iVar1;
  HKEY hKey;
  uint uVar2;
  LSTATUS LVar3;
  BYTE *pBVar4;
  uint local_10;
  
  iVar1 = FUN_004072e0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    pBVar4 = operator_new(param_4 * 2 + 1);
    for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
      pBVar4[local_10 * 2] = (param_3[local_10] & 0xf) + 0x41;
      pBVar4[local_10 * 2 + 1] = (char)((int)(uint)param_3[local_10] >> 4) + 'A';
    }
    pBVar4[local_10 * 2] = '\0';
    uVar2 = FUN_0040f8bf(this,param_1,param_2,pBVar4);
    operator_delete(pBVar4);
  }
  else {
    hKey = FUN_0040fe78(this,param_1);
    if (hKey == (HKEY)0x0) {
      uVar2 = 0;
    }
    else {
      LVar3 = RegSetValueExA(hKey,param_2,0,3,param_3,param_4);
      RegCloseKey(hKey);
      uVar2 = (uint)(LVar3 == 0);
    }
  }
  return uVar2;
}


// ---- FUN_004105f4 @ 004105f4

undefined4 __thiscall FUN_004105f4(void *this,undefined4 param_1,LPCSTR param_2,BYTE *param_3)

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
  
  puStack_c = &LAB_00419130;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar3 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__00424f40);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  bVar2 = FUN_0040f772(param_2,param_3);
  local_14 = CONCAT31(extraout_var,bVar2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_00424f48);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_0041069e @ 0041069e

undefined4 __thiscall FUN_0041069e(void *this,undefined4 param_1,LPCSTR param_2,undefined4 param_3)

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
  
  puStack_c = &LAB_0041914c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar3 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__00424f50);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  bVar2 = FUN_0040f719(param_2);
  local_14 = CONCAT31(extraout_var,bVar2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_00424f58);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_00410748 @ 00410748

undefined4 __thiscall FUN_00410748(void *this,undefined4 param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 uVar1;
  CString *pCVar2;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00419168;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar2 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__00424f60);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  local_14 = FUN_0040f6b6(param_2,param_3);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_00424f68);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_004107f2 @ 004107f2

CString * __thiscall
FUN_004107f2(void *this,CString *param_1,undefined4 param_2,LPCSTR param_3,char *param_4)

{
  CString *pCVar1;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004191a4;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  pCVar1 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__00424f70);
  local_8._0_1_ = 2;
  CString::operator=((CString *)((int)this + 4),pCVar1);
  local_8._0_1_ = 1;
  CString::~CString(local_18);
  FUN_0040f596(local_14,param_3,param_4);
  local_8._0_1_ = 3;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_00424f78);
  CString::CString(param_1,local_14);
  local_8._0_1_ = 1;
  CString::~CString(local_14);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_004108c0 @ 004108c0

undefined4 * __thiscall FUN_004108c0(void *this,uint param_1)

{
  FUN_0040f3e9(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- FUN_004108f0 @ 004108f0

undefined4 __fastcall FUN_004108f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00410910(param_1);
  return *(undefined4 *)(iVar1 + 4);
}


// ---- FUN_00410910 @ 00410910

int __fastcall FUN_00410910(int *param_1)

{
  return *param_1 + -0xc;
}


// ---- FUN_00410930 @ 00410930

bool __fastcall FUN_00410930(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00410910(param_1);
  return *(int *)(iVar1 + 4) == 0;
}


// ---- FUN_00410950 @ 00410950

undefined1 __thiscall FUN_00410950(void *this,int param_1)

{
  return *(undefined1 *)(*(int *)this + param_1);
}


// ---- FUN_00410970 @ 00410970

void FUN_00410970(void)

{
  FUN_0041097a();
  return;
}


// ---- FUN_0041097a @ 0041097a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041097a(void)

{
  _DAT_00427d74 = RegisterWindowMessageA(s_LEO_D_SET_STATE_00424f80);
  return;
}


// ---- FUN_0041098f @ 0041098f

void FUN_0041098f(void)

{
  FUN_00410999();
  return;
}


// ---- FUN_00410999 @ 00410999

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410999(void)

{
  _DAT_00427d70 = RegisterWindowMessageA(s_LEO_D_SET_STRING_00424f90);
  return;
}


// ---- FUN_004109ae @ 004109ae

void FUN_004109ae(void)

{
  FUN_004109b8();
  return;
}


// ---- FUN_004109b8 @ 004109b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004109b8(void)

{
  _DAT_00427d6c = RegisterWindowMessageA(s_LEO_D_SET_VALUE_00424fa4);
  return;
}


// ---- FUN_004109cd @ 004109cd

void FUN_004109cd(void)

{
  FUN_004109d7();
  return;
}


// ---- FUN_004109d7 @ 004109d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004109d7(void)

{
  _DAT_00427d68 = RegisterWindowMessageA(s_LEO_D_SET_XY_00424fb4);
  return;
}


// ---- FUN_004109ec @ 004109ec

void FUN_004109ec(void)

{
  FUN_004109f6();
  return;
}


// ---- FUN_004109f6 @ 004109f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004109f6(void)

{
  _DAT_00427d64 = RegisterWindowMessageA(s_LEO_D_GET_XY_00424fc4);
  return;
}


// ---- FUN_00410a0b @ 00410a0b

void FUN_00410a0b(void)

{
  FUN_00410a15();
  return;
}


// ---- FUN_00410a15 @ 00410a15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a15(void)

{
  _DAT_00427d60 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_00424fd4);
  return;
}


// ---- FUN_00410a2a @ 00410a2a

void FUN_00410a2a(void)

{
  FUN_00410a34();
  return;
}


// ---- FUN_00410a34 @ 00410a34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a34(void)

{
  _DAT_00427d5c = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_00424fec);
  return;
}


// ---- FUN_00410a49 @ 00410a49

void FUN_00410a49(void)

{
  FUN_00410a53();
  return;
}


// ---- FUN_00410a53 @ 00410a53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a53(void)

{
  _DAT_00427d58 = RegisterWindowMessageA(s_LEO_D_STEP_00425008);
  return;
}


// ---- FUN_00410a68 @ 00410a68

void FUN_00410a68(void)

{
  FUN_00410a72();
  return;
}


// ---- FUN_00410a72 @ 00410a72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a72(void)

{
  _DAT_00427d54 = RegisterWindowMessageA(s_LEO_D_EXECUTE_00425014);
  return;
}


// ---- FUN_00410a87 @ 00410a87

void FUN_00410a87(void)

{
  FUN_00410a91();
  return;
}


// ---- FUN_00410a91 @ 00410a91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a91(void)

{
  _DAT_00427d50 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_00425024);
  return;
}


// ---- FUN_00410aa6 @ 00410aa6

void FUN_00410aa6(void)

{
  FUN_00410ab0();
  return;
}


// ---- FUN_00410ab0 @ 00410ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410ab0(void)

{
  _DAT_00427d4c = RegisterWindowMessageA(s_LEO_D_GET_STATE_00425038);
  return;
}


// ---- FUN_00410ac5 @ 00410ac5

void FUN_00410ac5(void)

{
  FUN_00410acf();
  return;
}


// ---- FUN_00410acf @ 00410acf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410acf(void)

{
  _DAT_00427d48 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_00425048);
  return;
}


// ---- FUN_00410ae4 @ 00410ae4

void FUN_00410ae4(void)

{
  FUN_00410aee();
  return;
}


// ---- FUN_00410aee @ 00410aee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410aee(void)

{
  _DAT_00427d44 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_00425060);
  return;
}


// ---- FUN_00410b03 @ 00410b03

void FUN_00410b03(void)

{
  FUN_00410b0d();
  return;
}


// ---- FUN_00410b0d @ 00410b0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410b0d(void)

{
  _DAT_00427d40 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_00425070);
  return;
}


// ---- FUN_00410b22 @ 00410b22

void FUN_00410b22(void)

{
  FUN_00410b2c();
  return;
}


// ---- FUN_00410b2c @ 00410b2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410b2c(void)

{
  _DAT_00427d3c = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_00425084);
  return;
}


// ---- FUN_00410b41 @ 00410b41

void FUN_00410b41(void)

{
  FUN_00410b4b();
  return;
}


// ---- FUN_00410b4b @ 00410b4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410b4b(void)

{
  _DAT_00427d38 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_004250a0);
  return;
}


// ---- FUN_00410b60 @ 00410b60

void FUN_00410b60(void)

{
  FUN_00410b6a();
  return;
}


// ---- FUN_00410b6a @ 00410b6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410b6a(void)

{
  _DAT_00427d34 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_004250bc);
  return;
}


// ---- FUN_00410b7f @ 00410b7f

void FUN_00410b7f(void)

{
  FUN_00410b89();
  return;
}


// ---- FUN_00410b89 @ 00410b89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410b89(void)

{
  _DAT_00427d30 = RegisterWindowMessageA(s_PM_SERVER_READY_004250d8);
  return;
}


// ---- FUN_00410b9e @ 00410b9e

void FUN_00410b9e(void)

{
  FUN_00410ba8();
  return;
}


// ---- FUN_00410ba8 @ 00410ba8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410ba8(void)

{
  _DAT_00427d2c = RegisterWindowMessageA(s_PM_SERVER_LOADING_004250e8);
  return;
}


// ---- FUN_00410bbd @ 00410bbd

void FUN_00410bbd(void)

{
  FUN_00410bc7();
  return;
}


// ---- FUN_00410bc7 @ 00410bc7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410bc7(void)

{
  _DAT_00427d28 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_004250fc);
  return;
}


// ---- FUN_00410bdc @ 00410bdc

void FUN_00410bdc(void)

{
  FUN_00410be6();
  return;
}


// ---- FUN_00410be6 @ 00410be6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410be6(void)

{
  _DAT_00427d24 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_00425110);
  return;
}


// ---- FUN_00410bfb @ 00410bfb

void FUN_00410bfb(void)

{
  FUN_00410c05();
  return;
}


// ---- FUN_00410c05 @ 00410c05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410c05(void)

{
  _DAT_00427d20 = RegisterWindowMessageA(s_PM_SEM_CLOSE_00425124);
  return;
}


// ---- FUN_00410c1a @ 00410c1a

void FUN_00410c1a(void)

{
  FUN_00410c24();
  return;
}


// ---- FUN_00410c24 @ 00410c24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410c24(void)

{
  _DAT_00427d1c = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_00425134);
  return;
}


// ---- FUN_00410c39 @ 00410c39

void FUN_00410c39(void)

{
  FUN_00410c43();
  return;
}


// ---- FUN_00410c43 @ 00410c43

void FUN_00410c43(void)

{
  DAT_00427d18 = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_00425150);
  return;
}


// ---- FUN_00410c58 @ 00410c58

void FUN_00410c58(void)

{
  FUN_00410c62();
  return;
}


// ---- FUN_00410c62 @ 00410c62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410c62(void)

{
  _DAT_00427d14 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_00425164);
  return;
}


// ---- FUN_00410c77 @ 00410c77

void FUN_00410c77(void)

{
  FUN_00410c81();
  return;
}


// ---- FUN_00410c81 @ 00410c81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410c81(void)

{
  _DAT_00427d10 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_0042517c);
  return;
}


// ---- FUN_00410c96 @ 00410c96

void FUN_00410c96(void)

{
  FUN_00410ca0();
  return;
}


// ---- FUN_00410ca0 @ 00410ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410ca0(void)

{
  _DAT_00427d0c = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_00425190);
  return;
}


// ---- FUN_00410cb5 @ 00410cb5

void FUN_00410cb5(void)

{
  FUN_00410cbf();
  return;
}


// ---- FUN_00410cbf @ 00410cbf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410cbf(void)

{
  _DAT_00427d08 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_004251a8);
  return;
}


// ---- FUN_00410cd4 @ 00410cd4

void FUN_00410cd4(void)

{
  FUN_00410cde();
  return;
}


// ---- FUN_00410cde @ 00410cde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410cde(void)

{
  _DAT_00427d04 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_004251c4);
  return;
}


// ---- FUN_00410cf3 @ 00410cf3

void FUN_00410cf3(void)

{
  FUN_00410cfd();
  return;
}


// ---- FUN_00410cfd @ 00410cfd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410cfd(void)

{
  _DAT_00427d00 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_004251e0);
  return;
}


// ---- FUN_00410d12 @ 00410d12

void FUN_00410d12(void)

{
  FUN_00410d1c();
  return;
}


// ---- FUN_00410d1c @ 00410d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410d1c(void)

{
  _DAT_00427cfc = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_004251fc);
  return;
}


// ---- FUN_00410d31 @ 00410d31

void FUN_00410d31(void)

{
  FUN_00410d3b();
  return;
}


// ---- FUN_00410d3b @ 00410d3b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410d3b(void)

{
  _DAT_00427cf8 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_00425218);
  return;
}


// ---- FUN_00410d50 @ 00410d50

void FUN_00410d50(void)

{
  FUN_00410d5a();
  return;
}


// ---- FUN_00410d5a @ 00410d5a

void FUN_00410d5a(void)

{
  DAT_00427cf4 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_0042522c);
  return;
}


// ---- FUN_00410d6f @ 00410d6f

void FUN_00410d6f(void)

{
  FUN_00410d79();
  return;
}


// ---- FUN_00410d79 @ 00410d79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410d79(void)

{
  _DAT_00427cf0 = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_00425244);
  return;
}


// ---- FUN_00410d8e @ 00410d8e

void FUN_00410d8e(void)

{
  FUN_00410d98();
  return;
}


// ---- FUN_00410d98 @ 00410d98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410d98(void)

{
  _DAT_00427cec = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_00425260);
  return;
}


// ---- FUN_00410dad @ 00410dad

void FUN_00410dad(void)

{
  FUN_00410db7();
  return;
}


// ---- FUN_00410db7 @ 00410db7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410db7(void)

{
  _DAT_00427ce8 = RegisterWindowMessageA(s_PM_IMEX_DONE_00425274);
  return;
}


// ---- FUN_00410dcc @ 00410dcc

void FUN_00410dcc(void)

{
  FUN_00410dd6();
  return;
}


// ---- FUN_00410dd6 @ 00410dd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410dd6(void)

{
  _DAT_00427ce4 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_00425284);
  return;
}


// ---- FUN_00410deb @ 00410deb

void FUN_00410deb(void)

{
  FUN_00410df5();
  return;
}


// ---- FUN_00410df5 @ 00410df5

void FUN_00410df5(void)

{
  DAT_00427ce0 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_00425298);
  return;
}


// ---- FUN_00410e0a @ 00410e0a

void FUN_00410e0a(void)

{
  FUN_00410e14();
  return;
}


// ---- FUN_00410e14 @ 00410e14

void FUN_00410e14(void)

{
  DAT_00427cdc = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_004252ac);
  return;
}


// ---- FUN_00410e29 @ 00410e29

void FUN_00410e29(void)

{
  FUN_00410e33();
  return;
}


// ---- FUN_00410e33 @ 00410e33

void FUN_00410e33(void)

{
  DAT_00427cd8 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_004252c0);
  return;
}


// ---- FUN_00410e48 @ 00410e48

void FUN_00410e48(void)

{
  FUN_00410e52();
  return;
}


// ---- FUN_00410e52 @ 00410e52

void FUN_00410e52(void)

{
  DAT_00427cd4 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_004252d4);
  return;
}


// ---- FUN_00410e67 @ 00410e67

void FUN_00410e67(void)

{
  FUN_00410e71();
  return;
}


// ---- FUN_00410e71 @ 00410e71

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410e71(void)

{
  _DAT_00427cd0 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_004252ec);
  return;
}


// ---- FUN_00410e86 @ 00410e86

void FUN_00410e86(void)

{
  FUN_00410e90();
  return;
}


// ---- FUN_00410e90 @ 00410e90

void FUN_00410e90(void)

{
  DAT_00427ccc = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_00425300);
  return;
}


// ---- FUN_00410ea5 @ 00410ea5

void FUN_00410ea5(void)

{
  FUN_00410eaf();
  return;
}


// ---- FUN_00410eaf @ 00410eaf

void FUN_00410eaf(void)

{
  DAT_00427cc8 = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_00425314);
  return;
}


// ---- FUN_00410ec4 @ 00410ec4

void FUN_00410ec4(void)

{
  FUN_00410ece();
  return;
}


// ---- FUN_00410ece @ 00410ece

void FUN_00410ece(void)

{
  DAT_00427cc4 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_00425328);
  return;
}


// ---- FUN_00410ee3 @ 00410ee3

void FUN_00410ee3(void)

{
  FUN_00410eed();
  return;
}


// ---- FUN_00410eed @ 00410eed

void FUN_00410eed(void)

{
  DAT_00427cc0 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_00425338);
  return;
}


// ---- FUN_00410f02 @ 00410f02

void FUN_00410f02(void)

{
  FUN_00410f0c();
  return;
}


// ---- FUN_00410f0c @ 00410f0c

void FUN_00410f0c(void)

{
  DAT_00427cbc = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_00425348);
  return;
}


// ---- FUN_00410f21 @ 00410f21

void FUN_00410f21(void)

{
  FUN_00410f2b();
  return;
}


// ---- FUN_00410f2b @ 00410f2b

void FUN_00410f2b(void)

{
  DAT_00427cb8 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_00425360);
  return;
}


// ---- FUN_00410f40 @ 00410f40

void FUN_00410f40(void)

{
  FUN_00410f4a();
  return;
}


// ---- FUN_00410f4a @ 00410f4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410f4a(void)

{
  _DAT_00427cb4 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_00425378);
  return;
}


// ---- FUN_00410f5f @ 00410f5f

void FUN_00410f5f(void)

{
  FUN_00410f69();
  return;
}


// ---- FUN_00410f69 @ 00410f69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410f69(void)

{
  _DAT_00427cb0 = RegisterWindowMessageA(s_PM_STEP_MACRO_00425394);
  return;
}


// ---- FUN_00410f7e @ 00410f7e

void FUN_00410f7e(void)

{
  FUN_00410f88();
  return;
}


// ---- FUN_00410f88 @ 00410f88

void FUN_00410f88(void)

{
  DAT_00427cac = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_004253a4);
  return;
}


// ---- FUN_00410f9d @ 00410f9d

void FUN_00410f9d(void)

{
  FUN_00410fa7();
  return;
}


// ---- FUN_00410fa7 @ 00410fa7

void FUN_00410fa7(void)

{
  DAT_00427ca8 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_004253b8);
  return;
}


// ---- FUN_00410fbc @ 00410fbc

void FUN_00410fbc(void)

{
  FUN_00410fc6();
  return;
}


// ---- FUN_00410fc6 @ 00410fc6

void FUN_00410fc6(void)

{
  DAT_00427ca4 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_004253d4);
  return;
}


// ---- FUN_00410fdb @ 00410fdb

void FUN_00410fdb(void)

{
  FUN_00410fe5();
  return;
}


// ---- FUN_00410fe5 @ 00410fe5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410fe5(void)

{
  _DAT_00427ca0 = RegisterWindowMessageA(s_PM_HALT_MACRO_004253ec);
  return;
}


// ---- FUN_00410ffa @ 00410ffa

void FUN_00410ffa(void)

{
  FUN_00411004();
  return;
}


// ---- FUN_00411004 @ 00411004

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411004(void)

{
  _DAT_00427c9c = RegisterWindowMessageA(s_PM_PAUSE_MACRO_004253fc);
  return;
}


// ---- FUN_00411019 @ 00411019

void FUN_00411019(void)

{
  FUN_00411023();
  return;
}


// ---- FUN_00411023 @ 00411023

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411023(void)

{
  _DAT_00427c98 = RegisterWindowMessageA(s_PM_MACRO_STATUS_0042540c);
  return;
}


// ---- FUN_00411038 @ 00411038

void FUN_00411038(void)

{
  FUN_00411042();
  return;
}


// ---- FUN_00411042 @ 00411042

void FUN_00411042(void)

{
  DAT_00427c94 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_0042541c);
  return;
}


// ---- FUN_00411057 @ 00411057

void FUN_00411057(void)

{
  FUN_00411061();
  return;
}


// ---- FUN_00411061 @ 00411061

void FUN_00411061(void)

{
  DAT_00427c90 = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_0042542c);
  return;
}


// ---- FUN_00411076 @ 00411076

void FUN_00411076(void)

{
  FUN_00411080();
  return;
}


// ---- FUN_00411080 @ 00411080

void FUN_00411080(void)

{
  DAT_00427c8c = RegisterWindowMessageA(s_PM_SAVE_STATE_00425448);
  return;
}


// ---- FUN_00411095 @ 00411095

void FUN_00411095(void)

{
  FUN_0041109f();
  return;
}


// ---- FUN_0041109f @ 0041109f

void FUN_0041109f(void)

{
  DAT_00427c88 = RegisterWindowMessageA(s_PM_LOAD_STATE_00425458);
  return;
}


// ---- FUN_004110b4 @ 004110b4

void FUN_004110b4(void)

{
  FUN_004110be();
  return;
}


// ---- FUN_004110be @ 004110be

void FUN_004110be(void)

{
  DAT_00427c84 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_00425468);
  return;
}


// ---- FUN_004110d3 @ 004110d3

void FUN_004110d3(void)

{
  FUN_004110dd();
  return;
}


// ---- FUN_004110dd @ 004110dd

void FUN_004110dd(void)

{
  DAT_00427c80 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_00425480);
  return;
}


// ---- FUN_004110f2 @ 004110f2

void FUN_004110f2(void)

{
  FUN_004110fc();
  return;
}


// ---- FUN_004110fc @ 004110fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004110fc(void)

{
  _DAT_00427c7c = RegisterWindowMessageA(s_PM_EXECUTING_LINE_004254a0);
  return;
}


// ---- FUN_00411111 @ 00411111

void FUN_00411111(void)

{
  FUN_0041111b();
  return;
}


// ---- FUN_0041111b @ 0041111b

void FUN_0041111b(void)

{
  DAT_00427c78 = RegisterWindowMessageA(s_PM_REVIEW_STATE_004254b4);
  return;
}


// ---- FUN_00411130 @ 00411130

void FUN_00411130(void)

{
  FUN_0041113a();
  return;
}


// ---- FUN_0041113a @ 0041113a

void FUN_0041113a(void)

{
  DAT_00427c74 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_004254c4);
  return;
}


// ---- FUN_0041114f @ 0041114f

void FUN_0041114f(void)

{
  FUN_00411159();
  return;
}


// ---- FUN_00411159 @ 00411159

void FUN_00411159(void)

{
  DAT_00427c70 = RegisterWindowMessageA(s_PM_QUERY_SERVER_004254dc);
  return;
}


// ---- FUN_0041116e @ 0041116e

void FUN_0041116e(void)

{
  FUN_00411178();
  return;
}


// ---- FUN_00411178 @ 00411178

void FUN_00411178(void)

{
  DAT_00427c6c = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_004254ec);
  return;
}


// ---- FUN_0041118d @ 0041118d

void FUN_0041118d(void)

{
  FUN_00411197();
  return;
}


// ---- FUN_00411197 @ 00411197

void FUN_00411197(void)

{
  DAT_00427c68 = RegisterWindowMessageA(s_PM_REGISTER_00425504);
  return;
}


// ---- FUN_004111ac @ 004111ac

void FUN_004111ac(void)

{
  FUN_004111b6();
  return;
}


// ---- FUN_004111b6 @ 004111b6

void FUN_004111b6(void)

{
  DAT_00427c64 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_00425510);
  return;
}


// ---- FUN_004111cb @ 004111cb

void FUN_004111cb(void)

{
  FUN_004111d5();
  return;
}


// ---- FUN_004111d5 @ 004111d5

void FUN_004111d5(void)

{
  DAT_00427c60 = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_00425528);
  return;
}


// ---- FUN_004111ea @ 004111ea

void FUN_004111ea(void)

{
  FUN_004111f4();
  return;
}


// ---- FUN_004111f4 @ 004111f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004111f4(void)

{
  _DAT_00427c5c = RegisterWindowMessageA(s_PM_SEM_REGISTER_00425540);
  return;
}


// ---- FUN_00411209 @ 00411209

void FUN_00411209(void)

{
  FUN_00411213();
  return;
}


// ---- FUN_00411213 @ 00411213

void FUN_00411213(void)

{
  DAT_00427c58 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_00425550);
  return;
}


// ---- FUN_00411228 @ 00411228

void FUN_00411228(void)

{
  FUN_00411232();
  return;
}


// ---- FUN_00411232 @ 00411232

void FUN_00411232(void)

{
  DAT_00427c54 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_00425568);
  return;
}


// ---- FUN_00411247 @ 00411247

void FUN_00411247(void)

{
  FUN_00411251();
  return;
}


// ---- FUN_00411251 @ 00411251

void FUN_00411251(void)

{
  DAT_00427c50 = RegisterWindowMessageA(s_PM_LOG_OFF_0042557c);
  return;
}


// ---- FUN_00411266 @ 00411266

void FUN_00411266(void)

{
  FUN_00411270();
  return;
}


// ---- FUN_00411270 @ 00411270

void FUN_00411270(void)

{
  DAT_00427c4c = RegisterWindowMessageA(s_PM_LOG_ON_00425588);
  return;
}


// ---- FUN_00411285 @ 00411285

void FUN_00411285(void)

{
  FUN_0041128f();
  return;
}


// ---- FUN_0041128f @ 0041128f

void FUN_0041128f(void)

{
  DAT_00427c48 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_00425594);
  return;
}


// ---- FUN_004112a4 @ 004112a4

void FUN_004112a4(void)

{
  FUN_004112ae();
  return;
}


// ---- FUN_004112ae @ 004112ae

void FUN_004112ae(void)

{
  DAT_00427c44 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_004255ac);
  return;
}


// ---- FUN_004112c3 @ 004112c3

void FUN_004112c3(void)

{
  FUN_004112cd();
  return;
}


// ---- FUN_004112cd @ 004112cd

void FUN_004112cd(void)

{
  DAT_00427c40 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_004255c0);
  return;
}


// ---- FUN_004112e2 @ 004112e2

void FUN_004112e2(void)

{
  FUN_004112ec();
  return;
}


// ---- FUN_004112ec @ 004112ec

void FUN_004112ec(void)

{
  DAT_00427c3c = RegisterWindowMessageA(s_PM_GET_STRING_004255d8);
  return;
}


// ---- FUN_00411301 @ 00411301

void FUN_00411301(void)

{
  FUN_0041130b();
  return;
}


// ---- FUN_0041130b @ 0041130b

void FUN_0041130b(void)

{
  DAT_00427c38 = RegisterWindowMessageA(s_PM_GET_NAME_004255e8);
  return;
}


// ---- FUN_00411320 @ 00411320

void FUN_00411320(void)

{
  FUN_0041132a();
  return;
}


// ---- FUN_0041132a @ 0041132a

void FUN_0041132a(void)

{
  DAT_00427c34 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_004255f4);
  return;
}


// ---- FUN_0041133f @ 0041133f

void FUN_0041133f(void)

{
  FUN_00411349();
  return;
}


// ---- FUN_00411349 @ 00411349

void FUN_00411349(void)

{
  DAT_00427c30 = RegisterWindowMessageA(s_PM_GET_VALUE_00425604);
  return;
}


// ---- FUN_0041135e @ 0041135e

void FUN_0041135e(void)

{
  FUN_00411368();
  return;
}


// ---- FUN_00411368 @ 00411368

void FUN_00411368(void)

{
  DAT_00427c2c = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_00425614);
  return;
}


// ---- FUN_0041137d @ 0041137d

void FUN_0041137d(void)

{
  FUN_00411387();
  return;
}


// ---- FUN_00411387 @ 00411387

void FUN_00411387(void)

{
  DAT_00427c28 = RegisterWindowMessageA(s_PM_STAGE_GOTO_00425630);
  return;
}


// ---- FUN_0041139c @ 0041139c

void FUN_0041139c(void)

{
  FUN_004113a6();
  return;
}


// ---- FUN_004113a6 @ 004113a6

void FUN_004113a6(void)

{
  DAT_00427c24 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_00425640);
  return;
}


// ---- FUN_004113bb @ 004113bb

void FUN_004113bb(void)

{
  FUN_004113c5();
  return;
}


// ---- FUN_004113c5 @ 004113c5

void FUN_004113c5(void)

{
  DAT_00427c20 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_00425658);
  return;
}


// ---- FUN_004113da @ 004113da

void FUN_004113da(void)

{
  FUN_004113e4();
  return;
}


// ---- FUN_004113e4 @ 004113e4

void FUN_004113e4(void)

{
  DAT_00427c1c = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_00425670);
  return;
}


// ---- FUN_004113f9 @ 004113f9

void FUN_004113f9(void)

{
  FUN_00411403();
  return;
}


// ---- FUN_00411403 @ 00411403

void FUN_00411403(void)

{
  DAT_00427c18 = RegisterWindowMessageA(s_PM_GET_ERROR_00425694);
  return;
}


// ---- FUN_00411418 @ 00411418

void FUN_00411418(void)

{
  FUN_00411422();
  return;
}


// ---- FUN_00411422 @ 00411422

void FUN_00411422(void)

{
  DAT_00427c14 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_004256a4);
  return;
}


// ---- FUN_00411437 @ 00411437

void FUN_00411437(void)

{
  FUN_00411441();
  return;
}


// ---- FUN_00411441 @ 00411441

void FUN_00411441(void)

{
  DAT_00427c10 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_004256b8);
  return;
}


// ---- FUN_00411456 @ 00411456

void FUN_00411456(void)

{
  FUN_00411460();
  return;
}


// ---- FUN_00411460 @ 00411460

void FUN_00411460(void)

{
  DAT_00427c0c = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_004256cc);
  return;
}


// ---- FUN_00411475 @ 00411475

void FUN_00411475(void)

{
  FUN_0041147f();
  return;
}


// ---- FUN_0041147f @ 0041147f

void FUN_0041147f(void)

{
  DAT_00427c08 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_004256ec);
  return;
}


// ---- FUN_00411494 @ 00411494

void FUN_00411494(void)

{
  FUN_0041149e();
  return;
}


// ---- FUN_0041149e @ 0041149e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041149e(void)

{
  _DAT_00427c04 = RegisterWindowMessageA(s_PM_GET_HANDLES_00425700);
  return;
}


// ---- FUN_004114b3 @ 004114b3

void FUN_004114b3(void)

{
  FUN_004114bd();
  return;
}


// ---- FUN_004114bd @ 004114bd

void FUN_004114bd(void)

{
  DAT_00427c00 = RegisterWindowMessageA(s_PM_GET_STATES_00425710);
  return;
}


// ---- FUN_004114d2 @ 004114d2

void FUN_004114d2(void)

{
  FUN_004114dc();
  return;
}


// ---- FUN_004114dc @ 004114dc

void FUN_004114dc(void)

{
  DAT_00427bfc = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_00425720);
  return;
}


// ---- FUN_004114f1 @ 004114f1

void FUN_004114f1(void)

{
  FUN_004114fb();
  return;
}


// ---- FUN_004114fb @ 004114fb

void FUN_004114fb(void)

{
  DAT_00427bf8 = RegisterWindowMessageA(s_PM_GET_LICENCE_00425734);
  return;
}


// ---- FUN_00411510 @ 00411510

void FUN_00411510(void)

{
  FUN_0041151a();
  return;
}


// ---- FUN_0041151a @ 0041151a

void FUN_0041151a(void)

{
  DAT_00427bf4 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_00425744);
  return;
}


// ---- FUN_0041152f @ 0041152f

void FUN_0041152f(void)

{
  FUN_00411539();
  return;
}


// ---- FUN_00411539 @ 00411539

void FUN_00411539(void)

{
  DAT_00427bf0 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_00425758);
  return;
}


// ---- FUN_0041154e @ 0041154e

void FUN_0041154e(void)

{
  FUN_00411558();
  return;
}


// ---- FUN_00411558 @ 00411558

void FUN_00411558(void)

{
  DAT_00427bec = RegisterWindowMessageA(s_PM_GET_XY_VALUES_0042576c);
  return;
}


// ---- FUN_0041156d @ 0041156d

void FUN_0041156d(void)

{
  FUN_00411577();
  return;
}


// ---- FUN_00411577 @ 00411577

void FUN_00411577(void)

{
  DAT_00427be8 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_00425780);
  return;
}


// ---- FUN_0041158c @ 0041158c

void FUN_0041158c(void)

{
  FUN_00411596();
  return;
}


// ---- FUN_00411596 @ 00411596

void FUN_00411596(void)

{
  DAT_00427be4 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_00425794);
  return;
}


// ---- FUN_004115ab @ 004115ab

void FUN_004115ab(void)

{
  FUN_004115b5();
  return;
}


// ---- FUN_004115b5 @ 004115b5

void FUN_004115b5(void)

{
  DAT_00427be0 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_004257a8);
  return;
}


// ---- FUN_004115ca @ 004115ca

void FUN_004115ca(void)

{
  FUN_004115d4();
  return;
}


// ---- FUN_004115d4 @ 004115d4

void FUN_004115d4(void)

{
  DAT_00427bdc = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_004257c0);
  return;
}


// ---- FUN_004115e9 @ 004115e9

void FUN_004115e9(void)

{
  FUN_004115f3();
  return;
}


// ---- FUN_004115f3 @ 004115f3

void FUN_004115f3(void)

{
  DAT_00427bd8 = RegisterWindowMessageA(s_PM_SET_VALUE_004257d4);
  return;
}


// ---- FUN_00411608 @ 00411608

void FUN_00411608(void)

{
  FUN_00411612();
  return;
}


// ---- FUN_00411612 @ 00411612

void FUN_00411612(void)

{
  DAT_00427bd4 = RegisterWindowMessageA(s_PM_SET_COARSE_004257e4);
  return;
}


// ---- FUN_00411627 @ 00411627

void FUN_00411627(void)

{
  FUN_00411631();
  return;
}


// ---- FUN_00411631 @ 00411631

void FUN_00411631(void)

{
  DAT_00427bd0 = RegisterWindowMessageA(s_PM_GET_COARSE_004257f4);
  return;
}


// ---- FUN_00411646 @ 00411646

void FUN_00411646(void)

{
  FUN_00411650();
  return;
}


// ---- FUN_00411650 @ 00411650

void FUN_00411650(void)

{
  DAT_00427bcc = RegisterWindowMessageA(s_PM_SET_NOTIFY_00425804);
  return;
}


// ---- FUN_00411665 @ 00411665

void FUN_00411665(void)

{
  FUN_0041166f();
  return;
}


// ---- FUN_0041166f @ 0041166f

void FUN_0041166f(void)

{
  DAT_00427bc8 = RegisterWindowMessageA(s_PM_SET_USER_MODE_00425814);
  return;
}


// ---- FUN_00411684 @ 00411684

void FUN_00411684(void)

{
  FUN_0041168e();
  return;
}


// ---- FUN_0041168e @ 0041168e

void FUN_0041168e(void)

{
  DAT_00427bc4 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_00425828);
  return;
}


// ---- FUN_004116a3 @ 004116a3

void FUN_004116a3(void)

{
  FUN_004116ad();
  return;
}


// ---- FUN_004116ad @ 004116ad

void FUN_004116ad(void)

{
  DAT_00427bc0 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_00425844);
  return;
}


// ---- FUN_004116c2 @ 004116c2

void FUN_004116c2(void)

{
  FUN_004116cc();
  return;
}


// ---- FUN_004116cc @ 004116cc

void FUN_004116cc(void)

{
  DAT_00427bbc = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_00425860);
  return;
}


// ---- FUN_004116e1 @ 004116e1

void FUN_004116e1(void)

{
  FUN_004116eb();
  return;
}


// ---- FUN_004116eb @ 004116eb

void FUN_004116eb(void)

{
  DAT_00427bb8 = RegisterWindowMessageA(s_PM_IS_ENABLED_00425878);
  return;
}


// ---- FUN_00411700 @ 00411700

void FUN_00411700(void)

{
  FUN_0041170a();
  return;
}


// ---- FUN_0041170a @ 0041170a

void FUN_0041170a(void)

{
  DAT_00427bb4 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_00425888);
  return;
}


// ---- FUN_0041171f @ 0041171f

void FUN_0041171f(void)

{
  FUN_00411729();
  return;
}


// ---- FUN_00411729 @ 00411729

void FUN_00411729(void)

{
  DAT_00427bb0 = RegisterWindowMessageA(s_PM_IS_VECTOR_00425898);
  return;
}


// ---- FUN_0041173e @ 0041173e

void FUN_0041173e(void)

{
  FUN_00411748();
  return;
}


// ---- FUN_00411748 @ 00411748

void FUN_00411748(void)

{
  DAT_00427bac = RegisterWindowMessageA(s_PM_IS_VISIBLE_004258a8);
  return;
}


// ---- FUN_0041175d @ 0041175d

void FUN_0041175d(void)

{
  FUN_00411767();
  return;
}


// ---- FUN_00411767 @ 00411767

void FUN_00411767(void)

{
  DAT_00427ba8 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_004258b8);
  return;
}


// ---- FUN_0041177c @ 0041177c

void FUN_0041177c(void)

{
  FUN_00411786();
  return;
}


// ---- FUN_00411786 @ 00411786

void FUN_00411786(void)

{
  DAT_00427ba4 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_004258c8);
  return;
}


// ---- FUN_0041179b @ 0041179b

void FUN_0041179b(void)

{
  FUN_004117a5();
  return;
}


// ---- FUN_004117a5 @ 004117a5

void FUN_004117a5(void)

{
  DAT_00427ba0 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_004258dc);
  return;
}


// ---- FUN_004117ba @ 004117ba

void FUN_004117ba(void)

{
  FUN_004117c4();
  return;
}


// ---- FUN_004117c4 @ 004117c4

void FUN_004117c4(void)

{
  DAT_00427b9c = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_004258f0);
  return;
}


// ---- FUN_004117d9 @ 004117d9

void FUN_004117d9(void)

{
  FUN_004117e3();
  return;
}


// ---- FUN_004117e3 @ 004117e3

void FUN_004117e3(void)

{
  DAT_00427b98 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_00425904);
  return;
}


// ---- FUN_004117f8 @ 004117f8

void FUN_004117f8(void)

{
  FUN_00411802();
  return;
}


// ---- FUN_00411802 @ 00411802

void FUN_00411802(void)

{
  DAT_00427b94 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_0042591c);
  return;
}


// ---- FUN_00411817 @ 00411817

void FUN_00411817(void)

{
  FUN_00411821();
  return;
}


// ---- FUN_00411821 @ 00411821

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411821(void)

{
  _DAT_00427b90 = RegisterWindowMessageA(s_PM_SERVER_HELP_00425934);
  return;
}


// ---- FUN_00411836 @ 00411836

void FUN_00411836(void)

{
  FUN_00411840();
  return;
}


// ---- FUN_00411840 @ 00411840

void FUN_00411840(void)

{
  DAT_00427b8c = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_00425944);
  return;
}


// ---- FUN_00411855 @ 00411855

void FUN_00411855(void)

{
  FUN_0041185f();
  return;
}


// ---- FUN_0041185f @ 0041185f

void FUN_0041185f(void)

{
  DAT_00427b88 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_00425960);
  return;
}


// ---- FUN_00411874 @ 00411874

void FUN_00411874(void)

{
  FUN_0041187e();
  return;
}


// ---- FUN_0041187e @ 0041187e

void FUN_0041187e(void)

{
  DAT_00427b84 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_00425974);
  return;
}


// ---- FUN_00411893 @ 00411893

void FUN_00411893(void)

{
  FUN_0041189d();
  return;
}


// ---- FUN_0041189d @ 0041189d

void FUN_0041189d(void)

{
  DAT_00427b80 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_00425990);
  return;
}


// ---- FUN_004118b2 @ 004118b2

void FUN_004118b2(void)

{
  FUN_004118bc();
  return;
}


// ---- FUN_004118bc @ 004118bc

void FUN_004118bc(void)

{
  DAT_00427b7c = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_004259a8);
  return;
}


// ---- FUN_004118d1 @ 004118d1

void FUN_004118d1(void)

{
  FUN_004118db();
  return;
}


// ---- FUN_004118db @ 004118db

void FUN_004118db(void)

{
  DAT_00427b78 = RegisterWindowMessageA(s_PM_STEP_VALUE_004259bc);
  return;
}


// ---- FUN_004118f0 @ 004118f0

void FUN_004118f0(void)

{
  FUN_004118fa();
  return;
}


// ---- FUN_004118fa @ 004118fa

void FUN_004118fa(void)

{
  DAT_00427b74 = RegisterWindowMessageA(s_PM_HELP_MODE_004259cc);
  return;
}


// ---- FUN_0041190f @ 0041190f

void FUN_0041190f(void)

{
  FUN_00411919();
  return;
}


// ---- FUN_00411919 @ 00411919

void FUN_00411919(void)

{
  DAT_00427b70 = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_004259dc);
  return;
}


// ---- FUN_0041192e @ 0041192e

void FUN_0041192e(void)

{
  FUN_00411938();
  return;
}


// ---- FUN_00411938 @ 00411938

void FUN_00411938(void)

{
  DAT_00427b6c = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_004259f0);
  return;
}


// ---- FUN_0041194d @ 0041194d

void FUN_0041194d(void)

{
  FUN_00411957();
  return;
}


// ---- FUN_00411957 @ 00411957

void FUN_00411957(void)

{
  DAT_00427b68 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_00425a04);
  return;
}


// ---- FUN_0041196c @ 0041196c

void FUN_0041196c(void)

{
  FUN_00411976();
  return;
}


// ---- FUN_00411976 @ 00411976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411976(void)

{
  _DAT_00427b64 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_00425a1c);
  return;
}


// ---- FUN_0041198b @ 0041198b

void FUN_0041198b(void)

{
  FUN_00411995();
  return;
}


// ---- FUN_00411995 @ 00411995

void FUN_00411995(void)

{
  DAT_00427b60 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_00425a38);
  return;
}


// ---- FUN_004119aa @ 004119aa

void FUN_004119aa(void)

{
  FUN_004119b4();
  return;
}


// ---- FUN_004119b4 @ 004119b4

void FUN_004119b4(void)

{
  DAT_00427b5c = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_00425a4c);
  return;
}


// ---- FUN_004119c9 @ 004119c9

void FUN_004119c9(void)

{
  FUN_004119d3();
  return;
}


// ---- FUN_004119d3 @ 004119d3

void FUN_004119d3(void)

{
  DAT_00427b58 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_00425a64);
  return;
}


// ---- FUN_004119e8 @ 004119e8

void FUN_004119e8(void)

{
  FUN_004119f2();
  return;
}


// ---- FUN_004119f2 @ 004119f2

void FUN_004119f2(void)

{
  DAT_00427b54 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_00425a7c);
  return;
}


// ---- FUN_00411a07 @ 00411a07

void FUN_00411a07(void)

{
  FUN_00411a11();
  return;
}


// ---- FUN_00411a11 @ 00411a11

void FUN_00411a11(void)

{
  DAT_00427b50 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_00425a94);
  return;
}


// ---- FUN_00411a26 @ 00411a26

void FUN_00411a26(void)

{
  FUN_00411a30();
  return;
}


// ---- FUN_00411a30 @ 00411a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411a30(void)

{
  _DAT_00427b4c = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_00425aac);
  return;
}


// ---- FUN_00411a45 @ 00411a45

void FUN_00411a45(void)

{
  FUN_00411a4f();
  return;
}


// ---- FUN_00411a4f @ 00411a4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411a4f(void)

{
  _DAT_00427b48 = RegisterWindowMessageA(s_PM_LUT_EDITOR_00425ac8);
  return;
}


// ---- FUN_00411a64 @ 00411a64

void FUN_00411a64(void)

{
  FUN_00411a6e();
  return;
}


// ---- FUN_00411a6e @ 00411a6e

void FUN_00411a6e(void)

{
  DAT_00427b44 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_00425ad8);
  return;
}


// ---- FUN_00411a83 @ 00411a83

void FUN_00411a83(void)

{
  FUN_00411a8d();
  return;
}


// ---- FUN_00411a8d @ 00411a8d

void FUN_00411a8d(void)

{
  DAT_00427b40 = RegisterWindowMessageA(s_PM_SET_LUT_RGB_00425aec);
  return;
}


// ---- FUN_00411aa2 @ 00411aa2

void FUN_00411aa2(void)

{
  FUN_00411aac();
  return;
}


// ---- FUN_00411aac @ 00411aac

void FUN_00411aac(void)

{
  DAT_00427b3c = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_00425afc);
  return;
}


// ---- FUN_00411ac1 @ 00411ac1

void FUN_00411ac1(void)

{
  FUN_00411acb();
  return;
}


// ---- FUN_00411acb @ 00411acb

void FUN_00411acb(void)

{
  DAT_00427b38 = RegisterWindowMessageA(s_PM_SET_LUT_BC_00425b10);
  return;
}


// ---- FUN_00411ae0 @ 00411ae0

void FUN_00411ae0(void)

{
  FUN_00411aea();
  return;
}


// ---- FUN_00411aea @ 00411aea

void FUN_00411aea(void)

{
  DAT_00427b34 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_00425b20);
  return;
}


// ---- FUN_00411aff @ 00411aff

void FUN_00411aff(void)

{
  FUN_00411b09();
  return;
}


// ---- FUN_00411b09 @ 00411b09

void FUN_00411b09(void)

{
  DAT_00427b30 = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_00425b34);
  return;
}


// ---- FUN_00411b1e @ 00411b1e

void FUN_00411b1e(void)

{
  FUN_00411b28();
  return;
}


// ---- FUN_00411b28 @ 00411b28

void FUN_00411b28(void)

{
  DAT_00427b2c = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_00425b48);
  return;
}


// ---- FUN_00411b3d @ 00411b3d

void FUN_00411b3d(void)

{
  FUN_00411b47();
  return;
}


// ---- FUN_00411b47 @ 00411b47

void FUN_00411b47(void)

{
  DAT_00427b28 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_00425b5c);
  return;
}


// ---- FUN_00411b5c @ 00411b5c

void FUN_00411b5c(void)

{
  FUN_00411b66();
  return;
}


// ---- FUN_00411b66 @ 00411b66

void FUN_00411b66(void)

{
  DAT_00427b24 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_00425b70);
  return;
}


// ---- FUN_00411b7b @ 00411b7b

void FUN_00411b7b(void)

{
  FUN_00411b85();
  return;
}


// ---- FUN_00411b85 @ 00411b85

void FUN_00411b85(void)

{
  DAT_00427b20 = RegisterWindowMessageA(s_PM_RGB_READ_00425b84);
  return;
}


// ---- FUN_00411b9a @ 00411b9a

void FUN_00411b9a(void)

{
  FUN_00411ba4();
  return;
}


// ---- FUN_00411ba4 @ 00411ba4

void FUN_00411ba4(void)

{
  DAT_00427b1c = RegisterWindowMessageA(s_PM_LUT_LOAD_00425b90);
  return;
}


// ---- FUN_00411bb9 @ 00411bb9

void FUN_00411bb9(void)

{
  FUN_00411bc3();
  return;
}


// ---- FUN_00411bc3 @ 00411bc3

void FUN_00411bc3(void)

{
  DAT_00427b18 = RegisterWindowMessageA(s_PM_LUT_READ_00425b9c);
  return;
}


// ---- FUN_00411bd8 @ 00411bd8

void FUN_00411bd8(void)

{
  FUN_00411be2();
  return;
}


// ---- FUN_00411be2 @ 00411be2

void FUN_00411be2(void)

{
  DAT_00427b14 = RegisterWindowMessageA(s_PM_READ_COLOR_00425ba8);
  return;
}


// ---- FUN_00411bf7 @ 00411bf7

void FUN_00411bf7(void)

{
  FUN_00411c01();
  return;
}


// ---- FUN_00411c01 @ 00411c01

void FUN_00411c01(void)

{
  DAT_00427b10 = RegisterWindowMessageA(s_PM_LUT_FILL_00425bb8);
  return;
}


// ---- FUN_00411c16 @ 00411c16

void FUN_00411c16(void)

{
  FUN_00411c20();
  return;
}


// ---- FUN_00411c20 @ 00411c20

void FUN_00411c20(void)

{
  DAT_00427b0c = RegisterWindowMessageA(s_PM_LUT_QLIN_00425bc4);
  return;
}


// ---- FUN_00411c35 @ 00411c35

void FUN_00411c35(void)

{
  FUN_00411c3f();
  return;
}


// ---- FUN_00411c3f @ 00411c3f

void FUN_00411c3f(void)

{
  DAT_00427b08 = RegisterWindowMessageA(s_PM_LUT_QINV_00425bd0);
  return;
}


// ---- FUN_00411c54 @ 00411c54

void FUN_00411c54(void)

{
  FUN_00411c5e();
  return;
}


// ---- FUN_00411c5e @ 00411c5e

void FUN_00411c5e(void)

{
  DAT_00427b04 = RegisterWindowMessageA(s_PM_LUT_SAVE_00425bdc);
  return;
}


// ---- FUN_00411c73 @ 00411c73

void FUN_00411c73(void)

{
  FUN_00411c7d();
  return;
}


// ---- FUN_00411c7d @ 00411c7d

void FUN_00411c7d(void)

{
  DAT_00427b00 = RegisterWindowMessageA(s_PM_LUT_RESTORE_00425be8);
  return;
}


// ---- FUN_00411c92 @ 00411c92

void FUN_00411c92(void)

{
  FUN_00411c9c();
  return;
}


// ---- FUN_00411c9c @ 00411c9c

void FUN_00411c9c(void)

{
  DAT_00427afc = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_00425bf8);
  return;
}


// ---- FUN_00411cb1 @ 00411cb1

void FUN_00411cb1(void)

{
  FUN_00411cbb();
  return;
}


// ---- FUN_00411cbb @ 00411cbb

void FUN_00411cbb(void)

{
  DAT_00427af8 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_00425c0c);
  return;
}


// ---- FUN_00411cd0 @ 00411cd0

void FUN_00411cd0(void)

{
  FUN_00411cda();
  return;
}


// ---- FUN_00411cda @ 00411cda

void FUN_00411cda(void)

{
  DAT_00427af4 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_00425c20);
  return;
}


// ---- FUN_00411cef @ 00411cef

void FUN_00411cef(void)

{
  FUN_00411cf9();
  return;
}


// ---- FUN_00411cf9 @ 00411cf9

void FUN_00411cf9(void)

{
  DAT_00427af0 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_00425c34);
  return;
}


// ---- FUN_00411d0e @ 00411d0e

void FUN_00411d0e(void)

{
  FUN_00411d18();
  return;
}


// ---- FUN_00411d18 @ 00411d18

void FUN_00411d18(void)

{
  DAT_00427aec = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_00425c48);
  return;
}


// ---- FUN_00411d2d @ 00411d2d

void FUN_00411d2d(void)

{
  FUN_00411d37();
  return;
}


// ---- FUN_00411d37 @ 00411d37

void FUN_00411d37(void)

{
  DAT_00427ae8 = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_00425c5c);
  return;
}


// ---- FUN_00411d4c @ 00411d4c

void FUN_00411d4c(void)

{
  FUN_00411d56();
  return;
}


// ---- FUN_00411d56 @ 00411d56

void FUN_00411d56(void)

{
  DAT_00427ae4 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_00425c74);
  return;
}


// ---- FUN_00411d6b @ 00411d6b

void FUN_00411d6b(void)

{
  FUN_00411d75();
  return;
}


// ---- FUN_00411d75 @ 00411d75

void FUN_00411d75(void)

{
  DAT_00427ae0 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_00425c88);
  return;
}


// ---- FUN_00411d8a @ 00411d8a

void FUN_00411d8a(void)

{
  FUN_00411d94();
  return;
}


// ---- FUN_00411d94 @ 00411d94

void FUN_00411d94(void)

{
  DAT_00427adc = RegisterWindowMessageA(s_PM_D_GET_LICENCES_00425c9c);
  return;
}


// ---- FUN_00411da9 @ 00411da9

void FUN_00411da9(void)

{
  FUN_00411db3();
  return;
}


// ---- FUN_00411db3 @ 00411db3

void FUN_00411db3(void)

{
  DAT_00427ad8 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_00425cb0);
  return;
}


// ---- FUN_00411dc8 @ 00411dc8

void FUN_00411dc8(void)

{
  FUN_00411dd2();
  return;
}


// ---- FUN_00411dd2 @ 00411dd2

void FUN_00411dd2(void)

{
  DAT_00427ad4 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_00425cc4);
  return;
}


// ---- FUN_00411de7 @ 00411de7

void FUN_00411de7(void)

{
  FUN_00411df1();
  return;
}


// ---- FUN_00411df1 @ 00411df1

void FUN_00411df1(void)

{
  DAT_00427ad0 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_00425cdc);
  return;
}


// ---- FUN_00411e06 @ 00411e06

void FUN_00411e06(void)

{
  FUN_00411e10();
  return;
}


// ---- FUN_00411e10 @ 00411e10

void FUN_00411e10(void)

{
  DAT_00427acc = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_00425cf4);
  return;
}


// ---- FUN_00411e25 @ 00411e25

void FUN_00411e25(void)

{
  FUN_00411e2f();
  return;
}


// ---- FUN_00411e2f @ 00411e2f

void FUN_00411e2f(void)

{
  DAT_00427ac8 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_00425d08);
  return;
}


// ---- FUN_00411e44 @ 00411e44

void FUN_00411e44(void)

{
  FUN_00411e4e();
  return;
}


// ---- FUN_00411e4e @ 00411e4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411e4e(void)

{
  _DAT_00427ac4 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_00425d1c);
  return;
}


// ---- FUN_00411e63 @ 00411e63

void FUN_00411e63(void)

{
  FUN_00411e6d();
  return;
}


// ---- FUN_00411e6d @ 00411e6d

void FUN_00411e6d(void)

{
  DAT_00427ac0 = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_00425d30);
  return;
}


// ---- FUN_00411e82 @ 00411e82

void FUN_00411e82(void)

{
  FUN_00411e8c();
  return;
}


// ---- FUN_00411e8c @ 00411e8c

void FUN_00411e8c(void)

{
  DAT_00427abc = RegisterWindowMessageA(s_PM_GET_HELP_PATH_00425d44);
  return;
}


// ---- FUN_00411ea1 @ 00411ea1

void FUN_00411ea1(void)

{
  FUN_00411eab();
  return;
}


// ---- FUN_00411eab @ 00411eab

void FUN_00411eab(void)

{
  DAT_00427ab8 = RegisterWindowMessageA(s_PM_SAVE_TIFF_00425d58);
  return;
}


// ---- FUN_00411ec0 @ 00411ec0

void FUN_00411ec0(void)

{
  FUN_00411eca();
  return;
}


// ---- FUN_00411eca @ 00411eca

void FUN_00411eca(void)

{
  DAT_00427ab4 = RegisterWindowMessageA(s_PM_LOAD_TIFF_00425d68);
  return;
}


// ---- FUN_00411edf @ 00411edf

void FUN_00411edf(void)

{
  FUN_00411ee9();
  return;
}


// ---- FUN_00411ee9 @ 00411ee9

void FUN_00411ee9(void)

{
  DAT_00427ab0 = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_00425d78);
  return;
}


// ---- FUN_00411efe @ 00411efe

void FUN_00411efe(void)

{
  FUN_00411f08();
  return;
}


// ---- FUN_00411f08 @ 00411f08

void FUN_00411f08(void)

{
  DAT_00427aac = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_00425d88);
  return;
}


// ---- FUN_00411f1d @ 00411f1d

void FUN_00411f1d(void)

{
  FUN_00411f27();
  return;
}


// ---- FUN_00411f27 @ 00411f27

void FUN_00411f27(void)

{
  DAT_00427aa8 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_00425d9c);
  return;
}


// ---- FUN_00411f3c @ 00411f3c

void FUN_00411f3c(void)

{
  FUN_00411f46();
  return;
}


// ---- FUN_00411f46 @ 00411f46

void FUN_00411f46(void)

{
  DAT_00427aa4 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_00425db4);
  return;
}


// ---- FUN_00411f5b @ 00411f5b

void FUN_00411f5b(void)

{
  FUN_00411f65();
  return;
}


// ---- FUN_00411f65 @ 00411f65

void FUN_00411f65(void)

{
  DAT_00427aa0 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_00425dc8);
  return;
}


// ---- FUN_00411f7a @ 00411f7a

void FUN_00411f7a(void)

{
  FUN_00411f84();
  return;
}


// ---- FUN_00411f84 @ 00411f84

void FUN_00411f84(void)

{
  DAT_00427a9c = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_00425ddc);
  return;
}


// ---- FUN_00411f99 @ 00411f99

void FUN_00411f99(void)

{
  FUN_00411fa3();
  return;
}


// ---- FUN_00411fa3 @ 00411fa3

void FUN_00411fa3(void)

{
  DAT_00427a98 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_00425df4);
  return;
}


// ---- FUN_00411fb8 @ 00411fb8

void FUN_00411fb8(void)

{
  FUN_00411fc2();
  return;
}


// ---- FUN_00411fc2 @ 00411fc2

void FUN_00411fc2(void)

{
  DAT_00427a94 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_00425e08);
  return;
}


// ---- FUN_00411fd7 @ 00411fd7

void FUN_00411fd7(void)

{
  FUN_00411fe1();
  return;
}


// ---- FUN_00411fe1 @ 00411fe1

void FUN_00411fe1(void)

{
  DAT_00427a90 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_00425e24);
  return;
}


// ---- FUN_00411ff6 @ 00411ff6

void FUN_00411ff6(void)

{
  FUN_00412000();
  return;
}


// ---- FUN_00412000 @ 00412000

void FUN_00412000(void)

{
  DAT_00427a8c = RegisterWindowMessageA(s_PM_CLIP_COPY_00425e34);
  return;
}


// ---- FUN_00412015 @ 00412015

void FUN_00412015(void)

{
  FUN_0041201f();
  return;
}


// ---- FUN_0041201f @ 0041201f

void FUN_0041201f(void)

{
  DAT_00427a88 = RegisterWindowMessageA(s_PM_CLIP_INFO_00425e44);
  return;
}


// ---- FUN_00412034 @ 00412034

void FUN_00412034(void)

{
  FUN_0041203e();
  return;
}


// ---- FUN_0041203e @ 0041203e

void FUN_0041203e(void)

{
  DAT_00427a84 = RegisterWindowMessageA(s_PM_CLIP_PASTE_00425e54);
  return;
}


// ---- FUN_00412053 @ 00412053

void FUN_00412053(void)

{
  FUN_0041205d();
  return;
}


// ---- FUN_0041205d @ 0041205d

void FUN_0041205d(void)

{
  DAT_00427a80 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_00425e64);
  return;
}


// ---- FUN_00412072 @ 00412072

void FUN_00412072(void)

{
  FUN_0041207c();
  return;
}


// ---- FUN_0041207c @ 0041207c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041207c(void)

{
  _DAT_00427a7c = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_00425e74);
  return;
}


// ---- FUN_00412091 @ 00412091

void FUN_00412091(void)

{
  FUN_0041209b();
  return;
}


// ---- FUN_0041209b @ 0041209b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041209b(void)

{
  _DAT_00427a78 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_00425e88);
  return;
}


// ---- FUN_004120b0 @ 004120b0

void FUN_004120b0(void)

{
  FUN_004120ba();
  return;
}


// ---- FUN_004120ba @ 004120ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004120ba(void)

{
  _DAT_00427a74 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_00425e9c);
  return;
}


// ---- FUN_004120cf @ 004120cf

void FUN_004120cf(void)

{
  FUN_004120d9();
  return;
}


// ---- FUN_004120d9 @ 004120d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004120d9(void)

{
  _DAT_00427a70 = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_00425eb0);
  return;
}


// ---- FUN_004120ee @ 004120ee

void FUN_004120ee(void)

{
  FUN_004120f8();
  return;
}


// ---- FUN_004120f8 @ 004120f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004120f8(void)

{
  _DAT_00427a6c = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_00425ec0);
  return;
}


// ---- FUN_0041210d @ 0041210d

void FUN_0041210d(void)

{
  FUN_00412117();
  return;
}


// ---- FUN_00412117 @ 00412117

void FUN_00412117(void)

{
  DAT_00427a68 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_00425ed8);
  return;
}


// ---- FUN_0041212c @ 0041212c

void FUN_0041212c(void)

{
  FUN_00412136();
  return;
}


// ---- FUN_00412136 @ 00412136

void FUN_00412136(void)

{
  DAT_00427a64 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_00425ef0);
  return;
}


// ---- FUN_0041214b @ 0041214b

void FUN_0041214b(void)

{
  FUN_00412155();
  return;
}


// ---- FUN_00412155 @ 00412155

void FUN_00412155(void)

{
  DAT_00427a60 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_00425f0c);
  return;
}


// ---- FUN_0041216a @ 0041216a

void FUN_0041216a(void)

{
  FUN_00412174();
  return;
}


// ---- FUN_00412174 @ 00412174

void FUN_00412174(void)

{
  DAT_00427a5c = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_00425f28);
  return;
}


// ---- FUN_00412189 @ 00412189

void FUN_00412189(void)

{
  FUN_00412193();
  return;
}


// ---- FUN_00412193 @ 00412193

void FUN_00412193(void)

{
  DAT_00427a58 = RegisterWindowMessageA(s_PM_STAGE_LABEL_00425f40);
  return;
}


// ---- FUN_004121a8 @ 004121a8

void FUN_004121a8(void)

{
  FUN_004121b2();
  return;
}


// ---- FUN_004121b2 @ 004121b2

void FUN_004121b2(void)

{
  DAT_00427a54 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_00425f50);
  return;
}


// ---- FUN_004121c7 @ 004121c7

void FUN_004121c7(void)

{
  FUN_004121d1();
  return;
}


// ---- FUN_004121d1 @ 004121d1

void FUN_004121d1(void)

{
  DAT_00427a50 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_00425f64);
  return;
}


// ---- FUN_004121e6 @ 004121e6

void FUN_004121e6(void)

{
  FUN_004121f0();
  return;
}


// ---- FUN_004121f0 @ 004121f0

void FUN_004121f0(void)

{
  DAT_00427a4c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_00425f80);
  return;
}


// ---- FUN_00412205 @ 00412205

void FUN_00412205(void)

{
  FUN_0041220f();
  return;
}


// ---- FUN_0041220f @ 0041220f

void FUN_0041220f(void)

{
  DAT_00427a48 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_00425f9c);
  return;
}


// ---- FUN_00412224 @ 00412224

void FUN_00412224(void)

{
  FUN_0041222e();
  return;
}


// ---- FUN_0041222e @ 0041222e

void FUN_0041222e(void)

{
  DAT_00427a44 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_00425fb4);
  return;
}


// ---- FUN_00412243 @ 00412243

void FUN_00412243(void)

{
  FUN_0041224d();
  return;
}


// ---- FUN_0041224d @ 0041224d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041224d(void)

{
  _DAT_00427a40 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_00425fcc);
  return;
}


// ---- FUN_00412262 @ 00412262

void FUN_00412262(void)

{
  FUN_0041226c();
  return;
}


// ---- FUN_0041226c @ 0041226c

void FUN_0041226c(void)

{
  DAT_00427a3c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_00425fec);
  return;
}


// ---- FUN_00412281 @ 00412281

void FUN_00412281(void)

{
  FUN_0041228b();
  return;
}


// ---- FUN_0041228b @ 0041228b

void FUN_0041228b(void)

{
  DAT_00427a38 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_00426008);
  return;
}


// ---- FUN_004122a0 @ 004122a0

void FUN_004122a0(void)

{
  FUN_004122aa();
  return;
}


// ---- FUN_004122aa @ 004122aa

void FUN_004122aa(void)

{
  DAT_00427a34 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_00426024);
  return;
}


// ---- FUN_004122bf @ 004122bf

void FUN_004122bf(void)

{
  FUN_004122c9();
  return;
}


// ---- FUN_004122c9 @ 004122c9

void FUN_004122c9(void)

{
  DAT_00427a30 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_00426040);
  return;
}


// ---- FUN_004122de @ 004122de

void FUN_004122de(void)

{
  FUN_004122e8();
  return;
}


// ---- FUN_004122e8 @ 004122e8

void FUN_004122e8(void)

{
  DAT_00427a2c = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_00426058);
  return;
}


// ---- FUN_004122fd @ 004122fd

void FUN_004122fd(void)

{
  FUN_00412307();
  return;
}


// ---- FUN_00412307 @ 00412307

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412307(void)

{
  _DAT_00427a28 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_00426070);
  return;
}


// ---- FUN_0041231c @ 0041231c

void FUN_0041231c(void)

{
  FUN_00412326();
  return;
}


// ---- FUN_00412326 @ 00412326

void FUN_00412326(void)

{
  DAT_00427a24 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_0042608c);
  return;
}


// ---- FUN_0041233b @ 0041233b

void FUN_0041233b(void)

{
  FUN_00412345();
  return;
}


// ---- FUN_00412345 @ 00412345

void FUN_00412345(void)

{
  DAT_00427a20 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_004260ac);
  return;
}


// ---- FUN_0041235a @ 0041235a

void FUN_0041235a(void)

{
  FUN_00412364();
  return;
}


// ---- FUN_00412364 @ 00412364

void FUN_00412364(void)

{
  DAT_00427a1c = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_004260c0);
  return;
}


// ---- FUN_00412379 @ 00412379

void FUN_00412379(void)

{
  FUN_00412383();
  return;
}


// ---- FUN_00412383 @ 00412383

void FUN_00412383(void)

{
  DAT_00427a18 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_004260d8);
  return;
}


// ---- FUN_00412398 @ 00412398

void FUN_00412398(void)

{
  FUN_004123a2();
  return;
}


// ---- FUN_004123a2 @ 004123a2

void FUN_004123a2(void)

{
  DAT_00427a14 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_004260ec);
  return;
}


// ---- FUN_004123b7 @ 004123b7

void FUN_004123b7(void)

{
  FUN_004123c1();
  return;
}


// ---- FUN_004123c1 @ 004123c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004123c1(void)

{
  _DAT_00427a10 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_00426108);
  return;
}


// ---- FUN_004123d6 @ 004123d6

void FUN_004123d6(void)

{
  FUN_004123e0();
  return;
}


// ---- FUN_004123e0 @ 004123e0

void FUN_004123e0(void)

{
  DAT_00427a0c = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_00426118);
  return;
}


// ---- FUN_004123f5 @ 004123f5

void FUN_004123f5(void)

{
  FUN_004123ff();
  return;
}


// ---- FUN_004123ff @ 004123ff

void FUN_004123ff(void)

{
  DAT_00427a08 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_0042612c);
  return;
}


// ---- FUN_00412414 @ 00412414

void FUN_00412414(void)

{
  FUN_0041241e();
  return;
}


// ---- FUN_0041241e @ 0041241e

void FUN_0041241e(void)

{
  DAT_00427a04 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_00426144);
  return;
}


// ---- FUN_00412433 @ 00412433

void FUN_00412433(void)

{
  FUN_0041243d();
  return;
}


// ---- FUN_0041243d @ 0041243d

void FUN_0041243d(void)

{
  DAT_00427a00 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_00426154);
  return;
}


// ---- FUN_00412452 @ 00412452

void FUN_00412452(void)

{
  FUN_0041245c();
  return;
}


// ---- FUN_0041245c @ 0041245c

void FUN_0041245c(void)

{
  DAT_004279fc = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_00426168);
  return;
}


// ---- FUN_00412471 @ 00412471

void FUN_00412471(void)

{
  FUN_0041247b();
  return;
}


// ---- FUN_0041247b @ 0041247b

void FUN_0041247b(void)

{
  DAT_004279f8 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_00426184);
  return;
}


// ---- FUN_00412490 @ 00412490

void FUN_00412490(void)

{
  FUN_0041249a();
  return;
}


// ---- FUN_0041249a @ 0041249a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041249a(void)

{
  _DAT_004279f4 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_004261a0);
  return;
}


// ---- FUN_004124af @ 004124af

void FUN_004124af(void)

{
  FUN_004124b9();
  return;
}


// ---- FUN_004124b9 @ 004124b9

void FUN_004124b9(void)

{
  DAT_004279f0 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_004261b4);
  return;
}


// ---- FUN_004124ce @ 004124ce

void FUN_004124ce(void)

{
  FUN_004124d8();
  return;
}


// ---- FUN_004124d8 @ 004124d8

void FUN_004124d8(void)

{
  DAT_004279ec = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_004261d4);
  return;
}


// ---- FUN_004124ed @ 004124ed

void FUN_004124ed(void)

{
  FUN_004124f7();
  return;
}


// ---- FUN_004124f7 @ 004124f7

void FUN_004124f7(void)

{
  DAT_004279e8 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_004261f8);
  return;
}


// ---- FUN_0041250c @ 0041250c

void FUN_0041250c(void)

{
  FUN_00412516();
  return;
}


// ---- FUN_00412516 @ 00412516

void FUN_00412516(void)

{
  DAT_004279e4 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_00426218);
  return;
}


// ---- FUN_0041252b @ 0041252b

void FUN_0041252b(void)

{
  FUN_00412535();
  return;
}


// ---- FUN_00412535 @ 00412535

void FUN_00412535(void)

{
  DAT_004279e0 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_00426238);
  return;
}


// ---- FUN_0041254a @ 0041254a

void FUN_0041254a(void)

{
  FUN_00412554();
  return;
}


// ---- FUN_00412554 @ 00412554

void FUN_00412554(void)

{
  DAT_004279dc = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_00426258);
  return;
}


// ---- FUN_00412569 @ 00412569

void FUN_00412569(void)

{
  FUN_00412573();
  return;
}


// ---- FUN_00412573 @ 00412573

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412573(void)

{
  _DAT_004279d8 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_00426278);
  return;
}


// ---- FUN_00412588 @ 00412588

void FUN_00412588(void)

{
  FUN_00412592();
  return;
}


// ---- FUN_00412592 @ 00412592

void FUN_00412592(void)

{
  DAT_004279d4 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_00426298);
  return;
}


// ---- FUN_004125a7 @ 004125a7

void FUN_004125a7(void)

{
  FUN_004125b1();
  return;
}


// ---- FUN_004125b1 @ 004125b1

void FUN_004125b1(void)

{
  DAT_004279d0 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_004262b0);
  return;
}


// ---- FUN_004125c6 @ 004125c6

void FUN_004125c6(void)

{
  FUN_004125d0();
  return;
}


// ---- FUN_004125d0 @ 004125d0

void FUN_004125d0(void)

{
  DAT_004279cc = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_004262cc);
  return;
}


// ---- FUN_004125e5 @ 004125e5

void FUN_004125e5(void)

{
  FUN_004125ef();
  return;
}


// ---- FUN_004125ef @ 004125ef

void FUN_004125ef(void)

{
  DAT_004279c8 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_004262e8);
  return;
}


// ---- FUN_00412604 @ 00412604

void FUN_00412604(void)

{
  FUN_0041260e();
  return;
}


// ---- FUN_0041260e @ 0041260e

void FUN_0041260e(void)

{
  DAT_004279c4 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_004262fc);
  return;
}


// ---- FUN_00412623 @ 00412623

void FUN_00412623(void)

{
  FUN_0041262d();
  return;
}


// ---- FUN_0041262d @ 0041262d

void FUN_0041262d(void)

{
  DAT_004279c0 = RegisterWindowMessageA(s_PM_READ_USER_AREA_00426310);
  return;
}


// ---- FUN_00412642 @ 00412642

void FUN_00412642(void)

{
  FUN_0041264c();
  return;
}


// ---- FUN_0041264c @ 0041264c

void FUN_0041264c(void)

{
  DAT_004279bc = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_00426324);
  return;
}


// ---- FUN_00412661 @ 00412661

void FUN_00412661(void)

{
  FUN_0041266b();
  return;
}


// ---- FUN_0041266b @ 0041266b

void FUN_0041266b(void)

{
  DAT_004279b8 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_00426338);
  return;
}


// ---- FUN_00412680 @ 00412680

void FUN_00412680(void)

{
  FUN_0041268a();
  return;
}


// ---- FUN_0041268a @ 0041268a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041268a(void)

{
  _DAT_004279b4 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_0042634c);
  return;
}


// ---- FUN_0041269f @ 0041269f

void FUN_0041269f(void)

{
  FUN_004126a9();
  return;
}


// ---- FUN_004126a9 @ 004126a9

void FUN_004126a9(void)

{
  DAT_004279b0 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_00426360);
  return;
}


// ---- FUN_004126be @ 004126be

void FUN_004126be(void)

{
  FUN_004126c8();
  return;
}


// ---- FUN_004126c8 @ 004126c8

void FUN_004126c8(void)

{
  DAT_004279ac = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_00426378);
  return;
}


// ---- FUN_004126dd @ 004126dd

void FUN_004126dd(void)

{
  FUN_004126e7();
  return;
}


// ---- FUN_004126e7 @ 004126e7

void FUN_004126e7(void)

{
  DAT_004279a8 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_00426390);
  return;
}


// ---- FUN_004126fc @ 004126fc

void FUN_004126fc(void)

{
  FUN_00412706();
  return;
}


// ---- FUN_00412706 @ 00412706

void FUN_00412706(void)

{
  DAT_004279a4 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_004263a4);
  return;
}


// ---- FUN_0041271b @ 0041271b

void FUN_0041271b(void)

{
  FUN_00412725();
  return;
}


// ---- FUN_00412725 @ 00412725

void FUN_00412725(void)

{
  DAT_004279a0 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_004263b8);
  return;
}


// ---- FUN_0041273a @ 0041273a

void FUN_0041273a(void)

{
  FUN_00412744();
  return;
}


// ---- FUN_00412744 @ 00412744

void FUN_00412744(void)

{
  DAT_0042799c = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_004263cc);
  return;
}


// ---- CreateObject @ 00412759

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<struct
   _AFX_PROPPAGEFONTINFO>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_CHECKLIST_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_COLOR_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_DEBUG_STATE>::CreateObject(void)
     10 names - too many to list
   
   Library: Visual Studio 2003 Debug */

undefined4 * CreateObject(void)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004191ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00404e50(0x20);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_004127d7(puVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_004127bd @ 004127bd

undefined * FUN_004127bd(void)

{
  return classCObject_exref;
}


// ---- FUN_004127c7 @ 004127c7

undefined ** FUN_004127c7(void)

{
  return &PTR_s_CServerComms_0041b0b8;
}


// ---- FUN_004127d7 @ 004127d7

undefined4 * __fastcall FUN_004127d7(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004191cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00402800(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_0041b0d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00417616((int)param_1);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00412867 @ 00412867

undefined4 * __thiscall FUN_00412867(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004191e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00402800(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_0041b0d0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_00417616((int)this);
  ExceptionList = local_10;
  return this;
}


// ---- FUN_004128f7 @ 004128f7

void __fastcall FUN_004128f7(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0041b0d0;
  FUN_00402850(param_1);
  return;
}


// ---- FUN_00412913 @ 00412913

void __thiscall FUN_00412913(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return;
}


// ---- FUN_00412932 @ 00412932

undefined4 __fastcall FUN_00412932(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32_004263f0);
  *(HWND *)(param_1 + 4) = pHVar1;
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__E__004263fc);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__W__0042640c);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__EW__0042641c);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar2 = FUN_004129c3(param_1), iVar2 != 0)) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


// ---- FUN_004129c3 @ 004129c3

undefined4 __fastcall FUN_004129c3(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c70,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_004129f7 @ 004129f7

undefined4 __fastcall FUN_004129f7(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c4c,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_00412a2b @ 00412a2b

undefined4 __fastcall FUN_00412a2b(int param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)(param_1 + 4),DAT_00427c50,*(WPARAM *)(param_1 + 8),0);
  *(BOOL *)(param_1 + 0xc) = BVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_00412a5f @ 00412a5f

undefined4 __fastcall FUN_00412a5f(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c08,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_00412a93 @ 00412a93

undefined4 __fastcall FUN_00412a93(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c58,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_00412ac7 @ 00412ac7

undefined4 __thiscall FUN_00412ac7(void *this,WPARAM param_1,char *param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_00415e50(local_170,param_2);
  local_10 = DAT_00427c68;
  local_c = 0x15e;
  local_8 = local_170;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = FUN_00412932((int)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,param_1,(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar2;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00412b57 @ 00412b57

undefined4 __thiscall
FUN_00412b57(void *this,WPARAM param_1,char *param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  LRESULT LVar2;
  char local_42c [350];
  char local_2ce [350];
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_00415e50(local_42c,param_2);
  FUN_00415e50(local_2ce,param_3);
  FUN_00415e50(local_170,param_4);
  local_10 = DAT_00427c60;
  local_c = 0x41a;
  local_8 = local_42c;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = FUN_00412932((int)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,param_1,(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar2;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00412c12 @ 00412c12

undefined4 __thiscall FUN_00412c12(void *this,WPARAM param_1,char *param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_00415e50(local_170,param_2);
  local_10 = DAT_00427c64;
  local_c = 0x15e;
  local_8 = local_170;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = FUN_00412932((int)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,param_1,(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar2;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00412ca2 @ 00412ca2

undefined4 __thiscall FUN_00412ca2(void *this,CString *param_1)

{
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_00427c48;
  local_c = 0x15e;
  local_8 = local_170;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_170);
  return 1;
}


// ---- FUN_00412d08 @ 00412d08

void __fastcall FUN_00412d08(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c78,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00412d30 @ 00412d30

void __fastcall FUN_00412d30(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c14,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00412d58 @ 00412d58

void __fastcall FUN_00412d58(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c10,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00412d80 @ 00412d80

void __thiscall FUN_00412d80(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427c0c,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00412dab @ 00412dab

void __thiscall FUN_00412dab(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427a20,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00412dd6 @ 00412dd6

undefined4 __thiscall FUN_00412dd6(void *this,CString *param_1,CString *param_2,CString *param_3)

{
  char local_42c [350];
  char local_2ce [350];
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_00427c44;
  local_c = 0x41a;
  local_8 = local_42c;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_42c);
  CString::operator=(param_2,local_2ce);
  CString::operator=(param_3,local_170);
  return 1;
}


// ---- FUN_00412e5a @ 00412e5a

undefined4 __thiscall FUN_00412e5a(void *this,int param_1)

{
  bool bVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004191f3;
  local_10 = ExceptionList;
  local_20 = DAT_00427b58;
  local_1c = 0xc54;
  local_18 = param_1;
  ExceptionList = &local_10;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_20);
  CString::CString(local_14,(char *)(param_1 + 0x834));
  local_8 = 0;
  bVar1 = FUN_0040f130(local_14,(uchar *)s_French_0042642c);
  if (bVar1) {
    *(undefined4 *)((int)this + 0x10) = 0x40c;
  }
  else {
    bVar1 = FUN_0040f130(local_14,(uchar *)s_German_00426434);
    if (bVar1) {
      *(undefined4 *)((int)this + 0x10) = 0x407;
    }
    else {
      *(undefined4 *)((int)this + 0x10) = 0x809;
    }
  }
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return 1;
}


// ---- FUN_00412f3b @ 00412f3b

undefined4 __fastcall FUN_00412f3b(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ---- FUN_00412f4c @ 00412f4c

CString * __thiscall FUN_00412f4c(void *this,CString *param_1,uint param_2)

{
  ushort uVar1;
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
  puStack_c = &LAB_00419220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,s_________0042643c);
  local_8 = 1;
  local_18 = (HMODULE)FUN_00404f10();
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
      FreeResource(local_38);
    }
    CString::CString(param_1,local_14);
    local_8 = local_8 & 0xffffff00;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00413159 @ 00413159

void __fastcall FUN_00413159(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427b68,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00413181 @ 00413181

void __fastcall FUN_00413181(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_004279fc,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_004131a9 @ 004131a9

void __fastcall FUN_004131a9(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_004279f8,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_004131d1 @ 004131d1

int __thiscall FUN_004131d1(void *this,undefined4 param_1,void *param_2)

{
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 auStack_d0 [50];
  int local_8;
  
  local_d4 = param_1;
  local_e8 = DAT_00427c40;
  local_e4 = 0xcc;
  local_e0 = &local_d4;
  local_8 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_e8);
  for (local_d8 = 0; local_d8 < local_8; local_d8 = local_d8 + 1) {
    local_dc = auStack_d0[local_d8];
    Add(param_2,local_dc);
  }
  return local_8;
}


// ---- FUN_00413289 @ 00413289

int __thiscall FUN_00413289(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_ec;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 auStack_d8 [50];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_dc = param_1;
  local_10 = DAT_00427c40;
  local_c = 0xcc;
  local_8 = &local_dc;
  local_ec = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  local_e0 = local_ec;
  if (local_ec != 0) {
    if (param_3 < local_ec) {
      local_ec = param_3;
    }
    local_e0 = local_ec;
    for (local_e4 = 0; local_e4 < local_ec; local_e4 = local_e4 + 1) {
      *param_2 = auStack_d8[local_e4];
      param_2 = param_2 + 1;
    }
  }
  return local_e0;
}


// ---- FUN_0041336e @ 0041336e

undefined4 __thiscall FUN_0041336e(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_174 = param_1;
  local_10 = DAT_00427c3c;
  local_c = 0x164;
  local_8 = &local_174;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_170);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004133f7 @ 004133f7

CString * __thiscall FUN_004133f7(void *this,CString *param_1,undefined4 param_2)

{
  CString local_184 [4];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_184,&DAT_00427d78);
  local_8 = 1;
  local_174 = param_2;
  local_180 = DAT_00427c3c;
  local_17c = 0x164;
  local_178 = &local_174;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_180);
  CString::operator=(local_184,local_170);
  CString::CString(param_1,local_184);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_184);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_004134e1 @ 004134e1

CString * __thiscall FUN_004134e1(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  CString local_178 [4];
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_178);
  local_8 = 1;
  local_174 = param_2;
  local_184 = DAT_00427be4;
  local_180 = 0x164;
  local_17c = &local_174;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_178,local_170);
  CString::CString(param_1,local_178);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_178);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_004135c6 @ 004135c6

undefined4 __thiscall FUN_004135c6(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_168 = param_1;
  local_174 = DAT_00427c38;
  local_170 = 0x164;
  local_16c = &local_168;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_0041365b @ 0041365b

CString * __thiscall FUN_0041365b(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  char local_174 [352];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004192ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,&DAT_00427d7c);
  local_8 = 1;
  local_178 = param_2;
  local_184 = DAT_00427c38;
  local_180 = 0x164;
  local_17c = &local_178;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_14,local_174);
  CString::CString(param_1,local_14);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00413739 @ 00413739

undefined4 __thiscall FUN_00413739(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_174 = param_1;
  local_10 = DAT_00427c34;
  local_c = 0x164;
  local_8 = &local_174;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_170);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004137c2 @ 004137c2

CString * __thiscall FUN_004137c2(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  CString local_178 [4];
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004192dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_178);
  local_8 = 1;
  local_174 = param_2;
  local_184 = DAT_00427c34;
  local_180 = 0x164;
  local_17c = &local_174;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_178,local_170);
  CString::CString(param_1,local_178);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_178);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_004138a7 @ 004138a7

float10 __thiscall FUN_004138a7(void *param_1,undefined4 param_2)

{
  int iVar1;
  CString local_18 [4];
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004192f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  iVar1 = FUN_00413934(param_1,param_2,&local_14,local_18);
  if (iVar1 == 1) {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    local_14 = 0.0;
  }
  ExceptionList = local_10;
  return (float10)local_14;
}


// ---- FUN_00413934 @ 00413934

undefined4 __thiscall
FUN_00413934(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

{
  undefined4 uVar1;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_16c = param_1;
  local_178 = DAT_00427c30;
  local_174 = 0x168;
  local_170 = &local_16c;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_178);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_2 = local_168;
    CString::operator=(param_3,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004139d4 @ 004139d4

undefined4 __thiscall FUN_004139d4(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419303;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::Empty(local_14);
  uVar1 = FUN_00413934(this,param_1,param_2,local_14);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_00413a42 @ 00413a42

undefined4 __thiscall
FUN_00413a42(void *this,undefined4 param_1,undefined4 param_2,CString *param_3)

{
  undefined4 uVar1;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_16c = param_1;
  local_168 = param_2;
  local_178 = DAT_00427c20;
  local_174 = 0x168;
  local_170 = &local_16c;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_178);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_3,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00413ae0 @ 00413ae0

CString * __thiscall FUN_00413ae0(void *this,CString *param_1,undefined4 param_2,undefined4 param_3)

{
  CString local_188 [4];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419333;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_188,&DAT_00427d80);
  local_8 = 1;
  local_178 = param_2;
  local_174 = param_3;
  local_184 = DAT_00427c20;
  local_180 = 0x168;
  local_17c = &local_178;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_188,local_170);
  CString::CString(param_1,local_188);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_188);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00413bd3 @ 00413bd3

CString * __thiscall FUN_00413bd3(void *this,CString *param_1,undefined4 param_2,int param_3)

{
  CString local_188 [4];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  float local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419363;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_188,&DAT_00427d84);
  local_8 = 1;
  local_178 = param_2;
  local_174 = (float)param_3;
  local_184 = DAT_00427c1c;
  local_180 = 0x168;
  local_17c = &local_178;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_188,local_170);
  CString::CString(param_1,local_188);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_188);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00413cc6 @ 00413cc6

undefined4 __thiscall FUN_00413cc6(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_168 = param_1;
  local_174 = DAT_00427c18;
  local_170 = 0x164;
  local_16c = &local_168;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00413d5b @ 00413d5b

CString * __thiscall FUN_00413d5b(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  CString local_178 [4];
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00419393;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_178);
  local_8 = 1;
  local_174 = param_2;
  local_184 = DAT_00427c18;
  local_180 = 0x164;
  local_17c = &local_174;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_178,local_170);
  CString::CString(param_1,local_178);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_178);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_00413e40 @ 00413e40

int __thiscall FUN_00413e40(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_ec;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 auStack_d8 [50];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_dc = param_1;
  local_10 = DAT_00427c00;
  local_c = 0xcc;
  local_8 = &local_dc;
  local_ec = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  local_e0 = local_ec;
  if (local_ec != 0) {
    if (param_3 < local_ec) {
      local_ec = param_3;
    }
    local_e0 = local_ec;
    for (local_e4 = 0; local_e4 < local_ec; local_e4 = local_e4 + 1) {
      *param_2 = auStack_d8[local_e4];
      param_2 = param_2 + 1;
    }
  }
  return local_e0;
}


// ---- FUN_00413f25 @ 00413f25

void __thiscall FUN_00413f25(void *this,undefined4 param_1)

{
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 *local_d4;
  undefined4 local_d0 [51];
  
  local_d0[0] = param_1;
  local_dc = DAT_00427c00;
  local_d8 = 0xcc;
  local_d4 = local_d0;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_dc);
  return;
}


// ---- FUN_00413f88 @ 00413f88

float10 __thiscall FUN_00413f88(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_00427be0;
  local_18 = 8;
  local_14 = &local_c;
  fVar1 = (float)SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c
                             );
  return (float10)fVar1;
}


// ---- FUN_00413fd9 @ 00413fd9

float10 __thiscall FUN_00413fd9(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_00427bdc;
  local_18 = 8;
  local_14 = &local_c;
  fVar1 = (float)SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c
                             );
  return (float10)fVar1;
}


// ---- FUN_0041402a @ 0041402a

undefined4 __thiscall
FUN_0041402a(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = param_1;
  local_10 = DAT_00427bfc;
  local_c = 0xc;
  local_8 = &local_1c;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_2 = local_18;
    *param_3 = local_14;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414096 @ 00414096

bool __thiscall FUN_00414096(void *this,LPARAM param_1)

{
  int iVar1;
  
  iVar1 = FUN_004140bd(this,param_1);
  return iVar1 == 1;
}


// ---- FUN_004140bd @ 004140bd

undefined4 __thiscall FUN_004140bd(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427bf8,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004140f4 @ 004140f4

int __thiscall FUN_004140f4(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_e34;
  int local_e2c;
  int local_e28;
  undefined4 local_e24;
  undefined4 auStack_e20 [900];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_e24 = param_1;
  local_10 = DAT_00427bf4;
  local_c = 0xe14;
  local_8 = &local_e24;
  local_e34 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  local_e28 = local_e34;
  if (local_e34 != 0) {
    if (param_3 < local_e34) {
      local_e34 = param_3;
    }
    local_e28 = local_e34;
    for (local_e2c = 0; local_e2c < local_e34; local_e2c = local_e2c + 1) {
      *param_2 = auStack_e20[local_e2c];
      param_2 = param_2 + 1;
    }
  }
  return local_e28;
}


// ---- FUN_004141d9 @ 004141d9

int __thiscall FUN_004141d9(void *this,undefined4 param_1,void *param_2)

{
  undefined4 local_e30;
  undefined4 local_e2c;
  undefined4 *local_e28;
  undefined4 local_e24;
  int local_e20;
  undefined4 local_e1c;
  undefined4 auStack_e18 [900];
  int local_8;
  
  local_e1c = param_1;
  local_e30 = DAT_00427bf4;
  local_e2c = 0xe14;
  local_e28 = &local_e1c;
  local_8 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_e30);
  for (local_e20 = 0; local_e20 < local_8; local_e20 = local_e20 + 1) {
    local_e24 = auStack_e18[local_e20];
    Add(param_2,local_e24);
  }
  return local_8;
}


// ---- FUN_00414291 @ 00414291

undefined4 __thiscall FUN_00414291(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427bf0,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004142c8 @ 004142c8

undefined4 __thiscall
FUN_004142c8(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,CString *param_4,
            CString *param_5)

{
  undefined4 uVar1;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  char local_2cc [350];
  char local_16e [350];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_2d8 = param_1;
  local_10 = DAT_00427bec;
  local_c = 0x2c8;
  local_8 = &local_2d8;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_2 = local_2d4;
    *param_3 = local_2d0;
    CString::operator=(param_4,local_2cc);
    CString::operator=(param_5,local_16e);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414376 @ 00414376

undefined4 __thiscall
FUN_00414376(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004193af;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::CString(local_18);
  local_8._0_1_ = 1;
  CString::Empty(local_14);
  CString::Empty(local_18);
  uVar1 = FUN_004142c8(this,param_1,param_2,param_3,local_14,local_18);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_0041440c @ 0041440c

void __thiscall FUN_0041440c(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_8 = param_2;
  local_18 = DAT_00427c2c;
  local_14 = 8;
  local_10 = &local_c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  return;
}


// ---- FUN_00414457 @ 00414457

undefined4 __thiscall
FUN_00414457(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = DAT_00427c24;
  local_28 = 0x18;
  local_24 = &local_20;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_2c);
  *param_1 = local_20;
  *param_2 = local_1c;
  *param_3 = local_18;
  return uVar1;
}


// ---- FUN_004144b5 @ 004144b5

undefined4 * __thiscall FUN_004144b5(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20 [6];
  undefined4 local_8;
  
  local_2c = DAT_00427c24;
  local_28 = 0x18;
  local_24 = local_20;
  local_8 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_2c);
  puVar2 = local_20;
  puVar3 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


// ---- FUN_0041450c @ 0041450c

void __thiscall FUN_0041450c(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427c28;
  local_c = 0x18;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_0041454a @ 0041454a

undefined4 __thiscall
FUN_0041454a(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_1c = DAT_00427be8;
  local_18 = 0xc;
  local_14 = &local_10;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004145a6 @ 004145a6

undefined4 __thiscall
FUN_004145a6(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 *local_110;
  undefined1 local_10c [16];
  undefined4 local_fc;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_cc;
  
  local_118 = DAT_00427ae4;
  local_114 = 0x104;
  local_110 = local_10c;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_118);
  *param_1 = local_ec;
  *param_2 = local_e8;
  *param_3 = local_e4;
  *param_4 = local_e0;
  *param_5 = local_cc;
  *param_6 = local_fc;
  return uVar1;
}


// ---- FUN_0041464c @ 0041464c

undefined4 __thiscall FUN_0041464c(void *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004193c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::Empty(local_14);
  pcVar1 = (char *)FUN_004072e0((undefined4 *)local_14);
  uVar2 = FUN_004146bf(this,param_1,param_2,pcVar1);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_004146bf @ 004146bf

undefined4 __thiscall FUN_004146bf(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  LRESULT LVar3;
  undefined4 local_188;
  undefined4 local_184;
  char local_180 [352];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004193d5;
  local_10 = ExceptionList;
  local_188 = param_1;
  local_184 = param_2;
  ExceptionList = &local_10;
  CString::CString(local_14,param_3);
  local_8 = 0;
  bVar2 = FUN_00410930((int *)local_14);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_00415e50(local_180,param_3);
  }
  else {
    local_180[0] = '\0';
  }
  local_20 = DAT_00427bd8;
  local_1c = 0x168;
  local_18 = &local_188;
  LVar3 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_20);
  *(LRESULT *)((int)this + 0xc) = LVar3;
  uVar1 = *(undefined4 *)((int)this + 0xc);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_004147a9 @ 004147a9

undefined4 __thiscall FUN_004147a9(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427bd4,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004147e0 @ 004147e0

void __fastcall FUN_004147e0(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427bd0,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00414808 @ 00414808

undefined4 __thiscall
FUN_00414808(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_1c = DAT_00427bcc;
  local_18 = 0xc;
  local_14 = &local_10;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414864 @ 00414864

undefined4 __thiscall FUN_00414864(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427bc8,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_0041489b @ 0041489b

undefined4 __thiscall FUN_0041489b(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_8 = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  local_18 = DAT_00427bc4;
  local_14 = 8;
  local_10 = &local_c;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004148fb @ 004148fb

undefined4 __thiscall FUN_004148fb(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_8 = param_2;
  *(undefined4 *)((int)this + 0x18) = 1;
  local_18 = DAT_00427bc0;
  local_14 = 8;
  local_10 = &local_c;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_0041495b @ 0041495b

undefined4 __thiscall FUN_0041495b(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = DAT_00427bbc;
  local_c = 8;
  local_8 = &local_18;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004149b2 @ 004149b2

void __thiscall FUN_004149b2(void *this,int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  if (((param_1 != 1) || (*(int *)((int)this + 0x14) == 1)) &&
     ((param_1 != 2 || (*(int *)((int)this + 0x18) == 1)))) {
    local_c = param_1;
    local_8 = *(undefined4 *)((int)this + 8);
    local_18 = DAT_00427bbc;
    local_14 = 8;
    local_10 = &local_c;
    SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  }
  return;
}


// ---- FUN_00414a22 @ 00414a22

undefined4 __thiscall FUN_00414a22(void *this,LPARAM param_1,LPARAM param_2)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_00427c74,0,param_1);
  PostMessageA(*(HWND *)((int)this + 4),DAT_00427c74,1,param_2);
  return 1;
}


// ---- FUN_00414a68 @ 00414a68

void __thiscall FUN_00414a68(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427c54,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00414a93 @ 00414a93

undefined4 __thiscall FUN_00414a93(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427bb8,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414aca @ 00414aca

undefined4 __thiscall FUN_00414aca(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427bac,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414b01 @ 00414b01

undefined4 __thiscall FUN_00414b01(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427ba8,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414b38 @ 00414b38

undefined4 __thiscall FUN_00414b38(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427ba0,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414b6f @ 00414b6f

void __thiscall FUN_00414b6f(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427bb4,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00414b9a @ 00414b9a

void __thiscall FUN_00414b9a(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427bb0,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00414bc5 @ 00414bc5

void __thiscall FUN_00414bc5(void *this,int param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427bb4,*(WPARAM *)((int)this + 8),param_1 + 1);
  return;
}


// ---- FUN_00414bf3 @ 00414bf3

undefined4 __thiscall FUN_00414bf3(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427ba4,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414c2a @ 00414c2a

void __fastcall FUN_00414c2a(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427b98,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00414c52 @ 00414c52

void __fastcall FUN_00414c52(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427b94,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00414c7a @ 00414c7a

void __thiscall FUN_00414c7a(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427b84,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00414ca5 @ 00414ca5

undefined4 __thiscall
FUN_00414ca5(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = param_1;
  local_10 = DAT_00427b9c;
  local_c = 0xc;
  local_8 = &local_1c;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  *param_2 = local_18;
  *param_3 = local_14;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414d08 @ 00414d08

undefined4 __thiscall FUN_00414d08(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_00427b8c,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414d3f @ 00414d3f

undefined4 __thiscall FUN_00414d3f(void *this,undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  char *local_16c;
  char local_168 [352];
  undefined4 local_8;
  
  FUN_00415e50(local_168,param_2);
  local_174 = DAT_00427b80;
  local_170 = 0x164;
  local_16c = local_168;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_1 = local_8;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414dda @ 00414dda

undefined4 __thiscall FUN_00414dda(void *this,char *param_1)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  char *local_16c;
  char local_168 [352];
  undefined4 local_8;
  
  FUN_00415e50(local_168,param_1);
  local_174 = DAT_00427b80;
  local_170 = 0x164;
  local_16c = local_168;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) != 1) {
    local_8 = 0;
  }
  return local_8;
}


// ---- FUN_00414e6b @ 00414e6b

undefined4 __thiscall FUN_00414e6b(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_00427b7c,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414ea2 @ 00414ea2

undefined4 __thiscall FUN_00414ea2(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = DAT_00427b78;
  local_c = 8;
  local_8 = &local_18;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414ef9 @ 00414ef9

undefined4 __thiscall FUN_00414ef9(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427b74,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414f30 @ 00414f30

undefined4 __thiscall
FUN_00414f30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LRESULT LVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = DAT_00427b70;
  local_c = 0x10;
  local_8 = &local_20;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414f93 @ 00414f93

undefined4 __thiscall FUN_00414f93(void *this,undefined4 param_1)

{
  LRESULT LVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ae8;
  local_c = 0x104;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00414fdd @ 00414fdd

undefined4 __thiscall FUN_00414fdd(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ae4;
  local_c = 0x104;
  local_8 = param_1;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415029 @ 00415029

undefined4 __thiscall FUN_00415029(void *this,undefined4 param_1)

{
  LRESULT LVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ae0;
  local_c = 0x104;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415073 @ 00415073

undefined4 __thiscall FUN_00415073(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427adc;
  local_c = 0x100;
  local_8 = param_1;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004150bf @ 004150bf

undefined4 __thiscall FUN_004150bf(void *this,undefined4 param_1)

{
  LRESULT LVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ad8;
  local_c = 0x100;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415109 @ 00415109

undefined4 __thiscall FUN_00415109(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b6c;
  local_c = 70000;
  local_8 = param_1;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415155 @ 00415155

CString * FUN_00415155(void *param_1)

{
  CString *pCVar1;
  void *this;
  CString aCStackY_11198 [4];
  int iStackY_11194;
  char acStackY_11190 [70000];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004193eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00418940();
  CString::CString(aCStackY_11198);
  local_8 = 0;
  pCVar1 = (CString *)
           FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),
                        (undefined4 *)&stack0xffffffe0);
  for (iStackY_11194 = 0; iStackY_11194 < (int)pCVar1; iStackY_11194 = iStackY_11194 + 1) {
    FUN_00418000(aCStackY_11198,acStackY_11190 + iStackY_11194 * 0x15e);
    pCVar1 = aCStackY_11198;
    Add(param_1,pCVar1);
  }
  local_8 = 0xffffffff;
  CString::~CString(aCStackY_11198);
  ExceptionList = local_10;
  return pCVar1;
}


// ---- FUN_0041525d @ 0041525d

LRESULT __thiscall FUN_0041525d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  LRESULT LVar2;
  CString local_184 [4];
  char local_180 [352];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0041940a;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CString::CString(local_184);
  local_8._0_1_ = 1;
  pcVar1 = (char *)FUN_004072e0(&param_2);
  FUN_00415e50(local_180,pcVar1);
  local_20 = param_3;
  local_1c = param_1;
  local_18 = 0x164;
  local_14 = local_180;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_184);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00415328 @ 00415328

undefined4 __thiscall FUN_00415328(void *this,char *param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char local_174 [352];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_00415e50(local_174,param_1);
  local_14 = param_2;
  local_10 = DAT_00427ca8;
  local_c = 0x164;
  local_8 = local_174;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004153a3 @ 004153a3

undefined4 __thiscall FUN_004153a3(void *this,char *param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char local_174 [352];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_00415e50(local_174,param_1);
  local_14 = param_2;
  local_10 = DAT_00427ca4;
  local_c = 0x164;
  local_8 = local_174;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_0041541e @ 0041541e

undefined4 __thiscall FUN_0041541e(void *this,char *param_1)

{
  LRESULT LVar1;
  char local_174 [356];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_00415e50(local_174,param_1);
  local_10 = DAT_00427cac;
  local_c = 0x164;
  local_8 = local_174;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415494 @ 00415494

void __fastcall FUN_00415494(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_00427c94,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_004154bc @ 004154bc

void __fastcall FUN_004154bc(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c90,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_004154e4 @ 004154e4

void __fastcall FUN_004154e4(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c80,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_0041550c @ 0041550c

void __fastcall FUN_0041550c(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c84,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00415534 @ 00415534

undefined4 __thiscall FUN_00415534(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ad4;
  local_c = 0x618;
  local_8 = param_1;
  if (param_2 < 0x618) {
    uVar1 = 0xffffffee;
  }
  else {
    uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
    *(undefined4 *)((int)this + 0xc) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0xc);
  }
  return uVar1;
}


// ---- FUN_0041558f @ 0041558f

undefined4 __thiscall FUN_0041558f(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ad0;
  local_c = 0x618;
  local_8 = param_1;
  if (param_2 < 0x618) {
    uVar1 = 0xffffffee;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10)
    ;
    *(LRESULT *)((int)this + 0xc) = LVar2;
    uVar1 = *(undefined4 *)((int)this + 0xc);
  }
  return uVar1;
}


// ---- FUN_004155e8 @ 004155e8

undefined4 __thiscall FUN_004155e8(void *this,short param_1,short param_2)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_00427acc,*(WPARAM *)((int)this + 8),
                       param_1 * 0x10000 + (int)param_2);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415637 @ 00415637

undefined4 __thiscall FUN_00415637(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b50;
  local_c = 0x84;
  local_8 = param_1;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00415683 @ 00415683

void __thiscall FUN_00415683(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b54;
  local_c = 0x84;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_004156c3 @ 004156c3

undefined4 __thiscall
FUN_004156c3(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = param_1;
  local_18 = param_2;
  local_10 = DAT_00427ac0;
  local_c = 0xc;
  local_8 = &local_1c;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *param_3 = local_14;
  return 1;
}


// ---- FUN_0041571d @ 0041571d

undefined4 __thiscall FUN_0041571d(void *this,CString *param_1)

{
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_00427abc;
  local_c = 0x15e;
  local_8 = local_170;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_170);
  return 1;
}


// ---- FUN_00415783 @ 00415783

undefined4 __thiscall FUN_00415783(void *this,CString *param_1)

{
  undefined1 local_c58 [2100];
  char local_424 [1056];
  
  FUN_00412e5a(this,(int)local_c58);
  CString::operator=(param_1,local_424);
  return 1;
}


// ---- FUN_004157be @ 004157be

undefined4 __thiscall FUN_004157be(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a90;
  local_c = 0x2e4;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_00415801 @ 00415801

void __thiscall FUN_00415801(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ab8;
  local_c = 0x5bc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_0041583f @ 0041583f

void __thiscall FUN_0041583f(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427ab4;
  local_c = 0x5bc;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_0041587f @ 0041587f

LRESULT __thiscall FUN_0041587f(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  LRESULT LVar2;
  undefined1 local_5d8 [16];
  undefined4 local_5c8;
  undefined4 local_5b0;
  char local_59c [700];
  char local_2e0 [708];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00419426;
  local_10 = ExceptionList;
  local_8 = 1;
  local_5c8 = param_3;
  local_5b0 = 0;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0(&param_1);
  FUN_00415e50(local_59c,pcVar1);
  pcVar1 = (char *)FUN_004072e0(&param_2);
  FUN_00415e50(local_2e0,pcVar1);
  local_1c = DAT_00427ab0;
  local_18 = 0x5bc;
  local_14 = local_5d8;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = local_8 & 0xffffff00;
  CString::~CString((CString *)&param_1);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00415962 @ 00415962

LRESULT __thiscall
FUN_00415962(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  LRESULT LVar2;
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
  
  puStack_c = &LAB_00419439;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  local_194 = param_5;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000018);
  FUN_00415e50(local_17c,pcVar1);
  local_1c = DAT_00427aac;
  local_18 = 0x178;
  local_14 = &local_194;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000018);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00415a38 @ 00415a38

LRESULT __thiscall
FUN_00415a38(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  LRESULT LVar2;
  undefined1 local_194 [4];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041944c;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000014);
  FUN_00415e50(local_17c,pcVar1);
  local_1c = DAT_00427aa8;
  local_18 = 0x178;
  local_14 = local_194;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000014);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00415b06 @ 00415b06

LRESULT __thiscall
FUN_00415b06(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  LRESULT LVar2;
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
  
  puStack_c = &LAB_0041945f;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  local_194 = param_5;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0(&param_6);
  FUN_00415e50(local_17c,pcVar1);
  local_180 = param_7;
  local_1c = DAT_00427aa4;
  local_18 = 0x178;
  local_14 = &local_194;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_6);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00415be6 @ 00415be6

void __thiscall FUN_00415be6(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427aa0;
  local_c = 0x440;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00415c26 @ 00415c26

undefined4 __thiscall FUN_00415c26(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a8c;
  local_c = 0x2c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_00415c69 @ 00415c69

undefined4 __thiscall FUN_00415c69(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a84;
  local_c = 0x2c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_00415cac @ 00415cac

void __thiscall FUN_00415cac(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a88;
  local_c = 0xc;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00415cec @ 00415cec

undefined4 __thiscall FUN_00415cec(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a80;
  local_c = 0x10;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_00415d2f @ 00415d2f

undefined4 __thiscall FUN_00415d2f(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a9c;
  local_c = 0x400;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return 1;
}


// ---- FUN_00415d74 @ 00415d74

undefined4 __thiscall FUN_00415d74(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a98;
  local_c = 0x410;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return 1;
}


// ---- FUN_00415db9 @ 00415db9

undefined4 __thiscall FUN_00415db9(void *this,undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_14 = param_1;
  local_10 = DAT_00427a94;
  local_c = 4;
  local_8 = &local_14;
  PostMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_00415e03 @ 00415e03

void __thiscall FUN_00415e03(void *this,short param_1,short param_2)

{
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_18 = (int)param_1;
  local_14 = (int)param_2;
  local_10 = DAT_00427b24;
  local_c = 0xc;
  local_8 = local_1c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00415e50 @ 00415e50

void FUN_00415e50(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  return;
}


// ---- FUN_00415e6d @ 00415e6d

void __fastcall FUN_00415e6d(int param_1)

{
  ATOM AVar1;
  LPCSTR lpString;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419472;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  lpString = (LPCSTR)FUN_004072e0((undefined4 *)&stack0x00000004);
  AVar1 = GlobalAddAtomA(lpString);
  SendMessageA(*(HWND *)(param_1 + 4),0x4c8,0,(uint)AVar1);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ---- FUN_00415ed8 @ 00415ed8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00415ed8(void *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_00414dda(param_1,s_DP_IMAGE_STORE_00426444);
  FUN_004138a7(param_1,uVar1);
  uVar1 = ftol();
  switch(uVar1) {
  case 0:
    fVar2 = (float10)_DAT_0041b0ec;
    break;
  case 1:
    fVar2 = (float10)_DAT_0041b0f0;
    break;
  case 2:
    fVar2 = (float10)_DAT_0041b0e8;
    break;
  case 3:
    fVar2 = (float10)_DAT_0041b0e4;
    break;
  default:
    fVar2 = (float10)_DAT_0041b0ec;
  }
  return fVar2;
}


// ---- FUN_00415f4f @ 00415f4f

void __fastcall FUN_00415f4f(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a54,*(WPARAM *)(param_1 + 8),4);
  return;
}


// ---- FUN_00415f77 @ 00415f77

LRESULT __fastcall FUN_00415f77(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419485;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 4;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00416027 @ 00416027

LRESULT __fastcall FUN_00416027(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419498;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 5;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_004160d7 @ 004160d7

LRESULT __fastcall FUN_004160d7(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004194ab;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 0;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00416187 @ 00416187

LRESULT __fastcall FUN_00416187(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004194be;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 1;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00416237 @ 00416237

LRESULT __fastcall FUN_00416237(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004194d1;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 2;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_004162e7 @ 004162e7

LRESULT __fastcall FUN_004162e7(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004194e4;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 3;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00416397 @ 00416397

undefined4 __fastcall FUN_00416397(void *param_1)

{
  char *pcVar1;
  char local_188 [352];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004194f7;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_188;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_188,pcVar1);
  local_28 = 10;
  local_20 = FUN_00417679(param_1,*(HWND *)((int)param_1 + 4),0x4a,*(WPARAM *)((int)param_1 + 8),
                          &local_1c);
  if (local_20 == 0) {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000004);
    local_24 = 0xffffffff;
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return local_24;
}


// ---- FUN_00416479 @ 00416479

void __fastcall FUN_00416479(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a54,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_004164a1 @ 004164a1

void __fastcall FUN_004164a1(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a54,*(WPARAM *)(param_1 + 8),1);
  return;
}


// ---- FUN_004164c9 @ 004164c9

void __fastcall FUN_004164c9(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a54,*(WPARAM *)(param_1 + 8),2);
  return;
}


// ---- FUN_004164f1 @ 004164f1

void __fastcall FUN_004164f1(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a54,*(WPARAM *)(param_1 + 8),3);
  return;
}


// ---- FUN_00416519 @ 00416519

void __fastcall FUN_00416519(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a3c,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00416541 @ 00416541

void __thiscall FUN_00416541(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427a38,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_0041656c @ 0041656c

void __thiscall FUN_0041656c(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427a34,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00416597 @ 00416597

void __thiscall FUN_00416597(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427a2c,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_004165c2 @ 004165c2

void __fastcall FUN_004165c2(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a30,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_004165ea @ 004165ea

void __fastcall FUN_004165ea(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a50,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00416612 @ 00416612

void __fastcall FUN_00416612(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a4c,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_0041663a @ 0041663a

void __thiscall FUN_0041663a(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a48;
  local_c = 0x184;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_0041667a @ 0041667a

void __thiscall FUN_0041667a(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a44;
  local_c = 0x184;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_004166ba @ 004166ba

void __thiscall FUN_004166ba(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427a68,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_004166e5 @ 004166e5

LRESULT __fastcall FUN_004166e5(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041950a;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 7;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00416795 @ 00416795

LRESULT __fastcall FUN_00416795(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041951d;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 6;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_00416845 @ 00416845

LRESULT __fastcall FUN_00416845(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419530;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 9;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_004168f5 @ 004168f5

LRESULT __fastcall FUN_004168f5(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419543;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_00427a58;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  FUN_00415e50(local_184,pcVar1);
  local_24 = 8;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_004169a5 @ 004169a5

void __thiscall FUN_004169a5(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a64;
  local_c = 0x450;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_004169e5 @ 004169e5

void __thiscall FUN_004169e5(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a60;
  local_c = 0x450;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416a23 @ 00416a23

void __fastcall FUN_00416a23(int param_1)

{
  LPARAM lParam;
  WPARAM wParam;
  
  lParam = ftol();
  wParam = ftol();
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a5c,wParam,lParam);
  return;
}


// ---- FUN_00416a61 @ 00416a61

void __thiscall FUN_00416a61(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b1c;
  local_c = 0x30c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416a9f @ 00416a9f

void __thiscall FUN_00416a9f(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b18;
  local_c = 0x10c;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00416adf @ 00416adf

void __thiscall FUN_00416adf(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427afc;
  local_c = 0x110;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00416b1f @ 00416b1f

void __thiscall FUN_00416b1f(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b04;
  local_c = 8;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416b5d @ 00416b5d

void __thiscall FUN_00416b5d(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b00;
  local_c = 8;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416b9b @ 00416b9b

void __thiscall FUN_00416b9b(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b3c;
  local_c = 0x10;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416bd9 @ 00416bd9

void __thiscall FUN_00416bd9(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b14;
  local_c = 0x10;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00416c19 @ 00416c19

void __thiscall FUN_00416c19(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b40;
  local_c = 0x14;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416c57 @ 00416c57

void __thiscall FUN_00416c57(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b20;
  local_c = 0xc;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00416c97 @ 00416c97

void __thiscall FUN_00416c97(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b44;
  local_c = 0x80c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416cd5 @ 00416cd5

void __thiscall FUN_00416cd5(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = DAT_00427b38;
  local_c = 0xc;
  local_8 = &local_1c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416d27 @ 00416d27

void __thiscall FUN_00416d27(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b34;
  local_c = 0xc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416d65 @ 00416d65

void __thiscall FUN_00416d65(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b30;
  local_c = 0xc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416da3 @ 00416da3

void __thiscall FUN_00416da3(void *this,undefined4 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = param_1;
  local_18 = DAT_00427b2c;
  local_14 = 8;
  local_10 = &local_c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  return;
}


// ---- FUN_00416def @ 00416def

void __fastcall FUN_00416def(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  local_10 = DAT_00427b28;
  local_c = 4;
  local_8 = &local_14;
  SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416e32 @ 00416e32

void __thiscall FUN_00416e32(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b10;
  local_c = 0x18;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416e70 @ 00416e70

void __thiscall FUN_00416e70(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b0c;
  local_c = 4;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416eae @ 00416eae

void __thiscall FUN_00416eae(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427b08;
  local_c = 4;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_00416eec @ 00416eec

void __fastcall FUN_00416eec(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_00427c8c,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00416f14 @ 00416f14

void __fastcall FUN_00416f14(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c88,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00416f3c @ 00416f3c

void __fastcall FUN_00416f3c(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427cb8,0,0);
  return;
}


// ---- FUN_00416f5e @ 00416f5e

undefined4 __thiscall FUN_00416f5e(void *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419556;
  local_10 = ExceptionList;
  local_8 = 0;
  local_178 = param_1;
  local_174 = param_2;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_004072e0((undefined4 *)&stack0x0000000c);
  FUN_00415e50(local_170,pcVar1);
  local_188 = DAT_00427ce0;
  local_184 = 0x16c;
  local_180 = &local_17c;
  iVar2 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_188);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
    local_17c = 0;
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
  }
  ExceptionList = local_10;
  return local_17c;
}


// ---- FUN_00417055 @ 00417055

void __thiscall FUN_00417055(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427cdc,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00417080 @ 00417080

void __fastcall FUN_00417080(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a1c,0,0);
  return;
}


// ---- FUN_004170a2 @ 004170a2

void __fastcall FUN_004170a2(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427a1c,1,0);
  return;
}


// ---- FUN_004170c4 @ 004170c4

void __thiscall FUN_004170c4(void *this,LPARAM param_1,WPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427cf4,param_2,param_1);
  return;
}


// ---- FUN_004170ed @ 004170ed

undefined4 __thiscall
FUN_004170ed(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = DAT_00427af8;
  local_1c = 0xc;
  local_18 = &local_10;
  local_10 = param_1;
  local_c = param_2;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_20);
  *param_3 = local_8;
  return uVar1;
}


// ---- FUN_00417147 @ 00417147

void __thiscall FUN_00417147(void *this,WPARAM param_1)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_00427a18,param_1,0);
  return;
}


// ---- FUN_0041716e @ 0041716e

void __thiscall FUN_0041716e(void *this,WPARAM param_1)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_00427a18,param_1,1);
  return;
}


// ---- FUN_00417195 @ 00417195

void __thiscall FUN_00417195(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_00427a14,param_1,0);
  return;
}


// ---- FUN_004171bc @ 004171bc

undefined4 FUN_004171bc(void)

{
  return 1;
}


// ---- FUN_004171ce @ 004171ce

uint __fastcall FUN_004171ce(void *param_1)

{
  uint local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_1c = 0;
  local_10 = DAT_00427ac8;
  local_c = 8;
  local_8 = &local_18;
  FUN_00417679(param_1,*(HWND *)((int)param_1 + 4),0x4a,*(WPARAM *)((int)param_1 + 8),&local_10);
  if (local_14 == 1) {
    local_1c = 0x10;
  }
  if (local_18 == 1) {
    local_1c = local_1c | 0x20;
  }
  return local_1c;
}


// ---- FUN_00417234 @ 00417234

void __fastcall FUN_00417234(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = DAT_00427ccc;
  hWnd = (HWND)FUN_00417b09(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


// ---- FUN_00417258 @ 00417258

undefined4 __thiscall FUN_00417258(void *this,undefined4 param_1,CString *param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined4 *puVar5;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_00427cc4;
  local_c = 0x164;
  local_8 = &local_174;
  local_174 = param_1;
  puVar5 = &local_10;
  WVar4 = *(WPARAM *)((int)this + 8);
  UVar3 = 0x4a;
  pHVar1 = (HWND)FUN_00417b09((int)this);
  uVar2 = FUN_00417679(this,pHVar1,UVar3,WVar4,puVar5);
  CString::operator=(param_2,local_170);
  return uVar2;
}


// ---- FUN_004172d0 @ 004172d0

void __fastcall FUN_004172d0(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = DAT_00427cc8;
  hWnd = (HWND)FUN_00417b09(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


// ---- FUN_004172f4 @ 004172f4

undefined4 __thiscall FUN_004172f4(void *this,undefined4 param_1,CString *param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined4 *puVar5;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_00427cc0;
  local_c = 0x164;
  local_8 = &local_174;
  local_174 = param_1;
  puVar5 = &local_10;
  WVar4 = *(WPARAM *)((int)this + 8);
  UVar3 = 0x4a;
  pHVar1 = (HWND)FUN_00417b09((int)this);
  uVar2 = FUN_00417679(this,pHVar1,UVar3,WVar4,puVar5);
  CString::operator=(param_2,local_170);
  return uVar2;
}


// ---- FUN_0041736c @ 0041736c

void __thiscall FUN_0041736c(void *this,LPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  wParam = 0;
  Msg = DAT_00427cbc;
  hWnd = (HWND)FUN_00417b09((int)this);
  PostMessageA(hWnd,Msg,wParam,param_1);
  return;
}


// ---- FUN_00417395 @ 00417395

void __thiscall FUN_00417395(void *this,LPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  wParam = 1;
  Msg = DAT_00427cbc;
  hWnd = (HWND)FUN_00417b09((int)this);
  PostMessageA(hWnd,Msg,wParam,param_1);
  return;
}


// ---- FUN_004173be @ 004173be

void __thiscall FUN_004173be(void *this,LPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  wParam = 2;
  Msg = DAT_00427cbc;
  hWnd = (HWND)FUN_00417b09((int)this);
  PostMessageA(hWnd,Msg,wParam,param_1);
  return;
}


// ---- FUN_004173e7 @ 004173e7

LRESULT FUN_004173e7(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  LRESULT LVar1;
  int extraout_ECX;
  undefined4 *puVar2;
  int local_ea80;
  undefined4 local_ea7c;
  undefined4 local_ea78;
  undefined4 *local_ea74;
  undefined4 local_ea70;
  undefined4 local_ea6c;
  ushort local_ea68;
  undefined4 uStackY_ea66;
  undefined2 auStackY_ea62 [29989];
  undefined4 uStackY_18;
  
  FUN_00418940();
  if ((param_2 == 0) || (10000 < param_2)) {
    LVar1 = -0xf;
  }
  else {
    local_ea70 = param_4;
    local_ea6c = param_3;
    local_ea68 = param_2;
    for (local_ea80 = 0; local_ea80 < (int)(uint)param_2; local_ea80 = local_ea80 + 1) {
      puVar2 = (undefined4 *)(param_1 + local_ea80 * 6);
      *(undefined4 *)((int)&uStackY_ea66 + local_ea80 * 6) = *puVar2;
      auStackY_ea62[local_ea80 * 3] = *(undefined2 *)(puVar2 + 1);
    }
    local_ea7c = DAT_00427af0;
    local_ea78 = 0xea6c;
    local_ea74 = &local_ea70;
    uStackY_18 = 0x4174d9;
    LVar1 = SendMessageA(*(HWND *)(extraout_ECX + 4),0x4a,*(WPARAM *)(extraout_ECX + 8),
                         (LPARAM)&local_ea7c);
  }
  return LVar1;
}


// ---- FUN_004174df @ 004174df

void __fastcall FUN_004174df(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427aec,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00417507 @ 00417507

void __thiscall FUN_00417507(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a00;
  local_c = 0x58;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00417547 @ 00417547

void __thiscall FUN_00417547(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00427a08;
  local_c = 0x34;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00417587 @ 00417587

LRESULT __thiscall FUN_00417587(void *this,WPARAM param_1,LPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  
  if ((param_1 == 10) || (param_1 == 0xb)) {
    hWnd = FindWindowA((LPCSTR)0x0,s_Untitled___hpapp32_00426454);
    if (hWnd == (HWND)0x0) {
      LVar1 = 0;
    }
    else if (param_1 == 10) {
      LVar1 = SendMessageA(hWnd,DAT_00427a0c,0x1a,2);
    }
    else {
      LVar1 = SendMessageA(hWnd,DAT_00427a0c,0x1a,3);
    }
  }
  else {
    SendMessageA(*(HWND *)((int)this + 4),DAT_00427a04,param_1,param_2);
    LVar1 = 1;
  }
  return LVar1;
}


// ---- FUN_00417616 @ 00417616

void __fastcall FUN_00417616(int param_1)

{
  _OSVERSIONINFOA local_98;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  memset(&local_98,0,0x94);
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if (local_98.dwPlatformId == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}


// ---- FUN_00417679 @ 00417679

void __thiscall
FUN_00417679(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) == 0) {
    SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  else {
    FUN_004176b7(this,param_1,param_4);
  }
  return;
}


// ---- FUN_004176b7 @ 004176b7

LRESULT __thiscall FUN_004176b7(void *this,HWND param_1,undefined4 *param_2)

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
  sprintf(local_114,s_MMF_LEO_SC__lx__lx__lx_00426468,DVar2,uVar5,iVar1);
  local_8 = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_2[1] + 8,
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
      *lpBaseAddress = param_2[1];
      memcpy(lpBaseAddress + 1,(void *)param_2[2],param_2[1]);
      local_14 = *param_2;
      sVar3 = strlen(local_114);
      local_10 = sVar3 + 1;
      local_c = local_114;
      DAT_00427998 = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_14);
      memcpy((void *)param_2[2],lpBaseAddress + 1,param_2[1]);
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(local_8);
      LVar4 = DAT_00427998;
    }
  }
  return LVar4;
}


// ---- FUN_0041780b @ 0041780b

void __thiscall FUN_0041780b(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279f0,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_00417836 @ 00417836

void __fastcall FUN_00417836(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_004279ec,0,0);
  return;
}


// ---- FUN_00417858 @ 00417858

void __thiscall FUN_00417858(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_004279e8;
  local_c = 0xc;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_00417898 @ 00417898

void __thiscall FUN_00417898(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_004279e4;
  local_c = 0xc;
  local_8 = param_1;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_004178d8 @ 004178d8

void __fastcall FUN_004178d8(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_004279dc,0,0);
  return;
}


// ---- FUN_004178fa @ 004178fa

void __thiscall FUN_004178fa(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279e0,param_1,0);
  return;
}


// ---- FUN_00417921 @ 00417921

void __fastcall FUN_00417921(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427b60,0,0);
  return;
}


// ---- FUN_00417943 @ 00417943

void __fastcall FUN_00417943(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427b5c,0,0);
  return;
}


// ---- FUN_00417965 @ 00417965

void __thiscall FUN_00417965(void *this,uint param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279d4,*(WPARAM *)((int)this + 8),param_1 & 0xff);
  return;
}


// ---- FUN_00417995 @ 00417995

void __fastcall FUN_00417995(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_004279d0,0,0);
  return;
}


// ---- FUN_004179b7 @ 004179b7

void __thiscall FUN_004179b7(void *this,WPARAM param_1,LPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279cc,param_1,param_2);
  return;
}


// ---- FUN_004179e0 @ 004179e0

undefined4 __thiscall FUN_004179e0(void *this,undefined1 param_1)

{
  char *_Source;
  undefined4 uVar1;
  undefined1 local_17c;
  char local_17b [351];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00419569;
  local_10 = ExceptionList;
  local_8 = 0;
  local_17c = param_1;
  ExceptionList = &local_10;
  _Source = (char *)FUN_004072e0((undefined4 *)&stack0x00000008);
  strcpy(local_17b,_Source);
  local_1c = DAT_004279c8;
  local_18 = 0x15f;
  local_14 = &local_17c;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000008);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_00417a95 @ 00417a95

void __thiscall FUN_00417a95(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 7;
  Msg = DAT_00427d18;
  hWnd = (HWND)FUN_00417b09((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_00417abe @ 00417abe

void __thiscall FUN_00417abe(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 8;
  Msg = DAT_00427d18;
  hWnd = (HWND)FUN_00417b09((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_00417ae7 @ 00417ae7

void __fastcall FUN_00417ae7(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427c6c,0,0);
  return;
}


// ---- FUN_00417b09 @ 00417b09

void __fastcall FUN_00417b09(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_00427cd8,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_00417b31 @ 00417b31

undefined4 __fastcall FUN_00417b31(void *param_1)

{
  char *_Source;
  undefined4 uVar1;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041957c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _Source = (char *)FUN_004072e0((undefined4 *)&stack0x00000004);
  strcpy(local_17c,_Source);
  local_1c = DAT_00427af4;
  local_18 = 0x15e;
  local_14 = local_17c;
  uVar1 = FUN_00417679(param_1,*(HWND *)((int)param_1 + 4),0x4a,*(WPARAM *)((int)param_1 + 8),
                       &local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_00417bdd @ 00417bdd

void __thiscall FUN_00417bdd(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = DAT_00427cd4;
  hWnd = (HWND)FUN_00417b09((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_00417c06 @ 00417c06

LRESULT __fastcall FUN_00417c06(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = (HWND)FUN_00417b09(param_1);
  if (hWnd == (HWND)0x0) {
    LVar1 = 0;
  }
  else {
    LVar1 = SendMessageA(hWnd,DAT_004279c4,0,0);
  }
  return LVar1;
}


// ---- FUN_00417c3c @ 00417c3c

LRESULT __fastcall FUN_00417c3c(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = (HWND)FUN_00417b09(param_1);
  if (hWnd == (HWND)0x0) {
    LVar1 = 0;
  }
  else {
    LVar1 = SendMessageA(hWnd,DAT_004279b8,0,0);
  }
  return LVar1;
}


// ---- FUN_00417c72 @ 00417c72

undefined4 __thiscall FUN_00417c72(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  HWND local_8;
  
  local_8 = (HWND)FUN_00417b09((int)this);
  if (local_8 == (HWND)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = DAT_004279c0;
    local_10 = 0x18;
    local_c = param_1;
    uVar1 = FUN_00417679(this,local_8,0x4a,*(WPARAM *)((int)this + 8),&local_14);
  }
  return uVar1;
}


// ---- FUN_00417cc4 @ 00417cc4

undefined4 __thiscall
FUN_00417cc4(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  HWND local_8;
  
  local_8 = (HWND)FUN_00417b09((int)this);
  if (local_8 == (HWND)0x0) {
    uVar1 = 0;
  }
  else {
    local_28 = param_1;
    local_24 = param_2;
    local_20 = param_3;
    local_18 = param_5;
    local_1c = param_4;
    local_14 = DAT_004279bc;
    local_10 = 0x18;
    local_c = local_2c;
    uVar1 = FUN_00417679(this,local_8,0x4a,*(WPARAM *)((int)this + 8),&local_14);
  }
  return uVar1;
}


// ---- FUN_00417d35 @ 00417d35

void __fastcall FUN_00417d35(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_004279b0,0,0);
  return;
}


// ---- FUN_00417d57 @ 00417d57

void __thiscall FUN_00417d57(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279ac,0,param_1);
  return;
}


// ---- FUN_00417d7e @ 00417d7e

void __thiscall FUN_00417d7e(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_00427a24;
  local_c = 0x18;
  local_8 = &local_28;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *param_1 = local_28;
  *param_2 = local_24;
  return;
}


// ---- FUN_00417dce @ 00417dce

void __thiscall FUN_00417dce(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279a8,0,param_1);
  return;
}


// ---- FUN_00417df5 @ 00417df5

CString * __thiscall FUN_00417df5(void *this,CString *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_004279a0;
  local_c = 0x168;
  local_8 = &local_178;
  local_178 = param_2;
  local_174 = param_3;
  FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::CString(param_1,local_170);
  return param_1;
}


// ---- FUN_00417e84 @ 00417e84

void __thiscall FUN_00417e84(void *this,LPARAM param_1,WPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_004279a4,param_2,param_1);
  return;
}


// ---- FUN_00417ead @ 00417ead

undefined4 __thiscall FUN_00417ead(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_00427b88,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00417ee4 @ 00417ee4

undefined4 __thiscall
FUN_00417ee4(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_0042799c;
  local_c = 0x14;
  local_8 = &local_24;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = (uint)(ushort)*param_3;
  local_18 = *param_4;
  local_14 = *param_5;
  uVar1 = FUN_00417679(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *param_3 = local_1c;
  *param_4 = local_18;
  *param_5 = local_14;
  return uVar1;
}


// ---- FUN_00417f69 @ 00417f69

void __thiscall FUN_00417f69(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint local_8;
  
  local_8 = param_1;
  FUN_00417ee4(this,0,1,&local_8,param_2,param_3);
  return;
}


// ---- FUN_00417fa0 @ 00417fa0

undefined4 * __thiscall FUN_00417fa0(void *this,uint param_1)

{
  FUN_004128f7(this);
  if ((param_1 & 1) != 0) {
    FUN_00402870(this);
  }
  return this;
}


// ---- Add @ 00417fd0

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<int,int>::Add(int)
    public: int __thiscall CArray<unsigned int,unsigned int>::Add(unsigned int)
    public: int __thiscall CArray<long,long>::Add(long)
    public: int __thiscall CArray<unsigned long,unsigned long>::Add(unsigned long)
     29 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __thiscall Add(void *this,CString *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  CStringArray::SetAtGrow(this,iVar1,param_1);
  return iVar1;
}


// ---- FUN_00418000 @ 00418000

CString * __thiscall FUN_00418000(void *this,char *param_1)

{
  CString::operator=(this,param_1);
  return this;
}


// ---- Add @ 00418020

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<int,int>::Add(int)
    public: int __thiscall CArray<unsigned int,unsigned int>::Add(unsigned int)
    public: int __thiscall CArray<long,long>::Add(long)
    public: int __thiscall CArray<unsigned long,unsigned long>::Add(unsigned long)
     29 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __thiscall Add(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  FUN_00418050(this,iVar1,param_1);
  return iVar1;
}


// ---- FUN_00418050 @ 00418050

void __thiscall FUN_00418050(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 8) <= param_1) {
    FUN_00418090(this,param_1 + 1,-1);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4) = param_2;
  return;
}


// ---- FUN_00418090 @ 00418090

void __thiscall FUN_00418090(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int local_2c;
  int local_28;
  int local_10;
  int local_c;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      FUN_004182c0(*(undefined4 *)((int)this + 4),*(int *)((int)this + 8));
      operator_delete(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else if (*(int *)((int)this + 4) == 0) {
    pvVar1 = operator_new(param_1 << 2);
    *(void **)((int)this + 4) = pvVar1;
    FUN_004182f0(*(void **)((int)this + 4),param_1);
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 8) = param_1;
  }
  else if (*(int *)((int)this + 0xc) < param_1) {
    local_c = *(int *)((int)this + 0x10);
    if (local_c == 0) {
      local_2c = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (local_2c < 4) {
        local_28 = 4;
      }
      else {
        if (0x400 < local_2c) {
          local_2c = 0x400;
        }
        local_28 = local_2c;
      }
      local_c = local_28;
    }
    if (param_1 < *(int *)((int)this + 0xc) + local_c) {
      local_10 = *(int *)((int)this + 0xc) + local_c;
    }
    else {
      local_10 = param_1;
    }
    pvVar1 = operator_new(local_10 << 2);
    memcpy(pvVar1,*(void **)((int)this + 4),*(int *)((int)this + 8) << 2);
    FUN_004182f0((void *)((int)pvVar1 + *(int *)((int)this + 8) * 4),
                 param_1 - *(int *)((int)this + 8));
    operator_delete(*(void **)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = local_10;
  }
  else {
    if (*(int *)((int)this + 8) < param_1) {
      FUN_004182f0((void *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4),
                   param_1 - *(int *)((int)this + 8));
    }
    else if (param_1 < *(int *)((int)this + 8)) {
      FUN_004182c0(*(int *)((int)this + 4) + param_1 * 4,*(int *)((int)this + 8) - param_1);
    }
    *(int *)((int)this + 8) = param_1;
  }
  return;
}


// ---- FUN_004182c0 @ 004182c0

void FUN_004182c0(undefined4 param_1,int param_2)

{
  bool bVar1;
  
  do {
    bVar1 = param_2 != 0;
    param_2 = param_2 + -1;
  } while (bVar1);
  return;
}


// ---- FUN_004182f0 @ 004182f0

void FUN_004182f0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 << 2);
  while (param_2 != 0) {
    FUN_00402a30(4,param_1);
    param_1 = (void *)((int)param_1 + 4);
    param_2 = param_2 + -1;
  }
  return;
}


// ---- operator_delete @ 0041833e

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041833e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- SetWindowPos @ 00418344

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- ReadCount @ 00418350

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ReadCount(this);
  return uVar1;
}


// ---- WriteCount @ 00418356

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteCount(this,param_1);
  return;
}


// ---- operator_new @ 0041835c

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041835c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- Read @ 00418362

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = Read(this,param_1,param_2);
  return uVar1;
}


// ---- Write @ 00418368

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00418368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Write(this,param_1,param_2);
  return;
}


// ---- PreInitDialog @ 0041836e

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041836e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 00418374

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 0041837a

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041837a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 00418380

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 00418386

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 0041838c

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 00418392

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 00418398

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 0041839e

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041839e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 004183a4

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004183a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 004183aa

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 004183b0

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 004183b6

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 004183bc

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 004183c2

int __thiscall CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 004183c8

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x004183c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 004183ce

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 004183d4

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 004183da

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004183da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 004183e0

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 004183e6

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004183e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 004183ec

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 004183f2

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 004183f8

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004183f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 004183fe

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004183fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 00418404

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 0041840a

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041840a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 00418410

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 00418416

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 0041841c

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 00418422

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 00418428

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 0041842e

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041842e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 00418434

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 0041843a

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041843a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 00418440

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 00418446

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 0041844c

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041844c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 00418452

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 00418458

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 0041845e

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041845e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 00418464

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 0041846a

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041846a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 00418470

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CDialog @ 00418476

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- CDialog @ 0041847c

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0041847c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- CDialog @ 00418482

void __thiscall CDialog::CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this);
  return;
}


// ---- CreateIndirect @ 00418488

int __thiscall
CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateIndirect(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- AfxFindResourceHandle @ 0041848e

HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041848e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = AfxFindResourceHandle(param_1,param_2);
  return pHVar1;
}


// ---- InitModalIndirect @ 00418494

int __thiscall CDialog::InitModalIndirect(CDialog *this,void *param_1,CWnd *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitModalIndirect(this,param_1,param_2);
  return iVar1;
}


// ---- PostModal @ 0041849a

void __thiscall CDialog::PostModal(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041849a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostModal(this);
  return;
}


// ---- RunModalLoop @ 004184a0

int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = RunModalLoop(this,param_1);
  return iVar1;
}


// ---- GetStyle @ 004184a6

ulong __thiscall CWnd::GetStyle(CWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetStyle(this);
  return uVar1;
}


// ---- CreateDlgIndirect @ 004184ac

int __thiscall
CWnd::CreateDlgIndirect(CWnd *this,DLGTEMPLATE *param_1,CWnd *param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateDlgIndirect(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- FromHandle @ 004184b2

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- AfxHookWindowCreate @ 004184b8

void AfxHookWindowCreate(CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004184b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxHookWindowCreate(param_1);
  return;
}


// ---- AFX_EXCEPTION_LINK @ 004184be

void __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this)

{
                    /* WARNING: Could not recover jumptable at 0x004184be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_EXCEPTION_LINK(this);
  return;
}


// ---- AfxUnhookWindowCreate @ 004184c4

int AfxUnhookWindowCreate(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnhookWindowCreate();
  return iVar1;
}


// ---- PreModal @ 004184ca

HWND__ * __thiscall CDialog::PreModal(CDialog *this)

{
  HWND__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = PreModal(this);
  return pHVar1;
}


// ---- AfxTryCleanup @ 004184d0

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x004184d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- AfxGetModuleState @ 004184d6

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- Default @ 004184dc

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004184dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- OnHelp @ 004184e2

void __thiscall CWinApp::OnHelp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x004184e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHelp(this);
  return;
}


// ---- OnCmdMsg @ 0041855a

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041855a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CWinApp @ 00418566

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CString @ 0041856c

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041856c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CWinApp @ 00418572

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- ~CString @ 00418578

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- DragAcceptFiles @ 0041857e

void __thiscall CWnd::DragAcceptFiles(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041857e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DragAcceptFiles(this,param_1);
  return;
}


// ---- ~CCommandLineInfo @ 00418584

void __thiscall CCommandLineInfo::~CCommandLineInfo(CCommandLineInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CCommandLineInfo(this);
  return;
}


// ---- ProcessShellCommand @ 0041858a

int __thiscall CWinApp::ProcessShellCommand(CWinApp *this,CCommandLineInfo *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041858a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessShellCommand(this,param_1);
  return iVar1;
}


// ---- ParseCommandLine @ 00418590

void __thiscall CWinApp::ParseCommandLine(CWinApp *this,CCommandLineInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ParseCommandLine(this,param_1);
  return;
}


// ---- CCommandLineInfo @ 00418596

void __thiscall CCommandLineInfo::CCommandLineInfo(CCommandLineInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CCommandLineInfo(this);
  return;
}


// ---- RegisterShellFileTypes @ 0041859c

void __thiscall CWinApp::RegisterShellFileTypes(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041859c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegisterShellFileTypes(this,param_1);
  return;
}


// ---- EnableShellOpen @ 004185a2

void __thiscall CWinApp::EnableShellOpen(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x004185a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableShellOpen(this);
  return;
}


// ---- AddDocTemplate @ 004185a8

void __thiscall CWinApp::AddDocTemplate(CWinApp *this,CDocTemplate *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004185a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddDocTemplate(this,param_1);
  return;
}


// ---- CSingleDocTemplate @ 004185ae

void __thiscall
CSingleDocTemplate::CSingleDocTemplate
          (CSingleDocTemplate *this,uint param_1,CRuntimeClass *param_2,CRuntimeClass *param_3,
          CRuntimeClass *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x004185ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CSingleDocTemplate(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- Enable3dControls @ 004185b4

int __thiscall CWinApp::Enable3dControls(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Enable3dControls(this);
  return iVar1;
}


// ---- AfxEnableControlContainer @ 004185ba

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004185ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}


// ---- LoadStringA @ 004185c0

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- operator= @ 004185c6

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- operator+ @ 004185cc

void operator+(CString *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004185cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- DoModal @ 004185d2

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- OnIdle @ 004185de

void __thiscall CDocument::OnIdle(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x004185de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnIdle(this);
  return;
}


// ---- GetDefaultAccelerator @ 004185e4

HACCEL__ * __thiscall CDocument::GetDefaultAccelerator(CDocument *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}


// ---- UpdateFrameCounts @ 004185ea

void __thiscall CDocument::UpdateFrameCounts(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x004185ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateFrameCounts(this);
  return;
}


// ---- DoFileSave @ 004185f0

int __thiscall CDocument::DoFileSave(CDocument *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoFileSave(this);
  return iVar1;
}


// ---- DoSave @ 004185f6

int __thiscall CDocument::DoSave(CDocument *this,char *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004185f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoSave(this,param_1,param_2);
  return iVar1;
}


// ---- PreCloseFrame @ 004185fc

void __thiscall CDocument::PreCloseFrame(CDocument *this,CFrameWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004185fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreCloseFrame(this,param_1);
  return;
}


// ---- SaveModified @ 00418602

int __thiscall CDocument::SaveModified(CDocument *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveModified(this);
  return iVar1;
}


// ---- CanCloseFrame @ 00418608

int __thiscall CDocument::CanCloseFrame(CDocument *this,CFrameWnd *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CanCloseFrame(this,param_1);
  return iVar1;
}


// ---- ReleaseFile @ 0041860e

void __thiscall CDocument::ReleaseFile(CDocument *this,CFile *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0041860e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseFile(this,param_1,param_2);
  return;
}


// ---- GetFile @ 00418614

CFile * __thiscall
CDocument::GetFile(CDocument *this,char *param_1,uint param_2,CFileException *param_3)

{
  CFile *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetFile(this,param_1,param_2,param_3);
  return pCVar1;
}


// ---- ReportSaveLoadException @ 0041861a

void __thiscall
CDocument::ReportSaveLoadException
          (CDocument *this,char *param_1,CException *param_2,int param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0041861a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReportSaveLoadException(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnCloseDocument @ 00418620

void __thiscall CDocument::OnCloseDocument(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCloseDocument(this);
  return;
}


// ---- OnSaveDocument @ 00418626

int __thiscall CDocument::OnSaveDocument(CDocument *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSaveDocument(this,param_1);
  return iVar1;
}


// ---- OnOpenDocument @ 0041862c

int __thiscall CDocument::OnOpenDocument(CDocument *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnOpenDocument(this,param_1);
  return iVar1;
}


// ---- DeleteContents @ 00418632

void __thiscall CDocument::DeleteContents(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteContents(this);
  return;
}


// ---- OnChangedViewList @ 00418638

void __thiscall CDocument::OnChangedViewList(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnChangedViewList(this);
  return;
}


// ---- GetNextView @ 0041863e

CView * __thiscall CDocument::GetNextView(CDocument *this,__POSITION **param_1)

{
  CView *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041863e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetNextView(this,param_1);
  return pCVar1;
}


// ---- GetFirstViewPosition @ 00418644

__POSITION * __thiscall CDocument::GetFirstViewPosition(CDocument *this)

{
  __POSITION *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00418644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetFirstViewPosition(this);
  return p_Var1;
}


// ---- SetPathName @ 0041864a

void __thiscall CDocument::SetPathName(CDocument *this,char *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0041864a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPathName(this,param_1,param_2);
  return;
}


// ---- SetTitle @ 00418650

void __thiscall CDocument::SetTitle(CDocument *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTitle(this,param_1);
  return;
}


// ---- OnFinalRelease @ 00418656

void __thiscall CDocument::OnFinalRelease(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 0041865c

int __thiscall
CDocument::OnCmdMsg(CDocument *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041865c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CDocument @ 00418662

void __thiscall CDocument::CDocument(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDocument(this);
  return;
}


// ---- ~CDocument @ 00418668

void __thiscall CDocument::~CDocument(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDocument(this);
  return;
}


// ---- OnNewDocument @ 0041866e

int __thiscall CDocument::OnNewDocument(CDocument *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041866e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNewDocument(this);
  return iVar1;
}


// ---- ~CWnd @ 00418674

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- SetOccDialogInfo @ 0041867a

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041867a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 00418680

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- PreTranslateMessage @ 00418686

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetMessageMap @ 0041868c

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041868c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- CWnd @ 00418692

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- CreateControl @ 00418698

int __thiscall
CWnd::CreateControl(CWnd *this,_GUID *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                   CWnd *param_5,uint param_6,CFile *param_7,int param_8,ushort *param_9)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControl(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       );
  return iVar1;
}


// ---- OnEndPrintPreview @ 0041869e

void __thiscall
CView::OnEndPrintPreview
          (CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0041869e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEndPrintPreview(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnEndPrinting @ 004186a4

void __thiscall CView::OnEndPrinting(CView *this,CDC *param_1,CPrintInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004186a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEndPrinting(this,param_1,param_2);
  return;
}


// ---- OnPrint @ 004186aa

void __thiscall CView::OnPrint(CView *this,CDC *param_1,CPrintInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004186aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnPrint(this,param_1,param_2);
  return;
}


// ---- OnBeginPrinting @ 004186b0

void __thiscall CView::OnBeginPrinting(CView *this,CDC *param_1,CPrintInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004186b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBeginPrinting(this,param_1,param_2);
  return;
}


// ---- OnPreparePrinting @ 004186b6

int __thiscall CView::OnPreparePrinting(CView *this,CPrintInfo *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnPreparePrinting(this,param_1);
  return iVar1;
}


// ---- OnUpdate @ 004186bc

void __thiscall CView::OnUpdate(CView *this,CView *param_1,long param_2,CObject *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004186bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdate(this,param_1,param_2,param_3);
  return;
}


// ---- OnActivateFrame @ 004186c2

void __thiscall CView::OnActivateFrame(CView *this,uint param_1,CFrameWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004186c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivateFrame(this,param_1,param_2);
  return;
}


// ---- OnActivateView @ 004186c8

void __thiscall CView::OnActivateView(CView *this,int param_1,CView *param_2,CView *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004186c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivateView(this,param_1,param_2,param_3);
  return;
}


// ---- OnInitialUpdate @ 004186ce

void __thiscall CView::OnInitialUpdate(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x004186ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInitialUpdate(this);
  return;
}


// ---- OnPrepareDC @ 004186d4

void __thiscall CView::OnPrepareDC(CView *this,CDC *param_1,CPrintInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004186d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnPrepareDC(this,param_1,param_2);
  return;
}


// ---- OnDragScroll @ 004186da

ulong __thiscall CView::OnDragScroll(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDragScroll();
  return uVar1;
}


// ---- OnDropEx @ 004186e0

ulong __thiscall CView::OnDropEx(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDropEx();
  return uVar1;
}


// ---- OnDrop @ 004186e6

int __thiscall CView::OnDrop(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDrop();
  return iVar1;
}


// ---- OnDragLeave @ 004186ec

void __thiscall CView::OnDragLeave(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x004186ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDragLeave(this);
  return;
}


// ---- OnDragOver @ 004186f2

ulong __thiscall CView::OnDragOver(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDragOver();
  return uVar1;
}


// ---- OnDragEnter @ 004186f8

ulong __thiscall CView::OnDragEnter(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDragEnter();
  return uVar1;
}


// ---- OnScrollBy @ 004186fe

int __thiscall CView::OnScrollBy(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004186fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnScrollBy();
  return iVar1;
}


// ---- OnScroll @ 00418704

int __thiscall CView::OnScroll(CView *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnScroll(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- IsSelected @ 0041870a

int __thiscall CView::IsSelected(CView *this,CObject *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041870a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsSelected(this,param_1);
  return iVar1;
}


// ---- PostNcDestroy @ 00418710

void __thiscall CView::PostNcDestroy(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- GetScrollBarCtrl @ 00418716

CScrollBar * __thiscall CView::GetScrollBarCtrl(CView *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- CalcWindowRect @ 0041871c

void __thiscall CView::CalcWindowRect(CView *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0041871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- OnCmdMsg @ 00418722

int __thiscall
CView::OnCmdMsg(CView *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CView @ 00418728

void __thiscall CView::CView(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CView(this);
  return;
}


// ---- ~CView @ 0041872e

void __thiscall CView::~CView(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041872e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CView(this);
  return;
}


// ---- PreCreateWindow @ 00418734

int __thiscall CView::PreCreateWindow(CView *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- OnCreate @ 0041873a

int __thiscall CView::OnCreate(CView *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041873a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreate(this,param_1);
  return iVar1;
}


// ---- SetPaneText @ 00418740

int __thiscall CStatusBar::SetPaneText(CStatusBar *this,int param_1,char *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetPaneText(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- SetWindowTextA @ 00418746

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}


// ---- Format @ 0041874c

void __thiscall CString::Format(CString *this,char *param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x0041874c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- AfxGetThread @ 00418752

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}


// ---- InvokeHelper @ 00418758

void __thiscall
CWnd::InvokeHelper(CWnd *this,long param_1,ushort param_2,ushort param_3,void *param_4,
                  uchar *param_5,...)

{
                    /* WARNING: Could not recover jumptable at 0x00418758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvokeHelper(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- OnHelpUsing @ 0041875e

void __thiscall CWnd::OnHelpUsing(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041875e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHelpUsing(this);
  return;
}


// ---- OnContextHelp @ 00418764

void __thiscall CFrameWnd::OnContextHelp(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnContextHelp(this);
  return;
}


// ---- OnHelp @ 0041876a

void __thiscall CFrameWnd::OnHelp(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041876a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHelp(this);
  return;
}


// ---- OnHelpFinder @ 00418770

void __thiscall CWnd::OnHelpFinder(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHelpFinder(this);
  return;
}


// ---- OnPaletteChanged @ 00418776

void __thiscall CFrameWnd::OnPaletteChanged(CFrameWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnPaletteChanged(this,param_1);
  return;
}


// ---- OnQueryNewPalette @ 0041877c

int __thiscall CFrameWnd::OnQueryNewPalette(CFrameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryNewPalette(this);
  return iVar1;
}


// ---- operator= @ 00418782

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CString @ 00418788

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- ShowWindow @ 0041878e

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041878e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}


// ---- CenterWindow @ 00418794

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}


// ---- GetActiveView @ 0041879a

CView * __thiscall CFrameWnd::GetActiveView(CFrameWnd *this)

{
  CView *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041879a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveView(this);
  return pCVar1;
}


// ---- ExitHelpMode @ 004187a0

void __thiscall CFrameWnd::ExitHelpMode(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004187a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitHelpMode(this);
  return;
}


// ---- DelayUpdateFrameMenu @ 004187a6

void __thiscall CFrameWnd::DelayUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004187a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelayUpdateFrameMenu(this,param_1);
  return;
}


// ---- GetDefaultAccelerator @ 004187ac

HACCEL__ * __thiscall CFrameWnd::GetDefaultAccelerator(CFrameWnd *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}


// ---- OnUpdateFrameMenu @ 004187b2

void __thiscall CFrameWnd::OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004187b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameMenu(this,param_1);
  return;
}


// ---- OnUpdateFrameTitle @ 004187b8

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004187b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameTitle(this,param_1);
  return;
}


// ---- OnCreateClient @ 004187be

int __thiscall
CFrameWnd::OnCreateClient(CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateClient(this,param_1,param_2);
  return iVar1;
}


// ---- NegotiateBorderSpace @ 004187c4

int __thiscall CFrameWnd::NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = NegotiateBorderSpace(this,param_1,param_2);
  return iVar1;
}


// ---- GetMessageBar @ 004187ca

CWnd * __thiscall CFrameWnd::GetMessageBar(CFrameWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMessageBar(this);
  return pCVar1;
}


// ---- OnSetPreviewMode @ 004187d0

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004187d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPreviewMode(this,param_1,param_2);
  return;
}


// ---- ActivateFrame @ 004187d6

void __thiscall CFrameWnd::ActivateFrame(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004187d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ActivateFrame(this,param_1);
  return;
}


// ---- RecalcLayout @ 004187dc

void __thiscall CFrameWnd::RecalcLayout(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004187dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecalcLayout(this,param_1);
  return;
}


// ---- GetActiveFrame @ 004187e2

CFrameWnd * __thiscall CFrameWnd::GetActiveFrame(CFrameWnd *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveFrame(this);
  return pCVar1;
}


// ---- GetActiveDocument @ 004187e8

CDocument * __thiscall CFrameWnd::GetActiveDocument(CFrameWnd *this)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveDocument(this);
  return pCVar1;
}


// ---- LoadFrame @ 004187ee

int __thiscall
CFrameWnd::LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadFrame(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- IsFrameWnd @ 004187f4

int __thiscall CFrameWnd::IsFrameWnd(CFrameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004187f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- PostNcDestroy @ 004187fa

void __thiscall CFrameWnd::PostNcDestroy(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004187fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- PreTranslateMessage @ 00418800

int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- EndModalState @ 00418806

void __thiscall CFrameWnd::EndModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalState(this);
  return;
}


// ---- BeginModalState @ 0041880c

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginModalState(this);
  return;
}


// ---- OnCommand @ 00418812

int __thiscall CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- OnCmdMsg @ 00418818

int __thiscall
CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CStatusBar @ 0041881e

void __thiscall CStatusBar::~CStatusBar(CStatusBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041881e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStatusBar(this);
  return;
}


// ---- ~CFrameWnd @ 00418824

void __thiscall CFrameWnd::~CFrameWnd(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CFrameWnd(this);
  return;
}


// ---- CStatusBar @ 0041882a

void __thiscall CStatusBar::CStatusBar(CStatusBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041882a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CStatusBar(this);
  return;
}


// ---- CFrameWnd @ 00418830

void __thiscall CFrameWnd::CFrameWnd(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFrameWnd(this);
  return;
}


// ---- PreCreateWindow @ 00418836

int __thiscall CFrameWnd::PreCreateWindow(CFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- GetMessageString @ 0041883c

void __thiscall CFrameWnd::GetMessageString(CFrameWnd *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0041883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- Left @ 00418842

void __thiscall CString::Left(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Left(this,param_1);
  return;
}


// ---- SetAt @ 00418848

void __thiscall CString::SetAt(CString *this,int param_1,char param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00418848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetAt(this,param_1,param_2);
  return;
}


// ---- Find @ 0041884e

int __thiscall CString::Find(CString *this,char param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041884e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Find(this,param_1);
  return iVar1;
}


// ---- FromHandle @ 00418854

CMenu * CMenu::FromHandle(HMENU__ *param_1)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- DestroyMenu @ 0041885a

int __thiscall CMenu::DestroyMenu(CMenu *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041885a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyMenu(this);
  return iVar1;
}


// ---- operator+= @ 00418860

CString * __thiscall CString::operator+=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- SetIndicators @ 00418866

int __thiscall CStatusBar::SetIndicators(CStatusBar *this,uint *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetIndicators(this,param_1,param_2);
  return iVar1;
}


// ---- Create @ 0041886c

int __thiscall CStatusBar::Create(CStatusBar *this,CWnd *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCreate @ 00418872

int __thiscall CFrameWnd::OnCreate(CFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreate(this,param_1);
  return iVar1;
}


// ---- OnClose @ 00418878

void __thiscall CFrameWnd::OnClose(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this);
  return;
}


// ---- MakeUpper @ 0041887e

void __thiscall CString::MakeUpper(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x0041887e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MakeUpper(this);
  return;
}


// ---- Mid @ 00418884

void __thiscall CString::Mid(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Mid(this,param_1);
  return;
}


// ---- Find @ 0041888a

int __thiscall CString::Find(CString *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041888a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Find(this,param_1);
  return iVar1;
}


// ---- CString @ 00418890

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00418890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- operator+ @ 00418896

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00418896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- ReleaseBuffer @ 0041889c

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseBuffer(this,param_1);
  return;
}


// ---- GetBuffer @ 004188a2

char * __thiscall CString::GetBuffer(CString *this,int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004188a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetBuffer(this,param_1);
  return pcVar1;
}


// ---- operator+ @ 004188a8

void operator+(char *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004188a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- Empty @ 004188ae

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x004188ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- SetAtGrow @ 004188b4

void __thiscall CStringArray::SetAtGrow(CStringArray *this,int param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004188b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetAtGrow(this,param_1,param_2);
  return;
}


// ---- FUN_004188ba @ 004188ba

void __cdecl FUN_004188ba(_onexit_t param_1)

{
  if (DAT_00427dac == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_00427dac,&DAT_00427da8);
  return;
}


// ---- FUN_004188e6 @ 004188e6

int __cdecl FUN_004188e6(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_004188ba(param_1);
  return (iVar1 != 0) - 1;
}


// ---- memcpy @ 00418900

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


// ---- memset @ 00418906

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


// ---- ftol @ 00418928

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x00418928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- strcpy @ 0041892e

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041892e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}


// ---- FUN_00418940 @ 00418940

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00418940(void)

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


// ---- strlen @ 00418970

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}


// ---- entry @ 00418976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  undefined4 *puVar1;
  uint uVar2;
  HMODULE pHVar3;
  byte *pbVar4;
  HINSTANCE__ *pHVar5;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0041b100;
  puStack_10 = &DAT_00418b02;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_00427da8 = 0xffffffff;
  DAT_00427dac = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00427d9c;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_00427d98;
  _DAT_00427da4 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_00418b01();
  if (DAT_004264a0 == 0) {
    __setusermatherr(&LAB_00418afe);
  }
  FUN_00418aec();
  initterm(&DAT_0041e750,&DAT_0041e754);
  local_70.newmode = DAT_00427d94;
  __getmainargs(&local_64,&local_74,&local_68,DAT_00427d90,&local_70);
  initterm(&DAT_0041d000,&DAT_0041e74c);
  pbVar4 = *(byte **)_acmdln_exref;
  if (*pbVar4 != 0x22) {
    do {
      if (*pbVar4 < 0x21) goto LAB_00418a69;
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (*pbVar4 == 0) break;
  } while (*pbVar4 != 0x22);
  if (*pbVar4 != 0x22) goto LAB_00418a69;
  do {
    pbVar4 = pbVar4 + 1;
LAB_00418a69:
  } while ((*pbVar4 != 0) && (*pbVar4 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = (uint)local_60.wShowWindow;
  }
  pHVar5 = (HINSTANCE__ *)0x0;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_00418b0e(pHVar3,pHVar5,(char *)pbVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(local_6c);
}


// ---- __dllonexit @ 00418ad4

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00418ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- ~type_info @ 00418ada

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x00418ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- _XcptFilter @ 00418ae0

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}


// ---- initterm @ 00418ae6

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00418ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- FUN_00418aec @ 00418aec

void FUN_00418aec(void)

{
  _controlfp(0x10000,0x30000);
  return;
}


// ---- FUN_00418b01 @ 00418b01

void FUN_00418b01(void)

{
  return;
}


// ---- _controlfp @ 00418b08

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}


// ---- FUN_00418b0e @ 00418b0e

void FUN_00418b0e(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  AfxWinMain(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_00418b26 @ 00418b26

undefined4 FUN_00418b26(int param_1,undefined4 param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  pAVar1[0x14] = SUB41(param_1,0);
  *(undefined4 *)(pAVar1 + 0x1040) = param_2;
  if (param_1 == 0) {
    _setmbcp(-3);
  }
  return 1;
}


// ---- AfxWinMain @ 00418b66

int AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00418b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinMain(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- Unwind@00418b70 @ 00418b70

void Unwind_00418b70(void)

{
  int unaff_EBP;
  
  FUN_00402850(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418b90 @ 00418b90

void Unwind_00418b90(void)

{
  int unaff_EBP;
  
  FUN_00402850(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418bb0 @ 00418bb0

void Unwind_00418bb0(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418bc4 @ 00418bc4

void Unwind_00418bc4(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418bd7 @ 00418bd7

void Unwind_00418bd7(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418bea @ 00418bea

void Unwind_00418bea(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418bfd @ 00418bfd

void Unwind_00418bfd(void)

{
  FUN_00404f00();
  return;
}


// ---- Unwind@00418c10 @ 00418c10

void Unwind_00418c10(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418c30 @ 00418c30

void Unwind_00418c30(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418c43 @ 00418c43

void Unwind_00418c43(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@00418c4c @ 00418c4c

void Unwind_00418c4c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x20) + 0xc4));
  return;
}


// ---- Unwind@00418c65 @ 00418c65

void Unwind_00418c65(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418c79 @ 00418c79

void Unwind_00418c79(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418c82 @ 00418c82

void Unwind_00418c82(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x44));
  return;
}


// ---- Unwind@00418c8c @ 00418c8c

void Unwind_00418c8c(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x4c));
  return;
}


// ---- Unwind@00418c96 @ 00418c96

void Unwind_00418c96(void)

{
  int unaff_EBP;
  
  CCommandLineInfo::~CCommandLineInfo((CCommandLineInfo *)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@00418ca9 @ 00418ca9

void Unwind_00418ca9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418cbc @ 00418cbc

void Unwind_00418cbc(void)

{
  int unaff_EBP;
  
  FUN_00407320((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@00418cd0 @ 00418cd0

void Unwind_00418cd0(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418cf0 @ 00418cf0

void Unwind_00418cf0(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418d04 @ 00418d04

void Unwind_00418d04(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418d0d @ 00418d0d

void Unwind_00418d0d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418d16 @ 00418d16

void Unwind_00418d16(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@00418d1f @ 00418d1f

void Unwind_00418d1f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@00418d40 @ 00418d40

void Unwind_00418d40(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418d60 @ 00418d60

void Unwind_00418d60(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418d74 @ 00418d74

void Unwind_00418d74(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418d87 @ 00418d87

void Unwind_00418d87(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418d9a @ 00418d9a

void Unwind_00418d9a(void)

{
  int unaff_EBP;
  
  CFrameWnd::~CFrameWnd(*(CFrameWnd **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418da3 @ 00418da3

void Unwind_00418da3(void)

{
  int unaff_EBP;
  
  CStatusBar::~CStatusBar((CStatusBar *)(*(int *)(unaff_EBP + -0x1c) + 200));
  return;
}


// ---- Unwind@00418db2 @ 00418db2

void Unwind_00418db2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 0x16c));
  return;
}


// ---- Unwind@00418dc1 @ 00418dc1

void Unwind_00418dc1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 0x170));
  return;
}


// ---- Unwind@00418dd0 @ 00418dd0

void Unwind_00418dd0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 0x174));
  return;
}


// ---- Unwind@00418ddf @ 00418ddf

void Unwind_00418ddf(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 0x178));
  return;
}


// ---- Unwind@00418df8 @ 00418df8

void Unwind_00418df8(void)

{
  int unaff_EBP;
  
  CFrameWnd::~CFrameWnd(*(CFrameWnd **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418e01 @ 00418e01

void Unwind_00418e01(void)

{
  int unaff_EBP;
  
  CStatusBar::~CStatusBar((CStatusBar *)(*(int *)(unaff_EBP + -0x10) + 200));
  return;
}


// ---- Unwind@00418e10 @ 00418e10

void Unwind_00418e10(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x16c));
  return;
}


// ---- Unwind@00418e1f @ 00418e1f

void Unwind_00418e1f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x170));
  return;
}


// ---- Unwind@00418e2e @ 00418e2e

void Unwind_00418e2e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x174));
  return;
}


// ---- Unwind@00418e3d @ 00418e3d

void Unwind_00418e3d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x178));
  return;
}


// ---- Unwind@00418e56 @ 00418e56

void Unwind_00418e56(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418e5f @ 00418e5f

void Unwind_00418e5f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418e68 @ 00418e68

void Unwind_00418e68(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@00418e7b @ 00418e7b

void Unwind_00418e7b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418e84 @ 00418e84

void Unwind_00418e84(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@00418e8d @ 00418e8d

void Unwind_00418e8d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418e96 @ 00418e96

void Unwind_00418e96(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@00418e9f @ 00418e9f

void Unwind_00418e9f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@00418ea8 @ 00418ea8

void Unwind_00418ea8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@00418eb1 @ 00418eb1

void Unwind_00418eb1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@00418ec4 @ 00418ec4

void Unwind_00418ec4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418ecd @ 00418ecd

void Unwind_00418ecd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x188));
  return;
}


// ---- Unwind@00418ed9 @ 00418ed9

void Unwind_00418ed9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x180));
  return;
}


// ---- Unwind@00418eef @ 00418eef

void Unwind_00418eef(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418ef8 @ 00418ef8

void Unwind_00418ef8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418f10 @ 00418f10

void Unwind_00418f10(void)

{
  int unaff_EBP;
  
  FUN_00402850(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418f19 @ 00418f19

void Unwind_00418f19(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@00418f25 @ 00418f25

void Unwind_00418f25(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@00418f31 @ 00418f31

void Unwind_00418f31(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@00418f3d @ 00418f3d

void Unwind_00418f3d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ---- Unwind@00418f53 @ 00418f53

void Unwind_00418f53(void)

{
  int unaff_EBP;
  
  FUN_00402850(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418f5c @ 00418f5c

void Unwind_00418f5c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@00418f68 @ 00418f68

void Unwind_00418f68(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@00418f74 @ 00418f74

void Unwind_00418f74(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@00418f8a @ 00418f8a

void Unwind_00418f8a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418f93 @ 00418f93

void Unwind_00418f93(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00418f9c @ 00418f9c

void Unwind_00418f9c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@00418fa5 @ 00418fa5

void Unwind_00418fa5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@00418fc6 @ 00418fc6

void Unwind_00418fc6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@00418fdd @ 00418fdd

void Unwind_00418fdd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@00418ff0 @ 00418ff0

void Unwind_00418ff0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00418ff9 @ 00418ff9

void Unwind_00418ff9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00419002 @ 00419002

void Unwind_00419002(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@0041900b @ 0041900b

void Unwind_0041900b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041902c @ 0041902c

void Unwind_0041902c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00419035 @ 00419035

void Unwind_00419035(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@0041903e @ 0041903e

void Unwind_0041903e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@00419051 @ 00419051

void Unwind_00419051(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0041905a @ 0041905a

void Unwind_0041905a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00419063 @ 00419063

void Unwind_00419063(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@00419076 @ 00419076

void Unwind_00419076(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0041907f @ 0041907f

void Unwind_0041907f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00419088 @ 00419088

void Unwind_00419088(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@0041909b @ 0041909b

void Unwind_0041909b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004190a4 @ 004190a4

void Unwind_004190a4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@004190ad @ 004190ad

void Unwind_004190ad(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@004190c0 @ 004190c0

void Unwind_004190c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004190c9 @ 004190c9

void Unwind_004190c9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@004190d2 @ 004190d2

void Unwind_004190d2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@004190e5 @ 004190e5

void Unwind_004190e5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@004190f8 @ 004190f8

void Unwind_004190f8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@0041910b @ 0041910b

void Unwind_0041910b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@0041911e @ 0041911e

void Unwind_0041911e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@00419127 @ 00419127

void Unwind_00419127(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@0041913a @ 0041913a

void Unwind_0041913a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@00419143 @ 00419143

void Unwind_00419143(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00419156 @ 00419156

void Unwind_00419156(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@0041915f @ 0041915f

void Unwind_0041915f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00419172 @ 00419172

void Unwind_00419172(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@0041917b @ 0041917b

void Unwind_0041917b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00419184 @ 00419184

void Unwind_00419184(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0041918d @ 0041918d

void Unwind_0041918d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@004191b0 @ 004191b0

void Unwind_004191b0(void)

{
  int unaff_EBP;
  
  FUN_00402870(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@004191c4 @ 004191c4

void Unwind_004191c4(void)

{
  int unaff_EBP;
  
  FUN_00402850(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004191d7 @ 004191d7

void Unwind_004191d7(void)

{
  int unaff_EBP;
  
  FUN_00402850(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004191ea @ 004191ea

void Unwind_004191ea(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004191fd @ 004191fd

void Unwind_004191fd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00419206 @ 00419206

void Unwind_00419206(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x138) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041922a @ 0041922a

void Unwind_0041922a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x180));
  return;
}


// ---- Unwind@00419236 @ 00419236

void Unwind_00419236(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041925a @ 0041925a

void Unwind_0041925a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x174));
  return;
}


// ---- Unwind@00419266 @ 00419266

void Unwind_00419266(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041928a @ 0041928a

void Unwind_0041928a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00419293 @ 00419293

void Unwind_00419293(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@004192b7 @ 004192b7

void Unwind_004192b7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x174));
  return;
}


// ---- Unwind@004192c3 @ 004192c3

void Unwind_004192c3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@004192e7 @ 004192e7

void Unwind_004192e7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@004192fa @ 004192fa

void Unwind_004192fa(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0041930d @ 0041930d

void Unwind_0041930d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@00419319 @ 00419319

void Unwind_00419319(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x188) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041933d @ 0041933d

void Unwind_0041933d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@00419349 @ 00419349

void Unwind_00419349(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x188) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041936d @ 0041936d

void Unwind_0041936d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x174));
  return;
}


// ---- Unwind@00419379 @ 00419379

void Unwind_00419379(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@0041939d @ 0041939d

void Unwind_0041939d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004193a6 @ 004193a6

void Unwind_004193a6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@004193b9 @ 004193b9

void Unwind_004193b9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004193cc @ 004193cc

void Unwind_004193cc(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004193df @ 004193df

void Unwind_004193df(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x11194));
  return;
}


// ---- Unwind@004193f5 @ 004193f5

void Unwind_004193f5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@004193fe @ 004193fe

void Unwind_004193fe(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x180));
  return;
}


// ---- Unwind@00419414 @ 00419414

void Unwind_00419414(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@0041941d @ 0041941d

void Unwind_0041941d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@00419430 @ 00419430

void Unwind_00419430(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x1c));
  return;
}


// ---- Unwind@00419443 @ 00419443

void Unwind_00419443(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x18));
  return;
}


// ---- Unwind@00419456 @ 00419456

void Unwind_00419456(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x1c));
  return;
}


// ---- Unwind@00419469 @ 00419469

void Unwind_00419469(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@0041947c @ 0041947c

void Unwind_0041947c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@0041948f @ 0041948f

void Unwind_0041948f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@004194a2 @ 004194a2

void Unwind_004194a2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@004194b5 @ 004194b5

void Unwind_004194b5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@004194c8 @ 004194c8

void Unwind_004194c8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@004194db @ 004194db

void Unwind_004194db(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@004194ee @ 004194ee

void Unwind_004194ee(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@00419501 @ 00419501

void Unwind_00419501(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@00419514 @ 00419514

void Unwind_00419514(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@00419527 @ 00419527

void Unwind_00419527(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@0041953a @ 0041953a

void Unwind_0041953a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@0041954d @ 0041954d

void Unwind_0041954d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x10));
  return;
}


// ---- Unwind@00419560 @ 00419560

void Unwind_00419560(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@00419573 @ 00419573

void Unwind_00419573(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


