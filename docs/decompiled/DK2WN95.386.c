// Decompiled with Ghidra from DK2WN95.386
// Format: Old-style DOS Executable (MZ), image base 0000:0000

// ---- entry @ 1000:0000

/* WARNING: Instruction at (ram,0x0001009c) overlaps instruction at (ram,0x0001009b)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001009d) */

void entry(void)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 uVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  byte bVar10;
  int iVar8;
  uint uVar9;
  char cVar11;
  int in_CX;
  undefined2 uVar12;
  byte bVar13;
  char *in_BX;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int unaff_BP;
  undefined2 *unaff_SI;
  char *pcVar16;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined4 uVar17;
  
  uRam000100b6 = 0x1000;
  puVar14 = (undefined1 *)0xb8;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  uVar17 = (*pcVar5)();
  uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
  iVar8 = (int)uVar17;
  *(undefined1 **)(puVar14 + -2) = puVar14;
  puVar15 = puVar14 + -4;
  *(undefined2 *)(puVar14 + -4) = 0x7369;
  bVar13 = (byte)((ulong)uVar17 >> 0x18);
  (in_BX + (int)unaff_SI)[0x72] = (in_BX + (int)unaff_SI)[0x72] & bVar13;
  out(*unaff_SI,uVar12);
  pcVar3 = (char *)(unaff_DI + 1);
  uVar4 = in(uVar12);
  *unaff_DI = uVar4;
  pbVar1 = (byte *)(pcVar3 + unaff_BP + 0x61);
  bVar10 = (byte)((ulong)uVar17 >> 8);
  *pbVar1 = *pbVar1 & bVar10;
  out(*(undefined1 *)(unaff_SI + 1),uVar12);
  out(*(undefined1 *)((int)unaff_SI + 3),uVar12);
  pcVar16 = (char *)(unaff_SI + 3);
  out(unaff_SI[2],uVar12);
  if (*pbVar1 != 0) {
    pcVar2 = pcVar16;
    pcVar16 = (char *)((int)unaff_SI + 7);
    out(*pcVar2,uVar12);
    bVar7 = (byte)((uint)in_CX >> 8);
    (in_BX + (int)pcVar3)[0x6e] = (in_BX + (int)pcVar3)[0x6e] & bVar7;
    *(byte *)(unaff_SI + 0x2b) = *(byte *)(unaff_SI + 0x2b) & (byte)uVar17;
    *(char **)(puVar14 + -6) = in_BX;
    *(byte *)((int)unaff_DI + 0x71) = *(byte *)((int)unaff_DI + 0x71) & bVar7;
    iVar8 = (uint)(bVar10 | 10) << 8;
    in_BX[(int)pcVar16] = in_BX[(int)pcVar16];
    in_BX[(int)pcVar16] = in_BX[(int)pcVar16];
    in_BX[(int)pcVar16] = in_BX[(int)pcVar16];
    puVar15 = puVar14 + -7;
    unaff_BP = unaff_BP + 1;
  }
  cVar6 = (char)iVar8;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  cVar6 = cVar6 + in_BX[(int)pcVar16];
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  (in_BX + (int)pcVar16)[2] = (in_BX + (int)pcVar16)[2] + cVar6;
  *(uint *)(in_BX + (int)pcVar16) =
       *(uint *)(in_BX + (int)pcVar16) & CONCAT11((char)((uint)iVar8 >> 8),cVar6);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  cVar6 = cVar6 + (char)*(undefined2 *)(in_BX + (int)pcVar16);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  pcVar16[unaff_BP] = pcVar16[unaff_BP] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  cVar6 = cVar6 + *pcVar3;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  uVar17 = *(undefined4 *)(in_BX + (int)pcVar16);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + (char)uVar17;
  uVar9 = (int)uVar17 + *(int *)(in_BX + (int)pcVar16);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + (char)uVar9;
  cVar11 = (char)(uVar9 >> 8);
  cVar6 = (char)(uVar9 | 1);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  *(uint *)(in_BX + (int)pcVar16) = *(int *)(in_BX + (int)pcVar16) + (uVar9 | 1);
  pcVar3[unaff_BP + 1] = pcVar3[unaff_BP + 1] + (char)in_BX;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + cVar6;
  *(char *)((int)unaff_DI + 3) = *(char *)((int)unaff_DI + 3) + cVar11;
  *pcVar3 = *pcVar3 + (char)((uint)(in_CX + -1) >> 8);
  bVar7 = cVar6 + in_BX[(int)pcVar16];
  in_BX[6] = in_BX[6] + cVar11;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[6] = in_BX[6] + cVar11;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  pbVar1 = (byte *)(in_BX + (int)pcVar16);
  bVar10 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7 + CARRY1(bVar10,bVar7);
  *in_BX = *in_BX + (char)in_BX;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  *pcVar16 = *pcVar16 + (char)(in_CX + -1);
  *(uint *)(puVar15 + -2) = CONCAT11(cVar11,bVar7);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  pcVar16[unaff_BP] = pcVar16[unaff_BP] + bVar13;
  *(uint *)(puVar15 + -4) = CONCAT11(cVar11,bVar7);
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  pcVar16[unaff_BP] = pcVar16[unaff_BP] & bVar7;
  in_BX[(int)pcVar16] = in_BX[(int)pcVar16] + bVar7;
  *pcVar16 = *pcVar16 + bVar7;
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


