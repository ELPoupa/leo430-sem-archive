// Decompiled with Ghidra from LeoPath.exe
// Format: Portable Executable (PE), image base 00400000

// ---- ThunRTMain @ 004011bc

void ThunRTMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ThunRTMain();
  return;
}


// ---- entry @ 004011c4
// decompilation failed: 
Low-level Error: Cannot properly adjust input varnodes

// ---- FUN_00402080 @ 00402080

void __cdecl FUN_00402080(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  wchar_t *pwVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int **ppiVar20;
  undefined4 uVar21;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004010c6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff30;
  local_c = &LAB_004010b0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  uVar21 = 0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *)0x0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_98[0] = 0;
  uVar2 = (**(code **)(*piVar5 + 0x2fc))(piVar5,0x4d,0);
  uVar2 = __vbaObjSet(&local_40,uVar2);
  uVar2 = __vbaLateIdCallLd(local_54,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaFreeObj();
  __vbaFreeVar(uVar21);
  if (DAT_00403340 == (int *)0x0) {
    __vbaNew2(&DAT_00401c30,&DAT_00403340);
  }
  piVar9 = DAT_00403340;
  iVar3 = *DAT_00403340;
  __vbaStrCat(L"\\admin32.ini",local_24);
  uVar2 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x28))(piVar9,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar9,&DAT_00401c20,0x28);
  }
  __vbaFreeStr();
  if (DAT_00403340 == (int *)0x0) {
    __vbaNew2(&DAT_00401c30,&DAT_00403340);
  }
  piVar9 = DAT_00403340;
  iVar3 = *DAT_00403340;
  __vbaStrCat(L"\\system.mda",local_24);
  uVar2 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x80))(piVar9,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar9,&DAT_00401c20,0x80);
  }
  __vbaFreeStr();
  if (DAT_00403340 == (int *)0x0) {
    __vbaNew2(&DAT_00401c30,&DAT_00403340);
  }
  piVar9 = DAT_00403340;
  iVar3 = (**(code **)(*DAT_00403340 + 0x84))
                    (DAT_00403340,L"LeoWorkspace",L"Phil Williams",L"shepreth",10,local_70,
                     0x80020004,local_68,&local_40);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar9,&DAT_00401c20,0x84);
  }
  piVar9 = local_40;
  local_40 = (int *)0x0;
  __vbaObjSet(&DAT_00403024,piVar9);
  local_74 = 10;
  iVar3 = *DAT_00403024;
  ppiVar20 = &local_40;
  local_6c = 0x80020004;
  uVar16 = 10;
  uVar18 = 0x80020004;
  uVar12 = 10;
  uVar14 = 0x80020004;
  uVar10 = 10;
  uVar11 = 0x80020004;
  uVar2 = local_70;
  uVar21 = local_68;
  uVar13 = local_80;
  uVar15 = local_78;
  uVar17 = local_90;
  uVar19 = local_88;
  __vbaStrCat(L"\\LEO_USER",local_24);
  uVar2 = __vbaStrMove(uVar10,uVar2,uVar11,uVar21,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,
                       uVar19,ppiVar20);
  iVar3 = (**(code **)(iVar3 + 0x58))(DAT_00403024,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,DAT_00403024,&DAT_00401d2c,0x58);
  }
  piVar9 = local_40;
  local_40 = (int *)0x0;
  __vbaObjSet(&DAT_00403028,piVar9);
  __vbaFreeStr();
  uVar21 = 0;
  uVar2 = (**(code **)(*piVar5 + 0x2fc))(piVar5,0x4e,0);
  uVar2 = __vbaObjSet(&local_40,uVar2);
  uVar2 = __vbaLateIdCallLd(local_54,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaFreeObj();
  __vbaFreeVar(uVar21);
  __vbaStrCat(L"images",local_38);
  __vbaStrMove();
  __vbaStrCat(L"user\\",local_38);
  __vbaStrMove();
  local_84 = 10;
  iVar3 = (**(code **)(*DAT_00403028 + 0xbc))
                    (DAT_00403028,L"USERS",3,local_70,2,local_68,10,local_80,0x80020004,local_78,10,
                     local_90,0x80020004,local_88,&local_40);
  pcVar4 = __vbaHresultCheckObj_exref;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,DAT_00403028,&DAT_00401d5c,0xbc);
  }
  piVar5 = local_40;
  local_40 = (int *)0x0;
  __vbaObjSet(&local_20,piVar5);
  iVar3 = (**(code **)(*local_20 + 0xe4))(local_20);
  if (-1 < iVar3) goto LAB_004024b6;
  uVar2 = 0xe4;
  do {
    (*pcVar4)(iVar3,local_20,&DAT_00401d6c,uVar2);
LAB_004024b6:
    do {
      piVar5 = local_20;
      iVar3 = (**(code **)(*local_20 + 0x34))(local_20,local_98);
      if (iVar3 < 0) {
        (*pcVar4)(iVar3,local_20,&DAT_00401d6c,0x34);
      }
      if ((short)local_98[0] != 0) {
        piVar9 = local_20;
        iVar3 = (**(code **)(*local_20 + 0xc4))(local_20);
        if (iVar3 < 0) {
          (*pcVar4)(iVar3,local_20,&DAT_00401d6c,0xc4);
        }
        piVar8 = DAT_00403028;
        iVar3 = (**(code **)(*DAT_00403028 + 0x58))(DAT_00403028);
        if (iVar3 < 0) {
          (*pcVar4)(iVar3,DAT_00403028,&DAT_00401d5c,0x58);
        }
        piVar7 = DAT_00403024;
        iVar3 = (**(code **)(*DAT_00403024 + 0x50))(DAT_00403024);
        if (iVar3 < 0) {
          (*pcVar4)(iVar3,DAT_00403024,&DAT_00401d2c,0x50);
        }
        __vbaEnd(piVar7,piVar8,piVar9,piVar5);
        local_8 = 0;
        __vbaFreeStr(&LAB_0040292d);
        __vbaFreeObj();
        __vbaFreeStr();
        __vbaFreeStr();
        __vbaFreeStr();
        __vbaFreeStr();
        __vbaFreeStr();
        return;
      }
      local_28 = 0;
      iVar3 = (**(code **)(*local_20 + 0xb4))(local_20,&local_40);
      if (iVar3 < 0) {
        (*pcVar4)(iVar3,local_20,&DAT_00401d6c,0xb4);
      }
      piVar5 = local_40;
      iVar3 = (**(code **)(*local_40 + 0x30))(local_40,8,local_70,L"UserName",local_68,&local_44);
      pcVar4 = __vbaHresultCheckObj_exref;
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar5,&DAT_00401d94,0x30);
      }
      local_4c = local_44;
      local_44 = 0;
      local_54[0] = 9;
      rtcUpperCaseVar(local_64,local_54);
      __vbaStrVarMove(local_64);
      __vbaStrMove();
      __vbaFreeObj();
      __vbaFreeVarList(2,local_54,local_64);
      iVar3 = __vbaStrCmp(L"DEVELOPMENT",local_30);
      if ((iVar3 == 0) || (iVar3 = __vbaStrCmp(L"FACTORY",local_30), iVar3 == 0)) {
LAB_00402627:
        pwVar6 = L"default";
LAB_0040262c:
        __vbaStrCat(pwVar6,local_34);
        __vbaStrMove();
        sVar1 = -1;
      }
      else {
        iVar3 = __vbaStrCmp(L"GUEST",local_30);
        if (iVar3 == 0) {
          pwVar6 = L"guest";
          goto LAB_0040262c;
        }
        iVar3 = __vbaStrCmp(L"SERVICE",local_30);
        if (iVar3 == 0) {
          pwVar6 = L"service";
          goto LAB_0040262c;
        }
        iVar3 = __vbaStrCmp(L"SYSTEM",local_30);
        if (iVar3 == 0) goto LAB_00402627;
        sVar1 = (short)local_28;
      }
      if (sVar1 != 0) {
        iVar3 = (**(code **)(*local_20 + 0xd0))(local_20);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_20,&DAT_00401d6c,0xd0);
        }
        iVar3 = (**(code **)(*local_20 + 0x128))
                          (local_20,8,local_70,L"UserDirectory",local_68,8,local_80,local_1c,
                           local_78);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_20,&DAT_00401d6c,0x128);
        }
        iVar3 = (**(code **)(*local_20 + 0x128))
                          (local_20,8,local_70,L"CurrentUserDirectory",local_68,8,local_80,local_1c,
                           local_78);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_20,&DAT_00401d6c,0x128);
        }
        iVar3 = (**(code **)(*local_20 + 0x128))
                          (local_20,8,local_70,L"ImageDirectory",local_68,8,local_80,local_2c,
                           local_78);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_20,&DAT_00401d6c,0x128);
        }
        iVar3 = (**(code **)(*local_20 + 0x128))
                          (local_20,8,local_70,L"CurrentImageDirectory",local_68,8,local_80,local_2c
                           ,local_78);
        pcVar4 = __vbaHresultCheckObj_exref;
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_20,&DAT_00401d6c,0x128);
        }
        iVar3 = (**(code **)(*local_20 + 0x164))(local_20,1,0);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_20,&DAT_00401d6c,0x164);
        }
      }
      iVar3 = (**(code **)(*local_20 + 0xec))(local_20);
    } while (-1 < iVar3);
    uVar2 = 0xec;
  } while( true );
}


