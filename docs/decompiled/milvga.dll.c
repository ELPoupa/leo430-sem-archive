// Decompiled with Ghidra from milvga.dll
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  DAT_10033230 = param_1;
  if (param_2 == 1) {
    DAT_10033234 = operator_new(0x18);
    InitializeCriticalSection(DAT_10033234);
    return 1;
  }
  if (param_2 == 0) {
    DeleteCriticalSection(DAT_10033234);
    operator_delete(DAT_10033234);
  }
  return 1;
}


// ---- FUN_10001060 @ 10001060

undefined4 * __thiscall FUN_10001060(void *this,undefined4 *param_1)

{
  *(undefined ***)this = &PTR_LAB_1002f000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *param_1 = 0;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xffffd8f3;
  return this;
}


// ---- FUN_10001090 @ 10001090

void __fastcall FUN_10001090(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_1002f000;
  while( true ) {
    piVar1 = (int *)FUN_100010e0((int)param_1);
    if (piVar1 == (int *)0x0) break;
    FUN_1000f580((void *)piVar1[5],*piVar1,piVar1[1],piVar1[2],piVar1[3],*(byte *)(piVar1 + 4));
    operator_delete(piVar1);
  }
  return;
}


// ---- FUN_100010e0 @ 100010e0

void __fastcall FUN_100010e0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18);
  }
  return;
}


// ---- FUN_10001150 @ 10001150

void FUN_10001150(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = (**(code **)(*(int *)*param_1 + 0x2e0))();
  param_2[5] = uVar5;
  param_3[5] = param_2[2] & 1;
  param_3[4] = param_2[2] & 2;
  iVar6 = param_3[6];
  param_3[6] = iVar6 + 1;
  if (param_2[1] != 0x385) {
    if (iVar6 + 1 == 1) {
      if (param_3[0x6e] != 0) {
        if ((*(uint *)(param_3[0x6e] + 0x10) & param_3[3]) != 0) {
          (**(code **)(*param_3 + 4))(0,0,0,0);
        }
        goto LAB_100011b9;
      }
    }
    else {
LAB_100011b9:
      if ((param_3[0x6e] != 0) && ((*(uint *)(param_3[0x6e] + 0x10) & param_3[3]) != 0))
      goto LAB_100011d9;
    }
    param_2[2] = 1;
    goto LAB_1000312f;
  }
LAB_100011d9:
  iVar6 = *param_3;
  (**(code **)(iVar6 + 0xc))();
  iVar1 = param_2[1];
  sVar4 = (short)iVar1;
  if (iVar1 < 100) {
    switch(sVar4) {
    case 1:
      uVar5 = (**(code **)(*(int *)*param_1 + 0xc))
                        (*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_2[4],param_3)
      ;
      param_2[2] = uVar5;
      break;
    case 2:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x10))(*param_2,param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    case 4:
      piVar2 = (int *)param_2[3];
      if (*piVar2 == 0x814) {
        param_2[2] = 1;
        *(int **)piVar2[2] = param_3;
      }
      else {
        uVar5 = (**(code **)(*(int *)*param_1 + 0x14))(*param_2,*piVar2,piVar2[2],param_3);
        param_2[2] = uVar5;
      }
      break;
    case 5:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x18))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 6:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xe],param_3);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 200) {
    switch(sVar4) {
    case 100:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x28))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_2[4],puVar3[8],param_3
                        );
      param_2[2] = uVar5;
      break;
    case 0x65:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x24))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_2[4],param_3
                        );
      param_2[2] = uVar5;
      break;
    case 0x66:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x30))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x67:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x38))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],param_3
                        );
      param_2[2] = uVar5;
      break;
    case 0x68:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x34))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],param_3
                        );
      param_2[2] = uVar5;
      break;
    case 0x69:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x44))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6a:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x48))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6b:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x40))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xe],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6c:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x3c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xe],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6d:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x4c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6e:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x20))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         param_2[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6f:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x50))(*param_2,*puVar3,puVar3[2],puVar3[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x70:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x54))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x71:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x58))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[9],param_3)
      ;
      param_2[2] = uVar5;
      break;
    case 0x72:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x5c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x73:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x60))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x74:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 100))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xe],puVar3[0x10],param_3);
      param_2[2] = uVar5;
      break;
    case 0x75:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x68))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xe],puVar3[0x10],param_3);
      param_2[2] = uVar5;
      break;
    case 0x76:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xe],param_2[4],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 300) {
    switch(sVar4) {
    case 200:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x88))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],param_2[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0xc9:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x8c))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0xca:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x90))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0xcb:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x94))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0xcc:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x98))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0xcd:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x9c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0xce:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xa4))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0xcf:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xa0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0xd0:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xa8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0xd1:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xac))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0xd2:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xb0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 400) {
    switch(sVar4) {
    case 300:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xb4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],param_2[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x12d:
      uVar5 = (**(code **)(*(int *)*param_1 + 0xb8))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x12e:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xbc))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x12f:
      uVar5 = (**(code **)(*(int *)*param_1 + 0xc4))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x130:
      uVar5 = (**(code **)(*(int *)*param_1 + 0xc0))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x131:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xcc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x132:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xd0))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x133:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 200))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x134:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xd4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x135:
      uVar5 = (**(code **)(*(int *)*param_1 + 0xd8))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x136:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xdc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x137:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xe0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 0x208) {
    switch(sVar4) {
    case 400:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xe4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x191:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xe8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x192:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xec))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x193:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xf0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x194:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xf4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x195:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xf8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x196:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0xfc))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x197:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x100))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x198:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x104))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x199:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x108))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x19a:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x10c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x19b:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x110))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x19c:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x114))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x19d:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x118))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x19e:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x11c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x19f:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x120))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a0:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x124))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a1:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x128))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a2:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 300))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a3:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x130))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a4:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x134))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a5:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x138))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a6:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x13c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a7:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x140))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a8:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x144))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1a9:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x148))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1aa:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x14c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1ab:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x150))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1ac:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x154))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1ad:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x158))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1ae:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x15c))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1af:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x160))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x1b0:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x164))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 0x226) {
    switch(sVar4) {
    case 0x208:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x168))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[7],puVar3[8],
                         puVar3[10],puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x209:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x16c))
                        (*param_2,*puVar3,puVar3[2],puVar3[3],puVar3[4],puVar3[6],puVar3[8],
                         puVar3[10],param_3);
      param_2[2] = uVar5;
      break;
    case 0x20a:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x170))
                        (*param_2,*puVar3,puVar3[2],puVar3[3],puVar3[4],puVar3[5],puVar3[6],
                         puVar3[7],puVar3[8],puVar3[10],puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x20b:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x174))
                        (*param_2,*puVar3,puVar3[2],puVar3[3],puVar3[4],puVar3[6],puVar3[7],
                         puVar3[8],puVar3[9],puVar3[10],puVar3[0xc],puVar3[0xe],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 600) {
    switch(sVar4) {
    case 0x226:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x178))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x227:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x17c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x228:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x180))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[7],puVar3[8],
                         puVar3[9],param_3);
      param_2[2] = uVar5;
      break;
    case 0x229:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x184))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[7],puVar3[8],
                         puVar3[9],puVar3[10],puVar3[0xb],puVar3[0xc],puVar3[0xd],param_3);
      param_2[2] = uVar5;
      break;
    case 0x22a:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x188))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x22b:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x18c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 700) {
    switch(sVar4) {
    case 600:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 400))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x259:
    case 0x262:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x194))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x25a:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x198))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x25b:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x19c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x25c:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1a0))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x25d:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1a4))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x25e:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1ac))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x25f:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1b0))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x260:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1b4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x261:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1a8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],param_3
                        );
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 800) {
    switch(sVar4) {
    case 700:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1b8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2bd:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1bc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    case 0x2c0:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1c0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c1:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1c4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c2:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1c8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c3:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1cc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],param_3
                        );
      param_2[2] = uVar5;
      break;
    case 0x2c4:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1d0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c5:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1d4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c6:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1d8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c7:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1dc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c8:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1e0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x2c9:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1e4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 900) {
    switch(sVar4) {
    case 0x325:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1e8))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x326:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1ec))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x327:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1f0))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x328:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1f8))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],puVar3[0xd],puVar3[0xe],puVar3[0xf],puVar3[0x10],puVar3[0x12],
                         param_3);
      param_2[2] = uVar5;
      break;
    case 0x329:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 500))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 1000) {
    if (sVar4 == 0x385) {
      iVar1 = param_2[3];
      uVar5 = (**(code **)(iVar6 + 8))
                        (*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x20),
                         *(undefined4 *)(iVar1 + 0x28));
      param_2[2] = uVar5;
    }
    else if (sVar4 == 0x386) {
      piVar2 = (int *)param_2[3];
      uVar5 = FUN_10003990((void *)*param_1,*piVar2,piVar2[2],(undefined4 *)piVar2[4]);
      param_2[2] = uVar5;
    }
    else {
      if (sVar4 != 0x388) goto switchD_100011f9_caseD_3;
      uVar5 = (**(code **)(*(int *)*param_1 + 4))
                        (*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2]);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 0x44c) {
    if (sVar4 == 1000) {
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x1fc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],puVar3[6],puVar3[7],
                         puVar3[8],param_3);
      param_2[2] = uVar5;
    }
    else {
      if (sVar4 != 0x3ea) goto switchD_100011f9_caseD_3;
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x200))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],puVar3[6],puVar3[7],
                         puVar3[8],puVar3[9],puVar3[10],puVar3[0xb],puVar3[0xc],puVar3[0xd],
                         puVar3[0xe],param_3);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 0x514) {
    switch(sVar4) {
    case 0x4b0:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x204))
                        (*param_2,*puVar3,puVar3[2],puVar3[3],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x4b1:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x208))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[7],puVar3[8],param_3)
      ;
      param_2[2] = uVar5;
      break;
    case 0x4b2:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x20c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xb],puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x4b3:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x210))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xb],puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x4b4:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x214))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xb],puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x4b5:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x218))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xb],puVar3[0xc],puVar3[0xd],puVar3[0xe],puVar3[0xf],puVar3[0x10],
                         param_3);
      param_2[2] = uVar5;
      break;
    case 0x4b6:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x21c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xb],puVar3[0xc],puVar3[0xd],puVar3[0xe],puVar3[0xf],puVar3[0x10],
                         param_3);
      param_2[2] = uVar5;
      break;
    case 0x4b7:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x220))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[7],puVar3[8],param_3)
      ;
      param_2[2] = uVar5;
      break;
    case 0x4b8:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x224))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[9],
                         puVar3[10],puVar3[0xb],puVar3[0xc],puVar3[0xe],puVar3[0xf],puVar3[0x10],
                         puVar3[0x11],puVar3[0x12],puVar3[0x14],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 0x6a4) {
    if (sVar4 == 0x640) {
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2d0))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
    }
    else if (sVar4 == 0x641) {
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2d4))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
    }
    else {
      if (sVar4 != 0x642) goto switchD_100011f9_caseD_3;
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2d8))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 0x708) {
    switch(sVar4) {
    case 0x6a4:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x74))
                        (*param_2,*(undefined4 *)(param_2[3] + 8),param_2[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x6a5:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x78))
                        (*param_2,*(undefined4 *)(param_2[3] + 8),param_3);
      param_2[2] = uVar5;
      break;
    case 0x6a6:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x80))
                        (*param_2,*(undefined4 *)(param_2[3] + 8),param_3);
      param_2[2] = uVar5;
      break;
    case 0x6a7:
      iVar1 = param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x7c))
                        (*param_2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),param_3);
      param_2[2] = uVar5;
      break;
    case 0x6a8:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x84))
                        (*param_2,*(undefined4 *)(param_2[3] + 8),*(undefined4 *)(param_2[3] + 0x10)
                         ,param_2[4],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    }
  }
  else if (iVar1 < 0x76c) {
    if (sVar4 == 0x70a) {
      uVar5 = (**(code **)(*(int *)*param_1 + 0x6c))(*param_2,param_3);
      param_2[2] = uVar5;
    }
    else {
      if (sVar4 != 0x70b) goto switchD_100011f9_caseD_3;
      uVar5 = (**(code **)(*(int *)*param_1 + 0x70))
                        (*param_2,*(undefined4 *)(param_2[3] + 8),*(undefined4 *)(param_2[3] + 0x10)
                         ,param_3);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 2000) {
    switch(sVar4) {
    case 0x76d:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x228))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],
                         puVar3[0xc],param_3);
      param_2[2] = uVar5;
      break;
    case 0x76e:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x22c))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x76f:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x230))
                        (*param_2,*puVar3,puVar3[2],puVar3[3],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x770:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x234))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x771:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x238))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x772:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x23c))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x773:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x240))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x774:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x244))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x775:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x248))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x776:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x24c))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x777:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x250))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x778:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x254))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x779:
      uVar5 = (**(code **)(*(int *)*param_1 + 600))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x77a:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x25c))(*param_2,*puVar3,puVar3[2],puVar3[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x77b:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x260))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x77c:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x264))
                        (*param_2,*puVar3,puVar3[2],puVar3[3],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x77d:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x268))(*param_2,*puVar3,puVar3[2],puVar3[3],param_3);
      param_2[2] = uVar5;
      break;
    default:
      goto switchD_100011f9_caseD_3;
    case 0x780:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x26c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x781:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x270))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x782:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x274))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x783:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x278))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x784:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x27c))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x785:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x280))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
    }
  }
  else if (iVar1 < 0x834) {
    switch(sVar4) {
    case 0x7d1:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x284))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d2:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x288))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d3:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x28c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d4:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x290))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[5],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d5:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x294))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d6:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x298))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d7:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x29c))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d8:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2a0))(*param_2,*(undefined4 *)param_2[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7d9:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2a4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7da:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2a8))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7db:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2ac))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7dc:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2b0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7dd:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2b4))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[10],param_3
                        );
      param_2[2] = uVar5;
      break;
    case 0x7de:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2b8))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7df:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 700))(*param_2,*puVar3,puVar3[2],puVar3[4],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7e0:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2c0))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],puVar3[8],puVar3[9],
                         puVar3[10],puVar3[0xb],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7e1:
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2c4))
                        (*param_2,*(undefined4 *)param_2[3],((undefined4 *)param_2[3])[2],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7e2:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2c8))(*param_2,*puVar3,puVar3[2],puVar3[3],param_3);
      param_2[2] = uVar5;
      break;
    case 0x7e3:
      puVar3 = (undefined4 *)param_2[3];
      uVar5 = (**(code **)(*(int *)*param_1 + 0x2cc))
                        (*param_2,*puVar3,puVar3[2],puVar3[4],puVar3[6],param_3);
      param_2[2] = uVar5;
      break;
    default:
switchD_100011f9_caseD_3:
      param_2[2] = 0xffffffff;
    }
  }
  else {
    if (0x1ffff < iVar1) goto switchD_100011f9_caseD_3;
    uVar5 = (**(code **)(*(int *)*param_1 + 0x2dc))(*param_2,param_2,param_3);
    param_2[2] = uVar5;
  }
  if (param_2[1] != 2) {
    (**(code **)(iVar6 + 0x10))();
  }
LAB_1000312f:
  if (param_3[7] != 0) {
    param_2[2] = param_2[2] | 2;
  }
  param_3[6] = param_3[6] + -1;
  iVar6 = FUN_10003760(*param_1);
  if ((iVar6 == 0) &&
     (((param_2[1] == 2 && ((param_2[2] & 2) == 0)) ||
      ((param_2[1] == 0x385 && (*(int *)(param_2[3] + 8) == 3)))))) {
    EnterCriticalSection(DAT_10033234);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
    *param_1 = 0;
    LeaveCriticalSection(DAT_10033234);
  }
  return;
}


// ---- FUN_10003570 @ 10003570

undefined4 * __thiscall
FUN_10003570(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  *(undefined ***)this = &PTR_LAB_1002f014;
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar3);
  *(char **)((int)this + 4) = pcVar2;
  if (pcVar2 == (char *)0x0) {
    *param_4 = 0xca;
    return this;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x2c) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x10000000;
  *(undefined4 *)((int)this + 0x44) = 0x10000000;
  *(undefined4 *)((int)this + 0x48) = 0x10000000;
  *(undefined4 *)((int)this + 0x4c) = 0x10000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *param_4 = 0;
  return this;
}


// ---- FUN_10003630 @ 10003630

void __fastcall FUN_10003630(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1002f014;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  return;
}


// ---- FUN_100036c0 @ 100036c0

undefined4 * __thiscall FUN_100036c0(void *this,undefined4 *param_1,undefined4 param_2)

{
  *(undefined ***)this = &PTR_FUN_1002f018;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x40100000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *param_1 = 0;
  return this;
}


// ---- FUN_10003700 @ 10003700

void __fastcall FUN_10003700(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1002f018;
  if (param_1[2] != 0) {
    iVar2 = 1;
    if (0 < (int)param_1[3]) {
      iVar1 = 4;
      do {
        if (*(undefined4 **)(param_1[2] + iVar1) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1[2] + iVar1))(1);
        }
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= (int)param_1[3]);
    }
    operator_delete((void *)param_1[2]);
  }
  FUN_10003bd0((int)param_1);
  FUN_10003c40(param_1,0x10000000);
  return;
}


// ---- FUN_10003760 @ 10003760

int __fastcall FUN_10003760(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


// ---- FUN_100037c0 @ 100037c0

undefined4 __fastcall FUN_100037c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = operator_new((int)(short)((short)*(undefined4 *)(param_1 + 0xc) + 1) << 2);
  *(undefined4 **)(param_1 + 8) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0xca;
  }
  *puVar1 = 0xffffffff;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 4;
    do {
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(param_1 + 8) + -4 + iVar3) = 0;
    } while (iVar2 <= *(int *)(param_1 + 0xc));
  }
  return 0;
}


// ---- FUN_10003820 @ 10003820

int __thiscall FUN_10003820(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection(DAT_10033234);
  iVar3 = 1;
  iVar1 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)((int)this + 8);
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
    if (iVar3 <= iVar1) {
      *(int *)(*(int *)((int)this + 8) + iVar3 * 4) = param_1;
      *(int *)(param_1 + 0x14) = iVar3;
      iVar4 = iVar3;
    }
  }
  LeaveCriticalSection(DAT_10033234);
  return iVar4;
}


// ---- FUN_10003880 @ 10003880

void __thiscall FUN_10003880(void *this,int param_1)

{
  EnterCriticalSection(DAT_10033234);
  *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4) = 0;
  LeaveCriticalSection(DAT_10033234);
  return;
}


// ---- FUN_100038b0 @ 100038b0

undefined4 __thiscall FUN_100038b0(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
}


// ---- FUN_10003910 @ 10003910

int __thiscall FUN_10003910(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection(DAT_10033234);
  iVar1 = *(int *)(*(int *)((int)this + 8) + param_1 * 4);
  iVar2 = *(int *)(iVar1 + 0x10) + 1;
  *(int *)(iVar1 + 0x10) = iVar2;
  LeaveCriticalSection(DAT_10033234);
  return iVar2;
}


// ---- FUN_10003950 @ 10003950

int __thiscall FUN_10003950(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection(DAT_10033234);
  iVar1 = *(int *)(*(int *)((int)this + 8) + param_1 * 4);
  iVar2 = *(int *)(iVar1 + 0x10) + -1;
  *(int *)(iVar1 + 0x10) = iVar2;
  LeaveCriticalSection(DAT_10033234);
  return iVar2;
}


// ---- FUN_10003990 @ 10003990

undefined4 __thiscall FUN_10003990(void *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1 == 1) {
    param_3[1] = *(undefined4 *)((int)this + 0x1c);
    *param_3 = *(undefined4 *)((int)this + 0x18);
  }
  return 1;
}


// ---- FUN_100039b0 @ 100039b0

undefined4 __thiscall FUN_100039b0(void *this,int param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    FUN_10003a10((int)this);
  }
  if ((param_2 & 4) != 0) {
    FUN_10003aa0(this,param_1);
  }
  return 1;
}


// ---- FUN_10003a10 @ 10003a10

void __fastcall FUN_10003a10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
  DVar3 = GetCurrentThreadId();
  puVar2 = *(undefined4 **)(param_1 + 0x24);
  do {
    puVar1 = puVar2;
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    puVar2 = (undefined4 *)puVar1[0x6c];
  } while (puVar1[2] != DVar3);
  if (*(undefined4 **)(param_1 + 0x24) == puVar1) {
    *(undefined4 **)(param_1 + 0x24) = (undefined4 *)puVar1[0x6c];
  }
  if (*(undefined4 **)(param_1 + 0x28) == puVar1) {
    *(undefined4 *)(param_1 + 0x28) = puVar1[0x6d];
  }
  if (puVar1[0x6d] != 0) {
    *(undefined4 *)(puVar1[0x6d] + 0x1b0) = puVar1[0x6c];
  }
  if (puVar1[0x6c] != 0) {
    *(undefined4 *)(puVar1[0x6c] + 0x1b4) = puVar1[0x6d];
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


// ---- FUN_10003aa0 @ 10003aa0

void __thiscall FUN_10003aa0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x2c);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[5];
    if (puVar2[3] == param_1) {
      if (*(undefined4 **)((int)this + 0x2c) == puVar2) {
        *(undefined4 **)((int)this + 0x2c) = puVar1;
      }
      if (*(undefined4 **)((int)this + 0x30) == puVar2) {
        *(undefined4 *)((int)this + 0x30) = puVar2[6];
      }
      if (puVar2[6] != 0) {
        *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
      }
      if (puVar2[5] != 0) {
        *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
      }
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}


// ---- FUN_10003bd0 @ 10003bd0

void __fastcall FUN_10003bd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x6c];
    if (*(undefined4 **)(param_1 + 0x24) == puVar2) {
      *(undefined4 **)(param_1 + 0x24) = puVar1;
    }
    if (*(undefined4 **)(param_1 + 0x28) == puVar2) {
      *(undefined4 *)(param_1 + 0x28) = puVar2[0x6d];
    }
    if (puVar2[0x6d] != 0) {
      *(undefined4 *)(puVar2[0x6d] + 0x1b0) = puVar2[0x6c];
    }
    if (puVar2[0x6c] != 0) {
      *(undefined4 *)(puVar2[0x6c] + 0x1b4) = puVar2[0x6d];
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


// ---- FUN_10003c40 @ 10003c40

void __thiscall FUN_10003c40(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x2c);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[5];
    if ((param_1 == 0x10000000) || (puVar2[2] == param_1)) {
      if (*(undefined4 **)((int)this + 0x2c) == puVar2) {
        *(undefined4 **)((int)this + 0x2c) = puVar1;
      }
      if (*(undefined4 **)((int)this + 0x30) == puVar2) {
        *(undefined4 *)((int)this + 0x30) = puVar2[6];
      }
      if (puVar2[6] != 0) {
        *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
      }
      if (puVar2[5] != 0) {
        *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
      }
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}


// ---- FUN_10003d00 @ 10003d00

undefined4 __thiscall
FUN_10003d00(void *this,undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7,int param_8,undefined4 *param_9,undefined4 *param_10,
            undefined4 param_11)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  *param_10 = 0;
  uVar1 = 0xffffffff;
  uVar4 = param_5 & 0xff;
  uVar2 = param_5 & 0xffffff00;
  if ((param_7 & 0x2000000) == 0) {
    if (param_2 == 3) {
      if (uVar4 == 1) {
        uVar5 = 0x1900;
      }
      else if (uVar4 == 8) {
        uVar5 = 0x800;
      }
      else if (uVar4 < 0x11) {
        uVar5 = 0xb00;
      }
      else if (uVar4 < 0x21) {
        uVar5 = 0xc00;
      }
    }
    else if (uVar4 == 1) {
      uVar5 = 0x100;
    }
    else if (uVar4 == 8) {
      uVar5 = 0x200;
    }
    else {
      uVar5 = 0x300;
      if (0x10 < uVar4) {
        uVar5 = 0x400;
      }
    }
    if ((uVar5 != 0) && (uVar2 != 0)) {
      if (uVar2 == 0x80000000) {
        uVar5 = uVar5 | 0x80000000;
      }
      else if (uVar2 == 0xc0000000) {
        uVar5 = uVar5 | 0xc0000000;
      }
      else if (uVar2 == 0xa0000000) {
        uVar5 = uVar5 | 0xa0000000;
      }
    }
    if (((param_7 & 0x20000000) != 0) && (param_8 == param_3)) {
      puVar3 = (undefined4 *)0x0;
      if ((param_9 != (undefined4 *)0x0) && (puVar3 = param_9, param_2 == 1)) {
        puVar3 = (undefined4 *)*param_9;
      }
      uVar1 = (**(code **)(*(int *)this + 0x28))
                        (param_1,param_3,param_4,uVar5,param_6,param_10,puVar3,param_11);
    }
  }
  return uVar1;
}


// ---- FUN_10003e20 @ 10003e20

int __thiscall FUN_10003e20(void *this,int param_1,int param_2)

{
  bool bVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = false;
  DVar2 = GetCurrentThreadId();
  iVar4 = *(int *)((int)this + 0x24);
  if (iVar4 != 0) {
    if (*(DWORD *)(iVar4 + 8) == DVar2) {
      uVar3 = FUN_10003f80(this,iVar4,param_1,param_2);
      *(undefined4 *)(iVar4 + 0x1b8) = uVar3;
      return iVar4;
    }
    if (iVar4 == 0) goto LAB_10003efc;
    iVar4 = *(int *)(iVar4 + 0x1b0);
  }
  while (iVar4 != 0) {
    if (bVar1) {
      return iVar4;
    }
    if (*(DWORD *)(iVar4 + 8) == DVar2) {
      bVar1 = true;
      uVar3 = FUN_10003f80(this,iVar4,param_1,param_2);
      *(undefined4 *)(iVar4 + 0x1b8) = uVar3;
      if (*(int *)((int)this + 0x28) == iVar4) {
        *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(iVar4 + 0x1b4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar4 + 0x1b0) + 0x1b4) = *(undefined4 *)(iVar4 + 0x1b4);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x1b4) + 0x1b0) = *(undefined4 *)(iVar4 + 0x1b0);
      *(int *)(*(int *)((int)this + 0x24) + 0x1b4) = iVar4;
      *(int *)(iVar4 + 0x1b4) = 0;
      *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)((int)this + 0x24);
      *(int *)((int)this + 0x24) = iVar4;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1b0);
      bVar1 = false;
    }
  }
LAB_10003efc:
  iVar4 = 0;
  if ((!bVar1) && (iVar4 = (**(code **)(*(int *)this + 0x2e4))(), iVar4 != 0)) {
    *(DWORD *)(iVar4 + 8) = DVar2;
    uVar3 = FUN_10003f80(this,iVar4,param_1,param_2);
    *(undefined4 *)(iVar4 + 0x1b8) = uVar3;
    if (*(int *)((int)this + 0x24) != 0) {
      *(int *)(*(int *)((int)this + 0x24) + 0x1b4) = iVar4;
      *(undefined4 *)(iVar4 + 0x1b4) = 0;
      *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)((int)this + 0x24);
      *(int *)((int)this + 0x24) = iVar4;
      return iVar4;
    }
    *(undefined4 *)(iVar4 + 0x1b4) = 0;
    *(undefined4 *)(iVar4 + 0x1b0) = 0;
    *(int *)((int)this + 0x24) = iVar4;
    *(int *)((int)this + 0x28) = iVar4;
  }
  return iVar4;
}


// ---- FUN_10003f80 @ 10003f80

void __thiscall FUN_10003f80(void *this,undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x2c);
  bVar1 = false;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == param_3)) && (*(int *)(iVar2 + 8) == param_2)) {
    return;
  }
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    while (iVar2 != 0) {
      if (bVar1) {
        return;
      }
      if ((*(int *)(iVar2 + 0xc) == param_3) && (*(int *)(iVar2 + 8) == param_2)) {
        bVar1 = true;
        if (*(int *)((int)this + 0x30) == iVar2) {
          *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(iVar2 + 0x18);
        }
        else {
          *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x18) = *(undefined4 *)(iVar2 + 0x18);
        }
        *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x14) = *(undefined4 *)(iVar2 + 0x14);
        *(int *)(*(int *)((int)this + 0x2c) + 0x18) = iVar2;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((int)this + 0x2c);
        *(int *)((int)this + 0x2c) = iVar2;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x14);
        bVar1 = false;
      }
    }
  }
  if ((!bVar1) && (iVar2 = (**(code **)(*(int *)this + 0x2e8))(param_1,param_2,param_3), iVar2 != 0)
     ) {
    if (*(int *)((int)this + 0x2c) != 0) {
      *(int *)(*(int *)((int)this + 0x2c) + 0x18) = iVar2;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((int)this + 0x2c);
      *(int *)((int)this + 0x2c) = iVar2;
      return;
    }
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(int *)((int)this + 0x2c) = iVar2;
    *(int *)((int)this + 0x30) = iVar2;
  }
  return;
}


// ---- FUN_10004080 @ 10004080

void __fastcall FUN_10004080(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1002f310;
  return;
}


// ---- FUN_10004090 @ 10004090

void __fastcall FUN_10004090(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1002f328;
  return;
}


// ---- FUN_10004d70 @ 10004d70

undefined4 * __thiscall FUN_10004d70(void *this,uint param_1)

{
  FUN_10003700(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004dc0 @ 10004dc0

undefined4 * __thiscall FUN_10004dc0(void *this,uint param_1)

{
  FUN_10004080(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004e00 @ 10004e00

undefined4 * __thiscall FUN_10004e00(void *this,uint param_1)

{
  FUN_10004090(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004e20 @ 10004e20

void __cdecl
FUN_10004e20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_78 = param_1;
  local_74 = param_2;
  local_70 = param_3;
  local_6c = param_4;
  local_68 = param_5;
  local_64 = param_6;
  local_60 = param_7;
  local_5c = param_8;
  local_58 = param_9;
  local_54 = param_10;
  local_40 = param_11;
  local_3c = param_12;
  local_38 = param_13;
  local_34 = param_14;
  local_30 = param_15;
  local_2c = param_16;
  local_28 = param_17;
  local_24 = param_18;
  local_20 = param_19;
  local_1c = param_20;
  FUN_10004f10(&local_78);
  return;
}


// ---- FUN_10004f10 @ 10004f10

int __cdecl FUN_10004f10(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80 [4];
  int local_70;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar7 = 0;
  piVar8 = param_1;
  piVar10 = local_80;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (local_3c <= local_80[3]) {
    local_80[3] = local_3c;
  }
  if (local_70 <= local_38) {
    local_38 = local_70;
  }
  local_10 = local_80[3];
  local_c = local_38;
  FUN_1000f060((int)local_80);
  FUN_1000f060((int)&local_48);
  if ((local_58 != 0) && (local_20 != 0)) {
    FUN_1000f290(local_80);
    FUN_1000f290(&local_48);
    if (((local_5c & 0x40000) == 0) || ((local_60 != -1 || (bVar1 = true, local_58 == 1)))) {
      bVar1 = false;
    }
    if ((((local_24 & 0x40000) == 0) || (local_28 != -1)) || (bVar2 = true, local_20 == 1)) {
      bVar2 = false;
    }
    if ((bVar1) || (bVar2)) {
      iVar5 = 0;
      do {
        if (iVar7 != 0) break;
        if (iVar5 == 0) {
          local_60 = 0x1000;
          local_28 = 0x1000;
LAB_10005309:
          iVar7 = FUN_10004f10(local_80);
        }
        else {
          if (iVar5 == 1) {
            local_60 = 0x2000;
            local_28 = 0x2000;
            goto LAB_10005309;
          }
          if (iVar5 == 2) {
            local_60 = 0x4000;
            local_28 = 0x4000;
            goto LAB_10005309;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      goto LAB_10005325;
    }
    if ((local_58 != 1) || (bVar1 = true, local_20 != 1)) {
      bVar1 = false;
    }
    if ((local_60 != -1) || (bVar2 = true, local_28 != -1)) {
      bVar2 = false;
    }
    if (((local_5c & 0x20000) == 0) || (bVar3 = true, (local_24 & 0x20000) == 0)) {
      bVar3 = false;
    }
    if ((local_54 == local_1c) && ((bVar1 || ((bVar2 && (bVar3)))))) {
      local_88 = (undefined4 *)FUN_1000f1f0(local_80,local_80[1],local_80[2]);
      local_84 = (undefined4 *)FUN_1000f1f0(&local_48,local_44,local_40);
      uVar4 = ((int)(local_50 + (local_50 >> 0x1f & 7U)) >> 3) * local_10;
      iVar5 = local_c;
      if (0 < local_c) {
        do {
          puVar9 = local_88;
          puVar11 = local_84;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_88 = (undefined4 *)((int)local_88 + local_64);
          local_84 = (undefined4 *)((int)local_84 + local_2c);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      goto LAB_10005325;
    }
    if (local_1c < 0x601) {
      if (local_1c == 0x600) {
        iVar7 = FUN_10005a70(local_80);
        goto LAB_10005325;
      }
      if (local_1c == 0x200) {
        iVar7 = FUN_10005390(local_80);
        goto LAB_10005325;
      }
    }
    else if (local_1c < 0x801) {
      if (local_1c == 0x800) {
        iVar7 = FUN_10007c50(local_80);
        goto LAB_10005325;
      }
      if (local_1c == 0x700) {
        iVar7 = FUN_10006b60(local_80);
        goto LAB_10005325;
      }
    }
    else if (local_1c < 0xa01) {
      if (local_1c == 0xa00) {
        iVar7 = FUN_100097b0(local_80);
        goto LAB_10005325;
      }
      if (local_1c == 0x900) {
        iVar7 = FUN_100089f0(local_80);
        goto LAB_10005325;
      }
    }
    else if (local_1c < 0xf01) {
      if (local_1c == 0xf00) {
        iVar7 = FUN_1000b680(local_80);
        goto LAB_10005325;
      }
      if (local_1c == 0xe00) {
        iVar7 = FUN_1000a580(local_80);
        goto LAB_10005325;
      }
    }
    else {
      if (local_1c == 0x1000) {
        iVar7 = FUN_1000c760(local_80);
        goto LAB_10005325;
      }
      if (local_1c == 0x1100) {
        iVar7 = FUN_1000d4f0(local_80);
        goto LAB_10005325;
      }
      if (local_1c == 0x1200) {
        iVar7 = FUN_1000e2a0(local_80);
        goto LAB_10005325;
      }
    }
  }
  iVar7 = 1;
LAB_10005325:
  param_1[10] = local_58;
  param_1[0xb] = local_54;
  param_1[0xc] = local_50;
  param_1[0xd] = local_4c;
  param_1[0x18] = local_20;
  param_1[0x19] = local_1c;
  param_1[0x1a] = local_18;
  param_1[0x1b] = local_14;
  param_1[0x1c] = local_10;
  param_1[0x1d] = local_c;
  return iVar7;
}


// ---- FUN_10005390 @ 10005390

undefined4 __cdecl FUN_10005390(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ushort *puVar10;
  int local_14;
  
  puVar6 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  pbVar7 = (byte *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar1 = param_1[7];
  iVar2 = param_1[0x15];
  iVar3 = param_1[0x1c];
  iVar4 = param_1[0x1d];
  iVar9 = param_1[0xb];
  if (iVar9 < 0x601) {
    if (iVar9 == 0x600) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 7) & 0xf8;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else if (iVar9 == 0x2000) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 2) & 0xf8;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (char)*puVar10 << 3;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
    if (iVar9 == 0x200) {
      return 0;
    }
  }
  else if (iVar9 < 0x801) {
    if (iVar9 == 0x800) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        puVar10 = puVar6;
        if ((iVar9 != 0x1000) && (iVar9 != -1)) {
          if (iVar9 == 0x2000) {
            puVar10 = (ushort *)((int)puVar6 + 1);
          }
          else {
            if (iVar9 != 0x4000) {
              return 1;
            }
            puVar10 = puVar6 + 1;
          }
        }
        pbVar8 = pbVar7;
        iVar9 = iVar3;
        if (0 < iVar3) {
          do {
            uVar5 = *puVar10;
            puVar10 = (ushort *)((int)puVar10 + 3);
            iVar9 = iVar9 + -1;
            *pbVar8 = (byte)uVar5;
            pbVar8 = pbVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
    if (iVar9 == 0x700) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 8) & 0xf8;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else if (iVar9 == 0x2000) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 3) & 0xfc;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (char)*puVar10 << 3;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  else if (iVar9 < 0xa01) {
    if (iVar9 == 0xa00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = (ushort *)((int)puVar6 + 1);
        }
        else if (iVar9 == 0x2000) {
          puVar10 = puVar6 + 1;
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          puVar10 = (ushort *)((int)puVar6 + 3);
        }
        pbVar8 = pbVar7;
        iVar9 = iVar3;
        if (0 < iVar3) {
          do {
            uVar5 = *puVar10;
            puVar10 = puVar10 + 2;
            iVar9 = iVar9 + -1;
            *pbVar8 = (byte)uVar5;
            pbVar8 = pbVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
    if (iVar9 == 0x900) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        puVar10 = puVar6;
        if ((iVar9 != 0x1000) && (iVar9 != -1)) {
          if (iVar9 == 0x2000) {
            puVar10 = (ushort *)((int)puVar6 + 1);
          }
          else {
            if (iVar9 != 0x4000) {
              return 1;
            }
            puVar10 = puVar6 + 1;
          }
        }
        pbVar8 = pbVar7;
        iVar9 = iVar3;
        if (0 < iVar3) {
          do {
            uVar5 = *puVar10;
            puVar10 = puVar10 + 2;
            iVar9 = iVar9 + -1;
            *pbVar8 = (byte)uVar5;
            pbVar8 = pbVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  else if (iVar9 < 0xf01) {
    if (iVar9 == 0xf00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (char)*puVar10 << 3;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else if (iVar9 == 0x2000) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 3) & 0xfc;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 8) & 0xf8;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
    if (iVar9 == 0xe00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = ((byte)*puVar10 & 0x3e) << 2;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else if (iVar9 == 0x2000) {
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 3) & 0xf8;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          puVar10 = puVar6;
          pbVar8 = pbVar7;
          iVar9 = iVar3;
          if (0 < iVar3) {
            do {
              iVar9 = iVar9 + -1;
              *pbVar8 = (byte)(*puVar10 >> 8) & 0xf8;
              puVar10 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
            } while (iVar9 != 0);
          }
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  else {
    if (iVar9 == 0x1000) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = puVar6 + 1;
        }
        else if (iVar9 == 0x2000) {
          puVar10 = (ushort *)((int)puVar6 + 1);
        }
        else {
          puVar10 = puVar6;
          if (iVar9 != 0x4000) {
            return 1;
          }
        }
        pbVar8 = pbVar7;
        iVar9 = iVar3;
        if (0 < iVar3) {
          do {
            uVar5 = *puVar10;
            puVar10 = (ushort *)((int)puVar10 + 3);
            iVar9 = iVar9 + -1;
            *pbVar8 = (byte)uVar5;
            pbVar8 = pbVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
    if (iVar9 == 0x1100) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = puVar6 + 1;
        }
        else if (iVar9 == 0x2000) {
          puVar10 = (ushort *)((int)puVar6 + 1);
        }
        else {
          puVar10 = puVar6;
          if (iVar9 != 0x4000) {
            return 1;
          }
        }
        pbVar8 = pbVar7;
        iVar9 = iVar3;
        if (0 < iVar3) {
          do {
            uVar5 = *puVar10;
            puVar10 = puVar10 + 2;
            iVar9 = iVar9 + -1;
            *pbVar8 = (byte)uVar5;
            pbVar8 = pbVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
    if (iVar9 == 0x1200) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar10 = (ushort *)((int)puVar6 + 3);
        }
        else if (iVar9 == 0x2000) {
          puVar10 = puVar6 + 1;
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          puVar10 = (ushort *)((int)puVar6 + 1);
        }
        pbVar8 = pbVar7;
        iVar9 = iVar3;
        if (0 < iVar3) {
          do {
            uVar5 = *puVar10;
            puVar10 = puVar10 + 2;
            iVar9 = iVar9 + -1;
            *pbVar8 = (byte)uVar5;
            pbVar8 = pbVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar6 = (ushort *)((int)puVar6 + iVar1);
        pbVar7 = pbVar7 + iVar2;
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  return 1;
}


// ---- FUN_10005a70 @ 10005a70

undefined4 __cdecl FUN_10005a70(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort uVar14;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  puVar6 = (ushort *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar2 = param_1[7];
  iVar3 = param_1[0x15];
  iVar4 = param_1[0x1d];
  iVar5 = param_1[0x1c];
  iVar11 = param_1[0xb];
  if (iVar11 < 0x601) {
    if (iVar11 == 0x600) {
      iVar11 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[8];
        if ((iVar10 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar10 = iVar5;
          puVar7 = local_18;
          puVar12 = puVar6;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar12 = (*puVar7 ^ *puVar12) & 0x7c00 ^ *puVar12;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        else if ((iVar10 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar10 = iVar5;
          puVar7 = local_18;
          puVar12 = puVar6;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar12 = (*puVar7 ^ *puVar12) & 0x3e0 ^ *puVar12;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar10 != 0x4000) {
            return 1;
          }
          if (param_1[0x16] != 0x4000) {
            return 1;
          }
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar10 = iVar5;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar12 = (*puVar7 ^ *puVar12) & 0x1f ^ *puVar12;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar11 = iVar11 + 1;
        if (iVar4 <= iVar11) {
          return 0;
        }
      } while( true );
    }
    if (iVar11 == 0x200) {
      iVar11 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[0x16];
        if (iVar10 == 0x1000) {
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar10 = iVar5;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar12 = ((ushort)(byte)*puVar7 << 7 ^ *puVar12) & 0x7c00 ^ *puVar12;
              puVar7 = (ushort *)((int)puVar7 + 1);
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        else if (iVar10 == 0x2000) {
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar10 = iVar5;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar12 = ((ushort)(byte)*puVar7 << 2 ^ *puVar12) & 0x3e0 ^ *puVar12;
              puVar7 = (ushort *)((int)puVar7 + 1);
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        else if (iVar10 == 0x4000) {
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar10 = iVar5;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar12 = (ushort)(byte)((byte)*puVar7 >> 3) | *puVar12 & 0xffe0;
              puVar7 = (ushort *)((int)puVar7 + 1);
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar10 != -1) {
            return 1;
          }
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar10 = iVar5;
          if (0 < iVar5) {
            do {
              uVar9 = (byte)*puVar7 & 0xf8;
              iVar10 = iVar10 + -1;
              *puVar12 = (uVar9 << 5 | uVar9) << 2 | (ushort)(byte)((byte)*puVar7 >> 3);
              puVar7 = (ushort *)((int)puVar7 + 1);
              puVar12 = puVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar4);
      return 0;
    }
  }
  else if (iVar11 < 0x801) {
    if (iVar11 == 0x800) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar7 = local_18;
        puVar12 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar8 = local_18;
          puVar13 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              puVar12 = puVar13 + 1;
              puVar7 = (ushort *)((int)puVar8 + 3);
              iVar11 = iVar11 + -1;
              *puVar13 = ((ushort)(byte)*puVar8 << 7 ^ *puVar13) & 0x7c00 ^ *puVar13;
              puVar8 = puVar7;
              puVar13 = puVar12;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar7 = (ushort *)((int)local_18 + 1);
          iVar11 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar9 = *puVar7;
              puVar12 = puVar8 + 1;
              puVar7 = (ushort *)((int)puVar7 + 3);
              iVar11 = iVar11 + -1;
              *puVar8 = ((ushort)(byte)uVar9 << 2 ^ *puVar8) & 0x3e0 ^ *puVar8;
              puVar8 = puVar12;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar7 = local_18 + 1, puVar8 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            uVar9 = *puVar7;
            puVar12 = puVar8 + 1;
            puVar7 = (ushort *)((int)puVar7 + 3);
            iVar11 = iVar11 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar9 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar12;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar7;
            uVar14 = (byte)uVar9 & 0xf8;
            puVar7 = (ushort *)((int)puVar7 + 3);
            iVar11 = iVar11 + -1;
            *puVar12 = (uVar14 << 5 | uVar14) << 2 | (ushort)(byte)((byte)uVar9 >> 3);
            puVar12 = puVar12 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0x700) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar11 = param_1[8];
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              iVar11 = iVar11 + -1;
              *puVar12 = (*puVar7 >> 1 ^ *puVar12) & 0x7c00 ^ *puVar12;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              iVar11 = iVar11 + -1;
              *puVar12 = (*puVar7 >> 1 ^ *puVar12) & 0x3e0 ^ *puVar12;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar7 = local_18;
          puVar12 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              iVar11 = iVar11 + -1;
              *puVar12 = (*puVar7 ^ *puVar12) & 0x1f ^ *puVar12;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar11 != 0);
          }
        }
        else {
          if (iVar11 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          iVar11 = iVar5;
          puVar7 = local_18;
          puVar12 = puVar6;
          if (0 < iVar5) {
            do {
              uVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              uVar14 = uVar9 >> 1;
              iVar11 = iVar11 + -1;
              *puVar12 = (uVar14 ^ uVar9) & 0x1f ^ uVar14;
              puVar12 = puVar12 + 1;
            } while (iVar11 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar11 < 0xa01) {
    if (iVar11 == 0xa00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar7 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar12 = (ushort *)((int)local_18 + 1);
          puVar8 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              uVar9 = *puVar12;
              puVar7 = puVar8 + 1;
              puVar12 = puVar12 + 2;
              iVar11 = iVar11 + -1;
              *puVar8 = ((ushort)(byte)uVar9 << 7 ^ *puVar8) & 0x7c00 ^ *puVar8;
              puVar8 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar12 = local_18 + 1;
          puVar8 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              uVar9 = *puVar12;
              puVar7 = puVar8 + 1;
              puVar12 = puVar12 + 2;
              iVar11 = iVar11 + -1;
              *puVar8 = ((ushort)(byte)uVar9 << 2 ^ *puVar8) & 0x3e0 ^ *puVar8;
              puVar8 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else {
          puVar12 = local_18;
          if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
             (puVar12 = (ushort *)((int)local_18 + 3), puVar8 = puVar6, iVar11 = iVar5, 0 < iVar5))
          {
            do {
              uVar9 = *puVar12;
              puVar7 = puVar8 + 1;
              puVar12 = puVar12 + 2;
              iVar11 = iVar11 + -1;
              *puVar8 = (ushort)(byte)((byte)uVar9 >> 3) | *puVar8 & 0xffe0;
              puVar8 = puVar7;
            } while (iVar11 != 0);
          }
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            pbVar1 = (byte *)((int)puVar12 + 1);
            uVar9 = *pbVar1 & 0xf8;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar7 = (uVar9 << 5 | uVar9) << 2 | (ushort)(*pbVar1 >> 3);
            puVar7 = puVar7 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0x900) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar7 = puVar6;
        puVar12 = local_18;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar8 = puVar6;
          iVar11 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              puVar7 = puVar8 + 1;
              puVar12 = puVar13 + 2;
              iVar11 = iVar11 + -1;
              *puVar8 = ((ushort)(byte)*puVar13 << 7 ^ *puVar8) & 0x7c00 ^ *puVar8;
              puVar8 = puVar7;
              puVar13 = puVar12;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar12 = (ushort *)((int)local_18 + 1);
          puVar8 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              uVar9 = *puVar12;
              puVar7 = puVar8 + 1;
              puVar12 = puVar12 + 2;
              iVar11 = iVar11 + -1;
              *puVar8 = ((ushort)(byte)uVar9 << 2 ^ *puVar8) & 0x3e0 ^ *puVar8;
              puVar8 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar12 = local_18 + 1, puVar8 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar9 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            uVar14 = (byte)uVar9 & 0xf8;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar7 = (uVar14 << 5 | uVar14) << 2 | (ushort)(byte)((byte)uVar9 >> 3);
            puVar7 = puVar7 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar11 < 0xf01) {
    if (iVar11 == 0xf00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar12 = local_18;
        puVar7 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar8 = local_18;
          puVar13 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              puVar12 = puVar8 + 1;
              puVar7 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar8 << 10 ^ *puVar13) & 0x7c00 ^ *puVar13;
              puVar8 = puVar12;
              puVar13 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar8 = local_18;
          puVar13 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              puVar12 = puVar8 + 1;
              puVar7 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar8 >> 1 ^ *puVar13) & 0x3e0 ^ *puVar13;
              puVar8 = puVar12;
              puVar13 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar11 = iVar5, puVar8 = local_18, puVar13 = puVar6, 0 < iVar5)) {
          do {
            puVar12 = puVar8 + 1;
            puVar7 = puVar13 + 1;
            iVar11 = iVar11 + -1;
            *puVar13 = (*puVar8 >> 0xb ^ *puVar13) & 0x1f ^ *puVar13;
            puVar8 = puVar12;
            puVar13 = puVar7;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar12 = puVar12 + 1;
            iVar11 = iVar11 + -1;
            *puVar7 = (ushort)(uVar9 >> 10 | uVar9 & 0x7c0) >> 1 | (uVar9 & 0x1f) << 10;
            puVar7 = puVar7 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0xe00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar12 = local_18;
        puVar7 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar11 = iVar5;
          puVar8 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              puVar12 = puVar8 + 1;
              puVar7 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar8 << 9 ^ *puVar13) & 0x7c00 ^ *puVar13;
              puVar8 = puVar12;
              puVar13 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar8 = local_18;
          puVar13 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              puVar12 = puVar8 + 1;
              puVar7 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar8 >> 1 ^ *puVar13) & 0x3e0 ^ *puVar13;
              puVar8 = puVar12;
              puVar13 = puVar7;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar11 = iVar5, puVar8 = local_18, puVar13 = puVar6, 0 < iVar5)) {
          do {
            puVar12 = puVar8 + 1;
            puVar7 = puVar13 + 1;
            iVar11 = iVar11 + -1;
            *puVar13 = (*puVar8 >> 0xb ^ *puVar13) & 0x1f ^ *puVar13;
            puVar8 = puVar12;
            puVar13 = puVar7;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar12 = puVar12 + 1;
            iVar11 = iVar11 + -1;
            *puVar7 = (ushort)(uVar9 >> 10 | uVar9 & 0x7c0) >> 1 | (uVar9 & 0x3e) << 9;
            puVar7 = puVar7 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar11 == 0x1000) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar11 = param_1[8];
      puVar7 = puVar6;
      if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar12 = local_18 + 1;
        puVar8 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = (ushort *)((int)puVar12 + 3);
            iVar11 = iVar11 + -1;
            *puVar8 = ((ushort)(byte)uVar9 << 7 ^ *puVar8) & 0x7c00 ^ *puVar8;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar12 = (ushort *)((int)local_18 + 1);
        iVar11 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = (ushort *)((int)puVar12 + 3);
            iVar11 = iVar11 + -1;
            *puVar8 = ((ushort)(byte)uVar9 << 2 ^ *puVar8) & 0x3e0 ^ *puVar8;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      else {
        puVar12 = local_18;
        if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar8 = local_18, puVar13 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            puVar7 = puVar13 + 1;
            puVar12 = (ushort *)((int)puVar8 + 3);
            iVar11 = iVar11 + -1;
            *puVar13 = (ushort)(byte)((byte)*puVar8 >> 3) | *puVar13 & 0xffe0;
            puVar8 = puVar12;
            puVar13 = puVar7;
          } while (iVar11 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          uVar9 = *puVar12;
          uVar14 = (byte)uVar9 & 0xf8;
          puVar12 = (ushort *)((int)puVar12 + 3);
          iVar11 = iVar11 + -1;
          *puVar7 = (uVar14 << 5 | uVar14) << 2 | (ushort)(byte)((byte)uVar9 >> 3);
          puVar7 = puVar7 + 1;
        } while (iVar11 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar11 == 0x1100) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar11 = param_1[8];
      puVar7 = puVar6;
      if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar12 = local_18 + 1;
        iVar11 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = ((ushort)(byte)uVar9 << 7 ^ *puVar8) & 0x7c00 ^ *puVar8;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar12 = (ushort *)((int)local_18 + 1);
        iVar11 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = ((ushort)(byte)uVar9 << 2 ^ *puVar8) & 0x3e0 ^ *puVar8;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      else {
        puVar12 = local_18;
        if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (iVar11 = iVar5, puVar8 = local_18, puVar13 = puVar6, 0 < iVar5)) {
          do {
            puVar7 = puVar13 + 1;
            puVar12 = puVar8 + 2;
            iVar11 = iVar11 + -1;
            *puVar13 = (ushort)(byte)((byte)*puVar8 >> 3) | *puVar13 & 0xffe0;
            puVar8 = puVar12;
            puVar13 = puVar7;
          } while (iVar11 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          uVar9 = *puVar12;
          uVar14 = (byte)uVar9 & 0xf8;
          puVar12 = puVar12 + 2;
          iVar11 = iVar11 + -1;
          *puVar7 = (uVar14 << 5 | uVar14) << 2 | (ushort)(byte)((byte)uVar9 >> 3);
          puVar7 = puVar7 + 1;
        } while (iVar11 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar11 == 0x1200) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar11 = param_1[8];
      puVar7 = puVar6;
      if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar12 = (ushort *)((int)local_18 + 3);
        puVar8 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = ((ushort)(byte)uVar9 << 7 ^ *puVar8) & 0x7c00 ^ *puVar8;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar12 = local_18 + 1;
        puVar8 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = ((ushort)(byte)uVar9 << 2 ^ *puVar8) & 0x3e0 ^ *puVar8;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      else {
        puVar12 = local_18;
        if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar12 = (ushort *)((int)local_18 + 1), puVar8 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            uVar9 = *puVar12;
            puVar7 = puVar8 + 1;
            puVar12 = puVar12 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar9 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          pbVar1 = (byte *)((int)puVar12 + 1);
          uVar9 = *pbVar1 & 0xf8;
          puVar12 = puVar12 + 2;
          iVar11 = iVar11 + -1;
          *puVar7 = (uVar9 << 5 | uVar9) << 2 | (ushort)(*pbVar1 >> 3);
          puVar7 = puVar7 + 1;
        } while (iVar11 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  return 1;
}


// ---- FUN_10006b60 @ 10006b60

undefined4 __cdecl FUN_10006b60(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  puVar6 = (ushort *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar2 = param_1[7];
  iVar3 = param_1[0x15];
  iVar4 = param_1[0x1d];
  iVar5 = param_1[0x1c];
  iVar12 = param_1[0xb];
  if (iVar12 < 0x601) {
    if (iVar12 == 0x600) {
      iVar12 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar10 = puVar6;
          iVar9 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar9 = iVar9 + -1;
              *puVar10 = (*puVar10 ^ *puVar13 * 2) & 0x7ff ^ *puVar13 * 2;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
        else if ((iVar9 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar9 = iVar5;
          puVar10 = puVar6;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar13 = puVar13 + 1;
              iVar9 = iVar9 + -1;
              *puVar10 = (uVar7 & 0x3e0) * 2 | *puVar10 & 0xf81f;
              puVar10 = puVar10 + 1;
            } while (iVar9 != 0);
          }
        }
        else if ((iVar9 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar10 = puVar6;
          iVar9 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar9 = iVar9 + -1;
              *puVar10 = (*puVar13 ^ *puVar10) & 0x1f ^ *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar10 = puVar6;
          iVar9 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar9 = iVar9 + -1;
              *puVar10 = (*puVar13 & 0xffe0) * 2 | *puVar13 & 0x1f;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar12 = iVar12 + 1;
        if (iVar4 <= iVar12) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0x200) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[0x16];
        if (iVar12 == 0x1000) {
          puVar10 = puVar6;
          puVar13 = local_18;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              uVar7 = (ushort)(byte)*puVar13 << 8;
              iVar12 = iVar12 + -1;
              *puVar10 = (*puVar10 ^ uVar7) & 0x7ff ^ uVar7;
              puVar10 = puVar10 + 1;
              puVar13 = (ushort *)((int)puVar13 + 1);
            } while (iVar12 != 0);
          }
        }
        else if (iVar12 == 0x2000) {
          puVar10 = puVar6;
          iVar12 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar10 = ((ushort)(byte)*puVar13 << 3 ^ *puVar10) & 0x7e0 ^ *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = (ushort *)((int)puVar13 + 1);
            } while (iVar12 != 0);
          }
        }
        else if (iVar12 == 0x4000) {
          puVar10 = puVar6;
          iVar12 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar10 = ((ushort)(byte)((byte)*puVar13 >> 3) ^ *puVar10) & 0x1f ^ *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = (ushort *)((int)puVar13 + 1);
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != -1) {
            return 1;
          }
          puVar10 = puVar6;
          puVar13 = local_18;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              bVar1 = (byte)*puVar13;
              iVar12 = iVar12 + -1;
              *puVar10 = (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3) | (bVar1 & 0xf8) << 8;
              puVar10 = puVar10 + 1;
              puVar13 = (ushort *)((int)puVar13 + 1);
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  else if (iVar12 < 0x801) {
    if (iVar12 == 0x800) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar10 = local_18;
        puVar13 = puVar6;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              puVar13 = puVar8 + 1;
              uVar7 = (ushort)(byte)*puVar10 << 8;
              puVar10 = (ushort *)((int)puVar10 + 3);
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
              puVar8 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar10 = (ushort *)((int)local_18 + 1);
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar10;
              puVar13 = puVar8 + 1;
              puVar10 = (ushort *)((int)puVar10 + 3);
              iVar12 = iVar12 + -1;
              *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar10 = local_18 + 1, iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            uVar7 = *puVar10;
            puVar13 = puVar8 + 1;
            puVar10 = (ushort *)((int)puVar10 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar13;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            bVar1 = (byte)*puVar10;
            puVar10 = (ushort *)((int)puVar10 + 3);
            iVar12 = iVar12 + -1;
            *puVar13 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
            puVar13 = puVar13 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar12 == 0x700) {
      iVar12 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar10 = puVar6;
          iVar9 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar9 = iVar9 + -1;
              *puVar10 = (*puVar10 ^ *puVar13) & 0x7ff ^ *puVar13;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
        else if ((iVar9 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar9 = iVar5;
          puVar10 = puVar6;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar9 = iVar9 + -1;
              *puVar10 = (*puVar13 ^ *puVar10) & 0x7e0 ^ *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 != 0x4000) {
            return 1;
          }
          if (param_1[0x16] != 0x4000) {
            return 1;
          }
          puVar10 = puVar6;
          iVar9 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar9 = iVar9 + -1;
              *puVar10 = (*puVar13 ^ *puVar10) & 0x1f ^ *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar12 = iVar12 + 1;
        if (iVar4 <= iVar12) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar12 < 0xa01) {
    if (iVar12 == 0xa00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar10 = puVar6;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar13 = (ushort *)((int)local_18 + 1);
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              puVar10 = puVar8 + 1;
              uVar7 = (ushort)(byte)*puVar13 << 8;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
              puVar8 = puVar10;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar13 = local_18 + 1;
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar10 = puVar8 + 1;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar10;
            } while (iVar12 != 0);
          }
        }
        else {
          puVar13 = local_18;
          if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
             (puVar13 = (ushort *)((int)local_18 + 3), iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5))
          {
            do {
              uVar7 = *puVar13;
              puVar10 = puVar8 + 1;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
              puVar8 = puVar10;
            } while (iVar12 != 0);
          }
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            bVar1 = *(byte *)((int)puVar13 + 1);
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar10 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
            puVar10 = puVar10 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar12 == 0x900) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar10 = local_18;
        puVar13 = puVar6;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              puVar13 = puVar8 + 1;
              uVar7 = (ushort)(byte)*puVar10 << 8;
              puVar10 = puVar10 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
              puVar8 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar10 = (ushort *)((int)local_18 + 1);
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar10;
              puVar13 = puVar8 + 1;
              puVar10 = puVar10 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar10 = local_18 + 1, iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            uVar7 = *puVar10;
            puVar13 = puVar8 + 1;
            puVar10 = puVar10 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar13;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            bVar1 = (byte)*puVar10;
            puVar10 = puVar10 + 2;
            iVar12 = iVar12 + -1;
            *puVar13 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
            puVar13 = puVar13 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar12 < 0xf01) {
    if (iVar12 == 0xf00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar13 = local_18;
        puVar10 = puVar6;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar10 = puVar8 + 1;
              iVar12 = iVar12 + -1;
              *puVar8 = uVar7 << 0xb | *puVar8 & 0x7ff;
              puVar8 = puVar10;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar12 = iVar5;
          puVar8 = local_18;
          puVar11 = puVar6;
          if (0 < iVar5) {
            do {
              puVar13 = puVar8 + 1;
              puVar10 = puVar11 + 1;
              iVar12 = iVar12 + -1;
              *puVar11 = (*puVar8 ^ *puVar11) & 0x7e0 ^ *puVar11;
              puVar8 = puVar13;
              puVar11 = puVar10;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar12 = iVar5, puVar8 = local_18, puVar11 = puVar6, 0 < iVar5)) {
          do {
            puVar13 = puVar8 + 1;
            puVar10 = puVar11 + 1;
            iVar12 = iVar12 + -1;
            *puVar11 = (*puVar8 >> 0xb ^ *puVar11) & 0x1f ^ *puVar11;
            puVar8 = puVar13;
            puVar11 = puVar10;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar12 = iVar12 + -1;
            *puVar10 = uVar7 >> 0xb | uVar7 & 0x7c0 | uVar7 << 0xb;
            puVar10 = puVar10 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar12 == 0xe00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar13 = local_18;
        puVar10 = puVar6;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar8 = local_18;
          puVar11 = puVar6;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              puVar13 = puVar8 + 1;
              puVar10 = puVar11 + 1;
              iVar12 = iVar12 + -1;
              *puVar11 = (*puVar11 ^ *puVar8 << 10) & 0x7ff ^ *puVar8 << 10;
              puVar8 = puVar13;
              puVar11 = puVar10;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar10 = puVar8 + 1;
              iVar12 = iVar12 + -1;
              *puVar8 = uVar7 & 0x7c0 | *puVar8 & 0xf81f;
              puVar8 = puVar10;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar12 = iVar5, puVar8 = local_18, puVar11 = puVar6, 0 < iVar5)) {
          do {
            puVar13 = puVar8 + 1;
            puVar10 = puVar11 + 1;
            iVar12 = iVar12 + -1;
            *puVar11 = (*puVar8 >> 0xb ^ *puVar11) & 0x1f ^ *puVar11;
            puVar8 = puVar13;
            puVar11 = puVar10;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar12 = iVar12 + -1;
            *puVar10 = (uVar7 & 0xfffe) << 10 | uVar7 & 0x7c0 | uVar7 >> 0xb;
            puVar10 = puVar10 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar12 == 0x1000) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar12 = param_1[8];
      puVar10 = puVar6;
      if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar13 = local_18 + 1;
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            puVar10 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar13 = (ushort *)((int)local_18 + 1);
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar10 = puVar8 + 1;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      else {
        puVar13 = local_18;
        if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (iVar12 = iVar5, puVar8 = puVar6, puVar11 = local_18, 0 < iVar5)) {
          do {
            puVar10 = puVar8 + 1;
            puVar13 = (ushort *)((int)puVar11 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)*puVar11 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar10;
            puVar11 = puVar13;
          } while (iVar12 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar12 = iVar5;
      if (0 < iVar5) {
        do {
          bVar1 = (byte)*puVar13;
          puVar13 = (ushort *)((int)puVar13 + 3);
          iVar12 = iVar12 + -1;
          *puVar10 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
          puVar10 = puVar10 + 1;
        } while (iVar12 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar12 == 0x1100) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar12 = param_1[8];
      puVar10 = puVar6;
      if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar13 = local_18 + 1;
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            puVar10 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar13 = (ushort *)((int)local_18 + 1);
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar10 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      else {
        puVar13 = local_18;
        if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (iVar12 = iVar5, puVar8 = local_18, puVar11 = puVar6, 0 < iVar5)) {
          do {
            puVar10 = puVar11 + 1;
            puVar13 = puVar8 + 2;
            iVar12 = iVar12 + -1;
            *puVar11 = (ushort)(byte)((byte)*puVar8 >> 3) | *puVar11 & 0xffe0;
            puVar8 = puVar13;
            puVar11 = puVar10;
          } while (iVar12 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar12 = iVar5;
      if (0 < iVar5) {
        do {
          bVar1 = (byte)*puVar13;
          puVar13 = puVar13 + 2;
          iVar12 = iVar12 + -1;
          *puVar10 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
          puVar10 = puVar10 + 1;
        } while (iVar12 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar12 == 0x1200) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar12 = param_1[8];
      puVar10 = puVar6;
      if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar13 = (ushort *)((int)local_18 + 3);
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            puVar10 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar13 = local_18 + 1;
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar10 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      else {
        puVar13 = local_18;
        if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar13 = (ushort *)((int)local_18 + 1), iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            uVar7 = *puVar13;
            puVar10 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar10;
          } while (iVar12 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar12 = iVar5;
      if (0 < iVar5) {
        do {
          bVar1 = *(byte *)((int)puVar13 + 1);
          puVar13 = puVar13 + 2;
          iVar12 = iVar12 + -1;
          *puVar10 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
          puVar10 = puVar10 + 1;
        } while (iVar12 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  return 1;
}


// ---- FUN_10007c50 @ 10007c50

undefined4 __cdecl FUN_10007c50(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  pbVar7 = (byte *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar3 = param_1[7];
  iVar4 = param_1[0x15];
  iVar12 = param_1[0x1c];
  iVar5 = param_1[0x1d];
  iVar13 = param_1[0xb];
  if (iVar13 < 0x601) {
    if (iVar13 == 0x600) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar16 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 7) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 2) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar10 = pbVar7 + 2;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (char)*puVar16 << 3;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar16 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              *pbVar10 = (byte)(uVar2 >> 7) & 0xf8;
              iVar13 = iVar13 + -1;
              pbVar10[1] = (byte)(uVar2 >> 2) & 0xf8;
              pbVar10[2] = (char)uVar2 << 3;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x200) {
      iVar13 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[0x16];
        if (iVar9 == -1) {
          iVar9 = iVar12;
          pbVar10 = pbVar7;
          puVar16 = local_18;
          if (0 < iVar12) {
            do {
              bVar1 = (byte)*puVar16;
              *pbVar10 = bVar1;
              pbVar10[1] = bVar1;
              pbVar10[2] = bVar1;
              iVar9 = iVar9 + -1;
              pbVar10 = pbVar10 + 3;
              puVar16 = (ushort *)((int)puVar16 + 1);
            } while (iVar9 != 0);
          }
        }
        else {
          pbVar10 = pbVar7;
          if (iVar9 != 0x1000) {
            if (iVar9 == 0x2000) {
              pbVar10 = pbVar7 + 1;
            }
            else {
              if (iVar9 != 0x4000) {
                return 1;
              }
              pbVar10 = pbVar7 + 2;
            }
          }
          iVar9 = iVar12;
          puVar16 = local_18;
          if (0 < iVar12) {
            do {
              *pbVar10 = (byte)*puVar16;
              pbVar10 = pbVar10 + 3;
              iVar9 = iVar9 + -1;
              puVar16 = (ushort *)((int)puVar16 + 1);
            } while (iVar9 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar5);
      return 0;
    }
  }
  else if (iVar13 < 0x801) {
    if (iVar13 == 0x800) {
      iVar13 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        puVar16 = local_18;
        if ((iVar9 != 0x1000) && (iVar9 != -1)) {
          if (iVar9 == 0x2000) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else {
            if (iVar9 != 0x4000) {
              return 1;
            }
            puVar16 = local_18 + 1;
          }
        }
        iVar9 = param_1[0x16];
        pbVar10 = pbVar7;
        if (iVar9 != 0x1000) {
          if (iVar9 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            if (iVar9 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar12) {
                do {
                  bVar1 = (byte)*puVar16;
                  puVar16 = (ushort *)((int)puVar16 + 3);
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              return 0;
            }
            pbVar10 = pbVar7 + 2;
          }
        }
        iVar9 = iVar12;
        if (0 < iVar12) {
          do {
            uVar2 = *puVar16;
            puVar16 = (ushort *)((int)puVar16 + 3);
            *pbVar10 = (byte)uVar2;
            pbVar10 = pbVar10 + 3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar13 = iVar13 + 1;
        if (iVar5 <= iVar13) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x700) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar16 = local_18;
          iVar13 = iVar12;
          pbVar10 = pbVar7;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 3) & 0xfc;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar10 = pbVar7 + 2;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (char)*puVar16 << 3;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar16 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              *pbVar10 = (byte)(uVar2 >> 8) & 0xf8;
              iVar13 = iVar13 + -1;
              pbVar10[1] = (byte)(uVar2 >> 3) & 0xfc;
              pbVar10[2] = (char)uVar2 << 3;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar13 < 0xa01) {
    if (iVar13 == 0xa00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          pbVar15 = (byte *)((int)local_18 + 1);
          iVar13 = iVar12 + -1;
          iVar9 = iVar13;
          pbVar10 = pbVar7;
          iVar11 = 0;
          if (0 < iVar13) {
            do {
              uVar6 = *(undefined4 *)pbVar15;
              pbVar15 = pbVar15 + 4;
              *(undefined4 *)pbVar10 = uVar6;
              pbVar10 = pbVar10 + 3;
              iVar9 = iVar9 + -1;
              iVar11 = iVar13;
            } while (iVar9 != 0);
          }
          if (iVar11 < iVar12) {
            iVar11 = iVar12 - iVar11;
            do {
              *pbVar10 = *pbVar15;
              pbVar10[1] = pbVar15[1];
              pbVar10[2] = pbVar15[2];
              pbVar10 = pbVar10 + 3;
              pbVar15 = pbVar15 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else if (iVar13 == 0x2000) {
            puVar16 = local_18 + 1;
          }
          else {
            if (iVar13 != 0x4000) {
              return 1;
            }
            puVar16 = (ushort *)((int)local_18 + 3);
          }
          iVar13 = param_1[0x16];
          pbVar10 = pbVar7;
          if (iVar13 != 0x1000) {
            if (iVar13 == 0x2000) {
              pbVar10 = pbVar7 + 1;
            }
            else {
              if (iVar13 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar12) {
                  do {
                    bVar1 = (byte)*puVar16;
                    puVar16 = puVar16 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar10 = pbVar7 + 2;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x900) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          iVar13 = iVar12 + -1;
          pbVar10 = pbVar7;
          iVar9 = iVar13;
          puVar16 = local_18;
          puVar14 = local_18;
          iVar11 = 0;
          if (0 < iVar13) {
            do {
              puVar16 = puVar14 + 2;
              *(undefined4 *)pbVar10 = *(undefined4 *)puVar14;
              pbVar10 = pbVar10 + 3;
              iVar9 = iVar9 + -1;
              puVar14 = puVar16;
              iVar11 = iVar13;
            } while (iVar9 != 0);
          }
          if (iVar11 < iVar12) {
            iVar11 = iVar12 - iVar11;
            do {
              *pbVar10 = (byte)*puVar16;
              pbVar10[1] = *(byte *)((int)puVar16 + 1);
              pbVar10[2] = (byte)puVar16[1];
              pbVar10 = pbVar10 + 3;
              puVar16 = puVar16 + 2;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          puVar16 = local_18;
          if ((iVar13 != 0x1000) && (iVar13 != -1)) {
            if (iVar13 == 0x2000) {
              puVar16 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar13 != 0x4000) {
                return 1;
              }
              puVar16 = local_18 + 1;
            }
          }
          iVar13 = param_1[0x16];
          pbVar10 = pbVar7;
          if (iVar13 != 0x1000) {
            if (iVar13 == 0x2000) {
              pbVar10 = pbVar7 + 1;
            }
            else {
              if (iVar13 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar12) {
                  do {
                    bVar1 = (byte)*puVar16;
                    puVar16 = puVar16 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar10 = pbVar7 + 2;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar13 < 0xf01) {
    if (iVar13 == 0xf00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar16 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (char)*puVar16 << 3;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 3) & 0xfc;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar10 = pbVar7 + 2;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar16 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              *pbVar10 = (char)uVar2 << 3;
              pbVar10[1] = (byte)(uVar2 >> 3) & 0xfc;
              iVar13 = iVar13 + -1;
              pbVar10[2] = (byte)(uVar2 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0xe00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar10 = pbVar7;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = ((byte)*puVar16 & 0x3e) << 2;
              pbVar10 = pbVar10 + 3;
              puVar16 = puVar16 + 1;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          iVar13 = iVar12;
          puVar16 = local_18;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 3) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar10 = pbVar7 + 2;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar16 >> 8) & 0xf8;
              pbVar10 = pbVar10 + 3;
              puVar16 = puVar16 + 1;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          pbVar10 = pbVar7;
          puVar16 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              *pbVar10 = ((byte)uVar2 & 0x3e) << 2;
              pbVar10[1] = (byte)(uVar2 >> 3) & 0xf8;
              iVar13 = iVar13 + -1;
              pbVar10[2] = (byte)(uVar2 >> 8) & 0xf8;
              pbVar10 = pbVar10 + 3;
              puVar16 = puVar16 + 1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar13 == 0x1000) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          puVar16 = local_18 + 1;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              *pbVar10 = (byte)*puVar16;
              puVar14 = puVar16 + -1;
              pbVar10[1] = *(byte *)((int)puVar16 + -1);
              puVar16 = (ushort *)((int)puVar16 + 3);
              iVar13 = iVar13 + -1;
              pbVar10[2] = (byte)*puVar14;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar16 = local_18 + 1;
          }
          else if (iVar13 == 0x2000) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar16 = local_18;
            if (iVar13 != 0x4000) {
              return 1;
            }
          }
          iVar13 = param_1[0x16];
          pbVar10 = pbVar7;
          if (iVar13 != 0x1000) {
            if (iVar13 == 0x2000) {
              pbVar10 = pbVar7 + 1;
            }
            else {
              if (iVar13 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar12) {
                  do {
                    bVar1 = (byte)*puVar16;
                    puVar16 = (ushort *)((int)puVar16 + 3);
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar10 = pbVar7 + 2;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              puVar16 = (ushort *)((int)puVar16 + 3);
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x1100) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          puVar16 = local_18 + 1;
          iVar13 = iVar12;
          pbVar10 = pbVar7;
          if (0 < iVar12) {
            do {
              *pbVar10 = (byte)*puVar16;
              puVar14 = puVar16 + -1;
              pbVar10[1] = *(byte *)((int)puVar16 + -1);
              puVar16 = puVar16 + 2;
              iVar13 = iVar13 + -1;
              pbVar10[2] = (byte)*puVar14;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar16 = local_18 + 1;
          }
          else if (iVar13 == 0x2000) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar16 = local_18;
            if (iVar13 != 0x4000) {
              return 1;
            }
          }
          iVar13 = param_1[0x16];
          pbVar10 = pbVar7;
          if (iVar13 != 0x1000) {
            if (iVar13 == 0x2000) {
              pbVar10 = pbVar7 + 1;
            }
            else {
              if (iVar13 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar12) {
                  do {
                    bVar1 = (byte)*puVar16;
                    puVar16 = puVar16 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar10 = pbVar7 + 2;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x1200) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          pbVar15 = (byte *)((int)local_18 + 3);
          iVar13 = iVar12;
          pbVar10 = pbVar7;
          if (0 < iVar12) {
            do {
              *pbVar10 = *pbVar15;
              pbVar8 = pbVar15 + -2;
              pbVar10[1] = pbVar15[-1];
              pbVar15 = pbVar15 + 4;
              iVar13 = iVar13 + -1;
              pbVar10[2] = *pbVar8;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar16 = (ushort *)((int)local_18 + 3);
          }
          else if (iVar13 == 0x2000) {
            puVar16 = local_18 + 1;
          }
          else {
            if (iVar13 != 0x4000) {
              return 1;
            }
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          iVar13 = param_1[0x16];
          pbVar10 = pbVar7;
          if (iVar13 != 0x1000) {
            if (iVar13 == 0x2000) {
              pbVar10 = pbVar7 + 1;
            }
            else {
              if (iVar13 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar12) {
                  do {
                    bVar1 = (byte)*puVar16;
                    puVar16 = puVar16 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar10 = pbVar7 + 2;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}


// ---- FUN_100089f0 @ 100089f0

undefined4 __cdecl FUN_100089f0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  pbVar7 = (byte *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar3 = param_1[7];
  iVar4 = param_1[0x15];
  iVar15 = param_1[0x1c];
  iVar5 = param_1[0x1d];
  iVar16 = param_1[0xb];
  if (iVar16 < 0x601) {
    if (iVar16 == 0x600) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar12 = local_18;
          iVar16 = iVar15;
          pbVar14 = pbVar7;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 7) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar14 = pbVar7 + 1;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 2) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar14 = pbVar7 + 2;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (char)*puVar12 << 3;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if (iVar16 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar12 = local_18;
          pbVar14 = pbVar7;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              *pbVar14 = (byte)(uVar2 >> 7) & 0xf8;
              iVar16 = iVar16 + -1;
              pbVar14[1] = (byte)(uVar2 >> 2) & 0xf8;
              pbVar14[2] = (char)uVar2 << 3;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar16 == 0x200) {
      iVar16 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[0x16];
        if (iVar10 == -1) {
          iVar10 = iVar15;
          pbVar14 = pbVar7;
          puVar12 = local_18;
          if (0 < iVar15) {
            do {
              bVar1 = (byte)*puVar12;
              *pbVar14 = bVar1;
              pbVar14[1] = bVar1;
              pbVar14[2] = bVar1;
              iVar10 = iVar10 + -1;
              pbVar14 = pbVar14 + 4;
              puVar12 = (ushort *)((int)puVar12 + 1);
            } while (iVar10 != 0);
          }
        }
        else {
          pbVar14 = pbVar7;
          if (iVar10 != 0x1000) {
            if (iVar10 == 0x2000) {
              pbVar14 = pbVar7 + 1;
            }
            else {
              if (iVar10 != 0x4000) {
                return 1;
              }
              pbVar14 = pbVar7 + 2;
            }
          }
          iVar10 = iVar15;
          puVar12 = local_18;
          if (0 < iVar15) {
            do {
              *pbVar14 = (byte)*puVar12;
              pbVar14 = pbVar14 + 4;
              iVar10 = iVar10 + -1;
              puVar12 = (ushort *)((int)puVar12 + 1);
            } while (iVar10 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar5);
      return 0;
    }
  }
  else if (iVar16 < 0x801) {
    if (iVar16 == 0x800) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == -1) && (param_1[0x16] == -1)) {
          iVar16 = iVar15 + -1;
          iVar10 = iVar16;
          puVar12 = local_18;
          puVar11 = local_18;
          pbVar14 = pbVar7;
          iVar8 = 0;
          if (0 < iVar16) {
            do {
              puVar12 = (ushort *)((int)puVar11 + 3);
              *(undefined4 *)pbVar14 = *(undefined4 *)puVar11;
              pbVar14 = pbVar14 + 4;
              iVar10 = iVar10 + -1;
              puVar11 = puVar12;
              iVar8 = iVar16;
            } while (iVar10 != 0);
          }
          if (iVar8 < iVar15) {
            iVar8 = iVar15 - iVar8;
            do {
              *pbVar14 = (byte)*puVar12;
              puVar11 = puVar12 + 1;
              pbVar14[1] = *(byte *)((int)puVar12 + 1);
              puVar12 = (ushort *)((int)puVar12 + 3);
              pbVar14[2] = (byte)*puVar11;
              pbVar14 = pbVar14 + 4;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        else {
          puVar12 = local_18;
          if ((iVar16 != 0x1000) && (iVar16 != -1)) {
            if (iVar16 == 0x2000) {
              puVar12 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar16 != 0x4000) {
                return 1;
              }
              puVar12 = local_18 + 1;
            }
          }
          iVar16 = param_1[0x16];
          pbVar14 = pbVar7;
          if (iVar16 != 0x1000) {
            if (iVar16 == 0x2000) {
              pbVar14 = pbVar7 + 1;
            }
            else {
              if (iVar16 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar15) {
                  do {
                    bVar1 = (byte)*puVar12;
                    puVar12 = (ushort *)((int)puVar12 + 3);
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 4;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar14 = pbVar7 + 2;
            }
          }
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              puVar12 = (ushort *)((int)puVar12 + 3);
              *pbVar14 = (byte)uVar2;
              pbVar14 = pbVar14 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar16 == 0x700) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar12 = local_18;
          pbVar14 = pbVar7;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 8) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar14 = pbVar7 + 1;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 3) & 0xfc;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar14 = pbVar7 + 2;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (char)*puVar12 << 3;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if (iVar16 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar12 = local_18;
          iVar16 = iVar15;
          pbVar14 = pbVar7;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              *pbVar14 = (byte)(uVar2 >> 8) & 0xf8;
              iVar16 = iVar16 + -1;
              pbVar14[1] = (byte)(uVar2 >> 3) & 0xfc;
              pbVar14[2] = (char)uVar2 << 3;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar16 < 0xa01) {
    if (iVar16 == 0xa00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = (byte *)((int)local_18 + 1);
          iVar16 = iVar15 + -1;
          pbVar14 = pbVar7;
          iVar10 = iVar16;
          iVar8 = 0;
          if (0 < iVar16) {
            do {
              uVar6 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              *(undefined4 *)pbVar14 = uVar6;
              pbVar14 = pbVar14 + 4;
              iVar10 = iVar10 + -1;
              iVar8 = iVar16;
            } while (iVar10 != 0);
          }
          if (iVar8 < iVar15) {
            iVar8 = iVar15 - iVar8;
            do {
              *pbVar14 = *pbVar9;
              pbVar14[1] = pbVar9[1];
              pbVar14[2] = pbVar9[2];
              pbVar14 = pbVar14 + 4;
              pbVar9 = pbVar9 + 4;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        else {
          if ((iVar16 == 0x1000) || (iVar16 == -1)) {
            puVar12 = (ushort *)((int)local_18 + 1);
          }
          else if (iVar16 == 0x2000) {
            puVar12 = local_18 + 1;
          }
          else {
            if (iVar16 != 0x4000) {
              return 1;
            }
            puVar12 = (ushort *)((int)local_18 + 3);
          }
          iVar16 = param_1[0x16];
          pbVar14 = pbVar7;
          if (iVar16 != 0x1000) {
            if (iVar16 == 0x2000) {
              pbVar14 = pbVar7 + 1;
            }
            else {
              if (iVar16 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar15) {
                  do {
                    bVar1 = (byte)*puVar12;
                    puVar12 = puVar12 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 4;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar14 = pbVar7 + 2;
            }
          }
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              puVar12 = puVar12 + 2;
              *pbVar14 = (byte)uVar2;
              pbVar14 = pbVar14 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar16 == 0x900) {
      iVar16 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[8];
        puVar12 = local_18;
        if ((iVar10 != 0x1000) && (iVar10 != -1)) {
          if (iVar10 == 0x2000) {
            puVar12 = (ushort *)((int)local_18 + 1);
          }
          else {
            if (iVar10 != 0x4000) {
              return 1;
            }
            puVar12 = local_18 + 1;
          }
        }
        iVar10 = param_1[0x16];
        pbVar14 = pbVar7;
        if (iVar10 != 0x1000) {
          if (iVar10 == 0x2000) {
            pbVar14 = pbVar7 + 1;
          }
          else {
            if (iVar10 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar15) {
                do {
                  bVar1 = (byte)*puVar12;
                  puVar12 = puVar12 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 4;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
                return 0;
              }
              return 0;
            }
            pbVar14 = pbVar7 + 2;
          }
        }
        iVar10 = iVar15;
        if (0 < iVar15) {
          do {
            uVar2 = *puVar12;
            puVar12 = puVar12 + 2;
            *pbVar14 = (byte)uVar2;
            pbVar14 = pbVar14 + 4;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar16 = iVar16 + 1;
        if (iVar5 <= iVar16) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar16 < 0xf01) {
    if (iVar16 == 0xf00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar12 = local_18;
          iVar16 = iVar15;
          pbVar14 = pbVar7;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (char)*puVar12 << 3;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar14 = pbVar7 + 1;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 3) & 0xfc;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar14 = pbVar7 + 2;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 8) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if (iVar16 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar12 = local_18;
          pbVar14 = pbVar7;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              *pbVar14 = (char)uVar2 << 3;
              pbVar14[1] = (byte)(uVar2 >> 3) & 0xfc;
              iVar16 = iVar16 + -1;
              pbVar14[2] = (byte)(uVar2 >> 8) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar16 == 0xe00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar12 = local_18;
          pbVar14 = pbVar7;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = ((byte)*puVar12 & 0x3e) << 2;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar14 = pbVar7 + 1;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 3) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else if ((iVar16 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar14 = pbVar7 + 2;
          puVar12 = local_18;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              iVar16 = iVar16 + -1;
              *pbVar14 = (byte)(*puVar12 >> 8) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if (iVar16 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar12 = local_18;
          pbVar14 = pbVar7;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              *pbVar14 = ((byte)uVar2 & 0x3e) << 2;
              pbVar14[1] = (byte)(uVar2 >> 3) & 0xf8;
              iVar16 = iVar16 + -1;
              pbVar14[2] = (byte)(uVar2 >> 8) & 0xf8;
              puVar12 = puVar12 + 1;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar16 == 0x1000) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == -1) && (param_1[0x16] == -1)) {
          puVar12 = local_18 + 1;
          iVar16 = iVar15;
          pbVar14 = pbVar7;
          if (0 < iVar15) {
            do {
              *pbVar14 = (byte)*puVar12;
              puVar11 = puVar12 + -1;
              pbVar14[1] = *(byte *)((int)puVar12 + -1);
              puVar12 = (ushort *)((int)puVar12 + 3);
              iVar16 = iVar16 + -1;
              pbVar14[2] = (byte)*puVar11;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if ((iVar16 == 0x1000) || (iVar16 == -1)) {
            puVar12 = local_18 + 1;
          }
          else if (iVar16 == 0x2000) {
            puVar12 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar12 = local_18;
            if (iVar16 != 0x4000) {
              return 1;
            }
          }
          iVar16 = param_1[0x16];
          pbVar14 = pbVar7;
          if (iVar16 != 0x1000) {
            if (iVar16 == 0x2000) {
              pbVar14 = pbVar7 + 1;
            }
            else {
              if (iVar16 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar15) {
                  do {
                    bVar1 = (byte)*puVar12;
                    puVar12 = (ushort *)((int)puVar12 + 3);
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 4;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar14 = pbVar7 + 2;
            }
          }
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              puVar12 = (ushort *)((int)puVar12 + 3);
              *pbVar14 = (byte)uVar2;
              pbVar14 = pbVar14 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar16 == 0x1100) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == -1) && (param_1[0x16] == -1)) {
          puVar12 = local_18 + 1;
          pbVar14 = pbVar7;
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              *pbVar14 = (byte)*puVar12;
              puVar11 = puVar12 + -1;
              pbVar14[1] = *(byte *)((int)puVar12 + -1);
              puVar12 = puVar12 + 2;
              iVar16 = iVar16 + -1;
              pbVar14[2] = (byte)*puVar11;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if ((iVar16 == 0x1000) || (iVar16 == -1)) {
            puVar12 = local_18 + 1;
          }
          else if (iVar16 == 0x2000) {
            puVar12 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar12 = local_18;
            if (iVar16 != 0x4000) {
              return 1;
            }
          }
          iVar16 = param_1[0x16];
          pbVar14 = pbVar7;
          if (iVar16 != 0x1000) {
            if (iVar16 == 0x2000) {
              pbVar14 = pbVar7 + 1;
            }
            else {
              if (iVar16 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar15) {
                  do {
                    bVar1 = (byte)*puVar12;
                    puVar12 = puVar12 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 4;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar14 = pbVar7 + 2;
            }
          }
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              puVar12 = puVar12 + 2;
              *pbVar14 = (byte)uVar2;
              pbVar14 = pbVar14 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar16 == 0x1200) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar16 = param_1[8];
        if ((iVar16 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = (byte *)((int)local_18 + 3);
          iVar16 = iVar15;
          pbVar14 = pbVar7;
          if (0 < iVar15) {
            do {
              *pbVar14 = *pbVar9;
              pbVar13 = pbVar9 + -2;
              pbVar14[1] = pbVar9[-1];
              pbVar9 = pbVar9 + 4;
              iVar16 = iVar16 + -1;
              pbVar14[2] = *pbVar13;
              pbVar14 = pbVar14 + 4;
            } while (iVar16 != 0);
          }
        }
        else {
          if ((iVar16 == 0x1000) || (iVar16 == -1)) {
            puVar12 = (ushort *)((int)local_18 + 3);
          }
          else if (iVar16 == 0x2000) {
            puVar12 = local_18 + 1;
          }
          else {
            if (iVar16 != 0x4000) {
              return 1;
            }
            puVar12 = (ushort *)((int)local_18 + 1);
          }
          iVar16 = param_1[0x16];
          pbVar14 = pbVar7;
          if (iVar16 != 0x1000) {
            if (iVar16 == 0x2000) {
              pbVar14 = pbVar7 + 1;
            }
            else {
              if (iVar16 != 0x4000) {
                if (param_1[0x16] != -1) {
                  return 1;
                }
                if (0 < iVar15) {
                  do {
                    bVar1 = (byte)*puVar12;
                    puVar12 = puVar12 + 2;
                    *pbVar7 = bVar1;
                    pbVar7[1] = bVar1;
                    pbVar7[2] = bVar1;
                    pbVar7 = pbVar7 + 4;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                  return 0;
                }
                return 0;
              }
              pbVar14 = pbVar7 + 2;
            }
          }
          iVar16 = iVar15;
          if (0 < iVar15) {
            do {
              uVar2 = *puVar12;
              puVar12 = puVar12 + 2;
              *pbVar14 = (byte)uVar2;
              pbVar14 = pbVar14 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}


// ---- FUN_100097b0 @ 100097b0

undefined4 __cdecl FUN_100097b0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  pbVar6 = (byte *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar3 = param_1[7];
  iVar4 = param_1[0x15];
  iVar11 = param_1[0x1c];
  iVar5 = param_1[0x1d];
  iVar12 = param_1[0xb];
  if (iVar12 < 0x601) {
    if (iVar12 == 0x600) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar9 = pbVar6 + 1;
          iVar12 = iVar11;
          puVar8 = local_18;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 7) & 0xf8;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = pbVar6 + 2;
          iVar12 = iVar11;
          puVar8 = local_18;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 2) & 0xf8;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar9 = pbVar6 + 3;
          iVar12 = iVar11;
          puVar8 = local_18;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (char)*puVar8 << 3;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          pbVar9 = pbVar6;
          iVar12 = iVar11;
          puVar8 = local_18;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              *pbVar9 = (byte)(uVar2 >> 7) & 0xf8;
              iVar12 = iVar12 + -1;
              pbVar9[1] = (byte)(uVar2 >> 2) & 0xf8;
              pbVar9[2] = (char)uVar2 << 3;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0x200) {
      iVar12 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[0x16];
        if (iVar10 == -1) {
          pbVar9 = pbVar6;
          iVar10 = iVar11;
          puVar8 = local_18;
          if (0 < iVar11) {
            do {
              bVar1 = (byte)*puVar8;
              *pbVar9 = bVar1;
              pbVar9[1] = bVar1;
              pbVar9[2] = bVar1;
              iVar10 = iVar10 + -1;
              pbVar9 = pbVar9 + 4;
              puVar8 = (ushort *)((int)puVar8 + 1);
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar10 == 0x1000) {
            pbVar9 = pbVar6 + 1;
          }
          else if (iVar10 == 0x2000) {
            pbVar9 = pbVar6 + 2;
          }
          else {
            if (iVar10 != 0x4000) {
              return 1;
            }
            pbVar9 = pbVar6 + 3;
          }
          iVar10 = iVar11;
          puVar8 = local_18;
          if (0 < iVar11) {
            do {
              *pbVar9 = (byte)*puVar8;
              pbVar9 = pbVar9 + 4;
              iVar10 = iVar10 + -1;
              puVar8 = (ushort *)((int)puVar8 + 1);
            } while (iVar10 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar5);
      return 0;
    }
  }
  else if (iVar12 < 0x801) {
    if (iVar12 == 0x800) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = pbVar6 + 1;
          iVar12 = iVar11 + -1;
          puVar8 = local_18;
          puVar7 = local_18;
          iVar10 = iVar12;
          iVar13 = 0;
          if (0 < iVar12) {
            do {
              puVar8 = (ushort *)((int)puVar7 + 3);
              *(undefined4 *)pbVar9 = *(undefined4 *)puVar7;
              pbVar9 = pbVar9 + 4;
              iVar10 = iVar10 + -1;
              puVar7 = puVar8;
              iVar13 = iVar12;
            } while (iVar10 != 0);
          }
          if (iVar13 < iVar11) {
            iVar13 = iVar11 - iVar13;
            do {
              *pbVar9 = (byte)*puVar8;
              puVar7 = puVar8 + 1;
              pbVar9[1] = *(byte *)((int)puVar8 + 1);
              puVar8 = (ushort *)((int)puVar8 + 3);
              pbVar9[2] = (byte)*puVar7;
              pbVar9 = pbVar9 + 4;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        else {
          puVar8 = local_18;
          if ((iVar12 != 0x1000) && (iVar12 != -1)) {
            if (iVar12 == 0x2000) {
              puVar8 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar12 != 0x4000) {
                return 1;
              }
              puVar8 = local_18 + 1;
            }
          }
          iVar12 = param_1[0x16];
          if (iVar12 == 0x1000) {
            pbVar9 = pbVar6 + 1;
          }
          else if (iVar12 == 0x2000) {
            pbVar9 = pbVar6 + 2;
          }
          else {
            if (iVar12 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar11) {
                do {
                  bVar1 = (byte)*puVar8;
                  puVar8 = (ushort *)((int)puVar8 + 3);
                  pbVar6[2] = bVar1;
                  pbVar6[3] = bVar1;
                  pbVar6[4] = bVar1;
                  iVar11 = iVar11 + -1;
                  pbVar6 = pbVar6 + 4;
                } while (iVar11 != 0);
                return 0;
              }
              return 0;
            }
            pbVar9 = pbVar6 + 3;
          }
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              puVar8 = (ushort *)((int)puVar8 + 3);
              *pbVar9 = (byte)uVar2;
              pbVar9 = pbVar9 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0x700) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar9 = pbVar6 + 1;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 8) & 0xf8;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = pbVar6 + 2;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 3) & 0xfc;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar9 = pbVar6 + 3;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (char)*puVar8 << 3;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar8 = local_18;
          pbVar9 = pbVar6;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              *pbVar9 = (byte)(uVar2 >> 8) & 0xf8;
              iVar12 = iVar12 + -1;
              pbVar9[1] = (byte)(uVar2 >> 3) & 0xfc;
              pbVar9[2] = (char)uVar2 << 3;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar12 < 0xa01) {
    if (iVar12 == 0xa00) {
      iVar12 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[8];
        if ((iVar10 == 0x1000) || (iVar10 == -1)) {
          puVar8 = (ushort *)((int)local_18 + 1);
        }
        else if (iVar10 == 0x2000) {
          puVar8 = local_18 + 1;
        }
        else {
          if (iVar10 != 0x4000) {
            return 1;
          }
          puVar8 = (ushort *)((int)local_18 + 3);
        }
        iVar10 = param_1[0x16];
        if (iVar10 == 0x1000) {
          pbVar9 = pbVar6 + 1;
        }
        else if (iVar10 == 0x2000) {
          pbVar9 = pbVar6 + 2;
        }
        else {
          if (iVar10 != 0x4000) {
            if (param_1[0x16] != -1) {
              return 1;
            }
            if (0 < iVar11) {
              do {
                bVar1 = (byte)*puVar8;
                puVar8 = puVar8 + 2;
                pbVar6[2] = bVar1;
                pbVar6[3] = bVar1;
                pbVar6[4] = bVar1;
                iVar11 = iVar11 + -1;
                pbVar6 = pbVar6 + 4;
              } while (iVar11 != 0);
              return 0;
            }
            return 0;
          }
          pbVar9 = pbVar6 + 3;
        }
        iVar10 = iVar11;
        if (0 < iVar11) {
          do {
            uVar2 = *puVar8;
            puVar8 = puVar8 + 2;
            *pbVar9 = (byte)uVar2;
            pbVar9 = pbVar9 + 4;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        iVar12 = iVar12 + 1;
        if (iVar5 <= iVar12) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0x900) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = pbVar6 + 1;
          iVar12 = iVar11 + -1;
          iVar10 = iVar12;
          puVar8 = local_18;
          puVar7 = local_18;
          iVar13 = 0;
          if (0 < iVar12) {
            do {
              puVar8 = puVar7 + 2;
              *(undefined4 *)pbVar9 = *(undefined4 *)puVar7;
              pbVar9 = pbVar9 + 4;
              iVar10 = iVar10 + -1;
              puVar7 = puVar8;
              iVar13 = iVar12;
            } while (iVar10 != 0);
          }
          if (iVar13 < iVar11) {
            iVar13 = iVar11 - iVar13;
            do {
              *pbVar9 = (byte)*puVar8;
              pbVar9[1] = *(byte *)((int)puVar8 + 1);
              pbVar9[2] = (byte)puVar8[1];
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 2;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        else {
          puVar8 = local_18;
          if ((iVar12 != 0x1000) && (iVar12 != -1)) {
            if (iVar12 == 0x2000) {
              puVar8 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar12 != 0x4000) {
                return 1;
              }
              puVar8 = local_18 + 1;
            }
          }
          iVar12 = param_1[0x16];
          if (iVar12 == 0x1000) {
            pbVar9 = pbVar6 + 1;
          }
          else if (iVar12 == 0x2000) {
            pbVar9 = pbVar6 + 2;
          }
          else {
            if (iVar12 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar11) {
                do {
                  bVar1 = (byte)*puVar8;
                  puVar8 = puVar8 + 2;
                  pbVar6[2] = bVar1;
                  pbVar6[3] = bVar1;
                  pbVar6[4] = bVar1;
                  iVar11 = iVar11 + -1;
                  pbVar6 = pbVar6 + 4;
                } while (iVar11 != 0);
                return 0;
              }
              return 0;
            }
            pbVar9 = pbVar6 + 3;
          }
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              puVar8 = puVar8 + 2;
              *pbVar9 = (byte)uVar2;
              pbVar9 = pbVar9 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar12 < 0xf01) {
    if (iVar12 == 0xf00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar9 = pbVar6 + 1;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (char)*puVar8 << 3;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = pbVar6 + 2;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 3) & 0xfc;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar9 = pbVar6 + 3;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 8) & 0xf8;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          pbVar9 = pbVar6;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              *pbVar9 = (char)uVar2 << 3;
              pbVar9[1] = (byte)(uVar2 >> 3) & 0xfc;
              iVar12 = iVar12 + -1;
              pbVar9[2] = (byte)(uVar2 >> 8) & 0xf8;
              pbVar9 = pbVar9 + 4;
              puVar8 = puVar8 + 1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0xe00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar9 = pbVar6 + 1;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = ((byte)*puVar8 & 0x3e) << 2;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = pbVar6 + 2;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 3) & 0xf8;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar9 = pbVar6 + 3;
          puVar8 = local_18;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              iVar12 = iVar12 + -1;
              *pbVar9 = (byte)(*puVar8 >> 8) & 0xf8;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar8 = local_18;
          pbVar9 = pbVar6;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              *pbVar9 = ((byte)uVar2 & 0x3e) << 2;
              pbVar9[1] = (byte)(uVar2 >> 3) & 0xf8;
              iVar12 = iVar12 + -1;
              pbVar9[2] = (byte)(uVar2 >> 8) & 0xf8;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar12 == 0x1000) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = pbVar6 + 1;
          puVar8 = local_18 + 1;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              *pbVar9 = (byte)*puVar8;
              puVar7 = puVar8 + -1;
              pbVar9[1] = *(byte *)((int)puVar8 + -1);
              puVar8 = (ushort *)((int)puVar8 + 3);
              iVar12 = iVar12 + -1;
              pbVar9[2] = (byte)*puVar7;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          if ((iVar12 == 0x1000) || (iVar12 == -1)) {
            puVar8 = local_18 + 1;
          }
          else if (iVar12 == 0x2000) {
            puVar8 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar8 = local_18;
            if (iVar12 != 0x4000) {
              return 1;
            }
          }
          iVar12 = param_1[0x16];
          if (iVar12 == 0x1000) {
            pbVar9 = pbVar6 + 1;
          }
          else if (iVar12 == 0x2000) {
            pbVar9 = pbVar6 + 2;
          }
          else {
            if (iVar12 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar11) {
                do {
                  bVar1 = (byte)*puVar8;
                  puVar8 = (ushort *)((int)puVar8 + 3);
                  pbVar6[2] = bVar1;
                  pbVar6[3] = bVar1;
                  pbVar6[4] = bVar1;
                  iVar11 = iVar11 + -1;
                  pbVar6 = pbVar6 + 4;
                } while (iVar11 != 0);
                return 0;
              }
              return 0;
            }
            pbVar9 = pbVar6 + 3;
          }
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              puVar8 = (ushort *)((int)puVar8 + 3);
              *pbVar9 = (byte)uVar2;
              pbVar9 = pbVar9 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0x1100) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = pbVar6 + 1;
          puVar8 = local_18 + 1;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              *pbVar9 = (byte)*puVar8;
              puVar7 = puVar8 + -1;
              pbVar9[1] = *(byte *)((int)puVar8 + -1);
              puVar8 = puVar8 + 2;
              iVar12 = iVar12 + -1;
              pbVar9[2] = (byte)*puVar7;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          if ((iVar12 == 0x1000) || (iVar12 == -1)) {
            puVar8 = local_18 + 1;
          }
          else if (iVar12 == 0x2000) {
            puVar8 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar8 = local_18;
            if (iVar12 != 0x4000) {
              return 1;
            }
          }
          iVar12 = param_1[0x16];
          if (iVar12 == 0x1000) {
            pbVar9 = pbVar6 + 1;
          }
          else if (iVar12 == 0x2000) {
            pbVar9 = pbVar6 + 2;
          }
          else {
            if (iVar12 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar11) {
                do {
                  bVar1 = (byte)*puVar8;
                  puVar8 = puVar8 + 2;
                  pbVar6[2] = bVar1;
                  pbVar6[3] = bVar1;
                  pbVar6[4] = bVar1;
                  iVar11 = iVar11 + -1;
                  pbVar6 = pbVar6 + 4;
                } while (iVar11 != 0);
                return 0;
              }
              return 0;
            }
            pbVar9 = pbVar6 + 3;
          }
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              puVar8 = puVar8 + 2;
              *pbVar9 = (byte)uVar2;
              pbVar9 = pbVar9 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0x1200) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == -1) && (param_1[0x16] == -1)) {
          pbVar9 = pbVar6 + 1;
          pbVar14 = (byte *)((int)local_18 + 3);
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              *pbVar9 = *pbVar14;
              pbVar15 = pbVar14 + -2;
              pbVar9[1] = pbVar14[-1];
              pbVar14 = pbVar14 + 4;
              iVar12 = iVar12 + -1;
              pbVar9[2] = *pbVar15;
              pbVar9 = pbVar9 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          if ((iVar12 == 0x1000) || (iVar12 == -1)) {
            puVar8 = (ushort *)((int)local_18 + 3);
          }
          else if (iVar12 == 0x2000) {
            puVar8 = local_18 + 1;
          }
          else {
            if (iVar12 != 0x4000) {
              return 1;
            }
            puVar8 = (ushort *)((int)local_18 + 1);
          }
          iVar12 = param_1[0x16];
          if (iVar12 == 0x1000) {
            pbVar9 = pbVar6 + 1;
          }
          else if (iVar12 == 0x2000) {
            pbVar9 = pbVar6 + 2;
          }
          else {
            if (iVar12 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar11) {
                do {
                  bVar1 = (byte)*puVar8;
                  puVar8 = puVar8 + 2;
                  pbVar6[2] = bVar1;
                  pbVar6[3] = bVar1;
                  pbVar6[4] = bVar1;
                  iVar11 = iVar11 + -1;
                  pbVar6 = pbVar6 + 4;
                } while (iVar11 != 0);
                return 0;
              }
              return 0;
            }
            pbVar9 = pbVar6 + 3;
          }
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar2 = *puVar8;
              puVar8 = puVar8 + 2;
              *pbVar9 = (byte)uVar2;
              pbVar9 = pbVar9 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar6 = pbVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}


// ---- FUN_1000a580 @ 1000a580

undefined4 __cdecl FUN_1000a580(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  puVar6 = (ushort *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar2 = param_1[7];
  iVar3 = param_1[0x15];
  iVar4 = param_1[0x1d];
  iVar5 = param_1[0x1c];
  iVar11 = param_1[0xb];
  if (iVar11 < 0x601) {
    if (iVar11 == 0x600) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar14 = local_18;
        puVar8 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar11 = iVar5;
          puVar9 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              puVar14 = puVar9 + 1;
              puVar8 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar9 >> 9 ^ *puVar13) & 0x3e ^ *puVar13;
              puVar9 = puVar14;
              puVar13 = puVar8;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar11 = iVar5;
          puVar9 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              puVar14 = puVar9 + 1;
              puVar8 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar9 * 2 ^ *puVar13) & 0x7c0 ^ *puVar13;
              puVar9 = puVar14;
              puVar13 = puVar8;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar11 = iVar5, puVar9 = local_18, puVar13 = puVar6, 0 < iVar5)) {
          do {
            puVar14 = puVar9 + 1;
            puVar8 = puVar13 + 1;
            iVar11 = iVar11 + -1;
            *puVar13 = *puVar13 & 0x7ff | *puVar9 << 0xb;
            puVar9 = puVar14;
            puVar13 = puVar8;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar14 = puVar14 + 1;
            iVar11 = iVar11 + -1;
            *puVar8 = (uVar7 & 0x3e0 | uVar7 << 10) * 2 | (uVar7 & 0x7c00) >> 9;
            puVar8 = puVar8 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0x200) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar11 = param_1[0x16];
        if (iVar11 == 0x1000) {
          iVar11 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              iVar11 = iVar11 + -1;
              *puVar8 = (ushort)(((byte)*puVar14 & 0xfb) >> 2) | *puVar8 & 0xffc1;
              puVar8 = puVar8 + 1;
              puVar14 = (ushort *)((int)puVar14 + 1);
            } while (iVar11 != 0);
          }
        }
        else if (iVar11 == 0x2000) {
          iVar11 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              iVar11 = iVar11 + -1;
              *puVar8 = ((ushort)(byte)*puVar14 << 3 ^ *puVar8) & 0x7c0 ^ *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = (ushort *)((int)puVar14 + 1);
            } while (iVar11 != 0);
          }
        }
        else if (iVar11 == 0x4000) {
          iVar11 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              uVar7 = (ushort)(byte)*puVar14 << 8;
              iVar11 = iVar11 + -1;
              *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
              puVar8 = puVar8 + 1;
              puVar14 = (ushort *)((int)puVar14 + 1);
            } while (iVar11 != 0);
          }
        }
        else {
          if (iVar11 != -1) {
            return 1;
          }
          iVar11 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              uVar7 = (byte)*puVar14 & 0xf8;
              iVar11 = iVar11 + -1;
              *puVar8 = uVar7 >> 2 | uVar7 * 8 | uVar7 << 8;
              puVar8 = puVar8 + 1;
              puVar14 = (ushort *)((int)puVar14 + 1);
            } while (iVar11 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  else if (iVar11 < 0x801) {
    if (iVar11 == 0x800) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar8 = local_18;
        puVar14 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar9 = local_18;
          puVar13 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              puVar14 = puVar13 + 1;
              puVar8 = (ushort *)((int)puVar9 + 3);
              iVar11 = iVar11 + -1;
              *puVar13 = (ushort)(((byte)*puVar9 & 0xfb) >> 2) | *puVar13 & 0xffc1;
              puVar9 = puVar8;
              puVar13 = puVar14;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar8 = (ushort *)((int)local_18 + 1);
          puVar9 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar8;
              puVar14 = puVar9 + 1;
              puVar8 = (ushort *)((int)puVar8 + 3);
              iVar11 = iVar11 + -1;
              *puVar9 = ((ushort)(byte)uVar7 << 3 ^ *puVar9) & 0x7c0 ^ *puVar9;
              puVar9 = puVar14;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar8 = local_18 + 1, puVar9 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            puVar14 = puVar9 + 1;
            uVar7 = (ushort)(byte)*puVar8 << 8;
            puVar8 = (ushort *)((int)puVar8 + 3);
            iVar11 = iVar11 + -1;
            *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
            puVar9 = puVar14;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar8;
            uVar10 = (byte)uVar7 & 0xf8;
            puVar8 = (ushort *)((int)puVar8 + 3);
            iVar11 = iVar11 + -1;
            *puVar14 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | uVar10 * 8 | uVar10 << 8;
            puVar14 = puVar14 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0x700) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar14 = local_18;
        puVar8 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar11 = iVar5;
          puVar9 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              puVar14 = puVar9 + 1;
              puVar8 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar9 >> 10 ^ *puVar13) & 0x3e ^ *puVar13;
              puVar9 = puVar14;
              puVar13 = puVar8;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar11 = iVar5;
          puVar9 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              puVar14 = puVar9 + 1;
              puVar8 = puVar13 + 1;
              iVar11 = iVar11 + -1;
              *puVar13 = (*puVar9 ^ *puVar13) & 0x7c0 ^ *puVar13;
              puVar9 = puVar14;
              puVar13 = puVar8;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar11 = iVar5, puVar9 = local_18, puVar13 = puVar6, 0 < iVar5)) {
          do {
            puVar14 = puVar9 + 1;
            puVar8 = puVar13 + 1;
            iVar11 = iVar11 + -1;
            *puVar13 = *puVar13 & 0x7ff | *puVar9 << 0xb;
            puVar9 = puVar14;
            puVar13 = puVar8;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar14 = puVar14 + 1;
            iVar11 = iVar11 + -1;
            *puVar8 = (uVar7 & 0xfbff) >> 10 | uVar7 << 0xb | uVar7 & 0x7c0;
            puVar8 = puVar8 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar11 < 0xa01) {
    if (iVar11 == 0xa00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar8 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar14 = (ushort *)((int)local_18 + 1);
          iVar11 = iVar5;
          puVar9 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar14;
              puVar8 = puVar9 + 1;
              puVar14 = puVar14 + 2;
              iVar11 = iVar11 + -1;
              *puVar9 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | *puVar9 & 0xffc1;
              puVar9 = puVar8;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar14 = local_18 + 1;
          iVar11 = iVar5;
          puVar9 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar14;
              puVar8 = puVar9 + 1;
              puVar14 = puVar14 + 2;
              iVar11 = iVar11 + -1;
              *puVar9 = ((ushort)(byte)uVar7 << 3 ^ *puVar9) & 0x7c0 ^ *puVar9;
              puVar9 = puVar8;
            } while (iVar11 != 0);
          }
        }
        else {
          puVar14 = local_18;
          if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
             (puVar14 = (ushort *)((int)local_18 + 3), iVar11 = iVar5, puVar9 = puVar6, 0 < iVar5))
          {
            do {
              puVar8 = puVar9 + 1;
              uVar7 = (ushort)(byte)*puVar14 << 8;
              puVar14 = puVar14 + 2;
              iVar11 = iVar11 + -1;
              *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
              puVar9 = puVar8;
            } while (iVar11 != 0);
          }
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            pbVar1 = (byte *)((int)puVar14 + 1);
            uVar7 = *pbVar1 & 0xf8;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar8 = (ushort)((*pbVar1 & 0xfb) >> 2) | uVar7 * 8 | uVar7 << 8;
            puVar8 = puVar8 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0x900) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar11 = param_1[8];
        puVar8 = local_18;
        puVar14 = puVar6;
        if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar9 = local_18;
          puVar13 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              puVar14 = puVar13 + 1;
              puVar8 = puVar9 + 2;
              iVar11 = iVar11 + -1;
              *puVar13 = (ushort)(((byte)*puVar9 & 0xfb) >> 2) | *puVar13 & 0xffc1;
              puVar9 = puVar8;
              puVar13 = puVar14;
            } while (iVar11 != 0);
          }
        }
        else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar8 = (ushort *)((int)local_18 + 1);
          puVar9 = puVar6;
          iVar11 = iVar5;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar8;
              puVar14 = puVar9 + 1;
              puVar8 = puVar8 + 2;
              iVar11 = iVar11 + -1;
              *puVar9 = ((ushort)(byte)uVar7 << 3 ^ *puVar9) & 0x7c0 ^ *puVar9;
              puVar9 = puVar14;
            } while (iVar11 != 0);
          }
        }
        else if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar8 = local_18 + 1, puVar9 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            puVar14 = puVar9 + 1;
            uVar7 = (ushort)(byte)*puVar8 << 8;
            puVar8 = puVar8 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
            puVar9 = puVar14;
          } while (iVar11 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar8;
            uVar10 = (byte)uVar7 & 0xf8;
            puVar8 = puVar8 + 2;
            iVar11 = iVar11 + -1;
            *puVar14 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | uVar10 * 8 | uVar10 << 8;
            puVar14 = puVar14 + 1;
          } while (iVar11 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar11 < 0xf01) {
    if (iVar11 == 0xf00) {
      iVar11 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar8 = puVar6;
        puVar14 = local_18;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar9 = puVar6;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              puVar14 = puVar13 + 1;
              puVar8 = puVar9 + 1;
              iVar12 = iVar12 + -1;
              *puVar9 = (*puVar13 * 2 ^ *puVar9) & 0x3e ^ *puVar9;
              puVar9 = puVar8;
              puVar13 = puVar14;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar12 = iVar5;
          puVar9 = puVar6;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              puVar14 = puVar13 + 1;
              puVar8 = puVar9 + 1;
              iVar12 = iVar12 + -1;
              *puVar9 = (*puVar13 ^ *puVar9) & 0x7c0 ^ *puVar9;
              puVar9 = puVar8;
              puVar13 = puVar14;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar12 = iVar5, puVar9 = puVar6, 0 < iVar5)) {
          do {
            uVar7 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar8 = puVar9 + 1;
            iVar12 = iVar12 + -1;
            *puVar9 = (uVar7 & 0xf8ff) >> 8 | *puVar9 & 0x7ff;
            puVar9 = puVar8;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar14 = puVar14 + 1;
            iVar12 = iVar12 + -1;
            *puVar8 = (uVar7 * 2 ^ uVar7) & 0x3f ^ uVar7;
            puVar8 = puVar8 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar11 = iVar11 + 1;
        if (iVar4 <= iVar11) {
          return 0;
        }
      }
    }
    else if (iVar11 == 0xe00) {
      iVar11 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar14 ^ *puVar8) & 0x3e ^ *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar14 ^ *puVar8) & 0x7c0 ^ *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != 0x4000) {
            return 1;
          }
          if (param_1[0x16] != 0x4000) {
            return 1;
          }
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar14 = local_18;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar8 ^ *puVar14) & 0x7ff ^ *puVar14;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar11 = iVar11 + 1;
        if (iVar4 <= iVar11) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar11 == 0x1000) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar11 = param_1[8];
      puVar8 = puVar6;
      if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar14 = local_18 + 1;
        puVar9 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar8 = puVar9 + 1;
            puVar14 = (ushort *)((int)puVar14 + 3);
            iVar11 = iVar11 + -1;
            *puVar9 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | *puVar9 & 0xffc1;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar14 = (ushort *)((int)local_18 + 1);
        puVar9 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar8 = puVar9 + 1;
            puVar14 = (ushort *)((int)puVar14 + 3);
            iVar11 = iVar11 + -1;
            *puVar9 = ((ushort)(byte)uVar7 << 3 ^ *puVar9) & 0x7c0 ^ *puVar9;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      else {
        puVar14 = local_18;
        if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar9 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            puVar8 = puVar9 + 1;
            uVar7 = (ushort)(byte)*puVar14 << 8;
            puVar14 = (ushort *)((int)puVar14 + 3);
            iVar11 = iVar11 + -1;
            *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          uVar7 = *puVar14;
          uVar10 = (byte)uVar7 & 0xf8;
          puVar14 = (ushort *)((int)puVar14 + 3);
          iVar11 = iVar11 + -1;
          *puVar8 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | uVar10 * 8 | uVar10 << 8;
          puVar8 = puVar8 + 1;
        } while (iVar11 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar11 == 0x1100) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar11 = param_1[8];
      puVar8 = puVar6;
      if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar14 = local_18 + 1;
        puVar9 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar8 = puVar9 + 1;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | *puVar9 & 0xffc1;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar14 = (ushort *)((int)local_18 + 1);
        iVar11 = iVar5;
        puVar9 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar8 = puVar9 + 1;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = ((ushort)(byte)uVar7 << 3 ^ *puVar9) & 0x7c0 ^ *puVar9;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      else {
        puVar14 = local_18;
        if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar9 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            puVar8 = puVar9 + 1;
            uVar7 = (ushort)(byte)*puVar14 << 8;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          uVar7 = *puVar14;
          uVar10 = (byte)uVar7 & 0xf8;
          puVar14 = puVar14 + 2;
          iVar11 = iVar11 + -1;
          *puVar8 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | uVar10 * 8 | uVar10 << 8;
          puVar8 = puVar8 + 1;
        } while (iVar11 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar11 == 0x1200) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar11 = param_1[8];
      puVar8 = puVar6;
      if ((iVar11 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar14 = (ushort *)((int)local_18 + 3);
        puVar9 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar8 = puVar9 + 1;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = (ushort)(((byte)uVar7 & 0xfb) >> 2) | *puVar9 & 0xffc1;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      else if ((iVar11 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar14 = local_18 + 1;
        puVar9 = puVar6;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar14;
            puVar8 = puVar9 + 1;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = ((ushort)(byte)uVar7 << 3 ^ *puVar9) & 0x7c0 ^ *puVar9;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      else {
        puVar14 = local_18;
        if (((iVar11 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar14 = (ushort *)((int)local_18 + 1), puVar9 = puVar6, iVar11 = iVar5, 0 < iVar5)) {
          do {
            puVar8 = puVar9 + 1;
            uVar7 = (ushort)(byte)*puVar14 << 8;
            puVar14 = puVar14 + 2;
            iVar11 = iVar11 + -1;
            *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          pbVar1 = (byte *)((int)puVar14 + 1);
          uVar7 = *pbVar1 & 0xf8;
          puVar14 = puVar14 + 2;
          iVar11 = iVar11 + -1;
          *puVar8 = (ushort)((*pbVar1 & 0xfb) >> 2) | uVar7 * 8 | uVar7 << 8;
          puVar8 = puVar8 + 1;
        } while (iVar11 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  return 1;
}


// ---- FUN_1000b680 @ 1000b680

undefined4 __cdecl FUN_1000b680(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  puVar6 = (ushort *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar2 = param_1[7];
  iVar3 = param_1[0x15];
  iVar4 = param_1[0x1d];
  iVar5 = param_1[0x1c];
  iVar12 = param_1[0xb];
  if (iVar12 < 0x601) {
    if (iVar12 == 0x600) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar9 = puVar6;
        puVar13 = local_18;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar11 = local_18;
          if (0 < iVar5) {
            do {
              puVar13 = puVar11 + 1;
              puVar9 = puVar8 + 1;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar11 >> 10 ^ *puVar8) & 0x1f ^ *puVar8;
              puVar8 = puVar9;
              puVar11 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar11 = local_18;
          if (0 < iVar5) {
            do {
              puVar13 = puVar11 + 1;
              puVar9 = puVar8 + 1;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar11 * 2 ^ *puVar8) & 0x7c0 ^ *puVar8;
              puVar8 = puVar9;
              puVar11 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            uVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar9 = puVar8 + 1;
            iVar12 = iVar12 + -1;
            *puVar8 = uVar7 << 0xb | *puVar8 & 0x7ff;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar12 = iVar12 + -1;
            *puVar9 = (uVar7 & 0x3e0 | uVar7 << 10) * 2 | (uVar7 & 0x7c00) >> 10;
            puVar9 = puVar9 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar12 == 0x200) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[0x16];
        if (iVar12 == 0x1000) {
          puVar9 = local_18;
          puVar13 = puVar6;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar13 = (ushort)(byte)((byte)*puVar9 >> 3) | *puVar13 & 0xffe0;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = puVar13 + 1;
            } while (iVar12 != 0);
          }
        }
        else if (iVar12 == 0x2000) {
          puVar9 = local_18;
          iVar12 = iVar5;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              *puVar13 = ((byte)*puVar9 & 0xf8) << 3 | *puVar13 & 0xf81f;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = puVar13 + 1;
            } while (iVar12 != 0);
          }
        }
        else if (iVar12 == 0x4000) {
          puVar9 = local_18;
          puVar13 = puVar6;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              uVar7 = (ushort)(byte)*puVar9 << 8;
              iVar12 = iVar12 + -1;
              *puVar13 = (*puVar13 ^ uVar7) & 0x7ff ^ uVar7;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = puVar13 + 1;
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 != -1) {
            return 1;
          }
          puVar9 = local_18;
          puVar13 = puVar6;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              bVar1 = (byte)*puVar9;
              iVar12 = iVar12 + -1;
              *puVar13 = (ushort)(bVar1 >> 3) | (bVar1 & 0xfc) << 3 | (bVar1 & 0xf8) << 8;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = puVar13 + 1;
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
      return 0;
    }
  }
  else if (iVar12 < 0x801) {
    if (iVar12 == 0x800) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar9 = puVar6;
        puVar13 = local_18;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar11 = local_18;
          if (0 < iVar5) {
            do {
              puVar9 = puVar8 + 1;
              puVar13 = (ushort *)((int)puVar11 + 3);
              iVar12 = iVar12 + -1;
              *puVar8 = (ushort)(byte)((byte)*puVar11 >> 3) | *puVar8 & 0xffe0;
              puVar8 = puVar9;
              puVar11 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar13 = (ushort *)((int)local_18 + 1);
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar9 = puVar8 + 1;
              puVar13 = (ushort *)((int)puVar13 + 3);
              iVar12 = iVar12 + -1;
              *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar9;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar13 = local_18 + 1, iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            puVar9 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            bVar1 = (byte)*puVar13;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar9 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
            puVar9 = puVar9 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar12 == 0x700) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar9 = puVar6;
        puVar13 = local_18;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar8 = puVar6;
          puVar11 = local_18;
          iVar12 = iVar5;
          if (0 < iVar5) {
            do {
              puVar13 = puVar11 + 1;
              puVar9 = puVar8 + 1;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar11 >> 0xb ^ *puVar8) & 0x1f ^ *puVar8;
              puVar8 = puVar9;
              puVar11 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar11 = local_18;
          if (0 < iVar5) {
            do {
              puVar13 = puVar11 + 1;
              puVar9 = puVar8 + 1;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar11 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar9;
              puVar11 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            uVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar9 = puVar8 + 1;
            iVar12 = iVar12 + -1;
            *puVar8 = uVar7 << 0xb | *puVar8 & 0x7ff;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar12 = iVar12 + -1;
            *puVar9 = uVar7 >> 0xb | uVar7 & 0x7e0 | uVar7 << 0xb;
            puVar9 = puVar9 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar12 < 0xa01) {
    if (iVar12 == 0xa00) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar9 = puVar6;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar13 = (ushort *)((int)local_18 + 1);
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar9 = puVar8 + 1;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
              puVar8 = puVar9;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar13 = local_18 + 1;
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar9 = puVar8 + 1;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar9;
            } while (iVar12 != 0);
          }
        }
        else {
          puVar13 = local_18;
          if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
             (puVar13 = (ushort *)((int)local_18 + 3), iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5))
          {
            do {
              puVar9 = puVar8 + 1;
              uVar7 = (ushort)(byte)*puVar13 << 8;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
              puVar8 = puVar9;
            } while (iVar12 != 0);
          }
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            bVar1 = *(byte *)((int)puVar13 + 1);
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar9 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
            puVar9 = puVar9 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
    else if (iVar12 == 0x900) {
      local_14 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      while( true ) {
        iVar12 = param_1[8];
        puVar9 = puVar6;
        puVar13 = local_18;
        if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar12 = iVar5;
          puVar8 = puVar6;
          puVar11 = local_18;
          if (0 < iVar5) {
            do {
              puVar9 = puVar8 + 1;
              puVar13 = puVar11 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = (ushort)(byte)((byte)*puVar11 >> 3) | *puVar8 & 0xffe0;
              puVar8 = puVar9;
              puVar11 = puVar13;
            } while (iVar12 != 0);
          }
        }
        else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar13 = (ushort *)((int)local_18 + 1);
          iVar12 = iVar5;
          puVar8 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar9 = puVar8 + 1;
              puVar13 = puVar13 + 2;
              iVar12 = iVar12 + -1;
              *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
              puVar8 = puVar9;
            } while (iVar12 != 0);
          }
        }
        else if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
                (puVar13 = local_18 + 1, iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            puVar9 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
        if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
        iVar12 = iVar5;
        if (0 < iVar5) {
          do {
            bVar1 = (byte)*puVar13;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar9 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
            puVar9 = puVar9 + 1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        local_14 = local_14 + 1;
        if (iVar4 <= local_14) {
          return 0;
        }
      }
    }
  }
  else if (iVar12 < 0xf01) {
    if (iVar12 == 0xf00) {
      iVar12 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[8];
        if ((iVar10 == 0x1000) && (param_1[0x16] == 0x1000)) {
          iVar10 = iVar5;
          puVar9 = puVar6;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar9 = (*puVar13 ^ *puVar9) & 0x1f ^ *puVar9;
              puVar9 = puVar9 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
        }
        else if ((iVar10 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar9 = puVar6;
          iVar10 = iVar5;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar9 = (*puVar13 ^ *puVar9) & 0x7e0 ^ *puVar9;
              puVar9 = puVar9 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar10 != 0x4000) {
            return 1;
          }
          if (param_1[0x16] != 0x4000) {
            return 1;
          }
          iVar10 = iVar5;
          puVar9 = puVar6;
          puVar13 = local_18;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar13;
              puVar13 = puVar13 + 1;
              iVar10 = iVar10 + -1;
              *puVar9 = (*puVar9 ^ uVar7) & 0x7ff ^ uVar7;
              puVar9 = puVar9 + 1;
            } while (iVar10 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar12 = iVar12 + 1;
        if (iVar4 <= iVar12) {
          return 0;
        }
      } while( true );
    }
    if (iVar12 == 0xe00) {
      iVar12 = 0;
      if (iVar4 < 1) {
        return 0;
      }
      do {
        iVar10 = param_1[8];
        if ((iVar10 == 0x1000) && (param_1[0x16] == 0x1000)) {
          puVar9 = local_18;
          iVar10 = iVar5;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar13 = (*puVar9 >> 1 ^ *puVar13) & 0x1f ^ *puVar13;
              puVar9 = puVar9 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
        }
        else if ((iVar10 == 0x2000) && (param_1[0x16] == 0x2000)) {
          puVar9 = local_18;
          iVar10 = iVar5;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              iVar10 = iVar10 + -1;
              *puVar13 = (*puVar9 ^ *puVar13) & 0x7c0 ^ *puVar13;
              puVar9 = puVar9 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
        }
        else if ((iVar10 == 0x4000) && (param_1[0x16] == 0x4000)) {
          iVar10 = iVar5;
          puVar9 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar9;
              puVar9 = puVar9 + 1;
              iVar10 = iVar10 + -1;
              *puVar13 = (*puVar13 ^ uVar7) & 0x7ff ^ uVar7;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar10 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          iVar10 = iVar5;
          puVar9 = local_18;
          puVar13 = puVar6;
          if (0 < iVar5) {
            do {
              uVar7 = *puVar9;
              puVar9 = puVar9 + 1;
              iVar10 = iVar10 + -1;
              *puVar13 = (uVar7 & 0x3e) >> 1 | uVar7 & 0xffc0;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar2);
        puVar6 = (ushort *)((int)puVar6 + iVar3);
        iVar12 = iVar12 + 1;
        if (iVar4 <= iVar12) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar12 == 0x1000) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar12 = param_1[8];
      puVar9 = puVar6;
      if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar13 = local_18 + 1;
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar9 = puVar8 + 1;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar13 = (ushort *)((int)local_18 + 1);
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar9 = puVar8 + 1;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      else {
        puVar13 = local_18;
        if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            puVar9 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = (ushort *)((int)puVar13 + 3);
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar12 = iVar5;
      if (0 < iVar5) {
        do {
          bVar1 = (byte)*puVar13;
          puVar13 = (ushort *)((int)puVar13 + 3);
          iVar12 = iVar12 + -1;
          *puVar9 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
          puVar9 = puVar9 + 1;
        } while (iVar12 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar12 == 0x1100) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar12 = param_1[8];
      puVar9 = puVar6;
      if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar13 = local_18 + 1;
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar9 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar13 = (ushort *)((int)local_18 + 1);
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar9 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      else {
        puVar13 = local_18;
        if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            puVar9 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar12 = iVar5;
      if (0 < iVar5) {
        do {
          bVar1 = (byte)*puVar13;
          puVar13 = puVar13 + 2;
          iVar12 = iVar12 + -1;
          *puVar9 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
          puVar9 = puVar9 + 1;
        } while (iVar12 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  else if (iVar12 == 0x1200) {
    local_14 = 0;
    if (iVar4 < 1) {
      return 0;
    }
    while( true ) {
      iVar12 = param_1[8];
      puVar9 = puVar6;
      if ((iVar12 == 0x1000) && (param_1[0x16] == 0x1000)) {
        puVar13 = (ushort *)((int)local_18 + 3);
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar9 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (ushort)(byte)((byte)uVar7 >> 3) | *puVar8 & 0xffe0;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      else if ((iVar12 == 0x2000) && (param_1[0x16] == 0x2000)) {
        puVar13 = local_18 + 1;
        iVar12 = iVar5;
        puVar8 = puVar6;
        if (0 < iVar5) {
          do {
            uVar7 = *puVar13;
            puVar9 = puVar8 + 1;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = ((ushort)(byte)uVar7 << 3 ^ *puVar8) & 0x7e0 ^ *puVar8;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      else {
        puVar13 = local_18;
        if (((iVar12 == 0x4000) && (param_1[0x16] == 0x4000)) &&
           (puVar13 = (ushort *)((int)local_18 + 1), iVar12 = iVar5, puVar8 = puVar6, 0 < iVar5)) {
          do {
            puVar9 = puVar8 + 1;
            uVar7 = (ushort)(byte)*puVar13 << 8;
            puVar13 = puVar13 + 2;
            iVar12 = iVar12 + -1;
            *puVar8 = (*puVar8 ^ uVar7) & 0x7ff ^ uVar7;
            puVar8 = puVar9;
          } while (iVar12 != 0);
        }
      }
      if ((param_1[8] != -1) || (param_1[0x16] != -1)) break;
      iVar12 = iVar5;
      if (0 < iVar5) {
        do {
          bVar1 = *(byte *)((int)puVar13 + 1);
          puVar13 = puVar13 + 2;
          iVar12 = iVar12 + -1;
          *puVar9 = (bVar1 & 0xf8) << 8 | (bVar1 & 0xfc) << 3 | (ushort)(bVar1 >> 3);
          puVar9 = puVar9 + 1;
        } while (iVar12 != 0);
      }
      local_18 = (ushort *)((int)local_18 + iVar2);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      local_14 = local_14 + 1;
      if (iVar4 <= local_14) {
        return 0;
      }
    }
  }
  return 1;
}


// ---- FUN_1000c760 @ 1000c760

undefined4 __cdecl FUN_1000c760(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  byte *pbVar15;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  pbVar7 = (byte *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar3 = param_1[7];
  iVar4 = param_1[0x15];
  iVar12 = param_1[0x1c];
  iVar5 = param_1[0x1d];
  iVar13 = param_1[0xb];
  if (iVar13 < 0x601) {
    if (iVar13 == 0x600) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar10 = pbVar7 + 2;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 7) & 0xf8;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 2) & 0xf8;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar14 = local_18;
          iVar13 = iVar12;
          pbVar10 = pbVar7;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (char)*puVar14 << 3;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar14 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              *pbVar10 = (char)uVar2 << 3;
              pbVar10[1] = (byte)(uVar2 >> 2) & 0xf8;
              iVar13 = iVar13 + -1;
              pbVar10[2] = (byte)(uVar2 >> 7) & 0xf8;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x200) {
      iVar13 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[0x16];
        if (iVar9 == -1) {
          iVar9 = iVar12;
          pbVar10 = pbVar7;
          puVar14 = local_18;
          if (0 < iVar12) {
            do {
              bVar1 = (byte)*puVar14;
              *pbVar10 = bVar1;
              pbVar10[1] = bVar1;
              pbVar10[2] = bVar1;
              iVar9 = iVar9 + -1;
              pbVar10 = pbVar10 + 3;
              puVar14 = (ushort *)((int)puVar14 + 1);
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 == 0x1000) {
            pbVar10 = pbVar7 + 2;
          }
          else if (iVar9 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            pbVar10 = pbVar7;
            if (iVar9 != 0x4000) {
              return 1;
            }
          }
          iVar9 = iVar12;
          puVar14 = local_18;
          if (0 < iVar12) {
            do {
              *pbVar10 = (byte)*puVar14;
              pbVar10 = pbVar10 + 3;
              iVar9 = iVar9 + -1;
              puVar14 = (ushort *)((int)puVar14 + 1);
            } while (iVar9 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar5);
      return 0;
    }
  }
  else if (iVar13 < 0x801) {
    if (iVar13 == 0x800) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          pbVar10 = pbVar7 + 2;
          iVar13 = iVar12;
          puVar14 = local_18;
          if (0 < iVar12) {
            do {
              *pbVar10 = (byte)*puVar14;
              pbVar10[-1] = *(byte *)((int)puVar14 + 1);
              pbVar10[-2] = (byte)puVar14[1];
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
              puVar14 = (ushort *)((int)puVar14 + 3);
            } while (iVar13 != 0);
          }
        }
        else {
          puVar14 = local_18;
          if ((iVar13 != 0x1000) && (iVar13 != -1)) {
            if (iVar13 == 0x2000) {
              puVar14 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar13 != 0x4000) {
                return 1;
              }
              puVar14 = local_18 + 1;
            }
          }
          iVar13 = param_1[0x16];
          if (iVar13 == 0x1000) {
            pbVar10 = pbVar7 + 2;
          }
          else if (iVar13 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            pbVar10 = pbVar7;
            if (iVar13 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar12) {
                do {
                  bVar1 = (byte)*puVar14;
                  puVar14 = (ushort *)((int)puVar14 + 3);
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              puVar14 = (ushort *)((int)puVar14 + 3);
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x700) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar10 = pbVar7 + 2;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 8) & 0xf8;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 3) & 0xfc;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar14 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (char)*puVar14 << 3;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar14 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              *pbVar10 = (char)uVar2 << 3;
              pbVar10[1] = (byte)(uVar2 >> 3) & 0xfc;
              iVar13 = iVar13 + -1;
              pbVar10[2] = (byte)(uVar2 >> 8) & 0xf8;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar13 < 0xa01) {
    if (iVar13 == 0xa00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          pbVar10 = pbVar7 + 2;
          iVar13 = iVar12;
          puVar14 = local_18;
          if (0 < iVar12) {
            do {
              *pbVar10 = *(byte *)((int)puVar14 + 1);
              pbVar10[-1] = (byte)puVar14[1];
              pbVar10[-2] = *(byte *)((int)puVar14 + 3);
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
              puVar14 = puVar14 + 2;
            } while (iVar13 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar14 = (ushort *)((int)local_18 + 1);
          }
          else if (iVar13 == 0x2000) {
            puVar14 = local_18 + 1;
          }
          else {
            if (iVar13 != 0x4000) {
              return 1;
            }
            puVar14 = (ushort *)((int)local_18 + 3);
          }
          iVar13 = param_1[0x16];
          if (iVar13 == 0x1000) {
            pbVar10 = pbVar7 + 2;
          }
          else if (iVar13 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            pbVar10 = pbVar7;
            if (iVar13 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar12) {
                do {
                  bVar1 = (byte)*puVar14;
                  puVar14 = puVar14 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              puVar14 = puVar14 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x900) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          pbVar10 = pbVar7 + 2;
          iVar13 = iVar12;
          puVar14 = local_18;
          if (0 < iVar12) {
            do {
              *pbVar10 = (byte)*puVar14;
              pbVar10[-1] = *(byte *)((int)puVar14 + 1);
              pbVar10[-2] = (byte)puVar14[1];
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
              puVar14 = puVar14 + 2;
            } while (iVar13 != 0);
          }
        }
        else {
          puVar14 = local_18;
          if ((iVar13 != 0x1000) && (iVar13 != -1)) {
            if (iVar13 == 0x2000) {
              puVar14 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar13 != 0x4000) {
                return 1;
              }
              puVar14 = local_18 + 1;
            }
          }
          iVar13 = param_1[0x16];
          if (iVar13 == 0x1000) {
            pbVar10 = pbVar7 + 2;
          }
          else if (iVar13 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            pbVar10 = pbVar7;
            if (iVar13 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar12) {
                do {
                  bVar1 = (byte)*puVar14;
                  puVar14 = puVar14 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              puVar14 = puVar14 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar13 < 0xf01) {
    if (iVar13 == 0xf00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar10 = pbVar7 + 2;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (char)*puVar14 << 3;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 3) & 0xfc;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar14 = local_18;
          iVar13 = iVar12;
          pbVar10 = pbVar7;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 8) & 0xf8;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar14 = local_18;
          pbVar10 = pbVar7;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              *pbVar10 = (byte)(uVar2 >> 8) & 0xf8;
              iVar13 = iVar13 + -1;
              pbVar10[1] = (byte)(uVar2 >> 3) & 0xfc;
              pbVar10[2] = (char)uVar2 << 3;
              puVar14 = puVar14 + 1;
              pbVar10 = pbVar10 + 3;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0xe00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar10 = pbVar7 + 2;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = ((byte)*puVar14 & 0x3e) << 2;
              pbVar10 = pbVar10 + 3;
              puVar14 = puVar14 + 1;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar10 = pbVar7 + 1;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 3) & 0xf8;
              pbVar10 = pbVar10 + 3;
              puVar14 = puVar14 + 1;
            } while (iVar13 != 0);
          }
        }
        else if ((iVar13 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar10 = pbVar7;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              iVar13 = iVar13 + -1;
              *pbVar10 = (byte)(*puVar14 >> 8) & 0xf8;
              pbVar10 = pbVar10 + 3;
              puVar14 = puVar14 + 1;
            } while (iVar13 != 0);
          }
        }
        else {
          if (iVar13 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          pbVar10 = pbVar7;
          puVar14 = local_18;
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              *pbVar10 = (byte)(uVar2 >> 8) & 0xf8;
              iVar13 = iVar13 + -1;
              pbVar10[1] = (byte)(uVar2 >> 3) & 0xf8;
              pbVar10[2] = ((byte)uVar2 & 0x3e) << 2;
              pbVar10 = pbVar10 + 3;
              puVar14 = puVar14 + 1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar13 == 0x1000) {
      iVar13 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar14 = local_18 + 1;
        }
        else if (iVar9 == 0x2000) {
          puVar14 = (ushort *)((int)local_18 + 1);
        }
        else {
          puVar14 = local_18;
          if (iVar9 != 0x4000) {
            return 1;
          }
        }
        iVar9 = param_1[0x16];
        if (iVar9 == 0x1000) {
          pbVar10 = pbVar7 + 2;
        }
        else if (iVar9 == 0x2000) {
          pbVar10 = pbVar7 + 1;
        }
        else {
          pbVar10 = pbVar7;
          if (iVar9 != 0x4000) {
            if (param_1[0x16] != -1) {
              return 1;
            }
            if (0 < iVar12) {
              do {
                bVar1 = (byte)*puVar14;
                puVar14 = (ushort *)((int)puVar14 + 3);
                *pbVar7 = bVar1;
                pbVar7[1] = bVar1;
                pbVar7[2] = bVar1;
                pbVar7 = pbVar7 + 3;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
              return 0;
            }
            return 0;
          }
        }
        iVar9 = iVar12;
        if (0 < iVar12) {
          do {
            uVar2 = *puVar14;
            puVar14 = (ushort *)((int)puVar14 + 3);
            *pbVar10 = (byte)uVar2;
            pbVar10 = pbVar10 + 3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar13 = iVar13 + 1;
        if (iVar5 <= iVar13) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x1100) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          iVar13 = iVar12 + -1;
          iVar9 = iVar13;
          puVar14 = local_18;
          puVar11 = local_18;
          pbVar10 = pbVar7;
          iVar8 = 0;
          if (0 < iVar13) {
            do {
              puVar14 = puVar11 + 2;
              *(undefined4 *)pbVar10 = *(undefined4 *)puVar11;
              pbVar10 = pbVar10 + 3;
              iVar9 = iVar9 + -1;
              puVar11 = puVar14;
              iVar8 = iVar13;
            } while (iVar9 != 0);
          }
          if (iVar8 < iVar12) {
            iVar8 = iVar12 - iVar8;
            do {
              *pbVar10 = (byte)*puVar14;
              pbVar10[1] = *(byte *)((int)puVar14 + 1);
              pbVar10[2] = (byte)puVar14[1];
              pbVar10 = pbVar10 + 3;
              puVar14 = puVar14 + 2;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar14 = local_18 + 1;
          }
          else if (iVar13 == 0x2000) {
            puVar14 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar14 = local_18;
            if (iVar13 != 0x4000) {
              return 1;
            }
          }
          iVar13 = param_1[0x16];
          if (iVar13 == 0x1000) {
            pbVar10 = pbVar7 + 2;
          }
          else if (iVar13 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            pbVar10 = pbVar7;
            if (iVar13 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar12) {
                do {
                  bVar1 = (byte)*puVar14;
                  puVar14 = puVar14 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              puVar14 = puVar14 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar13 == 0x1200) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar13 = param_1[8];
        if ((iVar13 == -1) && (param_1[0x16] == -1)) {
          pbVar15 = (byte *)((int)local_18 + 1);
          iVar13 = iVar12 + -1;
          iVar9 = iVar13;
          pbVar10 = pbVar7;
          iVar8 = 0;
          if (0 < iVar13) {
            do {
              uVar6 = *(undefined4 *)pbVar15;
              pbVar15 = pbVar15 + 4;
              *(undefined4 *)pbVar10 = uVar6;
              pbVar10 = pbVar10 + 3;
              iVar9 = iVar9 + -1;
              iVar8 = iVar13;
            } while (iVar9 != 0);
          }
          if (iVar8 < iVar12) {
            iVar8 = iVar12 - iVar8;
            do {
              *pbVar10 = *pbVar15;
              pbVar10[1] = pbVar15[1];
              pbVar10[2] = pbVar15[2];
              pbVar10 = pbVar10 + 3;
              pbVar15 = pbVar15 + 4;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        else {
          if ((iVar13 == 0x1000) || (iVar13 == -1)) {
            puVar14 = (ushort *)((int)local_18 + 3);
          }
          else if (iVar13 == 0x2000) {
            puVar14 = local_18 + 1;
          }
          else {
            if (iVar13 != 0x4000) {
              return 1;
            }
            puVar14 = (ushort *)((int)local_18 + 1);
          }
          iVar13 = param_1[0x16];
          if (iVar13 == 0x1000) {
            pbVar10 = pbVar7 + 2;
          }
          else if (iVar13 == 0x2000) {
            pbVar10 = pbVar7 + 1;
          }
          else {
            pbVar10 = pbVar7;
            if (iVar13 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar12) {
                do {
                  bVar1 = (byte)*puVar14;
                  puVar14 = puVar14 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar13 = iVar12;
          if (0 < iVar12) {
            do {
              uVar2 = *puVar14;
              puVar14 = puVar14 + 2;
              *pbVar10 = (byte)uVar2;
              pbVar10 = pbVar10 + 3;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}


// ---- FUN_1000d4f0 @ 1000d4f0

undefined4 __cdecl FUN_1000d4f0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  pbVar7 = (byte *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar3 = param_1[7];
  iVar4 = param_1[0x15];
  iVar13 = param_1[0x1c];
  iVar5 = param_1[0x1d];
  iVar14 = param_1[0xb];
  if (iVar14 < 0x601) {
    if (iVar14 == 0x600) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar12 = pbVar7 + 2;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 7) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar12 = pbVar7 + 1;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 2) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar15 = local_18;
          iVar14 = iVar13;
          pbVar12 = pbVar7;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (char)*puVar15 << 3;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else {
          if (iVar14 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar15 = local_18;
          pbVar12 = pbVar7;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              *pbVar12 = (char)uVar2 << 3;
              pbVar12[1] = (byte)(uVar2 >> 2) & 0xf8;
              iVar14 = iVar14 + -1;
              pbVar12[2] = (byte)(uVar2 >> 7) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar14 == 0x200) {
      iVar14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[0x16];
        if (iVar9 == -1) {
          iVar9 = iVar13;
          pbVar12 = pbVar7;
          puVar15 = local_18;
          if (0 < iVar13) {
            do {
              bVar1 = (byte)*puVar15;
              *pbVar12 = bVar1;
              pbVar12[1] = bVar1;
              pbVar12[2] = bVar1;
              iVar9 = iVar9 + -1;
              pbVar12 = pbVar12 + 4;
              puVar15 = (ushort *)((int)puVar15 + 1);
            } while (iVar9 != 0);
          }
        }
        else {
          if (iVar9 == 0x1000) {
            pbVar12 = pbVar7 + 2;
          }
          else if (iVar9 == 0x2000) {
            pbVar12 = pbVar7 + 1;
          }
          else {
            pbVar12 = pbVar7;
            if (iVar9 != 0x4000) {
              return 1;
            }
          }
          iVar9 = iVar13;
          puVar15 = local_18;
          if (0 < iVar13) {
            do {
              *pbVar12 = (byte)*puVar15;
              pbVar12 = pbVar12 + 4;
              iVar9 = iVar9 + -1;
              puVar15 = (ushort *)((int)puVar15 + 1);
            } while (iVar9 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar5);
      return 0;
    }
  }
  else if (iVar14 < 0x801) {
    if (iVar14 == 0x800) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == -1) && (param_1[0x16] == -1)) {
          pbVar12 = pbVar7 + 2;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              *pbVar12 = (byte)*puVar15;
              pbVar12[-1] = *(byte *)((int)puVar15 + 1);
              pbVar12[-2] = (byte)puVar15[1];
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
              puVar15 = (ushort *)((int)puVar15 + 3);
            } while (iVar14 != 0);
          }
        }
        else {
          puVar15 = local_18;
          if ((iVar14 != 0x1000) && (iVar14 != -1)) {
            if (iVar14 == 0x2000) {
              puVar15 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar14 != 0x4000) {
                return 1;
              }
              puVar15 = local_18 + 1;
            }
          }
          iVar14 = param_1[0x16];
          if (iVar14 == 0x1000) {
            pbVar12 = pbVar7 + 2;
          }
          else if (iVar14 == 0x2000) {
            pbVar12 = pbVar7 + 1;
          }
          else {
            pbVar12 = pbVar7;
            if (iVar14 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar13) {
                do {
                  bVar1 = (byte)*puVar15;
                  puVar15 = (ushort *)((int)puVar15 + 3);
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 4;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              puVar15 = (ushort *)((int)puVar15 + 3);
              *pbVar12 = (byte)uVar2;
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar14 == 0x700) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar12 = pbVar7 + 2;
          iVar14 = iVar13;
          puVar15 = local_18;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 8) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar12 = pbVar7 + 1;
          iVar14 = iVar13;
          puVar15 = local_18;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 3) & 0xfc;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x4000) && (param_1[0x16] == 0x4000)) {
          iVar14 = iVar13;
          puVar15 = local_18;
          pbVar12 = pbVar7;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (char)*puVar15 << 3;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else {
          if (iVar14 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          iVar14 = iVar13;
          puVar15 = local_18;
          pbVar12 = pbVar7;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              *pbVar12 = (char)uVar2 << 3;
              pbVar12[1] = (byte)(uVar2 >> 3) & 0xfc;
              iVar14 = iVar14 + -1;
              pbVar12[2] = (byte)(uVar2 >> 8) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar14 < 0xa01) {
    if (iVar14 == 0xa00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == -1) && (param_1[0x16] == -1)) {
          pbVar12 = pbVar7 + 2;
          iVar14 = iVar13;
          puVar15 = local_18;
          if (0 < iVar13) {
            do {
              *pbVar12 = *(byte *)((int)puVar15 + 1);
              pbVar12[-1] = (byte)puVar15[1];
              pbVar12[-2] = *(byte *)((int)puVar15 + 3);
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
              puVar15 = puVar15 + 2;
            } while (iVar14 != 0);
          }
        }
        else {
          if ((iVar14 == 0x1000) || (iVar14 == -1)) {
            puVar15 = (ushort *)((int)local_18 + 1);
          }
          else if (iVar14 == 0x2000) {
            puVar15 = local_18 + 1;
          }
          else {
            if (iVar14 != 0x4000) {
              return 1;
            }
            puVar15 = (ushort *)((int)local_18 + 3);
          }
          iVar14 = param_1[0x16];
          if (iVar14 == 0x1000) {
            pbVar12 = pbVar7 + 2;
          }
          else if (iVar14 == 0x2000) {
            pbVar12 = pbVar7 + 1;
          }
          else {
            pbVar12 = pbVar7;
            if (iVar14 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar13) {
                do {
                  bVar1 = (byte)*puVar15;
                  puVar15 = puVar15 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 4;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              puVar15 = puVar15 + 2;
              *pbVar12 = (byte)uVar2;
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar14 == 0x900) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == -1) && (param_1[0x16] == -1)) {
          pbVar12 = pbVar7 + 2;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              *pbVar12 = (byte)*puVar15;
              pbVar12[-1] = *(byte *)((int)puVar15 + 1);
              pbVar12[-2] = (byte)puVar15[1];
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
              puVar15 = puVar15 + 2;
            } while (iVar14 != 0);
          }
        }
        else {
          puVar15 = local_18;
          if ((iVar14 != 0x1000) && (iVar14 != -1)) {
            if (iVar14 == 0x2000) {
              puVar15 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar14 != 0x4000) {
                return 1;
              }
              puVar15 = local_18 + 1;
            }
          }
          iVar14 = param_1[0x16];
          if (iVar14 == 0x1000) {
            pbVar12 = pbVar7 + 2;
          }
          else if (iVar14 == 0x2000) {
            pbVar12 = pbVar7 + 1;
          }
          else {
            pbVar12 = pbVar7;
            if (iVar14 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar13) {
                do {
                  bVar1 = (byte)*puVar15;
                  puVar15 = puVar15 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 4;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              puVar15 = puVar15 + 2;
              *pbVar12 = (byte)uVar2;
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar14 < 0xf01) {
    if (iVar14 == 0xf00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar12 = pbVar7 + 2;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (char)*puVar15 << 3;
              pbVar12 = pbVar12 + 4;
              puVar15 = puVar15 + 1;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar12 = pbVar7 + 1;
          iVar14 = iVar13;
          puVar15 = local_18;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 3) & 0xfc;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x4000) && (param_1[0x16] == 0x4000)) {
          iVar14 = iVar13;
          puVar15 = local_18;
          pbVar12 = pbVar7;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 8) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else {
          if (iVar14 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          pbVar12 = pbVar7;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              *pbVar12 = (byte)(uVar2 >> 8) & 0xf8;
              iVar14 = iVar14 + -1;
              pbVar12[1] = (byte)(uVar2 >> 3) & 0xfc;
              pbVar12[2] = (char)uVar2 << 3;
              pbVar12 = pbVar12 + 4;
              puVar15 = puVar15 + 1;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar14 == 0xe00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar12 = pbVar7 + 2;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = ((byte)*puVar15 & 0x3e) << 2;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar12 = pbVar7 + 1;
          puVar15 = local_18;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 3) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else if ((iVar14 == 0x4000) && (param_1[0x16] == 0x4000)) {
          puVar15 = local_18;
          iVar14 = iVar13;
          pbVar12 = pbVar7;
          if (0 < iVar13) {
            do {
              iVar14 = iVar14 + -1;
              *pbVar12 = (byte)(*puVar15 >> 8) & 0xf8;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        else {
          if (iVar14 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar15 = local_18;
          pbVar12 = pbVar7;
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              *pbVar12 = (byte)(uVar2 >> 8) & 0xf8;
              iVar14 = iVar14 + -1;
              pbVar12[1] = (byte)(uVar2 >> 3) & 0xf8;
              pbVar12[2] = ((byte)uVar2 & 0xfe) << 2;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar14 == 0x1000) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == -1) && (param_1[0x16] == -1)) {
          iVar14 = iVar13 + -1;
          iVar9 = iVar14;
          puVar15 = local_18;
          puVar10 = local_18;
          pbVar12 = pbVar7;
          iVar11 = 0;
          if (0 < iVar14) {
            do {
              puVar15 = (ushort *)((int)puVar10 + 3);
              *(undefined4 *)pbVar12 = *(undefined4 *)puVar10;
              pbVar12 = pbVar12 + 4;
              iVar9 = iVar9 + -1;
              puVar10 = puVar15;
              iVar11 = iVar14;
            } while (iVar9 != 0);
          }
          if (iVar11 < iVar13) {
            iVar11 = iVar13 - iVar11;
            do {
              *pbVar12 = (byte)*puVar15;
              puVar10 = puVar15 + 1;
              pbVar12[1] = *(byte *)((int)puVar15 + 1);
              puVar15 = (ushort *)((int)puVar15 + 3);
              pbVar12[2] = (byte)*puVar10;
              pbVar12 = pbVar12 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          if ((iVar14 == 0x1000) || (iVar14 == -1)) {
            puVar15 = local_18 + 1;
          }
          else if (iVar14 == 0x2000) {
            puVar15 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar15 = local_18;
            if (iVar14 != 0x4000) {
              return 1;
            }
          }
          iVar14 = param_1[0x16];
          if (iVar14 == 0x1000) {
            pbVar12 = pbVar7 + 2;
          }
          else if (iVar14 == 0x2000) {
            pbVar12 = pbVar7 + 1;
          }
          else {
            pbVar12 = pbVar7;
            if (iVar14 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar13) {
                do {
                  bVar1 = (byte)*puVar15;
                  puVar15 = (ushort *)((int)puVar15 + 3);
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 4;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              puVar15 = (ushort *)((int)puVar15 + 3);
              *pbVar12 = (byte)uVar2;
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar14 == 0x1100) {
      iVar14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar9 = param_1[8];
        if ((iVar9 == 0x1000) || (iVar9 == -1)) {
          puVar15 = local_18 + 1;
        }
        else if (iVar9 == 0x2000) {
          puVar15 = (ushort *)((int)local_18 + 1);
        }
        else {
          puVar15 = local_18;
          if (iVar9 != 0x4000) {
            return 1;
          }
        }
        iVar9 = param_1[0x16];
        if (iVar9 == 0x1000) {
          pbVar12 = pbVar7 + 2;
        }
        else if (iVar9 == 0x2000) {
          pbVar12 = pbVar7 + 1;
        }
        else {
          pbVar12 = pbVar7;
          if (iVar9 != 0x4000) {
            if (param_1[0x16] != -1) {
              return 1;
            }
            if (0 < iVar13) {
              do {
                bVar1 = (byte)*puVar15;
                puVar15 = puVar15 + 2;
                *pbVar7 = bVar1;
                pbVar7[1] = bVar1;
                pbVar7[2] = bVar1;
                pbVar7 = pbVar7 + 4;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              return 0;
            }
            return 0;
          }
        }
        iVar9 = iVar13;
        if (0 < iVar13) {
          do {
            uVar2 = *puVar15;
            puVar15 = puVar15 + 2;
            *pbVar12 = (byte)uVar2;
            pbVar12 = pbVar12 + 4;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        iVar14 = iVar14 + 1;
        if (iVar5 <= iVar14) {
          return 0;
        }
      } while( true );
    }
    if (iVar14 == 0x1200) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar14 = param_1[8];
        if ((iVar14 == -1) && (param_1[0x16] == -1)) {
          pbVar8 = (byte *)((int)local_18 + 1);
          iVar14 = iVar13 + -1;
          iVar9 = iVar14;
          pbVar12 = pbVar7;
          iVar11 = 0;
          if (0 < iVar14) {
            do {
              uVar6 = *(undefined4 *)pbVar8;
              pbVar8 = pbVar8 + 4;
              *(undefined4 *)pbVar12 = uVar6;
              pbVar12 = pbVar12 + 4;
              iVar9 = iVar9 + -1;
              iVar11 = iVar14;
            } while (iVar9 != 0);
          }
          if (iVar11 < iVar13) {
            iVar11 = iVar13 - iVar11;
            do {
              *pbVar12 = *pbVar8;
              pbVar12[1] = pbVar8[1];
              pbVar12[2] = pbVar8[2];
              pbVar12 = pbVar12 + 4;
              pbVar8 = pbVar8 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          if ((iVar14 == 0x1000) || (iVar14 == -1)) {
            puVar15 = (ushort *)((int)local_18 + 3);
          }
          else if (iVar14 == 0x2000) {
            puVar15 = local_18 + 1;
          }
          else {
            if (iVar14 != 0x4000) {
              return 1;
            }
            puVar15 = (ushort *)((int)local_18 + 1);
          }
          iVar14 = param_1[0x16];
          if (iVar14 == 0x1000) {
            pbVar12 = pbVar7 + 2;
          }
          else if (iVar14 == 0x2000) {
            pbVar12 = pbVar7 + 1;
          }
          else {
            pbVar12 = pbVar7;
            if (iVar14 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar13) {
                do {
                  bVar1 = (byte)*puVar15;
                  puVar15 = puVar15 + 2;
                  *pbVar7 = bVar1;
                  pbVar7[1] = bVar1;
                  pbVar7[2] = bVar1;
                  pbVar7 = pbVar7 + 4;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                return 0;
              }
              return 0;
            }
          }
          iVar14 = iVar13;
          if (0 < iVar13) {
            do {
              uVar2 = *puVar15;
              puVar15 = puVar15 + 2;
              *pbVar12 = (byte)uVar2;
              pbVar12 = pbVar12 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        pbVar7 = pbVar7 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}


// ---- FUN_1000e2a0 @ 1000e2a0

undefined4 __cdecl FUN_1000e2a0(int *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  ushort *local_18;
  int local_14;
  
  local_18 = (ushort *)FUN_1000f1f0(param_1,param_1[1],param_1[2]);
  puVar6 = (undefined1 *)FUN_1000f1f0(param_1 + 0xe,param_1[0xf],param_1[0x10]);
  iVar3 = param_1[7];
  iVar4 = param_1[0x15];
  iVar14 = param_1[0x1c];
  iVar5 = param_1[0x1d];
  iVar15 = param_1[0xb];
  if (iVar15 < 0x601) {
    if (iVar15 == 0x600) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar9 = puVar6 + 3;
          iVar15 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 7) & 0xf8;
              pbVar9 = pbVar9 + 4;
              puVar16 = puVar16 + 1;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = puVar6 + 2;
          iVar15 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 2) & 0xf8;
              pbVar9 = pbVar9 + 4;
              puVar16 = puVar16 + 1;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pcVar10 = puVar6 + 1;
          iVar15 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pcVar10 = (char)*puVar16 << 3;
              pcVar10 = pcVar10 + 4;
              puVar16 = puVar16 + 1;
            } while (iVar15 != 0);
          }
        }
        else {
          if (iVar15 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar13 = puVar6;
          iVar15 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar13[1] = (byte)(uVar2 >> 7) & 0xf8;
              iVar15 = iVar15 + -1;
              puVar13[2] = (byte)(uVar2 >> 2) & 0xf8;
              puVar13[3] = (char)uVar2 << 3;
              puVar13 = puVar13 + 4;
              puVar16 = puVar16 + 1;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 == 0x200) {
      iVar15 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[0x16];
        if (iVar12 == -1) {
          puVar13 = puVar6;
          iVar12 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              uVar1 = (undefined1)*puVar16;
              *puVar13 = uVar1;
              puVar13[1] = uVar1;
              puVar13[2] = uVar1;
              iVar12 = iVar12 + -1;
              puVar13 = puVar13 + 4;
              puVar16 = (ushort *)((int)puVar16 + 1);
            } while (iVar12 != 0);
          }
        }
        else {
          if (iVar12 == 0x1000) {
            puVar13 = puVar6 + 3;
          }
          else if (iVar12 == 0x2000) {
            puVar13 = puVar6 + 2;
          }
          else {
            if (iVar12 != 0x4000) {
              return 1;
            }
            puVar13 = puVar6 + 1;
          }
          iVar12 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              *puVar13 = (char)*puVar16;
              puVar13 = puVar13 + 4;
              iVar12 = iVar12 + -1;
              puVar16 = (ushort *)((int)puVar16 + 1);
            } while (iVar12 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar5);
      return 0;
    }
  }
  else if (iVar15 < 0x801) {
    if (iVar15 == 0x800) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == -1) && (param_1[0x16] == -1)) {
          puVar13 = puVar6 + 3;
          iVar15 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              *puVar13 = (char)*puVar16;
              puVar13[-1] = *(undefined1 *)((int)puVar16 + 1);
              puVar13[-2] = (char)puVar16[1];
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
              puVar16 = (ushort *)((int)puVar16 + 3);
            } while (iVar15 != 0);
          }
        }
        else {
          puVar16 = local_18;
          if ((iVar15 != 0x1000) && (iVar15 != -1)) {
            if (iVar15 == 0x2000) {
              puVar16 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar15 != 0x4000) {
                return 1;
              }
              puVar16 = (ushort *)((int)local_18 + 1);
            }
          }
          iVar15 = param_1[0x16];
          if (iVar15 == 0x1000) {
            puVar13 = puVar6 + 3;
          }
          else if (iVar15 == 0x2000) {
            puVar13 = puVar6 + 2;
          }
          else {
            if (iVar15 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar14) {
                do {
                  uVar1 = (undefined1)*puVar16;
                  puVar16 = (ushort *)((int)puVar16 + 3);
                  puVar6[2] = uVar1;
                  puVar6[3] = uVar1;
                  puVar6[4] = uVar1;
                  iVar14 = iVar14 + -1;
                  puVar6 = puVar6 + 4;
                } while (iVar14 != 0);
                return 0;
              }
              return 0;
            }
            puVar13 = puVar6 + 1;
          }
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar16 = (ushort *)((int)puVar16 + 3);
              *puVar13 = (char)uVar2;
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 == 0x700) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pbVar9 = puVar6 + 3;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = puVar6 + 2;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 3) & 0xfc;
              puVar16 = puVar16 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pcVar10 = puVar6 + 1;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pcVar10 = (char)*puVar16 << 3;
              puVar16 = puVar16 + 1;
              pcVar10 = pcVar10 + 4;
            } while (iVar15 != 0);
          }
        }
        else {
          if (iVar15 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar16 = local_18;
          puVar13 = puVar6;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar13[1] = (byte)(uVar2 >> 8) & 0xf8;
              iVar15 = iVar15 + -1;
              puVar13[2] = (byte)(uVar2 >> 3) & 0xfc;
              puVar13[3] = (char)uVar2 << 3;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 4;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar15 < 0xa01) {
    if (iVar15 == 0xa00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == -1) && (param_1[0x16] == -1)) {
          puVar13 = puVar6 + 3;
          iVar15 = iVar14;
          puVar16 = local_18;
          if (0 < iVar14) {
            do {
              *puVar13 = *(undefined1 *)((int)puVar16 + 1);
              puVar13[-1] = (char)puVar16[1];
              puVar13[-2] = *(undefined1 *)((int)puVar16 + 3);
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
              puVar16 = puVar16 + 2;
            } while (iVar15 != 0);
          }
        }
        else {
          if ((iVar15 == 0x1000) || (iVar15 == -1)) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else if (iVar15 == 0x2000) {
            puVar16 = local_18 + 1;
          }
          else {
            if (iVar15 != 0x4000) {
              return 1;
            }
            puVar16 = (ushort *)((int)local_18 + 3);
          }
          iVar15 = param_1[0x16];
          if (iVar15 == 0x1000) {
            puVar13 = puVar6 + 3;
          }
          else if (iVar15 == 0x2000) {
            puVar13 = puVar6 + 2;
          }
          else {
            if (iVar15 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar14) {
                do {
                  uVar1 = (undefined1)*puVar16;
                  puVar16 = puVar16 + 2;
                  puVar6[2] = uVar1;
                  puVar6[3] = uVar1;
                  puVar6[4] = uVar1;
                  iVar14 = iVar14 + -1;
                  puVar6 = puVar6 + 4;
                } while (iVar14 != 0);
                return 0;
              }
              return 0;
            }
            puVar13 = puVar6 + 1;
          }
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *puVar13 = (char)uVar2;
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 == 0x900) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == -1) && (param_1[0x16] == -1)) {
          puVar13 = puVar6 + 3;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              *puVar13 = (char)*puVar16;
              puVar13[-1] = *(undefined1 *)((int)puVar16 + 1);
              puVar13[-2] = (char)puVar16[1];
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
              puVar16 = puVar16 + 2;
            } while (iVar15 != 0);
          }
        }
        else {
          puVar16 = local_18;
          if ((iVar15 != 0x1000) && (iVar15 != -1)) {
            if (iVar15 == 0x2000) {
              puVar16 = (ushort *)((int)local_18 + 1);
            }
            else {
              if (iVar15 != 0x4000) {
                return 1;
              }
              puVar16 = local_18 + 1;
            }
          }
          iVar15 = param_1[0x16];
          if (iVar15 == 0x1000) {
            puVar13 = puVar6 + 3;
          }
          else if (iVar15 == 0x2000) {
            puVar13 = puVar6 + 2;
          }
          else {
            if (iVar15 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar14) {
                do {
                  uVar1 = (undefined1)*puVar16;
                  puVar16 = puVar16 + 2;
                  puVar6[2] = uVar1;
                  puVar6[3] = uVar1;
                  puVar6[4] = uVar1;
                  iVar14 = iVar14 + -1;
                  puVar6 = puVar6 + 4;
                } while (iVar14 != 0);
                return 0;
              }
              return 0;
            }
            puVar13 = puVar6 + 1;
          }
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *puVar13 = (char)uVar2;
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar15 < 0xf01) {
    if (iVar15 == 0xf00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pcVar10 = puVar6 + 3;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pcVar10 = (char)*puVar16 << 3;
              puVar16 = puVar16 + 1;
              pcVar10 = pcVar10 + 4;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = puVar6 + 2;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 3) & 0xfc;
              puVar16 = puVar16 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar9 = puVar6 + 1;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar15 != 0);
          }
        }
        else {
          if (iVar15 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar16 = local_18;
          puVar13 = puVar6;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar13[1] = (char)uVar2 << 3;
              puVar13[2] = (byte)(uVar2 >> 3) & 0xfc;
              iVar15 = iVar15 + -1;
              puVar13[3] = (byte)(uVar2 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 4;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 == 0xe00) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == 0x1000) && (param_1[0x16] == 0x1000)) {
          pcVar10 = puVar6 + 3;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pcVar10 = ((byte)*puVar16 & 0x3e) << 2;
              puVar16 = puVar16 + 1;
              pcVar10 = pcVar10 + 4;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x2000) && (param_1[0x16] == 0x2000)) {
          pbVar9 = puVar6 + 2;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 3) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar15 != 0);
          }
        }
        else if ((iVar15 == 0x4000) && (param_1[0x16] == 0x4000)) {
          pbVar9 = puVar6 + 1;
          puVar16 = local_18;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              iVar15 = iVar15 + -1;
              *pbVar9 = (byte)(*puVar16 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar15 != 0);
          }
        }
        else {
          if (iVar15 != -1) {
            return 1;
          }
          if (param_1[0x16] != -1) {
            return 1;
          }
          puVar16 = local_18;
          puVar13 = puVar6;
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar13[1] = ((byte)uVar2 & 0x3e) << 2;
              puVar13[2] = (byte)(uVar2 >> 3) & 0xf8;
              iVar15 = iVar15 + -1;
              puVar13[3] = (byte)(uVar2 >> 8) & 0xf8;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 4;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar15 == 0x1000) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == -1) && (param_1[0x16] == -1)) {
          puVar7 = (undefined4 *)(puVar6 + 1);
          iVar15 = iVar14 + -1;
          iVar12 = iVar15;
          puVar16 = local_18;
          puVar8 = local_18;
          iVar11 = 0;
          if (0 < iVar15) {
            do {
              puVar16 = (ushort *)((int)puVar8 + 3);
              *puVar7 = *(undefined4 *)puVar8;
              puVar7 = puVar7 + 1;
              iVar12 = iVar12 + -1;
              puVar8 = puVar16;
              iVar11 = iVar15;
            } while (iVar12 != 0);
          }
          if (iVar11 < iVar14) {
            iVar11 = iVar14 - iVar11;
            do {
              *(char *)puVar7 = (char)*puVar16;
              puVar8 = puVar16 + 1;
              *(undefined1 *)((int)puVar7 + 1) = *(undefined1 *)((int)puVar16 + 1);
              puVar16 = (ushort *)((int)puVar16 + 3);
              *(char *)((int)puVar7 + 2) = (char)*puVar8;
              puVar7 = puVar7 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          if ((iVar15 == 0x1000) || (iVar15 == -1)) {
            puVar16 = local_18 + 1;
          }
          else if (iVar15 == 0x2000) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar16 = local_18;
            if (iVar15 != 0x4000) {
              return 1;
            }
          }
          iVar15 = param_1[0x16];
          if (iVar15 == 0x1000) {
            puVar13 = puVar6 + 3;
          }
          else if (iVar15 == 0x2000) {
            puVar13 = puVar6 + 2;
          }
          else {
            if (iVar15 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar14) {
                do {
                  uVar1 = (undefined1)*puVar16;
                  puVar16 = (ushort *)((int)puVar16 + 3);
                  puVar6[2] = uVar1;
                  puVar6[3] = uVar1;
                  puVar6[4] = uVar1;
                  iVar14 = iVar14 + -1;
                  puVar6 = puVar6 + 4;
                } while (iVar14 != 0);
                return 0;
              }
              return 0;
            }
            puVar13 = puVar6 + 1;
          }
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar16 = (ushort *)((int)puVar16 + 3);
              *puVar13 = (char)uVar2;
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 == 0x1100) {
      local_14 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar15 = param_1[8];
        if ((iVar15 == -1) && (param_1[0x16] == -1)) {
          puVar7 = (undefined4 *)(puVar6 + 1);
          iVar15 = iVar14 + -1;
          puVar16 = local_18;
          puVar8 = local_18;
          iVar12 = iVar15;
          iVar11 = 0;
          if (0 < iVar15) {
            do {
              puVar16 = (ushort *)((int)puVar8 + 3);
              *puVar7 = *(undefined4 *)puVar8;
              puVar7 = puVar7 + 1;
              iVar12 = iVar12 + -1;
              puVar8 = puVar16;
              iVar11 = iVar15;
            } while (iVar12 != 0);
          }
          if (iVar11 < iVar14) {
            iVar11 = iVar14 - iVar11;
            do {
              *(char *)puVar7 = (char)*puVar16;
              *(undefined1 *)((int)puVar7 + 1) = *(undefined1 *)((int)puVar16 + 1);
              *(char *)((int)puVar7 + 2) = (char)puVar16[1];
              puVar7 = puVar7 + 1;
              puVar16 = puVar16 + 2;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          if ((iVar15 == 0x1000) || (iVar15 == -1)) {
            puVar16 = local_18 + 1;
          }
          else if (iVar15 == 0x2000) {
            puVar16 = (ushort *)((int)local_18 + 1);
          }
          else {
            puVar16 = local_18;
            if (iVar15 != 0x4000) {
              return 1;
            }
          }
          iVar15 = param_1[0x16];
          if (iVar15 == 0x1000) {
            puVar13 = puVar6 + 3;
          }
          else if (iVar15 == 0x2000) {
            puVar13 = puVar6 + 2;
          }
          else {
            if (iVar15 != 0x4000) {
              if (param_1[0x16] != -1) {
                return 1;
              }
              if (0 < iVar14) {
                do {
                  uVar1 = (undefined1)*puVar16;
                  puVar16 = puVar16 + 2;
                  puVar6[2] = uVar1;
                  puVar6[3] = uVar1;
                  puVar6[4] = uVar1;
                  iVar14 = iVar14 + -1;
                  puVar6 = puVar6 + 4;
                } while (iVar14 != 0);
                return 0;
              }
              return 0;
            }
            puVar13 = puVar6 + 1;
          }
          iVar15 = iVar14;
          if (0 < iVar14) {
            do {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 2;
              *puVar13 = (char)uVar2;
              puVar13 = puVar13 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        local_14 = local_14 + 1;
        if (iVar5 <= local_14) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 == 0x1200) {
      iVar15 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        iVar12 = param_1[8];
        if ((iVar12 == 0x1000) || (iVar12 == -1)) {
          puVar16 = (ushort *)((int)local_18 + 3);
        }
        else if (iVar12 == 0x2000) {
          puVar16 = local_18 + 1;
        }
        else {
          if (iVar12 != 0x4000) {
            return 1;
          }
          puVar16 = (ushort *)((int)local_18 + 1);
        }
        iVar12 = param_1[0x16];
        if (iVar12 == 0x1000) {
          puVar13 = puVar6 + 3;
        }
        else if (iVar12 == 0x2000) {
          puVar13 = puVar6 + 2;
        }
        else {
          if (iVar12 != 0x4000) {
            if (param_1[0x16] != -1) {
              return 1;
            }
            if (0 < iVar14) {
              do {
                uVar1 = (undefined1)*puVar16;
                puVar16 = puVar16 + 2;
                puVar6[2] = uVar1;
                puVar6[3] = uVar1;
                puVar6[4] = uVar1;
                iVar14 = iVar14 + -1;
                puVar6 = puVar6 + 4;
              } while (iVar14 != 0);
              return 0;
            }
            return 0;
          }
          puVar13 = puVar6 + 1;
        }
        iVar12 = iVar14;
        if (0 < iVar14) {
          do {
            uVar2 = *puVar16;
            puVar16 = puVar16 + 2;
            *puVar13 = (char)uVar2;
            puVar13 = puVar13 + 4;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        local_18 = (ushort *)((int)local_18 + iVar3);
        puVar6 = puVar6 + iVar4;
        iVar15 = iVar15 + 1;
        if (iVar5 <= iVar15) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}


// ---- FUN_1000f060 @ 1000f060

void __cdecl FUN_1000f060(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar3 = uVar2 & 0xff00;
  uVar1 = (uVar2 & 0x40000) >> 0x12;
  if (uVar3 < 0x601) {
    if (uVar3 != 0x600) {
      if (uVar3 == 0x200) {
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
        *(uint *)(param_1 + 0x24) = uVar2 & 0xfffbffff | 0x20000;
      }
      goto LAB_1000f1dc;
    }
    *(undefined4 *)(param_1 + 0x28) = 2;
    uVar2 = -(uint)(uVar1 == 0) & 8;
  }
  else if (uVar3 < 0x801) {
    if (uVar3 == 0x800) {
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar2 = -(uint)(uVar1 == 0) & 0x10;
    }
    else {
      if (uVar3 != 0x700) goto LAB_1000f1dc;
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar2 = -(uint)(uVar1 == 0) & 8;
    }
  }
  else if (uVar3 < 0xa01) {
    if ((uVar3 != 0xa00) && (uVar3 != 0x900)) goto LAB_1000f1dc;
LAB_1000f1c7:
    *(undefined4 *)(param_1 + 0x28) = 2;
    uVar2 = -(uint)(uVar1 == 0) & 0x18;
  }
  else if (uVar3 < 0xf01) {
    if (uVar3 == 0xf00) {
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar2 = -(uint)(uVar1 == 0) & 8;
    }
    else {
      if (uVar3 != 0xe00) goto LAB_1000f1dc;
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar2 = -(uint)(uVar1 == 0) & 8;
    }
  }
  else {
    if (uVar3 != 0x1000) {
      if ((uVar3 != 0x1100) && (uVar3 != 0x1200)) goto LAB_1000f1dc;
      goto LAB_1000f1c7;
    }
    *(undefined4 *)(param_1 + 0x28) = 2;
    uVar2 = -(uint)(uVar1 == 0) & 0x10;
  }
  *(uint *)(param_1 + 0x30) = uVar2 + 8;
LAB_1000f1dc:
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x24) & 0xff00;
  return;
}


// ---- FUN_1000f1f0 @ 1000f1f0

int __cdecl FUN_1000f1f0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1[0xd] == 0) && (param_1[7] < 1)) {
    iVar3 = -param_1[7];
    iVar2 = ((int)(param_1[0xc] + (param_1[0xc] >> 0x1f & 7U)) >> 3) * param_1[5];
    param_1[7] = iVar2;
    if (iVar3 == 0) {
      if ((param_1[9] & 0x400000U) != 0) {
        iVar3 = 4;
      }
      if (iVar3 == 0) goto LAB_1000f241;
    }
    param_1[7] = ((iVar2 + -1 + iVar3) / iVar3) * iVar3;
  }
LAB_1000f241:
  piVar1 = param_1 + 7;
  iVar2 = *piVar1;
  if ((param_1[9] & 0x10000U) == 0) {
    iVar3 = *param_1 + iVar2 * param_3;
  }
  else {
    iVar3 = *param_1 + ((param_1[6] - param_3) + -1) * iVar2;
    if (0 < iVar2) {
      *piVar1 = -iVar2;
    }
  }
  param_1[0xd] = *piVar1;
  return ((int)(param_1[0xc] + (param_1[0xc] >> 0x1f & 7U)) >> 3) * param_2 + iVar3;
}


// ---- FUN_1000f290 @ 1000f290

void __cdecl FUN_1000f290(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[10] == 1) {
    return;
  }
  iVar2 = param_1[8];
  if (iVar2 == -1) {
    return;
  }
  uVar3 = param_1[9];
  if ((uVar3 & 0x40000) == 0) {
    return;
  }
  iVar1 = param_1[0xc];
  if (iVar1 == 8) {
    uVar3 = uVar3 & 0xffff02ff | 0x200;
  }
  else if (iVar1 == 0x10) {
    uVar3 = uVar3 & 0xffff03ff | 0x300;
  }
  else {
    if (iVar1 != 0x20) goto LAB_1000f2fb;
    uVar3 = uVar3 & 0xffff04ff | 0x400;
  }
  param_1[9] = uVar3;
LAB_1000f2fb:
  param_1[10] = 1;
  param_1[0xb] = param_1[9] & 0xff00;
  if (iVar2 != 0x2000) {
    if (iVar2 == 0x4000) {
      iVar2 = FUN_1000f1f0(param_1,0,param_1[6] * 2);
      *param_1 = iVar2;
    }
    param_1[8] = -1;
    return;
  }
  iVar2 = FUN_1000f1f0(param_1,0,param_1[6]);
  *param_1 = iVar2;
  param_1[8] = -1;
  return;
}


// ---- FUN_1000f420 @ 1000f420

void __fastcall FUN_1000f420(int param_1)

{
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ---- FUN_1000f580 @ 1000f580

void __thiscall
FUN_1000f580(void *this,int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  undefined3 extraout_var;
  int iVar6;
  byte local_7;
  short local_6;
  int local_4;
  
  iVar1 = *(int *)((int)this + 4);
  sVar2 = (short)(param_3 / iVar1);
  sVar5 = (short)(param_4 / *(int *)((int)this + 8));
  local_4 = (int)(short)(*(int *)((int)this + 0x10) / iVar1);
  iVar6 = sVar5 * local_4 + *(int *)((int)this + 0x18) + (int)sVar2;
  for (sVar5 = (short)((param_2 + -1 + param_4) / *(int *)((int)this + 8)) - sVar5;
      sVar3 = (short)((param_1 + -1 + param_3) / iVar1) - sVar2, -1 < sVar5; sVar5 = sVar5 + -1) {
    for (; -1 < sVar3; sVar3 = sVar3 + -1) {
      *(byte *)(sVar3 + iVar6) = *(byte *)(sVar3 + iVar6) & ~param_5;
      local_6 = sVar5;
    }
    iVar6 = iVar6 + local_4;
  }
  local_7 = 0;
  cVar4 = FUN_1000f930(this,*(short *)((int)this + 0x16),*(short *)((int)this + 0x16),1,8,0,0,
                       &local_7);
  *(ushort *)((int)this + 0x14) = (ushort)((short)CONCAT31(extraout_var,cVar4) == 0);
  return;
}


// ---- FUN_1000f930 @ 1000f930

char __thiscall
FUN_1000f930(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6,byte *param_7)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  
  bVar1 = true;
  bVar4 = *param_7;
  sVar5 = 0;
  iVar6 = (int)param_6 * (int)param_1 + *(int *)((int)this + 0x18) + (int)param_5;
  do {
    if (param_3 <= sVar5) break;
    sVar2 = 0;
    if (0 < param_2) {
      do {
        iVar3 = (int)sVar2;
        sVar2 = sVar2 + 1;
        bVar4 = bVar4 | *(byte *)(iVar3 + iVar6);
      } while (sVar2 < param_2);
    }
    sVar5 = sVar5 + 1;
    iVar6 = iVar6 + param_1;
    sVar2 = FUN_1000fa40(bVar4);
    bVar1 = param_4 <= sVar2;
  } while (bVar1);
  if (bVar1) {
    *param_7 = bVar4;
  }
  return bVar1;
}


// ---- FUN_1000fa40 @ 1000fa40

short FUN_1000fa40(byte param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = 0;
  sVar3 = 8;
  sVar2 = 0;
  do {
    if ((param_1 & 1) == 0) {
      sVar2 = sVar2 + 1;
    }
    else {
      if (sVar1 < sVar2) {
        sVar1 = sVar2;
      }
      sVar2 = 0;
    }
    param_1 = (char)param_1 >> 1;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  if (sVar1 < sVar2) {
    sVar1 = sVar2;
  }
  return sVar1;
}


// ---- FUN_1000fab0 @ 1000fab0

undefined4 * __thiscall
FUN_1000fab0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            )

{
  *(undefined ***)this = &PTR_FUN_1002f334;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_100101c0((undefined4 *)((int)this + 0x44));
  FUN_100101c0((undefined4 *)((int)this + 0x48));
  FUN_100101c0((undefined4 *)((int)this + 0x4c));
  *param_3 = 0;
  return this;
}


// ---- FUN_1000fb30 @ 1000fb30

void __fastcall FUN_1000fb30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1002f334;
  FUN_1000fcd0((int)param_1);
  FUN_10010200(param_1 + 0x11);
  FUN_10010200(param_1 + 0x12);
  FUN_10010200(param_1 + 0x13);
  return;
}


// ---- FUN_1000fb70 @ 1000fb70

undefined4 __fastcall FUN_1000fb70(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  pvVar2 = operator_new((int)(short)((short)*(undefined4 *)(param_1 + 0x18) + 1) << 2);
  *(void **)(param_1 + 0x34) = pvVar2;
  pvVar2 = operator_new((int)(short)((short)*(undefined4 *)(param_1 + 0x1c) + 1) << 2);
  *(void **)(param_1 + 0x38) = pvVar2;
  piVar1 = (int *)(param_1 + 0x40);
  pvVar2 = operator_new((int)(short)((short)*(undefined4 *)(param_1 + 0x20) + 1) << 2);
  *(void **)(param_1 + 0x3c) = pvVar2;
  if (*(int *)(param_1 + 0x24) == 0) {
    *piVar1 = 0;
  }
  else {
    pvVar2 = operator_new((int)(short)*(int *)(param_1 + 0x24) << 2);
    *piVar1 = (int)pvVar2;
  }
  if ((((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x38) == 0)) ||
      (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0)) ||
     ((*piVar1 == 0 && (*(int *)(param_1 + 0x24) != 0)))) {
    uVar5 = 0xca;
  }
  else {
    **(undefined4 **)(param_1 + 0x34) = 0xffffffff;
    iVar3 = 1;
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar4 = 4;
      do {
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + -4 + iVar4) = 0;
      } while (iVar3 <= *(int *)(param_1 + 0x18));
    }
    iVar3 = 1;
    **(undefined4 **)(param_1 + 0x38) = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar4 = 4;
      do {
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x38) + -4 + iVar4) = 0;
      } while (iVar3 <= *(int *)(param_1 + 0x1c));
    }
    **(undefined4 **)(param_1 + 0x3c) = 0xffffffff;
    iVar3 = 1;
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar4 = 4;
      do {
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + -4 + iVar4) = 0;
      } while (iVar3 <= *(int *)(param_1 + 0x20));
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*piVar1 + -4 + iVar4) = 0;
      } while (iVar3 < *(int *)(param_1 + 0x24));
      return 0;
    }
  }
  return uVar5;
}


// ---- FUN_1000fcd0 @ 1000fcd0

void __fastcall FUN_1000fcd0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar4 = 1;
    FUN_100101e0(*(LPCRITICAL_SECTION *)(param_1 + 0x44));
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar3 = 4;
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x34) + iVar3);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(param_1 + 0x18));
    }
    operator_delete(*(void **)(param_1 + 0x34));
    FUN_100101f0(*(LPCRITICAL_SECTION *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar4 = 1;
    FUN_100101e0(*(LPCRITICAL_SECTION *)(param_1 + 0x48));
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar3 = 4;
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x38) + iVar3);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(param_1 + 0x1c));
    }
    operator_delete(*(void **)(param_1 + 0x38));
    FUN_100101f0(*(LPCRITICAL_SECTION *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar4 = 1;
    FUN_100101e0(*(LPCRITICAL_SECTION *)(param_1 + 0x4c));
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar3 = 4;
      do {
        if ((*(int *)(*(int *)(param_1 + 0x3c) + iVar3) != 0) &&
           (puVar1 = *(undefined4 **)(iVar3 + *(int *)(param_1 + 0x3c)), puVar1 != (undefined4 *)0x0
           )) {
          (**(code **)*puVar1)(1);
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(param_1 + 0x20));
    }
    operator_delete(*(void **)(param_1 + 0x3c));
    FUN_100101f0(*(LPCRITICAL_SECTION *)(param_1 + 0x4c));
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar3 = 0;
      do {
        pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + iVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_1000f420((int)pvVar2);
          operator_delete(pvVar2);
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
    operator_delete(*(void **)(param_1 + 0x40));
  }
  return;
}


// ---- FUN_1000fe20 @ 1000fe20

int __thiscall FUN_1000fe20(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_100101e0(*(LPCRITICAL_SECTION *)((int)this + 0x44));
  iVar3 = 1;
  iVar1 = *(int *)((int)this + 0x18);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)((int)this + 0x34);
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
    if (iVar3 <= iVar1) {
      *(int *)(*(int *)((int)this + 0x34) + iVar3 * 4) = param_1;
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
      *(int *)(param_1 + 0x2c) = iVar3;
      iVar4 = iVar3;
    }
  }
  FUN_100101f0(*(LPCRITICAL_SECTION *)((int)this + 0x44));
  return iVar4;
}


// ---- FUN_1000fe80 @ 1000fe80

void __thiscall FUN_1000fe80(void *this,int param_1)

{
  FUN_100101e0(*(LPCRITICAL_SECTION *)((int)this + 0x44));
  *(undefined4 *)(*(int *)((int)this + 0x34) + param_1 * 4) = 0;
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
  FUN_100101f0(*(LPCRITICAL_SECTION *)((int)this + 0x44));
  return;
}


// ---- FUN_1000feb0 @ 1000feb0

undefined4 __thiscall FUN_1000feb0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_1 <= *(int *)((int)this + 0x18))) {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x34) + param_1 * 4);
  }
  return uVar1;
}


// ---- FUN_10010020 @ 10010020

int __thiscall FUN_10010020(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_100101e0(*(LPCRITICAL_SECTION *)((int)this + 0x4c));
  iVar3 = 1;
  iVar1 = *(int *)((int)this + 0x20);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)((int)this + 0x3c);
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
    if (iVar3 <= iVar1) {
      *(int *)(*(int *)((int)this + 0x3c) + iVar3 * 4) = param_1;
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
      *(int *)(param_1 + 0x38) = iVar3;
      iVar4 = iVar3;
    }
  }
  FUN_100101f0(*(LPCRITICAL_SECTION *)((int)this + 0x4c));
  return iVar4;
}


// ---- FUN_10010080 @ 10010080

void __thiscall FUN_10010080(void *this,int param_1)

{
  FUN_100101e0(*(LPCRITICAL_SECTION *)((int)this + 0x4c));
  *(undefined4 *)(*(int *)((int)this + 0x3c) + param_1 * 4) = 0;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
  FUN_100101f0(*(LPCRITICAL_SECTION *)((int)this + 0x4c));
  return;
}


// ---- FUN_100100b0 @ 100100b0

undefined4 __thiscall FUN_100100b0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 <= *(int *)((int)this + 0x20)) {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x3c) + param_1 * 4);
  }
  return uVar1;
}


// ---- FUN_100100d0 @ 100100d0

int __thiscall FUN_100100d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar2 = 1;
  do {
    if (*(int *)((int)this + 0x20) < iVar2) break;
    iVar1 = *(int *)(*(int *)((int)this + 0x3c) + iVar2 * 4);
    if (iVar1 != 0) {
      bVar3 = *(int *)(iVar1 + 8) == param_1;
    }
    iVar2 = iVar2 + 1;
  } while (!bVar3);
  iVar1 = 0;
  if (bVar3) {
    iVar1 = iVar2 + -1;
  }
  return iVar1;
}


// ---- FUN_10010130 @ 10010130

void __thiscall FUN_10010130(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x3c) + param_1 * 4);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}


// ---- FUN_10010150 @ 10010150

void __thiscall FUN_10010150(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x3c) + param_1 * 4);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
  return;
}


// ---- FUN_100101c0 @ 100101c0

void FUN_100101c0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = operator_new(0x18);
  *param_1 = lpCriticalSection;
  InitializeCriticalSection(lpCriticalSection);
  return;
}


// ---- FUN_100101e0 @ 100101e0

void FUN_100101e0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}


// ---- FUN_100101f0 @ 100101f0

void FUN_100101f0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}


// ---- FUN_10010200 @ 10010200

void FUN_10010200(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
  operator_delete((void *)*param_1);
  return;
}


// ---- FUN_10010220 @ 10010220

undefined4 * __thiscall FUN_10010220(void *this,uint param_1)

{
  FUN_1000fb30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100102b0 @ 100102b0

void __cdecl FUN_100102b0(int *param_1)

{
  HDC pHVar1;
  int iVar2;
  CHAR local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  pHVar1 = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(pHVar1,8);
  param_1[2] = iVar2;
  iVar2 = GetDeviceCaps(pHVar1,10);
  param_1[3] = iVar2;
  iVar2 = GetDeviceCaps(pHVar1,0xc);
  param_1[4] = iVar2;
  ReleaseDC((HWND)0x0,pHVar1);
  iVar2 = param_1[2];
  *param_1 = iVar2;
  param_1[1] = param_1[3];
  param_1[5] = iVar2;
  if (((iVar2 == 800) && (param_1[3] == 600)) && (param_1[4] == 8)) {
    param_1[5] = 0x3c0;
  }
  pHVar1 = CreateDCA(s_DISPLAY_1003001c,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  if (pHVar1 != (HDC)0x0) {
    builtin_memcpy(local_2c,"\x03XTM",4);
    iVar2 = ExtEscape(pHVar1,8,4,local_2c,0,(LPSTR)0x0);
    if (iVar2 != 0) {
      local_2c[0] = '\0';
      local_2c[1] = '\0';
      local_2c[2] = '\0';
      local_2c[3] = '\0';
      local_28 = 0;
      iVar2 = ExtEscape(pHVar1,0x4d545803,4,local_2c,4,(LPSTR)&local_28);
      if (iVar2 != 0) {
        param_1[5] = local_28;
      }
    }
    local_2c[0] = -0x13;
    local_2c[1] = 'X';
    local_2c[2] = 'T';
    local_2c[3] = 'M';
    iVar2 = ExtEscape(pHVar1,8,4,local_2c,0,(LPSTR)0x0);
    if (iVar2 != 0) {
      local_2c[0] = '\0';
      local_2c[1] = '\0';
      local_2c[2] = '\0';
      local_2c[3] = '\0';
      iVar2 = ExtEscape(pHVar1,0x4d5458ed,4,local_2c,0x28,(LPSTR)&local_28);
      if (iVar2 != 0) {
        *param_1 = local_20;
        param_1[1] = local_1c;
        param_1[2] = local_28;
        param_1[3] = local_24;
        param_1[4] = local_18;
      }
    }
    DeleteDC(pHVar1);
  }
  return;
}


// ---- FUN_100103f0 @ 100103f0

undefined4 * __thiscall FUN_100103f0(void *this,undefined4 *param_1)

{
  FUN_10001060(this,param_1);
  *(undefined ***)this = &PTR_LAB_1002f338;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  return this;
}


// ---- FUN_10010450 @ 10010450

void __fastcall FUN_10010450(undefined4 *param_1)

{
  HDC hdc;
  int iVar1;
  BOOL BVar2;
  
  hdc = (HDC)param_1[0x21];
  *param_1 = &PTR_LAB_1002f338;
  if (hdc != (HDC)0x0) {
    if ((void *)param_1[0x1b] == (void *)0x0) {
      if (param_1[0x15] != 0) {
        BVar2 = DeleteDC(hdc);
        if (BVar2 != 0) {
          param_1[0x21] = 0;
        }
      }
    }
    else {
      iVar1 = FUN_10011e70((void *)param_1[0x1b],(int)hdc);
      if (iVar1 != 0) {
        param_1[0x21] = 0;
        FUN_10001090(param_1);
        return;
      }
    }
  }
  FUN_10001090(param_1);
  return;
}


// ---- FUN_100104b0 @ 100104b0

void __thiscall FUN_100104b0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  HDC hdc;
  HDC hdc_00;
  
  if (*(int *)((int)this + 0x84) != 0) {
    (**(code **)(*param_2 + 4))(0x38e,1,0,0);
    return;
  }
  if (*(int *)((int)this + 0x6c) == 0) {
    if (*(int *)((int)this + 0x54) != 0) {
      hdc = GetDC((HWND)0x0);
      hdc_00 = CreateCompatibleDC(hdc);
      *(HDC *)((int)this + 0x84) = hdc_00;
      if (hdc_00 != (HDC)0x0) {
        SelectObject(hdc_00,*(HGDIOBJ *)((int)this + 0x54));
      }
      ReleaseDC((HWND)0x0,hdc);
    }
  }
  else {
    iVar1 = FUN_10011dc0(*(int *)((int)this + 0x6c));
    *(int *)((int)this + 0x84) = iVar1;
  }
  if (*(int *)((int)this + 0x84) == 0) {
    (**(code **)(*param_2 + 4))(0x38d,1,0,0);
  }
  return;
}


// ---- FUN_10010550 @ 10010550

void __thiscall FUN_10010550(void *this,undefined4 param_1,int *param_2)

{
  HDC hdc;
  int iVar1;
  
  hdc = *(HDC *)((int)this + 0x84);
  if (hdc == (HDC)0x0) {
    (**(code **)(*param_2 + 4))(0x38e,2,0,0);
    return;
  }
  if (*(void **)((int)this + 0x6c) == (void *)0x0) {
    if (*(int *)((int)this + 0x54) == 0) goto LAB_100105a4;
    iVar1 = DeleteDC(hdc);
  }
  else {
    iVar1 = FUN_10011e70(*(void **)((int)this + 0x6c),(int)hdc);
  }
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x84) = 0;
  }
LAB_100105a4:
  if (*(int *)((int)this + 0x84) != 0) {
    (**(code **)(*param_2 + 4))(0x38d,2,0,0);
  }
  return;
}


// ---- FUN_100105f0 @ 100105f0

undefined4 * __fastcall FUN_100105f0(undefined4 *param_1)

{
  UINT uMode;
  HMODULE pHVar1;
  FARPROC pFVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_1002f3b0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar3 = param_1 + 0xb;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0xb] = 0x6c;
  puVar3 = param_1 + 0x26;
  for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x26] = 0x13c;
  puVar3 = param_1 + 0x75;
  for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x75] = 0x13c;
  uMode = SetErrorMode(0x8000);
  pHVar1 = LoadLibraryA(s_DDRAW_DLL_1003002c);
  param_1[7] = pHVar1;
  SetErrorMode(uMode);
  if ((HMODULE)param_1[7] == (HMODULE)0x0) {
    param_1[2] = 0x388;
    param_1[3] = 1;
    return param_1;
  }
  pFVar2 = GetProcAddress((HMODULE)param_1[7],s_DirectDrawCreate_10030038);
  param_1[8] = pFVar2;
  if ((pFVar2 == (FARPROC)0x0) || (DAT_10030028 != 0)) {
    param_1[2] = 0x388;
    param_1[3] = 1;
    return param_1;
  }
  iVar4 = (*pFVar2)(0,param_1 + 9,0);
  if ((iVar4 == 0) && (puVar3 = (undefined4 *)param_1[9], puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(puVar3,&DAT_1002f360,param_1 + 10);
    (**(code **)(*(int *)param_1[9] + 0x50))((int *)param_1[9],0,8);
    (**(code **)(*(int *)param_1[9] + 0x30))((int *)param_1[9],param_1 + 0xb);
    (**(code **)(*(int *)param_1[9] + 0x2c))((int *)param_1[9],param_1 + 0x26,param_1 + 0x75);
    this = operator_new(0xf8);
    if (this == (void *)0x0) {
      param_1[6] = 0;
    }
    else {
      puVar3 = FUN_10010c20(this,param_1,0x200,0,0,0,0);
      param_1[6] = puVar3;
    }
    puVar3 = (undefined4 *)param_1[6];
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      param_1[6] = 0;
      param_1[2] = 0x388;
      param_1[3] = 1;
      return param_1;
    }
    param_1[1] = 1;
    return param_1;
  }
  param_1[2] = 0x388;
  param_1[3] = 2;
  return param_1;
}


// ---- FUN_100107d0 @ 100107d0

void __fastcall FUN_100107d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_1002f3b0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
    param_1[6] = 0;
  }
  if (DAT_10030028 == 0) {
    piVar1 = (int *)param_1[10];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if ((HMODULE)param_1[7] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[7]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  return;
}


// ---- FUN_10010830 @ 10010830

undefined4 __fastcall FUN_10010830(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x84);
}


// ---- FUN_10010840 @ 10010840

undefined4 __fastcall FUN_10010840(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70);
}


// ---- FUN_10010850 @ 10010850

undefined4 __fastcall FUN_10010850(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6c);
}


// ---- FUN_10010860 @ 10010860

undefined4 __fastcall FUN_10010860(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x68);
}


// ---- FUN_10010870 @ 10010870

undefined4 __fastcall FUN_10010870(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xb4);
}


// ---- FUN_10010880 @ 10010880

void __fastcall FUN_10010880(int param_1)

{
  FUN_100112a0(*(int *)(param_1 + 0x18));
  return;
}


// ---- FUN_10010890 @ 10010890

int __thiscall FUN_10010890(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  if ((((param_1 != 1) || ((*(uint *)((int)this + 0x78) & 0x800) == 0)) ||
      (*(int *)((int)this + 0x80) != 1)) &&
     (((param_1 != 8 || ((*(uint *)((int)this + 0x78) & 0x20) == 0)) ||
      (*(int *)((int)this + 0x80) != 8)))) {
    if (((param_1 == 0xf) && ((*(uint *)((int)this + 0x78) & 0x40) != 0)) &&
       (*(int *)((int)this + 0x80) == 0x10)) {
      iVar1 = FUN_10010880((int)this);
      if (iVar1 != 0xf) goto LAB_10010950;
    }
    else if (((param_1 == 0x10) && ((*(uint *)((int)this + 0x78) & 0x40) != 0)) &&
            (*(int *)((int)this + 0x80) == 0x10)) {
      iVar1 = FUN_10010880((int)this);
      if (iVar1 != 0x10) goto LAB_10010950;
    }
    else if ((((param_1 != 0x18) || ((*(uint *)((int)this + 0x78) & 0x40) == 0)) ||
             (*(int *)((int)this + 0x80) != 0x18)) &&
            (((param_1 != 0x20 || ((*(uint *)((int)this + 0x78) & 0x40) == 0)) ||
             (*(int *)((int)this + 0x80) != 0x20)))) goto LAB_10010950;
  }
  iVar4 = 1;
LAB_10010950:
  if (iVar4 != 0) {
    if (param_3 != 0) {
      uVar3 = *(uint *)((int)this + 0x74);
      puVar5 = (undefined4 *)((int)this + 0x74);
      puVar6 = (undefined4 *)(param_3 + 0x48);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 0x1000;
    }
    if (((iVar4 != 0) && (param_2 != 0)) &&
       (*(char *)(*(int *)((int)this + 0x18) + 0x11) != (char)((uint)param_2 >> 8))) {
      iVar4 = 0;
    }
  }
  return iVar4;
}


// ---- FUN_100109a0 @ 100109a0

uint FUN_100109a0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (((param_1 != 0) && ((*(uint *)(param_1 + 4) & 0x1000) != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x4c), (uVar1 & 0x687) == 0)) {
    uVar4 = uVar1 & 0x40;
    if ((uVar4 != 0) && (*(int *)(param_1 + 0x54) == 0x20)) {
      iVar2 = *(int *)(param_1 + 0x58);
      if ((iVar2 == -0x1000000) &&
         ((*(int *)(param_1 + 0x5c) == 0xff0000 && (*(int *)(param_1 + 0x60) == 0xff00)))) {
        uVar3 = 0x1200;
      }
      else if ((iVar2 == 0xff0000) &&
              ((*(int *)(param_1 + 0x5c) == 0xff00 && (*(int *)(param_1 + 0x60) == 0xff)))) {
        uVar3 = 0x1100;
      }
      else if ((iVar2 == 0xff00) &&
              ((*(int *)(param_1 + 0x5c) == 0xff0000 && (*(int *)(param_1 + 0x60) == -0x1000000))))
      {
        uVar3 = 0x900;
      }
      else if ((iVar2 == 0xff) &&
              ((*(int *)(param_1 + 0x5c) == 0xff00 && (*(int *)(param_1 + 0x60) == 0xff0000)))) {
        uVar3 = 0xa00;
      }
    }
    if (uVar4 != 0) {
      if (*(int *)(param_1 + 0x54) == 0x18) {
        if (((*(int *)(param_1 + 0x58) == 0xff0000) && (*(int *)(param_1 + 0x5c) == 0xff00)) &&
           (*(int *)(param_1 + 0x60) == 0xff)) {
          uVar3 = 0x1000;
        }
        else if (((*(int *)(param_1 + 0x58) == 0xff) && (*(int *)(param_1 + 0x5c) == 0xff00)) &&
                (*(int *)(param_1 + 0x60) == 0xff0000)) {
          uVar3 = 0x800;
        }
      }
      if ((uVar4 != 0) && (*(int *)(param_1 + 0x54) == 0x10)) {
        iVar2 = *(int *)(param_1 + 0x58);
        if ((iVar2 == 0x7c00) &&
           ((*(int *)(param_1 + 0x5c) == 0x3e0 && (*(int *)(param_1 + 0x60) == 0x1f)))) {
          uVar3 = 0x600;
        }
        else if ((iVar2 == 0x3e) &&
                ((*(int *)(param_1 + 0x5c) == 0x7c0 && (*(int *)(param_1 + 0x60) == 0xf800)))) {
          uVar3 = 0xe00;
        }
        else if ((iVar2 == 0xf800) &&
                ((*(int *)(param_1 + 0x5c) == 0x7e0 && (*(int *)(param_1 + 0x60) == 0x1f)))) {
          uVar3 = 0x700;
        }
        else if ((iVar2 == 0x1f) &&
                ((*(int *)(param_1 + 0x5c) == 0x7e0 && (*(int *)(param_1 + 0x60) == 0xf800)))) {
          uVar3 = 0xf00;
        }
      }
    }
    if (((uVar1 & 0x20) != 0) && (*(int *)(param_1 + 0x54) == 8)) {
      uVar3 = 0x200;
    }
    if (((uVar1 & 0x800) != 0) && (*(int *)(param_1 + 0x54) == 1)) {
      uVar3 = 0x100;
    }
    if ((*(uint *)(param_1 + 0x68) & 0x4000) != 0) {
      uVar3 = uVar3 | 0x80000;
    }
    if ((*(uint *)(param_1 + 0x68) & 0x800) != 0) {
      uVar3 = uVar3 | 0x100000;
    }
    uVar3 = uVar3 | 0x6820000;
  }
  return uVar3;
}


// ---- FUN_10010bc0 @ 10010bc0

void __thiscall FUN_10010bc0(void *this,int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    (**(code **)(**(int **)((int)this + 0x24) + 0x58))(*(int **)((int)this + 0x24),4,param_2);
    return;
  }
  if (param_1 == -1) {
    (**(code **)(**(int **)((int)this + 0x24) + 0x58))(*(int **)((int)this + 0x24),1,param_2);
  }
  return;
}


// ---- FUN_10010c00 @ 10010c00

void __thiscall FUN_10010c00(void *this,undefined4 param_1)

{
  if (DAT_10030028 == 0) {
    (**(code **)(**(int **)((int)this + 0x24) + 0x40))(*(int **)((int)this + 0x24),param_1);
  }
  return;
}


// ---- FUN_10010c20 @ 10010c20

undefined4 * __thiscall
FUN_10010c20(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_70;
  int local_6c [18];
  undefined4 local_24 [8];
  int local_4;
  
  *(undefined ***)this = &PTR_FUN_1002f3b4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(int *)((int)this + 0x44) = param_3;
  *(int *)((int)this + 0x48) = param_4;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0xcc) = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    *(undefined4 *)((int)this + 8) = 0x388;
    *(undefined4 *)((int)this + 0xc) = 1;
  }
  else {
    local_70 = -0x7789ff7e;
    *(undefined4 *)((int)this + 0xcc) = 0;
    puVar3 = (undefined4 *)((int)this + 0x60);
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)this + 0x60) = 0x6c;
    piVar5 = local_6c;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_4 = param_2;
    local_6c[0] = 0x6c;
    local_6c[1] = 1;
    puVar3 = local_24;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_24[0] = 0x20;
    if ((param_3 != 0) || (param_4 != 0)) {
      local_6c[2] = param_4;
      local_6c[1] = 7;
      local_6c[3] = param_3;
    }
    if (((param_5 != 0) || (param_6 != 0)) &&
       (iVar4 = FUN_10010890(*(void **)((int)this + 0x18),param_5,param_6,(int)local_6c), iVar4 == 0
       )) {
      *(undefined4 *)((int)this + 8) = 0x38b;
      *(undefined4 *)((int)this + 0xc) = 1;
      return this;
    }
    if (DAT_10030028 == 0) {
      piVar5 = *(int **)(*(int *)((int)this + 0x18) + 0x24);
      local_70 = (**(code **)(*piVar5 + 0x18))(piVar5,local_6c,(int)this + 0xcc,0);
    }
    if (((local_70 == 0) && (piVar5 = *(int **)((int)this + 0xcc), piVar5 != (int *)0x0)) &&
       (DAT_10030028 == 0)) {
      iVar4 = (**(code **)(*piVar5 + 100))(piVar5,0,(int)this + 0x60,1,0);
      if (iVar4 == 0) {
        *(undefined4 *)((int)this + 0x4c) = 1;
        *(undefined4 *)((int)this + 4) = 1;
        if ((param_2 == 0) &&
           (iVar4 = (**(code **)(**(int **)((int)this + 0xcc) + 0x80))
                              (*(int **)((int)this + 0xcc),*(undefined4 *)((int)this + 0x84)),
           iVar4 == 0)) {
          *(undefined4 *)((int)this + 0x4c) = 0;
        }
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x68);
        uVar1 = FUN_100109a0((int)this + 0x60);
        *(uint *)((int)this + 0x10) = uVar1;
        *(int *)((int)this + 0x14) = param_5;
        pvVar2 = operator_new(0x38);
        if (pvVar2 == (void *)0x0) {
          *(undefined4 *)((int)this + 0x24) = 0;
        }
        else {
          puVar3 = FUN_10011f50(pvVar2,(int)this);
          *(undefined4 **)((int)this + 0x24) = puVar3;
        }
        puVar3 = *(undefined4 **)((int)this + 0x24);
        if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)((int)this + 0x24) = 0;
        }
        pvVar2 = operator_new(0x38);
        if (pvVar2 == (void *)0x0) {
          *(undefined4 *)((int)this + 0x28) = 0;
        }
        else {
          puVar3 = FUN_10011f50(pvVar2,(int)this);
          *(undefined4 **)((int)this + 0x28) = puVar3;
        }
        puVar3 = *(undefined4 **)((int)this + 0x28);
        if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)((int)this + 0x28) = 0;
        }
        *(undefined4 *)((int)this + 0x5c) = 0x660;
        pvVar2 = operator_new(0x660);
        *(void **)((int)this + 0x58) = pvVar2;
        if (*(int *)(*(int *)((int)this + 0x18) + 0x14) != 0) {
          FUN_100112f0((int)this);
        }
        FUN_100113f0((int)this);
        if (*(int *)(*(int *)((int)this + 0x18) + 0x10) != 0) {
          pvVar2 = operator_new(0x38);
          if (pvVar2 == (void *)0x0) {
            *(undefined4 *)((int)this + 0x2c) = 0;
          }
          else {
            puVar3 = FUN_10012280(pvVar2,(int)this,*(int *)((int)this + 0x30));
            *(undefined4 **)((int)this + 0x2c) = puVar3;
          }
          puVar3 = *(undefined4 **)((int)this + 0x2c);
          if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
            if (puVar3 != (undefined4 *)0x0) {
              (**(code **)*puVar3)(1);
            }
            *(undefined4 *)((int)this + 0x2c) = 0;
          }
        }
      }
      else {
        *(undefined4 *)((int)this + 8) = 0x38c;
        *(undefined4 *)((int)this + 0xc) = 1;
      }
    }
    else {
      *(undefined4 *)((int)this + 8) = 0x388;
      *(undefined4 *)((int)this + 0xc) = 3;
    }
  }
  return this;
}


// ---- FUN_10010f60 @ 10010f60

undefined4 * __thiscall
FUN_10010f60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  *(undefined ***)this = &PTR_FUN_1002f3b4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  ((LPRECT)((int)this + 0x3c))->left = param_2;
  *(int *)((int)this + 0x40) = param_3;
  *(int *)((int)this + 0x44) = param_4 + param_2;
  *(int *)((int)this + 0x48) = param_5 + param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0xcc) = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0x38b;
    *(undefined4 *)((int)this + 0xc) = 2;
    return this;
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  *(int *)((int)this + 0x20) = iVar4;
  if (iVar4 == 0) {
    *(int *)((int)this + 0x20) = param_1;
  }
  OffsetRect((LPRECT)((int)this + 0x3c),*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40));
  puVar1 = (uint *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  puVar7 = puVar1;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *puVar1 = 0x6c;
  if (*(int *)((int)this + 0xcc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    uVar6 = *(uint *)(param_1 + 0x60);
    puVar7 = (uint *)(param_1 + 0x60);
    puVar8 = puVar1;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar8 = (char)*puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    *(int *)((int)this + 0x6c) = param_4;
    *(int *)((int)this + 0x68) = param_5;
    *(uint *)((int)this + 0x84) =
         *(int *)((int)this + 0x84) +
         (*(uint *)((int)this + 0xb4) >> 3) * param_2 + *(int *)((int)this + 0x70) * param_3;
    uVar6 = FUN_100109a0((int)puVar1);
    *(uint *)((int)this + 0x10) = uVar6;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    pvVar2 = operator_new(0x38);
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    else {
      puVar3 = FUN_10011f50(pvVar2,(int)this);
      *(undefined4 **)((int)this + 0x24) = puVar3;
    }
    puVar3 = *(undefined4 **)((int)this + 0x24);
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    pvVar2 = operator_new(0x38);
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    else {
      puVar3 = FUN_10011f50(pvVar2,(int)this);
      *(undefined4 **)((int)this + 0x28) = puVar3;
    }
    puVar3 = *(undefined4 **)((int)this + 0x28);
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    *(undefined4 *)((int)this + 0x5c) = 0x660;
    pvVar2 = operator_new(0x660);
    *(void **)((int)this + 0x58) = pvVar2;
    if (*(int *)(*(int *)((int)this + 0x18) + 0x14) != 0) {
      FUN_100112f0((int)this);
    }
    FUN_100113f0((int)this);
    if (*(int *)(*(int *)((int)this + 0x18) + 0x10) != 0) {
      pvVar2 = operator_new(0x38);
      if (pvVar2 == (void *)0x0) {
        *(undefined4 *)((int)this + 0x2c) = 0;
      }
      else {
        puVar3 = FUN_10012280(pvVar2,(int)this,*(int *)((int)this + 0x30));
        *(undefined4 **)((int)this + 0x2c) = puVar3;
      }
      puVar3 = *(undefined4 **)((int)this + 0x2c);
      if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)((int)this + 0x2c) = 0;
      }
    }
  }
  return this;
}


// ---- FUN_100111c0 @ 100111c0

void __fastcall FUN_100111c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1002f3b4;
  if (param_1[0x14] != 0) {
    param_1[0x15] = 1;
    FUN_10011e70(param_1,param_1[0x14]);
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  FUN_10011510((int)param_1);
  FUN_100113a0((int)param_1);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
    param_1[10] = 0;
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[0x33];
  if ((piVar1 != (int *)0x0) && (DAT_10030028 == 0)) {
    if (param_1[0x13] != 0) {
      if (param_1[7] != 0) goto LAB_1001128b;
      (**(code **)(*piVar1 + 0x80))(piVar1,param_1[0x21]);
    }
    if (param_1[7] == 0) {
      (**(code **)(*(int *)param_1[0x33] + 8))((int *)param_1[0x33]);
    }
  }
LAB_1001128b:
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}


// ---- FUN_100112a0 @ 100112a0

int __fastcall FUN_100112a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (((*(uint *)(param_1 + 0xac) & 0x40) != 0) && (iVar1 = *(int *)(param_1 + 0xb4), iVar1 == 0x10)
     ) {
    iVar1 = 0;
    for (uVar2 = *(uint *)(param_1 + 0xc0) | *(uint *)(param_1 + 0xb8) | *(uint *)(param_1 + 0xbc);
        uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        iVar1 = iVar1 + 1;
      }
    }
  }
  return iVar1;
}


// ---- FUN_100112f0 @ 100112f0

void __fastcall FUN_100112f0(int param_1)

{
  bool bVar1;
  HGLOBAL hMem;
  undefined2 *puVar2;
  undefined1 *puVar3;
  HPALETTE pHVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  bVar1 = true;
  if (iVar5 < 0x8a0201) {
    if (iVar5 == 0x8a0200) {
LAB_1001132f:
      iVar5 = 0x100;
      goto LAB_10011334;
    }
    if (iVar5 != 0x8a0100) {
      iVar5 = 0;
      bVar1 = false;
      goto LAB_10011334;
    }
  }
  else if (iVar5 != 0x920100) {
    if (iVar5 != 0x920200) {
      iVar5 = 0;
      bVar1 = false;
      goto LAB_10011334;
    }
    goto LAB_1001132f;
  }
  iVar5 = 2;
LAB_10011334:
  if (bVar1) {
    hMem = GlobalAlloc(0x102,iVar5 * 4 + 8);
    puVar2 = GlobalLock(hMem);
    *(undefined2 **)(param_1 + 0x30) = puVar2;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0x300;
      *(short *)(*(int *)(param_1 + 0x30) + 2) = (short)iVar5;
      if (iVar5 != 0) {
        puVar3 = (undefined1 *)(*(int *)(param_1 + 0x30) + 7);
        do {
          *puVar3 = 0;
          iVar5 = iVar5 + -1;
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          puVar3 = puVar3 + 4;
        } while (iVar5 != 0);
      }
      pHVar4 = CreatePalette(*(LOGPALETTE **)(param_1 + 0x30));
      *(HPALETTE *)(param_1 + 0x34) = pHVar4;
    }
  }
  return;
}


// ---- FUN_100113a0 @ 100113a0

void __fastcall FUN_100113a0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(HGDIOBJ *)(param_1 + 0x34) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x30) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


// ---- FUN_100113f0 @ 100113f0

void __fastcall FUN_100113f0(int param_1)

{
  uint uVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = 0;
  uVar1 = *(uint *)(param_1 + 0x10) & 0xff00;
  if (uVar1 < 0x201) {
    if (uVar1 == 0x200) {
      iVar6 = 0x100;
    }
    else if (uVar1 == 0x100) {
      iVar6 = 2;
    }
    else {
      iVar6 = 0;
    }
  }
  else if (uVar1 == 0x600) {
    iVar6 = 3;
    uVar5 = 0;
  }
  else if (uVar1 == 0x700) {
    uVar5 = 3;
    iVar6 = 3;
  }
  else {
    iVar6 = 0;
  }
  hMem = GlobalAlloc(0x102,iVar6 * 4 + 0x2c);
  puVar2 = GlobalLock(hMem);
  *(undefined4 **)(param_1 + 0x38) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0xb4);
    *puVar2 = 0x28;
    *(uint *)(*(int *)(param_1 + 0x38) + 4) = *(uint *)(param_1 + 0x70) / (uVar1 >> 3);
    *(int *)(*(int *)(param_1 + 0x38) + 8) = -*(int *)(param_1 + 0x68);
    *(undefined2 *)(*(int *)(param_1 + 0x38) + 0xc) = 1;
    *(short *)(*(int *)(param_1 + 0x38) + 0xe) = (short)uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10) = uVar5;
    *(int *)(*(int *)(param_1 + 0x38) + 0x14) = *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x70);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x18) = 0x2e1b;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c) = 0x2e1b;
    *(int *)(*(int *)(param_1 + 0x38) + 0x20) = iVar6;
    *(int *)(*(int *)(param_1 + 0x38) + 0x24) = iVar6;
    if (iVar6 != 0) {
      iVar3 = iVar6;
      puVar4 = (undefined1 *)(*(int *)(param_1 + 0x38) + 0x2a);
      do {
        *puVar4 = 0;
        iVar3 = iVar3 + -1;
        puVar4[-1] = 0;
        puVar4[-2] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 4;
      } while (iVar3 != 0);
    }
    FUN_10020240(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x14),0,iVar6);
  }
  return;
}


// ---- FUN_10011510 @ 10011510

void __fastcall FUN_10011510(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x38) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x38));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x38));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


// ---- FUN_10011550 @ 10011550

undefined4 __thiscall FUN_10011550(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    uVar1 = FUN_100120c0(*(void **)((int)this + 0x24),param_1);
    return uVar1;
  }
  return 0;
}


// ---- FUN_100115a0 @ 100115a0

bool __thiscall FUN_100115a0(void *this,undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  HPALETTE pHVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  bVar3 = true;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  if (*(int *)((int)this + 0x30) != 0) {
    if (*(HGDIOBJ *)((int)this + 0x34) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0x34));
    }
    uVar7 = 0;
    puVar5 = param_1;
    puVar2 = *(undefined1 **)((int)this + 0x30);
    if (*(short *)(*(undefined1 **)((int)this + 0x30) + 2) != 0) {
      do {
        puVar2[7] = puVar5[7];
        uVar7 = uVar7 + 1;
        puVar2[4] = puVar5[4];
        puVar2[5] = puVar5[5];
        puVar2[6] = puVar5[6];
        puVar5 = puVar5 + 4;
        puVar2 = puVar2 + 4;
      } while (uVar7 < *(ushort *)(*(int *)((int)this + 0x30) + 2));
    }
    pHVar4 = CreatePalette(*(LOGPALETTE **)((int)this + 0x30));
    *(HPALETTE *)((int)this + 0x34) = pHVar4;
  }
  iVar1 = *(int *)((int)this + 0x38);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 3)) {
    if (param_2 == 0) {
      puVar5 = (undefined1 *)(iVar1 + 0x28);
    }
    else {
      puVar5 = (undefined1 *)(iVar1 + 0x28 + param_3 * 4);
    }
    uVar7 = 0;
    puVar2 = param_1;
    if (*(int *)(iVar1 + 0x20) != 0) {
      do {
        puVar5[2] = puVar2[4];
        puVar6 = puVar5 + 4;
        puVar5[1] = puVar2[5];
        *puVar5 = puVar2[6];
        puVar5[3] = puVar2[7];
        if ((param_2 == 4) && ((*(int *)(*(int *)((int)this + 0x38) + 0x20) - param_4) - uVar7 == 1)
           ) {
          puVar6 = (undefined1 *)(*(int *)((int)this + 0x38) + 0x28);
        }
        uVar7 = uVar7 + 1;
        puVar5 = puVar6;
        puVar2 = puVar2 + 4;
      } while (uVar7 < *(uint *)(*(int *)((int)this + 0x38) + 0x20));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    bVar3 = FUN_10012450(*(void **)((int)this + 0x2c),(int)param_1);
  }
  return bVar3;
}


// ---- FUN_10011890 @ 10011890

bool __thiscall
FUN_10011890(void *this,int param_1,LPRECT param_2,LPRECT param_3,int param_4,int param_5,
            RECT *param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = -0x7789ff7e;
  piVar6 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      piVar6 = *(int **)(param_1 + 0xcc);
    }
    else {
      piVar6 = *(int **)(*(int *)(param_1 + 0x20) + 0xcc);
      if (param_2 == (LPRECT)0x0) {
        param_2 = (LPRECT)(param_1 + 0x3c);
      }
      else {
        OffsetRect(param_2,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40));
      }
    }
  }
  if (*(int *)((int)this + 0x20) == 0) {
    iVar4 = *(int *)((int)this + 0xcc);
  }
  else {
    iVar4 = *(int *)(*(int *)((int)this + 0x20) + 0xcc);
    if (param_3 == (LPRECT)0x0) {
      param_3 = (LPRECT)((int)this + 0x3c);
    }
    else {
      OffsetRect(param_3,*(int *)((int)this + 0x3c),*(int *)((int)this + 0x40));
    }
  }
  if ((piVar6 != (int *)0x0) && (iVar4 != 0)) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      iVar3 = param_1;
    }
    iVar3 = FUN_10011c00(this,iVar3,param_5,param_6);
    if (param_4 == 0) {
      if ((iVar3 != 0) && (DAT_10030028 == 0)) {
        pcVar1 = *(code **)(*piVar6 + 0x14);
        for (iVar3 = 1;
            (iVar5 = (*pcVar1)(piVar6,param_2,iVar4,param_3,0x1000000,0), iVar5 == -0x7789fe3e &&
            (0 < iVar3)); iVar3 = iVar3 + -1) {
          bVar2 = FUN_10011f20(param_1);
          if (CONCAT31(extraout_var,bVar2) != 0) {
            FUN_10011ef0(param_1);
          }
          bVar2 = FUN_10011f20((int)this);
          if (CONCAT31(extraout_var_00,bVar2) != 0) {
            FUN_10011ef0((int)this);
          }
        }
      }
    }
    else if (*(int *)(param_4 + 0x10) == 1) {
      if ((iVar3 != 0) && (DAT_10030028 == 0)) {
        pcVar1 = *(code **)(*piVar6 + 0x14);
        for (iVar3 = 1;
            (iVar5 = (*pcVar1)(piVar6,param_2,iVar4,param_3,0x1010800,param_4 + 0x14),
            iVar5 == -0x7789fe3e && (0 < iVar3)); iVar3 = iVar3 + -1) {
          bVar2 = FUN_10011f20(param_1);
          if (CONCAT31(extraout_var_01,bVar2) != 0) {
            FUN_10011ef0(param_1);
          }
          bVar2 = FUN_10011f20((int)this);
          if (CONCAT31(extraout_var_02,bVar2) != 0) {
            FUN_10011ef0((int)this);
          }
        }
      }
    }
    else if (((*(int *)(param_4 + 0x10) == 2) && (iVar3 != 0)) && (DAT_10030028 == 0)) {
      pcVar1 = *(code **)(*piVar6 + 0x14);
      for (iVar3 = 1;
          (iVar5 = (*pcVar1)(piVar6,param_2,iVar4,param_3,0x1000000,0), iVar5 == -0x7789fe3e &&
          (0 < iVar3)); iVar3 = iVar3 + -1) {
        bVar2 = FUN_10011f20(param_1);
        if (CONCAT31(extraout_var_03,bVar2) != 0) {
          FUN_10011ef0(param_1);
        }
        bVar2 = FUN_10011f20((int)this);
        if (CONCAT31(extraout_var_04,bVar2) != 0) {
          FUN_10011ef0((int)this);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  return iVar5 == 0;
}


// ---- FUN_10011b40 @ 10011b40

void __thiscall
FUN_10011b40(void *this,int param_1,LPRECT param_2,LPRECT param_3,int param_4,int param_5,
            RECT *param_6)

{
  FUN_10011890(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ---- FUN_10011b70 @ 10011b70

void __thiscall FUN_10011b70(void *this,LPRECT param_1,LPRECT param_2,RECT *param_3)

{
  FUN_10011890(this,*(int *)(*(int *)((int)this + 0x18) + 0x18),param_1,param_2,0,1,param_3);
  return;
}


// ---- FUN_10011ba0 @ 10011ba0

void __thiscall FUN_10011ba0(void *this,LPRECT param_1,LPRECT param_2,int param_3,RECT *param_4)

{
  FUN_10011890(this,*(int *)(*(int *)((int)this + 0x18) + 0x18),param_1,param_2,param_3,1,param_4);
  return;
}


// ---- FUN_10011c00 @ 10011c00

int __thiscall FUN_10011c00(void *this,int param_1,int param_2,RECT *param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  DWORD local_4;
  
  iVar2 = 0;
  if ((param_2 == 0) || (*(void **)((int)this + 0x24) == (void *)0x0)) {
    iVar2 = 1;
  }
  else {
    if ((param_3 != (RECT *)0x0) && (*(RGNDATA **)((int)this + 0x58) != (RGNDATA *)0x0)) {
      local_4 = *(DWORD *)((int)this + 0x5c);
      bVar1 = FUN_10012110(*(void **)((int)this + 0x24),param_3,*(RGNDATA **)((int)this + 0x58),
                           &local_4,1);
      if ((CONCAT31(extraout_var,bVar1) == 0) ||
         ((local_4 == 0 || (*(int *)(*(int *)((int)this + 0x58) + 8) == 0)))) {
        iVar2 = 0;
        if ((local_4 != 0) && (*(int *)(*(int *)((int)this + 0x58) + 8) == 0)) {
          return 0;
        }
      }
      else {
        bVar1 = FUN_10012230(*(void **)((int)this + 0x28),*(int *)((int)this + 0x58));
        iVar2 = CONCAT31(extraout_var_00,bVar1);
      }
      if ((iVar2 != 0) && (DAT_10030028 == 0)) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x70))
                          (*(int **)(param_1 + 0xcc),
                           *(undefined4 *)(*(int *)((int)this + 0x28) + 0x1c));
        if (iVar2 == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x24) + 0x14) = 0;
          iVar2 = 1;
          *(int *)(*(int *)((int)this + 0x28) + 0x14) = param_1;
        }
        else {
          iVar2 = 0;
        }
      }
    }
    if ((iVar2 == 0) && (DAT_10030028 == 0)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x70))
                        (*(int **)(param_1 + 0xcc),
                         *(undefined4 *)(*(int *)((int)this + 0x24) + 0x1c));
      if (iVar2 == 0) {
        *(undefined4 *)(*(int *)((int)this + 0x28) + 0x14) = 0;
        *(int *)(*(int *)((int)this + 0x24) + 0x14) = param_1;
        return 1;
      }
      return 0;
    }
  }
  return iVar2;
}


// ---- FUN_10011dc0 @ 10011dc0

int __fastcall FUN_10011dc0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int local_4;
  
  do {
    iVar3 = param_1;
    local_4 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xe0));
    param_1 = *(int *)(iVar3 + 0x20);
  } while (*(int *)(iVar3 + 0x20) != 0);
  iVar4 = *(int *)(iVar3 + 0x50);
  if ((*(int *)(iVar3 + 0x50) == 0) && (iVar4 = local_4, DAT_10030028 == 0)) {
    for (iVar4 = 1;
        (iVar2 = (**(code **)(**(int **)(iVar3 + 0xcc) + 0x44))(*(int **)(iVar3 + 0xcc),&local_4),
        iVar2 == -0x7789fe3e && (0 < iVar4)); iVar4 = iVar4 + -1) {
      bVar1 = FUN_10011f20(iVar3);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        FUN_10011ef0(iVar3);
      }
    }
    iVar4 = local_4;
    if (iVar2 == 0) {
      *(int *)(iVar3 + 0x50) = local_4;
    }
  }
  local_4 = iVar4;
  if (local_4 != 0) {
    *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xe0));
  return local_4;
}


// ---- FUN_10011e70 @ 10011e70

undefined4 __thiscall FUN_10011e70(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  if (*(void **)((int)this + 0x20) == (void *)0x0) {
    if (DAT_10030028 == 0) {
      if (((*(int *)((int)this + 0x50) != 0) && (*(int *)((int)this + 0x54) == 1)) &&
         (iVar1 = (**(code **)(**(int **)((int)this + 0xcc) + 0x68))
                            (*(int **)((int)this + 0xcc),param_1), iVar1 == 0)) {
        *(undefined4 *)((int)this + 0x50) = 0;
        uVar2 = 1;
      }
      if (param_1 != 0) {
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      }
    }
  }
  else {
    FUN_10011e70(*(void **)((int)this + 0x20),param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  return uVar2;
}


// ---- FUN_10011ef0 @ 10011ef0

bool __fastcall FUN_10011ef0(int param_1)

{
  int iVar1;
  
  iVar1 = -0x7789ff7e;
  if (DAT_10030028 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x6c))(*(int **)(param_1 + 0xcc));
  }
  return iVar1 == 0;
}


// ---- FUN_10011f20 @ 10011f20

bool __fastcall FUN_10011f20(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (DAT_10030028 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x60))(*(int **)(param_1 + 0xcc));
    bVar2 = iVar1 == -0x7789fe3e;
  }
  return bVar2;
}


// ---- FUN_10011f50 @ 10011f50

undefined4 * __thiscall FUN_10011f50(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR_FUN_1002f3b8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0x38b;
    *(undefined4 *)((int)this + 0xc) = 2;
    return this;
  }
  piVar1 = (int *)((int)this + 0x1c);
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *piVar1 = 0;
  if (DAT_10030028 == 0) {
    piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x10) + 0x18) + 0x24);
    iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,0,piVar1,0);
    if ((iVar3 == 0) && (*piVar1 != 0)) {
      *(undefined4 *)((int)this + 4) = 1;
      return this;
    }
    *(undefined4 *)((int)this + 8) = 0x38b;
    *(undefined4 *)((int)this + 0xc) = 3;
  }
  return this;
}


// ---- FUN_10011ff0 @ 10011ff0

undefined4 * __thiscall FUN_10011ff0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_1002f3b8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar1 = (int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *piVar1 = 0;
  if (DAT_10030028 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))(*(int **)(param_1 + 0x24),0,piVar1,0);
    if ((iVar2 == 0) && (*piVar1 != 0)) {
      *(undefined4 *)((int)this + 4) = 1;
      return this;
    }
    *(undefined4 *)((int)this + 8) = 0x38b;
    *(undefined4 *)((int)this + 0xc) = 3;
  }
  return this;
}


// ---- FUN_10012070 @ 10012070

void __fastcall FUN_10012070(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1002f3b8;
  if (DAT_10030028 == 0) {
    if (param_1[5] != 0) {
      piVar1 = *(int **)(param_1[5] + 0xcc);
      (**(code **)(*piVar1 + 0x70))(piVar1,0);
    }
    (**(code **)(*(int *)param_1[7] + 0x20))((int *)param_1[7],0,0);
    piVar1 = (int *)param_1[7];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


// ---- FUN_100120c0 @ 100120c0

undefined4 __thiscall FUN_100120c0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  piVar1 = *(int **)((int)this + 0x1c);
  if ((piVar1 != (int *)0x0) && (DAT_10030028 == 0)) {
    iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,0,param_1);
    if (iVar2 == 0) {
      uVar3 = 1;
      *(undefined4 *)((int)this + 0x18) = param_1;
      goto LAB_100120fe;
    }
  }
  uVar3 = 0;
LAB_100120fe:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return uVar3;
}


// ---- FUN_10012110 @ 10012110

bool __thiscall FUN_10012110(void *this,RECT *param_1,RGNDATA *param_2,DWORD *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  HRGN hrgnDst;
  HRGN hrgnSrc2;
  DWORD DVar3;
  bool bVar4;
  
  if (param_4 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  }
  piVar1 = *(int **)((int)this + 0x1c);
  if ((piVar1 != (int *)0x0) && (DAT_10030028 == 0)) {
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,0,param_2,param_3);
    bVar4 = iVar2 == 0;
    if ((!bVar4) || (param_1 == (RECT *)0x0)) goto LAB_1001220e;
    if (param_2 != (RGNDATA *)0x0) {
      hrgnDst = ExtCreateRegion((XFORM *)0x0,*param_3,param_2);
      if (hrgnDst != (HRGN)0x0) {
        do {
          if (param_1[1].top == 0) break;
          if (param_1[1].left == 2) {
            hrgnSrc2 = (HRGN)param_1->left;
          }
          else {
            hrgnSrc2 = CreateRectRgnIndirect(param_1);
          }
          if (hrgnSrc2 != (HRGN)0x0) {
            CombineRgn(hrgnDst,hrgnDst,hrgnSrc2,param_1[1].top);
            if ((hrgnSrc2 != (HRGN)0x0) && (param_1[1].left != 2)) {
              DeleteObject(hrgnSrc2);
            }
          }
          param_1 = (RECT *)&param_1[1].right;
        } while (hrgnDst != (HRGN)0x0);
        if (hrgnDst != (HRGN)0x0) {
          DVar3 = GetRegionData(hrgnDst,0,(LPRGNDATA)0x0);
          *param_3 = DVar3;
          GetRegionData(hrgnDst,*param_3,param_2);
          DeleteObject(hrgnDst);
        }
      }
      goto LAB_1001220e;
    }
  }
  bVar4 = false;
LAB_1001220e:
  if (param_4 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  }
  return bVar4;
}


// ---- FUN_10012230 @ 10012230

bool __thiscall FUN_10012230(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  piVar1 = *(int **)((int)this + 0x1c);
  if ((piVar1 == (int *)0x0) || (DAT_10030028 != 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_1,0);
    bVar3 = iVar2 == 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return bVar3;
}


// ---- FUN_10012280 @ 10012280

undefined4 * __thiscall FUN_10012280(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint local_4;
  
  *(undefined ***)this = &PTR_FUN_1002f3bc;
  bVar3 = true;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0x38b;
    goto LAB_100123ab;
  }
  piVar1 = (int *)((int)this + 0x1c);
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *piVar1 = 0;
  iVar4 = *(int *)(*(int *)((int)this + 0x10) + 0x10);
  if (iVar4 < 0x8a0201) {
    if (iVar4 == 0x8a0200) {
LAB_1001232d:
      *(undefined4 *)((int)this + 0x18) = 0x100;
      local_4 = 4;
    }
    else {
      if (iVar4 == 0x8a0100) goto LAB_1001231f;
LAB_10012309:
      bVar3 = false;
      *(undefined4 *)((int)this + 8) = 0x388;
      *(undefined4 *)((int)this + 0xc) = 2;
    }
  }
  else {
    if (iVar4 != 0x920100) {
      if (iVar4 != 0x920200) goto LAB_10012309;
      goto LAB_1001232d;
    }
LAB_1001231f:
    *(undefined4 *)((int)this + 0x18) = 2;
    local_4 = 0x100;
  }
  if (!bVar3) {
    return this;
  }
  if (DAT_10030028 != 0) {
    return this;
  }
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x10) + 0x18) + 0x24);
  if (param_2 == 0) {
    iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2,local_4,0);
  }
  else {
    iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2,local_4 | 8,param_2 + 4,piVar1,0);
  }
  if ((iVar4 == 0) && (*piVar1 != 0)) {
    if ((*(int *)(*(int *)((int)this + 0x10) + 0x1c) == 0) &&
       (piVar2 = *(int **)(*(int *)((int)this + 0x10) + 0xcc),
       iVar4 = (**(code **)(*piVar2 + 0x7c))(piVar2,*piVar1), iVar4 == 0)) {
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x10);
    }
    *(undefined4 *)((int)this + 4) = 1;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0x388;
LAB_100123ab:
  *(undefined4 *)((int)this + 0xc) = 2;
  return this;
}


// ---- FUN_100123c0 @ 100123c0

void __fastcall FUN_100123c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1002f3bc;
  if (DAT_10030028 == 0) {
    if (param_1[5] != 0) {
      piVar1 = *(int **)(param_1[5] + 0xcc);
      (**(code **)(*piVar1 + 0x7c))(piVar1,0);
    }
    piVar1 = (int *)param_1[7];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


// ---- FUN_10012450 @ 10012450

bool __thiscall FUN_10012450(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  piVar1 = *(int **)((int)this + 0x1c);
  if (((piVar1 == (int *)0x0) || (param_1 == 0)) || (DAT_10030028 != 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,*(undefined2 *)(param_1 + 2),param_1 + 4);
    bVar3 = iVar2 == 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return bVar3;
}


// ---- FUN_100124b0 @ 100124b0

undefined4 * __fastcall FUN_100124b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_1002f3c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  param_1[4] = 2;
  puVar2 = param_1 + 5;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[5] = 100;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[1] = 1;
  param_1[0x1b] = 0;
  return param_1;
}


// ---- FUN_10012510 @ 10012510

void __fastcall FUN_10012510(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1002f3c0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  return;
}


// ---- FUN_10012530 @ 10012530

void __thiscall FUN_10012530(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 1) {
    if ((param_3 != 0xff) || (param_2 != 3)) goto LAB_10012572;
    *(undefined4 *)((int)this + 0x70) = param_4;
    *(undefined4 *)((int)this + 0x74) = param_4;
    *(undefined4 *)((int)this + 0x68) = param_4;
    *(undefined4 *)((int)this + 0x6c) = param_4;
  }
  else if ((param_1 != 3) && (param_1 != 2)) goto LAB_10012572;
  bVar1 = true;
LAB_10012572:
  if (bVar1) {
    *(int *)((int)this + 0x10) = param_1;
  }
  return;
}


// ---- FUN_100125a0 @ 100125a0

undefined4 * __thiscall FUN_100125a0(void *this,uint param_1)

{
  FUN_100111c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100125c0 @ 100125c0

undefined4 * __thiscall FUN_100125c0(void *this,uint param_1)

{
  FUN_10012070(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100125e0 @ 100125e0

undefined4 * __thiscall FUN_100125e0(void *this,uint param_1)

{
  FUN_100123c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10012600 @ 10012600

undefined4 * __thiscall FUN_10012600(void *this,uint param_1)

{
  FUN_10012510(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- MDVgaCommandDecoder @ 10012620

void MDVgaCommandDecoder(int *param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_4;
  
                    /* 0x12620  100  MDVgaCommandDecoder */
  EnterCriticalSection(DAT_10033234);
  if (DAT_10030050 == (int *)0x0) {
    uVar3 = 0x10000000;
    local_4 = 0;
    if (param_1[1] == 1) {
      uVar3 = *(uint *)(param_1[3] + 8);
    }
    this = operator_new(0x60);
    if (this == (void *)0x0) {
      DAT_10030050 = (int *)0x0;
    }
    else {
      DAT_10030050 = FUN_10012d20(this,&local_4,uVar3);
    }
    if (DAT_10030050 != (int *)0x0) {
      if (local_4 == 0) goto LAB_100126c3;
      if (DAT_10030050 != (int *)0x0) {
        (**(code **)*DAT_10030050)(1);
        DAT_10030050 = (int *)0x0;
      }
    }
    param_1[2] = -1;
  }
LAB_100126c3:
  if (DAT_10030050 == (int *)0x0) {
    LeaveCriticalSection(DAT_10033234);
    return;
  }
  iVar2 = 0;
  if (param_1[1] != 1) {
    iVar2 = *param_1;
  }
  if (param_1[1] != 0x387) {
    piVar1 = (int *)FUN_10003e20(DAT_10030050,iVar2,param_1[5]);
    LeaveCriticalSection(DAT_10033234);
    FUN_10001150((int *)&DAT_10030050,param_1,piVar1);
    return;
  }
  (**(code **)(*DAT_10030050 + 8))(*(undefined4 *)param_1[3],((undefined4 *)param_1[3])[2]);
  LeaveCriticalSection(DAT_10033234);
  return;
}


// ---- FUN_10012760 @ 10012760

undefined4 * __thiscall
FUN_10012760(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  HWND hWnd;
  HDC hdc;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_10003570(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1002f3d8;
  *(undefined4 *)((int)this + 0x78) = 0;
  hWnd = GetDesktopWindow();
  hdc = GetWindowDC(hWnd);
  iVar2 = GetDeviceCaps(hdc,8);
  *(int *)((int)this + 0x14) = iVar2;
  iVar2 = GetDeviceCaps(hdc,10);
  *(int *)((int)this + 0x18) = iVar2;
  ReleaseDC(hWnd,hdc);
  *(undefined4 *)((int)this + 0x24) = 8;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x1c) = 3;
  *(undefined4 *)((int)this + 0x20) = 3;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xffffd8f1;
  *(undefined4 *)((int)this + 0x60) = 0xffffd8f1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  puVar3 = operator_new(0x90);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  else {
    puVar3 = FUN_100124b0(puVar3);
    *(undefined4 **)((int)this + 0x78) = puVar3;
  }
  puVar3 = *(undefined4 **)((int)this + 0x78);
  if ((puVar3 != (undefined4 *)0x0) && (puVar3[1] == 0)) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  *(undefined4 *)((int)this + 0x88) = 0xffffd8f1;
  *(undefined4 *)((int)this + 0x8c) = 0xffffd8f3;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  piVar1 = (int *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  MbufAlloc1d(0x10000001,0x100,8,0x100,piVar1);
  if (*piVar1 != 0) {
    MgenLutRamp(*piVar1,0,0,0,0xff,0,0x406fe000);
    MgenLutRamp(*piVar1,0,0,0,9,0,0);
    MgenLutRamp(*piVar1,0xf6,0,0x406fe000,0xff,0,0x406fe000);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x40) = 1;
  *(undefined4 *)((int)this + 0x44) = 3;
  *(undefined4 *)((int)this + 0x48) = 0xff;
  *(undefined4 *)((int)this + 0x4c) = 8;
  return this;
}


// ---- FUN_10012900 @ 10012900

void __fastcall FUN_10012900(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1002f3d8;
  if (param_1[0x28] != 0) {
    MbufFree(param_1[0x28]);
  }
  FUN_10003630(param_1);
  return;
}


// ---- FUN_10012930 @ 10012930

int FUN_10012930(int param_1,int param_2,void *param_3,uint param_4,uint param_5,int param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_8 = MappGetError(0xd,0);
  if (param_1 == 0) {
    iVar5 = FUN_10013830(param_3,param_2);
    iVar1 = *(int *)(iVar5 + 0x14);
    iVar2 = *(int *)(iVar5 + 4);
    local_4 = *(int *)(iVar5 + 8);
    uVar3 = *(uint *)(iVar5 + 0x18);
    uVar4 = *(uint *)(iVar5 + 0xc);
  }
  else {
    iVar1 = MbufInquire(param_2,0x3ed,0);
    iVar2 = MbufInquire(param_2,0x3ea,0);
    local_4 = MbufInquire(param_2,0x3eb,0);
    uVar3 = MbufInquire(param_2,0x3ef,0);
    uVar4 = MbufInquire(param_2,0xff00,0);
  }
  iVar5 = MnatGetMilId(0xd,*(undefined4 *)((int)param_3 + 0x14),0x800000,
                       *(undefined4 *)((int)param_3 + 0x14));
  if ((((iVar1 != 0) && (iVar2 != 0)) && (local_4 != 0)) &&
     (((uVar3 != 0 && (uVar4 != 0)) && (iVar5 != 0)))) {
    uVar4 = (uVar4 & 0xfff7ffff | 0x100000) & ~param_4;
    if ((param_5 & 0x10) != 0) {
      uVar4 = uVar4 | 0x10;
    }
    if ((param_5 & 0x20) != 0) {
      uVar4 = uVar4 | 0x20;
    }
    if ((param_5 & 0x10000) != 0) {
      uVar4 = uVar4 & 0xfbffffff | 0x10000;
    }
    if ((param_5 & 0x4000000) != 0) {
      uVar4 = uVar4 & 0xfffeffff | 0x4000000;
    }
    if ((param_5 & 0x80000) != 0) {
      uVar4 = uVar4 & 0xffefffff | 0x80000;
    }
    if ((param_5 & 0x100000) != 0) {
      uVar4 = uVar4 & 0xfff7ffff | 0x100000;
    }
    if ((param_5 & 0x400000) != 0) {
      uVar4 = uVar4 & 0xff7fffff | 0x400000;
    }
    if ((param_5 & 0x800000) != 0) {
      uVar4 = uVar4 & 0xffbfffff | 0x800000;
    }
    if ((char)(param_5 >> 8) != '\0') {
      uVar4 = uVar4 ^ (param_5 ^ uVar4) & 0xff00;
    }
    MbufAllocColor(iVar5,iVar1,iVar2,local_4,uVar3 & 0xff,uVar4 | 4,&local_c);
  }
  if (local_8 == 0) {
    if (local_c != 0) goto LAB_10012b05;
    MfuncErrorReport(0,0,0,0,0,0);
  }
  if (local_c == 0) {
    return 0;
  }
LAB_10012b05:
  if (param_6 != 0) {
    MbufClear(local_c,(double)param_7);
  }
  if (local_c != 0) {
    iVar1 = MnatGetMilDriverId();
    iVar1 = FUN_10013830(param_3,iVar1);
    *(int *)(iVar1 + 0x70) = local_c;
  }
  return local_c;
}


// ---- FUN_10012b50 @ 10012b50

int FUN_10012b50(int param_1,int param_2,void *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  iVar1 = MappGetError(0xd,0);
  if (param_1 == 0) {
    iVar6 = FUN_10013830(param_3,param_2);
    iVar2 = *(int *)(iVar6 + 0x14);
    iVar3 = *(int *)(iVar6 + 4);
    iVar4 = *(int *)(iVar6 + 8);
    local_1c = *(int *)(iVar6 + 0x18);
    uVar5 = *(uint *)(iVar6 + 0xc);
  }
  else {
    iVar2 = MbufInquire(param_2,0x3ed,0);
    iVar3 = MbufInquire(param_2,0x3ea,0);
    iVar4 = MbufInquire(param_2,0x3eb,0);
    local_1c = MbufInquire(param_2,0x3ef,0);
    uVar5 = MbufInquire(param_2,0xff00,0);
  }
  iVar6 = MbufInquire(param_4,0x3ed,0);
  iVar7 = MbufInquire(param_4,0x3ea,0);
  iVar8 = MbufInquire(param_4,0x3eb,0);
  iVar9 = MbufInquire(param_4,0x3ef,0);
  uVar10 = MbufInquire(param_4,0xff00,0);
  if ((((((iVar2 != 0) && (iVar3 != 0)) && (iVar4 != 0)) && ((local_1c != 0 && (uVar5 != 0)))) &&
      ((iVar6 != 0 && ((iVar7 != 0 && (iVar8 != 0)))))) && ((iVar9 != 0 && (uVar10 != 0)))) {
    if ((((iVar2 == iVar6) && (iVar7 == iVar3)) && (iVar8 == iVar4)) &&
       ((iVar9 == local_1c && ((uVar10 & ~param_5) == (~param_5 & uVar5))))) {
      local_20 = 1;
    }
    else {
      local_20 = 0;
    }
  }
  if ((iVar1 == 0) && (local_20 == 0)) {
    MfuncErrorReport(0,0,0,0,0,0);
  }
  return local_20;
}


// ---- FUN_10012d20 @ 10012d20

undefined4 * __thiscall FUN_10012d20(void *this,int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_100036c0(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined ***)this = &PTR_LAB_1002f3e0;
  if (*param_1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0x10;
    iVar1 = FUN_100037c0((int)this);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      if ((param_2 & 0x80000) == 0) {
        puVar2 = operator_new(0x328);
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x38) = 0;
        }
        else {
          puVar2 = FUN_100105f0(puVar2);
          *(undefined4 **)((int)this + 0x38) = puVar2;
        }
        puVar2 = *(undefined4 **)((int)this + 0x38);
        if ((puVar2 != (undefined4 *)0x0) && (puVar2[1] == 0)) {
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          *(undefined4 *)((int)this + 0x38) = 0;
          puVar2 = DAT_10030024;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x38) = 0;
        puVar2 = DAT_10030024;
      }
      DAT_10030024 = puVar2;
      InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x40));
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x58) = 0;
    }
  }
  return this;
}


// ---- FUN_10012de0 @ 10012de0

void __fastcall FUN_10012de0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1002f3e0;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
  }
  FUN_10003700(param_1);
  return;
}


// ---- FUN_10013480 @ 10013480

void __thiscall FUN_10013480(void *this,int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  HANDLE pvVar2;
  
  if (*(int *)((int)this + 0x38) == 0) {
    (**(code **)(*param_2 + 4))(0x388,1,0,0);
    return;
  }
  if ((param_1 != -9999) && (param_1 != -0x270d)) {
    (**(code **)(*param_2 + 4))(0xe0,2,0,0);
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x40);
  EnterCriticalSection(lpCriticalSection);
  if (param_1 == -9999) {
    if (*(int *)((int)this + 0x3c) == 0) {
      EnterCriticalSection(lpCriticalSection);
      iVar1 = FUN_10011dc0(*(int *)(*(int *)((int)this + 0x38) + 0x18));
      *(int *)((int)this + 0x3c) = iVar1;
      pvVar2 = GetCurrentThread();
      *(HANDLE *)((int)this + 0x58) = pvVar2;
    }
  }
  else if ((param_1 == -0x270d) && (*(int *)((int)this + 0x3c) != 0)) {
    FUN_10011e70(*(void **)(*(int *)((int)this + 0x38) + 0x18),*(int *)((int)this + 0x3c));
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}


// ---- FUN_10013550 @ 10013550

undefined4 * __thiscall FUN_10013550(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_1002f310;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined ***)this = &PTR_FUN_1002f6d0;
  return this;
}


// ---- FUN_100135b0 @ 100135b0

void __fastcall FUN_100135b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1002f6d0;
  FUN_10004080(param_1);
  return;
}


// ---- FUN_100135cb @ 100135cb

undefined4 __thiscall
FUN_100135cb(void *this,undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
            char *param_5,char *param_6)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  bool in_ZF;
  undefined **ppuVar8;
  
  if (in_ZF) {
    uVar2 = 0xffffffff;
    pcVar6 = (char *)&DAT_10030054;
    do {
      pcVar7 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar7 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      param_3 = param_3 + 1;
    }
  }
  else if (in_EAX == 1) {
    *(undefined4 *)param_3 = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)param_4 = *(undefined4 *)((int)this + 0x24);
    *(undefined4 *)param_5 = *(undefined4 *)((int)this + 0x28);
    *(undefined4 *)param_6 = *(undefined4 *)((int)this + 0x2c);
  }
  else if (in_EAX == 2) {
    iVar4 = *(int *)((int)this + 0x1c);
    if ((iVar4 < 200) || (399 < iVar4)) {
      if ((iVar4 < 900) || (999 < iVar4)) {
        ppuVar8 = &PTR_s_Null__10030058;
        iVar4 = 0;
      }
      else {
        ppuVar8 = &PTR_s_Null__100314a8;
        iVar4 = iVar4 + -900;
      }
    }
    else {
      ppuVar8 = &PTR_s_Null__10030058;
      iVar4 = iVar4 + -200;
    }
    pcVar6 = ppuVar8[iVar4 * 4];
    uVar2 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 0x7f) {
      uVar2 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      sVar5 = ~uVar2 - 1;
    }
    else {
      sVar5 = 0x7f;
    }
    strncpy(param_3,pcVar6,sVar5);
    param_3[sVar5] = '\0';
    if (*(int *)((int)this + 0x24) == 0) {
      *param_4 = '\0';
    }
    else {
      pcVar6 = ppuVar8[*(int *)((int)this + 0x24) + iVar4 * 4];
      uVar2 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (~uVar2 - 1 < 0x7f) {
        uVar2 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        sVar5 = ~uVar2 - 1;
      }
      else {
        sVar5 = 0x7f;
      }
      strncpy(param_4,pcVar6,sVar5);
      param_4[sVar5] = '\0';
    }
    if (*(int *)((int)this + 0x28) == 0) {
      *param_5 = '\0';
    }
    else {
      pcVar6 = ppuVar8[*(int *)((int)this + 0x28) + iVar4 * 4];
      uVar2 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (~uVar2 - 1 < 0x7f) {
        uVar2 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        sVar5 = ~uVar2 - 1;
      }
      else {
        sVar5 = 0x7f;
      }
      strncpy(param_5,pcVar6,sVar5);
      param_5[sVar5] = '\0';
    }
    if (*(int *)((int)this + 0x2c) == 0) {
      *param_6 = '\0';
    }
    else {
      pcVar6 = ppuVar8[*(int *)((int)this + 0x2c) + iVar4 * 4];
      uVar2 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (~uVar2 - 1 < 0x7f) {
        uVar2 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        sVar5 = ~uVar2 - 1;
      }
      else {
        sVar5 = 0x7f;
      }
      strncpy(param_6,pcVar6,sVar5);
      param_6[sVar5] = '\0';
    }
  }
  return 1;
}


// ---- FUN_10013810 @ 10013810

undefined4 * __thiscall FUN_10013810(void *this,uint param_1)

{
  FUN_100135b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10013830 @ 10013830

int __thiscall FUN_10013830(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000feb0(this,param_1);
  if (((iVar1 != 0) && (iVar1 != -1)) && (*(int *)(iVar1 + 0x70) == 0)) {
    uVar2 = MnatGetMilId(0xd,*(undefined4 *)((int)this + 0x14),4,param_1);
    *(undefined4 *)(iVar1 + 0x70) = uVar2;
  }
  return iVar1;
}


// ---- FUN_10013870 @ 10013870

int __thiscall FUN_10013870(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100100b0(this,param_1);
  if (((iVar1 != 0) && (iVar1 != -1)) && (*(int *)(iVar1 + 0x94) == 0)) {
    uVar2 = MnatGetMilId(0xd,*(undefined4 *)((int)this + 0x14),0x200000,param_1);
    *(undefined4 *)(iVar1 + 0x94) = uVar2;
  }
  return iVar1;
}


// ---- FUN_100138c0 @ 100138c0

undefined4 * __thiscall
FUN_100138c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  HDC hdc;
  int iVar1;
  undefined4 uVar2;
  uint local_30;
  CHAR local_2c [44];
  
  FUN_1000fab0(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1002f6e4;
  iVar1 = *(int *)(param_4 + 0x38);
  *(undefined4 *)((int)this + 0x50) = 0xffffd8f3;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x50) = 0xffffd8f1;
  }
  *(undefined4 *)((int)this + 0x54) = 0xffffd8f1;
  hdc = GetDC((HWND)0x0);
  if (*(int *)(param_4 + 0x38) == 0) {
    iVar1 = GetDeviceCaps(hdc,0xc);
  }
  else {
    iVar1 = FUN_10010880(*(int *)(param_4 + 0x38));
  }
  local_2c[0] = '(';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  local_2c[4] = 'd';
  local_2c[5] = '\0';
  local_2c[6] = '\0';
  local_2c[7] = '\0';
  local_2c[8] = -100;
  local_2c[9] = -1;
  local_2c[10] = -1;
  local_2c[0xb] = -1;
  local_2c[0x10] = '\0';
  local_2c[0x11] = '\0';
  local_2c[0x12] = '\0';
  local_2c[0x13] = '\0';
  local_2c[0x14] = '\x10';
  local_2c[0x15] = '\'';
  local_2c[0x16] = '\0';
  local_2c[0x17] = '\0';
  local_2c[0x20] = '\0';
  local_2c[0x21] = '\0';
  local_2c[0x22] = '\0';
  local_2c[0x23] = '\0';
  local_2c[0x24] = '\0';
  local_2c[0x25] = '\0';
  local_2c[0x26] = '\0';
  local_2c[0x27] = '\0';
  *(int *)((int)this + 0x60) = iVar1;
  local_2c[0x18] = '\x1b';
  local_2c[0x19] = '.';
  local_2c[0x1a] = '\0';
  local_2c[0x1b] = '\0';
  local_2c[0x1c] = '\x1b';
  local_2c[0x1d] = '.';
  local_2c[0x1e] = '\0';
  local_2c[0x1f] = '\0';
  local_2c[0xc] = '\x01';
  local_2c[0xd] = '\0';
  local_2c[0xe] = '\b';
  local_2c[0xf] = '\0';
  iVar1 = Escape(hdc,0xc01,0x2c,local_2c,&local_30);
  ReleaseDC((HWND)0x0,hdc);
  if (((short)iVar1 == 0) || ((local_30 & 8) == 0)) {
    *(undefined4 *)((int)this + 0x58) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x5c) = 0xffffd8f1;
  }
  else {
    *(undefined4 *)((int)this + 0x58) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x5c) = 0xffffd8f3;
  }
  *(undefined4 *)((int)this + 100) = 0xffffd8f3;
  *(undefined4 *)((int)this + 0x18) = 0x800;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x40;
  uVar2 = FUN_1000fb70((int)this);
  *param_3 = uVar2;
  return this;
}


// ---- FUN_10013a10 @ 10013a10

void __fastcall FUN_10013a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1002f6e4;
  FUN_1000fb30(param_1);
  return;
}


// ---- FUN_10013a20 @ 10013a20

undefined4 __thiscall FUN_10013a20(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0x3f1) {
    *param_2 = *(int *)((int)this + 8);
    return 1;
  }
  if (param_1 == 0x3f4) {
    *param_2 = *(int *)((int)this + 0xc);
    return 1;
  }
  if (param_1 == 0x7e5) {
    *param_2 = 0x1000000;
    return 1;
  }
  if (param_1 == 0x7e6) {
    *param_2 = 0x1000;
    return 1;
  }
  if (param_1 == 0x7e7) {
    *param_2 = 0x1000;
    return 1;
  }
  if (param_1 == 0x7d2) {
    *param_2 = 0x40;
    return 1;
  }
  if (param_1 == 0x7d4) {
    *param_2 = 0;
    return 1;
  }
  if (param_1 == 0x7d6) {
    *param_2 = 0;
    return 1;
  }
  if (param_1 == 2000) {
    *param_2 = 0xd;
    return 1;
  }
  if (param_1 == 0x7d8) {
    *param_2 = 0x10000001;
    return 1;
  }
  if (param_1 == 0x7d9) {
    *param_2 = 9;
    return 1;
  }
  if (param_1 == 0x802) {
    *param_2 = 0;
    return 1;
  }
  if (param_1 == 0x805) {
    *param_2 = (-(uint)(*(int *)((int)this + 0x50) == -0x270d) & 0xfffffffe) - 0x270d;
    return 1;
  }
  if (param_1 == 0x806) {
    *param_2 = *(int *)((int)this + 0x54);
    return 1;
  }
  if (param_1 == 0x807) {
    *param_2 = *(int *)((int)this + 0x58);
    return 1;
  }
  if ((param_1 != 0x808) && (param_1 != 0x3fe)) {
    if (param_1 == 0x809) {
      iVar1 = *(int *)(*(int *)((int)this + 4) + 0x38);
      if (iVar1 == 0) {
        *param_2 = 0;
        return 1;
      }
      iVar1 = FUN_10010830(iVar1);
      *param_2 = iVar1;
      return 1;
    }
    if (param_1 == 0x80a) {
      iVar1 = *(int *)(*(int *)((int)this + 4) + 0x38);
      if (iVar1 == 0) {
        *param_2 = 0;
        return 1;
      }
      iVar1 = FUN_10010840(iVar1);
      *param_2 = iVar1;
      return 1;
    }
    if (param_1 == 0x80b) {
      iVar1 = *(int *)(*(int *)((int)this + 4) + 0x38);
      if (iVar1 == 0) {
        *param_2 = 0;
        return 1;
      }
      iVar1 = FUN_10010850(iVar1);
      *param_2 = iVar1;
      return 1;
    }
    if (param_1 == 0x80c) {
      iVar1 = *(int *)(*(int *)((int)this + 4) + 0x38);
      if (iVar1 == 0) {
        *param_2 = 0;
        return 1;
      }
      iVar1 = FUN_10010860(iVar1);
      *param_2 = iVar1;
      return 1;
    }
    if (param_1 == 0x80d) {
      iVar1 = *(int *)(*(int *)((int)this + 4) + 0x38);
      if (iVar1 == 0) {
        *param_2 = 0;
        return 1;
      }
      iVar1 = FUN_10010870(iVar1);
      *param_2 = iVar1;
      return 1;
    }
    if (param_1 == 0x80e) {
      *param_2 = 0x50;
      return 1;
    }
    if (param_1 == 0x80f) {
      piVar2 = &DAT_10031fe8;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *piVar2;
        piVar2 = piVar2 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
    if (param_1 == 0x810) {
      piVar2 = &DAT_10031fe8;
      iVar1 = *param_2;
      *param_2 = -9999;
      do {
        if (*piVar2 == iVar1) {
          *param_2 = -0x270d;
          return 1;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 < s_DISPLAY_10032038);
      return 1;
    }
    if (param_1 == 0xc1f) {
      *param_2 = *(int *)((int)this + 0x68);
      return 1;
    }
    if (param_1 == 0xc20) {
      *param_2 = *(int *)((int)this + 0x6c);
      return 1;
    }
    if (param_1 == 0xc21) {
      *param_2 = *(int *)((int)this + 0x70);
      return 1;
    }
    if (param_1 == 0xc22) {
      *param_2 = *(int *)((int)this + 0x74);
      return 1;
    }
    if (param_1 == 0x811) {
      if (*(int *)(*(int *)((int)this + 4) + 0x38) != 0) {
        *param_2 = -0x270d;
        return 1;
      }
      *param_2 = -9999;
      return 1;
    }
    if (param_1 == 0xc5f) {
      *param_2 = *(int *)((int)this + 0x60);
      return 1;
    }
    if (param_1 == 0x81e) {
      *param_2 = *(int *)((int)this + 100);
      return 1;
    }
    (**(code **)(*param_3 + 4))(0xdc,0,0,0);
    return 1;
  }
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x38);
  if (iVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  *param_2 = iVar1;
  return 1;
}


// ---- FUN_10013eb0 @ 10013eb0

undefined4 __thiscall FUN_10013eb0(void *this,int param_1,int param_2,int *param_3)

{
  if (param_1 == 0x805) {
    if (param_2 == -0x270d) {
      *(undefined4 *)((int)this + 0x50) = 0xffffd8f1;
      return 1;
    }
    if (param_2 != -9999) {
      (**(code **)(*param_3 + 4))(0xe0,2,0,0);
      return 1;
    }
    if (*(int *)(*(int *)((int)this + 4) + 0x38) != 0) {
      *(undefined4 *)((int)this + 0x50) = 0xffffd8f3;
      return 1;
    }
    (**(code **)(*param_3 + 4))(0x388,1,0,0);
    return 1;
  }
  if (param_1 == 0x806) {
    if ((param_2 != -0x270d) && (param_2 != -9999)) {
      (**(code **)(*param_3 + 4))(0xe0,2,0,0);
      return 1;
    }
    *(int *)((int)this + 0x54) = param_2;
    return 1;
  }
  if (param_1 == 0x807) {
    if ((param_2 != -0x270d) && (param_2 != -9999)) {
      (**(code **)(*param_3 + 4))(0xe0,2,0,0);
      return 1;
    }
    if ((*(int *)((int)this + 0x5c) == -9999) && (param_2 == -9999)) {
      (**(code **)(*param_3 + 4))(0x38f,1,0,0);
      return 1;
    }
    *(int *)((int)this + 0x58) = param_2;
    return 1;
  }
  if (param_1 == 0xc1f) {
    *(int *)((int)this + 0x68) = param_2;
    return 1;
  }
  if (param_1 == 0xc20) {
    *(int *)((int)this + 0x6c) = param_2;
    return 1;
  }
  if (param_1 == 0xc21) {
    *(int *)((int)this + 0x70) = param_2;
    return 1;
  }
  if (param_1 == 0xc22) {
    *(int *)((int)this + 0x74) = param_2;
    return 1;
  }
  if (param_1 != 0x81e) {
    (**(code **)(*param_3 + 4))(0xe0,3,0,0);
    return 1;
  }
  if ((param_2 != -0x270d) && (param_2 != -9999)) {
    (**(code **)(*param_3 + 4))(0xe0,2,0,0);
    return 1;
  }
  *(int *)((int)this + 100) = param_2;
  return 1;
}


// ---- FUN_10014090 @ 10014090

void __thiscall
FUN_10014090(void *this,uint param_1,int param_2,int param_3,uint param_4,int *param_5,
            undefined4 *param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0x10000000;
  uVar3 = 0;
  *param_5 = 0;
  if (param_3 < -0x7ffff7ff) {
    if (param_3 == -0x7ffff800) {
      iVar1 = 3;
      uVar3 = 0x80000008;
    }
    else if (param_3 == -0x7ffffe00) {
      iVar1 = 1;
      uVar3 = 0x80000008;
    }
  }
  else {
    if (param_3 == 0x200) {
      iVar1 = 1;
    }
    else {
      if (param_3 != 0x800) goto LAB_100140f2;
      iVar1 = 3;
    }
    uVar3 = 8;
  }
LAB_100140f2:
  if (param_6 != (undefined4 *)0x0) {
    uVar2 = 0x90000000;
  }
  FUN_10014130(this,iVar1,param_1,param_2,uVar3,param_4,param_5,uVar2,0,param_6,param_7);
  return;
}


// ---- FUN_10014130 @ 10014130

undefined4 __thiscall
FUN_10014130(void *this,int param_1,uint param_2,int param_3,uint param_4,uint param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 *param_9,int *param_10)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  HBITMAP local_4;
  
  puVar6 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_1c = 0;
  local_28 = param_9;
  local_18 = 0;
  local_4 = (HBITMAP)0x0;
  local_20 = 0;
  local_c = 0;
  *param_6 = 0;
  if (param_9 != (undefined4 *)0x0) {
    if (param_1 == 1) {
    }
    else {
      local_28 = (undefined4 *)*param_9;
    }
  }
  uVar5 = param_5 & 0xfffff00;
  if (((param_5 & 4) == 0) || ((param_5 & 0x8000088) != 0)) {
LAB_100146d4:
    uVar8 = 0;
    iVar7 = 0xde;
  }
  else {
    if ((param_5 & 0x2200000) == 0) {
      uVar5 = uVar5 | 0x2000000;
    }
    if ((param_5 & 0x60000) == 0) {
      uVar5 = uVar5 | 0x20000;
    }
    if ((param_5 & 0x180000) == 0) {
      uVar5 = uVar5 | 0x100000;
    }
    if ((char)((param_5 & 0x7fffffff) >> 8) == '\0') {
      if (param_1 == 1) {
        if ((param_4 == 8) || (param_4 == 0x80000008)) {
          uVar5 = uVar5 | 0x200;
        }
      }
      else if ((param_1 == 3) && ((param_4 == 8 || (param_4 == 0x80000008)))) {
        uVar5 = uVar5 | 0x1000;
      }
    }
    uVar2 = uVar5 & 0xff00;
    if (uVar2 < 0x601) {
      if (uVar2 == 0x600) {
        local_2c = 0xf;
        goto LAB_10014287;
      }
      if (uVar2 != 0x200) goto LAB_100146d4;
      local_2c = 8;
      local_24 = 1;
    }
    else {
      if (uVar2 == 0x700) {
        local_2c = 0x10;
      }
      else if (uVar2 == 0x1000) {
        local_2c = 0x18;
      }
      else {
        if (uVar2 != 0x1100) goto LAB_100146d4;
        local_2c = 0x20;
      }
LAB_10014287:
      local_24 = 3;
    }
    if ((param_5 & 0xc00000) == 0) {
      if (((*(int *)((int)this + 0x50) == -0x270d) &&
          (iVar7 = FUN_10010890(*(void **)(*(int *)((int)this + 4) + 0x38),local_2c,uVar5,0),
          iVar7 != 0)) && ((param_5 & 0x10000) == 0)) {
        uVar5 = uVar5 | 0x800000;
      }
      else {
        uVar5 = uVar5 | 0x400000;
      }
    }
    if ((param_5 & 0x4010000) == 0) {
      if (((uVar5 & 0x400000) == 0) ||
         ((*(int *)((int)this + 0x58) != -0x270d &&
          (((8 < *(int *)((int)this + 0x60) || (local_2c < 9)) ||
           (*(int *)((int)this + 100) != -0x270d)))))) {
        uVar5 = uVar5 | 0x4000000;
      }
      else {
        uVar5 = uVar5 | 0x10000;
      }
    }
    iVar7 = 0;
    if (uVar5 != DAT_10031fe8) {
      puVar4 = &DAT_10031fe8;
      do {
        if ((undefined4 *)0x10032037 < puVar4) break;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + 1;
      } while (*puVar1 != uVar5);
    }
    if ((iVar7 == 0x14) ||
       ((((((uVar5 & 0x400000) != 0 && (*(int *)((int)this + 0x60) < 9)) &&
          ((8 < local_2c && (*(int *)((int)this + 100) == -0x270d)))) ||
         (((uVar5 & 0x400000) != 0 && (*(int *)((int)this + 0x5c) == -9999)))) &&
        (((uVar5 & 0x4000000) != 0 && ((param_5 & 0x20) != 0)))))) goto LAB_100146d4;
    if (((uVar5 & 0x800000) == 0) || (param_9 == (undefined4 *)0x0)) {
      local_8 = param_3;
      if ((uVar5 & 0x800000) != 0) {
        pvVar3 = operator_new(0xf8);
        if (pvVar3 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_10010c20(pvVar3,*(undefined4 *)(*(int *)((int)this + 4) + 0x38),
                                (-(uint)((uVar5 & 0x80000) == 0) & 0xffffc800) + 0x4040,param_2,
                                param_3,local_2c,uVar5);
        }
        if ((puVar6 == (undefined4 *)0x0) || (puVar6[1] == 0)) {
          if (*(int *)((int)this + 0x54) == -9999) {
            if ((puVar6 == (undefined4 *)0x0) || (iVar7 = puVar6[2], iVar7 == 0)) {
              uVar8 = 0;
              iVar7 = 0xdf;
            }
            else {
              uVar8 = puVar6[3];
            }
            goto LAB_100146df;
          }
          if (puVar6 != (undefined4 *)0x0) {
            (**(code **)*puVar6)(1);
          }
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_28 = (undefined4 *)puVar6[0x21];
          local_1c = puVar6[0x1c];
          uVar5 = puVar6[4];
        }
      }
      if (puVar6 == (undefined4 *)0x0) {
        if ((uVar5 & 0x4000000) != 0) {
          local_8 = -param_3;
        }
        local_4 = FUN_10020000((uint)(param_9 == (undefined4 *)0x0),param_2,local_8,local_2c,
                               &local_18,&local_28,&local_1c,0);
        if (local_18 == 0) {
          uVar8 = 0;
          iVar7 = 0xdf;
          goto LAB_100146df;
        }
        uVar5 = uVar5 & 0xff7fffff | 0x400000;
      }
      puVar4 = (undefined4 *)0x0;
      pvVar3 = operator_new(0x88);
      if (pvVar3 != (void *)0x0) {
        puVar4 = FUN_100103f0(pvVar3,&local_10);
      }
      if (puVar4 != (undefined4 *)0x0) {
        if (local_10 == 0) {
          local_14 = FUN_1000fe20(this,(int)puVar4);
          if (local_14 == 0) {
            (**(code **)(*param_10 + 4))(0xcb,0,0,0);
            if (puVar4 != (undefined4 *)0x0) {
              (**(code **)*puVar4)(1);
            }
          }
          else {
            puVar4[0x11] = local_28;
            puVar4[0x12] = param_9;
            puVar4[0x16] = local_18;
            puVar4[0x15] = local_4;
            puVar4[0x1b] = puVar6;
            puVar4[5] = param_1;
            puVar4[6] = param_4 & 0xff;
            puVar4[0x19] = local_24;
            puVar4[0x1a] = local_2c;
            puVar4[7] = 0;
            if ((param_4 & 0x80000000) == 0) {
              puVar4[7] = 1;
            }
            puVar4[1] = param_2;
            puVar4[2] = param_3;
            puVar4[3] = uVar5;
            puVar4[4] = param_5 & 0x7fffffff;
            puVar4[8] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4[0x13] = local_1c;
            puVar4[0xc] = local_14;
            puVar4[0xd] = 0;
            if (((uVar5 & 0x20000) != 0) && ((uVar5 & 0x4000000) != 0)) {
              iVar7 = MappGetError(0xd,0);
              MnatBufCreate2d(0x10000001,local_1c,param_3,param_4,0x14,puVar4[0x11],&local_20);
              puVar4[0x1e] = local_20;
              if (local_20 != 0) {
                MbufChild2d(local_20,0,0,
                            ((int)(puVar4[6] + ((int)puVar4[6] >> 0x1f & 7U)) >> 3) * puVar4[1],
                            puVar4[2],&local_c);
                puVar4[0x1d] = local_c;
              }
              if ((iVar7 == 0) && ((local_20 == 0 || (local_c == 0)))) {
                MfuncErrorReport(0,0,0,0,0,0);
              }
            }
          }
        }
        else {
          (**(code **)(*param_10 + 4))(local_10,0,0,0);
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)*puVar4)(1);
          }
        }
        goto LAB_100146e8;
      }
      uVar8 = 0;
      iVar7 = 0xca;
    }
    else {
      uVar8 = 1;
      iVar7 = 0x388;
    }
  }
LAB_100146df:
  (**(code **)(*param_10 + 4))(iVar7,uVar8,0,0);
LAB_100146e8:
  if (local_14 == 0) {
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
    if (local_18 != 0) {
      FUN_10020210((uint)(param_9 == (undefined4 *)0x0),local_4);
    }
  }
  *param_6 = local_14;
  return 1;
}


// ---- FUN_10014760 @ 10014760

undefined4 __thiscall
FUN_10014760(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int local_c [2];
  HBITMAP local_4;
  
  puVar8 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_c[1] = 0;
  local_18 = (void *)0x0;
  local_1c = 0;
  local_4 = (HBITMAP)0x0;
  local_c[0] = 0;
  iVar1 = FUN_10013830(this,param_1);
  FUN_10013830(this,*(int *)(iVar1 + 0x30));
  if ((*(uint *)(iVar1 + 0xc) & 0x800000) == 0) {
    local_4 = FUN_10020000(0,*(uint *)(iVar1 + 4),param_3,*(int *)(iVar1 + 0x68),&local_1c,&local_18
                           ,(uint *)(local_c + 1),0);
    if (local_1c == 0) {
      (**(code **)(*param_7 + 4))(0xdf,0,0,0);
      goto LAB_10014aa8;
    }
LAB_100147f3:
    pvVar2 = operator_new(0x88);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_100103f0(pvVar2,&local_10);
    }
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(*param_7 + 4))(0xca,0,0,0);
    }
    else if (local_10 == 0) {
      local_14 = FUN_1000fe20(this,(int)puVar3);
      if (local_14 == 0) {
        (**(code **)(*param_7 + 4))(0xcb,0,0,0);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
      else {
        puVar3[5] = *(undefined4 *)(iVar1 + 0x14);
        puVar3[6] = *(undefined4 *)(iVar1 + 0x18);
        puVar3[0x19] = *(undefined4 *)(iVar1 + 100);
        puVar3[0x1a] = *(undefined4 *)(iVar1 + 0x68);
        puVar3[7] = *(undefined4 *)(iVar1 + 0x1c);
        puVar3[1] = param_2;
        puVar3[2] = param_3;
        puVar3[3] = *(undefined4 *)(iVar1 + 0xc);
        puVar3[4] = *(undefined4 *)(iVar1 + 0x10);
        puVar3[8] = *(int *)(iVar1 + 0x20) + param_4;
        puVar3[9] = *(int *)(iVar1 + 0x24) + param_5;
        puVar3[10] = *(undefined4 *)(iVar1 + 0x28);
        puVar3[0x14] = *(undefined4 *)(iVar1 + 0x50);
        puVar3[0x12] = 0;
        if (puVar8 == (undefined4 *)0x0) {
          uVar6 = *(uint *)(iVar1 + 0x68);
          uVar7 = (int)uVar6 >> 0x1f;
          iVar4 = ((uVar6 ^ uVar7) - uVar7 & 7 ^ uVar7) - uVar7;
          if (iVar4 != 0) {
            uVar6 = (uVar6 - iVar4) + 8;
          }
          if ((*(uint *)(iVar1 + 0xc) & 0x4000000) == 0) {
            iVar4 = ((*(int *)(iVar1 + 8) - param_5) - param_3) * *(int *)(iVar1 + 0x4c) +
                    ((int)(uVar6 * param_4 + ((int)(uVar6 * param_4) >> 0x1f & 7U)) >> 3) +
                    *(int *)(iVar1 + 0x44);
          }
          else {
            iVar4 = *(int *)(iVar1 + 0x4c) * param_5 +
                    ((int)(uVar6 * param_4 + ((int)(uVar6 * param_4) >> 0x1f & 7U)) >> 3) +
                    *(int *)(iVar1 + 0x44);
          }
          puVar3[0x11] = iVar4;
        }
        else {
          puVar3[0x11] = local_18;
        }
        puVar3[0x16] = local_1c;
        puVar3[0x15] = *(undefined4 *)(iVar1 + 0x54);
        puVar3[0x1b] = puVar8;
        puVar3[0x13] = *(undefined4 *)(iVar1 + 0x4c);
        puVar3[0xc] = *(undefined4 *)(iVar1 + 0x30);
        puVar3[0xd] = param_1;
        if ((((*(uint *)(iVar1 + 0xc) & 0x20000) != 0) &&
            ((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0)) && (*(int *)(iVar1 + 0x74) != 0)) {
          iVar4 = MappGetError(0xd,0);
          iVar5 = (int)(puVar3[6] + ((int)puVar3[6] >> 0x1f & 7U)) >> 3;
          MbufChild2d(*(undefined4 *)(iVar1 + 0x74),param_4 * iVar5,param_5,puVar3[1] * iVar5,
                      puVar3[2],local_c);
          puVar3[0x1d] = local_c[0];
          if ((iVar4 == 0) && (local_c[0] == 0)) {
            MfuncErrorReport(0,0,0,0,0,0);
          }
        }
      }
    }
    else {
      (**(code **)(*param_7 + 4))(local_10,0,0,0);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  else {
    pvVar2 = operator_new(0xf8);
    if (pvVar2 != (void *)0x0) {
      puVar8 = FUN_10010f60(pvVar2,*(int *)(iVar1 + 0x6c),param_4,param_5,param_2,param_3);
    }
    if (puVar8 != (undefined4 *)0x0) {
      if (puVar8[1] != 0) {
        local_18 = (void *)puVar8[0x21];
        goto LAB_100147f3;
      }
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[2] != 0)) {
        (**(code **)(*param_7 + 4))(puVar8[2],puVar8[3],0,0);
        goto LAB_10014aa8;
      }
    }
    (**(code **)(*param_7 + 4))(0xdf,0,0,0);
  }
LAB_10014aa8:
  if (local_14 == 0) {
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    if (local_1c != 0) {
      FUN_10020210(0,local_4);
    }
  }
  *param_6 = local_14;
  return 1;
}


// ---- FUN_10014b10 @ 10014b10

undefined4 __thiscall
FUN_10014b10(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7,int *param_8)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10 [2];
  HBITMAP local_8;
  void *local_4;
  
  puVar8 = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10[1] = 0;
  local_1c = (void *)0x0;
  local_20 = 0;
  local_8 = (HBITMAP)0x0;
  local_10[0] = 0;
  local_4 = this;
  iVar1 = FUN_10013830(this,param_1);
  if ((*(uint *)(iVar1 + 0xc) & 0x800000) == 0) {
    if (((param_2 == 0x1000) || (param_2 == 0x2000)) || (param_2 == 0x4000)) {
      iVar4 = 8;
      uVar6 = *(uint *)(iVar1 + 4);
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x68);
      uVar6 = *(uint *)(iVar1 + 4);
    }
    local_8 = FUN_10020000(0,uVar6,param_4,iVar4,&local_20,&local_1c,(uint *)(local_10 + 1),0);
    if (local_20 == 0) {
      (**(code **)(*param_8 + 4))(0xdf,0,0,0);
      goto LAB_10014eb8;
    }
LAB_10014b9e:
    pvVar2 = operator_new(0x88);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_100103f0(pvVar2,&local_14);
    }
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(*param_8 + 4))(0xca,0,0,0);
    }
    else if (local_14 == 0) {
      local_18 = FUN_1000fe20(local_4,(int)puVar3);
      if (local_18 == 0) {
        (**(code **)(*param_8 + 4))(0xcb,0,0,0);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
      else {
        puVar3[0x19] = *(undefined4 *)(iVar1 + 100);
        puVar3[0x1a] = *(undefined4 *)(iVar1 + 0x68);
        puVar3[7] = *(undefined4 *)(iVar1 + 0x1c);
        puVar3[1] = param_3;
        puVar3[2] = param_4;
        puVar3[4] = *(undefined4 *)(iVar1 + 0x10);
        puVar3[8] = *(int *)(iVar1 + 0x20) + param_5;
        puVar3[9] = *(int *)(iVar1 + 0x24) + param_6;
        puVar3[10] = *(undefined4 *)(iVar1 + 0x28);
        puVar3[0x14] = param_2;
        if (((param_2 == 0x1000) || (param_2 == 0x2000)) || (param_2 == 0x4000)) {
          puVar3[6] = 8;
          puVar3[5] = 1;
          puVar3[3] = *(undefined4 *)(iVar1 + 0xc);
        }
        else {
          puVar3[6] = *(undefined4 *)(iVar1 + 0x18);
          puVar3[5] = *(undefined4 *)(iVar1 + 0x14);
          puVar3[3] = *(undefined4 *)(iVar1 + 0xc);
        }
        puVar3[0x12] = 0;
        if (puVar8 == (undefined4 *)0x0) {
          uVar6 = *(uint *)(iVar1 + 0x68);
          uVar7 = (int)uVar6 >> 0x1f;
          iVar4 = ((uVar6 ^ uVar7) - uVar7 & 7 ^ uVar7) - uVar7;
          if (iVar4 != 0) {
            uVar6 = (uVar6 - iVar4) + 8;
          }
          if ((*(uint *)(iVar1 + 0xc) & 0x4000000) == 0) {
            iVar4 = ((*(int *)(iVar1 + 8) - param_6) - param_4) * *(int *)(iVar1 + 0x4c) +
                    ((int)(uVar6 * param_5 + ((int)(uVar6 * param_5) >> 0x1f & 7U)) >> 3) +
                    *(int *)(iVar1 + 0x44);
          }
          else {
            iVar4 = *(int *)(iVar1 + 0x4c) * param_6 +
                    ((int)(uVar6 * param_5 + ((int)(uVar6 * param_5) >> 0x1f & 7U)) >> 3) +
                    *(int *)(iVar1 + 0x44);
          }
          puVar3[0x11] = iVar4;
        }
        else {
          puVar3[0x11] = local_1c;
        }
        puVar3[0x16] = local_20;
        puVar3[0x15] = *(undefined4 *)(iVar1 + 0x54);
        puVar3[0x1b] = puVar8;
        puVar3[0x13] = *(undefined4 *)(iVar1 + 0x4c);
        puVar3[0xc] = *(undefined4 *)(iVar1 + 0x30);
        puVar3[0xd] = param_1;
        if ((((*(uint *)(iVar1 + 0xc) & 0x20000) != 0) &&
            ((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0)) && (*(int *)(iVar1 + 0x74) != 0)) {
          iVar4 = MappGetError(0xd,0);
          iVar5 = (int)(puVar3[6] + ((int)puVar3[6] >> 0x1f & 7U)) >> 3;
          MbufChild2d(*(undefined4 *)(iVar1 + 0x74),iVar5 * param_5,param_6,puVar3[1] * iVar5,
                      puVar3[2],local_10);
          puVar3[0x1d] = local_10[0];
          if ((iVar4 == 0) && (local_10[0] == 0)) {
            MfuncErrorReport(0,0,0,0,0,0);
          }
        }
      }
    }
    else {
      (**(code **)(*param_8 + 4))(local_14,0,0,0);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  else {
    pvVar2 = operator_new(0xf8);
    if (pvVar2 != (void *)0x0) {
      puVar8 = FUN_10010f60(pvVar2,*(int *)(iVar1 + 0x6c),param_5,param_6,param_3,param_4);
    }
    if (puVar8 != (undefined4 *)0x0) {
      if (puVar8[1] != 0) {
        local_1c = (void *)puVar8[0x21];
        goto LAB_10014b9e;
      }
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[2] != 0)) {
        (**(code **)(*param_8 + 4))(puVar8[2],puVar8[3],0,0);
        goto LAB_10014eb8;
      }
    }
    (**(code **)(*param_8 + 4))(0xdf,0,0,0);
  }
LAB_10014eb8:
  if (local_18 == 0) {
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    if (local_20 != 0) {
      FUN_10020210(0,local_8);
    }
  }
  *param_7 = local_18;
  return 1;
}


// ---- FUN_10014f20 @ 10014f20

undefined4 __thiscall FUN_10014f20(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  HGDIOBJ pvVar4;
  
  puVar2 = (undefined4 *)FUN_10013830(this,param_1);
  if (puVar2[0x1f] != 0) {
    (**(code **)(*param_2 + 4))(0x38a,1,0,0);
    return 1;
  }
  if (puVar2[0x20] != 0) {
    (**(code **)(*param_2 + 4))(0x38a,2,0,0);
    return 1;
  }
  if (puVar2[0x1d] != 0) {
    MbufFree(puVar2[0x1d]);
    MappGetError(0xd,0);
  }
  if (puVar2[0x1e] != 0) {
    MnatBufDestroy(puVar2[0x1e]);
    MappGetError(0xd,0);
  }
  FUN_1000fe80(this,param_1);
  puVar1 = (undefined4 *)puVar2[0x1b];
  if (puVar2[0xd] == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      puVar2[0x1b] = 0;
    }
    if (puVar2[0x16] == 0) goto LAB_1001503b;
    pvVar4 = (HGDIOBJ)puVar2[0x15];
    uVar3 = (uint)(puVar2[0x12] == 0);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      puVar2[0x1b] = 0;
    }
    if (puVar2[0x16] == 0) goto LAB_1001503b;
    pvVar4 = (HGDIOBJ)puVar2[0x15];
    uVar3 = 0;
  }
  FUN_10020210(uVar3,pvVar4);
LAB_1001503b:
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  return 1;
}


// ---- FUN_10015060 @ 10015060

undefined4 __thiscall
FUN_10015060(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = FUN_10013830(this,param_1);
  iVar1 = FUN_10004e20(param_6,0,0,param_4,param_5,param_4,param_5,0,0xffffffff,0x200,
                       *(undefined4 *)(iVar1 + 0x44),param_2,param_3,param_4,param_5,
                       *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
                       *(undefined4 *)(iVar1 + 0xc));
  if (iVar1 != 0) {
    (**(code **)(*param_7 + 4))(0xee,1,0,0);
  }
  return 1;
}


// ---- FUN_100150e0 @ 100150e0

undefined4 __thiscall
FUN_100150e0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = FUN_10013830(this,param_1);
  iVar1 = FUN_10004e20(*(int *)(iVar1 + 0x44),param_2,param_3,param_4,param_5,
                       *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
                       *(undefined4 *)(iVar1 + 0xc),param_6,0,0,param_4,param_5,param_4,param_5,0,
                       0xffffffff,0x200);
  if (iVar1 != 0) {
    (**(code **)(*param_7 + 4))(0xee,1,0,0);
  }
  return 1;
}


// ---- FUN_10015160 @ 10015160

undefined4 __thiscall
FUN_10015160(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int *param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10013830(this,param_1);
  if ((char)(param_2 >> 8) == '\0') {
    if (*(int *)(iVar1 + 0x14) == 1) {
      param_2 = param_2 | 0x200;
    }
    else {
      param_2 = param_2 | 0x800;
    }
  }
  if ((param_2 & 0x4010000) == 0) {
    param_2 = param_2 | 0x4000000;
  }
  if ((param_2 & 0x60000) == 0) {
    param_2 = param_2 | 0x40000;
  }
  if ((char)(param_2 >> 8) == -1) {
    param_2 = param_2 & 0xffff02ff | 0x200;
  }
  uVar2 = param_5;
  if (*(int *)(iVar1 + 0x14) == 1) {
    uVar2 = *(undefined4 *)(iVar1 + 0x50);
  }
  iVar1 = FUN_10004e20(param_8,0,0,param_6,param_7,param_6,param_7,0,param_5,param_2,
                       *(undefined4 *)(iVar1 + 0x44),param_3,param_4,param_6,param_7,
                       *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(iVar1 + 0x4c),uVar2,*(undefined4 *)(iVar1 + 0xc));
  if (iVar1 != 0) {
    (**(code **)(*param_9 + 4))(0xee,1,0,0);
  }
  return 1;
}


// ---- FUN_10015230 @ 10015230

undefined4 __thiscall
FUN_10015230(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10013830(this,param_1);
  if ((char)(param_2 >> 8) == '\0') {
    if (*(int *)(iVar1 + 0x14) == 1) {
      param_2 = param_2 | 0x200;
    }
    else {
      param_2 = param_2 | 0x800;
    }
  }
  if ((param_2 & 0x4010000) == 0) {
    param_2 = param_2 | 0x4000000;
  }
  if ((param_2 & 0x60000) == 0) {
    param_2 = param_2 | 0x40000;
  }
  if ((char)(param_2 >> 8) == -1) {
    param_2 = param_2 & 0xffff02ff | 0x200;
  }
  uVar2 = param_5;
  if (*(int *)(iVar1 + 0x14) == 1) {
    uVar2 = *(undefined4 *)(iVar1 + 0x50);
  }
  iVar1 = FUN_10004e20(*(int *)(iVar1 + 0x44),param_3,param_4,param_6,param_7,
                       *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(iVar1 + 0x4c),uVar2,*(undefined4 *)(iVar1 + 0xc),param_8,0,0,
                       param_6,param_7,param_6,param_7,0,param_5,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_9 + 4))(0xee,1,0,0);
  }
  return 1;
}


// ---- FUN_10015300 @ 10015300

undefined4 __thiscall FUN_10015300(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_10013830(this,param_1);
  if (param_2 == 0x3ea) {
    *param_3 = *(int *)(iVar1 + 4);
    return 1;
  }
  if (param_2 == 0x3eb) {
    *param_3 = *(int *)(iVar1 + 8);
    return 1;
  }
  if (param_2 == 0x3ed) {
    *param_3 = *(int *)(iVar1 + 0x14);
    return 1;
  }
  if (param_2 == 0x3ef) {
    *param_3 = *(int *)(iVar1 + 0x18);
    return 1;
  }
  if (param_2 == 0x3f6) {
    *param_3 = *(int *)(iVar1 + 0x1c);
    return 1;
  }
  if (param_2 == 0x3f2) {
    *param_3 = *(int *)(iVar1 + 0xc);
    return 1;
  }
  if (param_2 == 0x3f5) {
    *param_3 = *(int *)(iVar1 + 0x10);
    return 1;
  }
  if (param_2 == 0x13a6) {
    *param_3 = *(int *)(iVar1 + 0x20);
    return 1;
  }
  if (param_2 == 0x13a7) {
    *param_3 = *(int *)(iVar1 + 0x24);
    return 1;
  }
  if (param_2 == 0x13a8) {
    *param_3 = *(int *)(iVar1 + 0x28);
    return 1;
  }
  if (param_2 == 0x139c) {
    if ((*(int *)(iVar1 + 0x68) == 8) && (*(int *)(iVar1 + 100) == 1)) {
      *param_3 = *(int *)(iVar1 + 0x74);
      return 1;
    }
    *param_3 = 0;
    return 1;
  }
  if (param_2 == 0x13a4) {
    *param_3 = *(int *)(iVar1 + 0x74);
    return 1;
  }
  if (param_2 == -0x80000000) {
    *param_3 = *(int *)(iVar1 + 0x44);
    return 1;
  }
  if (param_2 == 0x13af) {
    if ((*(uint *)(iVar1 + 0xc) & 0x400000) != 0) {
      *param_3 = -0x270d;
      return 1;
    }
    *param_3 = -9999;
    return 1;
  }
  if (param_2 == 0x13b0) {
    if ((*(uint *)(iVar1 + 0xc) & 0x10000) != 0) {
      *param_3 = -0x270d;
      return 1;
    }
    *param_3 = -9999;
    return 1;
  }
  if (param_2 == 0x3fe) {
    if (*(int *)(iVar1 + 0x6c) != 0) {
      *param_3 = *(int *)(*(int *)(iVar1 + 0x6c) + 0xcc);
      return 1;
    }
    *param_3 = 0;
    return 1;
  }
  if (param_2 != 0xc52) {
    if (param_2 == 0xff00) {
      *param_3 = *(int *)(iVar1 + 0xc);
      return 1;
    }
    if (param_2 == 0x13b3) {
      *param_3 = *(int *)(iVar1 + 0x84);
      return 1;
    }
    if (param_2 == 0x20000000) {
      uVar3 = *(uint *)(iVar1 + 0x68);
      uVar4 = (int)uVar3 >> 0x1f;
      iVar2 = ((uVar3 ^ uVar4) - uVar4 & 7 ^ uVar4) - uVar4;
      if (iVar2 != 0) {
        uVar3 = (uVar3 - iVar2) + 8;
      }
      *param_3 = *(int *)(iVar1 + 0x4c) / ((int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3);
      return 1;
    }
    if (param_2 == 0x8000000) {
      *param_3 = *(int *)(iVar1 + 0x4c);
      return 1;
    }
    (**(code **)(*param_4 + 4))(0xdc,0,0,0);
    return 1;
  }
  *param_3 = *(int *)(iVar1 + 0x54);
  return 1;
}


// ---- FUN_10015610 @ 10015610

undefined4 __thiscall
FUN_10015610(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  void *this_00;
  
  this_00 = (void *)FUN_10013830(this,param_1);
  if (param_2 == 0x13b1) {
    if (*(int *)((int)this_00 + 0x34) == 0) {
      FUN_100104b0(this_00,this,param_5);
      return 1;
    }
    (**(code **)(*param_5 + 4))(0x38d,3,0,0);
    return 1;
  }
  if (param_2 != 0x13b2) {
    (**(code **)(*param_5 + 4))(0xe0,3,0,0);
    return 1;
  }
  FUN_10010550(this_00,this,param_5);
  return 1;
}


// ---- FUN_10015830 @ 10015830

undefined4 __thiscall
FUN_10015830(void *this,char *param_1,DWORD param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  void *this_00;
  DWORD *this_01;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_4;
  
  *param_4 = 0;
  if (param_2 == 0xffffffff) {
LAB_1001587d:
    DVar2 = 0xffffffff;
    param_2 = DVar2;
    DVar3 = 0;
    if (0 < *(int *)((int)this + 0x20)) {
      do {
        DVar2 = DVar3;
        if (param_2 != 0xffffffff) goto LAB_100158c1;
        iVar1 = FUN_100100d0(this,DVar2);
        DVar3 = DVar2;
        if (iVar1 != 0) {
          DVar3 = DVar2 + 1;
          DVar2 = param_2;
        }
        param_2 = DVar2;
      } while ((int)DVar3 < *(int *)((int)this + 0x20));
    }
    param_2 = DVar2;
    if (DVar2 == 0xffffffff) {
      (**(code **)(*param_5 + 4))(0x117,1,0,0);
    }
  }
  else {
    if (param_2 != 0x10000000) {
      iVar1 = FUN_100100d0(this,param_2);
      *param_4 = iVar1;
      if (iVar1 != 0) {
        uVar6 = 2;
        uVar5 = 0x117;
        goto LAB_100159ae;
      }
    }
    if ((param_2 == 0xffffffff) || (param_2 == 0x10000000)) goto LAB_1001587d;
  }
LAB_100158c1:
  puVar4 = (undefined4 *)0x0;
  this_00 = operator_new(0xa4);
  if (this_00 != (void *)0x0) {
    puVar4 = FUN_10012760(this_00,param_1,param_2,param_3,&local_4);
  }
  if (puVar4 == (undefined4 *)0x0) {
    uVar6 = 0;
    uVar5 = 0xca;
  }
  else {
    if (local_4 != 0) {
      (**(code **)(*param_5 + 4))(local_4,0,0,0);
      *param_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        return 1;
      }
      (**(code **)*puVar4)(1);
      return 1;
    }
    iVar1 = FUN_10010020(this,(int)puVar4);
    *param_4 = iVar1;
    if (iVar1 == 0) {
      uVar6 = 0;
      uVar5 = 0xd0;
    }
    else {
      FUN_10010130(this,iVar1);
      this_01 = FUN_1001ff50(*(long *)((int)this + 0x14),(DWORD)puVar4,param_2,param_3,param_1);
      if (this_01 != (DWORD *)0x0) {
        if (this_01[0x1c] != 0) {
          puVar4[0x16] = this_01;
          FUN_100233b0(this_01,0xc19,(IMAGE_DOS_HEADER *)puVar4[0x1e],1,(uint *)0x0);
          return 1;
        }
        if (this_01 != (DWORD *)0x0) {
          FUN_1001ff90(this_01);
        }
      }
      uVar6 = 0;
      uVar5 = 0x109;
    }
  }
LAB_100159ae:
  (**(code **)(*param_5 + 4))(uVar5,uVar6,0,0);
  *param_4 = 0;
  return 1;
}


// ---- FUN_100159d0 @ 100159d0

undefined4 __thiscall FUN_100159d0(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10013870(this,param_1);
  FUN_10015f10(this,param_1,0xbd7,(IMAGE_DOS_HEADER *)0xffffd8f3,param_2);
  FUN_10015f10(this,param_1,0xbc8,(IMAGE_DOS_HEADER *)0xffffd8f1,param_2);
  iVar2 = FUN_10010150(this,param_1);
  if (iVar2 == 0) {
    FUN_10010080(this,param_1);
    FUN_1001ff90((void *)puVar1[0x16]);
    puVar1[0x16] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return 1;
}


// ---- FUN_10015a50 @ 10015a50

undefined4 __thiscall FUN_10015a50(void *this,int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint local_8;
  uint local_4;
  
  FUN_10016690(this,param_1,3000,&local_8,param_4);
  FUN_10016690(this,param_1,0xbb9,&local_4,param_4);
  if ((param_2 != local_8) || (param_3 != local_4)) {
    iVar1 = FUN_10013870(this,param_1);
    if (*(int *)(iVar1 + 0x5c) == -0x270d) {
      iVar2 = FUN_10017640(this,param_1,param_2,param_3,param_4);
      if (iVar2 == 1) {
        *(uint *)(iVar1 + 100) = param_2;
        *(uint *)(iVar1 + 0x68) = param_3;
      }
    }
    else {
      iVar2 = FUN_10022030(*(void **)(iVar1 + 0x58),param_2,param_3);
      if (iVar2 == 1) {
        *(uint *)(iVar1 + 0x30) = param_2;
        *(uint *)(iVar1 + 0x34) = param_3;
      }
      else {
        (**(code **)(*param_4 + 4))(0x107,0,0,0);
      }
    }
  }
  return 1;
}


// ---- FUN_10015b20 @ 10015b20

undefined4 __thiscall FUN_10015b20(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_10013870(this,param_1);
  if ((((param_2 < 0x11) && (param_3 < 0x11)) && (-0x11 < param_2)) && (-0x11 < param_3)) {
    if (*(int *)(iVar1 + 0x60) == -0x270d) {
      iVar2 = FUN_100177a0(this,param_1,param_2,param_3,param_4);
      if (iVar2 != 1) {
        return 1;
      }
      *(int *)(iVar1 + 0x6c) = param_2;
      *(int *)(iVar1 + 0x70) = param_3;
      return 1;
    }
    iVar2 = FUN_10022450(*(void **)(iVar1 + 0x58),param_2,param_3);
    if (iVar2 == 1) {
      *(int *)(iVar1 + 0x28) = param_2;
      *(int *)(iVar1 + 0x2c) = param_3;
      return 1;
    }
    uVar4 = 0;
    uVar3 = 0x107;
  }
  else {
    uVar4 = 2;
    uVar3 = 0xe9;
  }
  (**(code **)(*param_4 + 4))(uVar3,uVar4,0,0);
  return 1;
}


// ---- FUN_10015bd0 @ 10015bd0

undefined4 __thiscall
FUN_10015bd0(void *this,int param_1,int param_2,undefined4 param_3,int *param_4)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  IMAGE_DOS_HEADER *local_4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = FUN_10013830(this,param_2);
  }
  iVar1 = FUN_10013870(this,param_1);
  this_00 = *(void **)(iVar1 + 0x58);
  if (iVar3 == 0) {
    if (*(int *)((int)this_00 + 0x304) == 2) {
      FUN_10016f30(this,0,param_1,(undefined4 *)0x0,param_4);
    }
    else if (*(int *)((int)this_00 + 0x304) == 5) {
      FUN_10017020(this,0,param_1,*(HWND *)((int)this_00 + 0x42c),param_4);
    }
    iVar2 = FUN_10003e20(*(void **)((int)this + 4),0,0);
    if (*(int *)(iVar2 + 0x1c) != 0) goto LAB_10015dc7;
    FUN_10016690(this,param_1,0xbef,(uint *)&local_4,param_4);
    FUN_10015f10(this,param_1,0xbef,(IMAGE_DOS_HEADER *)0xffffd8f1,param_4);
    FUN_10017500(this,param_2,param_1);
    iVar2 = FUN_10021770(this_00,0);
    if (iVar2 != 1) {
      (**(code **)(*param_4 + 4))(0x10a,0,0,0);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x50) != -1) {
      (**(code **)(*param_4 + 4))(0x107,0,0,0);
      return 1;
    }
    if (*(int *)(iVar1 + 0x3c) == 0) {
      if (*(int *)(iVar1 + 0x7c) == 0) {
        MdispOverlayKey(*(undefined4 *)(iVar1 + 0x94),1,3,0xff,8);
        *(undefined4 *)(iVar1 + 0x7c) = 0;
      }
      else {
        MdispOverlayKey(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x40),
                        *(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48),
                        *(undefined4 *)(iVar1 + 0x4c));
      }
      if (*(int *)(iVar1 + 0x3c) == 0) {
        FUN_10016690(this,param_1,0xbef,(uint *)&local_4,param_4);
        FUN_10015f10(this,param_1,0xbef,(IMAGE_DOS_HEADER *)0xffffd8f1,param_4);
      }
    }
    FUN_100171d0(this,param_2,param_1,param_4);
    iVar2 = FUN_10021770(this_00,iVar3);
    if (iVar2 != 1) {
      (**(code **)(*param_4 + 4))(0x107,0,0,0);
    }
    if (*(int *)(iVar1 + 0x3c) != 0) goto LAB_10015dc7;
  }
  FUN_10015f10(this,param_1,0xbef,local_4,param_4);
LAB_10015dc7:
  if (iVar3 == 0) {
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar3 + 0x2c);
    *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar3 + 0x70);
  }
  return 1;
}


// ---- FUN_10015e00 @ 10015e00

undefined4 __thiscall
FUN_10015e00(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  void *local_8;
  undefined4 uStack_4;
  
  local_8 = this;
  iVar1 = FUN_10013870(this,param_1);
  this_00 = *(void **)(iVar1 + 0x58);
  if (*(void **)(iVar1 + 0x78) == (void *)0x0) {
    return 0xffffffff;
  }
  iVar2 = FUN_10012530(*(void **)(iVar1 + 0x78),param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar1 + 0x98);
    *(int *)(iVar1 + 0x40) = param_2;
    *(int *)(iVar1 + 0x44) = param_3;
    *(int *)(iVar1 + 0x48) = param_4;
    *(undefined4 *)(iVar1 + 0x4c) = param_5;
    if (iVar2 != 0) {
      iVar3 = MnatGetMilDriverId();
      iVar3 = FUN_10013830(local_8,iVar3);
      local_c = 0;
      MbufInquire(iVar2,0x1392,&local_c);
      if (*(int *)(iVar3 + 0x60) == local_c) {
        local_8 = *(void **)(*(int *)(iVar1 + 0x78) + 0x70);
        uStack_4 = 0;
        MbufClear(iVar2,(double)local_8);
      }
    }
    if (this_00 != (void *)0x0) {
      FUN_100233b0(this_00,0xc19,*(IMAGE_DOS_HEADER **)(iVar1 + 0x78),1,(uint *)0x0);
    }
    return 1;
  }
  return 0xffffffff;
}


// ---- FUN_10015f10 @ 10015f10

undefined4 __thiscall
FUN_10015f10(void *this,int param_1,undefined4 param_2,IMAGE_DOS_HEADER *param_3,int *param_4)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  IMAGE_DOS_HEADER *pIVar7;
  bool bVar8;
  
  iVar2 = FUN_10013870(this,param_1);
  this_00 = *(void **)(iVar2 + 0x58);
  switch(param_2) {
  case 0xbbc:
    if ((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) || (param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1))
    {
      *(IMAGE_DOS_HEADER **)(iVar2 + 0x5c) = param_3;
    }
    else {
      (**(code **)(*param_4 + 4))(0xe0,2,0,0);
    }
    break;
  case 0xbbd:
    if ((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) || (param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1))
    {
      *(IMAGE_DOS_HEADER **)(iVar2 + 0x60) = param_3;
    }
    else {
      (**(code **)(*param_4 + 4))(0xe0,2,0,0);
    }
    break;
  default:
    iVar2 = FUN_100233b0(this_00,param_2,param_3,1,(uint *)0x0);
    if (iVar2 == 0) {
      (**(code **)(*param_4 + 4))(0xe0,3,0,0);
    }
    break;
  case 0xbc5:
    break;
  case 0xbc8:
    if (((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1) || (param_3 == (IMAGE_DOS_HEADER *)0x0)) &&
       (*(int *)(iVar2 + 0x88) == -9999)) {
      return 1;
    }
    if (((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) && (*(int *)(iVar2 + 0x88) != -9999)) &&
       (*(int *)(iVar2 + 0x88) != 0)) {
      return 1;
    }
    if ((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1) || (param_3 == (IMAGE_DOS_HEADER *)0x0)) {
      *(undefined4 *)(iVar2 + 0x88) = 0xffffd8f1;
      iVar6 = *(int *)(iVar2 + 0x98);
      if (iVar6 != 0) {
        MappHookFunction(iVar6 + 0x2000000U | 0x4000000,&LAB_10015790,this_00);
        iVar5 = MnatGetMilDriverId(iVar6);
        iVar5 = FUN_10013830(this,iVar5);
        FUN_100233b0(this_00,0xc15,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
        *(undefined4 *)(iVar2 + 0x98) = 0;
        *(undefined4 *)(iVar5 + 0x7c) = 0;
        MbufFree(iVar6);
      }
    }
    else if ((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) && (*(int *)(iVar2 + 0x3c) == 0)) {
      *(undefined4 *)(iVar2 + 0x88) = 0xffffd8f3;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x98);
      bVar8 = false;
      *(IMAGE_DOS_HEADER **)(iVar2 + 0x88) = param_3;
      if (param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) {
LAB_100160f3:
        iVar6 = *(int *)(*(int *)(iVar2 + 0x78) + 0x70);
        uVar1 = *(uint *)((int)this + 0x68);
        iVar5 = 0;
        pIVar7 = *(IMAGE_DOS_HEADER **)(iVar2 + 0x3c);
LAB_10016128:
        iVar5 = FUN_10012930(iVar5,(int)pIVar7,this,0,uVar1 | 0x10,1,iVar6);
        if (iVar5 != 0) goto LAB_10016139;
        (**(code **)(*param_4 + 4))(0x389,2,0,0);
      }
      else {
        iVar5 = iVar6;
        if ((iVar6 != 0) &&
           (iVar3 = FUN_10012b50(1,(int)param_3,this,iVar6,*(uint *)((int)this + 0x70) | 0xc00000),
           iVar3 == 0)) {
          iVar5 = MnatGetMilDriverId(iVar6);
          iVar5 = FUN_10013830(this,iVar5);
          FUN_100233b0(this_00,0xc15,(IMAGE_DOS_HEADER *)0x0,0,(uint *)0x0);
          bVar8 = *(int *)(iVar2 + 0x8c) == -9999;
          *(undefined4 *)(iVar2 + 0x98) = 0;
          *(undefined4 *)(iVar5 + 0x7c) = 0;
          iVar5 = 0;
          MbufFree(iVar6);
        }
        if (param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) goto LAB_100160f3;
        if (iVar5 == 0) {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x78) + 0x70);
          uVar1 = *(uint *)((int)this + 0x68);
          iVar5 = 1;
          pIVar7 = param_3;
          goto LAB_10016128;
        }
LAB_10016139:
        iVar6 = MnatGetMilDriverId(iVar5);
        pIVar7 = (IMAGE_DOS_HEADER *)FUN_10013830(this,iVar6);
        *(int *)(pIVar7->e_program + 0x3c) = param_1;
        uVar4 = MbufInquire(iVar5,0x1392,0);
        *(undefined4 *)(pIVar7->e_program + 0x20) = uVar4;
        *(int *)(iVar2 + 0x98) = iVar5;
        FUN_100233b0(this_00,0xc15,pIVar7,0,(uint *)0x0);
        if (*(int *)(iVar2 + 0x8c) == -9999) {
          bVar8 = true;
        }
        if (*(int *)(pIVar7->e_program + 0x1c) == 0) {
          MappHookFunction(iVar5 + 0x2000000,&LAB_10015790,this_00);
          pIVar7->e_program[0x1c] = 1;
          pIVar7->e_program[0x1d] = 0;
          pIVar7->e_program[0x1e] = 0;
          pIVar7->e_program[0x1f] = 0;
        }
      }
      if (bVar8) {
        FUN_100233b0(this_00,0xc0b,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
      }
    }
    if (*(int *)(iVar2 + 0x90) == 0) {
      if ((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1) || (param_3 == (IMAGE_DOS_HEADER *)0x0)) {
        pIVar7 = (IMAGE_DOS_HEADER *)0xffffd8f3;
      }
      else {
        pIVar7 = (IMAGE_DOS_HEADER *)0xffffd8f1;
      }
      FUN_10015f10(this,param_1,0xbd7,pIVar7,param_4);
      *(undefined4 *)(iVar2 + 0x90) = 0;
    }
    else {
      FUN_10015f10(this,param_1,0xbd7,*(IMAGE_DOS_HEADER **)(iVar2 + 0x8c),param_4);
    }
    if ((param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1) || (param_3 == (IMAGE_DOS_HEADER *)0x0)) {
      FUN_100233b0(this_00,0xc17,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
    }
    break;
  case 0xbce:
    FUN_100233b0(this_00,0xbd1,(IMAGE_DOS_HEADER *)0xffffd8f3,1,(uint *)0x0);
    MdispLut(*(undefined4 *)(iVar2 + 0x94),param_3);
    FUN_100233b0(this_00,0xbd1,(IMAGE_DOS_HEADER *)0xffffd8f1,1,(uint *)0x0);
    iVar6 = MappGetError(0xd,0);
    if (iVar6 == 0) {
      *(IMAGE_DOS_HEADER **)(iVar2 + 0x84) = param_3;
    }
    else {
      MfuncErrorReport(0,0,0,0,0,0);
      (**(code **)(*param_4 + 4))(0x111,0,0,0);
    }
    break;
  case 0xbcf:
    iVar2 = FUN_100233b0(this_00,0xc14,param_3,1,(uint *)0x0);
    if (iVar2 == 0) {
      (**(code **)(*param_4 + 4))(0xe0,3,0,0);
    }
    break;
  case 0xbd7:
    if (((param_3 != (IMAGE_DOS_HEADER *)0xffffd8f1) || (*(int *)(iVar2 + 0x8c) != -9999)) &&
       ((param_3 != (IMAGE_DOS_HEADER *)0xffffd8f3 || (*(int *)(iVar2 + 0x8c) != -0x270d)))) {
      *(undefined4 *)(iVar2 + 0x90) = 1;
      if (param_3 == (IMAGE_DOS_HEADER *)0xffffd8f3) {
        *(undefined4 *)(iVar2 + 0x8c) = 0xffffd8f3;
        iVar6 = *(int *)(iVar2 + 0x9c);
        if (iVar6 != 0) {
          iVar5 = MnatGetMilDriverId(iVar6);
          iVar5 = FUN_10013830(this,iVar5);
          FUN_100233b0(this_00,0xc17,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
          *(undefined4 *)(iVar2 + 0x9c) = 0;
          *(undefined4 *)(iVar5 + 0x80) = 0;
          MbufFree(iVar6);
        }
      }
      else if (param_3 == (IMAGE_DOS_HEADER *)0xffffd8f1) {
        *(undefined4 *)(iVar2 + 0x8c) = 0xffffd8f1;
        if ((((*(int *)(iVar2 + 0x3c) != 0) && (*(int *)(iVar2 + 0x9c) == 0)) &&
            (*(int *)(iVar2 + 0x88) != -9999)) && (*(int *)(iVar2 + 0x88) != 0)) {
          iVar6 = FUN_10012930(0,*(int *)(iVar2 + 0x3c),this,0,*(uint *)((int)this + 0x6c) | 0x10,0,
                               0);
          if (iVar6 == 0) {
            (**(code **)(*param_4 + 4))(0x389,1,0,0);
          }
          else {
            iVar5 = MnatGetMilDriverId(iVar6);
            pIVar7 = (IMAGE_DOS_HEADER *)FUN_10013830(this,iVar5);
            pIVar7[1].e_magic[0] = (undefined1)param_1;
            pIVar7[1].e_magic[1] = param_1._1_1_;
            pIVar7[1].e_cblp = param_1._2_2_;
            *(int *)(iVar2 + 0x9c) = iVar6;
            FUN_100233b0(this_00,0xc17,pIVar7,1,(uint *)0x0);
          }
        }
      }
      else {
        (**(code **)(*param_4 + 4))(0xe0,2,0,0);
      }
    }
    break;
  case 0xc23:
    FUN_10013480(*(void **)((int)this + 4),(int)param_3,param_4);
  }
  return 1;
}


// ---- FUN_100165d0 @ 100165d0

undefined4 __thiscall
FUN_100165d0(void *this,int param_1,HRGN param_2,HPALETTE param_3,uint param_4,DWORD param_5,
            int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_10013870(this,param_1);
  iVar1 = FUN_10021c80(*(void **)(iVar1 + 0x58),param_2,param_3,param_4,param_5);
  if (iVar1 != 1) {
    (**(code **)(*param_6 + 4))(0x116,0,0,0);
  }
  return 1;
}


// ---- FUN_10016620 @ 10016620

undefined4 __thiscall
FUN_10016620(void *this,int param_1,int param_2,int param_3,int param_4,undefined1 *param_5,
            int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_10013870(this,param_1);
  iVar1 = FUN_10021e60(*(void **)(iVar1 + 0x58),param_2,param_3,param_4,param_5);
  if (iVar1 == 2) {
    (**(code **)(*param_6 + 4))(0x111,0,0,0);
    return 1;
  }
  if (iVar1 != 1) {
    (**(code **)(*param_6 + 4))(0x10b,0,0,0);
  }
  return 1;
}


// ---- FUN_10016690 @ 10016690

undefined4 __thiscall FUN_10016690(void *this,int param_1,int param_2,uint *param_3,int *param_4)

{
  char cVar1;
  void *this_00;
  int iVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = FUN_10013870(this,param_1);
  this_00 = *(void **)(iVar2 + 0x58);
  if (param_2 < 0xbb9) {
    if (param_2 == 3000) {
      if (*(int *)(iVar2 + 0x5c) == -0x270d) {
        *param_3 = *(uint *)(iVar2 + 100);
        return 1;
      }
      *param_3 = *(uint *)(iVar2 + 0x30);
      return 1;
    }
    switch(param_2) {
    case 0x3f1:
      *param_3 = *(uint *)(iVar2 + 8);
      return 1;
    case 0x3f2:
      uVar5 = 0xffffffff;
      pcVar8 = *(char **)(iVar2 + 4);
      do {
        pcVar7 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar6 = (uint *)(pcVar7 + -uVar5);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_3 = *puVar6;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)param_3 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        param_3 = (uint *)((int)param_3 + 1);
      }
      return 1;
    case 0x3f3:
      uVar5 = 0xffffffff;
      pcVar8 = *(char **)(iVar2 + 4);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      *param_3 = ~uVar5 - 1;
      return 1;
    case 0x3f4:
      *param_3 = *(uint *)(iVar2 + 0xc);
      return 1;
    }
switchD_100166c1_default:
    iVar2 = FUN_100228a0(this_00,param_2,param_3);
    if (iVar2 == 0) {
      (**(code **)(*param_4 + 4))(0xdc,0,0,0);
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0xbb9:
      if (*(int *)(iVar2 + 0x5c) == -0x270d) {
        *param_3 = *(uint *)(iVar2 + 0x68);
        return 1;
      }
      *param_3 = *(uint *)(iVar2 + 0x34);
      return 1;
    case 0xbba:
      if (*(int *)(iVar2 + 0x5c) == -0x270d) {
        *param_3 = *(uint *)(iVar2 + 0x6c);
        return 1;
      }
      *param_3 = *(uint *)(iVar2 + 0x28);
      return 1;
    case 0xbbb:
      if (*(int *)(iVar2 + 0x5c) == -0x270d) {
        *param_3 = *(uint *)(iVar2 + 0x70);
        return 1;
      }
      *param_3 = *(uint *)(iVar2 + 0x2c);
      return 1;
    case 0xbbc:
      *param_3 = *(uint *)(iVar2 + 0x5c);
      return 1;
    case 0xbbd:
      *param_3 = *(uint *)(iVar2 + 0x60);
      return 1;
    case 0xbbe:
      *param_3 = *(uint *)(iVar2 + 0x3c);
      return 1;
    case 0xbbf:
      if (*(int *)(iVar2 + 0x7c) != 0) {
        *param_3 = *(uint *)(iVar2 + 0x40);
        return 1;
      }
      if ((*(int *)(iVar2 + 0x88) != -9999) && (*(int *)(iVar2 + 0x88) != 0)) {
        *param_3 = 1;
        return 1;
      }
      *param_3 = 2;
      return 1;
    case 0xbc0:
      *param_3 = *(uint *)(iVar2 + 0x44);
      return 1;
    case 0xbc1:
      *param_3 = *(uint *)(iVar2 + 0x48);
      return 1;
    case 0xbc2:
      *param_3 = *(uint *)(iVar2 + 0x4c);
      return 1;
    case 0xbc3:
      *param_3 = 1;
      return 1;
    default:
      goto switchD_100166c1_default;
    case 0xbc5:
    case 0xbc6:
      break;
    case 0xbc7:
      *param_3 = *(uint *)(iVar2 + 0x98);
      return 1;
    case 0xbc8:
      *param_3 = *(uint *)(iVar2 + 0x88);
      return 1;
    case 0xbc9:
      *param_3 = *(uint *)(iVar2 + 0x94);
      return 1;
    case 0xbce:
      *param_3 = *(uint *)(iVar2 + 0x84);
      return 1;
    case 0xbcf:
      iVar2 = FUN_100228a0(this_00,0xc14,param_3);
      if (iVar2 == 0) {
        (**(code **)(*param_4 + 4))(0xdc,0,0,0);
        return 1;
      }
      break;
    case 0xbd5:
      *param_3 = 0x1000000;
      return 1;
    case 0xbd7:
      *param_3 = *(uint *)(iVar2 + 0x8c);
      return 1;
    case 0xc23:
      *param_3 = (-(uint)(*(int *)(*(int *)((int)this + 4) + 0x3c) == 0) & 2) - 9999;
      return 1;
    case 0xc54:
    case 0xc55:
      iVar2 = *(int *)((int)this + 4);
      if ((*(int *)(iVar2 + 0x3c) == 0) ||
         (pvVar3 = GetCurrentThread(), pvVar3 != *(HANDLE *)(iVar2 + 0x58))) {
        iVar2 = FUN_100228a0(this_00,param_2,param_3);
        if (iVar2 == 0) {
          (**(code **)(*param_4 + 4))(0xdc,0,0,0);
          return 1;
        }
      }
      else {
        FUN_100233b0(this_00,0xc61,(IMAGE_DOS_HEADER *)0xffffd8f1,1,(uint *)0x0);
        iVar2 = FUN_100228a0(this_00,param_2,param_3);
        if (iVar2 == 0) {
          (**(code **)(*param_4 + 4))(0xdc,0,0,0);
          return 1;
        }
      }
      break;
    case 0xc5f:
      *param_3 = *(uint *)((int)this + 0x60);
    }
  }
  return 1;
}


// ---- FUN_10016be0 @ 10016be0

/* WARNING: Removing unreachable block (ram,0x10016c15) */
/* WARNING: Removing unreachable block (ram,0x10016c1e) */
/* WARNING: Removing unreachable block (ram,0x10016d00) */
/* WARNING: Removing unreachable block (ram,0x10016c29) */
/* WARNING: Removing unreachable block (ram,0x10016c3f) */
/* WARNING: Removing unreachable block (ram,0x10016ce5) */
/* WARNING: Removing unreachable block (ram,0x10016c4d) */
/* WARNING: Removing unreachable block (ram,0x10016c54) */
/* WARNING: Removing unreachable block (ram,0x10016c5d) */
/* WARNING: Removing unreachable block (ram,0x10016c62) */
/* WARNING: Removing unreachable block (ram,0x10016c86) */
/* WARNING: Removing unreachable block (ram,0x10016c90) */
/* WARNING: Removing unreachable block (ram,0x10016cab) */
/* WARNING: Removing unreachable block (ram,0x10016cca) */
/* WARNING: Removing unreachable block (ram,0x10016c67) */

undefined4 __thiscall
FUN_10016be0(void *this,int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_10013870(this,param_1);
  FUN_10021a30(*(void **)(iVar1 + 0x58),param_2,param_3,param_4);
  return 1;
}


// ---- FUN_10016d40 @ 10016d40

undefined4 __thiscall FUN_10016d40(void *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0x101f5) || (iVar1 == 0x10001)) {
    iVar1 = **(int **)(param_1 + 0xc);
    uVar3 = FUN_10016f30(this,*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc),
                         (undefined4 *)(*(int **)(param_1 + 0xc))[2],param_2);
    return uVar3;
  }
  if ((iVar1 == 0x101f6) || (iVar1 == 0x10002)) {
    piVar2 = *(int **)(param_1 + 0xc);
    uVar3 = FUN_10016fe0(this,*(int *)(*piVar2 + 0xc),piVar2[2],piVar2[4],piVar2[6],param_2);
    **(undefined4 **)(param_1 + 0x10) = uVar3;
    return 1;
  }
  if ((iVar1 == 0x101f7) || (iVar1 == 0x10003)) {
    iVar1 = **(int **)(param_1 + 0xc);
    uVar3 = FUN_10017020(this,*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc),
                         (HWND)(*(int **)(param_1 + 0xc))[2],param_2);
    return uVar3;
  }
  if ((iVar1 == 0x101f8) || (iVar1 == 0x10004)) {
    piVar2 = *(int **)(param_1 + 0xc);
    uVar3 = FUN_10015f10(this,*piVar2,piVar2[2],(IMAGE_DOS_HEADER *)piVar2[4],param_2);
    return uVar3;
  }
  if ((iVar1 == 0x101f9) || (iVar1 == 0x10005)) {
    piVar2 = *(int **)(param_1 + 0xc);
    uVar3 = FUN_100170d0(this,*piVar2,piVar2[2],piVar2[4],piVar2[6],piVar2[8],piVar2[10],piVar2[0xc]
                         ,param_2);
    return uVar3;
  }
  if ((iVar1 == 0x101fa) || (iVar1 == 0x10006)) {
    piVar2 = *(int **)(param_1 + 0xc);
    uVar3 = FUN_10016690(this,*piVar2,piVar2[2],(uint *)piVar2[4],param_2);
    return uVar3;
  }
  if ((iVar1 == 0x101fb) || (iVar1 == 0x10007)) {
    piVar2 = *(int **)(param_1 + 0xc);
    uVar3 = FUN_10017130(this,*piVar2,piVar2[2],piVar2[4],piVar2[6],piVar2[8],param_2);
    return uVar3;
  }
  if ((iVar1 != 0x101fc) && (iVar1 != 0x10008)) {
    return 0xffffffff;
  }
  uVar3 = FUN_10015f10(this,**(int **)(param_1 + 0xc),0xc2f,
                       (IMAGE_DOS_HEADER *)(*(int **)(param_1 + 0xc))[2],param_2);
  return uVar3;
}


// ---- FUN_10016f30 @ 10016f30

undefined4 __thiscall
FUN_10016f30(void *this,int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_10013830(this,param_1);
  }
  iVar1 = FUN_10013870(this,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_100218d0(*(void **)(iVar1 + 0x58),0,param_3);
    if (iVar2 != 1) {
      (**(code **)(*param_4 + 4))(0x10a,0,0,0);
      return 1;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x50) != -1) {
      (**(code **)(*param_4 + 4))(0x107,0,0,0);
      return 1;
    }
    iVar2 = FUN_100218d0(*(void **)(iVar1 + 0x58),iVar2,param_3);
    if (iVar2 != 1) {
      (**(code **)(*param_4 + 4))(0x107,0,0,0);
    }
  }
  return 1;
}


// ---- FUN_10016fe0 @ 10016fe0

undefined4 __thiscall
FUN_10016fe0(void *this,int param_1,uint param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 local_4;
  
  FUN_10013870(this,param_1);
  FUN_10016be0(this,param_1,param_2,param_3,param_4,&local_4,param_5);
  return local_4;
}


// ---- FUN_10017020 @ 10017020

undefined4 __thiscall FUN_10017020(void *this,int param_1,int param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_10013830(this,param_1);
  }
  iVar1 = FUN_10013870(this,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_10021980(*(void **)(iVar1 + 0x58),0,param_3);
    if (iVar2 != 1) {
      (**(code **)(*param_4 + 4))(0x10a,0,0,0);
      return 1;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x50) != -1) {
      (**(code **)(*param_4 + 4))(0x107,0,0,0);
      return 1;
    }
    iVar2 = FUN_10021980(*(void **)(iVar1 + 0x58),iVar2,param_3);
    if (iVar2 != 1) {
      (**(code **)(*param_4 + 4))(0x107,0,0,0);
    }
  }
  return 1;
}


// ---- FUN_100170d0 @ 100170d0

undefined4 __thiscall
FUN_100170d0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_10013870(this,param_1);
  bVar1 = FUN_10024cb0(*(void **)(iVar2 + 0x58),param_2,param_3,param_4,param_5,param_6,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    (**(code **)(*param_8 + 4))(0x385,1,0,0);
  }
  return 1;
}


// ---- FUN_10017130 @ 10017130

undefined4 __thiscall
FUN_10017130(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_10013870(this,param_1);
  iVar1 = FUN_10024de0(*(void **)(iVar1 + 0x58),param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    (**(code **)(*param_6 + 4))(0x386,1,0,0);
  }
  return 1;
}


// ---- FUN_100171d0 @ 100171d0

void __thiscall FUN_100171d0(void *this,int param_1,int param_2,int *param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  IMAGE_DOS_HEADER *pIVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar1 = FUN_10013870(this,param_2);
  iVar2 = FUN_10013830(this,param_1);
  this_00 = *(void **)(iVar1 + 0x58);
  if (((*(int *)(iVar1 + 0x8c) == -9999) && (*(int *)(iVar1 + 0x88) != -9999)) &&
     (*(int *)(iVar1 + 0x88) != 0)) {
    iVar5 = *(int *)(iVar1 + 0x9c);
    if (iVar5 != 0) {
      iVar3 = FUN_10012b50(0,param_1,this,iVar5,*(uint *)((int)this + 0x70) | 0xc00000);
      iVar4 = iVar5;
      if (iVar3 == 0) {
        iVar4 = MnatGetMilDriverId(iVar5);
        iVar4 = FUN_10013830(this,iVar4);
        FUN_100233b0(this_00,0xc17,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
        *(undefined4 *)(iVar1 + 0x9c) = 0;
        *(undefined4 *)(iVar4 + 0x80) = 0;
        iVar4 = 0;
        MbufFree(iVar5);
      }
      if (iVar4 != 0) goto LAB_100172fc;
    }
    iVar5 = FUN_10012930(0,param_1,this,0,*(uint *)((int)this + 0x6c) | 0x10,0,0);
    if (iVar5 == 0) {
      (**(code **)(*param_3 + 4))(0x389,1,0,0);
    }
    else {
      iVar4 = MnatGetMilDriverId(iVar5);
      pIVar6 = (IMAGE_DOS_HEADER *)FUN_10013830(this,iVar4);
      pIVar6[1].e_magic[0] = (undefined1)param_2;
      pIVar6[1].e_magic[1] = param_2._1_1_;
      pIVar6[1].e_cblp = param_2._2_2_;
      *(int *)(iVar1 + 0x9c) = iVar5;
      FUN_100233b0(this_00,0xc17,pIVar6,1,(uint *)0x0);
    }
  }
LAB_100172fc:
  if ((*(int *)(iVar1 + 0x88) == -9999) || (*(int *)(iVar1 + 0x88) == 0)) goto LAB_10017432;
  bVar8 = false;
  iVar5 = *(int *)(iVar1 + 0x98);
  if (iVar5 == 0) {
LAB_10017393:
    iVar5 = FUN_10012930(0,param_1,this,1,*(uint *)((int)this + 0x68) | 0x10,0,
                         *(int *)(*(int *)(iVar1 + 0x78) + 0x70));
    if (iVar5 == 0) {
      (**(code **)(*param_3 + 4))(0x389,2,0,0);
    }
    else {
      iVar4 = MnatGetMilDriverId(iVar5);
      pIVar6 = (IMAGE_DOS_HEADER *)FUN_10013830(this,iVar4);
      *(int *)(pIVar6->e_program + 0x3c) = param_2;
      uVar7 = MbufInquire(iVar5,0x1392,0);
      *(undefined4 *)(pIVar6->e_program + 0x20) = uVar7;
      *(int *)(iVar1 + 0x98) = iVar5;
      FUN_100233b0(this_00,0xc15,pIVar6,0,(uint *)0x0);
      bVar8 = true;
    }
  }
  else {
    iVar4 = FUN_10012b50(0,param_1,this,iVar5,*(uint *)((int)this + 0x70) | 0xc00000);
    bVar8 = iVar4 == 0;
    iVar4 = iVar5;
    if (bVar8) {
      iVar4 = MnatGetMilDriverId(iVar5);
      iVar4 = FUN_10013830(this,iVar4);
      FUN_100233b0(this_00,0xc15,(IMAGE_DOS_HEADER *)0x0,0,(uint *)0x0);
      *(undefined4 *)(iVar1 + 0x98) = 0;
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      iVar4 = 0;
      MbufFree(iVar5);
    }
    if (iVar4 == 0) goto LAB_10017393;
  }
  if (bVar8) {
    FUN_100233b0(this_00,0xc0b,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
  }
LAB_10017432:
  iVar5 = *(int *)(iVar1 + 0x98);
  if (iVar5 != 0) {
    iVar4 = MnatGetMilDriverId(iVar5);
    iVar4 = FUN_10013830(this,iVar4);
    if (*(int *)(iVar4 + 0x5c) == 0) {
      MappHookFunction(iVar5 + 0x2000000,&LAB_10015790,this_00);
      *(undefined4 *)(iVar4 + 0x5c) = 1;
    }
  }
  if (*(int *)(iVar1 + 0x3c) != 0) {
    iVar5 = FUN_10013830(this,*(int *)(iVar1 + 0x3c));
    if (*(int *)(iVar5 + 0x5c) == 1) {
      MappHookFunction(*(int *)(iVar1 + 0x80) + 0x6000000,&LAB_100156a0,this_00);
      *(undefined4 *)(iVar5 + 0x5c) = 0;
    }
    else {
      *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 0x5c) + -1;
    }
  }
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x5c) != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      return;
    }
    MappHookFunction(*(int *)(iVar2 + 0x70) + 0x2000000,&LAB_100156a0,this_00);
    *(undefined4 *)(iVar2 + 0x5c) = 1;
  }
  return;
}


// ---- FUN_10017500 @ 10017500

void __thiscall FUN_10017500(void *this,undefined4 param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_10013870(this,param_2);
  iVar3 = FUN_10013830(this,*(int *)(iVar2 + 0x3c));
  this_00 = *(void **)(iVar2 + 0x58);
  if ((*(int *)(iVar2 + 0x8c) == -9999) && (iVar1 = *(int *)(iVar2 + 0x9c), iVar1 != 0)) {
    iVar4 = MnatGetMilDriverId(iVar1);
    iVar4 = FUN_10013830(this,iVar4);
    FUN_100233b0(this_00,0xc17,(IMAGE_DOS_HEADER *)0x0,1,(uint *)0x0);
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    MbufFree(iVar1);
  }
  if ((*(int *)(iVar2 + 0x88) == -0x270d) && (iVar1 = *(int *)(iVar2 + 0x98), iVar1 != 0)) {
    MappHookFunction(iVar1 + 0x2000000U | 0x4000000,&LAB_10015790,this_00);
    iVar4 = MnatGetMilDriverId(iVar1);
    iVar4 = FUN_10013830(this,iVar4);
    FUN_100233b0(this_00,0xc15,(IMAGE_DOS_HEADER *)0x0,0,(uint *)0x0);
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x7c) = 0;
    MbufFree(iVar1);
  }
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x5c) != 1) {
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + -1;
      return;
    }
    MappHookFunction(*(int *)(iVar2 + 0x80) + 0x6000000,&LAB_100156a0,this_00);
    *(undefined4 *)(iVar3 + 0x5c) = 0;
  }
  return;
}


// ---- FUN_10017640 @ 10017640

undefined4 __thiscall FUN_10017640(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  tagPOINT local_28;
  CHAR local_20 [4];
  undefined4 local_1c;
  int local_18 [2];
  uint local_10;
  uint local_c;
  
  local_1c = 1;
  bVar1 = false;
  iVar2 = FUN_10013870(this,param_1);
  hdc = CreateDCA(s_DISPLAY_10032038,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  if (hdc != (HDC)0x0) {
    local_20[0] = '\b';
    local_20[1] = -0x80;
    local_20[2] = '\0';
    local_20[3] = '\0';
    iVar3 = ExtEscape(hdc,8,4,local_20,0,(LPSTR)0x0);
    if (iVar3 == 0) {
      local_20[0] = -0x17;
      local_20[1] = 'X';
      local_20[2] = 'T';
      local_20[3] = 'M';
      iVar3 = ExtEscape(hdc,8,4,local_20,0,(LPSTR)0x0);
      if (iVar3 != 0) goto LAB_100176ad;
    }
    else {
LAB_100176ad:
      bVar1 = true;
    }
    DeleteDC(hdc);
  }
  if (!bVar1) {
    (**(code **)(*param_4 + 4))(0x387,1,0,0);
    return 0;
  }
  GetCursorPos(&local_28);
  SetCursorPos(param_2,param_3);
  FUN_100102b0(local_18);
  iVar3 = param_2 + local_10 / *(uint *)(iVar2 + 0x28);
  iVar2 = param_3 + local_c / *(uint *)(iVar2 + 0x2c);
  SetCursorPos(iVar3,iVar2);
  SetCursorPos(param_2,param_3);
  if (local_28.x < param_2) {
LAB_1001774f:
    local_28.x = param_2;
  }
  else {
    if (((local_28.x < iVar3) && (param_3 <= local_28.y)) && (local_28.y < iVar2))
    goto LAB_10017779;
    if (local_28.x < param_2) goto LAB_1001774f;
  }
  if (iVar3 <= local_28.x) {
    local_28.x = iVar3 + -1;
  }
  if (local_28.y < param_3) {
    local_28.y = param_3;
  }
  if (iVar2 <= local_28.y) {
    local_28.y = iVar2 + -1;
  }
LAB_10017779:
  SetCursorPos(local_28.x,local_28.y);
  return local_1c;
}


// ---- FUN_100177a0 @ 100177a0

undefined4 __thiscall FUN_100177a0(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  HDC pHVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  int local_10;
  int local_c;
  int local_8;
  CHAR local_4 [4];
  
  bVar2 = false;
  bVar1 = false;
  FUN_10013870(this,param_1);
  local_c = 0;
  pHVar3 = CreateDCA(s_DISPLAY_10032040,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  pcVar5 = DeleteDC_exref;
  if (pHVar3 != (HDC)0x0) {
    local_10 = 0x8008;
    iVar4 = ExtEscape(pHVar3,8,4,(LPCSTR)&local_10,0,(LPSTR)0x0);
    if (iVar4 == 0) {
      local_10 = 0x4d5458e9;
      iVar4 = ExtEscape(pHVar3,8,4,(LPCSTR)&local_10,0,(LPSTR)0x0);
      if (iVar4 != 0) {
        bVar2 = true;
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
      local_c = 1;
    }
    pcVar5 = DeleteDC_exref;
    DeleteDC(pHVar3);
  }
  if (bVar1) {
    if ((param_3 == param_2) && (((param_2 == 1 || (param_2 == 2)) || (param_2 == 4)))) {
      if (local_c != 0) {
        pHVar3 = CreateDCA(s_DISPLAY_10032048,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
        if (pHVar3 == (HDC)0x0) {
          return 1;
        }
        local_c = -0x3b275317;
        local_8 = param_2;
        ExtEscape(pHVar3,0x8008,8,(LPCSTR)&local_c,4,local_4);
        (*pcVar5)(pHVar3);
        return 1;
      }
      if (!bVar2) {
        return 1;
      }
      pHVar3 = CreateDCA(s_DISPLAY_10032050,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
      if (pHVar3 == (HDC)0x0) {
        return 1;
      }
      local_10 = param_2;
      ExtEscape(pHVar3,0x4d5458e9,4,(LPCSTR)&local_10,0,(LPSTR)0x0);
      (*pcVar5)(pHVar3);
      return 1;
    }
    uVar6 = 0xe9;
  }
  else {
    uVar6 = 0x387;
  }
  (**(code **)(*param_4 + 4))(uVar6,2,0,0);
  return 0;
}


// ---- FUN_10017930 @ 10017930

void FUN_10017930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  Ordinal_100(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// ---- FUN_10017970 @ 10017970

void FUN_10017970(undefined4 param_1)

{
  Ordinal_101(param_1);
  return;
}


// ---- FUN_10017980 @ 10017980

void FUN_10017980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Ordinal_102(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_100179d0 @ 100179d0

undefined4 FUN_100179d0(void *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  ushort uVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  uint uVar18;
  uint local_108;
  uint local_104;
  byte local_100 [256];
  
  if ((param_3[0x23] == 0x46) || (bVar17 = false, param_3[0x23] == 0x47)) {
    bVar17 = true;
  }
  if (bVar17) {
    if ((param_2 & 2) != 0) {
      puVar13 = param_3 + 0x27;
      puVar14 = &DAT_10033248;
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    if ((param_2 & 4) != 0) {
      puVar13 = param_3 + 0x27;
      puVar14 = &DAT_10033268;
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    bVar7 = FUN_1001a380((HWND)param_3[0x27],*(HWND *)((int)param_1 + 0x42c));
    if ((CONCAT31(extraout_var,bVar7) == 0) &&
       (bVar7 = FUN_1001a340((HWND)param_3[0x27]), CONCAT31(extraout_var_00,bVar7) == 0)) {
      return 1;
    }
  }
  if (((bVar17) && ((param_2 & 2) != 0)) && (((byte)*param_4 & 6) == 6)) {
    pbVar10 = (byte *)(param_3 + 3);
    pbVar11 = &DAT_10032100;
    do {
      bVar2 = *pbVar10;
      bVar7 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_10017ac2:
        iVar9 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10017ac7;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar10[1];
      bVar7 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_10017ac2;
      pbVar10 = pbVar10 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_10017ac7:
    if (iVar9 != 0) {
      return 1;
    }
  }
  if (((bVar17) && ((param_2 & 4) != 0)) && (((byte)*param_4 & 6) == 6)) {
    pbVar10 = (byte *)(param_3 + 3);
    pbVar11 = &DAT_10032108;
    do {
      bVar2 = *pbVar10;
      bVar7 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_10017b17:
        iVar9 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10017b1c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar10[1];
      bVar7 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_10017b17;
      pbVar10 = pbVar10 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_10017b1c:
    if (iVar9 == 0) {
      return 1;
    }
    if (((param_3[0x2d] & 4) == 0) && (DAT_1003324c != DAT_1003326c)) {
      DAT_1003326c = DAT_1003324c;
      param_3[0x28] = DAT_1003324c;
    }
  }
  if (*(int *)((int)param_1 + 0x620) != 0) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032114,&DAT_10032110);
    sprintf(&DAT_10033488,s_Entering_MessageWndHookProc__Ty__10032124,param_2,*param_3,param_3[2],
            param_3[0x23],param_3[0x24],param_3[0x25]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if ((bVar17) && (*(int *)((int)param_1 + 0x620) != 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032180,&DAT_1003217c);
    sprintf(&DAT_10033488,s_Passed_MessageWndHookProc_WINDOW_10032190,param_3[0x27],param_3[0x28],
            param_3[0x29],param_3[0x2a],param_3[0x2b],param_3[0x2c],param_3[0x2d]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if (((param_2 & 2) != 0) || ((param_2 & 4) != 0)) {
    if (*(int *)((int)param_1 + 0x620) != 0) {
      if ((param_2 & 2) == 0) {
        DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032240,&DAT_1003223c);
        sprintf(&DAT_10033488,s_CallWndProcRet_Wnd__08lX_Message_10032250,param_3[2],param_3[0x23],
                param_3[0x24],param_3[0x25]);
        if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
          fprintf((FILE *)DAT_10033240,&DAT_10033488);
        }
        OutputDebugStringA(&DAT_10033488);
      }
      else {
        DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_100321f4,&DAT_100321f0);
        sprintf(&DAT_10033488,s_CallWndProc_Wnd__08lX_Message__0_10032204,param_3[2],param_3[0x23],
                param_3[0x24],param_3[0x25]);
        if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
          fprintf((FILE *)DAT_10033240,&DAT_10033488);
        }
        OutputDebugStringA(&DAT_10033488);
      }
      if ((FILE *)DAT_10033240 != (FILE *)0x0) {
        fflush((FILE *)DAT_10033240);
      }
      fclose((FILE *)DAT_10033240);
    }
    if ((bVar17) && (*(int *)((int)param_1 + 0x620) != 0)) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032290,&DAT_1003228c);
      sprintf(&DAT_10033488,s_Getting_MessageWndHookProc_WINDO_100322a0,param_3[0x27],param_3[0x28],
              param_3[0x29],param_3[0x2a],param_3[0x2b],param_3[0x2c],param_3[0x2d]);
      if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      OutputDebugStringA(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      fclose((FILE *)DAT_10033240);
    }
    FUN_100189c0(param_1,param_2,(int)param_3);
  }
  if ((param_2 & 1) != 0) {
    if (*(int *)((int)param_1 + 0x620) != 0) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032304,&DAT_10032300);
      sprintf(&DAT_10033488,s_GetMessage_Wnd__08lX_Message__08_10032314,param_3[2],param_3[0x23],
              param_3[0x24],param_3[0x25]);
      if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      OutputDebugStringA(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      fclose((FILE *)DAT_10033240);
    }
    uVar18 = param_3[0x23];
    if ((((0xbfff < uVar18) && (uVar18 < 0x10000)) && (*(uint *)((int)param_1 + 0x624) == uVar18))
       && ((*(char *)(param_3 + 0x24) == '\x04' && (param_3[0x25] != 0)))) {
      if (*(int *)((int)param_1 + 0x620) != 0) {
        DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032350,&DAT_1003234c);
        sprintf(&DAT_10033488,s_SHELLHOOK_HSHELL_WINDOWACTIVATED_10032360);
        if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
          fprintf((FILE *)DAT_10033240,&DAT_10033488);
        }
        OutputDebugStringA(&DAT_10033488);
        if (DAT_10033240 != 0) {
          fflush((FILE *)DAT_10033240);
        }
        fclose((FILE *)DAT_10033240);
      }
      iVar9 = GetClassNameA((HWND)param_3[0x25],(LPSTR)local_100,0x100);
      if (iVar9 != 0) {
        pbVar10 = local_100;
        pcVar12 = s_ConsoleWindowClass_1003238c;
        do {
          bVar2 = *pbVar10;
          bVar17 = bVar2 < (byte)*pcVar12;
          if (bVar2 != *pcVar12) {
LAB_1001809b:
            iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_100180a0;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar10[1];
          bVar17 = bVar2 < (byte)pcVar12[1];
          if (bVar2 != pcVar12[1]) goto LAB_1001809b;
          pbVar10 = pbVar10 + 2;
          pcVar12 = pcVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_100180a0:
        pbVar11 = &DAT_100323a0;
        pbVar10 = local_100;
        local_108 = (uint)(iVar9 == 0);
        do {
          bVar2 = *pbVar10;
          bVar17 = bVar2 < *pbVar11;
          if (bVar2 != *pbVar11) {
LAB_100180d4:
            iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_100180d9;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar10[1];
          bVar17 = bVar2 < pbVar11[1];
          if (bVar2 != pbVar11[1]) goto LAB_100180d4;
          pbVar10 = pbVar10 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_100180d9:
        local_104 = (uint)(iVar9 == 0);
        if ((local_108 != 0) || (local_104 != 0)) {
          iVar9 = *(int *)((int)param_1 + 0x5fc);
          FUN_10026f40(param_1);
          FUN_100253e0(param_1,*(int *)((int)param_1 + 0x470),0,2,0x20000002);
          if ((iVar9 != 0) && (local_108 != 0)) {
            RedrawWindow((HWND)param_3[0x25],(RECT *)0x0,(HRGN)0x0,0x705);
          }
          FUN_100253e0(param_1,*(int *)((int)param_1 + 0x470),2,2,0x10000002);
        }
      }
      uVar8 = GetAsyncKeyState(0x11);
      *(uint *)((int)param_1 + 0x604) = (uint)((uVar8 & 0x8000) != 0);
      uVar8 = GetAsyncKeyState(0x12);
      *(uint *)((int)param_1 + 0x608) = (uint)((uVar8 & 0x8000) != 0);
      uVar8 = GetAsyncKeyState(0x2e);
      *(uint *)((int)param_1 + 0x60c) = (uint)((uVar8 & 0x8000) != 0);
      uVar8 = GetAsyncKeyState(9);
      *(uint *)((int)param_1 + 0x610) = (uint)((uVar8 & 0x8000) != 0);
      if (*(int *)((int)param_1 + 0x608) + *(int *)((int)param_1 + 0x604) == 0) {
        FUN_10026f40(param_1);
        if ((((local_108 == 0) && (local_104 == 0)) &&
            (iVar9 = *(int *)((int)param_1 + 0x470), iVar9 != 0)) && (*(int *)(iVar9 + 8) == 1)) {
          FUN_100253e0(param_1,iVar9,0,1,0x20000002);
          FUN_100253e0(param_1,*(int *)((int)param_1 + 0x470),3,1,0x10000002);
        }
        FUN_10017980(*(undefined4 *)((int)param_1 + 0x5e4),7,0,0);
        *(undefined4 *)((int)param_1 + 0x600) = 0;
      }
    }
    if ((param_3[0x23] == 0x4b) && (*(int *)((int)param_1 + 0x620) != 0)) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_100323a8,&DAT_100323a4);
      sprintf(&DAT_10033488,s_WM_CANCELJOURNAL_received_100323b8);
      if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      OutputDebugStringA(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      fclose((FILE *)DAT_10033240);
    }
  }
  if (((param_2 & 8) != 0) && (*(int *)((int)param_1 + 0x620) != 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_100324f8,&DAT_100324f4);
    sprintf(&DAT_10033488,s_ShellProc_Code__08lX_Name__64s_w_10032508,param_3[0x23],
            (&PTR_s_Undefined_0_10032060)[param_3[0x23]],param_3[0x24],param_3[0x25]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if (((param_2 & 0x10) != 0) && (*(int *)((int)param_1 + 0x620) != 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032638,&DAT_10032634);
    sprintf(&DAT_10033488,s_CBTProc_Code__08lX_Name__64s_wP__10032648,param_3[0x23],
            (&PTR_s_HCBT_MOVESIZE_100320a0)[param_3[0x23]],param_3[0x24],param_3[0x25]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if (((param_2 & 0x20) != 0) && (*(int *)((int)param_1 + 0x620) != 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_100326e0,&DAT_100326dc);
    sprintf(&DAT_10033488,s_JournalRecordProc_Code__08lX_Nam_100326f0,param_3[0x23],
            (&PTR_s_HC_ACTION_100320e0)[param_3[0x23]],param_3[0x24],param_3[0x25]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if ((param_2 & 0x40) == 0) goto LAB_100188f3;
  if ((*(int *)((int)param_1 + 0x620) != 0) && (param_3[0x23] == 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032730,&DAT_1003272c);
    sprintf(&DAT_10033488,s_KeyboardProc_HC_ACTION_wP__08lX_l_10032740,param_3[0x24],param_3[0x25]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  bVar17 = ((uint)param_3[0x25] >> 0x10 & 0x8000) == 0;
  iVar9 = param_3[0x24];
  if (iVar9 == 0x11) {
LAB_100185c4:
    *(uint *)((int)param_1 + 0x604) = (uint)bVar17;
  }
  else {
    if (((iVar9 != 0x12) && (iVar9 != 0x2e)) && (iVar9 != 9)) goto LAB_100188f3;
    if (iVar9 == 0x11) goto LAB_100185c4;
  }
  if (param_3[0x24] == 0x12) {
    *(uint *)((int)param_1 + 0x608) = (uint)bVar17;
  }
  if (param_3[0x24] == 0x2e) {
    *(uint *)((int)param_1 + 0x60c) = (uint)bVar17;
  }
  if (param_3[0x24] == 9) {
    *(uint *)((int)param_1 + 0x610) = (uint)bVar17;
  }
  if (*(int *)((int)param_1 + 0x620) != 0) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032770,&DAT_1003276c);
    sprintf(&DAT_10033488,&DAT_10032780);
    if (*(int *)((int)param_1 + 0x604) == 0) {
      pcVar12 = s_KEY_Status___ctrl_10032798;
    }
    else {
      pcVar12 = s_KEY_Status___CTRL_10032784;
    }
    iVar9 = -1;
    pcVar15 = &DAT_10033488;
    do {
      pcVar16 = pcVar15;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar1 != '\0');
    uVar4 = *(undefined4 *)(pcVar12 + 4);
    uVar5 = *(undefined4 *)(pcVar12 + 8);
    *(undefined4 *)(pcVar16 + -1) = *(undefined4 *)pcVar12;
    uVar6 = *(undefined4 *)(pcVar12 + 0xc);
    *(undefined4 *)(pcVar16 + 3) = uVar4;
    uVar3 = *(undefined2 *)(pcVar12 + 0x10);
    *(undefined4 *)(pcVar16 + 7) = uVar5;
    *(undefined4 *)(pcVar16 + 0xb) = uVar6;
    *(undefined2 *)(pcVar16 + 0xf) = uVar3;
    if (*(int *)((int)param_1 + 0x608) == 0) {
      puVar13 = (undefined4 *)&DAT_100327b4;
    }
    else {
      puVar13 = &DAT_100327ac;
    }
    iVar9 = -1;
    pcVar12 = &DAT_10033488;
    do {
      pcVar15 = pcVar12;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar15 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar15;
    } while (cVar1 != '\0');
    cVar1 = *(char *)(puVar13 + 1);
    *(undefined4 *)(pcVar15 + -1) = *puVar13;
    pcVar15[3] = cVar1;
    if (*(int *)((int)param_1 + 0x60c) == 0) {
      puVar13 = (undefined4 *)&DAT_100327c4;
    }
    else {
      puVar13 = &DAT_100327bc;
    }
    iVar9 = -1;
    pcVar12 = &DAT_10033488;
    do {
      pcVar15 = pcVar12;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar15 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar15;
    } while (cVar1 != '\0');
    cVar1 = *(char *)(puVar13 + 1);
    *(undefined4 *)(pcVar15 + -1) = *puVar13;
    pcVar15[3] = cVar1;
    if (*(int *)((int)param_1 + 0x610) == 0) {
      pcVar12 = s__tab_100327d4;
    }
    else {
      pcVar12 = (char *)&DAT_100327cc;
    }
    iVar9 = -1;
    pcVar15 = &DAT_10033488;
    do {
      pcVar16 = pcVar15;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar1 != '\0');
    uVar3 = *(undefined2 *)(pcVar12 + 4);
    *(undefined4 *)(pcVar16 + -1) = *(undefined4 *)pcVar12;
    iVar9 = DAT_10033240;
    *(undefined2 *)(pcVar16 + 3) = uVar3;
    if ((iVar9 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if (0 < *(int *)((int)param_1 + 0x608) + *(int *)((int)param_1 + 0x604)) {
    if (*(int *)((int)param_1 + 0x620) != 0) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_100327e0,&DAT_100327dc);
      sprintf(&DAT_10033488,s_Ctrl_Alt_Del_goto_CONTINUOUS_to_P_100327f0);
      if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      OutputDebugStringA(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      fclose((FILE *)DAT_10033240);
    }
    FUN_100253e0(param_1,*(int *)((int)param_1 + 0x470),0,0,0x20000002);
    FUN_100253e0(param_1,*(int *)((int)param_1 + 0x470),2,0,0x10000002);
    FUN_10017980(*(undefined4 *)((int)param_1 + 0x5e4),7,
                 (uint)(*(int *)((int)param_1 + 0x608) + *(int *)((int)param_1 + 0x604) < 2),0);
    *(undefined4 *)((int)param_1 + 0x600) = 1;
  }
  if ((*(int *)((int)param_1 + 0x608) + *(int *)((int)param_1 + 0x604) == 0) &&
     (*(int *)((int)param_1 + 0x600) != 0)) {
    FUN_100253e0(param_1,*(int *)((int)param_1 + 0x470),0,0,0x20000002);
    iVar9 = *(int *)((int)param_1 + 0x470);
    if ((iVar9 == 0) || (*(int *)(iVar9 + 8) != 1)) {
      uVar18 = 2;
    }
    else {
      uVar18 = 3;
    }
    FUN_100253e0(param_1,iVar9,uVar18,0,0x10000002);
    FUN_10017980(*(undefined4 *)((int)param_1 + 0x5e4),7,0,0);
    *(undefined4 *)((int)param_1 + 0x600) = 0;
  }
LAB_100188f3:
  if (*(int *)((int)param_1 + 0x620) != 0) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_1003281c,&DAT_10032818);
    sprintf(&DAT_10033488,s_Leaving_MessageWndHookProc__Ty___1003282c,param_2,*param_3,param_3[2],
            param_3[0x23],param_3[0x24],param_3[0x25]);
    if ((DAT_10033240 != 0) && (*(int *)((int)param_1 + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  return 1;
}


// ---- FUN_100189c0 @ 100189c0

void __thiscall FUN_100189c0(void *this,uint param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  HWND pHVar5;
  undefined3 extraout_var;
  byte *pbVar6;
  undefined3 extraout_var_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  RECT *pRVar16;
  int *piVar17;
  int local_11c;
  DWORD local_118;
  int local_114;
  HWND local_110;
  uint local_10c;
  HWND local_108;
  HWND local_104;
  undefined1 local_100 [16];
  tagRECT local_f0;
  RECT local_e0;
  tagRECT local_d0;
  HRGN local_c0;
  HRGN local_bc;
  HRGN local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_70;
  int local_6c;
  tagPOINT local_68;
  RECT local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  HRGN local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
  bVar4 = false;
  piVar11 = (int *)(param_2 + 0x9c);
  if (DAT_1003205c != (HWND)0x0) {
    SendMessageA(DAT_1003205c,0x111,0x1390,0);
  }
  if ((*(int *)(param_2 + 0x8c) == 0x46) || (bVar3 = false, *(int *)(param_2 + 0x8c) == 0x47)) {
    bVar3 = true;
  }
  if (((bVar3) || (*(int *)((int)this + 0x5e8) != 0)) && (*(int *)((int)this + 0x620) != 0)) {
    bVar4 = true;
  }
  if ((bVar3) && (*(int *)((int)this + 0x620) != 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032888,&DAT_10032884);
    sprintf(&DAT_10033488,s_Handling_HandleClipListChange_WI_10032898,*piVar11,
            *(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4),
            *(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac),
            *(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
    if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
    if (*(int *)((int)this + 0x620) != 0) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032900,&DAT_100328fc);
      sprintf(&DAT_10033488,s_Analysing_MessageWndHookProc_WIN_10032910,*piVar11,
              *(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4),
              *(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac),
              *(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
      if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      OutputDebugStringA(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      fclose((FILE *)DAT_10033240);
    }
  }
  if (bVar4) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032978,&DAT_10032974);
    sprintf(&DAT_10033488,s_Type__02d_Wnd__08lX_Msg__04lX_wP_10032988,param_1,
            *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x8c),
            *(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94),
            *(undefined4 *)(param_2 + 0x98));
    iVar8 = *(int *)((int)this + 0x470);
    if (iVar8 != 0) {
      sprintf((char *)&DAT_10033288,s_NbRect__03ld___04ld__04ld__04ld__100329c4,
              *(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14)
              ,*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x1c));
      uVar7 = 0xffffffff;
      pcVar12 = (char *)&DAT_10033288;
      do {
        pcVar15 = pcVar12;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar8 = -1;
      pcVar12 = &DAT_10033488;
      do {
        pcVar14 = pcVar12;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar1 != '\0');
      pcVar12 = pcVar15 + -uVar7;
      pcVar15 = pcVar14 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    sprintf(&DAT_10033488,&DAT_100329ec);
    if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    fclose((FILE *)DAT_10033240);
  }
  if (*(int *)(param_2 + 0x8c) == 0x46) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
    local_11c = *(int *)((int)this + 0x478);
    local_118 = *(DWORD *)((int)this + 0x47c);
    if ((*(int *)((int)this + 0x470) == 0) || (local_11c == 0)) goto LAB_10019d9d;
    local_114 = 0;
    local_110 = (HWND)0x0;
    local_10c = 0;
    local_108 = (HWND)0x0;
    local_104 = (HWND)0x0;
    local_c0 = (HRGN)0x0;
    local_bc = (HRGN)0x0;
    local_b8 = (HRGN)0x0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 1;
    local_94 = 0;
    local_110 = GetParent((HWND)*piVar11);
    local_10c = GetWindowLongA((HWND)*piVar11,-0x10);
    local_108 = GetWindow((HWND)*piVar11,3);
    local_108 = FUN_1001a1e0(this,local_108,0);
    GetWindowRect((HWND)*piVar11,&local_f0);
    local_b4 = (local_10c & 0x10000000) >> 0x1c;
    pHVar5 = local_108;
    if ((*(uint *)(param_2 + 0xb4) & 4) == 0) {
      pHVar5 = *(HWND *)(param_2 + 0xa0);
      if (pHVar5 == (HWND)0x0) {
        pHVar5 = GetWindow((HWND)*piVar11,0);
        if ((pHVar5 == (HWND)0x0) || ((HWND)*piVar11 == pHVar5)) {
          local_104 = (HWND)0x0;
          pHVar5 = local_104;
        }
        else {
          pHVar5 = GetWindow(pHVar5,3);
        }
      }
      else if (pHVar5 == (HWND)0x1) {
        pHVar5 = GetWindow((HWND)*piVar11,1);
        if ((pHVar5 != (HWND)0x0) && (pHVar5 == (HWND)*piVar11)) {
          pHVar5 = GetWindow((HWND)*piVar11,3);
        }
      }
      else if (pHVar5 == (HWND)0xffffffff) {
        pHVar5 = GetWindow((HWND)*piVar11,0);
        if ((pHVar5 == (HWND)0x0) || ((HWND)*piVar11 == pHVar5)) {
          local_104 = (HWND)0x0;
          pHVar5 = local_104;
        }
        else {
          pHVar5 = GetWindow(pHVar5,3);
        }
      }
      else if (pHVar5 == (HWND)0xfffffffe) {
        pHVar5 = GetWindow((HWND)*piVar11,0);
        if ((pHVar5 == (HWND)0x0) || ((HWND)*piVar11 == pHVar5)) {
          local_104 = (HWND)0x0;
          pHVar5 = local_104;
        }
        else {
          pHVar5 = GetWindow(pHVar5,3);
        }
      }
      local_104 = pHVar5;
      pHVar5 = FUN_1001a1e0(this,local_104,1);
    }
    local_104 = pHVar5;
    if ((*(uint *)(param_2 + 0xb4) & 2) == 0) {
      local_68.x = *(int *)(param_2 + 0xa4);
      local_68.y = *(int *)(param_2 + 0xa8);
      if ((local_110 != (HWND)0x0) && ((local_10c & 0x40000000) != 0)) {
        ClientToScreen(local_110,&local_68);
      }
      local_e0.left = local_68.x;
      local_e0.top = local_68.y;
    }
    else {
      local_e0.left = local_f0.left;
      local_e0.top = local_f0.top;
    }
    if ((*(uint *)(param_2 + 0xb4) & 1) == 0) {
      local_e0.right = *(int *)(param_2 + 0xac);
      local_e0.bottom = *(int *)(param_2 + 0xb0) + local_e0.top;
    }
    else {
      local_e0.right = local_f0.right - local_f0.left;
      local_e0.bottom = (local_e0.top - local_f0.top) + local_f0.bottom;
    }
    local_e0.right = local_e0.right + local_e0.left;
    uVar7 = *(uint *)(param_2 + 0xb4) & 0x40;
    if ((uVar7 != 0) || (local_b0 = local_b4, (*(uint *)(param_2 + 0xb4) & 0x80) != 0)) {
      local_b0 = (uint)(uVar7 != 0);
    }
    local_ac = (uint)(local_b4 != local_b0);
    local_a8 = (uint)(local_108 != local_104);
    if ((local_f0.top == local_e0.top) && (local_f0.left == local_e0.left)) {
      local_a4 = 0;
    }
    else {
      local_a4 = 1;
    }
    if (((local_e0.top - local_e0.bottom) + local_f0.bottom == local_f0.top) &&
       ((local_f0.right - local_f0.left) + local_e0.left == local_e0.right)) {
      local_a0 = 0;
    }
    else {
      local_a0 = 1;
    }
    local_9c = (*(uint *)(param_2 + 0xb4) & 0x20) >> 5;
    bVar4 = FUN_1001a3c0((HWND)*piVar11,*(HWND *)((int)this + 0x42c));
    local_94 = CONCAT31(extraout_var,bVar4);
    GetClientRect(*(HWND *)((int)this + 0x42c),(LPRECT)local_100);
    ClientToScreen(*(HWND *)((int)this + 0x42c),(LPPOINT)local_100);
    ClientToScreen(*(HWND *)((int)this + 0x42c),(LPPOINT)(local_100 + 8));
    IntersectRect(&local_d0,&local_f0,(RECT *)local_100);
    local_c0 = CreateRectRgnIndirect(&local_f0);
    local_bc = CreateRectRgnIndirect(&local_e0);
    local_b8 = CreateRectRgn(0,0,0,0);
    if (((local_b8 != (HRGN)0x0) && (local_c0 != (HRGN)0x0)) && (local_bc != (HRGN)0x0)) {
      CombineRgn(local_b8,local_c0,local_bc,(local_a8 == 0) + 2);
    }
    pRVar16 = &local_60;
    for (iVar8 = 0x18; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar16->left = 0;
      pRVar16 = (RECT *)&pRVar16->top;
    }
    local_60.left = local_d0.left;
    local_50 = 0;
    local_60.top = local_d0.top;
    local_60.right = local_d0.right;
    local_4c = 2;
    local_60.bottom = local_d0.bottom;
    local_38 = 1;
    local_34 = 1;
    if (local_b8 != (HRGN)0x0) {
      local_30 = local_b8;
      local_20 = 2;
      local_1c = 1;
    }
    FUN_10026d50(this,&local_60,&local_11c,&local_118);
    local_98 = (uint)(*(int *)(local_11c + 8) == 0);
    if (local_c0 != (HRGN)0x0) {
      DeleteObject(local_c0);
    }
    if (local_bc != (HRGN)0x0) {
      DeleteObject(local_bc);
    }
    if (local_b8 != (HRGN)0x0) {
      DeleteObject(local_b8);
    }
    local_11c = *(int *)((int)this + 0x478);
    local_118 = *(DWORD *)((int)this + 0x47c);
    pRVar16 = &local_60;
    for (iVar8 = 0x18; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar16->left = 0;
      pRVar16 = (RECT *)&pRVar16->top;
    }
    local_50 = 1;
    local_4c = 1;
    FUN_10026d50(this,&local_60,&local_11c,&local_118);
    if (((local_ac != 0) || (local_9c != 0)) ||
       (((local_b4 != 0 &&
         ((local_a8 != 0 || ((local_b4 != 0 && ((local_a4 != 0 || (local_a0 != 0)))))))) &&
        ((local_94 != 0 || (local_98 == 0)))))) {
      local_114 = 1;
    }
    if ((local_a8 != 0) && (pHVar5 = GetWindow((HWND)*piVar11,4), pHVar5 != (HWND)0x0)) {
      pbVar10 = &DAT_100329f0;
      pbVar6 = (byte *)(param_2 + 0xc);
      do {
        bVar2 = *pbVar6;
        bVar4 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_100192da:
          iVar8 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
          goto LAB_100192df;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar4 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_100192da;
        pbVar6 = pbVar6 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_100192df:
      if (iVar8 != 0) {
        FUN_1001a240(this,*piVar11,(int)local_104);
      }
    }
    if ((*(int *)((int)this + 0x5ec) != 0) &&
       ((*(int *)((int)this + 0x5f0) == 0 || (*(int *)((int)this + 0x5fc) != 0)))) {
      FUN_10019dc0(this,piVar11,local_11c);
    }
    if (DAT_10032058 != 0) {
      sprintf(&DAT_10033488,s_Before_Wnd__08lX_InsAfter__08lX_F_100329f8,*piVar11,
              *(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xb4));
      OutputDebugStringA(&DAT_10033488);
      sprintf(&DAT_10033488,s_cV__02d_fV__02d_cZ__04lX_fZ__04l_10032a24,local_b4,local_b0,local_108,
              local_104,local_f0.left,local_f0.top,local_f0.right - local_f0.left,
              local_f0.bottom - local_f0.top,local_e0.left,local_e0.top,
              local_e0.right - local_e0.left,local_e0.bottom - local_e0.top);
      OutputDebugStringA(&DAT_10033488);
      sprintf(&DAT_10033488,s_Cch__02d_chV__02d_chZ__02d_chP___10032a78,local_114,local_ac,local_a8,
              local_a4,local_a0,local_98,local_94);
      OutputDebugStringA(&DAT_10033488);
    }
    if (local_114 == 0) {
      if (((*(int *)((int)this + 0x5f4) != 0) && (*(int *)((int)this + 0x5f0) == 0)) &&
         (*(int *)((int)this + 0x620) != 0)) {
        DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032bbc,&DAT_10032bb8);
        sprintf(&DAT_10033488,s_NO_STOP_cV__02d_fV__02d_cZ__04lX_10032bcc,local_b4,local_b0,
                local_108,local_104,local_f0.left,local_f0.top,local_f0.right - local_f0.left,
                local_f0.bottom - local_f0.top,local_e0.left,local_e0.top,
                local_e0.right - local_e0.left,local_e0.bottom - local_e0.top,local_110);
        if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
          fprintf((FILE *)DAT_10033240,&DAT_10033488);
        }
        OutputDebugStringA(&DAT_10033488);
        goto joined_r0x100196be;
      }
    }
    else {
      FUN_100253e0(this,local_11c,2,0,0x20000002);
      if ((*(int *)((int)this + 0x5f4) != 0) && (*(int *)((int)this + 0x5f0) == 0)) {
        if (*(int *)((int)this + 0x5fc) == 0) {
          if (*(int *)((int)this + 0x620) != 0) {
            DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032b40,&DAT_10032b3c);
            sprintf(&DAT_10033488,s_STOP_PSEUDO_cV__02d_fV__02d_cZ___10032b50,local_b4,local_b0,
                    local_108,local_104,local_f0.left,local_f0.top,local_f0.right - local_f0.left,
                    local_f0.bottom - local_f0.top,local_e0.left,local_e0.top,
                    local_e0.right - local_e0.left,local_e0.bottom - local_e0.top,local_110);
            if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
              fprintf((FILE *)DAT_10033240,&DAT_10033488);
            }
            OutputDebugStringA(&DAT_10033488);
            goto joined_r0x100196be;
          }
        }
        else if (*(int *)((int)this + 0x620) != 0) {
          DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032ac4,&DAT_10032ac0);
          sprintf(&DAT_10033488,s_STOP_LIVE_cV__02d_fV__02d_cZ__04_10032ad4,local_b4,local_b0,
                  local_108,local_104,local_f0.left,local_f0.top,local_f0.right - local_f0.left,
                  local_f0.bottom - local_f0.top,local_e0.left,local_e0.top,
                  local_e0.right - local_e0.left,local_e0.bottom - local_e0.top,local_110);
          if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
            fprintf((FILE *)DAT_10033240,&DAT_10033488);
          }
          OutputDebugStringA(&DAT_10033488);
joined_r0x100196be:
          if ((FILE *)DAT_10033240 != (FILE *)0x0) {
            fflush((FILE *)DAT_10033240);
          }
          fclose((FILE *)DAT_10033240);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
  }
  if (*(int *)(param_2 + 0x8c) == 0x47) {
    FUN_10026790(this);
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
    local_6c = *(int *)((int)this + 0x470);
    local_68.x = *(int *)((int)this + 0x474);
    local_11c = *(int *)((int)this + 0x478);
    local_118 = *(DWORD *)((int)this + 0x47c);
    if ((local_6c == 0) || (local_11c == 0)) goto LAB_10019d9d;
    local_90 = 0;
    uVar7 = GetWindowLongA((HWND)*piVar11,-0x10);
    local_88 = (uVar7 & 0x10000000) >> 0x1c;
    local_84 = (uint)((*(uint *)(param_2 + 0xb4) & 0xc0) != 0);
    local_80 = (*(uint *)(param_2 + 0xb4) & 0x20) >> 5;
    bVar4 = FUN_1001a3c0((HWND)*piVar11,*(HWND *)((int)this + 0x42c));
    local_70 = CONCAT31(extraout_var_00,bVar4);
    if (*(uint *)(local_6c + 8) == *(uint *)(local_11c + 8)) {
      uVar7 = *(uint *)(local_11c + 8) & 0xfffffff;
      iVar8 = uVar7 << 2;
      bVar4 = uVar7 == 0;
      piVar13 = (int *)(local_11c + 0x20);
      piVar17 = (int *)(local_6c + 0x20);
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar4 = *piVar13 == *piVar17;
        piVar13 = piVar13 + 1;
        piVar17 = piVar17 + 1;
      } while (bVar4);
      if (!bVar4) goto LAB_100197e0;
      iVar8 = 1;
    }
    else {
LAB_100197e0:
      iVar8 = 0;
    }
    if ((local_11c == 0) || (*(int *)(local_11c + 8) != 1)) {
      local_7c = 0;
    }
    else {
      local_7c = 1;
    }
    if ((local_11c == 0) || (bVar4 = false, 1 < *(uint *)(local_11c + 8))) {
      bVar4 = true;
    }
    if (((local_84 != 0) || (local_80 != 0)) ||
       ((local_88 != 0 && ((local_70 != 0 || (iVar8 == 0)))))) {
      local_90 = 1;
    }
    FUN_1001a2b0(this,*piVar11);
    if ((*(int *)((int)this + 0x5ec) != 0) &&
       ((*(int *)((int)this + 0x5f0) == 0 || (*(int *)((int)this + 0x5fc) == 0)))) {
      FUN_10019dc0(this,piVar11,local_11c);
    }
    if (DAT_10032058 != 0) {
      sprintf(&DAT_10033488,s_After_Wnd__08lX_InsAfter__08lX_F_10032c30,*piVar11,
              *(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xb4));
      OutputDebugStringA(&DAT_10033488);
      sprintf(&DAT_10033488,s_Cch__02d_cV__02d_chV__02d_cSame__10032c5c,local_90,local_88,local_84,
              iVar8,local_70);
      OutputDebugStringA(&DAT_10033488);
    }
    if (local_90 == 0) {
      if (*(int *)((int)this + 0x618) < *(int *)((int)this + 0x614)) {
        FUN_10025a10();
      }
      if ((local_90 != 0) || (*(int *)((int)this + 0x618) < *(int *)((int)this + 0x614)))
      goto LAB_10019a0a;
      if (((*(int *)((int)this + 0x5f8) != 0) && (*(int *)((int)this + 0x5f0) == 0)) &&
         (*(int *)((int)this + 0x620) != 0)) {
        DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032d40,&DAT_10032d3c);
        sprintf(&DAT_10033488,s_NO_START_cV__02ld_ChangeVis__02d_10032d50,local_88,local_84);
        if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
          fprintf((FILE *)DAT_10033240,&DAT_10033488);
        }
        OutputDebugStringA(&DAT_10033488);
        if (DAT_10033240 != 0) {
          fflush((FILE *)DAT_10033240);
        }
        fclose((FILE *)DAT_10033240);
      }
    }
    else {
LAB_10019a0a:
      if ((local_7c == 0) || (*(int *)((int)this + 0x600) != 0)) {
        if (bVar4) {
          uVar7 = 2;
        }
        else {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 3;
      }
      FUN_100253e0(this,local_11c,uVar7,0,0x10000002);
      if ((*(int *)((int)this + 0x5f8) != 0) && (*(int *)((int)this + 0x5f0) == 0)) {
        if (local_7c == 0) {
          if (bVar4) {
            if (*(int *)((int)this + 0x620) != 0) {
              DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032ccc,&DAT_10032cc8);
              sprintf(&DAT_10033488,s_START_PSEUDO_cV__02d_ChangeVis___10032cdc,local_88,local_84);
              if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
                fprintf((FILE *)DAT_10033240,&DAT_10033488);
              }
              OutputDebugStringA(&DAT_10033488);
joined_r0x10019c01:
              if ((FILE *)DAT_10033240 != (FILE *)0x0) {
                fflush((FILE *)DAT_10033240);
              }
              fclose((FILE *)DAT_10033240);
            }
          }
          else if (*(int *)((int)this + 0x620) != 0) {
            DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032d08,&DAT_10032d04);
            sprintf(&DAT_10033488,s_STAYS_STILL_cV__02d_ChangeVis__0_10032d18,local_88,local_84);
            if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
              fprintf((FILE *)DAT_10033240,&DAT_10033488);
            }
            OutputDebugStringA(&DAT_10033488);
            goto joined_r0x10019c01;
          }
        }
        else if (*(int *)((int)this + 0x620) != 0) {
          DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032c94,&DAT_10032c90);
          sprintf(&DAT_10033488,s_START_LIVE_cV__02d_ChangeVis__02_10032ca4,local_88,local_84);
          if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
            fprintf((FILE *)DAT_10033240,&DAT_10033488);
          }
          OutputDebugStringA(&DAT_10033488);
          goto joined_r0x10019c01;
        }
      }
      *(int *)((int)this + 0x478) = local_6c;
      *(LONG *)((int)this + 0x47c) = local_68.x;
      *(int *)((int)this + 0x470) = local_11c;
      *(DWORD *)((int)this + 0x474) = local_118;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
  }
  if ((*(int *)(param_2 + 0x8c) != 0x114) && (*(int *)(param_2 + 0x8c) != 0x115)) {
    return;
  }
  if (*(int *)((int)this + 0x42c) == *(int *)(param_2 + 8)) {
    return;
  }
  if (*(int *)((int)this + 300) != -0x270d) {
    return;
  }
  if ((param_1 & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
    local_11c = *(int *)((int)this + 0x478);
    local_118 = *(DWORD *)((int)this + 0x47c);
    if ((*(int *)((int)this + 0x470) == 0) || (local_11c == 0)) goto LAB_10019d9d;
    FUN_100253e0(this,local_11c,2,0,0x20000002);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
  }
  if ((param_1 & 4) == 0) {
    return;
  }
  FUN_10026790(this);
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
  local_11c = *(int *)((int)this + 0x478);
  local_118 = *(DWORD *)((int)this + 0x47c);
  if ((*(int *)((int)this + 0x470) != 0) && (local_11c != 0)) {
    if ((local_11c == 0) || (bVar4 = false, 1 < *(uint *)(local_11c + 8))) {
      bVar4 = true;
    }
    if ((*(int *)(local_11c + 8) == 1) && (*(int *)((int)this + 0x600) == 0)) {
      uVar7 = 3;
    }
    else if (bVar4) {
      uVar7 = 2;
    }
    else {
      uVar7 = 0;
    }
    FUN_100253e0(this,local_11c,uVar7,0,0x10000002);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
    return;
  }
LAB_10019d9d:
  FUN_10025a10();
  return;
}


// ---- FUN_10019dc0 @ 10019dc0

void __thiscall FUN_10019dc0(void *this,undefined4 *param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  pcVar1 = sprintf_exref;
  pcVar2 = OutputDebugStringA_exref;
  pcVar3 = fclose_exref;
  if ((param_1 != (undefined4 *)0x0) && (*(int *)((int)this + 0x620) != 0)) {
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032d78,&DAT_10032d74);
    pcVar1 = sprintf_exref;
    sprintf(&DAT_10033488,s_Flags__08lX_cHWND__08lX_zHWND__0_10032d88,param_1[6],*param_1,param_1[1]
            ,param_1[2],param_1[3],param_1[4],param_1[5]);
    if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    pcVar2 = OutputDebugStringA_exref;
    OutputDebugStringA(&DAT_10033488);
    if (DAT_10033240 != 0) {
      fflush((FILE *)DAT_10033240);
    }
    pcVar3 = fclose_exref;
    fclose((FILE *)DAT_10033240);
  }
  if (*(int *)((int)this + 0x470) == 0) {
    if (*(int *)((int)this + 0x620) == 0) goto LAB_10019fa2;
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032dec,&DAT_10032de8);
    (*pcVar1)(&DAT_10033488,s_No_OLD_CLIP_available_10032dfc);
    if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    (*pcVar2)(&DAT_10033488);
  }
  else {
    FUN_1001a0e0(*(int *)((int)this + 0x470),(char *)&DAT_10033288);
    if (*(int *)((int)this + 0x620) == 0) goto LAB_10019fa2;
    DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032dc8,&DAT_10032dc4);
    (*pcVar1)(&DAT_10033488,s_OLD_CLIP__s_10032dd8,&DAT_10033288);
    if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
      fprintf((FILE *)DAT_10033240,&DAT_10033488);
    }
    (*pcVar2)(&DAT_10033488);
  }
  if ((FILE *)DAT_10033240 != (FILE *)0x0) {
    fflush((FILE *)DAT_10033240);
  }
  (*pcVar3)(DAT_10033240);
LAB_10019fa2:
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x620) != 0) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032e38,&DAT_10032e34);
      (*pcVar1)(&DAT_10033488,s_No_CLIP_available_10032e48);
      if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      (*pcVar2)(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      (*pcVar3)(DAT_10033240);
    }
  }
  else {
    FUN_1001a0e0(param_2,(char *)&DAT_10033288);
    if (*(int *)((int)this + 0x620) != 0) {
      DAT_10033240 = (int)fopen(s_C__TRACKING_DBG_10032e18,&DAT_10032e14);
      (*pcVar1)(&DAT_10033488,s_CLIP__s_10032e28,&DAT_10033288);
      if ((DAT_10033240 != 0) && (*(int *)((int)this + 0x61c) != 0)) {
        fprintf((FILE *)DAT_10033240,&DAT_10033488);
      }
      (*pcVar2)(&DAT_10033488);
      if (DAT_10033240 != 0) {
        fflush((FILE *)DAT_10033240);
      }
      (*pcVar3)(DAT_10033240);
      return;
    }
  }
  return;
}


// ---- FUN_1001a0e0 @ 1001a0e0

void FUN_1001a0e0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint local_104;
  char local_100 [256];
  
  local_104 = 0;
  sprintf(param_2,s_NbRect__03ld_Bound___04ld__04ld__10032e5c,*(undefined4 *)(param_1 + 8),
          *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
          *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if ((1 < *(uint *)(param_1 + 8)) && (*(uint *)(param_1 + 8) != 0)) {
    puVar9 = (undefined4 *)(param_1 + 0x2c);
    do {
      uVar5 = *puVar9;
      puVar1 = puVar9 + -1;
      puVar2 = puVar9 + -2;
      puVar3 = puVar9 + -3;
      puVar9 = puVar9 + 4;
      sprintf(local_100,s___04ld__04ld__04ld__04ld__10032e8c,*puVar3,*puVar2,*puVar1,uVar5);
      local_104 = local_104 + 1;
      if (local_104 < *(uint *)(param_1 + 8)) {
        iVar6 = -1;
        pcVar10 = local_100;
        do {
          pcVar12 = pcVar10;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar12 = pcVar10 + 1;
          cVar4 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar4 != '\0');
        *(undefined4 *)(pcVar12 + -1) = DAT_10032ea8;
      }
      uVar7 = 0xffffffff;
      pcVar10 = local_100;
      do {
        pcVar12 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar12 = pcVar10 + 1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar4 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      pcVar10 = param_2;
      do {
        pcVar11 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar11 = pcVar10 + 1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar4 != '\0');
      pcVar10 = pcVar12 + -uVar7;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
    } while (local_104 < *(uint *)(param_1 + 8));
  }
  return;
}


// ---- FUN_1001a1e0 @ 1001a1e0

HWND __thiscall FUN_1001a1e0(void *this,HWND param_1,int param_2)

{
  HWND pHVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (pHVar1 = (HWND)FUN_1001a310(this,(int)param_1), pHVar1 != (HWND)0x0)) {
    param_1 = pHVar1;
  }
  while (((param_1 != (HWND)0x0 &&
          (uVar2 = GetWindowLongA(param_1,-0x10), (uVar2 & 0x10000000) == 0)) &&
         (uVar2 = GetWindowLongA(param_1,-0x14), (uVar2 & 8) == 0))) {
    param_1 = GetWindow(param_1,3);
  }
  return param_1;
}


// ---- FUN_1001a240 @ 1001a240

void __thiscall FUN_1001a240(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)((int)this + 0x62c); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = operator_new(0xc);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[2] = *(int *)((int)this + 0x62c);
      *(int **)((int)this + 0x62c) = piVar1;
      *(int *)((int)this + 0x630) = *(int *)((int)this + 0x630) + 1;
    }
    return;
  }
  piVar1[1] = param_2;
  return;
}


// ---- FUN_1001a2b0 @ 1001a2b0

void __thiscall FUN_1001a2b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)((int)this + 0x62c);
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    do {
      piVar3 = piVar2;
      if (*piVar2 == param_1) break;
      piVar3 = (int *)piVar2[2];
      piVar1 = piVar2;
      piVar2 = piVar3;
    } while (piVar3 != (int *)0x0);
    if (piVar3 != (int *)0x0) {
      if (piVar1 == (int *)0x0) {
        *(int *)((int)this + 0x62c) = piVar3[2];
      }
      else {
        piVar1[2] = piVar3[2];
      }
      operator_delete(piVar3);
      *(int *)((int)this + 0x630) = *(int *)((int)this + 0x630) + -1;
    }
  }
  return;
}


// ---- FUN_1001a310 @ 1001a310

int __thiscall FUN_1001a310(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = *(int **)((int)this + 0x62c);
  if (piVar2 != (int *)0x0) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)0x0);
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[1];
    }
  }
  return iVar1;
}


// ---- FUN_1001a340 @ 1001a340

bool FUN_1001a340(HWND param_1)

{
  HWND pHVar1;
  UINT uCmd;
  
  uCmd = 5;
  pHVar1 = GetDesktopWindow();
  for (pHVar1 = GetWindow(pHVar1,uCmd); (pHVar1 != (HWND)0x0 && (pHVar1 != param_1));
      pHVar1 = GetWindow(pHVar1,2)) {
  }
  return pHVar1 == param_1;
}


// ---- FUN_1001a380 @ 1001a380

bool FUN_1001a380(HWND param_1,HWND param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  do {
    hWnd = param_1;
    param_1 = GetParent(hWnd);
  } while (param_1 != (HWND)0x0);
  do {
    hWnd_00 = param_2;
    param_2 = GetParent(hWnd_00);
  } while (param_2 != (HWND)0x0);
  return hWnd_00 == hWnd;
}


// ---- FUN_1001a3c0 @ 1001a3c0

bool FUN_1001a3c0(HWND param_1,HWND param_2)

{
  for (; (param_2 != (HWND)0x0 && (param_2 != param_1)); param_2 = GetParent(param_2)) {
  }
  return param_2 == param_1;
}


// ---- ShowMainWndProc @ 1001a400

LRESULT ShowMainWndProc(HWND param_1,uint param_2,HMENU param_3,HMENU param_4)

{
  void *this;
  LRESULT LVar1;
  int iVar2;
  
                    /* 0x1a400  101  ShowMainWndProc */
  this = (void *)FUN_1001ee40((int)param_1);
  if (this == (void *)0x0) {
    LVar1 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  }
  else {
    *(int *)((int)this + 0x530) = *(int *)((int)this + 0x530) + 1;
    LVar1 = FUN_1001a4d0(this,param_1,param_2,param_3,param_4);
    iVar2 = *(int *)((int)this + 0x530) + -1;
    *(int *)((int)this + 0x530) = iVar2;
    if (*(int *)((int)this + 0x53c) + *(int *)((int)this + 0x540) + *(int *)((int)this + 0x534) +
        *(int *)((int)this + 0x538) + iVar2 == 0) {
      iVar2 = FUN_1001fed0(0,(int)this);
      if (((iVar2 == 0) && (*(int *)((int)this + 0x52c) == -0x270d)) && (this != (void *)0x0)) {
        FUN_10021580(this);
        operator_delete(this);
        return LVar1;
      }
    }
  }
  return LVar1;
}


// ---- FUN_1001a4d0 @ 1001a4d0

LRESULT __thiscall FUN_1001a4d0(void *this,HWND param_1,uint param_2,HMENU param_3,HMENU param_4)

{
  HMENU pHVar1;
  bool bVar2;
  bool bVar3;
  SHORT SVar4;
  short sVar5;
  HDC pHVar6;
  LRESULT LVar7;
  int iVar8;
  uint uVar9;
  HPALETTE pHVar10;
  BOOL BVar11;
  int iVar12;
  int iVar13;
  HMENU__ local_80;
  int local_7c;
  HMENU local_78;
  HMENU local_74;
  undefined1 local_70 [12];
  HPALETTE local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  HMENU__ local_30;
  tagRECT local_2c;
  HWND local_1c;
  uint local_18;
  HMENU local_14;
  HMENU local_10;
  
  local_80.unused = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_10025480(this,0,4,0,0,0,0,0,(int)&local_1c);
  SetRectEmpty(&local_2c);
  if (param_2 < 0xb) {
    if (param_2 == 10) {
      *(undefined4 *)((int)this + 0x498) = 0;
      if (param_3 != (HMENU)0x0) {
        *(undefined4 *)((int)this + 0x498) = 1;
      }
      FUN_10025480(this,0x12,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x498),0);
      local_80.unused = DefWindowProcA(param_1,10,(WPARAM)param_3,(LPARAM)param_4);
      FUN_10025480(this,0x12,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x498),0);
      return local_80.unused;
    }
    switch(param_2) {
    case 2:
      FUN_10026240(this,0,0);
      LVar7 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return LVar7;
    case 3:
      if ((*(int *)((int)this + 0x29c) == 0) && (BVar11 = IsIconic(param_1), BVar11 == 0)) {
        FUN_10027360(this);
      }
      LVar7 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return LVar7;
    case 5:
      if (*(int *)((int)this + 0x29c) != 0) {
        return local_80.unused;
      }
      if (param_3 == (HMENU)0x1) {
        FUN_100273c0(this,0,0,0);
        return local_80.unused;
      }
      FUN_100273c0(this,4,0,0);
      return local_80.unused;
    case 6:
      *(undefined4 *)((int)this + 0x494) = 0;
      if ((short)param_3 != 0) {
        *(undefined4 *)((int)this + 0x494) = 1;
      }
      FUN_10025480(this,0x11,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
      local_80.unused = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      FUN_10025480(this,0x11,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
      return local_80.unused;
    }
    goto switchD_1001a557_caseD_4;
  }
  if (param_2 < 0x15) {
    if (param_2 != 0x14) {
      if (param_2 == 0xf) {
        pHVar6 = BeginPaint(param_1,(LPPAINTSTRUCT)local_70);
        LPtoDP(pHVar6,(LPPOINT)(local_70 + 8),2);
        FUN_10028e40(this,(HRGN)local_70._8_4_,local_64,local_60 - local_70._8_4_,
                     local_5c - (int)local_64,0,(HDC)0x0);
        EndPaint(param_1,(PAINTSTRUCT *)local_70);
        return local_80.unused;
      }
      goto switchD_1001a557_caseD_4;
    }
    if (*(int *)((int)this + 0xc4) != -9999) {
      LVar7 = DefWindowProcA(param_1,0x14,(WPARAM)param_3,(LPARAM)param_4);
      return LVar7;
    }
LAB_1001b624:
    local_80.unused = 1;
  }
  else {
    if (param_2 < 0x25) {
      if (param_2 == 0x24) {
        param_4[6].unused = *(int *)((int)this + 0x274) + *(int *)((int)this + 0x298);
        param_4[7].unused = *(int *)((int)this + 0x278) + 0x20 + *(int *)((int)this + 0x294) * 2;
        param_4[8].unused =
             *(int *)((int)this + 0x298) +
             (*(int *)((int)this + 0x2e4) * *(int *)((int)this + 0x13c)) /
             *(int *)((int)this + 0x2ec) + *(int *)((int)this + 0x224);
        param_4[9].unused =
             *(int *)((int)this + 0x228) +
             (*(int *)((int)this + 0x2e8) * *(int *)((int)this + 0x140)) /
             *(int *)((int)this + 0x2f0) + *(int *)((int)this + 0x294);
        if (*(int *)((int)this + 0xa8) != -0x270d) {
          return local_80.unused;
        }
        iVar12 = *(int *)((int)this + 0x300) + *(int *)((int)this + 0x294) +
                 *(int *)((int)this + 0x228);
        iVar13 = *(int *)((int)this + 0x140) + *(int *)((int)this + 0x228);
        if (iVar13 <= iVar12) {
          iVar12 = iVar13;
        }
        iVar8 = *(int *)((int)this + 0x13c) + *(int *)((int)this + 0x224);
        iVar13 = *(int *)((int)this + 0x2fc) + *(int *)((int)this + 0x298) +
                 *(int *)((int)this + 0x224);
        if (iVar8 <= iVar13) {
          iVar13 = iVar8;
        }
        if (iVar13 <= param_4[6].unused) {
          iVar13 = param_4[6].unused;
        }
        param_4[6].unused = iVar13;
        iVar13 = param_4[7].unused;
        if (param_4[7].unused <= iVar12) {
          iVar13 = iVar12;
        }
        param_4[7].unused = iVar13;
        return local_80.unused;
      }
      if (param_2 == 0x16) {
        LVar7 = DefWindowProcA(param_1,0x16,(WPARAM)param_3,(LPARAM)param_4);
        return LVar7;
      }
    }
    else if (param_2 < 0x101) {
      if (param_2 == 0x100) {
        if (*(int *)((int)this + 0x80) == -9999) {
          local_80.unused = 0;
        }
        SVar4 = GetKeyState(0x11);
        sVar5 = SVar4 >> 1;
        switch(param_3) {
        case (HMENU)0x21:
          if (*(int *)((int)this + 0x454) == 0) {
            return local_80.unused;
          }
          SendMessageA(param_1,0x115,2,0);
          return local_80.unused;
        case (HMENU)0x22:
          if (*(int *)((int)this + 0x454) == 0) {
            return local_80.unused;
          }
          SendMessageA(param_1,0x115,3,0);
          return local_80.unused;
        default:
          return local_80.unused;
        case (HMENU)0x25:
          goto switchD_1001ad38_caseD_25;
        case (HMENU)0x26:
          if (*(int *)((int)this + 0x454) == 0) {
            return local_80.unused;
          }
          if (sVar5 != 0) {
            SendMessageA(param_1,0x115,2,0);
            return local_80.unused;
          }
          SendMessageA(param_1,0x115,0,0);
          return local_80.unused;
        case (HMENU)0x27:
          if (*(int *)((int)this + 0x450) == 0) {
            return local_80.unused;
          }
          if (sVar5 != 0) {
            SendMessageA(param_1,0x114,3,0);
            return local_80.unused;
          }
          SendMessageA(param_1,0x114,1,0);
          return local_80.unused;
        case (HMENU)0x28:
          if (*(int *)((int)this + 0x454) == 0) {
            return local_80.unused;
          }
          if (sVar5 != 0) {
            SendMessageA(param_1,0x115,3,0);
            return local_80.unused;
          }
          SendMessageA(param_1,0x115,1,0);
          return local_80.unused;
        case (HMENU)0x6b:
          SendMessageA(param_1,0x111,10,0);
          return local_80.unused;
        case (HMENU)0x6d:
          SendMessageA(param_1,0x111,0x14,0);
          return local_80.unused;
        }
      }
      if (param_2 == 0x46) {
        pHVar1 = param_4 + 6;
        if (((param_4[6].unused & 2U) == 0) && (*(int *)((int)this + 0xac) == -9999)) {
          pHVar1->unused = param_4[6].unused | 2;
        }
        if ((pHVar1->unused & 1U) == 0) {
          if (*(int *)((int)this + 0x88) == -9999) {
            pHVar1->unused = pHVar1->unused | 1;
          }
          if ((*(int *)((int)this + 0x88) == 0) && (*(int *)((int)this + 0x568) == 0)) {
            pHVar1->unused = pHVar1->unused | 1;
          }
        }
        if ((pHVar1->unused & 1U) == 0) {
          if (param_4[4].unused + param_4[2].unused <= *(int *)((int)this + 0x230)) {
            param_4[2].unused = *(int *)((int)this + 0x230);
          }
          if (*(int *)((int)this + 0x238) <= param_4[2].unused) {
            param_4[2].unused = *(int *)((int)this + 0x238) - *(int *)((int)this + 0x1dc);
          }
          if (param_4[5].unused + param_4[3].unused <= *(int *)((int)this + 0x234)) {
            param_4[3].unused = *(int *)((int)this + 0x234);
          }
          if (*(int *)((int)this + 0x23c) <= param_4[3].unused) {
            param_4[3].unused = *(int *)((int)this + 0x23c) - *(int *)((int)this + 0x1e0);
          }
        }
        if (((pHVar1->unused & 1U) == 0) || ((pHVar1->unused & 2U) == 0)) {
          local_78 = param_4 + 2;
          local_70._0_4_ = *(int *)((int)this + 0x230) + param_4[2].unused;
          local_74 = param_4 + 3;
          local_70._4_4_ = *(int *)((int)this + 0x234) + local_74->unused;
          local_70._8_4_ = (int)&((HDC)local_70._0_4_)->unused + param_4[4].unused;
          local_64 = (HPALETTE)(param_4[5].unused + local_70._4_4_);
          FUN_10028210(this,(int *)local_70,1,&local_80.unused,&local_2c);
          if ((*(int *)((int)this + 0xa8) == -0x270d) && (*(int *)((int)this + 0x29c) == 0)) {
            local_78->unused = local_78->unused + local_80.unused;
            local_74->unused = local_74->unused + local_7c;
          }
        }
        if (((pHVar1->unused & 2U) == 0) && (*(int *)((int)this + 0xac) == -0x270d)) {
          local_80.unused = param_4[2].unused;
          local_78 = param_4 + 2;
          local_74 = param_4 + 3;
          local_30.unused = local_74->unused;
          local_70._0_4_ = local_30.unused - *(int *)((int)this + 0x1a4);
          FUN_10028100(&local_80.unused,1,
                       *(int *)((int)this + 0x204) + (local_80.unused - *(int *)((int)this + 0x1a0))
                       ,*(uint *)((int)this + 200),(int *)((int)this + 0x468),&local_2c.left);
          FUN_10028100(&local_30.unused,2,(int)(int *)local_70._0_4_ + *(int *)((int)this + 0x208),
                       *(uint *)((int)this + 0xcc),(int *)((int)this + 0x46c),&local_2c.left);
          local_78->unused = local_80.unused;
          local_74->unused = local_30.unused;
        }
        if (((*(int *)((int)this + 0xac) == -9999) || ((pHVar1->unused & 2U) != 0)) ||
           ((*(int *)((int)this + 0x1a0) == param_4[2].unused &&
            (*(int *)((int)this + 0x1a4) == param_4[3].unused)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((*(int *)((int)this + 0x88) == -9999) || ((pHVar1->unused & 1U) != 0)) ||
           ((*(int *)((int)this + 0x1a8) == param_4[4].unused &&
            (*(int *)((int)this + 0x1ac) == param_4[5].unused)))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((!bVar2) || (bVar2 = true, !bVar3)) {
          bVar2 = false;
        }
        if (((*(int *)((int)this + 0x510) == -0x270d) &&
            ((((pHVar1->unused & 1U) == 0 || ((pHVar1->unused & 2U) == 0)) && (!bVar2)))) &&
           (*(int *)((int)this + 0x518) == 0)) {
          FUN_10024fc0(this,param_1,0x20000002,0);
        }
        LVar7 = DefWindowProcA(param_1,0x46,(WPARAM)param_3,(LPARAM)param_4);
        return LVar7;
      }
      if (param_2 == 0x47) {
        pHVar1 = param_4 + 6;
        *(int *)((int)this + 0x198) = param_4->unused;
        *(int *)((int)this + 0x1b0) = pHVar1->unused;
        *(int *)((int)this + 0x19c) = param_4[1].unused;
        if ((pHVar1->unused & 2U) == 0) {
          *(int *)((int)this + 0x1a0) = param_4[2].unused;
          *(int *)((int)this + 0x1a4) = param_4[3].unused;
        }
        if ((pHVar1->unused & 1U) == 0) {
          *(int *)((int)this + 0x1a8) = param_4[4].unused;
          *(int *)((int)this + 0x1ac) = param_4[5].unused;
        }
        if (*(int *)((int)this + 0x510) != -0x270d) {
          return local_80.unused;
        }
        local_80.unused = DefWindowProcA(param_1,0x47,(WPARAM)param_3,(LPARAM)param_4);
        if (((pHVar1->unused & 1U) != 0) && ((pHVar1->unused & 2U) != 0)) {
          return local_80.unused;
        }
        FUN_10026790(this);
        if (*(int *)((int)this + 0x518) != 0) {
          return local_80.unused;
        }
        FUN_10024fc0(this,param_1,0x10000002,0);
        return local_80.unused;
      }
    }
    else if (param_2 < 0x120) {
      if (param_2 == 0x11f) {
        FUN_100251a0(this,param_4,(uint)param_3,2);
        LVar7 = DefWindowProcA(param_1,0x11f,(WPARAM)param_3,(LPARAM)param_4);
        return LVar7;
      }
      sVar5 = (short)((uint)param_3 >> 0x10);
      switch(param_2) {
      case 0x111:
        uVar9 = (uint)param_3 & 0xffff;
        if (uVar9 == 10) {
          if (*(int *)((int)this + 0x84) != -0x270d) {
            return local_80.unused;
          }
          if (*(int *)((int)this + 700) == -1) {
            iVar12 = 2;
          }
          else {
            iVar12 = *(int *)((int)this + 700) + 1;
          }
          if (iVar12 == -1) {
            iVar12 = 1;
          }
          if (*(int *)((int)this + 0x2c0) == -1) {
            iVar13 = 2;
          }
          else {
            iVar13 = *(int *)((int)this + 0x2c0) + 1;
          }
          if (iVar13 == -1) {
            iVar13 = 1;
          }
          FUN_10022650(this,iVar12,iVar13);
          return local_80.unused;
        }
        if (uVar9 == 0x14) {
          if (*(int *)((int)this + 0x84) != -0x270d) {
            return local_80.unused;
          }
          if (*(int *)((int)this + 700) == 1) {
            iVar12 = -2;
          }
          else {
            iVar12 = *(int *)((int)this + 700) + -1;
          }
          if (*(int *)((int)this + 0x2c0) == 1) {
            iVar13 = -2;
          }
          else {
            iVar13 = *(int *)((int)this + 0x2c0) + -1;
          }
          FUN_10022650(this,iVar12,iVar13);
          return local_80.unused;
        }
        if (uVar9 != 0x1e) {
          return local_80.unused;
        }
        if (*(int *)((int)this + 0x84) != -0x270d) {
          return local_80.unused;
        }
        FUN_10022650(this,1,1);
        return local_80.unused;
      case 0x112:
        uVar9 = (uint)param_3 & 0xfff0;
        if (uVar9 == 0xf030) {
          if (*(int *)((int)this + 0x88) != -0x270d) {
            return local_80.unused;
          }
          *(undefined4 *)((int)this + 0x518) = 1;
          FUN_10024fc0(this,param_1,0x20000002,1);
          local_70._0_4_ = (HDC)0x2c;
          local_70._4_4_ = 0;
          local_70._8_4_ = 3;
          local_64 = (HPALETTE)(*(int *)((int)this + 0x1d4) - *(int *)((int)this + 0x230));
          local_60 = *(int *)((int)this + 0x1d8) - *(int *)((int)this + 0x234);
          local_4c = *(int *)((int)this + 0x1dc) + (int)local_64;
          local_48 = *(int *)((int)this + 0x1e0) + local_60;
          *(undefined4 *)((int)this + 0x29c) = 1;
          local_5c = (int)local_64;
          local_58 = local_60;
          local_54 = (int)local_64;
          local_50 = local_60;
          SetWindowPlacement(param_1,(WINDOWPLACEMENT *)local_70);
          *(undefined4 *)((int)this + 0x29c) = 0;
          FUN_100273c0(this,2,1,0);
          *(undefined4 *)((int)this + 0x568) = 0;
          FUN_1002cc20(this,2);
          FUN_10024fc0(this,param_1,0x10000002,1);
          *(undefined4 *)((int)this + 0x518) = 0;
          return local_80.unused;
        }
        if (uVar9 == 0xf120) {
          if ((*(int *)((int)this + 0x88) != -0x270d) && (*(int *)((int)this + 0x88) != 0)) {
            return local_80.unused;
          }
          *(undefined4 *)((int)this + 0x518) = 1;
          FUN_10024fc0(this,param_1,0x20000002,1);
          local_70._0_4_ = (HDC)0x2c;
          local_70._4_4_ = 0;
          local_70._8_4_ = 9;
          local_64 = (HPALETTE)(*(int *)((int)this + 0x1d4) - *(int *)((int)this + 0x230));
          local_60 = *(int *)((int)this + 0x1d8) - *(int *)((int)this + 0x234);
          local_4c = *(int *)((int)this + 0x1dc) + (int)local_64;
          local_48 = *(int *)((int)this + 0x1e0) + local_60;
          *(undefined4 *)((int)this + 0x29c) = 1;
          local_5c = (int)local_64;
          local_58 = local_60;
          local_54 = (int)local_64;
          local_50 = local_60;
          SetWindowPlacement(param_1,(WINDOWPLACEMENT *)local_70);
          *(undefined4 *)((int)this + 0x29c) = 0;
          FUN_100273c0(this,0,1,0);
          *(undefined4 *)((int)this + 0x568) = 0;
          FUN_1002cc20(this,2);
          FUN_10024fc0(this,param_1,0x10000002,1);
          *(undefined4 *)((int)this + 0x518) = 0;
          return local_80.unused;
        }
        if (uVar9 == 0xf020) {
          if ((*(int *)((int)this + 0x88) != -0x270d) && (*(int *)((int)this + 0x88) != 0)) {
            return local_80.unused;
          }
          if (*(int *)((int)this + 0xa8) != -9999) {
            return local_80.unused;
          }
          *(undefined4 *)((int)this + 0x518) = 1;
          FUN_10024fc0(this,param_1,0x20000002,2);
          local_70._0_4_ = (HDC)0x2c;
          local_70._4_4_ = 0;
          local_70._8_4_ = 2;
          local_64 = (HPALETTE)(*(int *)((int)this + 0x1d4) - *(int *)((int)this + 0x230));
          local_60 = *(int *)((int)this + 0x1d8) - *(int *)((int)this + 0x234);
          local_4c = *(int *)((int)this + 0x1dc) + (int)local_64;
          local_48 = *(int *)((int)this + 0x1e0) + local_60;
          *(undefined4 *)((int)this + 0x568) = 1;
          *(undefined4 *)((int)this + 0x29c) = 1;
          local_5c = (int)local_64;
          local_58 = local_60;
          local_54 = (int)local_64;
          local_50 = local_60;
          SetWindowPlacement(param_1,(WINDOWPLACEMENT *)local_70);
          *(undefined4 *)((int)this + 0x29c) = 0;
          FUN_1002cc20(this,1);
          FUN_10024fc0(this,param_1,0x10000002,2);
          *(undefined4 *)((int)this + 0x518) = 0;
          return local_80.unused;
        }
        if (uVar9 == 0xf060) {
          FUN_10025480(this,8,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                       *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                       *(undefined4 *)((int)this + 0x1f0),0,0);
          FUN_10026240(this,0,0);
          FUN_10025480(this,8,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                       *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                       *(undefined4 *)((int)this + 0x1f0),0,0);
          *(undefined4 *)((int)this + 0x42c) = 0;
          return local_80.unused;
        }
        if (param_3 == (HMENU)0x1) {
          FUN_1002c950((int)this);
          return local_80.unused;
        }
        if (param_3 == (HMENU)0x2) {
          FUN_1002ca40((int)this);
          return local_80.unused;
        }
        LVar7 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
        return LVar7;
      case 0x114:
        switch((uint)param_3 & 0xffff) {
        case 0:
          iVar12 = -1;
          break;
        case 1:
          iVar12 = 1;
          break;
        case 2:
          iVar12 = -((*(int *)((int)this + 0x2ec) * *(int *)((int)this + 0x214)) /
                    *(int *)((int)this + 0x2e4));
          break;
        case 3:
          iVar12 = (*(int *)((int)this + 0x2ec) * *(int *)((int)this + 0x214)) /
                   *(int *)((int)this + 0x2e4);
          break;
        default:
          iVar12 = 0;
          break;
        case 5:
          iVar12 = (int)sVar5 - *(int *)((int)this + 0x448);
        }
        FUN_10022230(this,*(int *)((int)this + 0x448) + iVar12,*(int *)((int)this + 0x44c),1);
        return local_80.unused;
      case 0x115:
        switch((uint)param_3 & 0xffff) {
        case 0:
          iVar12 = -1;
          break;
        case 1:
          iVar12 = 1;
          break;
        case 2:
          iVar12 = -((*(int *)((int)this + 0x218) * *(int *)((int)this + 0x2f0)) /
                    *(int *)((int)this + 0x2e8));
          break;
        case 3:
          iVar12 = (*(int *)((int)this + 0x218) * *(int *)((int)this + 0x2f0)) /
                   *(int *)((int)this + 0x2e8);
          break;
        default:
          iVar12 = 0;
          break;
        case 5:
          iVar12 = (int)sVar5 - *(int *)((int)this + 0x44c);
        }
        FUN_10022230(this,*(int *)((int)this + 0x448),*(int *)((int)this + 0x44c) + iVar12,1);
        return local_80.unused;
      case 0x116:
        FUN_100251a0(this,param_3,0x10,2);
        LVar7 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
        return LVar7;
      }
    }
    else if (param_2 < 0x310) {
      if (param_2 == 0x30f) {
        pHVar6 = GetDC(param_1);
        iVar12 = FUN_10025a20(this,0);
        if (iVar12 == 0) {
          (**(code **)((int)this + 0x5b8))
                    (*(undefined4 *)((int)this + 0x5a8),pHVar6,
                     *(int *)((int)this + 0x59c) == -0x270d);
        }
        else {
          pHVar10 = (HPALETTE)
                    FUN_1002d8d0(pHVar6,*(HPALETTE *)((int)this + 0x4d0),
                                 (uint)(*(int *)((int)this + 0x59c) == -0x270d));
          FUN_1002d8c0(pHVar6);
          FUN_1002d8d0(pHVar6,pHVar10,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
        }
        ReleaseDC(param_1,pHVar6);
        if (*(int *)((int)this + 0x434) == 0) {
          iVar12 = *(int *)((int)this + 0xe4);
joined_r0x1001b60d:
          BVar11 = 0;
          if (iVar12 == -0x270d) goto LAB_1001b60f;
        }
        else {
LAB_1001b60f:
          BVar11 = 1;
        }
        InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar11);
        goto LAB_1001b624;
      }
      if (param_2 == 0x201) {
        GetCursorPos((LPPOINT)local_70);
        SendMessageA(param_1,0x112,0xf012,local_70._4_4_ << 0x10 | local_70._0_4_ & 0xffff);
        return local_80.unused;
      }
      if (param_2 == 0x203) {
        SendMessageA(param_1,0x112,2,0);
        return local_80.unused;
      }
    }
    else if (param_2 == 0x311) {
      *(HMENU *)((int)this + 0x4d4) = param_3;
      if (param_1 == (HWND)param_3) {
        return local_80.unused;
      }
      pHVar6 = GetDC(param_1);
      iVar12 = FUN_10025a20(this,0);
      if (iVar12 == 0) {
        (**(code **)((int)this + 0x5b8))
                  (*(undefined4 *)((int)this + 0x5a8),pHVar6,*(int *)((int)this + 0x59c) == -0x270d)
        ;
      }
      else {
        pHVar10 = (HPALETTE)
                  FUN_1002d8d0(pHVar6,*(HPALETTE *)((int)this + 0x4d0),
                               (uint)(*(int *)((int)this + 0x59c) == -0x270d));
        FUN_1002d8c0(pHVar6);
        FUN_1002d8d0(pHVar6,pHVar10,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
      }
      ReleaseDC(param_1,pHVar6);
      if (*(int *)((int)this + 0x434) == 0) {
        iVar12 = *(int *)((int)this + 0xe4);
        goto joined_r0x1001b60d;
      }
      goto LAB_1001b60f;
    }
switchD_1001a557_caseD_4:
    local_80.unused = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  }
  return local_80.unused;
switchD_1001ad38_caseD_25:
  if (*(int *)((int)this + 0x450) == 0) {
    return local_80.unused;
  }
  if (sVar5 != 0) {
    SendMessageA(param_1,0x114,2,0);
    return local_80.unused;
  }
  SendMessageA(param_1,0x114,0,0);
  return local_80.unused;
}


// ---- HookWndProc @ 1001b710

LRESULT __cdecl HookWndProc(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 local_5a [58];
  LRESULT local_20;
  LRESULT local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  LRESULT local_c;
  WNDPROC local_8;
  
                    /* 0x1b710  200  HookWndProc */
  pvVar2 = (void *)FUN_1001fed0((int)param_1,0);
  if (pvVar2 != (void *)0x0) {
    local_8 = (WNDPROC)FUN_1002c7f0(pvVar2,(int)param_1);
    *(int *)((int)pvVar2 + 0x534) = *(int *)((int)pvVar2 + 0x534) + 1;
    local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    if (*(int *)((int)pvVar2 + 0x534) == 0) {
      FUN_10025a10();
    }
    else {
      *(int *)((int)pvVar2 + 0x534) = *(int *)((int)pvVar2 + 0x534) + -1;
    }
    if (param_2 == 2) {
      FUN_1001fe50((int)pvVar2,(int)param_1);
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((iVar3 == 0) &&
         (*(int *)((int)pvVar2 + 0x53c) + *(int *)((int)pvVar2 + 0x540) +
          *(int *)((int)pvVar2 + 0x530) + *(int *)((int)pvVar2 + 0x538) +
          *(int *)((int)pvVar2 + 0x534) == 0)) {
        iVar3 = FUN_1001fed0(0,(int)pvVar2);
        if ((iVar3 == 0) &&
           (((*(int *)((int)pvVar2 + 0x524) != 0 &&
             (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)))) {
          *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
          local_20 = *(LRESULT *)((int)pvVar2 + 0x524);
          *(undefined4 *)((int)pvVar2 + 0x524) = 0;
          if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
            pvVar2 = FUN_1001ff90(pvVar2);
          }
          if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) {
            SetWindowLongA(param_1,-4,(LONG)local_8);
            if (pvVar2 != (void *)0x0) {
              FUN_10021580(pvVar2);
              operator_delete(pvVar2);
            }
          }
          iVar3 = 6;
          psVar4 = (short *)0x1001b8e0;
          do {
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = local_5a;
          } while (*psVar4 != 0x15ff);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = (char)*psVar4;
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = puVar5 + 1;
          }
          return local_20;
        }
      }
    }
    return local_c;
  }
  pvVar2 = (void *)FUN_1001ee40((int)param_1);
  if (pvVar2 == (void *)0x0) {
    local_c = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    local_10 = (int *)((int)pvVar2 + 0x534);
    *local_10 = *(int *)((int)pvVar2 + 0x534) + 1;
    local_8 = (WNDPROC)FUN_1002c790(pvVar2,(int)param_1);
    FUN_1001bb60(pvVar2,param_1,&param_2,&param_3,&param_4,&local_8,&local_c);
    if (local_8 != (WNDPROC)0x0) {
      local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    }
    if (*local_10 == 0) {
      FUN_10025a10();
    }
    else {
      *local_10 = *local_10 + -1;
    }
    local_18 = (int *)((int)pvVar2 + 0x540);
    local_14 = (int *)((int)pvVar2 + 0x530);
    if (*(int *)((int)pvVar2 + 0x53c) + *local_18 + *local_14 + *local_10 +
        *(int *)((int)pvVar2 + 0x538) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x524) != 0)) &&
          (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)) {
        *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
        local_1c = *(LRESULT *)((int)pvVar2 + 0x524);
        *(undefined4 *)((int)pvVar2 + 0x524) = 0;
        if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
          pvVar2 = FUN_1001ff90(pvVar2);
        }
        if (((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) &&
           (pvVar2 != (void *)0x0)) {
          FUN_10021580(pvVar2);
          operator_delete(pvVar2);
        }
        iVar3 = 6;
        psVar4 = (short *)0x1001bac3;
        do {
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = local_5a;
        } while (*psVar4 != 0x15ff);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = (char)*psVar4;
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = puVar5 + 1;
        }
        return local_1c;
      }
    }
    if (*(int *)((int)pvVar2 + 0x53c) + *local_18 + *local_14 + *local_10 +
        *(int *)((int)pvVar2 + 0x538) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if (((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) && (pvVar2 != (void *)0x0)) {
        FUN_10021580(pvVar2);
        operator_delete(pvVar2);
        return local_c;
      }
    }
  }
  return local_c;
}


// ---- FUN_1001bb60 @ 1001bb60

undefined4 __thiscall
FUN_1001bb60(void *this,HWND param_1,uint *param_2,WPARAM *param_3,LPARAM *param_4,
            undefined4 *param_5,LRESULT *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  HMENU pHVar5;
  HWND pHVar6;
  bool bVar7;
  LRESULT LVar8;
  HDC pHVar9;
  int iVar10;
  uint uVar11;
  BOOL BVar12;
  HPALETTE pHVar13;
  int iVar14;
  int iVar15;
  tagPAINTSTRUCT *ptVar16;
  tagPOINT *ptVar17;
  bool bVar18;
  int local_b4;
  undefined4 local_b0;
  tagPAINTSTRUCT local_ac;
  tagPOINT local_6c;
  tagPOINT local_64;
  int local_5c;
  int local_58;
  tagRECT local_2c;
  HWND local_1c;
  uint local_18;
  WPARAM local_14;
  LPARAM local_10;
  
  local_1c = param_1;
  local_b0 = 1;
  local_18 = *param_2;
  local_10 = *param_4;
  local_14 = *param_3;
  FUN_10025480(this,0,4,0,0,0,0,0,(int)&local_1c);
  SetRectEmpty(&local_2c);
  uVar11 = *param_2;
  if (uVar11 < 0xb) {
    if (uVar11 == 10) {
      *(undefined4 *)((int)this + 0x498) = 0;
      if (*param_3 != 0) {
        *(undefined4 *)((int)this + 0x498) = 1;
      }
      FUN_10025480(this,0x12,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x498),0);
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      FUN_10025480(this,0x12,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x498),0);
      return local_b0;
    }
    switch(uVar11) {
    case 2:
      FUN_10025480(this,8,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),0,0);
      FUN_10026240(this,0,0);
      FUN_10025480(this,8,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),0,0);
      return local_b0;
    case 3:
      if ((*(int *)((int)this + 0x29c) == 0) && (BVar12 = IsIconic(param_1), BVar12 == 0)) {
        FUN_10027360(this);
      }
      if (*(int *)((int)this + 0x51c) == 1) {
        FUN_100273c0(this,4,0,1);
        return local_b0;
      }
      return local_b0;
    default:
      return 0;
    case 5:
      goto switchD_1001bbfb_caseD_5;
    case 6:
      *(undefined4 *)((int)this + 0x494) = 0;
      if ((short)*param_3 != 0) {
        *(undefined4 *)((int)this + 0x494) = 1;
      }
      FUN_10025480(this,0x11,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      FUN_10025480(this,0x11,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
      return local_b0;
    }
  }
  if (uVar11 < 0x15) {
    if (uVar11 == 0x14) {
      if ((*(uint *)((int)this + 0x2b0) & 2) != 0) {
        return local_b0;
      }
      if (*(int *)((int)this + 0xc4) == -9999) {
        local_6c.y = 0;
        local_6c.x = 0;
        ClientToScreen(*(HWND *)((int)this + 0x42c),&local_6c);
        FUN_10026790(this);
        local_ac.hdc = *(HDC *)((int)this + 500);
        local_ac.fErase = *(int *)((int)this + 0x1f8);
        local_ac.rcPaint.left = (int)&((HRGN)local_ac.hdc)->unused + *(int *)((int)this + 0x1fc);
        local_ac.rcPaint.top =
             (int)&((HPALETTE)local_ac.fErase)->unused + *(int *)((int)this + 0x200);
        OffsetRect((LPRECT)&local_ac,-local_6c.x,-local_6c.y);
        iVar14 = SaveDC((HDC)*param_3);
        DPtoLP((HDC)*param_3,(LPPOINT)&local_ac,2);
        ExcludeClipRect((HDC)*param_3,(int)local_ac.hdc,local_ac.fErase,local_ac.rcPaint.left,
                        local_ac.rcPaint.top);
        if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
          LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
          *param_6 = LVar8;
          *param_5 = 0;
        }
        RestoreDC((HDC)*param_3,iVar14);
      }
      else if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,0x14,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      if (*(int *)((int)this + 0xe4) != -0x270d) {
        return local_b0;
      }
      if (*(int *)((int)this + 0xe8) != -9999) {
        return local_b0;
      }
      iVar14 = GetClipBox((HDC)*param_3,(LPRECT)&local_ac);
      if (iVar14 != 0) {
        iVar14 = SaveDC((HDC)*param_3);
        LPtoDP((HDC)*param_3,(LPPOINT)&local_ac,2);
        FUN_10028e40(this,(HRGN)local_ac.hdc,(HPALETTE)local_ac.fErase,
                     local_ac.rcPaint.left - (int)local_ac.hdc,
                     local_ac.rcPaint.top - local_ac.fErase,0,(HDC)*param_3);
        RestoreDC((HDC)*param_3,iVar14);
        return local_b0;
      }
      return local_b0;
    }
    if (uVar11 != 0xf) {
      return 0;
    }
    if ((*(uint *)((int)this + 0x2b0) & 2) != 0) {
      return local_b0;
    }
    if (*(int *)((int)this + 0xe8) != -9999) {
      return local_b0;
    }
    if (*(int *)((int)this + 0xe4) != -0x270d) {
      if (*(int *)((int)this + 0xe0) != -0x270d) {
        pHVar9 = GetDC(param_1);
        GetUpdateRect(param_1,(LPRECT)&local_ac,0);
        local_6c.x = (LONG)local_ac.hdc;
        local_6c.y = local_ac.fErase;
        local_64.x = local_ac.rcPaint.left;
        local_64.y = local_ac.rcPaint.top;
        LPtoDP(pHVar9,&local_6c,2);
        FUN_10028e40(this,(HRGN)local_6c.x,(HPALETTE)local_6c.y,local_64.x - local_6c.x,
                     local_64.y - local_6c.y,0,(HDC)0x0);
        ReleaseDC(param_1,pHVar9);
        if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
          LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
          *param_6 = LVar8;
          *param_5 = 0;
          return local_b0;
        }
        return local_b0;
      }
      pHVar9 = BeginPaint(param_1,&local_ac);
      ptVar16 = &local_ac;
      ptVar17 = &local_6c;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        ptVar17->x = (LONG)ptVar16->hdc;
        ptVar16 = (tagPAINTSTRUCT *)&ptVar16->fErase;
        ptVar17 = (tagPOINT *)&ptVar17->y;
      }
      LPtoDP(pHVar9,&local_64,2);
      FUN_10028e40(this,(HRGN)local_64.x,(HPALETTE)local_64.y,local_5c - local_64.x,
                   local_58 - local_64.y,0,(HDC)0x0);
      EndPaint(param_1,&local_ac);
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
        return local_b0;
      }
      return local_b0;
    }
    GetUpdateRect(param_1,(LPRECT)&local_ac,0);
    if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
      LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
      *param_6 = LVar8;
      *param_5 = 0;
      return local_b0;
    }
    return local_b0;
  }
  if (0x112 < uVar11) {
    if (uVar11 < 0x120) {
      if (uVar11 == 0x11f) {
        uVar11 = *param_3;
        pHVar5 = (HMENU)*param_4;
        if (*(HWND *)((int)this + 0x42c) == (HWND)0x0) {
          return local_b0;
        }
        BVar12 = IsIconic(*(HWND *)((int)this + 0x42c));
        if (BVar12 == 0) {
          FUN_100251a0(this,pHVar5,uVar11,2);
          return local_b0;
        }
        return local_b0;
      }
      if (uVar11 != 0x116) {
        return 0;
      }
      pHVar5 = (HMENU)*param_3;
      if (*(HWND *)((int)this + 0x42c) != (HWND)0x0) {
        BVar12 = IsIconic(*(HWND *)((int)this + 0x42c));
        if (BVar12 == 0) {
          FUN_100251a0(this,pHVar5,0x10,2);
          return local_b0;
        }
        return local_b0;
      }
      return local_b0;
    }
    if (uVar11 != 0x222) {
      if (uVar11 == 0x30f) {
        if ((*(uint *)((int)this + 0x2b0) & 2) != 0) {
          return local_b0;
        }
        pHVar9 = GetDC(param_1);
        iVar14 = FUN_10025a20(this,0);
        if (iVar14 == 0) {
          (**(code **)((int)this + 0x5b8))
                    (*(undefined4 *)((int)this + 0x5a8),pHVar9,
                     *(int *)((int)this + 0x59c) == -0x270d);
        }
        else {
          pHVar13 = (HPALETTE)
                    FUN_1002d8d0(pHVar9,*(HPALETTE *)((int)this + 0x4d0),
                                 (uint)(*(int *)((int)this + 0x59c) == -0x270d));
          FUN_1002d8c0(pHVar9);
          FUN_1002d8d0(pHVar9,pHVar13,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
        }
        ReleaseDC(param_1,pHVar9);
        if (*(int *)((int)this + 0x434) == 0) {
          iVar14 = *(int *)((int)this + 0xe4);
joined_r0x1001cdc8:
          BVar12 = 0;
          if (iVar14 != -0x270d) goto LAB_1001cdcf;
        }
      }
      else {
        if (uVar11 != 0x311) {
          return 0;
        }
        if ((*(uint *)((int)this + 0x2b0) & 2) != 0) {
          return local_b0;
        }
        pHVar6 = (HWND)*param_3;
        *(HWND *)((int)this + 0x4d4) = pHVar6;
        if (pHVar6 == param_1) {
          return local_b0;
        }
        pHVar9 = GetDC(param_1);
        iVar14 = FUN_10025a20(this,0);
        if (iVar14 == 0) {
          (**(code **)((int)this + 0x5b8))
                    (*(undefined4 *)((int)this + 0x5a8),pHVar9,
                     *(int *)((int)this + 0x59c) == -0x270d);
        }
        else {
          pHVar13 = (HPALETTE)
                    FUN_1002d8d0(pHVar9,*(HPALETTE *)((int)this + 0x4d0),
                                 (uint)(*(int *)((int)this + 0x59c) == -0x270d));
          FUN_1002d8c0(pHVar9);
          FUN_1002d8d0(pHVar9,pHVar13,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
        }
        ReleaseDC(param_1,pHVar9);
        if (*(int *)((int)this + 0x434) == 0) {
          iVar14 = *(int *)((int)this + 0xe4);
          goto joined_r0x1001cdc8;
        }
      }
      BVar12 = 1;
LAB_1001cdcf:
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
      return local_b0;
    }
    *(undefined4 *)((int)this + 0x494) = 0;
    if (*(WPARAM *)((int)this + 0x43c) == 0) {
      if (*(WPARAM *)((int)this + 0x42c) != *param_3) goto LAB_1001cb3a;
    }
    else if (*param_3 != *(WPARAM *)((int)this + 0x43c)) {
LAB_1001cb3a:
      *(undefined4 *)((int)this + 0x494) = 1;
    }
    FUN_10025480(this,0x11,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
    if (*(int *)((int)this + 0x43c) == 0) {
      if (*(int *)((int)this + 0x42c) != *param_4) goto LAB_1001cbb5;
    }
    else if (*param_4 != *(int *)((int)this + 0x43c)) goto LAB_1001cbb5;
    FUN_1001f520(this,*(int *)((int)this + 0x434),*param_4);
LAB_1001cbb5:
    if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
      LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
      *param_6 = LVar8;
      *param_5 = 0;
    }
    FUN_10025480(this,0x11,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
    return local_b0;
  }
  if (uVar11 == 0x112) {
    uVar11 = *param_3 & 0xfff0;
    if (uVar11 == 0xf030) {
      if (*(int *)((int)this + 0x88) != -0x270d) {
        *param_3 = 0;
        return local_b0;
      }
      *(undefined4 *)((int)this + 0x518) = 1;
      FUN_10024fc0(this,param_1,0x20000002,1);
      *(undefined4 *)((int)this + 0x29c) = 1;
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      *(undefined4 *)((int)this + 0x29c) = 0;
      FUN_100273c0(this,6,1,(ushort)(*(int *)((int)this + 0xa8) == -0x270d));
      *(undefined4 *)((int)this + 0x568) = 0;
      FUN_10024fc0(this,param_1,0x10000002,1);
      *(undefined4 *)((int)this + 0x518) = 0;
      return local_b0;
    }
    if (uVar11 == 0xf120) {
      if ((*(int *)((int)this + 0x88) != -0x270d) && (*(int *)((int)this + 0x88) != 0)) {
        *param_3 = 0;
        return local_b0;
      }
      *(undefined4 *)((int)this + 0x518) = 1;
      FUN_10024fc0(this,param_1,0x20000002,1);
      *(undefined4 *)((int)this + 0x29c) = 1;
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      *(undefined4 *)((int)this + 0x29c) = 0;
      FUN_100273c0(this,4,1,(ushort)(*(int *)((int)this + 0xa8) == -0x270d));
      *(undefined4 *)((int)this + 0x568) = 0;
      FUN_10024fc0(this,param_1,0x10000002,1);
      *(undefined4 *)((int)this + 0x518) = 0;
      return local_b0;
    }
    if (uVar11 != 0xf020) {
      if (uVar11 == 0xf060) {
        FUN_10025480(this,8,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                     *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                     *(undefined4 *)((int)this + 0x1f0),0,0);
        if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
          LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
          *param_6 = LVar8;
          *param_5 = 0;
        }
        FUN_10025480(this,8,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                     *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                     *(undefined4 *)((int)this + 0x1f0),0,0);
        return local_b0;
      }
      return local_b0;
    }
    if (((*(int *)((int)this + 0x88) == -0x270d) || (*(int *)((int)this + 0x88) == 0)) &&
       (*(int *)((int)this + 0xa8) == -9999)) {
      *(undefined4 *)((int)this + 0x518) = 1;
      FUN_10024fc0(this,param_1,0x20000002,2);
      *(undefined4 *)((int)this + 0x568) = 1;
      *(undefined4 *)((int)this + 0x29c) = 1;
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      *(undefined4 *)((int)this + 0x29c) = 0;
      FUN_10024fc0(this,param_1,0x10000002,2);
      *(undefined4 *)((int)this + 0x518) = 0;
      return local_b0;
    }
    *param_3 = 0;
    return local_b0;
  }
  if (uVar11 != 0x46) {
    if (uVar11 != 0x47) {
      return 0;
    }
    puVar4 = (undefined4 *)*param_4;
    *(undefined4 *)((int)this + 0x198) = *puVar4;
    *(undefined4 *)((int)this + 0x1b0) = puVar4[6];
    *(undefined4 *)((int)this + 0x19c) = puVar4[1];
    if ((puVar4[6] & 2) == 0) {
      *(undefined4 *)((int)this + 0x1a0) = puVar4[2];
      *(undefined4 *)((int)this + 0x1a4) = puVar4[3];
    }
    if ((puVar4[6] & 1) == 0) {
      *(undefined4 *)((int)this + 0x1a8) = puVar4[4];
      *(undefined4 *)((int)this + 0x1ac) = puVar4[5];
    }
    if (*(int *)((int)this + 0x510) == -0x270d) {
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar8;
        *param_5 = 0;
      }
      if (((puVar4[6] & 1) != 0) && ((puVar4[6] & 2) != 0)) {
        return local_b0;
      }
      FUN_1001f7f0(*(int *)((int)this + 0x434));
      if (*(int *)((int)this + 0x518) == 0) {
        FUN_1001f660(*(HWND *)((int)this + 0x434),0x10000002,0);
        return local_b0;
      }
      return local_b0;
    }
    return local_b0;
  }
  iVar14 = *param_4;
  if ((((*(uint *)(iVar14 + 0x18) & 4) == 0) &&
      (iVar10 = FUN_1001f1f0(*(int *)((int)this + 0x434),0xbed,0xffffd8f1,0,0xffffffff,2),
      iVar10 != 0)) &&
     ((iVar1 = *(int *)((int)this + 0x42c), *(int *)((int)this + 0x434) != iVar1 &&
      (iVar2 = *(int *)((int)this + 0x43c), iVar2 == iVar1)))) {
    iVar3 = *(int *)(iVar10 + 0x43c);
    iVar15 = iVar3;
    if (iVar3 == 0) {
      iVar15 = *(int *)(iVar10 + 0x42c);
    }
    if (iVar2 != 0) {
      iVar1 = iVar2;
    }
    if (iVar15 == iVar1) {
      *(undefined4 *)(iVar14 + 4) = 0;
    }
    else if (iVar3 == 0) {
      *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(iVar10 + 0x42c);
    }
    else {
      *(int *)(iVar14 + 4) = iVar3;
    }
  }
  if (((*(uint *)(iVar14 + 0x18) & 2) == 0) && (*(int *)((int)this + 0xac) == -9999)) {
    *(uint *)(iVar14 + 0x18) = *(uint *)(iVar14 + 0x18) | 2;
  }
  uVar11 = *(uint *)(iVar14 + 0x18);
  if ((uVar11 & 1) == 0) {
    if (*(int *)((int)this + 0x88) == -9999) {
      *(uint *)(iVar14 + 0x18) = uVar11 | 1;
    }
    if ((*(int *)((int)this + 0x88) == 0) && (*(int *)((int)this + 0x568) == 0)) {
      *(uint *)(iVar14 + 0x18) = *(uint *)(iVar14 + 0x18) | 1;
    }
    uVar11 = *(uint *)(iVar14 + 0x18);
    if ((uVar11 & 1) != 0) goto LAB_1001c408;
  }
  else {
LAB_1001c408:
    if ((uVar11 & 2) != 0) goto LAB_1001c4a0;
  }
  local_ac.hdc = (HDC)(*(int *)((int)this + 0x230) + *(int *)(iVar14 + 8));
  local_ac.fErase = *(int *)((int)this + 0x234) + *(int *)(iVar14 + 0xc);
  local_ac.rcPaint.left = (int)&((HRGN)local_ac.hdc)->unused + *(int *)(iVar14 + 0x10);
  local_ac.rcPaint.top = (int)&((HPALETTE)local_ac.fErase)->unused + *(int *)(iVar14 + 0x14);
  FUN_10028210(this,(int *)&local_ac,1,&local_6c.x,&local_2c);
  if (((*(int *)((int)this + 0x42c) == *(int *)((int)this + 0x43c)) &&
      (*(int *)((int)this + 0xa8) == -0x270d)) && (*(int *)((int)this + 0x29c) == 0)) {
    *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + local_6c.x;
    *(int *)(iVar14 + 0xc) = *(int *)(iVar14 + 0xc) + local_6c.y;
  }
LAB_1001c4a0:
  if ((((*(uint *)(iVar14 + 0x18) & 2) == 0) && (*(int *)((int)this + 0xac) == -0x270d)) &&
     (*(HWND *)((int)this + 0x42c) == *(HWND *)((int)this + 0x43c))) {
    local_ac.hdc = *(HDC *)((int)this + 0x264);
    local_ac.fErase = *(undefined4 *)((int)this + 0x268);
    FUN_10028de0(*(HWND *)((int)this + 0x43c),(LPPOINT)&local_ac,1);
    local_6c.x = *(int *)(iVar14 + 8);
    local_b4 = *(int *)(iVar14 + 0xc);
    iVar10 = local_b4 - local_ac.fErase;
    FUN_10028100(&local_6c.x,1,*(int *)((int)this + 0x204) + (local_6c.x - (int)local_ac.hdc),
                 *(uint *)((int)this + 200),(int *)((int)this + 0x468),&local_2c.left);
    FUN_10028100(&local_b4,2,*(int *)((int)this + 0x208) + iVar10,*(uint *)((int)this + 0xcc),
                 (int *)((int)this + 0x46c),&local_2c.left);
    *(LONG *)(iVar14 + 8) = local_6c.x;
    *(int *)(iVar14 + 0xc) = local_b4;
  }
  if (((*(int *)((int)this + 0xac) == -9999) || ((*(uint *)(iVar14 + 0x18) & 2) != 0)) ||
     ((*(int *)(iVar14 + 8) == *(int *)((int)this + 0x1a0) &&
      (*(int *)((int)this + 0x1a4) == *(int *)(iVar14 + 0xc))))) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
  }
  if (((*(int *)((int)this + 0x88) == -9999) || ((*(uint *)(iVar14 + 0x18) & 1) != 0)) ||
     ((*(int *)((int)this + 0x1a8) == *(int *)(iVar14 + 0x10) &&
      (*(int *)(iVar14 + 0x14) == *(int *)((int)this + 0x1ac))))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((!bVar18) || (bVar18 = true, !bVar7)) {
    bVar18 = false;
  }
  if ((*(int *)((int)this + 0x510) == -0x270d) &&
     (((((*(uint *)(iVar14 + 0x18) & 1) == 0 || ((*(uint *)(iVar14 + 0x18) & 2) == 0)) && (!bVar18))
      && (*(int *)((int)this + 0x518) == 0)))) {
    FUN_1001f660(*(HWND *)((int)this + 0x434),0x20000002,0);
  }
  return local_b0;
switchD_1001bbfb_caseD_5:
  if (*(int *)((int)this + 0x29c) != 0) {
    return local_b0;
  }
  bVar18 = *(int *)((int)this + 0xa8) == -0x270d;
  if (*param_3 != 1) {
    if (*param_3 != 2) {
      FUN_100273c0(this,4,0,(ushort)bVar18);
      return local_b0;
    }
    FUN_100273c0(this,4,0,0);
    return local_b0;
  }
  FUN_100273c0(this,0,0,(ushort)bVar18);
  return local_b0;
}


// ---- HookMDIFrameProc @ 1001ce10

LRESULT __cdecl HookMDIFrameProc(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 local_5a [58];
  LRESULT local_20;
  LRESULT local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  LRESULT local_c;
  WNDPROC local_8;
  
                    /* 0x1ce10  301  HookMDIFrameProc */
  pvVar2 = (void *)FUN_1001fed0((int)param_1,0);
  if (pvVar2 != (void *)0x0) {
    local_8 = (WNDPROC)FUN_1002c7f0(pvVar2,(int)param_1);
    *(int *)((int)pvVar2 + 0x538) = *(int *)((int)pvVar2 + 0x538) + 1;
    local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    if (*(int *)((int)pvVar2 + 0x538) == 0) {
      FUN_10025a10();
    }
    else {
      *(int *)((int)pvVar2 + 0x538) = *(int *)((int)pvVar2 + 0x538) + -1;
    }
    if (param_2 == 2) {
      FUN_1001fe50((int)pvVar2,(int)param_1);
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((iVar3 == 0) &&
         (*(int *)((int)pvVar2 + 0x53c) + *(int *)((int)pvVar2 + 0x540) +
          *(int *)((int)pvVar2 + 0x530) + *(int *)((int)pvVar2 + 0x534) +
          *(int *)((int)pvVar2 + 0x538) == 0)) {
        iVar3 = FUN_1001fed0(0,(int)pvVar2);
        if ((iVar3 == 0) &&
           (((*(int *)((int)pvVar2 + 0x524) != 0 &&
             (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)))) {
          *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
          local_20 = *(LRESULT *)((int)pvVar2 + 0x524);
          *(undefined4 *)((int)pvVar2 + 0x524) = 0;
          if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
            pvVar2 = FUN_1001ff90(pvVar2);
          }
          if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) {
            SetWindowLongA(param_1,-4,(LONG)local_8);
            if (pvVar2 != (void *)0x0) {
              FUN_10021580(pvVar2);
              operator_delete(pvVar2);
            }
          }
          iVar3 = 6;
          psVar4 = (short *)0x1001cfe0;
          do {
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = local_5a;
          } while (*psVar4 != 0x15ff);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = (char)*psVar4;
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = puVar5 + 1;
          }
          return local_20;
        }
      }
    }
    return local_c;
  }
  pvVar2 = (void *)FUN_1001ee40((int)param_1);
  if (pvVar2 == (void *)0x0) {
    local_c = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    local_10 = (int *)((int)pvVar2 + 0x538);
    *local_10 = *(int *)((int)pvVar2 + 0x538) + 1;
    local_8 = (WNDPROC)FUN_1002c790(pvVar2,(int)param_1);
    FUN_1001d260(pvVar2,param_1,&param_2,&param_3,&param_4,&local_8,&local_c);
    if (local_8 != (WNDPROC)0x0) {
      local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    }
    if (*local_10 == 0) {
      FUN_10025a10();
    }
    else {
      *local_10 = *local_10 + -1;
    }
    local_18 = (int *)((int)pvVar2 + 0x530);
    local_14 = (int *)((int)pvVar2 + 0x534);
    if (*(int *)((int)pvVar2 + 0x540) + *local_18 + *local_14 + *local_10 +
        *(int *)((int)pvVar2 + 0x53c) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x524) != 0)) &&
          (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)) {
        *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
        local_1c = *(LRESULT *)((int)pvVar2 + 0x524);
        *(undefined4 *)((int)pvVar2 + 0x524) = 0;
        if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
          pvVar2 = FUN_1001ff90(pvVar2);
        }
        if (((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) &&
           (pvVar2 != (void *)0x0)) {
          FUN_10021580(pvVar2);
          operator_delete(pvVar2);
        }
        iVar3 = 6;
        psVar4 = (short *)0x1001d1c3;
        do {
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = local_5a;
        } while (*psVar4 != 0x15ff);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = (char)*psVar4;
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = puVar5 + 1;
        }
        return local_1c;
      }
    }
    if (*(int *)((int)pvVar2 + 0x540) + *local_18 + *local_14 + *local_10 +
        *(int *)((int)pvVar2 + 0x53c) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if (((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) && (pvVar2 != (void *)0x0)) {
        FUN_10021580(pvVar2);
        operator_delete(pvVar2);
        return local_c;
      }
    }
  }
  return local_c;
}


// ---- FUN_1001d260 @ 1001d260

undefined4 __thiscall
FUN_1001d260(void *this,HWND param_1,uint *param_2,WPARAM *param_3,LPARAM *param_4,
            undefined4 *param_5,LRESULT *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  LRESULT LVar8;
  int iVar9;
  uint uVar10;
  int local_30;
  int local_2c;
  int local_28;
  tagPOINT local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  tagRECT local_10;
  
  local_14 = 1;
  SetRectEmpty(&local_10);
  switch(*param_2) {
  case 0xf:
  case 0x14:
    goto switchD_1001d292_caseD_f;
  default:
    uVar6 = FUN_1001bb60(this,param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar6;
  case 0x46:
    iVar3 = *param_4;
    if (((*(uint *)(iVar3 + 0x18) & 4) == 0) &&
       (iVar7 = FUN_1001f1f0(*(int *)((int)this + 0x434),0xbed,0xffffd8f1,0,0xffffffff,2),
       iVar7 != 0)) {
      iVar1 = *(int *)(iVar7 + 0x43c);
      iVar9 = iVar1;
      if (iVar1 == 0) {
        iVar9 = *(int *)(iVar7 + 0x42c);
      }
      iVar2 = *(int *)((int)this + 0x43c);
      if (iVar2 == 0) {
        iVar2 = *(int *)((int)this + 0x42c);
      }
      if (iVar2 == iVar9) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      else if (iVar1 == 0) {
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 0x42c);
      }
      else {
        *(int *)(iVar3 + 4) = iVar1;
      }
    }
    if (((*(uint *)(iVar3 + 0x18) & 2) == 0) && (*(int *)((int)this + 0xac) == -9999)) {
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 2;
    }
    uVar10 = *(uint *)(iVar3 + 0x18);
    if ((uVar10 & 1) == 0) {
      if (*(int *)((int)this + 0x88) == -9999) {
        *(uint *)(iVar3 + 0x18) = uVar10 | 1;
      }
      if ((*(int *)((int)this + 0x88) == 0) && (*(int *)((int)this + 0x568) == 0)) {
        *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 1;
      }
      uVar10 = *(uint *)(iVar3 + 0x18);
      if ((uVar10 & 1) != 0) goto LAB_1001d38f;
LAB_1001d393:
      local_24.x = *(int *)((int)this + 0x230) + *(int *)(iVar3 + 8);
      local_24.y = *(int *)((int)this + 0x234) + *(int *)(iVar3 + 0xc);
      local_1c = *(int *)(iVar3 + 0x10) + local_24.x;
      local_18 = *(int *)(iVar3 + 0x14) + local_24.y;
      FUN_10028210(this,&local_24.x,1,&local_2c,&local_10);
      if ((*(int *)((int)this + 0xa8) == -0x270d) && (*(int *)((int)this + 0x29c) == 0)) {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + local_2c;
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + local_28;
      }
    }
    else {
LAB_1001d38f:
      if ((uVar10 & 2) == 0) goto LAB_1001d393;
    }
    if (((*(uint *)(iVar3 + 0x18) & 2) == 0) && (*(int *)((int)this + 0xac) == -0x270d)) {
      local_24.x = *(int *)((int)this + 0x264);
      local_24.y = *(int *)((int)this + 0x268);
      FUN_10028de0(*(HWND *)((int)this + 0x43c),&local_24,1);
      local_2c = *(int *)(iVar3 + 8);
      local_30 = *(int *)(iVar3 + 0xc);
      iVar7 = local_30 - local_24.y;
      FUN_10028100(&local_2c,1,*(int *)((int)this + 0x204) + (local_2c - local_24.x),
                   *(uint *)((int)this + 200),(int *)((int)this + 0x468),&local_10.left);
      FUN_10028100(&local_30,2,*(int *)((int)this + 0x208) + iVar7,*(uint *)((int)this + 0xcc),
                   (int *)((int)this + 0x46c),&local_10.left);
      *(int *)(iVar3 + 8) = local_2c;
      *(int *)(iVar3 + 0xc) = local_30;
    }
    if (((*(int *)((int)this + 0xac) == -9999) || ((*(uint *)(iVar3 + 0x18) & 2) != 0)) ||
       ((*(int *)((int)this + 0x264) - *(int *)((int)this + 0x230) == *(int *)(iVar3 + 8) &&
        (*(int *)((int)this + 0x268) - *(int *)((int)this + 0x234) == *(int *)(iVar3 + 0xc))))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (((*(int *)((int)this + 0x88) == -9999) || ((*(uint *)(iVar3 + 0x18) & 1) != 0)) ||
       ((*(int *)((int)this + 0x26c) - *(int *)((int)this + 0x264) == *(int *)(iVar3 + 0x10) &&
        (*(int *)((int)this + 0x270) - *(int *)(iVar3 + 0x14) == *(int *)((int)this + 0x268))))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((!bVar4) || (bVar4 = true, !bVar5)) {
      bVar4 = false;
    }
    if (*(int *)((int)this + 0x510) != -0x270d) {
      return local_14;
    }
    if (((*(uint *)(iVar3 + 0x18) & 1) != 0) && ((*(uint *)(iVar3 + 0x18) & 2) != 0)) {
      return local_14;
    }
    if (bVar4) {
      return local_14;
    }
    if (*(int *)((int)this + 0x518) != 0) {
      return local_14;
    }
    uVar10 = 0x20000002;
    if (*(int *)((int)this + 0x90) == -0x270d) {
      FUN_1001f660(*(HWND *)((int)this + 0x434),0x20000002,0);
      return local_14;
    }
    break;
  case 0x47:
    iVar3 = *param_4;
    if (*(int *)((int)this + 0x510) != -0x270d) {
      return local_14;
    }
    if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
      LVar8 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,iVar3);
      *param_6 = LVar8;
      *param_5 = 0;
    }
    uVar10 = *(uint *)(iVar3 + 0x18);
    if (((uVar10 & 1) != 0) && ((uVar10 & 2) != 0)) {
      return local_14;
    }
    FUN_1001f7f0(*(int *)((int)this + 0x434));
    if (*(int *)((int)this + 0x518) != 0) {
      return local_14;
    }
    uVar10 = 0x10000002;
    if (*(int *)((int)this + 0x90) == -0x270d) {
      FUN_1001f660(*(HWND *)((int)this + 0x434),0x10000002,0);
      return local_14;
    }
  }
  FUN_10024fc0(this,param_1,uVar10,0);
switchD_1001d292_caseD_f:
  return local_14;
}


// ---- HookParentWndProc @ 1001d6e0

LRESULT __cdecl HookParentWndProc(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 local_5a [58];
  LRESULT local_20;
  LRESULT local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  LRESULT local_c;
  WNDPROC local_8;
  
                    /* 0x1d6e0  302  HookParentWndProc */
  pvVar2 = (void *)FUN_1001fed0((int)param_1,0);
  if (pvVar2 != (void *)0x0) {
    local_8 = (WNDPROC)FUN_1002c7f0(pvVar2,(int)param_1);
    *(int *)((int)pvVar2 + 0x53c) = *(int *)((int)pvVar2 + 0x53c) + 1;
    local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    if (*(int *)((int)pvVar2 + 0x53c) == 0) {
      FUN_10025a10();
    }
    else {
      *(int *)((int)pvVar2 + 0x53c) = *(int *)((int)pvVar2 + 0x53c) + -1;
    }
    if (param_2 == 2) {
      FUN_1001fe50((int)pvVar2,(int)param_1);
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((iVar3 == 0) &&
         (*(int *)((int)pvVar2 + 0x540) + *(int *)((int)pvVar2 + 0x530) +
          *(int *)((int)pvVar2 + 0x534) + *(int *)((int)pvVar2 + 0x538) +
          *(int *)((int)pvVar2 + 0x53c) == 0)) {
        iVar3 = FUN_1001fed0(0,(int)pvVar2);
        if ((iVar3 == 0) &&
           (((*(int *)((int)pvVar2 + 0x524) != 0 &&
             (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)))) {
          *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
          local_20 = *(LRESULT *)((int)pvVar2 + 0x524);
          *(undefined4 *)((int)pvVar2 + 0x524) = 0;
          if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
            pvVar2 = FUN_1001ff90(pvVar2);
          }
          if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) {
            SetWindowLongA(param_1,-4,(LONG)local_8);
            if (pvVar2 != (void *)0x0) {
              FUN_10021580(pvVar2);
              operator_delete(pvVar2);
            }
          }
          iVar3 = 6;
          psVar4 = (short *)0x1001d8b0;
          do {
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = local_5a;
          } while (*psVar4 != 0x15ff);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = (char)*psVar4;
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = puVar5 + 1;
          }
          return local_20;
        }
      }
    }
    return local_c;
  }
  pvVar2 = (void *)FUN_1001ee40((int)param_1);
  if (pvVar2 == (void *)0x0) {
    local_c = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    local_10 = (int *)((int)pvVar2 + 0x53c);
    *local_10 = *(int *)((int)pvVar2 + 0x53c) + 1;
    local_8 = (WNDPROC)FUN_1002c790(pvVar2,(int)param_1);
    FUN_1001db30(pvVar2,param_1,&param_2,&param_3,&param_4,&local_8,&local_c);
    if (local_8 != (WNDPROC)0x0) {
      local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    }
    if (*local_10 == 0) {
      FUN_10025a10();
    }
    else {
      *local_10 = *local_10 + -1;
    }
    local_18 = (int *)((int)pvVar2 + 0x540);
    local_14 = (int *)((int)pvVar2 + 0x530);
    if (*local_10 + *local_18 + *local_14 + *(int *)((int)pvVar2 + 0x534) +
        *(int *)((int)pvVar2 + 0x538) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x524) != 0)) &&
          (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)) {
        *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
        local_1c = *(LRESULT *)((int)pvVar2 + 0x524);
        *(undefined4 *)((int)pvVar2 + 0x524) = 0;
        if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
          pvVar2 = FUN_1001ff90(pvVar2);
        }
        if (((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) &&
           (pvVar2 != (void *)0x0)) {
          FUN_10021580(pvVar2);
          operator_delete(pvVar2);
        }
        iVar3 = 6;
        psVar4 = (short *)0x1001da93;
        do {
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = local_5a;
        } while (*psVar4 != 0x15ff);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = (char)*psVar4;
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = puVar5 + 1;
        }
        return local_1c;
      }
    }
    if (*local_10 + *local_18 + *local_14 + *(int *)((int)pvVar2 + 0x534) +
        *(int *)((int)pvVar2 + 0x538) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if (((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) && (pvVar2 != (void *)0x0)) {
        FUN_10021580(pvVar2);
        operator_delete(pvVar2);
        return local_c;
      }
    }
  }
  return local_c;
}


// ---- FUN_1001db30 @ 1001db30

undefined4 __thiscall
FUN_1001db30(void *this,HWND param_1,uint *param_2,WPARAM *param_3,LPARAM *param_4,
            undefined4 *param_5,LRESULT *param_6)

{
  HMENU pHVar1;
  HWND hWnd;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  LRESULT LVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  tagRECT local_50;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  tagPOINT local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10 [2];
  int local_8;
  int local_4;
  
  local_14 = 1;
  local_24 = *(int *)((int)this + 0x27c);
  local_20 = *(int *)((int)this + 0x280);
  uVar8 = *param_2;
  local_1c = local_24;
  local_18 = local_20;
  if (uVar8 < 0xb) {
    if (uVar8 == 10) {
      *(undefined4 *)((int)this + 0x498) = 0x10;
      if (*param_3 != 0) {
        *(undefined4 *)((int)this + 0x498) = 0x11;
      }
      FUN_1001f790((int)param_1,0x12,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x498),0);
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar5 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar5;
        *param_5 = 0;
      }
      FUN_1001f790((int)param_1,0x12,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x498),0);
      return local_14;
    }
    if (uVar8 == 3) {
      if (*(int *)((int)this + 0x29c) != 0) {
        return 1;
      }
      BVar4 = IsIconic(param_1);
      if (BVar4 != 0) {
        return local_14;
      }
      FUN_1001f820((int)param_1);
      return local_14;
    }
    if (uVar8 == 5) {
      if (*(int *)((int)this + 0x29c) != 0) {
        return 1;
      }
      if (*param_3 == 1) {
        FUN_1001f850((int)param_1,0,0,0);
        return local_14;
      }
      FUN_1001f850((int)param_1,4,0,0);
      return local_14;
    }
    if (uVar8 == 6) {
      *(undefined4 *)((int)this + 0x494) = 0x10;
      if ((short)*param_3 != 0) {
        *(undefined4 *)((int)this + 0x494) = 0x11;
      }
      FUN_1001f790((int)param_1,0x11,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar5 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar5;
        *param_5 = 0;
      }
      FUN_1001f790((int)param_1,0x11,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),*(undefined4 *)((int)this + 0x494),0);
      return local_14;
    }
  }
  else if (uVar8 < 0x113) {
    if (uVar8 == 0x112) {
      uVar8 = *param_3 & 0xfff0;
      if (uVar8 == 0xf030) {
        pvVar7 = FUN_1001efb0((int)param_1,0xbec,0xffffd8f3,0xffffffff,2);
        if (pvVar7 != (void *)0x0) {
          FUN_1001fcd0((int)param_1,100,1,0);
          FUN_1001f660(param_1,0x20000002,1);
          FUN_1001fcd0((int)param_1,0x65,1,0);
          if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
            LVar5 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
            *param_6 = LVar5;
            *param_5 = 0;
          }
          FUN_1001fcd0((int)param_1,0x65,0,0);
          FUN_1001fcd0((int)param_1,0x66,0,0);
          FUN_1001f660(param_1,0x10000002,1);
          FUN_1001fcd0((int)param_1,100,0,0);
          return local_14;
        }
        *param_3 = 0;
        return local_14;
      }
      if (uVar8 == 0xf120) {
        pvVar7 = FUN_1001efb0((int)param_1,0xbec,0xffffd8f1,0xffffffff,2);
        if (pvVar7 == (void *)0x0) {
          FUN_1001fcd0((int)param_1,100,1,0);
          FUN_1001f660(param_1,0x20000002,1);
          FUN_1001fcd0((int)param_1,0x65,1,0);
          if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
            LVar5 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
            *param_6 = LVar5;
            *param_5 = 0;
          }
          FUN_1001fcd0((int)param_1,0x65,0,0);
          FUN_1001fcd0((int)param_1,0x66,0,0);
          FUN_1001f660(param_1,0x10000002,1);
          FUN_1001fcd0((int)param_1,100,0,0);
          return local_14;
        }
        *param_3 = 0;
        return local_14;
      }
      if (uVar8 != 0xf020) {
        return 1;
      }
      pvVar7 = FUN_1001efb0((int)param_1,0xbec,0xffffd8f1,0xffffffff,2);
      if ((pvVar7 == (void *)0x0) &&
         (pvVar7 = FUN_1001efb0((int)param_1,0xbf0,0xffffd8f3,0xffffffff,2), pvVar7 == (void *)0x0))
      {
        FUN_1001fcd0((int)param_1,100,1,0);
        FUN_1001f660(param_1,0x20000002,2);
        FUN_1001fcd0((int)param_1,0x66,1,0);
        FUN_1001fcd0((int)param_1,0x65,1,0);
        if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
          LVar5 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
          *param_6 = LVar5;
          *param_5 = 0;
        }
        FUN_1001fcd0((int)param_1,0x65,0,0);
        FUN_1001f660(param_1,0x10000002,2);
        FUN_1001fcd0((int)param_1,100,0,0);
        return local_14;
      }
      *param_3 = 0;
      return local_14;
    }
    if (uVar8 == 0x46) {
      iVar9 = *param_4;
      pvVar7 = FUN_1001efb0((int)param_1,0xbf0,0xffffd8f3,0xffffffff,2);
      if (pvVar7 != (void *)0x0) {
        GetWindowRect(*(HWND *)((int)this + 0x434),&local_50);
        local_34 = ((*(int *)((int)this + 0x230) - *(int *)((int)this + 0x238)) - local_50.left) +
                   local_50.right;
        local_40 = ((*(int *)((int)this + 0x234) - *(int *)((int)this + 0x23c)) - local_50.top) +
                   local_50.bottom;
        if ((*(uint *)(iVar9 + 0x18) & 2) != 0) {
          *(LONG *)(iVar9 + 8) = local_50.left;
          *(LONG *)(iVar9 + 0xc) = local_50.top;
        }
        if ((*(uint *)(iVar9 + 0x18) & 1) != 0) {
          *(LONG *)(iVar9 + 0x10) = local_50.right - local_50.left;
          *(LONG *)(iVar9 + 0x14) = local_50.bottom - local_50.top;
        }
        FUN_1001fac0((int)param_1,local_10,0,1);
        local_30 = *(int *)(iVar9 + 0x10) - local_34;
        if (local_30 <= local_8) {
          local_30 = local_8;
        }
        iVar10 = *(int *)(iVar9 + 0x14) - local_40;
        if (iVar10 <= local_4) {
          iVar10 = local_4;
        }
        local_2c.x = 0;
        local_2c.y = 0;
        ClientToScreen(*(HWND *)((int)this + 0x434),&local_2c);
        local_50.left = local_2c.x;
        local_50.right = local_30 + local_2c.x;
        local_50.top = local_2c.y;
        local_50.bottom = iVar10 + local_2c.y;
        FUN_1001f8e0(this,*(HWND *)((int)this + 0x438),(HWND)0x0,&local_50,&local_38,&local_3c);
        FUN_1002d520(this,*(HWND *)((int)this + 0x438));
        if ((local_38 != 0) || (local_3c != 0)) {
          local_30 = ((-1 - *(int *)((int)this + 0x298)) * local_3c - local_34) +
                     *(int *)(iVar9 + 0x10);
          if (local_30 <= local_8) {
            local_30 = local_8;
          }
          local_30 = local_30 + (*(int *)((int)this + 0x298) + 1) * local_3c;
          iVar10 = ((-1 - *(int *)((int)this + 0x294)) * local_38 - local_40) +
                   *(int *)(iVar9 + 0x14);
          if (iVar10 <= local_4) {
            iVar10 = local_4;
          }
          iVar10 = iVar10 + (*(int *)((int)this + 0x294) + 1) * local_38;
        }
        if ((*(int *)(iVar9 + 0x10) != local_34 + local_30) ||
           (local_40 + iVar10 != *(int *)(iVar9 + 0x14))) {
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffe;
          *(int *)(iVar9 + 0x10) = local_34 + local_30;
          *(int *)(iVar9 + 0x14) = iVar10 + local_40;
        }
        if (*(int *)((int)this + 0x27c) < *(int *)(iVar9 + 8) + *(int *)(iVar9 + 0x10)) {
          *(int *)(iVar9 + 8) = *(int *)((int)this + 0x27c) - *(int *)(iVar9 + 0x10);
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffd;
        }
        if (*(int *)(iVar9 + 8) < 0) {
          *(undefined4 *)(iVar9 + 8) = 0;
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffd;
        }
        if (*(int *)((int)this + 0x280) < *(int *)(iVar9 + 0xc) + *(int *)(iVar9 + 0x14)) {
          *(int *)(iVar9 + 0xc) = *(int *)((int)this + 0x280) - *(int *)(iVar9 + 0x14);
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffd;
        }
        if (*(int *)(iVar9 + 0xc) < 0) {
          *(undefined4 *)(iVar9 + 0xc) = 0;
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffd;
        }
        local_24 = *(int *)(iVar9 + 8);
        local_1c = (*(int *)((int)this + 0x27c) - *(int *)(iVar9 + 0x10)) - *(int *)(iVar9 + 8);
        local_20 = *(int *)(iVar9 + 0xc);
        local_18 = (*(int *)((int)this + 0x280) - *(int *)(iVar9 + 0xc)) - *(int *)(iVar9 + 0x14);
      }
      if (((*(uint *)(iVar9 + 0x18) & 2) == 0) &&
         (pvVar7 = FUN_1001efb0((int)param_1,0xbf5,0xffffd8f1,0xffffffff,2), pvVar7 != (void *)0x0))
      {
        *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | 2;
      }
      if ((*(uint *)(iVar9 + 0x18) & 1) == 0) {
        pvVar7 = FUN_1001efb0((int)param_1,0xbec,0xffffd8f1,0xffffffff,2);
        if (pvVar7 != (void *)0x0) {
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | 1;
        }
        pvVar7 = FUN_1001efb0((int)param_1,0xbec,0,0xffffffff,2);
        pvVar6 = FUN_1001efb0((int)param_1,0x66,0,0xffffffff,2);
        if (((pvVar7 != (void *)0x0) && (pvVar6 != (void *)0x0)) && (pvVar6 == pvVar7)) {
          *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | 1;
        }
      }
      if (((*(uint *)(iVar9 + 0x18) & 2) == 0) && (*(int *)((int)this + 0xac) == -0x270d)) {
        local_10[0] = *(int *)(iVar9 + 8);
        local_50.left = *(int *)(iVar9 + 0xc);
        iVar10 = local_50.left - *(int *)((int)this + 0x244);
        FUN_10028100(local_10,1,
                     *(int *)((int)this + 0x204) + (local_10[0] - *(int *)((int)this + 0x240)),
                     *(uint *)((int)this + 200),(int *)((int)this + 0x468),&local_24);
        FUN_10028100(&local_50.left,2,*(int *)((int)this + 0x208) + iVar10,
                     *(uint *)((int)this + 0xcc),(int *)((int)this + 0x46c),&local_24);
        *(int *)(iVar9 + 8) = local_10[0];
        *(LONG *)(iVar9 + 0xc) = local_50.left;
      }
      pvVar7 = FUN_1001efb0((int)param_1,0xbf5,0xffffd8f1,0xffffffff,2);
      if (((pvVar7 == (void *)0x0) && ((*(uint *)(iVar9 + 0x18) & 2) == 0)) &&
         ((*(int *)((int)this + 0x240) != *(int *)(iVar9 + 8) ||
          (*(int *)((int)this + 0x244) != *(int *)(iVar9 + 0xc))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pvVar7 = FUN_1001efb0((int)param_1,0xbec,0xffffd8f1,0xffffffff,2);
      if (((pvVar7 == (void *)0x0) && ((*(uint *)(iVar9 + 0x18) & 1) == 0)) &&
         ((*(int *)((int)this + 0x248) - *(int *)((int)this + 0x240) != *(int *)(iVar9 + 0x10) ||
          (*(int *)((int)this + 0x24c) - *(int *)(iVar9 + 0x14) != *(int *)((int)this + 0x244))))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((!bVar2) || (bVar2 = true, !bVar3)) {
        bVar2 = false;
      }
      if (*(int *)((int)this + 0x510) != -0x270d) {
        return local_14;
      }
      if (((*(uint *)(iVar9 + 0x18) & 1) != 0) && ((*(uint *)(iVar9 + 0x18) & 2) != 0)) {
        return local_14;
      }
      if (bVar2) {
        return local_14;
      }
      if (*(int *)((int)this + 0x518) != 0) {
        return local_14;
      }
      FUN_1001f660(param_1,0x20000002,0);
      return local_14;
    }
    if (uVar8 == 0x47) {
      local_10[0] = *param_4;
      pvVar7 = FUN_1001efb0((int)param_1,0xbf0,0xffffd8f3,0xffffffff,2);
      if (pvVar7 != (void *)0x0) {
        FUN_1001f850((int)param_1,4,0,1);
      }
      if (*(int *)((int)this + 0x510) != -0x270d) {
        return local_14;
      }
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar5 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar5;
        *param_5 = 0;
      }
      if (((*(uint *)(local_10[0] + 0x18) & 1) != 0) && ((*(uint *)(local_10[0] + 0x18) & 2) != 0))
      {
        return local_14;
      }
      FUN_1001f7f0((int)param_1);
      if (*(int *)((int)this + 0x518) != 0) {
        return local_14;
      }
      FUN_1001f660(param_1,0x10000002,0);
      return local_14;
    }
  }
  else if (uVar8 < 0x120) {
    if (uVar8 == 0x11f) {
      pHVar1 = (HMENU)*param_4;
      uVar8 = *param_3;
      BVar4 = IsIconic(param_1);
      if (BVar4 != 0) {
        return local_14;
      }
      FUN_1001f750((int)param_1,pHVar1,uVar8,2);
      return local_14;
    }
    if (uVar8 == 0x116) {
      pHVar1 = (HMENU)*param_3;
      BVar4 = IsIconic(param_1);
      if (BVar4 != 0) {
        return local_14;
      }
      FUN_1001f750((int)param_1,pHVar1,0x10,2);
      return local_14;
    }
  }
  else if ((uVar8 == 0x30f) || (uVar8 == 0x311)) {
    iVar9 = 0;
    hWnd = *(HWND *)((int)this + 0x438);
    if ((hWnd != (HWND)0x0) && (*(HWND *)((int)this + 0x434) != hWnd)) {
      iVar9 = SendMessageA(hWnd,0x229,0,0);
    }
    FUN_1001f520(this,(int)param_1,iVar9);
    return local_14;
  }
  return 0;
}


// ---- HookMDIClientWndProc @ 1001e660

LRESULT __cdecl HookMDIClientWndProc(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 local_5a [58];
  LRESULT local_20;
  LRESULT local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  LRESULT local_c;
  WNDPROC local_8;
  
                    /* 0x1e660  300  HookMDIClientWndProc */
  pvVar2 = (void *)FUN_1001fed0((int)param_1,0);
  if (pvVar2 != (void *)0x0) {
    local_8 = (WNDPROC)FUN_1002c7f0(pvVar2,(int)param_1);
    *(int *)((int)pvVar2 + 0x540) = *(int *)((int)pvVar2 + 0x540) + 1;
    local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    if (*(int *)((int)pvVar2 + 0x540) == 0) {
      FUN_10025a10();
    }
    else {
      *(int *)((int)pvVar2 + 0x540) = *(int *)((int)pvVar2 + 0x540) + -1;
    }
    if (param_2 == 2) {
      FUN_1001fe50((int)pvVar2,(int)param_1);
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((iVar3 == 0) &&
         (*(int *)((int)pvVar2 + 0x53c) + *(int *)((int)pvVar2 + 0x530) +
          *(int *)((int)pvVar2 + 0x534) + *(int *)((int)pvVar2 + 0x538) +
          *(int *)((int)pvVar2 + 0x540) == 0)) {
        iVar3 = FUN_1001fed0(0,(int)pvVar2);
        if ((iVar3 == 0) &&
           (((*(int *)((int)pvVar2 + 0x524) != 0 &&
             (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)))) {
          *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
          local_20 = *(LRESULT *)((int)pvVar2 + 0x524);
          *(undefined4 *)((int)pvVar2 + 0x524) = 0;
          if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
            pvVar2 = FUN_1001ff90(pvVar2);
          }
          if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) {
            SetWindowLongA(param_1,-4,(LONG)local_8);
            if (pvVar2 != (void *)0x0) {
              FUN_10021580(pvVar2);
              operator_delete(pvVar2);
            }
          }
          iVar3 = 6;
          psVar4 = (short *)0x1001e830;
          do {
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = local_5a;
          } while (*psVar4 != 0x15ff);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = (char)*psVar4;
            psVar4 = (short *)((int)psVar4 + 1);
            puVar5 = puVar5 + 1;
          }
          return local_20;
        }
      }
    }
    return local_c;
  }
  pvVar2 = (void *)FUN_1001ee40((int)param_1);
  if (pvVar2 == (void *)0x0) {
    local_c = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    local_10 = (int *)((int)pvVar2 + 0x540);
    *local_10 = *(int *)((int)pvVar2 + 0x540) + 1;
    local_8 = (WNDPROC)FUN_1002c790(pvVar2,(int)param_1);
    FUN_1001eab0(pvVar2,param_1,&param_2,&param_3,&param_4,&local_8,&local_c);
    if (local_8 != (WNDPROC)0x0) {
      local_c = CallWindowProcA(local_8,param_1,param_2,param_3,param_4);
    }
    if (*local_10 == 0) {
      FUN_10025a10();
    }
    else {
      *local_10 = *local_10 + -1;
    }
    local_18 = (int *)((int)pvVar2 + 0x530);
    local_14 = (int *)((int)pvVar2 + 0x534);
    if (*(int *)((int)pvVar2 + 0x53c) + *local_10 + *local_18 + *local_14 +
        *(int *)((int)pvVar2 + 0x538) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if ((((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x524) != 0)) &&
          (uVar1 = *(uint *)((int)pvVar2 + 0x520), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)) {
        *(uint *)((int)pvVar2 + 0x520) = uVar1 & 0xfffffffd;
        local_1c = *(LRESULT *)((int)pvVar2 + 0x524);
        *(undefined4 *)((int)pvVar2 + 0x524) = 0;
        if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
          pvVar2 = FUN_1001ff90(pvVar2);
        }
        if (((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) &&
           (pvVar2 != (void *)0x0)) {
          FUN_10021580(pvVar2);
          operator_delete(pvVar2);
        }
        iVar3 = 6;
        psVar4 = (short *)0x1001ea17;
        do {
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = local_5a;
        } while (*psVar4 != 0x15ff);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = (char)*psVar4;
          psVar4 = (short *)((int)psVar4 + 1);
          puVar5 = puVar5 + 1;
        }
        return local_1c;
      }
    }
    if (*(int *)((int)pvVar2 + 0x53c) + *local_10 + *local_18 + *local_14 +
        *(int *)((int)pvVar2 + 0x538) == 0) {
      iVar3 = FUN_1001fed0(0,(int)pvVar2);
      if (((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x52c) == -0x270d)) && (pvVar2 != (void *)0x0)) {
        FUN_10021580(pvVar2);
        operator_delete(pvVar2);
        return local_c;
      }
    }
  }
  return local_c;
}


// ---- FUN_1001eab0 @ 1001eab0

undefined4 __thiscall
FUN_1001eab0(void *this,HWND param_1,uint *param_2,WPARAM *param_3,int *param_4,undefined4 *param_5,
            LRESULT *param_6)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  void *pvVar4;
  void *pvVar5;
  LRESULT LVar6;
  uint uVar7;
  
  uVar7 = *param_2;
  if (uVar7 < 0x47) {
    if (uVar7 == 0x46) {
      iVar1 = *param_4;
      if (((*(uint *)(iVar1 + 0x18) & 2) == 0) &&
         (pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xbf5,0xffffd8f1,0xffffffff,2),
         pvVar4 != (void *)0x0)) {
        *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 2;
      }
      if ((*(uint *)(iVar1 + 0x18) & 1) == 0) {
        pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xbec,0xffffd8f1,0xffffffff,2);
        if (pvVar4 != (void *)0x0) {
          *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
        }
        pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xbec,0,0xffffffff,2);
        pvVar5 = FUN_1001efb0(*(int *)((int)this + 0x434),0x66,0,0xffffffff,2);
        if (((pvVar4 != (void *)0x0) && (pvVar5 != (void *)0x0)) && (pvVar5 == pvVar4)) {
          *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
        }
      }
      if (*(int *)((int)this + 0x510) != -0x270d) {
        return 1;
      }
      uVar7 = *(uint *)(iVar1 + 0x18);
      if ((((uVar7 & 1) != 0) && ((uVar7 & 2) != 0)) && ((uVar7 & 0x20) == 0)) {
        return 1;
      }
      if (*(int *)((int)this + 0x518) != 0) {
        return 1;
      }
      FUN_1001f660(*(HWND *)((int)this + 0x434),0x20000002,0);
      return 1;
    }
    if (uVar7 == 3) {
      if (*(int *)((int)this + 0x29c) != 0) {
        return 1;
      }
      BVar3 = IsIconic(*(HWND *)((int)this + 0x434));
      if (BVar3 != 0) {
        return 1;
      }
      FUN_1001f820(*(int *)((int)this + 0x434));
      return 1;
    }
    if (uVar7 == 5) {
      if (*(int *)((int)this + 0x29c) != 0) {
        return 1;
      }
      if (*param_3 == 1) {
        FUN_1001f850(*(int *)((int)this + 0x434),0,0,0);
        return 1;
      }
      FUN_1001f850(*(int *)((int)this + 0x434),4,0,0);
      return 1;
    }
  }
  else if (uVar7 < 0x116) {
    if (0x113 < uVar7) {
      pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xbf5,0xffffd8f1,0xffffffff,2);
      if (pvVar4 != (void *)0x0) {
        *param_2 = 0;
      }
      if ((short)*param_3 == 5) {
        return 1;
      }
      FUN_1001fc30((int)param_1,(short)*param_3);
      return 1;
    }
    if (uVar7 == 0x47) {
      iVar1 = *param_4;
      pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xbf0,0xffffd8f3,0xffffffff,2);
      if (((pvVar4 != (void *)0x0) ||
          (pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xc03,0,0xfffffffe,3),
          pvVar4 != (void *)0x0)) ||
         (pvVar4 = FUN_1001efb0(*(int *)((int)this + 0x434),0xc04,0,0xfffffffe,3),
         pvVar4 != (void *)0x0)) {
        FUN_1001f850(*(int *)((int)this + 0x434),4,0,1);
      }
      if (*(int *)((int)this + 0x510) != -0x270d) {
        return 1;
      }
      if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
        LVar6 = CallWindowProcA((WNDPROC)*param_5,param_1,*param_2,*param_3,*param_4);
        *param_6 = LVar6;
        *param_5 = 0;
      }
      uVar7 = *(uint *)(iVar1 + 0x18);
      if ((((uVar7 & 1) != 0) && ((uVar7 & 2) != 0)) && ((uVar7 & 0x20) == 0)) {
        return 1;
      }
      FUN_1002d520(this,*(HWND *)((int)this + 0x438));
      FUN_1001f7f0(*(int *)((int)this + 0x434));
      if (*(int *)((int)this + 0x518) != 0) {
        return 1;
      }
      FUN_1001f660(*(HWND *)((int)this + 0x434),0x10000002,0);
      return 1;
    }
  }
  else if (uVar7 == 0x220) {
    if ((WNDPROC)*param_5 != (WNDPROC)0x0) {
      LVar6 = CallWindowProcA((WNDPROC)*param_5,param_1,0x220,*param_3,*param_4);
      *param_6 = LVar6;
      *param_5 = 0;
    }
    pHVar2 = (HWND)*param_6;
    if (pHVar2 == (HWND)0x0) {
      return 1;
    }
    uVar7 = FUN_1001eeb0((int)pHVar2);
    if (uVar7 != 0) {
      return 1;
    }
    FUN_1002d6a0(pHVar2);
    return 1;
  }
  return 0;
}


// ---- FUN_1001ee40 @ 1001ee40

int __cdecl FUN_1001ee40(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar2 = false;
  iVar1 = DAT_10032eb0;
  while ((iVar1 != 0 && (!bVar2))) {
    if ((*(int *)(iVar1 + 0x434) == param_1) || (bVar2 = false, *(int *)(iVar1 + 0x438) == param_1))
    {
      bVar2 = true;
      iVar3 = iVar1;
    }
    if (((*(int *)(iVar1 + 0x43c) == param_1) || (*(int *)(iVar1 + 0x42c) == param_1)) &&
       (iVar3 = iVar1, (*(uint *)(iVar1 + 0x2b0) & 2) != 0)) {
      iVar4 = iVar1;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  if (iVar3 == 0) {
    iVar3 = iVar4;
  }
  return iVar3;
}


// ---- FUN_1001eeb0 @ 1001eeb0

uint FUN_1001eeb0(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10032eb0;
  if (DAT_10032eb0 != 0) {
    while (((*(int *)(uVar1 + 0x42c) != param_1 && (*(int *)(uVar1 + 0x434) != param_1)) &&
           (*(int *)(uVar1 + 0x438) != param_1))) {
      if ((*(int *)(uVar1 + 0x43c) == param_1) || (uVar1 = *(uint *)(uVar1 + 0x10), uVar1 == 0))
      break;
    }
  }
  return (uVar1 == 0) - 1 & uVar1;
}


// ---- FUN_1001ef00 @ 1001ef00

void __fastcall FUN_1001ef00(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100336a0);
  iVar1 = DAT_10032eb0;
  iVar2 = param_1;
  if (DAT_10032eb0 != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0x10);
    } while (*(int *)(iVar2 + 0x10) != 0);
    *(int *)(param_1 + 0x14) = iVar2;
    *(int *)(iVar2 + 0x10) = param_1;
    iVar2 = DAT_10032eb0;
  }
  DAT_10032eb0 = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100336a0);
  return;
}


// ---- FUN_1001ef50 @ 1001ef50

void __fastcall FUN_1001ef50(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100336a0);
  iVar1 = DAT_10032eb0;
  if (DAT_10032eb0 != 0) {
    do {
      if (iVar1 == param_1) break;
      iVar1 = *(int *)(iVar1 + 0x10);
    } while (iVar1 != 0);
    if (iVar1 != 0) {
      if (iVar1 == DAT_10032eb0) {
        DAT_10032eb0 = *(int *)(iVar1 + 0x10);
      }
      if (*(int *)(iVar1 + 0x10) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x14) = *(undefined4 *)(iVar1 + 0x14);
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10) = *(undefined4 *)(iVar1 + 0x10);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100336a0);
  return;
}


// ---- FUN_1001efb0 @ 1001efb0

void * FUN_1001efb0(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  void *this;
  bool bVar1;
  uint local_4;
  
  local_4 = 0;
  this = DAT_10032eb0;
  do {
    if (this == (void *)0x0) {
      return (void *)0x0;
    }
    if (*(int *)((int)this + 0x434) == param_1) {
      switch(param_2) {
      case 100:
        local_4 = *(uint *)((int)this + 0x518);
        break;
      case 0x65:
        local_4 = *(uint *)((int)this + 0x29c);
        break;
      case 0x66:
        local_4 = *(uint *)((int)this + 0x568);
        break;
      case 0x67:
        local_4 = *(uint *)((int)this + 0xd0);
        break;
      case 0x68:
        local_4 = *(uint *)((int)this + 0x2b0);
        break;
      default:
        FUN_100228a0(this,param_2,&local_4);
      }
      switch(param_5) {
      case 0:
        bVar1 = (int)param_3 < (int)(local_4 & param_4);
        break;
      case 1:
        bVar1 = (int)(local_4 & param_4) < (int)param_3;
        break;
      case 2:
        bVar1 = (local_4 & param_4) == param_3;
        break;
      case 3:
        bVar1 = (local_4 & param_4) != param_3;
        break;
      default:
        bVar1 = false;
      }
      if (bVar1) {
        return this;
      }
    }
    this = *(void **)((int)this + 0x10);
  } while( true );
}


// ---- FUN_1001f1f0 @ 1001f1f0

void FUN_1001f1f0(int param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_4;
  
  iVar2 = 0;
  iVar3 = 0;
  local_4 = 0;
  for (iVar1 = DAT_10032eb0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (*(int *)(iVar1 + 0x434) == param_1) {
      if (param_2 == 0xbed) {
        uVar4 = *(uint *)(iVar1 + 0x8c);
        local_4 = *(int *)(iVar1 + 0x460);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0x460);
        }
      }
      else {
        uVar4 = ~param_3;
      }
      switch(param_6) {
      case 0:
        bVar5 = (int)param_3 < (int)(uVar4 & param_5);
        break;
      case 1:
        bVar5 = (int)(uVar4 & param_5) < (int)param_3;
        break;
      case 2:
        bVar5 = (uVar4 & param_5) == param_3;
        break;
      case 3:
        bVar5 = (uVar4 & param_5) != param_3;
        break;
      default:
        bVar5 = false;
      }
      if (bVar5) {
        if ((param_4 == 0) && ((iVar2 == 0 || (iVar3 < local_4)))) {
          iVar2 = iVar1;
        }
        if ((param_4 == 1) && ((iVar2 == 0 || (local_4 < iVar3)))) {
          iVar2 = iVar1;
        }
      }
    }
  }
  return;
}


// ---- FUN_1001f300 @ 1001f300

LONG __thiscall FUN_1001f300(void *this,undefined4 param_1,HWND param_2,LONG param_3,int param_4)

{
  uint uVar1;
  HMODULE hLibModule;
  LONG LVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  for (iVar4 = DAT_10032eb0; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
    if (iVar5 != 0) {
      return iVar5;
    }
    switch(param_1) {
    case 0:
      if (*(HWND *)(iVar4 + 0x430) == param_2) {
        iVar5 = *(int *)(iVar4 + 0x574);
      }
      break;
    case 1:
      if (*(HWND *)(iVar4 + 0x43c) == param_2) {
        iVar5 = *(int *)(iVar4 + 0x580);
      }
      break;
    case 2:
      if (*(HWND *)(iVar4 + 0x434) == param_2) {
        iVar5 = *(int *)(iVar4 + 0x578);
      }
      break;
    case 3:
      if (*(HWND *)(iVar4 + 0x438) == param_2) {
        iVar5 = *(int *)(iVar4 + 0x57c);
      }
    }
  }
  if (iVar5 == 0) {
    if (param_4 != 0) {
      LVar2 = GetWindowLongA(param_2,-4);
      if (LVar2 != param_4) {
        FUN_1001fdd0((int)this);
        return LVar2;
      }
      LVar2 = SetWindowLongA(param_2,-4,param_3);
      return LVar2;
    }
    pvVar3 = (void *)FUN_1001fed0((int)param_2,0);
    if (pvVar3 == (void *)0x0) {
      iVar5 = SetWindowLongA(param_2,-4,param_3);
    }
    else {
      switch(param_1) {
      case 0:
        iVar5 = *(int *)((int)pvVar3 + 0x5c4);
        break;
      case 1:
        iVar5 = *(int *)((int)pvVar3 + 0x5d0);
        break;
      case 2:
        iVar5 = *(int *)((int)pvVar3 + 0x5c8);
        break;
      case 3:
        iVar5 = *(int *)((int)pvVar3 + 0x5cc);
      }
      FUN_1001fe50((int)pvVar3,(int)param_2);
      iVar4 = FUN_1001fed0(0,(int)pvVar3);
      if (((((iVar4 == 0) &&
            (*(int *)((int)pvVar3 + 0x53c) + *(int *)((int)pvVar3 + 0x540) +
             *(int *)((int)pvVar3 + 0x530) + *(int *)((int)pvVar3 + 0x534) +
             *(int *)((int)pvVar3 + 0x538) == 0)) &&
           (iVar4 = FUN_1001fed0(0,(int)pvVar3), iVar4 == 0)) &&
          ((*(int *)((int)pvVar3 + 0x524) != 0 &&
           (uVar1 = *(uint *)((int)pvVar3 + 0x520), (uVar1 & 1) != 0)))) && ((uVar1 & 2) != 0)) {
        *(uint *)((int)pvVar3 + 0x520) = uVar1 & 0xfffffffd;
        hLibModule = *(HMODULE *)((int)pvVar3 + 0x524);
        *(undefined4 *)((int)pvVar3 + 0x524) = 0;
        if ((*(uint *)((int)pvVar3 + 0x2b0) & 2) != 0) {
          pvVar3 = FUN_1001ff90(pvVar3);
        }
        if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x52c) == -0x270d)) &&
           (pvVar3 != (void *)0x0)) {
          FUN_10021580(pvVar3);
          operator_delete(pvVar3);
        }
        FreeLibrary(hLibModule);
        return iVar5;
      }
    }
  }
  return iVar5;
}


// ---- FUN_1001f520 @ 1001f520

void __thiscall FUN_1001f520(void *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  void *this_00;
  BOOL bErase;
  
  bVar2 = true;
  this_00 = DAT_10032eb0;
  if (*(int *)((int)this + 0x5a0) != -9999) {
    for (; this_00 != (void *)0x0; this_00 = *(void **)((int)this_00 + 0x10)) {
      if ((*(int *)((int)this_00 + 0x434) == param_1) &&
         ((*(uint *)((int)this_00 + 0x2b0) & 2) == 0)) {
        if (param_2 == 0) {
          if (bVar2) {
            FUN_100233b0(this_00,0xbfe,(IMAGE_DOS_HEADER *)0xffffd8f1,1,(uint *)0x0);
            *(undefined4 *)((int)this_00 + 0x4d4) = *(undefined4 *)((int)this_00 + 0x42c);
          }
          else {
            FUN_100233b0(this_00,0xbfe,(IMAGE_DOS_HEADER *)0xffffd8f3,1,(uint *)0x0);
            *(undefined4 *)((int)this_00 + 0x4d4) = 0;
          }
          if (*(int *)((int)this + 0x434) == 0) {
            iVar1 = *(int *)((int)this_00 + 0xe4);
            goto joined_r0x1001f62c;
          }
LAB_1001f62e:
          bErase = 1;
        }
        else {
          if (*(int *)((int)this_00 + 0x43c) == param_2) {
            FUN_100233b0(this_00,0xbfe,(IMAGE_DOS_HEADER *)0xffffd8f1,1,(uint *)0x0);
            *(undefined4 *)((int)this_00 + 0x4d4) = *(undefined4 *)((int)this_00 + 0x42c);
          }
          else {
            FUN_100233b0(this_00,0xbfe,(IMAGE_DOS_HEADER *)0xffffd8f3,1,(uint *)0x0);
            *(undefined4 *)((int)this_00 + 0x4d4) = 0;
          }
          if (*(int *)((int)this + 0x434) != 0) goto LAB_1001f62e;
          iVar1 = *(int *)((int)this_00 + 0xe4);
joined_r0x1001f62c:
          bErase = 0;
          if (iVar1 == -0x270d) goto LAB_1001f62e;
        }
        InvalidateRect(*(HWND *)((int)this_00 + 0x42c),(RECT *)0x0,bErase);
      }
      bVar2 = false;
    }
  }
  return;
}


// ---- FUN_1001f660 @ 1001f660

void FUN_1001f660(HWND param_1,uint param_2,int param_3)

{
  void *this;
  BOOL BVar1;
  int iVar2;
  
  for (this = DAT_10032eb0; this != (void *)0x0; this = *(void **)((int)this + 0x10)) {
    if (*(HWND *)((int)this + 0x434) == param_1) {
      if (((param_3 == 0) && (BVar1 = IsIconic(param_1), BVar1 != 0)) ||
         (BVar1 = IsIconic(*(HWND *)((int)this + 0x43c)), iVar2 = param_3, BVar1 != 0)) {
        iVar2 = 2;
      }
      FUN_10024fc0(this,*(HWND *)((int)this + 0x42c),param_2,iVar2);
    }
  }
  return;
}


// ---- FUN_1001f750 @ 1001f750

void FUN_1001f750(int param_1,HMENU param_2,uint param_3,uint param_4)

{
  void *this;
  
  for (this = DAT_10032eb0; this != (void *)0x0; this = *(void **)((int)this + 0x10)) {
    if (*(int *)((int)this + 0x434) == param_1) {
      FUN_100251a0(this,param_2,param_3,param_4);
    }
  }
  return;
}


// ---- FUN_1001f790 @ 1001f790

void FUN_1001f790(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  void *this;
  
  for (this = DAT_10032eb0; this != (void *)0x0; this = *(void **)((int)this + 0x10)) {
    if (*(int *)((int)this + 0x434) == param_1) {
      FUN_10025480(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    }
  }
  return;
}


// ---- FUN_1001f7f0 @ 1001f7f0

void FUN_1001f7f0(int param_1)

{
  void *pvVar1;
  
  for (pvVar1 = DAT_10032eb0; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x10)) {
    if (*(int *)((int)pvVar1 + 0x434) == param_1) {
      FUN_10026790(pvVar1);
    }
  }
  return;
}


// ---- FUN_1001f820 @ 1001f820

void FUN_1001f820(int param_1)

{
  void *pvVar1;
  
  for (pvVar1 = DAT_10032eb0; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x10)) {
    if (*(int *)((int)pvVar1 + 0x434) == param_1) {
      FUN_10027360(pvVar1);
    }
  }
  return;
}


// ---- FUN_1001f850 @ 1001f850

void FUN_1001f850(int param_1,ushort param_2,short param_3,short param_4)

{
  void *this;
  BOOL BVar1;
  short sVar2;
  
  for (this = DAT_10032eb0; this != (void *)0x0; this = *(void **)((int)this + 0x10)) {
    if (*(int *)((int)this + 0x434) == param_1) {
      sVar2 = param_4;
      if (*(int *)((int)this + 0xa8) == -0x270d) {
        BVar1 = IsZoomed(*(HWND *)((int)this + 0x43c));
        if (BVar1 != 0) {
          sVar2 = 0;
        }
      }
      else if (((*(uint *)((int)this + 200) & 0xfffffffe) == 0) &&
              ((*(uint *)((int)this + 0xcc) & 0xfffffffe) == 0)) {
        sVar2 = 0;
      }
      FUN_100273c0(this,param_2,param_3,sVar2);
    }
  }
  return;
}


// ---- FUN_1001f8e0 @ 1001f8e0

void __thiscall
FUN_1001f8e0(void *this,HWND param_1,HWND param_2,tagRECT *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  HWND hWnd;
  uint uVar4;
  HWND pHVar5;
  uint uVar6;
  tagRECT *ptVar7;
  uint uVar8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  bVar3 = false;
  if ((param_2 == (HWND)0x0) && (param_3 != (tagRECT *)0x0)) {
    local_20 = param_3->left;
    local_1c = param_3->top;
    local_18 = param_3->right;
    local_14 = param_3->bottom;
  }
  else {
    local_20 = *(int *)((int)this + 0x230);
    local_1c = *(int *)((int)this + 0x234);
    local_18 = *(int *)((int)this + 0x238);
    local_14 = *(int *)((int)this + 0x23c);
  }
  hWnd = GetWindow(param_1,5);
  uVar1 = 0;
  uVar2 = 0;
  while (hWnd != (HWND)0x0) {
    uVar4 = GetWindowLongA(hWnd,-0x14);
    pHVar5 = GetParent(hWnd);
    uVar6 = uVar2;
    uVar8 = uVar1;
    if ((pHVar5 == param_1) && ((uVar4 & 4) == 0)) {
      ptVar7 = param_3;
      if (hWnd != param_2) {
        GetWindowRect(hWnd,&local_10);
        ptVar7 = &local_10;
      }
      if ((ptVar7->left < local_20) ||
         (uVar8 = 0, (int)((-1 - *(int *)((int)this + 0x298)) * uVar2 + local_18) < ptVar7->right))
      {
        uVar8 = 1;
      }
      if ((ptVar7->top < local_1c) ||
         (uVar6 = 0, (int)((-1 - *(int *)((int)this + 0x294)) * uVar1 + local_14) < ptVar7->bottom))
      {
        uVar6 = 1;
      }
      uVar8 = uVar1 | uVar8;
      uVar6 = uVar2 | uVar6;
      if ((uVar1 != uVar8) || (uVar2 != uVar6)) {
        bVar3 = true;
      }
    }
    uVar1 = uVar8;
    uVar2 = uVar6;
    if (bVar3) {
      hWnd = GetWindow(param_1,5);
      bVar3 = false;
    }
    else {
      hWnd = GetWindow(hWnd,2);
    }
  }
  if (((*(uint *)((int)this + 0xd0) & 2) == 0) && ((uVar1 != 0 || (uVar2 != 0)))) {
    *(uint *)((int)this + 0xd0) = *(uint *)((int)this + 0xd0) | 4;
  }
  if (*(int *)((int)this + 0x90) == -9999) {
    *param_4 = 0;
    *param_5 = 0;
    if ((uVar1 == 0) && (uVar2 != 0)) {
      return;
    }
  }
  else {
    *param_4 = uVar1;
    *param_5 = uVar2;
  }
  return;
}


// ---- FUN_1001fac0 @ 1001fac0

void FUN_1001fac0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  tagRECT local_24;
  int local_14;
  RECT local_10;
  
  local_14 = 1;
  local_10.bottom = 0;
  local_10.right = 0;
  local_10.top = 0;
  local_10.left = 0;
  for (iVar1 = DAT_10032eb0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (*(int *)(iVar1 + 0x434) == param_1) {
      if (param_3 == 0) {
        local_24.left = *(int *)(iVar1 + 0x2f4);
        local_24.top = *(int *)(iVar1 + 0x2f8);
        local_24.right = *(int *)(iVar1 + 0x2fc) + local_24.left;
        local_24.bottom = *(int *)(iVar1 + 0x300) + local_24.top;
      }
      else if (param_3 == 1) {
        local_24.left = *(int *)(iVar1 + 0x1d4);
        local_24.top = *(int *)(iVar1 + 0x1d8);
        local_24.right = *(int *)(iVar1 + 0x1dc) + local_24.left;
        local_24.bottom = *(int *)(iVar1 + 0x1e0) + local_24.top;
      }
      else if (param_3 == 2) {
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = *(int *)(iVar1 + 0x20c);
        local_24.bottom = *(int *)(iVar1 + 0x210);
      }
      if (param_4 != 0) {
        OffsetRect(&local_24,-local_24.left,-local_24.top);
      }
      if (local_14 == 0) {
        UnionRect(&local_10,&local_10,&local_24);
      }
      else {
        local_14 = 0;
        local_10.left = local_24.left;
        local_10.top = local_24.top;
        local_10.right = local_24.right;
        local_10.bottom = local_24.bottom;
      }
    }
  }
  *param_2 = local_10.left;
  param_2[1] = local_10.top;
  param_2[2] = local_10.right;
  param_2[3] = local_10.bottom;
  return;
}


// ---- FUN_1001fc30 @ 1001fc30

void FUN_1001fc30(int param_1,short param_2)

{
  void *this;
  
  for (this = DAT_10032eb0; this != (void *)0x0; this = *(void **)((int)this + 0x10)) {
    if (*(int *)((int)this + 0x438) == param_1) {
      if (param_2 == 8) {
        if (*(int *)((int)this + 0x51c) == 1) {
          FUN_10024fc0(this,*(HWND *)((int)this + 0x42c),0x10000002,0);
        }
        *(undefined4 *)((int)this + 0x51c) = 0;
      }
      else {
        if (*(int *)((int)this + 0x51c) == 1) {
          FUN_10024fc0(this,*(HWND *)((int)this + 0x42c),0x10000002,0);
        }
        FUN_10024fc0(this,*(HWND *)((int)this + 0x42c),0x20000002,0);
        *(undefined4 *)((int)this + 0x51c) = 1;
      }
    }
  }
  return;
}


// ---- FUN_1001fcd0 @ 1001fcd0

void FUN_1001fcd0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  for (iVar1 = DAT_10032eb0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if ((*(int *)(iVar1 + 0x434) == param_1) && (param_2 < 0xbef)) {
      if (param_2 == 0xbee) {
        uVar2 = *(uint *)(iVar1 + 0x90) & param_4;
        *(uint *)(iVar1 + 0x90) = uVar2;
        *(uint *)(iVar1 + 0x90) = param_3 | uVar2;
      }
      else {
        switch(param_2) {
        case 100:
          uVar2 = *(uint *)(iVar1 + 0x518) & param_4;
          *(uint *)(iVar1 + 0x518) = uVar2;
          *(uint *)(iVar1 + 0x518) = param_3 | uVar2;
          break;
        case 0x65:
          uVar2 = *(uint *)(iVar1 + 0x29c) & param_4;
          *(uint *)(iVar1 + 0x29c) = uVar2;
          *(uint *)(iVar1 + 0x29c) = param_3 | uVar2;
          break;
        case 0x66:
          uVar2 = *(uint *)(iVar1 + 0x568) & param_4;
          *(uint *)(iVar1 + 0x568) = uVar2;
          *(uint *)(iVar1 + 0x568) = param_3 | uVar2;
          break;
        case 0x67:
          uVar2 = *(uint *)(iVar1 + 0xd0) & param_4;
          *(uint *)(iVar1 + 0xd0) = uVar2;
          *(uint *)(iVar1 + 0xd0) = param_3 | uVar2;
        }
      }
    }
  }
  return;
}


// ---- FUN_1001fdd0 @ 1001fdd0

int __cdecl FUN_1001fdd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_1001fed0(0,param_1);
  if ((iVar2 == 0) && (piVar3 = operator_new(8), piVar3 != (int *)0x0)) {
    *piVar3 = param_1;
    piVar3[1] = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10033688);
    piVar1 = piVar3;
    if (DAT_10032ed4 != (int *)0x0) {
      iVar2 = DAT_10032ed4[1];
      piVar1 = DAT_10032ed4;
      while (iVar2 != 0) {
        piVar1 = (int *)piVar1[1];
        iVar2 = piVar1[1];
      }
      piVar1[1] = (int)piVar3;
      piVar1 = DAT_10032ed4;
    }
    DAT_10032ed4 = piVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10033688);
    iVar2 = *piVar3;
  }
  return iVar2;
}


// ---- FUN_1001fe50 @ 1001fe50

void * __cdecl FUN_1001fe50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *this;
  
  this = (void *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10033688);
  piVar1 = (int *)0x0;
  for (piVar2 = DAT_10032ed4; (piVar2 != (int *)0x0 && (*piVar2 != param_1));
      piVar2 = (int *)piVar2[1]) {
    piVar1 = piVar2;
  }
  if (piVar2 != (int *)0x0) {
    this = (void *)*piVar2;
    iVar3 = FUN_1002c850(this,param_2);
    if (iVar3 != 0) {
      if (DAT_10032ed4 == piVar2) {
        DAT_10032ed4 = (int *)piVar2[1];
      }
      if (piVar1 != (int *)0x0) {
        piVar1[1] = piVar2[1];
      }
      operator_delete(piVar2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10033688);
  return this;
}


// ---- FUN_1001fed0 @ 1001fed0

int __cdecl FUN_1001fed0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  for (piVar1 = DAT_10032ed4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (piVar3 != (int *)0x0) goto LAB_1001ff15;
    if (param_2 == 0) {
      if ((param_1 != 0) && (iVar2 = FUN_1002c910((void *)*piVar1,param_1), iVar2 != 0))
      goto LAB_1001ff08;
    }
    else if (*piVar1 == param_2) {
LAB_1001ff08:
      piVar3 = piVar1;
    }
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
LAB_1001ff15:
  return *piVar3;
}


// ---- FUN_1001ff50 @ 1001ff50

DWORD * __cdecl FUN_1001ff50(long param_1,DWORD param_2,DWORD param_3,uint param_4,char *param_5)

{
  void *this;
  DWORD *pDVar1;
  
  this = operator_new(0x64c);
  if (this != (void *)0x0) {
    pDVar1 = FUN_100203a0(this,param_1,param_2,param_3,param_4,param_5);
    return pDVar1;
  }
  return (DWORD *)0x0;
}


// ---- FUN_1001ff90 @ 1001ff90

void * __cdecl FUN_1001ff90(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x53c) + *(int *)((int)param_1 + 0x540) +
        *(int *)((int)param_1 + 0x530) + *(int *)((int)param_1 + 0x534) +
        *(int *)((int)param_1 + 0x538) == 0) {
      iVar1 = FUN_1001fed0(0,(int)param_1);
      if (iVar1 == 0) {
        if (param_1 != (void *)0x0) {
          FUN_10021580(param_1);
          operator_delete(param_1);
        }
        return (void *)0x0;
      }
    }
    *(undefined4 *)((int)param_1 + 0x52c) = 0xffffd8f3;
  }
  return param_1;
}


// ---- FUN_10020000 @ 10020000

HBITMAP __cdecl
FUN_10020000(int param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,void **param_6,
            uint *param_7,UINT param_8)

{
  void *pvVar1;
  BITMAPINFO *lpbmi;
  int iVar2;
  HDC hDC;
  uint uVar3;
  DWORD DVar4;
  uint uVar5;
  HBITMAP local_8;
  DWORD local_4;
  
  pvVar1 = *param_6;
  local_4 = 0;
  *param_7 = 0;
  local_8 = (HBITMAP)0x0;
  *param_5 = 0;
  *param_6 = pvVar1;
  switch(param_4) {
  case 1:
    DVar4 = 1 << ((byte)param_4 & 0x1f);
    uVar5 = (int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    break;
  default:
    return (HBITMAP)0x0;
  case 8:
    DVar4 = 1 << ((byte)param_4 & 0x1f);
    uVar5 = param_2;
    break;
  case 0xf:
    DVar4 = 3;
    uVar5 = param_2 * 2;
    break;
  case 0x10:
    DVar4 = 3;
    uVar5 = param_2 * 2;
    break;
  case 0x18:
    uVar5 = param_2 * 3;
    goto LAB_100200c6;
  case 0x20:
    uVar5 = param_2 * 4;
LAB_100200c6:
    DVar4 = 0;
  }
  lpbmi = operator_new(DVar4 * ((-(uint)(param_8 == 0) & 2) + 2) + 0x28);
  uVar3 = (int)uVar5 >> 0x1f;
  iVar2 = ((uVar5 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3;
  if (iVar2 != 0) {
    uVar5 = (uVar5 - iVar2) + 4;
  }
  if (param_4 == 0x10) {
    hDC = GetDC((HWND)0x0);
    local_4 = 3;
    ReleaseDC((HWND)0x0,hDC);
  }
  if (lpbmi != (BITMAPINFO *)0x0) {
    (lpbmi->bmiHeader).biSize = 0x28;
    (lpbmi->bmiHeader).biWidth = param_2;
    (lpbmi->bmiHeader).biHeight = param_3;
    (lpbmi->bmiHeader).biPlanes = 1;
    (lpbmi->bmiHeader).biBitCount = (WORD)param_4;
    (lpbmi->bmiHeader).biCompression = local_4;
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    (lpbmi->bmiHeader).biSizeImage = uVar5 * param_3;
    (lpbmi->bmiHeader).biXPelsPerMeter = 0x2e1b;
    (lpbmi->bmiHeader).biYPelsPerMeter = 0x2e1b;
    (lpbmi->bmiHeader).biClrUsed = DVar4;
    (lpbmi->bmiHeader).biClrImportant = DVar4;
    if ((lpbmi->bmiHeader).biBitCount == 0xf) {
      (lpbmi->bmiHeader).biBitCount = 0x10;
    }
    FUN_10020240((int)lpbmi,param_4,param_8,DVar4);
    if ((param_1 != 0) &&
       (local_8 = CreateDIBSection((HDC)0x0,lpbmi,param_8,param_6,(HANDLE)0x0,0),
       local_8 == (HBITMAP)0x0)) {
      operator_delete(lpbmi);
      lpbmi = (BITMAPINFO *)0x0;
    }
    *param_5 = lpbmi;
    *param_7 = uVar5;
  }
  return local_8;
}


// ---- FUN_10020210 @ 10020210

void __cdecl FUN_10020210(int param_1,HGDIOBJ param_2)

{
  void *in_stack_00000018;
  
  if ((param_2 != (HGDIOBJ)0x0) && (param_1 != 0)) {
    DeleteObject(param_2);
  }
  operator_delete(in_stack_00000018);
  return;
}


// ---- FUN_10020240 @ 10020240

void __cdecl FUN_10020240(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  if (param_4 != 0) {
    if (param_4 == 3) {
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0x28) = 0x7c00;
        *(undefined4 *)(param_1 + 0x2c) = 0x3e0;
        *(undefined4 *)(param_1 + 0x30) = 0x1f;
        return;
      }
      if (param_2 == 0x10) {
        *(undefined4 *)(param_1 + 0x28) = 0xf800;
        *(undefined4 *)(param_1 + 0x2c) = 0x7e0;
        *(undefined4 *)(param_1 + 0x30) = 0x1f;
        return;
      }
      return;
    }
    if (param_3 == 0) {
      if (param_2 < 9) {
        uVar4 = 0;
        while (0 < param_4) {
          param_4 = param_4 + -1;
          uVar2 = (undefined1)uVar4;
          *(undefined1 *)(param_1 + 0x2a + uVar4 * 4) = uVar2;
          *(undefined1 *)(param_1 + 0x29 + uVar4 * 4) = uVar2;
          *(undefined1 *)(param_1 + 0x28 + uVar4 * 4) = uVar2;
          iVar1 = uVar4 * 4;
          uVar6 = (short)uVar4 + 1;
          uVar4 = (uint)uVar6;
          *(undefined1 *)(param_1 + iVar1 + 0x2b) = 0;
          if (0xff < uVar6) {
            return;
          }
        }
      }
      else {
        uVar4 = 0;
        while (0 < param_4) {
          uVar5 = 0;
          do {
            if (param_4 < 1) break;
            uVar7 = 0;
            do {
              if (param_4 < 1) break;
              param_4 = param_4 + -1;
              uVar6 = (short)uVar7 + 1;
              uVar3 = uVar7 + (uVar5 + uVar4 * 8) * 8 & 0xffff;
              *(undefined *)(param_1 + 0x2a + uVar3 * 4) = (&DAT_10032eb8)[uVar7];
              iVar1 = param_1 + uVar3 * 4;
              *(undefined *)(iVar1 + 0x29) = (&DAT_10032ec0)[uVar5];
              *(undefined *)(iVar1 + 0x28) = (&DAT_10032ec8)[uVar4];
              *(undefined1 *)(iVar1 + 0x2b) = 0;
              uVar7 = (uint)uVar6;
            } while (uVar6 < 8);
            uVar6 = (short)uVar5 + 1;
            uVar5 = (uint)uVar6;
          } while (uVar6 < 8);
          uVar6 = (short)uVar4 + 1;
          uVar4 = (uint)uVar6;
          if (3 < uVar6) {
            return;
          }
        }
      }
    }
    else {
      uVar4 = 0;
      do {
        if (param_4 < 1) {
          return;
        }
        param_4 = param_4 + -1;
        *(short *)(param_1 + 0x28 + uVar4 * 2) = (short)uVar4;
        uVar6 = (short)uVar4 + 1;
        uVar4 = (uint)uVar6;
      } while (uVar6 < 0x100);
    }
  }
  return;
}


// ---- FUN_100203a0 @ 100203a0

DWORD * __thiscall
FUN_100203a0(void *this,long param_1,DWORD param_2,DWORD param_3,uint param_4,char *param_5)

{
  LPCSTR lpString;
  char cVar1;
  HINSTANCE hInstance;
  ATOM AVar2;
  HDC hdc;
  int iVar3;
  UINT UVar4;
  LONG LVar5;
  void *pvVar6;
  char *pcVar7;
  HMODULE pHVar8;
  FARPROC pFVar9;
  undefined4 uVar10;
  IMAGE_DOS_HEADER *pIVar11;
  HANDLE pvVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  char *pcVar17;
  CHAR *pCVar18;
  undefined4 *puVar19;
  LPCSTR pCVar20;
  LPCSTR pCVar21;
  WNDCLASSA WStack_28;
  
  *(undefined4 *)((int)this + 0x464) = 0;
  hdc = GetDC((HWND)0x0);
  iVar3 = GetDeviceCaps(hdc,0x26);
  *(int *)((int)this + 0x284) = iVar3;
  iVar3 = GetDeviceCaps(hdc,0xc);
  *(int *)((int)this + 0x288) = iVar3;
  if ((*(uint *)((int)this + 0x284) & 0x100) == 0) {
    iVar3 = 0;
    *(undefined4 *)((int)this + 0x28c) = 0;
  }
  else {
    iVar3 = GetDeviceCaps(hdc,0x68);
    *(int *)((int)this + 0x28c) = iVar3;
    iVar3 = GetDeviceCaps(hdc,0x6c);
  }
  *(int *)((int)this + 0x290) = iVar3;
  ReleaseDC((HWND)0x0,hdc);
  UVar4 = GetProfileIntA(s_milvga_dll_10032ee8,s_DebugFunction_10032ed8,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 1;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032f00,s_DebugThread_10032ef4,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 2;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032f18,s_DebugHook_10032f0c,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 4;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032f3c,s_DebugHookUserMsgLoop_10032f24,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x200;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032f5c,s_DebugHookUserClip_10032f48,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x400;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032f78,s_DebugHookUser_10032f68,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x100;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032f94,s_DebugMessage_10032f84,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 8;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032fb0,s_DebugMessageSWP_10032fa0,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x10;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032fcc,s_DebugFunction_10032fbc,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 1;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032fe4,s_DebugSnap_10032fd8,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x20;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10032ffc,s_DebugPaint_10032ff0,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x40;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_1003301c,s_DebugSubclassWnd_10033008,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x80;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10033040,s_DebugSystemHookTracking_10033028,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x800;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10033060,s_DebugMtxBreakActive_1003304c,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x1000;
  }
  UVar4 = GetProfileIntA(s_milvga_dll_10033084,s_DebugSetDIBitsFixPassed_1003306c,0);
  if (UVar4 != 0) {
    *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 0x2000;
  }
  LVar5 = InterlockedIncrement(&DAT_10032ecc);
  if (LVar5 == 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_100336a0);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10033688);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
  *(undefined4 *)((int)this + 100) = 0xffffd8f3;
  *(undefined4 *)((int)this + 0x68) = 0xffffd8f3;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0xffffd8f1;
  pvVar6 = operator_new(0x1c);
  *(void **)((int)this + 0x424) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    *(undefined4 *)((int)this + 0x70) = 0;
    return this;
  }
  *(undefined4 *)((int)this + 0x474) = 0x660;
  *(undefined4 *)((int)this + 0x47c) = 0x660;
  *(undefined4 *)((int)this + 0x484) = 0x660;
  pvVar6 = operator_new(0x660);
  *(void **)((int)this + 0x470) = pvVar6;
  pvVar6 = operator_new(*(uint *)((int)this + 0x474));
  *(void **)((int)this + 0x478) = pvVar6;
  pvVar6 = operator_new(*(uint *)((int)this + 0x474));
  *(void **)((int)this + 0x480) = pvVar6;
  if (*(undefined4 **)((int)this + 0x470) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x474) = 0;
  }
  else {
    **(undefined4 **)((int)this + 0x470) = 0x20;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 4) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 0xc) = 0x20;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x470) + 0x1c) = 0;
  }
  if (*(undefined4 **)((int)this + 0x478) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x47c) = 0;
  }
  else {
    uVar14 = *(uint *)((int)this + 0x474);
    puVar16 = *(undefined4 **)((int)this + 0x470);
    puVar19 = *(undefined4 **)((int)this + 0x478);
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar19 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar19 = puVar19 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
      puVar16 = (undefined4 *)((int)puVar16 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
  }
  if (*(undefined4 **)((int)this + 0x480) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x484) = 0;
  }
  else {
    uVar14 = *(uint *)((int)this + 0x474);
    puVar16 = *(undefined4 **)((int)this + 0x470);
    puVar19 = *(undefined4 **)((int)this + 0x480);
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar19 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar19 = puVar19 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
      puVar16 = (undefined4 *)((int)puVar16 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
  }
  pvVar6 = operator_new(0x70);
  *(void **)((int)this + 0x4d8) = pvVar6;
  pvVar6 = operator_new(0xa0);
  *(void **)((int)this + 0x4dc) = pvVar6;
  pvVar6 = operator_new(0x28);
  *(void **)((int)this + 0x4e0) = pvVar6;
  if (((*(undefined4 **)((int)this + 0x4d8) != (undefined4 *)0x0) &&
      (*(int *)((int)this + 0x4dc) != 0)) && (*(int *)((int)this + 0x4e0) != 0)) {
    **(undefined4 **)((int)this + 0x4d8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 4) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0xc) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x24) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x28) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x2c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x1c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x30) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x34) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x3c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x38) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x40) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x44) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x48) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x4c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x50) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x54) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x58) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x5c) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x60) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 100) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x68) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x6c) = 0;
    **(undefined4 **)((int)this + 0x4dc) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 4) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0xc) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x1c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x24) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x28) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x2c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x30) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x34) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x38) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x40) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x3c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x44) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x48) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x4c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x50) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x54) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x58) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x5c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x60) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 100) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x68) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x6c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x70) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x88) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x8c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x90) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x94) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x98) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x9c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x78) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x7c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x80) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x84) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x74) = 0;
    **(undefined4 **)((int)this + 0x4e0) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 4) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0xc) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x1c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x48) = 0;
    *(undefined4 *)((int)this + 0x414) = 0;
    *(undefined4 *)((int)this + 0x418) = 0;
    *(undefined4 *)((int)this + 0x41c) = 0;
    *(undefined4 *)((int)this + 0x420) = 0;
    *(undefined4 *)((int)this + 0x428) = 0;
    *(undefined4 *)((int)this + 0x42c) = 0;
    *(undefined4 *)((int)this + 0x430) = 0;
    *(undefined4 *)((int)this + 0x434) = 0;
    *(undefined4 *)((int)this + 0x438) = 0;
    *(undefined4 *)((int)this + 0x43c) = 0;
    *(undefined4 *)((int)this + 0x410) = 0;
    *(undefined4 *)((int)this + 0x304) = 0;
    *(undefined4 *)((int)this + 0x408) = 0;
    *(undefined4 *)((int)this + 0x574) = 0;
    *(undefined4 *)((int)this + 0x578) = 0;
    *(undefined4 *)((int)this + 0x57c) = 0;
    *(undefined4 *)((int)this + 0x580) = 0;
    *(undefined4 *)((int)this + 0x458) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x45c) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x460) = 0;
    hInstance = DAT_10033230;
    *(undefined4 *)((int)this + 0x5c4) = 0;
    *(undefined4 *)((int)this + 0x5c8) = 0;
    *(undefined4 *)((int)this + 0x5cc) = 0;
    *(undefined4 *)((int)this + 0x5d0) = 0;
    *(undefined4 *)((int)this + 0x5d4) = 0;
    *(undefined4 *)((int)this + 0x5d8) = 0;
    *(undefined4 *)((int)this + 0x5dc) = 0;
    *(undefined4 *)((int)this + 0x5e0) = 0;
    *(DWORD *)((int)this + 0x74) = param_2;
    *(DWORD *)((int)this + 0x78) = param_3;
    *(undefined4 *)((int)this + 0x80) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x84) = 0xffffd8f3;
    *(uint *)((int)this + 0x7c) = param_4;
    *(undefined4 *)((int)this + 0x88) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x8c) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x90) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x94) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x98) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x9c) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xa0) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xa4) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xa8) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xac) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xb0) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xb4) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xb8) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xbc) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xc0) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xc4) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0x488) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x48c) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x490) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xf4) = 0;
    *(undefined4 *)((int)this + 0xf8) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xfc) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x100) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x108) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x10c) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x110) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x114) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x118) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x11c) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x120) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x124) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x128) = 0xffffd8f3;
    *(undefined4 *)((int)this + 300) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x494) = 1;
    *(undefined4 *)((int)this + 0x498) = 1;
    *(undefined4 *)((int)this + 0x49c) = 0;
    *(undefined4 *)((int)this + 0x16c) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x174) = 0;
    *(undefined4 *)((int)this + 0x178) = 0;
    *(undefined4 *)((int)this + 200) = 1;
    *(undefined4 *)((int)this + 0xcc) = 1;
    *(undefined4 *)((int)this + 0x468) = 0;
    *(undefined4 *)((int)this + 0x46c) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xd8) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xdc) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xe0) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xe4) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0xe8) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined4 *)((int)this + 0x594) = 0;
    *(undefined4 *)((int)this + 0x588) = 0;
    *(undefined4 *)((int)this + 0x59c) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x5a0) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x58c) = 0xc;
    *(undefined4 *)((int)this + 0x590) = 0xb;
    *(undefined4 *)((int)this + 0x584) = 2;
    *(undefined4 *)((int)this + 0x598) = 0;
    if ((param_4 & 0x200) != 0) {
      *(undefined4 *)((int)this + 0x58c) = 0xd;
    }
    if ((param_4 & 0x100000) != 0) {
      *(undefined4 *)((int)this + 0x598) = 4;
    }
    if ((param_4 & 0x40) != 0) {
      *(undefined4 *)((int)this + 0x80) = 0xffffd8f1;
    }
    if ((param_4 & 0x100) == 0) {
      *(undefined4 *)((int)this + 0x40c) = 0;
    }
    else {
      uVar14 = 0xffffffff;
      pcVar7 = param_5;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar7 = operator_new(~uVar14);
      *(char **)((int)this + 0x40c) = pcVar7;
      if (pcVar7 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = param_5;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = param_5 + 1;
          cVar1 = *param_5;
          param_5 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar17 + -uVar14;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar7 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    *(undefined4 *)((int)this + 0x5a8) = 0;
    *(undefined4 *)((int)this + 0x5a4) = 0;
    *(undefined4 *)((int)this + 0x5ac) = 0;
    *(undefined4 *)((int)this + 0x5b0) = 0;
    *(undefined4 *)((int)this + 0x5b4) = 0;
    *(undefined4 *)((int)this + 0x5b8) = 0;
    *(undefined4 *)((int)this + 0x5bc) = 0;
    UVar4 = SetErrorMode(0x8000);
    pHVar8 = LoadLibraryA(s_MSVFW32_DLL_10033090);
    *(HMODULE *)((int)this + 0x5a4) = pHVar8;
    SetErrorMode(UVar4);
    if ((HMODULE)0x20 < *(HMODULE *)((int)this + 0x5a4)) {
      pFVar9 = GetProcAddress(*(HMODULE *)((int)this + 0x5a4),s_DrawDibOpen_1003309c);
      *(FARPROC *)((int)this + 0x5ac) = pFVar9;
      pFVar9 = GetProcAddress(*(HMODULE *)((int)this + 0x5a4),s_DrawDibClose_100330a8);
      *(FARPROC *)((int)this + 0x5b0) = pFVar9;
      pFVar9 = GetProcAddress(*(HMODULE *)((int)this + 0x5a4),s_DrawDibSetPalette_100330b8);
      *(FARPROC *)((int)this + 0x5b4) = pFVar9;
      pFVar9 = GetProcAddress(*(HMODULE *)((int)this + 0x5a4),s_DrawDibRealize_100330cc);
      *(FARPROC *)((int)this + 0x5b8) = pFVar9;
      pFVar9 = GetProcAddress(*(HMODULE *)((int)this + 0x5a4),s_DrawDibDraw_100330dc);
      *(FARPROC *)((int)this + 0x5bc) = pFVar9;
      if (*(code **)((int)this + 0x5ac) != (code *)0x0) {
        uVar10 = (**(code **)((int)this + 0x5ac))();
        *(undefined4 *)((int)this + 0x5a8) = uVar10;
      }
    }
    pIVar11 = (IMAGE_DOS_HEADER *)(*(uint *)((int)this + 0x7c) & 0x23c00);
    *(IMAGE_DOS_HEADER **)((int)this + 0x49c) = pIVar11;
    FUN_100233b0(this,0xbd0,pIVar11,1,(uint *)0x0);
    *(undefined4 *)((int)this + 0x130) = 0;
    *(undefined4 *)((int)this + 0x134) = 0;
    *(undefined4 *)((int)this + 0x138) = 0;
    *(undefined4 *)((int)this + 0x13c) = 0;
    *(undefined4 *)((int)this + 0x140) = 0;
    *(undefined4 *)((int)this + 0x144) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x14c) = 0;
    *(undefined4 *)((int)this + 0x154) = 0;
    *(undefined4 *)((int)this + 0x158) = 0;
    *(undefined4 *)((int)this + 0x15c) = 0;
    *(undefined4 *)((int)this + 0x160) = 0;
    *(undefined4 *)((int)this + 0x164) = 0;
    *(undefined4 *)((int)this + 0x168) = 0;
    *(undefined4 *)((int)this + 0x150) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1d8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x204) = 0xffffffff;
    *(undefined4 *)((int)this + 0x208) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1e4) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1e8) = 0xffffffff;
    *(undefined4 *)((int)this + 500) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1f8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x198) = 0xffffffff;
    *(undefined4 *)((int)this + 0x19c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1a4) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1a8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1ac) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1b0) = 0xffffffff;
    *(undefined4 *)((int)this + 0x17c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x180) = 0xffffffff;
    *(undefined4 *)((int)this + 0x184) = 0xffffffff;
    *(undefined4 *)((int)this + 0x188) = 0xffffffff;
    *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
    *(undefined4 *)((int)this + 400) = 0xffffffff;
    *(undefined4 *)((int)this + 0x194) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1dc) = 0;
    *(undefined4 *)((int)this + 0x1e0) = 0;
    *(undefined4 *)((int)this + 0x1ec) = 0;
    *(undefined4 *)((int)this + 0x1f0) = 0;
    *(undefined4 *)((int)this + 0x1fc) = 0;
    *(undefined4 *)((int)this + 0x200) = 0;
    *(undefined4 *)((int)this + 0x20c) = 0;
    *(undefined4 *)((int)this + 0x210) = 0;
    *(undefined4 *)((int)this + 0x214) = 0;
    *(undefined4 *)((int)this + 0x218) = 0;
    *(undefined4 *)((int)this + 0x21c) = 0;
    *(undefined4 *)((int)this + 0x220) = 0;
    iVar3 = GetSystemMetrics(0x20);
    *(int *)((int)this + 0x224) = iVar3 * 2;
    iVar3 = GetSystemMetrics(0x21);
    *(undefined4 *)((int)this + 0x1b4) = 0;
    *(int *)((int)this + 0x228) = iVar3 * 2;
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(undefined4 *)((int)this + 0x1c0) = 0;
    *(undefined4 *)((int)this + 0x1c4) = 0;
    *(undefined4 *)((int)this + 0x1cc) = 0;
    *(undefined4 *)((int)this + 0x1c8) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    FUN_10024f30(this);
    iVar3 = GetSystemMetrics(3);
    *(int *)((int)this + 0x294) = iVar3;
    iVar3 = GetSystemMetrics(2);
    *(int *)((int)this + 0x298) = iVar3;
    if ((*(int *)((int)this + 0xc) == 1) ||
       ((*(int *)((int)this + 0xc) == 4 &&
        ((uint)(*(int *)this * 100 + *(int *)((int)this + 4)) < 400)))) {
      *(int *)((int)this + 0x294) = *(int *)((int)this + 0x294) + -1;
      *(int *)((int)this + 0x298) = *(int *)((int)this + 0x298) + -1;
    }
    iVar3 = GetSystemMetrics(0x1c);
    *(int *)((int)this + 0x274) = iVar3;
    iVar3 = GetSystemMetrics(0x1d);
    *(int *)((int)this + 0x278) = iVar3;
    iVar3 = GetSystemMetrics(0);
    *(int *)((int)this + 0x27c) = iVar3;
    iVar3 = GetSystemMetrics(1);
    *(int *)((int)this + 0x280) = iVar3;
    *(undefined4 *)((int)this + 0x22c) = 0;
    *(undefined4 *)((int)this + 0x230) = 0;
    *(undefined4 *)((int)this + 0x234) = 0;
    *(undefined4 *)((int)this + 0x238) = 0;
    *(undefined4 *)((int)this + 0x23c) = 0;
    *(undefined4 *)((int)this + 0x240) = 0;
    *(undefined4 *)((int)this + 0x244) = 0;
    *(undefined4 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(undefined4 *)((int)this + 0x250) = 0;
    *(undefined4 *)((int)this + 0x254) = 0;
    *(undefined4 *)((int)this + 600) = 0;
    *(undefined4 *)((int)this + 0x25c) = 0;
    *(undefined4 *)((int)this + 0x260) = 0;
    *(undefined4 *)((int)this + 0x264) = 0;
    *(undefined4 *)((int)this + 0x268) = 0;
    *(undefined4 *)((int)this + 0x26c) = 0;
    *(undefined4 *)((int)this + 0x270) = 0;
    *(undefined4 *)((int)this + 0x4e4) = 0;
    *(undefined4 *)((int)this + 0x4e8) = 0;
    *(undefined4 *)((int)this + 0x4ec) = 0;
    *(undefined4 *)((int)this + 0x4f0) = 0;
    *(undefined4 *)((int)this + 0x4f4) = 0;
    *(undefined4 *)((int)this + 0x4f8) = 0;
    *(undefined4 *)((int)this + 0x4fc) = 0;
    *(undefined4 *)((int)this + 0x500) = 0;
    *(undefined4 *)((int)this + 0x504) = 0;
    *(undefined4 *)((int)this + 0x508) = 0;
    *(undefined4 *)((int)this + 0x50c) = 0;
    *(undefined4 *)((int)this + 0x510) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x514) = 0;
    *(undefined4 *)((int)this + 0x518) = 0;
    *(undefined4 *)((int)this + 0x51c) = 0;
    *(undefined4 *)((int)this + 0x634) = 1;
    *(undefined4 *)((int)this + 0x638) = 0;
    *(undefined4 *)((int)this + 0x63c) = 0;
    *(undefined4 *)((int)this + 0x640) = 0;
    *(undefined4 *)((int)this + 0x644) = 0xffffd8f1;
    pvVar12 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,s_WaitForDisplayVSyncNTEvent_100330e8);
    *(HANDLE *)((int)this + 0x648) = pvVar12;
    *(undefined4 *)((int)this + 0x520) = 1;
    *(undefined4 *)((int)this + 0x524) = 0;
    *(undefined4 *)((int)this + 0x528) = 0;
    *(undefined4 *)((int)this + 0x530) = 0;
    *(undefined4 *)((int)this + 0x534) = 0;
    *(undefined4 *)((int)this + 0x538) = 0;
    *(undefined4 *)((int)this + 0x53c) = 0;
    *(undefined4 *)((int)this + 0x540) = 0;
    *(undefined4 *)((int)this + 0x29c) = 0;
    *(undefined4 *)((int)this + 0x2a0) = 0;
    *(undefined4 *)((int)this + 0x2a4) = 0;
    *(undefined4 *)((int)this + 0x2a8) = 0;
    *(undefined4 *)((int)this + 0x2ac) = 0;
    *(undefined4 *)((int)this + 0x2b0) = 0;
    *(undefined4 *)((int)this + 0x2b4) = 1;
    *(undefined4 *)((int)this + 0x2b8) = 1;
    *(undefined4 *)((int)this + 0x2c4) = 1;
    *(undefined4 *)((int)this + 0x2c8) = 1;
    *(undefined4 *)((int)this + 0x2cc) = 1;
    *(undefined4 *)((int)this + 0x2d0) = 1;
    *(undefined4 *)((int)this + 700) = 1;
    *(undefined4 *)((int)this + 0x2c0) = 1;
    *(undefined4 *)((int)this + 0x2d4) = 1;
    *(undefined4 *)((int)this + 0x2d8) = 1;
    *(undefined4 *)((int)this + 0x2dc) = 1;
    *(undefined4 *)((int)this + 0x2e0) = 1;
    *(undefined4 *)((int)this + 0x2e4) = 1;
    *(undefined4 *)((int)this + 0x2e8) = 1;
    *(undefined4 *)((int)this + 0x2ec) = 1;
    *(undefined4 *)((int)this + 0x2f0) = 1;
    *(undefined4 *)((int)this + 0x2f4) = 0;
    *(undefined4 *)((int)this + 0x2f8) = 0;
    *(undefined4 *)((int)this + 0x2fc) = 0;
    *(undefined4 *)((int)this + 0x300) = 0;
    *(undefined4 *)((int)this + 0x448) = 0;
    *(undefined4 *)((int)this + 0x44c) = 0;
    *(undefined4 *)((int)this + 0x440) = 0;
    *(undefined4 *)((int)this + 0x444) = 0;
    *(undefined4 *)((int)this + 0x450) = 0;
    *(undefined4 *)((int)this + 0x454) = 0;
    *(undefined4 *)((int)this + 0x4a0) = 0;
    *(undefined4 *)((int)this + 0x4a4) = 0;
    *(undefined4 *)((int)this + 0x4a8) = 0;
    *(undefined4 *)((int)this + 0x4ac) = 0;
    *(undefined4 *)((int)this + 0x4b0) = 0;
    *(undefined4 *)((int)this + 0x4b4) = 0;
    *(undefined4 *)((int)this + 0x4bc) = 0;
    *(undefined4 *)((int)this + 0x4c0) = 0;
    *(undefined4 *)((int)this + 0x4b8) = 0;
    *(undefined4 *)((int)this + 0x5e4) = 0;
    *(undefined4 *)((int)this + 0x5e8) = 0;
    *(undefined4 *)((int)this + 0x5ec) = 0;
    *(undefined4 *)((int)this + 0x5f0) = 0;
    *(undefined4 *)((int)this + 0x5f4) = 0;
    *(undefined4 *)((int)this + 0x5f8) = 0;
    *(undefined4 *)((int)this + 0x61c) = 0;
    *(undefined4 *)((int)this + 0x620) = 0;
    *(undefined4 *)((int)this + 0x624) = 0;
    *(undefined4 *)((int)this + 0x628) = 0;
    *(undefined4 *)((int)this + 0x5fc) = 0;
    *(undefined4 *)((int)this + 0x52c) = 0xffffd8f1;
    *(undefined4 *)((int)this + 0x600) = 0;
    *(undefined4 *)((int)this + 0x604) = 0;
    *(undefined4 *)((int)this + 0x608) = 0;
    *(undefined4 *)((int)this + 0x60c) = 0;
    *(undefined4 *)((int)this + 0x610) = 0;
    *(undefined4 *)((int)this + 0x614) = 0;
    *(undefined4 *)((int)this + 0x618) = 0;
    *(undefined4 *)((int)this + 0x62c) = 0;
    *(undefined4 *)((int)this + 0x630) = 0;
    UVar4 = RegisterWindowMessageA(s_SHELLHOOK_10033104);
    *(UINT *)((int)this + 0x624) = UVar4;
    *(undefined4 *)((int)this + 0x4c8) = 0;
    *(undefined4 *)((int)this + 0x4cc) = 0;
    *(undefined4 *)((int)this + 0x4d0) = 0;
    *(undefined4 *)((int)this + 0x4c4) = 0xffffd8f3;
    *(undefined4 *)((int)this + 0x4d4) = 0;
    *(undefined4 *)((int)this + 0x554) = 0;
    *(undefined4 *)((int)this + 0x550) = 0;
    *(undefined4 *)((int)this + 0x54c) = 0;
    *(undefined4 *)((int)this + 0x558) = 0;
    *(undefined4 *)((int)this + 0x55c) = 0;
    *(undefined4 *)((int)this + 0x560) = 0;
    uVar14 = *(uint *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x544) = 0;
    *(undefined4 *)((int)this + 0x568) = 0;
    *(undefined4 *)((int)this + 0x548) = 0;
    *(undefined4 *)((int)this + 0x564) = 0x14840000;
    if ((uVar14 & 0x4000) == 0) {
      *(undefined4 *)((int)this + 0x564) = 0x14cc0000;
      *(undefined4 *)((int)this + 0xb0) = 0xffffd8f3;
    }
    if ((uVar14 & 0x8000) == 0) {
      *(undefined4 *)((int)this + 0xb4) = 0xffffd8f3;
      *(uint *)((int)this + 0x564) = *(uint *)((int)this + 0x564) | 0xc20000;
    }
    if ((uVar14 & 0x10000) == 0) {
      *(undefined4 *)((int)this + 0xb8) = 0xffffd8f3;
      *(uint *)((int)this + 0x564) = *(uint *)((int)this + 0x564) | 0xc10000;
    }
    lpString = (LPCSTR)((int)this + 0x308);
    uVar14 = 0xffffffff;
    *(undefined4 *)((int)this + 0x56c) = 0;
    *(undefined4 *)((int)this + 0x570) = 0;
    pcVar7 = s_ShowBitmapWClass_10033110;
    do {
      pcVar17 = pcVar7;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar17 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar17;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    pCVar18 = pcVar17 + -uVar14;
    pCVar20 = lpString;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pCVar20 = *(undefined4 *)pCVar18;
      pCVar18 = pCVar18 + 4;
      pCVar20 = pCVar20 + 4;
    }
    iVar3 = 0x10;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pCVar20 = *pCVar18;
      pCVar18 = pCVar18 + 1;
      pCVar20 = pCVar20 + 1;
    }
    iVar13 = lstrlenA(lpString);
    _ultoa((ulong)hInstance,(char *)((int)this + iVar13 + 0x308),iVar3);
    iVar3 = -1;
    pCVar20 = lpString;
    do {
      pCVar21 = pCVar20;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pCVar21 = pCVar20 + 1;
      cVar1 = *pCVar20;
      pCVar20 = pCVar21;
    } while (cVar1 != '\0');
    iVar13 = 10;
    *(undefined2 *)(pCVar21 + -1) = DAT_10033124;
    iVar3 = lstrlenA(lpString);
    _ltoa(param_1,(char *)((int)this + iVar3 + 0x308),iVar13);
    iVar3 = -1;
    pCVar20 = lpString;
    do {
      pCVar21 = pCVar20;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pCVar21 = pCVar20 + 1;
      cVar1 = *pCVar20;
      pCVar20 = pCVar21;
    } while (cVar1 != '\0');
    iVar13 = 10;
    *(undefined2 *)(pCVar21 + -1) = DAT_10033128;
    iVar3 = lstrlenA(lpString);
    _ltoa(param_3,(char *)((int)this + iVar3 + 0x308),iVar13);
    iVar3 = -1;
    pCVar20 = lpString;
    do {
      pCVar21 = pCVar20;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pCVar21 = pCVar20 + 1;
      cVar1 = *pCVar20;
      pCVar20 = pCVar21;
    } while (cVar1 != '\0');
    iVar13 = 10;
    *(undefined2 *)(pCVar21 + -1) = DAT_1003312c;
    iVar3 = lstrlenA(lpString);
    _ltoa(DAT_10032ecc,(char *)((int)this + iVar3 + 0x308),iVar13);
    WStack_28.hIcon = LoadIconA(hInstance,s_MWinImageIcon_10033130);
    WStack_28.style = 0x400b;
    *(HICON *)((int)this + 0x558) = WStack_28.hIcon;
    WStack_28.hInstance = hInstance;
    WStack_28.lpfnWndProc = ShowMainWndProc;
    WStack_28.cbClsExtra = 0;
    WStack_28.cbWndExtra = 0;
    WStack_28.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    WStack_28.hbrBackground = (HBRUSH)0x0;
    WStack_28.lpszMenuName = (LPCSTR)0x0;
    WStack_28.lpszClassName = lpString;
    AVar2 = RegisterClassA(&WStack_28);
    if (AVar2 == 0) {
      UnregisterClassA(lpString,hInstance);
      AVar2 = RegisterClassA(&WStack_28);
      if (AVar2 == 0) goto LAB_1002156c;
    }
    *(undefined4 *)((int)this + 0x408) = 1;
    *(HINSTANCE *)((int)this + 0x410) = hInstance;
    iVar3 = FUN_1002aef0((int)this);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x70) = 1;
      return this;
    }
  }
LAB_1002156c:
  *(undefined4 *)((int)this + 0x70) = 0;
  return this;
}


// ---- FUN_10021580 @ 10021580

void __fastcall FUN_10021580(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x53c) + *(int *)((int)param_1 + 0x540) +
      *(int *)((int)param_1 + 0x530) + *(int *)((int)param_1 + 0x534) +
      *(int *)((int)param_1 + 0x538) == 0) {
    iVar1 = FUN_1001fed0(0,(int)param_1);
    if (iVar1 == 0) goto LAB_100215c4;
  }
  FUN_10025a10();
LAB_100215c4:
  FUN_1002b420((int)param_1);
  FUN_10026240(param_1,1,1);
  if ((*(int *)((int)param_1 + 0x5a8) != 0) && (*(code **)((int)param_1 + 0x5b0) != (code *)0x0)) {
    (**(code **)((int)param_1 + 0x5b0))(*(int *)((int)param_1 + 0x5a8));
  }
  if (*(HMODULE *)((int)param_1 + 0x5a4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)((int)param_1 + 0x5a4));
  }
  if (*(void **)((int)param_1 + 0x40c) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x40c));
    *(undefined4 *)((int)param_1 + 0x40c) = 0;
  }
  if (*(void **)((int)param_1 + 0x4e0) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x4e0));
    *(undefined4 *)((int)param_1 + 0x4e0) = 0;
  }
  if (*(void **)((int)param_1 + 0x4d8) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x4d8));
    *(undefined4 *)((int)param_1 + 0x4d8) = 0;
  }
  if (*(void **)((int)param_1 + 0x4dc) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x4dc));
    *(undefined4 *)((int)param_1 + 0x4dc) = 0;
  }
  if (*(int *)((int)param_1 + 0x418) != 0) {
    FUN_100266b0((int)param_1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x18));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48));
  if (*(void **)((int)param_1 + 0x424) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x424));
    *(undefined4 *)((int)param_1 + 0x424) = 0;
  }
  if (*(void **)((int)param_1 + 0x470) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x470));
    *(undefined4 *)((int)param_1 + 0x470) = 0;
    *(undefined4 *)((int)param_1 + 0x474) = 0;
  }
  if (*(void **)((int)param_1 + 0x478) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x478));
    *(undefined4 *)((int)param_1 + 0x478) = 0;
    *(undefined4 *)((int)param_1 + 0x47c) = 0;
  }
  if (*(void **)((int)param_1 + 0x480) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x480));
    *(undefined4 *)((int)param_1 + 0x480) = 0;
    *(undefined4 *)((int)param_1 + 0x484) = 0;
  }
  if (*(HICON *)((int)param_1 + 0x558) != (HICON)0x0) {
    DestroyIcon(*(HICON *)((int)param_1 + 0x558));
    *(undefined4 *)((int)param_1 + 0x558) = 0;
  }
  if (*(int *)((int)param_1 + 0x408) != 0) {
    GetLastError();
  }
  return;
}


// ---- FUN_10021770 @ 10021770

undefined4 __thiscall FUN_10021770(void *this,int param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  if ((*(int *)((int)this + 0x304) != 2) && (*(int *)((int)this + 0x304) != 5)) {
    if (iVar2 == 0) {
      FUN_10025480(this,6,1,0,0,*(undefined4 *)((int)this + 0x13c),
                   *(undefined4 *)((int)this + 0x140),0,0);
      uVar3 = FUN_10026240(this,1,1);
      *(undefined4 *)((int)this + 0x304) = 0;
      FUN_1002bb50(this,param_1);
      goto LAB_100218b9;
    }
    FUN_1002bb50(this,param_1);
    DVar1 = GetCurrentThreadId();
    *(DWORD *)((int)this + 0x41c) = DVar1;
    if (*(int *)((int)this + 0x304) == 1) {
      *(undefined4 *)((int)this + 0x304) = 2;
      FUN_10025480(this,5,1,0,0,*(undefined4 *)((int)this + 0x13c),
                   *(undefined4 *)((int)this + 0x140),0,0);
      goto LAB_100218b9;
    }
    if (*(int *)((int)this + 0x304) == 4) {
      *(undefined4 *)((int)this + 0x304) = 5;
      FUN_10025480(this,5,1,0,0,*(undefined4 *)((int)this + 0x13c),
                   *(undefined4 *)((int)this + 0x140),0,0);
      goto LAB_100218b9;
    }
    iVar2 = FUN_1002b640(this,param_1,0xffffd8f3,0);
    if (iVar2 == 1) {
      *(undefined4 *)((int)this + 0x304) = 3;
      FUN_10025480(this,5,1,0,0,*(undefined4 *)((int)this + 0x13c),
                   *(undefined4 *)((int)this + 0x140),0,0);
      goto LAB_100218b9;
    }
  }
  uVar3 = 0;
LAB_100218b9:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  return uVar3;
}


// ---- FUN_100218d0 @ 100218d0

undefined4 __thiscall FUN_100218d0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  if ((*(int *)((int)this + 0x304) == 3) || (*(int *)((int)this + 0x304) == 5)) {
    uVar2 = 0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
  }
  else if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x304) = 0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)((int)this + 0x4d8);
      return 1;
    }
  }
  else {
    iVar1 = FUN_1002b770(this,param_1,-9999,(HWND)0x0);
    if (iVar1 == 1) {
      *(undefined4 *)((int)this + 0x304) = 1;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)((int)this + 0x4d8);
        return 1;
      }
    }
    else {
      uVar2 = 0;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
        return 0;
      }
    }
  }
  return uVar2;
}


// ---- FUN_10021980 @ 10021980

undefined4 __thiscall FUN_10021980(void *this,int param_1,HWND param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  if ((*(int *)((int)this + 0x304) == 3) || (*(int *)((int)this + 0x304) == 2)) {
    return 0;
  }
  if (iVar1 == 0) {
    FUN_1002d640((int)this);
    *(undefined4 *)((int)this + 0x304) = 0;
    *(uint *)((int)this + 0x2b0) = *(uint *)((int)this + 0x2b0) & 0xfffffffe;
    return 1;
  }
  iVar1 = FUN_1002b770(this,param_1,-0x270d,param_2);
  if (iVar1 == 1) {
    *(undefined4 *)((int)this + 0x304) = 4;
    *(uint *)((int)this + 0x2b0) = *(uint *)((int)this + 0x2b0) | 1;
    FUN_1002d5c0((int)this);
    return 1;
  }
  return 0;
}


// ---- FUN_10021a30 @ 10021a30

DWORD __thiscall FUN_10021a30(void *this,uint param_1,int param_2,undefined4 param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  uint uVar3;
  DWORD local_4;
  
  FUN_1002bb50(this,0);
  if ((param_2 == 0) && ((param_1 & 0x4000000) == 0)) {
    param_1 = param_1 | 0x4000000;
  }
  if ((int)param_1 < 5) {
    if (param_1 == 4) {
      local_4 = *(DWORD *)((int)this + 0x4fc);
      *(undefined4 *)((int)this + 0x500) = param_3;
      *(int *)((int)this + 0x4fc) = param_2;
    }
    else if (param_1 == 1) {
      local_4 = *(DWORD *)((int)this + 0x4e4);
      *(undefined4 *)((int)this + 0x4e8) = param_3;
      *(int *)((int)this + 0x4e4) = param_2;
    }
  }
  else if ((int)param_1 < 0x4000002) {
    if (param_1 == 0x4000001) {
      *(undefined4 *)((int)this + 0x4e8) = 0;
      local_4 = *(DWORD *)((int)this + 0x4e4);
      *(undefined4 *)((int)this + 0x4e4) = 0;
    }
    else if (param_1 == 9) {
      local_4 = *(DWORD *)((int)this + 0x504);
      *(undefined4 *)((int)this + 0x508) = param_3;
      *(int *)((int)this + 0x504) = param_2;
      if (local_4 == 0) {
        *(undefined4 *)((int)this + 0x634) = 0;
        pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10025860,
                              this,0,(LPDWORD)((int)this + 0x638));
        *(HANDLE *)((int)this + 0x63c) = pvVar2;
      }
    }
  }
  else if ((int)param_1 < 0x400000a) {
    if (param_1 == 0x4000009) {
      DVar1 = *(DWORD *)((int)this + 0x504);
      uVar3 = 0;
      *(undefined4 *)((int)this + 0x508) = 0;
      *(undefined4 *)((int)this + 0x504) = 0;
      local_4 = 0x103;
      *(undefined4 *)((int)this + 0x634) = 1;
      do {
        if (1999 < uVar3) break;
        uVar3 = uVar3 + 0x32;
        Sleep(0x32);
        GetExitCodeThread(*(HANDLE *)((int)this + 0x63c),&local_4);
      } while (local_4 == 0x103);
      CloseHandle(*(HANDLE *)((int)this + 0x63c));
      *(undefined4 *)((int)this + 0x63c) = 0;
      local_4 = DVar1;
    }
    else if (param_1 == 0x4000004) {
      *(undefined4 *)((int)this + 0x500) = 0;
      local_4 = *(DWORD *)((int)this + 0x4fc);
      *(undefined4 *)((int)this + 0x4fc) = 0;
    }
  }
  else if ((int)param_1 < 0x14000003) {
    if (param_1 == 0x14000002) {
      *(undefined4 *)((int)this + 0x4f8) = 0;
      local_4 = *(DWORD *)((int)this + 0x4f4);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
    else if (param_1 == 0x10000002) {
      local_4 = *(DWORD *)((int)this + 0x4f4);
      *(undefined4 *)((int)this + 0x4f8) = param_3;
      *(int *)((int)this + 0x4f4) = param_2;
    }
  }
  else if (param_1 == 0x20000002) {
    local_4 = *(DWORD *)((int)this + 0x4ec);
    *(undefined4 *)((int)this + 0x4f0) = param_3;
    *(int *)((int)this + 0x4ec) = param_2;
  }
  else if (param_1 == 0x24000002) {
    *(undefined4 *)((int)this + 0x4f0) = 0;
    local_4 = *(DWORD *)((int)this + 0x4ec);
    *(undefined4 *)((int)this + 0x4ec) = 0;
  }
  return local_4;
}


// ---- FUN_10021c80 @ 10021c80

undefined4 __thiscall
FUN_10021c80(void *this,HRGN param_1,HPALETTE param_2,uint param_3,DWORD param_4)

{
  HWND hWnd;
  HDC pHVar1;
  DWORD DVar2;
  uint uVar3;
  RECT local_20;
  tagPOINT local_10;
  int local_8;
  int local_4;
  
  if (*(int *)((int)this + 0x130) != 0) {
    if (*(int *)((int)this + 0x110) == -0x270d) {
      if (*(int *)((int)this + 0xf0) != 0) {
        return 1;
      }
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
    }
    FUN_1002a540(this,(int)param_1,(int)param_2,param_3,param_4,uVar3);
    FUN_1002a190(this,(int)param_1,(int)param_2,param_3,param_4);
    hWnd = *(HWND *)((int)this + 0x42c);
    if (hWnd != (HWND)0x0) {
      if (*(int *)((int)this + 0xc0) == -0x270d) {
        pHVar1 = GetDC(hWnd);
        local_10.x = (LONG)param_1;
        local_8 = (int)&param_1->unused + param_3;
        local_10.y = (LONG)param_2;
        local_4 = (int)&param_2->unused + param_4;
        FUN_10028d20(this,pHVar1,&local_10,2,0);
        local_20.left = local_10.x;
        local_20.top = local_10.y;
        local_20.right = local_8;
        local_20.bottom = local_4;
        InvalidateRect(*(HWND *)((int)this + 0x42c),&local_20,
                       (uint)(*(int *)((int)this + 0xe4) == -0x270d));
        if (((*(int *)((int)this + 0x60) == 0) || (*(int *)((int)this + 0x6c) == -0x270d)) &&
           ((*(int *)((int)this + 0x100) == -0x270d ||
            ((*(int *)((int)this + 0x100) == 0x10000000 &&
             (DVar2 = GetCurrentThreadId(), DVar2 == *(DWORD *)((int)this + 0x41c))))))) {
          UpdateWindow(*(HWND *)((int)this + 0x42c));
        }
        ReleaseDC(*(HWND *)((int)this + 0x42c),pHVar1);
      }
      else {
        pHVar1 = GetDC(hWnd);
        local_20.right = (int)&param_1->unused + param_3;
        local_20.left = (LONG)param_1;
        local_20.top = (LONG)param_2;
        local_20.bottom = (int)&param_2->unused + param_4;
        FUN_10028d20(this,pHVar1,(LPPOINT)&local_20,2,0);
        FUN_10028e40(this,param_1,param_2,param_3,param_4,1,(HDC)0x0);
      }
    }
    FUN_10025480(this,2,1,param_1,param_2,param_3,param_4,0,0);
  }
  return 1;
}


// ---- FUN_10021e60 @ 10021e60

int __thiscall FUN_10021e60(void *this,int param_1,int param_2,int param_3,undefined1 *param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined3 extraout_var;
  BOOL bErase;
  DWORD DVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  
  if (param_3 == 0) {
    return 1;
  }
  if ((8 < *(int *)((int)this + 0x288)) && (8 < *(int *)((int)this + 0x14c))) {
    return 2;
  }
  if (*(int *)((int)this + 0x4c8) == 0) {
    *(undefined4 *)((int)this + 0x4d0) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x28) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x2c) = 0;
    return 0;
  }
  puVar5 = (undefined1 *)(param_2 + *(int *)((int)this + 0x4cc));
  uVar1 = *(ushort *)(*(int *)((int)this + 0x4c8) + 2);
  iVar4 = 0;
  if (0 < param_3) {
    do {
      *puVar5 = param_4[iVar4];
      if (param_1 == 1) {
        puVar5[uVar1] = param_4[iVar4];
        uVar6 = param_4[iVar4];
      }
      else {
        puVar5[uVar1] = param_4[iVar4 + param_3];
        uVar6 = param_4[iVar4 + param_3 * 2];
      }
      puVar5[(uint)uVar1 * 2] = uVar6;
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  *(undefined4 *)((int)this + 0x4c4) = 0xffffd8f1;
  if ((*(int *)((int)this + 0x14c) < 9) || (*(int *)((int)this + 0x58c) != 0xc)) {
    FUN_1002c220(this,param_1,param_2,param_3,param_4);
  }
  else {
    FUN_1002bf40(this,param_1,param_2,param_3,(int)param_4);
  }
  bVar2 = FUN_1002b270(this);
  if (CONCAT31(extraout_var,bVar2) == 1) {
    if (*(HWND *)((int)this + 0x42c) != (HWND)0x0) {
      if ((*(int *)((int)this + 0x434) != 0) || (bErase = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        bErase = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,bErase);
      if ((*(int *)((int)this + 0x100) == -0x270d) ||
         ((*(int *)((int)this + 0x100) == 0x10000000 &&
          (DVar3 = GetCurrentThreadId(), DVar3 == *(DWORD *)((int)this + 0x41c))))) {
        UpdateWindow(*(HWND *)((int)this + 0x42c));
      }
    }
    FUN_10025480(this,1,1,0,0,*(undefined4 *)((int)this + 0x13c),*(undefined4 *)((int)this + 0x140),
                 0,0);
    return 1;
  }
  return CONCAT31(extraout_var,bVar2);
}


// ---- FUN_10022030 @ 10022030

undefined4 __thiscall FUN_10022030(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL bErase;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_2;
  iVar6 = param_1;
  if ((*(int *)((int)this + 0x42c) != 0) && (*(int *)((int)this + 0xa8) == -0x270d)) {
    iVar7 = *(int *)((int)this + 0x2f4) - *(int *)((int)this + 0x448);
    iVar8 = *(int *)((int)this + 0x2f8) - *(int *)((int)this + 0x44c);
    iVar1 = (*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x214)) + iVar7;
    iVar2 = (*(int *)((int)this + 0x300) - *(int *)((int)this + 0x218)) + iVar8;
    iVar3 = *(int *)((int)this + 0x1e4) + iVar7;
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
    iVar7 = *(int *)((int)this + 0x1e8) + iVar8;
    if (iVar8 <= iVar7) {
      iVar7 = iVar8;
    }
    iVar8 = (*(int *)((int)this + 0x1ec) - *(int *)((int)this + 0x238)) + iVar1 +
            *(int *)((int)this + 0x1e4);
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    iVar1 = (*(int *)((int)this + 0x1f0) - *(int *)((int)this + 0x23c)) + iVar2 +
            *(int *)((int)this + 0x1e8);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    if (iVar3 <= param_1) {
      iVar6 = iVar3;
    }
    if (iVar7 <= param_2) {
      iVar5 = iVar7;
    }
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
  }
  if ((iVar6 == param_1) && (iVar5 == param_2)) {
    *(int *)((int)this + 0x2a0) = iVar6;
    *(int *)(*(int *)((int)this + 0x4d8) + 100) = iVar6;
    *(int *)((int)this + 0x2a4) = iVar5;
    *(int *)(*(int *)((int)this + 0x4d8) + 0x68) = iVar5;
    if (*(HWND *)((int)this + 0x42c) != (HWND)0x0) {
      if (*(int *)((int)this + 0x9c) == -0x270d) {
        if ((*(int *)((int)this + 0x434) != 0) ||
           (bErase = 0, *(int *)((int)this + 0xe4) == -0x270d)) {
          bErase = 1;
        }
        InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,bErase);
        if ((*(int *)((int)this + 0x100) == -0x270d) ||
           ((*(int *)((int)this + 0x100) == 0x10000000 &&
            (DVar4 = GetCurrentThreadId(), DVar4 == *(DWORD *)((int)this + 0x41c))))) {
          UpdateWindow(*(HWND *)((int)this + 0x42c));
        }
      }
      if (*(int *)((int)this + 0x42c) != 0) {
        FUN_10026790(this);
      }
    }
    FUN_10025480(this,4,1,0,0,*(undefined4 *)((int)this + 0x13c),*(undefined4 *)((int)this + 0x140),
                 0,0);
    return 1;
  }
  return 0;
}


// ---- FUN_10022230 @ 10022230

undefined4 __thiscall FUN_10022230(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  BOOL bErase;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0xa8) == -0x270d) && (param_3 == 1)) {
    iVar2 = *(int *)((int)this + 0x2f4) - *(int *)((int)this + 0x2a0);
    iVar3 = *(int *)((int)this + 0x2f8) - *(int *)((int)this + 0x2a4);
    iVar5 = (*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x214)) + iVar2;
    iVar4 = (*(int *)((int)this + 0x2f8) - *(int *)((int)this + 0x2a4)) +
            (*(int *)((int)this + 0x300) - *(int *)((int)this + 0x218));
    iVar1 = *(int *)((int)this + 0x1e4) + iVar2;
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    iVar2 = *(int *)((int)this + 0x1e8) + iVar3;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    iVar3 = (*(int *)((int)this + 0x1ec) - *(int *)((int)this + 0x238)) + iVar5 +
            *(int *)((int)this + 0x1e4);
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    iVar5 = (*(int *)((int)this + 0x1f0) - *(int *)((int)this + 0x23c)) + iVar4 +
            *(int *)((int)this + 0x1e8);
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    if (param_1 <= iVar1) {
      iVar1 = param_1;
    }
    if (param_2 <= iVar2) {
      iVar2 = param_2;
    }
    param_1 = iVar3;
    if (iVar3 <= iVar1) {
      param_1 = iVar1;
    }
    param_2 = iVar5;
    if (iVar5 <= iVar2) {
      param_2 = iVar2;
    }
  }
  if (param_1 < 1) {
    param_1 = 0;
  }
  if (param_2 < 1) {
    param_2 = 0;
  }
  iVar5 = *(int *)((int)this + 0x440);
  if (param_1 <= *(int *)((int)this + 0x440)) {
    iVar5 = param_1;
  }
  iVar1 = *(int *)((int)this + 0x444);
  if (param_2 <= *(int *)((int)this + 0x444)) {
    iVar1 = param_2;
  }
  if ((*(int *)((int)this + 0x448) != iVar5) || (*(int *)((int)this + 0x44c) != iVar1)) {
    FUN_10025480(this,0xe,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
    if (*(int *)((int)this + 0x448) != iVar5) {
      SetScrollPos(*(HWND *)((int)this + 0x42c),0,iVar5,1);
    }
    if (*(int *)((int)this + 0x44c) != iVar1) {
      SetScrollPos(*(HWND *)((int)this + 0x42c),1,iVar1,1);
    }
    *(int *)((int)this + 0x448) = iVar5;
    *(int *)(*(int *)((int)this + 0x4d8) + 100) = iVar5;
    *(int *)((int)this + 0x44c) = iVar1;
    *(int *)(*(int *)((int)this + 0x4d8) + 0x68) = iVar1;
    if (*(HWND *)((int)this + 0x42c) != (HWND)0x0) {
      if ((*(int *)((int)this + 0x434) != 0) || (bErase = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        bErase = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,bErase);
    }
    FUN_10026900(this);
    FUN_10025480(this,0xe,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
  }
  return 1;
}


// ---- FUN_10022450 @ 10022450

undefined4 __thiscall FUN_10022450(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL bErase;
  DWORD DVar4;
  int iVar5;
  
  if ((((param_1 < 0x11) && (-0x11 < param_1)) && (param_2 < 0x11)) && (-0x11 < param_2)) {
    *(int *)((int)this + 0x2b4) = param_1;
    *(int *)((int)this + 0x2b8) = param_2;
    *(int *)(*(int *)((int)this + 0x4d8) + 0x5c) = param_1;
    *(int *)(*(int *)((int)this + 0x4d8) + 0x60) = param_2;
    if (param_1 < 1) {
      *(undefined4 *)((int)this + 0x2c4) = 1;
      *(int *)((int)this + 0x2cc) = -param_1;
    }
    else {
      *(undefined4 *)((int)this + 0x2cc) = 1;
      *(int *)((int)this + 0x2c4) = param_1;
    }
    iVar5 = *(int *)((int)this + 0x2d4) * *(int *)((int)this + 0x2c4);
    *(int *)((int)this + 0x2e4) = iVar5;
    *(int *)((int)this + 0x2ec) = *(int *)((int)this + 0x2dc) * *(int *)((int)this + 0x2cc);
    if (param_2 < 1) {
      *(undefined4 *)((int)this + 0x2c8) = 1;
      *(int *)((int)this + 0x2d0) = -param_2;
    }
    else {
      *(undefined4 *)((int)this + 0x2d0) = 1;
      *(int *)((int)this + 0x2c8) = param_2;
    }
    iVar1 = *(int *)((int)this + 0x298);
    iVar2 = *(int *)((int)this + 0x224);
    *(int *)((int)this + 0x2e8) = *(int *)((int)this + 0x2d8) * *(int *)((int)this + 0x2c8);
    *(int *)((int)this + 0x2f0) = *(int *)((int)this + 0x2d0) * *(int *)((int)this + 0x2e0);
    iVar3 = GetSystemMetrics(0x1c);
    if (iVar3 < iVar1 + iVar2 + iVar5 + 0x60) {
      iVar5 = *(int *)((int)this + 0x2e4) + *(int *)((int)this + 0x298) +
              *(int *)((int)this + 0x224) + 0x60;
    }
    else {
      iVar5 = GetSystemMetrics(0x1c);
    }
    *(int *)((int)this + 0x274) = iVar5;
    if (*(int *)((int)this + 0x42c) != 0) {
      FUN_100273c0(this,0,1,0);
    }
    if ((*(HWND *)((int)this + 0x42c) != (HWND)0x0) && (*(int *)((int)this + 0x9c) == -0x270d)) {
      if ((*(int *)((int)this + 0x434) != 0) || (bErase = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        bErase = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,bErase);
      if ((*(int *)((int)this + 0x100) == -0x270d) ||
         ((*(int *)((int)this + 0x100) == 0x10000000 &&
          (DVar4 = GetCurrentThreadId(), DVar4 == *(DWORD *)((int)this + 0x41c))))) {
        UpdateWindow(*(HWND *)((int)this + 0x42c));
      }
    }
    FUN_10025480(this,3,1,0,0,*(undefined4 *)((int)this + 0x13c),*(undefined4 *)((int)this + 0x140),
                 0,0);
    return 1;
  }
  return 0;
}


// ---- FUN_10022650 @ 10022650

undefined4 __thiscall FUN_10022650(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BOOL bErase;
  
  if ((((param_1 < 0x11) && (-0x11 < param_1)) && (param_2 < 0x11)) && (-0x11 < param_2)) {
    FUN_10025480(this,0xd,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
    iVar4 = *(int *)((int)this + 0x2e4);
    iVar1 = *(int *)((int)this + 0x298);
    iVar2 = *(int *)((int)this + 0x224);
    iVar3 = GetSystemMetrics(0x1c);
    if (iVar3 < iVar4 + iVar1 + iVar2 + 0x60) {
      iVar4 = *(int *)((int)this + 0x2e4) + *(int *)((int)this + 0x298) +
              *(int *)((int)this + 0x224) + 0x60;
    }
    else {
      iVar4 = GetSystemMetrics(0x1c);
    }
    *(int *)((int)this + 0x274) = iVar4;
    *(int *)(*(int *)((int)this + 0x4dc) + 0x60) = param_1;
    *(int *)(*(int *)((int)this + 0x4dc) + 100) = param_2;
    if (param_1 == 0) {
      param_1 = 1;
    }
    if (0x10 < param_1) {
      param_1 = 0x10;
    }
    if (param_1 < -0x10) {
      param_1 = -0x10;
    }
    *(int *)((int)this + 700) = param_1;
    if (param_2 == 0) {
      param_2 = 1;
    }
    if (0x10 < param_2) {
      param_2 = 0x10;
    }
    if (param_2 < -0x10) {
      param_2 = -0x10;
    }
    *(int *)((int)this + 0x2c0) = param_2;
    if (param_1 < 1) {
      *(undefined4 *)((int)this + 0x2d4) = 1;
      *(int *)((int)this + 0x2dc) = -param_1;
    }
    else {
      *(undefined4 *)((int)this + 0x2dc) = 1;
      *(int *)((int)this + 0x2d4) = param_1;
    }
    *(int *)((int)this + 0x2e4) = *(int *)((int)this + 0x2d4) * *(int *)((int)this + 0x2c4);
    *(int *)((int)this + 0x2ec) = *(int *)((int)this + 0x2dc) * *(int *)((int)this + 0x2cc);
    if (param_2 < 1) {
      *(undefined4 *)((int)this + 0x2d8) = 1;
      *(int *)((int)this + 0x2e0) = -param_2;
    }
    else {
      *(undefined4 *)((int)this + 0x2e0) = 1;
      *(int *)((int)this + 0x2d8) = param_2;
    }
    *(int *)((int)this + 0x2e8) = *(int *)((int)this + 0x2d8) * *(int *)((int)this + 0x2c8);
    *(int *)((int)this + 0x2f0) = *(int *)((int)this + 0x2d0) * *(int *)((int)this + 0x2e0);
    if (*(int *)((int)this + 0x42c) != 0) {
      FUN_100273c0(this,0,1,0);
    }
    if (*(HWND *)((int)this + 0x42c) != (HWND)0x0) {
      if ((*(int *)((int)this + 0x434) != 0) || (bErase = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        bErase = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,bErase);
    }
    FUN_10026900(this);
    FUN_10025480(this,0xd,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
    return 1;
  }
  return 0;
}


// ---- FUN_100228a0 @ 100228a0

undefined4 __thiscall FUN_100228a0(void *this,int param_1,uint *param_2)

{
  char cVar1;
  HDC pHVar2;
  uint uVar3;
  HWND pHVar4;
  BOOL BVar5;
  HWND pHVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  RECT *pRVar11;
  char *pcVar12;
  bool bVar13;
  DWORD local_3c;
  int local_38;
  undefined4 local_34;
  RECT local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_34 = 1;
  if (0x3fc < param_1) {
    if (param_1 < 0xbb9) {
      if (param_1 == 3000) {
        uVar3 = *(uint *)((int)this + 0x2a0);
      }
      else {
        if (param_1 != 0x3fe) goto switchD_100228d0_caseD_3ec;
        if (DAT_10030024 == 0) {
          *param_2 = 0;
          return 1;
        }
        uVar3 = FUN_10010830(DAT_10030024);
      }
    }
    else if (param_1 < 0xbcc) {
      if (param_1 == 0xbcb) {
        uVar3 = *(uint *)((int)this + 0x640);
      }
      else if (param_1 == 0xbb9) {
        uVar3 = *(uint *)((int)this + 0x2a4);
      }
      else if (param_1 == 0xbba) {
        uVar3 = *(uint *)((int)this + 0x2b4);
      }
      else {
        if (param_1 != 0xbbb) goto switchD_100228d0_caseD_3ec;
        uVar3 = *(uint *)((int)this + 0x2b8);
      }
    }
    else if (param_1 < 0xbec) {
      if (param_1 == 0xbeb) {
        uVar3 = *(uint *)((int)this + 0x84);
      }
      else {
        switch(param_1) {
        case 0xbcc:
          uVar3 = *(uint *)((int)this + 0x504);
          break;
        case 0xbcd:
          uVar3 = *(uint *)((int)this + 0x508);
          break;
        default:
          goto switchD_100228d0_caseD_3ec;
        case 0xbd0:
          uVar3 = *(uint *)((int)this + 0x49c);
          break;
        case 0xbd1:
          uVar3 = *(uint *)((int)this + 0x124);
          break;
        case 0xbd2:
          uVar3 = *(uint *)((int)this + 0x128);
        }
      }
    }
    else if (param_1 < 0x10000c37) {
      if (param_1 == 0x10000c36) {
        uVar3 = *(uint *)((int)this + 0x4f4);
      }
      else {
        switch(param_1) {
        case 0xbec:
          uVar3 = *(uint *)((int)this + 0x88);
          break;
        case 0xbed:
          uVar3 = *(uint *)((int)this + 0x8c);
          break;
        case 0xbee:
          uVar3 = *(uint *)((int)this + 0x90);
          break;
        case 0xbef:
          uVar3 = *(uint *)((int)this + 0x98);
          break;
        case 0xbf0:
          uVar3 = *(uint *)((int)this + 0xa8);
          break;
        case 0xbf1:
          uVar3 = (-(uint)((*(uint *)((int)this + 0x564) & 0x400000) == 0) & 0xfffffffe) - 0x270d;
          break;
        case 0xbf2:
          uVar3 = (-(uint)(*(int *)((int)this + 0x548) == 0) & 0xfffffffe) - 0x270d;
          break;
        case 0xbf3:
          uVar3 = *(uint *)((int)this + 0xa0);
          break;
        case 0xbf4:
          uVar3 = *(uint *)((int)this + 0xa4);
          break;
        case 0xbf5:
          uVar3 = *(uint *)((int)this + 0xac);
          break;
        case 0xbf6:
          uVar3 = *(uint *)((int)this + 0xb0);
          break;
        case 0xbf7:
          uVar3 = *(uint *)((int)this + 0xb4);
          break;
        case 0xbf8:
          uVar3 = *(uint *)((int)this + 0xb8);
          break;
        case 0xbf9:
          uVar3 = *(uint *)((int)this + 0xbc);
          break;
        case 0xbfa:
          uVar3 = *(uint *)((int)this + 0x168);
          break;
        case 0xbfb:
          if (*(int *)((int)this + 0x58c) == 0xd) {
            *param_2 = 0x200;
          }
          else {
            *param_2 = 0;
          }
          if (*(int *)((int)this + 0x598) != 4) {
            return 1;
          }
          uVar3 = *param_2 | 0x100000;
          break;
        case 0xbfc:
          if (*(int *)((int)this + 0x58c) == 0xd) {
            *param_2 = 0xffffd8f3;
            return 1;
          }
          *param_2 = 0xffffd8f1;
          return 1;
        case 0xbfd:
          if (*(int *)((int)this + 0x598) == 4) {
            *param_2 = 0xffffd8f3;
            return 1;
          }
          *param_2 = 0xffffd8f1;
          return 1;
        case 0xbfe:
          uVar3 = *(uint *)((int)this + 0x59c);
          break;
        case 0xbff:
          uVar3 = *(uint *)((int)this + 0x5a0);
          break;
        case 0xc00:
          uVar3 = *(uint *)((int)this + 0xc4);
          break;
        case 0xc01:
          uVar3 = *(uint *)((int)this + 0x9c);
          break;
        case 0xc02:
          uVar3 = *(uint *)((int)this + 0xc0);
          break;
        case 0xc03:
          uVar3 = *(uint *)((int)this + 200);
          break;
        case 0xc04:
          uVar3 = *(uint *)((int)this + 0xcc);
          break;
        case 0xc05:
          uVar3 = *(uint *)((int)this + 0xd4);
          break;
        case 0xc06:
          uVar3 = *(uint *)((int)this + 0xd8);
          break;
        case 0xc07:
          uVar3 = *(uint *)((int)this + 0xdc);
          break;
        case 0xc08:
          uVar3 = *(uint *)((int)this + 0xe0);
          break;
        case 0xc09:
          uVar3 = *(uint *)((int)this + 0xe4);
          break;
        case 0xc0a:
          uVar3 = *(uint *)((int)this + 0xe8);
          break;
        case 0xc0b:
          uVar3 = *(uint *)((int)this + 0xec);
          break;
        case 0xc0c:
          uVar3 = *(uint *)((int)this + 0xf4);
          break;
        case 0xc0d:
          uVar3 = *(uint *)((int)this + 0xf8);
          break;
        default:
          goto switchD_100228d0_caseD_3ec;
        case 0xc0f:
          uVar3 = *(uint *)((int)this + 0xfc);
          break;
        case 0xc10:
          uVar3 = *(uint *)((int)this + 0x1d4);
          break;
        case 0xc11:
          uVar3 = *(uint *)((int)this + 0x1d8);
          break;
        case 0xc12:
          uVar3 = *(uint *)((int)this + 0x104);
          break;
        case 0xc13:
          uVar3 = *(uint *)((int)this + 0x108);
          break;
        case 0xc14:
          uVar3 = *(uint *)((int)this + 0x10c);
          break;
        case 0xc15:
          uVar3 = *(uint *)((int)this + 0x4b0);
          break;
        case 0xc16:
          uVar3 = *(uint *)((int)this + 0x114);
          break;
        case 0xc17:
          uVar3 = *(uint *)((int)this + 0x4bc);
          break;
        case 0xc18:
          uVar3 = *(uint *)((int)this + 0x110);
          break;
        case 0xc19:
          uVar3 = *(uint *)((int)this + 0x4b4);
          break;
        case 0xc1a:
        case 0xc1b:
        case 0xc1c:
          uVar3 = *(uint *)((int)this + 0xf0);
          break;
        case 0xc1d:
          uVar3 = *(uint *)((int)this + 0x118);
          break;
        case 0xc1e:
          uVar3 = *(uint *)((int)this + 0x11c);
          break;
        case 0xc24:
          uVar3 = *(uint *)((int)this + 100);
          break;
        case 0xc26:
          uVar3 = *(uint *)((int)this + 0x42c);
          break;
        case 0xc27:
          uVar3 = *(uint *)((int)this + 0x1e4);
          break;
        case 0xc28:
          uVar3 = *(uint *)((int)this + 0x1e8);
          break;
        case 0xc29:
          uVar3 = *(uint *)((int)this + 0x1ec);
          break;
        case 0xc2a:
          uVar3 = *(uint *)((int)this + 0x1f0);
          break;
        case 0xc2b:
          uVar3 = *(uint *)((int)this + 0x448);
          break;
        case 0xc2c:
          uVar3 = *(uint *)((int)this + 0x44c);
          break;
        case 0xc2d:
          uVar3 = *(uint *)((int)this + 700);
          break;
        case 0xc2e:
          uVar3 = *(uint *)((int)this + 0x2c0);
          break;
        case 0xc2f:
          uVar3 = 0xffffffff;
          pcVar12 = *(char **)((int)this + 0x40c);
          do {
            pcVar10 = pcVar12;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar10 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar10;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          puVar9 = (uint *)(pcVar10 + -uVar3);
          for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *param_2 = *puVar9;
            puVar9 = puVar9 + 1;
            param_2 = param_2 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)param_2 = (char)*puVar9;
            puVar9 = (uint *)((int)puVar9 + 1);
            param_2 = (uint *)((int)param_2 + 1);
          }
          return 1;
        case 0xc30:
          uVar3 = *(uint *)((int)this + 0x4e4);
          break;
        case 0xc31:
          uVar3 = (-(uint)(*(int *)((int)this + 0x5e4) == 0) & 0xfffffffe) - 0x270d;
          break;
        case 0xc33:
          uVar3 = *(uint *)((int)this + 0x4e8);
          break;
        case 0xc3c:
          uVar3 = *(uint *)((int)this + 0x4fc);
          break;
        case 0xc3f:
          uVar3 = *(uint *)((int)this + 0x500);
          break;
        case 0xc42:
          uVar3 = *(uint *)((int)this + 0x434);
          break;
        case 0xc43:
          uVar3 = *(uint *)((int)this + 0x438);
          break;
        case 0xc44:
          uVar3 = *(uint *)((int)this + 0x43c);
          break;
        case 0xc45:
          uVar3 = *(uint *)((int)this + 500);
          break;
        case 0xc46:
          uVar3 = *(uint *)((int)this + 0x1f8);
          break;
        case 0xc49:
          uVar3 = *(uint *)((int)this + 0x1fc);
          break;
        case 0xc4a:
          uVar3 = *(uint *)((int)this + 0x200);
          break;
        case 0xc4b:
          uVar3 = *(uint *)((int)this + 0x4a4);
          break;
        case 0xc4c:
          uVar3 = *(uint *)((int)this + 0x4ac);
          break;
        case 0xc4d:
          pHVar6 = *(HWND *)((int)this + 0x42c);
          pHVar4 = GetForegroundWindow();
          if (*(HWND *)((int)this + 0x434) == (HWND)0x0) {
            if (pHVar4 == pHVar6) {
              *param_2 = 0xffffd8f3;
              return local_34;
            }
            *param_2 = 0xffffd8f1;
            return local_34;
          }
          bVar13 = pHVar4 == pHVar6;
          if (*(HWND *)((int)this + 0x434) != pHVar6) {
            do {
              pHVar6 = GetParent(pHVar6);
              bVar13 = (bool)(bVar13 | pHVar4 == pHVar6);
            } while (*(HWND *)((int)this + 0x434) != pHVar6);
          }
          if (bVar13) {
            *param_2 = 0xffffd8f3;
            return local_34;
          }
          *param_2 = 0xffffd8f1;
          return local_34;
        case 0xc4e:
          if (*(int *)((int)this + 0x434) == 0) {
            BVar5 = IsWindowEnabled(*(HWND *)((int)this + 0x42c));
            if (BVar5 != 0) {
              *param_2 = 0xffffd8f3;
              return local_34;
            }
            *param_2 = 0xffffd8f1;
            return local_34;
          }
          pHVar6 = *(HWND *)((int)this + 0x42c);
          uVar3 = IsWindowEnabled(pHVar6);
          if (*(HWND *)((int)this + 0x434) != pHVar6) {
            do {
              pHVar6 = GetParent(pHVar6);
              uVar7 = IsWindowEnabled(pHVar6);
              uVar3 = uVar3 & uVar7;
            } while (*(HWND *)((int)this + 0x434) != pHVar6);
          }
          if (uVar3 != 0) {
            *param_2 = 0xffffd8f3;
            return local_34;
          }
          *param_2 = 0xffffd8f1;
          return local_34;
        case 0xc4f:
          uVar3 = *(uint *)((int)this + 0x4d0);
          break;
        case 0xc50:
          uVar3 = *(uint *)((int)this + 0x418);
          break;
        case 0xc51:
          uVar3 = *(uint *)((int)this + 0x414);
          break;
        case 0xc52:
          uVar3 = *(uint *)((int)this + 0x4a0);
          break;
        case 0xc53:
          uVar3 = *(uint *)((int)this + 0x80);
          break;
        case 0xc54:
          if (*(int *)((int)this + 0x68) == -0x270d) {
            EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
            *param_2 = *(uint *)((int)this + 0x484);
            LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
            return local_34;
          }
          uVar3 = *(uint *)((int)this + 0x484);
          break;
        case 0xc55:
          local_38 = *(int *)((int)this + 0x480);
          if (*(int *)((int)this + 0x68) == -0x270d) {
            local_3c = *(DWORD *)((int)this + 0x484);
            EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
            pRVar11 = &local_30;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              pRVar11->left = 0;
              pRVar11 = (RECT *)&pRVar11->top;
            }
            local_20 = 1;
            local_1c = 1;
            FUN_10026d50(this,&local_30,&local_38,&local_3c);
            *param_2 = *(uint *)((int)this + 0x480);
            LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x48));
            return local_34;
          }
          local_3c = *(DWORD *)((int)this + 0x484);
          pRVar11 = &local_30;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            pRVar11->left = 0;
            pRVar11 = (RECT *)&pRVar11->top;
          }
          local_20 = 1;
          local_1c = 1;
          FUN_10026d50(this,&local_30,&local_38,&local_3c);
          *param_2 = *(uint *)((int)this + 0x480);
          return local_34;
        case 0xc56:
          if (*(int *)((int)this + 0x5fc) != 0) {
            *param_2 = 3;
            return 1;
          }
          *param_2 = 2;
          return 1;
        case 0xc57:
          uVar3 = *(uint *)((int)this + 0x644);
          break;
        case 0xc58:
          uVar3 = *(uint *)((int)this + 0x648);
          break;
        case 0xc5c:
          *param_2 = *(uint *)((int)this + 0x16c);
          param_2[1] = *(uint *)((int)this + 0x170);
          param_2[2] = *(uint *)((int)this + 0x174);
          param_2[3] = *(uint *)((int)this + 0x178);
          return 1;
        case 0xc5d:
          uVar3 = *(uint *)((int)this + 0x100);
          break;
        case 0xc5e:
          uVar3 = 0xffffffff;
          pcVar12 = *(char **)((int)this + 0x40c);
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          *param_2 = ~uVar3 - 1;
          return 1;
        case 0xc5f:
          pHVar2 = GetDC((HWND)0x0);
          uVar3 = GetDeviceCaps(pHVar2,0xc);
          *param_2 = uVar3;
          ReleaseDC((HWND)0x0,pHVar2);
          return local_34;
        case 0xc60:
          uVar3 = *(uint *)((int)this + 0x6c);
          break;
        case 0xc61:
          uVar3 = *(uint *)((int)this + 0x68);
        }
      }
    }
    else if (param_1 == 0x10000c39) {
      uVar3 = *(uint *)((int)this + 0x4f8);
    }
    else if (param_1 == 0x20000c36) {
      uVar3 = *(uint *)((int)this + 0x4ec);
    }
    else {
      if (param_1 != 0x20000c39) goto switchD_100228d0_caseD_3ec;
      uVar3 = *(uint *)((int)this + 0x4f0);
    }
    *param_2 = uVar3;
    return local_34;
  }
  if (param_1 == 0x3fc) {
    *param_2 = 1;
    return 1;
  }
  switch(param_1) {
  case 0x3ea:
    pHVar2 = GetDC((HWND)0x0);
    uVar3 = GetDeviceCaps(pHVar2,8);
    *param_2 = uVar3;
    ReleaseDC((HWND)0x0,pHVar2);
    return local_34;
  case 0x3eb:
    pHVar2 = GetDC((HWND)0x0);
    uVar3 = GetDeviceCaps(pHVar2,10);
    *param_2 = uVar3;
    ReleaseDC((HWND)0x0,pHVar2);
    return local_34;
  case 0x3ed:
    *param_2 = 3;
    return 1;
  case 0x3ee:
    *param_2 = 3;
    return 1;
  case 0x3ef:
    *param_2 = 8;
    return 1;
  }
switchD_100228d0_caseD_3ec:
  *param_2 = 0;
  return 0;
}


// ---- FUN_100233b0 @ 100233b0

int __thiscall
FUN_100233b0(void *this,undefined4 param_1,IMAGE_DOS_HEADER *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int *piVar2;
  HMENU hMenu;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  code *pcVar6;
  int *piVar7;
  void *pvVar8;
  HWND pHVar9;
  DWORD DVar10;
  HWND pHVar11;
  HDC hDC;
  BOOL BVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  IMAGE_DOS_HEADER *pIVar18;
  HRGN *ppHVar19;
  undefined4 *puVar20;
  tagRECT *ptVar21;
  undefined4 uVar22;
  HGDIOBJ pvVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  IMAGE_DOS_HEADER *local_88;
  int local_84;
  tagRECT local_80 [4];
  HRGN local_40 [2];
  tagPOINT local_38;
  int local_30;
  int local_2c;
  
  bVar4 = true;
  local_84 = 1;
  local_88 = (IMAGE_DOS_HEADER *)0x0;
  if ((param_3 == 0) || (*(int *)((int)this + 0x9c) != -0x270d)) {
    bVar4 = false;
  }
  InterlockedIncrement(&DAT_10032ed0);
  switch(param_1) {
  case 0xbcb:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x640);
    *(IMAGE_DOS_HEADER **)((int)this + 0x640) = param_2;
    break;
  default:
    local_84 = 0;
    break;
  case 0xbd0:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x49c);
    piVar1 = (int *)((int)this + 0x590);
    *(IMAGE_DOS_HEADER **)((int)this + 0x49c) = param_2;
    if (((uint)param_2 & 0x400) == 0) {
      *piVar1 = 0xb;
    }
    else {
      *piVar1 = 10;
    }
    piVar2 = (int *)((int)this + 0x584);
    if (((uint)param_2 & 0x800) == 0) {
      *piVar2 = 2;
    }
    else {
      *piVar2 = 0;
    }
    if (((uint)param_2 & 0x1000) == 0) {
      if (((uint)param_2 & 0x2000) == 0) {
        *(undefined4 *)((int)this + 0x588) = 0;
      }
      else {
        *(undefined4 *)((int)this + 0x588) = 2;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x588) = 1;
    }
    piVar7 = (int *)((int)this + 0x588);
    if (((*piVar2 == 0) || (*piVar7 == 0)) &&
       (((*(int *)((int)this + 0x5a4) == 0 ||
         ((((*(int *)((int)this + 0x5a8) == 0 || (*(int *)((int)this + 0x5ac) == 0)) ||
           (*(int *)((int)this + 0x5b0) == 0)) ||
          ((*(int *)((int)this + 0x5b4) == 0 || (*(int *)((int)this + 0x5b8) == 0)))))) ||
        (*(int *)((int)this + 0x5bc) == 0)))) {
      *piVar2 = 2;
      *piVar7 = 1;
    }
    *piVar2 = 2;
    if (8 < *(int *)((int)this + 0x288)) {
      *piVar7 = 2;
    }
    *(undefined4 *)((int)this + 0x49c) = 0;
    if (*piVar1 == 10) {
      *(undefined4 *)((int)this + 0x49c) = 0x400;
    }
    if (*piVar7 == 1) {
      *(uint *)((int)this + 0x49c) = *(uint *)((int)this + 0x49c) | 0x1000;
    }
    if (*piVar7 == 2) {
      *(uint *)((int)this + 0x49c) = *(uint *)((int)this + 0x49c) | 0x2000;
    }
    if (*(int *)((int)this + 0x594) == 1) {
      *(uint *)((int)this + 0x49c) = *(uint *)((int)this + 0x49c) | 0x20000;
    }
    if ((bVar4) && (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbd1:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x124);
    *(IMAGE_DOS_HEADER **)((int)this + 0x124) = param_2;
    break;
  case 0xbd2:
    if (param_2 == &IMAGE_DOS_HEADER_10000000) {
      param_2 = (IMAGE_DOS_HEADER *)0xffffd8f3;
    }
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x128);
    *(IMAGE_DOS_HEADER **)((int)this + 0x128) = param_2;
    if ((bVar4) && (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbeb:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x84);
    hMenu = *(HMENU *)((int)this + 0x544);
    *(IMAGE_DOS_HEADER **)((int)this + 0x84) = param_2;
    pcVar17 = AppendMenuA_exref;
    pcVar6 = DeleteMenu_exref;
    if (param_2 == (IMAGE_DOS_HEADER *)0xffffd8f1) {
      if (hMenu != (HMENU)0x0) {
        uVar26 = 0;
        DeleteMenu(hMenu,10,0);
        DeleteMenu(*(HMENU *)((int)this + 0x544),0x14,0);
        uVar25 = 0;
        uVar22 = *(undefined4 *)((int)this + 0x544);
        uVar24 = 0x1e;
        pcVar17 = pcVar6;
LAB_100236cf:
        (*pcVar17)(uVar22,uVar24,uVar25,uVar26);
      }
    }
    else if (hMenu != (HMENU)0x0) {
      AppendMenuA(hMenu,4,10,*(LPCSTR *)((int)this + 0x54c));
      AppendMenuA(*(HMENU *)((int)this + 0x544),4,0x14,*(LPCSTR *)((int)this + 0x550));
      uVar26 = *(undefined4 *)((int)this + 0x554);
      uVar22 = *(undefined4 *)((int)this + 0x544);
      uVar25 = 0x1e;
      uVar24 = 4;
      goto LAB_100236cf;
    }
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      if (*(int *)((int)this + 0x42c) == 0) break;
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    DrawMenuBar(pHVar11);
    break;
  case 0xbec:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x88);
    *(undefined4 *)((int)this + 0x88) = 0xffffd8f3;
    if (param_2 != (IMAGE_DOS_HEADER *)0x0) {
      if (param_2 == (IMAGE_DOS_HEADER *)0x1) {
        param_2 = (IMAGE_DOS_HEADER *)0xffffd8f3;
      }
      *(IMAGE_DOS_HEADER **)((int)this + 0x88) = param_2;
      break;
    }
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      if (*(int *)((int)this + 0x42c) != 0) {
        pHVar11 = *(HWND *)((int)this + 0x42c);
        goto LAB_10023740;
      }
    }
    else {
LAB_10023740:
      BVar12 = IsIconic(pHVar11);
      if (BVar12 != 0) {
        GetCursorPos((LPPOINT)local_80);
        pHVar11 = *(HWND *)((int)this + 0x43c);
        if (pHVar11 == (HWND)0x0) {
          pHVar11 = *(HWND *)((int)this + 0x42c);
        }
        SendMessageA(pHVar11,0x112,0xf120,local_80[0].top << 0x10 | local_80[0].left & 0xffffU);
      }
    }
    FUN_100273c0(this,5,1,1);
    *(undefined4 *)((int)this + 0x88) = 0;
    break;
  case 0xbed:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x8c);
    pHVar11 = *(HWND *)((int)this + 0x43c);
    *(undefined4 *)((int)this + 0x460) = DAT_10032ed0;
    if ((pHVar11 != (HWND)0x0) || (*(int *)((int)this + 0x42c) != 0)) {
      if (param_2 == (IMAGE_DOS_HEADER *)0xffffd8f1) {
        if (pHVar11 == (HWND)0x0) {
          pHVar11 = *(HWND *)((int)this + 0x42c);
        }
        uVar15 = GetWindowLongA(pHVar11,-0x14);
        *(uint *)((int)this + 0x45c) = (-(uint)((uVar15 & 8) == 0) & 0xfffffffe) - 0x270d;
        pHVar11 = *(HWND *)((int)this + 0x43c);
        if (pHVar11 == (HWND)0x0) {
          pHVar11 = *(HWND *)((int)this + 0x42c);
        }
        SetWindowPos(pHVar11,(HWND)0x0,0,0,0,0,0x13);
        pHVar11 = *(HWND *)((int)this + 0x43c);
        if (pHVar11 == (HWND)0x0) {
          pHVar11 = *(HWND *)((int)this + 0x42c);
        }
        SetWindowPos(pHVar11,(HWND)0xffffffff,0,0,0,0,0x13);
        iVar14 = *(int *)((int)this + 0x434);
        if (((iVar14 != 0) && (*(int *)((int)this + 0x43c) != 0)) &&
           (*(int *)((int)this + 0x43c) != iVar14)) {
          pvVar8 = FUN_1001efb0(iVar14,0xbed,0xffffd8f1,0xffffffff,2);
          uVar15 = GetWindowLongA(*(HWND *)((int)this + 0x434),-0x14);
          if (pvVar8 == (void *)0x0) {
            iVar14 = (-(uint)((uVar15 & 8) == 0) & 0xfffffffe) - 0x270d;
          }
          else {
            iVar14 = *(int *)((int)pvVar8 + 0x458);
          }
          *(int *)((int)this + 0x458) = iVar14;
          SetWindowPos(*(HWND *)((int)this + 0x434),(HWND)0xffffffff,0,0,0,0,0x13);
        }
        *(undefined4 *)((int)this + 0x8c) = 0xffffd8f1;
      }
      else {
        pHVar9 = *(HWND *)((int)this + 0x434);
        *(IMAGE_DOS_HEADER **)((int)this + 0x8c) = param_2;
        if (((pHVar9 != (HWND)0x0) && (pHVar11 != (HWND)0x0)) && (pHVar11 != pHVar9)) {
          pvVar8 = FUN_1001efb0((int)pHVar9,0xbed,0xffffd8f1,0xffffffff,2);
          if ((pvVar8 == (void *)0x0) && (*(int *)((int)this + 0x458) == -9999)) {
            SetWindowPos(*(HWND *)((int)this + 0x434),(HWND)0xfffffffe,0,0,0,0,0x13);
          }
          else {
            *(undefined4 *)((int)this + 0x458) = 0xffffd8f1;
          }
        }
        if (*(int *)((int)this + 0x45c) == -9999) {
          pHVar11 = *(HWND *)((int)this + 0x43c);
          if (pHVar11 == (HWND)0x0) {
            pHVar11 = *(HWND *)((int)this + 0x42c);
          }
          SetWindowPos(pHVar11,(HWND)0xfffffffe,0,0,0,0,0x13);
        }
        else {
          *(undefined4 *)((int)this + 0x45c) = 0xffffd8f1;
        }
      }
    }
    break;
  case 0xbee:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x90);
    *(IMAGE_DOS_HEADER **)((int)this + 0x90) = param_2;
    *(undefined4 *)((int)this + 0xd0) = 3;
    *(undefined4 *)((int)this + 0x94) = 0xffffd8f3;
    if (local_88 != param_2) {
      FUN_100273c0(this,4,1,0);
    }
    break;
  case 0xbef:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x98);
    *(IMAGE_DOS_HEADER **)((int)this + 0x98) = param_2;
    FUN_1002d840((int)this);
    if (((*(int *)((int)this + 0x488) == -0x270d) && (bVar4)) &&
       (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbf0:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xa8);
    *(IMAGE_DOS_HEADER **)((int)this + 0xa8) = param_2;
    if (param_2 != (IMAGE_DOS_HEADER *)0xffffd8f3) {
      iVar14 = *(int *)((int)this + 0x2a8);
      if (iVar14 != 0) {
        *(undefined4 *)((int)this + 0x2a8) = 0;
        *(int *)((int)this + 0x2a0) = *(int *)((int)this + 0x2a0) - iVar14;
      }
      iVar3 = *(int *)((int)this + 0x2ac);
      if (iVar3 != 0) {
        *(undefined4 *)((int)this + 0x2ac) = 0;
        *(int *)((int)this + 0x2a4) = *(int *)((int)this + 0x2a4) - iVar3;
      }
      if ((iVar3 != 0 || iVar14 != 0) && (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
        if ((*(int *)((int)this + 0x434) != 0) ||
           (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d)) {
          BVar12 = 1;
        }
        InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
        if (*(int *)((int)this + 0x100) == -0x270d) {
          UpdateWindow(*(HWND *)((int)this + 0x42c));
        }
        else if ((*(int *)((int)this + 0x100) == 0x10000000) &&
                (DVar10 = GetCurrentThreadId(), DVar10 == *(DWORD *)((int)this + 0x41c))) {
          UpdateWindow(*(HWND *)((int)this + 0x42c));
        }
      }
      break;
    }
    pHVar11 = *(HWND *)((int)this + 0x434);
    if (pHVar11 == (HWND)0x0) {
LAB_10023ad0:
      pHVar9 = *(HWND *)((int)this + 0x43c);
      if (pHVar9 == (HWND)0x0) goto LAB_10023ada;
LAB_10023aee:
      BVar12 = IsIconic(pHVar9);
      if (BVar12 != 0) {
        GetCursorPos((LPPOINT)local_80);
        pHVar11 = *(HWND *)((int)this + 0x43c);
        if (pHVar11 == (HWND)0x0) {
          pHVar11 = *(HWND *)((int)this + 0x42c);
        }
        SendMessageA(pHVar11,0x112,0xf120,local_80[0].top << 0x10 | local_80[0].left & 0xffffU);
      }
    }
    else {
      pHVar9 = (HWND)0x0;
      if (*(HWND *)((int)this + 0x43c) != (HWND)0x0) {
        if ((*(HWND *)((int)this + 0x43c) != pHVar11) && (BVar12 = IsIconic(pHVar11), BVar12 != 0))
        {
          GetCursorPos((LPPOINT)local_80);
          SendMessageA(*(HWND *)((int)this + 0x434),0x112,0xf120,
                       local_80[0].top << 0x10 | local_80[0].left & 0xffffU);
        }
        goto LAB_10023ad0;
      }
LAB_10023ada:
      if (*(int *)((int)this + 0x42c) != 0) {
        if (pHVar9 == (HWND)0x0) {
          pHVar9 = *(HWND *)((int)this + 0x42c);
        }
        goto LAB_10023aee;
      }
    }
    FUN_100273c0(this,4,1,1);
    break;
  case 0xbf1:
    uVar15 = *(uint *)((int)this + 0x564) & 0x400000;
    local_88 = (IMAGE_DOS_HEADER *)((-(uint)(uVar15 == 0) & 0xfffffffe) - 0x270d);
    if (param_2 == (IMAGE_DOS_HEADER *)0xffffd8f3) {
      if (uVar15 == 0) {
        FUN_1002ca40((int)this);
      }
    }
    else if (uVar15 != 0) {
      FUN_1002ca40((int)this);
    }
    break;
  case 0xbf2:
    iVar14 = *(int *)((int)this + 0x548);
    local_88 = (IMAGE_DOS_HEADER *)((-(uint)(iVar14 == 0) & 0xfffffffe) - 0x270d);
    if (param_2 == (IMAGE_DOS_HEADER *)0xffffd8f3) {
      if (iVar14 == 0) {
        FUN_1002c950((int)this);
      }
    }
    else if (iVar14 != 0) {
      FUN_1002c950((int)this);
    }
    break;
  case 0xbf3:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xa0);
    *(IMAGE_DOS_HEADER **)((int)this + 0xa0) = param_2;
    FUN_1002cc20(this,0);
    break;
  case 0xbf4:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xa4);
    *(IMAGE_DOS_HEADER **)((int)this + 0xa4) = param_2;
    FUN_1002cc20(this,0);
    break;
  case 0xbf5:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xac);
    *(IMAGE_DOS_HEADER **)((int)this + 0xac) = param_2;
    break;
  case 0xbf6:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xb0);
    *(IMAGE_DOS_HEADER **)((int)this + 0xb0) = param_2;
    FUN_1002cce0((int)this);
    break;
  case 0xbf7:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xb4);
    *(IMAGE_DOS_HEADER **)((int)this + 0xb4) = param_2;
    FUN_1002cce0((int)this);
    break;
  case 0xbf8:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xb8);
    *(IMAGE_DOS_HEADER **)((int)this + 0xb8) = param_2;
    FUN_1002cce0((int)this);
    break;
  case 0xbf9:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xbc);
    *(IMAGE_DOS_HEADER **)((int)this + 0xbc) = param_2;
    if ((bVar4) && (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbfa:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x168);
    *(IMAGE_DOS_HEADER **)((int)this + 0x168) = param_2;
    if (((bVar4) && (*(int *)((int)this + 0xbc) == -0x270d)) &&
       (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbfb:
    local_88 = (IMAGE_DOS_HEADER *)(-(uint)(*(int *)((int)this + 0x58c) == 0xd) & 0x200);
    if (*(int *)((int)this + 0x598) == 4) {
      local_88 = (IMAGE_DOS_HEADER *)((uint)local_88 | 0x100000);
    }
    *(undefined4 *)((int)this + 0x58c) = 0xd;
    if (((uint)param_2 & 0x200) == 0) {
      *(undefined4 *)((int)this + 0x58c) = 0xc;
    }
    *(undefined4 *)((int)this + 0x598) = 4;
    if (((uint)param_2 & 0x100000) == 0) {
      *(undefined4 *)((int)this + 0x598) = 0;
    }
    if (local_88 != param_2) {
      FUN_10024e50(this);
    }
    if (bVar4) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbfc:
    iVar14 = *(int *)((int)this + 0x58c);
    *(undefined4 *)((int)this + 0x58c) = 0xd;
    local_88 = (IMAGE_DOS_HEADER *)((-(uint)(iVar14 == 0xd) & 2) - 9999);
    if (param_2 != (IMAGE_DOS_HEADER *)0xffffd8f3) {
      *(undefined4 *)((int)this + 0x58c) = 0xc;
    }
    if (local_88 != param_2) {
      FUN_10024e50(this);
    }
    if (bVar4) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbfd:
    iVar14 = *(int *)((int)this + 0x598);
    *(undefined4 *)((int)this + 0x598) = 4;
    local_88 = (IMAGE_DOS_HEADER *)((-(uint)(iVar14 == 4) & 2) - 9999);
    if (param_2 != (IMAGE_DOS_HEADER *)0xffffd8f3) {
      *(undefined4 *)((int)this + 0x598) = 0;
    }
    if (local_88 != param_2) {
      FUN_10024e50(this);
    }
    if (bVar4) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xbfe:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x59c);
    *(IMAGE_DOS_HEADER **)((int)this + 0x59c) = param_2;
    break;
  case 0xbff:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x5a0);
    *(IMAGE_DOS_HEADER **)((int)this + 0x5a0) = param_2;
    break;
  case 0xc00:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xc4);
    *(IMAGE_DOS_HEADER **)((int)this + 0xc4) = param_2;
    break;
  case 0xc01:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x9c);
    *(IMAGE_DOS_HEADER **)((int)this + 0x9c) = param_2;
    break;
  case 0xc02:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xc0);
    *(IMAGE_DOS_HEADER **)((int)this + 0xc0) = param_2;
    break;
  case 0xc03:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 200);
    *(IMAGE_DOS_HEADER **)((int)this + 200) = param_2;
    if ((param_2 == (IMAGE_DOS_HEADER *)0xffffffff) || (param_2 == (IMAGE_DOS_HEADER *)0x0)) {
      *(undefined4 *)((int)this + 200) = 1;
    }
    if (*(int *)((int)this + 200) == 1) {
      *(undefined4 *)((int)this + 0x468) = 0;
    }
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      if (*(int *)((int)this + 0x42c) == 0) break;
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    GetWindowRect(pHVar11,local_80);
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    FUN_10028de0(pHVar11,(LPPOINT)local_80,2);
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    SetWindowPos(pHVar11,(HWND)0x0,local_80[0].left,local_80[0].top,0,0,0x15);
    break;
  case 0xc04:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xcc);
    *(IMAGE_DOS_HEADER **)((int)this + 0xcc) = param_2;
    if ((param_2 == (IMAGE_DOS_HEADER *)0xffffffff) || (param_2 == (IMAGE_DOS_HEADER *)0x0)) {
      *(undefined4 *)((int)this + 0xcc) = 1;
    }
    if (*(int *)((int)this + 0xcc) == 1) {
      *(undefined4 *)((int)this + 0x46c) = 0;
    }
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      if (*(int *)((int)this + 0x42c) == 0) break;
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    GetWindowRect(pHVar11,local_80);
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    FUN_10028de0(pHVar11,(LPPOINT)local_80,2);
    pHVar11 = *(HWND *)((int)this + 0x43c);
    if (pHVar11 == (HWND)0x0) {
      pHVar11 = *(HWND *)((int)this + 0x42c);
    }
    SetWindowPos(pHVar11,(HWND)0x0,local_80[0].left,local_80[0].top,0,0,0x15);
    break;
  case 0xc05:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xd4);
    *(IMAGE_DOS_HEADER **)((int)this + 0xd4) = param_2;
    break;
  case 0xc06:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xd8);
    *(IMAGE_DOS_HEADER **)((int)this + 0xd8) = param_2;
    FUN_1002d840((int)this);
    if (((*(int *)((int)this + 0x488) == -0x270d) && (bVar4)) &&
       (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc07:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xdc);
    *(IMAGE_DOS_HEADER **)((int)this + 0xdc) = param_2;
    FUN_1002d840((int)this);
    if (((*(int *)((int)this + 0x490) == -0x270d) && (bVar4)) &&
       (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc08:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xe0);
    *(IMAGE_DOS_HEADER **)((int)this + 0xe0) = param_2;
    break;
  case 0xc09:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xe4);
    *(IMAGE_DOS_HEADER **)((int)this + 0xe4) = param_2;
    break;
  case 0xc0a:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xe8);
    *(IMAGE_DOS_HEADER **)((int)this + 0xe8) = param_2;
    if (((param_2 == (IMAGE_DOS_HEADER *)0xffffd8f1) && (bVar4)) &&
       (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc0b:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xec);
    *(char **)((int)this + 0xec) = local_88->e_magic + 1;
    if ((param_2 != (IMAGE_DOS_HEADER *)0x0) && (param_2 != &IMAGE_DOS_HEADER_10000000)) {
      pIVar18 = param_2;
      ppHVar19 = local_40;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        *ppHVar19 = *(HRGN *)pIVar18;
        pIVar18 = (IMAGE_DOS_HEADER *)&pIVar18->e_cp;
        ppHVar19 = ppHVar19 + 1;
      }
      ppHVar19 = local_40;
      ptVar21 = local_80;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        ptVar21->left = (LONG)*ppHVar19;
        ppHVar19 = ppHVar19 + 1;
        ptVar21 = (tagRECT *)&ptVar21->top;
      }
    }
    if ((param_2 == (IMAGE_DOS_HEADER *)0x0) || (param_2 == &IMAGE_DOS_HEADER_10000000)) {
      FUN_10028e40(this,(HRGN)0x0,(HPALETTE)0x0,*(DWORD *)((int)this + 0x13c),
                   *(DWORD *)((int)this + 0x140),1,(HDC)0x0);
    }
    else {
      hDC = (HDC)local_80[0].left;
      if ((HDC)local_80[0].left == (HDC)0x0) {
        hDC = GetDC(*(HWND *)((int)this + 0x42c));
      }
      LPtoDP((HDC)local_80[0].left,&local_38,2);
      FUN_10028e40(this,(HRGN)local_38.x,(HPALETTE)local_38.y,local_30 - local_38.x,
                   local_2c - local_38.y,0,hDC);
      if ((HDC)local_80[0].left == (HDC)0x0) {
        ReleaseDC(*(HWND *)((int)this + 0x42c),hDC);
      }
    }
    *(int *)((int)this + 0xec) = *(int *)((int)this + 0xec) + -1;
    break;
  case 0xc0c:
    local_88 = param_2;
    *(IMAGE_DOS_HEADER **)((int)this + 0xf4) = param_2;
    FUN_10017980(0,8,param_2,1);
    break;
  case 0xc0d:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xf8);
    *(IMAGE_DOS_HEADER **)((int)this + 0xf8) = param_2;
    if (((param_2 == (IMAGE_DOS_HEADER *)0xffffd8f1) && (bVar4)) &&
       (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc0f:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xfc);
    *(IMAGE_DOS_HEADER **)((int)this + 0xfc) = param_2;
    break;
  case 0xc10:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x1d4);
    *(IMAGE_DOS_HEADER **)((int)this + 0x1d4) = param_2;
    break;
  case 0xc11:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x1d8);
    *(IMAGE_DOS_HEADER **)((int)this + 0x1d8) = param_2;
    break;
  case 0xc12:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x104);
    *(IMAGE_DOS_HEADER **)((int)this + 0x104) = param_2;
    break;
  case 0xc13:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x108);
    *(IMAGE_DOS_HEADER **)((int)this + 0x108) = param_2;
    if ((bVar4) && (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc14:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x10c);
    *(IMAGE_DOS_HEADER **)((int)this + 0x10c) = param_2;
    if ((bVar4) && (*(int *)((int)this + 0x42c) != 0)) {
      FUN_10021c80(this,(HRGN)0x0,(HPALETTE)0x0,*(uint *)((int)this + 0x13c),
                   *(DWORD *)((int)this + 0x140));
    }
    break;
  case 0xc15:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x4b0);
    *(IMAGE_DOS_HEADER **)((int)this + 0x4b0) = param_2;
    if ((param_2 != (IMAGE_DOS_HEADER *)0x0) &&
       (*(void **)(param_2->e_program + 0x2c) != (void *)0x0)) {
      FUN_10011550(*(void **)(param_2->e_program + 0x2c),*(undefined4 *)((int)this + 0x42c));
    }
    iVar14 = *(int *)((int)this + 0x4b0);
    if (iVar14 != 0) {
      if (*(int *)(iVar14 + 0x6c) == 0) {
        pvVar23 = *(HGDIOBJ *)(iVar14 + 0x54);
        iVar14 = *(int *)(iVar14 + 0x58);
      }
      else {
        pvVar23 = (HGDIOBJ)0x0;
        iVar14 = *(int *)(*(int *)(iVar14 + 0x6c) + 0x38);
      }
      FUN_1002c3b0(this,iVar14,pvVar23,0,0,0);
    }
    if ((bVar4) && (*(int *)((int)this + 0x42c) != 0)) {
      FUN_10021c80(this,(HRGN)0x0,(HPALETTE)0x0,*(uint *)((int)this + 0x13c),
                   *(DWORD *)((int)this + 0x140));
    }
    break;
  case 0xc16:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x114);
    *(IMAGE_DOS_HEADER **)((int)this + 0x114) = param_2;
    break;
  case 0xc17:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x4bc);
    *(IMAGE_DOS_HEADER **)((int)this + 0x4bc) = param_2;
    if ((param_2 != (IMAGE_DOS_HEADER *)0x0) &&
       (*(void **)(param_2->e_program + 0x2c) != (void *)0x0)) {
      FUN_10011550(*(void **)(param_2->e_program + 0x2c),*(undefined4 *)((int)this + 0x42c));
    }
    iVar14 = *(int *)((int)this + 0x4bc);
    if (iVar14 != 0) {
      if (*(int *)(iVar14 + 0x6c) == 0) {
        pvVar23 = *(HGDIOBJ *)(iVar14 + 0x54);
        iVar14 = *(int *)(iVar14 + 0x58);
      }
      else {
        pvVar23 = (HGDIOBJ)0x0;
        iVar14 = *(int *)(*(int *)(iVar14 + 0x6c) + 0x38);
      }
      FUN_1002c3b0(this,iVar14,pvVar23,1,10,0xf5);
    }
    if ((bVar4) && (*(int *)((int)this + 0x42c) != 0)) {
      FUN_10021c80(this,(HRGN)0x0,(HPALETTE)0x0,*(uint *)((int)this + 0x13c),
                   *(DWORD *)((int)this + 0x140));
    }
    break;
  case 0xc18:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x110);
    *(IMAGE_DOS_HEADER **)((int)this + 0x110) = param_2;
    if ((bVar4) && (*(int *)((int)this + 0x42c) != 0)) {
      FUN_1002a540(this,0,0,*(int *)((int)this + 0x13c),*(int *)((int)this + 0x140),3);
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc19:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x4b4);
    *(IMAGE_DOS_HEADER **)((int)this + 0x4b4) = param_2;
    if ((bVar4) && (*(HWND *)((int)this + 0x42c) != (HWND)0x0)) {
      if ((*(int *)((int)this + 0x434) != 0) || (BVar12 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar12 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar12);
    }
    break;
  case 0xc1a:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xf0);
    FUN_1002a540(this,*(int *)param_2,*(int *)&param_2->e_cp,
                 *(int *)&param_2->e_cparhdr - *(int *)param_2,
                 *(int *)&param_2->e_maxalloc - *(int *)&param_2->e_cp,1);
    break;
  case 0xc1b:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xf0);
    FUN_1002a540(this,*(int *)param_2,*(int *)&param_2->e_cp,
                 *(int *)&param_2->e_cparhdr - *(int *)param_2,
                 *(int *)&param_2->e_maxalloc - *(int *)&param_2->e_cp,2);
    break;
  case 0xc1c:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0xf0);
    FUN_1002a540(this,*(int *)param_2,*(int *)&param_2->e_cp,
                 *(int *)&param_2->e_cparhdr - *(int *)param_2,
                 *(int *)&param_2->e_maxalloc - *(int *)&param_2->e_cp,3);
    break;
  case 0xc1d:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x118);
    *(IMAGE_DOS_HEADER **)((int)this + 0x118) = param_2;
    break;
  case 0xc1e:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x11c);
    *(IMAGE_DOS_HEADER **)((int)this + 0x11c) = param_2;
    break;
  case 0xc24:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 100);
    *(IMAGE_DOS_HEADER **)((int)this + 100) = param_2;
    break;
  case 0xc2f:
    if (param_2 != (IMAGE_DOS_HEADER *)0x0) {
      if (*(void **)((int)this + 0x40c) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0x40c));
        *(undefined4 *)((int)this + 0x40c) = 0;
      }
      uVar15 = 0xffffffff;
      pIVar18 = param_2;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar5 = pIVar18->e_magic;
        pIVar18 = (IMAGE_DOS_HEADER *)(pIVar18->e_magic + 1);
      } while (*pcVar5 != '\0');
      puVar13 = operator_new(~uVar15);
      *(undefined4 **)((int)this + 0x40c) = puVar13;
      if (puVar13 != (undefined4 *)0x0) {
        uVar15 = 0xffffffff;
        do {
          pIVar18 = param_2;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pIVar18 = (IMAGE_DOS_HEADER *)(param_2->e_magic + 1);
          pcVar5 = param_2->e_magic;
          param_2 = pIVar18;
        } while (*pcVar5 != '\0');
        uVar15 = ~uVar15;
        puVar20 = (undefined4 *)((int)pIVar18 - uVar15);
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar13 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar20;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        pHVar11 = *(HWND *)((int)this + 0x43c);
        if (pHVar11 == (HWND)0x0) {
          if (*(int *)((int)this + 0x42c) == 0) break;
          pHVar11 = *(HWND *)((int)this + 0x42c);
        }
        SetWindowTextA(pHVar11,*(LPCSTR *)((int)this + 0x40c));
      }
    }
    break;
  case 0xc53:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x80);
    *(IMAGE_DOS_HEADER **)((int)this + 0x80) = param_2;
    break;
  case 0xc57:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x644);
    *(IMAGE_DOS_HEADER **)((int)this + 0x644) = param_2;
    if ((local_88 == (IMAGE_DOS_HEADER *)0xffffd8f3) && (param_2 == (IMAGE_DOS_HEADER *)0xffffd8f1))
    {
      PulseEvent(*(HANDLE *)((int)this + 0x648));
    }
    break;
  case 0xc58:
    SetEvent(*(HANDLE *)((int)this + 0x648));
    break;
  case 0xc5c:
    if (param_2 == (IMAGE_DOS_HEADER *)0x0) {
      *(undefined4 *)((int)this + 0x16c) = 0;
      *(undefined4 *)((int)this + 0x170) = 0;
      *(undefined4 *)((int)this + 0x174) = 0;
      *(undefined4 *)((int)this + 0x178) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)param_2;
      *(undefined4 *)((int)this + 0x170) = *(undefined4 *)&param_2->e_cp;
      *(undefined4 *)((int)this + 0x174) = *(undefined4 *)&param_2->e_cparhdr;
      *(undefined4 *)((int)this + 0x178) = *(undefined4 *)&param_2->e_maxalloc;
    }
    break;
  case 0xc5d:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x100);
    *(IMAGE_DOS_HEADER **)((int)this + 0x100) = param_2;
    break;
  case 0xc60:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x6c);
    *(IMAGE_DOS_HEADER **)((int)this + 0x6c) = param_2;
    break;
  case 0xc61:
    local_88 = *(IMAGE_DOS_HEADER **)((int)this + 0x68);
    *(IMAGE_DOS_HEADER **)((int)this + 0x68) = param_2;
  }
  if ((local_84 == 1) && (param_4 != (uint *)0x0)) {
    *param_4 = (uint)local_88;
  }
  return local_84;
}


// ---- FUN_10024cb0 @ 10024cb0

bool __thiscall
FUN_10024cb0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int local_18;
  int local_14;
  RECT local_10;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (0 < param_3)) && (0 < param_4)) {
    iVar2 = GetSystemMetrics(0);
    if (param_1 + param_3 <= iVar2) {
      iVar2 = GetSystemMetrics(1);
      if (((((param_2 + param_4 <= iVar2) && (-1 < param_5)) &&
           ((-1 < param_6 &&
            ((param_3 + param_5 <= *(int *)((int)this + 0x13c) &&
             (param_4 + param_6 <= *(int *)((int)this + 0x140))))))) &&
          (*(int *)((int)this + 0x160) != 0)) && (*(int *)((int)this + 0x4a0) != 0)) {
        local_10.left = param_1;
        local_10.right = param_1 + param_3;
        local_10.top = param_2;
        local_18 = param_5;
        local_14 = param_6;
        local_10.bottom = param_2 + param_4;
        iVar2 = FUN_10025a20(this,0);
        if ((iVar2 == 0) || (iVar2 == 3)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 0x594);
        }
        bVar1 = FUN_1002d8f0(&local_10,*(undefined4 **)((int)this + 0x4a0),
                             *(int *)((int)this + 0x160),*(HPALETTE *)((int)this + 0x4d0),&local_18,
                             iVar2);
        return bVar1;
      }
    }
  }
  return false;
}


// ---- FUN_10024de0 @ 10024de0

undefined4 __thiscall FUN_10024de0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (0 < param_3)) && (0 < param_4)) {
    *(int *)((int)this + 0x2f4) = param_1;
    *(int *)((int)this + 0x2f8) = param_2;
    *(int *)((int)this + 0x2fc) = param_3;
    *(int *)((int)this + 0x300) = param_4;
    if (*(int *)((int)this + 0xa8) == -0x270d) {
      FUN_100273c0(this,4,1,0);
    }
    return 1;
  }
  return 0;
}


// ---- FUN_10024e50 @ 10024e50

void __fastcall FUN_10024e50(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x14c);
  iVar3 = 1 << ((byte)iVar1 & 0x1f);
  if (iVar1 == 0x10) {
    iVar3 = 3;
  }
  else if (8 < iVar1) {
    iVar3 = 0;
  }
  iVar1 = FUN_10025a20(param_1,0);
  if (((iVar1 == 0) || (iVar1 == 3)) || (iVar1 = 2, *(int *)((int)param_1 + 0x594) == 0)) {
    iVar1 = 4;
  }
  iVar2 = FUN_10025a20(param_1,0);
  if (((iVar2 != 0) && (iVar2 != 3)) && (*(int *)((int)param_1 + 0x594) == 1)) {
    FUN_1002ce70(param_1,*(int *)((int)param_1 + 0x4a0),iVar3,iVar1);
  }
  iVar1 = FUN_10025a20(param_1,0);
  if ((iVar1 == 1) && (*(int *)((int)param_1 + 0x4a8) != 0)) {
    iVar1 = FUN_10025a20(param_1,0);
    if ((iVar1 == 0) || ((iVar1 == 3 || (iVar1 = 2, *(int *)((int)param_1 + 0x594) == 0)))) {
      iVar1 = 4;
    }
    FUN_1002ce70(param_1,*(int *)((int)param_1 + 0x4a8),0x100,iVar1);
  }
  FUN_1002b090(param_1);
  return;
}


// ---- FUN_10024f30 @ 10024f30

void FUN_10024f30(DWORD *param_1)

{
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  param_1[1] = local_94.dwMinorVersion;
  *param_1 = local_94.dwMajorVersion;
  param_1[2] = local_94.dwBuildNumber;
  if (local_94.dwPlatformId == 0) {
    param_1[3] = 2;
    return;
  }
  if (local_94.dwPlatformId != 1) {
    if (local_94.dwPlatformId != 2) {
      param_1[3] = 0;
      return;
    }
    param_1[3] = 4;
    return;
  }
  param_1[3] = 3;
  return;
}


// ---- FUN_10024fc0 @ 10024fc0

void __thiscall FUN_10024fc0(void *this,HWND param_1,uint param_2,int param_3)

{
  bool bVar1;
  int local_4;
  
  bVar1 = false;
  if (param_1 != (HWND)0x0) {
    if (param_3 == 0) {
      local_4 = IsIconic(param_1);
    }
    else if (param_3 == 1) {
      local_4 = 0;
    }
    else if (param_3 == 2) {
      local_4 = 1;
    }
    if ((param_2 & 0x10000000) != 0) {
      bVar1 = *(int *)((int)this + 0x50c) == 1;
      *(int *)((int)this + 0x50c) = *(int *)((int)this + 0x50c) + -1;
    }
    if ((param_2 & 0x20000000) != 0) {
      if (*(int *)((int)this + 0x50c) == 0) {
        bVar1 = true;
      }
      *(int *)((int)this + 0x50c) = *(int *)((int)this + 0x50c) + 1;
    }
    if (local_4 == 0) {
      if (bVar1) {
        FUN_10025480(this,9,param_2,*(undefined4 *)((int)this + 0x1e4),
                     *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                     *(undefined4 *)((int)this + 0x1f0),0,0);
      }
    }
    else if (bVar1) {
      FUN_10025480(this,0xc,param_2,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),0,0);
      return;
    }
  }
  return;
}


// ---- FUN_100250da @ 100250da

void __thiscall
FUN_100250da(void *this,undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            int param_5)

{
  HWND in_EAX;
  bool in_ZF;
  int unaff_retaddr;
  
  if (!in_ZF) {
    if (param_5 == 0) {
      unaff_retaddr = IsIconic(in_EAX);
    }
    else if (param_5 == 1) {
      unaff_retaddr = 0;
    }
    else if (param_5 == 2) {
      unaff_retaddr = 1;
    }
    if (((param_3 & 0x10000000) != 0) && (param_4 != (undefined4 *)0x0)) {
      *(undefined4 *)((int)this + 0x17c) = *param_4;
      *(undefined4 *)((int)this + 0x194) = param_4[6];
      *(undefined4 *)((int)this + 0x180) = param_4[1];
    }
    if (unaff_retaddr == 0) {
      if (*(int *)((int)this + 0x4dc) != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x74) = *(undefined4 *)((int)this + 0x180);
      }
      FUN_10025480(this,0xb,param_3,*(undefined4 *)((int)this + 0x1e4),
                   *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                   *(undefined4 *)((int)this + 0x1f0),0,0);
    }
  }
  return;
}


// ---- FUN_100251a0 @ 100251a0

void __thiscall FUN_100251a0(void *this,HMENU param_1,uint param_2,uint param_3)

{
  HMENU pHVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = true;
  if (*(HWND *)((int)this + 0x434) == (HWND)0x0) {
    pHVar1 = *(HMENU *)((int)this + 0x544);
  }
  else {
    pHVar1 = GetMenu(*(HWND *)((int)this + 0x434));
  }
  sVar2 = (short)param_2;
  if (pHVar1 == (HMENU)0x0) {
LAB_10025279:
    if (param_1 != (HMENU)0x0) {
      if (*(int *)((int)this + 0x56c) == 0) {
        uVar3 = 0x100;
        param_3 = param_3 | 0x20000000;
        *(HMENU *)((int)this + 0x56c) = param_1;
        *(undefined4 *)((int)this + 0x570) = 0x100;
      }
      else {
        if (sVar2 == 1) {
          uVar3 = 8;
        }
        else if (sVar2 == 2) {
          uVar3 = 9;
        }
        else {
          uVar3 = param_2 & 0xfff0;
          if (uVar3 < 0xf011) {
            if (uVar3 == 0xf010) {
              uVar3 = 2;
            }
            else if (uVar3 == 0xf000) {
              uVar3 = 3;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (uVar3 < 0xf031) {
            if (uVar3 == 0xf030) {
              uVar3 = 5;
            }
            else if (uVar3 == 0xf020) {
              uVar3 = 4;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (uVar3 == 0xf060) {
            uVar3 = 6;
          }
          else if (uVar3 == 0xf120) {
            uVar3 = 1;
          }
          else if (uVar3 == 0xf130) {
            uVar3 = 7;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        uVar3 = uVar3 | 0x100;
        bVar4 = false;
        *(uint *)((int)this + 0x570) = uVar3;
        param_3 = param_3 | 0x20000000;
      }
      goto LAB_10025393;
    }
  }
  else {
    if (pHVar1 == param_1) {
LAB_100251ec:
      if (*(int *)((int)this + 0x434) == 0) {
        uVar3 = param_2 & 0xffff;
        if (uVar3 == 10) {
          uVar3 = 0x20a;
        }
        else if (uVar3 == 0x14) {
          uVar3 = 0x20b;
        }
        else if (uVar3 == 0x1e) {
          uVar3 = 0x20c;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = param_2 & 0xffff | 0x10000;
      }
      if ((sVar2 == 0) && ((param_2 >> 0x10 & 0x10) == 0)) {
        bVar4 = false;
      }
      else {
        param_3 = param_3 | 0x20000000;
        bVar4 = *(int *)((int)this + 0x56c) == 0;
        *(HMENU *)((int)this + 0x56c) = param_1;
        *(uint *)((int)this + 0x570) = uVar3;
      }
      goto LAB_10025393;
    }
    if ((*(uint *)((int)this + 0x570) & 0x10000) == 0) goto LAB_10025279;
    if (param_1 != (HMENU)0x0) goto LAB_100251ec;
  }
  uVar3 = *(uint *)((int)this + 0x570);
  param_3 = param_3 | 0x10000000;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(undefined4 *)((int)this + 0x570) = 0;
  if (uVar3 == 0) {
    bVar4 = false;
  }
LAB_10025393:
  if (bVar4) {
    if (*(int *)((int)this + 0x4dc) != 0) {
      *(uint *)(*(int *)((int)this + 0x4dc) + 0x70) = uVar3;
    }
    FUN_10025480(this,0xf,param_3,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
  }
  return;
}


// ---- FUN_100253e0 @ 100253e0

void __thiscall FUN_100253e0(void *this,int param_1,uint param_2,int param_3,uint param_4)

{
  if (*(int *)(param_1 + 8) == 0) {
    param_2 = param_2 & 0xfffffffc;
  }
  if (param_3 != 0) {
    *(int *)((int)this + 0x628) = param_3;
  }
  if (*(int *)((int)this + 0x628) == 2) {
    param_2 = param_2 & 0xfffffffe | 4;
  }
  if (((param_2 & 2) == 0) || ((param_2 & 1) == 0)) {
    *(undefined4 *)((int)this + 0x5fc) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x5fc) = 1;
  }
  if ((param_4 & 0x20000000) != 0) {
    *(int *)((int)this + 0x614) = *(int *)((int)this + 0x614) + 1;
  }
  if ((param_4 & 0x10000000) != 0) {
    *(int *)((int)this + 0x618) = *(int *)((int)this + 0x618) + 1;
  }
  FUN_10025480(this,0x13,param_4,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),
               *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
               *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14),param_2,param_1);
  return;
}


// ---- FUN_10025480 @ 10025480

void __thiscall
FUN_10025480(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  
  if (param_2 < 5) {
    if (param_2 == 4) {
      if ((*(int *)((int)this + 0x4fc) != 0) && (*(int *)((int)this + 0x4e0) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
        pcVar1 = *(code **)((int)this + 0x4fc);
        *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
        *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x24) = 4;
        *(undefined4 *)(*(int *)((int)this + 0x4e0) + 4) = *(undefined4 *)(param_8 + 4);
        *(undefined4 *)(*(int *)((int)this + 0x4e0) + 8) = *(undefined4 *)(param_8 + 8);
        *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0xc) = *(undefined4 *)(param_8 + 0xc);
        (*pcVar1)(*(undefined4 *)((int)this + 0x4e0),*(undefined4 *)((int)this + 0x500));
        *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
        return;
      }
    }
    else {
      if (param_2 != 1) {
        return;
      }
      if ((*(int *)((int)this + 0x4e4) != 0) && (*(int *)((int)this + 0x4d8) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
        pcVar1 = *(code **)((int)this + 0x4e4);
        *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
        *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x44) = 1;
        *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x48) = param_1;
        *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x4c) = param_3;
        *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x50) = param_4;
        *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x54) = param_5;
        *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x58) = param_6;
        (*pcVar1)(*(undefined4 *)((int)this + 0x4d8),*(undefined4 *)((int)this + 0x4e8));
        *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
        return;
      }
    }
  }
  else if (param_2 == 0x10000002) {
    if ((*(int *)((int)this + 0x4f4) != 0) && (*(int *)((int)this + 0x4dc) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
      pcVar1 = *(code **)((int)this + 0x4f4);
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x48) = 0x10000002;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x4c) = param_1;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x50) = param_3;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x54) = param_4;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x58) = param_5;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x5c) = param_6;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x78) = *(undefined4 *)((int)this + 500);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x7c) = *(undefined4 *)((int)this + 0x1f8);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x80) = *(undefined4 *)((int)this + 0x1fc);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x84) = *(undefined4 *)((int)this + 0x200);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x74) = param_7;
      *(int *)(*(int *)((int)this + 0x4dc) + 0x88) = param_8;
      (*pcVar1)(*(undefined4 *)((int)this + 0x4dc),*(undefined4 *)((int)this + 0x4f8));
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -1;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
      return;
    }
  }
  else {
    if (param_2 != 0x20000002) {
      return;
    }
    if ((*(int *)((int)this + 0x4ec) != 0) && (*(int *)((int)this + 0x4dc) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
      pcVar1 = *(code **)((int)this + 0x4ec);
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x48) = 0x20000002;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x4c) = param_1;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x50) = param_3;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x54) = param_4;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x58) = param_5;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x5c) = param_6;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x78) = *(undefined4 *)((int)this + 500);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x7c) = *(undefined4 *)((int)this + 0x1f8);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x80) = *(undefined4 *)((int)this + 0x1fc);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x84) = *(undefined4 *)((int)this + 0x200);
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x74) = param_7;
      *(int *)(*(int *)((int)this + 0x4dc) + 0x88) = param_8;
      (*pcVar1)(*(undefined4 *)((int)this + 0x4dc),*(undefined4 *)((int)this + 0x4f0));
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -1;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
    }
  }
  return;
}


// ---- FUN_10025870 @ 10025870

void __fastcall FUN_10025870(int param_1)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  uint uStack_8;
  uint uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x634);
  while( true ) {
    if (iVar1 != 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x644) == -0x270d) && (*(HANDLE *)(param_1 + 0x648) != (HANDLE)0x0)) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x648),0xffffffff);
      ResetEvent(*(HANDLE *)(param_1 + 0x648));
    }
    if (*(int *)(param_1 + 0x640) == 0) {
      FUN_10010bc0(DAT_10030024,0,0);
      FUN_10010c00(DAT_10030024,&local_c);
      while (0x100 < local_c) {
        FUN_10010c00(DAT_10030024,&local_c);
      }
    }
    else if (*(int *)(param_1 + 0x640) == -1) {
      FUN_10010bc0(DAT_10030024,-1,0);
      FUN_10010c00(DAT_10030024,&local_c);
    }
    else {
      FUN_10010c00(DAT_10030024,&uStack_4);
      if (*(uint *)(param_1 + 0x640) < uStack_4) {
        FUN_10010bc0(DAT_10030024,0,0);
        FUN_10010c00(DAT_10030024,&local_c);
        while (0x100 < local_c) {
          FUN_10010c00(DAT_10030024,&local_c);
        }
      }
      else {
        local_c = uStack_4;
      }
      uVar2 = 0;
      if (local_c < *(uint *)(param_1 + 0x640)) {
        do {
          FUN_10010c00(DAT_10030024,&uStack_8);
          if (uVar2 < uStack_8) {
            uVar2 = uStack_8;
          }
        } while ((uVar2 == uStack_8) && (local_c = uStack_8, uStack_8 < *(uint *)(param_1 + 0x640)))
        ;
      }
    }
    if (*(int *)(param_1 + 0x634) != 0) break;
    (**(code **)(param_1 + 0x504))(9,local_c,*(undefined4 *)(param_1 + 0x508));
    iVar1 = *(int *)(param_1 + 0x634);
  }
  return;
}


// ---- FUN_10025a10 @ 10025a10

void FUN_10025a10(void)

{
  return;
}


// ---- FUN_10025a20 @ 10025a20

int __thiscall FUN_10025a20(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x130);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) != 0)) {
    return 3;
  }
  if (*(int *)((int)this + 0x150) < 9) {
    return *(int *)((int)this + 0x584);
  }
  iVar2 = *(int *)((int)this + 0x588);
  if ((iVar2 == 0) && ((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0)) {
    if ((*(int *)((int)this + 0x4a8) == 0) && (param_1 == 0)) {
      iVar2 = 2;
    }
    else {
      iVar2 = 1;
    }
  }
  if (*(int *)((int)this + 0x150) == 0x10) {
    if ((*(int *)((int)this + 0x4a8) == 0) && (param_1 == 0)) {
      return 2;
    }
    iVar2 = 1;
  }
  return iVar2;
}


// ---- FUN_10025ac0 @ 10025ac0

undefined4 __thiscall FUN_10025ac0(void *this,int param_1,int param_2,HWND param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  HWND pHVar5;
  HWND pHVar6;
  LONG LVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  HMENU pHVar11;
  HBITMAP pHVar12;
  int iVar13;
  CHAR *lpString;
  CHAR local_80 [128];
  
  if (*(int *)((int)this + 0x410) == 0) {
    return 0;
  }
  pHVar4 = GetDesktopWindow();
  pHVar5 = GetDesktopWindow();
  pHVar6 = GetDesktopWindow();
  FUN_10027150(this,pHVar6,pHVar5,pHVar4);
  if (param_1 < 0) {
    *(int *)((int)this + 0x13c) = -param_1;
  }
  else {
    *(int *)((int)this + 0x13c) = param_1;
  }
  if (param_2 < 0) {
    *(int *)((int)this + 0x140) = -param_2;
  }
  else {
    *(int *)((int)this + 0x140) = param_2;
  }
  *(int *)((int)this + 0x144) = param_1;
  *(int *)((int)this + 0x148) = param_2;
  FUN_10025480(this,7,0x20000002,*(undefined4 *)((int)this + 0x1e4),
               *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
               *(undefined4 *)((int)this + 0x1f0),0,0);
  if (param_3 == (HWND)0x0) {
    iVar10 = *(int *)((int)this + 0x13c);
    iVar2 = *(int *)((int)this + 0x140);
    if (*(int *)((int)this + 0x1d4) == -1) {
      *(undefined4 *)((int)this + 0x1d4) = 0x80000000;
    }
    if (*(int *)((int)this + 0x1d8) == -1) {
      *(undefined4 *)((int)this + 0x1d8) = 0x80000000;
    }
    if (*(int *)((int)this + 0xa8) == -0x270d) {
      *(undefined4 *)((int)this + 0x1d4) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0;
    }
    pHVar4 = *(HWND *)((int)this + 0x428);
    if (pHVar4 == (HWND)0x0) {
      pHVar4 = CreateWindowExA(0,(LPCSTR)((int)this + 0x308),s_MIL_DISPLAY_10033158,
                               *(DWORD *)((int)this + 0x564),*(int *)((int)this + 0x1d4),
                               *(int *)((int)this + 0x1d8),iVar10,iVar2,(HWND)0x0,(HMENU)0x0,
                               *(HINSTANCE *)((int)this + 0x410),(LPVOID)0x0);
      *(HWND *)((int)this + 0x42c) = pHVar4;
      if ((*(uint *)((int)this + 0x564) & 0x400000) == 0) {
        SetWindowLongA(*(HWND *)((int)this + 0x42c),*(uint *)((int)this + 0x564),-0x10);
      }
    }
    else {
      *(HWND *)((int)this + 0x42c) = pHVar4;
      SetForegroundWindow(pHVar4);
      ShowWindow(*(HWND *)((int)this + 0x42c),
                 (-(uint)((*(uint *)((int)this + 0x7c) & 8) == 0) & 6) + 3);
      MoveWindow(*(HWND *)((int)this + 0x42c),*(int *)((int)this + 0x1d4),
                 *(int *)((int)this + 0x1d8),iVar10,iVar2,1);
    }
    if (*(int *)((int)this + 0x42c) == 0) {
      return 0;
    }
  }
  else {
    *(HWND *)((int)this + 0x42c) = param_3;
    *(HWND *)((int)this + 0x430) = param_3;
    LVar7 = GetWindowLongA(param_3,-0x10);
    *(LONG *)((int)this + 0x564) = LVar7;
    FUN_1002cf00(this);
  }
  if (DAT_10030024 == 0) {
LAB_10025cfb:
    *(undefined4 *)((int)this + 0x4b8) = 0;
  }
  else {
    pvVar8 = operator_new(0x38);
    if (pvVar8 == (void *)0x0) goto LAB_10025cfb;
    puVar9 = FUN_10011ff0(pvVar8,DAT_10030024);
    *(undefined4 **)((int)this + 0x4b8) = puVar9;
  }
  if ((*(int *)((int)this + 0x11c) == -0x270d) && (*(int *)((int)this + 0x4b8) != 0)) {
    iVar10 = FUN_10017930(0x47,*(undefined4 *)((int)this + 0x410),*(undefined4 *)((int)this + 0x42c)
                          ,0,&LAB_100179a0,0,1,this);
    *(int *)((int)this + 0x5e4) = iVar10;
    if ((iVar10 != 0) && ((*(uint *)((int)this + 0x464) & 0x800) != 0)) {
      FUN_10017980(iVar10,2,1,1);
    }
  }
  pvVar8 = *(void **)((int)this + 0x4b8);
  if (pvVar8 != (void *)0x0) {
    FUN_100120c0(pvVar8,*(undefined4 *)((int)this + 0x42c));
  }
  FUN_10026fa0(this,4);
  *(HWND *)((int)this + 0x198) = *(HWND *)((int)this + 0x42c);
  *(undefined4 *)((int)this + 0x1b0) = 0;
  pHVar4 = GetWindow(*(HWND *)((int)this + 0x42c),3);
  *(HWND *)((int)this + 0x19c) = pHVar4;
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x1a8) = *(undefined4 *)((int)this + 0x1dc);
  *(undefined4 *)((int)this + 0x1a0) = *(undefined4 *)((int)this + 0x1d4);
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)((int)this + 0x1e0);
  pHVar4 = *(HWND *)((int)this + 0x434);
  if (pHVar4 != (HWND)0x0) {
    *(HWND *)((int)this + 0x17c) = pHVar4;
    *(undefined4 *)((int)this + 0x194) = 0;
    pHVar4 = GetWindow(pHVar4,3);
    *(HWND *)((int)this + 0x180) = pHVar4;
    *(int *)((int)this + 0x188) = *(int *)((int)this + 0x234);
    *(int *)((int)this + 0x184) = *(int *)((int)this + 0x230);
    *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x238) - *(int *)((int)this + 0x230);
    *(int *)((int)this + 400) = *(int *)((int)this + 0x23c) - *(int *)((int)this + 0x234);
  }
  if ((*(int *)((int)this + 0x43c) == 0) ||
     (*(int *)((int)this + 0x42c) == *(int *)((int)this + 0x43c))) {
    if (*(int *)((int)this + 0x42c) == *(int *)((int)this + 0x434)) {
      *(int *)((int)this + 0x1a0) = *(int *)((int)this + 0x1d4);
      *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)((int)this + 0x1d8);
    }
    else {
      *(int *)((int)this + 0x1a0) = *(int *)((int)this + 0x1d4) - *(int *)((int)this + 0x230);
      *(int *)((int)this + 0x1a4) = *(int *)((int)this + 0x1d8) - *(int *)((int)this + 0x234);
    }
  }
  else {
    *(int *)((int)this + 0x1a0) = *(int *)((int)this + 0x1d4) - *(int *)((int)this + 0x254);
    *(int *)((int)this + 0x1a4) = *(int *)((int)this + 0x1d8) - *(int *)((int)this + 600);
  }
  **(undefined4 **)((int)this + 0x4dc) = *(undefined4 *)((int)this + 0x42c);
  **(undefined4 **)((int)this + 0x4e0) = *(undefined4 *)((int)this + 0x42c);
  if (param_3 == (HWND)0x0) {
    if ((*(uint *)((int)this + 0x7c) & 0x20) == 0) {
      pHVar11 = GetSystemMenu(*(HWND *)((int)this + 0x42c),0);
      AppendMenuA(pHVar11,0x800,0,(LPCSTR)0x0);
      AppendMenuA(pHVar11,0,1,s_Menu__Bar_10033164);
      AppendMenuA(pHVar11,0,2,s_Title__Off_10033170);
      pHVar11 = CreateMenu();
      *(HMENU *)((int)this + 0x544) = pHVar11;
      pHVar12 = LoadBitmapA(DAT_10033230,s_MWinDispZoomIn_1003317c);
      *(HBITMAP *)((int)this + 0x54c) = pHVar12;
      AppendMenuA(*(HMENU *)((int)this + 0x544),4,10,(LPCSTR)pHVar12);
      pHVar12 = LoadBitmapA(DAT_10033230,s_MWinDispZoomOut_1003318c);
      *(HBITMAP *)((int)this + 0x550) = pHVar12;
      AppendMenuA(*(HMENU *)((int)this + 0x544),4,0x14,(LPCSTR)pHVar12);
      pHVar12 = LoadBitmapA(DAT_10033230,s_MWinDispZoomOne_1003319c);
      *(HBITMAP *)((int)this + 0x554) = pHVar12;
      AppendMenuA(*(HMENU *)((int)this + 0x544),4,0x1e,(LPCSTR)pHVar12);
      iVar10 = *(int *)((int)this + 0x2e4);
      iVar2 = *(int *)((int)this + 0x224);
      iVar3 = *(int *)((int)this + 0x298);
      iVar13 = GetSystemMetrics(0x1c);
      if (iVar13 < iVar10 + iVar2 + iVar3 + 0x60) {
        iVar10 = *(int *)((int)this + 0x2e4) + *(int *)((int)this + 0x224) +
                 *(int *)((int)this + 0x298) + 0x60;
      }
      else {
        iVar10 = GetSystemMetrics(0x1c);
      }
      *(undefined4 *)((int)this + 0x548) = 1;
      *(int *)((int)this + 0x274) = iVar10;
      if ((*(uint *)((int)this + 0x7c) & 0x30) == 0) {
        *(undefined4 *)((int)this + 0x548) = 0;
      }
      FUN_1002c950((int)this);
      goto LAB_10025ff9;
    }
LAB_10026000:
    FUN_1002ca40((int)this);
  }
  else {
LAB_10025ff9:
    if ((*(uint *)((int)this + 0x7c) & 0x20) != 0) goto LAB_10026000;
  }
  if (param_3 == (HWND)0x0) {
    if (*(int *)((int)this + 0x94) == -9999) {
      *(undefined4 *)((int)this + 0x90) = 0xffffd8f3;
    }
    ShowWindow(*(HWND *)((int)this + 0x42c),
               (-(uint)((*(uint *)((int)this + 0x7c) & 8) == 0) & 2) + 3);
    *(undefined4 *)((int)this + 0x448) = 0;
    *(undefined4 *)((int)this + 0x44c) = 0;
    *(int *)((int)this + 0x440) = *(int *)((int)this + 0x13c);
    *(undefined4 *)((int)this + 0x444) = *(undefined4 *)((int)this + 0x140);
    *(undefined4 *)((int)this + 0x450) = 0;
    *(undefined4 *)((int)this + 0x454) = 0;
    SetScrollRange(*(HWND *)((int)this + 0x42c),0,0,*(int *)((int)this + 0x13c),0);
    SetScrollRange(*(HWND *)((int)this + 0x42c),1,0,*(int *)((int)this + 0x444),0);
    SetScrollPos(*(HWND *)((int)this + 0x42c),0,*(int *)((int)this + 0x448),0);
    SetScrollPos(*(HWND *)((int)this + 0x42c),1,*(int *)((int)this + 0x44c),0);
    ShowScrollBar(*(HWND *)((int)this + 0x42c),3,0);
  }
  else if (*(int *)((int)this + 0x94) == -9999) {
    *(undefined4 *)((int)this + 0x90) = 0xffffd8f1;
  }
  FUN_1001ef00((int)this);
  if (param_3 != (HWND)0x0) {
    if (((uint)*(IMAGE_DOS_HEADER **)((int)this + 200) & 0xfffffffe) != 0) {
      FUN_100233b0(this,0xc03,*(IMAGE_DOS_HEADER **)((int)this + 200),1,(uint *)0x0);
    }
    if (((uint)*(IMAGE_DOS_HEADER **)((int)this + 0xcc) & 0xfffffffe) != 0) {
      FUN_100233b0(this,0xc04,*(IMAGE_DOS_HEADER **)((int)this + 0xcc),1,(uint *)0x0);
    }
    if (param_3 != (HWND)0x0) goto LAB_10026199;
  }
  if ((*(uint *)((int)this + 0x564) & 0x400000) != 0) {
    lpString = *(CHAR **)((int)this + 0x40c);
    if (lpString == (LPCSTR)0x0) {
      wsprintfA(local_80,s_MIL_DISPLAY___ld_100331ac,*(undefined4 *)((int)this + 0x78));
      pHVar4 = *(HWND *)((int)this + 0x43c);
      if (pHVar4 == (HWND)0x0) {
        pHVar4 = *(HWND *)((int)this + 0x42c);
      }
      lpString = local_80;
    }
    else {
      pHVar4 = *(HWND *)((int)this + 0x43c);
      if (pHVar4 == (HWND)0x0) {
        pHVar4 = *(HWND *)((int)this + 0x42c);
      }
    }
    SetWindowTextA(pHVar4,lpString);
  }
LAB_10026199:
  FUN_10026f40(this);
  if (*(int *)((int)this + 0x5e4) != 0) {
    FUN_10017980(*(int *)((int)this + 0x5e4),5,0,1);
  }
  puVar1 = (uint *)((int)this + 0x494);
  FUN_100228a0(this,0xc4d,puVar1);
  *puVar1 = (uint)(*puVar1 == 0xffffd8f3);
  FUN_100228a0(this,0xc4e,puVar1);
  *(uint *)((int)this + 0x498) = (uint)(*(int *)((int)this + 0x498) == -0x270d);
  FUN_10025480(this,7,0x10000002,*(undefined4 *)((int)this + 0x1e4),
               *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
               *(undefined4 *)((int)this + 0x1f0),0,0);
  return 1;
}


// ---- FUN_10026240 @ 10026240

undefined4 __thiscall FUN_10026240(void *this,short param_1,short param_2)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  BOOL BVar3;
  HMENU hMenu;
  int iVar4;
  undefined4 uVar5;
  WINDOWPLACEMENT local_2c;
  
  iVar1 = *(int *)((int)this + 0x430);
  hWnd = *(HWND *)((int)this + 0x42c);
  BVar2 = IsWindow(hWnd);
  if ((BVar2 != 0) && (param_1 == 1)) {
    FUN_10025480(this,8,0x20000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
  }
  if ((hWnd != (HWND)0x0) && (BVar3 = IsIconic(hWnd), BVar3 != 0)) {
    local_2c.length = 0x2c;
    GetWindowPlacement(hWnd,&local_2c);
    *(LONG *)((int)this + 0x1d4) = local_2c.rcNormalPosition.left;
    *(LONG *)((int)this + 0x1d8) = local_2c.rcNormalPosition.top;
  }
  if (*(undefined4 **)((int)this + 0x4b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x4b8))(1);
    *(undefined4 *)((int)this + 0x4b8) = 0;
  }
  if ((hWnd != (HWND)0x0) && (iVar1 == 0)) {
    if (*(int *)((int)this + 0x418) == 0) {
      *(undefined4 *)((int)this + 0x428) = 0;
    }
    else {
      ShowWindow(*(HWND *)((int)this + 0x42c),0);
      if ((*(uint *)((int)this + 0x564) & 0x400000) == 0) {
        FUN_1002ca40((int)this);
      }
      if (*(int *)((int)this + 0x548) == 0) {
        FUN_1002c950((int)this);
      }
      hMenu = GetSystemMenu(*(HWND *)((int)this + 0x42c),0);
      iVar4 = GetMenuItemCount(hMenu);
      DeleteMenu(hMenu,iVar4 - 1,0x400);
      DeleteMenu(hMenu,iVar4 - 2,0x400);
      DeleteMenu(hMenu,iVar4 - 3,0x400);
    }
  }
  if (param_2 == 1) {
    FUN_10028b20(this);
  }
  uVar5 = FUN_1002be00(this);
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x180) = 0xffffffff;
  *(undefined4 *)((int)this + 0x184) = 0xffffffff;
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(undefined4 *)((int)this + 400) = 0xffffffff;
  *(undefined4 *)((int)this + 0x194) = 0xffffffff;
  *(undefined4 *)((int)this + 0x198) = 0xffffffff;
  *(undefined4 *)((int)this + 0x19c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1ac) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x51c) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(undefined4 *)((int)this + 0x570) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0xffffd8f1;
  *(undefined4 *)((int)this + 0x45c) = 0xffffd8f1;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  if (*(HGDIOBJ *)((int)this + 0x554) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0x554));
  }
  if (*(HGDIOBJ *)((int)this + 0x550) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0x550));
  }
  if (*(HGDIOBJ *)((int)this + 0x54c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0x54c));
  }
  if ((hWnd != (HWND)0x0) && (iVar1 == 0)) {
    SetMenu(hWnd,(HMENU)0x0);
  }
  if (*(HMENU *)((int)this + 0x544) != (HMENU)0x0) {
    DestroyMenu(*(HMENU *)((int)this + 0x544));
  }
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  *(undefined4 *)((int)this + 700) = 1;
  *(undefined4 *)((int)this + 0x2c0) = 1;
  *(undefined4 *)((int)this + 0x2d4) = 1;
  *(undefined4 *)((int)this + 0x2d8) = 1;
  *(undefined4 *)((int)this + 0x2dc) = 1;
  *(undefined4 *)((int)this + 0x2e0) = 1;
  *(undefined4 *)((int)this + 0x2e4) = *(undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x2e8) = *(undefined4 *)((int)this + 0x2c8);
  *(undefined4 *)((int)this + 0x2ec) = *(undefined4 *)((int)this + 0x2cc);
  *(undefined4 *)((int)this + 0x2f0) = *(undefined4 *)((int)this + 0x2d0);
  *(undefined4 *)((int)this + 0x564) = 0x14cf0000;
  *(undefined4 *)((int)this + 0x548) = 0;
  if ((BVar2 != 0) && (param_1 == 1)) {
    FUN_10025480(this,8,0x10000002,*(undefined4 *)((int)this + 0x1e4),
                 *(undefined4 *)((int)this + 0x1e8),*(undefined4 *)((int)this + 0x1ec),
                 *(undefined4 *)((int)this + 0x1f0),0,0);
  }
  return uVar5;
}


// ---- FUN_100266b0 @ 100266b0

void __fastcall FUN_100266b0(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  DWORD local_4;
  
  if (*(int *)(param_1 + 0x418) == 0) {
    return;
  }
  PostThreadMessageA(*(DWORD *)(param_1 + 0x414),0x12,0,0);
  if (*(HANDLE *)(param_1 + 0x420) != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x420),10000);
    if (*(HANDLE *)(param_1 + 0x420) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x420));
      *(undefined4 *)(param_1 + 0x420) = 0;
    }
    if (DVar1 == 0) goto LAB_10026720;
  }
  TerminateThread(*(HANDLE *)(param_1 + 0x418),0);
LAB_10026720:
  uVar2 = 0;
  local_4 = 0x103;
  do {
    if (1999 < uVar2) break;
    uVar2 = uVar2 + 0x32;
    Sleep(0x32);
    GetExitCodeThread(*(HANDLE *)(param_1 + 0x418),&local_4);
  } while (local_4 == 0x103);
  CloseHandle(*(HANDLE *)(param_1 + 0x418));
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  return;
}


// ---- FUN_10026790 @ 10026790

void __fastcall FUN_10026790(void *param_1)

{
  int iVar1;
  int iVar2;
  tagPOINT local_30;
  tagPOINT local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)((int)param_1 + 0x42c),&local_20);
  local_30.x = local_20.left;
  local_30.y = local_20.top;
  local_28.x = local_20.right;
  local_28.y = local_20.bottom;
  ClientToScreen(*(HWND *)((int)param_1 + 0x42c),&local_30);
  ClientToScreen(*(HWND *)((int)param_1 + 0x42c),&local_28);
  if (*(int *)((int)param_1 + 0x430) == 0) {
    GetClientRect(*(HWND *)((int)param_1 + 0x42c),&local_10);
    iVar1 = (local_10.right -
            (*(int *)((int)param_1 + 0x2e4) * *(int *)((int)param_1 + 0x13c)) /
            *(int *)((int)param_1 + 0x2ec)) - local_10.left;
    *(int *)((int)param_1 + 0x21c) = iVar1;
    iVar2 = (local_10.bottom -
            (*(int *)((int)param_1 + 0x2e8) * *(int *)((int)param_1 + 0x140)) /
            *(int *)((int)param_1 + 0x2f0)) - local_10.top;
    *(int *)((int)param_1 + 0x220) = iVar2;
    if (iVar1 < 1) {
      *(undefined4 *)((int)param_1 + 0x21c) = 0;
    }
    else {
      *(int *)((int)param_1 + 0x21c) = iVar1 / 2;
    }
    if (iVar2 < 1) {
      *(undefined4 *)((int)param_1 + 0x220) = 0;
    }
    else {
      *(int *)((int)param_1 + 0x220) = iVar2 / 2;
    }
  }
  *(LONG *)((int)param_1 + 0x204) = local_30.x;
  *(LONG *)((int)param_1 + 0x208) = local_30.y;
  *(LONG *)((int)param_1 + 0x1e4) = local_30.x + *(int *)((int)param_1 + 0x21c);
  *(LONG *)((int)param_1 + 0x1e8) = local_30.y + *(int *)((int)param_1 + 0x220);
  *(LONG *)((int)param_1 + 0x1ec) = (local_28.x + *(int *)((int)param_1 + 0x21c) * -2) - local_30.x;
  *(LONG *)((int)param_1 + 0x1f0) = (local_28.y + *(int *)((int)param_1 + 0x220) * -2) - local_30.y;
  FUN_10026900(param_1);
  return;
}


// ---- FUN_10026900 @ 10026900

void __fastcall FUN_10026900(void *param_1)

{
  BOOL BVar1;
  HDC hDC;
  uint uVar2;
  HWND pHVar3;
  int iVar4;
  RECT *pRVar5;
  undefined1 local_78 [12];
  int local_6c;
  RECT local_68;
  tagPOINT local_58;
  int local_50;
  int local_4c;
  tagPOINT local_48;
  DWORD local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  RECT local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48));
  pRVar5 = &local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pRVar5->left = 0;
    pRVar5 = (RECT *)&pRVar5->top;
  }
  local_40 = *(DWORD *)((int)param_1 + 0x47c);
  local_3c = *(int *)((int)param_1 + 0x478);
  local_20 = 1;
  local_1c = 1;
  iVar4 = FUN_10026d50(param_1,&local_30,&local_3c,&local_40);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48));
  if (iVar4 == 0) {
    FUN_10027150(param_1,*(HWND *)((int)param_1 + 0x438),*(HWND *)((int)param_1 + 0x434),
                 *(HWND *)((int)param_1 + 0x43c));
    local_48.x = 0;
    *(undefined4 *)((int)param_1 + 500) = 0;
    local_48.y = 0;
    *(undefined4 *)((int)param_1 + 0x1f8) = 0;
    ClientToScreen(*(HWND *)((int)param_1 + 0x42c),&local_48);
    *(LONG *)((int)param_1 + 500) = local_48.x;
    *(LONG *)((int)param_1 + 0x1f8) = local_48.y;
    *(undefined4 *)((int)param_1 + 0x1fc) = 0;
    *(undefined4 *)((int)param_1 + 0x200) = 0;
    if ((*(int *)((int)param_1 + 0x42c) != 0) &&
       ((*(int *)((int)param_1 + 0x430) == 0 ||
        (((*(int *)((int)param_1 + 0x42c) != 0 && (*(HWND *)((int)param_1 + 0x434) != (HWND)0x0)) &&
         (BVar1 = IsIconic(*(HWND *)((int)param_1 + 0x434)), BVar1 == 0)))))) {
      hDC = GetDC(*(HWND *)((int)param_1 + 0x42c));
      local_50 = *(int *)((int)param_1 + 0x13c);
      local_4c = *(int *)((int)param_1 + 0x140);
      local_58.x = 0;
      local_58.y = 0;
      FUN_10028d20(param_1,hDC,&local_58,2,0);
      *(int *)((int)param_1 + 500) = *(int *)((int)param_1 + 500) + local_58.x;
      *(int *)((int)param_1 + 0x1f8) = *(int *)((int)param_1 + 0x1f8) + local_58.y;
      *(int *)((int)param_1 + 0x1fc) = local_50 - local_58.x;
      *(int *)((int)param_1 + 0x200) = local_4c - local_58.y;
      ReleaseDC(*(HWND *)((int)param_1 + 0x42c),hDC);
    }
    local_68.left = *(int *)((int)param_1 + 500);
    local_68.top = *(int *)((int)param_1 + 0x1f8);
    local_68.right = *(int *)((int)param_1 + 0x1fc) + local_68.left;
    pHVar3 = *(HWND *)((int)param_1 + 0x42c);
    local_68.bottom = *(int *)((int)param_1 + 0x200) + local_68.top;
    uVar2 = GetWindowLongA(pHVar3,-0x10);
    while ((uVar2 & 0x40000000) != 0) {
      pHVar3 = GetParent(pHVar3);
      GetClientRect(pHVar3,(LPRECT)local_78);
      ClientToScreen(pHVar3,(LPPOINT)local_78);
      ClientToScreen(pHVar3,(LPPOINT)(local_78 + 8));
      IntersectRect(&local_68,&local_68,(RECT *)local_78);
      uVar2 = GetWindowLongA(pHVar3,-0x10);
    }
    local_78._0_4_ = *(int *)((int)param_1 + 0x1e4);
    local_78._4_4_ = *(int *)((int)param_1 + 0x1e8);
    local_78._8_4_ = *(int *)((int)param_1 + 0x1ec) + local_78._0_4_;
    local_6c = *(int *)((int)param_1 + 0x1f0) + local_78._4_4_;
    IntersectRect(&local_68,&local_68,(RECT *)local_78);
    pHVar3 = *(HWND *)((int)param_1 + 0x438);
    if ((pHVar3 != (HWND)0x0) && (*(HWND *)((int)param_1 + 0x42c) != pHVar3)) {
      local_78._0_4_ = *(LONG *)((int)param_1 + 0x230);
      local_78._4_4_ = *(LONG *)((int)param_1 + 0x234);
      local_78._8_4_ = *(int *)((int)param_1 + 0x238);
      local_6c = *(int *)((int)param_1 + 0x23c);
      if (pHVar3 != (HWND)0x0) {
        FUN_1001f8e0(param_1,pHVar3,(HWND)0x0,(tagRECT *)0x0,&local_38,&local_34);
        FUN_1002d520(param_1,*(HWND *)((int)param_1 + 0x438));
        if (local_38 != 0) {
          local_6c = local_6c - (*(int *)((int)param_1 + 0x298) + 1);
        }
        if (local_34 != 0) {
          local_78._8_4_ = local_78._8_4_ - (*(int *)((int)param_1 + 0x294) + 1);
        }
      }
      IntersectRect(&local_68,&local_68,(RECT *)local_78);
    }
    local_78._8_4_ = *(LONG *)((int)param_1 + 0x27c);
    local_6c = *(LONG *)((int)param_1 + 0x280);
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    IntersectRect(&local_68,&local_68,(RECT *)local_78);
    *(LONG *)((int)param_1 + 500) = local_68.left;
    *(LONG *)((int)param_1 + 0x1f8) = local_68.top;
    *(LONG *)((int)param_1 + 0x1fc) = local_68.right - local_68.left;
    *(LONG *)((int)param_1 + 0x200) = local_68.bottom - local_68.top;
    if (*(undefined4 **)((int)param_1 + 0x478) == (undefined4 *)0x0) goto LAB_10026d3b;
    **(undefined4 **)((int)param_1 + 0x478) = 0x20;
    *(undefined4 *)(*(int *)((int)param_1 + 0x478) + 4) = 1;
    *(undefined4 *)(*(int *)((int)param_1 + 0x478) + 8) = 1;
    *(undefined4 *)(*(int *)((int)param_1 + 0x478) + 0xc) = 0x30;
    *(undefined4 *)(*(int *)((int)param_1 + 0x478) + 0x10) = *(undefined4 *)((int)param_1 + 500);
    *(undefined4 *)(*(int *)((int)param_1 + 0x478) + 0x14) = *(undefined4 *)((int)param_1 + 0x1f8);
    *(int *)(*(int *)((int)param_1 + 0x478) + 0x18) =
         *(int *)((int)param_1 + 500) + *(int *)((int)param_1 + 0x1fc);
    *(int *)(*(int *)((int)param_1 + 0x478) + 0x1c) =
         *(int *)((int)param_1 + 0x1f8) + *(int *)((int)param_1 + 0x200);
    iVar4 = *(int *)((int)param_1 + 0x478);
    *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar4 + 0x18);
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar4 + 0x1c);
  }
  if (*(int *)((int)param_1 + 0x478) != 0) {
    *(uint *)((int)param_1 + 0x5fc) = (uint)(*(int *)(*(int *)((int)param_1 + 0x478) + 8) == 1);
    return;
  }
LAB_10026d3b:
  *(undefined4 *)((int)param_1 + 0x5fc) = 1;
  return;
}


// ---- FUN_10026d50 @ 10026d50

void __thiscall FUN_10026d50(void *this,RECT *param_1,int *param_2,DWORD *param_3)

{
  bool bVar1;
  LONG *pLVar2;
  BOOL BVar3;
  HDC hDC;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  tagPOINT local_18;
  tagPOINT local_10;
  int local_8;
  int local_4;
  
  piVar6 = (int *)0x0;
  if (param_1 != (RECT *)0x0) {
    pLVar2 = &param_1[1].top;
    do {
      if (*pLVar2 == 0) break;
      if (((RECT *)(pLVar2 + -1))->left == 1) {
        piVar6 = pLVar2 + -5;
      }
      pLVar2 = pLVar2 + 6;
    } while (param_1 != (RECT *)0x0);
  }
  if (piVar6 == (int *)0x0) {
LAB_10026ddd:
    if ((*(int *)((int)this + 0x42c) == 0) || (*(HWND *)((int)this + 0x434) == (HWND)0x0))
    goto LAB_10026e7f;
    BVar3 = IsIconic(*(HWND *)((int)this + 0x434));
    if (BVar3 != 0) goto LAB_10026e7f;
  }
  else {
    local_18.x = 0;
    *piVar6 = 0;
    local_18.y = 0;
    piVar6[1] = 0;
    ClientToScreen(*(HWND *)((int)this + 0x42c),&local_18);
    *piVar6 = local_18.x;
    piVar6[1] = local_18.y;
    piVar6[2] = *piVar6;
    piVar6[3] = piVar6[1];
    if (piVar6 == (int *)0x0) goto LAB_10026ddd;
    if (*(int *)((int)this + 0x42c) == 0) goto LAB_10026e7f;
    if (*(int *)((int)this + 0x430) != 0) goto LAB_10026ddd;
  }
  hDC = GetDC(*(HWND *)((int)this + 0x42c));
  local_8 = *(int *)((int)this + 0x13c);
  local_4 = *(int *)((int)this + 0x140);
  local_10.x = 0;
  local_10.y = 0;
  FUN_10028d20(this,hDC,&local_10,2,0);
  *piVar6 = *piVar6 + local_10.x;
  piVar6[1] = piVar6[1] + local_10.y;
  piVar6[2] = piVar6[2] + local_8;
  piVar6[3] = piVar6[3] + local_4;
  ReleaseDC(*(HWND *)((int)this + 0x42c),hDC);
LAB_10026e7f:
  if (*(int *)((int)this + 0x4b8) == 0) {
    bVar1 = false;
  }
  else if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    bVar1 = false;
  }
  else {
    uVar5 = *param_3;
    puVar7 = (undefined4 *)*param_2;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined4 *)*param_2 = 0x20;
    FUN_10012110(*(void **)((int)this + 0x4b8),param_1,(RGNDATA *)*param_2,param_3,
                 (uint)(*(int *)((int)this + 0x68) == -0x270d));
    bVar1 = true;
  }
  if (((bVar1) && (param_2 != (int *)0x0)) && (*param_2 != 0)) {
    *(undefined4 *)((int)this + 500) = *(undefined4 *)(*param_2 + 0x10);
    *(undefined4 *)((int)this + 0x1f8) = *(undefined4 *)(*param_2 + 0x14);
    *(int *)((int)this + 0x1fc) = *(int *)(*param_2 + 0x18) - *(int *)(*param_2 + 0x10);
    *(int *)((int)this + 0x200) = *(int *)(*param_2 + 0x1c) - *(int *)(*param_2 + 0x14);
  }
  return;
}


// ---- FUN_10026f40 @ 10026f40

void __fastcall FUN_10026f40(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_10026790(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48));
  uVar1 = *(undefined4 *)((int)param_1 + 0x470);
  uVar2 = *(undefined4 *)((int)param_1 + 0x474);
  *(undefined4 *)((int)param_1 + 0x470) = *(undefined4 *)((int)param_1 + 0x478);
  *(undefined4 *)((int)param_1 + 0x474) = *(undefined4 *)((int)param_1 + 0x47c);
  *(undefined4 *)((int)param_1 + 0x478) = uVar1;
  *(undefined4 *)((int)param_1 + 0x47c) = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48));
  return;
}


// ---- FUN_10026fa0 @ 10026fa0

void __thiscall FUN_10026fa0(void *this,uint param_1)

{
  tagRECT local_20;
  tagRECT local_10;
  
  if ((param_1 & 4) == 0) {
    local_10.left = *(int *)((int)this + 0x1b4);
    local_10.top = *(int *)((int)this + 0x1b8);
    local_10.right = *(int *)((int)this + 0x1bc);
    local_10.bottom = *(int *)((int)this + 0x1c0);
    local_20.left = *(LONG *)((int)this + 0x1c4);
    local_20.top = *(LONG *)((int)this + 0x1c8);
    local_20.right = *(int *)((int)this + 0x1cc);
    local_20.bottom = *(int *)((int)this + 0x1d0);
  }
  else {
    GetClientRect(*(HWND *)((int)this + 0x42c),&local_20);
    GetWindowRect(*(HWND *)((int)this + 0x42c),&local_10);
    if (*(int *)((int)this + 0x450) != 0) {
      local_20.bottom = local_20.bottom + *(int *)((int)this + 0x294);
    }
    if (*(int *)((int)this + 0x454) != 0) {
      local_20.right = local_20.right + *(int *)((int)this + 0x298);
    }
  }
  *(LONG *)((int)this + 0x1d4) = local_10.left;
  *(LONG *)((int)this + 0x1d8) = local_10.top;
  ClientToScreen(*(HWND *)((int)this + 0x42c),(LPPOINT)&local_20);
  *(LONG *)((int)this + 0x204) = local_20.left;
  *(LONG *)((int)this + 0x208) = local_20.top;
  *(LONG *)((int)this + 0x20c) = local_20.right;
  *(LONG *)((int)this + 0x210) = local_20.bottom;
  *(LONG *)((int)this + 0x1e0) = local_10.bottom - local_10.top;
  *(LONG *)((int)this + 0x1dc) = local_10.right - local_10.left;
  *(LONG *)((int)this + 0x224) = (local_10.right - local_10.left) - local_20.right;
  *(LONG *)((int)this + 0x228) = (local_10.bottom - local_10.top) - local_20.bottom;
  *(LONG *)((int)this + 0x214) =
       local_20.right - *(int *)((int)this + 0x454) * *(int *)((int)this + 0x298);
  *(LONG *)((int)this + 0x218) =
       local_20.bottom - *(int *)((int)this + 0x450) * *(int *)((int)this + 0x294);
  FUN_10027150(this,*(HWND *)((int)this + 0x438),*(HWND *)((int)this + 0x434),
               *(HWND *)((int)this + 0x43c));
  return;
}


// ---- FUN_10027150 @ 10027150

void __thiscall FUN_10027150(void *this,HWND param_1,HWND param_2,HWND param_3)

{
  uint uVar1;
  HWND hWnd;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  code *pcVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  tagRECT *lpRect;
  tagRECT local_20;
  tagPOINT local_10;
  tagPOINT local_8;
  
  pcVar2 = ClientToScreen_exref;
  if ((param_1 != (HWND)0x0) && (param_2 != (HWND)0x0)) {
    GetClientRect(param_1,&local_20);
    uVar1 = GetWindowLongA(param_1,-0x10);
    pcVar2 = ClientToScreen_exref;
    local_8.x = local_20.left;
    local_8.y = local_20.top;
    local_10.x = local_20.right;
    local_10.y = local_20.bottom;
    if ((uVar1 & 0x100000) != 0) {
      local_10.y = *(int *)((int)this + 0x294) + local_20.bottom + 1;
    }
    if ((uVar1 & 0x200000) != 0) {
      local_10.x = *(int *)((int)this + 0x298) + local_20.right + 1;
    }
    ClientToScreen(param_1,&local_8);
    ClientToScreen(param_1,&local_10);
    *(HWND *)((int)this + 0x22c) = param_2;
    GetWindowRect(param_2,&local_20);
    *(LONG *)((int)this + 0x240) = local_20.left;
    *(LONG *)((int)this + 0x244) = local_20.top;
    *(LONG *)((int)this + 0x248) = local_20.right;
    *(LONG *)((int)this + 0x24c) = local_20.bottom;
    if ((param_2 == param_1) && ((param_3 == (HWND)0x0 || (param_3 == param_2)))) {
      lpRect = &local_20;
      hWnd = GetDesktopWindow();
      GetWindowRect(hWnd,lpRect);
      *(LONG *)((int)this + 0x230) = local_20.left;
      *(LONG *)((int)this + 0x234) = local_20.top;
      *(LONG *)((int)this + 0x238) = local_20.right;
      *(LONG *)((int)this + 0x23c) = local_20.bottom;
    }
    else {
      *(LONG *)((int)this + 0x230) = local_8.x;
      *(LONG *)((int)this + 0x234) = local_8.y;
      *(LONG *)((int)this + 0x238) = local_10.x;
      *(LONG *)((int)this + 0x23c) = local_10.y;
    }
  }
  if (param_3 != (HWND)0x0) {
    GetClientRect(param_3,&local_20);
    local_8.x = local_20.left;
    local_8.y = local_20.top;
    local_10.x = local_20.right;
    local_10.y = local_20.bottom;
    (*pcVar2)(param_3,&local_8);
    (*pcVar2)(param_3,&local_20.right);
    *(LONG *)((int)this + 0x254) = local_20.right;
    *(LONG *)((int)this + 600) = local_20.bottom;
    *(LONG *)((int)this + 0x25c) = local_20.left;
    *(LONG *)((int)this + 0x260) = local_20.top;
    *(HWND *)((int)this + 0x250) = param_3;
    GetWindowRect(param_3,(LPRECT)&stack0xffffffd0);
    *(undefined4 *)((int)this + 0x264) = unaff_EBP;
    *(undefined4 *)((int)this + 0x268) = unaff_EDI;
    *(undefined4 *)((int)this + 0x26c) = unaff_ESI;
    *(undefined4 *)((int)this + 0x270) = unaff_EBX;
  }
  return;
}


// ---- FUN_10027360 @ 10027360

void __fastcall FUN_10027360(void *param_1)

{
  tagRECT local_10;
  
  GetWindowRect(*(HWND *)((int)param_1 + 0x42c),&local_10);
  OffsetRect((LPRECT)((int)param_1 + 0x1b4),local_10.left - *(int *)((int)param_1 + 0x1b4),
             local_10.top - *(int *)((int)param_1 + 0x1b8));
  FUN_10026fa0(param_1,4);
  return;
}


// ---- FUN_100273c0 @ 100273c0

void __thiscall FUN_100273c0(void *this,ushort param_1,short param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagPOINT local_28;
  int local_20;
  int local_1c;
  ushort local_18;
  int local_14;
  tagRECT local_10;
  
  local_14 = 1;
  local_34 = 0;
  local_38 = 0;
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x510) = 0xffffd8f1;
  }
  if ((*(int *)((int)this + 0x42c) == 0) || (*(int *)((int)this + 0x29c) == 1)) {
    local_14 = 0;
    goto LAB_10028071;
  }
  *(undefined4 *)((int)this + 0x29c) = 1;
  FUN_10026fa0(this,(int)(short)param_1);
  if ((*(int *)((int)this + 0x430) != 0) && (param_3 == 0)) goto LAB_10028071;
  iVar2 = (*(int *)((int)this + 0x13c) * *(int *)((int)this + 0x2e4)) / *(int *)((int)this + 0x2ec);
  iVar3 = (*(int *)((int)this + 0x2e8) * *(int *)((int)this + 0x140)) / *(int *)((int)this + 0x2f0);
  if (*(int *)((int)this + 0xa8) == -0x270d) {
    iVar8 = *(int *)((int)this + 0x214);
    iVar7 = *(int *)((int)this + 0x2fc);
    if (*(int *)((int)this + 0x2fc) <= iVar8) {
      iVar7 = iVar8;
    }
    iVar7 = iVar7 - iVar8;
    iVar6 = *(int *)((int)this + 0x218);
    iVar11 = *(int *)((int)this + 0x300);
    if (*(int *)((int)this + 0x300) <= iVar6) {
      iVar11 = iVar6;
    }
    iVar11 = iVar11 - iVar6;
    *(int *)((int)this + 0x1dc) = *(int *)((int)this + 0x1dc) + iVar7;
    *(int *)((int)this + 0x1e0) = *(int *)((int)this + 0x1e0) + iVar11;
    *(int *)((int)this + 0x20c) = *(int *)((int)this + 0x20c) + iVar7;
    *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + iVar11;
    *(int *)((int)this + 0x214) = iVar8 + iVar7;
    *(int *)((int)this + 0x218) = iVar6 + iVar11;
  }
  local_18 = param_1 & 1;
  if ((local_18 == 0) && ((param_1 & 2) == 0)) {
    pHVar4 = *(HWND *)((int)this + 0x43c);
    if (pHVar4 == (HWND)0x0) {
      pHVar4 = *(HWND *)((int)this + 0x42c);
    }
    BVar5 = IsZoomed(pHVar4);
    if (BVar5 != 0) goto LAB_1002751a;
LAB_1002761b:
    pcVar9 = IsIconic_exref;
    pHVar4 = *(HWND *)((int)this + 0x43c);
    if (pHVar4 == (HWND)0x0) {
      pHVar4 = *(HWND *)((int)this + 0x42c);
    }
    BVar5 = IsIconic(pHVar4);
    if (BVar5 != 0) {
      if (*(int *)((int)this + 0x430) == 0) {
        ShowScrollBar(*(HWND *)((int)this + 0x42c),3,0);
        *(undefined4 *)((int)this + 0x450) = 0;
        if (*(int *)((int)this + 0x90) != -0x270d) {
          *(undefined4 *)((int)this + 0x450) = 0;
        }
        *(undefined4 *)((int)this + 0x454) = 0;
        if (*(int *)((int)this + 0x90) != -0x270d) {
          *(undefined4 *)((int)this + 0x454) = 0;
        }
      }
      *(undefined4 *)((int)this + 0x214) = *(undefined4 *)((int)this + 0x20c);
      *(undefined4 *)((int)this + 0x218) = *(undefined4 *)((int)this + 0x210);
      *(undefined4 *)((int)this + 0x21c) = 0;
      *(undefined4 *)((int)this + 0x220) = 0;
    }
  }
  else {
LAB_1002751a:
    if (*(int *)((int)this + 0x430) != 0) goto LAB_1002761b;
    iVar6 = *(int *)((int)this + 0x224);
    iVar11 = *(int *)((int)this + 0x228);
    iVar8 = *(int *)((int)this + 0x298) + iVar2 + iVar6;
    *(int *)((int)this + 0x1dc) = iVar8;
    iVar7 = iVar3 + *(int *)((int)this + 0x294) + iVar11;
    *(int *)((int)this + 0x1e0) = iVar7;
    iVar10 = *(int *)((int)this + 0x274);
    if (*(int *)((int)this + 0x274) <= iVar8) {
      iVar10 = iVar8;
    }
    *(int *)((int)this + 0x1dc) = iVar10;
    iVar8 = *(int *)((int)this + 0x278);
    if (*(int *)((int)this + 0x278) <= iVar7) {
      iVar8 = iVar7;
    }
    *(int *)((int)this + 0x1e0) = iVar8;
    iVar7 = *(int *)((int)this + 0x27c);
    if (iVar10 <= *(int *)((int)this + 0x27c)) {
      iVar7 = iVar10;
    }
    *(int *)((int)this + 0x1dc) = iVar7;
    iVar10 = *(int *)((int)this + 0x280);
    if (iVar8 <= *(int *)((int)this + 0x280)) {
      iVar10 = iVar8;
    }
    *(int *)((int)this + 0x1e0) = iVar10;
    if (*(int *)((int)this + 0xa8) == -0x270d) {
      iVar8 = *(int *)((int)this + 0x2fc) + *(int *)((int)this + 0x298) + iVar6;
      if (iVar8 <= iVar7) {
        iVar8 = iVar7;
      }
      *(int *)((int)this + 0x1dc) = iVar8;
      iVar8 = *(int *)((int)this + 0x300) + *(int *)((int)this + 0x294) + iVar11;
      if (iVar8 <= iVar10) {
        iVar8 = iVar10;
      }
      *(int *)((int)this + 0x1e0) = iVar8;
    }
    pcVar9 = IsIconic_exref;
    iVar6 = *(int *)((int)this + 0x1dc) - iVar6;
    iVar11 = *(int *)((int)this + 0x1e0) - iVar11;
    *(int *)((int)this + 0x20c) = iVar6;
    *(int *)((int)this + 0x210) = iVar11;
    *(int *)((int)this + 0x214) = iVar6;
    *(int *)((int)this + 0x218) = iVar11;
  }
  iVar8 = *(int *)((int)this + 0x43c);
  if (iVar8 == 0) {
    iVar8 = *(int *)((int)this + 0x42c);
  }
  iVar8 = (*pcVar9)(iVar8);
  if (iVar8 != 0) goto LAB_10028071;
  local_30 = *(int *)((int)this + 0x224);
  iVar8 = *(int *)((int)this + 0x1dc) - local_30;
  if (iVar8 < iVar2) {
LAB_100277a8:
    if (((*(int *)((int)this + 0x1e0) - *(int *)((int)this + 0x228)) - *(int *)((int)this + 0x294) <
         iVar3) || (*(int *)((int)this + 0x430) != 0)) {
LAB_10027840:
      if ((*(int *)((int)this + 0x1e0) - *(int *)((int)this + 0x228) < iVar3) &&
         (iVar2 <= (*(int *)((int)this + 0x1dc) - *(int *)((int)this + 0x298)) - local_30)) {
        if (*(int *)((int)this + 0x430) == 0) {
          *(undefined4 *)((int)this + 0x450) = 0;
          if (*(int *)((int)this + 0x90) == -0x270d) {
            *(undefined4 *)((int)this + 0x454) = 1;
          }
          else {
            *(undefined4 *)((int)this + 0x450) = 0;
            *(undefined4 *)((int)this + 0x454) = 0;
          }
          *(undefined4 *)((int)this + 0x448) = 0;
          iVar8 = *(int *)((int)this + 0x454) * *(int *)((int)this + 0x298) + iVar2;
          if (*(int *)((int)this + 0x20c) <= iVar8) {
            iVar8 = *(int *)((int)this + 0x20c);
          }
          *(int *)((int)this + 0x20c) = iVar8;
        }
      }
      else if (*(int *)((int)this + 0x430) == 0) {
        piVar1 = (int *)((int)this + 0x450);
        if (*(int *)((int)this + 0x90) == -0x270d) {
          *piVar1 = 1;
          *(undefined4 *)((int)this + 0x454) = 1;
        }
        else {
          *piVar1 = 0;
          *(undefined4 *)((int)this + 0x454) = 0;
        }
        iVar8 = *(int *)((int)this + 0x298) * *(int *)((int)this + 0x454) + iVar2;
        if (*(int *)((int)this + 0x20c) <= iVar8) {
          iVar8 = *(int *)((int)this + 0x20c);
        }
        *(int *)((int)this + 0x20c) = iVar8;
        iVar8 = *(int *)((int)this + 0x294) * *piVar1 + iVar3;
        iVar7 = *(int *)((int)this + 0x210);
        if (*(int *)((int)this + 0x210) <= iVar8) goto LAB_10027968;
        goto LAB_1002796a;
      }
    }
    else {
      piVar1 = (int *)((int)this + 0x450);
      if (*(int *)((int)this + 0x90) == -0x270d) {
        *piVar1 = 1;
      }
      else {
        *piVar1 = 0;
      }
      *(undefined4 *)((int)this + 0x454) = 0;
      if (*(int *)((int)this + 0x90) != -0x270d) {
        *(undefined4 *)((int)this + 0x454) = 0;
      }
      *(undefined4 *)((int)this + 0x44c) = 0;
      iVar8 = *piVar1 * *(int *)((int)this + 0x294) + iVar3;
      if (*(int *)((int)this + 0x210) <= iVar8) {
        iVar8 = *(int *)((int)this + 0x210);
      }
      *(int *)((int)this + 0x210) = iVar8;
    }
  }
  else {
    if ((*(int *)((int)this + 0x1e0) - *(int *)((int)this + 0x228) < iVar3) ||
       (*(int *)((int)this + 0x430) != 0)) {
      if (iVar8 < iVar2) goto LAB_100277a8;
      goto LAB_10027840;
    }
    *(undefined4 *)((int)this + 0x450) = 0;
    if (*(int *)((int)this + 0x90) != -0x270d) {
      *(undefined4 *)((int)this + 0x450) = 0;
    }
    *(undefined4 *)((int)this + 0x454) = 0;
    if (*(int *)((int)this + 0x90) != -0x270d) {
      *(undefined4 *)((int)this + 0x454) = 0;
    }
    *(undefined4 *)((int)this + 0x448) = 0;
    *(undefined4 *)((int)this + 0x44c) = 0;
    iVar8 = *(int *)((int)this + 0x20c);
    if (iVar2 <= *(int *)((int)this + 0x20c)) {
      iVar8 = iVar2;
    }
    *(int *)((int)this + 0x20c) = iVar8;
    iVar8 = *(int *)((int)this + 0x210);
    iVar7 = iVar3;
    if (iVar3 <= iVar8) {
LAB_10027968:
      iVar8 = iVar7;
    }
LAB_1002796a:
    *(int *)((int)this + 0x210) = iVar8;
  }
  iVar8 = *(int *)((int)this + 0x274) - local_30;
  if (iVar8 <= *(int *)((int)this + 0x20c)) {
    iVar8 = *(int *)((int)this + 0x20c);
  }
  local_2c = *(int *)((int)this + 0x228);
  *(int *)((int)this + 0x20c) = iVar8;
  iVar7 = *(int *)((int)this + 0x278) - local_2c;
  if (iVar7 <= *(int *)((int)this + 0x210)) {
    iVar7 = *(int *)((int)this + 0x210);
  }
  *(int *)((int)this + 0x210) = iVar7;
  local_10.left = local_30 + iVar8;
  local_1c = *(int *)((int)this + 0x298);
  *(LONG *)((int)this + 0x1dc) = local_10.left;
  local_28.x = local_2c + iVar7;
  *(LONG *)((int)this + 0x1e0) = local_28.x;
  iVar11 = iVar8 - *(int *)((int)this + 0x454) * local_1c;
  local_20 = *(int *)((int)this + 0x294);
  *(int *)((int)this + 0x214) = iVar11;
  iVar10 = iVar7 - *(int *)((int)this + 0x450) * local_20;
  iVar6 = iVar11 % *(int *)((int)this + 0x2e4);
  *(int *)((int)this + 0x218) = iVar10;
  if ((iVar6 != 0) && (*(int *)((int)this + 0x2ec) == 1)) {
    *(int *)((int)this + 0x214) = iVar11 - iVar6;
    *(int *)((int)this + 0x20c) = iVar8 - iVar6;
    *(LONG *)((int)this + 0x1dc) = local_10.left - iVar6;
  }
  iVar8 = iVar10 % *(int *)((int)this + 0x2e8);
  if ((iVar8 != 0) && (*(int *)((int)this + 0x2f0) == 1)) {
    *(int *)((int)this + 0x218) = iVar10 - iVar8;
    *(int *)((int)this + 0x210) = iVar7 - iVar8;
    *(LONG *)((int)this + 0x1e0) = local_28.x - iVar8;
  }
  iVar8 = *(int *)((int)this + 0x1dc) - local_30;
  if (iVar8 < iVar2) {
LAB_10027b1d:
    if (((*(int *)((int)this + 0x1e0) - local_2c) - local_20 < iVar3) ||
       (*(int *)((int)this + 0x430) != 0)) {
LAB_10027bc3:
      if ((*(int *)((int)this + 0x1e0) - local_2c < iVar3) &&
         (iVar2 <= (*(int *)((int)this + 0x1dc) - local_1c) - local_30)) {
        if (*(int *)((int)this + 0x430) == 0) {
          ShowScrollBar(*(HWND *)((int)this + 0x42c),0,0);
          ShowScrollBar(*(HWND *)((int)this + 0x42c),1,(uint)(*(int *)((int)this + 0x90) == -0x270d)
                       );
          *(undefined4 *)((int)this + 0x450) = 0;
          if (*(int *)((int)this + 0x90) != -0x270d) {
            *(undefined4 *)((int)this + 0x450) = 0;
          }
          *(undefined4 *)((int)this + 0x454) = 1;
          if (*(int *)((int)this + 0x90) != -0x270d) {
            *(undefined4 *)((int)this + 0x454) = 0;
          }
          *(undefined4 *)((int)this + 0x448) = 0;
        }
      }
      else if (*(int *)((int)this + 0x430) == 0) {
        ShowScrollBar(*(HWND *)((int)this + 0x42c),3,(uint)(*(int *)((int)this + 0x90) == -0x270d));
        *(undefined4 *)((int)this + 0x450) = 1;
        if (*(int *)((int)this + 0x90) != -0x270d) {
          *(undefined4 *)((int)this + 0x450) = 0;
        }
        *(undefined4 *)((int)this + 0x454) = 1;
        if (*(int *)((int)this + 0x90) != -0x270d) {
          *(undefined4 *)((int)this + 0x454) = 0;
        }
      }
    }
    else {
      ShowScrollBar(*(HWND *)((int)this + 0x42c),0,(uint)(*(int *)((int)this + 0x90) == -0x270d));
      ShowScrollBar(*(HWND *)((int)this + 0x42c),1,0);
      *(undefined4 *)((int)this + 0x450) = 1;
      if (*(int *)((int)this + 0x90) != -0x270d) {
        *(undefined4 *)((int)this + 0x450) = 0;
      }
      *(undefined4 *)((int)this + 0x454) = 0;
      if (*(int *)((int)this + 0x90) != -0x270d) {
        *(undefined4 *)((int)this + 0x454) = 0;
      }
      *(undefined4 *)((int)this + 0x44c) = 0;
    }
  }
  else {
    if ((*(int *)((int)this + 0x1e0) - local_2c < iVar3) || (*(int *)((int)this + 0x430) != 0)) {
      if (iVar8 < iVar2) goto LAB_10027b1d;
      goto LAB_10027bc3;
    }
    ShowScrollBar(*(HWND *)((int)this + 0x42c),3,0);
    *(undefined4 *)((int)this + 0x450) = 0;
    if (*(int *)((int)this + 0x90) != -0x270d) {
      *(undefined4 *)((int)this + 0x450) = 0;
    }
    *(undefined4 *)((int)this + 0x454) = 0;
    if (*(int *)((int)this + 0x90) != -0x270d) {
      *(undefined4 *)((int)this + 0x454) = 0;
    }
    *(undefined4 *)((int)this + 0x448) = 0;
    *(undefined4 *)((int)this + 0x44c) = 0;
  }
  pcVar9 = SetScrollRange_exref;
  pcVar12 = SetScrollPos_exref;
  if (*(int *)((int)this + 0x450) != 0) {
    iVar2 = *(int *)((int)this + 0x13c) -
            (*(int *)((int)this + 0x2ec) * *(int *)((int)this + 0x214)) /
            *(int *)((int)this + 0x2e4);
    *(int *)((int)this + 0x440) = iVar2;
    if (*(int *)((int)this + 0x448) < 0) {
      *(undefined4 *)((int)this + 0x448) = 0;
    }
    iVar3 = *(int *)((int)this + 0x448);
    if (iVar2 <= *(int *)((int)this + 0x448)) {
      iVar3 = iVar2;
    }
    *(int *)((int)this + 0x448) = iVar3;
    pcVar9 = SetScrollRange_exref;
    SetScrollRange(*(HWND *)((int)this + 0x42c),0,0,iVar2,0);
    pcVar12 = SetScrollPos_exref;
    SetScrollPos(*(HWND *)((int)this + 0x42c),0,*(int *)((int)this + 0x448),1);
  }
  if (*(int *)((int)this + 0x454) != 0) {
    iVar2 = *(int *)((int)this + 0x140) -
            (*(int *)((int)this + 0x218) * *(int *)((int)this + 0x2f0)) /
            *(int *)((int)this + 0x2e8);
    *(int *)((int)this + 0x444) = iVar2;
    if (*(int *)((int)this + 0x44c) < 0) {
      *(undefined4 *)((int)this + 0x44c) = 0;
    }
    iVar3 = *(int *)((int)this + 0x44c);
    if (iVar2 <= *(int *)((int)this + 0x44c)) {
      iVar3 = iVar2;
    }
    *(int *)((int)this + 0x44c) = iVar3;
    (*pcVar9)(*(undefined4 *)((int)this + 0x42c),1,0,iVar2,0);
    (*pcVar12)(*(undefined4 *)((int)this + 0x42c),1,*(undefined4 *)((int)this + 0x44c),1);
  }
  if (*(int *)((int)this + 0xa8) == -0x270d) {
    FUN_1002bc60(this);
    FUN_10028210(this,(int *)0x0,1,&local_38,(LPRECT)0x0);
    *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + local_38;
    *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + local_34;
    *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + local_38;
    *(int *)((int)this + 0x208) = *(int *)((int)this + 0x208) + local_34;
  }
  if (local_18 != 0) {
    FUN_10028210(this,(int *)0x0,0,&local_38,(LPRECT)0x0);
    *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + local_38;
    *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + local_34;
    *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + local_38;
    *(int *)((int)this + 0x208) = *(int *)((int)this + 0x208) + local_34;
  }
  if ((*(int *)((int)this + 0x434) != 0) || (BVar5 = 0, *(int *)((int)this + 0xe4) == -0x270d)) {
    BVar5 = 1;
  }
  InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar5);
  if ((*(int *)((int)this + 0x430) == 0) || (param_3 != 1)) {
    MoveWindow(*(HWND *)((int)this + 0x42c),
               *(int *)((int)this + 0x1d4) - *(int *)((int)this + 0x230),
               *(int *)((int)this + 0x1d8) - *(int *)((int)this + 0x234),*(int *)((int)this + 0x1dc)
               ,*(int *)((int)this + 0x1e0),1);
  }
  else {
    local_28.y = 0;
    local_28.x = 0;
    GetClientRect(*(HWND *)((int)this + 0x42c),&local_10);
    ClientToScreen(*(HWND *)((int)this + 0x42c),&local_28);
    OffsetRect(&local_10,local_28.x,local_28.y);
    iVar2 = *(int *)((int)this + 0x20c);
    if (*(int *)((int)this + 0x13c) < *(int *)((int)this + 0x20c)) {
      iVar2 = *(int *)((int)this + 0x13c);
    }
    iVar3 = *(int *)((int)this + 0x210);
    if (*(int *)((int)this + 0x140) < *(int *)((int)this + 0x210)) {
      iVar3 = *(int *)((int)this + 0x140);
    }
    iVar8 = (iVar2 - *(int *)((int)this + 0x25c)) + local_10.left;
    iVar2 = *(int *)((int)this + 600) +
            (iVar3 - *(int *)((int)this + 0x260)) + (local_10.top - *(int *)((int)this + 600));
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + local_38;
    *(int *)((int)this + 0x208) = *(int *)((int)this + 0x208) + local_34;
    SetWindowPos(*(HWND *)((int)this + 0x43c),(HWND)0x0,
                 (local_38 - *(int *)((int)this + 0x230)) + *(int *)((int)this + 0x264),
                 *(int *)((int)this + 0x268) + (local_34 - *(int *)((int)this + 0x234)),
                 iVar8 + (*(int *)((int)this + 0x26c) - *(int *)((int)this + 0x264)),
                 (*(int *)((int)this + 0x270) - *(int *)((int)this + 0x268)) + iVar2,0x14);
    SetWindowPos(*(HWND *)((int)this + 0x434),(HWND)0x0,0,0,0,0,0x17);
  }
LAB_10028071:
  if (local_14 == 1) {
    if ((param_1 & 4) != 0) {
      *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1d4);
      *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1d8);
      *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1dc) + *(int *)((int)this + 0x1d4);
      *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1e0) + *(int *)((int)this + 0x1d8);
      *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)((int)this + 0x20c);
      *(undefined4 *)((int)this + 0x1c4) = 0;
      *(undefined4 *)((int)this + 0x1c8) = 0;
      *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)((int)this + 0x210);
    }
    FUN_10026790(this);
    *(undefined4 *)((int)this + 0x29c) = 0;
  }
  *(undefined4 *)((int)this + 0x510) = 0xffffd8f3;
  return;
}


// ---- FUN_10028100 @ 10028100

int * FUN_10028100(int *param_1,int param_2,int param_3,uint param_4,int *param_5,int *param_6)

{
  bool bVar1;
  int *in_EAX;
  int local_8;
  
  local_8 = 0;
  if ((param_4 & 0xfffffffe) != 0) {
    if (param_3 % (int)param_4 == 0) {
      *param_5 = 0;
      return (int *)(param_3 / (int)param_4);
    }
    do {
      bVar1 = false;
      local_8 = local_8 + 1;
      if ((int)param_4 < 1) {
        if (param_3 < 0) goto LAB_10028163;
LAB_10028170:
        *param_5 = -(param_3 % (int)param_4);
      }
      else {
        if (param_3 < 1) goto LAB_10028170;
LAB_10028163:
        *param_5 = param_4 - param_3 % (int)param_4;
      }
      if (param_6 != (int *)0x0) {
        if (param_2 == 1) {
          if (((0 < (int)param_4) && (param_6[2] < *param_5)) ||
             (((int)param_4 < 0 && (-*param_6 != *param_5 && *param_6 <= -*param_5)))) {
LAB_100281bf:
            param_4 = -param_4;
            bVar1 = true;
          }
        }
        else if (((0 < (int)param_4) && (param_6[3] < *param_5)) ||
                (((int)param_4 < 0 && (param_6[1] < -*param_5)))) goto LAB_100281bf;
      }
    } while ((bVar1) && (local_8 < 2));
    if ((local_8 == 2) && (bVar1)) {
      *param_5 = 0;
    }
    *param_1 = *param_1 + *param_5;
    in_EAX = param_1;
  }
  return in_EAX;
}


// ---- FUN_10028210 @ 10028210

void __thiscall FUN_10028210(void *this,int *param_1,short param_2,int *param_3,LPRECT param_4)

{
  int iVar1;
  uint local_44;
  uint local_40;
  tagRECT local_3c;
  int local_2c;
  int local_28;
  int local_24;
  tagPOINT local_20;
  tagRECT local_18;
  int local_8;
  int local_4;
  
  if (param_2 == 1) {
    local_20.x = (*(int *)((int)this + 0x2f4) - *(int *)((int)this + 0x2a0)) -
                 *(int *)((int)this + 0x448);
    local_20.y = (*(int *)((int)this + 0x2f8) - *(int *)((int)this + 0x44c)) -
                 *(int *)((int)this + 0x2a4);
    ClientToScreen(*(HWND *)((int)this + 0x42c),&local_20);
    local_3c.right = *(int *)((int)this + 0x2fc) + local_20.x;
    local_3c.left = local_20.x;
    local_3c.top = local_20.y;
    local_3c.bottom = *(int *)((int)this + 0x300) + local_20.y;
    if (param_1 != (int *)0x0) {
      if ((*(int *)((int)this + 0x43c) == 0) ||
         (*(int *)((int)this + 0x42c) == *(int *)((int)this + 0x43c))) {
        OffsetRect(&local_3c,*param_1 - *(int *)((int)this + 0x1d4),
                   param_1[1] - *(int *)((int)this + 0x1d8));
      }
      else {
        OffsetRect(&local_3c,*param_1 - *(int *)((int)this + 0x264),
                   param_1[1] - *(int *)((int)this + 0x268));
      }
    }
  }
  else if (param_2 == 0) {
    if (param_1 == (int *)0x0) {
      if ((*(int *)((int)this + 0x43c) == 0) ||
         (*(int *)((int)this + 0x42c) == *(int *)((int)this + 0x43c))) {
        local_3c.left = *(int *)((int)this + 0x1d4);
        local_3c.right = *(int *)((int)this + 0x1dc) + local_3c.left;
        local_3c.top = *(int *)((int)this + 0x1d8);
        local_3c.bottom = *(int *)((int)this + 0x1e0) + local_3c.top;
      }
      else {
        local_3c.left = *(int *)((int)this + 0x264);
        local_3c.right = *(int *)((int)this + 0x26c);
        local_3c.top = *(int *)((int)this + 0x268);
        local_3c.bottom = *(int *)((int)this + 0x270);
      }
    }
    else {
      local_3c.left = *param_1;
      local_3c.top = param_1[1];
      local_3c.right = param_1[2];
      local_3c.bottom = param_1[3];
    }
  }
  local_4 = local_3c.right - local_3c.left;
  local_8 = local_3c.bottom - local_3c.top;
  if (param_4 != (LPRECT)0x0) {
    param_4->left = local_3c.left;
    param_4->top = local_3c.top;
    param_4->right = local_3c.right;
    param_4->bottom = local_3c.bottom;
  }
  local_28 = *(int *)((int)this + 0x238) - local_4;
  if (local_3c.left <= local_28) {
    local_28 = local_3c.left;
  }
  if (local_28 <= *(int *)((int)this + 0x230)) {
    local_28 = *(int *)((int)this + 0x230);
  }
  local_2c = *(int *)((int)this + 0x23c) - local_8;
  if (local_3c.top <= local_2c) {
    local_2c = local_3c.top;
  }
  if (local_2c <= *(int *)((int)this + 0x234)) {
    local_2c = *(int *)((int)this + 0x234);
  }
  local_24 = local_28 - local_3c.left;
  *param_3 = local_24;
  iVar1 = local_2c - local_3c.top;
  param_3[1] = iVar1;
  if ((*(int *)((int)this + 0x434) == 0) ||
     (*(int *)((int)this + 0x42c) == *(int *)((int)this + 0x434))) {
    if (param_4 != (LPRECT)0x0) {
      OffsetRect(param_4,local_24,iVar1);
      param_4->left = param_4->left - *(int *)((int)this + 0x230);
      param_4->top = param_4->top - *(int *)((int)this + 0x234);
      param_4->right = *(int *)((int)this + 0x238) - param_4->right;
      param_4->bottom = *(int *)((int)this + 0x23c) - param_4->bottom;
    }
  }
  else {
    if (param_1 == (int *)0x0) {
      if ((*(int *)((int)this + 0x43c) == 0) ||
         (*(int *)((int)this + 0x43c) == *(int *)((int)this + 0x42c))) {
        local_18.left = *(int *)((int)this + 0x1d4);
        local_18.right = *(int *)((int)this + 0x1dc) + local_18.left;
        local_18.top = *(int *)((int)this + 0x1d8);
        local_18.bottom = *(int *)((int)this + 0x1e0) + local_18.top;
      }
      else {
        local_18.left = *(int *)((int)this + 0x264);
        local_18.right = *(int *)((int)this + 0x26c);
        local_18.top = *(int *)((int)this + 0x268);
        local_18.bottom = *(int *)((int)this + 0x270);
      }
    }
    else {
      local_18.left = *param_1;
      local_18.top = param_1[1];
      local_18.right = param_1[2];
      local_18.bottom = param_1[3];
    }
    OffsetRect(&local_18,local_24,iVar1);
    FUN_1001f8e0(this,*(HWND *)((int)this + 0x438),*(HWND *)((int)this + 0x43c),&local_18,&local_44,
                 &local_40);
    FUN_1002d520(this,*(HWND *)((int)this + 0x438));
    if ((local_44 != 0) &&
       (iVar1 = local_2c +
                ((*(int *)((int)this + 0x294) + 1) * local_40 - *(int *)((int)this + 0x23c)) +
                local_8, 0 < iVar1)) {
      if (local_2c - *(int *)((int)this + 0x234) < iVar1) {
        param_3[1] = param_3[1] + (*(int *)((int)this + 0x234) - local_2c);
      }
      else {
        param_3[1] = param_3[1] - iVar1;
      }
    }
    if ((local_40 != 0) &&
       (iVar1 = local_28 +
                ((*(int *)((int)this + 0x298) + 1) * local_44 - *(int *)((int)this + 0x238)) +
                local_4, 0 < iVar1)) {
      if (local_28 - *(int *)((int)this + 0x230) < iVar1) {
        *param_3 = *param_3 + (*(int *)((int)this + 0x230) - local_28);
      }
      else {
        *param_3 = *param_3 - iVar1;
      }
    }
    if (param_4 != (LPRECT)0x0) {
      OffsetRect(param_4,*param_3,param_3[1]);
      param_4->left = param_4->left - *(int *)((int)this + 0x230);
      param_4->top = param_4->top - *(int *)((int)this + 0x234);
      param_4->right =
           ((-1 - *(int *)((int)this + 0x298)) * local_40 - param_4->right) +
           *(int *)((int)this + 0x238);
      param_4->bottom =
           ((-1 - *(int *)((int)this + 0x294)) * local_44 - param_4->bottom) +
           *(int *)((int)this + 0x23c);
      return;
    }
  }
  return;
}


// ---- FUN_10028690 @ 10028690

undefined4 __thiscall FUN_10028690(void *this,undefined4 param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int iVar6;
  UINT UVar7;
  HBITMAP pHVar8;
  int iVar9;
  undefined4 local_10;
  
  local_10 = 0;
  iVar6 = *(int *)((int)this + 0x14c);
  iVar3 = *(int *)((int)this + 0x150);
  iVar9 = 1 << ((byte)iVar6 & 0x1f);
  if ((iVar3 == 0xf) || (iVar3 == 0x10)) {
    iVar9 = 3;
  }
  else if (8 < iVar3) {
    iVar9 = 0;
  }
  if (iVar3 == 0x10) {
    local_10 = 3;
  }
  iVar3 = FUN_10025a20(this,0);
  if ((iVar3 == 0) || (iVar3 == 3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x594);
  }
  iVar4 = (-(uint)(iVar3 == 0) & 2) + 2;
  pvVar5 = *(LPVOID *)((int)this + 0x15c);
  if (pvVar5 == (LPVOID)0x0) {
    hMem = GlobalAlloc(0x102,iVar4 * iVar9 + 0x28);
    pvVar5 = GlobalLock(hMem);
  }
  *(LPVOID *)((int)this + 0x4a0) = pvVar5;
  *(undefined4 *)((int)this + 0x4a4) = param_1;
  **(undefined4 **)((int)this + 0x4d8) = *(undefined4 *)((int)this + 0x4a0);
  *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x14) = *(undefined4 *)((int)this + 0x4a4);
  *(int *)(*(int *)((int)this + 0x4d8) + 4) = iVar3;
  *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x18) = *(undefined4 *)((int)this + 0x4a0);
  *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x2c) = *(undefined4 *)((int)this + 0x4a4);
  *(int *)(*(int *)((int)this + 0x4d8) + 0x1c) = iVar3;
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 4) = *(undefined4 *)((int)this + 0x4a0);
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x18) = *(undefined4 *)((int)this + 0x4a4);
  *(int *)(*(int *)((int)this + 0x4dc) + 8) = iVar3;
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x1c) = *(undefined4 *)((int)this + 0x4a0);
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x30) = *(undefined4 *)((int)this + 0x4a4);
  *(int *)(*(int *)((int)this + 0x4dc) + 0x20) = iVar3;
  if (*(undefined4 **)((int)this + 0x4a0) == (undefined4 *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x15c) == 0) {
    **(undefined4 **)((int)this + 0x4a0) = 0x28;
    *(int *)(*(int *)((int)this + 0x4a0) + 4) =
         *(int *)((int)this + 0x154) / ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3);
    *(undefined4 *)(*(int *)((int)this + 0x4a0) + 8) = *(undefined4 *)((int)this + 0x148);
    *(undefined2 *)(*(int *)((int)this + 0x4a0) + 0xc) = 1;
    *(short *)(*(int *)((int)this + 0x4a0) + 0xe) = (short)iVar6;
    *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x10) = local_10;
    iVar3 = *(int *)(*(int *)((int)this + 0x4a0) + 8);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *(int *)(*(int *)((int)this + 0x4a0) + 0x14) = *(int *)((int)this + 0x154) * iVar3;
    *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x18) = 0x2e1b;
    *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x1c) = 0x2e1b;
    *(int *)(*(int *)((int)this + 0x4a0) + 0x20) = iVar9;
    *(int *)(*(int *)((int)this + 0x4a0) + 0x24) = iVar9;
  }
  if (iVar9 == 3) {
    if (*(int *)((int)this + 0x150) == 0xf) {
      *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x28) = 0x7c00;
      *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x2c) = 0x3e0;
    }
    else {
      if (*(int *)((int)this + 0x150) != 0x10) goto LAB_100288fa;
      *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x28) = 0xf800;
      *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x2c) = 0x7e0;
    }
    *(undefined4 *)(*(int *)((int)this + 0x4a0) + 0x30) = 0x1f;
  }
LAB_100288fa:
  iVar3 = FUN_10025a20(this,0);
  if (((iVar3 != 0) && (iVar3 != 3)) && (*(int *)((int)this + 0x594) == 1)) {
    FUN_1002ce70(this,*(int *)((int)this + 0x4a0),iVar9,iVar4);
  }
  if (((8 < iVar6) && (*(int *)((int)this + 0x288) < 9)) &&
     ((iVar6 = FUN_10025a20(this,1), iVar6 == 1 && (*(int *)((int)this + 0xbc) == -9999)))) {
    iVar6 = FUN_10025a20(this,0);
    if (((iVar6 == 0) || (iVar6 == 3)) || (iVar6 = 2, *(int *)((int)this + 0x594) == 0)) {
      iVar6 = 4;
    }
    puVar1 = (uint *)((int)this + 0x4c0);
    iVar3 = *(int *)((int)this + 0x13c) * 8 + 0x1f;
    *puVar1 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2;
    iVar3 = FUN_10025a20(this,0);
    if ((iVar3 == 0) || (iVar3 == 3)) {
      UVar7 = 0;
    }
    else {
      UVar7 = *(UINT *)((int)this + 0x594);
    }
    piVar2 = (int *)((int)this + 0x4a8);
    pHVar8 = FUN_10020000(1,*(uint *)((int)this + 0x13c),*(int *)((int)this + 0x148),8,piVar2,
                          (void **)((int)this + 0x164),puVar1,UVar7);
    *(HBITMAP *)((int)this + 0x4ac) = pHVar8;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x20) = *(undefined4 *)((int)this + 0x164);
    *(int *)(*(int *)((int)this + 0x4d8) + 0x18) = *piVar2;
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x1c) = *(undefined4 *)((int)this + 0x594);
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x2c) = *(undefined4 *)((int)this + 0x4ac);
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x24) = *(undefined4 *)((int)this + 0x164);
    *(int *)(*(int *)((int)this + 0x4dc) + 0x1c) = *piVar2;
    iVar3 = FUN_10025a20(this,0);
    if ((iVar3 == 0) || (iVar3 == 3)) {
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x20) = 0;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x20) = *(undefined4 *)((int)this + 0x594);
    }
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x30) = *(undefined4 *)((int)this + 0x4ac);
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      *(undefined4 *)*piVar2 = 0x28;
      *(undefined4 *)(*piVar2 + 4) = *(undefined4 *)((int)this + 0x13c);
      *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)((int)this + 0x148);
      *(undefined2 *)(*piVar2 + 0xc) = 1;
      *(undefined2 *)(*piVar2 + 0xe) = 8;
      *(undefined4 *)(*piVar2 + 0x10) = 0;
      iVar3 = *(int *)(*(int *)((int)this + 0x4a0) + 8);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      *(uint *)(*piVar2 + 0x14) = *puVar1 * iVar3;
      *(undefined4 *)(*piVar2 + 0x18) = 0x2e1b;
      *(undefined4 *)(*piVar2 + 0x1c) = 0x2e1b;
      *(undefined4 *)(*piVar2 + 0x20) = 0x100;
      *(undefined4 *)(*piVar2 + 0x24) = 0x100;
      FUN_1002ce70(this,*piVar2,0x100,iVar6);
    }
  }
  return 1;
}


// ---- FUN_10028b20 @ 10028b20

undefined4 __fastcall FUN_10028b20(void *param_1)

{
  void *pvVar1;
  HGLOBAL pvVar2;
  
  if ((*(int *)((int)param_1 + 0x130) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)param_1 + 0x130) + 0x6c), pvVar1 != (void *)0x0)) {
    FUN_10011550(pvVar1,0);
  }
  if ((*(int *)((int)param_1 + 0x4b0) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)param_1 + 0x4b0) + 0x6c), pvVar1 != (void *)0x0)) {
    FUN_10011550(pvVar1,0);
  }
  if ((*(int *)((int)param_1 + 0x4bc) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)param_1 + 0x4bc) + 0x6c), pvVar1 != (void *)0x0)) {
    FUN_10011550(pvVar1,0);
  }
  if (*(int *)((int)param_1 + 0x164) != 0) {
    *(undefined4 *)((int)param_1 + 0x164) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x20) = *(undefined4 *)((int)param_1 + 0x160);
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x24) = *(undefined4 *)((int)param_1 + 0x160);
  }
  if (*(int *)((int)param_1 + 0x4a8) != 0) {
    FUN_10025a20(param_1,0);
    FUN_10020210(1,*(HGDIOBJ *)((int)param_1 + 0x4ac));
    *(undefined4 *)((int)param_1 + 0x4a8) = 0;
    *(undefined4 *)((int)param_1 + 0x4ac) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x18) = *(undefined4 *)((int)param_1 + 0x4a0);
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x2c) = *(undefined4 *)((int)param_1 + 0x4a4);
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x1c) = *(undefined4 *)((int)param_1 + 0x4a0);
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x30) = *(undefined4 *)((int)param_1 + 0x4a4);
  }
  if (*(int *)((int)param_1 + 0x4a0) != 0) {
    *(undefined4 *)((int)param_1 + 0x4a0) = 0;
    **(undefined4 **)((int)param_1 + 0x4d8) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 4) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x2c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x1c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 4) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 8) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x1c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x30) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x20) = 0;
  }
  if ((*(int *)((int)param_1 + 0x15c) == 0) && (*(LPCVOID *)((int)param_1 + 0x4a0) != (LPCVOID)0x0))
  {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x4a0));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x4a0));
    GlobalFree(pvVar2);
  }
  return 1;
}


// ---- FUN_10028d20 @ 10028d20

void __thiscall FUN_10028d20(void *this,HDC param_1,LPPOINT param_2,int param_3,uint param_4)

{
  if (0 < param_3) {
    if ((param_4 & 2) == 0) {
      SetMapMode(param_1,8);
      SetWindowOrgEx(param_1,*(int *)((int)this + 0x2a0) + *(int *)((int)this + 0x448),
                     *(int *)((int)this + 0x44c) + *(int *)((int)this + 0x2a4),(LPPOINT)0x0);
      SetWindowExtEx(param_1,*(int *)((int)this + 0x2ec),*(int *)((int)this + 0x2f0),(LPSIZE)0x0);
      SetViewportOrgEx(param_1,*(int *)((int)this + 0x21c),*(int *)((int)this + 0x220),(LPPOINT)0x0)
      ;
      SetViewportExtEx(param_1,*(int *)((int)this + 0x2e4),*(int *)((int)this + 0x2e8),(LPSIZE)0x0);
    }
    if ((param_4 & 1) != 0) {
      DPtoLP(param_1,param_2,param_3);
      return;
    }
    LPtoDP(param_1,param_2,param_3);
  }
  return;
}


// ---- FUN_10028de0 @ 10028de0

void FUN_10028de0(HWND param_1,LPPOINT param_2,int param_3)

{
  uint uVar1;
  HWND hWnd;
  
  hWnd = (HWND)0x0;
  uVar1 = GetWindowLongA(param_1,-0x10);
  if ((uVar1 & 0x40000000) != 0) {
    hWnd = GetParent(param_1);
  }
  if (hWnd != (HWND)0x0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      ScreenToClient(hWnd,param_2);
      param_2 = param_2 + 1;
    }
  }
  return;
}


// ---- FUN_10028e40 @ 10028e40

undefined4 __thiscall
FUN_10028e40(void *this,HRGN param_1,HPALETTE param_2,DWORD param_3,DWORD param_4,int param_5,
            HDC param_6)

{
  HWND hWnd;
  HRGN pHVar1;
  HPALETTE pHVar2;
  bool bVar3;
  HDC hdc;
  BOOL BVar4;
  HRGN pHVar5;
  HBRUSH pHVar6;
  undefined3 extraout_var;
  int iVar7;
  RECT *pRVar8;
  RECT local_68;
  HPALETTE local_58;
  undefined4 local_54;
  RECT local_50;
  tagRECT tStack_40;
  RECT local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_54 = 1;
  hWnd = *(HWND *)((int)this + 0x42c);
  if (hWnd == (HWND)0x0) {
    local_54 = 0;
  }
  else {
    pRVar8 = &local_30;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      pRVar8->left = 0;
      pRVar8 = (RECT *)&pRVar8->top;
    }
    if (((*(int *)((int)this + 0x488) != -9999) || (*(int *)((int)this + 0x48c) != -9999)) ||
       (*(int *)((int)this + 0x490) != -9999)) {
      hdc = param_6;
      if (param_6 == (HDC)0x0) {
        hdc = GetDC(hWnd);
      }
      SetMapMode(hdc,8);
      SetWindowOrgEx(hdc,*(int *)((int)this + 0x2a0) + *(int *)((int)this + 0x448),
                     *(int *)((int)this + 0x44c) + *(int *)((int)this + 0x2a4),(LPPOINT)0x0);
      SetWindowExtEx(hdc,*(int *)((int)this + 0x2ec),*(int *)((int)this + 0x2f0),(LPSIZE)0x0);
      SetViewportOrgEx(hdc,*(int *)((int)this + 0x21c),*(int *)((int)this + 0x220),(LPPOINT)0x0);
      SetViewportExtEx(hdc,*(int *)((int)this + 0x2e4),*(int *)((int)this + 0x2e8),(LPSIZE)0x0);
      BVar4 = IsRectEmpty((RECT *)((int)this + 0x16c));
      if (BVar4 == 0) {
        local_30.left = *(int *)((int)this + 0x16c);
        local_30.top = *(int *)((int)this + 0x170);
        local_30.right = *(int *)((int)this + 0x174);
        local_30.bottom = *(int *)((int)this + 0x178);
        local_20 = 0;
        local_1c = 4;
        FUN_10028d20(this,hdc,(LPPOINT)&local_30,2,3);
        ExcludeClipRect(hdc,local_30.left,local_30.top,local_30.right,local_30.bottom);
      }
      if (param_5 == 0) {
        local_68.left = (LONG)param_1;
        local_68.right = (int)&param_1->unused + param_3;
        local_68.top = (LONG)param_2;
        local_68.bottom = (int)&param_2->unused + param_4;
        FUN_10028d20(this,hdc,(LPPOINT)&local_68,2,3);
        if (1 < *(int *)((int)this + 0x2e4)) {
          local_68.left = (int)&((HRGN)(local_68.left + -4))->unused + 3;
          local_68.right = local_68.right + 1;
        }
        if (1 < *(int *)((int)this + 0x2e8)) {
          local_68.top = (int)&((HPALETTE)(local_68.top + -4))->unused + 3;
          local_68.bottom = local_68.bottom + 1;
        }
        pHVar5 = (HRGN)local_68.left;
        if (local_68.left < 0) {
          pHVar5 = (HRGN)0x0;
        }
        pHVar1 = *(HRGN *)((int)this + 0x13c);
        param_1 = pHVar1;
        if ((int)pHVar5 <= (int)pHVar1) {
          param_1 = pHVar5;
        }
        param_3 = (int)pHVar1 - (int)param_1;
        if (local_68.right - local_68.left <= (int)pHVar1 - (int)param_1) {
          param_3 = local_68.right - local_68.left;
        }
        if ((int)param_3 < 0) {
          param_3 = 0;
        }
        param_2 = (HPALETTE)local_68.top;
        if (local_68.top < 0) {
          param_2 = (HPALETTE)0x0;
        }
        pHVar2 = *(HPALETTE *)((int)this + 0x140);
        if ((int)pHVar2 <= (int)param_2) {
          param_2 = pHVar2;
        }
        param_4 = (int)pHVar2 - (int)param_2;
        if (local_68.bottom - local_68.top <= (int)pHVar2 - (int)param_2) {
          param_4 = local_68.bottom - local_68.top;
        }
        if ((int)param_4 < 0) {
          param_4 = 0;
        }
      }
      if ((*(int *)((int)this + 0x488) == -0x270d) || (*(int *)((int)this + 0x490) == -0x270d)) {
        if (*(int *)((int)this + 0xbc) == -0x270d) {
          local_50.bottom = (int)&param_2->unused + param_4;
          local_50.left = (LONG)param_1;
          local_50.right = (int)&param_1->unused + param_3;
          local_50.top = (LONG)param_2;
          FUN_10025480(this,0x10,0x20000002,param_1,param_2,param_3,param_4,0,0);
          if ((*(HPALETTE *)((int)this + 0x4d0) != (HPALETTE)0x0) &&
             (*(int *)((int)this + 0x4d4) != *(int *)((int)this + 0x42c))) {
            local_58 = (HPALETTE)
                       FUN_1002d8d0(hdc,*(HPALETTE *)((int)this + 0x4d0),
                                    (uint)(*(int *)((int)this + 0x59c) == -0x270d));
            FUN_1002d8c0(hdc);
            iVar7 = FUN_10025a20(this,0);
            if (iVar7 == 0) {
              (**(code **)((int)this + 0x5b4))
                        (*(undefined4 *)((int)this + 0x5a8),*(undefined4 *)((int)this + 0x4d0));
            }
          }
          pHVar6 = CreateSolidBrush(*(COLORREF *)((int)this + 0x168));
          if (*(int *)((int)this + 0x488) == -0x270d) {
            FillRect(hdc,&local_50,pHVar6);
          }
          DeleteObject(pHVar6);
          if ((*(int *)((int)this + 0x4d0) != 0) &&
             (*(int *)((int)this + 0x4d4) != *(int *)((int)this + 0x42c))) {
            FUN_1002d8d0(hdc,local_58,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
          }
          FUN_10025480(this,0x10,0x10000002,param_1,param_2,param_3,param_4,0,0);
        }
        else if ((0 < (int)param_3) && (0 < (int)param_4)) {
          BVar4 = IsRectEmpty((RECT *)((int)this + 0x16c));
          if (BVar4 == 0) {
            pRVar8 = &local_30;
          }
          else {
            pRVar8 = (RECT *)0x0;
          }
          bVar3 = FUN_10029400(this,hdc,(int)param_1,param_2,param_3,param_4,pRVar8);
          local_54 = CONCAT31(extraout_var,bVar3);
        }
      }
      local_68.right = *(int *)((int)this + 0x13c);
      local_68.bottom = *(int *)((int)this + 0x140);
      local_68.left = 0;
      local_68.top = 0;
      FUN_10028d20(this,hdc,(LPPOINT)&local_68,2,2);
      GetClientRect(*(HWND *)((int)this + 0x42c),&tStack_40);
      if ((*(int *)((int)this + 0x430) == 0) &&
         (BVar4 = EqualRect(&tStack_40,&local_68), BVar4 == 0)) {
        local_58 = (HPALETTE)
                   CreateRectRgn(tStack_40.left,tStack_40.top,tStack_40.right,tStack_40.bottom);
        local_50.left =
             (LONG)CreateRectRgn(local_68.left,local_68.top,local_68.right,local_68.bottom);
        pHVar5 = CreateRectRgn(0,0,0,0);
        iVar7 = CombineRgn(pHVar5,(HRGN)local_58,(HRGN)local_50.left,4);
        if ((iVar7 != 1) && (iVar7 != 0)) {
          SetWindowOrgEx(hdc,0,0,(LPPOINT)0x0);
          SetWindowExtEx(hdc,1,1,(LPSIZE)0x0);
          SetViewportOrgEx(hdc,0,0,(LPPOINT)0x0);
          SetViewportExtEx(hdc,1,1,(LPSIZE)0x0);
          SelectObject(hdc,pHVar5);
          if (*(int *)((int)this + 0x48c) == -0x270d) {
            pHVar6 = GetStockObject(4);
            FillRgn(hdc,pHVar5,pHVar6);
          }
        }
        DeleteObject(pHVar5);
        DeleteObject((HGDIOBJ)local_50.left);
        DeleteObject(local_58);
      }
      if (param_6 == (HDC)0x0) {
        ReleaseDC(*(HWND *)((int)this + 0x42c),hdc);
      }
    }
  }
  return local_54;
}


// ---- FUN_10029400 @ 10029400

bool __thiscall
FUN_10029400(void *this,HDC param_1,int param_2,HPALETTE param_3,DWORD param_4,DWORD param_5,
            RECT *param_6)

{
  void *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  HDC hdc;
  HPALETTE pHVar4;
  HGDIOBJ h;
  BOOL BVar5;
  uint uVar6;
  COLORREF color;
  int iVar7;
  UINT UVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  LONG *pLVar14;
  BITMAPINFO *pBVar15;
  undefined4 *puVar16;
  void *pvVar17;
  BOOL BStack_44;
  HGDIOBJ local_40;
  HPALETTE pHStack_3c;
  tagRECT local_34;
  tagRECT local_24;
  tagRECT local_14;
  HPALETTE local_4;
  
  iVar3 = param_2;
  if (param_6 != (RECT *)0x0) {
    pLVar14 = &param_6[1].top;
    do {
      if (*pLVar14 == 0) break;
      if (((RECT *)(pLVar14 + -1))->left != 2) {
        ClientToScreen(*(HWND *)((int)this + 0x42c),(LPPOINT)(pLVar14 + -5));
        ClientToScreen(*(HWND *)((int)this + 0x42c),(LPPOINT)(pLVar14 + -3));
      }
      pLVar14 = pLVar14 + 6;
    } while (param_6 != (RECT *)0x0);
  }
  iVar7 = *(int *)((int)this + 0x4bc);
  if ((iVar7 == 0) || (iVar11 = -0x270d, *(int *)((int)this + 0x114) != -0x270d)) {
    iVar7 = *(int *)((int)this + 0x130);
    pvVar17 = *(void **)((int)this + 0x160);
    pBVar15 = *(BITMAPINFO **)((int)this + 0x4a0);
    local_40 = *(HGDIOBJ *)((int)this + 0x4a4);
    iVar11 = *(int *)((int)this + 0x108);
  }
  else {
    pvVar17 = *(void **)(iVar7 + 0x44);
    pBVar15 = *(BITMAPINFO **)(iVar7 + 0x58);
    local_40 = *(HGDIOBJ *)(iVar7 + 0x54);
  }
  if (*(int *)((int)this + 0xf8) != 0) {
    GetClientRect(*(HWND *)((int)this + 0x42c),&local_34);
    FUN_10028d20(this,param_1,(LPPOINT)&local_34,2,1);
    IntersectClipRect(param_1,local_34.left,local_34.top,local_34.right,local_34.bottom);
  }
  local_24.left = param_2;
  local_24.top = (LONG)param_3;
  local_34.left = param_4 + param_2;
  local_24.bottom = (int)&param_3->unused + param_5;
  local_14.left = param_2;
  local_14.top = (LONG)param_3;
  local_24.right = local_34.left;
  local_14.right = local_34.left;
  local_14.bottom = local_24.bottom;
  LPtoDP(param_1,(LPPOINT)&local_14,2);
  OffsetRect(&local_14,*(int *)((int)this + 0x1e4) - *(int *)((int)this + 0x21c),
             *(int *)((int)this + 0x1e8) - *(int *)((int)this + 0x220));
  iVar2 = FUN_10025a20(this,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x2ec) * 4;
    iVar12 = (int)param_4 % iVar2;
    if (iVar12 != 0) {
      iVar2 = iVar2 - iVar12;
      param_4 = param_4 + iVar2;
      if ((*(int *)((int)this + 0x13c) < (int)(param_2 + param_4)) &&
         (param_2 = param_2 - iVar2, param_2 < 0)) {
        param_2 = 0;
        param_4 = local_34.left + (iVar2 - iVar3);
        if ((int)*(DWORD *)((int)this + 0x13c) < (int)param_4) {
          param_4 = *(DWORD *)((int)this + 0x13c);
        }
      }
    }
  }
  FUN_10025480(this,0x10,0x20000002,param_2,param_3,param_4,param_5,0,0);
  if (*(HPALETTE *)((int)this + 0x4d0) != (HPALETTE)0x0) {
    local_4 = (HPALETTE)
              FUN_1002d8d0(param_1,*(HPALETTE *)((int)this + 0x4d0),
                           (uint)(*(int *)((int)this + 0x59c) == -0x270d));
    FUN_1002d8c0(param_1);
    iVar3 = FUN_10025a20(this,0);
    if (iVar3 == 0) {
      (**(code **)((int)this + 0x5b4))
                (*(undefined4 *)((int)this + 0x5a8),*(undefined4 *)((int)this + 0x4d0));
    }
  }
  iVar3 = FUN_10025a20(this,0);
  if (iVar3 == 0) {
    if (((iVar7 != 0) && (pvVar17 != (void *)0x0)) && (pBVar15 != (BITMAPINFO *)0x0)) {
      if (*(int *)((int)this + 0x590) == 0xb) {
        iVar3 = *(int *)((int)this + 0x2e4);
        iVar7 = *(int *)((int)this + 0x2ec);
        local_34.left = (int)(param_5 * *(int *)((int)this + 0x2e8)) / *(int *)((int)this + 0x2f0);
        iVar11 = *(int *)((int)this + 0x2e8);
        iVar2 = *(int *)((int)this + 0x2f0);
        SetWindowOrgEx(param_1,((*(int *)((int)this + 0x2a0) + *(int *)((int)this + 0x448)) * iVar3)
                               / iVar7,
                       ((*(int *)((int)this + 0x44c) + *(int *)((int)this + 0x2a4)) *
                       *(int *)((int)this + 0x2e8)) / *(int *)((int)this + 0x2f0),(LPPOINT)0x0);
        SetWindowExtEx(param_1,1,1,(LPSIZE)0x0);
        SetViewportExtEx(param_1,1,1,(LPSIZE)0x0);
        if (*(int *)((int)this + 0x488) == -0x270d) {
          BStack_44 = (**(code **)((int)this + 0x5bc))
                                (*(undefined4 *)((int)this + 0x5a8),param_1,
                                 (param_2 * iVar3) / iVar7,((int)param_3 * iVar11) / iVar2,
                                 (int)(param_4 * iVar3) / iVar7,local_34.left,pBVar15,pvVar17,
                                 param_2,param_3,param_4,param_5,0x200);
        }
        SetWindowOrgEx(param_1,*(int *)((int)this + 0x2a0) + *(int *)((int)this + 0x448),
                       *(int *)((int)this + 0x44c) + *(int *)((int)this + 0x2a4),(LPPOINT)0x0);
        SetWindowExtEx(param_1,*(int *)((int)this + 0x2ec),*(int *)((int)this + 0x2f0),(LPSIZE)0x0);
        SetViewportExtEx(param_1,*(int *)((int)this + 0x2e4),*(int *)((int)this + 0x2e8),(LPSIZE)0x0
                        );
      }
      else if (*(int *)((int)this + 0x488) == -0x270d) {
        BStack_44 = (**(code **)((int)this + 0x5bc))
                              (*(undefined4 *)((int)this + 0x5a8),param_1,param_2,param_3,param_4,
                               param_5,pBVar15,pvVar17,param_2,param_3,param_4,param_5,0x200);
      }
    }
  }
  else {
    iVar3 = FUN_10025a20(this,0);
    if (iVar3 == 3) {
      if ((iVar7 != 0) && (this_00 = *(void **)(iVar7 + 0x6c), this_00 != (void *)0x0)) {
        if ((((iVar11 == -0x270d) || (8 < *(int *)((int)this + 0x288))) &&
            (*(int *)((int)this + 0x120) == -9999)) &&
           (((*(uint *)((int)this + 0x494) & 1) != 0 || (*(int *)((int)this + 0x128) == -9999)))) {
          if ((*(int *)((int)this + 0x488) == -0x270d) &&
             (BStack_44 = FUN_10011b70(this_00,&local_14,&local_24,param_6), BStack_44 == 0)) {
            *(undefined4 *)((int)this + 0x120) = 0xffffd8f3;
            if ((*(int *)((int)this + 0x434) != 0) ||
               (BVar5 = 0, *(int *)((int)this + 0xe4) == -0x270d)) {
              BVar5 = 1;
            }
            InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar5);
          }
        }
        else if (*(BITMAPINFO **)((int)this_00 + 0x38) != (BITMAPINFO *)0x0) {
          local_40 = (HGDIOBJ)0x0;
          pBVar15 = *(BITMAPINFO **)((int)this_00 + 0x38);
          goto LAB_10029984;
        }
      }
    }
    else {
      iVar3 = FUN_10025a20(this,0);
      if ((iVar3 == 1) && (*(BITMAPINFO **)((int)this + 0x4a8) != (BITMAPINFO *)0x0)) {
        pvVar17 = *(void **)((int)this + 0x164);
        local_40 = *(HGDIOBJ *)((int)this + 0x4ac);
        pBVar15 = *(BITMAPINFO **)((int)this + 0x4a8);
      }
LAB_10029984:
      if (((iVar7 != 0) && (pvVar17 != (void *)0x0)) && (pBVar15 != (BITMAPINFO *)0x0)) {
        pHStack_3c = param_3;
        if (local_40 == (HGDIOBJ)0x0) {
          iVar3 = (*(int *)((int)this + 0x140) - param_5) - (int)param_3;
          SetStretchBltMode(param_1,3);
          if (*(int *)((int)this + 0x488) == -0x270d) {
            if ((*(int *)((int)this + 0xc) != 4) ||
               (bVar1 = true, 399 < (uint)(*(int *)((int)this + 4) + *(int *)this * 100))) {
              bVar1 = false;
            }
            if (((bVar1) && ((pBVar15->bmiHeader).biHeight < 0)) &&
               ((*(uint *)((int)this + 0x464) & 0x2000) == 0)) {
              param_5 = *(DWORD *)((int)this + 0x140);
              pHStack_3c = (HPALETTE)0x0;
              iVar3 = 0;
            }
            param_3 = pHStack_3c;
            if (((((local_14.left - local_14.right) + local_24.right == local_24.left) &&
                 ((local_14.bottom - local_14.top) + local_24.top == local_24.bottom)) &&
                ((*(uint *)((int)this + 0x464) & 0x2000) == 0)) &&
               ((pBVar15->bmiHeader).biHeight < 0)) {
              iVar7 = FUN_10025a20(this,0);
              if ((iVar7 == 0) || (iVar7 == 3)) {
                UVar8 = 0;
              }
              else {
                UVar8 = *(UINT *)((int)this + 0x594);
              }
              BStack_44 = SetDIBitsToDevice(param_1,param_2,(int)pHStack_3c,param_4,param_5,param_2,
                                            iVar3,0,*(UINT *)((int)this + 0x140),pvVar17,pBVar15,
                                            UVar8);
            }
            else {
              iVar7 = FUN_10025a20(this,0);
              if ((iVar7 == 0) || (iVar7 == 3)) {
                UVar8 = 0;
              }
              else {
                UVar8 = *(UINT *)((int)this + 0x594);
              }
              BStack_44 = StretchDIBits(param_1,param_2,(int)pHStack_3c,param_4,param_5,param_2,
                                        iVar3,param_4,param_5,pvVar17,pBVar15,UVar8,0xcc0020);
            }
          }
        }
        else {
          hdc = CreateCompatibleDC(param_1);
          if (hdc != (HDC)0x0) {
            pHVar4 = (HPALETTE)local_34.left;
            if (*(HPALETTE *)((int)this + 0x4d0) != (HPALETTE)0x0) {
              pHVar4 = (HPALETTE)
                       FUN_1002d8d0(hdc,*(HPALETTE *)((int)this + 0x4d0),
                                    (uint)(*(int *)((int)this + 0x59c) == -0x270d));
              FUN_1002d8c0(param_1);
            }
            h = SelectObject(hdc,local_40);
            SetStretchBltMode(param_1,3);
            if (*(int *)((int)this + 0x488) == -0x270d) {
              BStack_44 = StretchBlt(param_1,param_2,(int)param_3,param_4,param_5,hdc,
                                     *(int *)((int)this + 0x134) + param_2,
                                     (int)&param_3->unused + *(int *)((int)this + 0x138),param_4,
                                     param_5,0xcc0020);
            }
            SelectObject(hdc,h);
            DeleteDC(hdc);
            if ((*(int *)((int)this + 0x4d0) != 0) &&
               (*(int *)((int)this + 0x4d4) != *(int *)((int)this + 0x42c))) {
              FUN_1002d8d0(hdc,pHVar4,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
            }
          }
        }
      }
    }
  }
  if ((((*(int *)((int)this + 0x488) != -0x270d) || (*(int *)((int)this + 0x4b0) == 0)) ||
      ((*(int *)((int)this + 0x4b4) == 0 ||
       ((*(int *)((int)this + 0x10c) != -0x270d || (*(int *)((int)this + 0x110) != -9999)))))) ||
     ((*(int *)((int)this + 0x4bc) != 0 && (*(int *)((int)this + 0x114) != -9999))))
  goto LAB_1002a119;
  pvVar17 = *(void **)(*(int *)((int)this + 0x4b0) + 0x6c);
  if ((pvVar17 != (void *)0x0) && (*(int *)((int)this + 0x120) == -9999)) {
    iVar3 = FUN_10011ba0(pvVar17,&local_14,&local_24,*(int *)((int)this + 0x4b4),param_6);
    BStack_44 = BStack_44 + iVar3;
    if (BStack_44 == 0) {
      *(undefined4 *)((int)this + 0x120) = 0xffffd8f3;
      if ((*(int *)((int)this + 0x434) != 0) || (BVar5 = 0, *(int *)((int)this + 0xe4) == -0x270d))
      {
        BVar5 = 1;
      }
      InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,BVar5);
    }
    goto LAB_1002a119;
  }
  local_34.left = (LONG)param_3;
  pHStack_3c = param_3;
  SetStretchBltMode(param_1,3);
  uVar6 = GetDeviceCaps(param_1,0x5e);
  if ((uVar6 & 1) == 0) {
    if (*(int *)((int)this + 0x14c) < 9) {
      iVar3 = *(int *)(*(int *)((int)this + 0x4b0) + 0x58);
      puVar16 = (undefined4 *)(iVar3 + 0x28);
      puVar9 = operator_new(*(int *)(iVar3 + 0x20) << 2);
      if (puVar9 != (undefined4 *)0x0) {
        uVar6 = 0;
        puVar10 = puVar16;
        puVar13 = puVar9;
        if (*(int *)(iVar3 + 0x20) != 0) {
          do {
            *puVar13 = *puVar10;
            if (*(uint *)(*(int *)((int)this + 0x4b4) + 0x70) == uVar6) {
              *(undefined1 *)puVar10 = 0xff;
              *(undefined1 *)((int)puVar10 + 1) = 0xff;
              *(undefined1 *)((int)puVar10 + 2) = 0xff;
            }
            else {
              *(undefined1 *)puVar10 = 0;
              *(undefined1 *)((int)puVar10 + 1) = 0;
              *(undefined1 *)((int)puVar10 + 2) = 0;
            }
            uVar6 = uVar6 + 1;
            *(undefined1 *)((int)puVar10 + 3) = 0;
            puVar10 = puVar10 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar6 < *(uint *)(iVar3 + 0x20));
        }
        local_34.left = (*(DWORD *)((int)this + 0x140) - param_5) - local_34.left;
        if (((*(int *)((int)this + 0xc) == 4) &&
            (*(int *)(*(int *)(*(int *)((int)this + 0x4b0) + 0x58) + 8) < 0)) &&
           ((*(uint *)((int)this + 0x464) & 0x2000) == 0)) {
          pHStack_3c = (HPALETTE)0x0;
          local_34.left = 0;
          param_5 = *(DWORD *)((int)this + 0x140);
        }
        iVar7 = FUN_10025a20(this,0);
        if ((iVar7 == 0) || (iVar7 == 3)) {
          UVar8 = 0;
        }
        else {
          UVar8 = *(UINT *)((int)this + 0x594);
        }
        iVar7 = StretchDIBits(param_1,param_2,(int)pHStack_3c,param_4,param_5,param_2,local_34.left,
                              param_4,param_5,*(void **)(*(int *)((int)this + 0x4b0) + 0x44),
                              *(BITMAPINFO **)(*(int *)((int)this + 0x4b0) + 0x58),UVar8,0x8800c6);
        puVar10 = puVar9;
        puVar13 = puVar16;
        for (uVar6 = 0; uVar6 < *(uint *)(iVar3 + 0x20); uVar6 = uVar6 + 1) {
          if (*(uint *)(*(int *)((int)this + 0x4b4) + 0x70) == uVar6) {
            *(undefined1 *)puVar13 = 0;
            *(undefined1 *)((int)puVar13 + 1) = 0;
            *(undefined1 *)((int)puVar13 + 2) = 0;
            *(undefined1 *)((int)puVar13 + 3) = 0;
          }
          else {
            *puVar13 = *puVar10;
          }
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
        iVar11 = FUN_10025a20(this,0);
        if ((iVar11 == 0) || (iVar11 == 3)) {
          UVar8 = 0;
        }
        else {
          UVar8 = *(UINT *)((int)this + 0x594);
        }
        iVar11 = StretchDIBits(param_1,param_2,(int)pHStack_3c,param_4,param_5,param_2,local_34.left
                               ,param_4,param_5,*(void **)(*(int *)((int)this + 0x4b0) + 0x44),
                               *(BITMAPINFO **)(*(int *)((int)this + 0x4b0) + 0x58),UVar8,0xee0086);
        BStack_44 = BStack_44 + iVar7 + iVar11;
        uVar6 = 0;
        puVar10 = puVar9;
        if (*(int *)(iVar3 + 0x20) != 0) {
          do {
            *puVar16 = *puVar10;
            puVar16 = puVar16 + 1;
            uVar6 = uVar6 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar6 < *(uint *)(iVar3 + 0x20));
        }
        operator_delete(puVar9);
        param_3 = pHStack_3c;
      }
    }
    goto LAB_1002a119;
  }
  uVar6 = SetBkMode(param_1,3);
  color = SetBkColor(param_1,*(COLORREF *)(*(int *)((int)this + 0x4b4) + 0x70));
  UVar8 = *(UINT *)((int)this + 0x140);
  iVar3 = (UVar8 - param_5) - (int)param_3;
  if ((*(int *)((int)this + 0xc) != 4) ||
     (bVar1 = true, 399 < (uint)(*(int *)((int)this + 4) + *(int *)this * 100))) {
    bVar1 = false;
  }
  if (((bVar1) && (*(int *)(*(int *)(*(int *)((int)this + 0x4b0) + 0x58) + 8) < 0)) &&
     ((*(uint *)((int)this + 0x464) & 0x2000) == 0)) {
    iVar3 = 0;
    pHStack_3c = (HPALETTE)0x0;
    param_5 = UVar8;
  }
  if ((((local_14.left - local_14.right) + local_24.right == local_24.left) &&
      ((local_14.bottom - local_14.top) + local_24.top == local_24.bottom)) &&
     ((*(uint *)((int)this + 0x464) & 0x2000) == 0)) {
    pBVar15 = *(BITMAPINFO **)(*(int *)((int)this + 0x4b0) + 0x58);
    if (-1 < (pBVar15->bmiHeader).biHeight) goto LAB_10029e5d;
    iVar3 = SetDIBitsToDevice(param_1,param_2,(int)pHStack_3c,param_4,param_5,param_2,iVar3,0,UVar8,
                              *(void **)(*(int *)((int)this + 0x4b0) + 0x44),pBVar15,0);
  }
  else {
LAB_10029e5d:
    iVar7 = FUN_10025a20(this,0);
    if ((iVar7 == 0) || (iVar7 == 3)) {
      UVar8 = 0;
    }
    else {
      UVar8 = *(UINT *)((int)this + 0x594);
    }
    iVar3 = StretchDIBits(param_1,param_2,(int)pHStack_3c,param_4,param_5,param_2,iVar3,param_4,
                          param_5,*(void **)(*(int *)((int)this + 0x4b0) + 0x44),
                          *(BITMAPINFO **)(*(int *)((int)this + 0x4b0) + 0x58),UVar8,0xcc0020);
  }
  BStack_44 = BStack_44 + iVar3;
  SetBkColor(param_1,color);
  SetBkMode(param_1,uVar6 & 0xffff);
  param_3 = pHStack_3c;
LAB_1002a119:
  if (*(int *)((int)this + 0x4d0) != 0) {
    FUN_1002d8d0(param_1,local_4,(uint)(*(int *)((int)this + 0x59c) == -0x270d));
  }
  FUN_10025480(this,0x10,0x10000002,param_2,param_3,param_4,param_5,0,0);
  return BStack_44 != 0;
}


// ---- FUN_1002a190 @ 1002a190

void __thiscall FUN_1002a190(void *this,int param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  byte *pbVar8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_4;
  
  if ((((8 < *(int *)((int)this + 0x14c)) && (*(int *)((int)this + 0x288) < 9)) &&
      (iVar3 = FUN_10025a20(this,0), iVar3 == 1)) &&
     (((*(int *)((int)this + 0x4a8) != 0 && (iVar3 = *(int *)((int)this + 0x160), iVar3 != 0)) &&
      (*(int *)((int)this + 0x164) != 0)))) {
    if (-1 < *(int *)(*(int *)((int)this + 0x4a8) + 8)) {
      param_2 = (*(int *)((int)this + 0x140) - param_4) - param_2;
    }
    iVar2 = *(int *)((int)this + 0x4bc);
    if ((iVar2 == 0) || (*(int *)((int)this + 0x114) != -0x270d)) {
      local_10 = *(int *)((int)this + 0x154);
      local_18 = *(int *)((int)this + 0x4c0);
    }
    else {
      local_10 = *(int *)(iVar2 + 0x4c);
      local_18 = *(int *)((int)this + 0x4c0);
      iVar3 = *(int *)(iVar2 + 0x44);
    }
    if (param_2 < param_2 + param_4) {
      local_4 = param_4;
      local_14 = param_2 * local_18;
      local_c = param_2 * local_10;
      do {
        iVar2 = *(int *)((int)this + 0x14c);
        iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
        pbVar8 = (byte *)(local_14 + *(int *)((int)this + 0x164) + param_1);
        puVar6 = (ushort *)(param_1 * iVar4 + iVar3 + local_c);
        uVar5 = (int)(0x40000000 - ((uint)puVar6 & 0x3fffffff)) / iVar4;
        if ((int)param_3 <= (int)uVar5) {
          uVar5 = param_3;
        }
        uVar7 = 0x40000000 - ((uint)pbVar8 & 0x3fffffff);
        if ((int)uVar7 <= (int)uVar5) {
          uVar5 = uVar7;
        }
        iVar4 = *(int *)((int)this + 0x150);
        if (uVar5 < param_3) {
          if (iVar4 == 0xf) {
            uVar5 = param_3;
            if (param_1 < (int)(param_3 + param_1)) {
              do {
                uVar1 = *puVar6;
                *pbVar8 = (byte)(uVar1 >> 4) & 0x38 | (byte)(uVar1 >> 0xc) & 7 |
                          ((byte)uVar1 & 0x18) << 3;
                puVar6 = (ushort *)
                         ((int)puVar6 +
                         ((int)(*(int *)((int)this + 0x14c) +
                               (*(int *)((int)this + 0x14c) >> 0x1f & 7U)) >> 3));
                uVar5 = uVar5 - 1;
                pbVar8 = pbVar8 + 1;
              } while (uVar5 != 0);
            }
          }
          else if (iVar4 == 0x10) {
            uVar5 = param_3;
            if (param_1 < (int)(param_3 + param_1)) {
              do {
                uVar1 = *puVar6;
                *pbVar8 = (byte)(uVar1 >> 0xd) | ((byte)uVar1 & 0x18) << 3 |
                          (byte)(uVar1 >> 5) & 0x38;
                puVar6 = (ushort *)
                         ((int)puVar6 +
                         ((int)(*(int *)((int)this + 0x14c) +
                               (*(int *)((int)this + 0x14c) >> 0x1f & 7U)) >> 3));
                uVar5 = uVar5 - 1;
                pbVar8 = pbVar8 + 1;
              } while (uVar5 != 0);
            }
          }
          else if (((iVar2 == 0x18) || (iVar2 == 0x20)) &&
                  (uVar5 = param_3, param_1 < (int)(param_3 + param_1))) {
            do {
              *pbVar8 = (byte)((byte)puVar6[1] >> 3 | *(byte *)((int)puVar6 + 1) & 0xe3) >> 2 |
                        (byte)*puVar6 & 0xc0;
              puVar6 = (ushort *)
                       ((int)puVar6 +
                       ((int)(*(int *)((int)this + 0x14c) +
                             (*(int *)((int)this + 0x14c) >> 0x1f & 7U)) >> 3));
              uVar5 = uVar5 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar5 != 0);
          }
        }
        else if (iVar4 == 0xf) {
          uVar5 = param_3;
          if (param_1 < (int)(param_1 + param_3)) {
            do {
              uVar1 = *puVar6;
              *pbVar8 = (byte)(uVar1 >> 4) & 0x38 | (byte)(uVar1 >> 0xc) & 7 |
                        ((byte)uVar1 & 0x18) << 3;
              puVar6 = (ushort *)
                       ((int)puVar6 +
                       ((int)(*(int *)((int)this + 0x14c) +
                             (*(int *)((int)this + 0x14c) >> 0x1f & 7U)) >> 3));
              uVar5 = uVar5 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar5 != 0);
          }
        }
        else if (iVar4 == 0x10) {
          uVar5 = param_3;
          if (param_1 < (int)(param_3 + param_1)) {
            do {
              uVar1 = *puVar6;
              *pbVar8 = (byte)(uVar1 >> 0xd) | ((byte)uVar1 & 0x18) << 3 | (byte)(uVar1 >> 5) & 0x38
              ;
              puVar6 = (ushort *)
                       ((int)puVar6 +
                       ((int)(*(int *)((int)this + 0x14c) +
                             (*(int *)((int)this + 0x14c) >> 0x1f & 7U)) >> 3));
              uVar5 = uVar5 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar5 != 0);
          }
        }
        else if (((iVar4 == 0x18) || (iVar4 == 0x20)) &&
                (uVar5 = param_3, param_1 < (int)(param_3 + param_1))) {
          do {
            *pbVar8 = (byte)((byte)puVar6[1] >> 3 | *(byte *)((int)puVar6 + 1) & 0xe3) >> 2 |
                      (byte)*puVar6 & 0xc0;
            puVar6 = (ushort *)
                     ((int)puVar6 +
                     ((int)(*(int *)((int)this + 0x14c) + (*(int *)((int)this + 0x14c) >> 0x1f & 7U)
                           ) >> 3));
            uVar5 = uVar5 - 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar5 != 0);
        }
        local_14 = local_14 + local_18;
        local_c = local_c + local_10;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
  }
  return;
}


// ---- FUN_1002a540 @ 1002a540

void __thiscall
FUN_1002a540(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar6 = 0;
  iVar4 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  *(int *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + 1;
  local_20.left = param_1;
  local_20.top = param_2;
  local_20.right = param_3 + param_1;
  local_20.bottom = param_4 + param_2;
  local_10.left = param_1;
  local_10.top = param_2;
  iVar3 = *(int *)((int)this + 0x4b0);
  local_10.right = local_20.right;
  local_10.bottom = local_20.bottom;
  if (((iVar3 != 0) || (*(int *)((int)this + 0x4bc) != 0)) && (*(int *)((int)this + 0x130) != 0)) {
    iVar5 = *(int *)(*(int *)((int)this + 0x130) + 0x70);
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 0x70);
    }
    if (*(int *)((int)this + 0x4bc) != 0) {
      iVar4 = *(int *)(*(int *)((int)this + 0x4bc) + 0x70);
    }
    if (((param_1 != 0) || (param_2 != 0)) ||
       ((*(int *)((int)this + 0x13c) != param_3 || (*(int *)((int)this + 0x140) != param_4)))) {
      if (iVar5 != 0) {
        MbufChild2d(iVar5,param_1,param_2,local_20.right - param_1,local_20.bottom - param_2,
                    &local_2c);
      }
      if (iVar6 != 0) {
        MbufChild2d(iVar6,local_20.left,local_20.top,local_20.right - local_20.left,
                    local_20.bottom - local_20.top,&local_28);
      }
      if (iVar4 != 0) {
        MbufChild2d(iVar4,local_20.left,local_20.top,local_20.right - local_20.left,
                    local_20.bottom - local_20.top,&local_24);
      }
      if ((((iVar5 == 0) || (local_2c != 0)) && ((iVar6 == 0 || (local_28 != 0)))) &&
         ((iVar4 == 0 || (local_24 != 0)))) {
        iVar4 = local_24;
        iVar5 = local_2c;
        iVar6 = local_28;
      }
    }
    if ((((((param_5 & 1) != 0) && (*(int *)((int)this + 0x4b0) != 0)) &&
         (*(int *)((int)this + 0x4b4) != 0)) &&
        ((*(int *)(*(int *)((int)this + 0x4b4) + 0x10) != 2 &&
         (*(int *)((int)this + 0x10c) == -0x270d)))) && (*(int *)((int)this + 0x110) == -0x270d)) {
      iVar3 = *(int *)((int)this + 0x130);
      while (((iVar3 != 0 && (*(int *)(*(int *)((int)this + 0x130) + 0x6c) != 0)) &&
             ((iVar3 = *(int *)((int)this + 0x4b0), iVar3 != 0 &&
              ((*(int *)(iVar3 + 0x6c) != 0 &&
               (*(undefined4 *)((int)this + 0x120) = 0xffffd8f1, *(int *)((int)this + 0x14c) < 9))))
             ))) {
        iVar3 = FUN_10011b40(*(void **)(iVar3 + 0x6c),*(int *)(*(int *)((int)this + 0x130) + 0x6c),
                             &local_10,&local_20,*(int *)((int)this + 0x4b4),0,(RECT *)0x0);
        if (iVar3 != 0) {
          MbufControl(iVar5,0x13b4,0,0x41b00000);
          goto LAB_1002a7ca;
        }
        *(undefined4 *)((int)this + 0x120) = 0xffffd8f3;
        iVar3 = *(int *)((int)this + 0x130);
      }
      if ((iVar6 != 0) && (iVar5 != 0)) {
        iVar3 = *(int *)(*(int *)((int)this + 0x4b4) + 0x10);
        if (iVar3 == 1) {
          FUN_1002a950(iVar6,iVar5,iVar6,4,*(uint *)(*(int *)((int)this + 0x4b4) + 0x70));
        }
        else if (iVar3 == 3) {
          MbufCopy(iVar6,iVar5);
        }
      }
    }
LAB_1002a7ca:
    if ((((param_5 & 2) != 0) && (*(int *)((int)this + 0x4bc) != 0)) &&
       (*(int *)((int)this + 0x114) == -0x270d)) {
      if ((*(int *)((int)this + 0x108) == -9999) && (*(int *)((int)this + 0x14c) < 9)) {
        if ((iVar5 != 0) && (iVar4 != 0)) {
          iVar3 = *(int *)(*(int *)((int)this + 0x74) + 0xa0);
          if (iVar3 == 0) {
            MbufClip(iVar5,iVar4,2,0,0x40240000,0,0x406ea000,0,0,0,0x406fe000);
          }
          else {
            MbufLutMap(iVar5,iVar4,iVar3);
          }
        }
      }
      else if ((iVar5 != 0) && (iVar4 != 0)) {
        MbufCopy(iVar5,iVar4);
      }
      iVar3 = *(int *)((int)this + 0x4b0);
      if ((((iVar3 != 0) && (iVar5 = *(int *)((int)this + 0x4b4), iVar5 != 0)) &&
          (iVar1 = *(int *)(iVar5 + 0x10), iVar1 != 2)) &&
         ((*(int *)((int)this + 0x10c) == -0x270d && (*(int *)((int)this + 0x110) == -9999)))) {
        if ((((*(int *)((int)this + 0x4bc) == 0) ||
             ((iVar2 = *(int *)(*(int *)((int)this + 0x4bc) + 0x6c), iVar2 == 0 || (iVar3 == 0))))
            || (*(void **)(iVar3 + 0x6c) == (void *)0x0)) || (8 < *(int *)((int)this + 0x14c))) {
          if ((iVar6 != 0) && (iVar4 != 0)) {
            if (iVar1 == 1) {
              FUN_1002a950(iVar6,iVar4,iVar6,4,*(uint *)(iVar5 + 0x70));
            }
            else if (iVar1 == 3) {
              MbufCopy(iVar6,iVar4);
            }
          }
        }
        else {
          FUN_10011b40(*(void **)(iVar3 + 0x6c),iVar2,&local_10,&local_20,iVar5,0,(RECT *)0x0);
        }
      }
    }
  }
  if (local_2c != 0) {
    MbufFree(local_2c);
  }
  if (local_28 != 0) {
    MbufFree(local_28);
  }
  if (local_24 != 0) {
    MbufFree(local_24);
  }
  *(int *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + -1;
  return;
}


// ---- FUN_1002a950 @ 1002a950

void FUN_1002a950(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  char extraout_AH;
  uint uVar1;
  char extraout_AH_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = MbufInquire(param_1,0x3f2,0);
  MbufInquire(param_2,0x3f2,0);
  uVar1 = uVar1 & 0xff00;
  MbufInquire(param_3,0x3f2,0);
  if (((uVar1 == 0x600) && (extraout_AH == '\x06')) && (extraout_AH_00 == '\x06')) {
    uVar2 = MbufInquire(param_1,0x20000000,0);
    uVar3 = MbufInquire(param_2,0x20000000,0);
    local_8 = MbufInquire(param_3,0x20000000,0);
    MbufInquire(param_2,0x3ea,0);
    uVar4 = MbufInquire(param_2,0x3eb,0);
    puVar12 = &local_c;
    uVar5 = MbufInquire(param_1,0x80000000,0);
    MnatBufCreate2d(0x10000001,uVar2,uVar4,0x10,0x14,uVar5,puVar12);
    piVar13 = &local_14;
    uVar2 = MbufInquire(param_2,0x80000000,0);
    MnatBufCreate2d(0x10000001,uVar3,uVar4,0x10,0x14,uVar2,piVar13);
    piVar13 = &local_10;
    uVar2 = MbufInquire(param_3,0x80000000,0);
    MnatBufCreate2d(0x10000001,local_8,uVar4,0x10,0x14,uVar2,piVar13);
    uVar1 = (param_5 & 0xf8) >> 3;
    MbufCopyCond(local_c,local_14,local_10,param_4,(double)((uVar1 << 5 | uVar1) << 5 | uVar1));
    MbufFree();
    MbufFree();
    MbufFree();
    return;
  }
  if (((uVar1 == 0x700) && (extraout_AH == '\a')) && (extraout_AH_00 == '\a')) {
    uVar2 = MbufInquire(param_1,0x20000000,0);
    uVar3 = MbufInquire(param_2,0x20000000,0);
    local_8 = MbufInquire(param_3,0x20000000,0);
    MbufInquire(param_2,0x3ea,0);
    uVar4 = MbufInquire(param_2,0x3eb,0);
    puVar12 = &local_c;
    uVar5 = MbufInquire(param_1,0x80000000,0);
    MnatBufCreate2d(0x10000001,uVar2,uVar4,0x10,0x14,uVar5,puVar12);
    piVar13 = &local_14;
    uVar2 = MbufInquire(param_2,0x80000000,0);
    MnatBufCreate2d(0x10000001,uVar3,uVar4,0x10,0x14,uVar2,piVar13);
    piVar13 = &local_10;
    uVar2 = MbufInquire(param_3,0x80000000,0);
    MnatBufCreate2d(0x10000001,local_8,uVar4,0x10,0x14,uVar2,piVar13);
    uVar1 = (param_5 & 0xf8) >> 3;
    MbufCopyCond(local_c,local_14,local_10,param_4,
                 (double)((uVar1 << 8 | param_5 & 0xfc) << 3 | uVar1));
    MbufFree();
    MbufFree();
    MbufFree();
    return;
  }
  if (((uVar1 == 0x1000) && (extraout_AH == '\x10')) &&
     ((extraout_AH_00 == '\x10' && (param_4 == 4)))) {
    local_8 = MbufInquire(param_1,0x8000000,0);
    iVar6 = MbufInquire(param_2,0x8000000,0);
    local_10 = MbufInquire(param_3,0x8000000,0);
    iVar7 = MbufInquire(param_2,0x3ea,0);
    iVar8 = MbufInquire(param_2,0x3eb,0);
    iVar9 = MbufInquire(param_1,0x80000000,0);
    iVar10 = MbufInquire(param_2,0x80000000,0);
    iVar11 = MbufInquire(param_3,0x80000000,0);
    local_14 = iVar8;
    if (0 < iVar8) {
      do {
        iVar8 = 0;
        if (0 < iVar7 * 3) {
          do {
            if (((*(byte *)(iVar8 + iVar11) != param_5) ||
                (*(byte *)(iVar8 + 1 + iVar11) != param_5)) ||
               (*(byte *)(iVar8 + 2 + iVar11) != param_5)) {
              *(undefined1 *)(iVar8 + iVar10) = *(undefined1 *)(iVar8 + iVar9);
              *(undefined1 *)(iVar8 + 1 + iVar10) = *(undefined1 *)(iVar8 + 1 + iVar9);
              *(undefined1 *)(iVar8 + 2 + iVar10) = *(undefined1 *)(iVar8 + 2 + iVar9);
            }
            iVar8 = iVar8 + 3;
          } while (iVar8 < iVar7 * 3);
        }
        iVar10 = iVar10 + iVar6;
        iVar9 = iVar9 + local_8;
        iVar11 = iVar11 + local_10;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      return;
    }
  }
  else {
    if (((uVar1 == 0x1100) && (extraout_AH == '\x11')) && (extraout_AH_00 == '\x11')) {
      uVar2 = MbufInquire(param_1,0x20000000,0);
      local_8 = MbufInquire(param_2,0x20000000,0);
      local_10 = MbufInquire(param_3,0x20000000,0);
      MbufInquire(param_2,0x3ea,0);
      uVar3 = MbufInquire(param_2,0x3eb,0);
      puVar12 = &local_4;
      uVar4 = MbufInquire(param_1,0x80000000,0);
      MnatBufCreate2d(0x10000001,uVar2,uVar3,0x20,0x14,uVar4,puVar12);
      puVar12 = &local_c;
      uVar2 = MbufInquire(param_2,0x80000000,0);
      MnatBufCreate2d(0x10000001,local_8,uVar3,0x20,0x14,uVar2,puVar12);
      piVar13 = &local_14;
      uVar2 = MbufInquire(param_3,0x80000000,0);
      MnatBufCreate2d(0x10000001,local_10,uVar3,0x20,0x14,uVar2,piVar13);
      uVar1 = param_5 & 0xff;
      MbufCopyCond(local_4,local_c,local_14,param_4,(double)(uVar1 << 0x10 | uVar1 << 8 | uVar1));
      MbufFree();
      MbufFree();
      MbufFree();
      return;
    }
    MbufCopyCond(param_1,param_2,param_3,param_4,(double)(int)param_5);
  }
  return;
}


// ---- FUN_1002aef0 @ 1002aef0

undefined4 __fastcall FUN_1002aef0(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_8;
  
  iVar8 = *(int *)(param_1 + 0x28c);
  if (iVar8 == 0) {
    iVar8 = 0x100;
  }
  pvVar1 = GlobalAlloc(0x102,iVar8 * 4 + 8);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x4c8) = pvVar2;
  pvVar1 = GlobalAlloc(0x102,iVar8 * 3 + 1);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x4cc) = pvVar2;
  if ((pvVar2 == (LPVOID)0x0) && (*(LPCVOID *)(param_1 + 0x4c8) != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x4c8) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x4d8) + 0xc) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(*(int *)(param_1 + 0x4d8) + 0x24) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x10) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x28) = *(undefined4 *)(param_1 + 0x4c8);
  if (*(undefined2 **)(param_1 + 0x4c8) == (undefined2 *)0x0) {
    return 0;
  }
  **(undefined2 **)(param_1 + 0x4c8) = 0x300;
  *(short *)(*(int *)(param_1 + 0x4c8) + 2) = (short)iVar8;
  if (*(int *)(param_1 + 0x598) == 0) {
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0x4c8) + 4);
  }
  else {
    puVar6 = (undefined1 *)
             (*(int *)(param_1 + 0x4c8) + -0x24 +
             (uint)*(ushort *)(*(int *)(param_1 + 0x4c8) + 2) * 4);
  }
  puVar7 = *(undefined1 **)(param_1 + 0x4cc);
  iVar5 = 0;
  if (0 < iVar8) {
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      sVar4 = (short)iVar5;
      if (((*(int *)(param_1 + 0x598) == 0) || (sVar4 < 10)) ||
         (*(short *)(*(int *)(param_1 + 0x4c8) + 2) + -10 <= (int)sVar4)) {
        puVar6[3] = 0;
      }
      else {
        local_8 = (undefined1)*(int *)(param_1 + 0x598);
        puVar6[3] = local_8;
      }
      puVar6 = puVar6 + 4;
      if ((*(int *)(param_1 + 0x598) == 4) && (sVar4 == 9)) {
        puVar6 = (undefined1 *)(*(int *)(param_1 + 0x4c8) + 4);
      }
      uVar3 = (undefined1)iVar5;
      *puVar7 = uVar3;
      puVar7[iVar8] = uVar3;
      puVar7[iVar8 * 2] = uVar3;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar8);
  }
  return 1;
}


// ---- FUN_1002b090 @ 1002b090

void __fastcall FUN_1002b090(void *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x28c);
  if (iVar3 == 0) {
    iVar3 = 0x100;
  }
  if (*(int *)((int)param_1 + 0x4c8) == 0) {
    *(undefined4 *)((int)param_1 + 0x4d0) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x28) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x2c) = 0;
    return;
  }
  FUN_1002b190((int)param_1);
  iVar1 = FUN_10025a20(param_1,0);
  if (iVar1 == 3) {
    *(undefined4 *)((int)param_1 + 0x598) = 4;
  }
  puVar2 = (undefined1 *)0x0;
  if (*(int *)((int)param_1 + 0x4c4) != -0x270d) {
    puVar2 = *(undefined1 **)((int)param_1 + 0x4cc);
  }
  if ((8 < *(int *)((int)param_1 + 0x14c)) &&
     ((*(int *)((int)param_1 + 0x58c) == 0xc || (*(int *)((int)param_1 + 0x4c4) == -0x270d)))) {
    *(undefined2 *)(*(int *)((int)param_1 + 0x4c8) + 2) = 0x100;
    FUN_1002bf40(param_1,5,0,(uint)*(ushort *)(*(int *)((int)param_1 + 0x4c8) + 2),(int)puVar2);
    FUN_1002b270(param_1);
    return;
  }
  *(short *)(*(int *)((int)param_1 + 0x4c8) + 2) = (short)iVar3;
  FUN_1002c220(param_1,5,0,(uint)*(ushort *)(*(int *)((int)param_1 + 0x4c8) + 2),puVar2);
  FUN_1002b270(param_1);
  return;
}


// ---- FUN_1002b190 @ 1002b190

void __fastcall FUN_1002b190(int param_1)

{
  LOGPALETTE *pLVar1;
  BYTE BVar2;
  HGLOBAL pvVar3;
  LOGPALETTE *plpal;
  int iVar4;
  HPALETTE ho;
  HDC hDC;
  
  if (*(int *)(param_1 + 0x28c) != 0) {
    pvVar3 = GlobalAlloc(0x102,*(int *)(param_1 + 0x28c) * 4 + 8);
    plpal = GlobalLock(pvVar3);
    if (plpal != (LOGPALETTE *)0x0) {
      plpal->palVersion = 0x300;
      plpal->palNumEntries = (WORD)*(undefined4 *)(param_1 + 0x28c);
      iVar4 = 0;
      pLVar1 = plpal;
      if (0 < *(int *)(param_1 + 0x28c)) {
        do {
          BVar2 = (BYTE)iVar4;
          pLVar1->palPalEntry[0].peRed = BVar2;
          pLVar1->palPalEntry[0].peGreen = BVar2;
          pLVar1->palPalEntry[0].peBlue = BVar2;
          iVar4 = iVar4 + 1;
          pLVar1->palPalEntry[0].peFlags = '\x04';
          pLVar1 = (LOGPALETTE *)pLVar1->palPalEntry;
        } while (iVar4 < *(int *)(param_1 + 0x28c));
      }
      ho = CreatePalette(plpal);
      if (ho != (HPALETTE)0x0) {
        hDC = GetDC(*(HWND *)(param_1 + 0x42c));
        FUN_1002d8d0(hDC,ho,0);
        FUN_1002d8c0(hDC);
        DeleteObject(ho);
        ReleaseDC(*(HWND *)(param_1 + 0x42c),hDC);
      }
      pvVar3 = GlobalHandle(plpal);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(plpal);
      GlobalFree(pvVar3);
    }
  }
  return;
}


// ---- FUN_1002b270 @ 1002b270

bool __fastcall FUN_1002b270(void *param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  HGDIOBJ pvVar3;
  
  if (*(HGDIOBJ *)((int)param_1 + 0x4d0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)param_1 + 0x4d0));
    *(undefined4 *)((int)param_1 + 0x4d0) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x28) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x2c) = 0;
  }
  iVar1 = FUN_10025a20(param_1,0);
  if (((iVar1 == 0) || (iVar1 == 3)) || (*(int *)((int)param_1 + 0x594) == 0)) {
    FUN_1002c3b0(param_1,*(int *)((int)param_1 + 0x4a0),*(HGDIOBJ *)((int)param_1 + 0x4a4),0,0,0);
    iVar1 = *(int *)((int)param_1 + 0x4bc);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x6c) == 0) {
        pvVar3 = *(HGDIOBJ *)(iVar1 + 0x54);
        iVar1 = *(int *)(iVar1 + 0x58);
      }
      else {
        pvVar3 = (HGDIOBJ)0x0;
        iVar1 = *(int *)(*(int *)(iVar1 + 0x6c) + 0x38);
      }
      FUN_1002c3b0(param_1,iVar1,pvVar3,1,10,0xf5);
    }
    iVar1 = *(int *)((int)param_1 + 0x4b0);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x6c) == 0) {
        pvVar3 = *(HGDIOBJ *)(iVar1 + 0x54);
        iVar1 = *(int *)(iVar1 + 0x58);
      }
      else {
        pvVar3 = (HGDIOBJ)0x0;
        iVar1 = *(int *)(*(int *)(iVar1 + 0x6c) + 0x38);
      }
      FUN_1002c3b0(param_1,iVar1,pvVar3,0,0,0);
    }
  }
  iVar1 = FUN_10025a20(param_1,0);
  if (((iVar1 == 0) || (iVar1 == 3)) || (*(int *)((int)param_1 + 0x594) == 0)) {
    iVar1 = FUN_10025a20(param_1,0);
    if ((iVar1 == 1) && (*(int *)((int)param_1 + 0x4a8) != 0)) {
      FUN_1002c3b0(param_1,*(int *)((int)param_1 + 0x4a8),*(HGDIOBJ *)((int)param_1 + 0x4ac),0,0,0);
    }
  }
  iVar1 = FUN_10025a20(param_1,0);
  if (iVar1 == 3) {
    FUN_100115a0(*(void **)(*(int *)((int)param_1 + 0x130) + 0x6c),
                 *(undefined1 **)((int)param_1 + 0x4c8),*(int *)((int)param_1 + 0x598),10,10);
  }
  pHVar2 = CreatePalette(*(LOGPALETTE **)((int)param_1 + 0x4c8));
  *(HPALETTE *)((int)param_1 + 0x4d0) = pHVar2;
  *(HPALETTE *)(*(int *)((int)param_1 + 0x4d8) + 0x10) = pHVar2;
  *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x28) = *(undefined4 *)((int)param_1 + 0x4d0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x14) = *(undefined4 *)((int)param_1 + 0x4d0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x2c) = *(undefined4 *)((int)param_1 + 0x4d0);
  return (bool)('\x01' - (*(int *)((int)param_1 + 0x4d0) == 0));
}


// ---- FUN_1002b420 @ 1002b420

void __fastcall FUN_1002b420(int param_1)

{
  HGLOBAL pvVar1;
  code *pcVar2;
  code *pcVar3;
  
  if (*(HGDIOBJ *)(param_1 + 0x4d0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x4d0));
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4d8) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4d8) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x14) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    pcVar2 = GlobalUnlock_exref;
    pcVar3 = GlobalFree_exref;
    if (*(LPCVOID *)(param_1 + 0x4cc) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4cc));
      pcVar2 = GlobalUnlock_exref;
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4cc));
      pcVar3 = GlobalFree_exref;
      GlobalFree(pvVar1);
      *(undefined4 *)(param_1 + 0x4cc) = 0;
    }
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c8));
    (*pcVar2)(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c8));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4d8) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4d8) + 0x24) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x28) = 0;
  }
  return;
}


// ---- FUN_1002b640 @ 1002b640

int __thiscall FUN_1002b640(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HANDLE pvVar2;
  
  if (*(int *)((int)this + 0x418) != 0) {
    iVar1 = FUN_1002b770(this,param_1,-0x270d,(HWND)0x0);
    return iVar1;
  }
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,s_WaitForDisplayNTEvent_100331d8);
  *(HANDLE *)((int)this + 0x420) = pvVar2;
  **(undefined4 **)((int)this + 0x424) = 0;
  *(int *)(*(int *)((int)this + 0x424) + 4) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x424) + 8) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x424) + 0xc) = param_3;
  *(undefined4 *)(*(int *)((int)this + 0x424) + 0x10) = *(undefined4 *)((int)this + 0x420);
  *(undefined4 *)(*(int *)((int)this + 0x424) + 0x14) = 1;
  *(void **)(*(int *)((int)this + 0x424) + 0x18) = this;
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_1002b510,
                        *(LPVOID *)((int)this + 0x424),0,(LPDWORD)((int)this + 0x414));
  *(HANDLE *)((int)this + 0x418) = pvVar2;
  if ((pvVar2 != (HANDLE)0x0) && (*(HANDLE *)((int)this + 0x420) != (HANDLE)0x0)) {
    WaitForSingleObject(*(HANDLE *)((int)this + 0x420),10000);
    iVar1 = *(int *)(*(int *)((int)this + 0x424) + 0x14);
    if (iVar1 == 1) {
      SetActiveWindow(*(HWND *)((int)this + 0x42c));
      SetForegroundWindow(*(HWND *)((int)this + 0x42c));
    }
    SendMessageA(*(HWND *)((int)this + 0x42c),0x500,0,0);
    return iVar1;
  }
  return 0;
}


// ---- FUN_1002b770 @ 1002b770

int __thiscall FUN_1002b770(void *this,int param_1,int param_2,HWND param_3)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  BOOL bErase;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_28;
  void *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 1;
  iVar7 = 0;
  iVar6 = 0;
  local_1c = 0;
  local_18 = 0;
  local_2c = 0;
  local_20 = 0;
  local_c = 0;
  local_24 = (void *)0x0;
  local_10 = 0;
  local_14 = 0;
  *(undefined4 *)((int)this + 0x120) = 0xffffd8f1;
  if (param_1 != 0) {
    local_1c = *(undefined4 *)(param_1 + 0x20);
    local_18 = *(undefined4 *)(param_1 + 0x24);
    local_2c = *(int *)(param_1 + 4);
    iVar7 = *(int *)(param_1 + 8);
    local_20 = *(int *)(param_1 + 0x4c);
    local_c = *(undefined4 *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x68);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    local_24 = *(void **)(param_1 + 0x6c);
    local_14 = *(undefined4 *)(param_1 + 0x44);
    if ((local_24 != (void *)0x0) || ((*(uint *)(param_1 + 0xc) & 0x4000000) != 0)) {
      iVar7 = -iVar7;
    }
  }
  if (local_24 == (void *)0x0) {
    if (((((iVar6 != 1) && (iVar6 != 4)) && (iVar6 != 8)) && ((iVar6 != 0xf && (iVar6 != 0x10)))) &&
       ((iVar6 != 0x18 && (iVar6 != 0x20)))) {
      local_28 = 0;
    }
    uVar5 = (local_20 << 3) >> 0x1f;
    if (((local_20 << 3 ^ uVar5) - uVar5 & 0x1f ^ uVar5) != uVar5) {
LAB_1002b866:
      local_28 = 0;
    }
  }
  else {
    iVar4 = FUN_10010890(*(void **)((int)local_24 + 0x18),iVar6,0,0);
    if (iVar4 == 0) goto LAB_1002b866;
  }
  if (local_28 == 0) {
    return 0;
  }
  if (((*(int *)((int)this + 0x42c) == 0) && (param_2 == -0x270d)) &&
     (iVar4 = FUN_10025ac0(this,local_2c,iVar7,param_3), iVar4 == 0)) {
    return 0;
  }
  if (*(int *)((int)this + 0x130) == param_1) goto LAB_1002baab;
  FUN_10028b20(this);
  if (*(int *)((int)this + 0x130) == 0) {
LAB_1002b8fe:
    bVar3 = true;
  }
  else {
    iVar4 = local_2c;
    if (local_2c < 0) {
      iVar4 = -local_2c;
    }
    if (*(int *)((int)this + 0x13c) != iVar4) {
      iVar4 = iVar7;
      if (iVar7 < 0) {
        iVar4 = -iVar7;
      }
      if (*(int *)((int)this + 0x140) != iVar4) goto LAB_1002b8fe;
    }
    bVar3 = false;
  }
  if ((*(int *)((int)this + 0x130) == 0) || (*(int *)((int)this + 0x14c) != iVar6)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(int *)((int)this + 0x130) = param_1;
  *(undefined4 *)((int)this + 0x134) = local_1c;
  *(undefined4 *)((int)this + 0x138) = local_18;
  if (local_2c < 0) {
    *(int *)((int)this + 0x13c) = -local_2c;
  }
  else {
    *(int *)((int)this + 0x13c) = local_2c;
  }
  if (iVar7 < 0) {
    *(int *)((int)this + 0x140) = -iVar7;
  }
  else {
    *(int *)((int)this + 0x140) = iVar7;
  }
  *(int *)((int)this + 0x144) = local_2c;
  *(int *)((int)this + 0x148) = iVar7;
  *(int *)((int)this + 0x14c) = iVar6;
  *(int *)((int)this + 0x154) = local_20;
  *(undefined4 *)((int)this + 0x158) = local_14;
  *(undefined4 *)((int)this + 0x15c) = local_10;
  *(int *)((int)this + 0x150) = iVar6;
  if (iVar6 == 0xf) {
    *(undefined4 *)((int)this + 0x14c) = 0x10;
  }
  if (local_24 != (void *)0x0) {
    FUN_10011550(local_24,*(undefined4 *)((int)this + 0x42c));
  }
  if ((*(int *)((int)this + 0x4b0) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)this + 0x4b0) + 0x6c), pvVar1 != (void *)0x0)) {
    FUN_10011550(pvVar1,*(undefined4 *)((int)this + 0x42c));
  }
  if ((*(int *)((int)this + 0x4bc) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)this + 0x4bc) + 0x6c), pvVar1 != (void *)0x0)) {
    FUN_10011550(pvVar1,*(undefined4 *)((int)this + 0x42c));
  }
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)this + 0x158);
  *(undefined4 *)(*(int *)((int)this + 0x4d8) + 8) = *(undefined4 *)((int)this + 0x158);
  *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x20) = *(undefined4 *)((int)this + 0x160);
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0xc) = *(undefined4 *)((int)this + 0x160);
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x24) = *(undefined4 *)((int)this + 0x160);
  iVar7 = FUN_10028690(this,local_c);
  if (iVar7 == 0) {
    FUN_10026240(this,1,1);
    return 0;
  }
  if ((bVar2) && (iVar7 = FUN_1002b090(this), iVar7 == 0)) {
    FUN_10026240(this,1,1);
    return 0;
  }
  if (bVar3) {
    FUN_100273c0(this,6,1,0);
  }
LAB_1002baab:
  FUN_1002a540(this,0,0,*(int *)((int)this + 0x13c),*(int *)((int)this + 0x140),3);
  FUN_1002a190(this,0,0,*(uint *)((int)this + 0x13c),*(int *)((int)this + 0x140));
  if (param_2 != -0x270d) {
    return local_28;
  }
  if (*(HWND *)((int)this + 0x42c) == (HWND)0x0) {
    return 0;
  }
  if ((*(int *)((int)this + 0x434) != 0) || (bErase = 0, *(int *)((int)this + 0xe4) == -0x270d)) {
    bErase = 1;
  }
  InvalidateRect(*(HWND *)((int)this + 0x42c),(RECT *)0x0,bErase);
  if (*(int *)((int)this + 0xfc) == -0x270d) {
    UpdateWindow(*(HWND *)((int)this + 0x42c));
    return local_28;
  }
  return local_28;
}


// ---- FUN_1002bb50 @ 1002bb50

void __thiscall FUN_1002bb50(void *this,int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x74) + 0x94);
  if (iVar1 != 0) {
    *(int *)(*(int *)((int)this + 0x4d8) + 0x34) = iVar1;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x38) =
         *(undefined4 *)(*(int *)((int)this + 0x74) + 0x94);
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x14) =
         *(undefined4 *)(*(int *)((int)this + 0x74) + 0x94);
    MdispInquire(*(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x34),0xbbe,&local_4);
    *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x30) = local_4;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x34) = local_4;
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x10) = local_4;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    *(int *)(*(int *)((int)this + 0x4d8) + 0x38) = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x18) = *(undefined4 *)(param_1 + 0x2c);
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x74) + 0x38);
  if (iVar1 != 0) {
    *(int *)(*(int *)((int)this + 0x4d8) + 0x3c) = iVar1;
    *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x40) =
         *(undefined4 *)(*(int *)((int)this + 0x74) + 0x38);
    *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x1c) =
         *(undefined4 *)(*(int *)((int)this + 0x74) + 0x38);
  }
  *(undefined4 *)(*(int *)((int)this + 0x4d8) + 0x40) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x4dc) + 0x44) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x4e0) + 0x20) = 0;
  return;
}


// ---- FUN_1002bc60 @ 1002bc60

void __fastcall FUN_1002bc60(void *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  BOOL bErase;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_4;
  
  bVar3 = false;
  bVar2 = false;
  local_4 = *(int *)((int)param_1 + 0x448);
  iVar10 = *(int *)((int)param_1 + 0x2a0);
  iVar8 = iVar10 + local_4;
  iVar9 = *(int *)((int)param_1 + 0x214) + iVar8;
  iVar1 = *(int *)((int)param_1 + 0x2f4);
  iVar6 = *(int *)((int)param_1 + 0x2fc) + iVar1;
  if ((iVar1 < iVar8) && (iVar10 != 0)) {
    iVar7 = iVar1 - iVar8;
LAB_1002bcb6:
    iVar8 = iVar8 + iVar7;
    iVar9 = iVar9 + iVar7;
    bVar2 = true;
    *(int *)((int)param_1 + 0x2a8) = *(int *)((int)param_1 + 0x2a8) + iVar7;
    *(int *)((int)param_1 + 0x2a0) = iVar7 + iVar10;
  }
  else if ((iVar9 < iVar6) && (iVar10 != 0)) {
    iVar7 = iVar6 - iVar9;
    goto LAB_1002bcb6;
  }
  if (iVar1 < iVar8) {
    local_4 = iVar8 - iVar1;
LAB_1002bce6:
    bVar3 = true;
  }
  else if (iVar9 < iVar6) {
    local_4 = iVar6 - iVar9;
    goto LAB_1002bce6;
  }
  iVar10 = *(int *)((int)param_1 + 0x44c);
  iVar1 = *(int *)((int)param_1 + 0x2a4);
  iVar6 = *(int *)((int)param_1 + 0x2f8);
  iVar8 = iVar1 + iVar10;
  iVar7 = *(int *)((int)param_1 + 0x218) + iVar8;
  iVar9 = *(int *)((int)param_1 + 0x300) + iVar6;
  if ((iVar6 < iVar8) && (iVar1 != 0)) {
    iVar4 = iVar6 - iVar8;
LAB_1002bd34:
    iVar8 = iVar8 + iVar4;
    iVar7 = iVar7 + iVar4;
    bVar2 = true;
    *(int *)((int)param_1 + 0x2ac) = *(int *)((int)param_1 + 0x2ac) + iVar4;
    *(int *)((int)param_1 + 0x2a4) = iVar4 + iVar1;
  }
  else if ((iVar7 < iVar9) && (iVar1 != 0)) {
    iVar4 = iVar9 - iVar7;
    goto LAB_1002bd34;
  }
  if (iVar6 < iVar8) {
    iVar10 = iVar8 - iVar6;
LAB_1002bd64:
    bVar3 = true;
  }
  else if (iVar7 < iVar9) {
    iVar10 = iVar9 - iVar7;
    goto LAB_1002bd64;
  }
  if (bVar2) {
    if (bVar3) goto LAB_1002bde4;
    if ((*(int *)((int)param_1 + 0x434) != 0) ||
       (bErase = 0, *(int *)((int)param_1 + 0xe4) == -0x270d)) {
      bErase = 1;
    }
    InvalidateRect(*(HWND *)((int)param_1 + 0x42c),(RECT *)0x0,bErase);
    if ((*(int *)((int)param_1 + 0x100) == -0x270d) ||
       ((*(int *)((int)param_1 + 0x100) == 0x10000000 &&
        (DVar5 = GetCurrentThreadId(), DVar5 == *(DWORD *)((int)param_1 + 0x41c))))) {
      UpdateWindow(*(HWND *)((int)param_1 + 0x42c));
    }
  }
  if (!bVar3) {
    return;
  }
LAB_1002bde4:
  FUN_10022230(param_1,local_4,iVar10,0);
  return;
}


// ---- FUN_1002be00 @ 1002be00

undefined4 __fastcall FUN_1002be00(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL bErase;
  
  **(undefined4 **)((int)param_1 + 0x4dc) = 0;
  **(undefined4 **)((int)param_1 + 0x4e0) = 0;
  FUN_1001ef50((int)param_1);
  *(undefined4 *)((int)param_1 + 0x130) = 0;
  *(undefined4 *)((int)param_1 + 0x134) = 0;
  *(undefined4 *)((int)param_1 + 0x138) = 0;
  *(undefined4 *)((int)param_1 + 0x13c) = 0;
  *(undefined4 *)((int)param_1 + 0x140) = 0;
  *(undefined4 *)((int)param_1 + 0x144) = 0;
  *(undefined4 *)((int)param_1 + 0x148) = 0;
  *(undefined4 *)((int)param_1 + 0x14c) = 0;
  *(undefined4 *)((int)param_1 + 0x154) = 0;
  *(undefined4 *)((int)param_1 + 0x158) = 0;
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  if (*(int *)((int)param_1 + 0x160) != 0) {
    *(undefined4 *)((int)param_1 + 0x160) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 8) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4d8) + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0xc) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x4dc) + 0x24) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x434);
  iVar2 = *(int *)((int)param_1 + 0x430);
  if (*(void **)((int)param_1 + 0x4b8) != (void *)0x0) {
    FUN_100120c0(*(void **)((int)param_1 + 0x4b8),0);
  }
  if (*(int *)((int)param_1 + 0x5e4) != 0) {
    FUN_10017980(*(int *)((int)param_1 + 0x5e4),5,1,1);
    if (*(int *)((int)param_1 + 0x5e4) != 0) {
      FUN_10017980(*(int *)((int)param_1 + 0x5e4),5,1,1);
      FUN_10017970(*(undefined4 *)((int)param_1 + 0x5e4));
      *(undefined4 *)((int)param_1 + 0x5e4) = 0;
    }
  }
  uVar3 = FUN_1002d2d0(param_1);
  if (iVar2 != 0) {
    if ((iVar1 != 0) || (bErase = 0, *(int *)((int)param_1 + 0xe4) == -0x270d)) {
      bErase = 1;
    }
    InvalidateRect(*(HWND *)((int)param_1 + 0x42c),(RECT *)0x0,bErase);
  }
  return uVar3;
}


// ---- FUN_1002bf40 @ 1002bf40

void __thiscall FUN_1002bf40(void *this,int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  short sVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  byte local_d;
  byte local_c;
  byte local_b;
  short local_8;
  
  iVar6 = *(int *)((int)this + 0x4c8);
  if (*(int *)((int)this + 0x598) == 0) {
    pbVar4 = (byte *)(iVar6 + 4);
  }
  else {
    pbVar4 = (byte *)(iVar6 + -0x24 + (uint)*(ushort *)(iVar6 + 2) * 4);
  }
  sVar5 = (short)param_2 + -1 + (short)param_3;
  if (param_4 == 0) {
    local_b = 0;
    sVar9 = 0;
    do {
      local_c = 0;
      do {
        local_d = 0;
        do {
          bVar3 = (&DAT_10032eb8)[local_d];
          if (((short)param_2 <= (short)(ushort)bVar3) && ((short)(ushort)bVar3 <= sVar5)) {
            uVar7 = (ushort)(byte)(&DAT_10032ec0)[local_c];
            if (((short)param_2 <= (short)uVar7) && ((short)uVar7 <= sVar5)) {
              uVar7 = (ushort)(byte)(&DAT_10032ec8)[local_b];
              if (((short)param_2 <= (short)uVar7) && ((short)uVar7 <= sVar5)) {
                *pbVar4 = bVar3;
                pbVar4[1] = (&DAT_10032ec0)[local_c];
                pbVar4[2] = (&DAT_10032ec8)[local_b];
                if ((*(int *)((int)this + 0x598) == 0) ||
                   ((sVar9 < 10 || (*(short *)(*(int *)((int)this + 0x4c8) + 2) + -10 <= (int)sVar9)
                    ))) {
                  pbVar4[3] = 0;
                }
                else {
                  pbVar4[3] = (byte)*(int *)((int)this + 0x598);
                }
                pbVar4 = pbVar4 + 4;
                if ((*(int *)((int)this + 0x598) == 4) && (sVar9 == 9)) {
                  pbVar4 = (byte *)(*(int *)((int)this + 0x4c8) + 4);
                }
                sVar9 = sVar9 + 1;
              }
            }
          }
          local_d = local_d + 1;
        } while (local_d < 8);
        local_c = local_c + 1;
      } while (local_c < 8);
      local_b = local_b + 1;
    } while (local_b < 4);
    return;
  }
  local_b = 0;
  iVar6 = (int)(short)param_2;
  local_8 = 0;
  do {
    local_c = 0;
    do {
      local_d = 0;
      do {
        uVar8 = (uint)(byte)(&DAT_10032eb8)[local_d];
        if ((iVar6 <= (int)uVar8) && (iVar10 = (int)sVar5, (int)uVar8 <= iVar10)) {
          pbVar1 = &DAT_10032ec0 + local_c;
          if ((iVar6 <= (int)(uint)*pbVar1) && ((int)(uint)*pbVar1 <= iVar10)) {
            pbVar2 = &DAT_10032ec8 + local_b;
            if ((iVar6 <= (int)(uint)*pbVar2) && ((int)(uint)*pbVar2 <= iVar10)) {
              if (param_1 == 1) {
                *pbVar4 = *(byte *)((param_4 - param_2) + uVar8);
                pbVar4[1] = *(byte *)(((uint)*pbVar1 - param_2) + param_4);
                iVar10 = (uint)*pbVar2 - param_2;
              }
              else {
                *pbVar4 = *(byte *)((param_4 - param_2) + uVar8);
                pbVar4[1] = *(byte *)(((uint)*pbVar1 - param_2) + param_3 + param_4);
                iVar10 = ((uint)*pbVar2 - param_2) + param_3 * 2;
              }
              pbVar4[2] = *(byte *)(iVar10 + param_4);
              if (((*(int *)((int)this + 0x598) == 0) || (local_8 < 10)) ||
                 (*(short *)(*(int *)((int)this + 0x4c8) + 2) + -10 <= (int)local_8)) {
                pbVar4[3] = 0;
              }
              else {
                pbVar4[3] = (byte)*(int *)((int)this + 0x598);
              }
              pbVar4 = pbVar4 + 4;
              if ((*(int *)((int)this + 0x598) == 4) && (local_8 == 9)) {
                pbVar4 = (byte *)(*(int *)((int)this + 0x4c8) + 4);
              }
              local_8 = local_8 + 1;
            }
          }
        }
        local_d = local_d + 1;
      } while (local_d < 8);
      local_c = local_c + 1;
    } while (local_c < 8);
    local_b = local_b + 1;
  } while (local_b < 4);
  return;
}


// ---- FUN_1002c220 @ 1002c220

void __thiscall FUN_1002c220(void *this,int param_1,int param_2,int param_3,undefined1 *param_4)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  undefined1 *puVar4;
  
  if (*(int *)((int)this + 0x598) == 0) {
    puVar4 = (undefined1 *)(*(int *)((int)this + 0x4c8) + 4);
  }
  else {
    puVar4 = (undefined1 *)
             (*(int *)((int)this + 0x4c8) + -0x24 +
             (uint)*(ushort *)(*(int *)((int)this + 0x4c8) + 2) * 4);
  }
  sVar1 = 0;
  if (0 < param_2) {
    do {
      puVar4 = puVar4 + 4;
      if ((*(int *)((int)this + 0x598) == 4) && (sVar1 == 9)) {
        puVar4 = (undefined1 *)(*(int *)((int)this + 0x4c8) + 4);
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < param_2);
  }
  sVar1 = (short)param_2;
  if (param_4 == (undefined1 *)0x0) {
    sVar3 = 0;
    if (0 < (short)param_3) {
      do {
        uVar2 = (undefined1)sVar3;
        puVar4[2] = uVar2;
        puVar4[1] = uVar2;
        *puVar4 = uVar2;
        if (((*(int *)((int)this + 0x598) == 0) || ((short)(sVar1 + sVar3) < 10)) ||
           (*(short *)(*(int *)((int)this + 0x4c8) + 2) + -10 <= (int)(short)(sVar1 + sVar3))) {
          puVar4[3] = 0;
        }
        else {
          puVar4[3] = (char)*(int *)((int)this + 0x598);
        }
        puVar4 = puVar4 + 4;
        if ((*(int *)((int)this + 0x598) == 4) && ((short)(sVar1 + sVar3) == 9)) {
          puVar4 = (undefined1 *)(*(int *)((int)this + 0x4c8) + 4);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < (short)param_3);
      return;
    }
  }
  else {
    sVar3 = 0;
    if (0 < (short)param_3) {
      do {
        *puVar4 = *param_4;
        if (param_1 == 1) {
          puVar4[1] = *param_4;
          uVar2 = *param_4;
        }
        else {
          puVar4[1] = param_4[param_3];
          uVar2 = param_4[param_3 * 2];
        }
        puVar4[2] = uVar2;
        if (((*(int *)((int)this + 0x598) == 0) || ((short)(sVar1 + sVar3) < 10)) ||
           (*(short *)(*(int *)((int)this + 0x4c8) + 2) + -10 <= (int)(short)(sVar1 + sVar3))) {
          puVar4[3] = 0;
        }
        else {
          puVar4[3] = (char)*(int *)((int)this + 0x598);
        }
        puVar4 = puVar4 + 4;
        if ((*(int *)((int)this + 0x598) == 4) && ((short)(sVar1 + sVar3) == 9)) {
          puVar4 = (undefined1 *)(*(int *)((int)this + 0x4c8) + 4);
        }
        sVar3 = sVar3 + 1;
        param_4 = param_4 + 1;
      } while (sVar3 < (short)param_3);
    }
  }
  return;
}


// ---- FUN_1002c3b0 @ 1002c3b0

void __thiscall
FUN_1002c3b0(void *this,int param_1,HGDIOBJ param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  int iVar3;
  int local_140;
  undefined1 *local_13c;
  int local_130;
  int local_12c;
  undefined1 local_100 [256];
  
  if (*(int *)((int)this + 0x4c8) != 0) {
    if (*(int *)((int)this + 0x4d8) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x4d8) + 4) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x4dc) + 8) = 0;
    }
    if (((param_1 != 0) && (iVar3 = *(int *)(param_1 + 0x20), iVar3 != 0)) && (iVar3 != 3)) {
      if (((((param_3 != 0) && (*(int *)((int)this + 0x124) == -0x270d)) &&
           ((iVar2 = *(int *)(*(int *)((int)this + 0x74) + 0xa0), iVar2 != 0 &&
            ((0 < param_4 && (0 < param_5)))))) && (param_4 < iVar3)) &&
         ((param_5 < iVar3 && (param_4 <= param_5)))) {
        MbufGet(iVar2,local_100);
        local_140 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            if ((local_140 < param_4) || (param_5 < local_140)) {
              local_12c = 0;
              local_12c._0_1_ = 0;
              local_130 = 0x7fffffff;
              for (iVar3 = param_4; iVar3 <= param_5; iVar3 = iVar3 + 1) {
                iVar2 = 2;
                do {
                  iVar2 = iVar2 >> 1;
                } while (iVar2 != 0);
                iVar2 = 2;
                do {
                  iVar2 = iVar2 >> 1;
                } while (iVar2 != 0);
                iVar2 = 2;
                do {
                  iVar2 = iVar2 >> 1;
                } while (iVar2 != 0);
                iVar2 = ftol();
                if (iVar2 < local_130) {
                  local_130 = iVar2;
                  local_12c = iVar3;
                }
              }
              local_100[local_140] = (undefined1)local_12c;
            }
            local_140 = local_140 + 1;
          } while (local_140 < *(int *)(param_1 + 0x20));
        }
        MbufPut(*(undefined4 *)(*(int *)((int)this + 0x74) + 0xa0),local_100);
      }
      puVar1 = *(undefined1 **)((int)this + 0x4c8);
      if (*(int *)((int)this + 0x598) == 0) {
        local_13c = (undefined1 *)(param_1 + 0x28);
      }
      else {
        local_13c = (undefined1 *)(param_1 + 0x50);
      }
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x20)) {
        do {
          local_13c[2] = puVar1[4];
          local_13c[1] = puVar1[5];
          *local_13c = puVar1[6];
          local_13c[3] = puVar1[7];
          local_13c = local_13c + 4;
          if ((*(int *)((int)this + 0x598) == 4) &&
             ((int)*(short *)(param_1 + 0x20) - (int)(short)iVar3 == 0xb)) {
            local_13c = (undefined1 *)(param_1 + 0x28);
          }
          iVar3 = iVar3 + 1;
          puVar1 = puVar1 + 4;
        } while (iVar3 < *(int *)(param_1 + 0x20));
      }
      if ((param_2 != (HGDIOBJ)0x0) && (hdc = GetDC(*(HWND *)((int)this + 0x42c)), hdc != (HDC)0x0))
      {
        hdc_00 = CreateCompatibleDC(hdc);
        if (hdc_00 != (HDC)0x0) {
          h = SelectObject(hdc_00,param_2);
          SetDIBColorTable(hdc_00,0,*(UINT *)(param_1 + 0x20),(RGBQUAD *)(param_1 + 0x28));
          SelectObject(hdc_00,h);
          DeleteDC(hdc_00);
        }
        ReleaseDC(*(HWND *)((int)this + 0x42c),hdc);
      }
    }
  }
  return;
}


// ---- FUN_1002c790 @ 1002c790

undefined4 __thiscall FUN_1002c790(void *this,int param_1)

{
  if (*(int *)((int)this + 0x430) == param_1) {
    return *(undefined4 *)((int)this + 0x574);
  }
  if (*(int *)((int)this + 0x434) == param_1) {
    return *(undefined4 *)((int)this + 0x578);
  }
  if (*(int *)((int)this + 0x438) == param_1) {
    return *(undefined4 *)((int)this + 0x57c);
  }
  if (*(int *)((int)this + 0x43c) == param_1) {
    return *(undefined4 *)((int)this + 0x580);
  }
  return *(undefined4 *)((int)this + 0x574);
}


// ---- FUN_1002c7f0 @ 1002c7f0

undefined4 __thiscall FUN_1002c7f0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x5d4) == param_1) {
    return *(undefined4 *)((int)this + 0x5c4);
  }
  if (*(int *)((int)this + 0x5d8) == param_1) {
    return *(undefined4 *)((int)this + 0x5c8);
  }
  if (*(int *)((int)this + 0x5dc) == param_1) {
    return *(undefined4 *)((int)this + 0x5cc);
  }
  if (*(int *)((int)this + 0x5e0) == param_1) {
    return *(undefined4 *)((int)this + 0x5d0);
  }
  return *(undefined4 *)((int)this + 0x5c4);
}


// ---- FUN_1002c850 @ 1002c850

undefined4 __thiscall FUN_1002c850(void *this,int param_1)

{
  if (*(int *)((int)this + 0x5d4) == param_1) {
    *(undefined4 *)((int)this + 0x5d4) = 0;
    *(undefined4 *)((int)this + 0x5c4) = 0;
  }
  if (*(int *)((int)this + 0x5d8) == param_1) {
    *(undefined4 *)((int)this + 0x5d8) = 0;
    *(undefined4 *)((int)this + 0x5c8) = 0;
  }
  if (*(int *)((int)this + 0x5dc) == param_1) {
    *(undefined4 *)((int)this + 0x5dc) = 0;
    *(undefined4 *)((int)this + 0x5cc) = 0;
  }
  if (*(int *)((int)this + 0x5e0) == param_1) {
    *(undefined4 *)((int)this + 0x5e0) = 0;
    *(undefined4 *)((int)this + 0x5d0) = 0;
  }
  if ((((*(int *)((int)this + 0x5d4) == 0) && (*(int *)((int)this + 0x5d8) == 0)) &&
      (*(int *)((int)this + 0x5dc) == 0)) && (*(int *)((int)this + 0x5e0) == 0)) {
    return 1;
  }
  return 0;
}


// ---- FUN_1002c910 @ 1002c910

undefined4 __thiscall FUN_1002c910(void *this,int param_1)

{
  if ((((*(int *)((int)this + 0x5d4) != param_1) && (*(int *)((int)this + 0x5d8) != param_1)) &&
      (*(int *)((int)this + 0x5dc) != param_1)) && (*(int *)((int)this + 0x5e0) != param_1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_1002c950 @ 1002c950

void __fastcall FUN_1002c950(int param_1)

{
  bool bVar1;
  HWND hWnd;
  BOOL BVar2;
  HMENU local_4;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x544) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa4) == -9999) {
    return;
  }
  hWnd = *(HWND *)(param_1 + 0x43c);
  if (hWnd == (HWND)0x0) {
    if (*(int *)(param_1 + 0x42c) == 0) goto LAB_1002c9a8;
    hWnd = *(HWND *)(param_1 + 0x42c);
  }
  BVar2 = IsIconic(hWnd);
  if (BVar2 == 0) {
    bVar1 = true;
  }
LAB_1002c9a8:
  if (bVar1) {
    local_4 = GetSystemMenu(*(HWND *)(param_1 + 0x42c),0);
  }
  if (*(int *)(param_1 + 0x548) != 0) {
    if (bVar1) {
      SetMenu(*(HWND *)(param_1 + 0x42c),(HMENU)0x0);
      CheckMenuItem(local_4,1,0);
    }
    *(undefined4 *)(param_1 + 0x548) = 0;
    return;
  }
  if (bVar1) {
    SetMenu(*(HWND *)(param_1 + 0x42c),*(HMENU *)(param_1 + 0x544));
    CheckMenuItem(local_4,1,8);
  }
  *(undefined4 *)(param_1 + 0x548) = 1;
  return;
}


// ---- FUN_1002ca40 @ 1002ca40

void __fastcall FUN_1002ca40(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  LONG LVar4;
  uint uVar5;
  DWORD DVar6;
  uint uVar7;
  HMENU hMenu;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0xa0) == -9999) {
    return;
  }
  pHVar2 = *(HWND *)(param_1 + 0x43c);
  if (pHVar2 == (HWND)0x0) {
    if (*(int *)(param_1 + 0x42c) != 0) {
      pHVar2 = *(HWND *)(param_1 + 0x42c);
      goto LAB_1002ca76;
    }
  }
  else {
LAB_1002ca76:
    BVar3 = IsIconic(pHVar2);
    if (BVar3 == 0) {
      bVar1 = true;
    }
  }
  uVar7 = 0;
  if (bVar1) {
    LVar4 = GetWindowLongA(*(HWND *)(param_1 + 0x42c),-0x10);
    *(LONG *)(param_1 + 0x564) = LVar4;
    BVar3 = IsZoomed(*(HWND *)(param_1 + 0x42c));
    uVar7 = (BVar3 == 0) - 1 & 0x1000000;
  }
  uVar5 = *(uint *)(param_1 + 0x564);
  if ((uVar5 & 0x400000) == 0) {
    *(uint *)(param_1 + 0x564) = uVar5 | 0xc00000;
    if (*(int *)(param_1 + 0xb0) == -0x270d) {
      *(uint *)(param_1 + 0x564) = uVar5 | 0xc80000;
    }
    if (*(int *)(param_1 + 0xb4) == -0x270d) {
      *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) | 0x20000;
    }
    if (*(int *)(param_1 + 0xb8) == -0x270d) {
      *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) | 0x10000;
    }
    if (!bVar1) goto LAB_1002cb9b;
    SetWindowLongA(*(HWND *)(param_1 + 0x42c),-0x10,*(uint *)(param_1 + 0x564) | uVar7);
    if (*(int *)(param_1 + 0x548) == 1) {
      hMenu = *(HMENU *)(param_1 + 0x544);
      goto LAB_1002cb8e;
    }
    hMenu = (HMENU)0x0;
    pHVar2 = *(HWND *)(param_1 + 0x42c);
  }
  else {
    *(uint *)(param_1 + 0x564) = uVar5 & 0xffb4ffff;
    uVar5 = uVar5 & 0xffb4ffff | 0x800000;
    *(uint *)(param_1 + 0x564) = uVar5;
    if (!bVar1) goto LAB_1002cb9b;
    SetWindowLongA(*(HWND *)(param_1 + 0x42c),-0x10,uVar7 | uVar5);
    hMenu = (HMENU)0x0;
LAB_1002cb8e:
    pHVar2 = *(HWND *)(param_1 + 0x42c);
  }
  SetMenu(pHVar2,hMenu);
LAB_1002cb9b:
  if ((*(int *)(param_1 + 0x434) != 0) || (BVar3 = 0, *(int *)(param_1 + 0xe4) == -0x270d)) {
    BVar3 = 1;
  }
  InvalidateRect(*(HWND *)(param_1 + 0x42c),(RECT *)0x0,BVar3);
  if (*(HWND *)(param_1 + 0x42c) != (HWND)0x0) {
    if (*(int *)(param_1 + 0x100) == -0x270d) {
      UpdateWindow(*(HWND *)(param_1 + 0x42c));
      return;
    }
    if (*(int *)(param_1 + 0x100) != 0x10000000) {
      return;
    }
    DVar6 = GetCurrentThreadId();
    if (DVar6 == *(DWORD *)(param_1 + 0x41c)) {
      UpdateWindow(*(HWND *)(param_1 + 0x42c));
    }
  }
  return;
}


// ---- FUN_1002cc20 @ 1002cc20

void __thiscall FUN_1002cc20(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  HMENU local_4;
  
  bVar1 = false;
  if ((*(uint *)((int)this + 0x564) & 0x400000) != 0) {
    if ((*(int *)((int)this + 0x43c) != 0) || (*(int *)((int)this + 0x42c) != 0)) {
      bVar1 = true;
    }
    if (param_1 == 0) {
      param_1 = 2 - (uint)(*(int *)((int)this + 0x568) == 1);
    }
    if (bVar1) {
      local_4 = GetSystemMenu(*(HWND *)((int)this + 0x42c),0);
    }
    iVar2 = param_1;
    if (*(int *)((int)this + 0xa0) == -9999) {
      iVar2 = 1;
    }
    if (*(int *)((int)this + 0xa4) == -9999) {
      param_1 = 1;
    }
    if (local_4 != (HMENU)0x0) {
      EnableMenuItem(local_4,1,(uint)(param_1 != 2));
      EnableMenuItem(local_4,2,(uint)(iVar2 != 2));
    }
  }
  return;
}


// ---- FUN_1002cce0 @ 1002cce0

void __fastcall FUN_1002cce0(int param_1)

{
  bool bVar1;
  LONG LVar2;
  BOOL BVar3;
  uint uVar4;
  HMENU hMenu;
  int iVar5;
  UINT UVar6;
  uint uVar7;
  
  bVar1 = false;
  if ((*(int *)(param_1 + 0x43c) != 0) || (*(int *)(param_1 + 0x42c) != 0)) {
    bVar1 = true;
  }
  uVar7 = 0;
  if (bVar1) {
    LVar2 = GetWindowLongA(*(HWND *)(param_1 + 0x42c),-0x10);
    *(LONG *)(param_1 + 0x564) = LVar2;
    BVar3 = IsZoomed(*(HWND *)(param_1 + 0x42c));
    uVar7 = (BVar3 == 0) - 1 & 0x1000000;
  }
  if ((*(uint *)(param_1 + 0x564) & 0x400000) != 0) {
    uVar4 = *(uint *)(param_1 + 0x564) & 0xfff4ffff;
    *(uint *)(param_1 + 0x564) = uVar4;
    if (*(int *)(param_1 + 0xb0) == -0x270d) {
      *(uint *)(param_1 + 0x564) = uVar4 | 0x80000;
    }
    if (*(int *)(param_1 + 0xb4) == -0x270d) {
      *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) | 0x20000;
    }
    if (*(int *)(param_1 + 0xb8) == -0x270d) {
      *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) | 0x10000;
    }
    if (bVar1) {
      SetWindowLongA(*(HWND *)(param_1 + 0x42c),-0x10,*(uint *)(param_1 + 0x564) | uVar7);
    }
    if (*(int *)(param_1 + 0xb0) == -0x270d) {
      if (!bVar1) {
        return;
      }
      if (*(HWND *)(param_1 + 0x42c) != (HWND)0x0) {
        hMenu = GetSystemMenu(*(HWND *)(param_1 + 0x42c),0);
        iVar5 = GetMenuItemCount(hMenu);
        UVar6 = GetMenuItemID(hMenu,iVar5 + -1);
        if (UVar6 != 2) {
          AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
          AppendMenuA(hMenu,0,1,s_Menu__Bar_100331f0);
          AppendMenuA(hMenu,0,2,s_Title__Off_100331fc);
        }
        if (*(int *)(param_1 + 0x548) == 1) {
          CheckMenuItem(hMenu,1,8);
        }
      }
    }
    if ((bVar1) && (*(HWND *)(param_1 + 0x42c) != (HWND)0x0)) {
      SetWindowPos(*(HWND *)(param_1 + 0x42c),(HWND)0x0,0,0,0,0,0x37);
    }
  }
  return;
}


// ---- FUN_1002ce70 @ 1002ce70

void __thiscall FUN_1002ce70(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  short *local_4;
  
  if ((param_1 != 0) && (param_2 != 3)) {
    iVar1 = param_1;
    if (*(int *)((int)this + 0x598) != 0) {
      iVar1 = param_1 + param_3 * 10;
    }
    local_4 = (short *)(iVar1 + 0x28);
    iVar1 = 0;
    if (0 < param_2) {
      do {
        *local_4 = (short)iVar1;
        local_4 = (short *)((int)local_4 + param_3);
        if ((*(int *)((int)this + 0x598) == 4) &&
           ((int)*(short *)(param_1 + 0x20) - (int)(short)iVar1 == 0xb)) {
          local_4 = (short *)(param_1 + 0x28);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
  }
  return;
}


// ---- FUN_1002cf00 @ 1002cf00

void __fastcall FUN_1002cf00(void *param_1)

{
  byte bVar1;
  HMODULE pHVar2;
  uint uVar3;
  HWND pHVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  byte local_200 [512];
  
  uVar3 = *(uint *)((int)param_1 + 0x520);
  if ((uVar3 & 1) != 0) {
    if ((uVar3 & 2) == 0) {
      GetModuleFileNameA(DAT_10033230,(LPSTR)local_200,0x200);
      *(undefined4 *)((int)param_1 + 0x528) = *(undefined4 *)((int)param_1 + 0x410);
      pHVar2 = LoadLibraryA((LPCSTR)local_200);
      *(HMODULE *)((int)param_1 + 0x524) = pHVar2;
    }
    else {
      *(uint *)((int)param_1 + 0x520) = uVar3 & 0xfffffffd;
    }
  }
  pcVar7 = GetParent_exref;
  if (*(int *)((int)param_1 + 0x434) == 0) {
    *(HWND *)((int)param_1 + 0x434) = *(HWND *)((int)param_1 + 0x430);
    uVar3 = GetWindowLongA(*(HWND *)((int)param_1 + 0x430),-0x10);
    pcVar7 = GetParent_exref;
    while ((uVar3 & 0x40000000) != 0) {
      pHVar4 = GetParent(*(HWND *)((int)param_1 + 0x434));
      *(HWND *)((int)param_1 + 0x434) = pHVar4;
      uVar3 = GetWindowLongA(pHVar4,-0x10);
    }
  }
  if (*(int *)((int)param_1 + 0x43c) == 0) {
    *(HWND *)((int)param_1 + 0x43c) = *(HWND *)((int)param_1 + 0x430);
    *(undefined4 *)((int)param_1 + 0x438) = *(undefined4 *)((int)param_1 + 0x434);
    uVar3 = GetWindowLongA(*(HWND *)((int)param_1 + 0x430),-0x10);
    while ((uVar3 & 0x40000000) != 0) {
      pHVar4 = (HWND)(*pcVar7)(*(undefined4 *)((int)param_1 + 0x43c));
      GetClassNameA(pHVar4,(LPSTR)local_200,0x80);
      pbVar8 = local_200;
      pcVar9 = s_MDIClient_10033208;
      do {
        bVar1 = *pbVar8;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_1002d027:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_1002d02c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_1002d027;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_1002d02c:
      if (iVar5 == 0) {
        *(HWND *)((int)param_1 + 0x438) = pHVar4;
        break;
      }
      *(HWND *)((int)param_1 + 0x43c) = pHVar4;
      uVar3 = GetWindowLongA(pHVar4,-0x10);
    }
    if (*(int *)((int)param_1 + 0x43c) == *(int *)((int)param_1 + 0x434)) {
      *(HWND *)((int)param_1 + 0x43c) = *(HWND *)((int)param_1 + 0x430);
      uVar3 = GetWindowLongA(*(HWND *)((int)param_1 + 0x430),-0x10);
      while (((uVar3 & 0x40000000) != 0 &&
             (uVar3 = GetWindowLongA(*(HWND *)((int)param_1 + 0x43c),-0x10), (uVar3 & 0x440000) == 0
             ))) {
        pHVar4 = (HWND)(*pcVar7)(*(undefined4 *)((int)param_1 + 0x43c));
        *(HWND *)((int)param_1 + 0x43c) = pHVar4;
        uVar3 = GetWindowLongA(pHVar4,-0x10);
      }
      *(HWND *)((int)param_1 + 0x438) = *(HWND *)((int)param_1 + 0x43c);
      uVar3 = GetWindowLongA(*(HWND *)((int)param_1 + 0x43c),-0x10);
      if ((uVar3 & 0x40000000) != 0) {
        uVar6 = (*pcVar7)(*(undefined4 *)((int)param_1 + 0x43c));
        *(undefined4 *)((int)param_1 + 0x438) = uVar6;
      }
    }
  }
  if (*(int *)((int)param_1 + 0x574) == 0) {
    if (((*(uint *)((int)param_1 + 0x2b0) & 2) == 0) || (*(int *)((int)param_1 + 0x118) != -0x270d))
    {
      pcVar7 = (code *)FUN_1001f300(param_1,0,*(HWND *)((int)param_1 + 0x430),0x1001b710,0);
      *(code **)((int)param_1 + 0x574) = pcVar7;
      if (pcVar7 == HookWndProc) goto LAB_1002d131;
    }
    else {
      pcVar7 = (code *)FUN_1001f300(param_1,1,*(HWND *)((int)param_1 + 0x430),0x1001ce10,0);
      *(code **)((int)param_1 + 0x574) = pcVar7;
      if (pcVar7 == HookMDIFrameProc) {
LAB_1002d131:
        FUN_10025a10();
      }
    }
  }
  if ((*(int *)((int)param_1 + 0x578) == 0) && (*(int *)((int)param_1 + 0x118) == -0x270d)) {
    if (*(HWND *)((int)param_1 + 0x430) == *(HWND *)((int)param_1 + 0x434)) {
      *(undefined4 *)((int)param_1 + 0x578) = *(undefined4 *)((int)param_1 + 0x574);
    }
    else {
      pcVar7 = (code *)FUN_1001f300(param_1,2,*(HWND *)((int)param_1 + 0x434),0x1001d6e0,0);
      *(code **)((int)param_1 + 0x578) = pcVar7;
      if (pcVar7 == HookParentWndProc) {
        FUN_10025a10();
      }
    }
  }
  if ((*(int *)((int)param_1 + 0x57c) == 0) && (*(int *)((int)param_1 + 0x118) == -0x270d)) {
    pHVar4 = *(HWND *)((int)param_1 + 0x438);
    if (*(HWND *)((int)param_1 + 0x434) == pHVar4) {
LAB_1002d1ee:
      uVar6 = *(undefined4 *)((int)param_1 + 0x578);
    }
    else {
      if (*(HWND *)((int)param_1 + 0x430) != pHVar4) {
        pcVar7 = (code *)FUN_1001f300(param_1,3,pHVar4,0x1001e660,0);
        *(code **)((int)param_1 + 0x57c) = pcVar7;
        if (pcVar7 == HookMDIClientWndProc) {
          FUN_10025a10();
        }
        goto LAB_1002d202;
      }
      if (*(HWND *)((int)param_1 + 0x434) == pHVar4) goto LAB_1002d1ee;
      uVar6 = *(undefined4 *)((int)param_1 + 0x574);
    }
    *(undefined4 *)((int)param_1 + 0x57c) = uVar6;
  }
LAB_1002d202:
  if ((*(int *)((int)param_1 + 0x580) == 0) && (*(int *)((int)param_1 + 0x118) == -0x270d)) {
    pHVar4 = *(HWND *)((int)param_1 + 0x43c);
    if (pHVar4 == *(HWND *)((int)param_1 + 0x438)) {
LAB_1002d279:
      *(undefined4 *)((int)param_1 + 0x580) = *(undefined4 *)((int)param_1 + 0x57c);
      return;
    }
    if ((*(HWND *)((int)param_1 + 0x434) == pHVar4) || (*(HWND *)((int)param_1 + 0x430) == pHVar4))
    {
      if (pHVar4 == *(HWND *)((int)param_1 + 0x438)) goto LAB_1002d279;
      if (*(HWND *)((int)param_1 + 0x434) == pHVar4) {
        *(undefined4 *)((int)param_1 + 0x580) = *(undefined4 *)((int)param_1 + 0x578);
        return;
      }
      *(undefined4 *)((int)param_1 + 0x580) = *(undefined4 *)((int)param_1 + 0x574);
    }
    else {
      pcVar7 = (code *)FUN_1001f300(param_1,1,pHVar4,0x1001ce10,0);
      *(code **)((int)param_1 + 0x580) = pcVar7;
      if (pcVar7 == HookMDIFrameProc) {
        FUN_10025a10();
        return;
      }
    }
  }
  return;
}


// ---- FUN_1002d2d0 @ 1002d2d0

undefined4 __fastcall FUN_1002d2d0(void *param_1)

{
  HWND pHVar1;
  code *pcVar2;
  int iVar3;
  
  pHVar1 = *(HWND *)((int)param_1 + 0x43c);
  if (pHVar1 != (HWND)0x0) {
    if ((((*(int *)((int)param_1 + 0x580) != 0) && (*(HWND *)((int)param_1 + 0x438) != pHVar1)) &&
        (*(HWND *)((int)param_1 + 0x434) != pHVar1)) &&
       ((*(HWND *)((int)param_1 + 0x430) != pHVar1 &&
        (pcVar2 = (code *)FUN_1001f300(param_1,1,pHVar1,*(int *)((int)param_1 + 0x580),0x1001ce10),
        pcVar2 != HookMDIFrameProc)))) {
      *(undefined4 *)((int)param_1 + 0x5e0) = *(undefined4 *)((int)param_1 + 0x43c);
      *(undefined4 *)((int)param_1 + 0x5d0) = *(undefined4 *)((int)param_1 + 0x580);
    }
    *(undefined4 *)((int)param_1 + 0x43c) = 0;
    *(undefined4 *)((int)param_1 + 0x580) = 0;
  }
  pHVar1 = *(HWND *)((int)param_1 + 0x438);
  if (pHVar1 != (HWND)0x0) {
    if (((*(int *)((int)param_1 + 0x57c) != 0) && (*(HWND *)((int)param_1 + 0x434) != pHVar1)) &&
       ((*(HWND *)((int)param_1 + 0x430) != pHVar1 &&
        (pcVar2 = (code *)FUN_1001f300(param_1,3,pHVar1,*(int *)((int)param_1 + 0x57c),0x1001e660),
        pcVar2 != HookMDIClientWndProc)))) {
      *(undefined4 *)((int)param_1 + 0x5dc) = *(undefined4 *)((int)param_1 + 0x438);
      *(undefined4 *)((int)param_1 + 0x5cc) = *(undefined4 *)((int)param_1 + 0x57c);
    }
    *(undefined4 *)((int)param_1 + 0x438) = 0;
    *(undefined4 *)((int)param_1 + 0x57c) = 0;
  }
  pHVar1 = *(HWND *)((int)param_1 + 0x434);
  if (pHVar1 != (HWND)0x0) {
    if (((*(int *)((int)param_1 + 0x578) != 0) && (*(HWND *)((int)param_1 + 0x430) != pHVar1)) &&
       (pcVar2 = (code *)FUN_1001f300(param_1,2,pHVar1,*(int *)((int)param_1 + 0x578),0x1001d6e0),
       pcVar2 != HookParentWndProc)) {
      *(undefined4 *)((int)param_1 + 0x5d8) = *(undefined4 *)((int)param_1 + 0x434);
      *(undefined4 *)((int)param_1 + 0x5c8) = *(undefined4 *)((int)param_1 + 0x578);
    }
    *(undefined4 *)((int)param_1 + 0x434) = 0;
    *(undefined4 *)((int)param_1 + 0x578) = 0;
  }
  pHVar1 = *(HWND *)((int)param_1 + 0x430);
  if (pHVar1 == (HWND)0x0) goto LAB_1002d49f;
  iVar3 = *(int *)((int)param_1 + 0x574);
  if (iVar3 != 0) {
    if (((*(uint *)((int)param_1 + 0x2b0) & 2) == 0) || (*(int *)((int)param_1 + 0x118) != -0x270d))
    {
      pcVar2 = (code *)FUN_1001f300(param_1,0,pHVar1,iVar3,0x1001b710);
      if (pcVar2 != HookWndProc) goto LAB_1002d473;
    }
    else {
      pcVar2 = (code *)FUN_1001f300(param_1,1,pHVar1,iVar3,0x1001ce10);
      if (pcVar2 != HookMDIFrameProc) {
LAB_1002d473:
        *(undefined4 *)((int)param_1 + 0x5d4) = *(undefined4 *)((int)param_1 + 0x430);
        *(undefined4 *)((int)param_1 + 0x5c4) = *(undefined4 *)((int)param_1 + 0x574);
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x430) = 0;
  *(undefined4 *)((int)param_1 + 0x574) = 0;
LAB_1002d49f:
  if ((*(uint *)((int)param_1 + 0x520) & 1) != 0) {
    if (((*(int *)((int)param_1 + 0x53c) + *(int *)((int)param_1 + 0x540) +
          *(int *)((int)param_1 + 0x530) + *(int *)((int)param_1 + 0x534) +
          *(int *)((int)param_1 + 0x538) == 0) && (iVar3 = FUN_1001fed0(0,(int)param_1), iVar3 == 0)
        ) && (*(HMODULE *)((int)param_1 + 0x524) != (HMODULE)0x0)) {
      FreeLibrary(*(HMODULE *)((int)param_1 + 0x524));
      *(undefined4 *)((int)param_1 + 0x524) = 0;
      return 1;
    }
    *(uint *)((int)param_1 + 0x520) = *(uint *)((int)param_1 + 0x520) | 2;
  }
  return 1;
}


// ---- FUN_1002d520 @ 1002d520

void __thiscall FUN_1002d520(void *this,HWND param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_1 != (HWND)0x0) {
    pvVar1 = FUN_1001efb0(*(int *)((int)this + 0x434),0x67,4,4,2);
    if (pvVar1 != (void *)0x0) {
      uVar2 = GetWindowLongA(param_1,-0x10);
      if ((uVar2 & 0x300000) == 0) {
        FUN_1001fcd0(*(int *)((int)this + 0x434),0xbee,0xffffd8f1,0);
        FUN_1001fcd0(*(int *)((int)this + 0x434),0x67,0,0xfffffffb);
        return;
      }
      FUN_1001fcd0(*(int *)((int)this + 0x434),0xbee,0xffffd8f3,0);
      FUN_1001fcd0(*(int *)((int)this + 0x434),0x67,2,0xfffffff9);
    }
  }
  return;
}


// ---- FUN_1002d5c0 @ 1002d5c0

void __fastcall FUN_1002d5c0(int param_1)

{
  void *pvVar1;
  HWND pHVar2;
  uint uVar3;
  
  pvVar1 = FUN_1001efb0(*(int *)(param_1 + 0x434),0x68,4,4,2);
  if (((pvVar1 == (void *)0x0) && (pHVar2 = *(HWND *)(param_1 + 0x438), pHVar2 != (HWND)0x0)) &&
     (*(HWND *)(param_1 + 0x434) != pHVar2)) {
    for (pHVar2 = GetWindow(pHVar2,5); pHVar2 != (HWND)0x0; pHVar2 = GetWindow(pHVar2,2)) {
      uVar3 = FUN_1001eeb0((int)pHVar2);
      if (uVar3 == 0) {
        FUN_1002d6a0(pHVar2);
      }
    }
  }
  *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) | 4;
  return;
}


// ---- FUN_1002d640 @ 1002d640

void __fastcall FUN_1002d640(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) & 0xfffffffb;
  pvVar2 = FUN_1001efb0(*(int *)(param_1 + 0x434),0x68,4,4,2);
  pvVar1 = DAT_10032eb0;
  if (pvVar2 == (void *)0x0) {
    while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((int)pvVar2 + 0x10);
      if ((*(uint *)((int)pvVar2 + 0x2b0) & 2) != 0) {
        FUN_1002d810(pvVar2);
      }
    }
  }
  return;
}


// ---- FUN_1002d6a0 @ 1002d6a0

DWORD * FUN_1002d6a0(HWND param_1)

{
  DWORD *this;
  int iVar1;
  HWND pHVar2;
  tagRECT local_10;
  
  this = FUN_1001ff50(0,0,0,0x10000000,&DAT_10033214);
  if (this != (DWORD *)0x0) {
    if (this[0x1c] != 0) {
      this[0xac] = this[0xac] | 2;
      GetClientRect(param_1,&local_10);
      iVar1 = FUN_10025ac0(this,local_10.right - local_10.left,local_10.bottom - local_10.top,
                           param_1);
      if (iVar1 == 0) {
        FUN_1001ff90(this);
        return (DWORD *)0x0;
      }
      FUN_10026fa0(this,4);
      this[0x66] = this[0x10b];
      this[0x6c] = 0;
      pHVar2 = GetWindow((HWND)this[0x10b],3);
      this[0x67] = (DWORD)pHVar2;
      this[0x6a] = this[0x77];
      this[0x6b] = this[0x78];
      if ((this[0x10f] != 0) && (this[0x10b] != this[0x10f])) {
        this[0x68] = this[0x75] - this[0x95];
        this[0x69] = this[0x76] - this[0x96];
        return this;
      }
      this[0x68] = this[0x75] - this[0x8c];
      this[0x69] = this[0x76] - this[0x8d];
      return this;
    }
    if (this != (DWORD *)0x0) {
      FUN_1001ff90(this);
      this = (DWORD *)0x0;
    }
  }
  return this;
}


// ---- FUN_1002d810 @ 1002d810

void FUN_1002d810(void *param_1)

{
  FUN_10026240(param_1,1,1);
  *(uint *)((int)param_1 + 0x2b0) = *(uint *)((int)param_1 + 0x2b0) & 0xfffffffd;
  FUN_1001ff90(param_1);
  return;
}


// ---- FUN_1002d840 @ 1002d840

void __fastcall FUN_1002d840(int param_1)

{
  if (*(int *)(param_1 + 0x98) == -9999) {
    *(undefined4 *)(param_1 + 0x488) = 0xffffd8f1;
    *(undefined4 *)(param_1 + 0x48c) = 0xffffd8f1;
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0xdc);
    return;
  }
  *(undefined4 *)(param_1 + 0x48c) = 0xffffd8f3;
  *(uint *)(param_1 + 0x488) = (-(uint)(*(int *)(param_1 + 0xd8) == -9999) & 2) - 9999;
  if ((*(int *)(param_1 + 0xd8) == -0x270d) && (*(int *)(param_1 + 0xdc) == -9999)) {
    *(undefined4 *)(param_1 + 0x490) = 0xffffd8f1;
    return;
  }
  *(undefined4 *)(param_1 + 0x490) = 0xffffd8f3;
  return;
}


// ---- FUN_1002d8c0 @ 1002d8c0

void FUN_1002d8c0(HDC param_1)

{
  RealizePalette(param_1);
  return;
}


// ---- FUN_1002d8d0 @ 1002d8d0

void FUN_1002d8d0(HDC param_1,HPALETTE param_2,BOOL param_3)

{
  SelectPalette(param_1,param_2,param_3);
  return;
}


// ---- FUN_1002d8f0 @ 1002d8f0

bool FUN_1002d8f0(RECT *param_1,undefined4 *param_2,int param_3,HPALETTE param_4,int *param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  HBITMAP ho;
  
  iVar2 = param_2[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  ho = FUN_1002d960(param_1,param_2[1] - *param_5,iVar2 - param_5[1]);
  if (ho == (HBITMAP)0x0) {
    return false;
  }
  bVar1 = FUN_1002da70(ho,param_2,param_3,param_4,param_5,param_6);
  DeleteObject(ho);
  return bVar1;
}


// ---- FUN_1002d960 @ 1002d960

HGDIOBJ FUN_1002d960(RECT *param_1,int param_2,int param_3)

{
  BOOL BVar1;
  HDC hdc;
  HDC hdc_00;
  int iVar2;
  int iVar3;
  HBITMAP h;
  int y1;
  int iVar4;
  int iVar5;
  HGDIOBJ pvVar6;
  int x1;
  
  pvVar6 = (HGDIOBJ)0x0;
  BVar1 = IsRectEmpty(param_1);
  if (BVar1 == 0) {
    hdc = CreateDCA(s_DISPLAY_10033218,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    x1 = param_1->left;
    y1 = param_1->top;
    iVar5 = param_1->bottom;
    iVar4 = param_1->right;
    iVar2 = GetDeviceCaps(hdc,8);
    iVar3 = GetDeviceCaps(hdc,10);
    if (x1 < 1) {
      x1 = 0;
    }
    if (y1 < 1) {
      y1 = 0;
    }
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar5 <= iVar3) {
      iVar3 = iVar5;
    }
    iVar5 = iVar2 - x1;
    if (param_2 <= iVar2 - x1) {
      iVar5 = param_2;
    }
    iVar4 = iVar3 - y1;
    if (param_3 <= iVar3 - y1) {
      iVar4 = param_3;
    }
    h = CreateCompatibleBitmap(hdc,iVar5,iVar4);
    pvVar6 = SelectObject(hdc_00,h);
    BitBlt(hdc_00,0,0,iVar5,iVar4,hdc,x1,y1,0xcc0020);
    pvVar6 = SelectObject(hdc_00,pvVar6);
    DeleteDC(hdc);
    DeleteDC(hdc_00);
  }
  return pvVar6;
}


// ---- FUN_1002da70 @ 1002da70

bool FUN_1002da70(HBITMAP param_1,undefined4 *param_2,int param_3,HPALETTE param_4,int *param_5,
                 int param_6)

{
  HDC hdc;
  HPALETTE pHVar1;
  int iVar2;
  BOOL BVar3;
  bool local_20;
  LPVOID local_1c;
  LPBITMAPINFO local_18;
  undefined4 local_14;
  int local_10;
  UINT local_c;
  undefined4 local_8;
  UINT local_4;
  
  if (((param_1 == (HBITMAP)0x0) ||
      (FUN_1002dbc0(param_1,param_2,param_3,param_4,param_5,&local_18,(int *)&local_1c,&local_8,
                    &local_10,param_6,&local_14), local_18 == (LPBITMAPINFO)0x0)) ||
     (local_1c == (LPVOID)0x0)) {
    local_20 = false;
  }
  else {
    hdc = GetDC((HWND)0x0);
    BVar3 = 0;
    pHVar1 = param_4;
    if (param_4 == (HPALETTE)0x0) {
      pHVar1 = GetStockObject(0xf);
    }
    pHVar1 = (HPALETTE)FUN_1002d8d0(hdc,pHVar1,BVar3);
    FUN_1002d8c0(hdc);
    iVar2 = GetDIBits(hdc,param_1,local_4,local_c,local_1c,local_18,0);
    local_20 = iVar2 != 0;
    FUN_1002df40(param_1,(int)param_2,param_3,param_4,param_5,(int *)&local_18,(int *)&local_1c);
    if (pHVar1 != (HPALETTE)0x0) {
      FUN_1002d8d0(hdc,pHVar1,0);
      FUN_1002d8c0(hdc);
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return local_20;
}


// ---- FUN_1002dbc0 @ 1002dbc0

void FUN_1002dbc0(HANDLE param_1,undefined4 *param_2,int param_3,HPALETTE param_4,int *param_5,
                 undefined4 *param_6,int *param_7,undefined4 *param_8,int *param_9,int param_10,
                 undefined4 *param_11)

{
  bool bVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *pMem;
  LPPALETTEENTRY pPalEntries;
  LPPALETTEENTRY ptVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  uint local_8;
  
  *param_11 = 0;
  bVar1 = true;
  iVar2 = GetObjectA(param_1,0x18,&local_18);
  iVar10 = local_1c;
  if (iVar2 == 0) {
    bVar1 = false;
    pMem = local_18;
  }
  else {
    uVar8 = ((-(uint)(param_10 == 0) & 2) + 2) * param_2[8] + 0x28;
    pvVar3 = GlobalAlloc(0x102,param_2[8] * 4 + 0x28);
    pMem = GlobalLock(pvVar3);
    if (pMem == (undefined4 *)0x0) {
      bVar1 = false;
    }
    else {
      puVar11 = param_2;
      puVar12 = pMem;
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      if (((param_10 == 1) && (iVar2 = param_2[8], iVar2 != 0)) && (iVar2 != 3)) {
        pvVar3 = GlobalAlloc(0x102,iVar2 << 2);
        pPalEntries = GlobalLock(pvVar3);
        if (pPalEntries == (LPPALETTEENTRY)0x0) {
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
          bVar1 = false;
          goto LAB_1002ded7;
        }
        uVar8 = 0;
        GetPaletteEntries(param_4,0,param_2[8],pPalEntries);
        puVar7 = (ushort *)(param_2 + 10);
        ptVar4 = pPalEntries;
        if (param_2[8] != 0) {
          do {
            *(BYTE *)((int)pMem + (uint)*puVar7 * 4 + 0x2a) = ptVar4->peRed;
            uVar8 = uVar8 + 1;
            *(BYTE *)((int)pMem + (uint)*puVar7 * 4 + 0x29) = ptVar4->peGreen;
            *(BYTE *)(pMem + *puVar7 + 10) = ptVar4->peBlue;
            *(undefined1 *)((int)pMem + (uint)*puVar7 * 4 + 0x2b) = 0;
            ptVar4 = ptVar4 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar8 < (uint)param_2[8]);
        }
        pvVar3 = GlobalHandle(pPalEntries);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pPalEntries);
        GlobalFree(pvVar3);
      }
      if (((param_2[1] == local_14) &&
          ((local_8 & 0xffff) * (local_8 >> 0x10) - (uint)*(ushort *)((int)param_2 + 0xe) == 0)) &&
         (*param_5 == 0)) {
        local_24 = param_5[1];
        uVar8 = pMem[2];
        local_30 = param_3;
        local_20 = local_14;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = -uVar8;
        }
        local_28 = 0;
        iVar10 = local_10;
        if (local_10 + local_24 < (int)uVar6) {
          uVar6 = uVar8;
          if ((int)uVar8 < 0) {
            uVar6 = -uVar8;
          }
          uVar9 = uVar8;
          if ((int)uVar8 < 0) {
            uVar9 = -uVar8;
          }
          iVar10 = (uVar9 - local_24) - local_10;
          local_30 = iVar10 * ((uint)pMem[5] / uVar6) + param_3;
          if ((int)uVar8 < 0) {
            uVar8 = -uVar8;
          }
          iVar10 = uVar8 - iVar10;
          pMem[2] = iVar10;
          if (iVar10 < 0) {
            iVar10 = -iVar10;
          }
          pMem[5] = ((uint)pMem[5] / uVar6) * iVar10;
          iVar10 = local_10;
        }
      }
      else {
        iVar10 = local_10;
        if ((int)param_2[2] < 0) {
          iVar10 = -local_10;
        }
        iVar2 = local_14 * 0x18 + 0x1f;
        iVar5 = iVar10;
        if (iVar10 < 0) {
          iVar5 = -iVar10;
        }
        iVar5 = ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4 * iVar5;
        local_30 = MfuncAllocMemory(iVar5,1);
        *param_11 = 1;
        if (local_30 == 0) {
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
          bVar1 = false;
          iVar10 = local_1c;
        }
        else {
          pMem[1] = local_14;
          pMem[2] = iVar10;
          local_28 = 0;
          local_24 = 0;
          local_20 = local_14;
          *(undefined2 *)(pMem + 3) = 1;
          *(undefined2 *)((int)pMem + 0xe) = 0x18;
          pMem[5] = iVar5;
          if (iVar10 < 0) {
            iVar10 = -iVar10;
          }
        }
      }
    }
  }
LAB_1002ded7:
  if (!bVar1) {
    *param_6 = 0;
    *param_7 = 0;
    param_8[1] = 0;
    *param_8 = 0;
    *param_9 = 0;
    param_9[1] = 0;
    return;
  }
  *param_6 = pMem;
  *param_7 = local_30;
  *param_8 = local_28;
  param_8[1] = local_24;
  param_9[1] = iVar10;
  *param_9 = local_20;
  return;
}


// ---- FUN_1002df40 @ 1002df40

void FUN_1002df40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int iVar5;
  int *in_stack_0000002c;
  uint local_c;
  
  if (*in_stack_0000002c != 0) {
    iVar1 = *param_6;
    uVar4 = (-(uint)(*(short *)(iVar1 + 0xe) == *(short *)(param_2 + 0xe)) & 0x411100) + 0xff00;
    iVar5 = *(int *)(iVar1 + 8);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    uVar2 = *(uint *)(param_2 + 8);
    local_c = uVar2;
    if ((int)uVar2 < 0) {
      local_c = -uVar2;
    }
    if ((int)uVar2 < 0) {
      uVar4 = uVar4 | 0x10000;
    }
    else {
      uVar4 = uVar4 | 0x4000000;
    }
    FUN_10004e20(*param_7,0,0,*(undefined4 *)(iVar1 + 4),iVar5,*(undefined4 *)(iVar1 + 4),iVar5,0,
                 0xffffffff,0x401000,param_3,*param_5,param_5[1],*(undefined4 *)(param_2 + 4),
                 local_c,*(undefined4 *)(param_2 + 4),local_c,*(uint *)(param_2 + 0x14) / local_c,
                 0xffffffff,uVar4);
    MfuncFreeMemory(*param_7);
    *param_7 = 0;
  }
  pvVar3 = GlobalHandle((LPCVOID)*param_6);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle((LPCVOID)*param_6);
  GlobalFree(pvVar3);
  *param_6 = 0;
  return;
}


// ---- operator_delete @ 1002e060

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1002e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- operator_new @ 1002e066

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002e066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- ftol @ 1002e070

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- __CRT_INIT@12 @ 1002e080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 1998 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (DAT_10033220 < 1) {
      return 0;
    }
    DAT_10033220 = DAT_10033220 + -1;
  }
  if (DAT_10033224 == 0) {
    DVar1 = GetVersion();
    if (((char)DVar1 == '\x03') && ((DVar1 & 0x80000000) != 0)) {
      DAT_10033224 = DAT_10033224 + 1;
    }
    else {
      DAT_10033224 = DAT_10033224 + -1;
    }
  }
  _DAT_100336b8 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 != 1) {
    if ((param_2 == 0) &&
       (((DAT_10033224 < 0 || (DAT_10033220 == 0)) && (DAT_100336c0 != (undefined4 *)0x0)))) {
      puVar2 = DAT_100336bc + -1;
      if (DAT_100336c0 <= puVar2) {
        do {
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)();
          }
          puVar2 = puVar2 + -1;
        } while (DAT_100336c0 <= puVar2);
      }
      if (DAT_10033224 < 0) {
        free(DAT_100336c0);
      }
      else {
        GlobalFree(DAT_100336c0);
      }
      DAT_100336c0 = (undefined4 *)0x0;
    }
    return 1;
  }
  if (-1 < DAT_10033224) {
    if (DAT_10033220 != 0) {
      return 1;
    }
    if (-1 < DAT_10033224) {
      DAT_100336c0 = GlobalAlloc(0x2000,0x80);
      if (DAT_100336c0 == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_1002e140;
    }
  }
  DAT_100336c0 = malloc(0x80);
  if (DAT_100336c0 == (undefined4 *)0x0) {
    return 0;
  }
LAB_1002e140:
  *DAT_100336c0 = 0;
  DAT_100336bc = DAT_100336c0;
  initterm(&DAT_10030000,&DAT_10030004);
  DAT_10033220 = DAT_10033220 + 1;
  return 1;
}


// ---- entry @ 1002e1f0

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_10033220 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_100336c4 != (code *)0x0) {
      iVar1 = (*DAT_100336c4)(param_1,param_2,param_3);
    }
    if ((iVar1 == 0) || (iVar1 = __CRT_INIT_12(param_1,param_2), iVar1 == 0)) {
      return 0;
    }
  }
  iVar1 = FUN_10001000(param_1,param_2);
  if ((param_2 == 1) && (iVar1 == 0)) {
    __CRT_INIT_12(param_1,0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = __CRT_INIT_12(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_100336c4 != (code *)0x0)) {
      iVar1 = (*DAT_100336c4)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


// ---- initterm @ 1002e2b0

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- MgenLutRamp @ 1002e2c0

void MgenLutRamp(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MgenLutRamp();
  return;
}


// ---- MbufAlloc1d @ 1002e2c6

void MbufAlloc1d(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufAlloc1d();
  return;
}


// ---- MbufFree @ 1002e2cc

void MbufFree(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufFree();
  return;
}


// ---- MnatGetMilDriverId @ 1002e2d2

void MnatGetMilDriverId(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MnatGetMilDriverId();
  return;
}


// ---- MbufClear @ 1002e2d8

void MbufClear(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufClear();
  return;
}


// ---- MfuncErrorReport @ 1002e2de

void MfuncErrorReport(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MfuncErrorReport();
  return;
}


// ---- MbufAllocColor @ 1002e2e4

void MbufAllocColor(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufAllocColor();
  return;
}


// ---- MnatGetMilId @ 1002e2ea

void MnatGetMilId(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MnatGetMilId();
  return;
}


// ---- MbufInquire @ 1002e2f0

void MbufInquire(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufInquire();
  return;
}


// ---- MappGetError @ 1002e2f6

void MappGetError(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MappGetError();
  return;
}


// ---- MbufChild2d @ 1002e2fc

void MbufChild2d(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufChild2d();
  return;
}


// ---- MnatBufCreate2d @ 1002e302

void MnatBufCreate2d(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MnatBufCreate2d();
  return;
}


// ---- MnatBufDestroy @ 1002e308

void MnatBufDestroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MnatBufDestroy();
  return;
}


// ---- MappGetHookInfo @ 1002e30e

void MappGetHookInfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e30e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MappGetHookInfo();
  return;
}


// ---- MdispOverlayKey @ 1002e314

void MdispOverlayKey(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MdispOverlayKey();
  return;
}


// ---- MdispLut @ 1002e31a

void MdispLut(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e31a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MdispLut();
  return;
}


// ---- MappHookFunction @ 1002e320

void MappHookFunction(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MappHookFunction();
  return;
}


// ---- MbufCopy @ 1002e326

void MbufCopy(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufCopy();
  return;
}


// ---- MbufLutMap @ 1002e32c

void MbufLutMap(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufLutMap();
  return;
}


// ---- MbufClip @ 1002e332

void MbufClip(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufClip();
  return;
}


// ---- MbufControl @ 1002e338

void MbufControl(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufControl();
  return;
}


// ---- MbufCopyCond @ 1002e33e

void MbufCopyCond(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufCopyCond();
  return;
}


// ---- MdispInquire @ 1002e344

void MdispInquire(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MdispInquire();
  return;
}


// ---- MbufPut @ 1002e34a

void MbufPut(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e34a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufPut();
  return;
}


// ---- MbufGet @ 1002e350

void MbufGet(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MbufGet();
  return;
}


// ---- MfuncAllocMemory @ 1002e356

void MfuncAllocMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MfuncAllocMemory();
  return;
}


// ---- MfuncFreeMemory @ 1002e35c

void MfuncFreeMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MfuncFreeMemory();
  return;
}


// ---- Ordinal_100 @ 1002e362

void Ordinal_100(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_100();
  return;
}


// ---- Ordinal_101 @ 1002e368

void Ordinal_101(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_101();
  return;
}


// ---- Ordinal_102 @ 1002e36e

void Ordinal_102(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002e36e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_102();
  return;
}


