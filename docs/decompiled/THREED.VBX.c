// Decompiled with Ghidra from THREED.VBX
// Format: New Executable (NE), image base 0000:0000

// ---- FUN_1000_0010 @ 1000:0010

undefined2 __stdcall16far FUN_1000_0010(undefined2 param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined2 unaff_SS;
  int iVar7;
  undefined2 uVar8;
  undefined1 local_10c [135];
  char acStack_85 [121];
  uint local_c;
  uint local_a;
  
  local_a = 0;
  local_c = 0;
  FUN_1000_7ff6();
  pcVar5 = (char *)s_License_file_for_custom_control_n_1008_0010 + 0x68;
  iVar1 = GETMODULEFILENAME(0x1000,0x78,acStack_85 + 1,unaff_SS);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    for (pcVar5 = acStack_85 + iVar1; *pcVar5 != '\\'; pcVar5 = pcVar5 + -1) {
    }
    LSTRCPY((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x9a,0x1008,pcVar5 + 1);
    local_10c[0] = 0x88;
    pcVar5 = acStack_85 + 1;
    iVar1 = OPENFILE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,local_10c,
                     unaff_SS,pcVar5);
    if (iVar1 == -1) {
      pcVar5 = (char *)0x1008;
      iVar1 = OPENFILE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,local_10c,
                       unaff_SS,0x9a);
    }
    uVar6 = local_a;
    if (iVar1 != -1) {
      while ((iVar7 = iVar1,
             iVar2 = _LREAD((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,&local_c,
                            unaff_SS), iVar2 == 1 && (local_c != 0x1a))) {
        uVar6 = uVar6 + local_c;
      }
      iVar2 = iVar1;
      iVar3 = _LREAD((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,&local_c,unaff_SS
                    );
      if ((iVar3 == 2) && (local_c == uVar6)) {
        iVar3 = iVar1;
        iVar4 = _LREAD((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,&local_c,
                       unaff_SS);
        if (iVar4 != 2) {
          local_c = 0x100;
        }
        _LCLOSE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1,iVar3,iVar2,iVar7)
        ;
        if (param_3 <= local_c) {
          return 1;
        }
      }
    }
  }
  uVar8 = 0;
  MESSAGEBOX((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x2030,param_1,param_2,0x10
             ,0x1008);
  if (iVar1 != -1) {
    _LCLOSE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1,uVar8,pcVar5);
  }
  return 0;
}


// ---- FUN_1000_0128 @ 1000:0128

void FUN_1000_0128(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
                  undefined2 param_6)

{
  undefined2 uVar1;
  char *unaff_CS;
  
  param_4 = param_4 + -1;
  param_5 = param_5 + -1;
  if (param_1 != 0) {
    GETPIXEL(unaff_CS,param_3,param_2);
    GETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5,param_2);
    GETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5,param_4);
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    GETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3,param_4);
  }
  uVar1 = GETSTOCKOBJECT(unaff_CS,7,param_6);
  uVar1 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3,param_2);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5,param_2);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5,param_4);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3,param_4);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3,param_2);
  if (param_1 != 0) {
    SETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xc0c0,0xc0,param_3,param_2
            );
    SETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xc0c0,0xc0,param_5,param_2
            );
    SETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xc0c0,0xc0,param_5,param_4
            );
    SETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xc0c0,0xc0,param_3,param_4
            );
  }
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  return;
}


// ---- FUN_1000_0224 @ 1000:0224

void FUN_1000_0224(int param_1,int param_2,int param_3,undefined2 param_4,int param_5,
                  undefined2 param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = 0;
  uVar5 = param_6;
  uVar1 = CREATEPEN(unaff_CS,0x8080,0x80,1);
  uVar2 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  if (0 < param_1) {
    iVar3 = 0;
    do {
      MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5 + -1,
             param_2 + iVar3);
      LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3 + iVar3,
             param_2 + iVar3);
      LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3 + iVar3,param_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,param_6,uVar4,uVar5
              );
  return;
}


// ---- FUN_1000_02c0 @ 1000:02c0

void FUN_1000_02c0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  undefined2 param_7)

{
  if (param_5 != 0) {
    if (param_4 != 0) {
      *param_6 = *param_6 + param_5;
    }
    if (param_3 != 0) {
      param_6[1] = param_6[1] + param_5;
    }
    if (param_2 != 0) {
      param_6[2] = param_6[2] - param_5;
    }
    if (param_1 != 0) {
      param_6[3] = param_6[3] - param_5;
    }
  }
  return;
}


// ---- FUN_1000_0306 @ 1000:0306

void FUN_1000_0306(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,undefined2 param_9)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  if (0 < param_4) {
    if (param_2 == 0 && param_1 == 0) {
      uVar9 = 7;
      uVar1 = GETSTOCKOBJECT();
    }
    else {
      uVar9 = 0;
      uVar1 = CREATEPEN(unaff_CS,param_1,param_2,1);
    }
    uVar2 = uVar1;
    uVar8 = param_9;
    if (param_3 != 0) {
      uVar2 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,6,param_9,
                             uVar9);
    }
    uVar9 = 0x36f;
    uVar2 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2);
    if (0 < param_4) {
      iVar5 = 0;
      do {
        MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,(param_8 + -1) - iVar5,
               param_5 + iVar5);
        LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_6 + iVar5,
               param_5 + iVar5);
        uVar9 = param_9;
        LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_6 + iVar5,
               (param_7 + -1) - iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_4);
    }
    uVar6 = uVar1;
    uVar7 = param_9;
    if (param_3 == 0) {
      uVar6 = 6;
      uVar9 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,6,param_9,
                             uVar8);
    }
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar9);
    iVar5 = 0;
    if (0 < param_4) {
      do {
        iVar3 = (param_8 + -1) - iVar5;
        MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar3,param_5 + iVar5);
        iVar4 = (param_7 + -1) - iVar5;
        LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar3,iVar4);
        LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_6 + iVar5 + -1,
               iVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_4);
    }
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2);
    if (param_2 != 0 || param_1 != 0) {
      DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,param_9,uVar6,
                   uVar7);
    }
  }
  return;
}


// ---- FUN_1000_0440 @ 1000:0440

void FUN_1000_0440(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar1;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = param_4;
  GETWINDOWRECT(unaff_CS,&local_e,unaff_SS);
  local_6 = local_e;
  local_4 = local_c;
  GETPARENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,uVar1);
  SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_6,unaff_SS);
  MOVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1,param_2,param_3,
             local_4,local_6);
  return;
}


// ---- FUN_1000_048a @ 1000:048a

void FUN_1000_048a(int param_1,int param_2,char param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,undefined2 param_10,int param_11)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SS;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 local_36 [2];
  int local_34;
  int local_32;
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined2 local_24;
  undefined1 local_20 [8];
  int local_18;
  int local_16;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  undefined2 local_8;
  uint local_6;
  int local_4;
  
  iVar4 = param_11;
  local_8 = CREATECOMPATIBLEDC();
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_10);
  GETOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_36,unaff_SS,0xe);
  local_10 = local_34;
  local_e = local_32;
  local_18 = (param_8 - param_6) + 1;
  local_16 = (param_9 - param_7) + 1;
  local_6 = 0;
  local_14 = 0;
  local_12 = 0;
  local_c = param_5;
  if ((param_4 == 0) && ((local_34 != local_18 || (local_16 != local_32)))) {
    local_c = (local_18 - local_34) / 2 + param_5;
    param_5 = (local_16 - local_32) / 2 + param_5;
  }
  local_c = local_c + param_6;
  local_a = param_5 + param_7;
  local_4 = local_16;
  if (param_1 != 0) {
    COPYRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_6,unaff_SS,local_20)
    ;
    LPTODP((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,local_20,unaff_SS);
    uVar1 = CREATERECTRGNINDIRECT
                      ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_20);
    SELECTCLIPRGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
    DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  }
  iVar6 = local_c;
  iVar7 = iVar4;
  if (param_4 == 0) {
    BITBLT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x20,0xcc,local_12,local_14,
           local_8,local_e,local_10,local_a,local_c);
  }
  else {
    STRETCHBLT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x20,0xcc,local_e,
               local_10,local_12,local_14,local_8,local_16,local_18,local_a,local_c);
  }
  if (param_3 == '\x01') {
    GETOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_28,unaff_SS,8);
    if (param_7 <= param_9) {
      local_4 = param_7;
      uVar2 = local_6;
      iVar4 = param_7;
      do {
        iVar3 = param_6 + uVar2;
        iVar6 = iVar4;
        if (iVar3 <= param_8) {
          do {
            local_4 = iVar6;
            local_6 = uVar2;
            lVar5 = GETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar4,iVar3
                            );
            if (lVar5 == CONCAT22(local_24,local_26)) {
              SETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xff,iVar4
                       ,iVar3);
            }
            iVar3 = iVar3 + 2;
            uVar2 = local_6;
            iVar6 = local_4;
          } while (iVar3 <= param_8);
        }
        uVar2 = (uint)(uVar2 == 0);
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_9);
    }
  }
  else {
    param_2 = iVar6;
    if (param_3 == '\x02') {
      INVERTRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_6,unaff_SS);
      param_2 = iVar4;
    }
  }
  DELETEDC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8,param_2,iVar7);
  return;
}


// ---- FUN_1000_0648 @ 1000:0648

undefined2 FUN_1000_0648(undefined2 param_1,uint param_2)

{
  undefined2 uVar1;
  
  if ((param_2 & 0x8000) != 0) {
    uVar1 = GETSYSCOLOR();
    return uVar1;
  }
  return param_1;
}


// ---- GRAYSTRINGCALLBACK @ 1000:0668

undefined2 __stdcall16far
GRAYSTRINGCALLBACK(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  char *unaff_CS;
  char *pcVar1;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_a = 0;
  local_8 = 0;
  local_6 = DAT_1008_1f30;
  local_4 = DAT_1008_1f28;
  pcVar1 = unaff_CS;
  if (DAT_1008_1f32 != 0) {
    pcVar1 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    SELECTOBJECT(unaff_CS,DAT_1008_1f32);
  }
  DRAWTEXT(pcVar1,DAT_1008_1f36,&local_a,unaff_SS,0xffff,param_2,param_3);
  return 1;
}


// ---- FUN_1000_06ba @ 1000:06ba

void FUN_1000_06ba(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000_7fee();
  if (iVar1 == 1) {
    if (DAT_1008_1f5c == '\0') {
      FUN_1000_071e();
    }
    WINHELP(0x1000,param_1,param_2,1,(undefined1 *)&DAT_1008_1f5c,0x1008);
  }
  return;
}


// ---- FUN_1000_06e8 @ 1000:06e8

void FUN_1000_06e8(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000_7fee();
  if ((iVar1 == 1) && (DAT_1008_1466 < 1)) {
    iVar1 = ISWINDOW(0x1000,param_1);
    if (iVar1 != 0) {
      WINHELP((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,2,
              (undefined1 *)&DAT_1008_1f5c,0x1008);
    }
  }
  return;
}


// ---- FUN_1000_071e @ 1000:071e

void __cdecl16near FUN_1000_071e(void)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  
  iVar1 = GETMODULEFILENAME(unaff_CS,0x80,(undefined1 *)&DAT_1008_1f5c,0x1008);
  pcVar2 = (undefined1 *)&DAT_1008_1f5c + iVar1;
  if ((char *)&DAT_1008_1f5c < pcVar2) {
    do {
      if ((*pcVar2 == '\\') || (*pcVar2 == ':')) {
        pcVar2[1] = '\0';
        break;
      }
      iVar1 = iVar1 + -1;
      pcVar2 = pcVar2 + -1;
    } while ((char *)&DAT_1008_1f5c < pcVar2);
  }
  if (iVar1 + 0xd < 0x80) {
    uVar3 = 0x146a;
  }
  else {
    uVar3 = 0x1473;
  }
  LSTRCAT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3,0x1008,
          (undefined1 *)&DAT_1008_1f5c);
  return;
}


// ---- FUN_1000_0776 @ 1000:0776

void FUN_1000_0776(undefined2 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint local_3c;
  undefined1 local_3a;
  undefined1 local_39 [51];
  uint *local_6;
  
  iVar1 = LSTRLEN(unaff_CS,param_1);
  local_3c = iVar1 + 4;
  local_6 = &local_3c;
  if (local_3c < 0x37) {
    local_3a = param_3;
    LSTRCPY((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1,param_2,local_39);
    GETACTIVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
    WINHELP((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_3c,unaff_SS,0x201,
            (char *)s_ctrlref_hlp_1008_1475,0x1008);
  }
  return;
}


// ---- VBINITCC @ 1000:07cc

char __stdcall16far VBINITCC(int param_1,uint param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  if (param_1 == 0) {
    unaff_CS = 0x1000;
    iVar1 = FUN_1000_0010((char *)s_Sheridan_3_D_Widgets_1_1008_1481,0x1008,0x100);
    if (iVar1 == 0) {
      return '\0';
    }
  }
  if ((param_1 == 0) && (DAT_1008_1464 == 0)) {
    DAT_1008_1464 = 1;
  }
  if (param_2 < 0x200) {
    iVar1 = FUN_1000_7f5e(unaff_CS,0x2ce,0x1008,DAT_1008_1f2c,uVar3);
    cVar2 = iVar1 != 0;
    iVar1 = FUN_1000_7f5e(0x1000,0x508,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0xf58,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0x78e,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0xcd6,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    uVar3 = 0x12d4;
  }
  else if (param_2 < 0x300) {
    iVar1 = FUN_1000_7f5e(unaff_CS,0x356,0x1008,DAT_1008_1f2c,uVar3);
    cVar2 = iVar1 != 0;
    iVar1 = FUN_1000_7f5e(0x1000,0x588,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0xfe4,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0x82a,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0xd6e,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    uVar3 = 0x1356;
  }
  else {
    iVar1 = FUN_1000_7f5e(unaff_CS,0x3e4,0x1008,DAT_1008_1f2c,uVar3);
    cVar2 = iVar1 != 0;
    iVar1 = FUN_1000_7f5e(0x1000,0x608,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0x1070,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0x8c6,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    iVar1 = FUN_1000_7f5e(0x1000,0xe0c,0x1008,DAT_1008_1f2c);
    if (iVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    uVar3 = 0x13d8;
  }
  iVar1 = FUN_1000_7f5e(0x1000,uVar3,0x1008,DAT_1008_1f2c);
  if (iVar1 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 != '\0') {
    DAT_1008_1462 = DAT_1008_1462 + 1;
  }
  return cVar2;
}


// ---- VBTERMCC @ 1000:0960

void __cdecl16far VBTERMCC(void)

{
  DAT_1008_1462 = DAT_1008_1462 + -1;
  return;
}


// ---- VBGETMODELINFO @ 1000:0970

undefined4 __stdcall16far VBGETMODELINFO(uint param_1)

{
  undefined2 uVar1;
  
  if (param_1 < 0x200) {
    uVar1 = 0x145c;
  }
  else if (param_1 < 0x300) {
    uVar1 = 0x143a;
  }
  else {
    uVar1 = 0x1418;
  }
  return CONCAT22(0x1008,uVar1);
}


// ---- FUN_1000_099e @ 1000:099e

undefined2 __stdcall16far FUN_1000_099e(void)

{
  undefined2 in_stack_0000000c;
  
  DAT_1008_1f2c = in_stack_0000000c;
  UNLOCKSEGMENT();
  return 1;
}


// ---- SSCBCTLPROC @ 1000:09b6

ulong __stdcall16far
SSCBCTLPROC(undefined2 *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined2 uVar12;
  undefined2 local_36 [16];
  undefined1 local_16 [8];
  undefined2 *local_e;
  undefined2 local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar12 = 0x1008;
  puVar5 = (undefined1 *)local_a;
  if (param_6 != 0 || param_5 != 0) {
    unaff_CS = (char *)0x1000;
    puVar6 = (undefined1 *)FUN_1000_7f66();
    puVar5 = (undefined1 *)puVar6;
    local_a = (undefined1 *)CONCAT22((int)((ulong)puVar6 >> 0x10),(undefined1 *)local_a);
  }
  if (param_3 == 0x14) {
    uVar3 = 1;
    *(undefined2 *)(puVar5 + 0x12) = 1;
    goto LAB_1000_0fcd;
  }
  if (0x14 < param_3) {
    if (param_3 == 0x400) {
      if (*(int *)(puVar5 + 1) == 0) {
        iVar4 = 0;
LAB_1000_0caf:
        return (long)iVar4;
      }
      uVar3 = 1;
      goto LAB_1000_0fcd;
    }
    if (param_3 < 0x401) {
      if (param_3 == 0x101) {
        if (param_2 != 0x20) goto switchD_1000_09f5_caseD_9;
        uVar12 = 0x4c9;
      }
      else {
        if (0x101 < param_3) {
          if (param_3 == 0x200) {
            if (DAT_1008_14a2 == 0) goto switchD_1000_09f5_caseD_9;
            local_e = (undefined2 *)param_1;
            local_c = param_1._2_2_;
            GETCLIENTRECT(unaff_CS,local_16,unaff_SS);
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            iVar4 = PTINRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_e,
                             local_c,local_16);
            if (iVar4 == 0) {
              if (DAT_1008_14a4 == 0) {
                *(undefined2 *)(puVar5 + 0xb) = 1;
                *(undefined2 *)(puVar5 + 0x16) = 1;
                INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,
                               param_4);
                UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
                DAT_1008_14a4 = 1;
                unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              }
              goto switchD_1000_09f5_caseD_9;
            }
            if (DAT_1008_14a4 == 0) goto switchD_1000_09f5_caseD_9;
            *(undefined2 *)(puVar5 + 0xb) = 0;
            *(undefined2 *)(puVar5 + 0x16) = 1;
            INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,param_4
                          );
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
LAB_1000_0e5d:
            DAT_1008_14a4 = 0;
            goto switchD_1000_09f5_caseD_9;
          }
          if (param_3 != 0x201) {
            if (param_3 == 0x202) goto LAB_1000_0ed2;
            if (param_3 != 0x203) {
              if (param_3 == 0x205) {
                iVar4 = FUN_1000_7fee(unaff_CS);
                unaff_CS = (char *)0x1000;
                if (iVar4 == 1) {
                  DAT_1008_1498 = *puVar5;
                  DAT_1008_149a = *(undefined2 **)(puVar5 + 1);
                  DAT_1008_149c = puVar5[0xd];
                  DAT_1008_149e = *(undefined2 **)(puVar5 + 0x18);
                  DAT_1008_14a0 = *(undefined2 *)(puVar5 + 0x1a);
                }
              }
              goto switchD_1000_09f5_caseD_9;
            }
          }
LAB_1000_0e66:
          if (*(int *)(puVar5 + 0xe) == 0) goto switchD_1000_09f5_caseD_9;
          if (DAT_1008_14a2 == 0) {
            unaff_CS = (char *)0x1000;
            iVar4 = FUN_1000_8246();
            if (iVar4 == 0x100) {
              unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              SETCAPTURE(0x1000,param_4);
            }
            DAT_1008_14a2 = 1;
            DAT_1008_14a4 = 0;
          }
          local_a = (undefined1 *)FUN_1000_7f66(unaff_CS,param_5,param_6);
          uVar12 = (undefined2)((ulong)local_a >> 0x10);
          puVar5 = (undefined1 *)local_a;
          *(undefined2 *)(puVar5 + 0xb) = 0;
          if (*(int *)(puVar5 + 9) == 0) {
            SETFOCUS(0x1000,param_4);
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            goto switchD_1000_09f5_caseD_9;
          }
          *(undefined2 *)(puVar5 + 0x16) = 1;
          goto LAB_1000_0b28;
        }
        if (param_3 == 0x30) {
          uVar8 = FUN_1000_7f66(unaff_CS,param_5,param_6);
          *(uint *)((int)uVar8 + 3) = param_2;
          goto LAB_1000_0b82;
        }
        if (param_3 == 0x31) {
          uVar8 = FUN_1000_7f66(unaff_CS,param_5,param_6);
          param_2 = *(uint *)((int)uVar8 + 3);
          goto LAB_1000_0c75;
        }
        if (param_3 == 0x81) {
          DAT_1008_1466 = DAT_1008_1466 + 1;
          iVar4 = FUN_1000_7fee(unaff_CS);
          if (iVar4 == 1) {
            *puVar5 = DAT_1008_1498;
            *(undefined2 **)(puVar5 + 1) = DAT_1008_149a;
            puVar5[0xd] = DAT_1008_149c;
            uVar12 = DAT_1008_14a0;
            *(undefined2 **)(puVar5 + 0x18) = DAT_1008_149e;
            *(undefined2 *)(puVar5 + 0x1a) = uVar12;
          }
          *(undefined2 *)(puVar5 + 9) = 0;
          *(undefined2 *)(puVar5 + 0xb) = 1;
          *(undefined2 *)(puVar5 + 0xe) = 1;
          *(undefined2 *)(puVar5 + 0x10) = 0;
          *(undefined2 *)(puVar5 + 0x12) = 0;
          *(undefined2 *)(puVar5 + 0x14) = 0;
          *(undefined2 *)(puVar5 + 0x16) = 0;
          unaff_CS = (char *)0x1000;
          goto switchD_1000_09f5_caseD_9;
        }
        if ((param_3 != 0x100) || (param_2 != 0x20)) goto switchD_1000_09f5_caseD_9;
        uVar12 = 0x4c8;
      }
      SENDMESSAGE(unaff_CS,0,0,0,uVar12);
    }
    else {
      if (param_3 == 0x1005) {
        local_a = (undefined1 *)CONCAT22(local_a._2_2_,puVar5);
        if (param_2 == 0x1a) {
          DAT_1008_149c = puVar5[0xd];
          *(undefined2 *)(puVar5 + 0x12) = 1;
          iVar4 = ISWINDOW(unaff_CS,param_4);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          if (iVar4 == 0) goto LAB_1000_0b82;
        }
        else {
          if (0x1a < param_2) goto switchD_1000_09f5_caseD_9;
          cVar1 = (char)param_2;
          if (cVar1 == '\x03') {
            DAT_1008_149e = (undefined2 *)param_1;
            DAT_1008_14a0 = param_1._2_2_;
          }
          else {
            if (cVar1 == '\b') {
              *(undefined2 **)(puVar5 + 0xe) = (undefined2 *)param_1;
              *(undefined2 *)(puVar5 + 0x12) = 1;
              goto LAB_1000_0af2;
            }
            if (cVar1 != '\x17') goto switchD_1000_09f5_caseD_9;
            DAT_1008_1498 = *puVar5;
            *(undefined2 *)(puVar5 + 0x12) = 1;
          }
        }
        goto LAB_1000_0bec;
      }
      if (param_3 < 0x1006) {
        if (param_3 == 0x401) {
          if (param_2 == 0) {
            if (*(int *)(puVar5 + 1) == -1) {
              uVar10 = 0;
              uVar12 = 0;
              goto LAB_1000_0ff7;
            }
          }
          else if (*(int *)(puVar5 + 1) == 0) {
            uVar10 = 0xffff;
            uVar12 = 0xffff;
LAB_1000_0ff7:
            FUN_1000_7f7e(unaff_CS,uVar12,uVar10,0x18,param_5,param_6);
          }
        }
        else {
          if (param_3 == 0x4c8) goto LAB_1000_0e66;
          if (param_3 == 0x4c9) {
LAB_1000_0ed2:
            local_a = (undefined1 *)CONCAT22(local_a._2_2_,puVar5);
            if (*(int *)(puVar5 + 0xe) == 0) goto switchD_1000_09f5_caseD_9;
            pcVar11 = unaff_CS;
            if (DAT_1008_14a2 != 0) {
              iVar4 = GETCAPTURE(unaff_CS);
              if (iVar4 == param_4) {
                RELEASECAPTURE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
              }
              pcVar11 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              DAT_1008_14a2 = 0;
            }
            unaff_CS = (char *)0x1000;
            local_a = (undefined1 *)FUN_1000_7f66(pcVar11,param_5,param_6);
            uVar12 = (undefined2)((ulong)local_a >> 0x10);
            puVar5 = (undefined1 *)local_a;
            if (*(int *)(puVar5 + 0xb) != 0) goto switchD_1000_09f5_caseD_9;
            *(undefined2 *)(puVar5 + 0xb) = 1;
            if (*(int *)(puVar5 + 1) == -1) {
              *(undefined2 *)(puVar5 + 1) = 0;
            }
            else {
              *(undefined2 *)(puVar5 + 1) = 0xffff;
            }
            *(undefined2 *)(puVar5 + 0x16) = 1;
            INVALIDATERECT(0x1000,0,0,0,param_4);
            UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
            FUN_1000_162c(param_4,param_5,param_6);
            iVar4 = ISWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
            if (iVar4 != 0) {
              unaff_CS = (char *)0x1000;
              lVar9 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                    param_4);
              if (lVar9 == CONCAT22(param_6,param_5)) goto switchD_1000_09f5_caseD_9;
            }
          }
          else {
            if ((param_3 != 0x1004) ||
               (local_a = (undefined1 *)CONCAT22(local_a._2_2_,puVar5), param_2 != 0x18))
            goto switchD_1000_09f5_caseD_9;
            if (*(undefined2 **)(puVar5 + 1) != (undefined2 *)param_1) {
              *(undefined2 **)(puVar5 + 1) = (undefined2 *)param_1;
              DAT_1008_149a = (undefined2 *)param_1;
              *(undefined2 *)(puVar5 + 0x16) = 1;
              INVALIDATERECT(unaff_CS,0,0,0,param_4);
              UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
              FUN_1000_162c(param_4,param_5,param_6);
            }
          }
        }
      }
      else if (param_3 == 0x1008) {
        if (param_2 != 0x19) goto switchD_1000_09f5_caseD_9;
        uVar8 = FUN_1000_7f8e(unaff_CS,(char *)s_Click_on_______for_About_Box_1008_14a6,0x1008,
                              param_6);
        *param_1 = (int)uVar8;
        ((undefined2 *)param_1)[1] = (int)((ulong)uVar8 >> 0x10);
      }
      else {
        if (param_3 == 0x1009) {
          if (param_2 == 0x19) {
            param_2 = FUN_1000_6f3e(uVar12);
            goto LAB_1000_0c75;
          }
          goto switchD_1000_09f5_caseD_9;
        }
        if (param_3 == 0x100d) {
          SENDMESSAGE(unaff_CS,0,0,0,0x4c8);
          SENDMESSAGE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,0x4c9);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          goto switchD_1000_09f5_caseD_9;
        }
        if (param_3 == 0x1012) {
          DAT_1008_14a2 = 0;
          *(undefined2 *)(puVar5 + 0xb) = 1;
          goto LAB_1000_0e5d;
        }
        if (param_3 != 0x1022) goto switchD_1000_09f5_caseD_9;
        cVar1 = (char)(param_2 >> 8);
        uVar3 = param_2 & 0xff;
        if (uVar3 == 1) {
          if (cVar1 == '\x17') {
            uVar12 = 0x50;
            pcVar11 = (char *)s_SSCheckAlignment_1008_14c3;
          }
          else if (cVar1 == '\x19') {
            uVar12 = 0x50;
            pcVar11 = (char *)s_SSCheck_About__1008_14d4;
          }
          else {
            if (cVar1 != '\x1a') goto switchD_1000_09f5_caseD_9;
            uVar12 = 0x50;
            pcVar11 = (char *)s_SSCheckFont3D_1008_14e3;
          }
        }
        else if (uVar3 == 2) {
          if (cVar1 != '\0') goto switchD_1000_09f5_caseD_9;
          uVar12 = 0x56;
          pcVar11 = (char *)s_SSCheckClick_1008_14f1;
        }
        else {
          if (uVar3 != 3) goto switchD_1000_09f5_caseD_9;
          uVar12 = 0x43;
          pcVar11 = (char *)s_SSCheck_1008_14fe;
        }
        FUN_1000_0776(pcVar11,0x1008,uVar12);
      }
    }
    goto LAB_1000_0b82;
  }
  unaff_CS = (char *)0x1000;
  switch(param_3) {
  case 7:
    *(undefined2 *)(puVar5 + 9) = 1;
    *(undefined2 *)(puVar5 + 0x14) = 1;
LAB_1000_0af2:
    INVALIDATERECT(unaff_CS,0,0,0,param_4);
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    break;
  case 8:
    *(undefined2 *)(puVar5 + 9) = 0;
    *(undefined2 *)(puVar5 + 0x14) = 1;
    if (*(int *)(puVar5 + 0xb) == 0) {
      *(undefined2 *)(puVar5 + 0xb) = 1;
      *(undefined2 *)(puVar5 + 0x16) = 1;
    }
LAB_1000_0b28:
    INVALIDATERECT(0x1000,0,0,0,param_4);
    UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    break;
  case 0xc:
    pcVar11 = (char *)0x1000;
    iVar4 = param_5;
    local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    puVar5 = (undefined1 *)local_a;
    if (*(int *)(puVar5 + 7) != 0 || *(int *)(puVar5 + 5) != 0) {
      uVar8 = FUN_1000_7f9e(0x1000,*(undefined2 *)(puVar5 + 5),*(undefined2 *)(puVar5 + 7));
      iVar4 = (int)((ulong)uVar8 >> 0x10);
      pcVar11 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      local_6._2_2_ = iVar4;
      iVar2 = LSTRCMP(0x1000,(undefined2 *)param_1,param_1._2_2_,(int)uVar8);
      if (iVar2 == 0) goto LAB_1000_0b82;
    }
    uVar8 = FUN_1000_7f66(pcVar11,param_5,param_6,iVar4);
    uVar12 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar4 = (int)uVar8;
    local_a = (undefined1 *)CONCAT22(uVar12,(undefined1 *)local_a);
    if (*(int *)(iVar4 + 7) != 0 || *(int *)(iVar4 + 5) != 0) {
      FUN_1000_7f96(0x1000,*(undefined2 *)(iVar4 + 5),*(undefined2 *)(iVar4 + 7));
    }
    uVar8 = FUN_1000_7f8e(0x1000,(undefined2 *)param_1,param_1._2_2_,param_6);
    local_6._2_2_ = (int)((ulong)uVar8 >> 0x10);
    unaff_CS = (char *)0x1000;
    uVar7 = FUN_1000_7f66(0x1000,param_5,param_6);
    uVar12 = (undefined2)((ulong)uVar7 >> 0x10);
    iVar4 = (int)uVar7;
    local_a = (undefined1 *)CONCAT22(uVar12,(undefined1 *)local_a);
    *(undefined2 *)(iVar4 + 5) = (int)uVar8;
    *(int *)(iVar4 + 7) = local_6._2_2_;
    *(undefined2 *)(iVar4 + 0x12) = 1;
LAB_1000_0bec:
    INVALIDATERECT(unaff_CS,0,0,0,param_4);
    goto LAB_1000_0b82;
  case 0xd:
    local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    iVar4 = (int)local_a;
    if (*(int *)(iVar4 + 7) == 0 && *(int *)(iVar4 + 5) == 0) {
      *(undefined1 *)param_1 = 0;
      param_2 = 1;
    }
    else {
      local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar4 + 5),*(undefined2 *)(iVar4 + 7));
      uVar12 = (undefined2)(local_6 >> 0x10);
      iVar4 = LSTRLEN(0x1000,(int)local_6);
      if (iVar4 + 1U < param_2) {
        param_2 = iVar4 + 1U;
      }
      FUN_1000_85dc((undefined2 *)param_1,param_1._2_2_,local_6,param_2,uVar12);
      *(undefined1 *)((int)(undefined2 *)param_1 + (param_2 - 1)) = 0;
    }
    param_2 = param_2 - 1;
LAB_1000_0c75:
    return (ulong)param_2;
  case 0xe:
    uVar8 = FUN_1000_7f66(0x1000,param_5,param_6);
    uVar12 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar4 = (int)uVar8;
    local_a = (undefined1 *)CONCAT22(uVar12,(undefined1 *)local_a);
    if (*(int *)(iVar4 + 7) != 0 || *(int *)(iVar4 + 5) != 0) {
      uVar12 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar4 + 5),*(undefined2 *)(iVar4 + 7));
      iVar4 = LSTRLEN(0x1000,uVar12);
      goto LAB_1000_0caf;
    }
LAB_1000_0b82:
    uVar3 = 0;
LAB_1000_0fcd:
    return (ulong)uVar3;
  case 0xf:
    if (param_2 == 0) {
      BEGINPAINT(0x1000,local_36,unaff_SS,param_4);
      FUN_1000_1200(local_36[0],param_4,param_5,param_6);
      ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_36,unaff_SS);
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    }
    else {
      FUN_1000_1200(param_2,param_4,param_5,param_6);
    }
  }
switchD_1000_09f5_caseD_9:
  local_6 = FUN_1000_7f6e(unaff_CS,(undefined2 *)param_1,param_1._2_2_,param_2,param_3,param_4,
                          param_5,param_6);
  if (param_3 != 2) {
    return local_6;
  }
  DAT_1008_1466 = DAT_1008_1466 + -1;
  FUN_1000_06e8(param_4);
  local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
  uVar12 = (undefined2)((ulong)local_a >> 0x10);
  iVar4 = (int)local_a;
  if (*(int *)(iVar4 + 7) == 0 && *(int *)(iVar4 + 5) == 0) {
    return local_6;
  }
  FUN_1000_7f96(0x1000,*(undefined2 *)(iVar4 + 5),*(undefined2 *)(iVar4 + 7));
  return local_6;
}


// ---- FUN_1000_1200 @ 1000:1200

void FUN_1000_1200(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  local_6 = FUN_1000_7f66();
  GETCLIENTRECT(0x1000,&local_10,unaff_SS);
  if (((*(int *)((int)local_6 + 0x16) == 0) || (*(int *)((int)local_6 + 0x12) != 0)) ||
     (*(int *)((int)local_6 + 0x14) != 0)) {
    puVar4 = &local_10;
    uVar3 = 1;
    uVar2 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,puVar4);
    FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,uVar3,puVar4);
  }
  FUN_1000_12d4(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
  if (*(int *)((int)local_6 + 3) == 0) {
    FUN_1000_13a0(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
    uVar1 = local_6;
  }
  else {
    local_8 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           *(undefined2 *)((int)local_6 + 3));
    FUN_1000_13a0(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
    uVar1 = local_6;
  }
  local_6._2_2_ = (undefined2)((ulong)uVar1 >> 0x10);
  local_6._0_2_ = (int)uVar1;
  *(undefined2 *)((int)local_6 + 0x12) = 0;
  *(undefined2 *)((int)local_6 + 0x14) = 0;
  *(undefined2 *)((int)local_6 + 0x16) = 0;
  return;
}


// ---- FUN_1000_12d4 @ 1000:12d4

void FUN_1000_12d4(undefined2 param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_4;
  
  pcVar2 = (char *)FUN_1000_7f66();
  uVar3 = (undefined2)((ulong)pcVar2 >> 0x10);
  pcVar1 = (char *)pcVar2;
  if ((*(int *)(pcVar1 + 1) == -1) && (*(int *)(pcVar1 + 0xb) != 0)) {
    uVar3 = 0x1506;
  }
  else if ((*(int *)(pcVar1 + 1) == -1) && (*(int *)(pcVar1 + 0xb) == 0)) {
    uVar3 = 0x150e;
  }
  else if ((*(int *)(pcVar1 + 1) == 0) && (*(int *)(pcVar1 + 0xb) != 0)) {
    uVar3 = 0x1516;
  }
  else if ((*(int *)(pcVar1 + 1) == 0) && (*(int *)(pcVar1 + 0xb) == 0)) {
    uVar3 = 0x151e;
  }
  else {
    uVar3 = 0x1526;
  }
  uVar4 = DAT_1008_1f2c;
  uVar3 = LOADBITMAP(0x1000,uVar3,0x1008);
  if (*pcVar2 == '\0') {
    local_4 = 0;
  }
  else {
    local_4 = param_3 + -0xd;
  }
  FUN_1000_15ec((param_4 - param_2) / 2 + -6,local_4,uVar3,param_5);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3,uVar4,param_6,
               param_7);
  return;
}


// ---- FUN_1000_13a0 @ 1000:13a0

void FUN_1000_13a0(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  char *pcVar8;
  long lVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int local_38 [4];
  int local_30;
  int local_18 [2];
  int local_14;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;
  undefined4 local_6;
  
  uVar10 = param_7;
  uVar3 = param_6;
  uVar5 = param_6;
  uVar11 = param_7;
  uVar7 = FUN_1000_7f66();
  uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
  local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)((int)uVar7 + 5),*(undefined2 *)((int)uVar7 + 7),
                          uVar5,uVar11);
  pcVar8 = (char *)FUN_1000_7f66(0x1000,uVar3,uVar10);
  local_e = (undefined2)((ulong)pcVar8 >> 0x10);
  pcVar1 = (char *)pcVar8;
  uVar3 = local_6._2_2_;
  iVar2 = LSTRLEN(0x1000,(undefined2)local_6);
  if (iVar2 < 1) {
    return;
  }
  local_8 = 0;
  pcVar6 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
  uVar10 = param_5;
  GETTEXTMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_38,unaff_SS);
  if (*pcVar1 == '\0') {
    param_1 = param_1 + 0x10;
    uVar5 = 0x24;
  }
  else {
    param_3 = param_3 + -0x10;
    uVar5 = 0x26;
  }
  if (*(int *)(pcVar1 + 0xe) == 0) {
    pcVar6 = (char *)0x1000;
    iVar2 = FUN_1000_7fee((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar10,uVar3);
    if (iVar2 != 1) {
      lVar9 = GETSYSCOLOR(0x1000,0x11);
      if (lVar9 == 0xc0c0c0) {
        DAT_1008_1f32 = *(undefined2 *)(pcVar1 + 3);
        DAT_1008_1f30 = param_3 - param_1;
        DAT_1008_1f28 = param_4 - param_2;
        DAT_1008_1f36 = uVar5;
        uVar3 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,4,param_5
                              );
        GRAYSTRING((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1f28,
                   DAT_1008_1f30,param_2,param_1,0,local_6,0x668,0x1000,uVar3);
      }
      else {
        uVar7 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x11,param_5
                           );
        local_c = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar7);
        FUN_1000_7436(0xc0c0,0xc0,0,uVar5,CONCAT11((char)((uint)&param_1 >> 8),pcVar1[0xd]),&param_1
                      ,unaff_SS,local_6,param_5);
        SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c);
      }
      goto LAB_1000_151a;
    }
  }
  uVar7 = FUN_1000_0648(*(undefined2 *)(pcVar1 + 0x18),*(undefined2 *)(pcVar1 + 0x1a));
  SETTEXTCOLOR(pcVar6,uVar7);
  FUN_1000_7436(0xc0c0,0xc0,0,uVar5,CONCAT11((char)((uint)&param_1 >> 8),pcVar1[0xd]),&param_1,
                unaff_SS,local_6,param_5);
LAB_1000_151a:
  if ((((*(int *)(pcVar1 + 0x16) == 0) || (*(int *)(pcVar1 + 0x12) != 0)) ||
      (*(int *)(pcVar1 + 0x14) != 0)) && (*(int *)(pcVar1 + 9) != 0)) {
    uVar7 = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0);
    local_c = uVar7;
    DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x420,local_18,unaff_SS,
             0xffff,local_6);
    local_8 = local_14 - local_18[0];
    param_2 = (param_4 - param_2) / 2 + ((-2 - local_30) - local_38[0]) / 2;
    param_4 = param_2 + local_30 + local_38[0] + 2;
    if (*pcVar1 == '\0') {
      param_3 = local_8 + param_1;
    }
    else {
      param_1 = param_3 - local_8;
    }
    param_3 = param_3 + 2;
    param_1 = param_1 + -2;
    DRAWFOCUSRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_1,unaff_SS);
    SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c);
  }
  return;
}


// ---- FUN_1000_15ec @ 1000:15ec

void FUN_1000_15ec(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = param_4;
  uVar1 = CREATECOMPATIBLEDC();
  uVar2 = uVar1;
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3);
  BITBLT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x20,0xcc,0,0,uVar1,0xd,0xd,
         param_1,param_2);
  DELETEDC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,param_4,uVar2,uVar3);
  return;
}


// ---- FUN_1000_162c @ 1000:162c

void FUN_1000_162c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_e;
  undefined2 local_c;
  undefined4 local_6;
  
  uVar5 = param_2;
  uVar6 = param_3;
  local_6 = FUN_1000_7f66();
  uVar1 = FUN_1000_8246(uVar5,uVar6);
  if (0x200 < uVar1) {
    FUN_1000_80f6(0x1000,0x10,0,0x10,0,param_2,param_3);
  }
  local_e = (int)local_6 + 1;
  local_c = local_6._2_2_;
  *(undefined2 *)((int)local_6 + 0x10) = 1;
  FUN_1000_7f76(0x1000,&local_e);
  iVar2 = ISWINDOW(0x1000,param_1);
  if ((iVar2 != 0) &&
     (lVar3 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1),
     lVar3 == CONCAT22(param_3,param_2))) {
    uVar4 = FUN_1000_7f66(0x1000,lVar3);
    *(undefined2 *)((int)uVar4 + 0x10) = 0;
  }
  return;
}


// ---- SSFRCTLPROC @ 1000:16ba

ulong __stdcall16far
SSFRCTLPROC(undefined2 *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined2 in_stack_0000ffcc;
  undefined2 in_stack_0000ffce;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 local_22 [12];
  undefined4 local_a;
  undefined4 local_6;
  
  puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
  uVar11 = 0x1008;
  if (param_6 != 0 || param_5 != 0) {
    unaff_CS = (char *)0x1000;
    puVar6 = (undefined1 *)FUN_1000_7f66();
  }
  local_a._2_2_ = (undefined2)((ulong)puVar6 >> 0x10);
  puVar5 = (undefined1 *)puVar6;
  if (param_3 == 0x30) {
    uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
    *(uint *)((int)uVar9 + 1) = param_2;
LAB_1000_1802:
    uVar3 = 0;
LAB_1000_17c2:
    local_6 = (ulong)uVar3;
  }
  else {
    if (0x30 < param_3) {
      if (param_3 != 0x1005) {
        if (param_3 < 0x1006) {
          if (param_3 == 0x31) {
            uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
            param_2 = *(uint *)((int)uVar9 + 1);
            goto LAB_1000_18e6;
          }
          if (param_3 == 0x81) {
            DAT_1008_1466 = DAT_1008_1466 + 1;
            iVar4 = FUN_1000_7fee(unaff_CS);
            if (iVar4 == 1) {
              *puVar5 = DAT_1008_152e;
              puVar5[7] = DAT_1008_1534;
              puVar5[9] = DAT_1008_1535;
              puVar5[8] = DAT_1008_1536;
              uVar11 = DAT_1008_1532;
              *(undefined2 **)(puVar5 + 0xc) = DAT_1008_1530;
              *(undefined2 *)(puVar5 + 0xe) = uVar11;
              *(undefined2 *)(puVar5 + 0x10) = 0;
            }
            *(undefined2 *)(puVar5 + 10) = 1;
            unaff_CS = (char *)0x1000;
            puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
          }
          else {
            puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
            if (param_3 == 0x205) {
              iVar4 = FUN_1000_7fee(unaff_CS);
              puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
              unaff_CS = (char *)0x1000;
              if (iVar4 == 1) {
                DAT_1008_152e = *puVar5;
                DAT_1008_1534 = puVar5[7];
                DAT_1008_1535 = puVar5[9];
                DAT_1008_1536 = puVar5[8];
                DAT_1008_1530 = *(undefined2 **)(puVar5 + 0xc);
                DAT_1008_1532 = *(undefined2 *)(puVar5 + 0xe);
                puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
              }
            }
          }
        }
        else if (param_3 == 0x1008) {
          puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
          if (param_2 == 0x17) {
            uVar9 = FUN_1000_7f8e(unaff_CS,(char *)s_Click_on_______for_About_Box_1008_1537,0x1008,
                                  param_6);
            *param_1 = (int)uVar9;
            ((undefined2 *)param_1)[1] = (int)((ulong)uVar9 >> 0x10);
            goto LAB_1000_1802;
          }
        }
        else if (param_3 == 0x1009) {
          puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
          if (param_2 == 0x17) {
            param_2 = FUN_1000_6f3e(uVar11);
            goto LAB_1000_18e6;
          }
        }
        else {
          puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
          if (param_3 == 0x1022) {
            uVar3 = param_2 >> 8;
            if ((param_2 & 0xff) == 1) {
              if (uVar3 == 0x16) {
                uVar11 = 0x50;
                pcVar10 = (char *)s_SSFrameAlignment_1008_1554;
              }
              else if (uVar3 == 0x17) {
                uVar11 = 0x50;
                pcVar10 = (char *)s_SSFrame_About__1008_1565;
              }
              else if (uVar3 == 0x18) {
                uVar11 = 0x50;
                pcVar10 = (char *)s_SSFrameShadowColor_1008_1574;
              }
              else if (uVar3 == 0x19) {
                uVar11 = 0x50;
                pcVar10 = (char *)s_SSFrameFont3D_1008_1587;
              }
              else {
                puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
                if (uVar3 != 0x1a) goto switchD_1000_16f9_caseD_8;
                uVar11 = 0x50;
                pcVar10 = (char *)s_SSFrameShadowStyle_1008_1595;
              }
            }
            else {
              puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
              if ((param_2 & 0xff) != 3) goto switchD_1000_16f9_caseD_8;
              uVar11 = 0x43;
              pcVar10 = (char *)s_SSFrame_1008_15a8;
            }
            FUN_1000_0776(pcVar10,0x1008,uVar11);
            goto LAB_1000_1802;
          }
        }
        goto switchD_1000_16f9_caseD_8;
      }
      pcVar10 = unaff_CS;
      local_a = puVar6;
      if (param_2 == 0x1a) {
        DAT_1008_1535 = puVar5[9];
        goto LAB_1000_185e;
      }
      if (0x1a < param_2) goto switchD_1000_16f9_caseD_8;
      bVar1 = (byte)param_2;
      if (bVar1 == 0x16) {
        DAT_1008_152e = *puVar6;
LAB_1000_185e:
        in_stack_0000ffce = 0;
        in_stack_0000ffcc = 1;
        unaff_CS = pcVar10;
        puVar6 = local_a;
      }
      else {
        if (0x16 < bVar1) {
          if (bVar1 == 0x18) {
            DAT_1008_1534 = puVar5[7];
          }
          else {
            if (bVar1 != 0x19) goto switchD_1000_16f9_caseD_8;
            DAT_1008_1536 = puVar5[8];
            pcVar10 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            iVar4 = ISWINDOW(unaff_CS,param_4);
            if (iVar4 == 0) goto LAB_1000_1802;
          }
          goto LAB_1000_185e;
        }
        if (bVar1 != 3) {
          if (bVar1 == 8) {
            *(undefined2 **)(puVar5 + 10) = (undefined2 *)param_1;
            INVALIDATERECT(unaff_CS,1,0,0,param_4);
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            puVar6 = local_a;
          }
          goto switchD_1000_16f9_caseD_8;
        }
        DAT_1008_1530 = (undefined2 *)param_1;
        DAT_1008_1532 = param_1._2_2_;
        param_4 = 0;
      }
      local_a = puVar6;
      INVALIDATERECT(unaff_CS,in_stack_0000ffcc,in_stack_0000ffce,0,param_4);
      goto LAB_1000_1802;
    }
    unaff_CS = (char *)0x1000;
    puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
    switch(param_3) {
    case 7:
      puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
      if (*(int *)(puVar5 + 0x10) == 0) {
        uVar11 = GETPARENT(0x1000,param_4);
        local_6._2_2_ =
             GETNEXTDLGTABITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,param_4
                              );
        if (local_6._2_2_ != param_4) {
          *(undefined2 *)(puVar5 + 0x10) = 1;
          SETFOCUS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_6._2_2_,uVar11)
          ;
          *(undefined2 *)(puVar5 + 0x10) = 0;
        }
        goto switchD_1000_16f9_caseD_14;
      }
      break;
    case 0xc:
      pcVar10 = (char *)0x1000;
      iVar4 = param_5;
      uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
      local_a._2_2_ = (undefined2)((ulong)uVar9 >> 0x10);
      iVar2 = (int)uVar9;
      if (*(int *)(iVar2 + 5) != 0 || *(int *)(iVar2 + 3) != 0) {
        uVar9 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar2 + 3),*(undefined2 *)(iVar2 + 5));
        iVar4 = (int)((ulong)uVar9 >> 0x10);
        pcVar10 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        iVar2 = LSTRCMP(0x1000,(undefined2 *)param_1,param_1._2_2_,(int)uVar9);
        if (iVar2 == 0) goto LAB_1000_1802;
      }
      uVar9 = FUN_1000_7f66(pcVar10,param_5,param_6,iVar4);
      local_a._2_2_ = (undefined2)((ulong)uVar9 >> 0x10);
      iVar4 = (int)uVar9;
      if (*(int *)(iVar4 + 5) != 0 || *(int *)(iVar4 + 3) != 0) {
        FUN_1000_7f96(0x1000,*(undefined2 *)(iVar4 + 3),*(undefined2 *)(iVar4 + 5));
      }
      uVar9 = FUN_1000_7f8e(0x1000,(undefined2 *)param_1,param_1._2_2_,param_6);
      local_6._2_2_ = (int)((ulong)uVar9 >> 0x10);
      pcVar10 = (char *)0x1000;
      uVar7 = FUN_1000_7f66(0x1000,param_5,param_6);
      uVar11 = (undefined2)((ulong)uVar7 >> 0x10);
      *(undefined2 *)((int)uVar7 + 3) = (int)uVar9;
      *(undefined2 *)((int)uVar7 + 5) = local_6._2_2_;
      goto LAB_1000_185e;
    case 0xd:
      local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
      uVar11 = (undefined2)((ulong)local_a >> 0x10);
      iVar4 = (int)local_a;
      if (*(int *)(iVar4 + 5) == 0 && *(int *)(iVar4 + 3) == 0) {
        *(undefined1 *)param_1 = 0;
        param_2 = 1;
      }
      else {
        local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar4 + 3),*(undefined2 *)(iVar4 + 5));
        uVar11 = (undefined2)(local_6 >> 0x10);
        iVar4 = LSTRLEN(0x1000,(int)local_6);
        if (iVar4 + 1U < param_2) {
          param_2 = iVar4 + 1U;
        }
        FUN_1000_85dc((undefined2 *)param_1,param_1._2_2_,local_6,param_2,uVar11);
        *(undefined1 *)((int)(undefined2 *)param_1 + (param_2 - 1)) = 0;
      }
      param_2 = param_2 - 1;
LAB_1000_18e6:
      return (ulong)param_2;
    case 0xe:
      uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
      local_a._2_2_ = (undefined2)((ulong)uVar9 >> 0x10);
      iVar4 = (int)uVar9;
      if (*(int *)(iVar4 + 5) != 0 || *(int *)(iVar4 + 3) != 0) {
        uVar11 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar4 + 3),*(undefined2 *)(iVar4 + 5));
        iVar4 = LSTRLEN(0x1000,uVar11);
        return (long)iVar4;
      }
      goto LAB_1000_1802;
    case 0xf:
      if (param_2 == 0) {
        BEGINPAINT(0x1000,local_22,unaff_SS,param_4);
        FUN_1000_1bb4(local_22[0],param_4,param_5,param_6);
        ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_22,unaff_SS);
        unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
      }
      else {
        puVar8 = (undefined2 *)GETTEXTCOLOR(0x1000,param_2);
        DAT_1008_1532 = (undefined2)((ulong)puVar8 >> 0x10);
        DAT_1008_1530 = (undefined2 *)puVar8;
        FUN_1000_1bb4(param_2,param_4,param_5,param_6);
        unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        puVar6 = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a);
      }
      break;
    case 0x14:
switchD_1000_16f9_caseD_14:
      uVar3 = 1;
      goto LAB_1000_17c2;
    }
switchD_1000_16f9_caseD_8:
    local_a = puVar6;
    local_6 = FUN_1000_7f6e(unaff_CS,(undefined2 *)param_1,param_1._2_2_,param_2,param_3,param_4,
                            param_5,param_6);
    if (param_3 == 2) {
      DAT_1008_1466 = DAT_1008_1466 + -1;
      FUN_1000_06e8(param_4);
      uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
      uVar11 = (undefined2)((ulong)uVar9 >> 0x10);
      iVar4 = (int)uVar9;
      if (*(int *)(iVar4 + 5) != 0 || *(int *)(iVar4 + 3) != 0) {
        local_a = (undefined1 *)uVar9;
        FUN_1000_7f96(0x1000,*(undefined2 *)(iVar4 + 3),*(undefined2 *)(iVar4 + 5));
      }
    }
  }
  return local_6;
}


// ---- FUN_1000_1bb4 @ 1000:1bb4

void FUN_1000_1bb4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined4 local_34;
  int local_30 [16];
  undefined2 local_10;
  int local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  local_6 = FUN_1000_7f66();
  GETCLIENTRECT(0x1000,&local_10,unaff_SS);
  puVar4 = &local_10;
  uVar3 = 1;
  uVar1 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,puVar4);
  FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar3,puVar4);
  piVar2 = (int *)((int)local_6 + 1);
  local_34 = (int *)CONCAT22(local_6._2_2_,piVar2);
  if (*piVar2 != 0) {
    local_8 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,*piVar2);
  }
  GETTEXTMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_30,unaff_SS);
  local_e = local_e + (local_30[0] * 0x2d) / 100;
  FUN_1000_1c84(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
  FUN_1000_1d30(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
  FUN_1000_1e6c(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
  if (*local_34 != 0) {
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
  }
  return;
}


// ---- FUN_1000_1c84 @ 1000:1c84

void FUN_1000_1c84(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int local_6;
  int local_4;
  
  uVar2 = FUN_1000_7f66();
  uVar1 = GETSTOCKOBJECT(0x1000,6,param_5,param_6,param_7);
  uVar1 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  if (*(char *)((int)uVar2 + 9) == '\0') {
    param_1 = param_1 + 1;
    local_6 = param_3 + -1;
    local_4 = param_2 + 1;
    param_4 = param_4 + -1;
  }
  else {
    local_6 = param_3 + -2;
    local_4 = param_2;
    param_4 = param_4 + -2;
  }
  MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_4,param_1);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_1);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,local_6);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_4,local_6);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_4,param_1);
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  return;
}


// ---- FUN_1000_1d30 @ 1000:1d30

void FUN_1000_1d30(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar5 = FUN_1000_7f66();
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar1 = (int)uVar5;
  if (*(char *)(iVar1 + 7) == '\0') {
    uVar2 = CREATEPEN(0x1000,0x8080,0x80,1);
  }
  else {
    uVar2 = GETSTOCKOBJECT(0x1000,7,param_6,param_7);
  }
  uVar3 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2);
  uVar7 = param_5;
  if (*(char *)(iVar1 + 9) == '\0') {
    MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4 + -1,param_1);
    LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2,param_1);
    LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2,param_3);
    MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4 + -2,param_1 + 2);
    param_3 = param_3 + -2;
    LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4 + -2,param_3);
    param_2 = param_2 + 1;
  }
  else {
    MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4 + -3,param_1 + 1);
    LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2 + 1,param_1 + 1);
    LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2 + 1,param_3 + -2);
    MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4 + -1,param_1);
    param_3 = param_3 + -1;
    LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4 + -1,param_3);
    param_2 = param_2 + -1;
  }
  uVar6 = param_5;
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2,param_3);
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
  if (*(char *)(iVar1 + 7) == '\0') {
    DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,param_5,uVar6,
                 uVar7);
  }
  return;
}


// ---- FUN_1000_1e6c @ 1000:1e6c

void FUN_1000_1e6c(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  char *pcVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined2 *puVar13;
  
  uVar5 = param_6;
  uVar3 = param_6;
  uVar4 = param_7;
  uVar8 = FUN_1000_7f66();
  uVar12 = (undefined2)((ulong)uVar8 >> 0x10);
  iVar2 = (int)uVar8;
  if (*(int *)(iVar2 + 5) == 0 && *(int *)(iVar2 + 3) == 0) {
    return;
  }
  uVar8 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar2 + 3),*(undefined2 *)(iVar2 + 5),uVar3,uVar4);
  pcVar9 = (char *)FUN_1000_7f66(0x1000,uVar5,param_7);
  uVar5 = (undefined2)((ulong)pcVar9 >> 0x10);
  pcVar1 = (char *)pcVar9;
  iVar2 = LSTRLEN(0x1000,(int)uVar8);
  if (iVar2 < 1) {
    return;
  }
  uVar10 = uVar8;
  uVar3 = LSTRLEN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,(int)uVar8);
  uVar10 = GETTABBEDTEXTEXTENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,
                               uVar3,(int)((ulong)uVar10 >> 0x10),(int)uVar10);
  iVar6 = (int)((ulong)uVar10 >> 0x10);
  iVar2 = (int)uVar10;
  param_2 = param_2 + (iVar6 * 3) / -10;
  param_4 = iVar6 + param_2 + 1;
  if (*pcVar9 == '\x01') {
    param_3 = param_3 + -7;
    if (param_3 - iVar2 < param_1 + 7) {
      param_1 = param_1 + 7;
    }
    else {
      param_1 = param_3 - iVar2;
    }
  }
  else {
    if (*pcVar9 == '\x02') {
      if ((param_3 - param_1) + -0xe < iVar2) {
        param_1 = param_1 + 7;
        param_3 = param_3 + -7;
        goto LAB_1000_1f74;
      }
      param_1 = param_1 + (((param_3 - param_1) - iVar2) + -0xe) / 2 + 7;
    }
    else {
      param_1 = param_1 + 7;
      if (param_3 + -7 < param_1 + iVar2) {
        param_3 = param_3 + -7;
        goto LAB_1000_1f74;
      }
    }
    param_3 = param_1 + iVar2;
  }
LAB_1000_1f74:
  if (*pcVar9 == '\x01') {
    uVar3 = 0x26;
  }
  else if (*pcVar9 == '\x02') {
    uVar3 = 0x25;
  }
  else {
    uVar3 = 0x24;
  }
  param_1 = param_1 + -2;
  param_3 = param_3 + 2;
  puVar13 = &param_1;
  uVar12 = 1;
  uVar4 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,puVar13);
  pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
  FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar4,uVar12,puVar13);
  param_1 = param_1 + 2;
  param_3 = param_3 + -2;
  if (*(int *)(pcVar1 + 10) == 0) {
    pcVar7 = (char *)0x1000;
    iVar2 = FUN_1000_7fee((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
    if (iVar2 != 1) {
      lVar11 = GETSYSCOLOR(0x1000,0x11);
      if (lVar11 == 0xc0c0c0) {
        DAT_1008_1f32 = *(undefined2 *)(pcVar1 + 1);
        DAT_1008_1f30 = param_3 - param_1;
        DAT_1008_1f28 = param_4 - param_2;
        DAT_1008_1f36 = uVar3;
        uVar5 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,4,param_5
                              );
        GRAYSTRING((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1f28,
                   DAT_1008_1f30,param_2,param_1,0,uVar8,0x668,0x1000,uVar5);
        return;
      }
      uVar10 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x11,param_5)
      ;
      uVar10 = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar10);
      FUN_1000_7436(0xc0c0,0xc0,0,uVar3,CONCAT11((char)((uint)&param_1 >> 8),pcVar1[8]),&param_1,
                    unaff_SS,uVar8,param_5);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar10);
      return;
    }
  }
  uVar10 = FUN_1000_0648(*(undefined2 *)(pcVar1 + 0xc),*(undefined2 *)(pcVar1 + 0xe));
  SETTEXTCOLOR(pcVar7,uVar10);
  FUN_1000_7436(0xc0c0,0xc0,0,uVar3,CONCAT11((char)((uint)&param_1 >> 8),pcVar1[8]),&param_1,
                unaff_SS,uVar8,param_5);
  return;
}


// ---- SSRBCTLPROC @ 1000:20dc

ulong __stdcall16far
SSRBCTLPROC(undefined2 *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 local_36 [16];
  undefined1 local_16 [8];
  undefined2 *local_e;
  undefined2 local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar11 = 0x1008;
  puVar6 = (undefined1 *)local_a;
  if (param_6 != 0 || param_5 != 0) {
    unaff_CS = (char *)0x1000;
    puVar7 = (undefined1 *)FUN_1000_7f66();
    puVar6 = (undefined1 *)puVar7;
    local_a = (undefined1 *)CONCAT22((int)((ulong)puVar7 >> 0x10),(undefined1 *)local_a);
  }
  if (param_3 == 0x14) {
    uVar3 = 1;
    *(undefined2 *)(puVar6 + 0x14) = 1;
    goto LAB_1000_2725;
  }
  if (0x14 < param_3) {
    if (param_3 == 0x400) {
      if (*(int *)(puVar6 + 1) == 0) {
        iVar5 = 0;
        goto LAB_1000_2401;
      }
      uVar3 = 1;
      goto LAB_1000_2725;
    }
    if (param_3 < 0x401) {
      if (param_3 == 0x101) {
        if (param_2 != 0x20) goto switchD_1000_211b_caseD_9;
        uVar11 = 0x4c9;
LAB_1000_2501:
        SENDMESSAGE(unaff_CS,0,0,0,uVar11);
      }
      else if (param_3 < 0x102) {
        if (param_3 != 0x30) {
          if (param_3 == 0x31) {
            uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
            param_2 = *(uint *)((int)uVar9 + 3);
            goto LAB_1000_23c7;
          }
          if (param_3 == 0x81) {
            DAT_1008_1466 = DAT_1008_1466 + 1;
            iVar5 = FUN_1000_7fee(unaff_CS);
            uVar11 = local_a._2_2_;
            if (iVar5 == 1) {
              *puVar6 = DAT_1008_15b0;
              puVar6[0xd] = DAT_1008_15b6;
              uVar4 = DAT_1008_15b4;
              *(undefined2 **)(puVar6 + 0x1c) = DAT_1008_15b2;
              *(undefined2 *)(puVar6 + 0x1e) = uVar4;
            }
            *(undefined2 *)(puVar6 + 9) = 0;
            *(undefined2 *)(puVar6 + 0xb) = 1;
            *(undefined2 *)(puVar6 + 0xe) = 1;
            *(undefined2 *)(puVar6 + 0x10) = 0;
            *(undefined2 *)(puVar6 + 0x12) = 0;
            *(undefined2 *)(puVar6 + 0x14) = 0;
            *(undefined2 *)(puVar6 + 0x16) = 0;
            *(undefined2 *)(puVar6 + 0x18) = 0;
            uVar4 = FUN_1000_309e(param_4);
            *(undefined2 *)(puVar6 + 0x1a) = uVar4;
            unaff_CS = (char *)0x1000;
            goto switchD_1000_211b_caseD_9;
          }
          if ((param_3 != 0x100) || (param_2 != 0x20)) goto switchD_1000_211b_caseD_9;
          uVar11 = 0x4c8;
          goto LAB_1000_2501;
        }
        uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
        *(uint *)((int)uVar9 + 3) = param_2;
      }
      else {
        if (param_3 == 0x200) {
          if (DAT_1008_15b8 == 0) goto switchD_1000_211b_caseD_9;
          local_e = (undefined2 *)param_1;
          local_c = param_1._2_2_;
          GETCLIENTRECT(unaff_CS,local_16,unaff_SS);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar5 = PTINRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_e,
                           local_c,local_16);
          if (iVar5 == 0) {
            if (DAT_1008_15ba == 0) {
              *(undefined2 *)(puVar6 + 0xb) = 1;
              *(undefined2 *)(puVar6 + 0x18) = 1;
              INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,
                             param_4);
              UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
              DAT_1008_15ba = 1;
              unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            }
            goto switchD_1000_211b_caseD_9;
          }
          if (DAT_1008_15ba == 0) goto switchD_1000_211b_caseD_9;
          *(undefined2 *)(puVar6 + 0xb) = 0;
          *(undefined2 *)(puVar6 + 0x18) = 1;
          INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,param_4);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
LAB_1000_25b9:
          DAT_1008_15ba = 0;
          goto switchD_1000_211b_caseD_9;
        }
        if (param_3 == 0x201) {
LAB_1000_25c2:
          if (*(int *)(puVar6 + 0xe) == 0) goto switchD_1000_211b_caseD_9;
          if (DAT_1008_15b8 == 0) {
            unaff_CS = (char *)0x1000;
            iVar5 = FUN_1000_8246();
            if (iVar5 == 0x100) {
              unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              SETCAPTURE(0x1000,param_4);
            }
            DAT_1008_15b8 = 1;
            DAT_1008_15ba = 0;
          }
          local_a = (undefined1 *)FUN_1000_7f66(unaff_CS,param_5,param_6);
          uVar11 = (undefined2)((ulong)local_a >> 0x10);
          puVar6 = (undefined1 *)local_a;
          *(undefined2 *)(puVar6 + 0xb) = 0;
          if (*(int *)(puVar6 + 9) == 0) {
            SETFOCUS(0x1000,param_4);
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            goto switchD_1000_211b_caseD_9;
          }
          *(undefined2 *)(puVar6 + 0x18) = 1;
          goto LAB_1000_227a;
        }
        if (param_3 == 0x202) {
LAB_1000_262e:
          if (*(int *)(puVar6 + 0xe) == 0) goto switchD_1000_211b_caseD_9;
          pcVar10 = unaff_CS;
          if (DAT_1008_15b8 != 0) {
            iVar5 = GETCAPTURE(unaff_CS);
            if (iVar5 == param_4) {
              RELEASECAPTURE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
            }
            pcVar10 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            DAT_1008_15b8 = 0;
          }
          unaff_CS = (char *)0x1000;
          uVar9 = FUN_1000_7f66(pcVar10,param_5,param_6);
          uVar11 = (undefined2)((ulong)uVar9 >> 0x10);
          iVar5 = (int)uVar9;
          local_a = (undefined1 *)CONCAT22(uVar11,(undefined1 *)local_a);
          if (*(int *)(iVar5 + 0xb) != 0) goto switchD_1000_211b_caseD_9;
          *(undefined2 *)(iVar5 + 0xb) = 1;
          if (*(int *)(iVar5 + 1) == -1) goto LAB_1000_2805;
          FUN_1000_2f74(1,param_4,param_5,param_6);
          iVar5 = ISWINDOW(0x1000,param_4);
          if (iVar5 != 0) {
            uVar9 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                  param_4);
            goto joined_r0x100026df;
          }
        }
        else {
          if (param_3 != 0x203) {
            if (param_3 == 0x205) {
              iVar5 = FUN_1000_7fee(unaff_CS);
              unaff_CS = (char *)0x1000;
              if (iVar5 == 1) {
                DAT_1008_15b0 = *puVar6;
                DAT_1008_15b6 = puVar6[0xd];
                DAT_1008_15b2 = *(undefined2 **)(puVar6 + 0x1c);
                DAT_1008_15b4 = *(undefined2 *)(puVar6 + 0x1e);
              }
            }
            goto switchD_1000_211b_caseD_9;
          }
          FUN_1000_2fde(1,param_4,param_5,param_6);
          iVar5 = ISWINDOW(unaff_CS,param_4);
          if (iVar5 != 0) {
            uVar9 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                  param_4);
joined_r0x100026df:
            if (((int)uVar9 == param_5) &&
               (unaff_CS = (char *)0x1000, param_6 == (int)((ulong)uVar9 >> 0x10)))
            goto switchD_1000_211b_caseD_9;
          }
        }
      }
    }
    else if (param_3 == 0x1004) {
      if (param_2 != 0x18) goto switchD_1000_211b_caseD_9;
      if (*(undefined2 **)(puVar6 + 1) != (undefined2 *)param_1) {
        *(undefined2 **)(puVar6 + 1) = (undefined2 *)param_1;
        if ((undefined2 *)param_1 == (undefined2 *)0xffff) goto LAB_1000_2795;
        *(undefined2 *)(puVar6 + 0x18) = 1;
        INVALIDATERECT(unaff_CS,0,0,0,param_4);
        UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
      }
    }
    else if (param_3 < 0x1005) {
      if (param_3 == 0x401) {
        if (param_2 == 0) {
          if (*(int *)(puVar6 + 1) == -1) {
            uVar4 = 0;
            uVar11 = 0;
            goto LAB_1000_274f;
          }
        }
        else if (*(int *)(puVar6 + 1) == 0) {
          uVar4 = 0xffff;
          uVar11 = 0xffff;
LAB_1000_274f:
          FUN_1000_7f7e(unaff_CS,uVar11,uVar4,0x18,param_5,param_6);
        }
      }
      else {
        if (param_3 == 0x4c8) goto LAB_1000_25c2;
        if (param_3 == 0x4c9) goto LAB_1000_262e;
        if (param_3 != 0x4ca) goto switchD_1000_211b_caseD_9;
LAB_1000_2795:
        FUN_1000_2f74(1,param_4,param_5,param_6);
      }
    }
    else {
      if (param_3 == 0x1005) {
        local_a = (undefined1 *)CONCAT22(local_a._2_2_,puVar6);
        if (param_2 == 0x1a) {
          DAT_1008_15b6 = puVar6[0xd];
          iVar5 = ISWINDOW(unaff_CS,param_4);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          if (iVar5 == 0) goto LAB_1000_22d4;
        }
        else {
          if (0x1a < param_2) goto switchD_1000_211b_caseD_9;
          cVar1 = (char)param_2;
          if (cVar1 == '\x03') {
            DAT_1008_15b2 = (undefined2 *)param_1;
            DAT_1008_15b4 = param_1._2_2_;
          }
          else {
            if (cVar1 == '\b') {
              *(undefined2 **)(puVar6 + 0xe) = (undefined2 *)param_1;
LAB_1000_2805:
              INVALIDATERECT(unaff_CS,0,0,0,param_4);
              goto LAB_1000_228b;
            }
            if (cVar1 != '\x17') goto switchD_1000_211b_caseD_9;
            DAT_1008_15b0 = *local_a;
          }
        }
        goto LAB_1000_233e;
      }
      if (param_3 == 0x1008) {
        if (param_2 != 0x19) goto switchD_1000_211b_caseD_9;
        uVar9 = FUN_1000_7f8e(unaff_CS,(char *)s_Click_on_______for_About_Box_1008_15bc,0x1008,
                              param_6);
        *param_1 = (int)uVar9;
        ((undefined2 *)param_1)[1] = (int)((ulong)uVar9 >> 0x10);
      }
      else {
        if (param_3 == 0x1009) {
          if (param_2 == 0x19) {
            param_2 = FUN_1000_6f3e(uVar11);
            goto LAB_1000_23c7;
          }
          goto switchD_1000_211b_caseD_9;
        }
        if (param_3 == 0x1012) {
          DAT_1008_15b8 = 0;
          *(undefined2 *)(puVar6 + 0xb) = 1;
          goto LAB_1000_25b9;
        }
        if (param_3 != 0x1022) goto switchD_1000_211b_caseD_9;
        cVar1 = (char)(param_2 >> 8);
        uVar3 = param_2 & 0xff;
        if (uVar3 == 1) {
          if (cVar1 == '\x17') {
            uVar11 = 0x50;
            pcVar10 = (char *)s_SSOptionAlignment_1008_15d9;
          }
          else if (cVar1 == '\x19') {
            uVar11 = 0x50;
            pcVar10 = (char *)s_SSOption_About__1008_15eb;
          }
          else {
            if (cVar1 != '\x1a') goto switchD_1000_211b_caseD_9;
            uVar11 = 0x50;
            pcVar10 = (char *)s_SSOptionFont3D_1008_15fb;
          }
        }
        else if (uVar3 == 2) {
          if (cVar1 == '\0') {
            uVar11 = 0x56;
            pcVar10 = (char *)s_SSOptionClick_1008_160a;
          }
          else {
            if (cVar1 != '\x01') goto switchD_1000_211b_caseD_9;
            uVar11 = 0x56;
            pcVar10 = (char *)s_SSOptionDblClick_1008_1618;
          }
        }
        else {
          if (uVar3 != 3) goto switchD_1000_211b_caseD_9;
          uVar11 = 0x43;
          pcVar10 = (char *)s_SSOption_1008_1629;
        }
        FUN_1000_0776(pcVar10,0x1008,uVar11);
      }
    }
    goto LAB_1000_22d4;
  }
  unaff_CS = (char *)0x1000;
  switch(param_3) {
  case 7:
    *(undefined2 *)(puVar6 + 0x16) = 1;
    if ((*(int *)(puVar6 + 0xb) == 0) || (*(int *)(puVar6 + 1) == -1)) {
      *(undefined2 *)(puVar6 + 9) = 1;
      INVALIDATERECT(0x1000,0,0,0,param_4);
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    }
    else {
      *(undefined2 *)(puVar6 + 9) = 1;
      POSTMESSAGE(0x1000,0,0,0,0x4ca);
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    }
    break;
  case 8:
    *(undefined2 *)(puVar6 + 9) = 0;
    *(undefined2 *)(puVar6 + 0x16) = 1;
    if (*(int *)(puVar6 + 0xb) == 0) {
      *(undefined2 *)(puVar6 + 0xb) = 1;
      *(undefined2 *)(puVar6 + 0x18) = 1;
    }
LAB_1000_227a:
    INVALIDATERECT(0x1000,0,0,0,param_4);
LAB_1000_228b:
    UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    break;
  case 0xc:
    pcVar10 = (char *)0x1000;
    iVar5 = param_5;
    local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
    uVar11 = (undefined2)((ulong)local_a >> 0x10);
    puVar6 = (undefined1 *)local_a;
    if (*(int *)(puVar6 + 7) != 0 || *(int *)(puVar6 + 5) != 0) {
      uVar9 = FUN_1000_7f9e(0x1000,*(undefined2 *)(puVar6 + 5),*(undefined2 *)(puVar6 + 7));
      iVar5 = (int)((ulong)uVar9 >> 0x10);
      pcVar10 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      local_6._2_2_ = iVar5;
      iVar2 = LSTRCMP(0x1000,(undefined2 *)param_1,param_1._2_2_,(int)uVar9);
      if (iVar2 == 0) goto LAB_1000_22d4;
    }
    uVar9 = FUN_1000_7f66(pcVar10,param_5,param_6,iVar5);
    uVar11 = (undefined2)((ulong)uVar9 >> 0x10);
    iVar5 = (int)uVar9;
    local_a = (undefined1 *)CONCAT22(uVar11,(undefined1 *)local_a);
    if (*(int *)(iVar5 + 7) != 0 || *(int *)(iVar5 + 5) != 0) {
      FUN_1000_7f96(0x1000,*(undefined2 *)(iVar5 + 5),*(undefined2 *)(iVar5 + 7));
    }
    uVar9 = FUN_1000_7f8e(0x1000,(undefined2 *)param_1,param_1._2_2_,param_6);
    local_6._2_2_ = (int)((ulong)uVar9 >> 0x10);
    unaff_CS = (char *)0x1000;
    uVar8 = FUN_1000_7f66(0x1000,param_5,param_6);
    uVar11 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar5 = (int)uVar8;
    local_a = (undefined1 *)CONCAT22(uVar11,(undefined1 *)local_a);
    *(undefined2 *)(iVar5 + 5) = (int)uVar9;
    *(int *)(iVar5 + 7) = local_6._2_2_;
    *(undefined2 *)(iVar5 + 0x14) = 1;
LAB_1000_233e:
    INVALIDATERECT(unaff_CS,0,0,0,param_4);
    goto LAB_1000_22d4;
  case 0xd:
    local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
    uVar11 = (undefined2)((ulong)local_a >> 0x10);
    iVar5 = (int)local_a;
    if (*(int *)(iVar5 + 7) == 0 && *(int *)(iVar5 + 5) == 0) {
      *(undefined1 *)param_1 = 0;
      param_2 = 1;
    }
    else {
      local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar5 + 5),*(undefined2 *)(iVar5 + 7));
      uVar11 = (undefined2)(local_6 >> 0x10);
      iVar5 = LSTRLEN(0x1000,(int)local_6);
      if (iVar5 + 1U < param_2) {
        param_2 = iVar5 + 1U;
      }
      FUN_1000_85dc((undefined2 *)param_1,param_1._2_2_,local_6,param_2,uVar11);
      *(undefined1 *)((int)(undefined2 *)param_1 + (param_2 - 1)) = 0;
    }
    param_2 = param_2 - 1;
LAB_1000_23c7:
    return (ulong)param_2;
  case 0xe:
    uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
    uVar11 = (undefined2)((ulong)uVar9 >> 0x10);
    iVar5 = (int)uVar9;
    local_a = (undefined1 *)CONCAT22(uVar11,(undefined1 *)local_a);
    if (*(int *)(iVar5 + 7) != 0 || *(int *)(iVar5 + 5) != 0) {
      uVar11 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar5 + 5),*(undefined2 *)(iVar5 + 7));
      iVar5 = LSTRLEN(0x1000,uVar11);
LAB_1000_2401:
      return (long)iVar5;
    }
LAB_1000_22d4:
    uVar3 = 0;
LAB_1000_2725:
    return (ulong)uVar3;
  case 0xf:
    if (param_2 == 0) {
      BEGINPAINT(0x1000,local_36,unaff_SS,param_4);
      FUN_1000_2940(local_36[0],param_4,param_5,param_6);
      ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_36,unaff_SS);
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    }
    else {
      FUN_1000_2940(param_2,param_4,param_5,param_6);
    }
  }
switchD_1000_211b_caseD_9:
  local_6 = FUN_1000_7f6e(unaff_CS,(undefined2 *)param_1,param_1._2_2_,param_2,param_3,param_4,
                          param_5,param_6);
  if (param_3 == 2) {
    DAT_1008_1466 = DAT_1008_1466 + -1;
    FUN_1000_06e8(param_4);
    local_a = (undefined1 *)FUN_1000_7f66(0x1000,param_5,param_6);
    uVar11 = (undefined2)((ulong)local_a >> 0x10);
    iVar5 = (int)local_a;
    if (*(int *)(iVar5 + 7) != 0 || *(int *)(iVar5 + 5) != 0) {
      FUN_1000_7f96(0x1000,*(undefined2 *)(iVar5 + 5),*(undefined2 *)(iVar5 + 7));
    }
  }
  return local_6;
}


// ---- FUN_1000_2940 @ 1000:2940

void FUN_1000_2940(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  local_6 = FUN_1000_7f66();
  GETCLIENTRECT(0x1000,&local_10,unaff_SS);
  if (((*(int *)((int)local_6 + 0x18) == 0) || (*(int *)((int)local_6 + 0x14) != 0)) ||
     (*(int *)((int)local_6 + 0x16) != 0)) {
    puVar4 = &local_10;
    uVar3 = 1;
    uVar2 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,puVar4);
    FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,uVar3,puVar4);
  }
  FUN_1000_2a14(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
  if (*(int *)((int)local_6 + 3) == 0) {
    FUN_1000_2b18(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
    uVar1 = local_6;
  }
  else {
    local_8 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           *(undefined2 *)((int)local_6 + 3));
    FUN_1000_2b18(local_10,local_e,local_c,local_a,param_1,param_3,param_4);
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
    uVar1 = local_6;
  }
  local_6._2_2_ = (undefined2)((ulong)uVar1 >> 0x10);
  local_6._0_2_ = (int)uVar1;
  *(undefined2 *)((int)local_6 + 0x14) = 0;
  *(undefined2 *)((int)local_6 + 0x16) = 0;
  *(undefined2 *)((int)local_6 + 0x18) = 0;
  return;
}


// ---- FUN_1000_2a14 @ 1000:2a14

void FUN_1000_2a14(undefined2 param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_4;
  
  pcVar2 = (char *)FUN_1000_7f66();
  uVar3 = (undefined2)((ulong)pcVar2 >> 0x10);
  pcVar1 = (char *)pcVar2;
  if (((*(int *)(pcVar1 + 1) == -1) && (*(int *)(pcVar1 + 0xe) != 0)) &&
     (*(int *)(pcVar1 + 0xb) != 0)) {
    uVar3 = 0x1632;
  }
  else if (((*(int *)(pcVar1 + 1) == -1) && (*(int *)(pcVar1 + 0xe) != 0)) &&
          (*(int *)(pcVar1 + 0xb) == 0)) {
    uVar3 = 0x163a;
  }
  else if (((*(int *)(pcVar1 + 1) == -1) || (*(int *)(pcVar1 + 0xe) == 0)) ||
          (*(int *)(pcVar1 + 0xb) == 0)) {
    if (((*(int *)(pcVar1 + 1) == -1) || (*(int *)(pcVar1 + 0xe) == 0)) ||
       (*(int *)(pcVar1 + 0xb) != 0)) {
      if ((*(int *)(pcVar1 + 1) == -1) && (*(int *)(pcVar1 + 0xe) == 0)) {
        uVar3 = 0x1652;
      }
      else {
        uVar3 = 0x165a;
      }
    }
    else {
      uVar3 = 0x164a;
    }
  }
  else {
    uVar3 = 0x1642;
  }
  uVar4 = DAT_1008_1f2c;
  uVar3 = LOADBITMAP(0x1000,uVar3,0x1008);
  if (*pcVar2 == '\0') {
    local_4 = 0;
  }
  else {
    local_4 = param_3 + -0xd;
  }
  FUN_1000_2d6c((param_4 - param_2) / 2 + -6,local_4,uVar3,param_5);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3,uVar4,param_6,
               param_7);
  return;
}


// ---- FUN_1000_2b18 @ 1000:2b18

void FUN_1000_2b18(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  undefined2 uVar9;
  int local_38 [4];
  int local_30;
  int local_18 [2];
  int local_14;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;
  undefined4 local_6;
  
  uVar3 = param_6;
  uVar9 = param_6;
  uVar4 = param_7;
  uVar6 = FUN_1000_7f66();
  local_e = (undefined2)((ulong)uVar6 >> 0x10);
  iVar2 = (int)uVar6;
  if (*(int *)(iVar2 + 7) == 0 && *(int *)(iVar2 + 5) == 0) {
    return;
  }
  local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar2 + 5),*(undefined2 *)(iVar2 + 7),uVar9,uVar4);
  pcVar7 = (char *)FUN_1000_7f66(0x1000,uVar3,param_7);
  local_e = (undefined2)((ulong)pcVar7 >> 0x10);
  pcVar1 = (char *)pcVar7;
  uVar3 = local_6._2_2_;
  iVar2 = LSTRLEN(0x1000,(undefined2)local_6);
  if (iVar2 < 1) {
    return;
  }
  local_8 = 0;
  pcVar5 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
  uVar9 = param_5;
  GETTEXTMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_38,unaff_SS);
  if (*pcVar1 == '\0') {
    param_1 = param_1 + 0x10;
    uVar4 = 0x24;
  }
  else {
    param_3 = param_3 + -0x10;
    uVar4 = 0x26;
  }
  if (*(int *)(pcVar1 + 0xe) == 0) {
    pcVar5 = (char *)0x1000;
    iVar2 = FUN_1000_7fee((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar9,uVar3);
    if (iVar2 != 1) {
      lVar8 = GETSYSCOLOR(0x1000,0x11);
      if (lVar8 == 0xc0c0c0) {
        DAT_1008_1f32 = *(undefined2 *)(pcVar1 + 3);
        DAT_1008_1f30 = param_3 - param_1;
        DAT_1008_1f28 = param_4 - param_2;
        DAT_1008_1f36 = uVar4;
        uVar3 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,4,param_5
                              );
        GRAYSTRING((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1f28,
                   DAT_1008_1f30,param_2,param_1,0,local_6,0x668,0x1000,uVar3);
      }
      else {
        uVar6 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x11,param_5
                           );
        local_c = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar6);
        FUN_1000_7436(0xc0c0,0xc0,0,uVar4,CONCAT11((char)((uint)&param_1 >> 8),pcVar1[0xd]),&param_1
                      ,unaff_SS,local_6,param_5);
        SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c);
      }
      goto LAB_1000_2c9a;
    }
  }
  uVar6 = FUN_1000_0648(*(undefined2 *)(pcVar1 + 0x1c),*(undefined2 *)(pcVar1 + 0x1e));
  SETTEXTCOLOR(pcVar5,uVar6);
  FUN_1000_7436(0xc0c0,0xc0,0,uVar4,CONCAT11((char)((uint)&param_1 >> 8),pcVar1[0xd]),&param_1,
                unaff_SS,local_6,param_5);
LAB_1000_2c9a:
  if ((((*(int *)(pcVar1 + 0x18) == 0) || (*(int *)(pcVar1 + 0x14) != 0)) ||
      (*(int *)(pcVar1 + 0x16) != 0)) && (*(int *)(pcVar1 + 9) != 0)) {
    uVar6 = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0);
    local_c = uVar6;
    DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x420,local_18,unaff_SS,
             0xffff,local_6);
    local_8 = local_14 - local_18[0];
    param_2 = (param_4 - param_2) / 2 + ((-2 - local_30) - local_38[0]) / 2;
    param_4 = param_2 + local_30 + local_38[0] + 2;
    if (*pcVar1 == '\0') {
      param_3 = local_8 + param_1;
    }
    else {
      param_1 = param_3 - local_8;
    }
    param_3 = param_3 + 2;
    param_1 = param_1 + -2;
    DRAWFOCUSRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_1,unaff_SS);
    SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c);
  }
  return;
}


// ---- FUN_1000_2d6c @ 1000:2d6c

void FUN_1000_2d6c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = param_4;
  uVar1 = CREATECOMPATIBLEDC();
  uVar2 = uVar1;
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3);
  BITBLT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x20,0xcc,0,0,uVar1,0xd,0xd,
         param_1,param_2);
  DELETEDC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,param_4,uVar2,uVar3);
  return;
}


// ---- FUN_1000_2dac @ 1000:2dac

void FUN_1000_2dac(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_2e [30];
  int local_10;
  undefined2 local_c;
  int local_a;
  int local_8;
  undefined4 local_6;
  
  pcVar4 = (char *)0x1000;
  uVar6 = FUN_1000_7f66();
  if (*(int *)((int)uVar6 + 0x1a) == 0) {
    iVar1 = FUN_1000_7fee(0x1000,param_2,param_3);
    if (iVar1 != 1) {
      local_a = GETPARENT(0x1000,param_1);
      iVar1 = param_1;
      pcVar4 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      do {
        pcVar5 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        iVar1 = GETNEXTDLGGROUPITEM(pcVar4,1,iVar1);
        if (iVar1 != param_1) {
          local_2e[0] = 0;
          GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_2e,
                       unaff_SS);
          iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           (char *)s_ThunderSSRadio_1008_1662,0x1008,local_2e);
          if (iVar2 != 0) {
            pcVar5 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                             (char *)s_ThunderSSOption_1008_1671,0x1008,local_2e);
            if (iVar2 != 0) goto LAB_1000_2e85;
          }
          uVar6 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1);
          local_c = (undefined2)((ulong)uVar6 >> 0x10);
          pcVar4 = (char *)0x1000;
          uVar7 = FUN_1000_7f66(0x1000,uVar6);
          uVar3 = (undefined2)((ulong)uVar7 >> 0x10);
          iVar2 = (int)uVar7;
          local_6 = uVar7;
          if (*(int *)(iVar2 + 1) == -1) {
            *(undefined2 *)(iVar2 + 1) = 0;
            *(undefined2 *)(iVar2 + 0x18) = 1;
            INVALIDATERECT(0x1000,0,0,0,iVar1);
            pcVar4 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1);
          }
          FUN_1000_7f7e(pcVar4,0,0,0x15,(int)uVar6,local_c);
          pcVar5 = (char *)0x1000;
          FUN_1000_7f66(0x1000,(int)uVar6,local_c);
        }
LAB_1000_2e85:
        pcVar4 = pcVar5;
        if (param_1 == iVar1) {
          return;
        }
      } while( true );
    }
  }
  else {
    local_10 = 0;
    do {
      local_a = (-(uint)(local_10 == 0) & 1) + 2;
      local_8 = param_1;
      pcVar5 = pcVar4;
      do {
        pcVar4 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        iVar1 = GETNEXTWINDOW(pcVar5,local_a);
        local_8 = iVar1;
        if ((iVar1 != 0) && (param_1 != iVar1)) {
          local_2e[0] = 0;
          GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_2e,
                       unaff_SS);
          iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           (char *)s_ThunderSSRadio_1008_1681,0x1008,local_2e);
          if (iVar2 != 0) {
            pcVar4 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                             (char *)s_ThunderSSOption_1008_1690,0x1008,local_2e);
            if (iVar2 != 0) goto LAB_1000_2f5a;
          }
          uVar6 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1);
          local_c = (undefined2)((ulong)uVar6 >> 0x10);
          pcVar4 = (char *)0x1000;
          uVar7 = FUN_1000_7f66(0x1000,uVar6);
          uVar3 = (undefined2)((ulong)uVar7 >> 0x10);
          iVar2 = (int)uVar7;
          local_6 = uVar7;
          if (*(int *)(iVar2 + 1) == -1) {
            *(undefined2 *)(iVar2 + 1) = 0;
            *(undefined2 *)(iVar2 + 0x18) = 1;
            INVALIDATERECT(0x1000,0,0,0,iVar1);
            pcVar4 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1);
          }
          FUN_1000_7f7e(pcVar4,0,0,0x15,(int)uVar6,local_c);
          pcVar4 = (char *)0x1000;
          FUN_1000_7f66(0x1000,(int)uVar6,local_c);
        }
LAB_1000_2f5a:
        pcVar5 = pcVar4;
      } while (iVar1 != 0);
      local_10 = local_10 + 1;
    } while (local_10 < 2);
  }
  return;
}


// ---- FUN_1000_2f74 @ 1000:2f74

void FUN_1000_2f74(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  pcVar2 = (char *)0x1000;
  uVar4 = param_3;
  uVar5 = param_4;
  uVar3 = FUN_1000_7f66();
  uVar1 = (undefined2)((ulong)uVar3 >> 0x10);
  *(undefined2 *)((int)uVar3 + 1) = 0xffff;
  *(undefined2 *)((int)uVar3 + 0x18) = 1;
  if (param_1 != 0) {
    INVALIDATERECT(0x1000,0,0,0,param_2);
    pcVar2 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2,uVar4,uVar5);
  }
  FUN_1000_2dac(param_2,param_3,param_4);
  FUN_1000_7f7e(pcVar2,0xffff,0xffff,0x15,param_3,param_4);
  FUN_1000_2fde(0,param_2,param_3,param_4);
  return;
}


// ---- FUN_1000_2fde @ 1000:2fde

void FUN_1000_2fde(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int local_e;
  undefined2 local_c;
  undefined4 local_6;
  
  local_6 = FUN_1000_7f66();
  local_c = (undefined2)((ulong)local_6 >> 0x10);
  iVar1 = (int)local_6;
  local_e = iVar1 + 1;
  if (param_1 == 0) {
    *(undefined2 *)(iVar1 + 0x10) = 1;
    FUN_1000_7f76(0x1000,&local_e);
    iVar1 = ISWINDOW(0x1000,param_2);
    if ((iVar1 != 0) &&
       (lVar2 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2),
       lVar2 == CONCAT22(param_4,param_3))) {
      uVar3 = FUN_1000_7f66(0x1000,lVar2);
      *(undefined2 *)((int)uVar3 + 0x10) = 0;
    }
  }
  else {
    *(undefined2 *)(iVar1 + 0x12) = 1;
    FUN_1000_7f76(0x1000,&local_e);
    iVar1 = ISWINDOW(0x1000,param_2);
    if ((iVar1 != 0) &&
       (lVar2 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2),
       lVar2 == CONCAT22(param_4,param_3))) {
      uVar3 = FUN_1000_7f66(0x1000,lVar2);
      *(undefined2 *)((int)uVar3 + 0x12) = 0;
      return;
    }
  }
  return;
}


// ---- FUN_1000_309e @ 1000:309e

undefined2 FUN_1000_309e(int param_1)

{
  int iVar1;
  int iVar2;
  char *unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_20 [30];
  
  do {
    iVar1 = GETPARENT(unaff_CS,param_1);
    if (iVar1 != 0) {
      local_20[0] = 0;
      GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_20,
                   unaff_SS);
      iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                       (char *)s_ThunderForm_1008_16a0,0x1008,local_20);
      if ((iVar2 == 0) ||
         (iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           (char *)s_ThunderMDIForm_1008_16ac,0x1008,local_20), param_1 = iVar1,
         iVar2 == 0)) {
        return 1;
      }
    }
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}


// ---- SSPBCTLPROC @ 1000:3102

ulong __stdcall16far
SSPBCTLPROC(undefined2 *param_1,uint param_2,uint param_3,undefined2 param_4,int param_5,int param_6
           )

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_BP;
  char *unaff_CS;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_SS;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 in_stack_0000ffc8;
  char *pcVar11;
  undefined2 uVar12;
  undefined1 local_24 [2];
  int local_22;
  char *local_20;
  char local_16 [12];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar12 = 0x1008;
  pcVar6 = (char *)local_a;
  if (param_6 != 0 || param_5 != 0) {
    unaff_CS = (char *)0x1000;
    pcVar8 = (char *)FUN_1000_7f66();
    pcVar6 = (char *)pcVar8;
    local_a = (char *)((ulong)pcVar8 & 0xffff0000);
  }
  local_a = (char *)CONCAT22(local_a._2_2_,pcVar6);
  local_a._0_2_ = pcVar6;
  if (param_3 == 0x102) {
    if (param_2 != 0xd) {
LAB_1000_37d8:
      if (param_2 != 0xd) {
LAB_1000_37e1:
        if (param_2 != 0xd) {
switchD_1000_375a_default:
          local_6 = FUN_1000_7f6e(unaff_CS,(undefined2 *)param_1,param_1._2_2_,param_2,param_3,
                                  param_4,param_5,param_6);
          if (param_3 != 2) {
            return local_6;
          }
          FUN_1000_8066(0x1000,*(undefined2 *)((char *)local_a + 9));
          FUN_1000_7f66(0x1000,param_5,param_6);
          DAT_1008_1466 = DAT_1008_1466 + -1;
          FUN_1000_06e8(param_4);
          uVar10 = FUN_1000_7f66(0x1000,param_5,param_6);
          uVar12 = (undefined2)((ulong)uVar10 >> 0x10);
          iVar5 = (int)uVar10;
          if (*(int *)(iVar5 + 5) == 0 && *(int *)(iVar5 + 3) == 0) {
            return local_6;
          }
          local_a = (char *)uVar10;
          FUN_1000_7f96(0x1000,*(undefined2 *)(iVar5 + 3),*(undefined2 *)(iVar5 + 5));
          return local_6;
        }
LAB_1000_37ea:
        param_1 = (undefined2 *)0x0;
LAB_1000_37f2:
        if (param_1._2_2_ == 0) {
          FUN_1000_4136(param_4,param_5,param_6);
          iVar5 = ISWINDOW(unaff_CS,param_4);
          if (iVar5 != 0) {
            FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
          }
        }
      }
    }
  }
  else if (param_3 < 0x103) {
    if (param_3 == 0x14) {
      uVar4 = 1;
      goto LAB_1000_3286;
    }
    if (param_3 < 0x15) {
      if (param_3 != 0xe) {
        if (0xe < param_3) goto switchD_1000_375a_default;
        cVar1 = (char)param_3;
        if (cVar1 == '\x05') {
          pcVar6 = (char *)0x1000;
          local_a = (char *)FUN_1000_7f66(unaff_CS,param_5,param_6);
          unaff_CS = pcVar6;
          if (*(int *)((char *)local_a + 0x16) != 0) goto switchD_1000_375a_default;
          iVar5 = FUN_1000_41a6(param_4,param_5,param_6);
          if (iVar5 == 0) goto switchD_1000_375a_default;
LAB_1000_323c:
          INVALIDATERECT(unaff_CS,0,0,0,param_4);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          goto switchD_1000_375a_default;
        }
        if (cVar1 != '\f') {
          if (cVar1 == '\r') {
            local_a = (char *)FUN_1000_7f66(unaff_CS,param_5,param_6);
            uVar12 = (undefined2)((ulong)local_a >> 0x10);
            iVar5 = (int)local_a;
            if (*(int *)(iVar5 + 5) == 0 && *(int *)(iVar5 + 3) == 0) {
              *(undefined1 *)param_1 = 0;
              param_2 = 1;
            }
            else {
              local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar5 + 3),*(undefined2 *)(iVar5 + 5));
              uVar12 = (undefined2)(local_6 >> 0x10);
              iVar5 = LSTRLEN(0x1000,(int)local_6);
              if (iVar5 + 1U < param_2) {
                param_2 = iVar5 + 1U;
              }
              FUN_1000_85dc((undefined2 *)param_1,param_1._2_2_,local_6,param_2,uVar12);
              *(undefined1 *)((int)(undefined2 *)param_1 + (param_2 - 1)) = 0;
            }
            param_2 = param_2 - 1;
            goto LAB_1000_33a0;
          }
          goto switchD_1000_375a_default;
        }
        pcVar6 = (char *)0x1000;
        iVar5 = param_5;
        uVar10 = FUN_1000_7f66(unaff_CS,param_5,param_6);
        uVar12 = (undefined2)((ulong)uVar10 >> 0x10);
        iVar3 = (int)uVar10;
        local_a = (char *)CONCAT22(uVar12,(char *)local_a);
        if (*(int *)(iVar3 + 5) != 0 || *(int *)(iVar3 + 3) != 0) {
          uVar10 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar3 + 3),*(undefined2 *)(iVar3 + 5));
          iVar5 = (int)((ulong)uVar10 >> 0x10);
          pcVar6 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar3 = LSTRCMP(0x1000,(undefined2 *)param_1,param_1._2_2_,(int)uVar10);
          if (iVar3 == 0) goto LAB_1000_3284;
        }
        uVar10 = FUN_1000_7f66(pcVar6,param_5,param_6,iVar5);
        uVar12 = (undefined2)((ulong)uVar10 >> 0x10);
        iVar5 = (int)uVar10;
        local_a = (char *)CONCAT22(uVar12,(char *)local_a);
        if (*(int *)(iVar5 + 5) != 0 || *(int *)(iVar5 + 3) != 0) {
          FUN_1000_7f96(0x1000,*(undefined2 *)(iVar5 + 3),*(undefined2 *)(iVar5 + 5));
        }
        uVar10 = FUN_1000_7f8e(0x1000,(undefined2 *)param_1,param_1._2_2_,param_6);
        local_6._2_2_ = (int)((ulong)uVar10 >> 0x10);
        uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
        uVar12 = (undefined2)((ulong)uVar9 >> 0x10);
        iVar5 = (int)uVar9;
        *(undefined2 *)(iVar5 + 3) = (int)uVar10;
        *(int *)(iVar5 + 5) = local_6._2_2_;
        local_a._2_2_ = uVar12;
        iVar3 = LSTRLEN(0x1000,(undefined2 *)param_1);
        *(uint *)(iVar5 + 7) = (uint)(iVar3 != 0);
        pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        if ((iVar3 != 0) == 0) {
          FUN_1000_41a6(param_4,param_5,param_6);
        }
        goto LAB_1000_3318;
      }
      uVar10 = FUN_1000_7f66(unaff_CS,param_5,param_6);
      uVar12 = (undefined2)((ulong)uVar10 >> 0x10);
      iVar5 = (int)uVar10;
      local_a = (char *)CONCAT22(uVar12,(char *)local_a);
      if (*(int *)(iVar5 + 5) != 0 || *(int *)(iVar5 + 3) != 0) {
        uVar12 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar5 + 3),*(undefined2 *)(iVar5 + 5));
        iVar5 = LSTRLEN(0x1000,uVar12);
        return (long)iVar5;
      }
    }
    else {
      if (param_3 != 0x30) {
        if (param_3 == 0x31) {
          uVar10 = FUN_1000_7f66(unaff_CS,param_5,param_6);
          param_2 = *(uint *)((int)uVar10 + 1);
LAB_1000_33a0:
          return (ulong)param_2;
        }
        if (param_3 == 0x81) {
          DAT_1008_1466 = DAT_1008_1466 + 1;
          iVar5 = FUN_1000_7fee(unaff_CS);
          if (iVar5 == 1) {
            *(undefined2 *)(pcVar6 + 0xf) = DAT_1008_16c0;
            *(undefined2 *)(pcVar6 + 0xd) = DAT_1008_16c2;
            *(undefined2 **)(pcVar6 + 0xb) = DAT_1008_16c4;
            *pcVar6 = DAT_1008_16c6;
            pcVar6[0x11] = DAT_1008_16c7;
            uVar12 = DAT_1008_16be;
            *(undefined2 **)(pcVar6 + 0x18) = DAT_1008_16bc;
            *(undefined2 *)(pcVar6 + 0x1a) = uVar12;
          }
          (pcVar6 + 7)[0] = '\0';
          (pcVar6 + 7)[1] = '\0';
          (pcVar6 + 0x12)[0] = '\0';
          (pcVar6 + 0x12)[1] = '\0';
          (pcVar6 + 0x14)[0] = '\0';
          (pcVar6 + 0x14)[1] = '\0';
          (pcVar6 + 0x16)[0] = '\0';
          (pcVar6 + 0x16)[1] = '\0';
          goto LAB_1000_3465;
        }
        if (param_3 != 0x100) {
          if (param_3 != 0x101) goto switchD_1000_375a_default;
          goto LAB_1000_37d8;
        }
        goto LAB_1000_37e1;
      }
      uVar10 = FUN_1000_7f66(unaff_CS,param_5,param_6);
      *(uint *)((int)uVar10 + 1) = param_2;
    }
  }
  else if (param_3 == 0x1008) {
    if (param_2 != 0x1c) goto switchD_1000_375a_default;
    uVar10 = FUN_1000_7f8e(unaff_CS,(char *)s_Click_on_______for_About_Box_1008_16c8,0x1008,param_6)
    ;
    *param_1 = (int)uVar10;
    ((undefined2 *)param_1)[1] = (int)((ulong)uVar10 >> 0x10);
  }
  else if (param_3 < 0x1009) {
    if (param_3 == 0x203) {
      SENDMESSAGE(unaff_CS,0,0,0,0x201);
    }
    else {
      if (param_3 == 0x205) {
        iVar5 = FUN_1000_7fee(unaff_CS);
        unaff_CS = (char *)0x1000;
        if (iVar5 != 1) goto switchD_1000_375a_default;
        DAT_1008_16c0 = *(undefined2 *)(pcVar6 + 0xf);
        DAT_1008_16c2 = *(undefined2 *)(pcVar6 + 0xd);
        DAT_1008_16c6 = *pcVar6;
        DAT_1008_16c4 = *(undefined2 **)(pcVar6 + 0xb);
        DAT_1008_16c7 = pcVar6[0x11];
        DAT_1008_16bc = *(undefined2 **)(pcVar6 + 0x18);
        DAT_1008_16be = *(undefined2 *)(pcVar6 + 0x1a);
LAB_1000_3465:
        local_a = (char *)CONCAT22(local_a._2_2_,pcVar6);
        unaff_CS = (char *)0x1000;
        goto switchD_1000_375a_default;
      }
      if (param_3 == 0x1004) {
        if (param_2 == 0x17) {
          pcVar7 = (char *)0x1000;
          FUN_1000_806e(unaff_CS,local_16);
          if (local_16[0] != '\0') {
            if (local_16[0] == '\x01') {
              if ((*pcVar6 == '\x02') && (*(int *)(pcVar6 + 7) == 0)) {
                GETOBJECT(0x1000,local_24,unaff_SS,0xe);
                iVar5 = local_22 + (*(int *)(pcVar6 + 0xb) + 1) * 2;
                pcVar11 = local_20 + (*(int *)(pcVar6 + 0xb) + 1) * 2;
                (pcVar6 + 0x16)[0] = '\x01';
                (pcVar6 + 0x16)[1] = '\0';
                uVar12 = param_4;
                local_22 = iVar5;
                local_20 = pcVar11;
LAB_1000_35ab:
                unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
                FUN_1000_0440(1,pcVar11,iVar5,uVar12);
                uVar12 = 0;
                in_stack_0000ffc8 = 0;
                (pcVar6 + 0x16)[0] = '\0';
                (pcVar6 + 0x16)[1] = '\0';
                goto LAB_1000_331e;
              }
            }
            else {
              if (local_16[0] != '\x03') {
                FUN_1000_8086(0x1000,(char *)s_Only_Picture_Formats___BMP_______1008_1706,0x1008,
                              30000);
                uVar4 = 30000;
                goto LAB_1000_3286;
              }
              uVar12 = 0x1000;
              local_6._2_2_ = GETSYSTEMMETRICS(0x1000,0xb,(undefined2 *)param_1);
              iVar5 = 0xc;
              pcVar11 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              local_6._0_2_ =
                   GETSYSTEMMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xc)
              ;
              iVar3 = (*(int *)(pcVar6 + 0xb) + 1) * 2;
              local_6._2_2_ = local_6._2_2_ + iVar3;
              local_6._0_2_ = (int)local_6 + iVar3;
              if ((*pcVar6 == '\x02') && (*(int *)(pcVar6 + 7) == 0)) {
                (pcVar6 + 0x16)[0] = '\x01';
                (pcVar6 + 0x16)[1] = '\0';
                goto LAB_1000_35ab;
              }
            }
          }
          goto LAB_1000_3318;
        }
        if (param_2 != 0x18) goto switchD_1000_375a_default;
        if (((int)(undefined2 *)param_1 < 0) || (10 < (int)(undefined2 *)param_1)) {
          FUN_1000_8086(unaff_CS,(char *)s_Bevel_Width_must_be_from_0_to_10_1008_16e5,0x1008,0x7534)
          ;
          uVar4 = 0x7534;
          goto LAB_1000_3286;
        }
        DAT_1008_16c4 = (undefined2 *)param_1;
        uVar12 = 0x35df;
        iVar5 = FUN_1000_41a6(param_4,param_5,param_6);
        if (iVar5 != 0) goto LAB_1000_3284;
        param_4 = 0;
      }
      else {
        if (param_3 != 0x1005) goto switchD_1000_375a_default;
        if (param_2 == 0x1e) {
          iVar5 = FUN_1000_7fee(unaff_CS);
          FUN_1000_7f66(0x1000,param_5,param_6);
          if ((iVar5 == 2) && ((undefined2 *)param_1 != (undefined2 *)0x0)) {
            FUN_1000_4136(param_4,param_5,param_6);
            iVar5 = ISWINDOW(0x1000,param_4);
            if (iVar5 != 0) {
              FUN_1000_7f66((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5,
                            param_6);
              local_6._2_2_ = 0;
              FUN_1000_7f7e(0x1000,0,unaff_BP,0x1e,param_5,param_6);
            }
          }
          goto LAB_1000_3284;
        }
        if (0x1e < param_2) goto switchD_1000_375a_default;
        bVar2 = (byte)param_2;
        pcVar7 = unaff_CS;
        if (bVar2 == 0x19) {
          DAT_1008_16c0 = *(undefined2 *)(pcVar6 + 0xf);
        }
        else if (bVar2 < 0x1a) {
          if (bVar2 != 3) {
            if (bVar2 != 8) goto switchD_1000_375a_default;
            goto LAB_1000_323c;
          }
          DAT_1008_16bc = (undefined2 *)param_1;
          DAT_1008_16be = param_1._2_2_;
        }
        else {
          if (bVar2 != 0x1a) {
            if (bVar2 == 0x1b) {
              DAT_1008_16c6 = *pcVar6;
              FUN_1000_41a6(param_4,param_5,param_6);
            }
            else {
              if (bVar2 != 0x1d) goto switchD_1000_375a_default;
              DAT_1008_16c7 = pcVar6[0x11];
              iVar5 = ISWINDOW(unaff_CS,param_4);
              pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              if (iVar5 != 0) goto LAB_1000_3318;
            }
            goto LAB_1000_3284;
          }
          DAT_1008_16c2 = *(undefined2 *)(pcVar6 + 0xd);
        }
LAB_1000_3318:
        uVar12 = 0;
        in_stack_0000ffc8 = 0;
        unaff_CS = pcVar7;
      }
LAB_1000_331e:
      INVALIDATERECT(unaff_CS,0,in_stack_0000ffc8,uVar12,param_4);
    }
  }
  else {
    if (param_3 == 0x1009) {
      if (param_2 == 0x1c) {
        param_2 = FUN_1000_6f3e(uVar12);
        goto LAB_1000_33a0;
      }
      goto switchD_1000_375a_default;
    }
    if (param_3 == 0x100d) goto LAB_1000_37ea;
    if (param_3 == 0x1022) {
      cVar1 = (char)(param_2 >> 8);
      uVar4 = param_2 & 0xff;
      if (uVar4 == 1) {
        switch(cVar1) {
        case '\x17':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommandPicture_1008_1736;
          break;
        case '\x18':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommandBevelWidth_1008_1747;
          break;
        case '\x19':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommandRoundedCorners_1008_175b;
          break;
        case '\x1a':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommandOutline_1008_1773;
          break;
        case '\x1b':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommandAutoSize_1008_1784;
          break;
        case '\x1c':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommand_About__1008_1796;
          break;
        case '\x1d':
          uVar12 = 0x50;
          pcVar6 = (char *)s_SSCommandFont3D_1008_17a7;
          break;
        default:
          goto switchD_1000_375a_default;
        }
      }
      else if (uVar4 == 2) {
        if (cVar1 != '\0') goto switchD_1000_375a_default;
        uVar12 = 0x56;
        pcVar6 = (char *)s_SSCommandClick_1008_17b7;
      }
      else {
        if (uVar4 != 3) goto switchD_1000_375a_default;
        uVar12 = 0x43;
        pcVar6 = (char *)s_SSCommand_1008_17c6;
      }
      FUN_1000_0776(pcVar6,0x1008,uVar12);
    }
    else {
      if (param_3 != 0x202b) {
        if (param_3 != 0x2111) goto switchD_1000_375a_default;
        goto LAB_1000_37f2;
      }
      FUN_1000_387a((undefined2 *)param_1,param_1._2_2_,param_5,param_6);
    }
  }
LAB_1000_3284:
  uVar4 = 0;
LAB_1000_3286:
  return (ulong)uVar4;
}


// ---- FUN_1000_387a @ 1000:387a

void FUN_1000_387a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined2 uVar11;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  int local_22;
  int local_20;
  int local_1e;
  int local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  uint local_10;
  undefined4 local_e;
  uint local_a;
  uint local_8;
  undefined4 local_6;
  
  uVar5 = param_2;
  uVar11 = param_3;
  local_6 = FUN_1000_7f66();
  uVar7 = (undefined2)((ulong)local_6 >> 0x10);
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  if (((*(byte *)(iVar8 + 6) & 4) == 0) || ((*(byte *)(iVar8 + 8) & 0x10) != 0)) {
    uVar2 = *(uint *)(iVar8 + 8);
    local_8 = (uint)((uVar2 & 1) == 0);
    local_a = (uint)((uVar2 & 0x10) != 0);
    local_10 = (uint)((uVar2 & 4) == 0);
    if (local_10 == 0) {
      local_a = 0;
    }
    local_e = FUN_1000_7f9e(0x1000,*(undefined2 *)((int)local_6 + 3),
                            *(undefined2 *)((int)local_6 + 5),uVar5,uVar11);
    pcVar10 = (char *)0x1000;
    local_6 = FUN_1000_7f66(0x1000,param_2,param_3);
    uVar5 = (undefined2)((ulong)local_6 >> 0x10);
    if (*(int *)((int)local_6 + 1) != 0) {
      pcVar10 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      local_12 = SELECTOBJECT(0x1000,*(undefined2 *)((int)local_6 + 1));
    }
    COPYRECT(pcVar10,iVar8 + 0xe,uVar9,&local_1a);
    FUN_1000_3b46(local_a,&local_2a,unaff_SS,&local_22,unaff_SS,&local_1a,unaff_SS,
                  *(undefined2 *)(iVar8 + 0xc),param_2,param_3);
    if (((*(byte *)(iVar8 + 6) & 4) != 0) && (*(int *)((int)local_6 + 9) != 0)) {
      EXCLUDECLIPRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_1c + -1,
                      local_1e + -1,local_20 + 1,local_22 + 1);
    }
    if ((*(byte *)(iVar8 + 6) & 2) == 0) {
      puVar4 = &local_1a;
    }
    else {
      puVar4 = (undefined2 *)(iVar8 + 0xe);
    }
    uVar11 = 1;
    uVar5 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,puVar4);
    FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5,uVar11,puVar4);
    COPYRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar8 + 0xe,uVar9,&local_1a
            );
    if (*(int *)((int)local_6 + 9) != 0) {
      FUN_1000_3e30(local_8,local_22,local_20,local_1e,local_1c,*(undefined2 *)(iVar8 + 0xc),param_2
                    ,param_3);
    }
    iVar6 = LSTRLEN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,(undefined2)local_e)
    ;
    uVar3 = local_6;
    if (0 < iVar6) {
      FUN_1000_3f8e(local_10,local_8,local_a,local_2a,local_28,local_26,local_24,local_e,
                    *(undefined2 *)(iVar8 + 0xc),param_2,param_3);
      uVar3 = local_6;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    local_6._0_2_ = (int)uVar3;
    if (*(int *)((int)local_6 + 1) != 0) {
      local_6 = uVar3;
      SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_12);
      uVar3 = local_6;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    local_6._0_2_ = (int)uVar3;
    if (local_a != 0) {
      puVar1 = (undefined2 *)((int)local_6 + 0xf);
      local_6 = uVar3;
      FUN_1000_0128(*puVar1,local_1a,local_18,local_16,local_14,*(undefined2 *)(iVar8 + 0xc));
      FUN_1000_02c0(1,1,1,1,1,&local_1a,unaff_SS);
      uVar3 = local_6;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    local_6._0_2_ = (int)uVar3;
    if (*(int *)((int)local_6 + 0xd) != 0) {
      if (local_a == 0) {
        uVar5 = *(undefined2 *)(iVar8 + 0xc);
        uVar11 = *(undefined2 *)((int)local_6 + 0xf);
      }
      else {
        uVar5 = *(undefined2 *)(iVar8 + 0xc);
        uVar11 = 0;
      }
      local_6 = uVar3;
      FUN_1000_0128(uVar11,local_1a,local_18,local_16,local_14,uVar5);
      FUN_1000_02c0(1,1,1,1,1,&local_1a,unaff_SS);
      uVar3 = local_6;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    local_6._0_2_ = (int)uVar3;
    local_6 = uVar3;
    if (local_8 != 0) {
      puVar1 = (undefined2 *)((int)local_6 + 0xb);
      FUN_1000_0306(0x8080,0x80,1,*puVar1,local_1a,local_18,local_16,local_14,
                    *(undefined2 *)(iVar8 + 0xc));
      FUN_1000_02c0(1,1,1,1,*(undefined2 *)((int)local_6 + 0xb),&local_1a,unaff_SS);
      return;
    }
    iVar6 = *(int *)((int)local_6 + 0xb) + -1;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    FUN_1000_0224(iVar6,local_1a,local_18,local_16,local_14,*(undefined2 *)(iVar8 + 0xc));
  }
  return;
}


// ---- FUN_1000_3b46 @ 1000:3b46

void FUN_1000_3b46(int param_1,int *param_2,undefined2 param_3,int *param_4,undefined2 param_5,
                  int *param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_54 [16];
  undefined1 local_34 [2];
  int local_32;
  int local_30;
  char local_26 [12];
  int local_1a [2];
  int local_16;
  int local_12;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  undefined4 local_6;
  
  uVar5 = param_8;
  uVar6 = param_9;
  uVar4 = FUN_1000_7f66();
  local_6._2_2_ = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  FUN_1000_02c0(1,1,1,1,1,(int *)param_6,param_6._2_2_);
  if (*(int *)(iVar2 + 0xd) != 0) {
    FUN_1000_02c0(1,1,1,1,1,(int *)param_6,param_6._2_2_);
  }
  FUN_1000_02c0(1,1,1,1,*(undefined2 *)(iVar2 + 0xb),(int *)param_6,param_6._2_2_);
  local_e = (((int *)param_6)[2] - *param_6) + 1;
  local_12 = (((int *)param_6)[3] - ((int *)param_6)[1]) + 1;
  local_c = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar2 + 3),*(undefined2 *)(iVar2 + 5),uVar5,uVar6);
  uVar4 = FUN_1000_7f66(0x1000,param_8,param_9);
  local_6._2_2_ = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  if (*(int *)(iVar2 + 7) == 0) {
    SETRECTEMPTY(0x1000,param_2,param_3);
  }
  else {
    DRAWTEXT(0x1000,0x420,local_1a,unaff_SS,0xffff,local_c);
    iVar3 = local_16 - local_1a[0];
    GETTEXTMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_54,unaff_SS);
    local_8 = local_54[0];
    if (((int *)param_6)[2] - *param_6 < iVar3) {
      *param_2 = *param_6;
      iVar1 = ((int *)param_6)[2] + 1;
    }
    else {
      iVar1 = (local_e - iVar3) / 2 + *param_6;
      *param_2 = iVar1;
      iVar1 = iVar1 + iVar3;
      local_10 = iVar3;
    }
    param_2[2] = iVar1;
    if (*(int *)(iVar2 + 9) == 0) {
      iVar3 = (local_12 - local_54[0]) / 2 + ((int *)param_6)[1] + -2;
      param_2[1] = iVar3;
      param_2[3] = iVar3 + local_54[0] + 2;
    }
    else {
      iVar3 = ((int *)param_6)[3];
      param_2[3] = iVar3 + -4;
      param_2[1] = ((iVar3 + -4) - local_54[0]) + -2;
    }
  }
  if (*(int *)(iVar2 + 9) == 0) {
    SETRECTEMPTY((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_5);
  }
  else {
    FUN_1000_806e((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_26);
    uVar5 = 0x3cef;
    uVar4 = FUN_1000_7f66(0x1000,param_8,param_9);
    local_6._2_2_ = (undefined2)((ulong)uVar4 >> 0x10);
    if (local_26[0] == '\x01') {
      GETOBJECT(0x1000,local_34,unaff_SS,0xe);
      if (*(int *)((int)uVar4 + 7) == 0) {
        COPYRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,(int *)param_6,
                 param_6._2_2_,param_4);
      }
      else {
        iVar2 = (local_e - local_32) / 2 + *param_6;
        *param_4 = iVar2;
        param_4[2] = iVar2 + local_32 + -1;
        iVar2 = ((int *)param_6)[1];
        param_4[1] = iVar2;
        param_4[3] = iVar2 + local_30 + -1;
      }
    }
    else if (local_26[0] == '\x03') {
      uVar7 = 0xb;
      uVar6 = 0x1000;
      local_6 = uVar4;
      local_8 = GETSYSTEMMETRICS(0x1000,0xb);
      iVar2 = GETSYSTEMMETRICS(uVar5,0xc,uVar6,uVar7,
                               (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
      iVar3 = (local_e - local_8) / 2 + *param_6;
      *param_4 = iVar3;
      param_4[2] = iVar3 + local_8 + -1;
      if (*(int *)((int)local_6 + 7) == 0) {
        iVar3 = (local_12 - iVar2) / 2 + ((int *)param_6)[1];
      }
      else {
        iVar3 = ((int *)param_6)[1];
      }
      param_4[1] = iVar3;
      param_4[3] = iVar3 + iVar2 + -1;
    }
  }
  if (param_1 == 0) {
    FUN_1000_02c0(1,1,1,1,0xffff,(int *)param_6,param_6._2_2_);
  }
  return;
}


// ---- FUN_1000_3e06 @ 1000:3e06

void FUN_1000_3e06(void)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 in_stack_0000000a;
  undefined2 uVar2;
  undefined1 *puVar3;
  
  puVar3 = &stack0x0002;
  uVar2 = 0xc0;
  uVar1 = CREATESOLIDBRUSH(unaff_CS,0xc0c0);
  FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar2,puVar3);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1);
  return;
}


// ---- FUN_1000_3e30 @ 1000:3e30

void FUN_1000_3e30(int param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char local_12;
  undefined2 local_11;
  int local_6;
  undefined2 local_4;
  
  uVar3 = FUN_1000_7f66();
  local_4 = (undefined2)((ulong)uVar3 >> 0x10);
  if (*(int *)((int)uVar3 + 9) != 0) {
    FUN_1000_806e(0x1000,&local_12);
    uVar3 = FUN_1000_7f66(0x1000,param_7,param_8);
    local_4 = (undefined2)((ulong)uVar3 >> 0x10);
    iVar1 = (int)uVar3;
    if (local_12 == '\x01') {
      FUN_1000_3ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    if (local_12 != '\x03') {
      return;
    }
    if (param_1 == 0) {
      iVar2 = *(int *)(iVar1 + 0xb) + -1;
      local_6 = iVar1;
      if (iVar2 < 1) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 0;
    }
    DRAWICON(0x1000,local_11,iVar2 + param_3,iVar2 + param_2);
  }
  return;
}


// ---- FUN_1000_3ee0 @ 1000:3ee0

void FUN_1000_3ee0(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_16;
  undefined2 local_15;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  uVar1 = FUN_1000_7f66();
  local_8 = (undefined2)((ulong)uVar1 >> 0x10);
  if (*(int *)((int)uVar1 + 9) != 0) {
    FUN_1000_806e(0x1000,&local_16);
    pcVar2 = (char *)FUN_1000_7f66(0x1000,param_7,param_8);
    local_8 = (undefined2)((ulong)pcVar2 >> 0x10);
    local_6 = local_15;
    if (param_1 == 0) {
      local_4 = *(int *)((char *)pcVar2 + 0xb) + -1;
      if (local_4 < 1) {
        local_4 = 1;
      }
    }
    else {
      local_4 = 0;
    }
    FUN_1000_048a(0,0,0,*pcVar2 == '\x01',local_4,param_2,param_3,param_4,param_5,local_15,param_6);
  }
  return;
}


// ---- FUN_1000_3f8e @ 1000:3f8e

void FUN_1000_3f8e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10,
                  undefined2 param_11,undefined2 param_12)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  long lVar6;
  
  uVar5 = FUN_1000_7f66();
  uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar1 = (int)uVar5;
  uVar2 = SETBKMODE(0x1000,1);
  if (param_2 == 0) {
    iVar4 = *(int *)(iVar1 + 0xb) + -1;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar4,iVar4,&param_4);
  }
  if (param_1 == 0) {
    lVar6 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x11);
    if (lVar6 == 0xc0c0c0) {
      DAT_1008_1f32 = *(undefined2 *)(iVar1 + 1);
      DAT_1008_1f36 = 0x25;
      DAT_1008_1f30 = param_6 - param_4;
      DAT_1008_1f28 = param_7 - param_5;
      uVar3 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,4,param_10)
      ;
      GRAYSTRING((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1f28,
                 DAT_1008_1f30,param_5,param_4,0,param_8,param_9,0x668,0x1000,uVar3);
    }
    else {
      uVar5 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x11,param_10)
      ;
      uVar5 = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5);
      FUN_1000_7436(0xc0c0,0xc0,0,0x25,
                    CONCAT11((char)((uint)&param_4 >> 8),*(undefined1 *)(iVar1 + 0x11)),&param_4,
                    unaff_SS,param_8,param_9,param_10);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5);
    }
  }
  else {
    uVar5 = FUN_1000_0648(*(undefined2 *)(iVar1 + 0x18),*(undefined2 *)(iVar1 + 0x1a));
    SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5);
    FUN_1000_7436(0xc0c0,0xc0,0,0x25,
                  CONCAT11((char)((uint)&param_4 >> 8),*(undefined1 *)(iVar1 + 0x11)),&param_4,
                  unaff_SS,param_8,param_9,param_10);
  }
  if (param_3 != 0) {
    FUN_1000_02c0(1,1,1,1,0xffff,&param_4,unaff_SS);
    FUN_1000_02c0(0,0,0,1,0xffff,&param_4,unaff_SS);
    uVar5 = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0);
    DRAWFOCUSRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_4,unaff_SS);
    SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5);
  }
  SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2);
  return;
}


// ---- FUN_1000_4136 @ 1000:4136

void FUN_1000_4136(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 local_a [6];
  undefined2 local_4;
  
  uVar3 = FUN_1000_7f66();
  local_4 = (undefined2)((ulong)uVar3 >> 0x10);
  *(undefined2 *)((int)uVar3 + 0x14) = 1;
  *(undefined2 *)((int)uVar3 + 0x12) = 1;
  FUN_1000_7f76(0x1000,local_a);
  iVar1 = ISWINDOW(0x1000,param_1);
  if (iVar1 != 0) {
    lVar4 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1);
    if (lVar4 == CONCAT22(param_3,param_2)) {
      uVar3 = FUN_1000_7f66(0x1000,param_2,(int)((ulong)lVar4 >> 0x10));
      uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
      *(undefined2 *)((int)uVar3 + 0x12) = 0;
      *(undefined2 *)((int)uVar3 + 0x14) = 0;
    }
  }
  return;
}


// ---- FUN_1000_41a6 @ 1000:41a6

undefined2 FUN_1000_41a6(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SS;
  char *pcVar5;
  undefined4 uVar6;
  undefined2 in_stack_0000ffba;
  int in_stack_0000ffbc;
  int iVar7;
  undefined1 local_24 [2];
  int local_22;
  int local_20;
  char local_16 [14];
  undefined2 local_8;
  int local_6;
  int local_4;
  
  pcVar5 = (char *)FUN_1000_7f66();
  local_8 = (undefined2)((ulong)pcVar5 >> 0x10);
  pcVar1 = (char *)pcVar5;
  if (*(int *)(pcVar1 + 7) == 0) {
    if (*pcVar5 == '\x02') {
      local_4 = *(int *)(pcVar1 + 9);
      if (local_4 != 0) {
        FUN_1000_806e(0x1000,local_16);
        uVar6 = FUN_1000_7f66(0x1000,param_2,param_3);
        local_8 = (undefined2)((ulong)uVar6 >> 0x10);
        iVar2 = (int)uVar6;
        if (local_16[0] == '\x01') {
          iVar7 = 0x4219;
          GETOBJECT(0x1000,local_24,unaff_SS,0xe);
          if (*(int *)(iVar2 + 0xd) == 0) {
            iVar4 = *(int *)(iVar2 + 0xb) + 1;
            iVar3 = *(int *)(iVar2 + 0xb) + 1;
          }
          else {
            iVar4 = *(int *)(iVar2 + 0xb) + 2;
            iVar3 = *(int *)(iVar2 + 0xb) + 2;
          }
          local_22 = local_22 + iVar4 * 2;
          local_20 = local_20 + iVar3 * 2;
          *(undefined2 *)(iVar2 + 0x16) = 1;
          param_1 = 1;
        }
        else {
          if (local_16[0] != '\x03') {
            return 0;
          }
          local_4 = GETSYSTEMMETRICS(0x1000,0xb);
          in_stack_0000ffbc =
               GETSYSTEMMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xc);
          if (*(int *)(iVar2 + 0xd) == 0) {
            iVar4 = *(int *)(iVar2 + 0xb) + 1;
          }
          else {
            iVar4 = *(int *)(iVar2 + 0xb) + 2;
          }
          iVar7 = local_4 + iVar4 * 2;
          in_stack_0000ffbc = in_stack_0000ffbc + iVar4 * 2;
          *(undefined2 *)(iVar2 + 0x16) = 1;
          in_stack_0000ffba = 1;
          local_6 = in_stack_0000ffbc;
          local_4 = iVar7;
        }
        FUN_1000_0440(in_stack_0000ffba,in_stack_0000ffbc,iVar7,param_1);
        *(undefined2 *)(iVar2 + 0x16) = 0;
        return 1;
      }
    }
    else if (*(int *)(pcVar1 + 9) != 0) {
      INVALIDATERECT(0x1000,0,0,0,param_1);
      return 1;
    }
  }
  return 0;
}


// ---- SSPNCTLPROC @ 1000:42da

ulong __stdcall16far
SSPNCTLPROC(undefined2 *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  char *unaff_CS;
  char *pcVar7;
  int unaff_SS;
  undefined2 *puVar8;
  undefined4 uVar9;
  int *in_stack_0000ffce;
  int in_stack_0000ffd0;
  undefined2 uVar10;
  undefined2 local_22 [8];
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  puVar8 = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
  uVar10 = 0x1008;
  if (param_6 != (int *)0x0 || param_5 != 0) {
    unaff_CS = (char *)0x1000;
    in_stack_0000ffd0 = 0x42fc;
    puVar8 = (undefined2 *)FUN_1000_7f66();
  }
  local_a._2_2_ = (int)((ulong)puVar8 >> 0x10);
  puVar6 = (undefined2 *)puVar8;
  if (param_3 == 0x31) {
    uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
    param_2 = *(uint *)((int)uVar9 + 0x14);
    goto LAB_1000_466e;
  }
  if (param_3 < 0x32) {
    if (param_3 == 0x30) {
      uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
      *(uint *)((int)uVar9 + 0x14) = param_2;
    }
    else {
      local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      if (0x30 < param_3) goto switchD_1000_4951_caseD_4;
      bVar1 = (byte)param_3;
      if (bVar1 == 0xd) {
        local_a = (undefined2 *)FUN_1000_7f66(unaff_CS,param_5,param_6);
        uVar10 = (undefined2)((ulong)local_a >> 0x10);
        iVar4 = (int)local_a;
        if (*(int *)(iVar4 + 0x18) == 0 && *(int *)(iVar4 + 0x16) == 0) {
          *(undefined1 *)param_1 = 0;
          param_2 = 1;
        }
        else {
          local_6 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar4 + 0x16),*(undefined2 *)(iVar4 + 0x18)
                                 );
          uVar10 = (undefined2)(local_6 >> 0x10);
          iVar4 = LSTRLEN(0x1000,(int)local_6);
          if (iVar4 + 1U < param_2) {
            param_2 = iVar4 + 1U;
          }
          FUN_1000_85dc((undefined2 *)param_1,param_1._2_2_,local_6,param_2,uVar10);
          *(undefined1 *)((int)(undefined2 *)param_1 + (param_2 - 1)) = 0;
        }
        param_2 = param_2 - 1;
        goto LAB_1000_466e;
      }
      if (bVar1 < 0xe) {
        if (bVar1 == 3) {
          pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          GETCLIENTRECT(unaff_CS,&local_12,unaff_SS);
          if ((*(int *)((int)puVar6 + 0x2b) == 0) ||
             ((local_e - *(int *)((int)puVar6 + 0x21) == local_12 &&
              (local_c - *(int *)((int)puVar6 + 0x23) == local_10)))) {
            *(undefined2 *)((int)puVar6 + 0x25) = 0;
          }
          else {
            *(undefined2 *)((int)puVar6 + 0x25) = 1;
          }
          unaff_CS = pcVar7;
          if (*(char *)(puVar6 + 0xe) == '\x02') {
            *(int *)((int)puVar6 + 0x21) = local_e - local_12;
            *(undefined2 *)((int)puVar6 + 0x27) = *(undefined2 *)((int)puVar6 + 0x1d);
            *(undefined2 *)((int)puVar6 + 0x1d) = (undefined2 *)param_1;
            local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
            if (*(int *)((int)puVar6 + 0x25) == 0) {
              *(undefined2 *)((int)puVar6 + 0x29) = *(undefined2 *)((int)puVar6 + 0x1f);
              *(undefined2 *)((int)puVar6 + 0x1f) = param_1._2_2_;
              local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
            }
          }
          else if (*(char *)(puVar6 + 0xe) == '\x01') {
            *(int *)((int)puVar6 + 0x23) = local_c - local_10;
            *(undefined2 *)((int)puVar6 + 0x29) = *(undefined2 *)((int)puVar6 + 0x1f);
            *(undefined2 *)((int)puVar6 + 0x1f) = param_1._2_2_;
            local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
            if (*(int *)((int)puVar6 + 0x25) == 0) {
              *(undefined2 *)((int)puVar6 + 0x27) = *(undefined2 *)((int)puVar6 + 0x1d);
              *(undefined2 *)((int)puVar6 + 0x1d) = (undefined2 *)param_1;
              local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
            }
          }
          else {
            *(undefined2 *)((int)puVar6 + 0x27) = *(undefined2 *)((int)puVar6 + 0x1d);
            *(undefined2 *)((int)puVar6 + 0x1d) = (undefined2 *)param_1;
            *(undefined2 *)((int)puVar6 + 0x29) = *(undefined2 *)((int)puVar6 + 0x1f);
            *(undefined2 *)((int)puVar6 + 0x1f) = param_1._2_2_;
            *(int *)((int)puVar6 + 0x21) = local_e - local_12;
            *(int *)((int)puVar6 + 0x23) = local_c - local_10;
            local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
          }
          goto switchD_1000_4951_caseD_4;
        }
        if (bVar1 == 7) {
          local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
          if (*(int *)((int)puVar6 + 0x37) != 0) goto switchD_1000_4951_caseD_4;
          uVar10 = GETPARENT(unaff_CS,param_4);
          local_6._2_2_ =
               GETNEXTDLGTABITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,
                                 param_4);
          if (local_6._2_2_ != param_4) {
            *(undefined2 *)((int)puVar6 + 0x37) = 1;
            SETFOCUS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_6._2_2_,
                     uVar10);
            *(undefined2 *)((int)puVar6 + 0x37) = 0;
          }
LAB_1000_4508:
          uVar3 = 1;
          goto LAB_1000_450b;
        }
        local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
        if (bVar1 != 0xc) goto switchD_1000_4951_caseD_4;
        pcVar7 = (char *)0x1000;
        iVar4 = param_5;
        uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
        local_a._2_2_ = (int)((ulong)uVar9 >> 0x10);
        iVar2 = (int)uVar9;
        if (*(int *)(iVar2 + 0x18) != 0 || *(int *)(iVar2 + 0x16) != 0) {
          uVar9 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar2 + 0x16),*(undefined2 *)(iVar2 + 0x18));
          iVar4 = (int)((ulong)uVar9 >> 0x10);
          pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar2 = LSTRCMP(0x1000,(undefined2 *)param_1,param_1._2_2_,(int)uVar9);
          if (iVar2 == 0) goto LAB_1000_454a;
        }
        in_stack_0000ffd0 = param_5;
        uVar9 = FUN_1000_7f66(pcVar7,param_5,param_6,iVar4);
        local_a._2_2_ = (int)((ulong)uVar9 >> 0x10);
        iVar4 = (int)uVar9;
        if (*(int *)(iVar4 + 0x18) != 0 || *(int *)(iVar4 + 0x16) != 0) {
          FUN_1000_7f96(0x1000,*(undefined2 *)(iVar4 + 0x16),*(undefined2 *)(iVar4 + 0x18));
        }
        in_stack_0000ffce = param_6;
        local_6 = FUN_1000_7f8e(0x1000,(undefined2 *)param_1,param_1._2_2_,param_6);
        uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
        local_a._2_2_ = (int)((ulong)uVar9 >> 0x10);
        iVar4 = (int)uVar9;
        *(undefined2 *)(iVar4 + 0x16) = (undefined2)local_6;
        *(undefined2 *)(iVar4 + 0x18) = local_6._2_2_;
        if ((*(char *)(iVar4 + 0x1c) == '\x01') || (*(char *)(iVar4 + 0x1c) == '\x02'))
        goto LAB_1000_49d9;
        iVar4 = param_4;
        GETCLIENTRECT(0x1000,&local_12,unaff_SS);
        FUN_1000_50d2(&local_12,unaff_SS,param_5,param_6);
        INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,&local_12,
                       unaff_SS,param_4);
        UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,iVar4);
      }
      else if (bVar1 == 0xe) {
        uVar9 = FUN_1000_7f66(unaff_CS,param_5,param_6);
        local_a._2_2_ = (int)((ulong)uVar9 >> 0x10);
        iVar4 = (int)uVar9;
        if (*(int *)(iVar4 + 0x18) != 0 || *(int *)(iVar4 + 0x16) != 0) {
          uVar10 = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar4 + 0x16),*(undefined2 *)(iVar4 + 0x18))
          ;
          iVar4 = LSTRLEN(0x1000,uVar10);
          return (long)iVar4;
        }
      }
      else {
        if (bVar1 != 0xf) {
          local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
          if (bVar1 != 0x14) goto switchD_1000_4951_caseD_4;
          goto LAB_1000_4508;
        }
        if (param_2 == 0) {
          BEGINPAINT(unaff_CS,local_22,unaff_SS,param_4);
          FUN_1000_4d44(local_22[0],param_4,param_5,param_6);
          ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_22,unaff_SS);
        }
        else {
          FUN_1000_4d44(param_2,param_4,param_5,param_6);
        }
      }
    }
    goto LAB_1000_454a;
  }
  if (param_3 == 0x1004) {
    if (param_2 != 0x20) {
      local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      if (0x20 < param_2) goto switchD_1000_4951_caseD_4;
      pcVar7 = unaff_CS;
      if ((char)param_2 == '\x17') {
        if (((int)(undefined2 *)param_1 < 0) || (0x1e < (int)(undefined2 *)param_1)) {
          FUN_1000_8086(unaff_CS,(char *)s_Bevel_Width_must_be_from_0_to_30_1008_180b,0x1008,0x7532)
          ;
          uVar3 = 0x7532;
          goto LAB_1000_450b;
        }
        DAT_1008_17d0 = (undefined2 *)param_1;
      }
      else {
        local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
        if ((char)param_2 != '\x18') goto switchD_1000_4951_caseD_4;
        if (((int)(undefined2 *)param_1 < 0) || (0x1e < (int)(undefined2 *)param_1)) {
          FUN_1000_8086(unaff_CS,(char *)s_Border_Width_must_be_from_0_to_3_1008_182c,0x1008,0x7533)
          ;
          uVar3 = 0x7533;
          goto LAB_1000_450b;
        }
        DAT_1008_17d2 = (undefined2 *)param_1;
      }
      goto LAB_1000_48dd;
    }
    if (((int)(undefined2 *)param_1 < 0) || (100 < (int)(undefined2 *)param_1)) {
      FUN_1000_8086(unaff_CS,(char *)s_Flood_Percent_must_be_from_0_to_1_1008_184e,0x1008,0x7536);
      uVar3 = 0x7536;
      goto LAB_1000_450b;
    }
    goto LAB_1000_454a;
  }
  if (param_3 < 0x1005) {
    if (param_3 == 0x81) {
      DAT_1008_1466 = DAT_1008_1466 + 1;
      iVar4 = FUN_1000_7fee(unaff_CS);
      puVar8 = (undefined2 *)CONCAT22(local_a._2_2_,puVar6);
      if (iVar4 == 1) {
        puVar8 = (undefined2 *)FUN_1000_7f66(0x1000,param_5,param_6);
        uVar5 = (undefined2)((ulong)puVar8 >> 0x10);
        puVar6 = (undefined2 *)puVar8;
        *puVar8 = DAT_1008_17d0;
        puVar6[1] = DAT_1008_17d2;
        *(undefined1 *)(puVar6 + 2) = DAT_1008_17d4;
        *(undefined1 *)((int)puVar6 + 5) = DAT_1008_17d5;
        *(undefined2 *)((int)puVar6 + 9) = DAT_1008_17d6;
        *(undefined2 *)((int)puVar6 + 7) = DAT_1008_17d8;
        *(undefined1 *)((int)puVar6 + 0xb) = DAT_1008_17da;
        uVar10 = DAT_1008_17de;
        puVar6[6] = DAT_1008_17dc;
        puVar6[7] = uVar10;
        puVar6[9] = DAT_1008_17e0;
        *(undefined1 *)(puVar6 + 3) = DAT_1008_17e6;
        *(undefined1 *)(puVar6 + 0xd) = DAT_1008_17e7;
        *(undefined1 *)((int)puVar6 + 0x1b) = DAT_1008_17ec;
        *(undefined1 *)(puVar6 + 0xe) = DAT_1008_17ed;
        uVar10 = DAT_1008_17e4;
        *(undefined2 *)((int)puVar6 + 0x2f) = DAT_1008_17e2;
        *(undefined2 *)((int)puVar6 + 0x31) = uVar10;
        uVar10 = DAT_1008_17ea;
        *(undefined2 *)((int)puVar6 + 0x33) = DAT_1008_17e8;
        *(undefined2 *)((int)puVar6 + 0x35) = uVar10;
      }
      local_a._2_2_ = (int)((ulong)puVar8 >> 0x10);
      puVar6 = (undefined2 *)puVar8;
      puVar6[8] = 0;
      *(undefined2 *)((int)puVar6 + 0x1d) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x1f) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x23) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x21) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x27) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x29) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x25) = 0;
      *(undefined2 *)((int)puVar6 + 0x2d) = 1;
      *(undefined2 *)((int)puVar6 + 0x37) = 0;
      unaff_CS = (char *)0x1000;
      local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      goto switchD_1000_4951_caseD_4;
    }
    if (param_3 == 0x205) {
      iVar4 = FUN_1000_7fee(unaff_CS);
      unaff_CS = (char *)0x1000;
      local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      if (iVar4 == 1) {
        DAT_1008_17d0 = (undefined2 *)*puVar6;
        DAT_1008_17d2 = (undefined2 *)puVar6[1];
        DAT_1008_17d4 = *(undefined1 *)(puVar6 + 2);
        DAT_1008_17d5 = *(undefined1 *)((int)puVar6 + 5);
        DAT_1008_17d6 = *(undefined2 *)((int)puVar6 + 9);
        DAT_1008_17d8 = *(undefined2 *)((int)puVar6 + 7);
        DAT_1008_17da = *(undefined1 *)((int)puVar6 + 0xb);
        DAT_1008_17dc = puVar6[6];
        DAT_1008_17de = puVar6[7];
        DAT_1008_17e0 = puVar6[9];
        DAT_1008_17e6 = *(undefined1 *)(puVar6 + 3);
        DAT_1008_17e7 = *(undefined1 *)(puVar6 + 0xd);
        DAT_1008_17ec = *(undefined1 *)((int)puVar6 + 0x1b);
        DAT_1008_17ed = *(undefined1 *)(puVar6 + 0xe);
        DAT_1008_17e2 = (undefined2 *)*(undefined2 *)((int)puVar6 + 0x2f);
        DAT_1008_17e4 = *(undefined2 *)((int)puVar6 + 0x31);
        DAT_1008_17e8 = (undefined2 *)*(undefined2 *)((int)puVar6 + 0x33);
        DAT_1008_17ea = *(undefined2 *)((int)puVar6 + 0x35);
        local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      }
      goto switchD_1000_4951_caseD_4;
    }
    if (param_3 != 0x464) {
      local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      if (param_3 == 0x1000) {
        FUN_1000_5e2a(param_4,param_5,param_6);
        local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      }
      goto switchD_1000_4951_caseD_4;
    }
    DAT_1008_1f56 = (undefined2 *)param_1;
    DAT_1008_1f58 = param_1._2_2_;
    FUN_1000_7f7e(unaff_CS,(undefined2 *)param_1,param_1._2_2_,0x1f,param_5,param_6);
    goto LAB_1000_4508;
  }
  if (param_3 != 0x1005) {
    if (param_3 == 0x1008) {
      if (param_2 != 0x1d) goto switchD_1000_4951_caseD_4;
      uVar9 = FUN_1000_7f8e(unaff_CS,(char *)s_Click_on_______for_About_Box_1008_17ee,0x1008,param_6
                           );
      *param_1 = (int)uVar9;
      ((undefined2 *)param_1)[1] = (int)((ulong)uVar9 >> 0x10);
    }
    else {
      if (param_3 == 0x1009) {
        if (param_2 == 0x1d) {
          param_2 = FUN_1000_6f3e(uVar10);
        }
        else {
          local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
          if (param_2 != 0x1f) goto switchD_1000_4951_caseD_4;
          FUN_1000_7f86(unaff_CS,(undefined2 *)&DAT_1008_1f56,0x1008,0x1f,param_5,param_6);
          FUN_1000_7f66(0x1000,param_5,param_6);
          DAT_1008_1f34 = param_4;
          uVar10 = 0x1008;
          LSTRCPY(0x1000,(char *)s_FloodColor_1008_1984,0x1008,0x1f38);
          param_2 = FUN_1000_76ec(uVar10);
        }
LAB_1000_466e:
        return (ulong)param_2;
      }
      local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
      if (param_3 != 0x1022) goto switchD_1000_4951_caseD_4;
      uVar3 = param_2 & 0xff;
      if (uVar3 == 1) {
        local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
        switch(param_2 >> 8) {
        case 0x17:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelBevelWidth_1008_1872;
          break;
        case 0x18:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelBorderWidth_1008_1884;
          break;
        case 0x19:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelOuterBevel_1008_1897;
          break;
        case 0x1a:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelInnerBevel_1008_18a9;
          break;
        case 0x1b:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelRoundedCorners_1008_18bb;
          break;
        case 0x1c:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelOutline_1008_18d1;
          break;
        case 0x1d:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanel_About__1008_18e0;
          break;
        case 0x1e:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelFloodType_1008_18ef;
          break;
        case 0x1f:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelFloodColor_1008_1900;
          break;
        case 0x20:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelFloodPercent_1008_1912;
          break;
        case 0x21:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelShadowColor_1008_1926;
          break;
        case 0x22:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelFloodShowPct_1008_1939;
          break;
        case 0x23:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelFont3D_1008_194d;
          break;
        case 0x24:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelAlignment_1008_195b;
          break;
        case 0x25:
          uVar10 = 0x50;
          pcVar7 = (char *)s_SSPanelAutosize_1008_196c;
          break;
        default:
          goto switchD_1000_4951_caseD_4;
        }
      }
      else {
        local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
        if ((uVar3 == 2) ||
           (local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a), uVar3 != 3))
        goto switchD_1000_4951_caseD_4;
        uVar10 = 0x43;
        pcVar7 = (char *)s_SSPanel_1008_197c;
      }
      FUN_1000_0776(pcVar7,0x1008,uVar10);
    }
    goto LAB_1000_454a;
  }
  unaff_CS = (char *)0x1000;
  pcVar7 = (char *)0x1000;
  local_a = (undefined2 *)CONCAT22(local_a._2_2_,(undefined2 *)local_a);
  switch(param_2) {
  case 3:
    DAT_1008_17e2 = (undefined2 *)param_1;
    DAT_1008_17e4 = param_1._2_2_;
    break;
  default:
    goto switchD_1000_4951_caseD_4;
  case 8:
    *(undefined2 *)((int)puVar6 + 0x2d) = (undefined2 *)param_1;
    local_a = puVar8;
    INVALIDATERECT(0x1000,0,0,0,param_4);
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    goto switchD_1000_4951_caseD_4;
  case 0x16:
    DAT_1008_17e8 = (undefined2 *)param_1;
    DAT_1008_17ea = param_1._2_2_;
LAB_1000_49d9:
    pcVar7 = (char *)0x1000;
    param_4 = 0;
    uVar10 = 0;
    unaff_SS = in_stack_0000ffd0;
    goto LAB_1000_49e2;
  case 0x19:
    DAT_1008_17d4 = *(undefined1 *)(puVar6 + 2);
    break;
  case 0x1a:
    DAT_1008_17d5 = *(undefined1 *)((int)puVar6 + 5);
    break;
  case 0x1b:
    DAT_1008_17d6 = *(undefined2 *)((int)puVar6 + 9);
    break;
  case 0x1c:
    DAT_1008_17d8 = *(undefined2 *)((int)puVar6 + 7);
    break;
  case 0x1e:
    DAT_1008_17da = *(undefined1 *)((int)puVar6 + 0xb);
    break;
  case 0x1f:
    iVar4 = FUN_1000_7fee(0x1000);
    uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
    local_a._2_2_ = (int)((ulong)uVar9 >> 0x10);
    if (iVar4 == 1) {
      DAT_1008_1f56 = (undefined2 *)param_1;
      DAT_1008_1f58 = param_1._2_2_;
      goto LAB_1000_454a;
    }
    if ((*(char *)((int)uVar9 + 0xb) == '\0') || (iVar4 == 1)) goto LAB_1000_454a;
    pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    GETCLIENTRECT(0x1000,&local_12,unaff_SS);
    FUN_1000_50d2(&local_12,unaff_SS,param_5,param_6);
    in_stack_0000ffce = &local_12;
    goto LAB_1000_48e1;
  case 0x20:
    iVar4 = FUN_1000_7fee(0x1000);
    uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
    if ((*(char *)((int)uVar9 + 0xb) != '\0') && (iVar4 != 1)) {
      iVar4 = param_4;
      GETCLIENTRECT(0x1000,&local_a,unaff_SS);
      FUN_1000_50d2(&local_a,unaff_SS,param_5,param_6);
      INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,&local_a,unaff_SS
                     ,param_4);
      DAT_1008_1468 = 1;
      UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,iVar4);
      DAT_1008_1468 = 0;
    }
    goto LAB_1000_454a;
  case 0x21:
    DAT_1008_17e6 = *(undefined1 *)(puVar6 + 3);
    pcVar7 = unaff_CS;
    break;
  case 0x22:
    DAT_1008_17e0 = puVar6[9];
    if (*(char *)((int)puVar6 + 0xb) != '\0') {
      pcVar7 = (char *)0x1000;
      iVar4 = FUN_1000_7fee(0x1000);
      if (iVar4 != 1) break;
    }
    goto LAB_1000_454a;
  case 0x23:
    DAT_1008_17e7 = *(undefined1 *)(puVar6 + 0xd);
    iVar4 = ISWINDOW(0x1000,param_4);
    pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    if (iVar4 != 0) break;
    goto LAB_1000_454a;
  case 0x24:
    DAT_1008_17ec = *(undefined1 *)((int)puVar6 + 0x1b);
    pcVar7 = unaff_CS;
    break;
  case 0x25:
    DAT_1008_17ed = *(undefined1 *)(puVar6 + 0xe);
    pcVar7 = unaff_CS;
  }
LAB_1000_48dd:
  unaff_SS = 0;
  in_stack_0000ffce = (int *)0x0;
LAB_1000_48e1:
  uVar10 = 1;
LAB_1000_49e2:
  INVALIDATERECT(pcVar7,uVar10,in_stack_0000ffce,unaff_SS,param_4);
LAB_1000_454a:
  uVar3 = 0;
LAB_1000_450b:
  return (ulong)uVar3;
switchD_1000_4951_caseD_4:
  local_6 = FUN_1000_7f6e(unaff_CS,(undefined2 *)param_1,param_1._2_2_,param_2,param_3,param_4,
                          param_5,param_6);
  if (param_3 == 2) {
    DAT_1008_1466 = DAT_1008_1466 + -1;
    FUN_1000_06e8(param_4);
    uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
    uVar10 = (undefined2)((ulong)uVar9 >> 0x10);
    iVar4 = (int)uVar9;
    if (*(int *)(iVar4 + 0x18) == 0 && *(int *)(iVar4 + 0x16) == 0) {
      return local_6;
    }
    local_a = (undefined2 *)uVar9;
    FUN_1000_7f96(0x1000,*(undefined2 *)(iVar4 + 0x16),*(undefined2 *)(iVar4 + 0x18));
    return local_6;
  }
  if (param_3 != 0x1005) {
    return local_6;
  }
  local_a._2_2_ = 0;
  FUN_1000_7f86(0x1000,(int)&local_a + 2);
  uVar9 = FUN_1000_7f66(0x1000,param_5,param_6);
  if (*(char *)((int)uVar9 + 0x1c) != '\x01') {
    return local_6;
  }
  if (local_a._2_2_ != 0) {
    return local_6;
  }
  INVALIDATERECT(0x1000,0,0,0,param_4);
  UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4);
  return local_6;
}


// ---- FUN_1000_4d44 @ 1000:4d44

void FUN_1000_4d44(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined2 local_a;
  int local_8;
  undefined2 *local_6;
  
  uVar4 = param_3;
  uVar6 = param_4;
  FUN_1000_7f66();
  local_c = FUN_1000_7fee(0x1000,uVar4,uVar6);
  local_6 = (undefined2 *)FUN_1000_7f66(0x1000,param_3,param_4);
  if (*(char *)((undefined2 *)local_6 + 0xe) != '\0') {
    uVar1 = FUN_1000_8246();
    if (0x100 < uVar1) {
      local_8 = 0;
      FUN_1000_7f86(0x1000,&local_8);
      if ((*(char *)((undefined2 *)local_6 + 0xe) == '\x01') && (local_8 != 0)) goto LAB_1000_4db9;
    }
    FUN_1000_5a08(param_1,param_2,param_3,param_4);
  }
LAB_1000_4db9:
  GETCLIENTRECT(0x1000,&local_14,unaff_SS);
  FUN_1000_5e2a(param_2,param_3,param_4);
  if (((*(char *)((int)(undefined2 *)local_6 + 0xb) == '\0') || (DAT_1008_1468 == 0)) ||
     (local_c != 2)) {
    FUN_1000_5092(local_14,local_12,local_10,local_e,param_1,param_3,param_4);
  }
  else {
    COPYRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_14,unaff_SS,
             &local_1c);
    FUN_1000_50d2(&local_1c,unaff_SS,param_3,param_4);
    if (*(char *)((int)(undefined2 *)local_6 + 0xb) == '\x05') {
      uVar6 = CREATERECTRGNINDIRECT
                        ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_1c);
      FUN_1000_530e(&local_1c,unaff_SS,param_3,param_4);
      uVar4 = CREATEELLIPTICRGNINDIRECT
                        ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_1c);
      uVar2 = CREATERECTRGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0);
      local_a = uVar2;
      COMBINERGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,3,uVar4,uVar6);
      uVar4 = (undefined2)((ulong)local_6 >> 0x10);
      uVar5 = FUN_1000_0648(*(undefined2 *)((int)(undefined2 *)local_6 + 0x2f),
                            *(undefined2 *)((int)(undefined2 *)local_6 + 0x31));
      uVar7 = (undefined2)((ulong)uVar5 >> 0x10);
      local_8 = CREATESOLIDBRUSH((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                 (int)uVar5);
      uVar4 = param_1;
      FILLRGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8,local_a);
      DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8,uVar4,uVar7,
                   uVar2);
      DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_a);
      DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar6);
    }
    else {
      FUN_1000_530e(&local_1c,unaff_SS,param_3,param_4);
      EXCLUDECLIPRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_16,local_18,
                      local_1a,local_1c);
      FUN_1000_5092(local_14,local_12,local_10,local_e,param_1,param_3,param_4);
      local_8 = CREATERECTRGNINDIRECT
                          ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_14);
      SELECTCLIPRGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
    }
    DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
  }
  uVar4 = (undefined2)((ulong)local_6 >> 0x10);
  if (*(int *)((int)(undefined2 *)local_6 + 7) != 0) {
    FUN_1000_0128(*(undefined2 *)((int)(undefined2 *)local_6 + 9),local_14,local_12,local_10,local_e
                  ,param_1);
    FUN_1000_02c0(1,1,1,1,1,&local_14,unaff_SS);
  }
  uVar4 = (undefined2)((ulong)local_6 >> 0x10);
  puVar3 = (undefined2 *)local_6;
  if (*(char *)(puVar3 + 3) == '\0') {
    local_a = 0x8080;
    local_8 = 0x80;
  }
  else {
    local_8 = 0;
    local_a = 0;
  }
  if (*(char *)(puVar3 + 2) == '\x01') {
    uVar4 = *local_6;
    uVar6 = 0;
LAB_1000_4f95:
    FUN_1000_0306(local_a,local_8,uVar6,uVar4,local_14,local_12,local_10,local_e,param_1);
    FUN_1000_02c0(1,1,1,1,*local_6,&local_14,unaff_SS);
  }
  else if (*(char *)(puVar3 + 2) == '\x02') {
    uVar4 = *local_6;
    uVar6 = 1;
    goto LAB_1000_4f95;
  }
  uVar4 = (undefined2)((ulong)local_6 >> 0x10);
  puVar3 = (undefined2 *)local_6;
  if (*(char *)((int)puVar3 + 5) == '\x01') {
    FUN_1000_02c0(1,1,1,1,puVar3[1],&local_14,unaff_SS);
    uVar4 = *local_6;
    uVar6 = 0;
  }
  else {
    if (*(char *)((int)puVar3 + 5) != '\x02') goto LAB_1000_5042;
    FUN_1000_02c0(1,1,1,1,puVar3[1],&local_14,unaff_SS);
    uVar4 = *local_6;
    uVar6 = 1;
  }
  FUN_1000_0306(local_a,local_8,uVar6,uVar4,local_14,local_12,local_10,local_e,param_1);
  FUN_1000_02c0(1,1,1,1,*local_6,&local_14,unaff_SS);
LAB_1000_5042:
  if (*(char *)((int)(undefined2 *)local_6 + 0xb) == '\0') {
    FUN_1000_56f8(local_14,local_12,local_10,local_e,param_1,param_3,param_4);
  }
  else if (local_c != 1) {
    FUN_1000_5140(local_14,local_12,local_10,local_e,param_2,param_1,param_3,param_4);
    return;
  }
  return;
}


// ---- FUN_1000_5092 @ 1000:5092

void FUN_1000_5092(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  
  puVar6 = &stack0x0002;
  uVar4 = in_stack_0000000c;
  uVar5 = in_stack_0000000e;
  uVar2 = FUN_1000_7f66();
  uVar1 = (undefined2)((ulong)uVar2 >> 0x10);
  uVar2 = FUN_1000_0648(*(undefined2 *)((int)uVar2 + 0x2f),*(undefined2 *)((int)uVar2 + 0x31));
  uVar3 = (undefined2)((ulong)uVar2 >> 0x10);
  uVar1 = CREATESOLIDBRUSH(0x1000,(int)uVar2);
  FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar3,uVar4);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar5,puVar6);
  return;
}


// ---- FUN_1000_50d2 @ 1000:50d2

void FUN_1000_50d2(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  int local_6;
  int local_4;
  
  piVar3 = (int *)FUN_1000_7f66();
  uVar2 = (undefined2)((ulong)piVar3 >> 0x10);
  piVar1 = (int *)piVar3;
  if ((char)piVar1[2] == '\0') {
    local_6 = 0;
  }
  else {
    local_6 = *piVar3;
  }
  if (*(char *)((int)piVar1 + 5) == '\0') {
    local_4 = 0;
  }
  else {
    local_4 = piVar1[1] + *piVar3;
  }
  FUN_1000_02c0(1,1,1,1,local_4 + local_6 + (uint)(*(int *)((int)piVar1 + 7) != 0),param_1,param_2);
  return;
}


// ---- FUN_1000_5140 @ 1000:5140

void FUN_1000_5140(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined2 local_8;
  undefined4 local_6;
  
  local_6 = FUN_1000_7f66();
  COPYRECT(0x1000,&param_1,unaff_SS,&local_1e);
  FUN_1000_530e(&param_1,unaff_SS,param_7,param_8);
  uVar6 = local_6;
  if (*(int *)((int)local_6 + 0x12) != 0) {
    FUN_1000_55f8(&local_16,unaff_SS,local_1e,local_1c,local_1a,local_18,param_6,param_7,param_8);
    uVar5 = GETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_14,local_16);
    uVar6 = local_6;
    if ((*(int *)((int)local_6 + 0xc) == (int)uVar5) &&
       (*(int *)((int)local_6 + 0xe) == (int)((ulong)uVar5 >> 0x10))) {
      uVar5 = GETPIXEL((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_10,local_12
                      );
      uVar6 = local_6;
      if ((*(int *)((int)local_6 + 0xc) == (int)uVar5) &&
         (*(int *)((int)local_6 + 0xe) == (int)((ulong)uVar5 >> 0x10))) goto LAB_1000_5203;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar6 >> 0x10);
    local_6._0_2_ = (int)uVar6;
    puVar7 = &local_16;
    puVar1 = (undefined2 *)((int)local_6 + 0x31);
    puVar2 = (undefined2 *)((int)local_6 + 0x2f);
    local_6 = uVar6;
    uVar6 = FUN_1000_0648(*puVar2,*puVar1);
    uVar4 = (undefined2)((ulong)uVar6 >> 0x10);
    uVar3 = CREATESOLIDBRUSH((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,(int)uVar6)
    ;
    FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3,uVar4,puVar7);
    DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
    uVar6 = local_6;
  }
LAB_1000_5203:
  local_6._2_2_ = (undefined2)((ulong)uVar6 >> 0x10);
  local_6._0_2_ = (int)uVar6;
  puVar1 = (undefined2 *)((int)local_6 + 0xe);
  puVar2 = (undefined2 *)((int)local_6 + 0xc);
  local_6 = uVar6;
  local_c = FUN_1000_0648(*puVar2,*puVar1);
  local_8 = CREATESOLIDBRUSH((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                             (int)local_c);
  if (*(char *)((int)local_6 + 0xb) == '\x05') {
    uVar3 = CREATEPEN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c,1);
    uVar4 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
    local_e = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
    ELLIPSE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_3,param_2,
            param_1);
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar4);
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_e);
  }
  else {
    uVar3 = CREATERECTRGNINDIRECT
                      ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_1);
    FILLRGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8,uVar3);
  }
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
  if (*(int *)((int)local_6 + 0x12) != 0) {
    if (*(int *)((int)local_6 + 0x14) != 0) {
      local_8 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                             *(undefined2 *)((int)local_6 + 0x14));
      FUN_1000_557a(local_16,local_14,local_12,local_10,param_6,param_7,param_8);
      SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
      return;
    }
    FUN_1000_557a(local_16,local_14,local_12,local_10,param_6,param_7,param_8);
  }
  return;
}


// ---- FUN_1000_530e @ 1000:530e

void FUN_1000_530e(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  uint local_16;
  uint local_12;
  uint local_a;
  uint local_6;
  
  uVar14 = FUN_1000_7f66();
  uVar3 = (undefined2)((ulong)uVar14 >> 0x10);
  iVar1 = (int)uVar14;
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  puVar9 = (uint *)param_1;
  local_16 = *param_1;
  local_12 = puVar9[1];
  local_a = puVar9[3];
  iVar4 = (int)local_a >> 0xf;
  local_6 = puVar9[2];
  iVar5 = (int)local_6 >> 0xf;
  if (*(char *)(iVar1 + 0xb) == '\x01') {
    uVar16 = 0;
    uVar15 = 100;
    uVar14 = FUN_1000_85aa(local_6 - local_16,
                           (iVar5 - ((int)local_16 >> 0xf)) - (uint)(local_6 < local_16),
                           *(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x10) >> 0xf);
    iVar1 = FUN_1000_8510(uVar14,uVar15,uVar16);
    local_6 = iVar1 + local_16;
  }
  else if (*(char *)(iVar1 + 0xb) == '\x02') {
    uVar16 = 0;
    uVar15 = 100;
    iVar1 = 100 - *(int *)(iVar1 + 0x10);
    uVar14 = FUN_1000_85aa(local_6 - local_16,
                           (iVar5 - ((int)local_16 >> 0xf)) - (uint)(local_6 < local_16),iVar1,
                           iVar1 >> 0xf);
    iVar1 = FUN_1000_8510(uVar14,uVar15,uVar16);
    local_16 = local_16 + iVar1;
  }
  else if (*(char *)(iVar1 + 0xb) == '\x03') {
    uVar16 = 0;
    uVar15 = 100;
    uVar14 = FUN_1000_85aa(local_a - local_12,
                           (iVar4 - ((int)local_12 >> 0xf)) - (uint)(local_a < local_12),
                           *(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x10) >> 0xf);
    iVar1 = FUN_1000_8510(uVar14,uVar15,uVar16);
    local_a = iVar1 + local_12;
  }
  else {
    if (*(char *)(iVar1 + 0xb) != '\x04') {
      uVar12 = local_16 - 1;
      uVar11 = local_12 - 1;
      iVar6 = (int)uVar12 >> 0xf;
      iVar10 = (iVar5 - iVar6) - (uint)(local_6 < uVar12);
      iVar7 = (int)uVar11 >> 0xf;
      iVar8 = (iVar4 - iVar7) - (uint)(local_a < uVar11);
      if ((iVar10 < iVar8) || ((iVar10 <= iVar8 && (local_6 - uVar12 <= local_a - uVar11)))) {
        iVar10 = (iVar5 - iVar6) - (uint)(local_6 < uVar12);
        iVar8 = (iVar4 - iVar7) - (uint)(local_a < uVar11);
        if ((iVar10 <= iVar8) && ((iVar10 < iVar8 || (local_6 - uVar12 < local_a - uVar11)))) {
          uVar2 = (local_a - local_6) - uVar11;
          iVar4 = FUN_1000_8510(uVar2 + uVar12,
                                ((((iVar4 - iVar5) - (uint)(local_a < local_6)) - iVar7) -
                                (uint)(local_a - local_6 < uVar11)) + iVar6 +
                                (uint)CARRY2(uVar2,uVar12),2,0);
          local_12 = iVar4 + uVar11;
          local_a = local_12 + (local_6 - uVar12);
        }
      }
      else {
        uVar2 = (local_6 - local_a) - uVar12;
        iVar4 = FUN_1000_8510(uVar2 + uVar11,
                              ((((iVar5 - iVar4) - (uint)(local_6 < local_a)) - iVar6) -
                              (uint)(local_6 - local_a < uVar12)) + iVar7 +
                              (uint)CARRY2(uVar2,uVar11),2,0);
        local_16 = iVar4 + uVar12;
        local_6 = (local_16 + local_a) - uVar11;
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      *param_1 = local_16;
      puVar9[1] = local_12;
      puVar9[3] = local_a;
      puVar9[2] = local_6;
      FUN_1000_02c0(1,1,1,1,(int)((local_6 - local_16) - (int)((local_6 - local_16) * iVar1) / 100)
                            / 2,puVar9,uVar13);
      return;
    }
    uVar16 = 0;
    uVar15 = 100;
    iVar1 = 100 - *(int *)(iVar1 + 0x10);
    uVar14 = FUN_1000_85aa(local_a - local_12,
                           (iVar4 - ((int)local_12 >> 0xf)) - (uint)(local_a < local_12),iVar1,
                           iVar1 >> 0xf);
    iVar1 = FUN_1000_8510(uVar14,uVar15,uVar16);
    local_12 = local_12 + iVar1;
  }
  *param_1 = local_16;
  puVar9[1] = local_12;
  puVar9[3] = local_a;
  puVar9[2] = local_6;
  return;
}


// ---- FUN_1000_557a @ 1000:557a

void FUN_1000_557a(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
  undefined1 local_58 [80];
  undefined2 local_8;
  undefined2 local_4;
  
  uVar2 = FUN_1000_7f66();
  uVar1 = (undefined2)((ulong)uVar2 >> 0x10);
  local_58[0] = 0;
  local_4 = uVar1;
  _WSPRINTF(0x1000,local_58);
  uVar2 = FUN_1000_0648(*(undefined2 *)((int)uVar2 + 0x33),*(undefined2 *)((int)uVar2 + 0x35));
  SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2);
  local_8 = SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
  DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x25,&stack0x0002,unaff_SS,
           0xffff,local_58,unaff_SS);
  SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
  return;
}


// ---- FUN_1000_55f8 @ 1000:55f8

void FUN_1000_55f8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 local_60 [80];
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_a;
  undefined2 local_4;
  
  pcVar4 = (char *)0x1000;
  uVar5 = FUN_1000_7f66();
  local_4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar2 = (int)uVar5;
  if (*(int *)(iVar2 + 0x14) != 0) {
    pcVar4 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    local_c = SELECTOBJECT(0x1000,*(undefined2 *)(iVar2 + 0x14));
  }
  local_60[0] = 0;
  _WSPRINTF(pcVar4,local_60);
  puVar6 = local_60;
  uVar1 = LSTRLEN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,puVar6);
  local_10 = GETTEXTEXTENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,
                           unaff_SS,puVar6);
  if (*(int *)(iVar2 + 0x14) != 0) {
    local_a = local_10;
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c);
    local_10 = local_a;
  }
  local_a._2_2_ = (int)((ulong)local_10 >> 0x10);
  local_a._0_2_ = (int)local_10;
  iVar2 = (param_4 - param_2) + 1;
  iVar3 = (param_5 - param_3) + 1;
  if ((int)local_a < iVar2) {
    param_2 = (iVar2 - (int)local_a) / 2 + param_2;
    *param_1 = param_2;
    ((int *)param_1)[2] = param_2 + (int)local_a;
  }
  else {
    *param_1 = param_2;
    ((int *)param_1)[2] = param_4;
  }
  if (local_a._2_2_ < iVar3) {
    param_3 = (iVar3 - local_a._2_2_) / 2 + param_3;
    ((int *)param_1)[1] = param_3;
    param_5 = param_3 + local_a._2_2_;
  }
  else {
    ((int *)param_1)[1] = param_3;
  }
  ((int *)param_1)[3] = param_5;
  return;
}


// ---- FUN_1000_56f8 @ 1000:56f8

void FUN_1000_56f8(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int local_44 [16];
  undefined1 local_24 [8];
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined2 local_4;
  
  uVar9 = param_6;
  uVar3 = param_6;
  uVar10 = param_7;
  uVar7 = FUN_1000_7f66();
  local_4 = (undefined2)((ulong)uVar7 >> 0x10);
  iVar1 = (int)uVar7;
  if (*(int *)(iVar1 + 0x18) == 0 && *(int *)(iVar1 + 0x16) == 0) {
    return;
  }
  local_a = FUN_1000_7f9e(0x1000,*(undefined2 *)(iVar1 + 0x16),*(undefined2 *)(iVar1 + 0x18),uVar3,
                          uVar10);
  uVar7 = FUN_1000_7f66(0x1000,uVar9,param_7);
  local_4 = (undefined2)((ulong)uVar7 >> 0x10);
  iVar1 = (int)uVar7;
  iVar2 = LSTRLEN(0x1000,(undefined2)local_a);
  if (iVar2 < 1) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    local_14 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                            *(undefined2 *)(iVar1 + 0x14));
  }
  local_12 = FUN_1000_0648(*(undefined2 *)(iVar1 + 0x2f),*(undefined2 *)(iVar1 + 0x31));
  COPYRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_1,unaff_SS,local_24);
  LPTODP((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,local_24,unaff_SS);
  uVar3 = CREATERECTRGNINDIRECT
                    ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_24);
  SELECTCLIPRGN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
  uVar9 = 0x57ba;
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
  if (((*(char *)(iVar1 + 0x1b) == '\0') || (*(char *)(iVar1 + 0x1b) == '\x01')) ||
     (*(char *)(iVar1 + 0x1b) == '\x02')) {
    uVar4 = 0;
  }
  else if (((*(char *)(iVar1 + 0x1b) == '\x03') || (*(char *)(iVar1 + 0x1b) == '\x04')) ||
          (*(char *)(iVar1 + 0x1b) == '\x05')) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  if (*(char *)(iVar1 + 0x1c) == '\x02') {
    uVar5 = uVar4 | 0x10;
    param_4 = param_4 + 1;
  }
  else {
    COPYRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&param_1,unaff_SS,&local_1c
            );
    uVar9 = param_5;
    if (*(char *)(iVar1 + 0x1c) == '\x01') {
      uVar5 = uVar4 | 0x20;
      GETTEXTMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_44,unaff_SS);
      iVar2 = local_44[0] + param_2 + 1;
LAB_1000_5881:
      param_4 = iVar2;
    }
    else {
      uVar5 = uVar4 | 0x10;
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar4 | 0x410,&param_1,
               unaff_SS,0xffff,local_a);
      param_1 = local_1c;
      param_3 = local_18;
      if (param_2 < local_1a) {
        param_2 = local_1a;
      }
      param_4 = param_4 + 1;
      iVar2 = local_16;
      if (local_16 < param_4) goto LAB_1000_5881;
    }
    if (((*(char *)(iVar1 + 0x1b) == '\x02') || (*(char *)(iVar1 + 0x1b) == '\x05')) ||
       (*(char *)(iVar1 + 0x1b) == '\b')) {
      param_2 = param_4 - param_2;
      param_4 = local_16;
      param_2 = (local_16 - param_2) + -1;
    }
    else if (((*(char *)(iVar1 + 0x1b) == '\x01') || (*(char *)(iVar1 + 0x1b) == '\x04')) ||
            (*(char *)(iVar1 + 0x1b) == '\a')) {
      local_e._2_2_ = param_4 - param_2;
      param_4 = (local_16 - local_1a) / 2 + local_e._2_2_ / 2 + local_1a;
      param_2 = param_4 - local_e._2_2_;
    }
  }
  pcVar6 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
  if (*(int *)(iVar1 + 0x2d) == 0) {
    pcVar6 = (char *)0x1000;
    iVar2 = FUN_1000_7fee((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar9);
    if (iVar2 != 1) {
      lVar8 = GETSYSCOLOR(0x1000,0x11);
      if (lVar8 == 0xc0c0c0) {
        DAT_1008_1f32 = *(undefined2 *)(iVar1 + 0x14);
        DAT_1008_1f30 = param_3 - param_1;
        DAT_1008_1f28 = param_4 - param_2;
        DAT_1008_1f36 = uVar5;
        uVar9 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,4,param_5
                              );
        GRAYSTRING((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1f28,
                   DAT_1008_1f30,param_2,param_1,0,local_a,0x668,0x1000,uVar9);
      }
      else {
        uVar7 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x11,param_5
                           );
        local_e = SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar7);
        FUN_1000_7436(local_12,0,uVar5,
                      CONCAT11((char)((uint)&param_1 >> 8),*(undefined1 *)(iVar1 + 0x1a)),&param_1,
                      unaff_SS,local_a,param_5);
        SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_e);
      }
      goto LAB_1000_59ec;
    }
  }
  uVar7 = FUN_1000_0648(*(undefined2 *)(iVar1 + 0x33),*(undefined2 *)(iVar1 + 0x35));
  SETTEXTCOLOR(pcVar6,uVar7);
  FUN_1000_7436(local_12,0,uVar5,CONCAT11((char)((uint)&param_1 >> 8),*(undefined1 *)(iVar1 + 0x1a))
                ,&param_1,unaff_SS,local_a,param_5);
LAB_1000_59ec:
  if (*(int *)(iVar1 + 0x14) != 0) {
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_14);
  }
  return;
}


// ---- FUN_1000_5a08 @ 1000:5a08

void FUN_1000_5a08(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  int *piVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  uint local_12;
  undefined2 local_10;
  undefined4 local_e;
  int local_a;
  int local_8;
  undefined2 local_4;
  
  uVar4 = param_3;
  uVar8 = param_4;
  piVar5 = (int *)FUN_1000_7f66();
  local_4 = (undefined2)((ulong)piVar5 >> 0x10);
  piVar1 = (int *)piVar5;
  if ((char)piVar1[0xe] != '\0') {
    if ((char)piVar1[0xe] == '\x03') {
      if ((0 < *piVar5) && ((*(char *)((int)piVar1 + 5) != '\0' || ((char)piVar1[2] != '\0')))) {
        FUN_1000_5bfa(param_2,param_3,param_4);
        return;
      }
    }
    else if (piVar1[0xc] != 0 || piVar1[0xb] != 0) {
      local_e = FUN_1000_7f9e(0x1000,piVar1[0xb],piVar1[0xc],uVar4,uVar8);
      uVar6 = FUN_1000_7f66(0x1000,param_3,param_4);
      local_4 = (undefined2)((ulong)uVar6 >> 0x10);
      iVar2 = (int)uVar6;
      iVar3 = LSTRLEN(0x1000,(undefined2)local_e);
      if (0 < iVar3) {
        GETCLIENTRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_1a,unaff_SS
                     );
        local_8 = local_16 - local_1a;
        local_a = local_14 - local_18;
        FUN_1000_50d2(&local_1a,unaff_SS,param_3,param_4);
        if (local_16 == local_1a) {
          local_16 = local_16 + 1;
        }
        if (local_14 == local_18) {
          local_14 = local_14 + 1;
        }
        if (*(char *)(iVar2 + 0x1c) == '\x01') {
          local_12 = 0x20;
          iVar3 = local_16;
        }
        else {
          local_12 = 0x10;
          iVar3 = local_14;
        }
        uVar6 = local_e;
        if (*(int *)(iVar2 + 0x14) != 0) {
          local_10 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                  *(undefined2 *)(iVar2 + 0x14));
          uVar6 = local_e;
        }
        local_e._2_2_ = (undefined2)((ulong)uVar6 >> 0x10);
        uVar4 = local_e._2_2_;
        uVar8 = param_1;
        local_e = uVar6;
        DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_12 | 0x401,
                 &local_1a,unaff_SS,0xffff,uVar6);
        if (*(int *)(iVar2 + 0x14) != 0) {
          SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_10);
          uVar4 = param_1;
        }
        local_14 = local_14 + 1;
        if (*(char *)(iVar2 + 0x1c) == '\x01') {
          if (local_16 == iVar3) {
            return;
          }
          local_8 = local_8 + (local_16 - iVar3);
        }
        else {
          if (local_14 == iVar3) {
            return;
          }
          local_a = local_a + (local_14 - iVar3);
        }
        if (*(int *)(iVar2 + 0x2b) == 0) {
          uVar7 = param_2;
          GETWINDOWRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_1a,
                        unaff_SS);
          *(int *)(iVar2 + 0x1d) = local_1a;
          *(int *)(iVar2 + 0x27) = local_1a;
          *(int *)(iVar2 + 0x1f) = local_18;
          *(int *)(iVar2 + 0x29) = local_18;
          uVar4 = GETPARENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2,
                            uVar7,uVar4,uVar8);
          SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar2 + 0x1d,
                         local_4);
          GETPARENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_2,uVar4);
          SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar2 + 0x27,
                         local_4);
          *(undefined2 *)(iVar2 + 0x2b) = 1;
        }
        MOVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,local_a,local_8,
                   *(undefined2 *)(iVar2 + 0x1f),*(undefined2 *)(iVar2 + 0x1d));
      }
    }
  }
  return;
}


// ---- FUN_1000_5bfa @ 1000:5bfa

void FUN_1000_5bfa(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
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
  undefined2 local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  undefined4 local_6;
  
  uVar6 = param_2;
  uVar8 = param_3;
  uVar4 = FUN_1000_7f66();
  local_12 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar1 = (int)uVar4;
  uVar7 = param_1;
  GETCLIENTRECT(0x1000,&local_20,unaff_SS);
  local_e = local_1c - local_20;
  local_10 = local_1a - local_1e;
  FUN_1000_50d2(&local_20,unaff_SS,param_2,param_3);
  local_c = local_1c - local_20;
  local_a = local_1a - local_1e;
  uVar2 = FUN_1000_8246(uVar7,uVar6,uVar8);
  if (uVar2 < 0x200) {
    DAT_1008_1f2e = 0;
    pcVar3 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
    ENUMCHILDWINDOWS(0x1000,param_1,0,0x5dcc,0x1000);
    if (DAT_1008_1f2e == 0) {
      return;
    }
  }
  else {
    local_6 = FUN_1000_8136(0x1000,5,param_2,param_3);
    if (local_6 == 0) {
      return;
    }
    lVar5 = FUN_1000_8136(0x1000,2,local_6);
    if (lVar5 != 0) {
      return;
    }
    pcVar3 = (char *)0x1000;
    DAT_1008_1f2e = FUN_1000_7fb6(0x1000,local_6);
    if (DAT_1008_1f2e == 0) {
      FUN_1000_8146(0x1000,1,&local_20);
      return;
    }
  }
  GETWINDOWRECT(pcVar3,&local_28,unaff_SS);
  local_6._0_2_ = local_24 - local_28;
  local_8 = local_22 - local_26;
  local_18 = local_28;
  local_16 = local_26;
  SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_18,unaff_SS);
  if (((((int)local_6 != local_c) || (local_8 != local_a)) || (local_18 != local_20)) ||
     (local_16 != local_1e)) {
    MOVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,local_a,local_c,
               local_1e,local_20);
    GETWINDOWRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_28,unaff_SS);
    local_6._2_2_ = local_24 - local_28;
    local_22 = local_22 - local_26;
    if ((local_6._2_2_ != local_c) || (local_a != local_22)) {
      local_e = local_e + (local_6._2_2_ - local_c);
      local_10 = local_10 + (local_22 - local_a);
      FUN_1000_0440(1,local_10,local_e,param_1);
      if ((*(int *)(iVar1 + 0x25) == 0) ||
         (((int)local_6 != local_6._2_2_ || (local_8 != local_22)))) {
        uVar7 = *(undefined2 *)(iVar1 + 0x1d);
        uVar6 = *(undefined2 *)(iVar1 + 0x1f);
      }
      else {
        uVar7 = *(undefined2 *)(iVar1 + 0x27);
        uVar6 = *(undefined2 *)(iVar1 + 0x29);
      }
      MOVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,local_10,local_e,
                 uVar6,uVar7);
    }
  }
  return;
}


// ---- SSPNENUMCHILDREN @ 1000:5dcc

undefined2 __stdcall16far SSPNENUMCHILDREN(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_SS;
  bool bVar2;
  undefined1 local_20 [30];
  
  iVar1 = GETPARENT();
  if (param_1 == iVar1) {
    local_20[0] = 0;
    GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_20,unaff_SS)
    ;
    iVar1 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                     (char *)s_wndclass_flex_gsk_1008_1999,0x1008,local_20);
    if ((iVar1 != 0) && (bVar2 = DAT_1008_1f2e != 0, DAT_1008_1f2e = param_3, bVar2)) {
      DAT_1008_1f2e = 0;
      return 0;
    }
  }
  return 1;
}


// ---- FUN_1000_5e2a @ 1000:5e2a

void FUN_1000_5e2a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  undefined2 local_4;
  
  uVar4 = FUN_1000_7f66();
  local_4 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  uVar3 = param_1;
  GETCLIENTRECT(0x1000,&local_e,unaff_SS);
  uVar1 = local_4;
  *(int *)(iVar2 + 0x1d) = local_e;
  *(int *)(iVar2 + 0x27) = local_e;
  *(int *)(iVar2 + 0x1f) = local_c;
  *(int *)(iVar2 + 0x29) = local_c;
  uVar5 = param_1;
  CLIENTTOSCREEN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar2 + 0x1d,local_4);
  uVar3 = GETPARENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1,uVar5,uVar3,
                    param_2,param_3);
  SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar2 + 0x1d,uVar1);
  uVar5 = param_1;
  CLIENTTOSCREEN((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar2 + 0x27,uVar1);
  GETPARENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1,uVar5,uVar3);
  SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar2 + 0x27,uVar1);
  *(int *)(iVar2 + 0x23) = local_8 - local_c;
  *(int *)(iVar2 + 0x21) = local_a - local_e;
  return;
}


// ---- SSRICTLPROC @ 1000:5ed2

ulong __stdcall16far
SSRICTLPROC(undefined2 *param_1,undefined2 param_2,uint param_3,uint param_4,int param_5,int param_6
           ,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  char *unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 local_36 [3];
  undefined1 local_30 [2];
  int local_2e;
  int local_2c;
  char local_22 [12];
  undefined1 local_16 [8];
  undefined2 *local_e;
  undefined2 local_c;
  undefined4 local_a;
  ulong local_6;
  
  uVar12 = 0x1008;
  if (param_7 != 0 || param_6 != 0) {
    unaff_CS = (char *)0x1000;
    local_a = (int *)FUN_1000_7f66();
  }
  piVar5 = (int *)local_a;
  if (param_4 == 0x202) {
    if (piVar5[10] == 0) goto switchD_1000_6460_caseD_9;
    if (DAT_1008_19ac != 0) {
      iVar2 = GETCAPTURE(unaff_CS);
      if (iVar2 == param_5) {
        RELEASECAPTURE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24);
      }
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      DAT_1008_19ac = 0;
    }
    local_a = (int *)FUN_1000_7f66(unaff_CS,param_6,param_7);
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    unaff_CS = (char *)0x1000;
    if (*(int *)((int)(int *)local_a + 7) != 0) goto switchD_1000_6460_caseD_9;
    *(undefined2 *)((int)(int *)local_a + 7) = 1;
    iVar2 = *local_a;
    iVar3 = param_5;
    iVar10 = param_6;
    iVar11 = param_7;
    if (iVar2 != -1) {
      uVar12 = FUN_1000_6dd8(param_6,param_7);
    }
    else {
      uVar12 = FUN_1000_6dd8(param_6,param_7);
    }
    FUN_1000_6d44(iVar2 == -1,1,uVar12,iVar3,iVar10,iVar11);
    iVar2 = ISWINDOW(0x1000,param_5);
    if (iVar2 != 0) {
      unaff_CS = (char *)0x1000;
      lVar8 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5);
      if (lVar8 == CONCAT22(param_7,param_6)) goto switchD_1000_6460_caseD_9;
    }
    goto LAB_1000_5fde;
  }
  if (param_4 < 0x203) {
    if (param_4 != 0x14) {
      if (0x14 < param_4) {
        if (param_4 == 0x81) {
          DAT_1008_1466 = DAT_1008_1466 + 1;
          iVar2 = FUN_1000_7fee(unaff_CS);
          if (iVar2 == 1) {
            piVar7 = (int *)FUN_1000_7f66(0x1000,param_6,param_7);
            uVar1 = (uint)((ulong)piVar7 >> 0x10);
            piVar5 = (int *)piVar7;
            local_a = (int *)((ulong)uVar1 << 0x10);
            *(undefined2 *)((int)piVar5 + 3) = DAT_1008_19b0;
            *(undefined2 *)((int)piVar5 + 5) = DAT_1008_19b2;
            *(undefined2 *)((int)piVar5 + 9) = DAT_1008_19b4;
            *(undefined1 *)((int)piVar5 + 0xb) = DAT_1008_19b6;
            *(undefined1 *)(piVar5 + 1) = DAT_1008_19b7;
            piVar5[0xd] = (int)DAT_1008_19b8;
            piVar5[0xe] = DAT_1008_19ba;
            piVar5[0xf] = -0x3f40;
            piVar5[0x10] = 0xc0;
          }
          local_a = (int *)CONCAT22(local_a._2_2_,piVar5);
          *(undefined2 *)((int)piVar5 + 7) = 1;
          *piVar5 = 0;
          piVar5[8] = 0;
          piVar5[10] = 1;
          piVar5[0xb] = 0;
          piVar5[0xc] = 0;
          piVar5[0x11] = 0;
LAB_1000_6109:
          unaff_CS = (char *)0x1000;
          goto switchD_1000_6460_caseD_9;
        }
        if (param_4 == 0x200) {
          if (DAT_1008_19ac == 0) goto switchD_1000_6460_caseD_9;
          local_e = param_1;
          local_c = param_2;
          GETCLIENTRECT(unaff_CS,local_16,unaff_SS);
          iVar2 = PTINRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_e,
                           local_c,local_16);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          if (iVar2 == 0) {
            if (DAT_1008_19ae == 0) {
              *(undefined2 *)((int)(int *)local_a + 7) = 1;
              INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,
                             param_5);
              UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5);
              DAT_1008_19ae = 1;
              unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            }
            goto switchD_1000_6460_caseD_9;
          }
          if (DAT_1008_19ae == 0) goto switchD_1000_6460_caseD_9;
          *(undefined2 *)((int)(int *)local_a + 7) = 0;
          INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,0,param_5);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5);
LAB_1000_619c:
          DAT_1008_19ae = 0;
          goto switchD_1000_6460_caseD_9;
        }
        if (param_4 != 0x201) goto switchD_1000_6460_caseD_9;
LAB_1000_61a6:
        if (piVar5[10] != 0) {
          if (DAT_1008_19ac == 0) {
            unaff_CS = (char *)0x1000;
            iVar2 = FUN_1000_8246();
            if (iVar2 == 0x100) {
              unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              SETCAPTURE(0x1000,param_5);
            }
            DAT_1008_19ac = 1;
            DAT_1008_19ae = 0;
          }
          local_a = (int *)FUN_1000_7f66(unaff_CS,param_6,param_7);
          *(undefined2 *)((int)(int *)local_a + 7) = 0;
          unaff_CS = (char *)0x1000;
          if (*local_a == 0) {
            INVALIDATERECT(0x1000,1,0,0,param_5);
            UPDATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5);
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          }
        }
        goto switchD_1000_6460_caseD_9;
      }
      if (param_4 == 0xf) {
        if (param_3 == 0) {
          BEGINPAINT(unaff_CS,local_36,unaff_SS,param_5);
          FUN_1000_6736(local_36[0],param_5,param_6,param_7);
          ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_36,unaff_SS);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        }
        else {
          FUN_1000_6736(param_3,param_5,param_6,param_7);
        }
        goto switchD_1000_6460_caseD_9;
      }
      if (0xf < param_4) goto switchD_1000_6460_caseD_9;
      if ((char)param_4 == '\x05') {
        if ((piVar5[0xc] != 0) || (iVar2 = FUN_1000_6df4(param_5,param_6,param_7), iVar2 == 0))
        goto switchD_1000_6460_caseD_9;
        goto LAB_1000_5fd3;
      }
      if (((char)param_4 != '\a') || (piVar5[0x11] != 0)) goto switchD_1000_6460_caseD_9;
      uVar12 = GETPARENT(unaff_CS,param_5);
      iVar2 = GETNEXTDLGTABITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,
                                param_5);
      if (iVar2 != param_5) {
        uVar6 = FUN_1000_7f66((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_6,
                              param_7,uVar12);
        uVar12 = (undefined2)((ulong)uVar6 >> 0x10);
        local_a = (int *)CONCAT22(uVar12,(int *)local_a);
        *(undefined2 *)((int)uVar6 + 0x22) = 1;
        SETFOCUS(0x1000,iVar2);
        uVar6 = FUN_1000_7f66((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_6,
                              param_7);
        *(undefined2 *)((int)uVar6 + 0x22) = 0;
      }
    }
    uVar1 = 1;
    goto LAB_1000_5fe0;
  }
  if (param_4 != 0x1005) {
    if (param_4 < 0x1006) {
      if (param_4 == 0x203) goto LAB_1000_61a6;
      if (param_4 == 0x205) {
        iVar2 = FUN_1000_7fee(unaff_CS);
        unaff_CS = (char *)0x1000;
        if (iVar2 != 1) goto switchD_1000_6460_caseD_9;
        local_a = (int *)FUN_1000_7f66(0x1000,param_6,param_7);
        uVar12 = (undefined2)((ulong)local_a >> 0x10);
        piVar5 = (int *)local_a;
        DAT_1008_19b0 = *(undefined2 *)((int)piVar5 + 3);
        DAT_1008_19b2 = *(undefined2 *)((int)piVar5 + 5);
        DAT_1008_19b4 = *(undefined2 *)((int)piVar5 + 9);
        DAT_1008_19b6 = *(undefined1 *)((int)piVar5 + 0xb);
        DAT_1008_19b7 = (undefined1)piVar5[1];
        DAT_1008_19b8 = (undefined2 *)piVar5[0xd];
        DAT_1008_19ba = piVar5[0xe];
        goto LAB_1000_6109;
      }
      if (param_4 != 0x1004) goto switchD_1000_6460_caseD_9;
      unaff_CS = (char *)0x1000;
      switch(param_3) {
      case 0xe:
        FUN_1000_6d44(1,1,param_1,param_5,param_6,param_7);
        break;
      case 0xf:
        if (((int)param_1 < 0) || (99 < (int)param_1)) {
          FUN_1000_8086(0x1000,(char *)s_Group_Number_must_be_from_0_to_9_1008_19d9,0x1008,0x7535);
          uVar1 = 0x7535;
          goto LAB_1000_5fe0;
        }
        break;
      default:
        goto switchD_1000_6460_caseD_9;
      case 0x11:
      case 0x12:
      case 0x17:
        FUN_1000_806e(0x1000,local_22);
        unaff_CS = (char *)0x1000;
        uVar6 = FUN_1000_7f66(0x1000,param_6,param_7);
        uVar12 = (undefined2)((ulong)uVar6 >> 0x10);
        iVar2 = (int)uVar6;
        local_a = (int *)CONCAT22(uVar12,(int *)local_a);
        if (local_22[0] != '\0') {
          if (local_22[0] != '\x01') {
            FUN_1000_8086(0x1000,(char *)s_Only_Picture_Format___BMP__suppo_1008_19fb,0x1008,0x7531)
            ;
            uVar1 = 0x7531;
            goto LAB_1000_5fe0;
          }
          if ((param_3 == 0x11) && (*(char *)(iVar2 + 2) == '\x02')) {
            unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            GETOBJECT(0x1000,local_30,unaff_SS,0xe);
            iVar3 = FUN_1000_6f16(param_6,param_7);
            local_2e = local_2e + iVar3 * 2;
            iVar3 = FUN_1000_6f16(param_6,param_7);
            local_2c = local_2c + iVar3 * 2;
            *(undefined2 *)(iVar2 + 0x18) = 1;
            FUN_1000_0440(1,local_2c,local_2e,param_5);
            *(undefined2 *)(iVar2 + 0x18) = 0;
          }
        }
        if (*(int *)(iVar2 + 0x10) != 0) {
          DELETEOBJECT(unaff_CS,*(undefined2 *)(iVar2 + 0x10));
          *(undefined2 *)(iVar2 + 0x10) = 0;
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        }
        goto LAB_1000_5fd3;
      case 0x18:
        if (((int)param_1 < 0) || (2 < (int)param_1)) {
          FUN_1000_8086(0x1000,(char *)s_Bevel_Width_must_be_from_0_to_2_1008_1a21,0x1008,0x7537);
          uVar1 = 0x7537;
          goto LAB_1000_5fe0;
        }
        DAT_1008_19b8 = param_1;
      }
    }
    else if (param_4 == 0x1008) {
      if (param_3 != 0x16) goto switchD_1000_6460_caseD_9;
      uVar6 = FUN_1000_7f8e(unaff_CS,(char *)s_Click_on_______for_About_Box_1008_19bc,0x1008,param_7
                           );
      *param_1 = (int)uVar6;
      param_1[1] = (int)((ulong)uVar6 >> 0x10);
    }
    else {
      if (param_4 == 0x1009) {
        if (param_3 == 0x16) {
          uVar1 = FUN_1000_6f3e(uVar12);
          return (ulong)uVar1;
        }
        goto switchD_1000_6460_caseD_9;
      }
      if (param_4 == 0x1012) {
        DAT_1008_19ac = 0;
        *(undefined2 *)((int)piVar5 + 7) = 1;
        goto LAB_1000_619c;
      }
      if (param_4 != 0x1022) goto switchD_1000_6460_caseD_9;
      cVar4 = (char)(param_3 >> 8);
      uVar1 = param_3 & 0xff;
      if (uVar1 == 1) {
        switch(cVar4) {
        case '\x0f':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonGroupNumber_1008_1a41;
          break;
        case '\x10':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonGroupAllowAllUp_1008_1a55;
          break;
        case '\x11':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonPictureUp_1008_1a6d;
          break;
        case '\x12':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonPictureDn_1008_1a7f;
          break;
        case '\x13':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonPictureDnChange_1008_1a91;
          break;
        case '\x14':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonAutoSize_1008_1aa9;
          break;
        case '\x15':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonRoundedCorners_1008_1aba;
          break;
        case '\x16':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbon_About__1008_1ad1;
          break;
        case '\x17':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonPictureDisabled_1008_1ae1;
          break;
        case '\x18':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonBevelWidth_1008_1af9;
          break;
        case '\x19':
          uVar12 = 0x50;
          pcVar9 = (char *)s_SSRibbonOutline_1008_1b0c;
          break;
        default:
          goto switchD_1000_6460_caseD_9;
        }
      }
      else if (uVar1 == 2) {
        if (cVar4 != '\0') goto switchD_1000_6460_caseD_9;
        uVar12 = 0x56;
        pcVar9 = (char *)s_SSRibbonClick_1008_1b1c;
      }
      else {
        if (uVar1 != 3) goto switchD_1000_6460_caseD_9;
        uVar12 = 0x43;
        pcVar9 = (char *)s_SSRibbon_1008_1b2a;
      }
      FUN_1000_0776(pcVar9,0x1008,uVar12);
    }
    goto LAB_1000_5fde;
  }
  unaff_CS = (char *)0x1000;
  switch(param_3) {
  case 8:
    piVar5[10] = (int)param_1;
    INVALIDATERECT(0x1000,1,0,0,param_5);
    local_a = (int *)CONCAT22(local_a._2_2_,piVar5);
    unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
  default:
switchD_1000_6460_caseD_9:
    local_6 = FUN_1000_7f6e(unaff_CS,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (param_4 != 2) {
      return local_6;
    }
    DAT_1008_1466 = DAT_1008_1466 + -1;
    FUN_1000_06e8(param_5);
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    if (((int *)local_a)[6] != 0) {
      FUN_1000_8066(0x1000,((int *)local_a)[6]);
      local_a = (int *)FUN_1000_7f66(0x1000,param_6,param_7);
    }
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    if (((int *)local_a)[7] != 0) {
      FUN_1000_8066(0x1000,((int *)local_a)[7]);
      local_a = (int *)FUN_1000_7f66(0x1000,param_6,param_7);
    }
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    if (((int *)local_a)[9] != 0) {
      FUN_1000_8066(0x1000,((int *)local_a)[9]);
      local_a = (int *)FUN_1000_7f66(0x1000,param_6,param_7);
    }
    uVar12 = (undefined2)((ulong)local_a >> 0x10);
    if (((int *)local_a)[8] == 0) {
      return local_6;
    }
    DELETEOBJECT(0x1000,((int *)local_a)[8]);
    return local_6;
  case 0xf:
    iVar2 = FUN_1000_6c9a(param_1,param_5);
    if (iVar2 != 999) {
      uVar6 = FUN_1000_7f66(0x1000,param_6,param_7);
      *(int *)((int)uVar6 + 5) = iVar2;
    }
    break;
  case 0x10:
    DAT_1008_19b2 = *(undefined2 *)((int)piVar5 + 5);
    if (*(int *)((int)piVar5 + 3) != 0) {
      DAT_1008_1f5a = *(undefined2 *)((int)piVar5 + 3);
      FUN_1000_6bfa(*(undefined2 *)((int)piVar5 + 5),*(undefined2 *)((int)piVar5 + 3),param_5);
    }
    break;
  case 0x13:
    DAT_1008_19b6 = *(undefined1 *)((int)piVar5 + 0xb);
    if (piVar5[8] != 0) {
      DELETEOBJECT(0x1000,piVar5[8]);
      piVar5[8] = 0;
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      iVar2 = ISWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_5);
      if (iVar2 != 0) goto LAB_1000_5fd3;
    }
    break;
  case 0x14:
    DAT_1008_19b7 = (undefined1)piVar5[1];
    FUN_1000_6df4(param_5,param_6,param_7);
    break;
  case 0x15:
    DAT_1008_19b4 = *(undefined2 *)((int)piVar5 + 9);
    goto LAB_1000_5fd3;
  case 0x18:
    DAT_1008_19b8 = (undefined2 *)piVar5[0xd];
    goto LAB_1000_6570;
  case 0x19:
    DAT_1008_19ba = piVar5[0xe];
LAB_1000_6570:
    FUN_1000_6df4(param_5,param_6,param_7);
LAB_1000_5fd3:
    INVALIDATERECT(unaff_CS,1,0,0,param_5);
  }
LAB_1000_5fde:
  uVar1 = 0;
LAB_1000_5fe0:
  return (ulong)uVar1;
}


// ---- FUN_1000_6736 @ 1000:6736

void FUN_1000_6736(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar3 = param_3;
  uVar5 = param_4;
  FUN_1000_7f66();
  uVar2 = param_2;
  GETCLIENTRECT(0x1000,&local_e,unaff_SS);
  FUN_1000_685a(local_e,local_c,local_a,local_8,param_1,param_3,param_4);
  local_6 = (int *)FUN_1000_7f66((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_3
                                 ,param_4,uVar2,uVar3,uVar5);
  uVar2 = (undefined2)((ulong)local_6 >> 0x10);
  if (*(int *)((int)local_6 + 0x1c) != 0) {
    FUN_1000_0128(*(undefined2 *)((int)local_6 + 9),local_e,local_c,local_a,local_8,param_1);
    FUN_1000_02c0(1,1,1,1,1,&local_e,unaff_SS);
  }
  local_6 = (int *)FUN_1000_7f66(0x1000,param_3,param_4);
  uVar2 = (undefined2)((ulong)local_6 >> 0x10);
  piVar1 = (int *)local_6;
  if ((piVar1[10] == 0) || ((*local_6 == 0 && (*(int *)((int)piVar1 + 7) != 0)))) {
    FUN_1000_0306(0x8080,0x80,1,piVar1[0xd],local_e,local_c,local_a,local_8,param_1);
    iVar4 = ((int *)local_6)[0xd];
    uVar3 = 1;
    uVar2 = 1;
  }
  else {
    if (piVar1[0xd] < 1) goto LAB_1000_683b;
    FUN_1000_0224(1,local_e,local_c,local_a,local_8,param_1);
    iVar4 = 1;
    uVar3 = 0;
    uVar2 = 0;
  }
  FUN_1000_02c0(uVar2,uVar3,1,1,iVar4,&local_e,unaff_SS);
LAB_1000_683b:
  FUN_1000_689a(local_e,local_c,local_a,local_8,param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_1000_685a @ 1000:685a

void FUN_1000_685a(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  
  puVar6 = &stack0x0002;
  uVar4 = in_stack_0000000c;
  uVar5 = in_stack_0000000e;
  uVar2 = FUN_1000_7f66();
  uVar1 = (undefined2)((ulong)uVar2 >> 0x10);
  uVar2 = FUN_1000_0648(*(undefined2 *)((int)uVar2 + 0x1e),*(undefined2 *)((int)uVar2 + 0x20));
  uVar3 = (undefined2)((ulong)uVar2 >> 0x10);
  uVar1 = CREATESOLIDBRUSH(0x1000,(int)uVar2);
  FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar3,uVar4);
  DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar5,puVar6);
  return;
}


// ---- FUN_1000_689a @ 1000:689a

void FUN_1000_689a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_18;
  int local_17;
  uint local_c;
  int local_a;
  int local_8;
  undefined2 local_4;
  
  uVar3 = param_7;
  uVar4 = param_8;
  piVar2 = (int *)FUN_1000_7f66();
  local_4 = (undefined2)((ulong)piVar2 >> 0x10);
  piVar1 = (int *)piVar2;
  if (piVar1[10] == 0) {
    if (piVar1[9] == 0) {
      if (piVar1[6] == 0) {
        return;
      }
      local_8 = piVar1[6];
    }
    else {
      local_8 = piVar1[9];
    }
  }
  else {
    if ((*piVar2 != 0) || (*(int *)((int)piVar1 + 7) == 0)) {
      if (piVar1[7] == 0) {
        local_c = 0;
        if (piVar1[8] == 0) {
          FUN_1000_69de(param_5,param_6,param_7,param_8);
          piVar2 = (int *)FUN_1000_7f66(0x1000,param_7,param_8,uVar3,uVar4);
          if (((int *)piVar2)[8] == 0) {
            return;
          }
        }
        local_a = ((int *)piVar2)[8];
      }
      else {
        local_c = (uint)(0 < piVar1[0xd]);
        FUN_1000_806e(0x1000,&local_18);
        piVar2 = (int *)FUN_1000_7f66(0x1000,param_7,param_8);
        local_a = local_17;
      }
      goto LAB_1000_6995;
    }
    if (piVar1[6] == 0) {
      return;
    }
  }
  FUN_1000_806e(0x1000,&local_18);
  piVar2 = (int *)FUN_1000_7f66(0x1000,param_7,param_8);
  local_a = local_17;
  local_c = 0;
LAB_1000_6995:
  local_4 = (undefined2)((ulong)piVar2 >> 0x10);
  FUN_1000_048a(1,0,0,(char)((int *)piVar2)[1] == '\x01',local_c,param_1,param_2,param_3,param_4,
                local_a,param_5);
  return;
}


// ---- FUN_1000_69de @ 1000:69de

void FUN_1000_69de(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 local_20;
  undefined2 local_1f;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  local_6 = FUN_1000_7f66();
  if (*(int *)((int)local_6 + 0xc) != 0) {
    GETCLIENTRECT(0x1000,&local_14,unaff_SS);
    uVar3 = local_6;
    if (*(int *)((int)local_6 + 0x1c) != 0) {
      FUN_1000_02c0(1,1,1,1,1,&local_14,unaff_SS);
      uVar3 = local_6;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    local_6._0_2_ = (int)uVar3;
    piVar1 = (int *)((int)local_6 + 0x1a);
    local_6 = uVar3;
    if (0 < *piVar1) {
      FUN_1000_02c0(0,0,1,1,1,&local_14,unaff_SS);
    }
    local_a = local_10 - local_14;
    local_c = local_e - local_12;
    uVar4 = param_1;
    uVar2 = CREATECOMPATIBLEBITMAP
                      ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c,local_a);
    *(undefined2 *)((int)local_6 + 0x10) = uVar2;
    local_8 = CREATECOMPATIBLEDC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1
                                 ,uVar4,param_2);
    SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                 *(undefined2 *)((int)local_6 + 0x10));
    FUN_1000_806e((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_20);
    FUN_1000_7f66(0x1000,param_3,param_4);
    local_14 = 0;
    local_12 = 0;
    local_10 = local_a;
    local_e = local_c;
    FUN_1000_685a(0,0,local_a,local_c,local_8,param_3,param_4);
    uVar3 = FUN_1000_7f66(0x1000,param_3,param_4);
    uVar4 = (undefined2)((ulong)uVar3 >> 0x10);
    local_6 = uVar3;
    uVar3 = FUN_1000_0648(*(undefined2 *)((int)uVar3 + 0x1e),*(undefined2 *)((int)uVar3 + 0x20));
    uVar4 = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1008_1f2a = CREATESOLIDBRUSH(0x1000,(int)uVar3);
    FUN_1000_048a(1,DAT_1008_1f2a,*(undefined1 *)((int)local_6 + 0xb),
                  *(char *)((int)local_6 + 2) == '\x01',0,local_14,local_12,local_10,local_e,
                  local_1f,local_8);
    DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1f2a,uVar4);
    DELETEDC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_8);
  }
  return;
}


// ---- FUN_1000_6b4e @ 1000:6b4e

void FUN_1000_6b4e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *unaff_CS;
  char *pcVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_28 [30];
  int local_a;
  int local_8;
  undefined4 local_6;
  
  if (param_1 != 0) {
    local_a = 0;
    do {
      local_8 = (-(uint)(local_a == 0) & 1) + 2;
      pcVar3 = unaff_CS;
      do {
        unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        iVar1 = GETNEXTWINDOW(pcVar3,local_8);
        if ((iVar1 != 0) && (param_2 != iVar1)) {
          local_28[0] = 0;
          GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_28,
                       unaff_SS);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           (char *)s_ThunderSSRibbon_1008_1b33,0x1008,local_28);
          if (iVar2 == 0) {
            uVar4 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1)
            ;
            unaff_CS = (char *)0x1000;
            piVar5 = (int *)FUN_1000_7f66(0x1000,uVar4);
            local_6 = piVar5;
            if ((*(int *)((int)(int *)piVar5 + 3) == param_1) && (*piVar5 == -1)) {
              *piVar5 = 0;
              unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
              INVALIDATERECT(0x1000,1,0,0,iVar1);
            }
          }
        }
        pcVar3 = unaff_CS;
      } while (iVar1 != 0);
      local_a = local_a + 1;
    } while (local_a < 2);
  }
  return;
}


// ---- FUN_1000_6bfa @ 1000:6bfa

void FUN_1000_6bfa(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *unaff_CS;
  char *pcVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined1 local_2a [30];
  int local_c;
  int local_a;
  int local_8;
  undefined2 local_4;
  
  if (param_2 != 0) {
    local_c = 0;
    do {
      local_a = (-(uint)(local_c == 0) & 1) + 2;
      local_8 = param_3;
      pcVar3 = unaff_CS;
      do {
        unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        iVar1 = GETNEXTWINDOW(pcVar3,local_a);
        local_8 = iVar1;
        if ((iVar1 != 0) && (param_3 != iVar1)) {
          local_2a[0] = 0;
          GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_2a,
                       unaff_SS);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           (char *)s_ThunderSSRibbon_1008_1b43,0x1008,local_2a);
          if (iVar2 == 0) {
            uVar4 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1)
            ;
            unaff_CS = (char *)0x1000;
            uVar4 = FUN_1000_7f66(0x1000,uVar4);
            local_4 = (undefined2)((ulong)uVar4 >> 0x10);
            if (*(int *)((int)uVar4 + 3) == param_2) {
              *(undefined2 *)((int)uVar4 + 5) = param_1;
            }
          }
        }
        pcVar3 = unaff_CS;
      } while (iVar1 != 0);
      local_c = local_c + 1;
    } while (local_c < 2);
  }
  return;
}


// ---- FUN_1000_6c9a @ 1000:6c9a

undefined2 FUN_1000_6c9a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  char *unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined1 local_2a [30];
  int local_c;
  undefined4 local_a;
  int local_6;
  undefined2 local_4;
  
  uVar4 = CONCAT22(local_a._2_2_,(undefined2)local_a);
  if (param_1 != 0) {
    local_c = 0;
    do {
      local_6 = (-(uint)(local_c == 0) & 1) + 2;
      local_4 = 1;
      iVar1 = 1;
      while (iVar1 != 0) {
        local_a = uVar4;
        iVar1 = GETNEXTWINDOW(unaff_CS,local_6);
        unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
        uVar4 = local_a;
        if ((iVar1 != 0) && (param_2 != iVar1)) {
          local_2a[0] = 0;
          GETCLASSNAME((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e,local_2a,
                       unaff_SS);
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar2 = LSTRCMPI((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                           (char *)s_ThunderSSRibbon_1008_1b53,0x1008,local_2a);
          uVar4 = local_a;
          if (iVar2 == 0) {
            uVar4 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar1)
            ;
            unaff_CS = (char *)0x1000;
            uVar4 = FUN_1000_7f66(0x1000,uVar4);
            uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
            if (*(int *)((int)uVar4 + 3) == param_1) {
              return *(undefined2 *)((int)uVar4 + 5);
            }
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < 2);
  }
  return 999;
}


// ---- FUN_1000_6d44 @ 1000:6d44

undefined2
FUN_1000_6d44(int param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1000_7f66();
  uVar2 = (undefined2)((ulong)piVar3 >> 0x10);
  piVar1 = (int *)piVar3;
  if ((((param_3 != 0) || (*piVar3 != 0)) &&
      ((param_3 != 0 ||
       (((*(int *)((int)piVar1 + 3) < 1 || (param_2 == 0)) || (*(int *)((int)piVar1 + 5) != 0))))))
     && ((param_3 != -1 || (*piVar3 != -1)))) {
    *piVar3 = param_3;
    if (param_1 != 0) {
      INVALIDATERECT(0x1000,1,0,0,param_4);
    }
    if (param_3 == -1) {
      FUN_1000_6b4e(*(undefined2 *)((int)piVar1 + 3),param_4);
    }
    FUN_1000_6eae(param_4,param_5,param_6);
    return 1;
  }
  return 0;
}


// ---- FUN_1000_6dd8 @ 1000:6dd8

int FUN_1000_6dd8(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_7f66();
  return -(uint)(*piVar1 == 0);
}


// ---- FUN_1000_6df4 @ 1000:6df4

undefined2 FUN_1000_6df4(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined1 local_22 [2];
  int local_20;
  int local_1e;
  undefined1 local_14 [14];
  undefined2 local_6;
  int local_4;
  
  uVar2 = FUN_1000_7f66();
  local_6 = (undefined2)((ulong)uVar2 >> 0x10);
  iVar1 = (int)uVar2;
  if (*(char *)(iVar1 + 2) == '\x02') {
    local_4 = *(int *)(iVar1 + 0xc);
    if (local_4 != 0) {
      FUN_1000_806e(0x1000,local_14);
      uVar2 = FUN_1000_7f66(0x1000,param_2,param_3);
      local_6 = (undefined2)((ulong)uVar2 >> 0x10);
      GETOBJECT(0x1000,local_22,unaff_SS,0xe);
      iVar1 = FUN_1000_6f16(param_2,param_3);
      local_20 = local_20 + iVar1 * 2;
      iVar1 = FUN_1000_6f16(param_2,param_3);
      local_1e = local_1e + iVar1 * 2;
      *(undefined2 *)((int)uVar2 + 0x18) = 1;
      FUN_1000_0440(1,local_1e,local_20,param_1);
      *(undefined2 *)((int)uVar2 + 0x18) = 0;
      return 1;
    }
  }
  else if (*(int *)(iVar1 + 0xc) != 0) {
    INVALIDATERECT(0x1000,1,0,0,param_1);
  }
  return 0;
}


// ---- FUN_1000_6eae @ 1000:6eae

void FUN_1000_6eae(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_e [2];
  undefined2 local_4;
  
  local_e[0] = FUN_1000_7f66();
  local_4 = (undefined2)((ulong)local_e[0] >> 0x10);
  *(undefined2 *)((int)local_e[0] + 0x16) = 1;
  FUN_1000_7f76(0x1000,local_e);
  iVar1 = ISWINDOW(0x1000,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_1000_8026((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1);
    if (lVar2 == CONCAT22(param_3,param_2)) {
      uVar3 = FUN_1000_7f66(0x1000,lVar2);
      *(undefined2 *)((int)uVar3 + 0x16) = 0;
    }
  }
  return;
}


// ---- FUN_1000_6f16 @ 1000:6f16

int FUN_1000_6f16(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1000_7f66();
  uVar1 = (undefined2)((ulong)uVar3 >> 0x10);
  iVar2 = *(int *)((int)uVar3 + 0x1a);
  if (*(int *)((int)uVar3 + 0x1c) != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ---- FUN_1000_6f3e @ 1000:6f3e

void __cdecl16near FUN_1000_6f3e(void)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  char *local_6;
  undefined2 local_4;
  
  local_1c = 3;
  local_1a = 0x6fba;
  local_18 = 0x1000;
  local_16 = 0;
  local_14 = 0;
  local_12 = DAT_1008_1f2c;
  local_10 = 0;
  local_e = LOADCURSOR(unaff_CS,0x7f00,0);
  local_c = 6;
  local_8 = 0;
  local_a = 0;
  local_6 = (char *)s_AboutPopup_1008_1b63;
  local_4 = 0x1008;
  REGISTERCLASS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_1c);
  CREATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,DAT_1008_1f2c,0,0,0,0
               ,0,0,0,0x8000,0,0,(char *)s_AboutPopup_1008_1b6e,0x1008,unaff_SS);
  return;
}


// ---- ABOUTPOPUPWNDPROC @ 1000:6fba

void __stdcall16far ABOUTPOPUPWNDPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 unaff_CS;
  
  if (param_4 == 0x18) {
    if (param_3 != 0) {
      POSTMESSAGE(unaff_CS,0,0,0,0x400);
      return;
    }
  }
  else if (param_4 == 0x400) {
    FUN_1000_8096();
    return;
  }
  DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- ABOUTDLGPROC @ 1000:7026

undefined2 __stdcall16far
ABOUTDLGPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  char *unaff_CS;
  undefined2 unaff_SS;
  long lVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined1 local_30 [32];
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar6 = 0x1008;
  if (param_4 == 0xf) {
    local_4 = BEGINPAINT(unaff_CS,local_30,unaff_SS,param_5);
    GETCLIENTRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_10,unaff_SS);
    puVar5 = &local_10;
    uVar4 = 1;
    uVar6 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,puVar5);
    FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar6,uVar4,puVar5);
    lVar2 = GETSYSCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2);
    if ((lVar2 == 0) || (lVar2 == 0xffffff)) {
      local_8 = 0x8080;
      local_6 = 0x80;
    }
    else {
      local_6 = 0;
      local_8 = 0;
    }
    FUN_1000_0306(local_8,local_6,1,3,local_10,local_e,local_c,local_a,local_4);
    FUN_1000_02c0(1,1,1,1,9,&local_10,unaff_SS);
    FUN_1000_0306(0x8080,0x80,0,1,local_10,local_e,local_c,local_a,local_4);
    FUN_1000_7342(1,0,1,2,1,0x65,param_5,local_4);
    FUN_1000_7342(0,1,0,0,1,0x80,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x80);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x70,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x70);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x81,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x81);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x71,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x71);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x82,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x82);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x72,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x72);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x85,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x85);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,0,0,1,0x87,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x87);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,0,0,0,1,0x83,param_5,local_4);
    GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x83);
    SHOWWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0);
    FUN_1000_7342(0,1,1,3,1,1,param_5,local_4);
    uVar6 = GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x67);
    SETWINDOWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                  (char *)s_VB_Pro_Version_3_0a_1008_1b82,0x1008,uVar6);
    ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_30,unaff_SS);
  }
  else {
    if (param_4 == 0x19) {
      SETBKCOLOR(unaff_CS,0xc0c0,0xc0);
      uVar6 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,param_3,
                             uVar6);
      return uVar6;
    }
    if (param_4 == 0x110) {
      uVar6 = param_5;
      GETWINDOWRECT(unaff_CS,&local_c,unaff_SS);
      iVar1 = GETSYSTEMMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,uVar6);
      local_4 = (iVar1 - (local_8 - local_c)) / 2;
      pcVar3 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      iVar1 = GETSYSTEMMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,local_4
                               ,param_5);
      unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
      MOVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,local_6 - local_a,
                 local_8 - local_c,(iVar1 - (local_6 - local_a)) / 3,pcVar3);
    }
    else if (param_4 != 0x111) {
      return 0;
    }
    if ((param_3 != 0) && (param_3 - 1U < 2)) {
      ENDDIALOG(unaff_CS,1);
      return 1;
    }
  }
  return 0;
}


// ---- FUN_1000_7342 @ 1000:7342

void FUN_1000_7342(undefined2 param_1,undefined2 param_2,int param_3,int param_4,int param_5,
                  undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_4 = GETDLGITEM(unaff_CS,param_6);
  if (local_4 != 0) {
    GETWINDOWRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_18,unaff_SS);
    local_8 = local_18;
    local_6 = local_16;
    SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_8,unaff_SS);
    local_10 = local_8;
    local_e = local_6;
    local_c = local_8 + (local_14 - local_18);
    local_a = local_6 + (local_12 - local_16);
    FUN_1000_02c0(1,1,1,1,-(param_3 + param_4 + param_5),&local_10,unaff_SS);
    if (param_5 != 0) {
      FUN_1000_0306(0x8080,0x80,param_2,param_5,local_10,local_e,local_c,local_a,param_8);
      FUN_1000_02c0(1,1,1,1,param_5,&local_10,unaff_SS);
    }
    if (param_4 != 0) {
      FUN_1000_02c0(1,1,1,1,param_4,&local_10,unaff_SS);
    }
    if (param_3 != 0) {
      FUN_1000_0306(0x8080,0x80,param_1,param_3,local_10,local_e,local_c,local_a,param_8);
    }
  }
  return;
}


// ---- FUN_1000_7436 @ 1000:7436

void FUN_1000_7436(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,char param_5
                  ,int param_6,int param_7,int param_8,int param_9,undefined2 param_10)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  long lVar3;
  int in_stack_0000ffc0;
  int in_stack_0000ffc2;
  int in_stack_0000ffc4;
  int in_stack_0000ffc6;
  int in_stack_0000ffc8;
  undefined2 local_4;
  
  if (param_9 != 0 || param_8 != 0) {
    uVar1 = param_10;
    if (param_3 == 0) {
      local_4 = SETBKMODE(unaff_CS,1);
    }
    else {
      local_4 = SETBKMODE(unaff_CS,2);
      SETBKCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1,param_2);
    }
    lVar3 = GETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_10,uVar1)
    ;
    if (lVar3 == 0) {
      uVar1 = 0x8080;
      uVar2 = 0x80;
    }
    else {
      uVar1 = 0;
      uVar2 = 0;
    }
    if (param_5 == '\x01') {
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xff);
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_6,param_7,
               0xffff,param_8,param_9);
      SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,lVar3);
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,1,param_6);
      in_stack_0000ffc6 = param_6;
      in_stack_0000ffc8 = param_7;
    }
    else if (param_5 == '\x02') {
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xff);
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_6,param_7,
               0xffff,param_8,param_9);
      SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,2,param_6);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar2);
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_6,param_7,
               0xffff,param_8,param_9);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,lVar3);
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xffff,param_6);
      in_stack_0000ffc0 = param_6;
      in_stack_0000ffc2 = param_7;
      in_stack_0000ffc4 = -1;
      in_stack_0000ffc6 = param_8;
      in_stack_0000ffc8 = param_9;
    }
    else if (param_5 == '\x03') {
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1,1,param_6);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xff);
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_6,param_7,
               0xffff,param_8,param_9);
      SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,lVar3);
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xffff,param_6);
      in_stack_0000ffc4 = param_6;
      in_stack_0000ffc6 = param_7;
      in_stack_0000ffc8 = -1;
    }
    else if (param_5 == '\x04') {
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar1,uVar2);
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_6,param_7,
               0xffff,param_8,param_9);
      SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,2,param_6);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xff);
      DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,param_6,param_7,
               0xffff,param_8,param_9);
      SETTEXTCOLOR((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,lVar3);
      OFFSETRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xffff,param_6);
      in_stack_0000ffc4 = -1;
      in_stack_0000ffc0 = param_6;
      in_stack_0000ffc2 = param_7;
      in_stack_0000ffc6 = param_8;
      in_stack_0000ffc8 = param_9;
    }
    DRAWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_4,in_stack_0000ffc0,
             in_stack_0000ffc2,in_stack_0000ffc4,in_stack_0000ffc6,in_stack_0000ffc8);
    SETBKMODE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_4);
  }
  return;
}


// ---- FUN_1000_76ec @ 1000:76ec

void __cdecl16near FUN_1000_76ec(void)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  char *local_6;
  undefined2 local_4;
  
  local_1c = 3;
  local_1a = 0x7768;
  local_18 = 0x1000;
  local_16 = 0;
  local_14 = 0;
  local_12 = DAT_1008_1f2c;
  local_10 = 0;
  local_e = LOADCURSOR(unaff_CS,0x7f00,0);
  local_c = 6;
  local_8 = 0;
  local_a = 0;
  local_6 = (char *)s_ColorPopup_1008_1b96;
  local_4 = 0x1008;
  REGISTERCLASS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_1c);
  CREATEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,DAT_1008_1f2c,0,0,0,0
               ,0,0,0,0x8000,0,0,(char *)s_ColorPopup_1008_1ba1,0x1008,unaff_SS);
  return;
}


// ---- COLORPOPUPWNDPROC @ 1000:7768

void __stdcall16far COLORPOPUPWNDPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 unaff_CS;
  
  if (param_4 == 0x18) {
    if (param_3 != 0) {
      POSTMESSAGE(unaff_CS,0,0,0,0x400);
      return;
    }
  }
  else if (param_4 == 0x400) {
    FUN_1000_8096();
    return;
  }
  DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- COLORDLGPROC @ 1000:77d4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __stdcall16far
COLORDLGPROC(int param_1,undefined2 param_2,int param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *unaff_CS;
  char *pcVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 local_3c [32];
  undefined1 local_1c [8];
  undefined1 local_14 [2];
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int *local_6;
  int local_4;
  
  uVar11 = 0x1008;
  if (param_4 != 0x19) {
    if (param_4 < 0x1a) {
      if (param_4 == 3) {
        GETWINDOWRECT(unaff_CS,&local_a,unaff_SS);
        DAT_1008_1bb6 = local_a;
        DAT_1008_1bb8 = local_8;
        return 0;
      }
      if (param_4 != 0xf) {
        return 0;
      }
      iVar1 = BEGINPAINT(unaff_CS,local_3c,unaff_SS,param_5);
      GETCLIENTRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_1c,unaff_SS);
      iVar4 = iVar1;
      FILLRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1e46,local_1c,
               unaff_SS);
      uVar11 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,7,iVar1,
                              iVar4,param_5,uVar11);
      local_c = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11);
      uVar11 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                            DAT_1008_1e44);
      RECTANGLE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1e52,
                DAT_1008_1e50,DAT_1008_1e4e,DAT_1008_1e4c);
      SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11);
      local_8 = 0;
      local_6 = (int *)&DAT_1008_1bba;
      local_a = iVar1;
      do {
        local_4 = 0;
        do {
          DAT_1008_1e5e = local_8 * (DAT_1008_1e4a + 1) + DAT_1008_1e4e + 2;
          DAT_1008_1e5c = local_4 * (DAT_1008_1e4a + 1) + DAT_1008_1e4c + 2;
          DAT_1008_1e60 = DAT_1008_1e5c + DAT_1008_1e4a;
          DAT_1008_1e62 = DAT_1008_1e5e + DAT_1008_1e4a;
          if ((*local_6 == DAT_1008_1e64) && (local_6[1] == DAT_1008_1e66)) {
            puVar2 = (undefined2 *)
                     FUN_1000_7e30(local_14,DAT_1008_1e5c,DAT_1008_1e5e,DAT_1008_1e60,DAT_1008_1e62,
                                   local_a);
            DAT_1008_1f20 = *puVar2;
            DAT_1008_1f22 = puVar2[1];
            DAT_1008_1f24 = puVar2[2];
            DAT_1008_1f26 = puVar2[3];
          }
          iVar4 = local_6[1];
          iVar9 = local_a;
          uVar11 = CREATESOLIDBRUSH((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                    *local_6);
          uVar3 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11);
          iVar5 = local_a;
          RECTANGLE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1e62,
                    DAT_1008_1e60,DAT_1008_1e5e,DAT_1008_1e5c);
          iVar1 = local_a;
          SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
          DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11,iVar1,
                       iVar5,iVar4,iVar9);
          local_6 = local_6 + 2;
          local_4 = local_4 + 1;
        } while (local_4 < 0x10);
        local_8 = local_8 + 1;
      } while (local_8 < 3);
      uVar11 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                            DAT_1008_1e44);
      RECTANGLE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1e5a,
                DAT_1008_1e58,DAT_1008_1e56,DAT_1008_1e54);
      SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11);
      local_4 = 0;
      local_6 = (int *)&DAT_1008_1c7a;
      do {
        DAT_1008_1e5e = DAT_1008_1e56 + 2;
        DAT_1008_1e5c = local_4 * (DAT_1008_1e4a + 1) + DAT_1008_1e54 + 2;
        DAT_1008_1e60 = DAT_1008_1e5c + DAT_1008_1e4a;
        DAT_1008_1e62 = DAT_1008_1e5e + DAT_1008_1e4a;
        if ((((*local_6 != -1) || (local_6[1] != 0xff)) && (*local_6 == DAT_1008_1e64)) &&
           (local_6[1] == DAT_1008_1e66)) {
          puVar2 = (undefined2 *)
                   FUN_1000_7e30(local_14,DAT_1008_1e5c,DAT_1008_1e5e,DAT_1008_1e60,DAT_1008_1e62,
                                 local_a);
          DAT_1008_1f20 = *puVar2;
          DAT_1008_1f22 = puVar2[1];
          DAT_1008_1f24 = puVar2[2];
          DAT_1008_1f26 = puVar2[3];
        }
        iVar4 = local_6[1];
        iVar9 = local_a;
        uVar11 = CREATESOLIDBRUSH((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
                                  *local_6);
        uVar3 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11);
        iVar5 = local_a;
        RECTANGLE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,DAT_1008_1e62,
                  DAT_1008_1e60,DAT_1008_1e5e,DAT_1008_1e5c);
        iVar1 = local_a;
        SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar3);
        DELETEOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar11,iVar1,iVar5,
                     iVar4,iVar9);
        local_6 = local_6 + 2;
        local_4 = local_4 + 1;
      } while (local_4 < 0x10);
      SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_c);
      ENDPAINT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_3c,unaff_SS);
      return 0;
    }
    if (param_4 != 0x110) {
      if (param_4 == 0x111) {
        pcVar7 = unaff_CS;
        if (param_3 == 1) {
          if ((DAT_1008_1e64 != DAT_1008_1f56) || (DAT_1008_1e66 != DAT_1008_1f58)) {
            pcVar7 = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
            SENDMESSAGE(unaff_CS,DAT_1008_1e64,DAT_1008_1e66,0,0x464);
          }
        }
        else if (param_3 != 2) {
          return 0;
        }
        ENDDIALOG(pcVar7,1);
        return 1;
      }
      if (param_4 - 0x111 < 0xf1) {
        return 0;
      }
      if (1 < param_4 - 0x202) {
        return 0;
      }
      local_6 = (int *)param_1;
      local_4 = param_2;
      iVar4 = 0;
      do {
        iVar1 = 0;
        do {
          DAT_1008_1e5e = (DAT_1008_1e4a + 1) * iVar4 + DAT_1008_1e4e + 2;
          DAT_1008_1e5c = (DAT_1008_1e4a + 1) * iVar1 + DAT_1008_1e4c + 2;
          DAT_1008_1e60 = DAT_1008_1e5c + DAT_1008_1e4a;
          DAT_1008_1e62 = DAT_1008_1e5e + DAT_1008_1e4a;
          iVar5 = PTINRECT(unaff_CS,local_6,local_4,(int *)&DAT_1008_1e5c);
          if (iVar5 != 0) {
            iVar4 = iVar4 * 0x10 + iVar1;
            DAT_1008_1e64 = ((undefined2 *)&DAT_1008_1bba)[iVar4 * 2];
            DAT_1008_1e66 = ((undefined2 *)&DAT_1008_1bbc)[iVar4 * 2];
            INFLATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,2,
                        (int *)&DAT_1008_1e5c);
            INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,
                           (int *)&DAT_1008_1e5c,0x1008,param_5);
            INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,
                           (undefined2 *)&DAT_1008_1f20,0x1008,param_5);
            iVar4 = 99;
          }
          unaff_CS = (char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      if (iVar4 < 99) {
        iVar4 = 0;
        piVar6 = (int *)&DAT_1008_1c7a;
        do {
          DAT_1008_1e5c = (DAT_1008_1e4a + 1) * iVar4 + DAT_1008_1e54 + 2;
          DAT_1008_1e60 = DAT_1008_1e5c + DAT_1008_1e4a;
          DAT_1008_1e5e = DAT_1008_1e56 + 2;
          DAT_1008_1e62 = DAT_1008_1e5e + DAT_1008_1e4a;
          iVar1 = PTINRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,local_6,
                           local_4,(int *)&DAT_1008_1e5c);
          if ((iVar1 != 0) && ((*piVar6 != -1 || (piVar6[1] != 0xff)))) {
            DAT_1008_1e64 = *piVar6;
            DAT_1008_1e66 = piVar6[1];
            INFLATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2,2,
                        (int *)&DAT_1008_1e5c);
            INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,
                           (int *)&DAT_1008_1e5c,0x1008,param_5);
            INVALIDATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,
                           (undefined2 *)&DAT_1008_1f20,0x1008,param_5);
          }
          piVar6 = piVar6 + 2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x10);
      }
      if (param_4 != 0x203) {
        return 0;
      }
      SENDMESSAGE((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,0,1,0x111);
      return 0;
    }
    DAT_1008_1e64 = DAT_1008_1f56;
    DAT_1008_1e66 = DAT_1008_1f58;
    uVar10 = 0x1008;
    LSTRCPY(unaff_CS,(char *)s_Set___1008_1cba,0x1008,0x1e68);
    uVar3 = 0x1008;
    LSTRCAT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1f38,0x1008,0x1e68);
    uVar11 = 0x1008;
    LSTRCAT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,
            (char *)s___Property_1008_1cc1,0x1008,0x1e68);
    SETWINDOWTEXT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1e68,0x1008,param_5,
                  uVar11,uVar3,uVar10);
    DAT_1008_1e44 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,2);
    DAT_1008_1e46 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
    uVar11 = param_5;
    GETWINDOWRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_12,unaff_SS);
    local_4 = local_e - local_12;
    local_6 = (int *)(local_c - local_10);
    if (0x270e < DAT_1008_1bb6) {
      iVar4 = GETSYSTEMMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,uVar11)
      ;
      DAT_1008_1bb6 = (iVar4 - local_4) / 2;
      iVar4 = GETSYSTEMMETRICS((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
      DAT_1008_1bb8 = iVar4 - (int)local_6;
    }
    MOVEWINDOW((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0,local_6,local_4,
               DAT_1008_1bb8,DAT_1008_1bb6);
    DAT_1008_1e40 = GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,1);
    DAT_1008_1e42 = GETDLGITEM((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,3);
    iVar4 = DAT_1008_1e42;
    GETCLIENTRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,(int *)&DAT_1008_1e5c,
                  0x1008);
    DAT_1008_1e4a = DAT_1008_1e60 - DAT_1008_1e5c;
    uVar11 = DAT_1008_1e40;
    GETWINDOWRECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_12,unaff_SS);
    local_a = local_12;
    local_8 = local_10;
    SCREENTOCLIENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,&local_a,unaff_SS);
    DAT_1008_1e4c = DAT_1008_1e4a / 2;
    DAT_1008_1e4e = local_8;
    DAT_1008_1e50 = DAT_1008_1e4c + DAT_1008_1e4a * 0x10 + 0x13;
    DAT_1008_1e52 = local_8 + (DAT_1008_1e4a + 2) * 3;
    DAT_1008_1e56 = DAT_1008_1e52 + DAT_1008_1e4c;
    DAT_1008_1e5a = DAT_1008_1e56 + DAT_1008_1e4a + 4;
    uVar3 = 0x1008;
    DAT_1008_1e54 = DAT_1008_1e4c;
    DAT_1008_1e58 = DAT_1008_1e50;
    GETPRIVATEPROFILESTRING
              ((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x1ccd,0x1008,0x90,0x1e68
               ,0x1008,0x1cd4,0x1008,(char *)s_CustomColors_1008_1cd6,0x1008,
               (char *)s_Visual_Basic_1008_1ce3);
    DAT_1008_1f1c = FUN_1000_8354(0x1e68,0x1cf0,uVar3,param_5,uVar11,iVar4);
    if (DAT_1008_1f1c != 0) {
      uVar8 = FUN_1000_83f0(DAT_1008_1f1c,0,10);
      DAT_1008_1e48 = 1;
      do {
        DAT_1008_1c7c = (undefined2)((ulong)uVar8 >> 0x10);
        DAT_1008_1c7a = (undefined2)uVar8;
        DAT_1008_1f1c = FUN_1000_8354(0,0x1cf2,uVar3);
        if (DAT_1008_1f1c == 0) break;
        uVar8 = FUN_1000_83f0(DAT_1008_1f1c,0,10);
        iVar4 = DAT_1008_1e48;
        ((undefined2 *)&DAT_1008_1c7a)[DAT_1008_1e48 * 2] = (int)uVar8;
        ((undefined2 *)&DAT_1008_1c7c)[iVar4 * 2] = (int)((ulong)uVar8 >> 0x10);
        uVar8 = CONCAT22(DAT_1008_1c7c,DAT_1008_1c7a);
        DAT_1008_1e48 = DAT_1008_1e48 + 1;
      } while (DAT_1008_1e48 < 0x10);
    }
  }
  if (param_1 != DAT_1008_1e42) {
    return 0;
  }
  return DAT_1008_1e46;
}


// ---- FUN_1000_7e30 @ 1000:7e30

undefined2 *
FUN_1000_7e30(undefined2 *param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
             undefined2 param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  INFLATERECT(unaff_CS,2,2,&param_2);
  uVar2 = param_3;
  uVar1 = param_2;
  iVar3 = param_4 + -1;
  iVar4 = param_5 + -1;
  uVar5 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,7,param_6);
  uVar5 = SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5);
  MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,uVar1);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar4,uVar1);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar4,iVar3);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,iVar3);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,uVar1);
  INFLATERECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,0xffff,&param_2);
  uVar2 = param_3;
  uVar1 = param_2;
  iVar3 = param_4 + -1;
  iVar4 = param_5 + -1;
  uVar6 = GETSTOCKOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,6,param_6);
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar6);
  MOVETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,uVar1);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar4,uVar1);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,iVar4,iVar3);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,iVar3);
  LINETO((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar2,uVar1);
  SELECTOBJECT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,uVar5);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return param_1;
}


// ---- FUN_1000_7f5e @ 1000:7f5e

void FUN_1000_7f5e(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f66 @ 1000:7f66

void FUN_1000_7f66(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f6e @ 1000:7f6e

void FUN_1000_7f6e(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f76 @ 1000:7f76

void FUN_1000_7f76(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f7e @ 1000:7f7e

void FUN_1000_7f7e(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f86 @ 1000:7f86

void FUN_1000_7f86(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f8e @ 1000:7f8e

void FUN_1000_7f8e(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f96 @ 1000:7f96

void FUN_1000_7f96(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7f9e @ 1000:7f9e

void FUN_1000_7f9e(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7fb6 @ 1000:7fb6

void FUN_1000_7fb6(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7fee @ 1000:7fee

void FUN_1000_7fee(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_7ff6 @ 1000:7ff6

void FUN_1000_7ff6(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10007ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8026 @ 1000:8026

void FUN_1000_8026(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8066 @ 1000:8066

void FUN_1000_8066(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_806e @ 1000:806e

void FUN_1000_806e(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8086 @ 1000:8086

void FUN_1000_8086(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8096 @ 1000:8096

void FUN_1000_8096(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_80d6 @ 1000:80d6

void FUN_1000_80d6(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x100080d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_80f6 @ 1000:80f6

void FUN_1000_80f6(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x100080f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8136 @ 1000:8136

void FUN_1000_8136(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8146 @ 1000:8146

void FUN_1000_8146(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10008149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10))();
  return;
}


// ---- FUN_1000_8246 @ 1000:8246

undefined2 __cdecl16far FUN_1000_8246(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  if (*(int *)((char *)s_License_file_for_custom_control_n_1008_0010 + 0x10) != 0xbc) {
    uVar1 = FUN_1000_80d6();
    return uVar1;
  }
  return 0x100;
}


// ---- FUN_1000_8325 @ 1000:8325

undefined2 __stdcall16far FUN_1000_8325(void)

{
  return 1;
}


// ---- FUN_1000_833e @ 1000:833e

void __cdecl16far FUN_1000_833e(void)

{
  int unaff_BP;
  
  FUN_1000_865a(0x1008,unaff_BP + 1);
  return;
}


// ---- FUN_1000_8354 @ 1000:8354

byte * __cdecl16near FUN_1000_8354(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_SS;
  byte local_22 [32];
  
  pbVar5 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar2 = pbVar5;
    pbVar5 = pbVar5 + 2;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  while( true ) {
    pbVar2 = param_2;
    param_2 = param_2 + 1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) break;
    local_22[bVar1 >> 3] = local_22[bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  if (param_1 == (byte *)0x0) {
    param_1 = DAT_1008_1d0a;
  }
  do {
    DAT_1008_1d0a = param_1;
    bVar1 = *DAT_1008_1d0a;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    pbVar5 = DAT_1008_1d0a + 1;
    param_1 = DAT_1008_1d0a + 1;
  } while (('\x01' << (bVar1 & 7) & local_22[bVar1 >> 3]) != 0);
  do {
    pbVar3 = pbVar5;
    bVar1 = *pbVar3;
    if (bVar1 == 0) goto LAB_1000_83d9;
    pbVar5 = pbVar3 + 1;
  } while (('\x01' << (bVar1 & 7) & local_22[bVar1 >> 3]) == 0);
  *pbVar3 = 0;
  pbVar3 = pbVar3 + 1;
LAB_1000_83d9:
  pbVar5 = DAT_1008_1d0a;
  LOCK();
  UNLOCK();
  DAT_1008_1d0a = pbVar3;
  return pbVar5;
}


// ---- FUN_1000_83f0 @ 1000:83f0

/* WARNING: Removing unreachable block (ram,0x100084af) */

uint __cdecl16near FUN_1000_83f0(byte *param_1,undefined2 *param_2,uint param_3)

{
  byte *pbVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  ulong uVar16;
  
  bVar4 = false;
  pbVar14 = param_1;
  do {
    do {
      pbVar13 = pbVar14;
      pbVar14 = pbVar13 + 1;
      bVar7 = *pbVar13;
    } while (bVar7 == 0x20);
  } while ((bVar7 < 0xe) && (8 < bVar7));
  if (bVar7 == 0x2b) {
LAB_1000_841b:
    pbVar1 = pbVar14;
    pbVar14 = pbVar13 + 2;
    bVar7 = *pbVar1;
  }
  else if (bVar7 == 0x2d) {
    bVar4 = true;
    goto LAB_1000_841b;
  }
  bVar6 = false;
  bVar5 = false;
  if (param_3 == 0) {
    param_3 = 10;
    if (bVar7 == 0x30) {
      if ((*pbVar14 == 0x78) || (*pbVar14 == 0x58)) {
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
LAB_1000_8447:
    if (((param_3 == 0x10) && (bVar7 == 0x30)) && ((*pbVar14 == 0x78 || (*pbVar14 == 0x58)))) {
      pbVar14 = pbVar14 + 2;
    }
    bVar15 = false;
    uVar12 = 0;
    while( true ) {
      uVar16 = FUN_1000_84f7();
      uVar8 = (uint)uVar16;
      if ((bVar15) || (param_3 <= uVar8)) break;
      lVar3 = (uVar16 >> 0x10) * (ulong)param_3;
      uVar9 = (uint)lVar3;
      if ((int)((ulong)lVar3 >> 0x10) != 0) {
        bVar6 = true;
      }
      uVar11 = (uint)((ulong)uVar12 * (ulong)param_3 >> 0x10);
      uVar10 = (uint)((ulong)uVar12 * (ulong)param_3);
      if (CARRY2(uVar11,uVar9)) {
        bVar6 = true;
      }
      uVar12 = uVar10 + uVar8;
      bVar2 = CARRY2(uVar11 + uVar9,(uint)CARRY2(uVar10,uVar8));
      bVar15 = !bVar2;
      if (!bVar15) {
        bVar6 = true;
      }
      bVar5 = true;
      bVar15 = bVar15 && bVar2;
      pbVar14 = pbVar14 + 1;
    }
    pbVar14 = pbVar14 + -1;
    if (bVar5) {
      if ((bVar6) || ((long)uVar16 < 0)) {
        DAT_1008_1d1a = 0x22;
        uVar12 = 0xffff;
      }
      goto LAB_1000_84d9;
    }
  }
  else if ((param_3 != 1) && (param_3 < 0x25)) goto LAB_1000_8447;
  uVar12 = 0;
  pbVar14 = param_1;
LAB_1000_84d9:
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = pbVar14;
  }
  if (bVar4) {
    uVar12 = -uVar12;
  }
  return uVar12;
}


// ---- FUN_1000_84f7 @ 1000:84f7

int __cdecl16near FUN_1000_84f7(void)

{
  byte in_AL;
  byte bVar1;
  
  if (0x60 < in_AL) {
    in_AL = in_AL & 0xdf;
  }
  bVar1 = in_AL - 0x30;
  if (((0x2f < in_AL) && (9 < bVar1)) && (0x10 < bVar1)) {
    bVar1 = in_AL - 0x37;
  }
  return (int)(char)bVar1;
}


// ---- FUN_1000_8510 @ 1000:8510

undefined4 FUN_1000_8510(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT12((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT12((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar6,uVar7) / (ulong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}


// ---- FUN_1000_85aa @ 1000:85aa

long FUN_1000_85aa(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_85dc @ 1000:85dc

char * __cdecl16far FUN_1000_85dc(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_2;
  pcVar4 = (char *)param_1;
  if (param_3 != 0) {
    do {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar2 = *pcVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar1 = '\0';
    }
  }
  return (char *)param_1;
}


// ---- FUN_1000_8606 @ 1000:8606

void __cdecl16near FUN_1000_8606(void)

{
  FUN_1000_099e(DAT_1008_1cfc,DAT_1008_1cfe,DAT_1008_1cfa,DAT_1008_1cf8,DAT_1008_1cf6);
  return;
}


// ---- FUN_1000_865a @ 1000:865a

undefined2 __cdecl16near FUN_1000_865a(void)

{
  DAT_1008_1d4b = 1;
  FUN_1000_86d6();
  FUN_1000_86e5();
  FUN_1000_86d6();
  FUN_1000_86d6();
  FUN_1000_86e5();
  FUN_1000_87e0();
  FUN_1000_87e0();
  return 0x100;
}


// ---- FUN_1000_86d6 @ 1000:86d6

void __cdecl16near FUN_1000_86d6(void)

{
  int *unaff_SI;
  int *unaff_DI;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}


// ---- FUN_1000_86e5 @ 1000:86e5

void __cdecl16near FUN_1000_86e5(void)

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


// ---- FUN_1000_86f8 @ 1000:86f8

void __cdecl16near FUN_1000_86f8(void)

{
  FUN_1000_87a3(0xfc);
  FUN_1000_87a3(0xff);
  return;
}


// ---- FUN_1000_87a3 @ 1000:87a3

void FUN_1000_87a3(void)

{
  return;
}


// ---- FUN_1000_87e0 @ 1000:87e0

void __cdecl16near FUN_1000_87e0(void)

{
  return;
}


// ---- FUN_1000_8950 @ 1000:8950

int __cdecl16near FUN_1000_8950(int param_1)

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
    iVar1 = LOCALALLOC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,param_1);
    UNLOCKSEGMENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1008_1d50 == (code *)0x0) break;
    unaff_CS = 0x1000;
    iVar1 = (*DAT_1008_1d50)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}


// ---- FUN_1000_89a4 @ 1000:89a4

void __cdecl16near FUN_1000_89a4(int param_1)

{
  if (param_1 != 0) {
    LOCALFREE();
  }
  return;
}


// ---- FUN_1000_89ba @ 1000:89ba

undefined2 __cdecl16near FUN_1000_89ba(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_1000_8950(param_2);
  }
  else if (param_2 == 0) {
    FUN_1000_89a4(param_1);
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffff;
    LOCKSEGMENT();
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar1 = LOCALREALLOC((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0x62,param_2);
    UNLOCKSEGMENT((char *)s_0___Use__PictureUp__Bitmap_Uncha_1008_1134 + 0x24,0xffff,param_1,uVar2);
  }
  return uVar1;
}


// ---- FUN_1000_8a1e @ 1000:8a1e

void __cdecl16near FUN_1000_8a1e(void)

{
  LOCALSIZE();
  return;
}


// ---- ___EXPORTEDSTUB @ 1000:8a2e

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- entry @ 1000:8a84

void __cdecl16far entry(void)

{
  int iVar1;
  int in_CX;
  undefined2 unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 in_stack_0000fff0;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (in_CX != 0) {
    in_stack_0000fff0 = 0x1008;
    iVar1 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_1000_099e(in_stack_0000fff0,unaff_SI,unaff_ES,in_CX,uVar2);
  return;
}


// ---- WEP @ 1000:8ab6

/* WARNING: Removing unreachable block (ram,0x10008acc) */
/* WARNING: Removing unreachable block (ram,0x10008ad3) */

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- FUN_1000_8af2 @ 1000:8af2

undefined2 __stdcall16far FUN_1000_8af2(void)

{
  return 1;
}


// ---- FATALEXIT @ 1158:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1158:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1158:0008

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALALLOC @ 1158:000c

/* WARNING: Control flow encountered bad instruction data */

void LOCALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALREALLOC @ 1158:0010

/* WARNING: Control flow encountered bad instruction data */

void LOCALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALFREE @ 1158:0014

/* WARNING: Control flow encountered bad instruction data */

void LOCALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALSIZE @ 1158:0018

/* WARNING: Control flow encountered bad instruction data */

void LOCALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1158:001c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1158:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1158:0024

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNLOCKSEGMENT @ 1158:0028

/* WARNING: Control flow encountered bad instruction data */

void UNLOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1158:002c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEFILENAME @ 1158:0030

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPENFILE @ 1158:0034

/* WARNING: Control flow encountered bad instruction data */

void OPENFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1158:0038

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1158:003c

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1158:0040

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1158:0044

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1158:0048

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1158:004c

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1158:0050

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPRIVATEPROFILESTRING @ 1158:0054

/* WARNING: Control flow encountered bad instruction data */

void GETPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1158:0058

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1158:005c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1158:0060

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETBKCOLOR @ 1158:0064

/* WARNING: Control flow encountered bad instruction data */

void SETBKCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETBKMODE @ 1158:0068

/* WARNING: Control flow encountered bad instruction data */

void SETBKMODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETTEXTCOLOR @ 1158:006c

/* WARNING: Control flow encountered bad instruction data */

void SETTEXTCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LINETO @ 1158:0070

/* WARNING: Control flow encountered bad instruction data */

void LINETO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MOVETO @ 1158:0074

/* WARNING: Control flow encountered bad instruction data */

void MOVETO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EXCLUDECLIPRECT @ 1158:0078

/* WARNING: Control flow encountered bad instruction data */

void EXCLUDECLIPRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ELLIPSE @ 1158:007c

/* WARNING: Control flow encountered bad instruction data */

void ELLIPSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RECTANGLE @ 1158:0080

/* WARNING: Control flow encountered bad instruction data */

void RECTANGLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETPIXEL @ 1158:0084

/* WARNING: Control flow encountered bad instruction data */

void SETPIXEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- BITBLT @ 1158:0088

/* WARNING: Control flow encountered bad instruction data */

void BITBLT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STRETCHBLT @ 1158:008c

/* WARNING: Control flow encountered bad instruction data */

void STRETCHBLT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FILLRGN @ 1158:0090

/* WARNING: Control flow encountered bad instruction data */

void FILLRGN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SELECTCLIPRGN @ 1158:0094

/* WARNING: Control flow encountered bad instruction data */

void SELECTCLIPRGN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SELECTOBJECT @ 1158:0098

/* WARNING: Control flow encountered bad instruction data */

void SELECTOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COMBINERGN @ 1158:009c

/* WARNING: Control flow encountered bad instruction data */

void COMBINERGN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATECOMPATIBLEBITMAP @ 1158:00a0

/* WARNING: Control flow encountered bad instruction data */

void CREATECOMPATIBLEBITMAP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATECOMPATIBLEDC @ 1158:00a4

/* WARNING: Control flow encountered bad instruction data */

void CREATECOMPATIBLEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEELLIPTICRGNINDIRECT @ 1158:00a8

/* WARNING: Control flow encountered bad instruction data */

void CREATEELLIPTICRGNINDIRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEPEN @ 1158:00ac

/* WARNING: Control flow encountered bad instruction data */

void CREATEPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATERECTRGN @ 1158:00b0

/* WARNING: Control flow encountered bad instruction data */

void CREATERECTRGN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATERECTRGNINDIRECT @ 1158:00b4

/* WARNING: Control flow encountered bad instruction data */

void CREATERECTRGNINDIRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATESOLIDBRUSH @ 1158:00b8

/* WARNING: Control flow encountered bad instruction data */

void CREATESOLIDBRUSH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEDC @ 1158:00bc

/* WARNING: Control flow encountered bad instruction data */

void DELETEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEOBJECT @ 1158:00c0

/* WARNING: Control flow encountered bad instruction data */

void DELETEOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETOBJECT @ 1158:00c4

/* WARNING: Control flow encountered bad instruction data */

void GETOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPIXEL @ 1158:00c8

/* WARNING: Control flow encountered bad instruction data */

void GETPIXEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSTOCKOBJECT @ 1158:00cc

/* WARNING: Control flow encountered bad instruction data */

void GETSTOCKOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTEXTCOLOR @ 1158:00d0

/* WARNING: Control flow encountered bad instruction data */

void GETTEXTCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTEXTEXTENT @ 1158:00d4

/* WARNING: Control flow encountered bad instruction data */

void GETTEXTEXTENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTEXTMETRICS @ 1158:00d8

/* WARNING: Control flow encountered bad instruction data */

void GETTEXTMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LPTODP @ 1158:00dc

/* WARNING: Control flow encountered bad instruction data */

void LPTODP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1158:00e0

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCAPTURE @ 1158:00e4

/* WARNING: Control flow encountered bad instruction data */

void SETCAPTURE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RELEASECAPTURE @ 1158:00e8

/* WARNING: Control flow encountered bad instruction data */

void RELEASECAPTURE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETFOCUS @ 1158:00ec

/* WARNING: Control flow encountered bad instruction data */

void SETFOCUS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CLIENTTOSCREEN @ 1158:00f0

/* WARNING: Control flow encountered bad instruction data */

void CLIENTTOSCREEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SCREENTOCLIENT @ 1158:00f4

/* WARNING: Control flow encountered bad instruction data */

void SCREENTOCLIENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWRECT @ 1158:00f8

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCLIENTRECT @ 1158:00fc

/* WARNING: Control flow encountered bad instruction data */

void GETCLIENTRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWTEXT @ 1158:0100

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWTEXT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- BEGINPAINT @ 1158:0104

/* WARNING: Control flow encountered bad instruction data */

void BEGINPAINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDPAINT @ 1158:0108

/* WARNING: Control flow encountered bad instruction data */

void ENDPAINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEWINDOW @ 1158:010c

/* WARNING: Control flow encountered bad instruction data */

void CREATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SHOWWINDOW @ 1158:0110

/* WARNING: Control flow encountered bad instruction data */

void SHOWWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPARENT @ 1158:0114

/* WARNING: Control flow encountered bad instruction data */

void GETPARENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISWINDOW @ 1158:0118

/* WARNING: Control flow encountered bad instruction data */

void ISWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENUMCHILDWINDOWS @ 1158:011c

/* WARNING: Control flow encountered bad instruction data */

void ENUMCHILDWINDOWS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MOVEWINDOW @ 1158:0120

/* WARNING: Control flow encountered bad instruction data */

void MOVEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERCLASS @ 1158:0124

/* WARNING: Control flow encountered bad instruction data */

void REGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCLASSNAME @ 1158:0128

/* WARNING: Control flow encountered bad instruction data */

void GETCLASSNAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETACTIVEWINDOW @ 1158:012c

/* WARNING: Control flow encountered bad instruction data */

void GETACTIVEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETRECTEMPTY @ 1158:0130

/* WARNING: Control flow encountered bad instruction data */

void SETRECTEMPTY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COPYRECT @ 1158:0134

/* WARNING: Control flow encountered bad instruction data */

void COPYRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PTINRECT @ 1158:0138

/* WARNING: Control flow encountered bad instruction data */

void PTINRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OFFSETRECT @ 1158:013c

/* WARNING: Control flow encountered bad instruction data */

void OFFSETRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INFLATERECT @ 1158:0140

/* WARNING: Control flow encountered bad instruction data */

void INFLATERECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FILLRECT @ 1158:0144

/* WARNING: Control flow encountered bad instruction data */

void FILLRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INVERTRECT @ 1158:0148

/* WARNING: Control flow encountered bad instruction data */

void INVERTRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAWICON @ 1158:014c

/* WARNING: Control flow encountered bad instruction data */

void DRAWICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAWTEXT @ 1158:0150

/* WARNING: Control flow encountered bad instruction data */

void DRAWTEXT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDDIALOG @ 1158:0154

/* WARNING: Control flow encountered bad instruction data */

void ENDDIALOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDLGITEM @ 1158:0158

/* WARNING: Control flow encountered bad instruction data */

void GETDLGITEM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFWINDOWPROC @ 1158:015c

/* WARNING: Control flow encountered bad instruction data */

void DEFWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTMESSAGE @ 1158:0160

/* WARNING: Control flow encountered bad instruction data */

void POSTMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SENDMESSAGE @ 1158:0164

/* WARNING: Control flow encountered bad instruction data */

void SENDMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATEWINDOW @ 1158:0168

/* WARNING: Control flow encountered bad instruction data */

void UPDATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INVALIDATERECT @ 1158:016c

/* WARNING: Control flow encountered bad instruction data */

void INVALIDATERECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WINHELP @ 1158:0170

/* WARNING: Control flow encountered bad instruction data */

void WINHELP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1158:0174

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADBITMAP @ 1158:0178

/* WARNING: Control flow encountered bad instruction data */

void LOADBITMAP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMETRICS @ 1158:017c

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSCOLOR @ 1158:0180

/* WARNING: Control flow encountered bad instruction data */

void GETSYSCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GRAYSTRING @ 1158:0184

/* WARNING: Control flow encountered bad instruction data */

void GRAYSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTABBEDTEXTEXTENT @ 1158:0188

/* WARNING: Control flow encountered bad instruction data */

void GETTABBEDTEXTEXTENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETNEXTDLGGROUPITEM @ 1158:018c

/* WARNING: Control flow encountered bad instruction data */

void GETNEXTDLGGROUPITEM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETNEXTDLGTABITEM @ 1158:0190

/* WARNING: Control flow encountered bad instruction data */

void GETNEXTDLGTABITEM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETNEXTWINDOW @ 1158:0194

/* WARNING: Control flow encountered bad instruction data */

void GETNEXTWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCAPTURE @ 1158:0198

/* WARNING: Control flow encountered bad instruction data */

void GETCAPTURE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1158:019c

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCMP @ 1158:01a0

/* WARNING: Control flow encountered bad instruction data */

void LSTRCMP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAWFOCUSRECT @ 1158:01a4

/* WARNING: Control flow encountered bad instruction data */

void DRAWFOCUSRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCMPI @ 1158:01a8

/* WARNING: Control flow encountered bad instruction data */

void LSTRCMPI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


