// Decompiled with Ghidra from Srv32.dll
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

bool FUN_10001000(void)

{
  int iVar1;
  
  iVar1 = FUN_10001030();
  return iVar1 != 0;
}


// ---- FUN_10001030 @ 10001030

void FUN_10001030(void)

{
  ThunkConnect32(&SRV_ThunkData32);
  return;
}


// ---- SRV_Load_DLL @ 10001059

undefined2 SRV_Load_DLL(void)

{
  undefined2 uVar1;
  
                    /* 0x1059  28  SRV_Load_DLL */
  uVar1 = (*(code *)PTR_FUN_10001051)();
  return uVar1;
}


// ---- SRV_Unload_DLL @ 10001073

int SRV_Unload_DLL(void)

{
  undefined2 uVar1;
  short sVar2;
  
                    /* 0x1073  73  SRV_Unload_DLL */
  uVar1 = MapHInstLS();
  sVar2 = (*(code *)PTR_FUN_10001051)(uVar1);
  return (int)sVar2;
}


// ---- SRV_Load_String @ 10001091

void SRV_Load_String(void)

{
  undefined2 uVar1;
  undefined2 in_stack_00000008;
  
                    /* 0x1091  29  SRV_Load_String */
  uVar1 = MapHInstLS();
  (*(code *)PTR_FUN_10001051)(CONCAT22(uVar1,in_stack_00000008));
  return;
}


// ---- SRV_Set_Language_Handle @ 100010b2

void SRV_Set_Language_Handle(void)

{
  undefined2 uVar1;
  
                    /* 0x10b2  53  SRV_Set_Language_Handle */
  uVar1 = MapHInstLS();
  (*(code *)PTR_FUN_10001051)(uVar1);
  return;
}


// ---- SRV_Get_Value @ 100010cf

void SRV_Get_Value(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x10cf  20  SRV_Get_Value */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x48);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(undefined4 *)(unaff_EBP + -0x46) = puVar1[1];
    *(ushort *)(unaff_EBP + -0x42) = (ushort)puVar1[2] | (ushort)((uint)puVar1[2] >> 0x10);
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x48);
    piVar2[1] = *(int *)(unaff_EBP + -0x46);
    piVar2[2] = (uint)*(ushort *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Value_Extra @ 1000111c

void SRV_Get_Value_Extra(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  uint *puVar7;
  ushort *puVar8;
  uint *puVar9;
  ushort *puVar10;
  
                    /* 0x111c  21  SRV_Get_Value_Extra */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(unaff_EBP + -0x66);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar5 = 4;
    puVar6 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar10;
    do {
      puVar8 = puVar4;
      puVar1 = puVar6 + 1;
      *puVar8 = (ushort)*puVar6;
      iVar5 = iVar5 + -1;
      puVar6 = puVar1;
      puVar4 = puVar8 + 1;
    } while (iVar5 != 0);
    puVar8[1] = (ushort)*puVar1 | (ushort)((uint)*puVar1 >> 0x10);
    iVar5 = 6;
    while( true ) {
      puVar4 = puVar8 + 2;
      puVar6 = puVar1 + 1;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *(undefined4 *)puVar4 = *puVar6;
      puVar1 = puVar6;
      puVar8 = puVar4;
    }
    *puVar4 = (ushort)*puVar6 | (ushort)((uint)*puVar6 >> 0x10);
    puVar8[3] = *(ushort *)(puVar1 + 2);
  }
  FT_Thunk(puVar10);
  if (*(uint **)(unaff_EBP + 8) != (uint *)0x0) {
    iVar5 = 4;
    puVar3 = (uint *)(unaff_EBP + -0x66);
    puVar9 = *(uint **)(unaff_EBP + 8);
    do {
      puVar7 = puVar3;
      puVar2 = puVar9 + 1;
      *puVar9 = (int)(short)(ushort)*puVar7;
      iVar5 = iVar5 + -1;
      puVar3 = (uint *)((int)puVar7 + 2);
      puVar9 = puVar2;
    } while (iVar5 != 0);
    *puVar2 = (uint)*(ushort *)((int)puVar7 + 2);
    iVar5 = 6;
    while( true ) {
      puVar9 = puVar7 + 1;
      puVar3 = puVar2 + 1;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *puVar3 = *puVar9;
      puVar2 = puVar3;
      puVar7 = puVar9;
    }
    *puVar3 = (uint)(ushort)*puVar9;
    *(ushort *)(puVar2 + 2) = *(ushort *)((int)puVar7 + 6);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Command @ 10001195

void SRV_Get_Command(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x1195  9  SRV_Get_Command */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x48);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(ushort *)(unaff_EBP + -0x46) = (ushort)puVar1[1] | (ushort)((uint)puVar1[1] >> 0x10);
    *(ushort *)(unaff_EBP + -0x44) = (ushort)puVar1[2] | (ushort)((uint)puVar1[2] >> 0x10);
    *(undefined2 *)(unaff_EBP + -0x42) = *(undefined2 *)(puVar1 + 3);
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x48);
    piVar2[1] = (uint)*(ushort *)(unaff_EBP + -0x46);
    piVar2[2] = (uint)*(ushort *)(unaff_EBP + -0x44);
    *(undefined2 *)(piVar2 + 3) = *(undefined2 *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_State @ 100011f0

void SRV_Get_State(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x11f0  18  SRV_Get_State */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x4c);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x4a) = (short)puVar1[1];
    *(ushort *)(unaff_EBP + -0x48) = (ushort)puVar1[2] | (ushort)((uint)puVar1[2] >> 0x10);
    *(ushort *)(unaff_EBP + -0x46) = (ushort)puVar1[3] | (ushort)((uint)puVar1[3] >> 0x10);
    *(short *)(unaff_EBP + -0x44) = (short)puVar1[4];
    *(undefined2 *)(unaff_EBP + -0x42) = *(undefined2 *)(puVar1 + 5);
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x4c);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x4a);
    piVar2[2] = (uint)*(ushort *)(unaff_EBP + -0x48);
    piVar2[3] = (uint)*(ushort *)(unaff_EBP + -0x46);
    piVar2[4] = (uint)*(ushort *)(unaff_EBP + -0x44);
    *(undefined2 *)(piVar2 + 5) = *(undefined2 *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_XY @ 10001258

void SRV_Get_XY(undefined2 param_1)

{
  undefined4 uVar1;
  
                    /* 0x1258  22  SRV_Get_XY */
  uVar1 = SMapLS_IP_EBP_12(param_1);
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_12();
  return;
}


// ---- SRV_Set_Value @ 1000125c

void SRV_Set_Value(undefined2 param_1)

{
  undefined4 uVar1;
  
                    /* 0x125c  66  SRV_Set_Value */
  uVar1 = SMapLS_IP_EBP_12(param_1);
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_12();
  return;
}


// ---- SRV_Set_XY @ 10001260

void SRV_Set_XY(undefined2 param_1)

{
  undefined4 uVar1;
  
                    /* 0x1260  67  SRV_Set_XY */
  uVar1 = SMapLS_IP_EBP_12(param_1);
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_12();
  return;
}


// ---- SRV_Initiate @ 10001283

int SRV_Initiate(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 in_stack_00000008;
  undefined2 in_stack_00000010;
  
                    /* 0x1283  26  SRV_Initiate */
  uVar1 = MapHInstLS();
  sVar2 = (*(code *)PTR_FUN_10001051)(in_stack_00000010,CONCAT22(uVar1,in_stack_00000008));
  return (int)sVar2;
}


// ---- SRV_Notify @ 100012ad

int SRV_Notify(void)

{
  int iVar1;
  
                    /* 0x12ad  39  SRV_Notify */
  iVar1 = FUN_100012bb();
  return iVar1;
}


// ---- SRV_Set_State @ 100012b1

void SRV_Set_State(void)

{
                    /* 0x12b1  63  SRV_Set_State */
  FUN_100012bb();
  return;
}


// ---- SRV_Nudge_Value @ 100012b5

void SRV_Nudge_Value(void)

{
                    /* 0x12b5  40  SRV_Nudge_Value */
  FUN_100012bb();
  return;
}


// ---- SRV_Initialise_Controller @ 100012b9

int SRV_Initialise_Controller(undefined4 param_1,undefined2 param_2)

{
  short sVar1;
  
                    /* 0x12b9  25  SRV_Initialise_Controller */
  sVar1 = (*(code *)PTR_FUN_10001051)(param_2);
  return (int)sVar1;
}


// ---- FUN_100012bb @ 100012bb

int FUN_100012bb(void)

{
  short sVar1;
  
  sVar1 = (*(code *)PTR_FUN_10001051)();
  return (int)sVar1;
}


// ---- SRV_Handle @ 100012d5

undefined2 SRV_Handle(void)

{
  undefined2 uVar1;
  
                    /* 0x12d5  23  SRV_Handle */
  uVar1 = (*(code *)PTR_FUN_10001051)();
  return uVar1;
}


// ---- SRV_Shutdown @ 100012e9

int SRV_Shutdown(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 in_stack_00000008;
  
                    /* 0x12e9  68  SRV_Shutdown */
  uVar1 = MapHInstLS();
  sVar2 = (*(code *)PTR_FUN_10001051)(CONCAT22(uVar1,in_stack_00000008));
  return (int)sVar2;
}


// ---- SRV_Set_Licenses @ 1000130b

void SRV_Set_Licenses(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  
                    /* 0x130b  54  SRV_Set_Licenses */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0xc0);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 0x40;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar6;
    do {
      *puVar4 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar6);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 0x40;
    psVar3 = (short *)(unaff_EBP + -0xc0);
    piVar5 = *(int **)(unaff_EBP + 8);
    do {
      *piVar5 = (int)*psVar3;
      iVar1 = iVar1 + -1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Licenses @ 10001311

void SRV_Get_Licenses(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  
                    /* 0x1311  14  SRV_Get_Licenses */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0xc0);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 0x40;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar6;
    do {
      *puVar4 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar6);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 0x40;
    psVar3 = (short *)(unaff_EBP + -0xc0);
    piVar5 = *(int **)(unaff_EBP + 8);
    do {
      *piVar5 = (int)*psVar3;
      iVar1 = iVar1 + -1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Serial_Number @ 10001365

void SRV_Get_Serial_Number(void)

{
                    /* 0x1365  16  SRV_Get_Serial_Number */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_EO_Column_Type @ 10001376

int SRV_EO_Column_Type(void)

{
  int iVar1;
  
                    /* 0x1376  2  SRV_EO_Column_Type */
  iVar1 = FUN_1000138c();
  return iVar1;
}


// ---- SRV_Load_Vis_Table @ 1000137a

int SRV_Load_Vis_Table(void)

{
  int iVar1;
  
                    /* 0x137a  30  SRV_Load_Vis_Table */
  iVar1 = FUN_1000138c();
  return iVar1;
}


// ---- SRV_Save_Vis_Table @ 1000137e

int SRV_Save_Vis_Table(void)

{
  int iVar1;
  
                    /* 0x137e  46  SRV_Save_Vis_Table */
  iVar1 = FUN_1000138c();
  return iVar1;
}


// ---- SRV_Get_Configuration @ 10001382

void SRV_Get_Configuration(void)

{
                    /* 0x1382  10  SRV_Get_Configuration */
  FUN_1000138c();
  return;
}


// ---- SRV_Save_Configuration @ 10001386

void SRV_Save_Configuration(void)

{
                    /* 0x1386  45  SRV_Save_Configuration */
  FUN_1000138c();
  return;
}


// ---- SRV_Get_Machine_Type @ 1000138a

int SRV_Get_Machine_Type(void)

{
  short sVar1;
  
                    /* 0x138a  15  SRV_Get_Machine_Type */
  sVar1 = (*(code *)PTR_FUN_10001051)();
  return (int)sVar1;
}


// ---- FUN_1000138c @ 1000138c

int FUN_1000138c(void)

{
  short sVar1;
  
  sVar1 = (*(code *)PTR_FUN_10001051)();
  return (int)sVar1;
}


// ---- SRV_Set_User_Level @ 1000139c

void SRV_Set_User_Level(void)

{
                    /* 0x139c  65  SRV_Set_User_Level */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_Get_State_String @ 100013b3

void SRV_Get_State_String(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x13b3  19  SRV_Get_State_String */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x46);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x44) = (short)puVar1[1];
    *(undefined2 *)(unaff_EBP + -0x42) = *(undefined2 *)(puVar1 + 2);
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x46);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x44);
    *(undefined2 *)(piVar2 + 2) = *(undefined2 *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Admin_Config @ 100013fb

void SRV_Set_Admin_Config(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  
                    /* 0x13fb  48  SRV_Set_Admin_Config */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar8 = (undefined2 *)0x0;
  }
  else {
    puVar8 = (undefined2 *)(unaff_EBP + -0x34c);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 0x186;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar5 = puVar8;
    do {
      *puVar5 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar8);
  puVar6 = *(uint **)(unaff_EBP + 8);
  if (puVar6 != (uint *)0x0) {
    *puVar6 = (uint)*(ushort *)(unaff_EBP + -0x34c);
    puVar6[1] = (uint)*(ushort *)(unaff_EBP + -0x34a);
    iVar1 = 0x40;
    puVar3 = (ushort *)(unaff_EBP + -0x348);
    puVar6 = puVar6 + 2;
    do {
      puVar4 = puVar3 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (int)(short)*puVar3;
      iVar1 = iVar1 + -1;
      puVar3 = puVar4;
      puVar6 = puVar7;
    } while (iVar1 != 0);
    iVar1 = 0x144;
    do {
      *puVar7 = (uint)*puVar4;
      iVar1 = iVar1 + -1;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Admin_Config @ 10001401

void SRV_Get_Admin_Config(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  
                    /* 0x1401  6  SRV_Get_Admin_Config */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar8 = (undefined2 *)0x0;
  }
  else {
    puVar8 = (undefined2 *)(unaff_EBP + -0x34c);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 0x186;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar5 = puVar8;
    do {
      *puVar5 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar8);
  puVar6 = *(uint **)(unaff_EBP + 8);
  if (puVar6 != (uint *)0x0) {
    *puVar6 = (uint)*(ushort *)(unaff_EBP + -0x34c);
    puVar6[1] = (uint)*(ushort *)(unaff_EBP + -0x34a);
    iVar1 = 0x40;
    puVar3 = (ushort *)(unaff_EBP + -0x348);
    puVar6 = puVar6 + 2;
    do {
      puVar4 = puVar3 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (int)(short)*puVar3;
      iVar1 = iVar1 + -1;
      puVar3 = puVar4;
      puVar6 = puVar7;
    } while (iVar1 != 0);
    iVar1 = 0x144;
    do {
      *puVar7 = (uint)*puVar4;
      iVar1 = iVar1 + -1;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Stage_Position @ 10001469

void SRV_Get_Stage_Position(void)

{
  undefined4 uVar1;
  
                    /* 0x1469  17  SRV_Get_Stage_Position */
  uVar1 = SMapLS_IP_EBP_8();
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_8();
  return;
}


// ---- SRV_Set_Beamshift_Distance @ 1000146d

void SRV_Set_Beamshift_Distance(void)

{
  undefined4 uVar1;
  
                    /* 0x146d  50  SRV_Set_Beamshift_Distance */
  uVar1 = SMapLS_IP_EBP_8();
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_8();
  return;
}


// ---- SRV_Get_Aperture_Table @ 1000148b

void SRV_Get_Aperture_Table(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined2 *puVar6;
  
                    /* 0x148b  7  SRV_Get_Aperture_Table */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0xc2);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar6 = (short)*puVar1;
    puVar3 = (undefined4 *)(unaff_EBP + -0xc0);
    for (iVar5 = 0x20; puVar1 = puVar1 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
    }
  }
  FT_Thunk(puVar6);
  puVar2 = *(uint **)(unaff_EBP + 8);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = (uint)*(ushort *)(unaff_EBP + -0xc2);
    puVar4 = (uint *)(unaff_EBP + -0xc0);
    for (iVar5 = 0x20; puVar2 = puVar2 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Aperture_Table @ 10001491

void SRV_Set_Aperture_Table(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined2 *puVar6;
  
                    /* 0x1491  49  SRV_Set_Aperture_Table */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0xc2);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar6 = (short)*puVar1;
    puVar3 = (undefined4 *)(unaff_EBP + -0xc0);
    for (iVar5 = 0x20; puVar1 = puVar1 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
    }
  }
  FT_Thunk(puVar6);
  puVar2 = *(uint **)(unaff_EBP + 8);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = (uint)*(ushort *)(unaff_EBP + -0xc2);
    puVar4 = (uint *)(unaff_EBP + -0xc0);
    for (iVar5 = 0x20; puVar2 = puVar2 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_Point @ 100014e3

void SRV_Set_Lut_Point(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  undefined2 *puVar6;
  
                    /* 0x14e3  60  SRV_Set_Lut_Point */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x846);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar6 = (short)*puVar1;
    puVar3 = puVar1 + 2;
    *(short *)(unaff_EBP + -0x844) = (short)puVar1[1];
    *(short *)(unaff_EBP + -0x842) = (short)*puVar3;
    puVar1 = (undefined4 *)(unaff_EBP + -0x840);
    for (iVar5 = 0x200; puVar3 = puVar3 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
  }
  FT_Thunk(puVar6);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x846);
    piVar4 = piVar2 + 2;
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x844);
    *piVar4 = (int)*(short *)(unaff_EBP + -0x842);
    piVar2 = (int *)(unaff_EBP + -0x840);
    for (iVar5 = 0x200; piVar4 = piVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_RGB @ 10001545

void SRV_Set_Lut_RGB(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  
                    /* 0x1545  61  SRV_Set_Lut_RGB */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x4a);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 5;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar6;
    do {
      *puVar4 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar6);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 5;
    psVar3 = (short *)(unaff_EBP + -0x4a);
    piVar5 = *(int **)(unaff_EBP + 8);
    do {
      *piVar5 = (int)*psVar3;
      iVar1 = iVar1 + -1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_Color @ 10001590

void SRV_Set_Lut_Color(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  
                    /* 0x1590  56  SRV_Set_Lut_Color */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x48);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 4;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar6;
    do {
      *puVar4 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar6);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 4;
    psVar3 = (short *)(unaff_EBP + -0x48);
    piVar5 = *(int **)(unaff_EBP + 8);
    do {
      *piVar5 = (int)*psVar3;
      iVar1 = iVar1 + -1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_Linear @ 100015db

void SRV_Set_Lut_Linear(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x15db  59  SRV_Set_Lut_Linear */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x4a);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(undefined4 *)(unaff_EBP + -0x48) = puVar1[1];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[2];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x4a);
    piVar2[1] = *(int *)(unaff_EBP + -0x48);
    piVar2[2] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_BC @ 100015e1

void SRV_Set_Lut_BC(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x15e1  55  SRV_Set_Lut_BC */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x4a);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(undefined4 *)(unaff_EBP + -0x48) = puVar1[1];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[2];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x4a);
    piVar2[1] = *(int *)(unaff_EBP + -0x48);
    piVar2[2] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_Inverse @ 100015e7

void SRV_Set_Lut_Inverse(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x15e7  58  SRV_Set_Lut_Inverse */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x4a);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(undefined4 *)(unaff_EBP + -0x48) = puVar1[1];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[2];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x4a);
    piVar2[1] = *(int *)(unaff_EBP + -0x48);
    piVar2[2] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Set_Lut_Gamma @ 10001628

void SRV_Set_Lut_Gamma(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x1628  57  SRV_Set_Lut_Gamma */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x46);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[1];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x46);
    piVar2[1] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_RGB_Read @ 10001667

void SRV_RGB_Read(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x1667  42  SRV_RGB_Read */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x48);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x46) = (short)puVar1[1];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[2];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x48);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x46);
    piVar2[2] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Read @ 100016ad

void SRV_Lut_Read(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  undefined2 *puVar6;
  
                    /* 0x16ad  35  SRV_Lut_Read */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x346);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar6 = (short)*puVar1;
    puVar3 = puVar1 + 2;
    *(short *)(unaff_EBP + -0x344) = (short)puVar1[1];
    *(short *)(unaff_EBP + -0x342) = (short)*puVar3;
    puVar1 = (undefined4 *)(unaff_EBP + -0x340);
    for (iVar5 = 0xc0; puVar3 = puVar3 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
  }
  FT_Thunk(puVar6);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x346);
    piVar4 = piVar2 + 2;
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x344);
    *piVar4 = (int)*(short *)(unaff_EBP + -0x342);
    piVar2 = (int *)(unaff_EBP + -0x340);
    for (iVar5 = 0xc0; piVar4 = piVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Load @ 100016b3

void SRV_Lut_Load(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  undefined2 *puVar6;
  
                    /* 0x16b3  32  SRV_Lut_Load */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x346);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar6 = (short)*puVar1;
    puVar3 = puVar1 + 2;
    *(short *)(unaff_EBP + -0x344) = (short)puVar1[1];
    *(short *)(unaff_EBP + -0x342) = (short)*puVar3;
    puVar1 = (undefined4 *)(unaff_EBP + -0x340);
    for (iVar5 = 0xc0; puVar3 = puVar3 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
  }
  FT_Thunk(puVar6);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x346);
    piVar4 = piVar2 + 2;
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x344);
    *piVar4 = (int)*(short *)(unaff_EBP + -0x342);
    piVar2 = (int *)(unaff_EBP + -0x340);
    for (iVar5 = 0xc0; piVar4 = piVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Read_Color @ 10001715

void SRV_Read_Color(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x1715  43  SRV_Read_Color */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x4a);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x48) = (short)puVar1[1];
    *(short *)(unaff_EBP + -0x46) = (short)puVar1[2];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[3];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x4a);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x48);
    piVar2[2] = (int)*(short *)(unaff_EBP + -0x46);
    piVar2[3] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Fill @ 10001762

void SRV_Lut_Fill(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  
                    /* 0x1762  31  SRV_Lut_Fill */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x4c);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 6;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar6;
    do {
      *puVar4 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar6);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 6;
    psVar3 = (short *)(unaff_EBP + -0x4c);
    piVar5 = *(int **)(unaff_EBP + 8);
    do {
      *piVar5 = (int)*psVar3;
      iVar1 = iVar1 + -1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Qinv @ 100017ad

void SRV_Lut_Qinv(void)

{
  int unaff_EBP;
  undefined2 uVar1;
  
                    /* 0x17ad  33  SRV_Lut_Qinv */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = SUB42((undefined2 *)(unaff_EBP + -0x42),0);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *(undefined2 *)(unaff_EBP + -0x42) = (short)**(undefined4 **)(unaff_EBP + 8);
  }
  FT_Thunk(uVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    **(int **)(unaff_EBP + 8) = (int)*(short *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Draw_Grey_Wedge @ 100017b3

void SRV_Draw_Grey_Wedge(void)

{
  int unaff_EBP;
  undefined2 uVar1;
  
                    /* 0x17b3  1  SRV_Draw_Grey_Wedge */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = SUB42((undefined2 *)(unaff_EBP + -0x42),0);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *(undefined2 *)(unaff_EBP + -0x42) = (short)**(undefined4 **)(unaff_EBP + 8);
  }
  FT_Thunk(uVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    **(int **)(unaff_EBP + 8) = (int)*(short *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Qlin @ 100017b9

void SRV_Lut_Qlin(void)

{
  int unaff_EBP;
  undefined2 uVar1;
  
                    /* 0x17b9  34  SRV_Lut_Qlin */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = SUB42((undefined2 *)(unaff_EBP + -0x42),0);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *(undefined2 *)(unaff_EBP + -0x42) = (short)**(undefined4 **)(unaff_EBP + 8);
  }
  FT_Thunk(uVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    **(int **)(unaff_EBP + 8) = (int)*(short *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Restore @ 100017f6

void SRV_Lut_Restore(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x17f6  36  SRV_Lut_Restore */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x44);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x42) = (short)puVar1[1];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x44);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Lut_Save @ 100017fc

void SRV_Lut_Save(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x17fc  37  SRV_Lut_Save */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x44);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x42) = (short)puVar1[1];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x44);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Read_Color_Lut @ 10001840

void SRV_Read_Color_Lut(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  undefined2 *puVar6;
  
                    /* 0x1840  44  SRV_Read_Color_Lut */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x146);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar6 = (short)*puVar1;
    puVar3 = puVar1 + 2;
    *(short *)(unaff_EBP + -0x144) = (short)puVar1[1];
    *(short *)(unaff_EBP + -0x142) = (short)*puVar3;
    puVar1 = (undefined4 *)(unaff_EBP + -0x140);
    for (iVar5 = 0x40; puVar3 = puVar3 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
  }
  FT_Thunk(puVar6);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x146);
    piVar4 = piVar2 + 2;
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x144);
    *piVar4 = (int)*(short *)(unaff_EBP + -0x142);
    piVar2 = (int *)(unaff_EBP + -0x140);
    for (iVar5 = 0x40; piVar4 = piVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Covariance @ 100018a2

void SRV_Get_Covariance(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
                    /* 0x18a2  11  SRV_Get_Covariance */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(unaff_EBP + -0x52);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x4e) = puVar1[1];
    *(short *)(unaff_EBP + -0x4a) = (short)puVar1[2];
    *(undefined4 *)(unaff_EBP + -0x48) = puVar1[3];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[4];
  }
  FT_Thunk(puVar2);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(unaff_EBP + -0x52);
    puVar1[1] = *(undefined4 *)(unaff_EBP + -0x4e);
    puVar1[2] = (int)*(short *)(unaff_EBP + -0x4a);
    puVar1[3] = *(undefined4 *)(unaff_EBP + -0x48);
    puVar1[4] = *(undefined4 *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Image_Pixel @ 100018e4

void SRV_Get_Image_Pixel(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x18e4  13  SRV_Get_Image_Pixel */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x46);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x44) = (short)puVar1[1];
    *(short *)(unaff_EBP + -0x42) = (short)puVar1[2];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x46);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x44);
    piVar2[2] = (int)*(short *)(unaff_EBP + -0x42);
  }
  FT_Exit4();
  return;
}


// ---- SRV_Point_As_Zone @ 1000192f

int SRV_Point_As_Zone(void)

{
  short sVar1;
  
                    /* 0x192f  41  SRV_Point_As_Zone */
  sVar1 = (*(code *)PTR_FUN_10001051)();
  return (int)sVar1;
}


// ---- SRV_Import_Export @ 1000194f

void SRV_Import_Export(void)

{
  short *psVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  short *psVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 *puVar10;
  
                    /* 0x194f  24  SRV_Import_Export */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar10 = (undefined2 *)0x0;
  }
  else {
    puVar10 = (undefined2 *)(unaff_EBP + -0x58);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar5 = 10;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar10;
    do {
      puVar8 = puVar4;
      puVar6 = puVar2;
      *puVar8 = (short)*puVar6;
      iVar5 = iVar5 + -1;
      puVar2 = puVar6 + 1;
      puVar4 = puVar8 + 1;
    } while (iVar5 != 0);
    puVar8[1] = *(undefined2 *)(puVar6 + 1);
    puVar8[2] = (short)puVar6[2];
  }
  FT_Thunk(puVar10);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar5 = 10;
    psVar1 = (short *)(unaff_EBP + -0x58);
    piVar3 = *(int **)(unaff_EBP + 8);
    do {
      piVar9 = piVar3;
      psVar7 = psVar1;
      *piVar9 = (int)*psVar7;
      iVar5 = iVar5 + -1;
      psVar1 = psVar7 + 1;
      piVar3 = piVar9 + 1;
    } while (iVar5 != 0);
    *(short *)(piVar9 + 1) = psVar7[1];
    piVar9[2] = (int)psVar7[2];
  }
  FT_Exit4();
  return;
}


// ---- SRV_Misc_function @ 100019a9

int SRV_Misc_function(void)

{
  int iVar1;
  
                    /* 0x19a9  38  SRV_Misc_function */
  iVar1 = FUN_100019b7();
  return iVar1;
}


// ---- SRV_Execute_Command @ 100019ad

void SRV_Execute_Command(void)

{
                    /* 0x19ad  3  SRV_Execute_Command */
  FUN_100019b7();
  return;
}


// ---- SRV_Suspend_Controller @ 100019b1

void SRV_Suspend_Controller(void)

{
                    /* 0x19b1  70  SRV_Suspend_Controller */
  FUN_100019b7();
  return;
}


// ---- SRV_Kill_Controller @ 100019b5

int SRV_Kill_Controller(undefined2 param_1)

{
  short sVar1;
  
                    /* 0x19b5  27  SRV_Kill_Controller */
  sVar1 = (*(code *)PTR_FUN_10001051)(param_1);
  return (int)sVar1;
}


// ---- FUN_100019b7 @ 100019b7

int FUN_100019b7(void)

{
  short sVar1;
  
  sVar1 = (*(code *)PTR_FUN_10001051)();
  return (int)sVar1;
}


// ---- SRV_GetLineData @ 100019cd

void SRV_GetLineData(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  
                    /* 0x19cd  4  SRV_GetLineData */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)(unaff_EBP + -0x448);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 4;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar6 = puVar10;
    do {
      puVar3 = puVar2 + 1;
      puVar7 = (undefined4 *)((int)puVar6 + 2);
      *(short *)puVar6 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar3;
      puVar6 = puVar7;
    } while (iVar1 != 0);
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  FT_Thunk(puVar10);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 4;
    piVar4 = (int *)(unaff_EBP + -0x448);
    piVar8 = *(int **)(unaff_EBP + 8);
    do {
      piVar5 = (int *)((int)piVar4 + 2);
      piVar9 = piVar8 + 1;
      *piVar8 = (int)(short)*piVar4;
      iVar1 = iVar1 + -1;
      piVar4 = piVar5;
      piVar8 = piVar9;
    } while (iVar1 != 0);
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
  }
  FT_Exit4();
  return;
}


// ---- SRV_Get_Colour_Pixel @ 10001a2f

void SRV_Get_Colour_Pixel(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  undefined2 *puVar3;
  
                    /* 0x1a2f  8  SRV_Get_Colour_Pixel */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(unaff_EBP + -0x48);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar3 = (short)*puVar1;
    *(short *)(unaff_EBP + -0x46) = (short)puVar1[1];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar1[2];
  }
  FT_Thunk(puVar3);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)*(short *)(unaff_EBP + -0x48);
    piVar2[1] = (int)*(short *)(unaff_EBP + -0x46);
    piVar2[2] = *(int *)(unaff_EBP + -0x44);
  }
  FT_Exit4();
  return;
}


// ---- SRV_do_featurescan @ 10001a75

void SRV_do_featurescan(void)

{
  undefined2 in_stack_00000010;
  
                    /* 0x1a75  78  SRV_do_featurescan */
  SMapLS_IP_EBP_8();
  (*(code *)PTR_FUN_10001051)(in_stack_00000010);
  SUnMapLS_IP_EBP_8();
  return;
}


// ---- SRV_stop_featurescan @ 10001a9e

void SRV_stop_featurescan(void)

{
                    /* 0x1a9e  81  SRV_stop_featurescan */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_Timer_Tick @ 10001aa2

void SRV_Timer_Tick(void)

{
                    /* 0x1aa2  72  SRV_Timer_Tick */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_Use_Atom @ 10001aa6

void SRV_Use_Atom(void)

{
                    /* 0x1aa6  74  SRV_Use_Atom */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_SetKnob @ 10001ab7

void SRV_SetKnob(void)

{
  undefined4 in_stack_00000008;
  
                    /* 0x1ab7  47  SRV_SetKnob */
  (*(code *)PTR_FUN_10001051)((ushort)in_stack_00000008 | (ushort)((uint)in_stack_00000008 >> 0x10))
  ;
  return;
}


// ---- SRV_get_column_cal_data @ 10001ad9

void SRV_get_column_cal_data(void)

{
                    /* 0x1ad9  79  SRV_get_column_cal_data */
  FUN_10001aef();
  return;
}


// ---- SRV_Set_Format_Modifier @ 10001add

void SRV_Set_Format_Modifier(void)

{
                    /* 0x1add  52  SRV_Set_Format_Modifier */
  FUN_10001aef();
  return;
}


// ---- SRV_Set_Def_Printing_Factor @ 10001ae1

void SRV_Set_Def_Printing_Factor(void)

{
                    /* 0x1ae1  51  SRV_Set_Def_Printing_Factor */
  FUN_10001aef();
  return;
}


// ---- SRV_Stage_Goto @ 10001ae5

void SRV_Stage_Goto(void)

{
                    /* 0x1ae5  69  SRV_Stage_Goto */
  FUN_10001aef();
  return;
}


// ---- SRV_Set_Stage_Position @ 10001ae9

void SRV_Set_Stage_Position(void)

{
                    /* 0x1ae9  62  SRV_Set_Stage_Position */
  FUN_10001aef();
  return;
}


// ---- SRV_Get_Histo @ 10001aed

void SRV_Get_Histo(void)

{
  undefined4 uVar1;
  
                    /* 0x1aed  12  SRV_Get_Histo */
  uVar1 = SMapLS_IP_EBP_8();
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_8();
  return;
}


// ---- FUN_10001aef @ 10001aef

void FUN_10001aef(void)

{
  undefined4 uVar1;
  
  uVar1 = SMapLS_IP_EBP_8();
  (*(code *)PTR_FUN_10001051)(uVar1);
  SUnMapLS_IP_EBP_8();
  return;
}


// ---- SRV_update_hpsem_panel @ 10001b0c

void SRV_update_hpsem_panel(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  
                    /* 0x1b0c  82  SRV_update_hpsem_panel */
  (*(code *)PTR_FUN_10001055)();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(unaff_EBP + -0x5a);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    iVar1 = 0xd;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    puVar4 = puVar6;
    do {
      *puVar4 = (short)*puVar2;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
  FT_Thunk(puVar6);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iVar1 = 0xd;
    psVar3 = (short *)(unaff_EBP + -0x5a);
    piVar5 = *(int **)(unaff_EBP + 8);
    do {
      *piVar5 = (int)*psVar3;
      iVar1 = iVar1 + -1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  FT_Exit4();
  return;
}


// ---- SRV_define_custom_stage @ 10001b57

void SRV_define_custom_stage(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 *puVar11;
  
                    /* 0x1b57  77  SRV_define_custom_stage */
  (*(code *)PTR_FUN_10001055)();
  puVar1 = *(undefined2 **)(unaff_EBP + 8);
  if (puVar1 == (undefined2 *)0x0) {
    puVar11 = (undefined2 *)0x0;
  }
  else {
    puVar11 = (undefined2 *)(unaff_EBP + -0x196);
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    *puVar11 = *puVar1;
    *(ushort *)(unaff_EBP + -0x194) =
         (ushort)*(undefined4 *)(puVar1 + 2) | (ushort)((uint)*(undefined4 *)(puVar1 + 2) >> 0x10);
    *(ushort *)(unaff_EBP + -0x192) =
         (ushort)*(undefined4 *)(puVar1 + 4) | (ushort)((uint)*(undefined4 *)(puVar1 + 4) >> 0x10);
    iVar2 = 6;
    puVar3 = (undefined4 *)(puVar1 + 6);
    puVar7 = (ushort *)(unaff_EBP + -400);
    do {
      puVar4 = puVar3 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = (ushort)*puVar3 | (ushort)((uint)*puVar3 >> 0x10);
      iVar2 = iVar2 + -1;
      puVar3 = puVar4;
      puVar7 = puVar8;
    } while (iVar2 != 0);
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 2;
    }
    *puVar8 = (ushort)*puVar4 | (ushort)((uint)*puVar4 >> 0x10);
    puVar8[1] = *(ushort *)(puVar4 + 1);
  }
  FT_Thunk(puVar11);
  puVar1 = *(undefined2 **)(unaff_EBP + 8);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *(undefined2 *)(unaff_EBP + -0x196);
    iVar2 = 8;
    puVar5 = (uint *)(unaff_EBP + -0x194);
    puVar9 = (uint *)(puVar1 + 2);
    do {
      puVar6 = (uint *)((int)puVar5 + 2);
      puVar10 = puVar9 + 1;
      *puVar9 = (uint)(ushort)*puVar5;
      iVar2 = iVar2 + -1;
      puVar5 = puVar6;
      puVar9 = puVar10;
    } while (iVar2 != 0);
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    *puVar10 = (uint)(ushort)*puVar6;
    *(ushort *)(puVar10 + 1) = *(ushort *)((int)puVar6 + 2);
  }
  FT_Exit4();
  return;
}


// ---- SRV_custom_stage_name @ 10001be9

void SRV_custom_stage_name(void)

{
                    /* 0x1be9  76  SRV_custom_stage_name */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_axis_high_range @ 10001c00

void SRV_axis_high_range(undefined2 param_1,undefined4 param_2)

{
                    /* 0x1c00  75  SRV_axis_high_range */
  (*(code *)PTR_FUN_10001051)(param_2,param_1);
  return;
}


// ---- SRV_hpsem_function @ 10001c04

void SRV_hpsem_function(void)

{
                    /* 0x1c04  80  SRV_hpsem_function */
  (*(code *)PTR_FUN_10001051)();
  return;
}


// ---- SRV_GetStateValueResourceID @ 10001c1e

uint SRV_GetStateValueResourceID(void)

{
  undefined8 uVar1;
  
                    /* 0x1c1e  5  SRV_GetStateValueResourceID */
  uVar1 = (*(code *)PTR_FUN_10001051)();
  return (uint)uVar1 & 0xffff | (int)((ulonglong)uVar1 >> 0x20) << 0x10;
}


// ---- SRV_Set_String @ 10001c40

int SRV_Set_String(void)

{
  short sVar1;
  
                    /* 0x1c40  64  SRV_Set_String */
  sVar1 = (*(code *)PTR_FUN_10001051)();
  return (int)sVar1;
}


// ---- SMapLS_IP_EBP_12 @ 10001c5c

void SMapLS_IP_EBP_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SMapLS_IP_EBP_12();
  return;
}


// ---- MapHInstLS @ 10001c62

void MapHInstLS(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MapHInstLS();
  return;
}


// ---- FT_Exit4 @ 10001c68

void FT_Exit4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FT_Exit4();
  return;
}


// ---- SMapLS_IP_EBP_8 @ 10001c6e

void SMapLS_IP_EBP_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SMapLS_IP_EBP_8();
  return;
}


// ---- SUnMapLS_IP_EBP_12 @ 10001c74

void SUnMapLS_IP_EBP_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SUnMapLS_IP_EBP_12();
  return;
}


// ---- ThunkConnect32 @ 10001c7a

void ThunkConnect32(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ThunkConnect32();
  return;
}


// ---- SUnMapLS_IP_EBP_8 @ 10001c80

void SUnMapLS_IP_EBP_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SUnMapLS_IP_EBP_8();
  return;
}


// ---- FT_Thunk @ 10001c86

void FT_Thunk(void)

{
                    /* WARNING: Could not recover jumptable at 0x10001c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FT_Thunk();
  return;
}


// ---- FUN_10001c8c @ 10001c8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001c8c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100073f8 = GetVersion();
    iVar1 = FUN_100026c0(1);
    if (iVar1 != 0) {
      _DAT_10007404 = DAT_100073f8 >> 8 & 0xff;
      _DAT_10007400 = DAT_100073f8 & 0xff;
      DAT_100073f8 = DAT_100073f8 >> 0x10;
      _DAT_100073fc = _DAT_10007400 * 0x100 + _DAT_10007404;
      iVar1 = FUN_10001f53();
      if (iVar1 != 0) {
        DAT_10007958 = GetCommandLineA();
        DAT_100073e4 = FUN_1000258e();
        FUN_10002078();
        FUN_10002341();
        FUN_10002288();
        FUN_10001e35();
        DAT_100073e0 = DAT_100073e0 + 1;
        goto LAB_10001d5f;
      }
      FUN_100026fc();
    }
LAB_10001cec:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100073e0 < 1) goto LAB_10001cec;
      DAT_100073e0 = DAT_100073e0 + -1;
      if (DAT_10007430 == 0) {
        FUN_10001e73();
      }
      FUN_10002234();
      FUN_10001fa7();
      FUN_100026fc();
    }
    else if (param_2 == 3) {
      FUN_10001fd8((LPVOID)0x0);
    }
LAB_10001d5f:
    uVar2 = 1;
  }
  return uVar2;
}


// ---- entry @ 10001d65

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2;
  iVar4 = DAT_100073e0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10001dad;
    if ((DAT_1000795c != (code *)0x0) &&
       (iVar4 = (*DAT_1000795c)(param_1,param_2,param_3), iVar4 == 0)) {
      return 0;
    }
    iVar4 = FUN_10001c8c(param_1,param_2);
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_10001dad:
  bVar2 = FUN_10001000();
  iVar4 = CONCAT31(extraout_var,bVar2);
  if (param_2 == 1) {
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_10001c8c(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar4;
  }
  iVar3 = FUN_10001c8c(param_1,param_2);
  param_2 = iVar4;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000795c != (code *)0x0) {
      iVar4 = (*DAT_1000795c)(param_1,iVar1,param_3);
      return iVar4;
    }
    return param_2;
  }
  return 0;
}


// ---- __amsg_exit @ 10001e02

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100073ec == 1) || ((DAT_100073ec == 0 && (DAT_100073f0 == 1)))) {
    FUN_10002771();
  }
  FUN_100027aa(param_1);
  (*(code *)PTR___exit_100070ac)(0xff);
  return;
}


// ---- FUN_10001e35 @ 10001e35

void FUN_10001e35(void)

{
  if (DAT_10007954 != (code *)0x0) {
    (*DAT_10007954)();
  }
  FUN_10001f39((undefined4 *)&DAT_10007008,(undefined4 *)&DAT_10007010);
  FUN_10001f39((undefined4 *)&DAT_10007000,(undefined4 *)&DAT_10007004);
  return;
}


// ---- __exit @ 10001e62

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10001e82(_Code,1,0);
  return;
}


// ---- FUN_10001e73 @ 10001e73

void FUN_10001e73(void)

{
  FUN_10001e82(0,0,1);
  return;
}


// ---- FUN_10001e82 @ 10001e82

void __cdecl FUN_10001e82(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10001f27();
  if (DAT_10007434 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10007430 = 1;
  DAT_1000742c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10007950 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000794c - 4), DAT_10007950 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10007950 <= puVar1);
    }
    FUN_10001f39((undefined4 *)&DAT_10007014,(undefined4 *)&DAT_10007018);
  }
  FUN_10001f39((undefined4 *)&DAT_1000701c,(undefined4 *)&DAT_10007020);
  if (param_3 == 0) {
    DAT_10007434 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10001f30();
  return;
}


// ---- FUN_10001f27 @ 10001f27

void FUN_10001f27(void)

{
  FUN_10002992(0xd);
  return;
}


// ---- FUN_10001f30 @ 10001f30

void FUN_10001f30(void)

{
  FUN_100029f3(0xd);
  return;
}


// ---- FUN_10001f39 @ 10001f39

void __cdecl FUN_10001f39(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ---- FUN_10001f53 @ 10001f53

undefined4 FUN_10001f53(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100028fd();
  DAT_100070b0 = TlsAlloc();
  if (DAT_100070b0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10002a08(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100070b0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10001fc5((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


// ---- FUN_10001fa7 @ 10001fa7

void FUN_10001fa7(void)

{
  FUN_10002926();
  if (DAT_100070b0 != 0xffffffff) {
    TlsFree(DAT_100070b0);
    DAT_100070b0 = 0xffffffff;
  }
  return;
}


// ---- FUN_10001fc5 @ 10001fc5

void __cdecl FUN_10001fc5(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10007230;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


// ---- FUN_10001fd8 @ 10001fd8

void __cdecl FUN_10001fd8(LPVOID param_1)

{
  if (DAT_100070b0 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_100070b0), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10002a95(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10002a95(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10002a95(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10002a95(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10002a95(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10002a95(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10007230) {
        FUN_10002a95(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10002a95(param_1);
    }
    TlsSetValue(DAT_100070b0,(LPVOID)0x0);
    return;
  }
  return;
}


// ---- FUN_10002078 @ 10002078

void FUN_10002078(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10007940 = 0x20;
  DAT_10007840 = puVar2;
  for (; puVar2 < DAT_10007840 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_10007940 < (int)UVar8) {
      puVar2 = &DAT_10007844;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10007940;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10007940 = DAT_10007940 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_10007940 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10007840)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_10007840 + iVar6 * 9;
    if (DAT_10007840[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_1000221d;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000221d:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10007940);
      return;
    }
  } while( true );
}


// ---- FUN_10002234 @ 10002234

void FUN_10002234(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10007840;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10002a95((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10007940);
  return;
}


// ---- FUN_10002288 @ 10002288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002288(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10007948 == 0) {
    FUN_100030b3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100073e4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10007414 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100073e4;
  puVar6 = DAT_100073e4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10002b70((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10002a95(DAT_100073e4);
  DAT_100073e4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10007944 = 1;
  return;
}


// ---- FUN_10002341 @ 10002341

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002341(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10007948 == 0) {
    FUN_100030b3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10007438,0x104);
  _DAT_10007424 = &DAT_10007438;
  pbVar2 = &DAT_10007438;
  if (*DAT_10007958 != 0) {
    pbVar2 = DAT_10007958;
  }
  FUN_100023da(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100023da(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000740c = puVar1;
  _DAT_10007408 = local_8 + -1;
  return;
}


// ---- FUN_100023da @ 100023da

void __cdecl FUN_100023da(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_10007720 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10007720 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10002485;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10002485:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10007720 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10007720 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


// ---- FUN_1000258e @ 1000258e

LPSTR FUN_1000258e(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_1000753c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000753c = 1;
LAB_100025e5:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_10002a95(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000753c = 2;
  }
  else {
    if (DAT_1000753c == 1) goto LAB_100025e5;
    if (DAT_1000753c != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_100030d0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


// ---- FUN_100026c0 @ 100026c0

undefined4 __cdecl FUN_100026c0(int param_1)

{
  int iVar1;
  
  DAT_10007828 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10007828 != (HANDLE)0x0) {
    iVar1 = FUN_10003405();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10007828);
  }
  return 0;
}


// ---- FUN_100026fc @ 100026fc

void FUN_100026fc(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_100075f8) {
    puVar2 = (undefined4 *)((int)DAT_100075fc + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10007828,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_100075f8);
  }
  HeapFree(DAT_10007828,0,DAT_100075fc);
  HeapDestroy(DAT_10007828);
  return;
}


// ---- FUN_10002771 @ 10002771

void FUN_10002771(void)

{
  if ((DAT_100073ec == 1) || ((DAT_100073ec == 0 && (DAT_100073f0 == 1)))) {
    FUN_100027aa(0xfc);
    if (DAT_10007540 != (code *)0x0) {
      (*DAT_10007540)();
    }
    FUN_100027aa(0xff);
  }
  return;
}


// ---- FUN_100027aa @ 100027aa

void __cdecl FUN_100027aa(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_100070e0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10007170);
  if (param_1 == (&DAT_100070e0)[iVar5 * 2]) {
    if ((DAT_100073ec == 1) || ((DAT_100073ec == 0 && (DAT_100073f0 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100070e4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10002b70(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10002b70(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10002b80(local_a4,_Dest);
      FUN_10002b80(local_a4,(uint *)&DAT_10005384);
      FUN_10002b80(local_a4,*(uint **)(iVar5 * 8 + 0x100070e4));
      auStackY_1e3._3_4_ = 0x100028ce;
      FUN_10003c4e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ---- FUN_100028fd @ 100028fd

void FUN_100028fd(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100071b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100071a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007194);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007174);
  return;
}


// ---- FUN_10002926 @ 10002926

void FUN_10002926(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10007170;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100071b4)) && (ppuVar1 != &PTR_DAT_100071a4)) &&
       ((ppuVar1 != &PTR_DAT_10007194 && (ppuVar1 != &PTR_DAT_10007174)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10002a95(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10007230);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007194);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100071a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100071b4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007174);
  return;
}


// ---- FUN_10002992 @ 10002992

void __cdecl FUN_10002992(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10007170 + param_1;
  if ((&DAT_10007170)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10002992(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10002a95(lpCriticalSection);
    }
    FUN_100029f3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


// ---- FUN_100029f3 @ 100029f3

void __cdecl FUN_100029f3(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10007170)[param_1]);
  return;
}


// ---- FUN_10002a08 @ 10002a08

int * __cdecl FUN_10002a08(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_100073c0 || (int)_Size - (int)DAT_100073c0 == 0) {
        FUN_10002992(9);
        piVar1 = FUN_10003799(_Size);
        FUN_100029f3(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10007828,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_100075bc == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10003e38(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}


// ---- FUN_10002a95 @ 10002a95

void __cdecl FUN_10002a95(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10002992(9);
    puVar1 = (uint *)FUN_10003443((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000346e(puVar1,(uint)param_1);
      FUN_100029f3(9);
      return;
    }
    FUN_100029f3(9);
    HeapFree(DAT_10007828,0,param_1);
  }
  return;
}


// ---- _malloc @ 10002add

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100075bc);
  return pvVar1;
}


// ---- __nh_malloc @ 10002aef

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10002b1b((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10003e38(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


// ---- FUN_10002b1b @ 10002b1b

int * __cdecl FUN_10002b1b(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_100073c0) {
    FUN_10002992(9);
    piVar1 = FUN_10003799(param_1);
    FUN_100029f3(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10007828,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}


// ---- FUN_10002b70 @ 10002b70

uint * __cdecl FUN_10002b70(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10002c58;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10002c58:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


// ---- FUN_10002b80 @ 10002b80

uint * __cdecl FUN_10002b80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10002b9c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10002bcf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10002beb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10002b9c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10002beb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10002beb;
    }
  }
LAB_10002bcf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10002beb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10002c58:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10002c58;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


// ---- _strlen @ 10002c60

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10002c80;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10002cb3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10002c80:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10002cb3;
}


// ---- FUN_10002cdb @ 10002cdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10002cdb(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10002992(0x19);
  CodePage = FUN_10002e88(param_1);
  if (CodePage != DAT_10007600) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100072c8;
LAB_10002d18:
      if (*pUVar5 != CodePage) goto code_r0x10002d1c;
      local_8 = 0;
      puVar15 = &DAT_10007720;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100072d8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100072c0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10007720 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1000761c = 1;
      DAT_10007600 = CodePage;
      DAT_10007824 = FUN_10002ed2(CodePage);
      DAT_10007610 = *(undefined4 *)(iVar12 + 0x100072cc);
      DAT_10007614 = *(undefined4 *)(iVar12 + 0x100072d0);
      DAT_10007618 = *(undefined4 *)(iVar12 + 0x100072d4);
      goto LAB_10002e6c;
    }
    goto LAB_10002e67;
  }
  goto LAB_10002d02;
code_r0x10002d1c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100073b7 < (int)pUVar5) goto code_r0x10002d27;
  goto LAB_10002d18;
code_r0x10002d27:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10007824 = 0;
    puVar15 = &DAT_10007720;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000761c = 0;
      DAT_10007600 = CodePage;
    }
    else {
      DAT_10007600 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10007720 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10007720 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10007824 = FUN_10002ed2(CodePage);
      _DAT_1000761c = 1;
    }
    DAT_10007610 = 0;
    DAT_10007614 = 0;
    DAT_10007618 = 0;
  }
  else {
    if (DAT_100075a8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10002e79;
    }
LAB_10002e67:
    FUN_10002f05();
  }
LAB_10002e6c:
  FUN_10002f2e();
LAB_10002d02:
  uVar14 = 0;
LAB_10002e79:
  FUN_100029f3(0x19);
  return uVar14;
}


// ---- FUN_10002e88 @ 10002e88

int __cdecl FUN_10002e88(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100075a8 = 1;
                    /* WARNING: Could not recover jumptable at 0x10002ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100075a8 = 1;
                    /* WARNING: Could not recover jumptable at 0x10002eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100075d8;
  }
  DAT_100075a8 = (uint)bVar2;
  return param_1;
}


// ---- FUN_10002ed2 @ 10002ed2

undefined4 __cdecl FUN_10002ed2(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


// ---- FUN_10002f05 @ 10002f05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f05(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10007720;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10007600 = 0;
  _DAT_1000761c = 0;
  DAT_10007824 = 0;
  DAT_10007610 = 0;
  DAT_10007614 = 0;
  DAT_10007618 = 0;
  return;
}


// ---- FUN_10002f2e @ 10002f2e

void FUN_10002f2e(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_10007600,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_100040a2(1,local_118,0x100,local_518,DAT_10007600,DAT_10007824,0);
    FUN_10003e53(DAT_10007824,0x100,local_118,0x100,local_218,0x100,DAT_10007600,0);
    FUN_10003e53(DAT_10007824,0x200,local_118,0x100,local_318,0x100,DAT_10007600,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10007720 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000303a;
        }
        (&DAT_10007620)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007720 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000303a:
        (&DAT_10007620)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_10007720 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10003084;
        }
        (&DAT_10007620)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007720 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10003084:
        (&DAT_10007620)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


// ---- FUN_100030b3 @ 100030b3

void FUN_100030b3(void)

{
  if (DAT_10007948 == 0) {
    FUN_10002cdb(-3);
    DAT_10007948 = 1;
  }
  return;
}


// ---- FUN_100030d0 @ 100030d0

undefined4 * __cdecl FUN_100030d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003287_caseD_2;
        case 3:
          goto switchD_10003287_caseD_3;
        }
        goto switchD_10003287_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003287_caseD_0;
      case 1:
        goto switchD_10003287_caseD_1;
      case 2:
        goto switchD_10003287_caseD_2;
      case 3:
        goto switchD_10003287_caseD_3;
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
              goto switchD_10003287_caseD_2;
            case 3:
              goto switchD_10003287_caseD_3;
            }
            goto switchD_10003287_caseD_1;
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
              goto switchD_10003287_caseD_2;
            case 3:
              goto switchD_10003287_caseD_3;
            }
            goto switchD_10003287_caseD_1;
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
              goto switchD_10003287_caseD_2;
            case 3:
              goto switchD_10003287_caseD_3;
            }
            goto switchD_10003287_caseD_1;
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
switchD_10003287_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003287_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003287_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003287_caseD_0:
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
        goto switchD_10003105_caseD_2;
      case 3:
        goto switchD_10003105_caseD_3;
      }
      goto switchD_10003105_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003105_caseD_0;
    case 1:
      goto switchD_10003105_caseD_1;
    case 2:
      goto switchD_10003105_caseD_2;
    case 3:
      goto switchD_10003105_caseD_3;
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
            goto switchD_10003105_caseD_2;
          case 3:
            goto switchD_10003105_caseD_3;
          }
          goto switchD_10003105_caseD_1;
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
            goto switchD_10003105_caseD_2;
          case 3:
            goto switchD_10003105_caseD_3;
          }
          goto switchD_10003105_caseD_1;
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
            goto switchD_10003105_caseD_2;
          case 3:
            goto switchD_10003105_caseD_3;
          }
          goto switchD_10003105_caseD_1;
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
switchD_10003105_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003105_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003105_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003105_caseD_0:
  return param_1;
}


// ---- FUN_10003405 @ 10003405

undefined4 FUN_10003405(void)

{
  DAT_100075fc = HeapAlloc(DAT_10007828,0,0x140);
  if (DAT_100075fc == (LPVOID)0x0) {
    return 0;
  }
  DAT_100075f4 = 0;
  DAT_100075f8 = 0;
  DAT_100075f0 = DAT_100075fc;
  DAT_100075e8 = 0x10;
  return 1;
}


// ---- FUN_10003443 @ 10003443

uint __cdecl FUN_10003443(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100075fc;
  while( true ) {
    if (DAT_100075fc + DAT_100075f8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


// ---- FUN_1000346e @ 1000346e

void __cdecl FUN_1000346e(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_100075ec;
  puVar2 = DAT_100075f4;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_100075f4 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_100075ec * 0x8000 + DAT_100075f4[3]),0x8000,0x4000);
    DAT_100075f4[2] = DAT_100075f4[2] | 0x80000000U >> ((byte)DAT_100075ec & 0x1f);
    *(undefined4 *)(DAT_100075f4[4] + 0xc4 + DAT_100075ec * 4) = 0;
    *(char *)(DAT_100075f4[4] + 0x43) = *(char *)(DAT_100075f4[4] + 0x43) + -1;
    if (*(char *)(DAT_100075f4[4] + 0x43) == '\0') {
      DAT_100075f4[1] = DAT_100075f4[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_100075f4[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_100075f4[3],0,0x8000);
      HeapFree(DAT_10007828,0,(LPVOID)DAT_100075f4[4]);
      FUN_100041f0(DAT_100075f4,DAT_100075f4 + 5,
                   (DAT_100075f8 * 0x14 - (int)DAT_100075f4) + -0x14 + DAT_100075fc);
      DAT_100075f8 = DAT_100075f8 + -1;
      if (DAT_100075f4 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_100075f0 = DAT_100075fc;
      puVar2 = param_1;
    }
  }
  DAT_100075f4 = puVar2;
  DAT_100075ec = uVar5;
  return;
}


// ---- FUN_10003799 @ 10003799

int * __cdecl FUN_10003799(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_100075fc + DAT_100075f8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_100075f0;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_100075fc;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_100075f0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_100075f0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_100075fc;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_100075f0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_100075f0) && (param_1 = FUN_10003aa2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10003b53((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_100075f0 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_10003a5f;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_10003a5f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_100075f4)) && (local_8 == DAT_100075ec)) {
    DAT_100075f4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}


// ---- FUN_10003aa2 @ 10003aa2

undefined4 * FUN_10003aa2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100075f8 == DAT_100075e8) {
    pvVar2 = HeapReAlloc(DAT_10007828,0,DAT_100075fc,(DAT_100075e8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100075e8 = DAT_100075e8 + 0x10;
    DAT_100075fc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100075fc + DAT_100075f8 * 0x14);
  pvVar2 = HeapAlloc(DAT_10007828,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100075f8 = DAT_100075f8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10007828,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


// ---- FUN_10003b53 @ 10003b53

int __cdecl FUN_10003b53(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}


// ---- FUN_10003c4e @ 10003c4e

int __cdecl FUN_10003c4e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100075ac == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100075ac = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100075ac != (FARPROC)0x0) {
        DAT_100075b0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100075b4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10003c9d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10003c9d:
    if (DAT_100075b0 != (FARPROC)0x0) {
      iVar1 = (*DAT_100075b0)();
      if ((iVar1 != 0) && (DAT_100075b4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100075b4)(iVar1);
      }
    }
    iVar1 = (*DAT_100075ac)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


// ---- _strncpy @ 10003ce0

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x10003d1e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10003d5b;
        goto LAB_10003dc9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10003dc5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10003dc9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10003d5b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10003dc5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10003dc5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10003dc5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10003d1e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_10003d5b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


// ---- _memset @ 10003de0

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ---- FUN_10003e38 @ 10003e38

undefined4 __cdecl FUN_10003e38(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100075b8 != (code *)0x0) {
    iVar1 = (*DAT_100075b8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ---- FUN_10003e53 @ 10003e53

int __cdecl
FUN_10003e53(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10005408;
  puStack_10 = &LAB_10004620;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100075e0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100075e0 = 2;
    }
    else {
      DAT_100075e0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10004077(param_3,param_4);
  }
  if (DAT_100075e0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100075e0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100075d8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10004700();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10004700();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ---- FUN_10004077 @ 10004077

int __cdecl FUN_10004077(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}


// ---- FUN_100040a2 @ 100040a2

BOOL __cdecl
FUN_100040a2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10005420;
  puStack_10 = &LAB_10004620;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100075e4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100075e4 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_100075e4 = iVar3;
  if (DAT_100075e4 != 2) {
    if (DAT_100075e4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100075d8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10004700();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_100075c8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


// ---- FUN_100041f0 @ 100041f0

undefined4 * __cdecl FUN_100041f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100043a7_caseD_2;
        case 3:
          goto switchD_100043a7_caseD_3;
        }
        goto switchD_100043a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100043a7_caseD_0;
      case 1:
        goto switchD_100043a7_caseD_1;
      case 2:
        goto switchD_100043a7_caseD_2;
      case 3:
        goto switchD_100043a7_caseD_3;
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
              goto switchD_100043a7_caseD_2;
            case 3:
              goto switchD_100043a7_caseD_3;
            }
            goto switchD_100043a7_caseD_1;
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
              goto switchD_100043a7_caseD_2;
            case 3:
              goto switchD_100043a7_caseD_3;
            }
            goto switchD_100043a7_caseD_1;
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
              goto switchD_100043a7_caseD_2;
            case 3:
              goto switchD_100043a7_caseD_3;
            }
            goto switchD_100043a7_caseD_1;
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
switchD_100043a7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100043a7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100043a7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100043a7_caseD_0:
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
        goto switchD_10004225_caseD_2;
      case 3:
        goto switchD_10004225_caseD_3;
      }
      goto switchD_10004225_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004225_caseD_0;
    case 1:
      goto switchD_10004225_caseD_1;
    case 2:
      goto switchD_10004225_caseD_2;
    case 3:
      goto switchD_10004225_caseD_3;
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
            goto switchD_10004225_caseD_2;
          case 3:
            goto switchD_10004225_caseD_3;
          }
          goto switchD_10004225_caseD_1;
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
            goto switchD_10004225_caseD_2;
          case 3:
            goto switchD_10004225_caseD_3;
          }
          goto switchD_10004225_caseD_1;
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
            goto switchD_10004225_caseD_2;
          case 3:
            goto switchD_10004225_caseD_3;
          }
          goto switchD_10004225_caseD_1;
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
switchD_10004225_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004225_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004225_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004225_caseD_0:
  return param_1;
}


// ---- __global_unwind2 @ 10004528

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10004540,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ---- __local_unwind2 @ 1000456a

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_10004548;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100045fe();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


// ---- FUN_100045fe @ 100045fe

void FUN_100045fe(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100073d8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100073d4 = in_EAX;
  DAT_100073dc = unaff_EBP;
  return;
}


// ---- FUN_100046dd @ 100046dd

void FUN_100046dd(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


// ---- FUN_10004700 @ 10004700

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10004700(void)

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


// ---- RtlUnwind @ 10004730

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10004730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


// ---- FUN_1000706c @ 1000706c

void FUN_1000706c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_1000708c @ 1000708c

void FUN_1000708c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


