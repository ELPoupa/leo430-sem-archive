// Decompiled with Ghidra from Gun Monitor.exe
// Format: Portable Executable (PE), image base 00400000

// ---- FUN_00401010 @ 00401010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401010(void)

{
  _DAT_0042a118 = RegisterWindowMessageA(s_LEO_D_SET_STATE_004282e0);
  return;
}


// ---- FUN_00403e70 @ 00403e70

CWinApp * __fastcall FUN_00403e70(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_004235f0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return param_1;
}


// ---- FUN_00403e90 @ 00403e90

void FUN_00403e90(void)

{
  return;
}


// ---- FUN_00403ea0 @ 00403ea0

void FUN_00403ea0(void)

{
  return;
}


// ---- FUN_00403eb0 @ 00403eb0

CWinApp * __thiscall FUN_00403eb0(void *this,byte param_1)

{
  FUN_00403ed0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00403ed0 @ 00403ed0

void __fastcall FUN_00403ed0(CWinApp *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004225e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_LAB_004235f0;
  local_4 = 0;
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 4))(1);
  }
  local_4 = 0xffffffff;
  CWinApp::~CWinApp(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00403f40 @ 00403f40

void FUN_00403f40(void)

{
  FUN_00403e70((CWinApp *)&DAT_00429c78);
  return;
}


// ---- FUN_00403f50 @ 00403f50

void FUN_00403f50(void)

{
  FUN_0042236c((_onexit_t)&LAB_00403f60);
  return;
}


// ---- FUN_00403f70 @ 00403f70

undefined4 __fastcall FUN_00403f70(CWinApp *param_1)

{
  byte bVar1;
  CFrameWnd *this;
  undefined4 *puVar2;
  int iVar3;
  CSingleDocTemplate *this_00;
  CDocTemplate *pCVar4;
  byte *pbVar5;
  CView *pCVar6;
  byte *pbVar7;
  bool bVar8;
  CCommandLineInfo local_30 [16];
  int local_20;
  byte *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0042261c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AfxEnableControlContainer((COccManager *)0x0);
  puVar2 = operator_new(0x20);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00421360(puVar2);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0xc4) = puVar2;
  iVar3 = FUN_004213f0((int)puVar2);
  if (iVar3 == 0) {
    AfxMessageBox(s_Server_not_running____Aborting__00429724,0,0);
    ExceptionList = local_c;
    return 0;
  }
  CWinApp::SetRegistryKey(param_1,&DAT_00429720);
  CWinApp::LoadStdProfileSettings(param_1,4);
  this_00 = operator_new(0x6c);
  local_4 = 1;
  if (this_00 == (CSingleDocTemplate *)0x0) {
    pCVar4 = (CDocTemplate *)0x0;
  }
  else {
    pCVar4 = (CDocTemplate *)
             CSingleDocTemplate::CSingleDocTemplate
                       (this_00,0x80,(CRuntimeClass *)&PTR_s_CGunMonitorDoc_00423770,
                        (CRuntimeClass *)&PTR_s_CMainFrame_00423bd8,
                        (CRuntimeClass *)&PTR_s_CGunMonitorView_004238c0);
  }
  local_4 = 0xffffffff;
  CWinApp::AddDocTemplate(param_1,pCVar4);
  CCommandLineInfo::CCommandLineInfo(local_30);
  local_4 = 2;
  CWinApp::ParseCommandLine(param_1,local_30);
  iVar3 = CWinApp::ProcessShellCommand(param_1,local_30);
  if (iVar3 == 0) {
    local_4 = 0xffffffff;
    CCommandLineInfo::~CCommandLineInfo(local_30);
    ExceptionList = local_c;
    return 0;
  }
  pbVar7 = &DAT_0042a11c;
  pbVar5 = local_1c;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_004040c7:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004040cb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_004040c7;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004040cb:
  if ((iVar3 != 0) && (local_20 == 1)) {
    (**(code **)(*(int *)param_1 + 0x84))(local_1c);
    this = *(CFrameWnd **)(param_1 + 0x20);
    if (this != (CFrameWnd *)0x0) {
      pCVar6 = CFrameWnd::GetActiveView(this);
      if (pCVar6 != (CView *)0x0) {
        FUN_0040d930((CWnd *)pCVar6);
      }
      FUN_004145b0(this,1);
    }
  }
  CWinApp::RegisterShellFileTypes(param_1,0);
  CWinApp::EnableShellOpen(param_1);
  CWnd::ShowWindow(*(CWnd **)(param_1 + 0x20),5);
  UpdateWindow(*(HWND *)(*(int *)(param_1 + 0x20) + 0x20));
  local_4 = 0xffffffff;
  CCommandLineInfo::~CCommandLineInfo(local_30);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_00404150 @ 00404150

void FUN_00404150(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_00404160 @ 00404160

CDialog * __fastcall FUN_00404160(CDialog *param_1)

{
  CDialog::CDialog(param_1,100,(CWnd *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_00423694;
  return param_1;
}


// ---- FUN_00404180 @ 00404180

CDialog * __thiscall FUN_00404180(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004041d0 @ 004041d0

void FUN_004041d0(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00404160(local_6c);
  local_4 = 0;
  CDialog::DoModal(local_6c);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_6c);
  ExceptionList = local_c;
  return;
}


// ---- FUN_00404230 @ 00404230

void __fastcall FUN_00404230(CWinApp *param_1)

{
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_00421480(*(int *)(param_1 + 0xc4));
  }
  CWinApp::ExitInstance(param_1);
  return;
}


// ---- FUN_00404250 @ 00404250

void __fastcall FUN_00404250(CWinApp *param_1)

{
  CFrameWnd *this;
  CView *pCVar1;
  
  CWinApp::OnFileNew(param_1);
  this = *(CFrameWnd **)(param_1 + 0x20);
  if (this != (CFrameWnd *)0x0) {
    if (*(int *)(this + 0xc0) != 0) {
      FUN_004142a0((int)this);
    }
    pCVar1 = CFrameWnd::GetActiveView(this);
    if (pCVar1 != (CView *)0x0) {
      FUN_0040d910((CWnd *)pCVar1);
    }
    FUN_004145b0(this,0);
  }
  return;
}


// ---- FUN_00404290 @ 00404290

void __fastcall FUN_00404290(CWinApp *param_1)

{
  CFrameWnd *this;
  CView *pCVar1;
  
  this = *(CFrameWnd **)(param_1 + 0x20);
  if ((this != (CFrameWnd *)0x0) && (*(int *)(this + 0xc0) != 0)) {
    FUN_004142a0((int)this);
  }
  CWinApp::OnFileOpen(param_1);
  if (this != (CFrameWnd *)0x0) {
    pCVar1 = CFrameWnd::GetActiveView(this);
    if (pCVar1 != (CView *)0x0) {
      FUN_0040d930((CWnd *)pCVar1);
    }
    FUN_004145b0(this,1);
  }
  return;
}


// ---- FUN_004042e0 @ 004042e0

void __fastcall FUN_004042e0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_004042f0 @ 004042f0

void __fastcall FUN_004042f0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_00407150 @ 00407150

CDocument * FUN_00407150(void)

{
  CDocument *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0042265a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x6c);
  local_4 = 0;
  if (pCVar1 != (CDocument *)0x0) {
    pCVar1 = FUN_004071f0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CDocument *)0x0;
}


// ---- FUN_004071c0 @ 004071c0

undefined ** FUN_004071c0(void)

{
  return &PTR_s_CGunMonitorDoc_00423770;
}


// ---- FUN_004071e0 @ 004071e0

undefined ** FUN_004071e0(void)

{
  return &PTR_LAB_00423788;
}


// ---- FUN_004071f0 @ 004071f0

CDocument * __fastcall FUN_004071f0(CDocument *param_1)

{
  CDocument::CDocument(param_1);
  *(undefined ***)(param_1 + 0x54) = &PTR_GetRuntimeClass_00423890;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined ***)param_1 = &PTR_FUN_004237d8;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1;
}


// ---- FUN_00407220 @ 00407220

CDocument * __thiscall FUN_00407220(void *this,byte param_1)

{
  FUN_00407240(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00407240 @ 00407240

void __fastcall FUN_00407240(CDocument *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00422680;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_004237d8;
  *(undefined ***)(param_1 + 0x54) = &PTR_GetRuntimeClass_00423890;
  piVar2 = *(int **)(param_1 + 0x58);
  local_4 = 1;
  if (piVar2 != (int *)0x0) {
    for (iVar1 = *(int *)(param_1 + 0x5c); iVar1 != 0; iVar1 = iVar1 + -1) {
      (**(code **)(*piVar2 + 4))(0);
      piVar2 = piVar2 + 10;
    }
    operator_delete(*(void **)(param_1 + 0x58));
  }
  *(undefined ***)(param_1 + 0x54) = &PTR_GetRuntimeClass_004238a4;
  local_4 = 0xffffffff;
  CDocument::~CDocument(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004072e0 @ 004072e0

undefined4 * __thiscall FUN_004072e0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_GetRuntimeClass_004238a4;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}


// ---- FUN_00407300 @ 00407300

void __fastcall FUN_00407300(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_004238a4;
  return;
}


// ---- FUN_00407310 @ 00407310

undefined4 __fastcall FUN_00407310(CDocument *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CDocument::OnNewDocument(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 100) = 0x1000;
  if (piVar2 != (int *)0x0) {
    for (iVar1 = *(int *)(param_1 + 0x5c); iVar1 != 0; iVar1 = iVar1 + -1) {
      (**(code **)(*piVar2 + 4))(0);
      piVar2 = piVar2 + 10;
    }
    operator_delete(*(void **)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 1;
}


// ---- FUN_00407380 @ 00407380

void __thiscall FUN_00407380(void *this,CArchive *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  AFX_EXCEPTION_LINK local_30 [8];
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 *local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004226a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_18 = this;
  if ((~*(uint *)(param_1 + 0x14) & 1) == 0) {
    ExceptionList = &local_10;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
    local_8 = 4;
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      CArchive::FillBuffer(param_1,(*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
    }
    iVar7 = **(int **)(param_1 + 0x24);
    *(int **)(param_1 + 0x24) = *(int **)(param_1 + 0x24) + 1;
    local_1c = iVar7;
    operator>>(param_1,(CTime *)((int)this + 0x68));
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      CArchive::FillBuffer(param_1,(*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x24);
    uVar1 = *puVar3;
    *(undefined4 **)(param_1 + 0x24) = puVar3 + 1;
    if (*(undefined4 **)(param_1 + 0x28) < puVar3 + 2) {
      CArchive::FillBuffer(param_1,(int)(puVar3 + 1) + (4 - (int)*(undefined4 **)(param_1 + 0x28)));
    }
    uVar2 = **(undefined4 **)(param_1 + 0x24);
    *(undefined4 **)(param_1 + 0x24) = *(undefined4 **)(param_1 + 0x24) + 1;
    if (DAT_00429c98 != 0) {
      *(undefined4 *)(DAT_00429c98 + 0xec) = uVar1;
      *(undefined4 *)(DAT_00429c98 + 0xf0) = uVar2;
    }
    pvVar6 = this;
    if (iVar7 == 0) {
      if (*(int **)((int)this + 0x58) != (int *)0x0) {
        FUN_00408130(*(int **)((int)this + 0x58),*(int *)((int)this + 0x5c));
        operator_delete(*(void **)((int)this + 0x58));
        *(undefined4 *)((int)this + 0x58) = 0;
      }
      *(undefined4 *)((int)this + 0x60) = 0;
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x58);
      if (iVar4 == 0) {
        puVar3 = operator_new(iVar7 * 0x28);
        *(undefined4 **)((int)this + 0x58) = puVar3;
        FUN_00408160(puVar3,iVar7);
        *(int *)((int)this + 0x60) = iVar7;
        *(int *)((int)this + 0x5c) = iVar7;
      }
      else if (*(int *)((int)this + 0x60) < iVar7) {
        iVar4 = *(int *)((int)this + 100);
        if (iVar4 == 0) {
          iVar4 = (int)(*(int *)((int)this + 0x5c) + (*(int *)((int)this + 0x5c) >> 0x1f & 7U)) >> 3
          ;
          if (iVar4 < 4) {
            iVar4 = 4;
          }
          else if (0x400 < iVar4) {
            iVar4 = 0x400;
          }
        }
        iVar4 = iVar4 + *(int *)((int)this + 0x60);
        if (iVar7 < iVar4) {
          iVar7 = iVar4;
        }
        local_20 = operator_new(iVar7 * 0x28);
        pvVar6 = local_18;
        iVar4 = local_1c;
        puVar3 = *(undefined4 **)((int)this + 0x58);
        puVar8 = local_20;
        for (iVar5 = (*(int *)((int)this + 0x5c) * 5 & 0x1fffffffU) << 1; iVar5 != 0;
            iVar5 = iVar5 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00408160(local_20 + *(int *)((int)local_18 + 0x5c) * 10,
                     local_1c - *(int *)((int)local_18 + 0x5c));
        operator_delete(*(void **)((int)pvVar6 + 0x58));
        *(undefined4 **)((int)pvVar6 + 0x58) = local_20;
        *(int *)((int)pvVar6 + 0x5c) = iVar4;
        *(int *)((int)pvVar6 + 0x60) = iVar7;
      }
      else {
        iVar5 = *(int *)((int)this + 0x5c);
        if (iVar5 < iVar7) {
          FUN_00408160((undefined4 *)(iVar4 + iVar5 * 0x28),iVar7 - iVar5);
          *(int *)((int)this + 0x5c) = iVar7;
        }
        else {
          if (iVar7 < iVar5) {
            FUN_00408130((int *)(iVar4 + iVar7 * 0x28),iVar5 - iVar7);
          }
          *(int *)((int)this + 0x5c) = iVar7;
        }
      }
    }
    for (iVar7 = 0; iVar7 < local_1c; iVar7 = iVar7 + 1) {
      (**(code **)(*(int *)(*(int *)((int)pvVar6 + 0x58) + iVar7 * 0x28) + 8))();
    }
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc4;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
    iVar7 = *(int *)((int)this + 0x5c);
    local_8 = 1;
    local_1c = iVar7;
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      CArchive::Flush(param_1);
    }
    **(int **)(param_1 + 0x24) = iVar7;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    operator<<(param_1);
    uVar1 = *(undefined4 *)(DAT_00429c98 + 0xec);
    uVar2 = *(undefined4 *)(DAT_00429c98 + 0xf0);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      CArchive::Flush(param_1);
    }
    **(undefined4 **)(param_1 + 0x24) = uVar1;
    iVar7 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar7 + 4;
    if (*(uint *)(param_1 + 0x28) < iVar7 + 8U) {
      CArchive::Flush(param_1);
    }
    **(undefined4 **)(param_1 + 0x24) = uVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    for (iVar7 = 0; iVar7 < local_1c; iVar7 = iVar7 + 1) {
      (**(code **)(*(int *)(*(int *)((int)this + 0x58) + iVar7 * 0x28) + 8))();
    }
  }
  local_8 = 0xffffffff;
  AfxTryCleanup();
  ExceptionList = local_10;
  return;
}


// ---- Catch@0040747a @ 0040747a

undefined4 Catch_0040747a(void)

{
  int unaff_EBP;
  
  *(int **)(unaff_EBP + -0x20) = *(int **)(unaff_EBP + -0x1c);
  (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x18))(0,0);
  return 0x4076a4;
}


// ---- Catch@0040768f @ 0040768f

undefined4 Catch_0040768f(void)

{
  int unaff_EBP;
  
  *(int **)(unaff_EBP + -0x28) = *(int **)(unaff_EBP + -0x20);
  (**(code **)(**(int **)(unaff_EBP + -0x20) + 0x18))(0,0);
  return 0x4076a4;
}


// ---- AfxTryCleanup @ 004076d0

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x00421f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- FUN_004076e0 @ 004076e0

void __thiscall FUN_004076e0(void *this,int param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004226b0;
  pvStack_10 = ExceptionList;
  iVar1 = *(int *)((int)this + 0x5c);
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_00407d10((void *)((int)this + 0x54),iVar1 + 1,-1);
  iVar1 = *(int *)((int)this + 0x58) + iVar1 * 0x28;
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  FUN_00407793();
  return;
}


// ---- Catch@00407764 @ 00407764

undefined * Catch_00407764(void)

{
  AFX_MODULE_STATE *pAVar1;
  int unaff_EBP;
  
  pAVar1 = AfxGetModuleState();
  FUN_004142a0(*(int *)(*(int *)(pAVar1 + 4) + 0x20));
  AfxMessageBox(s_Out_of_memory_00429798,0,0);
  CException::Delete(*(CException **)(unaff_EBP + -0x18));
  return &DAT_00407790;
}


// ---- FUN_00407793 @ 00407793

void FUN_00407793(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  
  iVar1 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  (**(code **)(iVar1 + 100))(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ---- FUN_004077c0 @ 004077c0

void __thiscall FUN_004077c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x68) = param_1;
  return;
}


// ---- FUN_004077d0 @ 004077d0

void __fastcall FUN_004077d0(CDocument *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 100) = 0x1000;
  if (piVar2 != (int *)0x0) {
    for (iVar1 = *(int *)(param_1 + 0x5c); iVar1 != 0; iVar1 = iVar1 + -1) {
      (**(code **)(*piVar2 + 4))(0);
      piVar2 = piVar2 + 10;
    }
    operator_delete(*(void **)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_00407d10(param_1 + 0x54,0,-1);
  *(undefined4 *)(param_1 + 0x68) = 0;
  CDocument::DeleteContents(param_1);
  return;
}


// ---- FUN_00407840 @ 00407840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00407840(int param_1)

{
  undefined1 uVar1;
  AFX_MODULE_STATE *pAVar2;
  CString *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  CString *this;
  char *unaff_EBX;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *local_24c;
  char *local_244;
  CString *local_240;
  CString *local_23c;
  char *local_238;
  undefined4 local_234;
  int local_230;
  int local_22c;
  CStdioFile local_228 [16];
  undefined1 local_218 [4];
  int local_214;
  CFileDialog local_210 [176];
  CString aCStack_160 [332];
  void *local_14;
  undefined1 *local_10;
  int local_c;
  
  local_24c = &stack0xfffffffc;
  local_c = 0xffffffff;
  local_10 = &LAB_0042274c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  CFileDialog::CFileDialog
            (local_210,0,&DAT_00429884,s_gundata_csv_00429888,6,
             s_Gun_Monitor_Export_Files____csv__00429894,(CWnd *)0x0);
  local_c = 0;
  CFileDialog::DoModal(local_210);
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_c = CONCAT31(local_c._1_3_,1);
  CFileDialog::GetPathName(local_210);
  local_10._0_1_ = 2;
  CStdioFile::CStdioFile((CStdioFile *)&local_230,local_238,0x5001);
  local_234 = *(undefined4 *)(param_1 + 0x5c);
  local_10._0_1_ = 3;
  CString::CString((CString *)&local_244);
  local_10 = (undefined1 *)CONCAT31(local_10._1_3_,4);
  pCVar3 = (CString *)CTime::Format((CTime *)(param_1 + 0x68),&stack0xfffffdb8);
  local_14._0_1_ = 5;
  CString::operator=((CString *)&stack0xfffffdb8,pCVar3);
  local_14._0_1_ = 4;
  CString::~CString((CString *)&local_24c);
  CStdioFile::WriteString((CStdioFile *)&local_234,unaff_EBX);
  iVar6 = *(int *)(DAT_00429c98 + 0xec);
  CString::CString((CString *)&local_240,&DAT_0042a11c);
  local_14._0_1_ = 6;
  uVar1 = local_14._0_1_;
  local_14._0_1_ = 6;
  if (iVar6 != 0) {
    pCVar3 = FUN_004215e0(DAT_00429d3c,(CString *)&local_24c,iVar6);
    local_14._0_1_ = 7;
    CString::operator=((CString *)&local_240,pCVar3);
    local_14._0_1_ = 6;
    CString::~CString((CString *)&local_24c);
    uVar1 = local_14._0_1_;
  }
  local_14._0_1_ = uVar1;
  iVar8 = *(int *)(DAT_00429c98 + 0xf0);
  CString::CString((CString *)&local_244,&DAT_0042a11c);
  local_14 = (void *)CONCAT31(local_14._1_3_,8);
  if (iVar8 != 0) {
    pCVar3 = FUN_004215e0(DAT_00429d3c,(CString *)&local_24c,iVar8);
    local_14._0_1_ = 9;
    CString::operator=((CString *)&local_244,pCVar3);
    local_14 = (void *)CONCAT31(local_14._1_3_,8);
    CString::~CString((CString *)&local_24c);
  }
  CString::Format(local_240,&stack0xfffffdb8);
  CStdioFile::WriteString((CStdioFile *)&local_230,local_244);
  CString::Empty((CString *)&local_23c);
  CString::Empty((CString *)&local_240);
  if (iVar6 != 0) {
    pCVar3 = FUN_00421510(DAT_00429d3c,(CString *)&stack0xfffffdb8,iVar6);
    local_10._0_1_ = 10;
    CString::operator=((CString *)&local_23c,pCVar3);
    local_10 = (undefined1 *)CONCAT31(local_10._1_3_,8);
    CString::~CString((CString *)&stack0xfffffdb8);
  }
  if (iVar8 != 0) {
    pCVar3 = FUN_00421510(DAT_00429d3c,(CString *)&stack0xfffffdb8,iVar8);
    local_10._0_1_ = 0xb;
    CString::operator=((CString *)&local_240,pCVar3);
    local_10 = (undefined1 *)CONCAT31(local_10._1_3_,8);
    CString::~CString((CString *)&stack0xfffffdb8);
  }
  CString::Format(local_23c,(char *)&local_244);
  CStdioFile::WriteString((CStdioFile *)&local_22c,(char *)local_240);
  iVar6 = 0;
  if (0 < local_230) {
    do {
      iVar8 = *(int *)(param_1 + 0x58);
      local_244 = &stack0xfffffd68;
      FUN_00407c70(&stack0xfffffd68,(undefined4 *)(param_1 + 0x68));
      piVar7 = &local_214;
      iVar4 = FUN_00407ea0((void *)(param_1 + 0x54),iVar6);
      puVar5 = (undefined4 *)FUN_00407c80((void *)(iVar4 + 4),piVar7,iVar8);
      puVar5 = (undefined4 *)FUN_00407c70(local_218,puVar5);
      FUN_00407c60(puVar5);
      CString::Format(this,(char *)&local_240);
      CStdioFile::WriteString(local_228,(char *)local_23c);
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_22c);
  }
  CStdioFile::Close((CStdioFile *)&local_22c);
  local_c._0_1_ = 6;
  CString::~CString((CString *)&local_23c);
  local_c._0_1_ = 4;
  CString::~CString((CString *)&local_238);
  local_c._0_1_ = 3;
  CString::~CString((CString *)&local_240);
  local_c._0_1_ = 2;
  CStdioFile::~CStdioFile((CStdioFile *)&local_22c);
  local_c._0_1_ = 1;
  CString::~CString((CString *)&local_234);
  local_c = (uint)local_c._1_3_ << 8;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_c = 0xc;
  CString::~CString(aCStack_160);
  local_c = 0xffffffff;
  CDialog::~CDialog((CDialog *)local_210);
  ExceptionList = local_14;
  return;
}


// ---- FUN_00407c60 @ 00407c60

undefined4 __fastcall FUN_00407c60(undefined4 *param_1)

{
  return *param_1;
}


// ---- FUN_00407c70 @ 00407c70

void __thiscall FUN_00407c70(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}


// ---- FUN_00407c80 @ 00407c80

void __thiscall FUN_00407c80(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this - param_2;
  return;
}


// ---- FUN_00407ca0 @ 00407ca0

void __fastcall FUN_00407ca0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00422768;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0xb0));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_00407d10 @ 00407d10

void __thiscall FUN_00407d10(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    piVar5 = *(int **)((int)this + 4);
    if (piVar5 != (int *)0x0) {
      for (iVar4 = *(int *)((int)this + 8); iVar4 != 0; iVar4 = iVar4 + -1) {
        (**(code **)(*piVar5 + 4))(0);
        piVar5 = piVar5 + 10;
      }
      operator_delete(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    puVar1 = operator_new(param_1 * 0x28);
    *(undefined4 **)((int)this + 4) = puVar1;
    FUN_00408160(puVar1,param_1);
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 8) = param_1;
    return;
  }
  if (param_1 <= *(int *)((int)this + 0xc)) {
    iVar2 = *(int *)((int)this + 8);
    if (iVar2 < param_1) {
      FUN_00408160((undefined4 *)(iVar4 + iVar2 * 0x28),param_1 - iVar2);
      *(int *)((int)this + 8) = param_1;
      return;
    }
    if (param_1 < iVar2) {
      piVar5 = (int *)(iVar4 + param_1 * 0x28);
      for (iVar2 = iVar2 - param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
        (**(code **)(*piVar5 + 4))(0);
        piVar5 = piVar5 + 10;
      }
    }
    *(int *)((int)this + 8) = param_1;
    return;
  }
  iVar4 = *(int *)((int)this + 0x10);
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
    if (iVar4 < 4) {
      iVar4 = 4;
    }
    else if (0x400 < iVar4) {
      iVar4 = 0x400;
    }
  }
  iVar4 = iVar4 + *(int *)((int)this + 0xc);
  iVar2 = param_1;
  if (param_1 < iVar4) {
    iVar2 = iVar4;
  }
  puVar3 = operator_new(iVar2 * 0x28);
  puVar1 = *(undefined4 **)((int)this + 4);
  puVar6 = puVar3;
  for (iVar4 = (*(int *)((int)this + 8) * 5 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_00408160(puVar3 + *(int *)((int)this + 8) * 10,param_1 - *(int *)((int)this + 8));
  operator_delete(*(void **)((int)this + 4));
  *(int *)((int)this + 8) = param_1;
  *(undefined4 **)((int)this + 4) = puVar3;
  *(int *)((int)this + 0xc) = iVar2;
  return;
}


// ---- FUN_00407ea0 @ 00407ea0

int __thiscall FUN_00407ea0(void *this,int param_1)

{
  return *(int *)((int)this + 4) + param_1 * 0x28;
}


// ---- FUN_00407eb0 @ 00407eb0

void __thiscall FUN_00407eb0(void *this,CArchive *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  if ((~*(uint *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    if (uVar1 == 0) {
      piVar8 = *(int **)((int)this + 4);
      if (piVar8 != (int *)0x0) {
        for (iVar7 = *(int *)((int)this + 8); iVar7 != 0; iVar7 = iVar7 + -1) {
          (**(code **)(*piVar8 + 4))(0);
          piVar8 = piVar8 + 10;
        }
        operator_delete(*(void **)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4);
      if (iVar7 == 0) {
        puVar2 = operator_new(uVar1 * 0x28);
        *(undefined4 **)((int)this + 4) = puVar2;
        FUN_00408160(puVar2,uVar1);
        *(ulong *)((int)this + 0xc) = uVar1;
        *(ulong *)((int)this + 8) = uVar1;
      }
      else if (*(int *)((int)this + 0xc) < (int)uVar1) {
        iVar7 = *(int *)((int)this + 0x10);
        if (iVar7 == 0) {
          iVar7 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
          if (iVar7 < 4) {
            iVar7 = 4;
          }
          else if (0x400 < iVar7) {
            iVar7 = 0x400;
          }
        }
        uVar4 = iVar7 + *(int *)((int)this + 0xc);
        uVar5 = uVar1;
        if ((int)uVar1 < (int)uVar4) {
          uVar5 = uVar4;
        }
        puVar6 = operator_new(uVar5 * 0x28);
        puVar2 = *(undefined4 **)((int)this + 4);
        puVar9 = puVar6;
        for (iVar7 = (*(int *)((int)this + 8) * 5 & 0x1fffffffU) << 1; iVar7 != 0;
            iVar7 = iVar7 + -1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_00408160(puVar6 + *(int *)((int)this + 8) * 10,uVar1 - *(int *)((int)this + 8));
        operator_delete(*(void **)((int)this + 4));
        *(undefined4 **)((int)this + 4) = puVar6;
        *(ulong *)((int)this + 8) = uVar1;
        *(ulong *)((int)this + 0xc) = uVar5;
      }
      else {
        iVar3 = *(int *)((int)this + 8);
        if (iVar3 < (int)uVar1) {
          FUN_00408160((undefined4 *)(iVar7 + iVar3 * 0x28),uVar1 - iVar3);
          *(ulong *)((int)this + 8) = uVar1;
        }
        else {
          if ((int)uVar1 < iVar3) {
            piVar8 = (int *)(iVar7 + uVar1 * 0x28);
            for (iVar3 = iVar3 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
              (**(code **)(*piVar8 + 4))(0);
              piVar8 = piVar8 + 10;
            }
          }
          *(ulong *)((int)this + 8) = uVar1;
        }
      }
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 8));
  }
  if ((~*(uint *)(param_1 + 0x14) & 1) != 0) {
    CArchive::Write(param_1,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x28);
    return;
  }
  CArchive::Read(param_1,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x28);
  return;
}


// ---- FUN_00408090 @ 00408090

undefined4 * __thiscall FUN_00408090(void *this,byte param_1)

{
  FUN_004080b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004080b0 @ 004080b0

void __fastcall FUN_004080b0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00422788;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_00423890;
  piVar2 = (int *)param_1[1];
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    for (iVar1 = param_1[2]; iVar1 != 0; iVar1 = iVar1 + -1) {
      (**(code **)(*piVar2 + 4))(0);
      piVar2 = piVar2 + 10;
    }
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR_GetRuntimeClass_004238a4;
  ExceptionList = local_c;
  return;
}


// ---- FUN_00408130 @ 00408130

void FUN_00408130(int *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)(*param_1 + 4))(0);
    param_1 = param_1 + 10;
  }
  return;
}


// ---- FUN_00408160 @ 00408160

void FUN_00408160(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_004227b1;
  ExceptionList = &local_c;
  puVar2 = param_1;
  for (iVar1 = (param_2 * 5 & 0x1fffffffU) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_4 = 0;
    if (param_1 != (undefined4 *)0x0) {
      FUN_00410d60(param_1);
    }
    param_1 = param_1 + 10;
  }
  ExceptionList = local_c;
  return;
}


// ---- FUN_004081e0 @ 004081e0

undefined4 __fastcall FUN_004081e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ---- FUN_004081f0 @ 004081f0

void __thiscall FUN_004081f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}


// ---- FUN_00408200 @ 00408200

void FUN_00408200(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  return;
}


// ---- FUN_0040b060 @ 0040b060

CView * FUN_0040b060(void)

{
  CView *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004227ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x164);
  local_4 = 0;
  if (pCVar1 != (CView *)0x0) {
    pCVar1 = FUN_0040b100(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CView *)0x0;
}


// ---- FUN_0040b0d0 @ 0040b0d0

undefined ** FUN_0040b0d0(void)

{
  return &PTR_s_CGunMonitorView_004238c0;
}


// ---- FUN_0040b0f0 @ 0040b0f0

undefined ** FUN_0040b0f0(void)

{
  return &PTR_LAB_004238d8;
}


// ---- FUN_0040b100 @ 0040b100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CView * __fastcall FUN_0040b100(CView *param_1)

{
  float10 fVar1;
  HPEN pHVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422866;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CView::CView(param_1);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined ***)(param_1 + 0xec) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined ***)(param_1 + 0xf8) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined ***)(param_1 + 0x104) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined ***)(param_1 + 0x110) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined ***)(param_1 + 0x11c) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined ***)(param_1 + 0x128) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x134) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined ***)(param_1 + 0x140) = &PTR_GetRuntimeClass_00423b68;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined ***)(param_1 + 0x158) = &PTR_GetRuntimeClass_00423b68;
  local_4 = 9;
  *(undefined ***)param_1 = &PTR_FUN_00423a58;
  FUN_0040d7a0((int)param_1);
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 1;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x160) = DAT_00429d3c;
  *(undefined4 *)(param_1 + 0xe8) = 0xff;
  pHVar2 = CreatePen(0,2,0xff);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0xec),pHVar2);
  *(undefined4 *)(param_1 + 0xf4) = 0xff00;
  pHVar2 = CreatePen(0,2,0xff00);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0xf8),pHVar2);
  *(undefined4 *)(param_1 + 0x10c) = 0x808000;
  pHVar2 = CreatePen(0,2,0x808000);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x110),pHVar2);
  *(undefined4 *)(param_1 + 0x100) = 0xff0000;
  pHVar2 = CreatePen(0,2,0xff0000);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x104),pHVar2);
  *(undefined4 *)(param_1 + 0x118) = 0x808080;
  pHVar2 = CreatePen(0,2,0x808080);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x11c),pHVar2);
  *(undefined4 *)(param_1 + 0x124) = 0xff00ff;
  pHVar2 = CreatePen(0,2,0xff00ff);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x128),pHVar2);
  *(undefined4 *)(param_1 + 0x130) = 0x800080;
  pHVar2 = CreatePen(0,2,0x800080);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x134),pHVar2);
  *(undefined4 *)(param_1 + 0x13c) = 0x80ff;
  pHVar2 = CreatePen(0,2,0x80ff);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x140),pHVar2);
  *(undefined4 *)(param_1 + 0xa8) = 0x40400000;
  *(undefined4 *)(param_1 + 0x68) = 0x40400000;
  fVar3 = (float10)_DAT_00423a50;
  *(undefined4 *)(param_1 + 0xa4) = 0x460ca000;
  fVar3 = (float10)log2(fVar3);
  *(undefined4 *)(param_1 + 100) = 0x460ca000;
  *(undefined4 *)(param_1 + 0xb0) = 0x460ca000;
  *(undefined4 *)(param_1 + 0x70) = 0x460ca000;
  *(undefined4 *)(param_1 + 0xb4) = 0x43960000;
  *(undefined4 *)(param_1 + 0x74) = 0x43960000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x49742400;
  *(undefined4 *)(param_1 + 0x7c) = 0x49742400;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x49742400;
  *(undefined4 *)(param_1 + 0x80) = 0x49742400;
  *(undefined4 *)(param_1 + 0xac) = 0x46ea6000;
  *(undefined4 *)(param_1 + 0x6c) = 0x46ea6000;
  *(float *)(param_1 + 0x98) = (float)((float10)0.3010299956639812 * fVar3);
  fVar1 = (float10)log2((float10)_DAT_00423a48);
  *(float *)(param_1 + 0xb8) = (float)((float10)0.3010299956639812 * fVar1);
  *(float *)(param_1 + 0x78) =
       (float)((float10)0.3010299956639812 * fVar1 - (float10)0.3010299956639812 * fVar3);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040b3d0 @ 0040b3d0

CView * __thiscall FUN_0040b3d0(void *this,byte param_1)

{
  FUN_0040b3f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040b3f0 @ 0040b3f0

void __fastcall FUN_0040b3f0(CView *param_1)

{
  CGdiObject *this;
  CGdiObject *this_00;
  CGdiObject *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0042293e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_FUN_00423a58;
  local_4 = 9;
  FUN_0040dbe0((int)param_1);
  this = (CGdiObject *)(param_1 + 0xec);
  CGdiObject::DeleteObject(this);
  this_00 = (CGdiObject *)(param_1 + 0xf8);
  CGdiObject::DeleteObject(this_00);
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x110));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x104));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x11c));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x128));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x134));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x140));
  pCVar1 = (CGdiObject *)(param_1 + 0x158);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 10;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  pCVar1 = (CGdiObject *)(param_1 + 0x140);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0xb;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  pCVar1 = (CGdiObject *)(param_1 + 0x134);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0xc;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  pCVar1 = (CGdiObject *)(param_1 + 0x128);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0xd;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  pCVar1 = (CGdiObject *)(param_1 + 0x11c);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0xe;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  pCVar1 = (CGdiObject *)(param_1 + 0x110);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0xf;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  pCVar1 = (CGdiObject *)(param_1 + 0x104);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0x10;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_004238a4;
  *(undefined ***)this_00 = &PTR_GetRuntimeClass_00423b7c;
  local_4._0_1_ = 0x11;
  CGdiObject::DeleteObject(this_00);
  *(undefined ***)this_00 = &PTR_GetRuntimeClass_004238a4;
  *(undefined ***)this = &PTR_GetRuntimeClass_00423b7c;
  local_4 = CONCAT31(local_4._1_3_,0x12);
  CGdiObject::DeleteObject(this);
  *(undefined ***)this = &PTR_GetRuntimeClass_004238a4;
  local_4 = 0xffffffff;
  CView::~CView(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_0040b5d0 @ 0040b5d0

void __thiscall FUN_0040b5d0(CView *param_1,tagCREATESTRUCTA *param_2)

{
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x100000;
  CView::PreCreateWindow(param_1,param_2);
  return;
}


// ---- FUN_0040b5f0 @ 0040b5f0

void __thiscall FUN_0040b5f0(void *param_1,CDC *param_2)

{
  LPRECT lprc;
  HGDIOBJ h;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  tagRECT tStack_10;
  
  iVar3 = 1;
  *(undefined4 *)((int)param_1 + 0x50) = 1;
  GetClientRect(*(HWND *)((int)param_1 + 0x20),&tStack_10);
  if (*(int *)(param_2 + 0xc) == 0) {
    lprc = (LPRECT)((int)param_1 + 0x148);
    lprc->left = tStack_10.left;
    *(LONG *)((int)param_1 + 0x14c) = tStack_10.top;
    *(LONG *)((int)param_1 + 0x150) = tStack_10.right;
    *(LONG *)((int)param_1 + 0x154) = tStack_10.bottom;
    iVar1 = (int)((ulonglong)
                  ((longlong)(*(int *)((int)param_1 + 0x154) - *(int *)((int)param_1 + 0x14c)) *
                  -0x66666667) >> 0x20);
    iVar2 = (int)((ulonglong)((longlong)(*(int *)((int)param_1 + 0x150) - lprc->left) * -0x66666667)
                 >> 0x20);
    InflateRect(lprc,(iVar2 >> 3) - (iVar2 >> 0x1f),(iVar1 >> 3) - (iVar1 >> 0x1f));
  }
  iStack_20 = *(int *)((int)param_1 + 0x58);
  iStack_1c = iStack_20 + *(int *)((int)param_1 + 0x44);
  *(int *)((int)param_1 + 0x5c) = iStack_1c;
  if ((*(int *)(param_2 + 0xc) == 0) && (h = GetStockObject(7), h != (HGDIOBJ)0x0)) {
    SelectObject(*(HDC *)(param_2 + 4),h);
  }
  Rectangle(*(HDC *)(param_2 + 4),*(int *)((int)param_1 + 0x148),*(int *)((int)param_1 + 0x14c),
            *(int *)((int)param_1 + 0x150),*(int *)((int)param_1 + 0x154));
  iVar1 = *(int *)((int)param_1 + 0x14c);
  iVar2 = ftol();
  iVar1 = iVar1 - iVar2;
  iVar2 = iVar1;
  CDC::MoveTo(param_2,(int)auStack_18,*(int *)((int)param_1 + 0x148));
  CDC::LineTo(param_2,*(int *)((int)param_1 + 0x150),iVar1);
  iVar2 = ftol(iVar2);
  iVar1 = *(int *)((int)param_1 + 0x14c);
  CDC::MoveTo(param_2,(int)&iStack_1c,*(int *)((int)param_1 + 0x148));
  CDC::LineTo(param_2,*(int *)((int)param_1 + 0x150),iVar1 - iVar2);
  tStack_10.bottom = *(int *)((int)param_1 + 0x5c) - *(int *)((int)param_1 + 0x58);
  *(LONG *)((int)param_1 + 0x60) = tStack_10.bottom;
  tStack_10.bottom =
       tStack_10.bottom / (*(int *)((int)param_1 + 0x150) - *(int *)((int)param_1 + 0x148));
  if (tStack_10.bottom < 1) {
    tStack_10.bottom = 1;
  }
  do {
    iVar1 = ((*(int *)((int)param_1 + 0x150) - *(int *)((int)param_1 + 0x148)) * iVar3) / 5 +
            *(int *)((int)param_1 + 0x148);
    CDC::MoveTo(param_2,(int)&iStack_20,iVar1);
    CDC::LineTo(param_2,iVar1,*(int *)((int)param_1 + 0x14c));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    for (; (unaff_ESI < unaff_EBP && (unaff_ESI <= *(int *)((int)param_1 + 0x4c)));
        unaff_ESI = unaff_ESI + tStack_10.right) {
      if (*(int *)((int)param_1 + 0xd8) != 0) {
        FUN_0040c2e0(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 0xd4) != 0) {
        FUN_0040c1b0(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 0xdc) != 0) {
        FUN_0040c540(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 0xd0) != 0) {
        FUN_0040c080(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 200) != 0) {
        FUN_0040bf50(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 0xcc) != 0) {
        FUN_0040c410(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 0xe0) != 0) {
        FUN_0040c670(param_1,param_2,unaff_ESI);
      }
      if (*(int *)((int)param_1 + 0xe4) != 0) {
        FUN_0040c7a0(param_1,param_2,unaff_ESI);
      }
    }
    *(undefined4 *)((int)param_1 + 0x50) = 0;
  }
  return;
}


// ---- FUN_0040b8c0 @ 0040b8c0

void __thiscall FUN_0040b8c0(CView *param_1,CPrintInfo *param_2)

{
  CView::DoPreparePrinting(param_1,param_2);
  return;
}


// ---- FUN_0040b8d0 @ 0040b8d0

void __fastcall FUN_0040b8d0(int param_1)

{
  HPEN pHVar1;
  
  pHVar1 = CreatePen(0,4,0);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x158),pHVar1);
  return;
}


// ---- FUN_0040b8f0 @ 0040b8f0

void __fastcall FUN_0040b8f0(int param_1)

{
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x158));
  return;
}


// ---- FUN_0040b900 @ 0040b900

void __fastcall FUN_0040b900(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  return;
}


// ---- FUN_0040ba20 @ 0040ba20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040ba20(CWnd *param_1)

{
  int iVar1;
  CString *extraout_ECX;
  CString *this;
  int iVar2;
  int iVar3;
  CWnd *local_10;
  char *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_00422958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  this = extraout_ECX;
  if (*(float *)(param_1 + 0xc4) <= _DAT_00423ba8) {
    this = (CString *)&local_10;
  }
  CString::Format(this,(char *)&local_10);
  CStatusBar::SetPaneText((CStatusBar *)(DAT_00429c98 + 0xf4),0,local_c,1);
  iVar1 = ftol();
  iVar2 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar2 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x5c) = iVar1;
  }
  else {
    iVar3 = (*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 2 - iVar1 / 2;
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) + iVar1;
    if (iVar2 < *(int *)(param_1 + 0x58) + iVar1) {
      iVar2 = iVar2 - iVar1 / 2;
      *(int *)(param_1 + 0x58) = iVar2;
      *(int *)(param_1 + 0x5c) = iVar2 + iVar1;
    }
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58);
  FUN_0040d7d0(param_1);
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return;
}


// ---- FUN_0040bb50 @ 0040bb50

void __fastcall FUN_0040bb50(CWnd *param_1)

{
  int iVar1;
  CWnd *local_10;
  char *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_00422978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)(param_1 + 0x48) = (uint)(*(int *)(param_1 + 0x48) == 0);
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Format((CString *)(*(int *)(*(int *)(param_1 + 0x40) + 0x5c) * 5),(char *)&local_10);
  CStatusBar::SetPaneText((CStatusBar *)(DAT_00429c98 + 0xf4),0,local_c,1);
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x5c) + -1;
    *(int *)(param_1 + 0x4c) = iVar1;
    iVar1 = iVar1 - *(int *)(param_1 + 0x44) / 2;
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x44);
  }
  FUN_0040d7d0(param_1);
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return;
}


// ---- FUN_0040bd60 @ 0040bd60

void __thiscall
FUN_0040bd60(CWnd *param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,CWnd *param_6,
            uint param_7,CCreateContext *param_8)

{
  CWnd::Create(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// ---- FUN_0040bd90 @ 0040bd90

void __fastcall FUN_0040bd90(CView *param_1)

{
  CView::OnInitialUpdate(param_1);
  FUN_0040d950((int)param_1);
  CWnd::SetScrollRange((CWnd *)param_1,0,0,100,0);
  ShowScrollBar(*(HWND *)(param_1 + 0x20),0,1);
  CWnd::EnableScrollBarCtrl((CWnd *)param_1,0,0);
  return;
}


// ---- FUN_0040bdd0 @ 0040bdd0

void __fastcall FUN_0040bdd0(CWnd *param_1)

{
  int iVar1;
  CClientDC local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422998;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x5c) + -1;
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar1) {
      iVar1 = iVar1 - *(int *)(param_1 + 0x44) / 2;
      *(int *)(param_1 + 0x58) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x44);
      InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
      ExceptionList = local_c;
      return;
    }
    CClientDC::CClientDC(local_20,param_1);
    local_4 = 0;
    if (*(int *)(param_1 + 0xd8) != 0) {
      FUN_0040c2e0(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_0040c1b0(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      FUN_0040c540(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_0040c080(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 200) != 0) {
      FUN_0040bf50(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0xcc) != 0) {
      FUN_0040c410(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_0040c670(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_0040c7a0(param_1,(CDC *)local_20,*(int *)(param_1 + 0x4c));
    }
    local_4 = 0xffffffff;
    CClientDC::~CClientDC(local_20);
  }
  ExceptionList = local_c;
  return;
}


// ---- FUN_0040bf50 @ 0040bf50

void __thiscall FUN_0040bf50(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(undefined4 *)(iVar1 + 0xc);
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0xec));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a8e0);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a8e0 = iVar2;
  DAT_0042a8e4 = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c080 @ 0040c080

void __thiscall FUN_0040c080(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(undefined4 *)(iVar1 + 8);
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x104));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a8e8);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a8e8 = iVar2;
  DAT_0042a8ec = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c1b0 @ 0040c1b0

void __thiscall FUN_0040c1b0(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(undefined4 *)(iVar1 + 0x18);
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x110));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a8f0);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a8f0 = iVar2;
  DAT_0042a8f4 = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c2e0 @ 0040c2e0

void __thiscall FUN_0040c2e0(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(undefined4 *)(iVar1 + 0x14);
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x11c));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a8f8);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a8f8 = iVar2;
  DAT_0042a8fc = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c410 @ 0040c410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040c410(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  float local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(float *)(iVar1 + 0x10) * _DAT_004238b8;
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0xf8));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a900);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a900 = iVar2;
  DAT_0042a904 = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c540 @ 0040c540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040c540(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  float local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(float *)(iVar1 + 0x1c) * _DAT_004238bc;
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x128));
  }
  log2((float10)local_30[0]);
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a908);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a908 = iVar2;
  DAT_0042a90c = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c670 @ 0040c670

void __thiscall FUN_0040c670(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(undefined4 *)(iVar1 + 0x20);
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x134));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a910);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a910 = iVar2;
  DAT_0042a914 = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c7a0 @ 0040c7a0

void __thiscall FUN_0040c7a0(void *this,CDC *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CPen *local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  iVar2 = 0;
  iVar1 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_28,param_2);
  local_30[0] = *(undefined4 *)(iVar1 + 0x24);
  FUN_004213c0(local_28);
  if (*(int *)((int)this + 0x60) != 0) {
    local_38 = (CPen *)(param_2 - *(int *)((int)this + 0x58));
    iVar2 = ftol();
    iVar2 = iVar2 + *(int *)((int)this + 0x148);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x140));
  }
  iVar1 = ftol();
  iVar1 = *(int *)((int)this + 0x154) - iVar1;
  if (param_2 == *(int *)((int)this + 0x58)) {
    CDC::MoveTo(param_1,(int)local_30,iVar2);
  }
  else {
    CDC::MoveTo(param_1,(int)local_30,DAT_0042a918);
    CDC::LineTo(param_1,iVar2,iVar1);
  }
  DAT_0042a918 = iVar2;
  DAT_0042a91c = iVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    CDC::SelectObject(param_1,local_38);
  }
  return;
}


// ---- FUN_0040c8d0 @ 0040c8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040c8d0(void *this,undefined4 param_1,int param_2,int param_3)

{
  RECT *lprc;
  byte bVar1;
  POINT pt;
  BOOL BVar2;
  HCURSOR pHVar3;
  COLORREF CVar4;
  int iVar5;
  CString *pCVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  CString *this_00;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  char *pcVar12;
  byte *local_70;
  CString *local_6c;
  CString *local_68;
  CString *local_64;
  CString local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  CClientDC local_54 [4];
  CClientDC local_50 [4];
  HDC local_4c;
  undefined4 local_40;
  undefined4 local_3c [9];
  void *local_18;
  void *pvStack_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10._0_1_ = 0x10;
  local_10._1_3_ = 0x422a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  CClientDC::CClientDC(local_50,this);
  local_c = 0;
  CString::CString((CString *)&local_6c,s_Ready_00429a08);
  local_c._0_1_ = 1;
  CString::CString((CString *)&local_68,&DAT_0042a11c);
  local_c = CONCAT31(local_c._1_3_,2);
  if ((DAT_0042a500 & 1) == 0) {
    DAT_0042a500 = DAT_0042a500 | 1;
    DAT_0042a4fc = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f03);
  }
  lprc = (RECT *)((int)this + 0x148);
  pt.y = param_3;
  pt.x = param_2;
  BVar2 = PtInRect(lprc,pt);
  if (BVar2 == 0) {
    pcVar12 = s_Ready_00429a08;
LAB_0040ce20:
    CString::operator=((CString *)&local_6c,pcVar12);
  }
  else {
    pHVar3 = GetCursor();
    if (pHVar3 != DAT_0042a4fc) {
      SetCursor(DAT_0042a4fc);
    }
    CVar4 = GetPixel(local_4c,param_2,param_3);
    iVar10 = ((param_2 - lprc->left) * *(int *)((int)this + 0x60)) /
             (*(int *)((int)this + 0x150) - lprc->left) + *(int *)((int)this + 0x58);
    if ((iVar10 < 1) || (*(int *)(*(int *)((int)this + 0x40) + 0x5c) + -1 <= iVar10))
    goto LAB_0040ce29;
    iVar5 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),local_3c,iVar10);
    local_5c = *(undefined4 *)(iVar5 + 4);
    FUN_004213c0(local_3c);
    pCVar6 = (CString *)CTime::Format((CTime *)&local_5c,(char *)local_60);
    local_10._0_1_ = 3;
    CString::operator=((CString *)&local_6c,pCVar6);
    local_10._0_1_ = 2;
    CString::~CString((CString *)&local_64);
    if (CVar4 == *(COLORREF *)((int)this + 0xe8)) {
      iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
      local_64 = *(CString **)(iVar10 + 0xc);
      FUN_004213c0(&local_40);
      CString::Format((CString *)&local_70,(char *)&local_70);
      goto LAB_0040ce29;
    }
    if (CVar4 == *(COLORREF *)((int)this + 0xf4)) {
      iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
      local_64 = *(CString **)(iVar10 + 0x10);
      FUN_004213c0(&local_40);
    }
    else {
      if (CVar4 == *(COLORREF *)((int)this + 0x100)) {
        iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
        local_64 = *(CString **)(iVar10 + 8);
        FUN_004213c0(&local_40);
        CString::Format(this_00,(char *)&local_70);
        goto LAB_0040ce29;
      }
      if (CVar4 == *(COLORREF *)((int)this + 0x10c)) {
        iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
        local_64 = *(CString **)(iVar10 + 0x18);
        FUN_004213c0(&local_40);
        CString::Format((CString *)&local_70,(char *)&local_70);
        goto LAB_0040ce29;
      }
      if (CVar4 == *(COLORREF *)((int)this + 0x118)) {
        iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
        local_64 = *(CString **)(iVar10 + 0x14);
        FUN_004213c0(&local_40);
      }
      else {
        if (CVar4 != *(COLORREF *)((int)this + 0x124)) {
          if (CVar4 == *(COLORREF *)((int)this + 0x130)) {
            iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
            local_58 = *(undefined4 *)(iVar10 + 0x20);
            FUN_004213c0(&local_40);
            iVar10 = *(int *)(DAT_00429c98 + 0xec);
            CString::CString((CString *)&local_64,&DAT_0042a11c);
            local_10._0_1_ = 4;
            CString::CString((CString *)&local_68,&DAT_0042a11c);
            local_10._0_1_ = 5;
            if (iVar10 != 0) {
              pCVar6 = FUN_004215e0(DAT_00429d3c,(CString *)&local_5c,iVar10);
              local_10._0_1_ = 6;
              CString::operator=((CString *)&local_64,pCVar6);
              local_10._0_1_ = 5;
              CString::~CString((CString *)&local_5c);
              pCVar6 = FUN_00421510(DAT_00429d3c,(CString *)&local_5c,iVar10);
              local_10._0_1_ = 7;
              CString::operator=((CString *)&local_68,pCVar6);
              local_10._0_1_ = 5;
              CString::~CString((CString *)&local_5c);
              CString::Format(local_64,(char *)&local_70);
            }
            local_c._0_1_ = 4;
            CString::~CString((CString *)&local_64);
            local_c = CONCAT31(local_c._1_3_,2);
            CString::~CString(local_60);
            goto LAB_0040ce29;
          }
          if (CVar4 == *(COLORREF *)((int)this + 0x13c)) {
            iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
            local_5c = *(undefined4 *)(iVar10 + 0x24);
            FUN_004213c0(&local_40);
            iVar10 = *(int *)(DAT_00429c98 + 0xf0);
            CString::CString((CString *)&local_68,&DAT_0042a11c);
            local_10._0_1_ = 8;
            CString::CString((CString *)&local_64,&DAT_0042a11c);
            local_10._0_1_ = 9;
            if (iVar10 != 0) {
              pCVar6 = FUN_004215e0(DAT_00429d3c,(CString *)&local_58,iVar10);
              local_10._0_1_ = 10;
              CString::operator=((CString *)&local_68,pCVar6);
              local_10._0_1_ = 9;
              CString::~CString((CString *)&local_58);
              pCVar6 = FUN_00421510(DAT_00429d3c,(CString *)&local_58,iVar10);
              local_10._0_1_ = 0xb;
              CString::operator=((CString *)&local_64,pCVar6);
              local_10._0_1_ = 9;
              CString::~CString((CString *)&local_58);
              CString::Format(local_68,(char *)&local_70);
            }
            local_c._0_1_ = 8;
            CString::~CString(local_60);
            local_c = CONCAT31(local_c._1_3_,2);
            CString::~CString((CString *)&local_64);
            goto LAB_0040ce29;
          }
          if (CVar4 == 0) {
            CString::operator=((CString *)&local_70,(CString *)&local_6c);
            goto LAB_0040ce29;
          }
          pcVar12 = s_Move_the_pointer_over_a_trace_to_00429920;
          goto LAB_0040ce20;
        }
        iVar10 = FUN_0040de00((void *)(*(int *)((int)this + 0x40) + 0x54),&local_40,iVar10);
        local_64 = (CString *)(*(float *)(iVar10 + 0x1c) * _DAT_004238bc);
        FUN_004213c0(&local_40);
      }
    }
    CString::Format(local_6c,(char *)&local_70);
  }
LAB_0040ce29:
  puVar7 = (undefined4 *)CStatusBar::GetPaneText((CStatusBar *)(DAT_00429c98 + 0xf4),(int)local_54);
  pbVar8 = (byte *)*puVar7;
  pbVar9 = local_70;
  do {
    bVar1 = *pbVar8;
    bVar11 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_0040ce6f:
      iVar10 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0040ce74;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar11 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_0040ce6f;
    pbVar8 = pbVar8 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar10 = 0;
LAB_0040ce74:
  CString::~CString((CString *)&local_58);
  if (iVar10 != 0) {
    CStatusBar::SetPaneText((CStatusBar *)(DAT_00429c98 + 0xf4),0,(char *)local_70,1);
  }
  local_10._0_1_ = 1;
  CString::~CString((CString *)&local_6c);
  local_10 = (uint)local_10._1_3_ << 8;
  CString::~CString((CString *)&local_70);
  local_10 = 0xffffffff;
  CClientDC::~CClientDC(local_54);
  ExceptionList = local_18;
  return;
}


// ---- FUN_0040cef0 @ 0040cef0

CGdiObject * __thiscall FUN_0040cef0(void *this,byte param_1)

{
  FUN_0040cf10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040cf10 @ 0040cf10

void __fastcall FUN_0040cf10(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00422a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_00423b7c;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_004238a4;
  ExceptionList = local_c;
  return;
}


// ---- FUN_0040cf60 @ 0040cf60

CGdiObject * __thiscall FUN_0040cf60(void *this,byte param_1)

{
  FUN_0040cf80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040cf80 @ 0040cf80

void __fastcall FUN_0040cf80(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00422a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_00423b7c;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_004238a4;
  ExceptionList = local_c;
  return;
}


// ---- FUN_0040cfd0 @ 0040cfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040cfd0(int param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  HPEN pHVar4;
  float10 fVar5;
  CDialog local_37c [104];
  CButton aCStack_314 [64];
  undefined4 local_2d4;
  CButton aCStack_2d0 [64];
  undefined4 local_290;
  CComboBox aCStack_28c [64];
  CComboBox aCStack_24c [64];
  CButton aCStack_20c [64];
  undefined4 local_1cc;
  CButton aCStack_1c8 [64];
  undefined4 local_188;
  CButton aCStack_184 [64];
  undefined4 local_144;
  CButton aCStack_140 [64];
  undefined4 local_100;
  CButton aCStack_fc [64];
  undefined4 local_bc;
  CButton local_b8 [64];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CString local_14 [4];
  CString local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422aec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0041d410(local_37c,(CWnd *)0x0);
  local_70 = *(undefined4 *)(param_1 + 200);
  local_6c = *(undefined4 *)(param_1 + 0xcc);
  local_68 = *(undefined4 *)(param_1 + 0xd0);
  local_64 = *(undefined4 *)(param_1 + 0xd8);
  local_60 = *(undefined4 *)(param_1 + 0xdc);
  local_74 = *(undefined4 *)(param_1 + 0xd4);
  local_1c = *(undefined4 *)(param_1 + 0xe0);
  local_18 = *(undefined4 *)(param_1 + 0xe4);
  local_4 = 0;
  local_4c = ftol();
  local_48 = ftol();
  local_54 = ftol();
  local_50 = ftol();
  local_5c = ftol();
  local_58 = ftol();
  local_44 = ftol();
  local_40 = ftol();
  local_3c = ftol();
  local_38 = ftol();
  fVar5 = (float10)_CIpow();
  local_34 = (float)fVar5;
  fVar5 = (float10)_CIpow();
  local_2c = *(float *)(param_1 + 0xbc);
  local_28 = *(float *)(param_1 + 0x9c);
  local_24 = *(float *)(param_1 + 0xc0);
  local_20 = *(float *)(param_1 + 0xa0);
  local_78 = *(undefined4 *)(param_1 + 0x10c);
  local_bc = *(undefined4 *)(param_1 + 0xe8);
  local_100 = *(undefined4 *)(param_1 + 0xf4);
  local_30 = (float)fVar5;
  local_144 = *(undefined4 *)(param_1 + 0x100);
  local_188 = *(undefined4 *)(param_1 + 0x118);
  local_1cc = *(undefined4 *)(param_1 + 0x124);
  local_2d4 = *(undefined4 *)(param_1 + 0x13c);
  local_290 = *(undefined4 *)(param_1 + 0x130);
  CDialog::DoModal(local_37c);
  *(undefined4 *)(param_1 + 200) = local_70;
  *(undefined4 *)(param_1 + 0xcc) = local_6c;
  *(undefined4 *)(param_1 + 0xd0) = local_68;
  *(undefined4 *)(param_1 + 0xd8) = local_64;
  *(undefined4 *)(param_1 + 0xdc) = local_60;
  *(undefined4 *)(param_1 + 0xd4) = local_74;
  *(undefined4 *)(param_1 + 0xe0) = local_1c;
  *(undefined4 *)(param_1 + 0xe4) = local_18;
  *(float *)(param_1 + 0xa4) = (float)local_4c;
  *(float *)(param_1 + 0xbc) = local_2c;
  *(float *)(param_1 + 0x84) = (float)local_48;
  *(float *)(param_1 + 0x9c) = local_28;
  *(float *)(param_1 + 0xc0) = local_24;
  *(float *)(param_1 + 0xa0) = local_20;
  *(float *)(param_1 + 0xb4) = (float)local_54;
  *(float *)(param_1 + 0x94) = (float)local_50;
  *(float *)(param_1 + 0xac) = (float)local_5c;
  *(float *)(param_1 + 0x8c) = (float)local_58;
  fVar2 = (float)local_44 * _DAT_00423bb0;
  *(float *)(param_1 + 0xa8) = fVar2;
  fVar3 = (float)local_40 * _DAT_00423bb0;
  *(float *)(param_1 + 0x88) = fVar3;
  *(float *)(param_1 + 0xb0) = (float)local_3c;
  *(float *)(param_1 + 0x90) = (float)local_38;
  fVar5 = (float10)log2((float10)local_34);
  *(float *)(param_1 + 0xb8) = (float)((float10)0.3010299956639812 * fVar5);
  fVar1 = (float10)log2((float10)local_30);
  *(float *)(param_1 + 0x98) = (float)((float10)0.3010299956639812 * fVar1);
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0xa4) - (float)local_48;
  *(undefined4 *)(param_1 + 0x10c) = local_78;
  *(undefined4 *)(param_1 + 0xe8) = local_bc;
  *(float *)(param_1 + 0x74) = (float)local_54 - (float)local_50;
  *(undefined4 *)(param_1 + 0xf4) = local_100;
  *(undefined4 *)(param_1 + 0x100) = local_144;
  *(undefined4 *)(param_1 + 0x118) = local_188;
  *(float *)(param_1 + 0x6c) = (float)local_5c - (float)local_58;
  *(undefined4 *)(param_1 + 0x124) = local_1cc;
  *(undefined4 *)(param_1 + 0x130) = local_290;
  *(undefined4 *)(param_1 + 0x13c) = local_2d4;
  *(float *)(param_1 + 0x68) = fVar2 - fVar3;
  *(float *)(param_1 + 0x70) = (float)local_3c - (float)local_38;
  *(float *)(param_1 + 0x78) =
       (float)((float10)0.3010299956639812 * fVar5) - (float)((float10)0.3010299956639812 * fVar1);
  *(float *)(param_1 + 0x7c) = local_2c - local_28;
  *(float *)(param_1 + 0x80) = local_24 - local_20;
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0xec));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0xf8));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x110));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x104));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x11c));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x128));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x134));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x140));
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0xe8));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0xec),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0xf4));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0xf8),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0x10c));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x110),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0x100));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x104),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0x118));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x11c),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0x124));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x128),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0x130));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x134),pHVar4);
  pHVar4 = CreatePen(0,2,*(COLORREF *)(param_1 + 0x13c));
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x140),pHVar4);
  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  local_4 = 0xc;
  CString::~CString(local_10);
  local_4._0_1_ = 0xb;
  CString::~CString(local_14);
  local_4._0_1_ = 10;
  FUN_0041a460(local_b8);
  local_4._0_1_ = 9;
  FUN_0041a460(aCStack_fc);
  local_4._0_1_ = 8;
  FUN_0041a460(aCStack_140);
  local_4._0_1_ = 7;
  FUN_0041a460(aCStack_184);
  local_4._0_1_ = 6;
  FUN_0041a460(aCStack_1c8);
  local_4._0_1_ = 5;
  FUN_0041a460(aCStack_20c);
  local_4._0_1_ = 4;
  CComboBox::~CComboBox(aCStack_24c);
  local_4._0_1_ = 3;
  CComboBox::~CComboBox(aCStack_28c);
  local_4._0_1_ = 2;
  FUN_0041a460(aCStack_2d0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0041a460(aCStack_314);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_37c);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040d6a0 @ 0040d6a0

void __fastcall FUN_0040d6a0(CDialog *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00422b9f;
  pvStack_c = ExceptionList;
  local_4 = 0xb;
  ExceptionList = &pvStack_c;
  CString::~CString((CString *)(param_1 + 0x36c));
  local_4._0_1_ = 10;
  CString::~CString((CString *)(param_1 + 0x368));
  local_4._0_1_ = 9;
  FUN_0041a460((CButton *)(param_1 + 0x2c4));
  local_4._0_1_ = 8;
  FUN_0041a460((CButton *)(param_1 + 0x280));
  local_4._0_1_ = 7;
  FUN_0041a460((CButton *)(param_1 + 0x23c));
  local_4._0_1_ = 6;
  FUN_0041a460((CButton *)(param_1 + 0x1f8));
  local_4._0_1_ = 5;
  FUN_0041a460((CButton *)(param_1 + 0x1b4));
  local_4._0_1_ = 4;
  FUN_0041a460((CButton *)(param_1 + 0x170));
  local_4._0_1_ = 3;
  CComboBox::~CComboBox((CComboBox *)(param_1 + 0x130));
  local_4._0_1_ = 2;
  CComboBox::~CComboBox((CComboBox *)(param_1 + 0xf0));
  local_4._0_1_ = 1;
  FUN_0041a460((CButton *)(param_1 + 0xac));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0041a460((CButton *)(param_1 + 0x68));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040d7a0 @ 0040d7a0

void __fastcall FUN_0040d7a0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 100;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 100;
  *(undefined4 *)(param_1 + 0x60) = 100;
  return;
}


// ---- FUN_0040d7d0 @ 0040d7d0

void __fastcall FUN_0040d7d0(CWnd *param_1)

{
  if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x44))) {
    CWnd::EnableScrollBarCtrl(param_1,0,0);
  }
  else {
    CWnd::EnableScrollBarCtrl(param_1,0,1);
    CWnd::SetScrollPos(param_1,0,
                       (*(int *)(param_1 + 0x58) * 100) /
                       (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)),1);
  }
  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  FUN_0040bdd0(param_1);
  return;
}


// ---- FUN_0040d840 @ 0040d840

void __thiscall FUN_0040d840(CView *param_1,CDC *param_2,CPrintInfo *param_3)

{
  LPRECT lprc;
  LONG LVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CPen *pCVar5;
  int iVar6;
  int iVar7;
  
  lprc = (LPRECT)(param_1 + 0x148);
  LVar1 = lprc->left;
  uVar2 = *(undefined4 *)(param_1 + 0x14c);
  uVar3 = *(undefined4 *)(param_1 + 0x150);
  uVar4 = *(undefined4 *)(param_1 + 0x154);
  lprc->left = *(LONG *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_3 + 0x30);
  iVar6 = (int)((ulonglong)
                ((longlong)(*(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x14c)) * -0x66666667) >>
               0x20);
  iVar7 = (int)((ulonglong)((longlong)(*(int *)(param_1 + 0x150) - lprc->left) * -0x66666667) >>
               0x20);
  InflateRect(lprc,(iVar7 >> 2) - (iVar7 >> 0x1f),(iVar6 >> 2) - (iVar6 >> 0x1f));
  pCVar5 = CDC::SelectObject(param_2,(CPen *)(param_1 + 0x158));
  CView::OnPrint(param_1,param_2,param_3);
  CDC::SelectObject(param_2,pCVar5);
  lprc->left = LVar1;
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  *(undefined4 *)(param_1 + 0x154) = uVar4;
  return;
}


// ---- FUN_0040d910 @ 0040d910

void __fastcall FUN_0040d910(CWnd *param_1)

{
  FUN_0040d7a0((int)param_1);
  CWnd::SetScrollRange(param_1,0,0,100,0);
  return;
}


// ---- FUN_0040d930 @ 0040d930

void __fastcall FUN_0040d930(CWnd *param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x40) + 0x5c) + -1;
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_0040bb50(param_1);
    return;
  }
  FUN_0040d7d0(param_1);
  return;
}


// ---- FUN_0040d950 @ 0040d950

void __fastcall FUN_0040d950(int param_1)

{
  uint uVar1;
  
  uVar1 = CWinApp::GetProfileIntA((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_IDUser1_00429ab4,0)
  ;
  if (uVar1 != 0) {
    *(uint *)(DAT_00429c98 + 0xec) = uVar1;
    uVar1 = CWinApp::GetProfileIntA
                      ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_User1_00429aa0,
                       *(int *)(param_1 + 0xe0));
    *(uint *)(param_1 + 0xe0) = uVar1;
  }
  uVar1 = CWinApp::GetProfileIntA((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_IDUser2_00429a98,0)
  ;
  if (uVar1 != 0) {
    *(uint *)(DAT_00429c98 + 0xf0) = uVar1;
    uVar1 = CWinApp::GetProfileIntA
                      ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_User2_00429a90,
                       *(int *)(param_1 + 0xe4));
    *(uint *)(param_1 + 0xe4) = uVar1;
  }
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_Interval_00429a84,5);
  *(uint *)(DAT_00429c98 + 0xcc) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbExt_00429a7c,
                     *(int *)(param_1 + 0xe8));
  *(uint *)(param_1 + 0xe8) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbExt_i_00429a70,
                     *(int *)(param_1 + 0xf4));
  *(uint *)(param_1 + 0xf4) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbFil_00429a68,
                     *(int *)(param_1 + 0x100));
  *(uint *)(param_1 + 0x100) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbEht_00429a60,
                     *(int *)(param_1 + 0x10c));
  *(uint *)(param_1 + 0x10c) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbLiner_00429a54,
                     *(int *)(param_1 + 0x118));
  *(uint *)(param_1 + 0x118) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbGunVac_00429a48,
                     *(int *)(param_1 + 0x124));
  *(uint *)(param_1 + 0x124) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbUser1_00429a3c,
                     *(int *)(param_1 + 0x130));
  *(uint *)(param_1 + 0x130) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbUser2_00429a30,
                     *(int *)(param_1 + 0x13c));
  *(uint *)(param_1 + 0x13c) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a2c,
                     *(int *)(param_1 + 200));
  *(uint *)(param_1 + 200) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a24,
                     *(int *)(param_1 + 0xcc));
  *(uint *)(param_1 + 0xcc) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a20,
                     *(int *)(param_1 + 0xd0));
  *(uint *)(param_1 + 0xd0) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a1c,
                     *(int *)(param_1 + 0xd4));
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_Liner_00429a14,
                     *(int *)(param_1 + 0xd8));
  *(uint *)(param_1 + 0xd8) = uVar1;
  uVar1 = CWinApp::GetProfileIntA
                    ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a10,
                     *(int *)(param_1 + 0xdc));
  *(uint *)(param_1 + 0xdc) = uVar1;
  return;
}


// ---- FUN_0040dbe0 @ 0040dbe0

void __fastcall FUN_0040dbe0(int param_1)

{
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_IDUser1_00429ab4,
             *(int *)(DAT_00429c98 + 0xec));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_IDUser2_00429a98,
             *(int *)(DAT_00429c98 + 0xf0));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_Interval_00429a84,
             *(int *)(DAT_00429c98 + 0xcc));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbExt_00429a7c,*(int *)(param_1 + 0xe8)
            );
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbExt_i_00429a70,
             *(int *)(param_1 + 0xf4));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbFil_00429a68,
             *(int *)(param_1 + 0x100));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbEht_00429a60,
             *(int *)(param_1 + 0x10c));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbLiner_00429a54,
             *(int *)(param_1 + 0x118));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbGunVac_00429a48,
             *(int *)(param_1 + 0x124));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbUser1_00429a3c,
             *(int *)(param_1 + 0x130));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_rgbUser2_00429a30,
             *(int *)(param_1 + 0x13c));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a2c,*(int *)(param_1 + 200));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a24,*(int *)(param_1 + 0xcc));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a20,*(int *)(param_1 + 0xd0));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a1c,*(int *)(param_1 + 0xd4));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_Liner_00429a14,*(int *)(param_1 + 0xd8))
  ;
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,&DAT_00429a10,*(int *)(param_1 + 0xdc));
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_User1_00429aa0,*(int *)(param_1 + 0xe0))
  ;
  CWinApp::WriteProfileInt
            ((CWinApp *)&DAT_00429c78,s_Settings_00429aa8,s_User2_00429a90,*(int *)(param_1 + 0xe4))
  ;
  return;
}


// ---- FUN_0040de00 @ 0040de00

void __thiscall FUN_0040de00(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4) + param_2 * 0x28;
  *param_1 = &PTR_FUN_00423bc0;
  param_1[6] = *(undefined4 *)(iVar1 + 0x18);
  param_1[3] = *(undefined4 *)(iVar1 + 0xc);
  param_1[4] = *(undefined4 *)(iVar1 + 0x10);
  param_1[2] = *(undefined4 *)(iVar1 + 8);
  param_1[7] = *(undefined4 *)(iVar1 + 0x1c);
  param_1[5] = *(undefined4 *)(iVar1 + 0x14);
  param_1[1] = *(undefined4 *)(iVar1 + 4);
  param_1[8] = *(undefined4 *)(iVar1 + 0x20);
  param_1[9] = *(undefined4 *)(iVar1 + 0x24);
  return;
}


// ---- FUN_0040de60 @ 0040de60

undefined4 * __thiscall FUN_0040de60(void *this,byte param_1)

{
  FUN_004213c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00410cd0 @ 00410cd0

undefined4 FUN_00410cd0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422bba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x28);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_00410d60(puVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_00410d30 @ 00410d30

undefined ** FUN_00410d30(void)

{
  return &PTR_s_CGunData_00429ac0;
}


// ---- FUN_00410d60 @ 00410d60

void __fastcall FUN_00410d60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00423bc0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


// ---- FUN_00410d90 @ 00410d90

void __thiscall FUN_00410d90(int param_1,CArchive *param_2)

{
  int iVar1;
  CArchive *pCVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((~*(uint *)(param_2 + 0x14) & 1) != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar6 = uVar4;
    FUN_00407c70(&stack0xffffffd4,(undefined4 *)(param_1 + 4));
    pCVar2 = operator<<();
    pCVar2 = FUN_00410f90(pCVar2,param_2);
    pCVar2 = FUN_00410f90(pCVar2,uVar4);
    pCVar2 = FUN_00410f90(pCVar2,uVar5);
    pCVar2 = FUN_00410f90(pCVar2,uVar6);
    pCVar2 = FUN_00410f90(pCVar2,uVar7);
    pCVar2 = FUN_00410f90(pCVar2,uVar8);
    pCVar2 = FUN_00410f90(pCVar2,uVar9);
    if (*(uint *)(pCVar2 + 0x28) < *(int *)(pCVar2 + 0x24) + 4U) {
      CArchive::Flush(pCVar2);
    }
    **(undefined4 **)(pCVar2 + 0x24) = unaff_EBX;
    *(int *)(pCVar2 + 0x24) = *(int *)(pCVar2 + 0x24) + 4;
    return;
  }
  pCVar2 = operator>>(param_2,(CTime *)(param_1 + 4));
  if (*(uint *)(pCVar2 + 0x28) < *(int *)(pCVar2 + 0x24) + 4U) {
    CArchive::FillBuffer(pCVar2,(*(int *)(pCVar2 + 0x24) - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 8) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0x14) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0x18) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0x1c) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(pCVar2 + 0x24);
  iVar1 = *(int *)(pCVar2 + 0x24);
  iVar3 = iVar1 + 4;
  *(int *)(pCVar2 + 0x24) = iVar3;
  if (*(uint *)(pCVar2 + 0x28) < iVar1 + 8U) {
    CArchive::FillBuffer(pCVar2,(iVar3 - *(uint *)(pCVar2 + 0x28)) + 4);
  }
  *(undefined4 *)(param_1 + 0x24) = **(undefined4 **)(pCVar2 + 0x24);
  *(int *)(pCVar2 + 0x24) = *(int *)(pCVar2 + 0x24) + 4;
  return;
}


// ---- FUN_00410f90 @ 00410f90

CArchive * __thiscall FUN_00410f90(void *this,undefined4 param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 4U) {
    CArchive::Flush(this);
  }
  **(undefined4 **)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 4;
  return this;
}


// ---- FUN_00413e10 @ 00413e10

CFrameWnd * FUN_00413e10(void)

{
  CFrameWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422bda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x214);
  local_4 = 0;
  if (pCVar1 != (CFrameWnd *)0x0) {
    pCVar1 = FUN_00413eb0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CFrameWnd *)0x0;
}


// ---- FUN_00413e80 @ 00413e80

undefined ** FUN_00413e80(void)

{
  return &PTR_s_CMainFrame_00423bd8;
}


// ---- FUN_00413ea0 @ 00413ea0

undefined ** FUN_00413ea0(void)

{
  return &PTR_LAB_00423bf0;
}


// ---- FUN_00413eb0 @ 00413eb0

CFrameWnd * __fastcall FUN_00413eb0(CFrameWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422c06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CFrameWnd::CFrameWnd(param_1);
  local_4 = 0;
  CStatusBar::CStatusBar((CStatusBar *)(param_1 + 0xf4));
  local_4 = CONCAT31(local_4._1_3_,1);
  CToolBar::CToolBar((CToolBar *)(param_1 + 0x174));
  *(undefined ***)param_1 = &PTR_FUN_00423ce8;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 5;
  *(undefined4 *)(param_1 + 0xd0) = DAT_00429d3c;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00413f40 @ 00413f40

CFrameWnd * __thiscall FUN_00413f40(void *this,byte param_1)

{
  FUN_00413f60(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00413f60 @ 00413f60

void __fastcall FUN_00413f60(CFrameWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00422c26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_FUN_00423ce8;
  local_4 = 1;
  CToolBar::~CToolBar((CToolBar *)(param_1 + 0x174));
  local_4 = local_4 & 0xffffff00;
  CStatusBar::~CStatusBar((CStatusBar *)(param_1 + 0xf4));
  local_4 = 0xffffffff;
  CFrameWnd::~CFrameWnd(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_004141c0 @ 004141c0

void __thiscall FUN_004141c0(CFrameWnd *param_1,tagCREATESTRUCTA *param_2)

{
  CFrameWnd::PreCreateWindow(param_1,param_2);
  return;
}


// ---- FUN_004141d0 @ 004141d0

void __fastcall FUN_004141d0(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  UINT_PTR UVar3;
  void *this;
  undefined4 *puVar4;
  undefined3 extraout_var;
  
  UVar3 = SetTimer((HWND)param_1[8],1,param_1[0x33] * 1000,(TIMERPROC)0x0);
  param_1[0x32] = UVar3;
  if (UVar3 != 0) {
    param_1[0x30] = 1;
    this = (void *)(**(code **)(*param_1 + 0xc4))();
    puVar4 = (undefined4 *)CTime::GetTickCount();
    uVar1 = *puVar4;
    if (this != (void *)0x0) {
      bVar2 = FUN_00414250((void *)((int)this + 0x68),0);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        FUN_004077c0(this,uVar1);
      }
    }
  }
  return;
}


// ---- FUN_00414250 @ 00414250

bool __thiscall FUN_00414250(void *this,int param_1)

{
  return *(int *)this == param_1;
}


// ---- FUN_004142a0 @ 004142a0

void __fastcall FUN_004142a0(int param_1)

{
  BOOL BVar1;
  
  BVar1 = KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 200));
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}


// ---- FUN_00414310 @ 00414310

void __fastcall FUN_00414310(int *param_1)

{
  CDialog local_b0 [96];
  CSpinButtonCtrl local_50 [64];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422c46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00417440(local_b0,(CWnd *)0x0);
  local_10 = param_1[0x33];
  local_4 = 0;
  CDialog::DoModal(local_b0);
  param_1[0x33] = local_10;
  if (param_1[0x30] != 0) {
    FUN_004142a0((int)param_1);
    FUN_004141d0(param_1);
  }
  local_4 = 1;
  CSpinButtonCtrl::~CSpinButtonCtrl(local_50);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_b0);
  ExceptionList = local_c;
  return;
}


// ---- FUN_004143c0 @ 004143c0

void __fastcall FUN_004143c0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00422c58;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CSpinButtonCtrl::~CSpinButtonCtrl((CSpinButtonCtrl *)(param_1 + 0x60));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_00414410 @ 00414410

void __fastcall FUN_00414410(CFrameWnd *param_1)

{
  undefined4 *puVar1;
  void *this;
  CView *pCVar2;
  float10 fVar3;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422c78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00410d60(&local_34);
  local_4 = 0;
  puVar1 = (undefined4 *)CTime::GetTickCount();
  local_34 = *puVar1;
  fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
  local_2c = (float)fVar3;
  fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  local_28 = (float)fVar3;
  fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xdc));
  local_30 = (float)fVar3;
  fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xe0));
  local_1c = (float)fVar3;
  fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xe4));
  local_24 = (float)fVar3;
  fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xe8));
  local_20 = (float)fVar3;
  if (*(int *)(param_1 + 0xec) == 0) {
    local_18 = 0.0;
  }
  else {
    fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(int *)(param_1 + 0xec));
    local_18 = (float)fVar3;
    fVar3 = FUN_004217d0(*(int *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xec),local_18);
    local_18 = (float)fVar3;
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    local_14 = 0.0;
  }
  else {
    fVar3 = FUN_004216b0(*(void **)(param_1 + 0xd0),*(int *)(param_1 + 0xf0));
    local_14 = (float)fVar3;
    fVar3 = FUN_004217d0(*(int *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xf0),local_14);
    local_14 = (float)fVar3;
  }
  this = (void *)(**(code **)(*(int *)param_1 + 0xc4))();
  if (this != (void *)0x0) {
    FUN_004076e0(this,(int)&local_38);
  }
  pCVar2 = CFrameWnd::GetActiveView(param_1);
  if (pCVar2 != (CView *)0x0) {
    FUN_0040bdd0((CWnd *)pCVar2);
  }
  CWnd::Default((CWnd *)param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004213c0(&local_38);
  ExceptionList = pvStack_10;
  return;
}


// ---- FUN_004145b0 @ 004145b0

void __thiscall FUN_004145b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc4) = param_1;
  return;
}


// ---- FUN_004145c0 @ 004145c0

undefined4 __fastcall FUN_004145c0(int param_1)

{
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_004142a0(param_1);
  }
  SendMessageA(*(HWND *)(param_1 + 0x20),0x112,0xf060,0);
  return 0;
}


// ---- FUN_00417440 @ 00417440

CDialog * __thiscall FUN_00417440(void *this,CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0x83,param_1);
  local_4 = 0;
  CWnd::CWnd((CWnd *)((int)this + 0x60));
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_00423ee0;
  *(undefined ***)this = &PTR_LAB_00423e08;
  *(undefined4 *)((int)this + 0xa0) = 0;
  ExceptionList = local_c;
  return this;
}


// ---- FUN_004174b0 @ 004174b0

CDialog * __thiscall FUN_004174b0(void *this,byte param_1)

{
  FUN_004143c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004174d0 @ 004174d0

void __thiscall FUN_004174d0(void *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x3eb,(CWnd *)((int)this + 0x60));
  DDX_Text(param_1,1000,(uint *)((int)this + 0xa0));
  DDV_MinMaxUInt(param_1,*(uint *)((int)this + 0xa0),1,0x3c);
  return;
}


// ---- FUN_00417520 @ 00417520

undefined4 __fastcall FUN_00417520(CDialog *param_1)

{
  CWnd *pCVar1;
  
  CDialog::OnInitDialog(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x80),0x465,0,0x1003c);
  SendMessageA(*(HWND *)(param_1 + 0x80),0x467,0,*(uint *)(param_1 + 0xa0) & 0xffff);
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,1000);
  CWnd::SetFocus(pCVar1);
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,1000);
  SendMessageA(*(HWND *)(pCVar1 + 0x20),0xb1,0,-1);
  SendMessageA(*(HWND *)(pCVar1 + 0x20),0xb7,0,0);
  return 0;
}


// ---- FUN_004175b0 @ 004175b0

CSpinButtonCtrl * __thiscall FUN_004175b0(void *this,byte param_1)

{
  CSpinButtonCtrl::~CSpinButtonCtrl(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0041a420 @ 0041a420

CWnd * __fastcall FUN_0041a420(CWnd *param_1)

{
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = &PTR_LAB_00423ff0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}


// ---- FUN_0041a440 @ 0041a440

CButton * __thiscall FUN_0041a440(void *this,byte param_1)

{
  FUN_0041a460(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0041a460 @ 0041a460

void __fastcall FUN_0041a460(CButton *param_1)

{
  *(undefined ***)param_1 = &PTR_LAB_00423ff0;
  CButton::~CButton(param_1);
  return;
}


// ---- FUN_0041a4c0 @ 0041a4c0

void __fastcall FUN_0041a4c0(int param_1)

{
  int iVar1;
  CColorDialog local_90 [108];
  undefined4 local_24;
  uint local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422cbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CColorDialog::CColorDialog(local_90,0,0,(CWnd *)0x0);
  local_24 = *(undefined4 *)(param_1 + 0x40);
  local_1c = local_1c | 0x85;
  local_4 = 0;
  iVar1 = CColorDialog::DoModal(local_90);
  if (iVar1 == 1) {
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    *(undefined4 *)(param_1 + 0x40) = local_24;
  }
  local_4 = 0xffffffff;
  CDialog::~CDialog((CDialog *)local_90);
  ExceptionList = local_c;
  return;
}


// ---- ~CDialog @ 0041a560

void __thiscall CDialog::~CDialog(CDialog *this)

{
  ~CDialog(this);
  return;
}


// ---- FUN_0041d3e0 @ 0041d3e0

void FUN_0041d3e0(void)

{
  FUN_0041e240((undefined4 *)&DAT_0042b898);
  return;
}


// ---- FUN_0041d3f0 @ 0041d3f0

void FUN_0041d3f0(void)

{
  FUN_0042236c((_onexit_t)&LAB_0041d400);
  return;
}


// ---- FUN_0041d410 @ 0041d410

CDialog * __thiscall FUN_0041d410(void *this,CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422d7d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0x85,param_1);
  local_4 = 0;
  FUN_0041a420((CWnd *)((int)this + 0x68));
  local_4._0_1_ = 1;
  FUN_0041a420((CWnd *)((int)this + 0xac));
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)((int)this + 0xf0));
  *(undefined ***)((int)this + 0xf0) = &PTR_LAB_004242a0;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)((int)this + 0x130));
  *(undefined ***)((int)this + 0x130) = &PTR_LAB_004242a0;
  local_4._0_1_ = 4;
  FUN_0041a420((CWnd *)((int)this + 0x170));
  local_4._0_1_ = 5;
  FUN_0041a420((CWnd *)((int)this + 0x1b4));
  local_4._0_1_ = 6;
  FUN_0041a420((CWnd *)((int)this + 0x1f8));
  local_4._0_1_ = 7;
  FUN_0041a420((CWnd *)((int)this + 0x23c));
  local_4._0_1_ = 8;
  FUN_0041a420((CWnd *)((int)this + 0x280));
  local_4._0_1_ = 9;
  FUN_0041a420((CWnd *)((int)this + 0x2c4));
  local_4._0_1_ = 10;
  CString::CString((CString *)((int)this + 0x368));
  local_4._0_1_ = 0xb;
  CString::CString((CString *)((int)this + 0x36c));
  local_4 = CONCAT31(local_4._1_3_,0xc);
  *(undefined ***)this = &PTR_LAB_004241c8;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  CString::operator=((CString *)((int)this + 0x368),&DAT_0042a11c);
  CString::operator=((CString *)((int)this + 0x36c),&DAT_0042a11c);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_0041d5e0 @ 0041d5e0

CDialog * __thiscall FUN_0041d5e0(void *this,byte param_1)

{
  FUN_0040d6a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0041dd20 @ 0041dd20

void __fastcall FUN_0041dd20(CWnd *param_1)

{
  CWnd *pCVar1;
  WPARAM wParam;
  LRESULT LVar2;
  CString *pCVar3;
  CWnd *pCVar4;
  float10 fVar5;
  int iVar6;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  wParam = SendMessageA(*(HWND *)(param_1 + 0x150),0x147,0,0);
  if (-1 < (int)wParam) {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x150),0x146,0,0);
    if ((int)wParam < LVar2) {
      LVar2 = SendMessageA(*(HWND *)(param_1 + 0x150),0x150,wParam,0);
      pCVar4 = param_1 + 0x350;
      pCVar1 = param_1 + 0x354;
      *(LRESULT *)(param_1 + 100) = LVar2;
      FUN_00421820(DAT_00429d3c,LVar2,(undefined4 *)pCVar1,(undefined4 *)pCVar4);
      fVar5 = FUN_004217d0((int)DAT_00429d3c,*(undefined4 *)(param_1 + 100),*(float *)pCVar1);
      *(float *)pCVar1 = (float)fVar5;
      fVar5 = FUN_004217d0((int)DAT_00429d3c,*(undefined4 *)(param_1 + 100),*(float *)pCVar4);
      *(float *)pCVar4 = (float)fVar5;
      pCVar3 = FUN_00421510(DAT_00429d3c,(CString *)&local_10,*(undefined4 *)(param_1 + 100));
      local_4 = 0;
      CString::operator=((CString *)(param_1 + 0x368),pCVar3);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_10);
      iVar6 = 1;
      pCVar4 = CWnd::GetDlgItem(param_1,0x3fe);
      CWnd::EnableWindow(pCVar4,iVar6);
      *(undefined4 *)(param_1 + 0x360) = 1;
      CWnd::UpdateData(param_1,0);
    }
  }
  ExceptionList = local_c;
  return;
}


// ---- FUN_0041de40 @ 0041de40

void __fastcall FUN_0041de40(CWnd *param_1)

{
  CWnd *pCVar1;
  WPARAM wParam;
  LRESULT LVar2;
  CString *pCVar3;
  CWnd *pCVar4;
  float10 fVar5;
  int iVar6;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  wParam = SendMessageA(*(HWND *)(param_1 + 0x110),0x147,0,0);
  if (-1 < (int)wParam) {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x110),0x146,0,0);
    if ((int)wParam < LVar2) {
      LVar2 = SendMessageA(*(HWND *)(param_1 + 0x110),0x150,wParam,0);
      pCVar4 = param_1 + 0x358;
      pCVar1 = param_1 + 0x35c;
      *(LRESULT *)(param_1 + 0x60) = LVar2;
      FUN_00421820(DAT_00429d3c,LVar2,(undefined4 *)pCVar1,(undefined4 *)pCVar4);
      fVar5 = FUN_004217d0((int)DAT_00429d3c,*(undefined4 *)(param_1 + 0x60),*(float *)pCVar1);
      *(float *)pCVar1 = (float)fVar5;
      fVar5 = FUN_004217d0((int)DAT_00429d3c,*(undefined4 *)(param_1 + 0x60),*(float *)pCVar4);
      *(float *)pCVar4 = (float)fVar5;
      pCVar3 = FUN_00421510(DAT_00429d3c,(CString *)&local_10,*(undefined4 *)(param_1 + 0x60));
      local_4 = 0;
      CString::operator=((CString *)(param_1 + 0x36c),pCVar3);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_10);
      iVar6 = 1;
      pCVar4 = CWnd::GetDlgItem(param_1,0x408);
      CWnd::EnableWindow(pCVar4,iVar6);
      *(undefined4 *)(param_1 + 0x364) = 1;
      CWnd::UpdateData(param_1,0);
    }
  }
  ExceptionList = local_c;
  return;
}


// ---- FUN_0041e0d0 @ 0041e0d0

void __fastcall FUN_0041e0d0(CWnd *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x308) = 1;
  *(undefined4 *)(param_1 + 0x330) = 9000;
  *(undefined4 *)(param_1 + 0x340) = 9000;
  *(undefined4 *)(param_1 + 0x30c) = 1;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined4 *)(param_1 + 0x314) = 1;
  *(undefined4 *)(param_1 + 0x318) = 1;
  *(undefined4 *)(param_1 + 0x31c) = 1;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xff00ff;
  *(undefined4 *)(param_1 + 500) = 0x808080;
  *(undefined4 *)(param_1 + 0x238) = 0xff0000;
  *(undefined4 *)(param_1 + 0x27c) = 0xff00;
  *(undefined4 *)(param_1 + 0x2c0) = 0xff;
  *(undefined4 *)(param_1 + 0x304) = 0x808000;
  *(undefined4 *)(param_1 + 0xa8) = 0x800080;
  *(undefined4 *)(param_1 + 0xec) = 0x80ff;
  *(undefined4 *)(param_1 + 800) = 30000;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 300;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 3000;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x34c) = 0x2edbe6ff;
  *(undefined4 *)(param_1 + 0x350) = 0x49742400;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0x49742400;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  iVar1 = CWnd::IsWindowEnabled(param_1 + 0x130);
  if (iVar1 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x150),0x14e,0xffffffff,0);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  iVar1 = CWnd::IsWindowEnabled(param_1 + 0xf0);
  if (iVar1 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x110),0x14e,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  CWnd::UpdateData(param_1,0);
  return;
}


// ---- FUN_0041e240 @ 0041e240

void __fastcall FUN_0041e240(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_00424370;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ---- FUN_0041e260 @ 0041e260

void __fastcall FUN_0041e260(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00422e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_00424370;
  local_4 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR_GetRuntimeClass_004238a4;
  ExceptionList = local_c;
  return;
}


// ---- FUN_0041e450 @ 0041e450

undefined4 * __thiscall FUN_0041e450(void *this,byte param_1)

{
  FUN_0041e260(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0041e470 @ 0041e470

CComboBox * __thiscall FUN_0041e470(void *this,byte param_1)

{
  CComboBox::~CComboBox(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004212e0 @ 004212e0

undefined4 * FUN_004212e0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422e2a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00421360(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00421350 @ 00421350

undefined ** FUN_00421350(void)

{
  return &PTR_s_CServerComms_00424388;
}


// ---- FUN_00421360 @ 00421360

undefined4 * __fastcall FUN_00421360(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00422e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004243a0;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00421b20((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_004213c0 @ 004213c0

void __fastcall FUN_004213c0(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_004238a4;
  return;
}


// ---- FUN_004213f0 @ 004213f0

undefined4 __fastcall FUN_004213f0(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32_00429c28);
  *(HWND *)(param_1 + 4) = pHVar1;
  if (pHVar1 == (HWND)0x0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__E__00429c18);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__W__00429c08);
    *(HWND *)(param_1 + 4) = pHVar1;
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__EW__00429bf8);
      *(HWND *)(param_1 + 4) = pHVar1;
      if (pHVar1 == (HWND)0x0) {
        return 0;
      }
    }
  }
  iVar2 = FUN_00421460(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}


// ---- FUN_00421460 @ 00421460

void __fastcall FUN_00421460(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_0042bf60,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return;
}


// ---- FUN_00421480 @ 00421480

void __fastcall FUN_00421480(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_0042bf48,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return;
}


// ---- FUN_00421510 @ 00421510

CString * __thiscall FUN_00421510(void *this,CString *param_1,undefined4 param_2)

{
  CString local_184 [4];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 *local_174;
  undefined4 local_170;
  char local_16c [352];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422e85;
  local_c = ExceptionList;
  local_180 = 0;
  ExceptionList = &local_c;
  CString::CString(local_184);
  local_170 = param_2;
  local_17c = DAT_0042bed4;
  local_174 = &local_170;
  local_4 = 1;
  local_178 = 0x164;
  FUN_00421b70(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_17c);
  CString::operator=(local_184,local_16c);
  CString::CString(param_1,local_184);
  local_180 = 1;
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_184);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_004215e0 @ 004215e0

CString * __thiscall FUN_004215e0(void *this,CString *param_1,undefined4 param_2)

{
  CString local_184 [4];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 *local_174;
  undefined4 local_170;
  char local_16c [352];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422eb5;
  local_c = ExceptionList;
  local_180 = 0;
  ExceptionList = &local_c;
  CString::CString(local_184,&DAT_0042a11c);
  local_170 = param_2;
  local_17c = DAT_0042bf28;
  local_174 = &local_170;
  local_4 = 1;
  local_178 = 0x164;
  FUN_00421b70(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_17c);
  CString::operator=(local_184,local_16c);
  CString::CString(param_1,local_184);
  local_180 = 1;
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_184);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_004216b0 @ 004216b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004216b0(void *param_1,undefined4 param_2)

{
  int iVar1;
  CString local_14 [4];
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00422ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_14);
  local_4 = 0;
  iVar1 = FUN_00421750(param_1,param_2,&local_10,local_14);
  if (iVar1 == 1) {
    local_4 = 0xffffffff;
    CString::~CString(local_14);
    ExceptionList = local_c;
    return (float10)local_10;
  }
  local_4 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_c;
  return (float10)_DAT_004243b4;
}


// ---- FUN_00421750 @ 00421750

undefined4 __thiscall
FUN_00421750(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

{
  int iVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_168 = param_1;
  local_16c = &local_168;
  local_174 = DAT_0042bf20;
  local_170 = 0x168;
  iVar1 = FUN_00421b70(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_164;
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_004217d0 @ 004217d0

float10 __thiscall FUN_004217d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_14;
  local_14 = param_2;
  local_10 = param_3;
  local_c = DAT_0042becc;
  local_8 = 8;
  fVar1 = (float)SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_c)
  ;
  return (float10)fVar1;
}


// ---- FUN_00421820 @ 00421820

undefined4 __thiscall
FUN_00421820(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_1;
  local_10 = &local_c;
  local_18 = DAT_0042beec;
  local_14 = 0xc;
  iVar1 = FUN_00421b70(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_18);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_8;
    *param_3 = local_4;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_00421890 @ 00421890

int __thiscall FUN_00421890(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint local_e38;
  undefined4 *local_e34;
  int local_e30;
  undefined4 local_e20;
  undefined4 local_e1c;
  undefined4 *local_e18;
  undefined4 local_e14;
  undefined4 local_e10 [900];
  
  local_e14 = param_1;
  local_e18 = &local_e14;
  local_e20 = DAT_0042bee4;
  local_e1c = 0xe14;
  iVar5 = FUN_00421b70(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_e20);
  if (0 < iVar5) {
    local_e34 = local_e10;
    local_e30 = iVar5;
    do {
      uVar2 = *local_e34;
      iVar3 = *(int *)(param_2 + 8);
      pvVar4 = *(void **)(param_2 + 4);
      uVar1 = iVar3 + 1;
      if (uVar1 == 0) {
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
          *(undefined4 *)(param_2 + 4) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else if (pvVar4 == (void *)0x0) {
        puVar6 = operator_new(uVar1 * 4);
        *(undefined4 **)(param_2 + 4) = puVar6;
        for (uVar8 = uVar1 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(uint *)(param_2 + 0xc) = uVar1;
        *(uint *)(param_2 + 8) = uVar1;
      }
      else if (*(int *)(param_2 + 0xc) < (int)uVar1) {
        iVar9 = *(int *)(param_2 + 0x10);
        if (iVar9 == 0) {
          iVar9 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
          if (iVar9 < 4) {
            iVar9 = 4;
          }
          else if (0x400 < iVar9) {
            iVar9 = 0x400;
          }
        }
        local_e38 = iVar9 + *(int *)(param_2 + 0xc);
        if ((int)local_e38 <= (int)uVar1) {
          local_e38 = uVar1;
        }
        puVar7 = operator_new(local_e38 * 4);
        puVar6 = *(undefined4 **)(param_2 + 4);
        puVar10 = puVar7;
        for (uVar8 = *(uint *)(param_2 + 8) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar6 = puVar7 + *(int *)(param_2 + 8);
        for (iVar9 = uVar1 - *(int *)(param_2 + 8); iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        operator_delete(*(void **)(param_2 + 4));
        *(undefined4 **)(param_2 + 4) = puVar7;
        *(uint *)(param_2 + 8) = uVar1;
        *(uint *)(param_2 + 0xc) = local_e38;
      }
      else if (iVar3 < (int)uVar1) {
        puVar6 = (undefined4 *)((int)pvVar4 + iVar3 * 4);
        for (iVar9 = uVar1 - iVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(uint *)(param_2 + 8) = uVar1;
      }
      else {
        *(uint *)(param_2 + 8) = uVar1;
      }
      *(undefined4 *)(*(int *)(param_2 + 4) + iVar3 * 4) = uVar2;
      local_e34 = local_e34 + 1;
      local_e30 = local_e30 + -1;
    } while (local_e30 != 0);
  }
  return iVar5;
}


// ---- FUN_00421b20 @ 00421b20

void __fastcall FUN_00421b20(int param_1)

{
  int iVar1;
  _OSVERSIONINFOA *p_Var2;
  _OSVERSIONINFOA local_94;
  
  p_Var2 = &local_94;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    p_Var2->dwOSVersionInfoSize = 0;
    p_Var2 = (_OSVERSIONINFOA *)&p_Var2->dwMajorVersion;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  if (local_94.dwPlatformId == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}


// ---- FUN_00421b70 @ 00421b70

void __thiscall
FUN_00421b70(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_00421bb0(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_00421bb0 @ 00421bb0

LRESULT __thiscall FUN_00421bb0(void *this,HWND param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hFileMappingObject;
  undefined4 *lpBaseAddress;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 local_10c;
  uint local_108;
  char *local_104;
  char local_100 [256];
  
  iVar2 = rand();
  uVar9 = *(undefined4 *)((int)this + 8);
  DVar3 = GetTickCount();
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_00429c34,DVar3,uVar9,iVar2);
  hFileMappingObject =
       CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_2[1] + 8,local_100
                         );
  if (hFileMappingObject == (HANDLE)0x0) {
    return 0;
  }
  lpBaseAddress = MapViewOfFile(hFileMappingObject,6,0,0,0);
  if (lpBaseAddress == (undefined4 *)0x0) {
    return 0;
  }
  *lpBaseAddress = param_2[1];
  uVar5 = param_2[1];
  puVar6 = (undefined4 *)param_2[2];
  puVar7 = lpBaseAddress;
  for (uVar4 = uVar5 >> 2; puVar7 = puVar7 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  local_10c = *param_2;
  local_108 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (local_108 == 0) break;
    local_108 = local_108 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_108 = ~local_108;
  local_104 = local_100;
  DAT_0042bc88 = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10c);
  uVar5 = param_2[1];
  puVar6 = (undefined4 *)param_2[2];
  puVar7 = lpBaseAddress;
  for (uVar4 = uVar5 >> 2; puVar7 = puVar7 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar7;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  UnmapViewOfFile(lpBaseAddress);
  CloseHandle(hFileMappingObject);
  return DAT_0042bc88;
}


// ---- GetConnectionHook @ 00421d4c

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 00421d52

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 00421d58

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 00421d5e

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 00421d64

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 00421d6a

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 00421d70

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 00421d76

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 00421d7c

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 00421d82

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 00421d88

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 00421d8e

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 00421d94

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 00421d9a

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- CWinApp @ 00421db2

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- operator_delete @ 00421db8

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~CWinApp @ 00421dbe

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- ShowWindow @ 00421dc4

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}


// ---- EnableShellOpen @ 00421dca

void __thiscall CWinApp::EnableShellOpen(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableShellOpen(this);
  return;
}


// ---- RegisterShellFileTypes @ 00421dd0

void __thiscall CWinApp::RegisterShellFileTypes(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegisterShellFileTypes(this,param_1);
  return;
}


// ---- GetActiveView @ 00421dd6

CView * __thiscall CFrameWnd::GetActiveView(CFrameWnd *this)

{
  CView *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveView(this);
  return pCVar1;
}


// ---- ~CCommandLineInfo @ 00421ddc

void __thiscall CCommandLineInfo::~CCommandLineInfo(CCommandLineInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CCommandLineInfo(this);
  return;
}


// ---- ProcessShellCommand @ 00421de2

int __thiscall CWinApp::ProcessShellCommand(CWinApp *this,CCommandLineInfo *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessShellCommand(this,param_1);
  return iVar1;
}


// ---- ParseCommandLine @ 00421de8

void __thiscall CWinApp::ParseCommandLine(CWinApp *this,CCommandLineInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ParseCommandLine(this,param_1);
  return;
}


// ---- CCommandLineInfo @ 00421dee

void __thiscall CCommandLineInfo::CCommandLineInfo(CCommandLineInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CCommandLineInfo(this);
  return;
}


// ---- AddDocTemplate @ 00421df4

void __thiscall CWinApp::AddDocTemplate(CWinApp *this,CDocTemplate *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddDocTemplate(this,param_1);
  return;
}


// ---- CSingleDocTemplate @ 00421dfa

void __thiscall
CSingleDocTemplate::CSingleDocTemplate
          (CSingleDocTemplate *this,uint param_1,CRuntimeClass *param_2,CRuntimeClass *param_3,
          CRuntimeClass *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00421dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CSingleDocTemplate(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- LoadStdProfileSettings @ 00421e00

void __thiscall CWinApp::LoadStdProfileSettings(CWinApp *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadStdProfileSettings(this,param_1);
  return;
}


// ---- SetRegistryKey @ 00421e06

void __thiscall CWinApp::SetRegistryKey(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetRegistryKey(this,param_1);
  return;
}


// ---- AfxMessageBox @ 00421e0c

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}


// ---- operator_new @ 00421e12

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- AfxEnableControlContainer @ 00421e18

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}


// ---- OnOK @ 00421e2a

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnInitDialog @ 00421e36

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- DoModal @ 00421e3c

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- IsFrameWnd @ 00421e48

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- OnChildNotify @ 00421e54

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DefWindowProcA @ 00421e60

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 00421e66

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 00421e6c

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 00421e72

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 00421e7e

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 00421e84

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 00421e8a

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 00421e90

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 00421e96

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 00421e9c

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 00421ea2

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 00421ea8

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 00421eae

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- DestroyWindow @ 00421eba

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 00421ec0

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 00421ec6

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- OnFinalRelease @ 00421ecc

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- CDialog @ 00421ede

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- ~CDialog @ 00421ee4

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- ExitInstance @ 00421eea

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}


// ---- OnFileNew @ 00421ef0

void __thiscall CWinApp::OnFileNew(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFileNew(this);
  return;
}


// ---- OnFileOpen @ 00421ef6

void __thiscall CWinApp::OnFileOpen(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFileOpen(this);
  return;
}


// ---- GetRuntimeClass @ 00421efc

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- OnIdle @ 00421f02

void __thiscall CDocument::OnIdle(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnIdle(this);
  return;
}


// ---- GetDefaultAccelerator @ 00421f08

HACCEL__ * __thiscall CDocument::GetDefaultAccelerator(CDocument *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}


// ---- GetDefaultMenu @ 00421f0e

HMENU__ * __thiscall CDocument::GetDefaultMenu(CDocument *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultMenu(this);
  return pHVar1;
}


// ---- UpdateFrameCounts @ 00421f14

void __thiscall CDocument::UpdateFrameCounts(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateFrameCounts(this);
  return;
}


// ---- DoFileSave @ 00421f1a

int __thiscall CDocument::DoFileSave(CDocument *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoFileSave(this);
  return iVar1;
}


// ---- DoSave @ 00421f20

int __thiscall CDocument::DoSave(CDocument *this,char *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoSave(this,param_1,param_2);
  return iVar1;
}


// ---- PreCloseFrame @ 00421f26

void __thiscall CDocument::PreCloseFrame(CDocument *this,CFrameWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreCloseFrame(this,param_1);
  return;
}


// ---- SaveModified @ 00421f2c

int __thiscall CDocument::SaveModified(CDocument *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveModified(this);
  return iVar1;
}


// ---- CanCloseFrame @ 00421f32

int __thiscall CDocument::CanCloseFrame(CDocument *this,CFrameWnd *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CanCloseFrame(this,param_1);
  return iVar1;
}


// ---- ReleaseFile @ 00421f38

void __thiscall CDocument::ReleaseFile(CDocument *this,CFile *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseFile(this,param_1,param_2);
  return;
}


// ---- GetFile @ 00421f3e

CFile * __thiscall
CDocument::GetFile(CDocument *this,char *param_1,uint param_2,CFileException *param_3)

{
  CFile *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetFile(this,param_1,param_2,param_3);
  return pCVar1;
}


// ---- ReportSaveLoadException @ 00421f44

void __thiscall
CDocument::ReportSaveLoadException
          (CDocument *this,char *param_1,CException *param_2,int param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00421f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReportSaveLoadException(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnCloseDocument @ 00421f4a

void __thiscall CDocument::OnCloseDocument(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCloseDocument(this);
  return;
}


// ---- OnSaveDocument @ 00421f50

int __thiscall CDocument::OnSaveDocument(CDocument *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSaveDocument(this,param_1);
  return iVar1;
}


// ---- OnOpenDocument @ 00421f56

int __thiscall CDocument::OnOpenDocument(CDocument *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnOpenDocument(this,param_1);
  return iVar1;
}


// ---- OnChangedViewList @ 00421f5c

void __thiscall CDocument::OnChangedViewList(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnChangedViewList(this);
  return;
}


// ---- GetNextView @ 00421f62

CView * __thiscall CDocument::GetNextView(CDocument *this,__POSITION **param_1)

{
  CView *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetNextView(this,param_1);
  return pCVar1;
}


// ---- GetFirstViewPosition @ 00421f68

__POSITION * __thiscall CDocument::GetFirstViewPosition(CDocument *this)

{
  __POSITION *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetFirstViewPosition(this);
  return p_Var1;
}


// ---- SetPathName @ 00421f6e

void __thiscall CDocument::SetPathName(CDocument *this,char *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPathName(this,param_1,param_2);
  return;
}


// ---- SetTitle @ 00421f74

void __thiscall CDocument::SetTitle(CDocument *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTitle(this,param_1);
  return;
}


// ---- OnFinalRelease @ 00421f7a

void __thiscall CDocument::OnFinalRelease(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 00421f80

int __thiscall
CDocument::OnCmdMsg(CDocument *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CDocument @ 00421f86

void __thiscall CDocument::CDocument(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDocument(this);
  return;
}


// ---- ~CDocument @ 00421f8c

void __thiscall CDocument::~CDocument(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDocument(this);
  return;
}


// ---- OnNewDocument @ 00421f92

int __thiscall CDocument::OnNewDocument(CDocument *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNewDocument(this);
  return iVar1;
}


// ---- AfxTryCleanup @ 00421f98

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x00421f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- operator>> @ 00421f9e

CArchive * operator>>(CArchive *param_1,CTime *param_2)

{
  CArchive *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator>>(param_1,param_2);
  return pCVar1;
}


// ---- FillBuffer @ 00421fa4

void __thiscall CArchive::FillBuffer(CArchive *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FillBuffer(this,param_1);
  return;
}


// ---- operator<< @ 00421faa

CArchive * operator<<(void)

{
  CArchive *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator<<();
  return pCVar1;
}


// ---- Flush @ 00421fb0

void __thiscall CArchive::Flush(CArchive *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Flush(this);
  return;
}


// ---- AFX_EXCEPTION_LINK @ 00421fb6

void __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_EXCEPTION_LINK(this);
  return;
}


// ---- Delete @ 00421fbc

void __thiscall CException::Delete(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}


// ---- AfxGetModuleState @ 00421fc2

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- DeleteContents @ 00421fc8

void __thiscall CDocument::DeleteContents(CDocument *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteContents(this);
  return;
}


// ---- EndWaitCursor @ 00421fce

void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndWaitCursor(this);
  return;
}


// ---- ~CStdioFile @ 00421fd4

void __thiscall CStdioFile::~CStdioFile(CStdioFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStdioFile(this);
  return;
}


// ---- Close @ 00421fda

void __thiscall CStdioFile::Close(CStdioFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Close(this);
  return;
}


// ---- Empty @ 00421fe0

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- Format @ 00421fe6

void __thiscall CString::Format(CString *this,char *param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x00421fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- CString @ 00421fec

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- WriteString @ 00421ff2

void __thiscall CStdioFile::WriteString(CStdioFile *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00421ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteString(this,param_1);
  return;
}


// ---- ~CString @ 00421ff8

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x00421ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- operator= @ 00421ffe

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- Format @ 00422004

void __thiscall CTime::Format(CTime *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- CString @ 0042200a

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042200a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CStdioFile @ 00422010

void __thiscall CStdioFile::CStdioFile(CStdioFile *this,char *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00422010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CStdioFile(this,param_1,param_2);
  return;
}


// ---- GetPathName @ 00422016

void __thiscall CFileDialog::GetPathName(CFileDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetPathName(this);
  return;
}


// ---- BeginWaitCursor @ 0042201c

void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042201c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginWaitCursor(this);
  return;
}


// ---- DoModal @ 00422022

int __thiscall CFileDialog::DoModal(CFileDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CFileDialog @ 00422028

void __thiscall
CFileDialog::CFileDialog
          (CFileDialog *this,int param_1,char *param_2,char *param_3,ulong param_4,char *param_5,
          CWnd *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00422028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFileDialog(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ---- Read @ 0042202e

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042202e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = Read(this,param_1,param_2);
  return uVar1;
}


// ---- Write @ 00422034

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00422034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Write(this,param_1,param_2);
  return;
}


// ---- ReadCount @ 0042203a

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042203a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ReadCount(this);
  return uVar1;
}


// ---- WriteCount @ 00422040

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteCount(this,param_1);
  return;
}


// ---- GetRuntimeClass @ 00422052

CRuntimeClass * __thiscall CPen::GetRuntimeClass(CPen *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- OnEndPrintPreview @ 00422058

void __thiscall
CView::OnEndPrintPreview
          (CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00422058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEndPrintPreview(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnActivateFrame @ 0042205e

void __thiscall CView::OnActivateFrame(CView *this,uint param_1,CFrameWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0042205e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivateFrame(this,param_1,param_2);
  return;
}


// ---- OnActivateView @ 00422064

void __thiscall CView::OnActivateView(CView *this,int param_1,CView *param_2,CView *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00422064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivateView(this,param_1,param_2,param_3);
  return;
}


// ---- OnPrepareDC @ 0042206a

void __thiscall CView::OnPrepareDC(CView *this,CDC *param_1,CPrintInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0042206a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnPrepareDC(this,param_1,param_2);
  return;
}


// ---- OnDragScroll @ 00422070

ulong __thiscall CView::OnDragScroll(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDragScroll();
  return uVar1;
}


// ---- OnDropEx @ 00422076

ulong __thiscall CView::OnDropEx(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDropEx();
  return uVar1;
}


// ---- OnDrop @ 0042207c

int __thiscall CView::OnDrop(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDrop();
  return iVar1;
}


// ---- OnDragLeave @ 00422082

void __thiscall CView::OnDragLeave(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDragLeave(this);
  return;
}


// ---- OnDragOver @ 00422088

ulong __thiscall CView::OnDragOver(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDragOver();
  return uVar1;
}


// ---- OnDragEnter @ 0042208e

ulong __thiscall CView::OnDragEnter(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042208e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnDragEnter();
  return uVar1;
}


// ---- OnScrollBy @ 00422094

int __thiscall CView::OnScrollBy(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnScrollBy();
  return iVar1;
}


// ---- OnScroll @ 0042209a

int __thiscall CView::OnScroll(CView *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042209a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnScroll(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- IsSelected @ 004220a0

int __thiscall CView::IsSelected(CView *this,CObject *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsSelected(this,param_1);
  return iVar1;
}


// ---- SetOccDialogInfo @ 004220a6

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 004220ac

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- PostNcDestroy @ 004220b2

void __thiscall CView::PostNcDestroy(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x004220b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- PreTranslateMessage @ 004220b8

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetScrollBarCtrl @ 004220be

CScrollBar * __thiscall CView::GetScrollBarCtrl(CView *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- CalcWindowRect @ 004220c4

void __thiscall CView::CalcWindowRect(CView *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004220c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- OnCmdMsg @ 004220ca

int __thiscall
CView::OnCmdMsg(CView *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CView @ 004220d0

void __thiscall CView::~CView(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x004220d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CView(this);
  return;
}


// ---- Attach @ 004220d6

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- CView @ 004220dc

void __thiscall CView::CView(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x004220dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CView(this);
  return;
}


// ---- GetRuntimeClass @ 004220e2

CRuntimeClass * __thiscall CGdiObject::GetRuntimeClass(CGdiObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DeleteObject @ 004220e8

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- PreCreateWindow @ 004220ee

int __thiscall CView::PreCreateWindow(CView *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- LineTo @ 004220f4

int __thiscall CDC::LineTo(CDC *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004220f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LineTo(this,param_1,param_2);
  return iVar1;
}


// ---- MoveTo @ 004220fa

void __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004220fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MoveTo(this,param_1,param_2);
  return;
}


// ---- DoPreparePrinting @ 00422100

int __thiscall CView::DoPreparePrinting(CView *this,CPrintInfo *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoPreparePrinting(this,param_1);
  return iVar1;
}


// ---- SetPaneText @ 00422106

int __thiscall CStatusBar::SetPaneText(CStatusBar *this,int param_1,char *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetPaneText(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHScroll @ 0042210c

void __thiscall CWnd::OnHScroll(CWnd *this,uint param_1,uint param_2,CScrollBar *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0042210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHScroll(this,param_1,param_2,param_3);
  return;
}


// ---- SetScrollPos @ 00422112

int __thiscall CWnd::SetScrollPos(CWnd *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollPos(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- EnableScrollBarCtrl @ 0042211e

void __thiscall CWnd::EnableScrollBarCtrl(CWnd *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0042211e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableScrollBarCtrl(this,param_1,param_2);
  return;
}


// ---- SetScrollRange @ 00422124

void __thiscall CWnd::SetScrollRange(CWnd *this,int param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00422124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetScrollRange(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInitialUpdate @ 0042212a

void __thiscall CView::OnInitialUpdate(CView *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042212a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInitialUpdate(this);
  return;
}


// ---- ~CClientDC @ 00422130

void __thiscall CClientDC::~CClientDC(CClientDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CClientDC(this);
  return;
}


// ---- CClientDC @ 00422136

void __thiscall CClientDC::CClientDC(CClientDC *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CClientDC(this,param_1);
  return;
}


// ---- SelectObject @ 0042213c

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CPen *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042213c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- GetPaneText @ 00422142

void __thiscall CStatusBar::GetPaneText(CStatusBar *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetPaneText(this,param_1);
  return;
}


// ---- operator= @ 00422148

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- ~CComboBox @ 0042214e

void __thiscall CComboBox::~CComboBox(CComboBox *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042214e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CComboBox(this);
  return;
}


// ---- OnPrint @ 00422154

void __thiscall CView::OnPrint(CView *this,CDC *param_1,CPrintInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00422154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnPrint(this,param_1,param_2);
  return;
}


// ---- GetProfileIntA @ 0042215a

uint __thiscall CWinApp::GetProfileIntA(CWinApp *this,char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042215a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetProfileIntA(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- WriteProfileInt @ 00422160

int __thiscall CWinApp::WriteProfileInt(CWinApp *this,char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WriteProfileInt(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- AfxClassInit @ 00422166

void AfxClassInit(CRuntimeClass *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxClassInit(param_1);
  return;
}


// ---- ExitHelpMode @ 0042216c

void __thiscall CFrameWnd::ExitHelpMode(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitHelpMode(this);
  return;
}


// ---- DelayUpdateFrameMenu @ 00422172

void __thiscall CFrameWnd::DelayUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelayUpdateFrameMenu(this,param_1);
  return;
}


// ---- GetDefaultAccelerator @ 00422178

HACCEL__ * __thiscall CFrameWnd::GetDefaultAccelerator(CFrameWnd *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}


// ---- OnUpdateFrameMenu @ 0042217e

void __thiscall CFrameWnd::OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042217e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameMenu(this,param_1);
  return;
}


// ---- OnUpdateFrameTitle @ 00422184

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameTitle(this,param_1);
  return;
}


// ---- OnCreateClient @ 0042218a

int __thiscall
CFrameWnd::OnCreateClient(CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042218a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateClient(this,param_1,param_2);
  return iVar1;
}


// ---- NegotiateBorderSpace @ 00422190

int __thiscall CFrameWnd::NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = NegotiateBorderSpace(this,param_1,param_2);
  return iVar1;
}


// ---- GetMessageBar @ 00422196

CWnd * __thiscall CFrameWnd::GetMessageBar(CFrameWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMessageBar(this);
  return pCVar1;
}


// ---- OnSetPreviewMode @ 0042219c

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0042219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPreviewMode(this,param_1,param_2);
  return;
}


// ---- ActivateFrame @ 004221a2

void __thiscall CFrameWnd::ActivateFrame(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004221a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ActivateFrame(this,param_1);
  return;
}


// ---- RecalcLayout @ 004221a8

void __thiscall CFrameWnd::RecalcLayout(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004221a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecalcLayout(this,param_1);
  return;
}


// ---- GetMessageString @ 004221ae

void __thiscall CFrameWnd::GetMessageString(CFrameWnd *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004221ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- GetActiveFrame @ 004221b4

CFrameWnd * __thiscall CFrameWnd::GetActiveFrame(CFrameWnd *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveFrame(this);
  return pCVar1;
}


// ---- GetActiveDocument @ 004221ba

CDocument * __thiscall CFrameWnd::GetActiveDocument(CFrameWnd *this)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveDocument(this);
  return pCVar1;
}


// ---- LoadFrame @ 004221c0

int __thiscall
CFrameWnd::LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadFrame(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- IsFrameWnd @ 004221c6

int __thiscall CFrameWnd::IsFrameWnd(CFrameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- PostNcDestroy @ 004221cc

void __thiscall CFrameWnd::PostNcDestroy(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004221cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- PreTranslateMessage @ 004221d2

int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- EndModalState @ 004221d8

void __thiscall CFrameWnd::EndModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004221d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalState(this);
  return;
}


// ---- BeginModalState @ 004221de

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004221de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginModalState(this);
  return;
}


// ---- OnCommand @ 004221e4

int __thiscall CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- OnCmdMsg @ 004221ea

int __thiscall
CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004221ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CStatusBar @ 004221f0

void __thiscall CStatusBar::~CStatusBar(CStatusBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x004221f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStatusBar(this);
  return;
}


// ---- ~CFrameWnd @ 004221f6

void __thiscall CFrameWnd::~CFrameWnd(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x004221f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CFrameWnd(this);
  return;
}


// ---- CToolBar @ 004221fc

void __thiscall CToolBar::CToolBar(CToolBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x004221fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CToolBar(this);
  return;
}


// ---- CStatusBar @ 00422202

void __thiscall CStatusBar::CStatusBar(CStatusBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CStatusBar(this);
  return;
}


// ---- CFrameWnd @ 00422208

void __thiscall CFrameWnd::CFrameWnd(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFrameWnd(this);
  return;
}


// ---- ~CToolBar @ 0042220e

void __thiscall CToolBar::~CToolBar(CToolBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042220e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CToolBar(this);
  return;
}


// ---- PreCreateWindow @ 00422256

int __thiscall CFrameWnd::PreCreateWindow(CFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- GetTickCount @ 0042225c

void CTime::GetTickCount(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetTickCount();
  return;
}


// ---- ~CSpinButtonCtrl @ 00422262

void __thiscall CSpinButtonCtrl::~CSpinButtonCtrl(CSpinButtonCtrl *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CSpinButtonCtrl(this);
  return;
}


// ---- Default @ 00422268

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- CWnd @ 0042227a

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042227a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- DDV_MinMaxUInt @ 00422280

void DDV_MinMaxUInt(CDataExchange *param_1,uint param_2,uint param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00422280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDV_MinMaxUInt(param_1,param_2,param_3,param_4);
  return;
}


// ---- DDX_Text @ 00422286

void DDX_Text(CDataExchange *param_1,int param_2,uint *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00422286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- DDX_Control @ 0042228c

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0042228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Control(param_1,param_2,param_3);
  return;
}


// ---- SetFocus @ 00422292

CWnd * __thiscall CWnd::SetFocus(CWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SetFocus(this);
  return pCVar1;
}


// ---- GetDlgItem @ 00422298

CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetDlgItem(this,param_1);
  return pCVar1;
}


// ---- ~CButton @ 004222aa

void __thiscall CButton::~CButton(CButton *this)

{
                    /* WARNING: Could not recover jumptable at 0x004222aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CButton(this);
  return;
}


// ---- FillSolidRect @ 004222b0

void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004222b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FillSolidRect(this,param_1,param_2);
  return;
}


// ---- FromHandle @ 004222b6

CDC * CDC::FromHandle(HDC__ *param_1)

{
  CDC *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004222b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- DoModal @ 004222bc

int __thiscall CColorDialog::DoModal(CColorDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004222bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CColorDialog @ 004222c2

void __thiscall
CColorDialog::CColorDialog(CColorDialog *this,ulong param_1,ulong param_2,CWnd *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004222c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CColorDialog(this,param_1,param_2,param_3);
  return;
}


// ---- DDX_Text @ 004222ec

void DDX_Text(CDataExchange *param_1,int param_2,CString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004222ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- DDV_MinMaxFloat @ 004222f2

void DDV_MinMaxFloat(CDataExchange *param_1,float *param_2,float param_3,float param_4)

{
                    /* WARNING: Could not recover jumptable at 0x004222f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDV_MinMaxFloat(param_1,param_2,param_3,param_4);
  return;
}


// ---- DDX_Text @ 004222f8

void DDX_Text(CDataExchange *param_1,int param_2,float *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004222f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- DDV_MinMaxInt @ 004222fe

void DDV_MinMaxInt(CDataExchange *param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x004222fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDV_MinMaxInt(param_1,param_2,param_3,param_4);
  return;
}


// ---- DDX_Text @ 00422304

void DDX_Text(CDataExchange *param_1,int param_2,int *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00422304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- DDX_Check @ 0042230a

void DDX_Check(CDataExchange *param_1,int param_2,int *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0042230a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Check(param_1,param_2,param_3);
  return;
}


// ---- UpdateData @ 00422316

int __thiscall CWnd::UpdateData(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateData(this,param_1);
  return iVar1;
}


// ---- SetWindowTextA @ 0042231c

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042231c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}


// ---- EnableWindow @ 00422322

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- MessageBoxA @ 00422328

int __thiscall CWnd::MessageBoxA(CWnd *this,char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- IsWindowEnabled @ 0042232e

int __thiscall CWnd::IsWindowEnabled(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042232e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsWindowEnabled(this);
  return iVar1;
}


// ---- CString @ 00422334

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- FUN_00422340 @ 00422340

void __cdecl FUN_00422340(_onexit_t param_1)

{
  if (DAT_0042c08c == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_0042c08c,&DAT_0042c088);
  return;
}


// ---- FUN_0042236c @ 0042236c

int __cdecl FUN_0042236c(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_00422340(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_0042237e @ 0042237e

type_info * __thiscall FUN_0042237e(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ftol @ 0042239a

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042239a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- _CIpow @ 004223a0

void _CIpow(void)

{
                    /* WARNING: Could not recover jumptable at 0x004223a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIpow();
  return;
}


// ---- entry @ 004223df

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
  
  puStack_c = &DAT_004243c0;
  puStack_10 = &DAT_0042256c;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_0042c088 = 0xffffffff;
  DAT_0042c08c = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_0042c07c;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0042c078;
  _DAT_0042c084 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_0042256b();
  if (DAT_00429c70 == 0) {
    __setusermatherr(&LAB_00422568);
  }
  FUN_00422556();
  initterm(&DAT_004282d4,&DAT_004282d8);
  local_70.newmode = DAT_0042c074;
  __getmainargs(&local_64,&local_74,&local_68,DAT_0042c070,&local_70);
  initterm(&DAT_00426000,&DAT_004282d0);
  pbVar4 = *(byte **)_acmdln_exref;
  if (*pbVar4 != 0x22) {
    do {
      if (*pbVar4 < 0x21) goto LAB_004224d2;
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (*pbVar4 == 0) break;
  } while (*pbVar4 != 0x22);
  if (*pbVar4 != 0x22) goto LAB_004224d2;
  do {
    pbVar4 = pbVar4 + 1;
LAB_004224d2:
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
  local_6c = FUN_00422578(pHVar3,pHVar5,(char *)pbVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(local_6c);
}


// ---- __dllonexit @ 0042253e

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042253e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- ~type_info @ 00422544

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x00422544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- _XcptFilter @ 0042254a

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042254a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}


// ---- initterm @ 00422550

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00422550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- FUN_00422556 @ 00422556

void FUN_00422556(void)

{
  _controlfp(0x10000,0x30000);
  return;
}


// ---- FUN_0042256b @ 0042256b

void FUN_0042256b(void)

{
  return;
}


// ---- _controlfp @ 00422572

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00422572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}


// ---- FUN_00422578 @ 00422578

void FUN_00422578(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  AfxWinMain(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_00422590 @ 00422590

undefined4 FUN_00422590(int param_1,undefined4 param_2)

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


// ---- AfxWinMain @ 004225d0

int AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004225d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinMain(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- Unwind@004225e0 @ 004225e0

void Unwind_004225e0(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422600 @ 00422600

void Unwind_00422600(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@0042260a @ 0042260a

void Unwind_0042260a(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@00422614 @ 00422614

void Unwind_00422614(void)

{
  int unaff_EBP;
  
  CCommandLineInfo::~CCommandLineInfo((CCommandLineInfo *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@00422630 @ 00422630

void Unwind_00422630(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@00422650 @ 00422650

void Unwind_00422650(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422670 @ 00422670

void Unwind_00422670(void)

{
  int unaff_EBP;
  
  CDocument::~CDocument(*(CDocument **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00422678 @ 00422678

void Unwind_00422678(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422690 @ 00422690

void Unwind_00422690(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@00422698 @ 00422698

void Unwind_00422698(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@004226c0 @ 004226c0

void Unwind_004226c0(void)

{
  int unaff_EBP;
  
  FUN_00407ca0((CDialog *)(unaff_EBP + -0x208));
  return;
}


// ---- Unwind@004226cb @ 004226cb

void Unwind_004226cb(void)

{
  FUN_00408200();
  return;
}


// ---- Unwind@004226d3 @ 004226d3

void Unwind_004226d3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x22c));
  return;
}


// ---- Unwind@004226de @ 004226de

void Unwind_004226de(void)

{
  int unaff_EBP;
  
  CStdioFile::~CStdioFile((CStdioFile *)(unaff_EBP + -0x224));
  return;
}


// ---- Unwind@004226e9 @ 004226e9

void Unwind_004226e9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x238));
  return;
}


// ---- Unwind@004226f4 @ 004226f4

void Unwind_004226f4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x23c));
  return;
}


// ---- Unwind@004226ff @ 004226ff

void Unwind_004226ff(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x230));
  return;
}


// ---- Unwind@0042270a @ 0042270a

void Unwind_0042270a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x23c));
  return;
}


// ---- Unwind@00422715 @ 00422715

void Unwind_00422715(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x234));
  return;
}


// ---- Unwind@00422720 @ 00422720

void Unwind_00422720(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x23c));
  return;
}


// ---- Unwind@0042272b @ 0042272b

void Unwind_0042272b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x23c));
  return;
}


// ---- Unwind@00422736 @ 00422736

void Unwind_00422736(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x23c));
  return;
}


// ---- Unwind@00422741 @ 00422741

void Unwind_00422741(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x208));
  return;
}


// ---- Unwind@00422760 @ 00422760

void Unwind_00422760(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422780 @ 00422780

void Unwind_00422780(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004227a0 @ 004227a0

void Unwind_004227a0(void)

{
  FUN_00403e90();
  return;
}


// ---- Unwind@004227c0 @ 004227c0

void Unwind_004227c0(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004227e0 @ 004227e0

void Unwind_004227e0(void)

{
  int unaff_EBP;
  
  CView::~CView(*(CView **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004227e8 @ 004227e8

void Unwind_004227e8(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0xec));
  return;
}


// ---- Unwind@004227f6 @ 004227f6

void Unwind_004227f6(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0xf8));
  return;
}


// ---- Unwind@00422804 @ 00422804

void Unwind_00422804(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x104));
  return;
}


// ---- Unwind@00422812 @ 00422812

void Unwind_00422812(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x110));
  return;
}


// ---- Unwind@00422820 @ 00422820

void Unwind_00422820(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x11c));
  return;
}


// ---- Unwind@0042282e @ 0042282e

void Unwind_0042282e(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x128));
  return;
}


// ---- Unwind@0042283c @ 0042283c

void Unwind_0042283c(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x134));
  return;
}


// ---- Unwind@0042284a @ 0042284a

void Unwind_0042284a(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x140));
  return;
}


// ---- Unwind@00422858 @ 00422858

void Unwind_00422858(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x158));
  return;
}


// ---- Unwind@00422870 @ 00422870

void Unwind_00422870(void)

{
  int unaff_EBP;
  
  CView::~CView(*(CView **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00422878 @ 00422878

void Unwind_00422878(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0xec));
  return;
}


// ---- Unwind@00422886 @ 00422886

void Unwind_00422886(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0xf8));
  return;
}


// ---- Unwind@00422894 @ 00422894

void Unwind_00422894(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x104));
  return;
}


// ---- Unwind@004228a2 @ 004228a2

void Unwind_004228a2(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x110));
  return;
}


// ---- Unwind@004228b0 @ 004228b0

void Unwind_004228b0(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x11c));
  return;
}


// ---- Unwind@004228be @ 004228be

void Unwind_004228be(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x128));
  return;
}


// ---- Unwind@004228cc @ 004228cc

void Unwind_004228cc(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x134));
  return;
}


// ---- Unwind@004228da @ 004228da

void Unwind_004228da(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x140));
  return;
}


// ---- Unwind@004228e8 @ 004228e8

void Unwind_004228e8(void)

{
  int unaff_EBP;
  
  FUN_0040cf80((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x158));
  return;
}


// ---- Unwind@004228f6 @ 004228f6

void Unwind_004228f6(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@004228fe @ 004228fe

void Unwind_004228fe(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422906 @ 00422906

void Unwind_00422906(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0042290e @ 0042290e

void Unwind_0042290e(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422916 @ 00422916

void Unwind_00422916(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0042291e @ 0042291e

void Unwind_0042291e(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422926 @ 00422926

void Unwind_00422926(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0042292e @ 0042292e

void Unwind_0042292e(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422936 @ 00422936

void Unwind_00422936(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422950 @ 00422950

void Unwind_00422950(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422970 @ 00422970

void Unwind_00422970(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422990 @ 00422990

void Unwind_00422990(void)

{
  int unaff_EBP;
  
  CClientDC::~CClientDC((CClientDC *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@004229b0 @ 004229b0

void Unwind_004229b0(void)

{
  int unaff_EBP;
  
  CClientDC::~CClientDC((CClientDC *)(unaff_EBP + -0x48));
  return;
}


// ---- Unwind@004229b8 @ 004229b8

void Unwind_004229b8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -100));
  return;
}


// ---- Unwind@004229c0 @ 004229c0

void Unwind_004229c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x60));
  return;
}


// ---- Unwind@004229c8 @ 004229c8

void Unwind_004229c8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@004229d0 @ 004229d0

void Unwind_004229d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@004229d8 @ 004229d8

void Unwind_004229d8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x5c));
  return;
}


// ---- Unwind@004229e0 @ 004229e0

void Unwind_004229e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x50));
  return;
}


// ---- Unwind@004229e8 @ 004229e8

void Unwind_004229e8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x50));
  return;
}


// ---- Unwind@004229f0 @ 004229f0

void Unwind_004229f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x5c));
  return;
}


// ---- Unwind@004229f8 @ 004229f8

void Unwind_004229f8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@00422a00 @ 00422a00

void Unwind_00422a00(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x4c));
  return;
}


// ---- Unwind@00422a08 @ 00422a08

void Unwind_00422a08(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x4c));
  return;
}


// ---- Unwind@00422a20 @ 00422a20

void Unwind_00422a20(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422a40 @ 00422a40

void Unwind_00422a40(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422a60 @ 00422a60

void Unwind_00422a60(void)

{
  int unaff_EBP;
  
  FUN_0040d6a0((CDialog *)(unaff_EBP + -0x37c));
  return;
}


// ---- Unwind@00422a6b @ 00422a6b

void Unwind_00422a6b(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x37c));
  return;
}


// ---- Unwind@00422a76 @ 00422a76

void Unwind_00422a76(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0x314));
  return;
}


// ---- Unwind@00422a81 @ 00422a81

void Unwind_00422a81(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0x2d0));
  return;
}


// ---- Unwind@00422a8c @ 00422a8c

void Unwind_00422a8c(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(unaff_EBP + -0x28c));
  return;
}


// ---- Unwind@00422a97 @ 00422a97

void Unwind_00422a97(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(unaff_EBP + -0x24c));
  return;
}


// ---- Unwind@00422aa2 @ 00422aa2

void Unwind_00422aa2(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0x20c));
  return;
}


// ---- Unwind@00422aad @ 00422aad

void Unwind_00422aad(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0x1c8));
  return;
}


// ---- Unwind@00422ab8 @ 00422ab8

void Unwind_00422ab8(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@00422ac3 @ 00422ac3

void Unwind_00422ac3(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0x140));
  return;
}


// ---- Unwind@00422ace @ 00422ace

void Unwind_00422ace(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0xfc));
  return;
}


// ---- Unwind@00422ad9 @ 00422ad9

void Unwind_00422ad9(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(unaff_EBP + -0xb8));
  return;
}


// ---- Unwind@00422ae4 @ 00422ae4

void Unwind_00422ae4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00422b00 @ 00422b00

void Unwind_00422b00(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422b08 @ 00422b08

void Unwind_00422b08(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x68));
  return;
}


// ---- Unwind@00422b13 @ 00422b13

void Unwind_00422b13(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0xac));
  return;
}


// ---- Unwind@00422b21 @ 00422b21

void Unwind_00422b21(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0xf0));
  return;
}


// ---- Unwind@00422b2f @ 00422b2f

void Unwind_00422b2f(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x130));
  return;
}


// ---- Unwind@00422b3d @ 00422b3d

void Unwind_00422b3d(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x170));
  return;
}


// ---- Unwind@00422b4b @ 00422b4b

void Unwind_00422b4b(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x1b4));
  return;
}


// ---- Unwind@00422b59 @ 00422b59

void Unwind_00422b59(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x1f8));
  return;
}


// ---- Unwind@00422b67 @ 00422b67

void Unwind_00422b67(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x23c));
  return;
}


// ---- Unwind@00422b75 @ 00422b75

void Unwind_00422b75(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x280));
  return;
}


// ---- Unwind@00422b83 @ 00422b83

void Unwind_00422b83(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x2c4));
  return;
}


// ---- Unwind@00422b91 @ 00422b91

void Unwind_00422b91(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x368));
  return;
}


// ---- Unwind@00422bb0 @ 00422bb0

void Unwind_00422bb0(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422bd0 @ 00422bd0

void Unwind_00422bd0(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422bf0 @ 00422bf0

void Unwind_00422bf0(void)

{
  int unaff_EBP;
  
  CFrameWnd::~CFrameWnd(*(CFrameWnd **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422bf8 @ 00422bf8

void Unwind_00422bf8(void)

{
  int unaff_EBP;
  
  CStatusBar::~CStatusBar((CStatusBar *)(*(int *)(unaff_EBP + -0x10) + 0xf4));
  return;
}


// ---- Unwind@00422c10 @ 00422c10

void Unwind_00422c10(void)

{
  int unaff_EBP;
  
  CFrameWnd::~CFrameWnd(*(CFrameWnd **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422c18 @ 00422c18

void Unwind_00422c18(void)

{
  int unaff_EBP;
  
  CStatusBar::~CStatusBar((CStatusBar *)(*(int *)(unaff_EBP + -0x10) + 0xf4));
  return;
}


// ---- Unwind@00422c30 @ 00422c30

void Unwind_00422c30(void)

{
  int unaff_EBP;
  
  FUN_004143c0((CDialog *)(unaff_EBP + -0xb0));
  return;
}


// ---- Unwind@00422c3b @ 00422c3b

void Unwind_00422c3b(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0xb0));
  return;
}


// ---- Unwind@00422c50 @ 00422c50

void Unwind_00422c50(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422c70 @ 00422c70

void Unwind_00422c70(void)

{
  int unaff_EBP;
  
  FUN_004213c0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@00422c90 @ 00422c90

void Unwind_00422c90(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422cb0 @ 00422cb0

void Unwind_00422cb0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x90));
  return;
}


// ---- Unwind@00422cd0 @ 00422cd0

void Unwind_00422cd0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422cd8 @ 00422cd8

void Unwind_00422cd8(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x68));
  return;
}


// ---- Unwind@00422ce3 @ 00422ce3

void Unwind_00422ce3(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0xac));
  return;
}


// ---- Unwind@00422cf1 @ 00422cf1

void Unwind_00422cf1(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0xf0));
  return;
}


// ---- Unwind@00422cff @ 00422cff

void Unwind_00422cff(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x130));
  return;
}


// ---- Unwind@00422d0d @ 00422d0d

void Unwind_00422d0d(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x170));
  return;
}


// ---- Unwind@00422d1b @ 00422d1b

void Unwind_00422d1b(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x1b4));
  return;
}


// ---- Unwind@00422d29 @ 00422d29

void Unwind_00422d29(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x1f8));
  return;
}


// ---- Unwind@00422d37 @ 00422d37

void Unwind_00422d37(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x23c));
  return;
}


// ---- Unwind@00422d45 @ 00422d45

void Unwind_00422d45(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x280));
  return;
}


// ---- Unwind@00422d53 @ 00422d53

void Unwind_00422d53(void)

{
  int unaff_EBP;
  
  FUN_0041a460((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x2c4));
  return;
}


// ---- Unwind@00422d61 @ 00422d61

void Unwind_00422d61(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x368));
  return;
}


// ---- Unwind@00422d6f @ 00422d6f

void Unwind_00422d6f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x36c));
  return;
}


// ---- Unwind@00422d90 @ 00422d90

void Unwind_00422d90(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@00422d98 @ 00422d98

void Unwind_00422d98(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422da0 @ 00422da0

void Unwind_00422da0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422da8 @ 00422da8

void Unwind_00422da8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422dc0 @ 00422dc0

void Unwind_00422dc0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422de0 @ 00422de0

void Unwind_00422de0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422e00 @ 00422e00

void Unwind_00422e00(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422e20 @ 00422e20

void Unwind_00422e20(void)

{
  int unaff_EBP;
  
  FUN_00404150(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422e40 @ 00422e40

void Unwind_00422e40(void)

{
  int unaff_EBP;
  
  FUN_00407300(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00422e60 @ 00422e60

void Unwind_00422e60(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@00422e6b @ 00422e6b

void Unwind_00422e6b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x180) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@00422e90 @ 00422e90

void Unwind_00422e90(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@00422e9b @ 00422e9b

void Unwind_00422e9b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x180) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@00422ec0 @ 00422ec0

void Unwind_00422ec0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


