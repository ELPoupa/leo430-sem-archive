// Decompiled with Ghidra from view.exe
// Format: New Executable (NE), image base 0000:0000

// ---- FUN_1000_0000 @ 1000:0000

/* Title:  LEO DATA.VAC File Viewer. Copyright (c) LEO Electron Microscopy Ltd 1997
   Format: New Executable (NE) Windows
   CRC:    00000000
   
   Program Entry Point (CS:IP):   0001:5e48
   Initial Stack Pointer (SS:SP): 0002:0000
   Auto Data Segment Index:       0002
   Initial Heap Size:             0400
   Initial Stack Size:            2800
   Minimum Code Swap Size:        0000
   
   Linker Version:  5.60
   Target OS:       Windows
   Windows Version: 3.10
   
   Program Flags:     02
           Multi Data
   Application Flags: 03
           Windows P.M. API
   Other Flags:       08
    */

undefined2 __stdcall16far FUN_1000_0000(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  
                    /* Segment:    1
                       Offset:     000005e0
                       Length:     7f49
                       Min Alloc:  7f49
                       Flags:      1d50
                           Code
                           Discardable
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_1000_613a();
  *(undefined2 *)0x416e = in_stack_0000000a;
  uVar1 = CREATESOLIDBRUSH();
  *(undefined2 *)0x3b34 = uVar1;
  uVar1 = CREATEPEN();
  *(undefined2 *)0x3b32 = uVar1;
  if (*(int *)0x416e == 0) {
    LOADICON();
    LOADCURSOR();
    REGISTERCLASS();
  }
  *(undefined2 *)0x415e = in_stack_0000000c;
  _WSPRINTF();
  uVar1 = CREATEWINDOW();
  *(undefined2 *)0x3ae2 = uVar1;
  if (*(int *)0x12 != 0) {
    uVar1 = LOADACCELERATORS();
    *(undefined2 *)0x3ae0 = uVar1;
    unaff_SS = *(undefined2 *)0x3ae2;
    SHOWWINDOW();
    UPDATEWINDOW();
    while (iVar2 = GETMESSAGE(), iVar2 != 0) {
      iVar2 = TRANSLATEACCELERATOR();
      if (iVar2 == 0) {
        TRANSLATEMESSAGE();
        DISPATCHMESSAGE();
      }
    }
  }
  return unaff_SS;
}


// ---- WNDPROC @ 1000:01a4

undefined2 __stdcall16far
WNDPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  if (param_4 == 1) {
    uVar1 = CREATEWINDOW(0x1000,0,0,*(undefined2 *)0x415e,1,param_5,*(int *)0x2f4 - *(int *)0x2f0,
                         *(int *)0x2f2 - *(int *)0x2ee,*(undefined2 *)0x2f0,*(undefined2 *)0x2ee,
                         0x201,0x50a0,0x374,unaff_SS,0x375,unaff_SS,unaff_DI);
    *(undefined2 *)0x3b36 = uVar1;
    uVar3 = 0xb;
    uVar1 = GETSTOCKOBJECT((char *)s_Viewing_Window_1008_1037 + 1,0xb,0x30,*(undefined2 *)0x3b36);
    SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,1,0,uVar1,uVar3);
    uVar1 = GETDC((char *)s_Viewing_Window_1008_1037 + 1,*(undefined2 *)0x3b36);
    uVar3 = uVar1;
    GETTEXTMETRICS((char *)s_Viewing_Window_1008_1037 + 1,0x3ae8,unaff_SS);
    iVar2 = GETSYSTEMMETRICS((char *)s_Viewing_Window_1008_1037 + 1,10,uVar1);
    *(int *)0x2ec = ((*(int *)0x2f2 - *(int *)0x2ee) - iVar2) / (*(int *)0x3af2 + 1) + -3;
    uVar1 = *(undefined2 *)0x3b36;
    RELEASEDC((char *)s_Viewing_Window_1008_1037 + 1,uVar3);
    uVar1 = CREATEWINDOW((char *)s_Viewing_Window_1008_1037 + 1,0,0,*(undefined2 *)0x415e,2,param_5,
                         *(int *)0x2fc - *(int *)0x2f8,*(int *)0x2fa - *(int *)0x2f6,
                         *(undefined2 *)0x2f8,*(undefined2 *)0x2f6,1,0x5000,0x37e,unaff_SS,0x385,
                         unaff_SS,uVar1);
    *(undefined2 *)0x3b38 = uVar1;
    FUN_1000_05c4(1,0,0,param_5);
    iVar2 = FUN_1000_0c24(*(undefined2 *)0x3ae2,0x2fe);
    if (iVar2 != 0) {
      FUN_1000_1260();
    }
    *(undefined2 *)0x12 = 1;
    uVar1 = 0;
  }
  else if (param_4 == 2) {
    UNREGISTERCLASS(0x1000,*(undefined2 *)0x415e,0x1d8);
    DELETEOBJECT((char *)s_Viewing_Window_1008_1037 + 1,*(undefined2 *)0x3b34);
    DELETEOBJECT((char *)s_Viewing_Window_1008_1037 + 1,*(undefined2 *)0x3b32);
    POSTQUITMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0);
    uVar1 = 0;
  }
  else {
    if (param_4 == 0x19) {
      iVar2 = FUN_1000_6850();
      if (iVar2 == 6) {
        SETBKCOLOR(0x1000,0xc0c0,0xc0);
        return *(undefined2 *)0x3b34;
      }
      iVar2 = FUN_1000_6850();
      if (iVar2 == 3) {
        GETSTOCKOBJECT(0x1000,0);
        return *(undefined2 *)0x3b34;
      }
    }
    else if (param_4 == 0x111) {
      if (param_3 != 2) {
        if (param_3 == 100) {
          LSTRCPY(0x1000,0x351,unaff_SS,0x1f6);
          iVar2 = FUN_1000_0c24(param_5,0x1f6);
          if (iVar2 == 0) {
            FUN_1000_0670(0x352);
          }
          else {
            uVar1 = *(undefined2 *)0x3b36;
            SENDMESSAGE(0x1000,0,0,0,0x40b);
            FUN_1000_1260(uVar1);
          }
          return 0;
        }
        if (param_3 == 200) {
          FUN_1000_0f66(param_5);
          return 0;
        }
        if (param_3 == 0xfa) {
          FUN_1000_0da8(param_5);
          return 0;
        }
        if (param_3 != 300) {
          return 0;
        }
      }
      POSTMESSAGE(0x1000,0,0,0,0x10);
      return 0;
    }
    uVar1 = DEFWINDOWPROC(0x1000,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


// ---- ABORTPROC @ 1000:049c

bool __stdcall16far ABORTPROC(void)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_SS;
  undefined1 local_1a [2];
  undefined2 uStack_18;
  char *pcStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  char *pcStack_e;
  
  pcVar2 = (char *)0x1000;
  FUN_1000_613a();
  while (*(int *)0x16 == 0) {
    pcStack_e = (char *)0x0;
    pcStack_10 = (char *)0x0;
    uStack_12 = 0;
    uStack_14 = 1;
    uStack_18 = 0x4cc;
    pcStack_16 = pcVar2;
    iVar1 = PEEKMESSAGE();
    if (iVar1 == 0) break;
    if (*(int *)0x10 == 0) {
LAB_1000_04f6:
      pcStack_e = (char *)s_Viewing_Window_1008_1037 + 1;
      pcStack_10 = (char *)0x502;
      TRANSLATEMESSAGE();
      pcStack_e = local_1a;
      pcStack_10 = (char *)s_Viewing_Window_1008_1037 + 1;
      uStack_12 = 0x50e;
      DISPATCHMESSAGE();
    }
    else {
      pcStack_e = local_1a;
      pcStack_10 = (char *)s_Viewing_Window_1008_1037 + 1;
      uStack_12 = 0x4ee;
      iVar1 = ISDIALOGMESSAGE();
      if (iVar1 == 0) goto LAB_1000_04f6;
    }
    pcVar2 = (char *)s_Viewing_Window_1008_1037 + 1;
  }
  return *(int *)0x16 == 0;
}


// ---- PRINTDLGPROC @ 1000:0532

undefined2 __stdcall16far PRINTDLGPROC(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  int in_stack_0000000a;
  undefined2 in_stack_0000000c;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  if (in_stack_0000000a == 0x110) {
    SETWINDOWTEXT(0x1000,0x38c);
    GETSYSTEMMENU((char *)s_Viewing_Window_1008_1037 + 1,0);
    ENABLEMENUITEM((char *)s_Viewing_Window_1008_1037 + 1,1,0xf060);
    uVar1 = 1;
  }
  else if (in_stack_0000000a == 0x111) {
    *(undefined2 *)0x16 = 1;
    uVar1 = GETPARENT(0x1000,in_stack_0000000c);
    ENABLEWINDOW((char *)s_Viewing_Window_1008_1037 + 1,1);
    DESTROYWINDOW((char *)s_Viewing_Window_1008_1037 + 1,in_stack_0000000c,uVar1);
    *(undefined2 *)0x10 = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1000_05c4 @ 1000:05c4

void __stdcall16far FUN_1000_05c4(int param_1,int param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *local_12;
  int local_10;
  char **local_e;
  
  FUN_1000_613a();
  local_e = &local_12;
  local_10 = 0x1000;
  local_12 = (char *)0x5e5;
  GETWINDOWRECT();
  local_e = (char **)((char *)s_Viewing_Window_1008_1037 + 1);
  local_10 = 0x5ec;
  iVar1 = GETSYSTEMMETRICS();
  local_10 = 1;
  local_12 = (char *)s_Viewing_Window_1008_1037 + 1;
  iVar2 = GETSYSTEMMETRICS();
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = -1;
  }
  SETWINDOWPOS((char *)s_Viewing_Window_1008_1037 + 1,1,0,0,
               (iVar3 + local_10) / 2 + (iVar2 / 100) * param_2,
               (iVar1 - ((int)local_e - (int)local_12)) / 2 + param_4,iVar3);
  return;
}


// ---- FUN_1000_0670 @ 1000:0670

void __cdecl16far FUN_1000_0670(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  MESSAGEBEEP(0x1000,0x10);
  MESSAGEBOX((char *)s_Viewing_Window_1008_1037 + 1,0x10,0,0,param_1,param_2);
  return;
}


// ---- FUN_1000_06a6 @ 1000:06a6

void __cdecl16far FUN_1000_06a6(undefined2 param_1,int param_2)

{
  undefined2 unaff_SS;
  int iVar1;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  LSTRCPY(0x1000,0x392,unaff_SS,param_1);
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar1 = param_2;
    LSTRCAT((char *)s_Viewing_Window_1008_1037 + 1,0x393,unaff_SS,param_1);
  }
  return;
}


// ---- FUN_1000_070a @ 1000:070a

void __cdecl16far FUN_1000_070a(undefined2 param_1)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  _WSPRINTF(0x1000,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,param_1);
  FUN_1000_06a6(0x246);
  _WSPRINTF(0x1000,0x138);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x138,unaff_SS,0,0x403);
  return;
}


// ---- FUN_1000_07a8 @ 1000:07a8

void __cdecl16far FUN_1000_07a8(void)

{
  undefined1 local_108 [236];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  
  FUN_1000_613a();
  puStack_18 = (undefined1 *)0x1000;
  uStack_1a = 0x7d8;
  FUN_1000_6748();
  puStack_18 = local_108;
  uStack_1a = 0x1000;
  uStack_1c = 0x7fc;
  _WSPRINTF();
  puStack_18 = (undefined1 *)0x818;
  LSTRLEN();
  puStack_18 = (undefined1 *)0x81e;
  _LWRITE();
  return;
}


// ---- FUN_1000_0826 @ 1000:0826

void __cdecl16far FUN_1000_0826(void)

{
  undefined1 local_108 [238];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  char *pcStack_16;
  
  FUN_1000_613a();
  pcStack_16 = local_108;
  uStack_18 = 0x1000;
  uStack_1a = 0x855;
  _WSPRINTF();
  pcStack_16 = (char *)s_Viewing_Window_1008_1037 + 1;
  uStack_18 = 0x871;
  LSTRLEN();
  pcStack_16 = (char *)s_Viewing_Window_1008_1037 + 1;
  uStack_18 = 0x877;
  _LWRITE();
  return;
}


// ---- FUN_1000_0880 @ 1000:0880

void __cdecl16far FUN_1000_0880(void)

{
  undefined1 local_108 [236];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  
  FUN_1000_613a();
  puStack_18 = local_108;
  uStack_1a = 0x1000;
  uStack_1c = 0x8b2;
  _WSPRINTF();
  puStack_18 = (undefined1 *)0x8ce;
  LSTRLEN();
  puStack_18 = (undefined1 *)0x8d4;
  _LWRITE();
  return;
}


// ---- FUN_1000_08dc @ 1000:08dc

void __cdecl16far FUN_1000_08dc(void)

{
  undefined1 local_108 [238];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  char *pcStack_16;
  
  FUN_1000_613a();
  pcStack_16 = local_108;
  uStack_18 = 0x1000;
  uStack_1a = 0x90b;
  _WSPRINTF();
  pcStack_16 = (char *)s_Viewing_Window_1008_1037 + 1;
  uStack_18 = 0x927;
  LSTRLEN();
  pcStack_16 = (char *)s_Viewing_Window_1008_1037 + 1;
  uStack_18 = 0x92d;
  _LWRITE();
  return;
}


// ---- FUN_1000_0936 @ 1000:0936

void __cdecl16far FUN_1000_0936(void)

{
  undefined1 local_108 [236];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  
  FUN_1000_613a();
  puStack_18 = local_108;
  uStack_1a = 0x1000;
  uStack_1c = 0x968;
  _WSPRINTF();
  puStack_18 = (undefined1 *)0x984;
  LSTRLEN();
  puStack_18 = (undefined1 *)0x98a;
  _LWRITE();
  return;
}


// ---- FUN_1000_0992 @ 1000:0992

void __cdecl16far FUN_1000_0992(undefined2 param_1)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  _WSPRINTF(0x1000,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,param_1);
  FUN_1000_06a6(0x246);
  _WSPRINTF(0x1000,0x138);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x138,unaff_SS,0,0x403);
  return;
}


// ---- FUN_1000_0a2c @ 1000:0a2c

void __cdecl16far FUN_1000_0a2c(undefined2 param_1)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  _WSPRINTF(0x1000,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,param_1);
  FUN_1000_06a6(0x246);
  _WSPRINTF(0x1000,0x138);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x138,unaff_SS,0,0x403);
  return;
}


// ---- FUN_1000_0aca @ 1000:0aca

void __cdecl16far FUN_1000_0aca(undefined2 param_1,undefined2 param_2,float param_3)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  FUN_1000_6748((double)param_3,7,0x188);
  _WSPRINTF(0x1000);
  LSTRLEN();
  LSTRLEN();
  FUN_1000_06a6(0x246);
  _WSPRINTF(0x1000,0x138);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x138,unaff_SS,0);
  return;
}


// ---- FUN_1000_0b8a @ 1000:0b8a

void __cdecl16far FUN_1000_0b8a(undefined2 param_1)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  _WSPRINTF(0x1000,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,0x296);
  LSTRLEN((char *)s_Viewing_Window_1008_1037 + 1,param_1);
  FUN_1000_06a6(0x246);
  _WSPRINTF(0x1000,0x138);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x138,unaff_SS,0,0x403);
  return;
}


// ---- FUN_1000_0c24 @ 1000:0c24

bool __cdecl16far FUN_1000_0c24(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_a;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  for (local_a = 0; *(char *)(local_a + 0x5f0) != '\0'; local_a = local_a + 1) {
    if (*(char *)(local_a + 0x5f0) == *(char *)s__Please_Select_a_DATA_VAC_File_t_1008_06f0) {
      *(undefined1 *)(local_a + 0x5f0) = 0;
    }
  }
  iVar1 = LSTRLEN(0x1000,param_2);
  if (iVar1 == 0) {
    *(undefined2 *)0x3a78 = 0x48;
    *(undefined2 *)0x3a7a = 0;
    *(undefined2 *)0x3a7c = param_1;
    *(undefined2 *)0x3a80 = 0x5f0;
    *(undefined2 *)0x3a82 = unaff_SS;
    *(undefined2 *)0x3a84 = 0;
    *(undefined2 *)0x3a86 = 0;
    *(undefined2 *)0x3a88 = 0;
    *(undefined2 *)0x3a8a = 0;
    *(undefined2 *)0x3a8c = 1;
    *(undefined2 *)0x3a8e = 0;
    *(undefined2 *)0x3a90 = 0x3f0;
    *(undefined2 *)0x3a92 = unaff_SS;
    *(undefined2 *)0x3a94 = 0x100;
    *(undefined2 *)0x3a96 = 0;
    *(undefined2 *)0x3a98 = 0x4f0;
    *(undefined2 *)0x3a9a = unaff_SS;
    *(undefined2 *)0x3a9c = 0x100;
    *(undefined2 *)0x3a9e = 0;
    *(undefined2 *)0x3aa0 = 0;
    *(undefined2 *)0x3aa2 = 0;
    *(undefined2 *)0x3aa4 = 0x6f1;
    *(undefined2 *)0x3aa6 = unaff_SS;
    *(undefined2 *)0x3aa8 = 4;
    *(undefined2 *)0x3aaa = 0;
    *(undefined2 *)0x3aac = 0;
    *(undefined2 *)0x3aae = 0;
    *(undefined2 *)0x3ab0 = 0x717;
    *(undefined2 *)0x3ab2 = unaff_SS;
    iVar1 = GETOPENFILENAME((char *)s_Viewing_Window_1008_1037 + 1,0x3a78);
    if (iVar1 == 0) {
      return false;
    }
    LSTRCPY((char *)s_Viewing_Window_1008_1037 + 1,*(undefined2 *)0x3a90,*(undefined2 *)0x3a92,
            param_2);
  }
  uVar2 = _LOPEN((char *)s_Viewing_Window_1008_1037 + 1,0,param_2);
  *(undefined2 *)0x4170 = uVar2;
  iVar1 = *(int *)0x4170;
  if (iVar1 != -1) {
    LSTRCPY((char *)s_Viewing_Window_1008_1037 + 1,param_2,param_3,0x98);
  }
  return iVar1 != -1;
}


// ---- FUN_1000_0da8 @ 1000:0da8

undefined2 __cdecl16far FUN_1000_0da8(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  int iVar2;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  for (iVar2 = 0; *(char *)(iVar2 + 0x91c) != '\0'; iVar2 = iVar2 + 1) {
    if (*(char *)(iVar2 + 0x91c) == *(char *)s__Please_define_filename_for_expo_1008_0a1c) {
      *(undefined1 *)(iVar2 + 0x91c) = 0;
    }
  }
  *(undefined2 *)0x3930 = 0x48;
  *(undefined2 *)0x3932 = 0;
  *(undefined2 *)0x3934 = param_1;
  *(undefined2 *)0x3938 = 0x91c;
  *(undefined2 *)0x393a = unaff_SS;
  *(undefined2 *)0x393c = 0;
  *(undefined2 *)0x393e = 0;
  *(undefined2 *)0x3940 = 0;
  *(undefined2 *)0x3942 = 0;
  *(undefined2 *)0x3944 = 1;
  *(undefined2 *)0x3946 = 0;
  *(undefined2 *)0x3948 = 0x71c;
  *(undefined2 *)0x394a = unaff_SS;
  *(undefined2 *)0x394c = 0x100;
  *(undefined2 *)0x394e = 0;
  *(undefined2 *)0x3950 = 0x81c;
  *(undefined2 *)0x3952 = unaff_SS;
  *(undefined2 *)0x3954 = 0x100;
  *(undefined2 *)0x3956 = 0;
  *(undefined2 *)0x3958 = 0;
  *(undefined2 *)0x395a = 0;
  *(undefined2 *)0x395c = 0xa1d;
  *(undefined2 *)0x395e = unaff_SS;
  *(undefined2 *)0x3960 = 4;
  *(undefined2 *)0x3962 = 0;
  *(undefined2 *)0x3964 = 0;
  *(undefined2 *)0x3966 = 0;
  *(undefined2 *)0x3968 = 0xa46;
  *(undefined2 *)0x396a = unaff_SS;
  iVar2 = GETSAVEFILENAME(0x1000,0x3930);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    LSTRCPY((char *)s_Viewing_Window_1008_1037 + 1,*(undefined2 *)0x3948,*(undefined2 *)0x394a,
            0x3978);
    uVar1 = _LCREAT((char *)s_Viewing_Window_1008_1037 + 1,0,0x3978);
    *(undefined2 *)0x3ae6 = uVar1;
    if (*(int *)0x3ae6 < 0) {
      FUN_1000_0670(0xa4a);
      uVar1 = 0;
    }
    else {
      _LCLOSE((char *)s_Viewing_Window_1008_1037 + 1,*(undefined2 *)0x3ae6);
      uVar1 = _LOPEN((char *)s_Viewing_Window_1008_1037 + 1,1,0x3978);
      *(undefined2 *)0x3ae6 = uVar1;
      if (*(int *)0x4170 == -1) {
        uVar1 = 0;
      }
      else {
        FUN_1000_5b30(0x3f0d);
        FUN_1000_4d6e(0x3b65);
        _LCLOSE(0x1000,*(undefined2 *)0x3ae6);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


// ---- FUN_1000_0f66 @ 1000:0f66

undefined2 __cdecl16far FUN_1000_0f66(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  int local_16;
  int local_14;
  int local_a;
  
  FUN_1000_613a();
  iVar2 = SENDMESSAGE();
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    iVar2 = PRINTDLG();
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      GETTEXTMETRICS();
      iVar2 = *(int *)0x3ae8;
      iVar1 = *(int *)0x3af0;
      GETDEVICECAPS();
      iVar3 = GETDEVICECAPS();
      iVar3 = iVar3 / (iVar2 + iVar1);
      ENABLEWINDOW();
      *(undefined2 *)0x16 = 0;
      local_16 = 0x1000;
      MAKEPROCINSTANCE();
      uVar4 = CREATEDIALOG();
      *(undefined2 *)0x10 = uVar4;
      MAKEPROCINSTANCE();
      SETABORTPROC();
      iVar2 = STARTDOC();
      if (iVar2 == -1) {
        local_16 = 1;
      }
      else {
        for (local_14 = 0; local_14 < (iVar3 + -1) / iVar3; local_14 = local_14 + 1) {
          iVar2 = STARTPAGE();
          if (iVar2 < 0) {
            local_16 = 1;
            break;
          }
          for (local_a = 0; (local_a < iVar3 && (iVar3 * local_14 + local_a < 1));
              local_a = local_a + 1) {
            SENDMESSAGE();
            TEXTOUT();
          }
          iVar2 = ENDPAGE();
          if (iVar2 < 0) {
            local_16 = 1;
            break;
          }
          if (*(int *)0x16 != 0) {
            local_16 = 1;
            break;
          }
        }
        if (local_16 == 0) {
          ENDDOC();
        }
      }
      if (*(int *)0x16 == 0) {
        ENABLEWINDOW();
        DESTROYWINDOW();
      }
      FREEPROCINSTANCE();
      FREEPROCINSTANCE();
      DELETEDC();
      if (local_16 != 0) {
        FUN_1000_0670();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


// ---- FUN_1000_1260 @ 1000:1260

undefined2 __cdecl16far FUN_1000_1260(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  if (*(int *)0x4170 < 0) {
    FUN_1000_0670(0xaa3);
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_1000_48f0(0x3b3e);
    if (cVar1 == '\0') {
      cVar1 = FUN_1000_4b3a(0x3b3e);
      if (cVar1 == '\0') {
        _LCLOSE(0x1000,*(undefined2 *)0x4170);
        FUN_1000_0670(0xa91);
        return 0;
      }
      *(undefined1 *)0x4164 = *(undefined1 *)0x3c2b;
      FUN_1000_136c(0x3b3e);
      FUN_1000_1428(0x3b43);
      FUN_1000_1bda(0x3b4f);
      FUN_1000_213e(0x3b65);
      FUN_1000_3680(0x3f0d);
      FUN_1000_42dc(0x40ea);
      FUN_1000_441c(0x40ef);
    }
    _LCLOSE(0x1000,*(undefined2 *)0x4170);
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_136c @ 1000:136c

void __cdecl16far FUN_1000_136c(void)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  _WSPRINTF(0x1000,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0xad8,unaff_SS,0,0x403);
  FUN_1000_070a(0xada);
  FUN_1000_0992(0xae3);
  FUN_1000_0992(0xaf2);
  FUN_1000_0992(0xafe);
  return;
}


// ---- FUN_1000_1428 @ 1000:1428

void __cdecl16far FUN_1000_1428(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  SENDMESSAGE(0x1000,0xb08,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0xb0a,unaff_SS,0,0x403);
  _WSPRINTF((char *)s_Viewing_Window_1008_1037 + 1,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0xb25,unaff_SS,0,0x403);
  switch(*param_1) {
  case 0:
    FUN_1000_070a(0xb46);
    break;
  case 1:
    FUN_1000_070a(0xb31);
    break;
  case 2:
    FUN_1000_070a(0xb5e);
    break;
  case 3:
    FUN_1000_070a(0xb79);
    break;
  case 4:
    FUN_1000_070a(0xb97);
    break;
  case 5:
    FUN_1000_070a(0xbb5);
    break;
  case 6:
    FUN_1000_070a(0xbd0);
    break;
  default:
    FUN_1000_070a(0xbe3);
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined1 *)param_1;
  if (puVar2[1] == '\0') {
    FUN_1000_070a(0xc05);
  }
  else if (puVar2[1] == '\x01') {
    FUN_1000_070a(0xbf8);
  }
  else {
    FUN_1000_070a(0xc20);
  }
  cVar1 = puVar2[2];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xc29);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xc3a);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xc4d);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xc60);
  }
  else {
    FUN_1000_070a(0xc75);
  }
  if (puVar2[3] == '\0') {
    FUN_1000_070a(0xc8d);
  }
  else if (puVar2[3] == '\x01') {
    FUN_1000_070a(0xca7);
  }
  cVar1 = puVar2[4];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xcbe);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xcd0);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xce2);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xcf6);
  }
  cVar1 = puVar2[4];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xd0a);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xd1c);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xd2e);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xd42);
  }
  cVar1 = puVar2[5];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xd56);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xd68);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xd7a);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xd8e);
  }
  cVar1 = puVar2[6];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xda2);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xdb4);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xdc6);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xdda);
  }
  cVar1 = puVar2[7];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xdee);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xe00);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xe12);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xe26);
  }
  cVar1 = puVar2[8];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xe3a);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xe4c);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xe5e);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xe72);
  }
  cVar1 = puVar2[9];
  if (cVar1 == '\0') {
    FUN_1000_070a(0xe86);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0xe98);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0xeaa);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0xebe);
  }
  if (puVar2[0xb] == '\0') {
    FUN_1000_070a(0xed1);
  }
  else if (puVar2[0xb] == '\x01') {
    FUN_1000_070a(0xee4);
  }
  if (puVar2[10] == '\0') {
    FUN_1000_070a(0xefe);
  }
  else if (puVar2[10] == '\x01') {
    FUN_1000_070a(0xf12);
  }
  else {
    FUN_1000_070a(0xf35);
  }
  return;
}


// ---- FUN_1000_1bda @ 1000:1bda

void __cdecl16far FUN_1000_1bda(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  SENDMESSAGE(0x1000,0xf42,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0xf44,unaff_SS,0,0x403);
  _WSPRINTF((char *)s_Viewing_Window_1008_1037 + 1,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0xf60,unaff_SS,0,0x403);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    FUN_1000_070a(0xf6d);
  }
  else if (*(char *)(iVar2 + 4) == '\x01') {
    FUN_1000_070a(0xf78);
  }
  else {
    FUN_1000_070a(0xf92);
  }
  if (*(char *)(iVar2 + 5) == '\0') {
    FUN_1000_070a(0xfa1);
  }
  else if (*(char *)(iVar2 + 5) == '\x01') {
    FUN_1000_070a(0xfac);
  }
  else {
    FUN_1000_070a(0xfc6);
  }
  if (*(char *)(iVar2 + 6) == '\0') {
    FUN_1000_070a(0xfd5);
  }
  else if (*(char *)(iVar2 + 6) == '\x01') {
    FUN_1000_070a(0xff0);
  }
  else {
    FUN_1000_070a((char *)s_Airlock_1008_100e);
  }
  if (*(char *)(iVar2 + 7) == '\0') {
    FUN_1000_070a((char *)s_Viewing_Window_1008_1021);
  }
  else if (*(char *)(iVar2 + 7) == '\x01') {
    FUN_1000_070a((char *)s_Viewing_Window_1008_1037);
  }
  else {
    FUN_1000_070a((char *)s_Viewing_Window_1008_105c);
  }
  if (*(char *)(iVar2 + 8) == '\0') {
    FUN_1000_070a((char *)s_Column_Pumping_1008_1076);
  }
  else if (*(char *)(iVar2 + 8) == '\x01') {
    FUN_1000_070a((char *)s_Column_Pumping_1008_108c);
  }
  else {
    FUN_1000_070a((char *)s_Column_Pumping_1008_10b1);
  }
  if (*(char *)(iVar2 + 9) == '\0') {
    FUN_1000_070a((char *)s_When_Venting_Chamber_1008_10cc);
  }
  else if (*(char *)(iVar2 + 9) == '\x01') {
    FUN_1000_070a((char *)s_When_Venting_Chamber_1008_10f0);
  }
  else {
    FUN_1000_070a((char *)s_When_Venting_Chamber_1008_1114);
  }
  if (*(char *)(iVar2 + 10) == '\0') {
    FUN_1000_070a((char *)s_WDX_Gate_Valve_1008_1149);
  }
  else if (*(char *)(iVar2 + 10) == '\x01') {
    FUN_1000_070a((char *)s_WDX_Gate_Valve_1008_1133);
  }
  else {
    FUN_1000_070a((char *)s_WDX_Gate_Valve_1008_116e);
  }
  if ((*(char *)0x4164 == '\0') || (*(char *)0x4164 == '\x04')) {
    if (*(char *)(iVar2 + 0xb) == '\0') {
      FUN_1000_070a((char *)s_IXI_Backplate_1008_1188);
    }
    else if (*(char *)(iVar2 + 0xb) == '\x01') {
      FUN_1000_070a((char *)s_IXI_Backplate_1008_119d);
    }
    else {
      FUN_1000_070a((char *)s_IXI_Backplate_1008_11c1);
    }
  }
  FUN_1000_0aca((char *)s_EDX_vac_limit__torr__1008_11cf);
  if ((*(char *)0x4164 == '\x06') || (*(char *)0x4164 == '\b')) {
    cVar1 = *(char *)(iVar2 + 0xd);
    if (cVar1 == '\0') {
      FUN_1000_070a((char *)s_Bakeout_1008_11ea);
    }
    else if (cVar1 == '\x01') {
      FUN_1000_070a((char *)s_Bakeout_1008_11fc);
    }
    else if (cVar1 == '\x02') {
      FUN_1000_070a((char *)s_Bakeout_1008_120c);
    }
    else if (cVar1 == '\x03') {
      FUN_1000_070a((char *)s_Bakeout_1008_1219);
    }
    else {
      FUN_1000_070a((char *)s_Bakeout_1008_1237);
    }
    FUN_1000_0aca((char *)s_User_Bakeout_Heating_Time__hours_1008_123f);
    FUN_1000_0aca((char *)s_User_Bakeout_Cooling_Time__hours_1008_1261);
    if (*(char *)(iVar2 + 0xc) == '\0') {
      FUN_1000_070a((char *)s_Partial_Vent_1008_1286);
    }
    else if (*(char *)(iVar2 + 0xc) == '\x01') {
      FUN_1000_070a((char *)s_Partial_Vent_1008_1297);
    }
    else {
      FUN_1000_070a((char *)s_Partial_Vent_1008_12ba);
    }
  }
  return;
}


// ---- FUN_1000_213e @ 1000:213e

void __cdecl16far FUN_1000_213e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_a;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  SENDMESSAGE(0x1000,0x12c7,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x12c9,unaff_SS,0,0x403);
  _WSPRINTF((char *)s_Viewing_Window_1008_1037 + 1,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x12e1,unaff_SS,0,0x403);
  FUN_1000_0992((char *)s_Pixel_Size_1008_12e3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1000_0992((char *)s_Mag_Cal_1008_12ee);
  FUN_1000_0aca((char *)s_Stage_Angle_1008_12f6);
  FUN_1000_0aca((char *)s_Stig_X_Upper_1008_1302);
  FUN_1000_0aca((char *)s_Stig_X_Lower_1008_130f);
  FUN_1000_0aca((char *)s_Stig_Y_Upper_1008_131c);
  FUN_1000_0aca((char *)s_Stig_Y_Lower_1008_1329);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_0__1008_1336);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_1__1008_1346);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_2__1008_1356);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_3__1008_1366);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_4__1008_1376);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_5__1008_1386);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_6__1008_1396);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_7__1008_13a6);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_8__1008_13b6);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_9__1008_13c6);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_10__1008_13d6);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_11__1008_13e7);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_12__1008_13f8);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_13__1008_1409);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_14__1008_141a);
  FUN_1000_0aca((char *)s_Mag_Comp_Amp_15__1008_142b);
  FUN_1000_0992((char *)s_Mag_Comp_Off_0__1008_143c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_1__1008_144c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_2__1008_145c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_3__1008_146c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_4__1008_147c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_5__1008_148c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_6__1008_149c);
  FUN_1000_0992((char *)s_Mag_Comp_Off_7__1008_14ac);
  FUN_1000_0992((char *)s_Mag_Comp_Off_8__1008_14bc);
  FUN_1000_0992((char *)s_Mag_Comp_Off_9__1008_14cc);
  FUN_1000_0992((char *)s_Mag_Comp_Off_10__1008_14dc);
  FUN_1000_0992((char *)s_Mag_Comp_Off_11__1008_14ed);
  FUN_1000_0992((char *)s_Mag_Comp_Off_12__1008_14fe);
  FUN_1000_0992((char *)s_Mag_Comp_Off_13__1008_150f);
  FUN_1000_0992((char *)s_Mag_Comp_Off_14__1008_1520);
  FUN_1000_0992((char *)s_Mag_Comp_Off_15__1008_1531);
  if (*(char *)0x4164 == '\x02') {
    FUN_1000_0aca((char *)s_Tip_position_1008_1542);
    FUN_1000_0aca((char *)s_Tip_radius_1008_154f);
  }
  else {
    FUN_1000_0aca((char *)s_C1_Cal_1008_155a);
    FUN_1000_0aca(0x1561);
  }
  FUN_1000_0aca(0x1568);
  FUN_1000_0aca(0x156f);
  FUN_1000_0aca(0x1576);
  FUN_1000_0aca(0x157d);
  FUN_1000_0aca((char *)s_Mag_Cal_X_1_1008_1584);
  FUN_1000_0aca((char *)s_Mag_Cal_Y_1_1008_1590);
  FUN_1000_0aca((char *)s_Mag_Cal_X_2_1008_159c);
  FUN_1000_0aca((char *)s_Mag_Cal_Y_2_1008_15a8);
  FUN_1000_0aca((char *)s_Mag_Cal_X_3_1008_15b4);
  FUN_1000_0aca((char *)s_Mag_Cal_Y_3_1008_15c0);
  FUN_1000_0aca((char *)s_Mag_Cal_X_4_1008_15cc);
  FUN_1000_0aca((char *)s_Mag_Cal_Y_4_1008_15d8);
  FUN_1000_0aca((char *)s_Mag_Cal_X_5_1008_15e4);
  FUN_1000_0aca((char *)s_Mag_Cal_Y_5_1008_15f0);
  FUN_1000_0aca((char *)s_Dual_Mag_Offset_X_1008_15fc);
  FUN_1000_0aca((char *)s_Dual_Mag_Offset_Y_1008_160e);
  FUN_1000_0aca((char *)s_Focus_Rotation_1008_1620);
  FUN_1000_0aca((char *)s_Scan_Orthog_1008_162f);
  switch(*(undefined1 *)(iVar1 + 0xc6)) {
  case 0:
    FUN_1000_070a((char *)s_Column_Type_1008_1643);
    break;
  case 1:
    FUN_1000_070a((char *)s_Column_Type_1008_165c);
    break;
  case 2:
    FUN_1000_070a((char *)s_Column_Type_1008_1673);
    break;
  case 3:
    FUN_1000_070a((char *)s_Column_Type_1008_1690);
    break;
  case 4:
    FUN_1000_070a((char *)s_Column_Type_1008_16a1);
    break;
  case 5:
    FUN_1000_070a((char *)s_Column_Type_1008_16cd);
    break;
  case 6:
    FUN_1000_070a((char *)s_Column_Type_1008_16b7);
    break;
  case 7:
    FUN_1000_070a((char *)s_Column_Type_1008_16e5);
    break;
  case 8:
    FUN_1000_070a((char *)s_Column_Type_1008_16fd);
    break;
  default:
    FUN_1000_070a((char *)s_Column_Type_1008_1714);
  }
  if (*(char *)0x4164 == '\x02') {
    FUN_1000_0aca((char *)s_Angular_Intensity_1008_1721);
    FUN_1000_0aca((char *)s_FE_parameter_IB1_1008_1733);
  }
  else {
    FUN_1000_0aca((char *)s_X_Talk_12_1008_1744);
    FUN_1000_0aca(0x174e);
  }
  FUN_1000_0b8a((char *)s_Line_Trans_Amp_1008_1758);
  FUN_1000_0b8a((char *)s_Frame_Trans_Amp_1008_1767);
  FUN_1000_0b8a((char *)s_Line_Frame_Gain_Ratio_1008_1777);
  FUN_1000_0b8a((char *)s_Line_Offset_1008_178d);
  FUN_1000_0b8a((char *)s_Frame_Offset_1008_1799);
  FUN_1000_0992((char *)s_Current_Aperture_1008_17a6);
  FUN_1000_0aca((char *)s_Beam_Shift_Cal_X_1008_17b7);
  FUN_1000_0aca((char *)s_Beam_Shift_Cal_Y_1008_17c8);
  if ((((*(char *)0x4164 == '\x06') || (*(char *)0x4164 == '\x05')) || (*(char *)0x4164 == '\a')) ||
     (*(char *)0x4164 == '\b')) {
    FUN_1000_0aca((char *)s_Dual_Mag_Gain_X_1008_17d9);
    FUN_1000_0aca((char *)s_Dual_Mag_Gain_Y_1008_17e9);
  }
  else {
    FUN_1000_0aca((char *)s_Dual_Mag_Slope_1008_17f9);
    FUN_1000_0aca((char *)s_Dual_Mag_Y_Slope_1008_1808);
  }
  FUN_1000_0aca((char *)s_Stereo_Rotate_1008_1819);
  FUN_1000_0aca((char *)s_Microshift_Mag_1008_1827);
  FUN_1000_0aca((char *)s_Microshift_Lever_1008_1836);
  if ((*(char *)0x4164 == '\x06') || (*(char *)0x4164 == '\b')) {
    for (local_a = 0; local_a < 7; local_a = local_a + 1) {
      FUN_1000_0992((char *)s_Aperture_Number_1008_1847);
      FUN_1000_0aca((char *)s_Diameter_1008_1857);
      FUN_1000_0aca((char *)s_Gun_Coarse_X_1008_1865);
      FUN_1000_0aca((char *)s_Gun_Coarse_Y_1008_1877);
      FUN_1000_0aca((char *)s_Aperture_Coarse_X_1008_1889);
      FUN_1000_0aca((char *)s_Aperture_Coarse_Y_1008_18a0);
      FUN_1000_0aca((char *)s_Gun_Fine_X_1008_18b7);
      FUN_1000_0aca((char *)s_Gun_Fine_Y_1008_18c7);
      FUN_1000_0aca((char *)s_Aperture_Fine_X_1008_18d7);
      FUN_1000_0aca((char *)s_Aperture_Fine_Y_1008_18ec);
    }
  }
  else {
    FUN_1000_0aca((char *)s_Aperture_1_Diameter_1008_1901);
    FUN_1000_0aca((char *)s_Aperture_1_X_1008_1915);
    FUN_1000_0aca((char *)s_Aperture_1_Y_1008_1922);
    FUN_1000_0992((char *)s_Aperture_1_Clean_1008_192f);
    FUN_1000_0aca((char *)s_Aperture_2_Diameter_1008_1940);
    FUN_1000_0aca((char *)s_Aperture_2_X_1008_1954);
    FUN_1000_0aca((char *)s_Aperture_2_Y_1008_1961);
    FUN_1000_0992((char *)s_Aperture_2_Clean_1008_196e);
    FUN_1000_0aca((char *)s_Aperture_3_Diameter_1008_197f);
    FUN_1000_0aca((char *)s_Aperture_3_X_1008_1993);
    FUN_1000_0aca((char *)s_Aperture_3_Y_1008_19a0);
    FUN_1000_0992((char *)s_Aperture_3_Clean_1008_19ad);
    FUN_1000_0aca((char *)s_Aperture_4_Diameter_1008_19be);
    FUN_1000_0aca((char *)s_Aperture_4_X_1008_19d2);
    FUN_1000_0aca((char *)s_Aperture_4_Y_1008_19df);
    FUN_1000_0992((char *)s_Aperture_4_Clean_1008_19ec);
    if ((*(char *)0x4164 == '\0') || (*(char *)0x4164 == '\x04')) {
      FUN_1000_0aca((char *)s_EBBU_Aperture_1_Diameter_1008_19fd);
      FUN_1000_0aca((char *)s_EBBU_Aperture_1_X_1008_1a16);
      FUN_1000_0aca((char *)s_EBBU_Aperture_1_Y_1008_1a28);
      FUN_1000_0992((char *)s_EBBU_Aperture_1_Clean_1008_1a3a);
      FUN_1000_0aca((char *)s_EBBU_Aperture_2_Diameter_1008_1a50);
      FUN_1000_0aca((char *)s_EBBU_Aperture_2_X_1008_1a69);
      FUN_1000_0aca((char *)s_EBBU_Aperture_2_Y_1008_1a7b);
      FUN_1000_0992((char *)s_EBBU_Aperture_2_Clean_1008_1a8d);
      FUN_1000_0aca((char *)s_EBBU_Aperture_3_Diameter_1008_1aa3);
      FUN_1000_0aca((char *)s_EBBU_Aperture_3_X_1008_1abc);
      FUN_1000_0aca((char *)s_EBBU_Aperture_3_Y_1008_1ace);
      FUN_1000_0992((char *)s_EBBU_Aperture_3_Clean_1008_1ae0);
      FUN_1000_0aca((char *)s_Defining_Aperture_Diameter_1008_1af6);
      FUN_1000_0aca((char *)s_Defining_Aperture_X_1008_1b12);
      FUN_1000_0aca((char *)s_Defining_Aperture_Y_1008_1b27);
      FUN_1000_0992((char *)s_Defining_Aperture_Film_Type_1008_1b3c);
    }
    FUN_1000_0992((char *)s_EBBU_present_1008_1b58);
    FUN_1000_0aca((char *)s_Conjugate_Position_1008_1b65);
  }
  if ((*(char *)0x4164 == '\x03') || (*(char *)0x4164 == '\a')) {
    FUN_1000_0aca((char *)s_Fixed_Aperture_1_Diameter_1008_1b78);
    FUN_1000_0aca((char *)s_Fixed_Aperture_2_Diameter_1008_1b92);
    FUN_1000_0aca((char *)s_Fixed_Aperture_3_Diameter_1008_1bac);
    if (*(char *)(iVar1 + 0x1cb) == '\0') {
      FUN_1000_070a((char *)s_Fixed_Aperture_1008_1bd1);
    }
    else if (*(char *)(iVar1 + 0x1cb) == '\x01') {
      FUN_1000_070a((char *)s_Fixed_Aperture_1008_1be7);
    }
    else {
      FUN_1000_070a((char *)s_Fixed_Aperture_1008_1c0c);
    }
  }
  if (*(char *)0x4164 == '\b') {
    if (*(char *)(iVar1 + 0x1cb) == '\0') {
      FUN_1000_070a((char *)s_Fixed_Aperture_1008_1c26);
    }
    else if (*(char *)(iVar1 + 0x1cb) == '\x01') {
      FUN_1000_070a((char *)s_Fixed_Aperture_1008_1c3c);
    }
    else {
      FUN_1000_070a((char *)s_Fixed_Aperture_1008_1c61);
    }
  }
  if ((((*(char *)0x4164 == '\x06') || (*(char *)0x4164 == '\x05')) || (*(char *)0x4164 == '\a')) ||
     (*(char *)0x4164 == '\b')) {
    FUN_1000_0aca((char *)s_Mag_Range_1_Offset_Cal_X_1008_1c70);
    FUN_1000_0aca((char *)s_Mag_Range_1_Offset_Cal_Y_1008_1c8a);
    FUN_1000_0aca((char *)s_Mag_Range_2_Offset_Cal_X_1008_1ca4);
    FUN_1000_0aca((char *)s_Mag_Range_2_Offset_Cal_Y_1008_1cbe);
    FUN_1000_0aca((char *)s_Mag_Range_1_Gain_Cal_X_1008_1cd8);
    FUN_1000_0aca((char *)s_Mag_Range_1_Gain_Cal_Y_1008_1cf0);
    FUN_1000_0aca((char *)s_Mag_Range_2_Gain_Cal_X_1008_1d08);
    FUN_1000_0aca((char *)s_Mag_Range_2_Gain_Cal_Y_1008_1d20);
  }
  else {
    FUN_1000_0aca((char *)s_Mag_Range_Cal_X_1_1008_1d38);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_Y_1_1008_1d4a);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_X_2_1008_1d5c);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_Y_2_1008_1d6e);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_X_3_1008_1d80);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_Y_3_1008_1d92);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_X_4_1008_1da4);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_Y_4_1008_1db6);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_X_5_1008_1dc8);
    FUN_1000_0aca((char *)s_Mag_Range_Cal_Y_5_1008_1dda);
  }
  if (*(char *)0x4164 == '\x02') {
    FUN_1000_0aca((char *)s_Gun_Upper_X_1008_1dec);
    FUN_1000_0aca((char *)s_Gun_Upper_Y_1008_1df8);
    FUN_1000_0aca((char *)s_Gun_Lower_X_1008_1e04);
    FUN_1000_0aca((char *)s_Gun_Lower_Y_1008_1e10);
    for (local_a = 0; local_a < 10; local_a = local_a + 1) {
      FUN_1000_0992((char *)s_Gun_Align_Cal_array_1008_1e1c);
      FUN_1000_0aca((char *)s_Upper_X_1008_1e30);
      FUN_1000_0aca((char *)s_Upper_Y_1008_1e39);
      FUN_1000_0aca((char *)s_Lower_X_1008_1e42);
      FUN_1000_0aca((char *)s_Lower_Y_1008_1e4b);
    }
  }
  else if ((*(char *)0x4164 != '\x06') && (*(char *)0x4164 != '\b')) {
    FUN_1000_0aca((char *)s_Gun_Shift_X_1008_1e54);
    FUN_1000_0aca((char *)s_Gun_Shift_Y_1008_1e60);
    FUN_1000_0aca((char *)s_Gun_Tilt_X_1008_1e6c);
    FUN_1000_0aca((char *)s_Gun_Tilt_Y_1008_1e78);
  }
  FUN_1000_0992((char *)s_Emission_Centre_X_1008_1e84);
  FUN_1000_0992((char *)s_Emission_Centre_Y_1008_1e96);
  FUN_1000_0aca((char *)s_User_Cal_Factor_X_1008_1ea8);
  FUN_1000_0aca((char *)s_User_Cal_Factor_Y_1008_1eba);
  return;
}


// ---- FUN_1000_3680 @ 1000:3680

void __cdecl16far FUN_1000_3680(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_SS;
  int local_5a;
  undefined1 local_58 [56];
  undefined2 uStack_20;
  char *pcStack_1e;
  char *pcStack_1c;
  
  FUN_1000_613a();
  SENDMESSAGE();
  SENDMESSAGE();
  pcStack_1c = (char *)s_M6101__MATH___floating_point_err_1008_36ae + 0x28;
  _WSPRINTF();
  pcStack_1c = (char *)s_M6102__MATH___floating_point_err_1008_36df + 0xf;
  SENDMESSAGE();
  pcStack_1c = (char *)s_Viewing_Window_1008_1037 + 1;
  pcVar2 = (char *)s_Viewing_Window_1008_1037 + 1;
  pcStack_1e = (char *)s_M6102__MATH___floating_point_err_1008_36df + 0x24;
  SENDMESSAGE();
  local_5a = 0;
  while( true ) {
    if (0x10 < local_5a) break;
    pcStack_1e = (char *)s_M6103__MATH___floating_point_err_1008_3711 + 0x14;
    pcStack_1c = pcVar2;
    FUN_1000_070a();
    if (*(char *)((int)param_1 + local_5a * 0x12 + 10) == '\0') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6104__MATH___floating_point_err_1008_3746 + 0xb;
      FUN_1000_070a();
    }
    else {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6104__MATH___floating_point_err_1008_3746 + 0x24;
      FUN_1000_070a();
    }
    cVar1 = *(char *)((int)param_1 + local_5a * 0x12 + 0xb);
    if (cVar1 == '\0') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6105__MATH___floating_point_err_1008_3778 + 0x2e;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x01') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6106__MATH___floating_point_err_1008_37ab + 0x14;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x02') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6106__MATH___floating_point_err_1008_37ab + 0x2d;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x03') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6107__MATH___floating_point_err_1008_37dc + 0x15;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x04') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6107__MATH___floating_point_err_1008_37dc + 0x2e;
      FUN_1000_070a();
    }
    else if (cVar1 == -0x80) {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6108__MATH___floating_point_err_1008_3810 + 0x13;
      FUN_1000_070a();
    }
    else {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6108__MATH___floating_point_err_1008_3810 + 0x2c;
      FUN_1000_070a();
    }
    if (*(char *)((int)param_1 + local_5a * 0x12 + 0xc) == '\0') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)s_M6110__MATH___floating_point_err_1008_387f + 0x24;
      FUN_1000_070a();
    }
    else {
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xc) & 1) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)s_M6111__MATH___floating_point_err_1008_38b7 + 0x23;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xc) & 2) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)s_M6100__MATH___floating_point_err_1008_38f0 + 0x1e;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xc) & 4) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3942;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xc) & 8) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3976;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xc) & 0x10) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x39aa;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xc) & 0x20) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x39de;
        FUN_1000_070a();
      }
      if (((int)*(char *)((int)param_1 + local_5a * 0x12 + 0xc) & 0x80U) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3a12;
        FUN_1000_070a();
      }
    }
    if (*(char *)((int)param_1 + local_5a * 0x12 + 0xd) == '\0') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)0x3a43;
      FUN_1000_070a();
    }
    else {
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xd) & 2) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3a7a;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xd) & 4) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3aae;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xd) & 8) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3ae2;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xd) & 0x10) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3b16;
        FUN_1000_070a();
      }
      if ((*(byte *)((int)param_1 + local_5a * 0x12 + 0xd) & 0x20) != 0) {
        pcStack_1c = (char *)0x1000;
        pcStack_1e = (char *)0x3b4a;
        FUN_1000_070a();
      }
    }
    pcStack_1c = (char *)0x3b6d;
    FUN_1000_0992();
    cVar1 = *(char *)((int)param_1 + local_5a * 0x12 + 0xf);
    if (cVar1 == '\0') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)0x3b9b;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x01') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)0x3bb4;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x02') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)0x3bcd;
      FUN_1000_070a();
    }
    else if (cVar1 == '\x03') {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)0x3be6;
      FUN_1000_070a();
    }
    else {
      pcStack_1c = (char *)0x1000;
      pcStack_1e = (char *)0x3bff;
      FUN_1000_070a();
    }
    pcVar2 = (char *)0x1000;
    local_5a = local_5a + 1;
  }
  if (*(int *)0x14 != 0) {
    pcStack_1c = (char *)0x3c55;
    FUN_1000_0992();
    pcStack_1c = (char *)0x3c6e;
    FUN_1000_0992();
    pcStack_1c = (char *)0x3c87;
    FUN_1000_0992();
    pcStack_1c = (char *)0x3ca0;
    FUN_1000_0992();
    pcStack_1c = (char *)0x3cb9;
    FUN_1000_0992();
    pcStack_1c = (char *)0x3cd2;
    FUN_1000_0992();
  }
  pcStack_1c = (char *)0x3cea;
  FUN_1000_0992();
  pcStack_1c = (char *)0x3d02;
  FUN_1000_0992();
  *(undefined1 *)0x2e6 = *(undefined1 *)((int)param_1 + 0x138);
  switch(*(undefined1 *)0x2e6) {
  case 0:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3d2c;
    FUN_1000_070a();
    break;
  case 1:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3d45;
    FUN_1000_070a();
    break;
  case 2:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3d5e;
    FUN_1000_070a();
    break;
  case 3:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3d77;
    FUN_1000_070a();
    break;
  case 4:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3d90;
    FUN_1000_070a();
    break;
  case 5:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3da9;
    FUN_1000_070a();
    break;
  case 6:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3dc2;
    FUN_1000_070a();
    break;
  case 7:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3df4;
    FUN_1000_070a();
    break;
  case 8:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3ddb;
    FUN_1000_070a();
    break;
  case 9:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3e0d;
    FUN_1000_070a();
    break;
  case 10:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3e26;
    FUN_1000_070a();
    break;
  case 0xb:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3e3f;
    FUN_1000_070a();
    break;
  case 0xc:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3e58;
    FUN_1000_070a();
    break;
  case 0xd:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3e71;
    FUN_1000_070a();
    break;
  case 0xe:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3e8a;
    FUN_1000_070a();
    break;
  case 0xf:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3ea3;
    FUN_1000_070a();
    break;
  case 0x10:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3ebc;
    FUN_1000_070a();
    break;
  case 0x11:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3ed5;
    FUN_1000_070a();
    break;
  case 0x12:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3eee;
    FUN_1000_070a();
    break;
  case 0x13:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3f07;
    FUN_1000_070a();
    break;
  case 0x14:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3f20;
    FUN_1000_070a();
    break;
  case 0x15:
    pcStack_1c = (char *)0x1000;
    pcStack_1e = (char *)0x3f39;
    FUN_1000_070a();
  }
  if (*(int *)0x14 != 0) {
    for (local_5a = 1; local_5a < 0x40; local_5a = local_5a + 1) {
      pcStack_1c = local_58;
      pcStack_1e = (char *)0x1000;
      uStack_20 = 0x3fa7;
      _WSPRINTF();
      pcStack_1c = (char *)s_Viewing_Window_1008_1037 + 1;
      pcStack_1e = (char *)0x3fcd;
      FUN_1000_0992();
    }
  }
  pcStack_1c = (char *)0x3ff3;
  FUN_1000_0992();
  pcStack_1c = (char *)0x400c;
  FUN_1000_0992();
  pcStack_1c = (char *)0x4023;
  FUN_1000_0992();
  pcStack_1c = (char *)0x403a;
  FUN_1000_0992();
  pcStack_1c = (char *)0x4051;
  FUN_1000_0992();
  pcStack_1c = (char *)0x4068;
  FUN_1000_0992();
  pcStack_1c = (char *)0x4081;
  FUN_1000_0992();
  if (*(int *)0x14 != 0) {
    for (local_5a = 0; local_5a < 0x40; local_5a = local_5a + 1) {
      pcStack_1c = local_58;
      pcStack_1e = (char *)0x1000;
      uStack_20 = 0x40ac;
      _WSPRINTF();
      pcStack_1c = (char *)s_Viewing_Window_1008_1037 + 1;
      pcStack_1e = (char *)0x40d2;
      FUN_1000_0992();
    }
  }
  pcStack_1c = (char *)0x1000;
  pcStack_1e = (char *)0x40fd;
  FUN_1000_0a2c();
  pcStack_1c = (char *)0x1000;
  pcStack_1e = (char *)0x411b;
  FUN_1000_0a2c();
  pcStack_1c = (char *)0x1000;
  pcStack_1e = (char *)0x4139;
  FUN_1000_0a2c();
  for (local_5a = 0; local_5a < 8; local_5a = local_5a + 1) {
    pcStack_1c = local_58;
    pcStack_1e = (char *)0x1000;
    uStack_20 = 0x415a;
    _WSPRINTF();
    pcStack_1c = (char *)s_Viewing_Window_1008_1037 + 1;
    pcStack_1e = (char *)0x4180;
    FUN_1000_0992();
  }
  return;
}


// ---- FUN_1000_4198 @ 1000:4198

void __cdecl16far FUN_1000_4198(void)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  SENDMESSAGE(0x1000,0x2466,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x2468,unaff_SS,0,0x403);
  _WSPRINTF((char *)s_Viewing_Window_1008_1037 + 1,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x2483,unaff_SS,0,0x403);
  FUN_1000_0992((char *)s_Modes_Config_1008_2485);
  return;
}


// ---- FUN_1000_423a @ 1000:423a

void __cdecl16far FUN_1000_423a(void)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  SENDMESSAGE(0x1000,0x2492,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x2494,unaff_SS,0,0x403);
  _WSPRINTF((char *)s_Viewing_Window_1008_1037 + 1,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x24b1,unaff_SS,0,0x403);
  FUN_1000_0992((char *)s_Display_Config_1008_24b3);
  return;
}


// ---- FUN_1000_42dc @ 1000:42dc

void __cdecl16far FUN_1000_42dc(char *param_1)

{
  char cVar1;
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  SENDMESSAGE(0x1000,0x24c2,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x24c4,unaff_SS,0,0x403);
  _WSPRINTF((char *)s_Viewing_Window_1008_1037 + 1,0x1f6);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x1f6,unaff_SS,0,0x403);
  SENDMESSAGE((char *)s_Viewing_Window_1008_1037 + 1,0x24e1,unaff_SS,0,0x403);
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    FUN_1000_070a(0x24f6);
  }
  else if (cVar1 == '\x01') {
    FUN_1000_070a(0x250d);
  }
  else if (cVar1 == '\x02') {
    FUN_1000_070a(0x2524);
  }
  else if (cVar1 == '\x03') {
    FUN_1000_070a(0x253b);
  }
  else if (cVar1 == '\x04') {
    FUN_1000_070a(0x255c);
  }
  return;
}


// ---- FUN_1000_441c @ 1000:441c

void __cdecl16far FUN_1000_441c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_5e;
  undefined1 local_5c [58];
  undefined2 uStack_22;
  char *pcStack_20;
  char *pcStack_1e;
  
  FUN_1000_613a();
  SENDMESSAGE();
  SENDMESSAGE();
  _WSPRINTF();
  SENDMESSAGE();
  pcStack_1e = (char *)0x449f;
  SENDMESSAGE();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = *(char *)(iVar2 + 4);
  if (cVar1 == '\0') {
    pcStack_1e = (char *)0x44bd;
    FUN_1000_070a();
  }
  else if (cVar1 == '\x01') {
    pcStack_1e = (char *)0x44d6;
    FUN_1000_070a();
  }
  else if (cVar1 == '\x02') {
    pcStack_1e = (char *)0x44ef;
    FUN_1000_070a();
  }
  else if (cVar1 == '\x03') {
    pcStack_1e = (char *)0x4508;
    FUN_1000_070a();
  }
  else if (cVar1 == '\x04') {
    pcStack_1e = (char *)0x4521;
    FUN_1000_070a();
  }
  else {
    pcStack_1e = (char *)0x453a;
    FUN_1000_070a();
  }
  if (*(char *)(iVar2 + 6) == '\0') {
    pcStack_1e = (char *)0x45a2;
    FUN_1000_070a();
  }
  else if (*(char *)(iVar2 + 6) == '\x01') {
    pcStack_1e = (char *)0x4589;
    FUN_1000_070a();
  }
  else {
    pcStack_1e = (char *)0x45bb;
    FUN_1000_070a();
  }
  if (*(char *)(iVar2 + 5) == '\0') {
    pcStack_1e = (char *)0x45f2;
    FUN_1000_070a();
  }
  else if (*(char *)(iVar2 + 5) == '\x01') {
    pcStack_1e = (char *)0x460b;
    FUN_1000_070a();
  }
  else {
    pcStack_1e = (char *)0x4624;
    FUN_1000_070a();
  }
  pcStack_1e = (char *)0x4653;
  FUN_1000_0aca();
  pcStack_1e = (char *)0x466d;
  FUN_1000_0aca();
  pcStack_1e = (char *)0x4687;
  FUN_1000_0aca();
  pcStack_1e = (char *)0x46a1;
  FUN_1000_0aca();
  pcStack_1e = (char *)0x46ee;
  FUN_1000_0aca();
  FUN_1000_0992();
  for (local_5e = 0; local_5e < 5; local_5e = local_5e + 1) {
    pcStack_1e = (char *)0x1000;
    pcStack_20 = (char *)0x4727;
    _WSPRINTF();
    pcStack_1e = (char *)s_Viewing_Window_1008_1037 + 1;
    pcStack_20 = (char *)0x4753;
    FUN_1000_0aca();
    pcStack_1e = local_5c;
    pcStack_20 = (char *)0x1000;
    uStack_22 = 0x476c;
    _WSPRINTF();
    pcStack_1e = local_5c;
    pcStack_20 = (char *)s_Viewing_Window_1008_1037 + 1;
    uStack_22 = 0x4798;
    FUN_1000_0aca();
  }
  if (((*(char *)0x2e6 == '\x03') || (*(char *)0x4164 == '\x06')) || (*(char *)0x4164 == '\b')) {
    pcStack_1e = (char *)0x47e5;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x47ff;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x4819;
    FUN_1000_0aca();
    FUN_1000_0992();
    FUN_1000_0992();
    pcStack_1e = (char *)0x4863;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x487d;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x4897;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x48b1;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x48cb;
    FUN_1000_0aca();
    pcStack_1e = (char *)0x48e5;
    FUN_1000_0aca();
  }
  return;
}


// ---- FUN_1000_48f0 @ 1000:48f0

undefined2 __cdecl16far FUN_1000_48f0(char *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  uVar1 = _LREAD(0x1000,5,(char *)param_1,param_1._2_2_);
  *(undefined2 *)0x3b30 = uVar1;
  if (*(int *)0x3b30 == 5) {
    if (*param_1 == '\x16') {
      uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,0xc,(char *)param_1 + 5,param_1._2_2_);
      *(undefined2 *)0x3b30 = uVar1;
      if (*(int *)0x3b30 == 0xc) {
        uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,0x16,(char *)param_1 + 0x11,
                       param_1._2_2_);
        *(undefined2 *)0x3b30 = uVar1;
        if (*(int *)0x3b30 == 0x16) {
          uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,0x3a8,(char *)param_1 + 0x27,
                         param_1._2_2_);
          *(undefined2 *)0x3b30 = uVar1;
          if (*(int *)0x3b30 == 0x3a8) {
            uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,0x1db,(char *)param_1 + 0x3cf,
                           param_1._2_2_);
            *(undefined2 *)0x3b30 = uVar1;
            if (*(int *)0x3b30 == 0x1db) {
              uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,1,(char *)param_1 + 0x5aa,
                             param_1._2_2_);
              *(undefined2 *)0x3b30 = uVar1;
              if (*(int *)0x3b30 == 1) {
                uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,1,(char *)param_1 + 0x5ab,
                               param_1._2_2_);
                *(undefined2 *)0x3b30 = uVar1;
                if (*(int *)0x3b30 == 1) {
                  uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,5,(char *)param_1 + 0x5ac,
                                 param_1._2_2_);
                  *(undefined2 *)0x3b30 = uVar1;
                  if (*(int *)0x3b30 == 5) {
                    uVar1 = _LREAD((char *)s_Viewing_Window_1008_1037 + 1,0x6e,
                                   (char *)param_1 + 0x5b1,param_1._2_2_);
                    *(undefined2 *)0x3b30 = uVar1;
                    if (*(int *)0x3b30 == 0x6e) {
                      uVar1 = 0;
                    }
                    else {
                      FUN_1000_0670((char *)s_ERROR_File_read_EHT_1008_2898);
                      uVar1 = 1;
                    }
                  }
                  else {
                    FUN_1000_0670((char *)s_ERROR_File_read_ACQUIRE_1008_2880);
                    uVar1 = 1;
                  }
                }
                else {
                  FUN_1000_0670((char *)s_ERROR_File_read_DISPLAY_1008_2868);
                  uVar1 = 1;
                }
              }
              else {
                FUN_1000_0670((char *)s_ERROR_File_read_MODES_1008_2852);
                uVar1 = 1;
              }
            }
            else {
              FUN_1000_0670((char *)s_ERROR_File_read_MASTER_1008_283b);
              uVar1 = 1;
            }
          }
          else {
            FUN_1000_0670((char *)s_ERROR_File_read_EO_1008_2828);
            uVar1 = 1;
          }
        }
        else {
          FUN_1000_0670((char *)s_ERROR_File_read_VACUUM_1008_2811);
          uVar1 = 1;
        }
      }
      else {
        FUN_1000_0670((char *)s_ERROR_File_read_STAGE_1008_27fb);
        uVar1 = 1;
      }
    }
    else {
      FUN_1000_0670((char *)s_ERROR_Wrong_Version_1008_27e7);
      uVar1 = 1;
    }
  }
  else {
    FUN_1000_0670((char *)s_ERROR_File_read_NVRAM_1008_27d1);
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_1000_4b3a @ 1000:4b3a

/* WARNING: Removing unreachable block (ram,0x10004d58) */

int __cdecl16far FUN_1000_4b3a(undefined4 param_1)

{
  bool bVar1;
  byte bVar3;
  int iVar2;
  uint local_e;
  int local_c;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  local_c = 0;
  local_e = 0;
  while( true ) {
    if (2 < local_e) break;
    local_c = local_c + (uint)*(byte *)((int)param_1 + local_e);
    local_e = local_e + 1;
  }
  for (local_e = 0; local_e < 0xc; local_e = local_e + 1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 5 + local_e);
  }
  for (local_e = 0; local_e < 0x16; local_e = local_e + 1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x11 + local_e);
  }
  for (local_e = 0; local_e < 0x3a8; local_e = local_e + 1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x27 + local_e);
  }
  for (local_e = 0; local_e < 0x1db; local_e = local_e + 1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x3cf + local_e);
  }
  bVar1 = false;
  while (!bVar1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x5aa);
    bVar1 = true;
  }
  bVar1 = false;
  while (!bVar1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x5ab);
    bVar1 = true;
  }
  for (local_e = 0; local_e < 5; local_e = local_e + 1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x5ac + local_e);
  }
  for (local_e = 0; local_e < 0x6e; local_e = local_e + 1) {
    local_c = local_c + (uint)*(byte *)((int)param_1 + 0x5b1 + local_e);
  }
  bVar3 = (byte)((uint)local_c >> 8);
  if (local_c == *(int *)((int)param_1 + 3)) {
    iVar2 = CONCAT11(bVar3,1);
  }
  else {
    iVar2 = (uint)bVar3 << 8;
  }
  return iVar2;
}


// ---- FUN_1000_4d6e @ 1000:4d6e

void __cdecl16far FUN_1000_4d6e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int iVar3;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  switch(*(undefined1 *)(iVar1 + 0xc6)) {
  case 0:
    FUN_1000_0936();
    break;
  case 1:
    FUN_1000_0936();
    break;
  case 2:
    FUN_1000_0936();
    break;
  case 3:
    FUN_1000_0936();
    break;
  case 4:
    FUN_1000_0936();
    break;
  case 5:
    FUN_1000_0936();
    break;
  case 6:
    FUN_1000_0936();
    break;
  case 7:
    FUN_1000_0936();
    break;
  case 8:
    FUN_1000_0936();
    break;
  default:
    FUN_1000_0936();
  }
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_08dc((char *)s_Mag_Comp_Off_0__1008_29ae);
  FUN_1000_08dc((char *)s_Mag_Comp_Off_1__1008_29be);
  FUN_1000_08dc((char *)s_Mag_Comp_Off_2__1008_29ce);
  FUN_1000_08dc((char *)s_Mag_Comp_Off_3__1008_29de);
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  FUN_1000_07a8();
  if (((*(char *)0x4164 == '\x06') || (*(char *)0x4164 == '\x05')) || (*(char *)0x4164 == '\a')) {
    FUN_1000_07a8();
    FUN_1000_07a8();
  }
  else {
    FUN_1000_07a8();
    FUN_1000_07a8();
  }
  if (*(char *)0x4164 == '\x06') {
    for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x294);
      FUN_1000_08dc((char *)s_Aperture_Number_1008_2ade);
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x272);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x276);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x27a);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x27e);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x282);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x286);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x28a);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x28e);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 0x26 + 0x292);
      FUN_1000_07a8();
    }
  }
  else {
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_08dc((char *)s_Aperture_1_Clean_1008_2bc6);
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_08dc((char *)s_Aperture_2_Clean_1008_2c05);
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_08dc((char *)s_Aperture_3_Clean_1008_2c44);
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_08dc((char *)s_Aperture_4_Clean_1008_2c83);
    if ((*(char *)0x4164 == '\0') || (*(char *)0x4164 == '\x04')) {
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_08dc((char *)s_EBBU_Aperture_1_Clean_1008_2cd1);
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_08dc((char *)s_EBBU_Aperture_2_Clean_1008_2d24);
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_08dc((char *)s_EBBU_Aperture_3_Clean_1008_2d77);
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_07a8();
      FUN_1000_08dc((char *)s_Defining_Aperture_Film_Type_1008_2dd3);
    }
  }
  if ((*(char *)0x4164 == '\x03') || (*(char *)0x4164 == '\a')) {
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    if (*(char *)(iVar1 + 0x1cb) == '\0') {
      FUN_1000_0936();
    }
    else if (*(char *)(iVar1 + 0x1cb) == '\x01') {
      FUN_1000_0936();
    }
    else {
      FUN_1000_0936();
    }
  }
  if (((*(char *)0x4164 == '\x06') || (*(char *)0x4164 == '\x05')) || (*(char *)0x4164 == '\a')) {
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
  }
  else {
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
  }
  if (*(char *)0x4164 == '\x02') {
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
      FUN_1000_08dc((char *)s_Gun_Align_Cal_array_1008_303e);
      iVar3 = *(int *)(iVar1 + iVar3 * 4 + 0x1d2);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 4 + 0x1fa);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 4 + 0x222);
      FUN_1000_07a8();
      iVar3 = *(int *)(iVar1 + iVar3 * 4 + 0x24a);
      FUN_1000_07a8();
    }
  }
  else if (*(char *)0x4164 != '\x06') {
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
    FUN_1000_07a8();
  }
  return;
}


// ---- FUN_1000_5b30 @ 1000:5b30

void __cdecl16far FUN_1000_5b30(undefined4 param_1)

{
  undefined2 unaff_SS;
  
  FUN_1000_613a((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  *(undefined1 *)0x2e6 = *(undefined1 *)((int)param_1 + 0x138);
  switch(*(undefined1 *)0x2e6) {
  case 0:
    FUN_1000_0936((char *)s_Machine_Type_1008_30ae);
    break;
  case 1:
    FUN_1000_0936((char *)s_Machine_Type_1008_30c3);
    break;
  case 2:
    FUN_1000_0936((char *)s_Machine_Type_1008_30d8);
    break;
  case 3:
    FUN_1000_0936((char *)s_Machine_Type_1008_30ed);
    break;
  case 4:
    FUN_1000_0936((char *)s_Machine_Type_1008_3104);
    break;
  case 5:
    FUN_1000_0936((char *)s_Machine_Type_1008_3117);
    break;
  case 6:
    FUN_1000_0936((char *)s_Machine_Type_1008_312b);
    break;
  case 7:
    FUN_1000_0936((char *)s_Machine_Type_1008_3157);
    break;
  case 8:
    FUN_1000_0936((char *)s_Machine_Type_1008_3141);
    break;
  case 9:
    FUN_1000_0936((char *)s_Machine_Type_1008_316d);
    break;
  case 10:
    FUN_1000_0936((char *)s_Machine_Type_1008_3182);
    break;
  case 0xb:
    FUN_1000_0936((char *)s_Machine_Type_1008_3198);
    break;
  case 0xc:
    FUN_1000_0936((char *)s_Machine_Type_1008_31b0);
    break;
  case 0xd:
    FUN_1000_0936((char *)s_Machine_Type_1008_31c6);
    break;
  case 0xe:
    FUN_1000_0936((char *)s_Machine_Type_1008_31de);
    break;
  case 0xf:
    FUN_1000_0936((char *)s_Machine_Type_1008_31f4);
    break;
  case 0x10:
    FUN_1000_0936((char *)s_Machine_Type_1008_320c);
    break;
  case 0x11:
    FUN_1000_0936((char *)s_Machine_Type_1008_3222);
    break;
  case 0x12:
    FUN_1000_0936((char *)s_Machine_Type_1008_323a);
    break;
  case 0x13:
    FUN_1000_0936((char *)s_Machine_Type_1008_3250);
    break;
  case 0x14:
    FUN_1000_0936((char *)s_Machine_Type_1008_3266);
    break;
  case 0x15:
    FUN_1000_0936((char *)s_Machine_Type_1008_327e);
    break;
  case 0x16:
    FUN_1000_0936((char *)s_Machine_Type_1008_3296);
    break;
  case 0x17:
    FUN_1000_0936((char *)s_Machine_Type_1008_32ae);
    break;
  case 0x18:
    FUN_1000_0936((char *)s_Machine_Type_1008_32c6);
  }
  FUN_1000_08dc((char *)s_Serial_Number_1008_32d3);
  return;
}


// ---- entry @ 1000:5e48

void entry(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_CX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  bool bVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  
  do {
    uVar5 = INITTASK(unaff_CS,0);
    iVar3 = (int)uVar5;
    if (iVar3 != 0) {
      bVar4 = in_CX < 0xff00;
      in_CX = in_CX + 0x100;
      DAT_1008_3318 = unaff_ES;
      if (bVar4) {
        DAT_1008_32e2 = in_CX;
        DAT_1008_32e4 = unaff_SI;
        DAT_1008_32e6 = unaff_DI;
        DAT_1008_32e8 = in_BX;
        DAT_1008_32ea = unaff_ES;
        DAT_1008_32ec = (int)((ulong)uVar5 >> 0x10);
        LOCKSEGMENT((char *)s_Viewing_Window_1008_1037 + 1,0xffff);
        uVar6 = 0x5e84;
        uVar2 = GETVERSION((char *)s_Viewing_Window_1008_1037 + 1);
        DAT_1008_331a = CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8));
        if ((DAT_1000_5e3e & 1) == 0) {
          pcVar1 = (code *)swi(0x21);
          DAT_1008_331e = (*pcVar1)();
        }
        else {
          uVar6 = 0x1000;
          DAT_1008_331e = DOS3CALL(0x1000);
        }
        DAT_1008_331c = CONCAT11((char)DAT_1008_331e,(char)((uint)DAT_1008_331e >> 8));
        if ((DAT_1000_5e3e & 1) == 0) {
          DAT_1008_3321 = 0;
        }
        WAITEVENT(0x1000,0,uVar6);
        iVar3 = INITAPP((char *)s_Viewing_Window_1008_1037 + 1,DAT_1008_32e6);
        if (iVar3 != 0) {
          FUN_1000_5f32();
          FUN_1000_6174(0x1000);
          FUN_1000_631e();
          FUN_1000_7d0e();
          uVar2 = FUN_1000_5f06(DAT_1008_3352,DAT_1008_3354,DAT_1008_3356,DAT_1008_3358,
                                DAT_1008_335a);
          FUN_1000_6015(0x1000,uVar2);
          FUN_1000_63e2();
          return;
        }
        iVar3 = 0;
      }
    }
    unaff_CS = 0x1000;
    FUN_1000_6023((char *)s_Viewing_Window_1008_1037 + 1,CONCAT11((char)((uint)iVar3 >> 8),0xff));
  } while( true );
}


// ---- FUN_1000_5f06 @ 1000:5f06

void __cdecl16far FUN_1000_5f06(void)

{
  FUN_1000_0000(DAT_1008_32ec,DAT_1008_32e8,DAT_1008_32ea,DAT_1008_32e4,DAT_1008_32e6);
  return;
}


// ---- FUN_1000_5f32 @ 1000:5f32

void __cdecl16far FUN_1000_5f32(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 in_BX;
  int unaff_BP;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  char *pcVar10;
  bool bVar11;
  char *pcVar12;
  
  pcVar12 = (char *)0x1000;
  if ((DAT_1000_5e3e & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)(unaff_BP + 1);
  }
  else {
    pcVar12 = (char *)s_Viewing_Window_1008_1037 + 1;
    DOS3CALL(0x1000,(char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  }
  pcVar10 = (char *)0x1000;
  DAT_1008_3304 = in_BX;
  DAT_1008_3306 = unaff_ES;
  if ((DAT_1000_5e3e & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else {
    pcVar12 = (char *)0x1000;
    pcVar10 = (char *)s_Viewing_Window_1008_1037 + 1;
    DOS3CALL(0x1000);
  }
  uVar6 = FUN_1000_64c6(pcVar12);
  if (*(int *)&DAT_1008_3548 != 0) {
    bVar11 = false;
    (*(code *)*(undefined2 *)&DAT_1008_3546)(pcVar10);
    if (bVar11) {
      FUN_1000_6114();
      return;
    }
    (*(code *)*(undefined2 *)&DAT_1008_3546)(pcVar10);
  }
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar7 = 0xd;
      pbVar8 = (byte *)s__C_FILE_INFO__1008_32f6;
      bVar11 = false;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pbVar3 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar11 = *pbVar1 == *pbVar3;
      } while (bVar11);
      if (bVar11) {
        pbVar8 = (byte *)0x332a;
        goto LAB_1000_5fdd;
      }
      iVar7 = 0x7fff;
      bVar11 = true;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar11 = *pbVar1 == 0;
      } while (!bVar11);
    } while (bVar11);
  }
LAB_1000_5ff1:
  FUN_1000_60dc();
  FUN_1000_60dc();
  FUN_1000_60dc();
  return;
LAB_1000_5fdd:
  pbVar1 = pbVar9;
  pbVar2 = pbVar9 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_5ff1;
  pbVar9 = pbVar9 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_5ff1;
  pbVar3 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_5fdd;
}


// ---- FUN_1000_6015 @ 1000:6015

void FUN_1000_6015(void)

{
  FUN_1000_6052();
  return;
}


// ---- FUN_1000_6023 @ 1000:6023

void FUN_1000_6023(void)

{
  FUN_1000_6052();
  return;
}


// ---- FUN_1000_6052 @ 1000:6052

void __cdecl16far FUN_1000_6052(void)

{
  code *pcVar1;
  undefined2 in_CX;
  int unaff_BP;
  undefined2 unaff_SS;
  char cVar2;
  
  DAT_1008_3363 = (undefined1)((uint)in_CX >> 8);
  if ((char)in_CX == '\0') {
    FUN_1000_60dc();
    FUN_1000_60dc();
    FUN_1000_7d0e(*(undefined2 *)(unaff_BP + 6));
  }
  cVar2 = (char)((uint)in_CX >> 8);
  FUN_1000_60dc();
  FUN_1000_60dc();
  FUN_1000_60b3();
  if (cVar2 == '\0') {
    if ((DAT_1000_5e3e & 1) == 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else {
      DOS3CALL(0x1000);
    }
  }
  return;
}


// ---- FUN_1000_60b3 @ 1000:60b3

void __cdecl16near FUN_1000_60b3(void)

{
  code *pcVar1;
  
  if (DAT_1008_3548 != 0) {
    (*DAT_1008_3546)();
  }
  if ((DAT_1000_5e3e & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    DOS3CALL(0x1000,(char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  }
  return;
}


// ---- FUN_1000_60dc @ 1000:60dc

void __cdecl16near FUN_1000_60dc(void)

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


// ---- FUN_1000_60f0 @ 1000:60f0

void __cdecl16far FUN_1000_60f0(void)

{
  FUN_1000_645b(0xfc);
  FUN_1000_645b(0xff);
  return;
}


// ---- FUN_1000_6114 @ 1000:6114

void FUN_1000_6114(void)

{
  FUN_1000_63e2();
  return;
}


// ---- FUN_1000_613a @ 1000:613a

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1000_613a(void)

{
  int in_AX;
  undefined1 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  puVar1 = (undefined1 *)(in_AX + 1U & 0xfffe);
  if ((puVar1 < &stack0x0004) && (uVar2 = -((int)puVar1 - (int)&stack0x0004), *(uint *)0xa <= uVar2)
     ) {
    if (uVar2 < *(uint *)0xc) {
      *(uint *)0xc = uVar2;
    }
    *(undefined2 *)(uVar2 - 2) = in_stack_00000002;
    *(undefined2 *)(uVar2 - 4) = in_stack_00000000;
    return;
  }
  uVar3 = FUN_1000_64c6();
  if (*(int *)0x3368 != -1) {
                    /* WARNING: Could not recover jumptable at 0x1000616a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x3368)();
    return;
  }
  FUN_1000_63e2();
  return;
}


// ---- FUN_1000_6174 @ 1000:6174

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1000_6174(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined2 uVar12;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  int aiStack_4 [2];
  
  DAT_1008_336e = param_1;
  param_1 = 0x6185;
  DAT_1008_336c = in_stack_00000000;
  DAT_1008_335c = FUN_1000_6498();
  param_1 = (int)((ulong)DAT_1008_335c >> 0x10);
  uVar4 = (undefined2)DAT_1008_335c;
  aiStack_4[1] = DAT_1008_32e6;
  aiStack_4[0] = param_1;
  iVar3 = GETMODULEFILENAME(unaff_CS,0x104,uVar4);
  *(undefined1 *)(aiStack_4[1] + iVar3) = 0;
  iVar3 = 1;
  DAT_1008_3352 = 1;
  pcVar8 = (char *)0x81;
LAB_1000_61b4:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    DAT_1008_3352 = DAT_1008_3352 + 1;
    do {
      pcVar8 = pcVar8 + -1;
LAB_1000_61c7:
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_1000_61b4;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_1000_6200:
        do {
          while( true ) {
            while( true ) {
              pcVar1 = pcVar8;
              pcVar8 = pcVar8 + 1;
              cVar2 = *pcVar1;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_6230;
              if (cVar2 == '\"') goto LAB_1000_61c7;
              if (cVar2 == '\\') break;
              iVar3 = iVar3 + 1;
            }
            uVar5 = 0;
            do {
              pcVar11 = pcVar8;
              uVar5 = uVar5 + 1;
              pcVar8 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            iVar3 = iVar3 + uVar5;
            pcVar8 = pcVar11;
          }
          iVar3 = iVar3 + (uVar5 >> 1) + (uint)((uVar5 & 1) != 0);
        } while ((uVar5 & 1) != 0);
        goto LAB_1000_61c7;
      }
      if (cVar2 != '\\') {
        iVar3 = iVar3 + 1;
        goto LAB_1000_61c7;
      }
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar1 == '\\');
      if (*pcVar1 == '\"') {
        iVar3 = iVar3 + (uVar5 >> 1) + (uint)((uVar5 & 1) != 0);
        if ((uVar5 & 1) == 0) goto LAB_1000_6200;
        goto LAB_1000_61c7;
      }
      iVar3 = iVar3 + uVar5;
    } while( true );
  }
LAB_1000_6230:
  iVar10 = (DAT_1008_3352 + 1) * 4;
  iVar3 = -(iVar3 + DAT_1008_3352 + iVar10 + 1U & 0xfffe);
  DAT_1008_3354 = (undefined1 *)((int)&param_1 + iVar3);
  pcVar11 = (char *)((int)&param_1 + iVar10 + iVar3);
  *(undefined2 *)(&stack0x0000 + iVar3) = unaff_SS;
  uVar12 = *(undefined2 *)(&stack0x0000 + iVar3);
  *(undefined2 *)((int)&param_1 + iVar3) = (undefined2)DAT_1008_335c;
  *(undefined2 *)(&stack0x0004 + iVar3) = DAT_1008_335c._2_2_;
  puVar7 = (undefined2 *)(&stack0x0006 + iVar3);
  *(int *)((int)&stack0x0000 + iVar3) = (int)&param_1 + iVar3;
  *(undefined2 *)((int)aiStack_4 + iVar3 + 2) = (char *)s_Viewing_Window_1008_1037 + 1;
  *(undefined2 *)((int)aiStack_4 + iVar3) = 0x6267;
  DAT_1008_3356 = unaff_SS;
  uVar4 = FUN_1000_64c6();
  uVar4 = *(undefined2 *)&DAT_1008_3318;
  pcVar8 = (char *)0x81;
LAB_1000_6276:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_6309:
    *(char **)(&stack0x0000 + iVar3) = (char *)s_Viewing_Window_1008_1037 + 1;
    *(undefined2 *)((int)aiStack_4 + iVar3 + 2) = 0x630d;
    uVar4 = FUN_1000_64c6();
    *puVar7 = 0;
    puVar7[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x1000631a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)&DAT_1008_336c)();
    return;
  }
  *puVar7 = pcVar11;
  puVar7[1] = unaff_SS;
  puVar7 = puVar7 + 2;
  do {
    pcVar8 = pcVar8 + -1;
LAB_1000_6297:
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\0';
      goto LAB_1000_6276;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_6306:
      *pcVar11 = '\0';
      goto LAB_1000_6309;
    }
    pcVar9 = pcVar8;
    if (cVar2 == '\"') {
LAB_1000_62d3:
      while( true ) {
        pcVar8 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_6306;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar5 = 0;
          do {
            pcVar9 = pcVar8;
            uVar5 = uVar5 + 1;
            pcVar8 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar1 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar1 = '\\';
            }
            if ((uVar5 & 1) == 0) break;
            pcVar1 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar1 = '\"';
            pcVar9 = pcVar8;
          }
          else {
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar1 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar1 = '\\';
            }
          }
        }
        else {
          pcVar1 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar1 = cVar2;
          pcVar9 = pcVar8;
        }
      }
      goto LAB_1000_6297;
    }
    if (cVar2 != '\\') {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = cVar2;
      goto LAB_1000_6297;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 == '\\');
    if (*pcVar1 == '\"') {
      for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar1 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar1 = '\\';
      }
      pcVar9 = pcVar8;
      if ((uVar5 & 1) == 0) goto LAB_1000_62d3;
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\"';
      goto LAB_1000_6297;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\\';
    }
  } while( true );
}


// ---- FUN_1000_631e @ 1000:631e

void __cdecl16far FUN_1000_631e(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  bool bVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined2 *puVar17;
  
  uVar15 = GETDOSENVIRONMENT();
  iVar6 = (int)((ulong)uVar15 >> 0x10);
  if ((int)uVar15 != 0) {
    iVar6 = 0;
  }
  iVar9 = 0;
  pcVar12 = (char *)0x0;
  iVar5 = -1;
  if (iVar6 != 0) {
    cVar3 = *(char *)0x0;
    while (cVar3 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar16 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar16 != '\0');
      iVar9 = iVar9 + 1;
      pcVar16 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar3 = *pcVar16;
    }
  }
  pcVar16 = (char *)FUN_1000_6498();
  uVar7 = (undefined2)((ulong)pcVar16 >> 0x10);
  pcVar12 = (char *)pcVar16;
  puVar17 = (undefined2 *)FUN_1000_6498();
  uVar8 = (undefined2)((ulong)puVar17 >> 0x10);
  DAT_1008_3358 = (undefined2 *)puVar17;
  piVar10 = (int *)0x0;
  do {
    DAT_1008_335a = (undefined2)((ulong)puVar17 >> 0x10);
    puVar4 = (undefined2 *)puVar17;
    if (iVar9 == 0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      return;
    }
    bVar14 = *piVar10 == s__C_FILE_INFO__1008_32f6._0_2_;
    if (bVar14) {
      piVar13 = (int *)s__C_FILE_INFO__1008_32f6;
      iVar5 = 6;
      piVar11 = piVar10;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        piVar1 = piVar11;
        piVar11 = piVar11 + 1;
        bVar14 = *piVar1 == *piVar2;
      } while (bVar14);
      if (!bVar14) goto LAB_1000_63af;
    }
    else {
LAB_1000_63af:
      *puVar4 = pcVar12;
      puVar4[1] = uVar7;
      puVar17 = (undefined2 *)CONCAT22(DAT_1008_335a,puVar4 + 2);
    }
    do {
      DAT_1008_335a = (undefined2)((ulong)puVar17 >> 0x10);
      piVar1 = piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      iVar5 = *piVar1;
      pcVar16 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar16 = (char)iVar5;
      puVar17 = (undefined2 *)CONCAT22(DAT_1008_335a,(undefined2 *)puVar17);
    } while ((char)iVar5 != '\0');
    iVar9 = iVar9 + -1;
  } while( true );
}


// ---- FUN_1000_63e2 @ 1000:63e2

int * FUN_1000_63e2(void)

{
  int *piVar1;
  char *pcVar2;
  undefined2 in_AX;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined2 unaff_CS;
  int in_stack_00000000;
  undefined2 uVar8;
  
  uVar8 = in_AX;
  FUN_1000_60f0();
  FUN_1000_645b(in_AX);
  pcVar3 = (char *)FUN_1000_6424(uVar8);
  if (pcVar3 != (char *)0x0) {
    iVar4 = 9;
    if (*pcVar3 == 'M') {
      iVar4 = 0xf;
    }
    pcVar3 = pcVar3 + iVar4;
    iVar4 = 0x22;
    pcVar7 = pcVar3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar2 != '\r');
    pcVar7[-1] = '\0';
  }
  uVar8 = 0;
  FATALAPPEXIT(unaff_CS,pcVar3,(char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  FATALEXIT((char *)s_Viewing_Window_1008_1037 + 1,0xff,uVar8);
  piVar5 = (int *)&DAT_1008_3566;
  do {
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar5;
    if ((*piVar1 == in_stack_00000000) || (piVar6 = (int *)0x0, *piVar1 == -1)) {
      return piVar6;
    }
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      piVar1 = piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}


// ---- FUN_1000_6424 @ 1000:6424

int * __stdcall16far FUN_1000_6424(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_3566;
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


// ---- FUN_1000_645b @ 1000:645b

void __stdcall16far FUN_1000_645b(undefined2 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_ES;
  
  if (DAT_1008_3530 != 0) {
    pcVar2 = (char *)FUN_1000_6424(param_1);
    if (pcVar2 != (char *)0x0) {
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar1 != '\0');
      FUN_1000_7d13();
    }
  }
  return;
}


// ---- FUN_1000_6498 @ 1000:6498

void __cdecl16near FUN_1000_6498(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_3370;
  LOCK();
  DAT_1008_3370 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_7d3b();
  DAT_1008_3370 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_63e2();
  return;
}


// ---- FUN_1000_64c6 @ 1000:64c6

undefined2 __cdecl16far FUN_1000_64c6(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam100064d7;
}


// ---- ___EXPORTEDSTUB @ 1000:64d6

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_64ea @ 1000:64ea

void __cdecl16near FUN_1000_64ea(void)

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
    FUN_1000_65e1();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_64c6();
        uVar4 = *(uint *)&DAT_1008_3370;
        if (uVar4 == 0x1000) goto LAB_1000_653c;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_6555;
        }
        if (uVar5 < 8) goto LAB_1000_6555;
        uVar4 = uVar5 << 1;
        goto LAB_1000_653c;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_657b();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_6555:
          uVar4 = 0x10;
LAB_1000_653c:
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


// ---- FUN_1000_657b @ 1000:657b

void __cdecl16near FUN_1000_657b(void)

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
LAB_1000_65d6:
    FUN_1000_63e2();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((DAT_1000_5e3e & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 2;
  if ((DAT_1000_5e3e & 1) == 0) {
    uVar1 = 0x20;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) ||
       (lVar4 = GLOBALSIZE((char *)s_Viewing_Window_1008_1037 + 1,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_65d6;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_65e1 @ 1000:65e1

void __cdecl16near FUN_1000_65e1(void)

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


// ---- FUN_1000_6602 @ 1000:6602

uint __cdecl16far FUN_1000_6602(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)param_1;
  bVar4 = true;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  if (bVar4) {
    uVar2 = uVar2 - 1;
  }
  return uVar2;
}


// ---- FUN_1000_661c @ 1000:661c

undefined2 * __cdecl16far FUN_1000_661c(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x3395) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_6602((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_7c1c((char *)param_1,uVar3,uVar1);
  DAT_1008_4166 = *(undefined2 *)(iVar2 + 8);
  DAT_1008_4168 = *(undefined2 *)(iVar2 + 10);
  DAT_1008_416a = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_416c = *(undefined2 *)(iVar2 + 0xe);
  return (undefined2 *)&DAT_1008_4166;
}


// ---- FUN_1000_667a @ 1000:667a

void __cdecl16far FUN_1000_667a(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  local_c = (char *)CONCAT22(*(undefined2 *)(iVar3 + 8),(char *)*(undefined2 *)(iVar3 + 6));
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  *param_1 = '0';
  local_8 = (char *)CONCAT22(uVar6,pcVar4 + 1);
  for (; pcVar2 = local_8, 0 < param_2; param_2 = param_2 + -1) {
    if (*local_c == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *local_c;
      local_c = (char *)CONCAT22(local_c._2_2_,(char *)local_c + 1);
    }
    local_8 = (char *)CONCAT22(local_8._2_2_,(char *)local_8 + 1);
    *pcVar2 = cVar1;
  }
  *local_8 = '\0';
  if ((-1 < param_2) && ('4' < *local_c)) {
    while( true ) {
      local_8 = (char *)CONCAT22(local_8._2_2_,(char *)local_8 + -1);
      if (*local_8 != '9') break;
      *local_8 = '0';
    }
    *local_8 = *local_8 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(iVar3 + 2) = *(int *)(iVar3 + 2) + 1;
  }
  else {
    FUN_1000_6876(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_6728 @ 1000:6728

undefined4 __stdcall16far FUN_1000_6728(uint param_1,undefined2 param_2,uint param_3)

{
  return CONCAT22(-(uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_6748 @ 1000:6748

char * __cdecl16far
FUN_1000_6748(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 in_DX;
  undefined2 uVar7;
  undefined4 local_16;
  undefined4 local_12;
  
  iVar4 = FUN_1000_7c80(param_1,param_2,param_3,param_4);
  iVar5 = *(int *)(iVar4 + 2) + -1;
  DAT_1008_3ac0 = param_1;
  DAT_1008_3ac2 = param_2;
  DAT_1008_3ac4 = param_3;
  DAT_1008_3ac6 = param_4;
  if ((iVar5 < -1) || (param_5 + -1 < iVar5)) {
    pcVar6 = (char *)FUN_1000_7736((undefined2 *)&DAT_1008_3ac0,
                                   (char *)s_Unknown_Configuration_1008_0ff8 + 0x10,param_6,param_7,
                                   param_5 + -1,0);
  }
  else {
    pcVar6 = (char *)FUN_1000_7902((undefined2 *)&DAT_1008_3ac0,
                                   (char *)s_Unknown_Configuration_1008_0ff8 + 0x10,param_6,param_7,
                                   param_5 - *(int *)(iVar4 + 2));
  }
  local_12 = (char *)CONCAT22(in_DX,pcVar6);
  while( true ) {
    uVar7 = (undefined2)((ulong)local_12 >> 0x10);
    if ((*local_12 == '\0') || (*local_12 == '.')) break;
    local_12 = (char *)CONCAT22(uVar7,(char *)local_12 + 1);
  }
  if (*local_12 != '\0') {
    do {
      pcVar2 = (char *)local_12;
      local_12._0_2_ = pcVar2 + 1;
      if (*(char *)local_12 == '\0') break;
    } while (*(char *)local_12 != 'e');
    local_16 = (char *)CONCAT22(uVar7,(char *)local_12);
    local_12 = (char *)CONCAT22(uVar7,pcVar2);
    while (*(char *)local_12 == '0') {
      local_12 = (char *)CONCAT22(local_12._2_2_,(char *)local_12 + -1);
    }
    do {
      pcVar3 = local_16;
      local_16 = (char *)CONCAT22(local_16._2_2_,(char *)local_16 + 1);
      cVar1 = *pcVar3;
      local_12 = (char *)CONCAT22(local_12._2_2_,(char *)local_12 + 1);
      *local_12 = cVar1;
    } while (cVar1 != '\0');
  }
  return pcVar6;
}


// ---- FUN_1000_6850 @ 1000:6850

void __cdecl16far FUN_1000_6850(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_685c @ 1000:685c

uint __cdecl16far FUN_1000_685c(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)param_1;
  bVar4 = true;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  if (bVar4) {
    uVar2 = uVar2 - 1;
  }
  return uVar2;
}


// ---- FUN_1000_6876 @ 1000:6876

void __cdecl16far FUN_1000_6876(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  bVar9 = true;
  uVar3 = 0xffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar9 = *pcVar1 == '\0';
  } while (!bVar9);
  uVar3 = ~uVar3;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar6 = (char *)param_1;
  if (bVar9) {
    if (((ulong)param_1 & 1) != 0) {
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
      *param_1 = *param_2;
      uVar3 = uVar3 - 1;
    }
  }
  else {
    pcVar6 = pcVar6 + 2;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}


// ---- FUN_1000_68b2 @ 1000:68b2

undefined2 * __cdecl16far FUN_1000_68b2(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_68fa @ 1000:68fa

undefined2 * __cdecl16far FUN_1000_68fa(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  
  puVar10 = (undefined2 *)param_1;
  if (param_3 != 0) {
    iVar14 = (int)((ulong)param_2 >> 0x10);
    puVar8 = (undefined2 *)param_2;
    iVar13 = (int)((ulong)param_1 >> 0x10);
    lVar15 = FUN_1000_6728(puVar10,iVar13,puVar8,iVar14);
    puVar12 = puVar10;
    if ((lVar15 < 0) || ((uint)((uint)lVar15 < param_3) <= (uint)((ulong)lVar15 >> 0x10))) {
      while( true ) {
        uVar6 = ~(uint)puVar12;
        uVar6 = ((param_3 - 1) - uVar6 & -(uint)(param_3 - 1 < uVar6)) + uVar6;
        uVar7 = ~(uint)puVar8;
        uVar6 = (uVar6 - uVar7 & -(uint)(uVar6 < uVar7)) + uVar7 + 1;
        param_3 = param_3 - uVar6;
        for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
          puVar4 = puVar12;
          puVar12 = puVar12 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar2;
        }
        for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar4 = puVar12;
          puVar12 = (undefined2 *)((int)puVar12 + 1);
          puVar2 = puVar8;
          puVar8 = (undefined2 *)((int)puVar8 + 1);
          *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
        }
        if (param_3 == 0) break;
        if (puVar8 == (undefined2 *)0x0) {
          iVar14 = iVar14 + 0x58;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x58;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x58;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x58;
      }
      while( true ) {
        puVar5 = puVar9 + ((int)(puVar11 +
                                ((int)(param_3 - 1) - (int)puVar11 &
                                -(uint)((undefined1 *)(param_3 - 1) < puVar11))) - (int)puVar9 &
                          -(uint)(puVar11 + ((int)(param_3 - 1) - (int)puVar11 &
                                            -(uint)((undefined1 *)(param_3 - 1) < puVar11)) < puVar9
                                 )) + 1;
        param_3 = param_3 - (int)puVar5;
        for (; puVar5 != (undefined1 *)0x0; puVar5 = puVar5 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + -1;
          puVar1 = puVar9;
          puVar9 = puVar9 + -1;
          *puVar3 = *puVar1;
        }
        if (param_3 == 0) break;
        if (puVar9 == (undefined1 *)0xffff) {
          iVar14 = iVar14 + -0x58;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x58;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_6a12 @ 1000:6a12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_6a12(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  unkbyte10 Var14;
  unkbyte10 Var15;
  char *pcVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined2 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined2 *unaff_SI;
  uint uVar28;
  uint uVar29;
  double *pdVar30;
  char *pcVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  undefined2 in_FPUControlWord;
  longdouble lVar35;
  
  pdVar30 = (double *)&DAT_1008_3496;
  for (iVar18 = 4; Var14 = _DAT_1008_3496, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_3496._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_3496._7_1_ = DAT_1008_3496._7_1_ & 0x7f;
  Var15 = _DAT_1008_3496;
  DAT_1008_3496 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_3496._0_2_ == 0 && DAT_1008_3496._2_2_ == 0) && DAT_1008_3496._4_2_ == 0) &&
      DAT_1008_3496._6_2_ == 0) {
    DAT_1008_34a2 = (char *)s_Mag_Range_Cal_Y_5_1008_2ffc + 5;
    _DAT_1008_3496 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_3496 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_34cf = (undefined1)in_FPUControlWord;
  DAT_1008_34d1._0_1_ = DAT_1008_34cf;
  lVar35 = (longdouble)DAT_1008_3496;
  DAT_1008_3496._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_349e = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_349e * 0x4d10 + (ulong)((DAT_1008_349e >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_3496._7_1_ * 0x9a) +
           -0x1343) -
           (uint)((char *)(uVar19 + (uint)DAT_1008_3496._7_1_ * 0x9a) <
                 (char *)s_Mag_Cal_1008_12ee + 6);
  _DAT_1008_3496 = lVar35;
  _DAT_1008_34cf = in_FPUControlWord;
  FUN_1000_6cd3(iVar18,uVar24);
  DAT_1008_34cd =
       (uint)(_DAT_1000_69c4 < lVar35) << 8 | (uint)(NAN(_DAT_1000_69c4) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_69c4 == lVar35) << 0xe;
  if (_DAT_1000_69c4 < lVar35 || (_DAT_1000_69c4 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_69ce * lVar35;
  }
  DAT_1008_3496._0_2_ = SUB102(lVar35,0);
  DAT_1008_3496._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_3496._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_3496._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_349e = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_349e + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_3496._6_2_ & 1;
    DAT_1008_3496._6_2_ = DAT_1008_3496._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_3496._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_3496._0_2_ = (uint)(CONCAT12((DAT_1008_3496._2_2_ & 1) != 0,DAT_1008_3496._0_2_) >> 1);
    DAT_1008_3496._2_2_ = (uint)(CONCAT12((DAT_1008_3496._4_2_ & 1) != 0,DAT_1008_3496._2_2_) >> 1);
    DAT_1008_3496._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_3496._4_2_) >> 1);
  }
  uVar28 = DAT_1008_3496._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_3496._0_2_ || CARRY2(DAT_1008_3496._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_3496._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_3496._2_2_,uVar19);
  uVar22 = DAT_1008_3496._4_2_ + uVar19;
  uVar19 = DAT_1008_3496._6_2_ + CARRY2(DAT_1008_3496._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(char **)&DAT_1008_34a2 + 1);
  _DAT_1008_3496 = lVar35;
  do {
    pcVar31 = pcVar16;
    iVar21 = iVar20;
    bVar33 = (int)((uint)bVar17 << 8) < 0;
    uVar8 = (ulong)CONCAT12(bVar33,uVar28) << 1;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar9 = (ulong)CONCAT12(bVar32,uVar26) << 1;
    bVar34 = (uVar9 & 0x10000) != 0;
    uVar10 = (ulong)CONCAT12(bVar34,uVar22) << 1;
    bVar13 = (uVar10 & 0x10000) != 0;
    uVar11 = (ulong)CONCAT12(bVar13,uVar19) << 1;
    uVar29 = (uint)((uVar8 & 0xffff | (ulong)bVar33) << 1) | (uint)((char)(bVar17 * '\x02') < '\0');
    uVar27 = (uint)((uVar9 & 0xffff | (ulong)bVar32) << 1) | (uint)((uVar8 & 0x8000) != 0);
    uVar23 = (uint)((uVar10 & 0xffff | (ulong)bVar34) << 1) | (uint)((uVar9 & 0x8000) != 0);
    uVar25 = (uint)((uVar11 & 0xffff | (ulong)bVar13) << 1) | (uint)((uVar10 & 0x8000) != 0);
    uVar4 = (uint)CARRY1(bVar17 * '\x04',bVar17);
    uVar5 = uVar29 + uVar28;
    uVar29 = (uint)(CARRY2(uVar29,uVar28) || CARRY2(uVar5,uVar4));
    uVar6 = uVar27 + uVar26;
    uVar27 = (uint)(CARRY2(uVar27,uVar26) || CARRY2(uVar6,uVar29));
    uVar7 = uVar23 + uVar22;
    uVar23 = (uint)(CARRY2(uVar23,uVar22) || CARRY2(uVar7,uVar27));
    bVar34 = CARRY2(uVar25,uVar19);
    uVar25 = uVar25 + uVar19;
    bVar32 = (char)(bVar17 * '\x05') < '\0';
    bVar17 = bVar17 * '\n';
    uVar8 = (ulong)CONCAT12(bVar32,uVar5 + uVar4) << 1;
    uVar28 = (uint)uVar8 | (uint)bVar32;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar32,uVar6 + uVar29) << 1;
    uVar26 = (uint)uVar8 | (uint)bVar32;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar32,uVar7 + uVar27) << 1;
    uVar22 = (uint)uVar8 | (uint)bVar32;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar32,uVar25 + uVar23) << 1;
    uVar19 = (uint)uVar8 | (uint)bVar32;
    *pcVar31 = (((((uVar11 & 0x10000) != 0) << 1 | (uVar11 & 0x8000) != 0) +
                (bVar34 || CARRY2(uVar25,uVar23))) * '\x02' | (uVar8 & 0x10000) != 0) + 0x30;
    iVar20 = iVar21 + -1;
    pcVar16 = pcVar31 + 1;
  } while (iVar20 != 0);
  iVar21 = iVar21 + -2;
  do {
    if (iVar21 == 0) break;
    iVar21 = iVar21 + -1;
    pcVar2 = pcVar31;
    pcVar31 = pcVar31 + -1;
  } while (*pcVar2 == '0');
  DAT_1008_34a2 = (char *)CONCAT11(DAT_1008_34a2._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_6cd3 @ 1000:6cd3

void __cdecl16near FUN_1000_6cd3(void)

{
  uint unaff_DI;
  uint uStack_2;
  
  uStack_2 = unaff_DI;
  if ((int)unaff_DI < 0) {
    uStack_2 = -unaff_DI;
  }
  for (; uStack_2 != 0; uStack_2 = uStack_2 >> 3) {
  }
  return;
}


// ---- FUN_1000_6fc8 @ 1000:6fc8

void FUN_1000_6fc8(int param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  unkbyte10 in_ST0;
  uint uStack_e;
  code *local_8;
  
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
    }
    local_8 = (code *)0x7066;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x705c;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10007032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*local_8)();
        return;
      }
    }
    if (param_1 == 0) {
      *(unkbyte10 *)((undefined2 *)param_3 + 1) = in_ST0;
      *param_3 = 0;
    }
  }
  return;
}


// ---- FUN_1000_7222 @ 1000:7222

uint * FUN_1000_7222(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar9;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  int local_e;
  
  local_e = param_2;
  pbVar12 = (byte *)param_3;
  uVar3 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar5 = 0;
  uVar8 = (uint)*param_3;
  while( true ) {
    pbVar12 = pbVar12 + 1;
    local_e = local_e + -1;
    if (local_e == 0) break;
    uVar13 = uVar5;
    uVar6 = uVar10;
    FUN_1000_72d0();
    uVar18 = FUN_1000_72d0();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_72d0();
    bVar7 = (byte)((ulong)uVar18 >> 0x10);
    bVar16 = CARRY1(bVar7,*pbVar12);
    bVar9 = (byte)((ulong)uVar18 >> 0x18);
    uVar8 = CONCAT11(bVar9 + bVar16,bVar7 + *pbVar12);
    uVar10 = (uint)CARRY1(bVar9,bVar16);
    uVar5 = uVar4 + uVar10;
    uVar3 = (uint)CARRY2(uVar4,uVar10);
    uVar10 = uVar11 + uVar3;
    uVar4 = (uint)CARRY2(uVar11,uVar3);
    uVar3 = (uint)uVar18 + uVar4;
    uVar14 = uVar14 * 2 + (uint)(bVar15 || CARRY2(uVar1,(uint)(bVar17 || CARRY2(uVar6,uVar13)))) +
             (uint)CARRY2((uint)uVar18,uVar4);
  }
  uVar13 = 0x404e;
  while (uVar6 = uVar5, uVar4 = uVar3, uVar14 == 0) {
    uVar13 = uVar13 - 0x10;
    uVar3 = uVar10;
    uVar5 = uVar8;
    uVar8 = 0;
    uVar10 = uVar6;
    uVar14 = uVar4;
  }
  for (; -1 < (int)uVar14; uVar14 = uVar14 << 1 | (uint)((uVar2 & 0x10000) != 0)) {
    bVar17 = (int)uVar8 < 0;
    uVar8 = uVar8 << 1;
    uVar2 = (ulong)CONCAT12(bVar17,uVar6) << 1;
    uVar6 = (uint)uVar2 | (uint)bVar17;
    bVar17 = (uVar2 & 0x10000) != 0;
    uVar2 = (ulong)CONCAT12(bVar17,uVar10) << 1;
    uVar10 = (uint)uVar2 | (uint)bVar17;
    bVar17 = (uVar2 & 0x10000) != 0;
    uVar2 = (ulong)CONCAT12(bVar17,uVar4) << 1;
    uVar4 = (uint)uVar2 | (uint)bVar17;
    uVar13 = uVar13 - 1;
  }
  param_1[5] = uVar13;
  param_1[4] = uVar14;
  param_1[3] = uVar4;
  param_1[2] = uVar10;
  param_1[1] = uVar6;
  *param_1 = uVar8;
  return param_1;
}


// ---- FUN_1000_72d0 @ 1000:72d0

undefined4 __cdecl16near FUN_1000_72d0(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_72dc @ 1000:72dc

/* WARNING: Removing unreachable block (ram,0x10007332) */
/* WARNING: Removing unreachable block (ram,0x1000733b) */

int FUN_1000_72dc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_7344(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_7344 @ 1000:7344

uint FUN_1000_7344(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  int iVar14;
  bool bVar15;
  char local_36 [26];
  uint local_1c;
  uint local_1a;
  int local_18;
  uint local_16;
  byte *local_14;
  int local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  iVar14 = (int)((ulong)param_2 >> 0x10);
  local_14 = (byte *)param_2;
  local_10 = 0;
  local_12 = iVar14;
  local_16 = 0;
  local_1a = 0;
  local_18 = 0;
  local_1c = 0x19;
  pcVar10 = local_36;
  pbVar11 = local_14;
  do {
    do {
      pbVar9 = pbVar11;
      pbVar11 = pbVar9 + 1;
      bVar6 = *pbVar9;
    } while (bVar6 == 0x20);
  } while (((bVar6 == 9) || (bVar6 == 10)) || (bVar6 == 0xd));
  puVar12 = (uint *)param_4;
  uVar13 = (undefined2)((ulong)param_4 >> 0x10);
  if (bVar6 != 0) {
    if (bVar6 == 0x2b) {
LAB_1000_7393:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_7393;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      while (bVar6 == 0x30) {
        pbVar1 = pbVar11;
        pbVar11 = pbVar11 + 1;
        bVar6 = *pbVar1;
      }
      if (bVar6 != 0) {
        iVar5 = local_18;
        if (bVar6 != 0x2e) {
          while ((0x2f < bVar6 && (bVar6 < 0x3a))) {
            pcVar2 = pcVar10;
            pcVar10 = pcVar10 + 1;
            *pcVar2 = bVar6 - 0x30;
            local_1c = local_1c + -1;
            iVar5 = local_18;
            if (local_1c == 0) goto LAB_1000_73e1;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_73fb:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_7417;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_740e;
          }
          goto LAB_1000_7417;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_73c0:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_73fb;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_7579;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_73c0;
  }
  local_10 = 4;
  goto LAB_1000_7579;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_73e1:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_740e:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_7417:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_7446:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_7446;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_747d;
        if (0x666 < uVar8) break;
        uVar7 = CONCAT11((char)(uVar7 >> 8),bVar6 - 0x30) + uVar8 * 2;
        uVar8 = uVar8 * 8 + uVar7;
      } while (-1 < (int)uVar8);
      uVar8 = 0x3fff;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        if (*pbVar1 < 0x30) break;
      } while (*pbVar1 < 0x3a);
LAB_1000_747d:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_74c4;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_74c4:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_7222(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_74fe:
      if ((0x7fff < local_e) && ((0x8000 < local_e || ((local_c & 1) != 0)))) {
        bVar15 = 0xfffe < local_c;
        local_c = local_c + 1;
        bVar4 = CARRY2(local_a,(uint)bVar15);
        local_a = local_a + bVar15;
        uVar8 = (uint)bVar4;
        bVar4 = CARRY2(local_8,uVar8);
        local_8 = local_8 + uVar8;
        uVar8 = (uint)bVar4;
        bVar4 = CARRY2(local_6,uVar8);
        local_6 = local_6 + uVar8;
        if (bVar4) {
          local_6 = local_6 | 0x8000;
          local_4 = local_4 + 1;
        }
      }
      if (local_4 < 0x7fff) {
        if ((local_4 != 0) || (((local_6 != 0 || local_8 != 0) || local_a != 0) || local_c != 0)) {
          puVar12[3] = local_6;
          puVar12[2] = local_8;
          puVar12[1] = local_a;
          *param_4 = local_c;
          puVar12[4] = local_4 | local_16;
          goto LAB_1000_755b;
        }
LAB_1000_7585:
        local_10 = local_10 | 1;
        goto LAB_1000_7579;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_6fc8(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_74fe;
      }
      goto LAB_1000_7585;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_755b;
  }
LAB_1000_7579:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_755b:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_7622 @ 1000:7622

char * __cdecl16far FUN_1000_7622(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined4 local_8;
  
  pcVar5 = (char *)s_Unknown_Configuration_1008_0ff8 + 0x10;
  while( true ) {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*param_1 == '\0') || (*param_1 == '.')) break;
    param_1 = (char *)CONCAT22(uVar6,(char *)param_1 + 1);
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = (char *)param_1;
      param_1._0_2_ = pcVar2 + 1;
      pcVar3 = (char *)param_1;
      if ((*(char *)param_1 == '\0') || (*(char *)param_1 == 'e')) break;
    } while (*(char *)param_1 != 'E');
    param_1 = (char *)CONCAT22(uVar6,pcVar2);
    local_8 = (char *)CONCAT22(uVar6,pcVar3);
    while( true ) {
      if (*(char *)param_1 != '0') break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    if (*(char *)param_1 == '.') {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    do {
      pcVar4 = local_8;
      local_8 = (char *)CONCAT22(local_8._2_2_,(char *)local_8 + 1);
      cVar1 = *pcVar4;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *param_1 = cVar1;
      pcVar5 = (char *)CONCAT11((char)((uint)pcVar5 >> 8),cVar1);
    } while (cVar1 != '\0');
  }
  return pcVar5;
}


// ---- FUN_1000_76a6 @ 1000:76a6

bool __cdecl16far FUN_1000_76a6(double *param_1)

{
  return DAT_1008_3556 <= *param_1;
}


// ---- FUN_1000_76de @ 1000:76de

void __cdecl16far FUN_1000_76de(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_661c(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_661c(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_7736 @ 1000:7736

undefined1 * __cdecl16far
FUN_1000_7736(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_34ea == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_7c80(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_667a(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_3aca,DAT_1008_3ac8);
    FUN_1000_7be8(0 < param_4,param_2 + (*DAT_1008_3ac8 == 0x2d),param_3);
  }
  puVar2 = param_2;
  if (*local_8 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  local_c = (char *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    *local_c = puVar2[1];
    local_c = (char *)CONCAT22(param_3,puVar2 + 1);
    puVar2[1] = 0x2e;
  }
  puVar2 = (undefined1 *)
           FUN_1000_6876((undefined1 *)local_c + param_4 + (uint)(DAT_1008_34ea == '\0'),
                         local_c._2_2_,0x34ef,(char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  local_c = (char *)CONCAT22(local_c._2_2_,puVar2);
  if (param_5 != 0) {
    *local_c = 0x45;
  }
  local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 1);
  uVar5 = (undefined2)((ulong)local_8 >> 0x10);
  if (**(char **)((int *)local_8 + 3) != '0') {
    iVar4 = ((int *)local_8)[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *local_c = 0x2d;
    }
    local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 2);
    if (99 < iVar4) {
      *local_c = *local_c + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 3);
    if (9 < iVar4) {
      *local_c = *local_c + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 4);
    *local_c = *local_c + (char)iVar4;
  }
  return param_2;
}


// ---- FUN_1000_78ce @ 1000:78ce

void __cdecl16far
FUN_1000_78ce(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_34ea = 1;
  FUN_1000_7736(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_34ea = 0;
  return;
}


// ---- FUN_1000_7902 @ 1000:7902

undefined1 * __cdecl16far
FUN_1000_7902(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 in_DX;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = DAT_1008_34ec;
  if (DAT_1008_34ea == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_7c80(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_667a(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_3aca,DAT_1008_3ac8);
    iVar1 = *DAT_1008_3ac8;
    if (param_4 == DAT_1008_34ec) {
      param_2[DAT_1008_34ec + (uint)(iVar1 == 0x2d)] = 0x30;
      param_2[iVar3 + (uint)(iVar1 == 0x2d) + 1] = 0;
    }
  }
  puVar2 = param_2;
  if (*local_8 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  uVar6 = (undefined2)((ulong)local_8 >> 0x10);
  piVar5 = (int *)local_8;
  if (piVar5[1] < 1) {
    FUN_1000_7be8(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_7be8(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_34ea == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_7be8(iVar3,puVar2 + 1,param_3);
      FUN_1000_68b2(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_7a68 @ 1000:7a68

void __cdecl16far
FUN_1000_7a68(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_34ea = 1;
  FUN_1000_7902(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_34ea = 0;
  return;
}


// ---- FUN_1000_7a9a @ 1000:7a9a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_7a9a(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 local_8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)param_1;
  piVar2 = (int *)FUN_1000_7c80(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_3ac8 = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_34ec = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_3ac8 == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_667a(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_3ac8)[1] + -1;
  DAT_1008_34ee = DAT_1008_34ec < iVar4;
  DAT_1008_34ec = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_78ce(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_34ee) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_7a68(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_7b7a @ 1000:7b7a

void __cdecl16far
FUN_1000_7b7a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_7736(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_7902(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_7a9a(param_1,param_2,param_3,param_4,param_6,param_7,
                  (char *)s_Unknown_Configuration_1008_0ff8 + 0x10,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_7be8 @ 1000:7be8

void FUN_1000_7be8(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_685c(param_2,param_3);
    FUN_1000_68fa(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_7c1c @ 1000:7c1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl16far FUN_1000_7c1c(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  char *local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = (char *)s_Unknown_Configuration_1008_0ff8 + 0x10;
  uVar1 = FUN_1000_72dc(0,param_1,param_2,local_8,unaff_SS,0x3ad4,
                        (char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  DAT_1008_3ace = local_8[0] - param_1;
  DAT_1008_3acd = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_3acd = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_3acd = DAT_1008_3acd | 1;
  }
  DAT_1008_3acc = (uVar1 & 2) != 0;
  return (undefined1 *)&DAT_1008_3acc;
}


// ---- FUN_1000_7c80 @ 1000:7c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * __cdecl16far
FUN_1000_7c80(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  int unaff_BP;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  _DAT_1008_3500 = param_1;
  _DAT_1008_3502 = param_2;
  DAT_1008_3504 = param_3;
  DAT_1008_3506 = param_4;
  uVar6 = FUN_1000_6a12(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_3508;
  puVar4 = (undefined1 *)&DAT_1008_3501;
  for (iVar3 = (int)DAT_1008_3500; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_34f6 = in_BX & 0xff;
  DAT_1008_34f8 = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_34fa = (int)uVar6;
  DAT_1008_34fc = (undefined1 *)&DAT_1008_3508;
  DAT_1008_34fe = (char *)s_Unknown_Configuration_1008_0ff8 + 0x10;
  return (undefined2 *)&DAT_1008_34f6;
}


// ---- FUN_1000_7d0e @ 1000:7d0e

void __cdecl16near FUN_1000_7d0e(void)

{
  return;
}


// ---- FUN_1000_7d13 @ 1000:7d13

void FUN_1000_7d13(void)

{
  FUN_1000_63e2();
  return;
}


// ---- FUN_1000_7d3b @ 1000:7d3b

undefined2 __cdecl16far FUN_1000_7d3b(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_BX;
  uint uVar3;
  code *pcVar4;
  undefined2 unaff_CS;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  
  pcVar6 = (char *)s_Unknown_Configuration_1008_0ff8 + 0x10;
  do {
    if (param_1 < 0xffe7) {
      bVar7 = false;
      if (*(int *)((int)(undefined4 *)&DAT_1008_3536 + 2) != 0) {
        pcVar4 = (code *)0x7e4c;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_3540;
          uVar5 = (uint)((ulong)*(undefined4 *)&DAT_1008_353a >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_353a;
          uVar10 = uVar5;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x7e4c) goto LAB_1000_7dac;
                goto LAB_1000_7da9;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar5 < uVar3;
              bVar8 = uVar5 != uVar3;
              uVar5 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_353a + 0x14);
            uVar5 = (uint)((ulong)*(undefined4 *)&DAT_1008_3536 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_3536;
            bVar7 = uVar5 < uVar10;
            bVar8 = uVar5 != uVar10;
            uVar10 = uVar5;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x64ea;
          if (pcVar4 == (code *)0x64ea) break;
          pcVar4 = (code *)0x64ea;
        }
      }
      FUN_1000_7ec8();
      if (!bVar7) {
LAB_1000_7da9:
        uVar9 = FUN_1000_7e4c();
LAB_1000_7dac:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_353a + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_353a = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_3534 == 0 && *(int *)&DAT_1008_3532 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_3532)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_7de2 @ 1000:7de2

void __cdecl16near FUN_1000_7de2(void)

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
  *in_BX = (char *)s_Unknown_Configuration_1008_0ff8 + 0x10;
  in_BX[4] = piVar1;
  in_BX[5] = piVar1;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  in_BX[10] = 0;
  return;
}


// ---- FUN_1000_7e16 @ 1000:7e16

void __cdecl16near FUN_1000_7e16(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = (int)((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(undefined2 *)(iVar1 + 0x10) = (char *)s_Unknown_Configuration_1008_0ff8 + 0x10;
    *(int *)(iVar1 + 0xe) = in_BX;
    *(undefined2 *)(in_BX + 0x14) = uVar2;
    *(int *)(in_BX + 0x12) = iVar1;
  }
  unaff_DI[5] = (int)((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  unaff_DI[4] = in_BX;
  unaff_DI[3] = (int)((char *)s_Unknown_Configuration_1008_0ff8 + 0x10);
  unaff_DI[2] = in_BX;
  return;
}


// ---- FUN_1000_7e4c @ 1000:7e4c

uint * __cdecl16near FUN_1000_7e4c(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_7ea5;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_7ea5;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_7ea5;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_7ea5:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_7ec8 @ 1000:7ec8

void __cdecl16near FUN_1000_7ec8(void)

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
  
  uVar3 = (uint)((char *)s_Not_Fitted_1008_1016 + 3 + in_CX) & 0xf000;
  iVar2 = 0;
  if (uVar3 == 0) {
    if ((DAT_1000_5e3e & 0x10) != 0) {
      return;
    }
    iVar2 = 1;
  }
  uVar6 = 0;
  uVar7 = DAT_1000_5e3e;
  iVar1 = GLOBALALLOC(0x1000,uVar3,iVar2);
  if (iVar1 != 0) {
    if ((uVar6 & 1) != 0) {
      iVar2 = iVar1;
      uVar4 = GLOBALLOCK((char *)s_Viewing_Window_1008_1037 + 1,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_7f3f;
    }
    lVar5 = GLOBALSIZE((char *)s_Viewing_Window_1008_1037 + 1,iVar1);
    if (lVar5 == 0) {
LAB_1000_7f3f:
      FUN_1000_63e2();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_7de2();
    FUN_1000_7e16();
  }
  return;
}


// ---- FATALEXIT @ 1038:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1038:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1038:0008

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1038:000c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1038:0010

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1038:0014

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1038:0018

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WAITEVENT @ 1038:001c

/* WARNING: Control flow encountered bad instruction data */

void WAITEVENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEFILENAME @ 1038:0020

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MAKEPROCINSTANCE @ 1038:0024

/* WARNING: Control flow encountered bad instruction data */

void MAKEPROCINSTANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FREEPROCINSTANCE @ 1038:0028

/* WARNING: Control flow encountered bad instruction data */

void FREEPROCINSTANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1038:002c

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1038:0030

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCREAT @ 1038:0034

/* WARNING: Control flow encountered bad instruction data */

void _LCREAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LOPEN @ 1038:0038

/* WARNING: Control flow encountered bad instruction data */

void _LOPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LWRITE @ 1038:003c

/* WARNING: Control flow encountered bad instruction data */

void _LWRITE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1038:0040

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1038:0044

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1038:0048

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1038:004c

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1038:0050

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1038:0054

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1038:0058

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1038:005c

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1038:0060

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1038:0064

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETBKCOLOR @ 1038:0068

/* WARNING: Control flow encountered bad instruction data */

void SETBKCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TEXTOUT @ 1038:006c

/* WARNING: Control flow encountered bad instruction data */

void TEXTOUT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEPEN @ 1038:0070

/* WARNING: Control flow encountered bad instruction data */

void CREATEPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATESOLIDBRUSH @ 1038:0074

/* WARNING: Control flow encountered bad instruction data */

void CREATESOLIDBRUSH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEDC @ 1038:0078

/* WARNING: Control flow encountered bad instruction data */

void DELETEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEOBJECT @ 1038:007c

/* WARNING: Control flow encountered bad instruction data */

void DELETEOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDEVICECAPS @ 1038:0080

/* WARNING: Control flow encountered bad instruction data */

void GETDEVICECAPS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSTOCKOBJECT @ 1038:0084

/* WARNING: Control flow encountered bad instruction data */

void GETSTOCKOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTEXTMETRICS @ 1038:0088

/* WARNING: Control flow encountered bad instruction data */

void GETTEXTMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STARTDOC @ 1038:008c

/* WARNING: Control flow encountered bad instruction data */

void STARTDOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDDOC @ 1038:0090

/* WARNING: Control flow encountered bad instruction data */

void ENDDOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STARTPAGE @ 1038:0094

/* WARNING: Control flow encountered bad instruction data */

void STARTPAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDPAGE @ 1038:0098

/* WARNING: Control flow encountered bad instruction data */

void ENDPAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETABORTPROC @ 1038:009c

/* WARNING: Control flow encountered bad instruction data */

void SETABORTPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1038:00a0

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITAPP @ 1038:00a4

/* WARNING: Control flow encountered bad instruction data */

void INITAPP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTQUITMESSAGE @ 1038:00a8

/* WARNING: Control flow encountered bad instruction data */

void POSTQUITMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWRECT @ 1038:00ac

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENABLEWINDOW @ 1038:00b0

/* WARNING: Control flow encountered bad instruction data */

void ENABLEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWTEXT @ 1038:00b4

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWTEXT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEWINDOW @ 1038:00b8

/* WARNING: Control flow encountered bad instruction data */

void CREATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SHOWWINDOW @ 1038:00bc

/* WARNING: Control flow encountered bad instruction data */

void SHOWWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPARENT @ 1038:00c0

/* WARNING: Control flow encountered bad instruction data */

void GETPARENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DESTROYWINDOW @ 1038:00c4

/* WARNING: Control flow encountered bad instruction data */

void DESTROYWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERCLASS @ 1038:00c8

/* WARNING: Control flow encountered bad instruction data */

void REGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDC @ 1038:00cc

/* WARNING: Control flow encountered bad instruction data */

void GETDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RELEASEDC @ 1038:00d0

/* WARNING: Control flow encountered bad instruction data */

void RELEASEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEDIALOG @ 1038:00d4

/* WARNING: Control flow encountered bad instruction data */

void CREATEDIALOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISDIALOGMESSAGE @ 1038:00d8

/* WARNING: Control flow encountered bad instruction data */

void ISDIALOGMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBEEP @ 1038:00dc

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBEEP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFWINDOWPROC @ 1038:00e0

/* WARNING: Control flow encountered bad instruction data */

void DEFWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMESSAGE @ 1038:00e4

/* WARNING: Control flow encountered bad instruction data */

void GETMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PEEKMESSAGE @ 1038:00e8

/* WARNING: Control flow encountered bad instruction data */

void PEEKMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTMESSAGE @ 1038:00ec

/* WARNING: Control flow encountered bad instruction data */

void POSTMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SENDMESSAGE @ 1038:00f0

/* WARNING: Control flow encountered bad instruction data */

void SENDMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TRANSLATEMESSAGE @ 1038:00f4

/* WARNING: Control flow encountered bad instruction data */

void TRANSLATEMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DISPATCHMESSAGE @ 1038:00f8

/* WARNING: Control flow encountered bad instruction data */

void DISPATCHMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATEWINDOW @ 1038:00fc

/* WARNING: Control flow encountered bad instruction data */

void UPDATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENABLEMENUITEM @ 1038:0100

/* WARNING: Control flow encountered bad instruction data */

void ENABLEMENUITEM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMENU @ 1038:0104

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMENU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1038:0108

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADICON @ 1038:010c

/* WARNING: Control flow encountered bad instruction data */

void LOADICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADACCELERATORS @ 1038:0110

/* WARNING: Control flow encountered bad instruction data */

void LOADACCELERATORS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TRANSLATEACCELERATOR @ 1038:0114

/* WARNING: Control flow encountered bad instruction data */

void TRANSLATEACCELERATOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMETRICS @ 1038:0118

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWPOS @ 1038:011c

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNREGISTERCLASS @ 1038:0120

/* WARNING: Control flow encountered bad instruction data */

void UNREGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1038:0124

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1038:0128

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETOPENFILENAME @ 1038:012c

/* WARNING: Control flow encountered bad instruction data */

void GETOPENFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSAVEFILENAME @ 1038:0130

/* WARNING: Control flow encountered bad instruction data */

void GETSAVEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PRINTDLG @ 1038:0134

/* WARNING: Control flow encountered bad instruction data */

void PRINTDLG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


