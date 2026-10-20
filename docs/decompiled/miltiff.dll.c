// Decompiled with Ghidra from miltiff.dll
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001000(undefined4 param_1)

{
  _DAT_1000803c = param_1;
  return 1;
}


// ---- FUN_10001020 @ 10001020

undefined2 * __fastcall FUN_10001020(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}


// ---- ~MTiffFileDirectory @ 10001040

/* public: __thiscall MTiffFileDirectory::~MTiffFileDirectory(void) */

void __thiscall MTiffFileDirectory::~MTiffFileDirectory(MTiffFileDirectory *this)

{
  int iVar1;
  
                    /* 0x1040  122  ??1MTiffFileDirectory@@QAE@XZ */
  iVar1 = *(int *)(this + 8);
  while (iVar1 != 0) {
    FUN_10001100(this,*(short **)(this + 8));
    iVar1 = *(int *)(this + 8);
  }
  return;
}


// ---- FUN_10001060 @ 10001060

void __thiscall FUN_10001060(void *this,short *param_1)

{
  bool bVar1;
  short *psVar2;
  
  bVar1 = true;
  *(short *)this = *(short *)this + 1;
  psVar2 = FUN_10001190(this,*param_1,1);
  if (psVar2 != (short *)0x0) {
    FUN_10001100(this,psVar2);
  }
  psVar2 = *(short **)((int)this + 8);
  do {
    if (*(int *)((int)this + 8) == 0) {
      *(short **)((int)this + 8) = param_1;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      psVar2 = param_1;
LAB_100010ce:
      bVar1 = false;
    }
    else if (*param_1 <= *psVar2) {
      if (*(int *)(psVar2 + 10) == 0) {
        *(short **)((int)this + 8) = param_1;
        *(short **)(param_1 + 8) = psVar2;
        param_1[10] = 0;
        param_1[0xb] = 0;
        *(short **)(psVar2 + 10) = param_1;
      }
      else {
        *(short **)(param_1 + 8) = psVar2;
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(psVar2 + 10);
        *(short **)(psVar2 + 10) = param_1;
        *(short **)(*(int *)(param_1 + 10) + 0x10) = param_1;
      }
      goto LAB_100010ce;
    }
    if (*(short **)(psVar2 + 8) == (short *)0x0) {
      if (!bVar1) {
        return;
      }
      bVar1 = false;
      param_1[8] = 0;
      param_1[9] = 0;
      *(short **)(param_1 + 10) = psVar2;
      *(short **)(psVar2 + 8) = param_1;
    }
    else if (bVar1) {
      psVar2 = *(short **)(psVar2 + 8);
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}


// ---- FUN_10001100 @ 10001100

void __thiscall FUN_10001100(void *this,short *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  short *psVar5;
  
  bVar3 = true;
  *(short *)this = *(short *)this + -1;
  psVar5 = *(short **)((int)this + 8);
  while( true ) {
    if (*param_1 < *psVar5) {
      return;
    }
    if (*psVar5 == *param_1) {
      iVar1 = *(int *)(psVar5 + 10);
      iVar2 = *(int *)(psVar5 + 8);
      if (iVar1 == 0) {
        *(int *)((int)this + 8) = iVar2;
        if (*(int *)(psVar5 + 8) != 0) {
          *(undefined4 *)(*(int *)(psVar5 + 8) + 0x14) = 0;
        }
      }
      else if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      else {
        *(int *)(iVar2 + 0x14) = iVar1;
        *(undefined4 *)(*(int *)(psVar5 + 10) + 0x10) = *(undefined4 *)(psVar5 + 8);
      }
      uVar4 = FUN_10001d60((int)param_1);
      if ((4 < (ushort)uVar4) && (*(void **)(psVar5 + 6) != (void *)0x0)) {
        operator_delete(*(void **)(psVar5 + 6));
      }
      operator_delete(psVar5);
      bVar3 = false;
    }
    if (!bVar3) break;
    psVar5 = *(short **)(psVar5 + 8);
    if (!bVar3) {
      return;
    }
  }
  return;
}


// ---- FUN_10001190 @ 10001190

short * __thiscall FUN_10001190(void *this,short param_1,short param_2)

{
  short *psVar1;
  
  if (param_2 == 1) {
    psVar1 = *(short **)((int)this + 8);
  }
  else {
    psVar1 = *(short **)((int)this + 0xc);
  }
  do {
    if ((*(int *)((int)this + 8) == 0) || (param_1 < *psVar1)) {
      return (short *)0x0;
    }
    if (param_1 == *psVar1) {
      *(short **)((int)this + 0xc) = psVar1;
      return psVar1;
    }
    psVar1 = *(short **)(psVar1 + 8);
  } while (psVar1 != (short *)0x0);
  return (short *)0x0;
}


// ---- FUN_100011e0 @ 100011e0

void __thiscall FUN_100011e0(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  
  sVar1 = 0;
  puVar3 = *(undefined2 **)((int)this + 8);
  if (0 < *(short *)this) {
    do {
      iVar2 = (int)sVar1;
      sVar1 = sVar1 + 1;
      *(undefined2 *)(param_1 + iVar2 * 2) = *puVar3;
      puVar3 = *(undefined2 **)(puVar3 + 8);
    } while (sVar1 < *(short *)this);
  }
  return;
}


// ---- FUN_10001210 @ 10001210

bool __thiscall FUN_10001210(void *this,char *param_1,undefined2 param_2)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  FILE *pFVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 uVar14;
  
  *(undefined4 *)((int)this + 0x50) = 0;
  pFVar6 = FUN_100017d0(param_1,param_2);
  *(FILE **)this = pFVar6;
  if (pFVar6 == (FILE *)0x0) {
    uVar14 = 1;
  }
  else {
    uVar10 = 0xffffffff;
    pcVar12 = param_1;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    pvVar7 = operator_new(~uVar10);
    uVar10 = 0xffffffff;
    *(void **)((int)this + 4) = pvVar7;
    do {
      pcVar12 = param_1;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = param_1 + 1;
      cVar4 = *param_1;
      param_1 = pcVar12;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar12 + -uVar10;
    pcVar13 = *(char **)((int)this + 4);
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
    *(undefined2 *)((int)this + 0x10) = 3;
    psVar1 = (short *)((int)this + 400);
    sVar8 = FUN_10001990(this,*(FILE **)this,(undefined1 *)psVar1,2,0);
    if (sVar8 == 2) {
      sVar8 = FUN_10001990(this,*(FILE **)this,(undefined1 *)((int)this + 0x192),2,0);
      if (sVar8 == 2) {
        sVar5 = *(short *)((int)this + 0x192);
        if ((sVar5 != 0x2a) || (*psVar1 != 0x4949)) {
          if ((sVar5 != 0x2a00) || (*psVar1 != 0x4d4d)) {
            uVar14 = 9;
            goto LAB_100013f1;
          }
          if (*psVar1 != 0x4949) {
            uVar14 = 8;
            goto LAB_100013f1;
          }
        }
        piVar2 = (int *)((int)this + 0x194);
        sVar8 = FUN_10001990(this,*(FILE **)this,(undefined1 *)piVar2,4,0);
        if (sVar8 == 4) {
          *(undefined4 *)((int)this + 8) = 0;
          lVar9 = FUN_10001a40(this,*(FILE **)this,*piVar2,0);
          if (lVar9 == -1) {
            uVar14 = 3;
          }
          else {
            piVar3 = (int *)((int)this + 0x19c);
            *piVar3 = 1;
            do {
              if (*piVar3 == 0) {
                lVar9 = FUN_10001a40(this,*(FILE **)this,*piVar2,0);
                if (lVar9 == -1) {
                  uVar14 = 3;
                  goto LAB_100013f1;
                }
                sVar8 = FUN_10001990(this,*(FILE **)this,(undefined1 *)((int)this + 0x19a),2,0);
                if (sVar8 == 2) goto LAB_100013f8;
                uVar14 = 4;
                goto LAB_100013f1;
              }
              sVar8 = FUN_10001990(this,*(FILE **)this,(undefined1 *)((int)this + 0x19a),2,0);
              if (sVar8 != 2) {
                uVar14 = 4;
                goto LAB_100013f1;
              }
              lVar9 = FUN_10001a40(this,*(FILE **)this,*(short *)((int)this + 0x19a) * 0xc,1);
              if (lVar9 == -1) {
                uVar14 = 3;
                goto LAB_100013f1;
              }
              *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
              sVar8 = FUN_10001990(this,*(FILE **)this,(undefined1 *)piVar3,4,0);
              if (sVar8 != 4) {
                uVar14 = 4;
                goto LAB_100013f1;
              }
              lVar9 = FUN_10001a40(this,*(FILE **)this,*piVar3,0);
            } while (lVar9 != -1);
            uVar14 = 3;
          }
        }
        else {
          uVar14 = 4;
        }
      }
      else {
        uVar14 = 4;
      }
    }
    else {
      uVar14 = 4;
    }
  }
LAB_100013f1:
  FUN_10002170(this,uVar14);
LAB_100013f8:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10001410 @ 10001410

bool __thiscall
FUN_10001410(void *this,char *param_1,uint param_2,void *param_3,short param_4,int param_5,
            int param_6,int param_7)

{
  short *psVar1;
  char cVar2;
  FILE *pFVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_10005b70(this,param_2,param_3,param_4,param_5,param_6);
  if (*(int *)((int)this + 0x178) != 0) goto LAB_1000173e;
  if (param_7 == 2) {
    pFVar3 = FUN_100017d0(param_1,2);
    *(FILE **)this = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      FUN_10002170(this,1);
      goto LAB_1000173e;
    }
    *(undefined2 *)((int)this + 0x10) = 2;
    lVar4 = FUN_10001a40(this,pFVar3,0,2);
    if (lVar4 == -1) {
      FUN_10002170(this,3);
      goto LAB_1000173e;
    }
    if (lVar4 == 0) {
      FUN_100063b0(this,0x4949,0x2a);
      FUN_10001760(this);
      if (*(int *)((int)this + 0x178) != 0) goto LAB_1000173e;
    }
    else {
      lVar5 = FUN_10001a40(this,*(FILE **)this,4,0);
      if (lVar5 == -1) {
        FUN_10002170(this,3);
        goto LAB_1000173e;
      }
      sVar6 = FUN_10001990(this,*(FILE **)this,(undefined1 *)((int)this + 0x194),4,0);
      if (sVar6 != 4) {
        FUN_10002170(this,4);
        goto LAB_1000173e;
      }
      iVar10 = *(int *)((int)this + 0x194);
      lVar5 = FUN_10001a40(this,*(FILE **)this,iVar10,0);
      if (lVar5 == -1) {
        FUN_10002170(this,3);
        goto LAB_1000173e;
      }
      *(undefined4 *)((int)this + 0x19c) = 1;
      psVar1 = (short *)((int)this + 0x19a);
      do {
        sVar6 = FUN_10001990(this,*(FILE **)this,(undefined1 *)psVar1,2,0);
        if (sVar6 != 2) {
          FUN_10002170(this,4);
          goto LAB_1000173e;
        }
        lVar5 = FUN_10001a40(this,*(FILE **)this,*psVar1 * 0xc,1);
        if (lVar5 == -1) {
          FUN_10002170(this,3);
          goto LAB_1000173e;
        }
        sVar6 = FUN_10001990(this,*(FILE **)this,(undefined1 *)((int)this + 0x19c),4,0);
        if (sVar6 != 4) {
          FUN_10002170(this,4);
          goto LAB_1000173e;
        }
        if (*(int *)((int)this + 0x19c) == 0) break;
        lVar5 = FUN_10001a40(this,*(FILE **)this,*(int *)((int)this + 0x19c),0);
        if (lVar5 == -1) {
          FUN_10002170(this,3);
          goto LAB_1000173e;
        }
        iVar10 = *(int *)((int)this + 0x19c);
      } while (*(int *)((int)this + 0x19c) != 0);
      lVar5 = FUN_10001a40(this,*(FILE **)this,iVar10,0);
      if (lVar5 == -1) {
        FUN_10002170(this,3);
        goto LAB_1000173e;
      }
      *(long *)((int)this + 0x19c) = lVar4;
      sVar6 = FUN_10001990(this,*(FILE **)this,(undefined1 *)psVar1,2,0);
      if (sVar6 != 2) {
        FUN_10002170(this,4);
        goto LAB_1000173e;
      }
      lVar5 = FUN_10001a40(this,*(FILE **)this,*psVar1 * 0xc,1);
      if (lVar5 == -1) {
        FUN_10002170(this,3);
        goto LAB_1000173e;
      }
      sVar6 = FUN_10001890(this,*(FILE **)this,(byte *)((int)this + 0x19c),4,0);
      if (sVar6 != 4) {
        FUN_10002170(this,5);
        goto LAB_1000173e;
      }
      lVar4 = FUN_10001a40(this,*(FILE **)this,lVar4,0);
      if (lVar4 == -1) {
        FUN_10002170(this,3);
        goto LAB_1000173e;
      }
    }
  }
  if (param_7 == 1) {
    pFVar3 = FUN_100017d0(param_1,1);
    *(FILE **)this = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      FUN_10002170(this,1);
      goto LAB_1000173e;
    }
    *(undefined2 *)((int)this + 0x10) = 1;
    FUN_100063b0(this,0x4949,0x2a);
    FUN_10001760(this);
    if (*(int *)((int)this + 0x178) != 0) goto LAB_1000173e;
  }
  uVar8 = 0xffffffff;
  pcVar11 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  pvVar7 = operator_new(~uVar8);
  uVar8 = 0xffffffff;
  *(void **)((int)this + 4) = pvVar7;
  do {
    pcVar11 = param_1;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar11;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar11 = pcVar11 + -uVar8;
  pcVar12 = *(char **)((int)this + 4);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
LAB_1000173e:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10001760 @ 10001760

bool __fastcall FUN_10001760(undefined4 *param_1)

{
  size_t sVar1;
  
  sVar1 = FUN_10001890(param_1,(FILE *)*param_1,(byte *)(param_1 + 100),2,0);
  if (sVar1 == 2) {
    sVar1 = FUN_10001890(param_1,(FILE *)*param_1,(byte *)((int)param_1 + 0x192),2,0);
    if (sVar1 == 2) {
      sVar1 = FUN_10001890(param_1,(FILE *)*param_1,(byte *)(param_1 + 0x65),4,0);
      if (sVar1 == 4) goto LAB_100017ba;
    }
  }
  FUN_10002170(param_1,5);
LAB_100017ba:
  return param_1[0x5e] == 0;
}


// ---- FUN_100017d0 @ 100017d0

FILE * FUN_100017d0(char *param_1,undefined2 param_2)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)0x0;
  switch(param_2) {
  case 1:
    pFVar1 = fopen(param_1,&DAT_10008018);
    return pFVar1;
  case 2:
    pFVar1 = fopen(param_1,&DAT_1000801c);
    if (pFVar1 == (FILE *)0x0) {
      pFVar1 = fopen(param_1,&DAT_10008020);
      return pFVar1;
    }
    break;
  case 3:
    pFVar1 = fopen(param_1,&DAT_10008014);
    return pFVar1;
  case 4:
    pFVar1 = fopen(param_1,&DAT_10008010);
  }
  return pFVar1;
}


// ---- FUN_10001870 @ 10001870

void FUN_10001870(FILE *param_1)

{
  fclose(param_1);
  return;
}


// ---- FUN_10001890 @ 10001890

size_t __thiscall FUN_10001890(void *this,FILE *param_1,byte *param_2,uint param_3,int param_4)

{
  byte *_Str;
  size_t sVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  size_t local_38;
  undefined4 local_34 [13];
  
  local_38 = 0;
  _Str = param_2;
  if ((*(int *)((int)this + 0x1c) == 1) && (param_4 != 0)) {
    _Str = operator_new(param_3);
    if (_Str == (byte *)0x0) {
      FUN_10002170(this,6);
      return 0;
    }
    pbVar2 = param_2;
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        param_2 = pbVar2 + 1;
        uVar3 = uVar4 + 1;
        _Str[uVar4] = *(byte *)(*pbVar2 + 0x60 + (int)this);
        pbVar2 = param_2;
        uVar4 = uVar3;
      } while (uVar3 < param_3);
    }
  }
  *(uint *)((int)this + 0x50) = *(int *)((int)this + 0x50) + param_3;
  if (param_2 == (byte *)0x0) {
    FUN_10001ca0(local_34,0,0x32);
    for (; param_3 != 0; param_3 = param_3 - uVar4) {
      uVar4 = param_3;
      if (0x31 < param_3) {
        uVar4 = 0x32;
      }
      sVar1 = fwrite(local_34,1,uVar4,param_1);
      local_38 = local_38 + sVar1;
    }
  }
  else {
    local_38 = fwrite(_Str,1,param_3,param_1);
  }
  if (((*(int *)((int)this + 0x1c) == 1) && (param_4 != 0)) && (_Str != (byte *)0x0)) {
    operator_delete(_Str);
  }
  return local_38;
}


// ---- FUN_10001990 @ 10001990

size_t __thiscall
FUN_10001990(void *this,FILE *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  void *_DstBuf;
  size_t sVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x1c) == 1) && (param_4 != 0)) {
    _DstBuf = operator_new(param_3);
    if (_DstBuf == (void *)0x0) {
      FUN_10002170(this,6);
      return 0;
    }
    sVar2 = fread(_DstBuf,1,param_3,param_1);
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        pbVar1 = (byte *)((int)_DstBuf + uVar3);
        uVar3 = uVar3 + 1;
        *param_2 = *(undefined1 *)(*pbVar1 + 0x60 + (int)this);
        param_2 = param_2 + 1;
      } while (uVar3 < param_3);
    }
    if (_DstBuf != (void *)0x0) {
      operator_delete(_DstBuf);
    }
  }
  else {
    sVar2 = fread(param_2,1,param_3,param_1);
  }
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + param_3;
  return sVar2;
}


// ---- FUN_10001a40 @ 10001a40

long __thiscall FUN_10001a40(void *this,FILE *param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    if (param_2 != 0) {
      *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + param_2;
      fseek(param_1,param_2,1);
      lVar1 = ftell(param_1);
      return lVar1;
    }
  }
  else if (param_3 == 0) {
    if (*(int *)((int)this + 0x50) != param_2) {
      *(int *)((int)this + 0x50) = param_2;
      fseek(param_1,param_2,0);
      lVar1 = ftell(param_1);
      return lVar1;
    }
  }
  else if (param_3 == 2) {
    if (param_2 == 0) {
      fseek(param_1,0,2);
      lVar1 = ftell(param_1);
      *(long *)((int)this + 0x50) = lVar1;
    }
    return *(long *)((int)this + 0x50);
  }
  return *(long *)((int)this + 0x50);
}


// ---- FUN_10001b20 @ 10001b20

bool __thiscall FUN_10001b20(void *this,FILE *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar1 = FUN_10001dc0((uint)param_2);
      uVar4 = param_3 - iVar3;
      if ((int)uVar1 <= param_3 - iVar3) {
        uVar4 = uVar1;
      }
      sVar2 = FUN_10001990(this,param_1,param_2,uVar4,1);
      if (sVar2 != uVar4) {
        FUN_10002170(this,4);
        break;
      }
      param_2 = param_2 + uVar4;
      iVar3 = iVar3 + uVar4;
    } while (iVar3 < param_3);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10001ba0 @ 10001ba0

bool __thiscall FUN_10001ba0(void *this,FILE *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    do {
      uVar1 = FUN_10001dc0((uint)param_2);
      uVar3 = param_3 - iVar4;
      if ((int)uVar1 <= param_3 - iVar4) {
        uVar3 = uVar1;
      }
      sVar2 = FUN_10001890(this,param_1,param_2,uVar3,1);
      if (sVar2 != uVar3) {
        FUN_10002170(this,5);
        break;
      }
      param_2 = param_2 + uVar3;
      iVar4 = iVar4 + uVar3;
    } while (iVar4 < param_3);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10001c20 @ 10001c20

void FUN_10001c20(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  
  local_8 = param_2;
  if (param_3 != 0) {
    while( true ) {
      uVar1 = FUN_10001dc0((uint)param_1);
      uVar2 = FUN_10001dc0((uint)local_8);
      if ((int)uVar1 <= (int)uVar2) {
        uVar2 = uVar1;
      }
      if ((int)param_3 <= (int)uVar2) {
        uVar2 = param_3;
      }
      puVar3 = local_8;
      puVar4 = param_1;
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_3 = param_3 - uVar2;
      if (param_3 == 0) break;
      param_1 = (undefined4 *)((int)param_1 + uVar2);
      local_8 = (undefined4 *)((int)local_8 + uVar2);
    }
  }
  return;
}


// ---- FUN_10001ca0 @ 10001ca0

void FUN_10001ca0(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    while( true ) {
      uVar1 = FUN_10001dc0((uint)param_1);
      if ((int)param_3 <= (int)uVar1) {
        uVar1 = param_3;
      }
      puVar3 = param_1;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = param_2;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      param_3 = param_3 - uVar1;
      if (param_3 == 0) break;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
    }
  }
  return;
}


// ---- FUN_10001d00 @ 10001d00

short FUN_10001d00(short param_1,short param_2)

{
  char cVar1;
  undefined1 local_1;
  
  if (param_1 == 1) {
    cVar1 = '\x01';
  }
  else if (param_1 == 2) {
    cVar1 = '\x01';
  }
  else if (param_1 == 3) {
    cVar1 = '\x02';
  }
  else if (param_1 == 4) {
    cVar1 = '\x04';
  }
  else if (param_1 == 5) {
    cVar1 = '\b';
  }
  else {
    cVar1 = '\b';
    if (param_1 != 6) {
      cVar1 = local_1;
    }
  }
  return cVar1 * param_2;
}


// ---- FUN_10001d60 @ 10001d60

undefined4 __fastcall FUN_10001d60(int param_1)

{
  short sVar1;
  char cVar2;
  undefined1 local_1;
  
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 == 1) {
    cVar2 = '\x01';
  }
  else if (sVar1 == 2) {
    cVar2 = '\x01';
  }
  else if (sVar1 == 3) {
    cVar2 = '\x02';
  }
  else if (sVar1 == 4) {
    cVar2 = '\x04';
  }
  else if (sVar1 == 5) {
    cVar2 = '\b';
  }
  else {
    cVar2 = '\b';
    if (sVar1 != 6) {
      cVar2 = local_1;
    }
  }
  return CONCAT22((short)((uint)*(undefined4 *)(param_1 + 4) >> 0x10),
                  (short)*(undefined4 *)(param_1 + 4) * (short)cVar2);
}


// ---- FUN_10001dc0 @ 10001dc0

int FUN_10001dc0(uint param_1)

{
  return 0x10000 - (param_1 & 0xffff);
}


// ---- FUN_10001de0 @ 10001de0

void __fastcall FUN_10001de0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(int *)(param_1 + 0x4c) =
         (int)(*(int *)(param_1 + 0x1c) + (*(int *)(param_1 + 0x1c) >> 0x1f & 7U)) >> 3;
  }
  else {
    if (*(short *)(param_1 + 0x44) == 1) {
      *(undefined4 *)(param_1 + 0x48) = 1;
      iVar1 = *(int *)(param_1 + 0x1c) * iVar1;
      *(int *)(param_1 + 0x4c) = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
      return;
    }
    if (*(short *)(param_1 + 0x44) == 2) {
      *(int *)(param_1 + 0x48) = iVar1;
      *(int *)(param_1 + 0x4c) =
           (int)(*(int *)(param_1 + 0x1c) + (*(int *)(param_1 + 0x1c) >> 0x1f & 7U)) >> 3;
    }
  }
  return;
}


// ---- FUN_10001e50 @ 10001e50

bool __fastcall FUN_10001e50(void *param_1)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  void *pvVar4;
  void *pvVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  pvVar5 = (void *)((int)param_1 + 0x198);
  psVar3 = FUN_10001190(pvVar5,0x111,1);
  *(short **)((int)param_1 + 0x160) = psVar3;
  if (psVar3 == (short *)0x0) {
    FUN_10002170(param_1,7);
    goto LAB_100020f2;
  }
  uVar2 = FUN_10001d00(psVar3[1],(short)*(undefined4 *)(psVar3 + 2));
  if (uVar2 < 5) {
    sVar1 = *(short *)(*(int *)((int)param_1 + 0x160) + 2);
    if (sVar1 == 3) {
      if (*(int *)((int)param_1 + 0x168) == 0) {
        pvVar4 = operator_new(4);
        *(void **)((int)param_1 + 0x168) = pvVar4;
      }
      **(undefined2 **)((int)param_1 + 0x168) =
           (short)*(undefined4 *)(*(int *)((int)param_1 + 0x160) + 0xc);
    }
    else if (sVar1 == 4) {
      if (*(int *)((int)param_1 + 0x16c) == 0) {
        pvVar4 = operator_new(4);
        *(void **)((int)param_1 + 0x16c) = pvVar4;
      }
      **(undefined4 **)((int)param_1 + 0x16c) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x160) + 0xc);
    }
  }
  else {
    iVar7 = *(int *)((int)param_1 + 0x160);
    if (*(short *)(iVar7 + 2) == 3) {
      *(undefined4 *)((int)param_1 + 0x168) = *(undefined4 *)(iVar7 + 0xc);
    }
    else if (*(short *)(iVar7 + 2) == 4) {
      *(undefined4 *)((int)param_1 + 0x16c) = *(undefined4 *)(iVar7 + 0xc);
    }
  }
  if (*(int *)((int)param_1 + 0x164) != 0) {
    psVar3 = FUN_10001190(pvVar5,0x117,1);
    if (psVar3 == (short *)0x0) {
      operator_delete(*(void **)((int)param_1 + 0x164));
      *(undefined4 *)((int)param_1 + 0x164) = 0;
    }
  }
  psVar3 = FUN_10001190(pvVar5,0x117,2);
  *(short **)((int)param_1 + 0x164) = psVar3;
  if (psVar3 == (short *)0x0) {
    puVar6 = operator_new(0x18);
    *(undefined2 **)((int)param_1 + 0x164) = puVar6;
    if (puVar6 == (undefined2 *)0x0) {
      FUN_10002170(param_1,6);
      goto LAB_100020f2;
    }
    *puVar6 = 0x117;
    *(undefined2 *)(*(int *)((int)param_1 + 0x164) + 2) = 4;
    *(undefined4 *)(*(int *)((int)param_1 + 0x164) + 4) = 1;
    *(undefined4 *)(*(int *)((int)param_1 + 0x164) + 8) = 0xffffffff;
    iVar7 = *(int *)((int)param_1 + 0x14) * *(int *)((int)param_1 + 0x18) *
            *(int *)((int)param_1 + 0x1c) * *(int *)((int)param_1 + 0x20);
    *(int *)(*(int *)((int)param_1 + 0x164) + 0xc) = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
    if (*(int *)((int)param_1 + 0x174) == 0) {
      pvVar5 = operator_new(4);
      *(void **)((int)param_1 + 0x174) = pvVar5;
    }
    puVar8 = *(undefined4 **)((int)param_1 + 0x174);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_10002170(param_1,6);
      goto LAB_100020f2;
    }
    uVar9 = *(undefined4 *)(*(int *)((int)param_1 + 0x164) + 0xc);
  }
  else {
    uVar2 = FUN_10001d00(psVar3[1],(short)*(undefined4 *)(psVar3 + 2));
    if (4 < uVar2) {
      iVar7 = *(int *)((int)param_1 + 0x164);
      if (*(short *)(iVar7 + 2) == 3) {
        *(undefined4 *)((int)param_1 + 0x170) = *(undefined4 *)(iVar7 + 0xc);
      }
      else if (*(short *)(iVar7 + 2) == 4) {
        *(undefined4 *)((int)param_1 + 0x174) = *(undefined4 *)(iVar7 + 0xc);
      }
      goto LAB_100020f2;
    }
    sVar1 = *(short *)(*(int *)((int)param_1 + 0x164) + 2);
    if (sVar1 == 3) {
      if (*(int *)((int)param_1 + 0x170) == 0) {
        pvVar5 = operator_new(4);
        *(void **)((int)param_1 + 0x170) = pvVar5;
      }
      **(undefined2 **)((int)param_1 + 0x170) =
           (short)*(undefined4 *)(*(int *)((int)param_1 + 0x164) + 0xc);
      goto LAB_100020f2;
    }
    if (sVar1 != 4) goto LAB_100020f2;
    if (*(int *)((int)param_1 + 0x174) == 0) {
      pvVar5 = operator_new(4);
      *(void **)((int)param_1 + 0x174) = pvVar5;
    }
    puVar8 = *(undefined4 **)((int)param_1 + 0x174);
    uVar9 = *(undefined4 *)(*(int *)((int)param_1 + 0x164) + 0xc);
  }
  *puVar8 = uVar9;
LAB_100020f2:
  return *(int *)((int)param_1 + 0x178) == 0;
}


// ---- FUN_10002110 @ 10002110

int __thiscall FUN_10002110(void *this,int param_1)

{
  if (*(short *)(*(int *)((int)this + 0x160) + 2) == 3) {
    return (int)*(short *)(*(int *)((int)this + 0x168) + param_1 * 2);
  }
  return *(int *)(*(int *)((int)this + 0x16c) + param_1 * 4);
}


// ---- FUN_10002140 @ 10002140

int __thiscall FUN_10002140(void *this,int param_1)

{
  if (*(short *)(*(int *)((int)this + 0x164) + 2) == 3) {
    return (int)*(short *)(*(int *)((int)this + 0x170) + param_1 * 2);
  }
  return *(int *)(*(int *)((int)this + 0x174) + param_1 * 4);
}


// ---- FUN_10002170 @ 10002170

undefined4 __thiscall FUN_10002170(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x178) = param_1;
  return 1;
}


// ---- FUN_10002190 @ 10002190

void __thiscall FUN_10002190(void *this,undefined2 param_1)

{
  if (*(short *)((int)this + 0x184) < 7) {
    *(undefined2 *)(*(int *)((int)this + 0x180) + *(short *)((int)this + 0x184) * 2) = param_1;
    *(short *)((int)this + 0x184) = *(short *)((int)this + 0x184) + 1;
  }
  return;
}


// ---- ReadUnsupportedTagListPtr @ 100021c0

/* public: long __stdcall MTiffHandler::ReadUnsupportedTagListPtr(short * *) */

long MTiffHandler::ReadUnsupportedTagListPtr(short **param_1)

{
  undefined4 *in_stack_00000008;
  
                    /* 0x21c0  114  ?ReadUnsupportedTagListPtr@MTiffHandler@@QAGJPAPAF@Z */
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = param_1[0x60];
    return (int)*(short *)(param_1 + 0x61);
  }
  return (int)*(short *)(param_1 + 0x61);
}


// ---- RecordNoMemoryAllocTag @ 100021f0

/* public: long __stdcall MTiffHandler::RecordNoMemoryAllocTag(short,short) */

long MTiffHandler::RecordNoMemoryAllocTag(short param_1,short param_2)

{
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000c;
  
                    /* 0x21f0  115  ?RecordNoMemoryAllocTag@MTiffHandler@@QAGJFF@Z */
  if ((*(short *)((int)_param_1 + 0x18c) < 0x10) && (*(int *)((int)_param_1 + 0x188) != 0)) {
    *(short *)(*(int *)((int)_param_1 + 0x188) + *(short *)((int)_param_1 + 0x18c) * 4) = param_2;
    *(undefined2 *)(*(int *)((int)_param_1 + 0x188) + 2 + *(short *)((int)_param_1 + 0x18c) * 4) =
         in_stack_0000000c;
    *(short *)((int)_param_1 + 0x18c) = *(short *)((int)_param_1 + 0x18c) + 1;
    return 0;
  }
  FUN_10002170(_param_1,0x13);
  return *(long *)((int)_param_1 + 0x178);
}


// ---- ReadNoMemoryAllocTagListPtr @ 10002260

/* public: long __stdcall MTiffHandler::ReadNoMemoryAllocTagListPtr(short * *) */

long MTiffHandler::ReadNoMemoryAllocTagListPtr(short **param_1)

{
  undefined4 *in_stack_00000008;
  
                    /* 0x2260  112  ?ReadNoMemoryAllocTagListPtr@MTiffHandler@@QAGJPAPAF@Z */
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = param_1[0x62];
    return (int)*(short *)(param_1 + 99);
  }
  return (int)*(short *)(param_1 + 99);
}


// ---- GetTagDataFileOffset @ 10002290

/* public: long __stdcall MTiffHandler::GetTagDataFileOffset(short) */

long MTiffHandler::GetTagDataFileOffset(short param_1)

{
  short *psVar1;
  undefined2 in_stack_00000006;
  short in_stack_00000008;
  
                    /* 0x2290  104  ?GetTagDataFileOffset@MTiffHandler@@QAGJF@Z */
  psVar1 = FUN_10001190((void *)(_param_1 + 0x198),in_stack_00000008,1);
  if (psVar1 != (short *)0x0) {
    return *(long *)(psVar1 + 4);
  }
  return -1;
}


// ---- ReadImage @ 100022c0

/* public: long __stdcall MTiffHandler::ReadImage(void *,short) */

long MTiffHandler::ReadImage(void *param_1,short param_2)

{
  undefined4 unaff_EDI;
  short in_stack_0000000c;
  
                    /* 0x22c0  106  ?ReadImage@MTiffHandler@@QAGJPAXF@Z */
  if ((in_stack_0000000c == 1) && (*(int *)((int)param_1 + 0x1c) == 1)) {
    FUN_10002170(param_1,4);
  }
  if (*(int *)((int)param_1 + 0x178) == 0) {
    ReadImageBlock(param_1,param_2,CONCAT22((short)((uint)unaff_EDI >> 0x10),in_stack_0000000c),0,0,
                   *(long *)((int)param_1 + 0x14));
  }
  return (uint)(*(int *)((int)param_1 + 0x178) == 0);
}


// ---- ReadImageBlock @ 10002320

/* public: long __stdcall MTiffHandler::ReadImageBlock(void *,short,long,long,long,long) */

long MTiffHandler::ReadImageBlock
               (void *param_1,short param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 in_stack_0000000a;
  int in_stack_0000001c;
  
                    /* 0x2320  107  ?ReadImageBlock@MTiffHandler@@QAGJPAXFJJJJ@Z */
  if (*(int *)((int)param_1 + 0x178) == 0) {
    FUN_10001de0((int)param_1);
    switch((undefined2)param_3) {
    case 1:
      if (*(short *)((int)param_1 + 0x44) == 1) {
        FUN_10002530(param_1,(undefined1 *)_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
      if (*(short *)((int)param_1 + 0x44) == 2) {
        FUN_100029d0(param_1,_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
      break;
    case 2:
      if (*(short *)((int)param_1 + 0x44) == 1) {
        FUN_10002dd0(param_1,(int)_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
      if (*(short *)((int)param_1 + 0x44) == 2) {
        FUN_10002530(param_1,(undefined1 *)_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
      break;
    case 3:
      FUN_10002530(param_1,(undefined1 *)_param_2,param_4,param_5,param_6,in_stack_0000001c);
      break;
    case 4:
      if (*(short *)((int)param_1 + 0x44) == 1) {
        FUN_10002530(param_1,(undefined1 *)_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
      if (*(short *)((int)param_1 + 0x44) == 2) {
        FUN_100029d0(param_1,_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
      uVar5 = *(uint *)((int)param_1 + 0x1c);
      uVar3 = (int)uVar5 >> 0x1f;
      if ((((uVar5 ^ uVar3) - uVar3 & 7 ^ uVar3) == uVar3) && (*(int *)((int)param_1 + 0x20) == 3))
      {
        uVar5 = (int)uVar5 >> 3;
        for (iVar6 = in_stack_0000001c * param_6; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar3 = 0;
          if (uVar5 != 0) {
            do {
              uVar2 = *(undefined1 *)((int)_param_2 + uVar3);
              iVar1 = uVar3 + uVar5 * 2;
              uVar4 = uVar3 + 1;
              *(undefined1 *)((int)_param_2 + uVar3) = *(undefined1 *)(iVar1 + (int)_param_2);
              *(undefined1 *)(iVar1 + (int)_param_2) = uVar2;
              uVar3 = uVar4;
            } while (uVar4 < uVar5);
          }
          _param_2 = (undefined4 *)((int)_param_2 + uVar5 * 3);
        }
      }
    }
  }
  return (uint)(*(int *)((int)param_1 + 0x178) == 0);
}


// ---- FUN_10002530 @ 10002530

bool __thiscall
FUN_10002530(void *this,undefined1 *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_10;
  uint local_c;
  int local_4;
  
  iVar7 = 0;
  local_10 = param_1;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x48)) {
    do {
      iVar5 = 0;
      if (*(int *)((int)this + 0x24) < 2) {
        FUN_100033e0(this,local_10,iVar7,param_2,param_3,param_4,param_5);
        if (*(int *)((int)this + 0x178) != 0) break;
        if (*(int *)((int)this + 0x1c) == 1) {
          uVar3 = (int)param_4 >> 0x1f;
          iVar5 = ((uint)(((param_4 ^ uVar3) - uVar3 & 0x1f ^ uVar3) != uVar3) +
                  ((int)(param_4 + (uVar3 & 0x1f)) >> 5)) * param_5 * 4;
        }
        else {
          iVar5 = *(int *)((int)this + 0x4c) * param_5 * param_4;
        }
        local_10 = local_10 + iVar5;
        iVar7 = iVar7 + 1;
      }
      else {
        local_c = *(uint *)((int)this + 0x14);
        if (*(int *)((int)this + 0x1c) == 1) {
          uVar3 = (int)local_c >> 0x1f;
          local_c = ((uint)(((local_c ^ uVar3) - uVar3 & 7 ^ uVar3) != uVar3) +
                    ((int)(local_c + (uVar3 & 7)) >> 3)) * 8;
        }
        if (0 < (int)(local_c * param_3)) {
          do {
            if (*(int *)((int)this + 0x1c) == 1) {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 * 8;
            }
            else {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 / *(int *)((int)this + 0x4c);
            }
            iVar5 = iVar5 + iVar1;
            iVar7 = iVar7 + 1;
          } while (iVar5 < (int)(local_c * param_3));
        }
        if (iVar5 != 0) {
          iVar7 = iVar7 + -1;
          if (*(int *)((int)this + 0x1c) == 1) {
            iVar1 = FUN_10002140(this,iVar7);
            iVar1 = iVar1 << 3;
          }
          else {
            iVar1 = FUN_10002140(this,iVar7);
            iVar1 = iVar1 / *(int *)((int)this + 0x4c);
          }
          iVar5 = iVar5 - iVar1;
        }
        iVar1 = iVar5 / (int)local_c;
        iVar6 = param_3 - iVar1;
        if (*(int *)((int)this + 0x1c) == 1) {
          iVar2 = FUN_10002140(this,iVar7);
          iVar2 = (iVar2 << 3) / (int)local_c;
        }
        else {
          iVar2 = FUN_10002140(this,iVar7);
          iVar2 = (iVar2 / *(int *)((int)this + 0x4c)) / *(int *)((int)this + 0x14);
        }
        local_c = iVar2 - iVar6;
        if (((param_5 - iVar1) - iVar6) + param_3 < (int)local_c) {
          local_c = ((param_5 - iVar5 / *(int *)((int)this + 0x14)) - iVar6) + param_3;
        }
        FUN_100033e0(this,local_10,iVar7,param_2,iVar6,param_4,local_c);
        if (*(int *)((int)this + 0x178) != 0) break;
        if (*(int *)((int)this + 0x1c) == 1) {
          uVar3 = local_c * param_4;
          uVar4 = (int)uVar3 >> 0x1f;
          iVar1 = ((uint)(((uVar3 ^ uVar4) - uVar4 & 0x1f ^ uVar4) != uVar4) +
                  ((int)(uVar3 + (uVar4 & 0x1f)) >> 5)) * 4;
        }
        else {
          iVar1 = *(int *)((int)this + 0x4c) * local_c * param_4;
        }
        local_10 = local_10 + iVar1;
        if (*(int *)((int)this + 0x1c) == 1) {
          uVar4 = (iVar6 + local_c) * *(int *)((int)this + 0x14);
          uVar3 = (int)uVar4 >> 0x1f;
          iVar1 = ((uint)(((uVar4 ^ uVar3) - uVar3 & 7 ^ uVar3) != uVar3) +
                  ((int)(uVar4 + (uVar3 & 7)) >> 3)) * 8;
          local_c = iVar1;
        }
        else {
          iVar1 = (iVar6 + local_c) * *(int *)((int)this + 0x14);
          local_c = *(int *)((int)this + 0x14);
        }
        iVar5 = iVar5 + iVar1;
        iVar7 = iVar7 + 1;
        if (iVar7 < *(int *)((int)this + 0x24) + -1) {
          do {
            if (*(int *)((int)this + 0x1c) == 1) {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 << 3;
            }
            else {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 / *(int *)((int)this + 0x4c);
            }
            if (param_5 + param_3 <= (iVar1 + iVar5) / (int)local_c) break;
            if (*(int *)((int)this + 0x1c) == 1) {
              iVar1 = 1;
            }
            else {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = (iVar1 / *(int *)((int)this + 0x4c)) / *(int *)((int)this + 0x14);
            }
            FUN_100033e0(this,local_10,iVar7,param_2,0,param_4,iVar1);
            if (*(int *)((int)this + 0x178) != 0) goto LAB_100029ae;
            if (*(int *)((int)this + 0x1c) == 1) {
              uVar4 = iVar1 * param_4;
              uVar3 = (int)uVar4 >> 0x1f;
              iVar1 = ((uint)(((uVar4 ^ uVar3) - uVar3 & 0x1f ^ uVar3) != uVar3) +
                      ((int)(uVar4 + (uVar3 & 0x1f)) >> 5)) * 4;
            }
            else {
              iVar1 = *(int *)((int)this + 0x4c) * iVar1 * param_4;
            }
            local_10 = local_10 + iVar1;
            if (*(int *)((int)this + 0x1c) == 1) {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 * 8;
            }
            else {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 / *(int *)((int)this + 0x4c);
            }
            iVar5 = iVar5 + iVar1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)((int)this + 0x24) + -1);
        }
        if (iVar5 != 0) {
          if (param_5 + param_3 < iVar5 / (int)local_c) {
            iVar7 = iVar7 + -1;
            if (*(int *)((int)this + 0x1c) == 1) {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 << 3;
            }
            else {
              iVar1 = FUN_10002140(this,iVar7);
              iVar1 = iVar1 / *(int *)((int)this + 0x4c);
            }
            iVar5 = iVar5 - iVar1;
          }
          iVar5 = param_3 + (param_5 - iVar5 / (int)local_c);
          FUN_100033e0(this,local_10,iVar7,param_2,0,param_4,iVar5);
          if (*(int *)((int)this + 0x178) != 0) break;
          if (*(int *)((int)this + 0x1c) == 1) {
            uVar4 = iVar5 * param_4;
            uVar3 = (int)uVar4 >> 0x1f;
            local_10 = local_10 +
                       ((uint)(((uVar4 ^ uVar3) - uVar3 & 0x1f ^ uVar3) != uVar3) +
                       ((int)(uVar4 + (uVar3 & 0x1f)) >> 5)) * 4;
          }
          else {
            local_10 = local_10 + *(int *)((int)this + 0x4c) * iVar5 * param_4;
          }
        }
        iVar7 = (local_4 + 1) * *(int *)((int)this + 0x24);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)((int)this + 0x48));
  }
LAB_100029ae:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_100029d0 @ 100029d0

bool __thiscall
FUN_100029d0(void *this,undefined4 *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puVar1 = operator_new(*(int *)((int)this + 0x4c) * param_4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10002170(this,6);
  }
  else {
    local_14 = operator_new(*(int *)((int)this + 0x4c) * param_4);
    if (local_14 == (undefined4 *)0x0) {
      FUN_10002170(this,6);
    }
    else {
      local_10 = operator_new(*(int *)((int)this + 0x4c) * param_4);
      if (local_10 == (undefined4 *)0x0) {
        FUN_10002170(this,6);
      }
      else if (*(int *)((int)this + 0x24) < 2) {
        iVar3 = 0;
        if (0 < param_5) {
          do {
            FUN_100035a0(this,(undefined1 *)puVar1,(undefined1 *)local_14,(undefined1 *)local_10,0,
                         iVar3,param_2,param_4);
            if (*(int *)((int)this + 0x178) != 0) break;
            iVar3 = iVar3 + 1;
            FUN_10003740(this,param_1,puVar1,local_14,local_10,param_4);
            param_1 = (undefined4 *)((int)param_1 + *(int *)((int)this + 0x4c) * param_4);
          } while (iVar3 < param_5);
        }
      }
      else {
        if (0 < *(int *)((int)this + 0x14) * param_3) {
          do {
            iVar3 = FUN_10002140(this,local_1c);
            local_18 = local_18 + iVar3 / *(int *)((int)this + 0x4c);
            local_1c = local_1c + 1;
            iVar3 = *(int *)((int)this + 0x14) * param_3;
          } while (iVar3 - local_18 != 0 && local_18 <= iVar3);
        }
        if (local_18 != 0) {
          iVar3 = FUN_10002140(this,local_1c);
          local_18 = local_18 - iVar3 / *(int *)((int)this + 0x4c);
          local_1c = local_1c + -1;
        }
        iVar3 = *(int *)((int)this + 0x14);
        iVar2 = FUN_10002140(this,local_1c);
        iVar3 = (iVar2 / *(int *)((int)this + 0x4c)) / iVar3 - (param_3 - local_18 / iVar3);
        iVar2 = 0;
        if (0 < iVar3) {
          do {
            FUN_100035a0(this,(undefined1 *)puVar1,(undefined1 *)local_14,(undefined1 *)local_10,
                         local_1c,iVar2,param_2,param_4);
            if (*(int *)((int)this + 0x178) != 0) goto LAB_10002d86;
            iVar2 = iVar2 + 1;
            FUN_10003740(this,param_1,puVar1,local_14,local_10,param_4);
            param_1 = (undefined4 *)
                      ((int)param_1 +
                      *(int *)((int)this + 0x20) * *(int *)((int)this + 0x4c) * param_4);
          } while (iVar2 < iVar3);
        }
        iVar3 = FUN_10002140(this,local_1c);
        local_18 = local_18 + iVar3 / *(int *)((int)this + 0x4c);
        local_1c = local_1c + 1;
        if (local_1c < *(int *)((int)this + 0x24) + -1) {
          do {
            iVar3 = FUN_10002140(this,local_1c);
            if (param_3 + param_5 <=
                (iVar3 / *(int *)((int)this + 0x4c) + local_18) / *(int *)((int)this + 0x14)) break;
            iVar3 = FUN_10002140(this,local_1c);
            iVar3 = (iVar3 / *(int *)((int)this + 0x4c)) / *(int *)((int)this + 0x14);
            iVar2 = 0;
            if (0 < iVar3) {
              do {
                FUN_100035a0(this,(undefined1 *)puVar1,(undefined1 *)local_14,(undefined1 *)local_10
                             ,local_1c,iVar2,param_2,param_4);
                if (*(int *)((int)this + 0x178) != 0) goto LAB_10002d86;
                iVar2 = iVar2 + 1;
                FUN_10003740(this,param_1,puVar1,local_14,local_10,param_4);
                param_1 = (undefined4 *)
                          ((int)param_1 +
                          *(int *)((int)this + 0x20) * *(int *)((int)this + 0x4c) * param_4);
              } while (iVar2 < iVar3);
            }
            iVar3 = FUN_10002140(this,local_1c);
            local_18 = local_18 + iVar3 / *(int *)((int)this + 0x4c);
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)((int)this + 0x24) + -1);
        }
        if (local_18 != 0) {
          if (param_3 + param_5 < local_18 / *(int *)((int)this + 0x14)) {
            local_1c = local_1c + -1;
            iVar3 = FUN_10002140(this,local_1c);
            local_18 = local_18 - iVar3 / *(int *)((int)this + 0x4c);
          }
          iVar2 = 0;
          iVar3 = param_3 + (param_5 - local_18 / *(int *)((int)this + 0x14));
          if (0 < iVar3) {
            do {
              FUN_100035a0(this,(undefined1 *)puVar1,(undefined1 *)local_14,(undefined1 *)local_10,
                           local_1c,iVar2,param_2,param_4);
              if (*(int *)((int)this + 0x178) != 0) break;
              iVar2 = iVar2 + 1;
              FUN_10003740(this,param_1,puVar1,local_14,local_10,param_4);
              param_1 = (undefined4 *)
                        ((int)param_1 +
                        *(int *)((int)this + 0x20) * *(int *)((int)this + 0x4c) * param_4);
            } while (iVar2 < iVar3);
          }
        }
      }
    }
  }
LAB_10002d86:
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete(puVar1);
  }
  if (local_14 != (undefined4 *)0x0) {
    operator_delete(local_14);
  }
  if (local_10 != (undefined4 *)0x0) {
    operator_delete(local_10);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10002dd0 @ 10002dd0

bool __thiscall
FUN_10002dd0(void *this,int param_1,long param_2,long param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x4c) * param_5 * param_4;
  piVar1 = operator_new(0xc);
  if (piVar1 == (int *)0x0) {
    FUN_10002170(this,6);
  }
  else {
    *piVar1 = param_1;
    piVar1[1] = iVar2 / 3 + param_1;
    piVar1[2] = param_1 + (iVar2 * 2) / 3;
    MTiffHandler::ReadImageListBlock(this,(long)piVar1,param_2,param_3,param_4);
    operator_delete(piVar1);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- ReadImageList @ 10002e70

/* public: long __stdcall MTiffHandler::ReadImageList(void * *) */

long MTiffHandler::ReadImageList(void **param_1)

{
  int *in_stack_00000008;
  
                    /* 0x2e70  108  ?ReadImageList@MTiffHandler@@QAGJPAPAX@Z */
  if (param_1[0x5e] == (void *)0x0) {
    if (*(short *)(param_1 + 0x11) == 1) {
      FUN_10002f60(param_1,in_stack_00000008,0,0,(uint)param_1[5],(int)param_1[6]);
    }
    else if (*(short *)(param_1 + 0x11) == 2) {
      FUN_100032f0(param_1,in_stack_00000008,0,0,(uint)param_1[5],(int)param_1[6]);
    }
  }
  return (uint)(param_1[0x5e] == (void *)0x0);
}


// ---- ReadImageListBlock @ 10002ee0

/* public: long __stdcall MTiffHandler::ReadImageListBlock(void * *,long,long,long,long) */

long MTiffHandler::ReadImageListBlock
               (void **param_1,long param_2,long param_3,long param_4,long param_5)

{
  int in_stack_00000018;
  
                    /* 0x2ee0  109  ?ReadImageListBlock@MTiffHandler@@QAGJPAPAXJJJJ@Z */
  if (param_1[0x5e] == (void *)0x0) {
    FUN_10001de0((int)param_1);
    if (*(short *)(param_1 + 0x11) == 1) {
      FUN_10002f60(param_1,(int *)param_2,param_3,param_4,param_5,in_stack_00000018);
    }
    else if (*(short *)(param_1 + 0x11) == 2) {
      FUN_100032f0(param_1,(undefined4 *)param_2,param_3,param_4,param_5,in_stack_00000018);
    }
  }
  return (uint)(param_1[0x5e] == (void *)0x0);
}


// ---- FUN_10002f60 @ 10002f60

bool __thiscall
FUN_10002f60(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puVar4 = operator_new(*(int *)((int)this + 0x4c) * param_4);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_10002170(this,6);
  }
  else {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    iVar3 = param_1[2];
    if (*(int *)((int)this + 0x24) < 2) {
      iVar6 = 0;
      if (0 < param_5) {
        do {
          FUN_100033e0(this,(undefined1 *)puVar4,0,param_2,param_3 + iVar6,param_4,1);
          if (*(int *)((int)this + 0x178) != 0) break;
          iVar6 = iVar6 + 1;
          FUN_10003640(this,puVar4,iVar2,iVar1,iVar3,param_4,local_18);
          local_18 = local_18 + param_4;
        } while (iVar6 < param_5);
      }
    }
    else {
      if (0 < *(int *)((int)this + 0x14) * param_3) {
        do {
          iVar6 = FUN_10002140(this,local_20);
          local_1c = local_1c + iVar6 / *(int *)((int)this + 0x4c);
          local_20 = local_20 + 1;
          iVar6 = *(int *)((int)this + 0x14) * param_3;
        } while (iVar6 - local_1c != 0 && local_1c <= iVar6);
      }
      if (*(int *)((int)this + 0x14) * param_3 - local_1c != 0) {
        iVar6 = FUN_10002140(this,local_20);
        local_1c = local_1c - iVar6 / *(int *)((int)this + 0x4c);
        local_20 = local_20 + -1;
      }
      iVar6 = *(int *)((int)this + 0x14);
      iVar5 = FUN_10002140(this,local_20);
      iVar5 = (iVar5 / *(int *)((int)this + 0x4c)) / iVar6;
      iVar7 = 0;
      if (0 < iVar5) {
        do {
          FUN_100033e0(this,(undefined1 *)puVar4,local_20,param_2,
                       (param_3 - local_1c / iVar6) + iVar7,param_4,1);
          if (*(int *)((int)this + 0x178) != 0) goto LAB_100032cc;
          iVar7 = iVar7 + 1;
          FUN_10003640(this,puVar4,iVar2,iVar1,iVar3,param_4,local_18);
          local_18 = local_18 + param_4;
        } while (iVar7 < iVar5);
      }
      iVar6 = FUN_10002140(this,local_20);
      local_1c = local_1c + iVar6 / *(int *)((int)this + 0x4c);
      local_20 = local_20 + 1;
      if (local_20 < *(int *)((int)this + 0x24) + -1) {
        do {
          iVar6 = FUN_10002140(this,local_20);
          if (param_3 + param_5 <= (local_1c + iVar6 * 8) / *(int *)((int)this + 0x14)) break;
          iVar6 = FUN_10002140(this,local_20);
          iVar6 = (iVar6 / *(int *)((int)this + 0x4c)) / *(int *)((int)this + 0x14);
          iVar5 = 0;
          if (0 < iVar6) {
            do {
              FUN_100033e0(this,(undefined1 *)puVar4,local_20,param_2,iVar5,param_4,1);
              if (*(int *)((int)this + 0x178) != 0) goto LAB_100032cc;
              iVar5 = iVar5 + 1;
              FUN_10003640(this,puVar4,iVar2,iVar1,iVar3,param_4,local_18);
              local_18 = local_18 + param_4;
            } while (iVar5 < iVar6);
          }
          iVar6 = FUN_10002140(this,local_20);
          local_1c = local_1c + iVar6 / *(int *)((int)this + 0x4c);
          local_20 = local_20 + 1;
        } while (local_20 < *(int *)((int)this + 0x24) + -1);
      }
      if (local_1c != 0) {
        if (param_5 + param_3 < local_1c / *(int *)((int)this + 0x14)) {
          local_20 = local_20 + -1;
          iVar6 = FUN_10002140(this,local_20);
          local_1c = local_1c - iVar6 / *(int *)((int)this + 0x4c);
        }
        iVar5 = 0;
        iVar6 = param_3 + (param_5 - local_1c / *(int *)((int)this + 0x14));
        if (0 < iVar6) {
          do {
            FUN_100033e0(this,(undefined1 *)puVar4,local_20,param_2,iVar5,param_4,1);
            if (*(int *)((int)this + 0x178) != 0) break;
            iVar5 = iVar5 + 1;
            FUN_10003640(this,puVar4,iVar2,iVar1,iVar3,param_4,local_18);
            local_18 = local_18 + param_4;
          } while (iVar5 < iVar6);
        }
      }
    }
  }
LAB_100032cc:
  if (puVar4 != (undefined4 *)0x0) {
    operator_delete(puVar4);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_100032f0 @ 100032f0

bool __thiscall
FUN_100032f0(void *this,undefined4 *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *(undefined4 *)((int)this + 0x48) = 1;
  puVar1 = (undefined1 *)param_1[2];
  puVar2 = (undefined1 *)param_1[1];
  FUN_10002530(this,(undefined1 *)*param_1,param_2,param_3,param_4,param_5);
  if (*(int *)((int)this + 0x178) == 0) {
    FUN_10002530(this,puVar2,param_2,*(int *)((int)this + 0x18) + param_3,param_4,param_5);
    if (*(int *)((int)this + 0x178) == 0) {
      FUN_10002530(this,puVar1,param_2,param_3 + *(int *)((int)this + 0x18) * 2,param_4,param_5);
    }
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10003390 @ 10003390

bool __thiscall FUN_10003390(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10002140(this,param_2);
  if (*(int *)((int)this + 0x1c) == 1) {
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = iVar1 / *(int *)((int)this + 0x4c);
  }
  FUN_100033e0(this,param_1,param_2,0,0,*(uint *)((int)this + 0x14),
               iVar1 / (int)*(uint *)((int)this + 0x14));
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_100033e0 @ 100033e0

bool __thiscall
FUN_100033e0(void *this,undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,
            int param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FILE *pFVar7;
  
  iVar1 = FUN_10002110(this,param_2);
  if (*(int *)((int)this + 0x1c) == 1) {
    uVar6 = param_3 + *(int *)((int)this + 0x14) * param_4;
    uVar4 = (int)uVar6 >> 0x1f;
    iVar3 = (uint)(((uVar6 ^ uVar4) - uVar4 & 7 ^ uVar4) != uVar4) +
            ((int)(uVar6 + (uVar4 & 7)) >> 3);
  }
  else {
    iVar3 = (*(int *)((int)this + 0x14) * param_4 + param_3) * *(int *)((int)this + 0x4c);
  }
  lVar2 = FUN_10001a40(this,*(FILE **)this,iVar3 + iVar1,0);
  if (lVar2 == -1) {
LAB_10003577:
    FUN_10002170(this,3);
  }
  else {
    iVar1 = 0;
    if (0 < param_6) {
      do {
        uVar4 = (int)param_5 >> 0x1f;
        if (*(int *)((int)this + 0x1c) == 1) {
          iVar3 = (uint)(((param_5 ^ uVar4) - uVar4 & 7 ^ uVar4) != uVar4) +
                  ((int)(param_5 + (uVar4 & 7)) >> 3);
          pFVar7 = *(FILE **)this;
        }
        else {
          pFVar7 = *(FILE **)this;
          iVar3 = *(int *)((int)this + 0x4c) * param_5;
        }
        FUN_10001b20(this,pFVar7,param_1,iVar3);
        if (*(int *)((int)this + 0x178) != 0) break;
        uVar6 = *(uint *)((int)this + 0x14);
        if (*(int *)((int)this + 0x1c) == 1) {
          uVar5 = (int)uVar6 >> 0x1f;
          iVar3 = FUN_10001a40(this,*(FILE **)this,
                               (((uint)(((uVar6 ^ uVar5) - uVar5 & 7 ^ uVar5) != uVar5) -
                                (uint)(((param_5 ^ uVar4) - uVar4 & 7 ^ uVar4) != uVar4)) -
                               ((int)(param_5 + (uVar4 & 7)) >> 3)) +
                               ((int)(*(int *)((int)this + 0x14) +
                                     (*(int *)((int)this + 0x14) >> 0x1f & 7U)) >> 3),1);
        }
        else {
          iVar3 = FUN_10001a40(this,*(FILE **)this,(uVar6 - param_5) * *(int *)((int)this + 0x4c),1)
          ;
        }
        if (iVar3 == -1) goto LAB_10003577;
        if (*(int *)((int)this + 0x1c) == 1) {
          iVar3 = ((uint)(((param_5 ^ uVar4) - uVar4 & 0x1f ^ uVar4) != uVar4) +
                  ((int)(param_5 + (uVar4 & 0x1f)) >> 5)) * 4;
        }
        else {
          iVar3 = *(int *)((int)this + 0x4c) * param_5;
        }
        param_1 = param_1 + iVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_6);
    }
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_100035a0 @ 100035a0

bool __thiscall
FUN_100035a0(void *this,undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
            int param_5,int param_6,uint param_7)

{
  FUN_100033e0(this,param_1,param_4,param_6,param_5,param_7,1);
  if (*(int *)((int)this + 0x178) == 0) {
    FUN_100033e0(this,param_2,param_4 + *(int *)((int)this + 0x38) / 3,param_6,param_5,param_7,1);
    if (*(int *)((int)this + 0x178) == 0) {
      FUN_100033e0(this,param_3,param_4 + (*(int *)((int)this + 0x38) * 2) / 3,param_6,param_5,
                   param_7,1);
    }
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10003640 @ 10003640

undefined4 __thiscall
FUN_10003640(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 == 8) {
    if (0 < param_5) {
      iVar1 = 0;
      do {
        *(undefined1 *)(iVar1 + param_2 + param_6) = *(undefined1 *)param_1;
        iVar2 = iVar1 + 1;
        *(undefined1 *)(iVar1 + param_3 + param_6) = *(undefined1 *)((int)param_1 + 1);
        *(undefined1 *)(iVar1 + param_6 + param_4) = *(undefined1 *)((int)param_1 + 2);
        iVar1 = iVar2;
        param_1 = (undefined4 *)((int)param_1 + 3);
      } while (iVar2 < param_5);
    }
  }
  else if (iVar1 == 0x10) {
    if (0 < param_5) {
      puVar4 = (undefined2 *)(param_2 + param_6 * 2);
      puVar5 = (undefined2 *)(param_4 + param_6 * 2);
      puVar7 = (undefined2 *)(param_3 + param_6 * 2);
      do {
        *puVar4 = *(undefined2 *)param_1;
        *puVar7 = *(undefined2 *)((int)param_1 + 2);
        puVar4 = puVar4 + 1;
        param_5 = param_5 + -1;
        *puVar5 = *(undefined2 *)(param_1 + 1);
        param_1 = (undefined4 *)((int)param_1 + 6);
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (param_5 != 0);
    }
  }
  else if ((iVar1 == 0x20) && (0 < param_5)) {
    puVar8 = (undefined4 *)(param_2 + param_6 * 4);
    puVar3 = (undefined4 *)(param_4 + param_6 * 4);
    puVar6 = (undefined4 *)(param_3 + param_6 * 4);
    do {
      *puVar8 = *param_1;
      puVar8 = puVar8 + 1;
      param_5 = param_5 + -1;
      *puVar6 = param_1[1];
      *puVar3 = param_1[2];
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 3;
      puVar6 = puVar6 + 1;
    } while (param_5 != 0);
  }
  return 1;
}


// ---- FUN_10003740 @ 10003740

undefined4 __thiscall
FUN_10003740(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 0x1c);
  if (iVar3 == 8) {
    iVar3 = 0;
    if (0 < param_5) {
      do {
        iVar4 = iVar3 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar3 + (int)param_2);
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)(iVar3 + (int)param_3);
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)(iVar3 + (int)param_4);
        param_1 = (undefined4 *)((int)param_1 + 3);
        iVar3 = iVar4;
      } while (iVar4 < param_5);
    }
  }
  else if (iVar3 == 0x10) {
    if (0 < param_5) {
      do {
        *(undefined2 *)param_1 = *(undefined2 *)param_2;
        uVar1 = *(undefined2 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 2);
        *(undefined2 *)((int)param_1 + 2) = uVar1;
        param_2 = (undefined4 *)((int)param_2 + 2);
        param_5 = param_5 + -1;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)param_4;
        param_1 = (undefined4 *)((int)param_1 + 6);
        param_4 = (undefined4 *)((int)param_4 + 2);
      } while (param_5 != 0);
    }
  }
  else if ((iVar3 == 0x20) && (0 < param_5)) {
    do {
      *param_1 = *param_2;
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      param_1[1] = uVar2;
      param_5 = param_5 + -1;
      param_1[2] = *param_4;
      param_1 = param_1 + 3;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return 1;
}


// ---- MTiffHandler @ 10003820

/* public: __thiscall MTiffHandler::MTiffHandler(char *,long,long) */

MTiffHandler * __thiscall
MTiffHandler::MTiffHandler(MTiffHandler *this,char *param_1,long param_2,long param_3)

{
  MTiffHandler MVar1;
  void *pvVar2;
  uint uVar3;
  
                    /* 0x3820  100  ??0MTiffHandler@@QAE@PADJJ@Z */
  uVar3 = 0;
  FUN_10001020((undefined2 *)(this + 0x198));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x34) = 0x3ff00000;
  *(uint *)(this + 0x17c) = (uint)(param_3 == 1);
  pvVar2 = operator_new(0xe);
  *(undefined2 *)(this + 0x184) = 0;
  *(void **)(this + 0x180) = pvVar2;
  pvVar2 = operator_new(0x40);
  *(undefined2 *)(this + 0x18c) = 0;
  *(void **)(this + 0x188) = pvVar2;
  do {
    MVar1 = (MTiffHandler)0x0;
    if ((uVar3 & 1) != 0) {
      MVar1 = (MTiffHandler)0x80;
    }
    if ((uVar3 & 2) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '@');
    }
    if ((uVar3 & 4) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + ' ');
    }
    if ((uVar3 & 8) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x10');
    }
    if ((uVar3 & 0x10) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\b');
    }
    if ((uVar3 & 0x20) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x04');
    }
    if ((uVar3 & 0x40) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x02');
    }
    if ((uVar3 & 0x80) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x01');
    }
    this[uVar3 + 0x60] = MVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x100);
  if ((*(int *)(this + 0x180) != 0) && (*(int *)(this + 0x188) != 0)) {
    FUN_10001210(this,param_1,(short)param_2);
    return this;
  }
  FUN_10002170(this,6);
  return this;
}


// ---- MTiffHandler @ 10003960

/* public: __thiscall MTiffHandler::MTiffHandler(char *,long,long,short,long,long,long) */

MTiffHandler * __thiscall
MTiffHandler::MTiffHandler
          (MTiffHandler *this,char *param_1,long param_2,long param_3,short param_4,long param_5,
          long param_6,long param_7)

{
  MTiffHandler MVar1;
  void *pvVar2;
  uint uVar3;
  
                    /* 0x3960  101  ??0MTiffHandler@@QAE@PADJJFJJJ@Z */
  uVar3 = 0;
  FUN_10001020((undefined2 *)(this + 0x198));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(long *)(this + 0x3c) = param_6;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined2 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x34) = 0x3ff00000;
  pvVar2 = operator_new(0x40);
  *(undefined2 *)(this + 0x18c) = 0;
  *(void **)(this + 0x188) = pvVar2;
  do {
    MVar1 = (MTiffHandler)0x0;
    if ((uVar3 & 1) != 0) {
      MVar1 = (MTiffHandler)0x80;
    }
    if ((uVar3 & 2) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '@');
    }
    if ((uVar3 & 4) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + ' ');
    }
    if ((uVar3 & 8) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x10');
    }
    if ((uVar3 & 0x10) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\b');
    }
    if ((uVar3 & 0x20) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x04');
    }
    if ((uVar3 & 0x40) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x02');
    }
    if ((uVar3 & 0x80) != 0) {
      MVar1 = (MTiffHandler)((char)MVar1 + '\x01');
    }
    this[uVar3 + 0x60] = MVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x100);
  if (*(int *)(this + 0x188) == 0) {
    FUN_10002170(this,6);
    return this;
  }
  FUN_10001410(this,param_1,param_2,(void *)param_3,param_4,param_5,param_6,param_7);
  return this;
}


// ---- ~MTiffHandler @ 10003a80

/* public: __thiscall MTiffHandler::~MTiffHandler(void) */

void __thiscall MTiffHandler::~MTiffHandler(MTiffHandler *this)

{
  short *psVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint local_4;
  
                    /* 0x3a80  102  ??1MTiffHandler@@QAE@XZ */
  local_4 = local_4 & 0xffffff00;
  pvVar2 = *(void **)(this + 0x168);
  if ((pvVar2 != (void *)0x0) && (*(void **)(*(int *)(this + 0x160) + 0xc) != pvVar2)) {
    operator_delete(pvVar2);
    *(undefined4 *)(this + 0x168) = 0;
  }
  pvVar2 = *(void **)(this + 0x16c);
  if ((pvVar2 != (void *)0x0) && (*(void **)(*(int *)(this + 0x160) + 0xc) != pvVar2)) {
    operator_delete(pvVar2);
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if ((*(int *)(this + 0x164) == 0) ||
     (psVar1 = FUN_10001190(this + 0x198,0x117,1), psVar1 != (short *)0x0)) {
    if (((*(int *)(this + 0x170) == 0) && (*(int *)(this + 0x174) == 0)) ||
       (psVar1 = FUN_10001190(this + 0x198,0x117,1), psVar1 == (short *)0x0)) goto LAB_10003b9b;
    pvVar2 = *(void **)(this + 0x170);
    if ((pvVar2 != (void *)0x0) && (*(void **)(*(int *)(this + 0x164) + 0xc) != pvVar2)) {
      operator_delete(pvVar2);
      *(undefined4 *)(this + 0x170) = 0;
    }
    pvVar2 = *(void **)(this + 0x174);
    if ((pvVar2 == (void *)0x0) || (*(void **)(*(int *)(this + 0x164) + 0xc) == pvVar2))
    goto LAB_10003b9b;
  }
  else {
    operator_delete(*(void **)(this + 0x164));
    pvVar2 = *(void **)(this + 0x174);
    *(undefined4 *)(this + 0x164) = 0;
    if (pvVar2 == (void *)0x0) goto LAB_10003b9b;
  }
  operator_delete(pvVar2);
  *(undefined4 *)(this + 0x174) = 0;
LAB_10003b9b:
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x180));
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x188));
  }
  iVar3 = *(int *)(this + 0x1c);
  if (iVar3 == 1) {
    iVar3 = *(int *)(this + 0x18) * *(int *)(this + 0x20) * *(int *)(this + 0x14);
    uVar5 = *(int *)(this + 0x5c) + ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3);
  }
  else if (iVar3 == 8) {
    uVar5 = *(int *)(this + 0x18) * *(int *)(this + 0x20) * *(int *)(this + 0x14) +
            *(int *)(this + 0x5c);
  }
  else if (iVar3 == 0x10) {
    uVar5 = *(int *)(this + 0x5c) +
            *(int *)(this + 0x18) * *(int *)(this + 0x20) * *(int *)(this + 0x14) * 2;
  }
  else {
    uVar5 = local_4;
    if (iVar3 == 0x20) {
      uVar5 = *(int *)(this + 0x5c) +
              *(int *)(this + 0x18) * *(int *)(this + 0x20) * *(int *)(this + 0x14) * 4;
    }
  }
  if ((*(FILE **)this != (FILE *)0x0) &&
     (((*(short *)(this + 0x10) == 2 || (*(short *)(this + 0x10) == 1)) &&
      (lVar4 = FUN_10001a40(this,*(FILE **)this,0,1), lVar4 < (int)uVar5)))) {
    FUN_10001a40(this,*(FILE **)this,uVar5 - 1,0);
    FUN_10001890(this,*(FILE **)this,(byte *)&local_4,1,0);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete(*(void **)(this + 4));
  }
  if (*(FILE **)this != (FILE *)0x0) {
    FUN_10001870(*(FILE **)this);
  }
  MTiffFileDirectory::~MTiffFileDirectory((MTiffFileDirectory *)(this + 0x198));
  return;
}


// ---- ReadInfo @ 10003cb0

/* public: long __stdcall MTiffHandler::ReadInfo(void) */

long MTiffHandler::ReadInfo(void)

{
  size_t sVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  short *psVar7;
  undefined4 *in_stack_00000004;
  short sVar8;
  short local_38;
  short sStack_36;
  ushort local_34;
  undefined2 uStack_32;
  void *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  short local_10;
  short local_e [7];
  
                    /* 0x3cb0  110  ?ReadInfo@MTiffHandler@@QAGJXZ */
  local_2c = 0;
  local_24 = 0;
  if ((in_stack_00000004[0x5e] == 0) && (GoToTargetImage(), in_stack_00000004[0x5e] == 0)) {
    local_28 = 0;
    sVar8 = (short)in_stack_00000004;
    if (0 < *(short *)((int)in_stack_00000004 + 0x19a)) {
      do {
        sVar1 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,(undefined1 *)&sStack_36,2
                             ,0);
        if (sVar1 != 2) {
          FUN_10002170(in_stack_00000004,4);
          goto LAB_100043fd;
        }
        sVar1 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,(undefined1 *)&local_38,2,
                             0);
        if (sVar1 != 2) {
          FUN_10002170(in_stack_00000004,4);
          goto LAB_100043fd;
        }
        sVar1 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,(undefined1 *)&local_30,4,
                             0);
        if (sVar1 != 4) {
          FUN_10002170(in_stack_00000004,4);
          goto LAB_100043fd;
        }
        lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,0,1);
        sVar1 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,(undefined1 *)&local_34,4,
                             0);
        if (sVar1 != 4) {
          FUN_10002170(in_stack_00000004,4);
          goto LAB_100043fd;
        }
        switch(sStack_36) {
        case 0x100:
          if (local_38 == 3) {
            uStack_32 = 0;
          }
          in_stack_00000004[5] = CONCAT22(uStack_32,local_34);
          WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
          psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
          *(long *)(psVar7 + 4) = lVar2;
          break;
        case 0x101:
          if (local_38 == 3) {
            uStack_32 = 0;
          }
          in_stack_00000004[6] = CONCAT22(uStack_32,local_34);
          WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
          psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
          *(long *)(psVar7 + 4) = lVar2;
          break;
        case 0x102:
          in_stack_00000004[7] = CONCAT22(uStack_32,local_34);
          break;
        case 0x103:
          uStack_32 = 0;
          if (local_34 != 1) {
            if (in_stack_00000004[0x5f] == 0) {
              FUN_10002170(in_stack_00000004,0xb);
              goto LAB_100043fd;
            }
            FUN_10002190(in_stack_00000004,0x103);
          }
          WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
          psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
          *(long *)(psVar7 + 4) = lVar2;
          break;
        default:
          if (local_38 == 3) {
            uStack_32 = 0;
          }
          goto switchD_10003d9a_caseD_131;
        case 0x106:
          uStack_32 = 0;
          in_stack_00000004[0x10] = (int)(short)local_34;
          WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
          psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
          *(long *)(psVar7 + 4) = lVar2;
          break;
        case 0x111:
          if ((local_30 == (void *)0x1) && (local_38 == 3)) {
            uStack_32 = 0;
          }
          goto switchD_10003d9a_caseD_131;
        case 0x115:
          uStack_32 = 0;
          if (8 < local_34) {
            if (in_stack_00000004[0x5f] == 0) {
              FUN_10002170(in_stack_00000004,0xe);
              goto LAB_100043fd;
            }
            FUN_10002190(in_stack_00000004,0x115);
          }
          iVar6 = in_stack_00000004[0x10];
          if (CONCAT22(uStack_32,local_34) == 1) {
            if ((iVar6 != 1) && (iVar6 != 3)) {
              if (in_stack_00000004[0x5f] == 0) {
                FUN_10002170(in_stack_00000004,0xc);
                goto LAB_100043fd;
              }
              FUN_10002190(in_stack_00000004,0x106);
            }
            uVar3 = in_stack_00000004[7] & 0xffff;
            in_stack_00000004[7] = uVar3;
            if (((uVar3 != 1) && (uVar3 != 8)) && ((uVar3 != 0x10 && (uVar3 != 0x20)))) {
              if (in_stack_00000004[0x5f] == 0) {
                FUN_10002170(in_stack_00000004,10);
                goto LAB_100043fd;
              }
              FUN_10002190(in_stack_00000004,0x102);
            }
            WriteTag(sVar8,0x102,3,(void *)CONCAT22(uStack_32,local_34));
            iVar6 = in_stack_00000004[0x5e];
          }
          else {
            if (iVar6 != 2) {
              if (in_stack_00000004[0x5f] == 0) {
                FUN_10002170(in_stack_00000004,0xc);
                goto LAB_100043fd;
              }
              FUN_10002190(in_stack_00000004,0x106);
            }
            if (CONCAT22(uStack_32,local_34) == 2) {
              uVar3 = in_stack_00000004[7];
              if (((uVar3 == 0x80008) || (uVar3 == 0x100010)) || (uVar3 == 0x200020)) {
                in_stack_00000004[7] = uVar3 & 0xffff;
                WriteTag(sVar8,0x102,3,(void *)CONCAT22(uStack_32,local_34));
                if (in_stack_00000004[0x5e] == 0) {
                  WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
                  psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
                  *(long *)(psVar7 + 4) = lVar2;
                }
              }
              else {
                if (in_stack_00000004[0x5f] == 0) {
                  FUN_10002170(in_stack_00000004,10);
                  goto LAB_100043fd;
                }
                FUN_10002190(in_stack_00000004,0x102);
              }
            }
            else {
              lVar4 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,0,1);
              lVar5 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,in_stack_00000004[7]
                                   ,0);
              if (lVar5 == -1) {
                FUN_10002170(in_stack_00000004,3);
                goto LAB_100043fd;
              }
              uVar3 = CONCAT22(uStack_32,local_34) * 2;
              sVar1 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,
                                   (undefined1 *)&local_10,uVar3,0);
              if (sVar1 != uVar3) {
                FUN_10002170(in_stack_00000004,4);
                goto LAB_100043fd;
              }
              lVar4 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,lVar4,0);
              if (lVar4 == -1) {
                FUN_10002170(in_stack_00000004,3);
                goto LAB_100043fd;
              }
              iVar6 = (int)local_10;
              in_stack_00000004[7] = iVar6;
              if (((iVar6 != 1) && (iVar6 != 8)) && ((iVar6 != 0x10 && (iVar6 != 0x20)))) {
                if (in_stack_00000004[0x5f] == 0) {
                  FUN_10002170(in_stack_00000004,10);
                  goto LAB_100043fd;
                }
                FUN_10002190(in_stack_00000004,0x102);
              }
              iVar6 = 1;
              if (1 < (short)local_34) {
                psVar7 = local_e;
                do {
                  if (*psVar7 != (short)in_stack_00000004[7]) {
                    if (in_stack_00000004[0x5f] == 0) {
                      FUN_10002170(in_stack_00000004,0xf);
                      goto LAB_100043fd;
                    }
                    FUN_10002190(in_stack_00000004,0x102);
                  }
                  psVar7 = psVar7 + 1;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < (short)local_34);
              }
            }
            WriteTag(sVar8,0x102,3,(void *)CONCAT22(uStack_32,local_34));
            iVar6 = in_stack_00000004[0x5e];
          }
          if (iVar6 == 0) {
            WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
            psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
            *(long *)(psVar7 + 4) = lVar2;
          }
          in_stack_00000004[8] = CONCAT22(uStack_32,local_34);
          break;
        case 0x116:
          if (local_38 == 3) {
            uStack_32 = 0;
          }
          in_stack_00000004[9] =
               (in_stack_00000004[6] + -1 + CONCAT22(uStack_32,local_34)) /
               CONCAT22(uStack_32,local_34);
          WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
          psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
          *(long *)(psVar7 + 4) = lVar2;
          break;
        case 0x117:
          if ((local_30 == (void *)0x1) && (local_38 == 3)) {
            uStack_32 = 0;
          }
          goto switchD_10003d9a_caseD_131;
        case 0x11a:
          FUN_100061d0(in_stack_00000004,sStack_36,CONCAT22(sStack_36,local_38),local_30,
                       CONCAT22(uStack_32,local_34),lVar2);
          local_2c = 1;
          break;
        case 0x11b:
          FUN_100061d0(in_stack_00000004,sStack_36,CONCAT22(sStack_36,local_38),local_30,
                       CONCAT22(uStack_32,local_34),lVar2);
          local_24 = 1;
          break;
        case 0x11c:
          uStack_32 = 0;
          if (((in_stack_00000004[8] != 1) && (local_34 != 1)) && (local_34 != 2)) {
            if (in_stack_00000004[0x5f] == 0) {
              FUN_10002170(in_stack_00000004,0xd);
              goto LAB_100043fd;
            }
            FUN_10002190(in_stack_00000004,0x11c);
          }
          *(ushort *)(in_stack_00000004 + 0x11) = local_34;
          iVar6 = in_stack_00000004[9];
          if (CONCAT22(uStack_32,local_34) != 1) {
            iVar6 = iVar6 * in_stack_00000004[8];
          }
          in_stack_00000004[0xe] = iVar6;
          WriteTag(sVar8,sStack_36,CONCAT22(sStack_36,local_38),local_30);
          psVar7 = FUN_10001190(in_stack_00000004 + 0x66,sStack_36,1);
          *(long *)(psVar7 + 4) = lVar2;
          break;
        case 0x131:
          goto switchD_10003d9a_caseD_131;
        case 0x140:
          in_stack_00000004[10] = 1;
switchD_10003d9a_caseD_131:
          FUN_100061d0(in_stack_00000004,sStack_36,CONCAT22(sStack_36,local_38),local_30,
                       CONCAT22(uStack_32,local_34),lVar2);
        }
        if (in_stack_00000004[0x5e] != 0) goto LAB_100043fd;
        local_28 = local_28 + 1;
      } while (local_28 < *(short *)((int)in_stack_00000004 + 0x19a));
    }
    if ((local_2c != 0) && (local_24 != 0)) {
      ReadTag(sVar8,(short *)0x11a,(long *)0x0,(void *)0x0);
      ReadTag(sVar8,(short *)0x11b,(long *)0x0,(void *)0x0);
      *(double *)(in_stack_00000004 + 0xc) = (double)local_20;
      *(double *)(in_stack_00000004 + 0xc) = (double)local_14 * *(double *)(in_stack_00000004 + 0xc)
      ;
      *(double *)(in_stack_00000004 + 0xc) = *(double *)(in_stack_00000004 + 0xc) / (double)local_1c
      ;
      *(double *)(in_stack_00000004 + 0xc) = *(double *)(in_stack_00000004 + 0xc) / (double)local_18
      ;
    }
    FUN_10001e50(in_stack_00000004);
    if (in_stack_00000004[0x5e] == 0) {
      FUN_10001de0((int)in_stack_00000004);
    }
  }
LAB_100043fd:
  return (uint)(in_stack_00000004[0x5e] == 0);
}


// ---- GoToTargetImage @ 10004560

/* public: long __stdcall MTiffHandler::GoToTargetImage(void) */

long MTiffHandler::GoToTargetImage(void)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *in_stack_00000004;
  undefined4 uVar5;
  
                    /* 0x4560  105  ?GoToTargetImage@MTiffHandler@@QAGJXZ */
  if ((in_stack_00000004[0x5e] == 0) && (iVar1 = in_stack_00000004[3], iVar1 != 0)) {
    if ((int)in_stack_00000004[2] < iVar1) {
      uVar5 = 0x10;
LAB_1000460a:
      FUN_10002170(in_stack_00000004,uVar5);
    }
    else {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,
                               *(short *)((int)in_stack_00000004 + 0x19a) * 0xc,1);
          if (lVar2 == -1) {
            uVar5 = 3;
            goto LAB_1000460a;
          }
          sVar3 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,
                               (undefined1 *)(in_stack_00000004 + 0x67),4,0);
          if (sVar3 != 4) {
LAB_10004608:
            uVar5 = 4;
            goto LAB_1000460a;
          }
          lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,in_stack_00000004[0x67],
                               0);
          if (lVar2 == -1) {
            uVar5 = 3;
            goto LAB_1000460a;
          }
          sVar3 = FUN_10001990(in_stack_00000004,(FILE *)*in_stack_00000004,
                               (undefined1 *)((int)in_stack_00000004 + 0x19a),2,0);
          if (sVar3 != 2) goto LAB_10004608;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)in_stack_00000004[3]);
      }
    }
  }
  return (uint)(in_stack_00000004[0x5e] == 0);
}


// ---- ReadInfoValue @ 10004630

/* public: long __stdcall MTiffHandler::ReadInfoValue(long,void *) */

long MTiffHandler::ReadInfoValue(long param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *in_stack_0000000c;
  
                    /* 0x4630  111  ?ReadInfoValue@MTiffHandler@@QAGJJPAX@Z */
  if (*(int *)(param_1 + 0x178) == 0) {
    switch(param_2) {
    case (void *)0x1:
      *in_stack_0000000c = (int)*(short *)(param_1 + 400);
      break;
    case (void *)0x2:
      *in_stack_0000000c = (int)*(short *)(param_1 + 0x192);
      break;
    case (void *)0x3:
      *in_stack_0000000c = (int)*(short *)(param_1 + 0x19a);
      break;
    case (void *)0x4:
      *in_stack_0000000c = (int)*(short *)(param_1 + 0x198);
      break;
    case (void *)0x5:
      *in_stack_0000000c = *(int *)(param_1 + 8);
      break;
    case (void *)0x6:
      *in_stack_0000000c = *(int *)(param_1 + 0xc);
      break;
    case (void *)0x7:
      *in_stack_0000000c = *(int *)(param_1 + 0x14);
      break;
    case (void *)0x8:
      *in_stack_0000000c = *(int *)(param_1 + 0x18);
      break;
    case (void *)0x9:
      *in_stack_0000000c = *(int *)(param_1 + 0x1c);
      break;
    case (void *)0xa:
      *in_stack_0000000c = *(int *)(param_1 + 0x20);
      break;
    case (void *)0xb:
      *in_stack_0000000c = *(int *)(param_1 + 0x28);
      break;
    case (void *)0xc:
      uVar2 = 0xffffffff;
      pcVar3 = *(char **)(param_1 + 4);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_10001c20(in_stack_0000000c,(undefined4 *)*(char **)(param_1 + 4),~uVar2 - 1);
      break;
    default:
      FUN_10002170((void *)param_1,0x12);
      break;
    case (void *)0xe:
      FUN_100011e0((void *)(param_1 + 0x198),(int)in_stack_0000000c);
      break;
    case (void *)0xf:
      in_stack_0000000c[1] = *(int *)(param_1 + 0x34);
      *in_stack_0000000c = *(int *)(param_1 + 0x30);
    }
  }
  return (uint)(*(int *)(param_1 + 0x178) == 0);
}


// ---- ReadTag @ 10004790

/* public: long __stdcall MTiffHandler::ReadTag(short,short *,long *,void *) */

long MTiffHandler::ReadTag(short param_1,short *param_2,long *param_3,void *param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  undefined2 in_stack_00000006;
  undefined4 *in_stack_00000014;
  
                    /* 0x4790  113  ?ReadTag@MTiffHandler@@QAGJFPAFPAJPAX@Z */
  if (_param_1[0x5e] == 0) {
    psVar2 = FUN_10001190(_param_1 + 0x66,(short)param_2,1);
    if (psVar2 != (short *)0x0) {
      if (param_3 != (long *)0x0) {
        *(short *)param_3 = psVar2[1];
      }
      if (param_4 != (void *)0x0) {
        *(undefined4 *)param_4 = *(undefined4 *)(psVar2 + 2);
      }
      if (in_stack_00000014 != (undefined4 *)0x0) {
        uVar3 = FUN_10001d60((int)psVar2);
        sVar1 = (short)uVar3;
        if (sVar1 < 5) {
          if (sVar1 == 4) {
            *in_stack_00000014 = *(undefined4 *)(psVar2 + 6);
          }
          else if (sVar1 == 2) {
            *(short *)in_stack_00000014 = (short)*(undefined4 *)(psVar2 + 6);
          }
          else if (sVar1 == 1) {
            *(char *)in_stack_00000014 = (char)psVar2[6];
          }
        }
        else if (*(undefined4 **)(psVar2 + 6) == (undefined4 *)0x0) {
          if (*(int *)(psVar2 + 4) != -1) {
            lVar4 = FUN_10001a40(_param_1,(FILE *)*_param_1,0,1);
            FUN_10001a40(_param_1,(FILE *)*_param_1,*(int *)(psVar2 + 4),0);
            FUN_10001b20(_param_1,(FILE *)*_param_1,(undefined1 *)in_stack_00000014,(int)sVar1);
            FUN_10001a40(_param_1,(FILE *)*_param_1,lVar4,0);
          }
        }
        else {
          FUN_10001c20(in_stack_00000014,*(undefined4 **)(psVar2 + 6),(int)sVar1);
        }
      }
      uVar5 = FUN_10001d60((int)psVar2);
      return uVar5 & 0xffff;
    }
  }
  return 0;
}


// ---- WriteImage @ 100048a0

/* public: long __stdcall MTiffHandler::WriteImage(void *,short) */

long MTiffHandler::WriteImage(void *param_1,short param_2)

{
  undefined4 unaff_EDI;
  short in_stack_0000000c;
  
                    /* 0x48a0  116  ?WriteImage@MTiffHandler@@QAGJPAXF@Z */
  if ((in_stack_0000000c == 1) && (*(int *)((int)param_1 + 0x1c) == 1)) {
    FUN_10002170(param_1,5);
  }
  if (*(int *)((int)param_1 + 0x178) == 0) {
    WriteImageBlock(param_1,param_2,CONCAT22((short)((uint)unaff_EDI >> 0x10),in_stack_0000000c),0,0
                    ,*(long *)((int)param_1 + 0x14));
  }
  return (uint)(*(int *)((int)param_1 + 0x178) == 0);
}


// ---- WriteImageBlock @ 10004900

/* public: long __stdcall MTiffHandler::WriteImageBlock(void *,short,long,long,long,long) */

long MTiffHandler::WriteImageBlock
               (void *param_1,short param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined2 in_stack_0000000a;
  int in_stack_0000001c;
  
                    /* 0x4900  117  ?WriteImageBlock@MTiffHandler@@QAGJPAXFJJJJ@Z */
  if (*(int *)((int)param_1 + 0x178) == 0) {
    if ((*(int *)((int)param_1 + 0x14) < param_6 + param_4) ||
       (*(int *)((int)param_1 + 0x18) < param_5 + in_stack_0000001c)) {
      FUN_10002170(param_1,0x11);
    }
    else {
      FUN_10001de0((int)param_1);
      if ((short)param_3 == 1) {
        if (*(short *)((int)param_1 + 0x44) == 1) {
          FUN_10004a10(param_1,_param_2,param_4,param_5,param_6,in_stack_0000001c);
        }
        if (*(short *)((int)param_1 + 0x44) == 2) {
          FUN_10004af0(param_1,(int)_param_2,param_4,param_5,param_6,in_stack_0000001c);
        }
      }
      else if ((short)param_3 == 2) {
        if (*(short *)((int)param_1 + 0x44) == 1) {
          FUN_10004c40(param_1,(int)_param_2,param_4,param_5,param_6,in_stack_0000001c);
        }
        if (*(short *)((int)param_1 + 0x44) == 2) {
          FUN_10004a10(param_1,_param_2,param_4,param_5,param_6,in_stack_0000001c);
        }
      }
      else if ((short)param_3 == 3) {
        FUN_10004a10(param_1,_param_2,param_4,param_5,param_6,in_stack_0000001c);
      }
    }
  }
  return (uint)(*(int *)((int)param_1 + 0x178) == 0);
}


// ---- FUN_10004a10 @ 10004a10

bool __thiscall
FUN_10004a10(void *this,byte *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  local_4 = 0;
  iVar3 = param_3;
  if (0 < *(int *)((int)this + 0x48)) {
    do {
      local_8 = 0;
      if (0 < param_5) {
        do {
          FUN_10005650(this,param_1,iVar3,param_2,param_4);
          if (*(int *)((int)this + 0x178) != 0) goto LAB_10004ace;
          iVar3 = iVar3 + 1;
          if (*(int *)((int)this + 0x1c) == 1) {
            uVar2 = (int)param_4 >> 0x1f;
            iVar1 = ((uint)(((param_4 ^ uVar2) - uVar2 & 0x1f ^ uVar2) != uVar2) +
                    ((int)(param_4 + (uVar2 & 0x1f)) >> 5)) * 4;
          }
          else {
            iVar1 = *(int *)((int)this + 0x4c) * param_4;
          }
          param_1 = param_1 + iVar1;
          local_8 = local_8 + 1;
        } while (local_8 < param_5);
      }
      local_4 = local_4 + 1;
      iVar3 = (iVar3 - param_3) + (*(int *)((int)this + 0x18) - param_5);
    } while (local_4 < *(int *)((int)this + 0x48));
  }
LAB_10004ace:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10004af0 @ 10004af0

undefined4 __thiscall
FUN_10004af0(void *this,int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int local_14;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = 1;
  pbVar1 = operator_new(param_4);
  if (pbVar1 == (byte *)0x0) {
    FUN_10002170(this,6);
LAB_10004c12:
    local_4 = 0;
  }
  else {
    local_14 = 0;
    if (0 < *(int *)((int)this + 0x20)) {
      do {
        local_c = 0;
        local_8 = param_3 + *(int *)((int)this + 0x18) * local_14;
        if (0 < param_5) {
          do {
            iVar4 = 0;
            if (0 < (int)param_4) {
              iVar2 = 0;
              pbVar3 = pbVar1;
              do {
                if (*(int *)((int)this + 0x1c) == 8) {
                  pbVar1[iVar4] =
                       *(byte *)(*(int *)((int)this + 0x20) * param_4 * local_c + local_14 + param_1
                                + iVar2);
                }
                else {
                  *(undefined2 *)pbVar3 =
                       *(undefined2 *)
                        (param_1 +
                        (*(int *)((int)this + 0x20) * param_4 * local_c + local_14 + iVar2) * 2);
                }
                pbVar3 = pbVar3 + 2;
                iVar2 = iVar2 + 3;
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)param_4);
            }
            FUN_10005650(this,pbVar1,local_8,param_2,param_4);
            if (*(int *)((int)this + 0x178) != 0) goto LAB_10004c12;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          } while (local_c < param_5);
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)((int)this + 0x20));
    }
  }
  if (pbVar1 != (byte *)0x0) {
    operator_delete(pbVar1);
  }
  return local_4;
}


// ---- FUN_10004c40 @ 10004c40

bool __thiscall
FUN_10004c40(void *this,int param_1,long param_2,long param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x4c) * param_5 * param_4;
  piVar1 = operator_new(0xc);
  if (piVar1 == (int *)0x0) {
    FUN_10002170(this,6);
  }
  else {
    *piVar1 = param_1;
    piVar1[1] = iVar2 / 3 + param_1;
    piVar1[2] = param_1 + (iVar2 * 2) / 3;
    MTiffHandler::WriteImageListBlock(this,(long)piVar1,param_2,param_3,param_4);
    operator_delete(piVar1);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- WriteImageList @ 10004ce0

/* public: long __stdcall MTiffHandler::WriteImageList(void * *) */

long MTiffHandler::WriteImageList(void **param_1)

{
  int *in_stack_00000008;
  
                    /* 0x4ce0  118  ?WriteImageList@MTiffHandler@@QAGJPAPAX@Z */
  if (param_1[0x5e] == (void *)0x0) {
    FUN_10001de0((int)param_1);
    if (*(short *)(param_1 + 0x11) == 1) {
      FUN_100052d0(param_1,in_stack_00000008,0,0,(uint)param_1[5],(int)param_1[6]);
    }
    else if (*(short *)(param_1 + 0x11) == 2) {
      FUN_10004df0(param_1,in_stack_00000008,0,0,(uint)param_1[5],(int)param_1[6]);
    }
  }
  return (uint)(param_1[0x5e] == (void *)0x0);
}


// ---- WriteImageListBlock @ 10004d50

/* public: long __stdcall MTiffHandler::WriteImageListBlock(void * *,long,long,long,long) */

long MTiffHandler::WriteImageListBlock
               (void **param_1,long param_2,long param_3,long param_4,long param_5)

{
  int in_stack_00000018;
  
                    /* 0x4d50  119  ?WriteImageListBlock@MTiffHandler@@QAGJPAPAXJJJJ@Z */
  if (param_1[0x5e] == (void *)0x0) {
    if (param_5 + param_3 <= (int)param_1[5]) {
      if (param_4 + in_stack_00000018 <= (int)param_1[6]) {
        FUN_10001de0((int)param_1);
        if (*(short *)(param_1 + 0x11) == 1) {
          FUN_100052d0(param_1,(int *)param_2,param_3,param_4,param_5,in_stack_00000018);
        }
        else if (*(short *)(param_1 + 0x11) == 2) {
          FUN_10004df0(param_1,(undefined4 *)param_2,param_3,param_4,param_5,in_stack_00000018);
        }
        goto LAB_10004dd1;
      }
    }
    FUN_10002170(param_1,0x11);
  }
LAB_10004dd1:
  return (uint)(param_1[0x5e] == (void *)0x0);
}


// ---- FUN_10004df0 @ 10004df0

bool __thiscall
FUN_10004df0(void *this,undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  int local_4;
  
  iVar3 = *(int *)((int)this + 0x1c);
  if (iVar3 == 1) {
    pbVar4 = (byte *)*param_1;
    local_c = (byte *)param_1[1];
    local_14 = (byte *)param_1[2];
    uVar1 = (int)param_4 >> 0x1f;
    local_4 = 0;
    local_10 = (byte *)param_3;
    iVar3 = (uint)(((param_4 ^ uVar1) - uVar1 & 0x1f ^ uVar1) != uVar1) +
            ((int)(param_4 + (uVar1 & 0x1f)) >> 5);
    if (0 < param_5) {
      do {
        FUN_10005650(this,pbVar4,(int)local_10,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        local_10 = (byte *)((int)local_10 + 1);
        pbVar4 = pbVar4 + iVar3 * 4;
        local_4 = local_4 + 1;
      } while (local_4 < param_5);
    }
    local_4 = 0;
    iVar2 = *(int *)((int)this + 0x18) + param_3;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_c,iVar2,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        iVar2 = iVar2 + 1;
        local_c = local_c + iVar3 * 4;
        local_4 = local_4 + 1;
      } while (local_4 < param_5);
    }
    local_4 = 0;
    iVar2 = param_3 + *(int *)((int)this + 0x18) * 2;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_14,iVar2,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) break;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + iVar3 * 4;
        local_4 = local_4 + 1;
      } while (local_4 < param_5);
    }
  }
  else if (iVar3 == 8) {
    local_14 = (byte *)0x0;
    local_10 = (byte *)*param_1;
    local_c = (byte *)param_1[1];
    local_8 = (byte *)param_1[2];
    iVar3 = param_3;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_10,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        iVar3 = iVar3 + 1;
        local_10 = local_10 + param_4;
        local_14 = (byte *)((int)local_14 + 1);
      } while ((int)local_14 < param_5);
    }
    local_14 = (byte *)0x0;
    iVar3 = *(int *)((int)this + 0x18) + param_3;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_c,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        iVar3 = iVar3 + 1;
        local_c = local_c + param_4;
        local_14 = (byte *)((int)local_14 + 1);
      } while ((int)local_14 < param_5);
    }
    local_14 = (byte *)0x0;
    iVar3 = param_3 + *(int *)((int)this + 0x18) * 2;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_8,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) break;
        iVar3 = iVar3 + 1;
        local_8 = local_8 + param_4;
        local_14 = (byte *)((int)local_14 + 1);
      } while ((int)local_14 < param_5);
    }
  }
  else if (iVar3 == 0x10) {
    pbVar4 = (byte *)*param_1;
    local_c = (byte *)param_1[1];
    local_8 = (byte *)param_1[2];
    local_10 = (byte *)param_3;
    local_14 = (byte *)0x0;
    if (0 < param_5) {
      do {
        FUN_10005650(this,pbVar4,(int)local_10,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        pbVar4 = pbVar4 + param_4 * 2;
        local_10 = (byte *)((int)local_10 + 1);
        local_14 = (byte *)((int)local_14 + 1);
      } while ((int)local_14 < param_5);
    }
    local_14 = (byte *)0x0;
    iVar3 = *(int *)((int)this + 0x18) + param_3;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_c,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        iVar3 = iVar3 + 1;
        local_14 = (byte *)((int)local_14 + 1);
        local_c = local_c + param_4 * 2;
      } while ((int)local_14 < param_5);
    }
    local_14 = (byte *)0x0;
    iVar3 = param_3 + *(int *)((int)this + 0x18) * 2;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_8,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) break;
        iVar3 = iVar3 + 1;
        local_14 = (byte *)((int)local_14 + 1);
        local_8 = local_8 + param_4 * 2;
      } while ((int)local_14 < param_5);
    }
  }
  else if (iVar3 == 0x20) {
    pbVar4 = (byte *)*param_1;
    local_c = (byte *)param_1[1];
    local_8 = (byte *)param_1[2];
    local_10 = (byte *)param_3;
    local_14 = (byte *)0x0;
    if (0 < param_5) {
      do {
        FUN_10005650(this,pbVar4,(int)local_10,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        pbVar4 = pbVar4 + param_4 * 4;
        local_10 = (byte *)((int)local_10 + 1);
        local_14 = (byte *)((int)local_14 + 1);
      } while ((int)local_14 < param_5);
    }
    local_14 = (byte *)0x0;
    iVar3 = *(int *)((int)this + 0x18) + param_3;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_c,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) goto LAB_100052ac;
        iVar3 = iVar3 + 1;
        local_14 = (byte *)((int)local_14 + 1);
        local_c = local_c + param_4 * 4;
      } while ((int)local_14 < param_5);
    }
    local_14 = (byte *)0x0;
    iVar3 = param_3 + *(int *)((int)this + 0x18) * 2;
    if (0 < param_5) {
      do {
        FUN_10005650(this,local_8,iVar3,param_2,param_4);
        if (*(int *)((int)this + 0x178) != 0) break;
        iVar3 = iVar3 + 1;
        local_14 = (byte *)((int)local_14 + 1);
        local_8 = local_8 + param_4 * 4;
      } while ((int)local_14 < param_5);
    }
  }
LAB_100052ac:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_100052d0 @ 100052d0

bool __thiscall
FUN_100052d0(void *this,int *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  byte *local_c;
  byte *local_8;
  byte *local_4;
  
  local_c = (byte *)0x0;
  local_8 = (byte *)0x0;
  local_4 = (byte *)0x0;
  local_20 = param_3;
  uVar3 = *(int *)((int)this + 0x4c) * param_4;
  iVar10 = *(int *)((int)this + 0x1c);
  if (iVar10 == 8) {
    local_c = operator_new(uVar3);
    if (local_c == (byte *)0x0) {
      FUN_10002170(this,6);
    }
    else {
      local_24 = 0;
      iVar10 = *param_1;
      iVar7 = param_1[1];
      iVar8 = param_1[2];
      if (0 < param_5) {
        do {
          iVar5 = 0;
          pbVar1 = local_c;
          if (0 < (int)param_4) {
            do {
              iVar6 = iVar5 + 1;
              *pbVar1 = *(byte *)(iVar5 + iVar10);
              pbVar1[1] = *(byte *)(iVar5 + iVar7);
              pbVar1[2] = *(byte *)(iVar5 + iVar8);
              pbVar1 = pbVar1 + 3;
              iVar5 = iVar6;
            } while (iVar6 < (int)param_4);
          }
          FUN_10005650(this,local_c,local_20,param_2,param_4);
          if (*(int *)((int)this + 0x178) != 0) break;
          iVar8 = iVar8 + param_4;
          local_20 = local_20 + 1;
          iVar7 = iVar7 + param_4;
          iVar10 = iVar10 + param_4;
          local_24 = local_24 + 1;
        } while (local_24 < param_5);
      }
    }
  }
  else if (iVar10 == 0x10) {
    local_8 = operator_new(uVar3 & 0xfffffffe);
    if (local_8 == (byte *)0x0) {
      FUN_10002170(this,6);
    }
    else {
      local_24 = 0;
      local_1c = (undefined4 *)*param_1;
      local_18 = (undefined4 *)param_1[1];
      local_10 = (undefined4 *)param_1[2];
      if (0 < param_5) {
        do {
          pbVar1 = local_8;
          uVar3 = param_4;
          puVar2 = local_1c;
          puVar4 = local_10;
          puVar9 = local_18;
          if (0 < (int)param_4) {
            do {
              *(undefined2 *)pbVar1 = *(undefined2 *)puVar2;
              *(undefined2 *)(pbVar1 + 2) = *(undefined2 *)puVar9;
              uVar3 = uVar3 - 1;
              *(undefined2 *)(pbVar1 + 4) = *(undefined2 *)puVar4;
              pbVar1 = pbVar1 + 6;
              puVar2 = (undefined4 *)((int)puVar2 + 2);
              puVar4 = (undefined4 *)((int)puVar4 + 2);
              puVar9 = (undefined4 *)((int)puVar9 + 2);
            } while (uVar3 != 0);
          }
          FUN_10005650(this,local_8,local_20,param_2,param_4);
          if (*(int *)((int)this + 0x178) != 0) break;
          local_20 = local_20 + 1;
          local_1c = (undefined4 *)((int)local_1c + param_4 * 2);
          local_18 = (undefined4 *)((int)local_18 + param_4 * 2);
          local_10 = (undefined4 *)((int)local_10 + param_4 * 2);
          local_24 = local_24 + 1;
        } while (local_24 < param_5);
      }
    }
  }
  else if (iVar10 == 0x20) {
    local_4 = operator_new((uVar3 & 0xfffffffe) * 2);
    if (local_4 == (byte *)0x0) {
      FUN_10002170(this,6);
    }
    else {
      local_24 = 0;
      local_1c = (undefined4 *)*param_1;
      local_18 = (undefined4 *)param_1[1];
      local_10 = (undefined4 *)param_1[2];
      if (0 < param_5) {
        do {
          puVar2 = local_1c;
          puVar4 = local_18;
          pbVar1 = local_4;
          puVar9 = local_10;
          uVar3 = param_4;
          if (0 < (int)param_4) {
            do {
              *(undefined4 *)pbVar1 = *puVar2;
              *(undefined4 *)(pbVar1 + 4) = *puVar4;
              uVar3 = uVar3 - 1;
              *(undefined4 *)(pbVar1 + 8) = *puVar9;
              puVar2 = puVar2 + 1;
              puVar4 = puVar4 + 1;
              pbVar1 = pbVar1 + 0xc;
              puVar9 = puVar9 + 1;
            } while (uVar3 != 0);
          }
          FUN_10005650(this,local_4,local_20,param_2,param_4);
          if (*(int *)((int)this + 0x178) != 0) break;
          local_20 = local_20 + 1;
          local_1c = local_1c + param_4;
          local_18 = local_18 + param_4;
          local_10 = local_10 + param_4;
          local_24 = local_24 + 1;
        } while (local_24 < param_5);
      }
    }
  }
  if (local_c != (byte *)0x0) {
    operator_delete(local_c);
  }
  if (local_8 != (byte *)0x0) {
    operator_delete(local_8);
  }
  if (local_4 != (byte *)0x0) {
    operator_delete(local_4);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- FUN_10005650 @ 10005650

bool __thiscall FUN_10005650(void *this,byte *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = FUN_10002110(this,param_2);
  if (*(int *)((int)this + 0x1c) == 1) {
    uVar3 = (int)param_3 >> 0x1f;
    lVar2 = FUN_10001a40(this,*(FILE **)this,
                         (uint)(((param_3 ^ uVar3) - uVar3 & 7 ^ uVar3) != uVar3) +
                         ((int)(param_3 + (uVar3 & 7)) >> 3) + iVar1,0);
    if (lVar2 == -1) {
      FUN_10002170(this,3);
      goto LAB_1000571f;
    }
  }
  else {
    lVar2 = FUN_10001a40(this,*(FILE **)this,*(int *)((int)this + 0x4c) * param_3 + iVar1,0);
    if (lVar2 == -1) {
      FUN_10002170(this,3);
      goto LAB_1000571f;
    }
  }
  if (*(int *)((int)this + 0x1c) == 1) {
    uVar3 = (int)param_4 >> 0x1f;
    iVar1 = (uint)(((param_4 ^ uVar3) - uVar3 & 7 ^ uVar3) != uVar3) +
            ((int)(param_4 + (uVar3 & 7)) >> 3);
  }
  else {
    iVar1 = *(int *)((int)this + 0x4c) * param_4;
  }
  FUN_10001ba0(this,*(FILE **)this,param_1,iVar1);
LAB_1000571f:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- WriteInfo @ 10005740

/* public: long __stdcall MTiffHandler::WriteInfo(void) */

long MTiffHandler::WriteInfo(void)

{
  ushort uVar1;
  long lVar2;
  size_t sVar3;
  short *psVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *in_stack_00000004;
  int local_18;
  short *local_14;
  int local_10;
  short *local_c;
  int local_8;
  byte local_4 [4];
  
                    /* 0x5740  120  ?WriteInfo@MTiffHandler@@QAGJXZ */
  local_14 = (short *)0x0;
  if (in_stack_00000004[0x5e] == 0) {
    lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,in_stack_00000004[0x65],0);
    sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,
                         (byte *)(in_stack_00000004 + 0x66),2,0);
    if (sVar3 == 2) {
      local_10 = lVar2 + 2;
      local_18 = lVar2 + 6 + *(short *)(in_stack_00000004 + 0x66) * 0xc;
      in_stack_00000004[0x17] = in_stack_00000004[0x16] + local_18;
      psVar4 = FUN_10001190(in_stack_00000004 + 0x66,0x100,1);
      in_stack_00000004[5] = *(undefined4 *)(psVar4 + 6);
      psVar4 = FUN_10001190(in_stack_00000004 + 0x66,0x101,2);
      in_stack_00000004[6] = *(undefined4 *)(psVar4 + 6);
      psVar4 = FUN_10001190(in_stack_00000004 + 0x66,0x115,2);
      in_stack_00000004[8] = (int)psVar4[6];
      FUN_10001de0((int)in_stack_00000004);
      uVar9 = in_stack_00000004[6];
      if (in_stack_00000004[0xf] != 1) {
        uVar9 = uVar9 * in_stack_00000004[8];
      }
      puVar5 = operator_new(uVar9 * 4);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_10002170(in_stack_00000004,6);
      }
      else {
        iVar7 = 0;
        if (0 < (int)uVar9) {
          do {
            if (in_stack_00000004[7] == 1) {
              uVar8 = (int)in_stack_00000004[5] >> 0x1f;
              puVar5[iVar7] =
                   ((uint)(((in_stack_00000004[5] ^ uVar8) - uVar8 & 7 ^ uVar8) != uVar8) +
                   ((int)(in_stack_00000004[5] + ((int)in_stack_00000004[5] >> 0x1f & 7U)) >> 3)) *
                   iVar7 + in_stack_00000004[0x17];
            }
            else {
              puVar5[iVar7] =
                   in_stack_00000004[0x13] * in_stack_00000004[5] * iVar7 + in_stack_00000004[0x17];
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)uVar9);
        }
        psVar4 = FUN_10001190(in_stack_00000004 + 0x66,0x111,1);
        if ((uVar9 & 0x3fffffff) < 2) {
          *(undefined4 *)(psVar4 + 6) = *puVar5;
        }
        else {
          FUN_10001c20(*(undefined4 **)(psVar4 + 6),puVar5,uVar9 << 2);
        }
        operator_delete(puVar5);
        local_14 = operator_new(*(short *)(in_stack_00000004 + 0x66) * 2);
        FUN_100011e0(in_stack_00000004 + 0x66,(int)local_14);
        FUN_10001190(in_stack_00000004 + 0x66,0xfe,1);
        local_8 = 0;
        if (0 < *(short *)(in_stack_00000004 + 0x66)) {
          local_c = local_14;
          do {
            pbVar6 = (byte *)FUN_10001190(in_stack_00000004 + 0x66,*local_c,2);
            sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,pbVar6,2,0);
            if (sVar3 != 2) {
              FUN_10002170(in_stack_00000004,5);
              goto LAB_10005b34;
            }
            sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,pbVar6 + 2,2,0);
            if (sVar3 != 2) {
              FUN_10002170(in_stack_00000004,5);
              goto LAB_10005b34;
            }
            sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,pbVar6 + 4,4,0);
            if (sVar3 != 4) {
              FUN_10002170(in_stack_00000004,5);
              goto LAB_10005b34;
            }
            uVar1 = FUN_10001d00(*(short *)(pbVar6 + 2),(short)*(undefined4 *)(pbVar6 + 4));
            iVar7 = local_18;
            uVar9 = (uint)uVar1;
            if (uVar9 < 5) {
              iVar7 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,0,1);
              sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,pbVar6 + 0xc,4,0);
              if (sVar3 != 4) {
                FUN_10002170(in_stack_00000004,5);
                goto LAB_10005b34;
              }
            }
            else {
              sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,(byte *)&local_18,4,
                                   0);
              if (sVar3 != 4) {
                FUN_10002170(in_stack_00000004,5);
                goto LAB_10005b34;
              }
              lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,local_18,0);
              if (lVar2 == -1) {
                FUN_10002170(in_stack_00000004,3);
                goto LAB_10005b34;
              }
              sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,
                                   *(byte **)(pbVar6 + 0xc),uVar9,0);
              if (sVar3 != uVar9) {
                FUN_10002170(in_stack_00000004,5);
                goto LAB_10005b34;
              }
              lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,local_10 + 0xc,0);
              if (lVar2 == -1) {
                FUN_10002170(in_stack_00000004,3);
                goto LAB_10005b34;
              }
              local_18 = local_18 + uVar9;
            }
            local_10 = local_10 + 0xc;
            local_c = local_c + 1;
            *(int *)(pbVar6 + 8) = iVar7;
            local_8 = local_8 + 1;
          } while (local_8 < *(short *)(in_stack_00000004 + 0x66));
        }
        operator_delete(local_14);
        local_4[0] = 0;
        local_4[1] = 0;
        local_4[2] = 0;
        local_4[3] = 0;
        sVar3 = FUN_10001890(in_stack_00000004,(FILE *)*in_stack_00000004,local_4,4,0);
        if (sVar3 == 4) {
          lVar2 = FUN_10001a40(in_stack_00000004,(FILE *)*in_stack_00000004,local_18,0);
          if (lVar2 == -1) {
            FUN_10002170(in_stack_00000004,3);
          }
          else {
            FUN_10001e50(in_stack_00000004);
          }
        }
        else {
          FUN_10002170(in_stack_00000004,5);
        }
      }
    }
    else {
      FUN_10002170(in_stack_00000004,5);
    }
LAB_10005b34:
    if (in_stack_00000004[0x5e] == 0) {
      return 1;
    }
  }
  if (local_14 != (short *)0x0) {
    operator_delete(local_14);
  }
  return 0;
}


// ---- FUN_10005b70 @ 10005b70

bool __thiscall
FUN_10005b70(void *this,uint param_1,void *param_2,short param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined2 *puVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  short sVar11;
  short local_10;
  
  if (param_4 == 1) {
    param_4 = 1;
    uVar8 = (int)param_1 >> 0x1f;
    uVar8 = (uint)(((param_1 ^ uVar8) - uVar8 & 7 ^ uVar8) != uVar8) +
            ((int)(param_1 + (uVar8 & 7)) >> 3);
  }
  else if (param_4 < 9) {
    param_4 = 8;
    uVar8 = param_1;
  }
  else if (param_4 < 0x11) {
    param_4 = 0x10;
    uVar8 = param_1 * 2;
  }
  else {
    param_4 = 0x20;
    uVar8 = param_1 << 2;
  }
  sVar11 = (short)this;
  MTiffHandler::WriteTag(sVar11,0xfe,4,(void *)0x1);
  if ((*(int *)((int)this + 0x178) == 0) &&
     (MTiffHandler::WriteTag(sVar11,0x100,4,(void *)0x1), *(int *)((int)this + 0x178) == 0)) {
    *(uint *)((int)this + 0x14) = param_1;
    MTiffHandler::WriteTag(sVar11,0x101,4,(void *)0x1);
    if (*(int *)((int)this + 0x178) == 0) {
      *(void **)((int)this + 0x18) = param_2;
      if (param_3 == 1) {
        MTiffHandler::WriteTag(sVar11,0x102,3,(void *)0x1);
        iVar5 = *(int *)((int)this + 0x178);
      }
      else if (param_3 == 2) {
        MTiffHandler::WriteTag(sVar11,0x102,3,(void *)0x2);
        iVar5 = *(int *)((int)this + 0x178);
      }
      else {
        puVar1 = operator_new(param_3 * 2);
        if (puVar1 == (undefined2 *)0x0) {
          FUN_10002170(this,6);
          goto LAB_1000603e;
        }
        iVar5 = 0;
        puVar6 = puVar1;
        if (0 < param_3) {
          do {
            *puVar6 = (short)param_4;
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar5 < param_3);
        }
        MTiffHandler::WriteTag(sVar11,0x102,3,(void *)(int)param_3);
        operator_delete(puVar1);
        iVar5 = *(int *)((int)this + 0x178);
      }
      if (iVar5 == 0) {
        *(int *)((int)this + 0x1c) = param_4;
        MTiffHandler::WriteTag(sVar11,0x103,3,(void *)0x1);
        if (*(int *)((int)this + 0x178) == 0) {
          local_10 = (param_3 != 1) + 1;
          MTiffHandler::WriteTag(sVar11,0x106,3,(void *)0x1);
          if (*(int *)((int)this + 0x178) == 0) {
            *(int *)((int)this + 0x40) = (int)local_10;
            pvVar9 = param_2;
            if (param_5 != 1) {
              pvVar9 = (void *)((int)param_3 * (int)param_2);
            }
            puVar2 = operator_new((int)pvVar9 * 4);
            if (puVar2 == (undefined4 *)0x0) {
              FUN_10002170(this,6);
            }
            else {
              pvVar7 = pvVar9;
              puVar10 = puVar2;
              if (0 < (int)pvVar9) {
                for (; pvVar7 != (void *)0x0; pvVar7 = (void *)((int)pvVar7 + -1)) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
              }
              MTiffHandler::WriteTag(sVar11,0x111,4,pvVar9);
              operator_delete(puVar2);
              if ((*(int *)((int)this + 0x178) == 0) &&
                 (MTiffHandler::WriteTag(sVar11,0x115,3,(void *)0x1),
                 *(int *)((int)this + 0x178) == 0)) {
                *(int *)((int)this + 0x20) = (int)param_3;
                MTiffHandler::WriteTag(sVar11,0x116,4,(void *)0x1);
                if (*(int *)((int)this + 0x178) == 0) {
                  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x18) / 1;
                  if (param_5 == 1) {
                    uVar8 = (int)param_3 * uVar8;
                  }
                  else {
                    param_2 = (void *)((int)param_3 * (int)param_2);
                  }
                  if (param_2 == (void *)0x1) {
                    MTiffHandler::WriteTag(sVar11,0x117,4,(void *)0x1);
                    iVar5 = *(int *)((int)this + 0x178);
                  }
                  else {
                    puVar3 = operator_new((int)param_2 * 4);
                    if (puVar3 == (uint *)0x0) {
                      FUN_10002170(this,6);
                      goto LAB_1000603e;
                    }
                    puVar4 = puVar3;
                    pvVar9 = param_2;
                    if (0 < (int)param_2) {
                      do {
                        pvVar9 = (void *)((int)pvVar9 + -1);
                        *puVar4 = uVar8;
                        puVar4 = puVar4 + 1;
                      } while (pvVar9 != (void *)0x0);
                    }
                    MTiffHandler::WriteTag(sVar11,0x117,4,param_2);
                    operator_delete(puVar3);
                    iVar5 = *(int *)((int)this + 0x178);
                  }
                  if (((iVar5 == 0) &&
                      (MTiffHandler::WriteTag(sVar11,0x11a,5,(void *)0x1),
                      *(int *)((int)this + 0x178) == 0)) &&
                     (MTiffHandler::WriteTag(sVar11,0x11b,5,(void *)0x1),
                     *(int *)((int)this + 0x178) == 0)) {
                    if (param_3 != 1) {
                      MTiffHandler::WriteTag(sVar11,0x11c,3,(void *)0x1);
                      if (*(int *)((int)this + 0x178) != 0) goto LAB_1000603e;
                      *(short *)((int)this + 0x44) = (short)param_5;
                    }
                    iVar5 = *(int *)((int)this + 0x24);
                    if (param_5 != 1) {
                      iVar5 = iVar5 * *(int *)((int)this + 0x20);
                    }
                    *(int *)((int)this + 0x38) = iVar5;
                    MTiffHandler::WriteTag(sVar11,0x128,3,(void *)0x1);
                    if ((*(int *)((int)this + 0x178) == 0) &&
                       (FUN_10001e50(this), *(int *)((int)this + 0x178) == 0)) {
                      FUN_10001de0((int)this);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1000603e:
  return *(int *)((int)this + 0x178) == 0;
}


// ---- WriteTag @ 10006060

/* public: long __stdcall MTiffHandler::WriteTag(short,short,long,void *) */

long MTiffHandler::WriteTag(short param_1,short param_2,long param_3,void *param_4)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 in_stack_00000006;
  uint *in_stack_00000014;
  
                    /* 0x6060  121  ?WriteTag@MTiffHandler@@QAGJFFJPAX@Z */
  puVar7 = (undefined4 *)0x0;
  bVar2 = true;
  if (*(int *)((int)_param_1 + 0x178) == 0) {
    psVar3 = operator_new(0x18);
    if (psVar3 == (short *)0x0) {
      FUN_10002170(_param_1,6);
    }
    else {
      *psVar3 = param_2;
      psVar3[1] = (short)param_3;
      *(void **)(psVar3 + 2) = param_4;
      psVar3[4] = -1;
      psVar3[5] = -1;
      sVar1 = *(short *)((int)_param_1 + 0x18c);
      if ((sVar1 != 0) && (0 < sVar1)) {
        iVar4 = (int)sVar1;
        psVar6 = *(short **)((int)_param_1 + 0x188);
        do {
          if ((*psVar6 <= param_2) && (param_2 <= psVar6[1])) {
            bVar2 = false;
          }
          psVar6 = psVar6 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      uVar5 = FUN_10001d60((int)psVar3);
      if ((ushort)uVar5 < 5) {
        if ((bVar2) && (in_stack_00000014 != (uint *)0x0)) {
          if ((short)param_3 == 3) {
            *(uint *)(psVar3 + 6) = *in_stack_00000014 & 0xffff;
          }
          else {
            *(uint *)(psVar3 + 6) = *in_stack_00000014;
          }
        }
        else {
          psVar3[6] = 0;
          psVar3[7] = 0;
        }
      }
      else {
        if (bVar2) {
          uVar8 = uVar5 & 0xffff;
          puVar7 = operator_new(uVar8);
          if (puVar7 == (undefined4 *)0x0) {
            FUN_10002170(_param_1,6);
            goto LAB_10006199;
          }
          if (in_stack_00000014 == (uint *)0x0) {
            FUN_10001ca0(puVar7,0,uVar8);
            *(undefined4 **)(psVar3 + 6) = puVar7;
          }
          else {
            FUN_10001c20(puVar7,in_stack_00000014,uVar8);
            *(undefined4 **)(psVar3 + 6) = puVar7;
          }
        }
        else {
          psVar3[6] = 0;
          psVar3[7] = 0;
        }
        *(uint *)((int)_param_1 + 0x58) = *(int *)((int)_param_1 + 0x58) + (uVar5 & 0xffff);
      }
      FUN_10001060((void *)((int)_param_1 + 0x198),psVar3);
    }
  }
LAB_10006199:
  if (*(int *)((int)_param_1 + 0x178) != 0) {
    if (puVar7 != (undefined4 *)0x0) {
      operator_delete(puVar7);
    }
    return 0;
  }
  return 1;
}


// ---- FUN_100061d0 @ 100061d0

bool __thiscall
FUN_100061d0(void *this,short param_1,long param_2,void *param_3,int param_4,int param_5)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  short *psVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  int iVar9;
  undefined1 *puVar10;
  
  puVar10 = (undefined1 *)0x0;
  bVar2 = true;
  if (*(int *)((int)this + 0x178) != 0) goto LAB_10006334;
  uVar3 = FUN_10001d00((short)param_2,(short)param_3);
  if (uVar3 < 5) {
    MTiffHandler::WriteTag((short)this,param_1,param_2,param_3);
    psVar4 = FUN_10001190((void *)((int)this + 0x198),param_1,1);
  }
  else {
    sVar1 = *(short *)((int)this + 0x18c);
    if ((sVar1 != 0) && (0 < sVar1)) {
      psVar4 = *(short **)((int)this + 0x188);
      iVar9 = (int)sVar1;
      do {
        if ((*psVar4 <= param_1) && (param_1 <= psVar4[1])) {
          bVar2 = false;
        }
        psVar4 = psVar4 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (bVar2) {
      uVar5 = (uint)uVar3;
      puVar10 = operator_new(uVar5);
      if (puVar10 == (undefined1 *)0x0) {
        FUN_10002170(this,6);
        goto LAB_10006334;
      }
      lVar6 = FUN_10001a40(this,*(FILE **)this,0,1);
      lVar7 = FUN_10001a40(this,*(FILE **)this,param_4,0);
      if (lVar7 == -1) {
        FUN_10002170(this,3);
        goto LAB_10006334;
      }
      sVar8 = FUN_10001990(this,*(FILE **)this,puVar10,uVar5,0);
      if (sVar8 != uVar5) {
        FUN_10002170(this,4);
        goto LAB_10006334;
      }
      lVar6 = FUN_10001a40(this,*(FILE **)this,lVar6,0);
      if (lVar6 == -1) {
        FUN_10002170(this,3);
        goto LAB_10006334;
      }
    }
    MTiffHandler::WriteTag((short)this,param_1,param_2,param_3);
    psVar4 = FUN_10001190((void *)((int)this + 0x198),param_1,1);
    param_5 = param_4;
  }
  *(int *)(psVar4 + 4) = param_5;
LAB_10006334:
  if (puVar10 != (undefined1 *)0x0) {
    operator_delete(puVar10);
  }
  return *(int *)((int)this + 0x178) == 0;
}


// ---- DeleteTag @ 10006360

/* public: long __stdcall MTiffHandler::DeleteTag(short) */

long MTiffHandler::DeleteTag(short param_1)

{
  short *psVar1;
  undefined2 in_stack_00000006;
  short in_stack_00000008;
  
                    /* 0x6360  103  ?DeleteTag@MTiffHandler@@QAGJF@Z */
  if (*(int *)(_param_1 + 0x178) == 0) {
    psVar1 = FUN_10001190((void *)(_param_1 + 0x198),in_stack_00000008,1);
    if (psVar1 != (short *)0x0) {
      FUN_10001100((void *)(_param_1 + 0x198),psVar1);
    }
  }
  return (uint)(*(int *)(_param_1 + 0x178) == 0);
}


// ---- FUN_100063b0 @ 100063b0

undefined4 __thiscall FUN_100063b0(void *this,undefined2 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 0x194) = 8;
  *(undefined2 *)((int)this + 400) = param_1;
  *(undefined2 *)((int)this + 0x192) = param_2;
  return 1;
}


// ---- operator_delete @ 100063e0

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100063e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- operator_new @ 100063e6

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100063e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- __CRT_INIT@12 @ 100063f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 1998 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (DAT_10008030 < 1) {
      return 0;
    }
    DAT_10008030 = DAT_10008030 + -1;
  }
  if (DAT_10008034 == 0) {
    DVar1 = GetVersion();
    if (((char)DVar1 == '\x03') && ((DVar1 & 0x80000000) != 0)) {
      DAT_10008034 = DAT_10008034 + 1;
    }
    else {
      DAT_10008034 = DAT_10008034 + -1;
    }
  }
  _DAT_10008040 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 != 1) {
    if ((param_2 == 0) &&
       (((DAT_10008034 < 0 || (DAT_10008030 == 0)) && (DAT_10008048 != (undefined4 *)0x0)))) {
      puVar2 = DAT_10008044 + -1;
      if (DAT_10008048 <= puVar2) {
        do {
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)();
          }
          puVar2 = puVar2 + -1;
        } while (DAT_10008048 <= puVar2);
      }
      if (DAT_10008034 < 0) {
        free(DAT_10008048);
      }
      else {
        GlobalFree(DAT_10008048);
      }
      DAT_10008048 = (undefined4 *)0x0;
    }
    return 1;
  }
  if (-1 < DAT_10008034) {
    if (DAT_10008030 != 0) {
      return 1;
    }
    if (-1 < DAT_10008034) {
      DAT_10008048 = GlobalAlloc(0x2000,0x80);
      if (DAT_10008048 == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_100064b0;
    }
  }
  DAT_10008048 = malloc(0x80);
  if (DAT_10008048 == (undefined4 *)0x0) {
    return 0;
  }
LAB_100064b0:
  *DAT_10008048 = 0;
  DAT_10008044 = DAT_10008048;
  initterm(&DAT_10008000,&DAT_10008004);
  DAT_10008030 = DAT_10008030 + 1;
  return 1;
}


// ---- entry @ 10006560

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_10008030 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_1000804c != (code *)0x0) {
      iVar1 = (*DAT_1000804c)(param_1,param_2,param_3);
    }
    if ((iVar1 == 0) || (iVar1 = __CRT_INIT_12(param_1,param_2), iVar1 == 0)) {
      return 0;
    }
  }
  iVar1 = FUN_10001000(param_1);
  if ((param_2 == 1) && (iVar1 == 0)) {
    __CRT_INIT_12(param_1,0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = __CRT_INIT_12(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_1000804c != (code *)0x0)) {
      iVar1 = (*DAT_1000804c)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


// ---- initterm @ 10006620

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10006620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


