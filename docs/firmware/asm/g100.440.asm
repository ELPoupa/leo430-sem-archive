; g100.440 .text, 9813 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_process_direct_eht_set_cmds:
00000: a38f                      MOVE   A12,-*SP,1
00010: a3cf                      MOVE   A14,-*SP,1
00020: 09c8 0280                 MOVI   280h,A8
00040: 930e                      MOVE   A8,*A14+,1
00050: 09e8 8520 0002            MOVI   28520h,A8
00080: 930e                      MOVE   A8,*A14+,1
00090: 09e8 5445 514d            MOVI   514D5445h,A8
000c0: 930e                      MOVE   A8,*A14+,1
000d0: 1a28                      MOVK   11h,A8
000e0: 930e                      MOVE   A8,*A14+,1
000f0: 0d5f 0000 0000            CALLA  0h
00120: a3cf                      MOVE   A14,-*SP,1
00130: 09c8 0058                 MOVI   58h,A8
00150: 930e                      MOVE   A8,*A14+,1
00160: 09e8 d6e0 0002            MOVI   2D6E0h,A8
00190: 930e                      MOVE   A8,*A14+,1
001a0: 09e8 5245 514d            MOVI   514D5245h,A8
001d0: 930e                      MOVE   A8,*A14+,1
001e0: 1a88                      MOVK   14h,A8
001f0: 930e                      MOVE   A8,*A14+,1
00200: 0d5f 0000 0000            CALLA  0h
00230: 0d5f 1520 0000            CALLA  1520h
00260: a3cf                      MOVE   A14,-*SP,1
00270: 1828                      MOVK   1h,A8
00280: 930e                      MOVE   A8,*A14+,1
00290: 1928                      MOVK   9h,A8
002a0: 930e                      MOVE   A8,*A14+,1
002b0: 0d5f 8b60 0000            CALLA  8B60h
002e0: c000 0110                 JR     1400h
00300: 07a8 8360 0002            MOVE   @28360h,A8,1
00330: 3608                      CMPK   10h,A8
00340: c300 010a                 JRHI   1400h
00360: 24a8                      SLL    5h,A8
00370: 0b28 6560 0002            ADDI   26560h,A8
003a0: 8708                      MOVE   *A8,A8,1
003b0: 0168                      JUMP   A8
003c0: a3cf                      MOVE   A14,-*SP,1
003d0: 09e8 8380 0002            MOVI   28380h,A8
00400: 930e                      MOVE   A8,*A14+,1
00410: 0d5f b2f0 0000            CALLA  B2F0h
00440: c000 00fa                 JR     1400h
00460: a3cf                      MOVE   A14,-*SP,1
00470: 09e8 d5e0 0002            MOVI   2D5E0h,A8
004a0: 930e                      MOVE   A8,*A14+,1
004b0: 1a28                      MOVK   11h,A8
004c0: 930e                      MOVE   A8,*A14+,1
004d0: 0d5f 0000 0000            CALLA  0h
00500: 4d08                      MOVE   A8,A8
00510: cb27                      JRNE   790h
00520: c018                      JR     6B0h
00530: a3cf                      MOVE   A14,-*SP,1
00540: 4508                      SUB    A8,A8
00550: 930e                      MOVE   A8,*A14+,1
00560: 09e8 8320 0002            MOVI   28320h,A8
00590: 930e                      MOVE   A8,*A14+,1
005a0: 1a28                      MOVK   11h,A8
005b0: 930e                      MOVE   A8,*A14+,1
005c0: 0d5f 0000 0000            CALLA  0h
005f0: a3cf                      MOVE   A14,-*SP,1
00600: 09e8 d5e0 0002            MOVI   2D5E0h,A8
00630: 930e                      MOVE   A8,*A14+,1
00640: 1a28                      MOVK   11h,A8
00650: 930e                      MOVE   A8,*A14+,1
00660: 0d5f 0000 0000            CALLA  0h
00690: 4d08                      MOVE   A8,A8
006a0: cb0e                      JRNE   790h
006b0: 07a8 d620 0002            MOVE   @2D620h,A8,1
006e0: 1588                      SUBK   Ch,A8
006f0: cb09                      JRNE   790h
00700: 0570                      SETF   10h,1,0
00710: 05a8 d660 0002            MOVE   @2D660h,A8,0
00740: 05ac 83a0 0002            MOVE   @283A0h,A12,0
00770: 4988                      CMP    A12,A8
00780: cada                      JREQ   530h
00790: a3cf                      MOVE   A14,-*SP,1
007a0: d60e 8380 0002            MOVE   @28380h,*A14+,1
007d0: 0570                      SETF   10h,1,0
007e0: 05ac 83a0 0002            MOVE   @283A0h,A12,0
00810: 938e                      MOVE   A12,*A14+,1
00820: 0d5f 7930 0000            CALLA  7930h
00850: c000 00b9                 JR     1400h
00870: a3cf                      MOVE   A14,-*SP,1
00880: 0570                      SETF   10h,1,0
00890: 05ac 8380 0002            MOVE   @28380h,A12,0
008c0: 938e                      MOVE   A12,*A14+,1
008d0: 1868                      MOVK   3h,A8
008e0: 930e                      MOVE   A8,*A14+,1
008f0: 0d5f 8b60 0000            CALLA  8B60h
00920: c000 00ac                 JR     1400h
00940: a3cf                      MOVE   A14,-*SP,1
00950: 0570                      SETF   10h,1,0
00960: 05ac 8380 0002            MOVE   @28380h,A12,0
00990: 938e                      MOVE   A12,*A14+,1
009a0: 0d5f a480 0000            CALLA  A480h
009d0: c000 00a1                 JR     1400h
009f0: a3cf                      MOVE   A14,-*SP,1
00a00: 09ec d5e0 0002            MOVI   2D5E0h,A12
00a30: 938e                      MOVE   A12,*A14+,1
00a40: 1a28                      MOVK   11h,A8
00a50: 930e                      MOVE   A8,*A14+,1
00a60: 0d5f 0000 0000            CALLA  0h
00a90: 4d08                      MOVE   A8,A8
00aa0: cb26                      JRNE   D10h
00ab0: c017                      JR     C30h
00ac0: a3cf                      MOVE   A14,-*SP,1
00ad0: 458c                      SUB    A12,A12
00ae0: 938e                      MOVE   A12,*A14+,1
00af0: 09e8 8320 0002            MOVI   28320h,A8
00b20: 930e                      MOVE   A8,*A14+,1
00b30: 1a2c                      MOVK   11h,A12
00b40: 938e                      MOVE   A12,*A14+,1
00b50: 0d5f 0000 0000            CALLA  0h
00b80: a3cf                      MOVE   A14,-*SP,1
00b90: 09e8 d5e0 0002            MOVI   2D5E0h,A8
00bc0: 930e                      MOVE   A8,*A14+,1
00bd0: 938e                      MOVE   A12,*A14+,1
00be0: 0d5f 0000 0000            CALLA  0h
00c10: 4d08                      MOVE   A8,A8
00c20: cb0e                      JRNE   D10h
00c30: 07ac d620 0002            MOVE   @2D620h,A12,1
00c60: 14ec                      SUBK   7h,A12
00c70: cb09                      JRNE   D10h
00c80: 0570                      SETF   10h,1,0
00c90: 05ac d660 0002            MOVE   @2D660h,A12,0
00cc0: 05a8 83a0 0002            MOVE   @283A0h,A8,0
00cf0: 490c                      CMP    A8,A12
00d00: cadb                      JREQ   AC0h
00d10: a3cf                      MOVE   A14,-*SP,1
00d20: d60e 8380 0002            MOVE   @28380h,*A14+,1
00d50: 0570                      SETF   10h,1,0
00d60: 05ac 83a0 0002            MOVE   @283A0h,A12,0
00d90: 938e                      MOVE   A12,*A14+,1
00da0: 0d5f 7930 0000            CALLA  7930h
00dd0: c062                      JR     1400h
00de0: a3cf                      MOVE   A14,-*SP,1
00df0: 09ec d5e0 0002            MOVI   2D5E0h,A12
00e20: 938e                      MOVE   A12,*A14+,1
00e30: 1a28                      MOVK   11h,A8
00e40: 930e                      MOVE   A8,*A14+,1
00e50: 0d5f 0000 0000            CALLA  0h
00e80: 4d08                      MOVE   A8,A8
00e90: cb1d                      JRNE   1070h
00ea0: c017                      JR     1020h
00eb0: a3cf                      MOVE   A14,-*SP,1
00ec0: 458c                      SUB    A12,A12
00ed0: 938e                      MOVE   A12,*A14+,1
00ee0: 09e8 8320 0002            MOVI   28320h,A8
00f10: 930e                      MOVE   A8,*A14+,1
00f20: 1a2c                      MOVK   11h,A12
00f30: 938e                      MOVE   A12,*A14+,1
00f40: 0d5f 0000 0000            CALLA  0h
00f70: a3cf                      MOVE   A14,-*SP,1
00f80: 09e8 d5e0 0002            MOVI   2D5E0h,A8
00fb0: 930e                      MOVE   A8,*A14+,1
00fc0: 938e                      MOVE   A12,*A14+,1
00fd0: 0d5f 0000 0000            CALLA  0h
01000: 4d08                      MOVE   A8,A8
01010: cb05                      JRNE   1070h
01020: 07ac d620 0002            MOVE   @2D620h,A12,1
01050: 14cc                      SUBK   6h,A12
01060: cae4                      JREQ   EB0h
01070: a3cf                      MOVE   A14,-*SP,1
01080: 0570                      SETF   10h,1,0
01090: 05ac 8380 0002            MOVE   @28380h,A12,0
010c0: 938e                      MOVE   A12,*A14+,1
010d0: 0d5f 6cf0 0000            CALLA  6CF0h
01100: c02f                      JR     1400h
01110: a3cf                      MOVE   A14,-*SP,1
01120: 0570                      SETF   10h,1,0
01130: 05a8 8380 0002            MOVE   @28380h,A8,0
01160: 0d5f 0c50 0002            CALLA  20C50h
01190: 0d5f 5ea0 0000            CALLA  5EA0h
011c0: c023                      JR     1400h
011d0: a3cf                      MOVE   A14,-*SP,1
011e0: d60e 8380 0002            MOVE   @28380h,*A14+,1
01210: 0d5f 5460 0000            CALLA  5460h
01240: c01b                      JR     1400h
01250: a3cf                      MOVE   A14,-*SP,1
01260: d60e 8380 0002            MOVE   @28380h,*A14+,1
01290: 0d5f 4960 0000            CALLA  4960h
012c0: c013                      JR     1400h
012d0: a3cf                      MOVE   A14,-*SP,1
012e0: 0570                      SETF   10h,1,0
012f0: 05ac 8380 0002            MOVE   @28380h,A12,0
01320: 938e                      MOVE   A12,*A14+,1
01330: 0d5f 4420 0000            CALLA  4420h
01360: c009                      JR     1400h
01370: a3cf                      MOVE   A14,-*SP,1
01380: 0570                      SETF   10h,1,0
01390: 05ac 8380 0002            MOVE   @28380h,A12,0
013c0: 938e                      MOVE   A12,*A14+,1
013d0: 0d5f 3ed0 0000            CALLA  3ED0h
01400: a3cf                      MOVE   A14,-*SP,1
01410: 458c                      SUB    A12,A12
01420: 938e                      MOVE   A12,*A14+,1
01430: 09e8 8320 0002            MOVI   28320h,A8
01460: 930e                      MOVE   A8,*A14+,1
01470: 1a2c                      MOVK   11h,A12
01480: 938e                      MOVE   A12,*A14+,1
01490: 0d5f 0000 0000            CALLA  0h
014c0: 4f0e                      MOVE   A8,B14
014d0: ca00 fee1                 JREQ   300h
014f0: 15fe                      SUBK   Fh,B14
01500: cbef                      JRNE   1400h
01510: c0ee                      JR     1400h

_read_eht_set_hw_id:
01520: 098f 000c                 MMTM   SP,A12,A13
01540: 4dcd                      MOVE   A14,A13
01550: 100e                      ADDK   20h,A14
01560: 09ec 4ca8 0003            MOVI   34CA8h,A12
01590: 4508                      SUB    A8,A8
015a0: 8d0d                      MOVB   A8,*A13
015b0: 09c8 003f                 MOVI   3Fh,A8
015d0: 0568                      SETF   8h,1,0
015e0: 910c                      MOVE   A8,*A12+,0
015f0: 1128                      ADDK   9h,A8
01600: 910c                      MOVE   A8,*A12+,0
01610: 19a8                      MOVK   Dh,A8
01620: 910c                      MOVE   A8,*A12+,0
01630: 4508                      SUB    A8,A8
01640: 8d0c                      MOVB   A8,*A12
01650: 192c                      MOVK   9h,A12
01660: 05ec 4ca0 0003            MOVB   A12,@34CA0h
01690: a3cf                      MOVE   A14,-*SP,1
016a0: 09e8 4ca8 0003            MOVI   34CA8h,A8
016d0: 930e                      MOVE   A8,*A14+,1
016e0: 0d5f 6440 0002            CALLA  26440h
01710: 10c8                      ADDK   6h,A8
01720: 0788 4c60 0003            MOVE   A8,@34C60h,1
01750: 1a8c                      MOVK   14h,A12
01760: 078c 4c80 0003            MOVE   A12,@34C80h,1
01790: a3cf                      MOVE   A14,-*SP,1
017a0: 09e8 4c60 0003            MOVI   34C60h,A8
017d0: 930e                      MOVE   A8,*A14+,1
017e0: 1828                      MOVK   1h,A8
017f0: 930e                      MOVE   A8,*A14+,1
01800: 0d5f 0000 0000            CALLA  0h
01830: 4f0e                      MOVE   A8,B14
01840: cb00 0262                 JRNE   3E80h
01860: a3cf                      MOVE   A14,-*SP,1
01870: 4508                      SUB    A8,A8
01880: 930e                      MOVE   A8,*A14+,1
01890: 09e8 d9a0 0002            MOVI   2D9A0h,A8
018c0: 930e                      MOVE   A8,*A14+,1
018d0: 938e                      MOVE   A12,*A14+,1
018e0: 0d5f 0000 0000            CALLA  0h
01910: 4f0e                      MOVE   A8,B14
01920: cb00 0240                 JRNE   3D40h
01940: a3cf                      MOVE   A14,-*SP,1
01950: 93ae                      MOVE   A13,*A14+,1
01960: 09e8 d9e0 0002            MOVI   2D9E0h,A8
01990: 930e                      MOVE   A8,*A14+,1
019a0: 0d5f d7b0 0001            CALLA  1D7B0h
019d0: 8fa8                      MOVB   *A13,A8
019e0: 0be8 ffbe                 SUBI   41h,A8
01a00: 36e8                      CMPK   17h,A8
01a10: c306                      JRHI   1A80h
01a20: 24a8                      SLL    5h,A8
01a30: 0b28 6780 0002            ADDI   26780h,A8
01a60: 8708                      MOVE   *A8,A8,1
01a70: 0168                      JUMP   A8
01a80: 09ec 6000 46ea            MOVI   46EA6000h,A12
01ab0: 078c 7980 0002            MOVE   A12,@27980h,1
01ae0: 09e8 0000 4396            MOVI   43960000h,A8
01b10: 0788 79a0 0002            MOVE   A8,@279A0h,1
01b40: 4508                      SUB    A8,A8
01b50: 0570                      SETF   10h,1,0
01b60: 0588 79c0 0002            MOVE   A8,@279C0h,0
01b90: 09c8 0042                 MOVI   42h,A8
01bb0: 05e8 79d0 0002            MOVB   A8,@279D0h
01be0: 4508                      SUB    A8,A8
01bf0: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
01c20: c000 0210                 JR     3D40h
01c40: 09ec 6000 46ea            MOVI   46EA6000h,A12
01c70: 078c 7980 0002            MOVE   A12,@27980h,1
01ca0: 09e8 0000 4396            MOVI   43960000h,A8
01cd0: 0788 79a0 0002            MOVE   A8,@279A0h,1
01d00: 4508                      SUB    A8,A8
01d10: 0570                      SETF   10h,1,0
01d20: 0588 79c0 0002            MOVE   A8,@279C0h,0
01d50: 09c8 0058                 MOVI   58h,A8
01d70: 05e8 79d0 0002            MOVB   A8,@279D0h
01da0: 09e8 8000 0000            MOVI   8000h,A8
01dd0: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
01e00: c000 01f2                 JR     3D40h
01e20: 09ec 4000 471c            MOVI   471C4000h,A12
01e50: 078c 7980 0002            MOVE   A12,@27980h,1
01e80: 09e8 0000 4396            MOVI   43960000h,A8
01eb0: 0788 79a0 0002            MOVE   A8,@279A0h,1
01ee0: 4508                      SUB    A8,A8
01ef0: 0570                      SETF   10h,1,0
01f00: 0588 79c0 0002            MOVE   A8,@279C0h,0
01f30: 09c8 0056                 MOVI   56h,A8
01f50: 05e8 79d0 0002            MOVB   A8,@279D0h
01f80: 4508                      SUB    A8,A8
01f90: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
01fc0: c000 01d6                 JR     3D40h
01fe0: 09ec 5000 47c3            MOVI   47C35000h,A12
02010: 078c 7980 0002            MOVE   A12,@27980h,1
02040: 09e8 0000 4396            MOVI   43960000h,A8
02070: 0788 79a0 0002            MOVE   A8,@279A0h,1
020a0: 4508                      SUB    A8,A8
020b0: 0570                      SETF   10h,1,0
020c0: 0588 79c0 0002            MOVE   A8,@279C0h,0
020f0: 09c8 0055                 MOVI   55h,A8
02110: 05e8 79d0 0002            MOVB   A8,@279D0h
02140: 4508                      SUB    A8,A8
02150: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02180: c000 01ba                 JR     3D40h
021a0: 09ec 4000 471c            MOVI   471C4000h,A12
021d0: 078c 7980 0002            MOVE   A12,@27980h,1
02200: 09e8 0000 4396            MOVI   43960000h,A8
02230: 0788 79a0 0002            MOVE   A8,@279A0h,1
02260: 4508                      SUB    A8,A8
02270: 0570                      SETF   10h,1,0
02280: 0588 79c0 0002            MOVE   A8,@279C0h,0
022b0: 09c8 0054                 MOVI   54h,A8
022d0: 05e8 79d0 0002            MOVB   A8,@279D0h
02300: 4508                      SUB    A8,A8
02310: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02340: c000 019e                 JR     3D40h
02360: 09ec 5000 47c3            MOVI   47C35000h,A12
02390: 078c 7980 0002            MOVE   A12,@27980h,1
023c0: 09e8 0000 4396            MOVI   43960000h,A8
023f0: 0788 79a0 0002            MOVE   A8,@279A0h,1
02420: 4508                      SUB    A8,A8
02430: 0570                      SETF   10h,1,0
02440: 0588 79c0 0002            MOVE   A8,@279C0h,0
02470: 09c8 0053                 MOVI   53h,A8
02490: 05e8 79d0 0002            MOVB   A8,@279D0h
024c0: 4508                      SUB    A8,A8
024d0: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02500: c000 0182                 JR     3D40h
02520: 09ec 6000 46ea            MOVI   46EA6000h,A12
02550: 078c 7980 0002            MOVE   A12,@27980h,1
02580: 09e8 0000 42c8            MOVI   42C80000h,A8
025b0: 0788 79a0 0002            MOVE   A8,@279A0h,1
025e0: 4508                      SUB    A8,A8
025f0: 0570                      SETF   10h,1,0
02600: 0588 79c0 0002            MOVE   A8,@279C0h,0
02630: 09c8 004e                 MOVI   4Eh,A8
02650: 05e8 79d0 0002            MOVB   A8,@279D0h
02680: 4508                      SUB    A8,A8
02690: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
026c0: c000 0166                 JR     3D40h
026e0: 09ec 4000 471c            MOVI   471C4000h,A12
02710: 078c 7980 0002            MOVE   A12,@27980h,1
02740: 09e8 0000 42c8            MOVI   42C80000h,A8
02770: 0788 79a0 0002            MOVE   A8,@279A0h,1
027a0: 4508                      SUB    A8,A8
027b0: 0570                      SETF   10h,1,0
027c0: 0588 79c0 0002            MOVE   A8,@279C0h,0
027f0: 09c8 004d                 MOVI   4Dh,A8
02810: 05e8 79d0 0002            MOVB   A8,@279D0h
02840: 4508                      SUB    A8,A8
02850: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02880: c000 014a                 JR     3D40h
028a0: 09ec 6000 46ea            MOVI   46EA6000h,A12
028d0: 078c 7980 0002            MOVE   A12,@27980h,1
02900: 09e8 0000 4396            MOVI   43960000h,A8
02930: 0788 79a0 0002            MOVE   A8,@279A0h,1
02960: 1828                      MOVK   1h,A8
02970: 0570                      SETF   10h,1,0
02980: 0588 79c0 0002            MOVE   A8,@279C0h,0
029b0: 09c8 004c                 MOVI   4Ch,A8
029d0: 05e8 79d0 0002            MOVB   A8,@279D0h
02a00: 4508                      SUB    A8,A8
02a10: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02a40: c000 012e                 JR     3D40h
02a60: 09ec 5000 46c3            MOVI   46C35000h,A12
02a90: 078c 7980 0002            MOVE   A12,@27980h,1
02ac0: 09e8 0000 4396            MOVI   43960000h,A8
02af0: 0788 79a0 0002            MOVE   A8,@279A0h,1
02b20: 1828                      MOVK   1h,A8
02b30: 0570                      SETF   10h,1,0
02b40: 0588 79c0 0002            MOVE   A8,@279C0h,0
02b70: 09c8 004b                 MOVI   4Bh,A8
02b90: 05e8 79d0 0002            MOVB   A8,@279D0h
02bc0: 4508                      SUB    A8,A8
02bd0: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02c00: c000 0112                 JR     3D40h
02c20: 09ec 6000 46ea            MOVI   46EA6000h,A12
02c50: 078c 7980 0002            MOVE   A12,@27980h,1
02c80: 09e8 0000 4396            MOVI   43960000h,A8
02cb0: 0788 79a0 0002            MOVE   A8,@279A0h,1
02ce0: 4508                      SUB    A8,A8
02cf0: 0570                      SETF   10h,1,0
02d00: 0588 79c0 0002            MOVE   A8,@279C0h,0
02d30: 09c8 004a                 MOVI   4Ah,A8
02d50: 05e8 79d0 0002            MOVB   A8,@279D0h
02d80: 4508                      SUB    A8,A8
02d90: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02dc0: c000 00f6                 JR     3D40h
02de0: 09ec 4000 471c            MOVI   471C4000h,A12
02e10: 078c 7980 0002            MOVE   A12,@27980h,1
02e40: 09e8 0000 4396            MOVI   43960000h,A8
02e70: 0788 79a0 0002            MOVE   A8,@279A0h,1
02ea0: 4508                      SUB    A8,A8
02eb0: 0570                      SETF   10h,1,0
02ec0: 0588 79c0 0002            MOVE   A8,@279C0h,0
02ef0: 09c8 0049                 MOVI   49h,A8
02f10: 05e8 79d0 0002            MOVB   A8,@279D0h
02f40: 4508                      SUB    A8,A8
02f50: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
02f80: c000 00da                 JR     3D40h
02fa0: 09ec 6000 46ea            MOVI   46EA6000h,A12
02fd0: 078c 7980 0002            MOVE   A12,@27980h,1
03000: 09e8 0000 4396            MOVI   43960000h,A8
03030: 0788 79a0 0002            MOVE   A8,@279A0h,1
03060: 1828                      MOVK   1h,A8
03070: 0570                      SETF   10h,1,0
03080: 0588 79c0 0002            MOVE   A8,@279C0h,0
030b0: 09c8 0048                 MOVI   48h,A8
030d0: 05e8 79d0 0002            MOVB   A8,@279D0h
03100: 4508                      SUB    A8,A8
03110: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
03140: c000 00be                 JR     3D40h
03160: 09ec 5000 46c3            MOVI   46C35000h,A12
03190: 078c 7980 0002            MOVE   A12,@27980h,1
031c0: 09e8 0000 4396            MOVI   43960000h,A8
031f0: 0788 79a0 0002            MOVE   A8,@279A0h,1
03220: 1828                      MOVK   1h,A8
03230: 0570                      SETF   10h,1,0
03240: 0588 79c0 0002            MOVE   A8,@279C0h,0
03270: 09c8 0047                 MOVI   47h,A8
03290: 05e8 79d0 0002            MOVB   A8,@279D0h
032c0: 4508                      SUB    A8,A8
032d0: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
03300: c000 00a2                 JR     3D40h
03320: 09ec 6000 46ea            MOVI   46EA6000h,A12
03350: 078c 7980 0002            MOVE   A12,@27980h,1
03380: 09e8 0000 4396            MOVI   43960000h,A8
033b0: 0788 79a0 0002            MOVE   A8,@279A0h,1
033e0: 4508                      SUB    A8,A8
033f0: 0570                      SETF   10h,1,0
03400: 0588 79c0 0002            MOVE   A8,@279C0h,0
03430: 09c8 0046                 MOVI   46h,A8
03450: 05e8 79d0 0002            MOVB   A8,@279D0h
03480: 4508                      SUB    A8,A8
03490: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
034c0: c000 0086                 JR     3D40h
034e0: 09ec 4000 471c            MOVI   471C4000h,A12
03510: 078c 7980 0002            MOVE   A12,@27980h,1
03540: 09e8 0000 4396            MOVI   43960000h,A8
03570: 0788 79a0 0002            MOVE   A8,@279A0h,1
035a0: 4508                      SUB    A8,A8
035b0: 0570                      SETF   10h,1,0
035c0: 0588 79c0 0002            MOVE   A8,@279C0h,0
035f0: 09c8 0045                 MOVI   45h,A8
03610: 05e8 79d0 0002            MOVB   A8,@279D0h
03640: 4508                      SUB    A8,A8
03650: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
03680: c06b                      JR     3D40h
03690: 09ec 6000 46ea            MOVI   46EA6000h,A12
036c0: 078c 7980 0002            MOVE   A12,@27980h,1
036f0: 09e8 0000 4396            MOVI   43960000h,A8
03720: 0788 79a0 0002            MOVE   A8,@279A0h,1
03750: 1828                      MOVK   1h,A8
03760: 0570                      SETF   10h,1,0
03770: 0588 79c0 0002            MOVE   A8,@279C0h,0
037a0: 09c8 0044                 MOVI   44h,A8
037c0: 05e8 79d0 0002            MOVB   A8,@279D0h
037f0: 4508                      SUB    A8,A8
03800: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
03830: c050                      JR     3D40h
03840: 09ec 5000 46c3            MOVI   46C35000h,A12
03870: 078c 7980 0002            MOVE   A12,@27980h,1
038a0: 09e8 0000 4396            MOVI   43960000h,A8
038d0: 0788 79a0 0002            MOVE   A8,@279A0h,1
03900: 1828                      MOVK   1h,A8
03910: 0570                      SETF   10h,1,0
03920: 0588 79c0 0002            MOVE   A8,@279C0h,0
03950: 09c8 0043                 MOVI   43h,A8
03970: 05e8 79d0 0002            MOVB   A8,@279D0h
039a0: 4508                      SUB    A8,A8
039b0: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
039e0: c035                      JR     3D40h
039f0: 09ec 6000 46ea            MOVI   46EA6000h,A12
03a20: 078c 7980 0002            MOVE   A12,@27980h,1
03a50: 09e8 0000 4396            MOVI   43960000h,A8
03a80: 0788 79a0 0002            MOVE   A8,@279A0h,1
03ab0: 4508                      SUB    A8,A8
03ac0: 0570                      SETF   10h,1,0
03ad0: 0588 79c0 0002            MOVE   A8,@279C0h,0
03b00: 09c8 0042                 MOVI   42h,A8
03b20: 05e8 79d0 0002            MOVB   A8,@279D0h
03b50: 4508                      SUB    A8,A8
03b60: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
03b90: c01a                      JR     3D40h
03ba0: 09ec 4000 471c            MOVI   471C4000h,A12
03bd0: 078c 7980 0002            MOVE   A12,@27980h,1
03c00: 09e8 0000 4396            MOVI   43960000h,A8
03c30: 0788 79a0 0002            MOVE   A8,@279A0h,1
03c60: 4508                      SUB    A8,A8
03c70: 0570                      SETF   10h,1,0
03c80: 0588 79c0 0002            MOVE   A8,@279C0h,0
03cb0: 09c8 0041                 MOVI   41h,A8
03cd0: 05e8 79d0 0002            MOVB   A8,@279D0h
03d00: 4508                      SUB    A8,A8
03d10: 0588 d5b0 0002            MOVE   A8,@2D5B0h,0
03d40: 0550                      SETF   10h,0,0
03d50: 05ac d5b0 0002            MOVE   @2D5B0h,A12,0
03d80: 05a8 7a30 0002            MOVE   @27A30h,A8,0
03db0: 5588                      OR     A12,A8
03dc0: 0588 7a30 0002            MOVE   A8,@27A30h,0
03df0: 05a8 7a40 0002            MOVE   @27A40h,A8,0
03e20: 5588                      OR     A12,A8
03e30: 0588 7a40 0002            MOVE   A8,@27A40h,0
03e60: 1828                      MOVK   1h,A8
03e70: c001                      JR     3E90h
03e80: 4508                      SUB    A8,A8
03e90: 140e                      SUBK   20h,A14
03ea0: 09af 3000                 MMFM   SP,A12,A13
03ec0: 0960                      RETS   

_set_eht_set_fil_type:
03ed0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
03ef0: 4dcd                      MOVE   A14,A13
03f00: 0570                      SETF   10h,1,0
03f10: b5a6 ffe0                 MOVE   *A13(FFE0h),A6,0
03f30: 09ec 4ca8 0003            MOVI   34CA8h,A12
03f60: 4cc6                      MOVE   A6,A6
03f70: ca03                      JREQ   3FB0h
03f80: 09ca 0030                 MOVI   30h,A10
03fa0: c002                      JR     3FD0h
03fb0: 09ca 0031                 MOVI   31h,A10
03fd0: 09c8 002e                 MOVI   2Eh,A8
03ff0: 0568                      SETF   8h,1,0
04000: 910c                      MOVE   A8,*A12+,0
04010: 09c8 0054                 MOVI   54h,A8
04030: 910c                      MOVE   A8,*A12+,0
04040: 914c                      MOVE   A10,*A12+,0
04050: 19aa                      MOVK   Dh,A10
04060: 914c                      MOVE   A10,*A12+,0
04070: 454a                      SUB    A10,A10
04080: 8d4c                      MOVB   A10,*A12
04090: 18ac                      MOVK   5h,A12
040a0: 05ec 4ca0 0003            MOVB   A12,@34CA0h
040d0: a3cf                      MOVE   A14,-*SP,1
040e0: 09ea 4ca8 0003            MOVI   34CA8h,A10
04110: 934e                      MOVE   A10,*A14+,1
04120: 0d5f 6440 0002            CALLA  26440h
04150: 10c8                      ADDK   6h,A8
04160: 0788 4c60 0003            MOVE   A8,@34C60h,1
04190: 1a8c                      MOVK   14h,A12
041a0: 078c 4c80 0003            MOVE   A12,@34C80h,1
041d0: a3cf                      MOVE   A14,-*SP,1
041e0: 09e8 4c60 0003            MOVI   34C60h,A8
04210: 930e                      MOVE   A8,*A14+,1
04220: 1828                      MOVK   1h,A8
04230: 930e                      MOVE   A8,*A14+,1
04240: 0d5f 0000 0000            CALLA  0h
04270: 4f0e                      MOVE   A8,B14
04280: cb13                      JRNE   43C0h
04290: a3cf                      MOVE   A14,-*SP,1
042a0: 4508                      SUB    A8,A8
042b0: 930e                      MOVE   A8,*A14+,1
042c0: 09e8 d9a0 0002            MOVI   2D9A0h,A8
042f0: 930e                      MOVE   A8,*A14+,1
04300: 938e                      MOVE   A12,*A14+,1
04310: 0d5f 0000 0000            CALLA  0h
04340: 4f0e                      MOVE   A8,B14
04350: cb06                      JRNE   43C0h
04360: 0570                      SETF   10h,1,0
04370: 0586 79e0 0002            MOVE   A6,@279E0h,0
043a0: 1828                      MOVK   1h,A8
043b0: c001                      JR     43D0h
043c0: 4508                      SUB    A8,A8
043d0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
043f0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
04410: 0962                      RETS   2h

_set_eht_set_anode_type:
04420: 098f 022c                 MMTM   SP,A6,A10,A12,A13
04440: 4dcd                      MOVE   A14,A13
04450: 0570                      SETF   10h,1,0
04460: b5a6 ffe0                 MOVE   *A13(FFE0h),A6,0
04480: 09ec 4ca8 0003            MOVI   34CA8h,A12
044b0: 3426                      CMPK   1h,A6
044c0: ca03                      JREQ   4500h
044d0: 09ca 0031                 MOVI   31h,A10
044f0: c002                      JR     4520h
04500: 09ca 0030                 MOVI   30h,A10
04520: 09c8 002e                 MOVI   2Eh,A8
04540: 0568                      SETF   8h,1,0
04550: 910c                      MOVE   A8,*A12+,0
04560: 1268                      ADDK   13h,A8
04570: 910c                      MOVE   A8,*A12+,0
04580: 914c                      MOVE   A10,*A12+,0
04590: 19aa                      MOVK   Dh,A10
045a0: 914c                      MOVE   A10,*A12+,0
045b0: 454a                      SUB    A10,A10
045c0: 8d4c                      MOVB   A10,*A12
045d0: 18ac                      MOVK   5h,A12
045e0: 05ec 4ca0 0003            MOVB   A12,@34CA0h
04610: a3cf                      MOVE   A14,-*SP,1
04620: 09ea 4ca8 0003            MOVI   34CA8h,A10
04650: 934e                      MOVE   A10,*A14+,1
04660: 0d5f 6440 0002            CALLA  26440h
04690: 10c8                      ADDK   6h,A8
046a0: 0788 4c60 0003            MOVE   A8,@34C60h,1
046d0: 1a8c                      MOVK   14h,A12
046e0: 078c 4c80 0003            MOVE   A12,@34C80h,1
04710: a3cf                      MOVE   A14,-*SP,1
04720: 09e8 4c60 0003            MOVI   34C60h,A8
04750: 930e                      MOVE   A8,*A14+,1
04760: 1828                      MOVK   1h,A8
04770: 930e                      MOVE   A8,*A14+,1
04780: 0d5f 0000 0000            CALLA  0h
047b0: 4f0e                      MOVE   A8,B14
047c0: cb13                      JRNE   4900h
047d0: a3cf                      MOVE   A14,-*SP,1
047e0: 4508                      SUB    A8,A8
047f0: 930e                      MOVE   A8,*A14+,1
04800: 09e8 d9a0 0002            MOVI   2D9A0h,A8
04830: 930e                      MOVE   A8,*A14+,1
04840: 938e                      MOVE   A12,*A14+,1
04850: 0d5f 0000 0000            CALLA  0h
04880: 4f0e                      MOVE   A8,B14
04890: cb06                      JRNE   4900h
048a0: 0570                      SETF   10h,1,0
048b0: 0586 79f0 0002            MOVE   A6,@279F0h,0
048e0: 1828                      MOVK   1h,A8
048f0: c001                      JR     4910h
04900: 4508                      SUB    A8,A8
04910: b7ee 00a0                 MOVE   *SP(A0h),A14,1
04930: 09af 3440                 MMFM   SP,A6,A10,A12,A13
04950: 0962                      RETS   2h

_set_eht_set_beam_current:
04960: 098f 022c                 MMTM   SP,A6,A10,A12,A13
04980: 4dcd                      MOVE   A14,A13
04990: 100e                      ADDK   20h,A14
049a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
049c0: 0d5f 01e0 0002            CALLA  201E0h
049f0: 09e8 6e20 0002            MOVI   26E20h,A8
04a20: 9b0e                      MOVE   *A8+,*A14+,1
04a30: 9b0e                      MOVE   *A8+,*A14+,1
04a40: 0d5f 2a00 0002            CALLA  22A00h
04a70: 4508                      SUB    A8,A8
04a80: 09ec 0000 3fe0            MOVI   3FE00000h,A12
04ab0: 938e                      MOVE   A12,*A14+,1
04ac0: 930e                      MOVE   A8,*A14+,1
04ad0: 0d5f 12c0 0002            CALLA  212C0h
04b00: 0d5f fd20 0001            CALLA  1FD20h
04b30: 4d0a                      MOVE   A8,A10
04b40: 182c                      MOVK   1h,A12
04b50: 4d88                      MOVE   A12,A8
04b60: 102c                      INC    A12
04b70: 260c                      SLL    10h,A12
04b80: 2a0c                      SRA    10h,A12
04b90: 09c8 002e                 MOVI   2Eh,A8
04bb0: 05e8 4ca8 0003            MOVB   A8,@34CA8h
04be0: 4d88                      MOVE   A12,A8
04bf0: 102c                      INC    A12
04c00: 260c                      SLL    10h,A12
04c10: 2a0c                      SRA    10h,A12
04c20: 2468                      SLL    3h,A8
04c30: 0b28 4ca0 0003            ADDI   34CA0h,A8
04c60: 09c6 0042                 MOVI   42h,A6
04c80: 8cc8                      MOVB   A6,*A8
04c90: a3cf                      MOVE   A14,-*SP,1
04ca0: 1868                      MOVK   3h,A8
04cb0: 930e                      MOVE   A8,*A14+,1
04cc0: 246c                      SLL    3h,A12
04cd0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
04d00: 938e                      MOVE   A12,*A14+,1
04d10: 934e                      MOVE   A10,*A14+,1
04d20: 0d5f e060 0001            CALLA  1E060h
04d50: a3cf                      MOVE   A14,-*SP,1
04d60: 09e8 4ca8 0003            MOVI   34CA8h,A8
04d90: 930e                      MOVE   A8,*A14+,1
04da0: 0d5f 6440 0002            CALLA  26440h
04dd0: 4d0c                      MOVE   A8,A12
04de0: 102c                      INC    A12
04df0: 0570                      SETF   10h,1,0
04e00: 050c                      SEXT   A12,0
04e10: 4d88                      MOVE   A12,A8
04e20: 102c                      INC    A12
04e30: 050c                      SEXT   A12,0
04e40: 2468                      SLL    3h,A8
04e50: 0b28 4ca0 0003            ADDI   34CA0h,A8
04e80: 19a6                      MOVK   Dh,A6
04e90: 8cc8                      MOVB   A6,*A8
04ea0: 246c                      SLL    3h,A12
04eb0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
04ee0: 4508                      SUB    A8,A8
04ef0: 8d0c                      MOVB   A8,*A12
04f00: 18ac                      MOVK   5h,A12
04f10: 05ec 4ca0 0003            MOVB   A12,@34CA0h
04f40: a3cf                      MOVE   A14,-*SP,1
04f50: 09e8 4ca8 0003            MOVI   34CA8h,A8
04f80: 930e                      MOVE   A8,*A14+,1
04f90: 0d5f 6440 0002            CALLA  26440h
04fc0: 10c8                      ADDK   6h,A8
04fd0: 0788 4c60 0003            MOVE   A8,@34C60h,1
05000: 1a86                      MOVK   14h,A6
05010: 0786 4c80 0003            MOVE   A6,@34C80h,1
05040: a3cf                      MOVE   A14,-*SP,1
05050: 09e8 4c60 0003            MOVI   34C60h,A8
05080: 930e                      MOVE   A8,*A14+,1
05090: 182c                      MOVK   1h,A12
050a0: 938e                      MOVE   A12,*A14+,1
050b0: 0d5f 0000 0000            CALLA  0h
050e0: 830d                      MOVE   A8,*A13,1
050f0: 4d08                      MOVE   A8,A8
05100: cb2f                      JRNE   5400h
05110: a3cf                      MOVE   A14,-*SP,1
05120: 458c                      SUB    A12,A12
05130: 938e                      MOVE   A12,*A14+,1
05140: 09ec d9a0 0002            MOVI   2D9A0h,A12
05170: 938e                      MOVE   A12,*A14+,1
05180: 92ce                      MOVE   A6,*A14+,1
05190: 0d5f 0000 0000            CALLA  0h
051c0: 830d                      MOVE   A8,*A13,1
051d0: 4d08                      MOVE   A8,A8
051e0: cb21                      JRNE   5400h
051f0: a3cf                      MOVE   A14,-*SP,1
05200: 93ae                      MOVE   A13,*A14+,1
05210: 09e8 d9e0 0002            MOVI   2D9E0h,A8
05240: 930e                      MOVE   A8,*A14+,1
05250: 0d5f d1a0 0001            CALLA  1D1A0h
05280: 19e6                      MOVK   Fh,A6
05290: 50c8                      AND    A6,A8
052a0: cb15                      JRNE   5400h
052b0: 4d48                      MOVE   A10,A8
052c0: 0d5f 0900 0002            CALLA  20900h
052f0: 09ea 6e20 0002            MOVI   26E20h,A10
05320: 9b4e                      MOVE   *A10+,*A14+,1
05330: 9b4e                      MOVE   *A10+,*A14+,1
05340: 0d5f 34b0 0002            CALLA  234B0h
05370: 0d5f f890 0001            CALLA  1F890h
053a0: a7ca                      MOVE   -*A14,A10,1
053b0: 078a dc60 0002            MOVE   A10,@2DC60h,1
053e0: 1828                      MOVK   1h,A8
053f0: c001                      JR     5410h
05400: 4508                      SUB    A8,A8
05410: b7ee 00a0                 MOVE   *SP(A0h),A14,1
05430: 09af 3440                 MMFM   SP,A6,A10,A12,A13
05450: 0962                      RETS   2h

_send_eht_set_fil_current:
05460: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
05480: 4dcd                      MOVE   A14,A13
05490: 100e                      ADDK   20h,A14
054a0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
054c0: 100e                      ADDK   20h,A14
054d0: a3cf                      MOVE   A14,-*SP,1
054e0: 934e                      MOVE   A10,*A14+,1
054f0: 0d5f e640 0001            CALLA  1E640h
05520: a7c6                      MOVE   -*A14,A6,1
05530: 182c                      MOVK   1h,A12
05540: 92ce                      MOVE   A6,*A14+,1
05550: 0d5f 01e0 0002            CALLA  201E0h
05580: 09e8 6e60 0002            MOVI   26E60h,A8
055b0: 9b0e                      MOVE   *A8+,*A14+,1
055c0: 9b0e                      MOVE   *A8+,*A14+,1
055d0: 0d5f 2a00 0002            CALLA  22A00h
05600: 4508                      SUB    A8,A8
05610: 09e4 0000 3fe0            MOVI   3FE00000h,A4
05640: 928e                      MOVE   A4,*A14+,1
05650: 930e                      MOVE   A8,*A14+,1
05660: 0d5f 12c0 0002            CALLA  212C0h
05690: 0d5f fd20 0001            CALLA  1FD20h
056c0: 4d06                      MOVE   A8,A6
056d0: 4d88                      MOVE   A12,A8
056e0: 102c                      INC    A12
056f0: 260c                      SLL    10h,A12
05700: 2a0c                      SRA    10h,A12
05710: 09c8 002e                 MOVI   2Eh,A8
05730: 05e8 4ca8 0003            MOVB   A8,@34CA8h
05760: 4d84                      MOVE   A12,A4
05770: 102c                      INC    A12
05780: 260c                      SLL    10h,A12
05790: 2a0c                      SRA    10h,A12
057a0: 2464                      SLL    3h,A4
057b0: 0b24 4ca0 0003            ADDI   34CA0h,A4
057e0: 1308                      ADDK   18h,A8
057f0: 8d04                      MOVB   A8,*A4
05800: a3cf                      MOVE   A14,-*SP,1
05810: 1864                      MOVK   3h,A4
05820: 928e                      MOVE   A4,*A14+,1
05830: 246c                      SLL    3h,A12
05840: 0b2c 4ca0 0003            ADDI   34CA0h,A12
05870: 938e                      MOVE   A12,*A14+,1
05880: 92ce                      MOVE   A6,*A14+,1
05890: 0d5f e060 0001            CALLA  1E060h
058c0: a3cf                      MOVE   A14,-*SP,1
058d0: 09e6 4ca8 0003            MOVI   34CA8h,A6
05900: 92ce                      MOVE   A6,*A14+,1
05910: 0d5f 6440 0002            CALLA  26440h
05940: 4d0c                      MOVE   A8,A12
05950: 102c                      INC    A12
05960: 0570                      SETF   10h,1,0
05970: 050c                      SEXT   A12,0
05980: 4d88                      MOVE   A12,A8
05990: 102c                      INC    A12
059a0: 050c                      SEXT   A12,0
059b0: 2468                      SLL    3h,A8
059c0: 0b28 4ca0 0003            ADDI   34CA0h,A8
059f0: 19a4                      MOVK   Dh,A4
05a00: 8c88                      MOVB   A4,*A8
05a10: 246c                      SLL    3h,A12
05a20: 0b2c 4ca0 0003            ADDI   34CA0h,A12
05a50: 4508                      SUB    A8,A8
05a60: 8d0c                      MOVB   A8,*A12
05a70: 18ac                      MOVK   5h,A12
05a80: 05ec 4ca0 0003            MOVB   A12,@34CA0h
05ab0: a3cf                      MOVE   A14,-*SP,1
05ac0: 92ce                      MOVE   A6,*A14+,1
05ad0: 0d5f 6440 0002            CALLA  26440h
05b00: 10c8                      ADDK   6h,A8
05b10: 0788 4c60 0003            MOVE   A8,@34C60h,1
05b40: 1a84                      MOVK   14h,A4
05b50: 0784 4c80 0003            MOVE   A4,@34C80h,1
05b80: a3cf                      MOVE   A14,-*SP,1
05b90: 09e8 4c60 0003            MOVI   34C60h,A8
05bc0: 930e                      MOVE   A8,*A14+,1
05bd0: 182c                      MOVK   1h,A12
05be0: 938e                      MOVE   A12,*A14+,1
05bf0: 0d5f 0000 0000            CALLA  0h
05c20: 830d                      MOVE   A8,*A13,1
05c30: 4d08                      MOVE   A8,A8
05c40: cb1f                      JRNE   5E40h
05c50: a3cf                      MOVE   A14,-*SP,1
05c60: 458c                      SUB    A12,A12
05c70: 938e                      MOVE   A12,*A14+,1
05c80: 09ec d9a0 0002            MOVI   2D9A0h,A12
05cb0: 938e                      MOVE   A12,*A14+,1
05cc0: 928e                      MOVE   A4,*A14+,1
05cd0: 0d5f 0000 0000            CALLA  0h
05d00: 830d                      MOVE   A8,*A13,1
05d10: 4d08                      MOVE   A8,A8
05d20: cb11                      JRNE   5E40h
05d30: a3cf                      MOVE   A14,-*SP,1
05d40: 93ae                      MOVE   A13,*A14+,1
05d50: 09e8 d9e0 0002            MOVI   2D9E0h,A8
05d80: 930e                      MOVE   A8,*A14+,1
05d90: 0d5f d1a0 0001            CALLA  1D1A0h
05dc0: 19e4                      MOVK   Fh,A4
05dd0: 5088                      AND    A4,A8
05de0: cb05                      JRNE   5E40h
05df0: 078a 5280 0003            MOVE   A10,@35280h,1
05e20: 1828                      MOVK   1h,A8
05e30: c001                      JR     5E50h
05e40: 4508                      SUB    A8,A8
05e50: b7ee 00c0                 MOVE   *SP(C0h),A14,1
05e70: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
05e90: 0962                      RETS   2h

_send_eht_set_acc_voltage:
05ea0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
05ec0: 4dcd                      MOVE   A14,A13
05ed0: 100e                      ADDK   20h,A14
05ee0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
05f00: 934e                      MOVE   A10,*A14+,1
05f10: 0d5f 01e0 0002            CALLA  201E0h
05f40: 4508                      SUB    A8,A8
05f50: 09ec 0000 4024            MOVI   40240000h,A12
05f80: 938e                      MOVE   A12,*A14+,1
05f90: 930e                      MOVE   A8,*A14+,1
05fa0: 0d5f 2a00 0002            CALLA  22A00h
05fd0: 4508                      SUB    A8,A8
05fe0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
06010: 938e                      MOVE   A12,*A14+,1
06020: 930e                      MOVE   A8,*A14+,1
06030: 0d5f 12c0 0002            CALLA  212C0h
06060: 0d5f fd20 0001            CALLA  1FD20h
06090: 4d04                      MOVE   A8,A4
060a0: 182c                      MOVK   1h,A12
060b0: 07a6 7980 0002            MOVE   @27980h,A6,1
060e0: d60e 7aa0 0002            MOVE   @27AA0h,*A14+,1
06110: 934e                      MOVE   A10,*A14+,1
06120: 0d5f 4000 0002            CALLA  24000h
06150: a7ca                      MOVE   -*A14,A10,1
06160: 934e                      MOVE   A10,*A14+,1
06170: 4508                      SUB    A8,A8
06180: 930e                      MOVE   A8,*A14+,1
06190: 0d5f 5890 0002            CALLA  25890h
061c0: ca03                      JREQ   6200h
061d0: 07aa 6ea0 0002            MOVE   @26EA0h,A10,1
06200: 934e                      MOVE   A10,*A14+,1
06210: 92ce                      MOVE   A6,*A14+,1
06220: 0d5f 5670 0002            CALLA  25670h
06250: ca01                      JREQ   6270h
06260: 4cca                      MOVE   A6,A10
06270: 934e                      MOVE   A10,*A14+,1
06280: 0d5f 01e0 0002            CALLA  201E0h
062b0: 4508                      SUB    A8,A8
062c0: 09e6 0000 4024            MOVI   40240000h,A6
062f0: 92ce                      MOVE   A6,*A14+,1
06300: 930e                      MOVE   A8,*A14+,1
06310: 0d5f 2a00 0002            CALLA  22A00h
06340: 4508                      SUB    A8,A8
06350: 09e6 0000 3fe0            MOVI   3FE00000h,A6
06380: 92ce                      MOVE   A6,*A14+,1
06390: 930e                      MOVE   A8,*A14+,1
063a0: 0d5f 12c0 0002            CALLA  212C0h
063d0: 0d5f fd20 0001            CALLA  1FD20h
06400: 4d0a                      MOVE   A8,A10
06410: 4d88                      MOVE   A12,A8
06420: 102c                      INC    A12
06430: 260c                      SLL    10h,A12
06440: 2a0c                      SRA    10h,A12
06450: 09c8 002e                 MOVI   2Eh,A8
06470: 05e8 4ca8 0003            MOVB   A8,@34CA8h
064a0: 4d86                      MOVE   A12,A6
064b0: 102c                      INC    A12
064c0: 260c                      SLL    10h,A12
064d0: 2a0c                      SRA    10h,A12
064e0: 2466                      SLL    3h,A6
064f0: 0b26 4ca0 0003            ADDI   34CA0h,A6
06520: 12e8                      ADDK   17h,A8
06530: 8d06                      MOVB   A8,*A6
06540: a3cf                      MOVE   A14,-*SP,1
06550: 1866                      MOVK   3h,A6
06560: 92ce                      MOVE   A6,*A14+,1
06570: 246c                      SLL    3h,A12
06580: 0b2c 4ca0 0003            ADDI   34CA0h,A12
065b0: 938e                      MOVE   A12,*A14+,1
065c0: 934e                      MOVE   A10,*A14+,1
065d0: 0d5f e060 0001            CALLA  1E060h
06600: a3cf                      MOVE   A14,-*SP,1
06610: 09ea 4ca8 0003            MOVI   34CA8h,A10
06640: 934e                      MOVE   A10,*A14+,1
06650: 0d5f 6440 0002            CALLA  26440h
06680: 4d0c                      MOVE   A8,A12
06690: 102c                      INC    A12
066a0: 0570                      SETF   10h,1,0
066b0: 050c                      SEXT   A12,0
066c0: 4d88                      MOVE   A12,A8
066d0: 102c                      INC    A12
066e0: 050c                      SEXT   A12,0
066f0: 2468                      SLL    3h,A8
06700: 0b28 4ca0 0003            ADDI   34CA0h,A8
06730: 19a6                      MOVK   Dh,A6
06740: 8cc8                      MOVB   A6,*A8
06750: 246c                      SLL    3h,A12
06760: 0b2c 4ca0 0003            ADDI   34CA0h,A12
06790: 4508                      SUB    A8,A8
067a0: 8d0c                      MOVB   A8,*A12
067b0: 18ac                      MOVK   5h,A12
067c0: 05ec 4ca0 0003            MOVB   A12,@34CA0h
067f0: a3cf                      MOVE   A14,-*SP,1
06800: 934e                      MOVE   A10,*A14+,1
06810: 0d5f 6440 0002            CALLA  26440h
06840: 10c8                      ADDK   6h,A8
06850: 0788 4c60 0003            MOVE   A8,@34C60h,1
06880: 1a86                      MOVK   14h,A6
06890: 0786 4c80 0003            MOVE   A6,@34C80h,1
068c0: a3cf                      MOVE   A14,-*SP,1
068d0: 09e8 4c60 0003            MOVI   34C60h,A8
06900: 930e                      MOVE   A8,*A14+,1
06910: 182c                      MOVK   1h,A12
06920: 938e                      MOVE   A12,*A14+,1
06930: 0d5f 0000 0000            CALLA  0h
06960: 830d                      MOVE   A8,*A13,1
06970: 4d08                      MOVE   A8,A8
06980: cb30                      JRNE   6C90h
06990: a3cf                      MOVE   A14,-*SP,1
069a0: 458c                      SUB    A12,A12
069b0: 938e                      MOVE   A12,*A14+,1
069c0: 09ec d9a0 0002            MOVI   2D9A0h,A12
069f0: 938e                      MOVE   A12,*A14+,1
06a00: 92ce                      MOVE   A6,*A14+,1
06a10: 0d5f 0000 0000            CALLA  0h
06a40: 830d                      MOVE   A8,*A13,1
06a50: 4d08                      MOVE   A8,A8
06a60: cb22                      JRNE   6C90h
06a70: a3cf                      MOVE   A14,-*SP,1
06a80: 93ae                      MOVE   A13,*A14+,1
06a90: 09e8 d9e0 0002            MOVI   2D9E0h,A8
06ac0: 930e                      MOVE   A8,*A14+,1
06ad0: 0d5f d1a0 0001            CALLA  1D1A0h
06b00: 19e6                      MOVK   Fh,A6
06b10: 50c8                      AND    A6,A8
06b20: cb16                      JRNE   6C90h
06b30: 4c88                      MOVE   A4,A8
06b40: 0d5f 0900 0002            CALLA  20900h
06b70: 4484                      SUB    A4,A4
06b80: 09e8 0000 4024            MOVI   40240000h,A8
06bb0: 930e                      MOVE   A8,*A14+,1
06bc0: 928e                      MOVE   A4,*A14+,1
06bd0: 0d5f 34b0 0002            CALLA  234B0h
06c00: 0d5f f890 0001            CALLA  1F890h
06c30: a7c8                      MOVE   -*A14,A8,1
06c40: 0788 5240 0003            MOVE   A8,@35240h,1
06c70: 1828                      MOVK   1h,A8
06c80: c001                      JR     6CA0h
06c90: 4508                      SUB    A8,A8
06ca0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
06cc0: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
06ce0: 0962                      RETS   2h

_set_eht_set_collecter_bias:
06cf0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
06d10: 4dcd                      MOVE   A14,A13
06d20: 100e                      ADDK   20h,A14
06d30: 0570                      SETF   10h,1,0
06d40: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
06d60: 4d88                      MOVE   A12,A8
06d70: 0d5f 0c50 0002            CALLA  20C50h
06da0: 4508                      SUB    A8,A8
06db0: 930e                      MOVE   A8,*A14+,1
06dc0: 0d5f 5890 0002            CALLA  25890h
06df0: ca04                      JREQ   6E40h
06e00: d60e 6ec0 0002            MOVE   @26EC0h,*A14+,1
06e30: c003                      JR     6E70h
06e40: d60e 6ee0 0002            MOVE   @26EE0h,*A14+,1
06e70: a7c6                      MOVE   -*A14,A6,1
06e80: 4d88                      MOVE   A12,A8
06e90: 0d5f 0c50 0002            CALLA  20C50h
06ec0: 0d5f 01e0 0002            CALLA  201E0h
06ef0: 09e8 6f00 0002            MOVI   26F00h,A8
06f20: 9b0e                      MOVE   *A8+,*A14+,1
06f30: 9b0e                      MOVE   *A8+,*A14+,1
06f40: 0d5f 2a00 0002            CALLA  22A00h
06f70: 0d5f f890 0001            CALLA  1F890h
06fa0: a7ca                      MOVE   -*A14,A10,1
06fb0: 182c                      MOVK   1h,A12
06fc0: 934e                      MOVE   A10,*A14+,1
06fd0: 92ce                      MOVE   A6,*A14+,1
06fe0: 0d5f 4240 0002            CALLA  24240h
07010: 0d5f 04c0 0002            CALLA  204C0h
07040: 4d06                      MOVE   A8,A6
07050: 0b06 0800                 ADDI   800h,A6
07070: 4d88                      MOVE   A12,A8
07080: 102c                      INC    A12
07090: 050c                      SEXT   A12,0
070a0: 09c8 002e                 MOVI   2Eh,A8
070c0: 05e8 4ca8 0003            MOVB   A8,@34CA8h
070f0: 4d88                      MOVE   A12,A8
07100: 102c                      INC    A12
07110: 050c                      SEXT   A12,0
07120: 2468                      SLL    3h,A8
07130: 0b28 4ca0 0003            ADDI   34CA0h,A8
07160: 09c4 0043                 MOVI   43h,A4
07180: 8c88                      MOVB   A4,*A8
07190: a3cf                      MOVE   A14,-*SP,1
071a0: 1868                      MOVK   3h,A8
071b0: 930e                      MOVE   A8,*A14+,1
071c0: 246c                      SLL    3h,A12
071d0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
07200: 938e                      MOVE   A12,*A14+,1
07210: 92ce                      MOVE   A6,*A14+,1
07220: 0d5f e060 0001            CALLA  1E060h
07250: a3cf                      MOVE   A14,-*SP,1
07260: 09e6 4ca8 0003            MOVI   34CA8h,A6
07290: 92ce                      MOVE   A6,*A14+,1
072a0: 0d5f 6440 0002            CALLA  26440h
072d0: 4d0c                      MOVE   A8,A12
072e0: 102c                      INC    A12
072f0: 0570                      SETF   10h,1,0
07300: 050c                      SEXT   A12,0
07310: 4d88                      MOVE   A12,A8
07320: 102c                      INC    A12
07330: 050c                      SEXT   A12,0
07340: 2468                      SLL    3h,A8
07350: 0b28 4ca0 0003            ADDI   34CA0h,A8
07380: 19a4                      MOVK   Dh,A4
07390: 8c88                      MOVB   A4,*A8
073a0: 246c                      SLL    3h,A12
073b0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
073e0: 4508                      SUB    A8,A8
073f0: 8d0c                      MOVB   A8,*A12
07400: 18ac                      MOVK   5h,A12
07410: 05ec 4ca0 0003            MOVB   A12,@34CA0h
07440: a3cf                      MOVE   A14,-*SP,1
07450: 92ce                      MOVE   A6,*A14+,1
07460: 0d5f 6440 0002            CALLA  26440h
07490: 10c8                      ADDK   6h,A8
074a0: 0788 4c60 0003            MOVE   A8,@34C60h,1
074d0: 1a84                      MOVK   14h,A4
074e0: 0784 4c80 0003            MOVE   A4,@34C80h,1
07510: a3cf                      MOVE   A14,-*SP,1
07520: 09e8 4c60 0003            MOVI   34C60h,A8
07550: 930e                      MOVE   A8,*A14+,1
07560: 182c                      MOVK   1h,A12
07570: 938e                      MOVE   A12,*A14+,1
07580: 0d5f 0000 0000            CALLA  0h
075b0: 830d                      MOVE   A8,*A13,1
075c0: 4d08                      MOVE   A8,A8
075d0: cb2f                      JRNE   78D0h
075e0: a3cf                      MOVE   A14,-*SP,1
075f0: 458c                      SUB    A12,A12
07600: 938e                      MOVE   A12,*A14+,1
07610: 09ec d9a0 0002            MOVI   2D9A0h,A12
07640: 938e                      MOVE   A12,*A14+,1
07650: 928e                      MOVE   A4,*A14+,1
07660: 0d5f 0000 0000            CALLA  0h
07690: 830d                      MOVE   A8,*A13,1
076a0: 4d08                      MOVE   A8,A8
076b0: cb21                      JRNE   78D0h
076c0: a3cf                      MOVE   A14,-*SP,1
076d0: 93ae                      MOVE   A13,*A14+,1
076e0: 09e8 d9e0 0002            MOVI   2D9E0h,A8
07710: 930e                      MOVE   A8,*A14+,1
07720: 0d5f d1a0 0001            CALLA  1D1A0h
07750: 19e4                      MOVK   Fh,A4
07760: 5088                      AND    A4,A8
07770: cb15                      JRNE   78D0h
07780: 934e                      MOVE   A10,*A14+,1
07790: 0d5f 01e0 0002            CALLA  201E0h
077c0: 09ea 6f00 0002            MOVI   26F00h,A10
077f0: 9b4e                      MOVE   *A10+,*A14+,1
07800: 9b4e                      MOVE   *A10+,*A14+,1
07810: 0d5f 34b0 0002            CALLA  234B0h
07840: 0d5f f890 0001            CALLA  1F890h
07870: a7ca                      MOVE   -*A14,A10,1
07880: 078a 4920 0003            MOVE   A10,@34920h,1
078b0: 1828                      MOVK   1h,A8
078c0: c001                      JR     78E0h
078d0: 4508                      SUB    A8,A8
078e0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
07900: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
07920: 0962                      RETS   2h

_set_eht_set_pm_voltage:
07930: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
07950: 4dcd                      MOVE   A14,A13
07960: 100e                      ADDK   20h,A14
07970: 0570                      SETF   10h,1,0
07980: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
079a0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
079c0: 0d5f 01e0 0002            CALLA  201E0h
079f0: 4508                      SUB    A8,A8
07a00: 09ec 0000 4010            MOVI   40100000h,A12
07a30: 938e                      MOVE   A12,*A14+,1
07a40: 930e                      MOVE   A8,*A14+,1
07a50: 0d5f 34b0 0002            CALLA  234B0h
07a80: 4508                      SUB    A8,A8
07a90: 09ec 0000 3fe0            MOVI   3FE00000h,A12
07ac0: 938e                      MOVE   A12,*A14+,1
07ad0: 930e                      MOVE   A8,*A14+,1
07ae0: 0d5f 12c0 0002            CALLA  212C0h
07b10: 0d5f fd20 0001            CALLA  1FD20h
07b40: 4d06                      MOVE   A8,A6
07b50: 182c                      MOVK   1h,A12
07b60: 4d48                      MOVE   A10,A8
07b70: c701                      JRGT   7B90h
07b80: 4d8a                      MOVE   A12,A10
07b90: 346a                      CMPK   3h,A10
07ba0: c601                      JRLE   7BC0h
07bb0: 186a                      MOVK   3h,A10
07bc0: 4d88                      MOVE   A12,A8
07bd0: 102c                      INC    A12
07be0: 050c                      SEXT   A12,0
07bf0: 09c8 002e                 MOVI   2Eh,A8
07c10: 05e8 4ca8 0003            MOVB   A8,@34CA8h
07c40: a3cf                      MOVE   A14,-*SP,1
07c50: 1828                      MOVK   1h,A8
07c60: 930e                      MOVE   A8,*A14+,1
07c70: 246c                      SLL    3h,A12
07c80: 0b2c 4ca0 0003            ADDI   34CA0h,A12
07cb0: 938e                      MOVE   A12,*A14+,1
07cc0: 934e                      MOVE   A10,*A14+,1
07cd0: 0d5f e060 0001            CALLA  1E060h
07d00: a3cf                      MOVE   A14,-*SP,1
07d10: 09e8 4ca8 0003            MOVI   34CA8h,A8
07d40: 930e                      MOVE   A8,*A14+,1
07d50: 0d5f 6440 0002            CALLA  26440h
07d80: 4d0c                      MOVE   A8,A12
07d90: 102c                      INC    A12
07da0: 0570                      SETF   10h,1,0
07db0: 050c                      SEXT   A12,0
07dc0: a3cf                      MOVE   A14,-*SP,1
07dd0: 1868                      MOVK   3h,A8
07de0: 930e                      MOVE   A8,*A14+,1
07df0: 246c                      SLL    3h,A12
07e00: 0b2c 4ca0 0003            ADDI   34CA0h,A12
07e30: 938e                      MOVE   A12,*A14+,1
07e40: 92ce                      MOVE   A6,*A14+,1
07e50: 0d5f e060 0001            CALLA  1E060h
07e80: a3cf                      MOVE   A14,-*SP,1
07e90: 09e8 4ca8 0003            MOVI   34CA8h,A8
07ec0: 930e                      MOVE   A8,*A14+,1
07ed0: 0d5f 6440 0002            CALLA  26440h
07f00: 4d0c                      MOVE   A8,A12
07f10: 102c                      INC    A12
07f20: 0570                      SETF   10h,1,0
07f30: 050c                      SEXT   A12,0
07f40: 4d88                      MOVE   A12,A8
07f50: 102c                      INC    A12
07f60: 050c                      SEXT   A12,0
07f70: 2468                      SLL    3h,A8
07f80: 0b28 4ca0 0003            ADDI   34CA0h,A8
07fb0: 19a4                      MOVK   Dh,A4
07fc0: 8c88                      MOVB   A4,*A8
07fd0: 246c                      SLL    3h,A12
07fe0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
08010: 4508                      SUB    A8,A8
08020: 8d0c                      MOVB   A8,*A12
08030: 18ac                      MOVK   5h,A12
08040: 05ec 4ca0 0003            MOVB   A12,@34CA0h
08070: a3cf                      MOVE   A14,-*SP,1
08080: 09e8 4ca8 0003            MOVI   34CA8h,A8
080b0: 930e                      MOVE   A8,*A14+,1
080c0: 0d5f 6440 0002            CALLA  26440h
080f0: 10c8                      ADDK   6h,A8
08100: 0788 4c60 0003            MOVE   A8,@34C60h,1
08130: 1a84                      MOVK   14h,A4
08140: 0784 4c80 0003            MOVE   A4,@34C80h,1
08170: a3cf                      MOVE   A14,-*SP,1
08180: 09e8 4c60 0003            MOVI   34C60h,A8
081b0: 930e                      MOVE   A8,*A14+,1
081c0: 182c                      MOVK   1h,A12
081d0: 938e                      MOVE   A12,*A14+,1
081e0: 0d5f 0000 0000            CALLA  0h
08210: 830d                      MOVE   A8,*A13,1
08220: 4d08                      MOVE   A8,A8
08230: cb62                      JRNE   8860h
08240: a3cf                      MOVE   A14,-*SP,1
08250: 458c                      SUB    A12,A12
08260: 938e                      MOVE   A12,*A14+,1
08270: 09ec d9a0 0002            MOVI   2D9A0h,A12
082a0: 938e                      MOVE   A12,*A14+,1
082b0: 928e                      MOVE   A4,*A14+,1
082c0: 0d5f 0000 0000            CALLA  0h
082f0: 830d                      MOVE   A8,*A13,1
08300: 4d08                      MOVE   A8,A8
08310: cb54                      JRNE   8860h
08320: a3cf                      MOVE   A14,-*SP,1
08330: 93ae                      MOVE   A13,*A14+,1
08340: 09e8 d9e0 0002            MOVI   2D9E0h,A8
08370: 930e                      MOVE   A8,*A14+,1
08380: 0d5f d1a0 0001            CALLA  1D1A0h
083b0: 19e4                      MOVK   Fh,A4
083c0: 5088                      AND    A4,A8
083d0: cb48                      JRNE   8860h
083e0: 142a                      DEC    A10
083f0: ca04                      JREQ   8440h
08400: 142a                      DEC    A10
08410: ca2e                      JREQ   8700h
08420: 3aaa                      DSJS   A10,8580h
08430: c016                      JR     85A0h
08440: 4cc8                      MOVE   A6,A8
08450: 0d5f 0900 0002            CALLA  20900h
08480: 454a                      SUB    A10,A10
08490: 09e6 0000 3fd0            MOVI   3FD00000h,A6
084c0: 92ce                      MOVE   A6,*A14+,1
084d0: 934e                      MOVE   A10,*A14+,1
084e0: 0d5f 34b0 0002            CALLA  234B0h
08510: 0d5f f890 0001            CALLA  1F890h
08540: a7c8                      MOVE   -*A14,A8,1
08550: 0788 48e0 0003            MOVE   A8,@348E0h,1
08580: 1828                      MOVK   1h,A8
08590: c02d                      JR     8870h
085a0: 4cc8                      MOVE   A6,A8
085b0: 0d5f 0900 0002            CALLA  20900h
085e0: 454a                      SUB    A10,A10
085f0: 09e6 0000 3fd0            MOVI   3FD00000h,A6
08620: 92ce                      MOVE   A6,*A14+,1
08630: 934e                      MOVE   A10,*A14+,1
08640: 0d5f 34b0 0002            CALLA  234B0h
08670: 0d5f f890 0001            CALLA  1F890h
086a0: a7c8                      MOVE   -*A14,A8,1
086b0: 0788 4940 0003            MOVE   A8,@34940h,1
086e0: 1828                      MOVK   1h,A8
086f0: c017                      JR     8870h
08700: 4cc8                      MOVE   A6,A8
08710: 0d5f 0900 0002            CALLA  20900h
08740: 454a                      SUB    A10,A10
08750: 09e6 0000 3fd0            MOVI   3FD00000h,A6
08780: 92ce                      MOVE   A6,*A14+,1
08790: 934e                      MOVE   A10,*A14+,1
087a0: 0d5f 34b0 0002            CALLA  234B0h
087d0: 0d5f f890 0001            CALLA  1F890h
08800: a7c8                      MOVE   -*A14,A8,1
08810: 0788 4900 0003            MOVE   A8,@34900h,1
08840: 1828                      MOVK   1h,A8
08850: c001                      JR     8870h
08860: 4508                      SUB    A8,A8
08870: b7ee 00c0                 MOVE   *SP(C0h),A14,1
08890: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
088b0: 0962                      RETS   2h

_set_new_state:
088c0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
088e0: 4dcd                      MOVE   A14,A13
088f0: 0550                      SETF   10h,0,0
08900: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
08920: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
08940: 4d46                      MOVE   A10,A6
08950: 03e6                      NOT    A6
08960: 0526                      ZEXT   A6,0
08970: 0570                      SETF   10h,1,0
08980: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
089a0: cb09                      JRNE   8A40h
089b0: 0550                      SETF   10h,0,0
089c0: 8588                      MOVE   *A12,A8,0
089d0: 50c8                      AND    A6,A8
089e0: 810c                      MOVE   A8,*A12,0
089f0: 07a6 8300 0002            MOVE   @28300h,A6,1
08a20: 39c6                      DSJS   A6,8B10h
08a30: c008                      JR     8AC0h
08a40: 0550                      SETF   10h,0,0
08a50: 8586                      MOVE   *A12,A6,0
08a60: 5546                      OR     A10,A6
08a70: 80cc                      MOVE   A6,*A12,0
08a80: 07a6 8300 0002            MOVE   @28300h,A6,1
08ab0: 38a6                      DSJS   A6,8B10h
08ac0: 8586                      MOVE   *A12,A6,0
08ad0: 0b86 0800 0000            ANDI   FFFFF7FFh,A6
08b00: 80cc                      MOVE   A6,*A12,0
08b10: b7ee 00a0                 MOVE   *SP(A0h),A14,1
08b30: 09af 3440                 MMFM   SP,A6,A10,A12,A13
08b50: 0962                      RETS   2h

_set_eht_set_supply_state:
08b60: 098f 022c                 MMTM   SP,A6,A10,A12,A13
08b80: 4dcd                      MOVE   A14,A13
08b90: 0b0e 0040                 ADDI   40h,A14
08bb0: 0570                      SETF   10h,1,0
08bc0: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
08be0: b5a6 ffe0                 MOVE   *A13(FFE0h),A6,0
08c00: 0550                      SETF   10h,0,0
08c10: 05a8 7a80 0002            MOVE   @27A80h,A8,0
08c40: 810d                      MOVE   A8,*A13,0
08c50: 182c                      MOVK   1h,A12
08c60: 4cc8                      MOVE   A6,A8
08c70: ca6b                      JREQ   9330h
08c80: 1428                      DEC    A8
08c90: ca5f                      JREQ   9290h
08ca0: 1428                      DEC    A8
08cb0: ca53                      JREQ   91F0h
08cc0: 1428                      DEC    A8
08cd0: ca47                      JREQ   9150h
08ce0: 1428                      DEC    A8
08cf0: ca3a                      JREQ   90A0h
08d00: 1428                      DEC    A8
08d10: ca30                      JREQ   9020h
08d20: 1428                      DEC    A8
08d30: ca25                      JREQ   8F90h
08d40: 1428                      DEC    A8
08d50: ca1a                      JREQ   8F00h
08d60: 1428                      DEC    A8
08d70: ca0d                      JREQ   8E50h
08d80: 0d88 0062                 DSJ    A8,93C0h
08da0: a3cf                      MOVE   A14,-*SP,1
08db0: 934e                      MOVE   A10,*A14+,1
08dc0: 05a8 7a40 0002            MOVE   @27A40h,A8,0
08df0: 930e                      MOVE   A8,*A14+,1
08e00: 93ae                      MOVE   A13,*A14+,1
08e10: 0d5f 88c0 0000            CALLA  88C0h
08e40: c057                      JR     93C0h
08e50: a3cf                      MOVE   A14,-*SP,1
08e60: 934e                      MOVE   A10,*A14+,1
08e70: 05a8 7a30 0002            MOVE   @27A30h,A8,0
08ea0: 930e                      MOVE   A8,*A14+,1
08eb0: 93ae                      MOVE   A13,*A14+,1
08ec0: 0d5f 88c0 0000            CALLA  88C0h
08ef0: c04c                      JR     93C0h
08f00: a3cf                      MOVE   A14,-*SP,1
08f10: 934e                      MOVE   A10,*A14+,1
08f20: 1888                      MOVK   4h,A8
08f30: 930e                      MOVE   A8,*A14+,1
08f40: 93ae                      MOVE   A13,*A14+,1
08f50: 0d5f 88c0 0000            CALLA  88C0h
08f80: c043                      JR     93C0h
08f90: a3cf                      MOVE   A14,-*SP,1
08fa0: 934e                      MOVE   A10,*A14+,1
08fb0: 1848                      MOVK   2h,A8
08fc0: 930e                      MOVE   A8,*A14+,1
08fd0: 93ae                      MOVE   A13,*A14+,1
08fe0: 0d5f 88c0 0000            CALLA  88C0h
09010: c03a                      JR     93C0h
09020: a3cf                      MOVE   A14,-*SP,1
09030: 934e                      MOVE   A10,*A14+,1
09040: 938e                      MOVE   A12,*A14+,1
09050: 93ae                      MOVE   A13,*A14+,1
09060: 0d5f 88c0 0000            CALLA  88C0h
09090: c032                      JR     93C0h
090a0: a3cf                      MOVE   A14,-*SP,1
090b0: 934e                      MOVE   A10,*A14+,1
090c0: 05a8 d5b0 0002            MOVE   @2D5B0h,A8,0
090f0: 930e                      MOVE   A8,*A14+,1
09100: 93ae                      MOVE   A13,*A14+,1
09110: 0d5f 88c0 0000            CALLA  88C0h
09140: c027                      JR     93C0h
09150: a3cf                      MOVE   A14,-*SP,1
09160: 934e                      MOVE   A10,*A14+,1
09170: 09c8 0800                 MOVI   800h,A8
09190: 930e                      MOVE   A8,*A14+,1
091a0: 93ae                      MOVE   A13,*A14+,1
091b0: 0d5f 88c0 0000            CALLA  88C0h
091e0: c01d                      JR     93C0h
091f0: a3cf                      MOVE   A14,-*SP,1
09200: 934e                      MOVE   A10,*A14+,1
09210: 09c8 0400                 MOVI   400h,A8
09230: 930e                      MOVE   A8,*A14+,1
09240: 93ae                      MOVE   A13,*A14+,1
09250: 0d5f 88c0 0000            CALLA  88C0h
09280: c013                      JR     93C0h
09290: a3cf                      MOVE   A14,-*SP,1
092a0: 934e                      MOVE   A10,*A14+,1
092b0: 09c8 0200                 MOVI   200h,A8
092d0: 930e                      MOVE   A8,*A14+,1
092e0: 93ae                      MOVE   A13,*A14+,1
092f0: 0d5f 88c0 0000            CALLA  88C0h
09320: c009                      JR     93C0h
09330: a3cf                      MOVE   A14,-*SP,1
09340: 934e                      MOVE   A10,*A14+,1
09350: 09c8 0100                 MOVI   100h,A8
09370: 930e                      MOVE   A8,*A14+,1
09380: 93ae                      MOVE   A13,*A14+,1
09390: 0d5f 88c0 0000            CALLA  88C0h
093c0: 4d88                      MOVE   A12,A8
093d0: 102c                      INC    A12
093e0: 260c                      SLL    10h,A12
093f0: 2e0c                      SRL    10h,A12
09400: 09c8 002e                 MOVI   2Eh,A8
09420: 05e8 4ca8 0003            MOVB   A8,@34CA8h
09450: 4d8a                      MOVE   A12,A10
09460: 102c                      INC    A12
09470: 260c                      SLL    10h,A12
09480: 2e0c                      SRL    10h,A12
09490: 246a                      SLL    3h,A10
094a0: 0b2a 4ca0 0003            ADDI   34CA0h,A10
094d0: 09c8 004f                 MOVI   4Fh,A8
094f0: 8d0a                      MOVB   A8,*A10
09500: a3cf                      MOVE   A14,-*SP,1
09510: 188a                      MOVK   4h,A10
09520: 934e                      MOVE   A10,*A14+,1
09530: 246c                      SLL    3h,A12
09540: 0b2c 4ca0 0003            ADDI   34CA0h,A12
09570: 938e                      MOVE   A12,*A14+,1
09580: 0550                      SETF   10h,0,0
09590: 85ac                      MOVE   *A13,A12,0
095a0: 938e                      MOVE   A12,*A14+,1
095b0: 0d5f e060 0001            CALLA  1E060h
095e0: a3cf                      MOVE   A14,-*SP,1
095f0: 09e8 4ca8 0003            MOVI   34CA8h,A8
09620: 930e                      MOVE   A8,*A14+,1
09630: 0d5f 6440 0002            CALLA  26440h
09660: 4d0c                      MOVE   A8,A12
09670: 102c                      INC    A12
09680: 0550                      SETF   10h,0,0
09690: 052c                      ZEXT   A12,0
096a0: 4d88                      MOVE   A12,A8
096b0: 102c                      INC    A12
096c0: 052c                      ZEXT   A12,0
096d0: 2468                      SLL    3h,A8
096e0: 0b28 4ca0 0003            ADDI   34CA0h,A8
09710: 19aa                      MOVK   Dh,A10
09720: 8d48                      MOVB   A10,*A8
09730: 246c                      SLL    3h,A12
09740: 0b2c 4ca0 0003            ADDI   34CA0h,A12
09770: 4508                      SUB    A8,A8
09780: 8d0c                      MOVB   A8,*A12
09790: 18ac                      MOVK   5h,A12
097a0: 05ec 4ca0 0003            MOVB   A12,@34CA0h
097d0: a3cf                      MOVE   A14,-*SP,1
097e0: 09e8 4ca8 0003            MOVI   34CA8h,A8
09810: 930e                      MOVE   A8,*A14+,1
09820: 0d5f 6440 0002            CALLA  26440h
09850: 10c8                      ADDK   6h,A8
09860: 0788 4c60 0003            MOVE   A8,@34C60h,1
09890: 1a8a                      MOVK   14h,A10
098a0: 078a 4c80 0003            MOVE   A10,@34C80h,1
098d0: a3cf                      MOVE   A14,-*SP,1
098e0: 09e8 4c60 0003            MOVI   34C60h,A8
09910: 930e                      MOVE   A8,*A14+,1
09920: 182c                      MOVK   1h,A12
09930: 938e                      MOVE   A12,*A14+,1
09940: 0d5f 0000 0000            CALLA  0h
09970: b30d 0020                 MOVE   A8,*A13(20h),1
09990: 4d08                      MOVE   A8,A8
099a0: cb00 00a6                 JRNE   A420h
099c0: a3cf                      MOVE   A14,-*SP,1
099d0: 458c                      SUB    A12,A12
099e0: 938e                      MOVE   A12,*A14+,1
099f0: 09ec d9a0 0002            MOVI   2D9A0h,A12
09a20: 938e                      MOVE   A12,*A14+,1
09a30: 934e                      MOVE   A10,*A14+,1
09a40: 0d5f 0000 0000            CALLA  0h
09a70: b30d 0020                 MOVE   A8,*A13(20h),1
09a90: 4d08                      MOVE   A8,A8
09aa0: cb00 0096                 JRNE   A420h
09ac0: a3cf                      MOVE   A14,-*SP,1
09ad0: 4da8                      MOVE   A13,A8
09ae0: 1008                      ADDK   20h,A8
09af0: 930e                      MOVE   A8,*A14+,1
09b00: 09e8 d9e0 0002            MOVI   2D9E0h,A8
09b30: 930e                      MOVE   A8,*A14+,1
09b40: 0d5f d1a0 0001            CALLA  1D1A0h
09b70: 19ea                      MOVK   Fh,A10
09b80: 5148                      AND    A10,A8
09b90: cb00 0087                 JRNE   A420h
09bb0: 0550                      SETF   10h,0,0
09bc0: 85a8                      MOVE   *A13,A8,0
09bd0: 0588 7a80 0002            MOVE   A8,@27A80h,0
09c00: 85aa                      MOVE   *A13,A10,0
09c10: 0b8a f7ff ffff            ANDI   800h,A10
09c40: 182a                      MOVK   1h,A10
09c50: cb01                      JRNE   9C70h
09c60: 454a                      SUB    A10,A10
09c70: 058a 7a20 0002            MOVE   A10,@27A20h,0
09ca0: 3506                      CMPK   8h,A6
09cb0: c32f                      JRHI   9FB0h
09cc0: 24a6                      SLL    5h,A6
09cd0: 0b26 6a80 0002            ADDI   26A80h,A6
09d00: 86c6                      MOVE   *A6,A6,1
09d10: 0166                      JUMP   A6
09d20: 85ac                      MOVE   *A13,A12,0
09d30: 05aa 7a30 0002            MOVE   @27A30h,A10,0
09d60: 514c                      AND    A10,A12
09d70: cb23                      JRNE   9FB0h
09d80: c04e                      JR     A270h
09d90: 85ac                      MOVE   *A13,A12,0
09da0: 1fac                      BTST   2h,A12
09db0: cb1f                      JRNE   9FB0h
09dc0: c042                      JR     A1F0h
09dd0: 85ac                      MOVE   *A13,A12,0
09de0: 1fcc                      BTST   1h,A12
09df0: cb1b                      JRNE   9FB0h
09e00: c036                      JR     A170h
09e10: 85ac                      MOVE   *A13,A12,0
09e20: 1fec                      BTST   0h,A12
09e30: cb17                      JRNE   9FB0h
09e40: c02a                      JR     A0F0h
09e50: 85ac                      MOVE   *A13,A12,0
09e60: 05aa d5b0 0002            MOVE   @2D5B0h,A10,0
09e90: 514c                      AND    A10,A12
09ea0: cb10                      JRNE   9FB0h
09eb0: c01d                      JR     A090h
09ec0: 85ac                      MOVE   *A13,A12,0
09ed0: 1eac                      BTST   Ah,A12
09ee0: cb0c                      JRNE   9FB0h
09ef0: c013                      JR     A030h
09f00: 85ac                      MOVE   *A13,A12,0
09f10: 1ecc                      BTST   9h,A12
09f20: cb08                      JRNE   9FB0h
09f30: c009                      JR     9FD0h
09f40: 85ac                      MOVE   *A13,A12,0
09f50: 1eec                      BTST   8h,A12
09f60: cb04                      JRNE   9FB0h
09f70: 454a                      SUB    A10,A10
09f80: 078a 5240 0003            MOVE   A10,@35240h,1
09fb0: 1828                      MOVK   1h,A8
09fc0: c046                      JR     A430h
09fd0: 454a                      SUB    A10,A10
09fe0: 078a 5280 0003            MOVE   A10,@35280h,1
0a010: 1828                      MOVK   1h,A8
0a020: c040                      JR     A430h
0a030: 454a                      SUB    A10,A10
0a040: 078a 4920 0003            MOVE   A10,@34920h,1
0a070: 1828                      MOVK   1h,A8
0a080: c03a                      JR     A430h
0a090: 458c                      SUB    A12,A12
0a0a0: 078c dc60 0002            MOVE   A12,@2DC60h,1
0a0d0: 1828                      MOVK   1h,A8
0a0e0: c034                      JR     A430h
0a0f0: 09ea 0000 42c8            MOVI   42C80000h,A10
0a120: 078a 48e0 0003            MOVE   A10,@348E0h,1
0a150: 1828                      MOVK   1h,A8
0a160: c02c                      JR     A430h
0a170: 09ea 0000 42c8            MOVI   42C80000h,A10
0a1a0: 078a 4900 0003            MOVE   A10,@34900h,1
0a1d0: 1828                      MOVK   1h,A8
0a1e0: c024                      JR     A430h
0a1f0: 09ea 0000 42c8            MOVI   42C80000h,A10
0a220: 078a 4940 0003            MOVE   A10,@34940h,1
0a250: 1828                      MOVK   1h,A8
0a260: c01c                      JR     A430h
0a270: 458c                      SUB    A12,A12
0a280: 078c 5240 0003            MOVE   A12,@35240h,1
0a2b0: 078c 5280 0003            MOVE   A12,@35280h,1
0a2e0: 078c dc60 0002            MOVE   A12,@2DC60h,1
0a310: 078c 4920 0003            MOVE   A12,@34920h,1
0a340: 09e6 0000 42c8            MOVI   42C80000h,A6
0a370: 0786 48e0 0003            MOVE   A6,@348E0h,1
0a3a0: 0786 4900 0003            MOVE   A6,@34900h,1
0a3d0: 0786 4940 0003            MOVE   A6,@34940h,1
0a400: 1828                      MOVK   1h,A8
0a410: c001                      JR     A430h
0a420: 4508                      SUB    A8,A8
0a430: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0a450: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0a470: 0962                      RETS   2h

_supply_toggle:
0a480: 098f 002c                 MMTM   SP,A10,A12,A13
0a4a0: 4dcd                      MOVE   A14,A13
0a4b0: 0b0e 0040                 ADDI   40h,A14
0a4d0: 182c                      MOVK   1h,A12
0a4e0: 0550                      SETF   10h,0,0
0a4f0: 05a8 7a80 0002            MOVE   @27A80h,A8,0
0a520: 810d                      MOVE   A8,*A13,0
0a530: 0570                      SETF   10h,1,0
0a540: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0a560: ca3f                      JREQ   A960h
0a570: 14c8                      SUBK   6h,A8
0a580: ca2a                      JREQ   A830h
0a590: 1428                      DEC    A8
0a5a0: ca12                      JREQ   A6D0h
0a5b0: 1448                      SUBK   2h,A8
0a5c0: ca10                      JREQ   A6D0h
0a5d0: a3cf                      MOVE   A14,-*SP,1
0a5e0: 938e                      MOVE   A12,*A14+,1
0a5f0: 0550                      SETF   10h,0,0
0a600: 05a8 7a30 0002            MOVE   @27A30h,A8,0
0a630: 0b88 0301 0000            ANDI   FFFFFCFEh,A8
0a660: 0528                      ZEXT   A8,0
0a670: 930e                      MOVE   A8,*A14+,1
0a680: 93ae                      MOVE   A13,*A14+,1
0a690: 0d5f 88c0 0000            CALLA  88C0h
0a6c0: c039                      JR     AA60h
0a6d0: 05c0 7a80 0002 7a90 0002  MOVE   @27A80h,@27A90h,0
0a720: a3cf                      MOVE   A14,-*SP,1
0a730: 4508                      SUB    A8,A8
0a740: 930e                      MOVE   A8,*A14+,1
0a750: 0550                      SETF   10h,0,0
0a760: 05a8 7a30 0002            MOVE   @27A30h,A8,0
0a790: 0b88 0301 0000            ANDI   FFFFFCFEh,A8
0a7c0: 0528                      ZEXT   A8,0
0a7d0: 930e                      MOVE   A8,*A14+,1
0a7e0: 93ae                      MOVE   A13,*A14+,1
0a7f0: 0d5f 88c0 0000            CALLA  88C0h
0a820: c023                      JR     AA60h
0a830: 0550                      SETF   10h,0,0
0a840: 05a8 7a90 0002            MOVE   @27A90h,A8,0
0a870: 810d                      MOVE   A8,*A13,0
0a880: 0ba8 0800 0000            ORI    800h,A8
0a8b0: 810d                      MOVE   A8,*A13,0
0a8c0: 07a8 8300 0002            MOVE   @28300h,A8,1
0a8f0: 3ac8                      DSJS   A8,AA60h
0a900: 85a8                      MOVE   *A13,A8,0
0a910: 0b88 0800 0000            ANDI   FFFFF7FFh,A8
0a940: 810d                      MOVE   A8,*A13,0
0a950: c010                      JR     AA60h
0a960: a3cf                      MOVE   A14,-*SP,1
0a970: 4508                      SUB    A8,A8
0a980: 930e                      MOVE   A8,*A14+,1
0a990: 0550                      SETF   10h,0,0
0a9a0: 05a8 7a30 0002            MOVE   @27A30h,A8,0
0a9d0: 0b88 0301 0000            ANDI   FFFFFCFEh,A8
0aa00: 0528                      ZEXT   A8,0
0aa10: 930e                      MOVE   A8,*A14+,1
0aa20: 93ae                      MOVE   A13,*A14+,1
0aa30: 0d5f 88c0 0000            CALLA  88C0h
0aa60: 4d88                      MOVE   A12,A8
0aa70: 102c                      INC    A12
0aa80: 260c                      SLL    10h,A12
0aa90: 2e0c                      SRL    10h,A12
0aaa0: 09c8 002e                 MOVI   2Eh,A8
0aac0: 05e8 4ca8 0003            MOVB   A8,@34CA8h
0aaf0: 4d88                      MOVE   A12,A8
0ab00: 102c                      INC    A12
0ab10: 260c                      SLL    10h,A12
0ab20: 2e0c                      SRL    10h,A12
0ab30: 2468                      SLL    3h,A8
0ab40: 0b28 4ca0 0003            ADDI   34CA0h,A8
0ab70: 09ca 004f                 MOVI   4Fh,A10
0ab90: 8d48                      MOVB   A10,*A8
0aba0: a3cf                      MOVE   A14,-*SP,1
0abb0: 1888                      MOVK   4h,A8
0abc0: 930e                      MOVE   A8,*A14+,1
0abd0: 246c                      SLL    3h,A12
0abe0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
0ac10: 938e                      MOVE   A12,*A14+,1
0ac20: 0550                      SETF   10h,0,0
0ac30: 85ac                      MOVE   *A13,A12,0
0ac40: 938e                      MOVE   A12,*A14+,1
0ac50: 0d5f e060 0001            CALLA  1E060h
0ac80: a3cf                      MOVE   A14,-*SP,1
0ac90: 09e8 4ca8 0003            MOVI   34CA8h,A8
0acc0: 930e                      MOVE   A8,*A14+,1
0acd0: 0d5f 6440 0002            CALLA  26440h
0ad00: 4d0c                      MOVE   A8,A12
0ad10: 102c                      INC    A12
0ad20: 0550                      SETF   10h,0,0
0ad30: 052c                      ZEXT   A12,0
0ad40: 4d88                      MOVE   A12,A8
0ad50: 102c                      INC    A12
0ad60: 052c                      ZEXT   A12,0
0ad70: 2468                      SLL    3h,A8
0ad80: 0b28 4ca0 0003            ADDI   34CA0h,A8
0adb0: 19aa                      MOVK   Dh,A10
0adc0: 8d48                      MOVB   A10,*A8
0add0: 246c                      SLL    3h,A12
0ade0: 0b2c 4ca0 0003            ADDI   34CA0h,A12
0ae10: 4508                      SUB    A8,A8
0ae20: 8d0c                      MOVB   A8,*A12
0ae30: 18ac                      MOVK   5h,A12
0ae40: 05ec 4ca0 0003            MOVB   A12,@34CA0h
0ae70: a3cf                      MOVE   A14,-*SP,1
0ae80: 09e8 4ca8 0003            MOVI   34CA8h,A8
0aeb0: 930e                      MOVE   A8,*A14+,1
0aec0: 0d5f 6440 0002            CALLA  26440h
0aef0: 10c8                      ADDK   6h,A8
0af00: 0788 4c60 0003            MOVE   A8,@34C60h,1
0af30: 1a8a                      MOVK   14h,A10
0af40: 078a 4c80 0003            MOVE   A10,@34C80h,1
0af70: a3cf                      MOVE   A14,-*SP,1
0af80: 09e8 4c60 0003            MOVI   34C60h,A8
0afb0: 930e                      MOVE   A8,*A14+,1
0afc0: 182c                      MOVK   1h,A12
0afd0: 938e                      MOVE   A12,*A14+,1
0afe0: 0d5f 0000 0000            CALLA  0h
0b010: b30d 0020                 MOVE   A8,*A13(20h),1
0b030: 4d08                      MOVE   A8,A8
0b040: cb24                      JRNE   B290h
0b050: a3cf                      MOVE   A14,-*SP,1
0b060: 458c                      SUB    A12,A12
0b070: 938e                      MOVE   A12,*A14+,1
0b080: 09ec d9a0 0002            MOVI   2D9A0h,A12
0b0b0: 938e                      MOVE   A12,*A14+,1
0b0c0: 934e                      MOVE   A10,*A14+,1
0b0d0: 0d5f 0000 0000            CALLA  0h
0b100: b30d 0020                 MOVE   A8,*A13(20h),1
0b120: 4d08                      MOVE   A8,A8
0b130: cb15                      JRNE   B290h
0b140: a3cf                      MOVE   A14,-*SP,1
0b150: 4da8                      MOVE   A13,A8
0b160: 1008                      ADDK   20h,A8
0b170: 930e                      MOVE   A8,*A14+,1
0b180: 09e8 d9e0 0002            MOVI   2D9E0h,A8
0b1b0: 930e                      MOVE   A8,*A14+,1
0b1c0: 0d5f d1a0 0001            CALLA  1D1A0h
0b1f0: 19ea                      MOVK   Fh,A10
0b200: 5148                      AND    A10,A8
0b210: cb05                      JRNE   B270h
0b220: 0550                      SETF   10h,0,0
0b230: 85a8                      MOVE   *A13,A8,0
0b240: 0588 7a80 0002            MOVE   A8,@27A80h,0
0b270: 1828                      MOVK   1h,A8
0b280: c001                      JR     B2A0h
0b290: 4508                      SUB    A8,A8
0b2a0: b7ee 0080                 MOVE   *SP(80h),A14,1
0b2c0: 09af 3400                 MMFM   SP,A10,A12,A13
0b2e0: 0962                      RETS   2h

_send_direct_command:
0b2f0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
0b310: 4dcd                      MOVE   A14,A13
0b320: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
0b340: 8ec8                      MOVB   *A6,A8
0b350: 0b48 ffd1                 CMPI   2Eh,A8
0b370: ca12                      JREQ   B4A0h
0b380: 8ec8                      MOVB   *A6,A8
0b390: 0b48 ffc0                 CMPI   3Fh,A8
0b3b0: ca0e                      JREQ   B4A0h
0b3c0: 8ec8                      MOVB   *A6,A8
0b3d0: 0b48 ffde                 CMPI   21h,A8
0b3f0: ca0a                      JREQ   B4A0h
0b400: a3cf                      MOVE   A14,-*SP,1
0b410: 4508                      SUB    A8,A8
0b420: 930e                      MOVE   A8,*A14+,1
0b430: 09e8 6ba0 0002            MOVI   26BA0h,A8
0b460: 930e                      MOVE   A8,*A14+,1
0b470: 0d5f 0000 0000            CALLA  0h
0b4a0: aec8 0008                 MOVB   *A6(8h),A8
0b4c0: 0be8 ffce                 SUBI   31h,A8
0b4e0: ca66                      JREQ   BB50h
0b4f0: 1428                      DEC    A8
0b500: ca61                      JREQ   BB20h
0b510: 1428                      DEC    A8
0b520: ca5c                      JREQ   BAF0h
0b530: 15a8                      SUBK   Dh,A8
0b540: ca57                      JREQ   BAC0h
0b550: 1428                      DEC    A8
0b560: ca52                      JREQ   BA90h
0b570: 1428                      DEC    A8
0b580: ca4d                      JREQ   BA60h
0b590: 1428                      DEC    A8
0b5a0: ca48                      JREQ   BA30h
0b5b0: 1448                      SUBK   2h,A8
0b5c0: ca43                      JREQ   BA00h
0b5d0: 1428                      DEC    A8
0b5e0: ca3e                      JREQ   B9D0h
0b5f0: 1448                      SUBK   2h,A8
0b600: ca39                      JREQ   B9A0h
0b610: 1428                      DEC    A8
0b620: ca34                      JREQ   B970h
0b630: 1468                      SUBK   3h,A8
0b640: ca2f                      JREQ   B940h
0b650: 1468                      SUBK   3h,A8
0b660: ca2a                      JREQ   B910h
0b670: 1468                      SUBK   3h,A8
0b680: ca25                      JREQ   B8E0h
0b690: 1428                      DEC    A8
0b6a0: ca15                      JREQ   B800h
0b6b0: 1428                      DEC    A8
0b6c0: ca10                      JREQ   B7D0h
0b6d0: 1488                      SUBK   4h,A8
0b6e0: ca0b                      JREQ   B7A0h
0b6f0: a3cf                      MOVE   A14,-*SP,1
0b700: 4508                      SUB    A8,A8
0b710: 930e                      MOVE   A8,*A14+,1
0b720: 09e8 6c30 0002            MOVI   26C30h,A8
0b750: 930e                      MOVE   A8,*A14+,1
0b760: 0d5f 0000 0000            CALLA  0h
0b790: c03d                      JR     BB70h
0b7a0: 18ac                      MOVK   5h,A12
0b7b0: 186a                      MOVK   3h,A10
0b7c0: c03a                      JR     BB70h
0b7d0: 18ac                      MOVK   5h,A12
0b7e0: 182a                      MOVK   1h,A10
0b7f0: c037                      JR     BB70h
0b800: 8ecc                      MOVB   *A6,A12
0b810: 0b4c ffd1                 CMPI   2Eh,A12
0b830: ca07                      JREQ   B8B0h
0b840: 8ecc                      MOVB   *A6,A12
0b850: 0b4c ffde                 CMPI   21h,A12
0b870: ca03                      JREQ   B8B0h
0b880: 18ec                      MOVK   7h,A12
0b890: 454a                      SUB    A10,A10
0b8a0: c02c                      JR     BB70h
0b8b0: 18ac                      MOVK   5h,A12
0b8c0: 186a                      MOVK   3h,A10
0b8d0: c029                      JR     BB70h
0b8e0: 18ac                      MOVK   5h,A12
0b8f0: 454a                      SUB    A10,A10
0b900: c026                      JR     BB70h
0b910: 18ac                      MOVK   5h,A12
0b920: 188a                      MOVK   4h,A10
0b930: c023                      JR     BB70h
0b940: 18ac                      MOVK   5h,A12
0b950: 186a                      MOVK   3h,A10
0b960: c020                      JR     BB70h
0b970: 18ec                      MOVK   7h,A12
0b980: 454a                      SUB    A10,A10
0b990: c01d                      JR     BB70h
0b9a0: 192c                      MOVK   9h,A12
0b9b0: 454a                      SUB    A10,A10
0b9c0: c01a                      JR     BB70h
0b9d0: 18ac                      MOVK   5h,A12
0b9e0: 186a                      MOVK   3h,A10
0b9f0: c017                      JR     BB70h
0ba00: 18ac                      MOVK   5h,A12
0ba10: 186a                      MOVK   3h,A10
0ba20: c014                      JR     BB70h
0ba30: 18ac                      MOVK   5h,A12
0ba40: 186a                      MOVK   3h,A10
0ba50: c011                      JR     BB70h
0ba60: 18ac                      MOVK   5h,A12
0ba70: 186a                      MOVK   3h,A10
0ba80: c00e                      JR     BB70h
0ba90: 18ac                      MOVK   5h,A12
0baa0: 182a                      MOVK   1h,A10
0bab0: c00b                      JR     BB70h
0bac0: 1bac                      MOVK   1Dh,A12
0bad0: 454a                      SUB    A10,A10
0bae0: c008                      JR     BB70h
0baf0: 18ac                      MOVK   5h,A12
0bb00: 186a                      MOVK   3h,A10
0bb10: c005                      JR     BB70h
0bb20: 18ac                      MOVK   5h,A12
0bb30: 186a                      MOVK   3h,A10
0bb40: c002                      JR     BB70h
0bb50: 18ac                      MOVK   5h,A12
0bb60: 186a                      MOVK   3h,A10
0bb70: 8ec8                      MOVB   *A6,A8
0bb80: 0b48 ffc0                 CMPI   3Fh,A8
0bba0: cb0f                      JRNE   BCA0h
0bbb0: 414c                      ADD    A10,A12
0bbc0: 270c                      SLL    18h,A12
0bbd0: 290c                      SRA    18h,A12
0bbe0: 4d48                      MOVE   A10,A8
0bbf0: ca03                      JREQ   BC30h
0bc00: 102c                      INC    A12
0bc10: 270c                      SLL    18h,A12
0bc20: 290c                      SRA    18h,A12
0bc30: aeca 0008                 MOVB   *A6(8h),A10
0bc50: 0b4a ffb0                 CMPI   4Fh,A10
0bc70: cb01                      JRNE   BC90h
0bc80: 192c                      MOVK   9h,A12
0bc90: 454a                      SUB    A10,A10
0bca0: 05ec 4ca0 0003            MOVB   A12,@34CA0h
0bcd0: 4508                      SUB    A8,A8
0bce0: 05e8 4ca8 0003            MOVB   A8,@34CA8h
0bd10: a3cf                      MOVE   A14,-*SP,1
0bd20: 92ce                      MOVE   A6,*A14+,1
0bd30: 09e8 4ca0 0003            MOVI   34CA0h,A8
0bd60: 930e                      MOVE   A8,*A14+,1
0bd70: 0d5f 61d0 0002            CALLA  261D0h
0bda0: 4d48                      MOVE   A10,A8
0bdb0: 2468                      SLL    3h,A8
0bdc0: 0b28 4cb8 0003            ADDI   34CB8h,A8
0bdf0: 19a6                      MOVK   Dh,A6
0be00: 8cc8                      MOVB   A6,*A8
0be10: 246a                      SLL    3h,A10
0be20: 0b2a 4cc0 0003            ADDI   34CC0h,A10
0be50: 4508                      SUB    A8,A8
0be60: 8d0a                      MOVB   A8,*A10
0be70: a3cf                      MOVE   A14,-*SP,1
0be80: 09ea 4ca8 0003            MOVI   34CA8h,A10
0beb0: 934e                      MOVE   A10,*A14+,1
0bec0: 0d5f 6440 0002            CALLA  26440h
0bef0: 10c8                      ADDK   6h,A8
0bf00: 0788 4c60 0003            MOVE   A8,@34C60h,1
0bf30: 1a86                      MOVK   14h,A6
0bf40: 0786 4c80 0003            MOVE   A6,@34C80h,1
0bf70: a3cf                      MOVE   A14,-*SP,1
0bf80: 454a                      SUB    A10,A10
0bf90: 934e                      MOVE   A10,*A14+,1
0bfa0: 09ea 4ca0 0003            MOVI   34CA0h,A10
0bfd0: 934e                      MOVE   A10,*A14+,1
0bfe0: 0d5f 0000 0000            CALLA  0h
0c010: a3cf                      MOVE   A14,-*SP,1
0c020: 09e8 4c60 0003            MOVI   34C60h,A8
0c050: 930e                      MOVE   A8,*A14+,1
0c060: 1828                      MOVK   1h,A8
0c070: 930e                      MOVE   A8,*A14+,1
0c080: 0d5f 0000 0000            CALLA  0h
0c0b0: 4d0c                      MOVE   A8,A12
0c0c0: cb15                      JRNE   C220h
0c0d0: a3cf                      MOVE   A14,-*SP,1
0c0e0: 458c                      SUB    A12,A12
0c0f0: 938e                      MOVE   A12,*A14+,1
0c100: 09e8 d9a0 0002            MOVI   2D9A0h,A8
0c130: 930e                      MOVE   A8,*A14+,1
0c140: 92ce                      MOVE   A6,*A14+,1
0c150: 0d5f 0000 0000            CALLA  0h
0c180: a3cf                      MOVE   A14,-*SP,1
0c190: 938e                      MOVE   A12,*A14+,1
0c1a0: 09e8 d9e0 0002            MOVI   2D9E0h,A8
0c1d0: 930e                      MOVE   A8,*A14+,1
0c1e0: 0d5f 0000 0000            CALLA  0h
0c210: c009                      JR     C2B0h
0c220: a3cf                      MOVE   A14,-*SP,1
0c230: 938e                      MOVE   A12,*A14+,1
0c240: 09ec 6cc0 0002            MOVI   26CC0h,A12
0c270: 938e                      MOVE   A12,*A14+,1
0c280: 0d5f 0000 0000            CALLA  0h
0c2b0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0c2d0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0c2f0: 0962                      RETS   2h

_cp_eht_init:
0c300: 098f 002c                 MMTM   SP,A10,A12,A13
0c320: 4dcd                      MOVE   A14,A13
0c330: 0b0e 0040                 ADDI   40h,A14
0c350: 09e8 6f40 0002            MOVI   26F40h,A8
0c380: 4daa                      MOVE   A13,A10
0c390: 9b0a                      MOVE   *A8+,*A10+,1
0c3a0: 0550                      SETF   10h,0,0
0c3b0: 890a                      MOVE   *A8,*A10,0
0c3c0: a3cf                      MOVE   A14,-*SP,1
0c3d0: 93ae                      MOVE   A13,*A14+,1
0c3e0: 182a                      MOVK   1h,A10
0c3f0: 934e                      MOVE   A10,*A14+,1
0c400: 0d5f 0000 0000            CALLA  0h
0c430: 4d0c                      MOVE   A8,A12
0c440: 39e8                      DSJS   A8,C540h
0c450: a3cf                      MOVE   A14,-*SP,1
0c460: 4508                      SUB    A8,A8
0c470: 930e                      MOVE   A8,*A14+,1
0c480: 934e                      MOVE   A10,*A14+,1
0c490: 1848                      MOVK   2h,A8
0c4a0: 930e                      MOVE   A8,*A14+,1
0c4b0: 930e                      MOVE   A8,*A14+,1
0c4c0: 0d5f 0000 0000            CALLA  0h
0c4f0: 4d0c                      MOVE   A8,A12
0c500: 3868                      DSJS   A8,C540h
0c510: 0d5f ebb0 0001            CALLA  1EBB0h
0c540: a3cf                      MOVE   A14,-*SP,1
0c550: 09c8 0064                 MOVI   64h,A8
0c570: 930e                      MOVE   A8,*A14+,1
0c580: 09ea 4f20 0003            MOVI   34F20h,A10
0c5b0: 934e                      MOVE   A10,*A14+,1
0c5c0: 09e8 5445 5154            MOVI   51545445h,A8
0c5f0: 930e                      MOVE   A8,*A14+,1
0c600: 1a08                      MOVK   10h,A8
0c610: 930e                      MOVE   A8,*A14+,1
0c620: 0d5f 0000 0000            CALLA  0h
0c650: a3cf                      MOVE   A14,-*SP,1
0c660: 09e8 1a60 0001            MOVI   11A60h,A8
0c690: 930e                      MOVE   A8,*A14+,1
0c6a0: 4508                      SUB    A8,A8
0c6b0: 930e                      MOVE   A8,*A14+,1
0c6c0: 09c8 0400                 MOVI   400h,A8
0c6e0: 930e                      MOVE   A8,*A14+,1
0c6f0: 09e8 4845 4454            MOVI   44544845h,A8
0c720: 930e                      MOVE   A8,*A14+,1
0c730: 19a8                      MOVK   Dh,A8
0c740: 930e                      MOVE   A8,*A14+,1
0c750: 0d5f 0000 0000            CALLA  0h
0c780: 4d0c                      MOVE   A8,A12
0c790: cb5e                      JRNE   CD80h
0c7a0: a3cf                      MOVE   A14,-*SP,1
0c7b0: 19a8                      MOVK   Dh,A8
0c7c0: 930e                      MOVE   A8,*A14+,1
0c7d0: 0d5f 0000 0000            CALLA  0h
0c800: 4d0c                      MOVE   A8,A12
0c810: cb56                      JRNE   CD80h
0c820: a3cf                      MOVE   A14,-*SP,1
0c830: 09e8 c4c0 0001            MOVI   1C4C0h,A8
0c860: 930e                      MOVE   A8,*A14+,1
0c870: 4508                      SUB    A8,A8
0c880: 930e                      MOVE   A8,*A14+,1
0c890: 09c8 0400                 MOVI   400h,A8
0c8b0: 930e                      MOVE   A8,*A14+,1
0c8c0: 09e8 4845 4654            MOVI   46544845h,A8
0c8f0: 930e                      MOVE   A8,*A14+,1
0c900: 1988                      MOVK   Ch,A8
0c910: 930e                      MOVE   A8,*A14+,1
0c920: 0d5f 0000 0000            CALLA  0h
0c950: 4d0c                      MOVE   A8,A12
0c960: cb41                      JRNE   CD80h
0c970: a3cf                      MOVE   A14,-*SP,1
0c980: 1988                      MOVK   Ch,A8
0c990: 930e                      MOVE   A8,*A14+,1
0c9a0: 0d5f 0000 0000            CALLA  0h
0c9d0: 4d0c                      MOVE   A8,A12
0c9e0: cb39                      JRNE   CD80h
0c9f0: a3cf                      MOVE   A14,-*SP,1
0ca00: 09e8 0000 0000            MOVI   0h,A8
0ca30: 930e                      MOVE   A8,*A14+,1
0ca40: 4508                      SUB    A8,A8
0ca50: 930e                      MOVE   A8,*A14+,1
0ca60: 09c8 0400                 MOVI   400h,A8
0ca80: 930e                      MOVE   A8,*A14+,1
0ca90: 09e8 4845 4d54            MOVI   4D544845h,A8
0cac0: 930e                      MOVE   A8,*A14+,1
0cad0: 18c8                      MOVK   6h,A8
0cae0: 930e                      MOVE   A8,*A14+,1
0caf0: 0d5f 0000 0000            CALLA  0h
0cb20: 4d0c                      MOVE   A8,A12
0cb30: cb24                      JRNE   CD80h
0cb40: a3cf                      MOVE   A14,-*SP,1
0cb50: 18c8                      MOVK   6h,A8
0cb60: 930e                      MOVE   A8,*A14+,1
0cb70: 0d5f 0000 0000            CALLA  0h
0cba0: 4d0c                      MOVE   A8,A12
0cbb0: cb1c                      JRNE   CD80h
0cbc0: a3cf                      MOVE   A14,-*SP,1
0cbd0: 09e8 56c0 0001            MOVI   156C0h,A8
0cc00: 930e                      MOVE   A8,*A14+,1
0cc10: 4508                      SUB    A8,A8
0cc20: 930e                      MOVE   A8,*A14+,1
0cc30: 09c8 0400                 MOVI   400h,A8
0cc50: 930e                      MOVE   A8,*A14+,1
0cc60: 09e8 4845 5254            MOVI   52544845h,A8
0cc90: 930e                      MOVE   A8,*A14+,1
0cca0: 18e8                      MOVK   7h,A8
0ccb0: 930e                      MOVE   A8,*A14+,1
0ccc0: 0d5f 0000 0000            CALLA  0h
0ccf0: 4d0c                      MOVE   A8,A12
0cd00: cb07                      JRNE   CD80h
0cd10: a3cf                      MOVE   A14,-*SP,1
0cd20: 18e8                      MOVK   7h,A8
0cd30: 930e                      MOVE   A8,*A14+,1
0cd40: 0d5f 0000 0000            CALLA  0h
0cd70: 4d0c                      MOVE   A8,A12
0cd80: 4d88                      MOVE   A12,A8
0cd90: 0bee ffbf                 SUBI   40h,A14
0cdb0: 09af 3400                 MMFM   SP,A10,A12,A13
0cdd0: 0960                      RETS   

_cp_eht_status:
0cde0: 098f 002c                 MMTM   SP,A10,A12,A13
0ce00: 4dcd                      MOVE   A14,A13
0ce10: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0ce30: 0550                      SETF   10h,0,0
0ce40: 05a8 7a70 0002            MOVE   @27A70h,A8,0
0ce70: b10c 01e0                 MOVE   A8,*A12(1E0h),0
0ce90: 05a8 7a50 0002            MOVE   @27A50h,A8,0
0cec0: 188a                      MOVK   4h,A10
0ced0: 510a                      AND    A8,A10
0cee0: 182a                      MOVK   1h,A10
0cef0: cb01                      JRNE   CF10h
0cf00: 454a                      SUB    A10,A10
0cf10: b14c 01f0                 MOVE   A10,*A12(1F0h),0
0cf30: 184a                      MOVK   2h,A10
0cf40: 510a                      AND    A8,A10
0cf50: 182a                      MOVK   1h,A10
0cf60: cb01                      JRNE   CF80h
0cf70: 454a                      SUB    A10,A10
0cf80: b14c 0200                 MOVE   A10,*A12(200h),0
0cfa0: 190a                      MOVK   8h,A10
0cfb0: 510a                      AND    A8,A10
0cfc0: 182a                      MOVK   1h,A10
0cfd0: cb01                      JRNE   CFF0h
0cfe0: 454a                      SUB    A10,A10
0cff0: b14c 0210                 MOVE   A10,*A12(210h),0
0d010: 182a                      MOVK   1h,A10
0d020: 510a                      AND    A8,A10
0d030: 182a                      MOVK   1h,A10
0d040: cb01                      JRNE   D060h
0d050: 454a                      SUB    A10,A10
0d060: b14c 0220                 MOVE   A10,*A12(220h),0
0d080: 0b88 ffef ffff            ANDI   10h,A8
0d0b0: 182a                      MOVK   1h,A10
0d0c0: cb01                      JRNE   D0E0h
0d0d0: 454a                      SUB    A10,A10
0d0e0: b14c 0230                 MOVE   A10,*A12(230h),0
0d100: 07aa 5280 0003            MOVE   @35280h,A10,1
0d130: 834c                      MOVE   A10,*A12,1
0d140: 07a8 5240 0003            MOVE   @35240h,A8,1
0d170: b30c 0020                 MOVE   A8,*A12(20h),1
0d190: 930e                      MOVE   A8,*A14+,1
0d1a0: 0d5f 01e0 0002            CALLA  201E0h
0d1d0: 4508                      SUB    A8,A8
0d1e0: 930e                      MOVE   A8,*A14+,1
0d1f0: 930e                      MOVE   A8,*A14+,1
0d200: 0d5f 3ed0 0002            CALLA  23ED0h
0d230: ca0c                      JREQ   D300h
0d240: 0548                      SETF   8h,0,0
0d250: 05a8 52a0 0003            MOVE   @352A0h,A8,0
0d280: cb12                      JRNE   D3B0h
0d290: a3cf                      MOVE   A14,-*SP,1
0d2a0: 1828                      MOVK   1h,A8
0d2b0: 930e                      MOVE   A8,*A14+,1
0d2c0: 0d5f daa0 0000            CALLA  DAA0h
0d2f0: c00b                      JR     D3B0h
0d300: 0548                      SETF   8h,0,0
0d310: 05a8 52a0 0003            MOVE   @352A0h,A8,0
0d340: ca06                      JREQ   D3B0h
0d350: a3cf                      MOVE   A14,-*SP,1
0d360: 4508                      SUB    A8,A8
0d370: 930e                      MOVE   A8,*A14+,1
0d380: 0d5f daa0 0000            CALLA  DAA0h
0d3b0: 07aa 48e0 0003            MOVE   @348E0h,A10,1
0d3e0: b34c 00c0                 MOVE   A10,*A12(C0h),1
0d400: 07a8 4900 0003            MOVE   @34900h,A8,1
0d430: b30c 00e0                 MOVE   A8,*A12(E0h),1
0d450: 07a8 4940 0003            MOVE   @34940h,A8,1
0d480: b30c 0100                 MOVE   A8,*A12(100h),1
0d4a0: 07a8 dc60 0002            MOVE   @2DC60h,A8,1
0d4d0: b30c 0120                 MOVE   A8,*A12(120h),1
0d4f0: 07a8 4920 0003            MOVE   @34920h,A8,1
0d520: b30c 0140                 MOVE   A8,*A12(140h),1
0d540: 0570                      SETF   10h,1,0
0d550: 05a8 7a00 0002            MOVE   @27A00h,A8,0
0d580: b10c 0160                 MOVE   A8,*A12(160h),0
0d5a0: 05a8 7a10 0002            MOVE   @27A10h,A8,0
0d5d0: b10c 0170                 MOVE   A8,*A12(170h),0
0d5f0: 0550                      SETF   10h,0,0
0d600: 05a8 7a80 0002            MOVE   @27A80h,A8,0
0d630: b10c 01c0                 MOVE   A8,*A12(1C0h),0
0d650: 05a8 7a50 0002            MOVE   @27A50h,A8,0
0d680: b10c 01d0                 MOVE   A8,*A12(1D0h),0
0d6a0: 05a8 7a80 0002            MOVE   @27A80h,A8,0
0d6d0: 0b88 f7ff ffff            ANDI   800h,A8
0d700: 1828                      MOVK   1h,A8
0d710: cb01                      JRNE   D730h
0d720: 4508                      SUB    A8,A8
0d730: b10c 01b0                 MOVE   A8,*A12(1B0h),0
0d750: 0570                      SETF   10h,1,0
0d760: 05a8 7a00 0002            MOVE   @27A00h,A8,0
0d790: 0dc8 0004                 DSJNE  A8,D7F0h
0d7b0: 1868                      MOVK   3h,A8
0d7c0: 0588 7a00 0002            MOVE   A8,@27A00h,0
0d7f0: 05a8 7a10 0002            MOVE   @27A10h,A8,0
0d820: 0dc8 0004                 DSJNE  A8,D880h
0d840: 1868                      MOVK   3h,A8
0d850: 0588 7a10 0002            MOVE   A8,@27A10h,0
0d880: a3cf                      MOVE   A14,-*SP,1
0d890: 09e8 45e0 0003            MOVI   345E0h,A8
0d8c0: 930e                      MOVE   A8,*A14+,1
0d8d0: 1a08                      MOVK   10h,A8
0d8e0: 930e                      MOVE   A8,*A14+,1
0d8f0: 0d5f 0000 0000            CALLA  0h
0d920: 4d0a                      MOVE   A8,A10
0d930: cb0c                      JRNE   DA00h
0d940: a3cf                      MOVE   A14,-*SP,1
0d950: 454a                      SUB    A10,A10
0d960: 934e                      MOVE   A10,*A14+,1
0d970: 09e8 45e0 0003            MOVI   345E0h,A8
0d9a0: 930e                      MOVE   A8,*A14+,1
0d9b0: 1a0a                      MOVK   10h,A10
0d9c0: 934e                      MOVE   A10,*A14+,1
0d9d0: 0d5f 0000 0000            CALLA  0h
0da00: 182a                      MOVK   1h,A10
0da10: 0550                      SETF   10h,0,0
0da20: 058a 7a60 0002            MOVE   A10,@27A60h,0
0da50: b7ee 0080                 MOVE   *SP(80h),A14,1
0da70: 09af 3400                 MMFM   SP,A10,A12,A13
0da90: 0962                      RETS   2h

_send_message_to_stage:
0daa0: 098f 000c                 MMTM   SP,A12,A13
0dac0: 4dcd                      MOVE   A14,A13
0dad0: 100e                      ADDK   20h,A14
0dae0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0db00: 1988                      MOVK   Ch,A8
0db10: 0788 dda0 0002            MOVE   A8,@2DDA0h,1
0db40: 1a08                      MOVK   10h,A8
0db50: 0788 ddc0 0002            MOVE   A8,@2DDC0h,1
0db80: 1b88                      MOVK   1Ch,A8
0db90: 0788 dde0 0002            MOVE   A8,@2DDE0h,1
0dbc0: 05ec de00 0002            MOVB   A12,@2DE00h
0dbf0: a3cf                      MOVE   A14,-*SP,1
0dc00: 09e8 dda0 0002            MOVI   2DDA0h,A8
0dc30: 930e                      MOVE   A8,*A14+,1
0dc40: 1928                      MOVK   9h,A8
0dc50: 930e                      MOVE   A8,*A14+,1
0dc60: 0d5f 0000 0000            CALLA  0h
0dc90: 830d                      MOVE   A8,*A13,1
0dca0: 4d08                      MOVE   A8,A8
0dcb0: cb03                      JRNE   DCF0h
0dcc0: 05ec 52a0 0003            MOVB   A12,@352A0h
0dcf0: b7ee 0060                 MOVE   *SP(60h),A14,1
0dd10: 09af 3000                 MMFM   SP,A12,A13
0dd30: 0962                      RETS   2h

_cp_eht_ramp:
0dd40: 098f 002c                 MMTM   SP,A10,A12,A13
0dd60: 4dcd                      MOVE   A14,A13
0dd70: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0dd90: a3cf                      MOVE   A14,-*SP,1
0dda0: 0570                      SETF   10h,1,0
0ddb0: 05a8 79e0 0002            MOVE   @279E0h,A8,0
0dde0: 930e                      MOVE   A8,*A14+,1
0ddf0: 05a8 79f0 0002            MOVE   @279F0h,A8,0
0de20: 930e                      MOVE   A8,*A14+,1
0de30: d38e 0060                 MOVE   *A12(60h),*A14+,1
0de50: 0d5f 3210 0001            CALLA  13210h
0de80: 0570                      SETF   10h,1,0
0de90: 05a8 7a00 0002            MOVE   @27A00h,A8,0
0dec0: 1448                      SUBK   2h,A8
0ded0: cb16                      JRNE   E040h
0dee0: 1908                      MOVK   8h,A8
0def0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0df20: 1a08                      MOVK   10h,A8
0df30: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0df60: 1848                      MOVK   2h,A8
0df70: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0dfa0: a3cf                      MOVE   A14,-*SP,1
0dfb0: 09e8 dca0 0002            MOVI   2DCA0h,A8
0dfe0: 930e                      MOVE   A8,*A14+,1
0dff0: 1a68                      MOVK   13h,A8
0e000: 930e                      MOVE   A8,*A14+,1
0e010: 0d5f 0000 0000            CALLA  0h
0e040: 1a88                      MOVK   14h,A8
0e050: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0e080: 1a08                      MOVK   10h,A8
0e090: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0e0c0: 4508                      SUB    A8,A8
0e0d0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0e100: d38e 0040                 MOVE   *A12(40h),*A14+,1
0e120: 09e8 0000 41d8            MOVI   41D80000h,A8
0e150: 930e                      MOVE   A8,*A14+,1
0e160: 0d5f 4e00 0002            CALLA  24E00h
0e190: 0d5f 01e0 0002            CALLA  201E0h
0e1c0: 4508                      SUB    A8,A8
0e1d0: 09ea 0000 3fe0            MOVI   3FE00000h,A10
0e200: 934e                      MOVE   A10,*A14+,1
0e210: 930e                      MOVE   A8,*A14+,1
0e220: 0d5f 12c0 0002            CALLA  212C0h
0e250: 0d5f fd20 0001            CALLA  1FD20h
0e280: 0570                      SETF   10h,1,0
0e290: 0508                      SEXT   A8,0
0e2a0: 0588 dd40 0002            MOVE   A8,@2DD40h,0
0e2d0: b78a 0020                 MOVE   *A12(20h),A10,1
0e2f0: 078a dd00 0002            MOVE   A10,@2DD00h,1
0e320: b788 0060                 MOVE   *A12(60h),A8,1
0e340: 0788 dd20 0002            MOVE   A8,@2DD20h,1
0e370: d38e 0000                 MOVE   *A12(0h),*A14+,1
0e390: 09ec 0000 41d8            MOVI   41D80000h,A12
0e3c0: 938e                      MOVE   A12,*A14+,1
0e3d0: 0d5f 4e00 0002            CALLA  24E00h
0e400: 0d5f 01e0 0002            CALLA  201E0h
0e430: 4508                      SUB    A8,A8
0e440: 09ec 0000 3fe0            MOVI   3FE00000h,A12
0e470: 938e                      MOVE   A12,*A14+,1
0e480: 930e                      MOVE   A8,*A14+,1
0e490: 0d5f 12c0 0002            CALLA  212C0h
0e4c0: 0d5f fd20 0001            CALLA  1FD20h
0e4f0: 0508                      SEXT   A8,0
0e500: 0588 dd50 0002            MOVE   A8,@2DD50h,0
0e530: a3cf                      MOVE   A14,-*SP,1
0e540: 09ea dca0 0002            MOVI   2DCA0h,A10
0e570: 934e                      MOVE   A10,*A14+,1
0e580: 1a68                      MOVK   13h,A8
0e590: 930e                      MOVE   A8,*A14+,1
0e5a0: 0d5f 0000 0000            CALLA  0h
0e5d0: b7ee 0080                 MOVE   *SP(80h),A14,1
0e5f0: 09af 3400                 MMFM   SP,A10,A12,A13
0e610: 0962                      RETS   2h

_cp_fil_ramp:
0e620: 098f 002c                 MMTM   SP,A10,A12,A13
0e640: 4dcd                      MOVE   A14,A13
0e650: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0e670: 0570                      SETF   10h,1,0
0e680: 05a8 7a10 0002            MOVE   @27A10h,A8,0
0e6b0: 1448                      SUBK   2h,A8
0e6c0: cb16                      JRNE   E830h
0e6d0: 1908                      MOVK   8h,A8
0e6e0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0e710: 1a08                      MOVK   10h,A8
0e720: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0e750: 1868                      MOVK   3h,A8
0e760: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0e790: a3cf                      MOVE   A14,-*SP,1
0e7a0: 09e8 dca0 0002            MOVI   2DCA0h,A8
0e7d0: 930e                      MOVE   A8,*A14+,1
0e7e0: 1a68                      MOVK   13h,A8
0e7f0: 930e                      MOVE   A8,*A14+,1
0e800: 0d5f 0000 0000            CALLA  0h
0e830: 1a88                      MOVK   14h,A8
0e840: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0e870: 1a08                      MOVK   10h,A8
0e880: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0e8b0: 1828                      MOVK   1h,A8
0e8c0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0e8f0: d38e 0040                 MOVE   *A12(40h),*A14+,1
0e910: 09e8 0000 41d8            MOVI   41D80000h,A8
0e940: 930e                      MOVE   A8,*A14+,1
0e950: 0d5f 4e00 0002            CALLA  24E00h
0e980: 0d5f 01e0 0002            CALLA  201E0h
0e9b0: 4508                      SUB    A8,A8
0e9c0: 09ea 0000 3fe0            MOVI   3FE00000h,A10
0e9f0: 934e                      MOVE   A10,*A14+,1
0ea00: 930e                      MOVE   A8,*A14+,1
0ea10: 0d5f 12c0 0002            CALLA  212C0h
0ea40: 0d5f fd20 0001            CALLA  1FD20h
0ea70: 0570                      SETF   10h,1,0
0ea80: 0508                      SEXT   A8,0
0ea90: 0588 dd40 0002            MOVE   A8,@2DD40h,0
0eac0: b78a 0020                 MOVE   *A12(20h),A10,1
0eae0: 078a dd00 0002            MOVE   A10,@2DD00h,1
0eb10: b788 0060                 MOVE   *A12(60h),A8,1
0eb30: 0788 dd20 0002            MOVE   A8,@2DD20h,1
0eb60: d38e 0000                 MOVE   *A12(0h),*A14+,1
0eb80: 09ec 0000 41d8            MOVI   41D80000h,A12
0ebb0: 938e                      MOVE   A12,*A14+,1
0ebc0: 0d5f 4e00 0002            CALLA  24E00h
0ebf0: 0d5f 01e0 0002            CALLA  201E0h
0ec20: 4508                      SUB    A8,A8
0ec30: 09ec 0000 3fe0            MOVI   3FE00000h,A12
0ec60: 938e                      MOVE   A12,*A14+,1
0ec70: 930e                      MOVE   A8,*A14+,1
0ec80: 0d5f 12c0 0002            CALLA  212C0h
0ecb0: 0d5f fd20 0001            CALLA  1FD20h
0ece0: 0508                      SEXT   A8,0
0ecf0: 0588 dd50 0002            MOVE   A8,@2DD50h,0
0ed20: a3cf                      MOVE   A14,-*SP,1
0ed30: 09ea dca0 0002            MOVI   2DCA0h,A10
0ed60: 934e                      MOVE   A10,*A14+,1
0ed70: 1a68                      MOVK   13h,A8
0ed80: 930e                      MOVE   A8,*A14+,1
0ed90: 0d5f 0000 0000            CALLA  0h
0edc0: b7ee 0080                 MOVE   *SP(80h),A14,1
0ede0: 09af 3400                 MMFM   SP,A10,A12,A13
0ee00: 0962                      RETS   2h

_cp_ext_ramp:
0ee10: a3af                      MOVE   A13,-*SP,1
0ee20: 4dcd                      MOVE   A14,A13
0ee30: b7ee 0040                 MOVE   *SP(40h),A14,1
0ee50: 97ed                      MOVE   *SP+,A13,1
0ee60: 0962                      RETS   2h

_cp_supp_ramp:
0ee70: a3af                      MOVE   A13,-*SP,1
0ee80: 4dcd                      MOVE   A14,A13
0ee90: b7ee 0040                 MOVE   *SP(40h),A14,1
0eeb0: 97ed                      MOVE   *SP+,A13,1
0eec0: 0962                      RETS   2h

_cp_lens_ramp:
0eed0: a3af                      MOVE   A13,-*SP,1
0eee0: 4dcd                      MOVE   A14,A13
0eef0: b7ee 0040                 MOVE   *SP(40h),A14,1
0ef10: 97ed                      MOVE   *SP+,A13,1
0ef20: 0962                      RETS   2h

_cp_kill_ramps:
0ef30: 098f 000c                 MMTM   SP,A12,A13
0ef50: 4dcd                      MOVE   A14,A13
0ef60: 1908                      MOVK   8h,A8
0ef70: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0efa0: 1a08                      MOVK   10h,A8
0efb0: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0efe0: 1868                      MOVK   3h,A8
0eff0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0f020: a3cf                      MOVE   A14,-*SP,1
0f030: 09e8 dca0 0002            MOVI   2DCA0h,A8
0f060: 930e                      MOVE   A8,*A14+,1
0f070: 1a68                      MOVK   13h,A8
0f080: 930e                      MOVE   A8,*A14+,1
0f090: 0d5f 0000 0000            CALLA  0h
0f0c0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f0e0: 07ac 5280 0003            MOVE   @35280h,A12,1
0f110: 8388                      MOVE   A12,*A8,1
0f120: 1848                      MOVK   2h,A8
0f130: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0f160: a3cf                      MOVE   A14,-*SP,1
0f170: 09e8 dca0 0002            MOVI   2DCA0h,A8
0f1a0: 930e                      MOVE   A8,*A14+,1
0f1b0: 1a68                      MOVK   13h,A8
0f1c0: 930e                      MOVE   A8,*A14+,1
0f1d0: 0d5f 0000 0000            CALLA  0h
0f200: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0f220: 07a8 5240 0003            MOVE   @35240h,A8,1
0f250: 830c                      MOVE   A8,*A12,1
0f260: b7ee 0060                 MOVE   *SP(60h),A14,1
0f280: 09af 3000                 MMFM   SP,A12,A13
0f2a0: 0962                      RETS   2h

_cp_kill_FE_ramps:
0f2b0: a3af                      MOVE   A13,-*SP,1
0f2c0: 4dcd                      MOVE   A14,A13
0f2d0: b7ee 0040                 MOVE   *SP(40h),A14,1
0f2f0: 97ed                      MOVE   *SP+,A13,1
0f300: 0962                      RETS   2h

_cp_eht_descr:
0f310: 098f 000c                 MMTM   SP,A12,A13
0f330: 4dcd                      MOVE   A14,A13
0f340: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0f360: 07a8 7980 0002            MOVE   @27980h,A8,1
0f390: 830c                      MOVE   A8,*A12,1
0f3a0: 07a8 79a0 0002            MOVE   @279A0h,A8,1
0f3d0: b30c 0020                 MOVE   A8,*A12(20h),1
0f3f0: 0570                      SETF   10h,1,0
0f400: 05a8 79c0 0002            MOVE   @279C0h,A8,0
0f430: b10c 0040                 MOVE   A8,*A12(40h),0
0f450: 0548                      SETF   8h,0,0
0f460: 05a8 79d0 0002            MOVE   @279D0h,A8,0
0f490: ad0c 0050                 MOVB   A8,*A12(50h)
0f4b0: b7ee 0060                 MOVE   *SP(60h),A14,1
0f4d0: 09af 3000                 MMFM   SP,A12,A13
0f4f0: 0962                      RETS   2h

_cp_anode_type:
0f500: 098f 000c                 MMTM   SP,A12,A13
0f520: 4dcd                      MOVE   A14,A13
0f530: 0570                      SETF   10h,1,0
0f540: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
0f560: a3cf                      MOVE   A14,-*SP,1
0f570: 05a8 79e0 0002            MOVE   @279E0h,A8,0
0f5a0: 930e                      MOVE   A8,*A14+,1
0f5b0: 938e                      MOVE   A12,*A14+,1
0f5c0: d60e 5240 0003            MOVE   @35240h,*A14+,1
0f5f0: 0d5f 3210 0001            CALLA  13210h
0f620: 1948                      MOVK   Ah,A8
0f630: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0f660: 1a08                      MOVK   10h,A8
0f670: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0f6a0: 1828                      MOVK   1h,A8
0f6b0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0f6e0: 0570                      SETF   10h,1,0
0f6f0: 058c dd00 0002            MOVE   A12,@2DD00h,0
0f720: a3cf                      MOVE   A14,-*SP,1
0f730: 09e8 dca0 0002            MOVI   2DCA0h,A8
0f760: 930e                      MOVE   A8,*A14+,1
0f770: 1a28                      MOVK   11h,A8
0f780: 930e                      MOVE   A8,*A14+,1
0f790: 0d5f 0000 0000            CALLA  0h
0f7c0: b7ee 0060                 MOVE   *SP(60h),A14,1
0f7e0: 09af 3000                 MMFM   SP,A12,A13
0f800: 0962                      RETS   2h

_cp_fil_type:
0f810: 098f 000c                 MMTM   SP,A12,A13
0f830: 4dcd                      MOVE   A14,A13
0f840: 0570                      SETF   10h,1,0
0f850: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
0f870: a3cf                      MOVE   A14,-*SP,1
0f880: 938e                      MOVE   A12,*A14+,1
0f890: 05a8 79f0 0002            MOVE   @279F0h,A8,0
0f8c0: 930e                      MOVE   A8,*A14+,1
0f8d0: d60e 5240 0003            MOVE   @35240h,*A14+,1
0f900: 0d5f 3210 0001            CALLA  13210h
0f930: 0570                      SETF   10h,1,0
0f940: 05a8 52b0 0003            MOVE   @352B0h,A8,0
0f970: 4988                      CMP    A12,A8
0f980: ca1d                      JREQ   FB60h
0f990: 1928                      MOVK   9h,A8
0f9a0: 0788 4a60 0003            MOVE   A8,@34A60h,1
0f9d0: 1a08                      MOVK   10h,A8
0f9e0: 0788 4a80 0003            MOVE   A8,@34A80h,1
0fa10: 1928                      MOVK   9h,A8
0fa20: 0788 4aa0 0003            MOVE   A8,@34AA0h,1
0fa50: 05ec 4ac0 0003            MOVB   A12,@34AC0h
0fa80: a3cf                      MOVE   A14,-*SP,1
0fa90: 09e8 4a60 0003            MOVI   34A60h,A8
0fac0: 930e                      MOVE   A8,*A14+,1
0fad0: 1888                      MOVK   4h,A8
0fae0: 930e                      MOVE   A8,*A14+,1
0faf0: 0d5f 0000 0000            CALLA  0h
0fb20: 0570                      SETF   10h,1,0
0fb30: 058c 52b0 0003            MOVE   A12,@352B0h,0
0fb60: 1948                      MOVK   Ah,A8
0fb70: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0fba0: 1a08                      MOVK   10h,A8
0fbb0: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0fbe0: 4508                      SUB    A8,A8
0fbf0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0fc20: 058c dd00 0002            MOVE   A12,@2DD00h,0
0fc50: a3cf                      MOVE   A14,-*SP,1
0fc60: 09e8 dca0 0002            MOVI   2DCA0h,A8
0fc90: 930e                      MOVE   A8,*A14+,1
0fca0: 1a28                      MOVK   11h,A8
0fcb0: 930e                      MOVE   A8,*A14+,1
0fcc0: 0d5f 0000 0000            CALLA  0h
0fcf0: b7ee 0060                 MOVE   *SP(60h),A14,1
0fd10: 09af 3000                 MMFM   SP,A12,A13
0fd30: 0962                      RETS   2h

_cp_beam_i:
0fd40: a3af                      MOVE   A13,-*SP,1
0fd50: 4dcd                      MOVE   A14,A13
0fd60: 1988                      MOVK   Ch,A8
0fd70: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
0fda0: 1a08                      MOVK   10h,A8
0fdb0: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
0fde0: 1848                      MOVK   2h,A8
0fdf0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
0fe20: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0fe40: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0fe60: 0d5f f890 0001            CALLA  1F890h
0fe90: a7c8                      MOVE   -*A14,A8,1
0fea0: 0788 dd00 0002            MOVE   A8,@2DD00h,1
0fed0: a3cf                      MOVE   A14,-*SP,1
0fee0: 09e8 dca0 0002            MOVI   2DCA0h,A8
0ff10: 930e                      MOVE   A8,*A14+,1
0ff20: 1a28                      MOVK   11h,A8
0ff30: 930e                      MOVE   A8,*A14+,1
0ff40: 0d5f 0000 0000            CALLA  0h
0ff70: b7ee 0040                 MOVE   *SP(40h),A14,1
0ff90: 97ed                      MOVE   *SP+,A13,1
0ffa0: 0962                      RETS   2h

_cp_set_fil_i:
0ffb0: a3af                      MOVE   A13,-*SP,1
0ffc0: 4dcd                      MOVE   A14,A13
0ffd0: 1988                      MOVK   Ch,A8
0ffe0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
10010: 1a08                      MOVK   10h,A8
10020: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
10050: 1868                      MOVK   3h,A8
10060: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
10090: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
100b0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
100d0: 0d5f f890 0001            CALLA  1F890h
10100: a7c8                      MOVE   -*A14,A8,1
10110: 0788 dd00 0002            MOVE   A8,@2DD00h,1
10140: a3cf                      MOVE   A14,-*SP,1
10150: 09e8 dca0 0002            MOVI   2DCA0h,A8
10180: 930e                      MOVE   A8,*A14+,1
10190: 1a28                      MOVK   11h,A8
101a0: 930e                      MOVE   A8,*A14+,1
101b0: 0d5f 0000 0000            CALLA  0h
101e0: b7ee 0040                 MOVE   *SP(40h),A14,1
10200: 97ed                      MOVE   *SP+,A13,1
10210: 0962                      RETS   2h

_cp_set_accel_v:
10220: 098f 000c                 MMTM   SP,A12,A13
10240: 4dcd                      MOVE   A14,A13
10250: 0570                      SETF   10h,1,0
10260: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
10280: a3cf                      MOVE   A14,-*SP,1
10290: 05a8 79e0 0002            MOVE   @279E0h,A8,0
102c0: 930e                      MOVE   A8,*A14+,1
102d0: 05a8 79f0 0002            MOVE   @279F0h,A8,0
10300: 930e                      MOVE   A8,*A14+,1
10310: 4d88                      MOVE   A12,A8
10320: 0d5f 0c50 0002            CALLA  20C50h
10350: 0d5f 3210 0001            CALLA  13210h
10380: 1948                      MOVK   Ah,A8
10390: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
103c0: 1a08                      MOVK   10h,A8
103d0: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
10400: 1888                      MOVK   4h,A8
10410: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
10440: 0570                      SETF   10h,1,0
10450: 058c dd00 0002            MOVE   A12,@2DD00h,0
10480: a3cf                      MOVE   A14,-*SP,1
10490: 09e8 dca0 0002            MOVI   2DCA0h,A8
104c0: 930e                      MOVE   A8,*A14+,1
104d0: 1a28                      MOVK   11h,A8
104e0: 930e                      MOVE   A8,*A14+,1
104f0: 0d5f 0000 0000            CALLA  0h
10520: b7ee 0060                 MOVE   *SP(60h),A14,1
10540: 09af 3000                 MMFM   SP,A12,A13
10560: 0962                      RETS   2h

_cp_set_ext_v:
10570: a3af                      MOVE   A13,-*SP,1
10580: 4dcd                      MOVE   A14,A13
10590: b7ee 0040                 MOVE   *SP(40h),A14,1
105b0: 97ed                      MOVE   *SP+,A13,1
105c0: 0962                      RETS   2h

_cp_set_supp_v:
105d0: a3af                      MOVE   A13,-*SP,1
105e0: 4dcd                      MOVE   A14,A13
105f0: b7ee 0040                 MOVE   *SP(40h),A14,1
10610: 97ed                      MOVE   *SP+,A13,1
10620: 0962                      RETS   2h

_cp_set_lens_v:
10630: a3af                      MOVE   A13,-*SP,1
10640: 4dcd                      MOVE   A14,A13
10650: b7ee 0040                 MOVE   *SP(40h),A14,1
10670: 97ed                      MOVE   *SP+,A13,1
10680: 0962                      RETS   2h

_cp_collector_bias:
10690: a3af                      MOVE   A13,-*SP,1
106a0: 4dcd                      MOVE   A14,A13
106b0: 1948                      MOVK   Ah,A8
106c0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
106f0: 1a08                      MOVK   10h,A8
10700: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
10730: 18c8                      MOVK   6h,A8
10740: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
10770: 0570                      SETF   10h,1,0
10780: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
107a0: 0588 dd00 0002            MOVE   A8,@2DD00h,0
107d0: a3cf                      MOVE   A14,-*SP,1
107e0: 09e8 dca0 0002            MOVI   2DCA0h,A8
10810: 930e                      MOVE   A8,*A14+,1
10820: 1a28                      MOVK   11h,A8
10830: 930e                      MOVE   A8,*A14+,1
10840: 0d5f 0000 0000            CALLA  0h
10870: b7ee 0040                 MOVE   *SP(40h),A14,1
10890: 97ed                      MOVE   *SP+,A13,1
108a0: 0962                      RETS   2h

_cp_pm_v:
108b0: a3af                      MOVE   A13,-*SP,1
108c0: 4dcd                      MOVE   A14,A13
108d0: 19c8                      MOVK   Eh,A8
108e0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
10910: 1a08                      MOVK   10h,A8
10920: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
10950: 1988                      MOVK   Ch,A8
10960: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
10990: 0570                      SETF   10h,1,0
109a0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
109c0: 0588 dd20 0002            MOVE   A8,@2DD20h,0
109f0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
10a10: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
10a30: 0d5f f890 0001            CALLA  1F890h
10a60: a7c8                      MOVE   -*A14,A8,1
10a70: 0788 dd00 0002            MOVE   A8,@2DD00h,1
10aa0: a3cf                      MOVE   A14,-*SP,1
10ab0: 09e8 dca0 0002            MOVI   2DCA0h,A8
10ae0: 930e                      MOVE   A8,*A14+,1
10af0: 1a28                      MOVK   11h,A8
10b00: 930e                      MOVE   A8,*A14+,1
10b10: 0d5f 0000 0000            CALLA  0h
10b40: b7ee 0040                 MOVE   *SP(40h),A14,1
10b60: 97ed                      MOVE   *SP+,A13,1
10b70: 0962                      RETS   2h

_cp_supply_toggle:
10b80: a3af                      MOVE   A13,-*SP,1
10b90: 4dcd                      MOVE   A14,A13
10ba0: 1948                      MOVK   Ah,A8
10bb0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
10be0: 1a08                      MOVK   10h,A8
10bf0: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
10c20: 1948                      MOVK   Ah,A8
10c30: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
10c60: 0570                      SETF   10h,1,0
10c70: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
10c90: 0588 dd00 0002            MOVE   A8,@2DD00h,0
10cc0: a3cf                      MOVE   A14,-*SP,1
10cd0: 09e8 dca0 0002            MOVI   2DCA0h,A8
10d00: 930e                      MOVE   A8,*A14+,1
10d10: 1a28                      MOVK   11h,A8
10d20: 930e                      MOVE   A8,*A14+,1
10d30: 0d5f 0000 0000            CALLA  0h
10d60: b7ee 0040                 MOVE   *SP(40h),A14,1
10d80: 97ed                      MOVE   *SP+,A13,1
10d90: 0962                      RETS   2h

_cp_scint_toggle:
10da0: 098f 000c                 MMTM   SP,A12,A13
10dc0: 4dcd                      MOVE   A14,A13
10dd0: 0570                      SETF   10h,1,0
10de0: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
10e00: 1948                      MOVK   Ah,A8
10e10: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
10e40: 1a08                      MOVK   10h,A8
10e50: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
10e80: 1968                      MOVK   Bh,A8
10e90: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
10ec0: 344c                      CMPK   2h,A12
10ed0: cb05                      JRNE   10F30h
10ee0: 182c                      MOVK   1h,A12
10ef0: 078c 8300 0002            MOVE   A12,@28300h,1
10f20: 458c                      SUB    A12,A12
10f30: 346c                      CMPK   3h,A12
10f40: cb04                      JRNE   10F90h
10f50: 458c                      SUB    A12,A12
10f60: 078c 8300 0002            MOVE   A12,@28300h,1
10f90: 342c                      CMPK   1h,A12
10fa0: 182c                      MOVK   1h,A12
10fb0: ca01                      JREQ   10FD0h
10fc0: 458c                      SUB    A12,A12
10fd0: 058c dd00 0002            MOVE   A12,@2DD00h,0
11000: a3cf                      MOVE   A14,-*SP,1
11010: 09ec dca0 0002            MOVI   2DCA0h,A12
11040: 938e                      MOVE   A12,*A14+,1
11050: 1a28                      MOVK   11h,A8
11060: 930e                      MOVE   A8,*A14+,1
11070: 0d5f 0000 0000            CALLA  0h
110a0: b7ee 0060                 MOVE   *SP(60h),A14,1
110c0: 09af 3000                 MMFM   SP,A12,A13
110e0: 0962                      RETS   2h

_cp_eht_offset:
110f0: a3af                      MOVE   A13,-*SP,1
11100: 4dcd                      MOVE   A14,A13
11110: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
11130: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
11150: 0d5f f890 0001            CALLA  1F890h
11180: a7c8                      MOVE   -*A14,A8,1
11190: 0788 7aa0 0002            MOVE   A8,@27AA0h,1
111c0: b7ee 0040                 MOVE   *SP(40h),A14,1
111e0: 97ed                      MOVE   *SP+,A13,1
111f0: 0962                      RETS   2h

_cp_fil_calib:
11200: a3af                      MOVE   A13,-*SP,1
11210: 4dcd                      MOVE   A14,A13
11220: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
11240: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
11260: 0d5f f890 0001            CALLA  1F890h
11290: a7c8                      MOVE   -*A14,A8,1
112a0: 0788 7ac0 0002            MOVE   A8,@27AC0h,1
112d0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
112f0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
11310: 0d5f f890 0001            CALLA  1F890h
11340: a7c8                      MOVE   -*A14,A8,1
11350: 0788 7ae0 0002            MOVE   A8,@27AE0h,1
11380: b7ee 0040                 MOVE   *SP(40h),A14,1
113a0: 97ed                      MOVE   *SP+,A13,1
113b0: 0962                      RETS   2h

_cp_FE_fil_calib:
113c0: a3af                      MOVE   A13,-*SP,1
113d0: 4dcd                      MOVE   A14,A13
113e0: b7ee 0040                 MOVE   *SP(40h),A14,1
11400: 97ed                      MOVE   *SP+,A13,1
11410: 0962                      RETS   2h

_cp_suspend_eht:
11420: a38f                      MOVE   A12,-*SP,1
11430: 0d5f ee30 0001            CALLA  1EE30h
11460: a3cf                      MOVE   A14,-*SP,1
11470: 4508                      SUB    A8,A8
11480: 930e                      MOVE   A8,*A14+,1
11490: 930e                      MOVE   A8,*A14+,1
114a0: 1848                      MOVK   2h,A8
114b0: 930e                      MOVE   A8,*A14+,1
114c0: 930e                      MOVE   A8,*A14+,1
114d0: 0d5f 0000 0000            CALLA  0h
11500: 182c                      MOVK   1h,A12
11510: a3cf                      MOVE   A14,-*SP,1
11520: 18e8                      MOVK   7h,A8
11530: 930e                      MOVE   A8,*A14+,1
11540: 0d5f 0000 0000            CALLA  0h
11570: 4f0e                      MOVE   A8,B14
11580: cb09                      JRNE   11620h
11590: a3cf                      MOVE   A14,-*SP,1
115a0: 18e8                      MOVK   7h,A8
115b0: 930e                      MOVE   A8,*A14+,1
115c0: 0d5f 0000 0000            CALLA  0h
115f0: 4f0e                      MOVE   A8,B14
11600: cb01                      JRNE   11620h
11610: 458c                      SUB    A12,A12
11620: 4d88                      MOVE   A12,A8
11630: cbed                      JRNE   11510h
11640: 182c                      MOVK   1h,A12
11650: a3cf                      MOVE   A14,-*SP,1
11660: 19a8                      MOVK   Dh,A8
11670: 930e                      MOVE   A8,*A14+,1
11680: 0d5f 0000 0000            CALLA  0h
116b0: 4f0e                      MOVE   A8,B14
116c0: cb09                      JRNE   11760h
116d0: a3cf                      MOVE   A14,-*SP,1
116e0: 19a8                      MOVK   Dh,A8
116f0: 930e                      MOVE   A8,*A14+,1
11700: 0d5f 0000 0000            CALLA  0h
11730: 4f0e                      MOVE   A8,B14
11740: cb01                      JRNE   11760h
11750: 458c                      SUB    A12,A12
11760: 4d88                      MOVE   A12,A8
11770: cbed                      JRNE   11650h
11780: 182c                      MOVK   1h,A12
11790: a3cf                      MOVE   A14,-*SP,1
117a0: 1988                      MOVK   Ch,A8
117b0: 930e                      MOVE   A8,*A14+,1
117c0: 0d5f 0000 0000            CALLA  0h
117f0: 4f0e                      MOVE   A8,B14
11800: cb09                      JRNE   118A0h
11810: a3cf                      MOVE   A14,-*SP,1
11820: 1988                      MOVK   Ch,A8
11830: 930e                      MOVE   A8,*A14+,1
11840: 0d5f 0000 0000            CALLA  0h
11870: 4f0e                      MOVE   A8,B14
11880: cb01                      JRNE   118A0h
11890: 458c                      SUB    A12,A12
118a0: 4d88                      MOVE   A12,A8
118b0: cbed                      JRNE   11790h
118c0: 182c                      MOVK   1h,A12
118d0: a3cf                      MOVE   A14,-*SP,1
118e0: 18c8                      MOVK   6h,A8
118f0: 930e                      MOVE   A8,*A14+,1
11900: 0d5f 0000 0000            CALLA  0h
11930: 4f0e                      MOVE   A8,B14
11940: cb09                      JRNE   119E0h
11950: a3cf                      MOVE   A14,-*SP,1
11960: 18c8                      MOVK   6h,A8
11970: 930e                      MOVE   A8,*A14+,1
11980: 0d5f 0000 0000            CALLA  0h
119b0: 4f0e                      MOVE   A8,B14
119c0: cb01                      JRNE   119E0h
119d0: 458c                      SUB    A12,A12
119e0: 4d88                      MOVE   A12,A8
119f0: cbed                      JRNE   118D0h
11a00: 458c                      SUB    A12,A12
11a10: 078c 1000 0000            MOVE   A12,@1000h,1
11a40: 97ec                      MOVE   *SP+,A12,1
11a50: 0960                      RETS   

_ProcEHTCmds:
11a60: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
11a80: 4dcd                      MOVE   A14,A13
11a90: 0b0e 02a0                 ADDI   2A0h,A14
11ab0: 4508                      SUB    A8,A8
11ac0: 8d0d                      MOVB   A8,*A13
11ad0: ad0d 0020                 MOVB   A8,*A13(20h)
11af0: a3cf                      MOVE   A14,-*SP,1
11b00: 09c8 06e0                 MOVI   6E0h,A8
11b20: 930e                      MOVE   A8,*A14+,1
11b30: 09e8 0960 0003            MOVI   30960h,A8
11b60: 930e                      MOVE   A8,*A14+,1
11b70: 09e8 5445 5144            MOVI   51445445h,A8
11ba0: 930e                      MOVE   A8,*A14+,1
11bb0: 1828                      MOVK   1h,A8
11bc0: 930e                      MOVE   A8,*A14+,1
11bd0: 0d5f 0000 0000            CALLA  0h
11c00: c000 0106                 JR     12C80h
11c20: a3cf                      MOVE   A14,-*SP,1
11c30: 4da8                      MOVE   A13,A8
11c40: 1008                      ADDK   20h,A8
11c50: 930e                      MOVE   A8,*A14+,1
11c60: 0d5f ea00 0001            CALLA  1EA00h
11c90: 4d0c                      MOVE   A8,A12
11ca0: 48cc                      CMP    A6,A12
11cb0: ca05                      JREQ   11D10h
11cc0: 3526                      CMPK   9h,A6
11cd0: cb50                      JRNE   121E0h
11ce0: 44cc                      SUB    A6,A12
11cf0: 102c                      INC    A12
11d00: cb4d                      JRNE   121E0h
11d10: afac 0028                 MOVB   *A13(28h),A12
11d30: 0b4c ffcf                 CMPI   30h,A12
11d50: cb05                      JRNE   11DB0h
11d60: afa8 0030                 MOVB   *A13(30h),A8
11d80: 0b48 ffcf                 CMPI   30h,A8
11da0: ca73                      JREQ   124E0h
11db0: 8d8d                      MOVB   A12,*A13
11dc0: bdad 0030 0008            MOVB   *A13(30h),*A13(8h)
11df0: 4508                      SUB    A8,A8
11e00: ad0d 0010                 MOVB   A8,*A13(10h)
11e20: a3cf                      MOVE   A14,-*SP,1
11e30: 93ae                      MOVE   A13,*A14+,1
11e40: 0d5f de30 0001            CALLA  1DE30h
11e70: 4d0c                      MOVE   A8,A12
11e80: 0550                      SETF   10h,0,0
11e90: 052c                      ZEXT   A12,0
11ea0: 1fec                      BTST   0h,A12
11eb0: ca02                      JREQ   11EE0h
11ec0: 182c                      MOVK   1h,A12
11ed0: c00d                      JR     11FB0h
11ee0: 1fcc                      BTST   1h,A12
11ef0: ca02                      JREQ   11F20h
11f00: 184c                      MOVK   2h,A12
11f10: c009                      JR     11FB0h
11f20: 1fac                      BTST   2h,A12
11f30: ca02                      JREQ   11F60h
11f40: 188c                      MOVK   4h,A12
11f50: c005                      JR     11FB0h
11f60: 340c                      CMPK   20h,A12
11f70: cb02                      JRNE   11FA0h
11f80: 458c                      SUB    A12,A12
11f90: c001                      JR     11FB0h
11fa0: 180c                      MOVK   20h,A12
11fb0: afa8 0028                 MOVB   *A13(28h),A8
11fd0: 0b48 ffcf                 CMPI   30h,A8
11ff0: c40b                      JRLT   120B0h
12000: 0b48 ffc6                 CMPI   39h,A8
12020: c708                      JRGT   120B0h
12030: afa8 0030                 MOVB   *A13(30h),A8
12050: 0b48 ffcf                 CMPI   30h,A8
12070: c403                      JRLT   120B0h
12080: 0b48 ffc6                 CMPI   39h,A8
120a0: c608                      JRLE   12130h
120b0: a3cf                      MOVE   A14,-*SP,1
120c0: 09cc 0100                 MOVI   100h,A12
120e0: 938e                      MOVE   A12,*A14+,1
120f0: 93ae                      MOVE   A13,*A14+,1
12100: 0d5f 0000 0000            CALLA  0h
12130: 4d88                      MOVE   A12,A8
12140: ca39                      JREQ   124E0h
12150: a3cf                      MOVE   A14,-*SP,1
12160: 938e                      MOVE   A12,*A14+,1
12170: 09ec 6f70 0002            MOVI   26F70h,A12
121a0: 938e                      MOVE   A12,*A14+,1
121b0: 0d5f 0000 0000            CALLA  0h
121e0: 142a                      DEC    A10
121f0: ca00 00c0                 JREQ   12E10h
12210: 09ec 06e8 0003            MOVI   306E8h,A12
12240: 078c 5260 0003            MOVE   A12,@35260h,1
12270: 4da8                      MOVE   A13,A8
12280: 1008                      ADDK   20h,A8
12290: 0788 dc80 0002            MOVE   A8,@2DC80h,1
122c0: 4508                      SUB    A8,A8
122d0: 05e8 d5c0 0002            MOVB   A8,@2D5C0h
12300: 05e8 d5a0 0002            MOVB   A8,@2D5A0h
12330: 0d5f f6b0 0001            CALLA  1F6B0h
12360: a3cf                      MOVE   A14,-*SP,1
12370: 09c8 010e                 MOVI   10Eh,A8
12390: 930e                      MOVE   A8,*A14+,1
123a0: 09c8 0040                 MOVI   40h,A8
123c0: 930e                      MOVE   A8,*A14+,1
123d0: 0d5f 0000 0000            CALLA  0h
12400: 4d04                      MOVE   A8,A4
12410: 07e8 d5c0 0002            MOVE   @2D5C0h,A8
12440: cb09                      JRNE   124E0h
12450: 3704                      CMPK   18h,A4
12460: ca00 ff7a                 JREQ   11C20h
12480: 07ec d5a0 0002            MOVE   @2D5A0h,A12
124b0: 142c                      DEC    A12
124c0: ca00 ff74                 JREQ   11C20h
124e0: 4d48                      MOVE   A10,A8
124f0: ca00 0090                 JREQ   12E10h
12510: 1704                      SUBK   18h,A4
12520: ca05                      JREQ   12580h
12530: 07ec d5a0 0002            MOVE   @2D5A0h,A12
12560: 0d8c 0089                 DSJ    A12,12E10h
12580: a3cf                      MOVE   A14,-*SP,1
12590: 4dac                      MOVE   A13,A12
125a0: 100c                      ADDK   20h,A12
125b0: 938e                      MOVE   A12,*A14+,1
125c0: 09e4 06e0 0003            MOVI   306E0h,A4
125f0: 928e                      MOVE   A4,*A14+,1
12600: 0d5f 6320 0002            CALLA  26320h
12630: a3cf                      MOVE   A14,-*SP,1
12640: 938e                      MOVE   A12,*A14+,1
12650: 0d5f 6440 0002            CALLA  26440h
12680: 10a8                      ADDK   5h,A8
12690: 0788 06a0 0003            MOVE   A8,@306A0h,1
126c0: a3cf                      MOVE   A14,-*SP,1
126d0: 09e8 06a0 0003            MOVI   306A0h,A8
12700: 930e                      MOVE   A8,*A14+,1
12710: d60e 06c0 0003            MOVE   @306C0h,*A14+,1
12740: 0d5f 0000 0000            CALLA  0h
12770: af88 0008                 MOVB   *A12(8h),A8
12790: 0b48 ffcf                 CMPI   30h,A8
127b0: cb10                      JRNE   128C0h
127c0: af88 0010                 MOVB   *A12(10h),A8
127e0: 0b48 ffcf                 CMPI   30h,A8
12800: cb0b                      JRNE   128C0h
12810: 0550                      SETF   10h,0,0
12820: 05a8 7a60 0002            MOVE   @27A60h,A8,0
12850: 0d88 0041                 DSJ    A8,12C80h
12870: 4508                      SUB    A8,A8
12880: 0588 7a70 0002            MOVE   A8,@27A70h,0
128b0: c03c                      JR     12C80h
128c0: bd8d 0008 0000            MOVB   *A12(8h),*A13(0h)
128f0: bd8d 0010 0008            MOVB   *A12(10h),*A13(8h)
12920: 4508                      SUB    A8,A8
12930: ad0d 0010                 MOVB   A8,*A13(10h)
12950: a3cf                      MOVE   A14,-*SP,1
12960: 93ae                      MOVE   A13,*A14+,1
12970: 0d5f de30 0001            CALLA  1DE30h
129a0: 4d0c                      MOVE   A8,A12
129b0: 0550                      SETF   10h,0,0
129c0: 052c                      ZEXT   A12,0
129d0: 1fec                      BTST   0h,A12
129e0: cb25                      JRNE   12C40h
129f0: 1fcc                      BTST   1h,A12
12a00: cb1e                      JRNE   12BF0h
12a10: 1fac                      BTST   2h,A12
12a20: cb17                      JRNE   12BA0h
12a30: 140c                      SUBK   20h,A12
12a40: cb02                      JRNE   12A70h
12a50: 458c                      SUB    A12,A12
12a60: c001                      JR     12A80h
12a70: 180c                      MOVK   20h,A12
12a80: 058c 7a70 0002            MOVE   A12,@27A70h,0
12ab0: 052c                      ZEXT   A12,0
12ac0: cb1b                      JRNE   12C80h
12ad0: 07a8 06c0 0003            MOVE   @306C0h,A8,1
12b00: 16a8                      SUBK   15h,A8
12b10: ca16                      JREQ   12C80h
12b20: a3cf                      MOVE   A14,-*SP,1
12b30: 09c8 0080                 MOVI   80h,A8
12b50: 930e                      MOVE   A8,*A14+,1
12b60: 0d5f 0000 0000            CALLA  0h
12b90: c00e                      JR     12C80h
12ba0: 188c                      MOVK   4h,A12
12bb0: 058c 7a70 0002            MOVE   A12,@27A70h,0
12be0: c009                      JR     12C80h
12bf0: 184c                      MOVK   2h,A12
12c00: 058c 7a70 0002            MOVE   A12,@27A70h,0
12c30: c004                      JR     12C80h
12c40: 182c                      MOVK   1h,A12
12c50: 058c 7a70 0002            MOVE   A12,@27A70h,0
12c80: a3cf                      MOVE   A14,-*SP,1
12c90: 182c                      MOVK   1h,A12
12ca0: 938e                      MOVE   A12,*A14+,1
12cb0: 0d5f 0000 0000            CALLA  0h
12ce0: a3cf                      MOVE   A14,-*SP,1
12cf0: 4508                      SUB    A8,A8
12d00: 930e                      MOVE   A8,*A14+,1
12d10: 09e8 06a0 0003            MOVI   306A0h,A8
12d40: 930e                      MOVE   A8,*A14+,1
12d50: 938e                      MOVE   A12,*A14+,1
12d60: 0d5f 0000 0000            CALLA  0h
12d90: 4d04                      MOVE   A8,A4
12da0: cbed                      JRNE   12C80h
12db0: 07e6 06e0 0003            MOVE   @306E0h,A6
12de0: 194a                      MOVK   Ah,A10
12df0: c000 ff40                 JR     12210h
12e10: 09cc 003d                 MOVI   3Dh,A12
12e30: 05ec 06e0 0003            MOVB   A12,@306E0h
12e60: 15ac                      SUBK   Dh,A12
12e70: 05ec 06e8 0003            MOVB   A12,@306E8h
12ea0: 05ec 06f0 0003            MOVB   A12,@306F0h
12ed0: 108c                      ADDK   4h,A12
12ee0: 05ec 06f8 0003            MOVB   A12,@306F8h
12f10: 148c                      SUBK   4h,A12
12f20: 05ec 0700 0003            MOVB   A12,@30700h
12f50: 19aa                      MOVK   Dh,A10
12f60: 05ea 0708 0003            MOVB   A10,@30708h
12f90: 1946                      MOVK   Ah,A6
12fa0: 05e6 0710 0003            MOVB   A6,@30710h
12fd0: 4484                      SUB    A4,A4
12fe0: 05e4 0718 0003            MOVB   A4,@30718h
13010: 1988                      MOVK   Ch,A8
13020: 0788 06a0 0003            MOVE   A8,@306A0h,1
13050: a3cf                      MOVE   A14,-*SP,1
13060: 09e8 06a0 0003            MOVI   306A0h,A8
13090: 930e                      MOVE   A8,*A14+,1
130a0: d60e 06c0 0003            MOVE   @306C0h,*A14+,1
130d0: 0d5f 0000 0000            CALLA  0h
13100: 09c8 0080                 MOVI   80h,A8
13120: 0550                      SETF   10h,0,0
13130: 0588 7a70 0002            MOVE   A8,@27A70h,0
13160: 07a4 06c0 0003            MOVE   @306C0h,A4,1
13190: 16a4                      SUBK   15h,A4
131a0: caad                      JREQ   12C80h
131b0: a3cf                      MOVE   A14,-*SP,1
131c0: 930e                      MOVE   A8,*A14+,1
131d0: 0d5f 0000 0000            CALLA  0h
13200: c0a7                      JR     12C80h

_MonUpdateEOProcess:
13210: 098f 022c                 MMTM   SP,A6,A10,A12,A13
13230: 4dcd                      MOVE   A14,A13
13240: 0570                      SETF   10h,1,0
13250: b5a6 ffa0                 MOVE   *A13(FFA0h),A6,0
13270: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
13290: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
132b0: d60e 52c0 0003            MOVE   @352C0h,*A14+,1
132e0: 938e                      MOVE   A12,*A14+,1
132f0: 0d5f 60d0 0002            CALLA  260D0h
13320: cb0a                      JRNE   133D0h
13330: 05a8 52e0 0003            MOVE   @352E0h,A8,0
13360: 4948                      CMP    A10,A8
13370: cb05                      JRNE   133D0h
13380: 05a8 52f0 0003            MOVE   @352F0h,A8,0
133b0: 48c8                      CMP    A6,A8
133c0: ca36                      JREQ   13730h
133d0: 1a08                      MOVK   10h,A8
133e0: 0788 8420 0002            MOVE   A8,@28420h,1
13410: 0788 8440 0002            MOVE   A8,@28440h,1
13440: 09c8 0065                 MOVI   65h,A8
13460: 0788 8460 0002            MOVE   A8,@28460h,1
13490: 078c 8480 0002            MOVE   A12,@28480h,1
134c0: 058a 84a0 0002            MOVE   A10,@284A0h,0
134f0: 0586 84b0 0002            MOVE   A6,@284B0h,0
13520: a3cf                      MOVE   A14,-*SP,1
13530: 09e8 8420 0002            MOVI   28420h,A8
13560: 930e                      MOVE   A8,*A14+,1
13570: 1b08                      MOVK   18h,A8
13580: 930e                      MOVE   A8,*A14+,1
13590: 0d5f 0000 0000            CALLA  0h
135c0: 938e                      MOVE   A12,*A14+,1
135d0: 4508                      SUB    A8,A8
135e0: 930e                      MOVE   A8,*A14+,1
135f0: 0d5f 5670 0002            CALLA  25670h
13620: ca02                      JREQ   13650h
13630: 938e                      MOVE   A12,*A14+,1
13640: c003                      JR     13680h
13650: d60e 79a0 0002            MOVE   @279A0h,*A14+,1
13680: a7c8                      MOVE   -*A14,A8,1
13690: 0788 52c0 0003            MOVE   A8,@352C0h,1
136c0: 0570                      SETF   10h,1,0
136d0: 058a 52e0 0003            MOVE   A10,@352E0h,0
13700: 0586 52f0 0003            MOVE   A6,@352F0h,0
13730: b7ee 00a0                 MOVE   *SP(A0h),A14,1
13750: 09af 3440                 MMFM   SP,A6,A10,A12,A13
13770: 0962                      RETS   2h

_cp_eht_readback:
13780: 098f 000c                 MMTM   SP,A12,A13
137a0: 4dcd                      MOVE   A14,A13
137b0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
137d0: 07a8 82a0 0002            MOVE   @282A0h,A8,1
13800: 1428                      DEC    A8
13810: ca0a                      JREQ   138C0h
13820: a3cf                      MOVE   A14,-*SP,1
13830: 09e8 7020 0002            MOVI   27020h,A8
13860: 930e                      MOVE   A8,*A14+,1
13870: 938e                      MOVE   A12,*A14+,1
13880: 0d5f 6320 0002            CALLA  26320h
138b0: c009                      JR     13950h
138c0: a3cf                      MOVE   A14,-*SP,1
138d0: 09e8 8020 0002            MOVI   28020h,A8
13900: 930e                      MOVE   A8,*A14+,1
13910: 938e                      MOVE   A12,*A14+,1
13920: 0d5f 6320 0002            CALLA  26320h
13950: b7ee 0060                 MOVE   *SP(60h),A14,1
13970: 09af 3000                 MMFM   SP,A12,A13
13990: 0962                      RETS   2h

_cp_lens_wobble:
139a0: a3af                      MOVE   A13,-*SP,1
139b0: 4dcd                      MOVE   A14,A13
139c0: 1988                      MOVK   Ch,A8
139d0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
13a00: 1a08                      MOVK   10h,A8
13a10: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
13a40: 1948                      MOVK   Ah,A8
13a50: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
13a80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13aa0: 0d5f 0c50 0002            CALLA  20C50h
13ad0: a7c8                      MOVE   -*A14,A8,1
13ae0: 0788 dd00 0002            MOVE   A8,@2DD00h,1
13b10: a3cf                      MOVE   A14,-*SP,1
13b20: 09e8 dca0 0002            MOVI   2DCA0h,A8
13b50: 930e                      MOVE   A8,*A14+,1
13b60: 1a68                      MOVK   13h,A8
13b70: 930e                      MOVE   A8,*A14+,1
13b80: 0d5f 0000 0000            CALLA  0h
13bb0: b7ee 0040                 MOVE   *SP(40h),A14,1
13bd0: 97ed                      MOVE   *SP+,A13,1
13be0: 0962                      RETS   2h

_cp_beam_wobble:
13bf0: a3af                      MOVE   A13,-*SP,1
13c00: 4dcd                      MOVE   A14,A13
13c10: 1988                      MOVK   Ch,A8
13c20: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
13c50: 1a08                      MOVK   10h,A8
13c60: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
13c90: 1988                      MOVK   Ch,A8
13ca0: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
13cd0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13cf0: 0d5f 0c50 0002            CALLA  20C50h
13d20: a7c8                      MOVE   -*A14,A8,1
13d30: 0788 dd00 0002            MOVE   A8,@2DD00h,1
13d60: a3cf                      MOVE   A14,-*SP,1
13d70: 09e8 dca0 0002            MOVI   2DCA0h,A8
13da0: 930e                      MOVE   A8,*A14+,1
13db0: 1a68                      MOVK   13h,A8
13dc0: 930e                      MOVE   A8,*A14+,1
13dd0: 0d5f 0000 0000            CALLA  0h
13e00: b7ee 0040                 MOVE   *SP(40h),A14,1
13e20: 97ed                      MOVE   *SP+,A13,1
13e30: 0962                      RETS   2h

_cp_toggle_readback:
13e40: a3af                      MOVE   A13,-*SP,1
13e50: 4dcd                      MOVE   A14,A13
13e60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13e80: 0788 82a0 0002            MOVE   A8,@282A0h,1
13eb0: b7ee 0040                 MOVE   *SP(40h),A14,1
13ed0: 97ed                      MOVE   *SP+,A13,1
13ee0: 0962                      RETS   2h

_cp_direct_command:
13ef0: 098f 000c                 MMTM   SP,A12,A13
13f10: 4dcd                      MOVE   A14,A13
13f20: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
13f40: a3cf                      MOVE   A14,-*SP,1
13f50: 938e                      MOVE   A12,*A14+,1
13f60: 0d5f 6440 0002            CALLA  26440h
13f90: 1108                      ADDK   8h,A8
13fa0: 0788 dca0 0002            MOVE   A8,@2DCA0h,1
13fd0: 1a08                      MOVK   10h,A8
13fe0: 0788 dcc0 0002            MOVE   A8,@2DCC0h,1
14010: 0788 dce0 0002            MOVE   A8,@2DCE0h,1
14040: a3cf                      MOVE   A14,-*SP,1
14050: 938e                      MOVE   A12,*A14+,1
14060: 09ec dd00 0002            MOVI   2DD00h,A12
14090: 938e                      MOVE   A12,*A14+,1
140a0: 0d5f 6320 0002            CALLA  26320h
140d0: a3cf                      MOVE   A14,-*SP,1
140e0: 09e8 dca0 0002            MOVI   2DCA0h,A8
14110: 930e                      MOVE   A8,*A14+,1
14120: 1a28                      MOVK   11h,A8
14130: 930e                      MOVE   A8,*A14+,1
14140: 0d5f 0000 0000            CALLA  0h
14170: b7ee 0060                 MOVE   *SP(60h),A14,1
14190: 09af 3000                 MMFM   SP,A12,A13
141b0: 0962                      RETS   2h

_control_fil_ramping:
141c0: 098f 000c                 MMTM   SP,A12,A13
141e0: 4dcd                      MOVE   A14,A13
141f0: 100e                      ADDK   20h,A14
14200: 458c                      SUB    A12,A12
14210: 0d5f 5ee0 0001            CALLA  15EE0h
14240: 4d08                      MOVE   A8,A8
14250: ca08                      JREQ   142E0h
14260: 0570                      SETF   10h,1,0
14270: 058c 5300 0003            MOVE   A12,@35300h,0
142a0: 1868                      MOVK   3h,A8
142b0: 0588 7a10 0002            MOVE   A8,@27A10h,0
142e0: 0570                      SETF   10h,1,0
142f0: 05a8 5300 0003            MOVE   @35300h,A8,0
14320: ca6c                      JREQ   149F0h
14330: 1428                      DEC    A8
14340: ca5c                      JREQ   14910h
14350: 0d88 0089                 DSJ    A8,14C00h
14370: 05a8 5310 0003            MOVE   @35310h,A8,0
143a0: c751                      JRGT   148C0h
143b0: 07a8 5280 0003            MOVE   @35280h,A8,1
143e0: 830d                      MOVE   A8,*A13,1
143f0: d60e 5340 0003            MOVE   @35340h,*A14+,1
14420: 930e                      MOVE   A8,*A14+,1
14430: 0d5f 4120 0002            CALLA  24120h
14460: 0d5f 01e0 0002            CALLA  201E0h
14490: 0d5f 0f60 0002            CALLA  20F60h
144c0: d60e 5320 0003            MOVE   @35320h,*A14+,1
144f0: 0d5f 01e0 0002            CALLA  201E0h
14520: 0d5f 0f60 0002            CALLA  20F60h
14550: 0d5f 22f0 0002            CALLA  222F0h
14580: ca06                      JREQ   145F0h
14590: 07a8 5340 0003            MOVE   @35340h,A8,1
145c0: 830d                      MOVE   A8,*A13,1
145d0: 182c                      MOVK   1h,A12
145e0: c008                      JR     14670h
145f0: d60e 5320 0003            MOVE   @35320h,*A14+,1
14620: 9bae                      MOVE   *A13+,*A14+,1
14630: 0d5f 4240 0002            CALLA  24240h
14660: abcd                      MOVE   -*A14,-*A13,1
14670: a3cf                      MOVE   A14,-*SP,1
14680: 93ae                      MOVE   A13,*A14+,1
14690: 0d5f 6e50 0001            CALLA  16E50h
146c0: 4d08                      MOVE   A8,A8
146d0: cb0a                      JRNE   14780h
146e0: 182c                      MOVK   1h,A12
146f0: 0570                      SETF   10h,1,0
14700: 058c 7a10 0002            MOVE   A12,@27A10h,0
14730: 4508                      SUB    A8,A8
14740: 0588 5300 0003            MOVE   A8,@35300h,0
14770: c048                      JR     14C00h
14780: 0570                      SETF   10h,1,0
14790: 05c0 5360 0003 5310 0003  MOVE   @35360h,@35310h,0
147e0: 87a8                      MOVE   *A13,A8,1
147f0: 0788 5280 0003            MOVE   A8,@35280h,1
14820: 0d8c 003c                 DSJ    A12,14C00h
14840: 458c                      SUB    A12,A12
14850: 058c 7a10 0002            MOVE   A12,@27A10h,0
14880: 058c 5300 0003            MOVE   A12,@35300h,0
148b0: c034                      JR     14C00h
148c0: 1428                      DEC    A8
148d0: 0588 5310 0003            MOVE   A8,@35310h,0
14900: c02f                      JR     14C00h
14910: 05a8 5370 0003            MOVE   @35370h,A8,0
14940: c705                      JRGT   149A0h
14950: 184c                      MOVK   2h,A12
14960: 058c 5300 0003            MOVE   A12,@35300h,0
14990: c026                      JR     14C00h
149a0: 1428                      DEC    A8
149b0: 0588 5370 0003            MOVE   A8,@35370h,0
149e0: c021                      JR     14C00h
149f0: 0d5f 5b60 0001            CALLA  15B60h
14a20: 4d08                      MOVE   A8,A8
14a30: ca1c                      JREQ   14C00h
14a40: a3cf                      MOVE   A14,-*SP,1
14a50: 09e8 5320 0003            MOVI   35320h,A8
14a80: 930e                      MOVE   A8,*A14+,1
14a90: 0d5f 62f0 0001            CALLA  162F0h
14ac0: 1848                      MOVK   2h,A8
14ad0: 0570                      SETF   10h,1,0
14ae0: 0588 7a10 0002            MOVE   A8,@27A10h,0
14b10: 05ac 5370 0003            MOVE   @35370h,A12,0
14b40: c602                      JRLE   14B70h
14b50: 182c                      MOVK   1h,A12
14b60: c001                      JR     14B80h
14b70: 4d0c                      MOVE   A8,A12
14b80: 058c 5300 0003            MOVE   A12,@35300h,0
14bb0: 05c0 5360 0003 5310 0003  MOVE   @35360h,@35310h,0
14c00: 140e                      SUBK   20h,A14
14c10: 09af 3000                 MMFM   SP,A12,A13
14c30: 0960                      RETS   

_control_eht_ramping:
14c40: 098f 000c                 MMTM   SP,A12,A13
14c60: 4dcd                      MOVE   A14,A13
14c70: 100e                      ADDK   20h,A14
14c80: 458c                      SUB    A12,A12
14c90: 0d5f 5cd0 0001            CALLA  15CD0h
14cc0: 4d08                      MOVE   A8,A8
14cd0: ca08                      JREQ   14D60h
14ce0: 0570                      SETF   10h,1,0
14cf0: 058c 5380 0003            MOVE   A12,@35380h,0
14d20: 1868                      MOVK   3h,A8
14d30: 0588 7a00 0002            MOVE   A8,@27A00h,0
14d60: 0570                      SETF   10h,1,0
14d70: 05a8 5380 0003            MOVE   @35380h,A8,0
14da0: ca6c                      JREQ   15470h
14db0: 1428                      DEC    A8
14dc0: ca5c                      JREQ   15390h
14dd0: 0d88 0089                 DSJ    A8,15680h
14df0: 05a8 5390 0003            MOVE   @35390h,A8,0
14e20: c751                      JRGT   15340h
14e30: 07a8 5240 0003            MOVE   @35240h,A8,1
14e60: 830d                      MOVE   A8,*A13,1
14e70: d60e 53c0 0003            MOVE   @353C0h,*A14+,1
14ea0: 930e                      MOVE   A8,*A14+,1
14eb0: 0d5f 4120 0002            CALLA  24120h
14ee0: 0d5f 01e0 0002            CALLA  201E0h
14f10: 0d5f 0f60 0002            CALLA  20F60h
14f40: d60e 53a0 0003            MOVE   @353A0h,*A14+,1
14f70: 0d5f 01e0 0002            CALLA  201E0h
14fa0: 0d5f 0f60 0002            CALLA  20F60h
14fd0: 0d5f 22f0 0002            CALLA  222F0h
15000: ca06                      JREQ   15070h
15010: 07a8 53c0 0003            MOVE   @353C0h,A8,1
15040: 830d                      MOVE   A8,*A13,1
15050: 182c                      MOVK   1h,A12
15060: c008                      JR     150F0h
15070: d60e 53a0 0003            MOVE   @353A0h,*A14+,1
150a0: 9bae                      MOVE   *A13+,*A14+,1
150b0: 0d5f 4240 0002            CALLA  24240h
150e0: abcd                      MOVE   -*A14,-*A13,1
150f0: a3cf                      MOVE   A14,-*SP,1
15100: 93ae                      MOVE   A13,*A14+,1
15110: 0d5f 6600 0001            CALLA  16600h
15140: 4d08                      MOVE   A8,A8
15150: cb0a                      JRNE   15200h
15160: 182c                      MOVK   1h,A12
15170: 0570                      SETF   10h,1,0
15180: 058c 7a00 0002            MOVE   A12,@27A00h,0
151b0: 4508                      SUB    A8,A8
151c0: 0588 5380 0003            MOVE   A8,@35380h,0
151f0: c048                      JR     15680h
15200: 0570                      SETF   10h,1,0
15210: 05c0 53e0 0003 5390 0003  MOVE   @353E0h,@35390h,0
15260: 87a8                      MOVE   *A13,A8,1
15270: 0788 5240 0003            MOVE   A8,@35240h,1
152a0: 0d8c 003c                 DSJ    A12,15680h
152c0: 458c                      SUB    A12,A12
152d0: 058c 7a00 0002            MOVE   A12,@27A00h,0
15300: 058c 5380 0003            MOVE   A12,@35380h,0
15330: c034                      JR     15680h
15340: 1428                      DEC    A8
15350: 0588 5390 0003            MOVE   A8,@35390h,0
15380: c02f                      JR     15680h
15390: 05a8 53f0 0003            MOVE   @353F0h,A8,0
153c0: c705                      JRGT   15420h
153d0: 184c                      MOVK   2h,A12
153e0: 058c 5380 0003            MOVE   A12,@35380h,0
15410: c026                      JR     15680h
15420: 1428                      DEC    A8
15430: 0588 53f0 0003            MOVE   A8,@353F0h,0
15460: c021                      JR     15680h
15470: 0d5f 5a00 0001            CALLA  15A00h
154a0: 4d08                      MOVE   A8,A8
154b0: ca1c                      JREQ   15680h
154c0: a3cf                      MOVE   A14,-*SP,1
154d0: 09e8 53a0 0003            MOVI   353A0h,A8
15500: 930e                      MOVE   A8,*A14+,1
15510: 0d5f 62f0 0001            CALLA  162F0h
15540: 1848                      MOVK   2h,A8
15550: 0570                      SETF   10h,1,0
15560: 0588 7a00 0002            MOVE   A8,@27A00h,0
15590: 05ac 53f0 0003            MOVE   @353F0h,A12,0
155c0: c602                      JRLE   155F0h
155d0: 182c                      MOVK   1h,A12
155e0: c001                      JR     15600h
155f0: 4d0c                      MOVE   A8,A12
15600: 058c 5380 0003            MOVE   A12,@35380h,0
15630: 05c0 53e0 0003 5390 0003  MOVE   @353E0h,@35390h,0
15680: 140e                      SUBK   20h,A14
15690: 09af 3000                 MMFM   SP,A12,A13
156b0: 0960                      RETS   

_control_eht_set_ramping:
156c0: a3cf                      MOVE   A14,-*SP,1
156d0: 09c8 0280                 MOVI   280h,A8
156f0: 930e                      MOVE   A8,*A14+,1
15700: 09e8 f2a0 0002            MOVI   2F2A0h,A8
15730: 930e                      MOVE   A8,*A14+,1
15740: 09e8 5445 5152            MOVI   51525445h,A8
15770: 930e                      MOVE   A8,*A14+,1
15780: 1a68                      MOVK   13h,A8
15790: 930e                      MOVE   A8,*A14+,1
157a0: 0d5f 0000 0000            CALLA  0h
157d0: a3cf                      MOVE   A14,-*SP,1
157e0: 09c8 0058                 MOVI   58h,A8
15800: 930e                      MOVE   A8,*A14+,1
15810: 09e8 4060 0003            MOVI   34060h,A8
15840: 930e                      MOVE   A8,*A14+,1
15850: 09e8 5245 5152            MOVI   51525245h,A8
15880: 930e                      MOVE   A8,*A14+,1
15890: 1ac8                      MOVK   16h,A8
158a0: 930e                      MOVE   A8,*A14+,1
158b0: 0d5f 0000 0000            CALLA  0h
158e0: a3cf                      MOVE   A14,-*SP,1
158f0: 1b68                      MOVK   1Bh,A8
15900: 930e                      MOVE   A8,*A14+,1
15910: 0d5f 0000 0000            CALLA  0h
15940: 0550                      SETF   10h,0,0
15950: 05a8 7a60 0002            MOVE   @27A60h,A8,0
15980: 3d68                      DSJS   A8,158E0h
15990: 0d5f 41c0 0001            CALLA  141C0h
159c0: 0d5f 4c40 0001            CALLA  14C40h
159f0: c0ee                      JR     158E0h

_check_for_next_eht_ramp:
15a00: a3cf                      MOVE   A14,-*SP,1
15a10: 09e8 4b60 0003            MOVI   34B60h,A8
15a40: 930e                      MOVE   A8,*A14+,1
15a50: 1a68                      MOVK   13h,A8
15a60: 930e                      MOVE   A8,*A14+,1
15a70: 0d5f 0000 0000            CALLA  0h
15aa0: 4d08                      MOVE   A8,A8
15ab0: cb04                      JRNE   15B00h
15ac0: 07a8 4ba0 0003            MOVE   @34BA0h,A8,1
15af0: ca02                      JREQ   15B20h
15b00: 4508                      SUB    A8,A8
15b10: c001                      JR     15B30h
15b20: 1828                      MOVK   1h,A8
15b30: 0570                      SETF   10h,1,0
15b40: 0508                      SEXT   A8,0
15b50: 0960                      RETS   

_check_for_next_fil_ramp:
15b60: a3cf                      MOVE   A14,-*SP,1
15b70: 09e8 4b60 0003            MOVI   34B60h,A8
15ba0: 930e                      MOVE   A8,*A14+,1
15bb0: 1a68                      MOVK   13h,A8
15bc0: 930e                      MOVE   A8,*A14+,1
15bd0: 0d5f 0000 0000            CALLA  0h
15c00: 4d08                      MOVE   A8,A8
15c10: cb05                      JRNE   15C70h
15c20: 07a8 4ba0 0003            MOVE   @34BA0h,A8,1
15c50: 1428                      DEC    A8
15c60: ca02                      JREQ   15C90h
15c70: 4508                      SUB    A8,A8
15c80: c001                      JR     15CA0h
15c90: 1828                      MOVK   1h,A8
15ca0: 0570                      SETF   10h,1,0
15cb0: 0508                      SEXT   A8,0
15cc0: 0960                      RETS   

_check_for_eht_abort_ramp:
15cd0: a3cf                      MOVE   A14,-*SP,1
15ce0: 09e8 4b60 0003            MOVI   34B60h,A8
15d10: 930e                      MOVE   A8,*A14+,1
15d20: 1a68                      MOVK   13h,A8
15d30: 930e                      MOVE   A8,*A14+,1
15d40: 0d5f 0000 0000            CALLA  0h
15d70: 4d08                      MOVE   A8,A8
15d80: cb13                      JRNE   15EC0h
15d90: 07a8 4ba0 0003            MOVE   @34BA0h,A8,1
15dc0: 1448                      SUBK   2h,A8
15dd0: cb0e                      JRNE   15EC0h
15de0: a3cf                      MOVE   A14,-*SP,1
15df0: 4508                      SUB    A8,A8
15e00: 930e                      MOVE   A8,*A14+,1
15e10: 09e8 4b60 0003            MOVI   34B60h,A8
15e40: 930e                      MOVE   A8,*A14+,1
15e50: 1a68                      MOVK   13h,A8
15e60: 930e                      MOVE   A8,*A14+,1
15e70: 0d5f 0000 0000            CALLA  0h
15ea0: 1828                      MOVK   1h,A8
15eb0: 0960                      RETS   
15ec0: 4508                      SUB    A8,A8
15ed0: 0960                      RETS   

_check_for_fil_abort_ramp:
15ee0: a3cf                      MOVE   A14,-*SP,1
15ef0: 09e8 4b60 0003            MOVI   34B60h,A8
15f20: 930e                      MOVE   A8,*A14+,1
15f30: 1a68                      MOVK   13h,A8
15f40: 930e                      MOVE   A8,*A14+,1
15f50: 0d5f 0000 0000            CALLA  0h
15f80: 4d08                      MOVE   A8,A8
15f90: cb13                      JRNE   160D0h
15fa0: 07a8 4ba0 0003            MOVE   @34BA0h,A8,1
15fd0: 1468                      SUBK   3h,A8
15fe0: cb0e                      JRNE   160D0h
15ff0: a3cf                      MOVE   A14,-*SP,1
16000: 4508                      SUB    A8,A8
16010: 930e                      MOVE   A8,*A14+,1
16020: 09e8 4b60 0003            MOVI   34B60h,A8
16050: 930e                      MOVE   A8,*A14+,1
16060: 1a68                      MOVK   13h,A8
16070: 930e                      MOVE   A8,*A14+,1
16080: 0d5f 0000 0000            CALLA  0h
160b0: 1828                      MOVK   1h,A8
160c0: 0960                      RETS   
160d0: 4508                      SUB    A8,A8
160e0: 0960                      RETS   

_turn_on_eht_set_ramping_supply:
160f0: a3af                      MOVE   A13,-*SP,1
16100: 4dcd                      MOVE   A14,A13
16110: a3cf                      MOVE   A14,-*SP,1
16120: 1828                      MOVK   1h,A8
16130: 930e                      MOVE   A8,*A14+,1
16140: 0570                      SETF   10h,1,0
16150: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
16170: 930e                      MOVE   A8,*A14+,1
16180: 0d5f 8dc0 0001            CALLA  18DC0h
161b0: b7ee 0040                 MOVE   *SP(40h),A14,1
161d0: 97ed                      MOVE   *SP+,A13,1
161e0: 0962                      RETS   2h

_turn_off_eht_set_rmp_supp:
161f0: a3af                      MOVE   A13,-*SP,1
16200: 4dcd                      MOVE   A14,A13
16210: a3cf                      MOVE   A14,-*SP,1
16220: 4508                      SUB    A8,A8
16230: 930e                      MOVE   A8,*A14+,1
16240: 0570                      SETF   10h,1,0
16250: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
16270: 930e                      MOVE   A8,*A14+,1
16280: 0d5f 8dc0 0001            CALLA  18DC0h
162b0: b7ee 0040                 MOVE   *SP(40h),A14,1
162d0: 97ed                      MOVE   *SP+,A13,1
162e0: 0962                      RETS   2h

_get_ramp_details:
162f0: 098f 000c                 MMTM   SP,A12,A13
16310: 4dcd                      MOVE   A14,A13
16320: 100e                      ADDK   20h,A14
16330: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
16350: a3cf                      MOVE   A14,-*SP,1
16360: 4508                      SUB    A8,A8
16370: 930e                      MOVE   A8,*A14+,1
16380: 09e8 4b60 0003            MOVI   34B60h,A8
163b0: 930e                      MOVE   A8,*A14+,1
163c0: 1a68                      MOVK   13h,A8
163d0: 930e                      MOVE   A8,*A14+,1
163e0: 0d5f 0000 0000            CALLA  0h
16410: 830d                      MOVE   A8,*A13,1
16420: 4d08                      MOVE   A8,A8
16430: cb16                      JRNE   165A0h
16440: 0570                      SETF   10h,1,0
16450: 05a8 4c00 0003            MOVE   @34C00h,A8,0
16480: b10c 0040                 MOVE   A8,*A12(40h),0
164a0: 07a8 4bc0 0003            MOVE   @34BC0h,A8,1
164d0: 830c                      MOVE   A8,*A12,1
164e0: 07a8 4be0 0003            MOVE   @34BE0h,A8,1
16510: b30c 0020                 MOVE   A8,*A12(20h),1
16530: 05a8 4c10 0003            MOVE   @34C10h,A8,0
16560: b10c 0050                 MOVE   A8,*A12(50h),0
16580: 1828                      MOVK   1h,A8
16590: c001                      JR     165B0h
165a0: 4508                      SUB    A8,A8
165b0: b7ee 0060                 MOVE   *SP(60h),A14,1
165d0: 09af 3000                 MMFM   SP,A12,A13
165f0: 0962                      RETS   2h

_request_new_eht_val:
16600: 098f 000c                 MMTM   SP,A12,A13
16620: 4dcd                      MOVE   A14,A13
16630: 100e                      ADDK   20h,A14
16640: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
16660: 07a8 79a0 0002            MOVE   @279A0h,A8,1
16690: 830d                      MOVE   A8,*A13,1
166a0: d60e 5240 0003            MOVE   @35240h,*A14+,1
166d0: 930e                      MOVE   A8,*A14+,1
166e0: 0d5f 5670 0002            CALLA  25670h
16710: cb09                      JRNE   167B0h
16720: d38e 0000                 MOVE   *A12(0h),*A14+,1
16740: d60e 79a0 0002            MOVE   @279A0h,*A14+,1
16770: 0d5f 5890 0002            CALLA  25890h
167a0: ca3a                      JREQ   16B50h
167b0: d60e 5240 0003            MOVE   @35240h,*A14+,1
167e0: d60e 79a0 0002            MOVE   @279A0h,*A14+,1
16810: 0d5f 5560 0002            CALLA  25560h
16840: ca17                      JREQ   169C0h
16850: d38e 0000                 MOVE   *A12(0h),*A14+,1
16870: d60e 79a0 0002            MOVE   @279A0h,*A14+,1
168a0: 0d5f 5890 0002            CALLA  25890h
168d0: ca1b                      JREQ   16A90h
168e0: a3cf                      MOVE   A14,-*SP,1
168f0: 4508                      SUB    A8,A8
16900: 930e                      MOVE   A8,*A14+,1
16910: 0d5f 61f0 0001            CALLA  161F0h
16940: 4d08                      MOVE   A8,A8
16950: cb02                      JRNE   16980h
16960: 4508                      SUB    A8,A8
16970: c048                      JR     16E00h
16980: 4508                      SUB    A8,A8
16990: 830c                      MOVE   A8,*A12,1
169a0: 1828                      MOVK   1h,A8
169b0: c044                      JR     16E00h
169c0: d38e 0000                 MOVE   *A12(0h),*A14+,1
169e0: d60e 79a0 0002            MOVE   @279A0h,*A14+,1
16a10: 0d5f 5890 0002            CALLA  25890h
16a40: ca04                      JREQ   16A90h
16a50: 07a8 79a0 0002            MOVE   @279A0h,A8,1
16a80: 830c                      MOVE   A8,*A12,1
16a90: a3cf                      MOVE   A14,-*SP,1
16aa0: 938e                      MOVE   A12,*A14+,1
16ab0: 0d5f 7f80 0001            CALLA  17F80h
16ae0: 1428                      DEC    A8
16af0: 1828                      MOVK   1h,A8
16b00: ca01                      JREQ   16B20h
16b10: 4508                      SUB    A8,A8
16b20: 0570                      SETF   10h,1,0
16b30: 0508                      SEXT   A8,0
16b40: c02b                      JR     16E00h
16b50: a3cf                      MOVE   A14,-*SP,1
16b60: 4508                      SUB    A8,A8
16b70: 930e                      MOVE   A8,*A14+,1
16b80: 0d5f 60f0 0001            CALLA  160F0h
16bb0: 4d08                      MOVE   A8,A8
16bc0: ca22                      JREQ   16DF0h
16bd0: a3cf                      MOVE   A14,-*SP,1
16be0: 93ae                      MOVE   A13,*A14+,1
16bf0: 0d5f 7f80 0001            CALLA  17F80h
16c20: 4d08                      MOVE   A8,A8
16c30: ca1b                      JREQ   16DF0h
16c40: d38e 0000                 MOVE   *A12(0h),*A14+,1
16c60: d60e 79a0 0002            MOVE   @279A0h,*A14+,1
16c90: 0d5f 5780 0002            CALLA  25780h
16cc0: ca06                      JREQ   16D30h
16cd0: 07a8 79a0 0002            MOVE   @279A0h,A8,1
16d00: 830c                      MOVE   A8,*A12,1
16d10: 1828                      MOVK   1h,A8
16d20: c00d                      JR     16E00h
16d30: a3cf                      MOVE   A14,-*SP,1
16d40: 938e                      MOVE   A12,*A14+,1
16d50: 0d5f 7f80 0001            CALLA  17F80h
16d80: 1428                      DEC    A8
16d90: 1828                      MOVK   1h,A8
16da0: ca01                      JREQ   16DC0h
16db0: 4508                      SUB    A8,A8
16dc0: 0570                      SETF   10h,1,0
16dd0: 0508                      SEXT   A8,0
16de0: c001                      JR     16E00h
16df0: 4508                      SUB    A8,A8
16e00: b7ee 0060                 MOVE   *SP(60h),A14,1
16e20: 09af 3000                 MMFM   SP,A12,A13
16e40: 0962                      RETS   2h

_request_new_fil_val:
16e50: 098f 000c                 MMTM   SP,A12,A13
16e70: 4dcd                      MOVE   A14,A13
16e80: 100e                      ADDK   20h,A14
16e90: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
16eb0: 4508                      SUB    A8,A8
16ec0: 830d                      MOVE   A8,*A13,1
16ed0: d60e 5280 0003            MOVE   @35280h,*A14+,1
16f00: 930e                      MOVE   A8,*A14+,1
16f10: 0d5f 5670 0002            CALLA  25670h
16f40: cb08                      JRNE   16FD0h
16f50: d38e 0000                 MOVE   *A12(0h),*A14+,1
16f70: 4508                      SUB    A8,A8
16f80: 930e                      MOVE   A8,*A14+,1
16f90: 0d5f 5890 0002            CALLA  25890h
16fc0: ca2b                      JREQ   17280h
16fd0: d60e 5280 0003            MOVE   @35280h,*A14+,1
17000: 4508                      SUB    A8,A8
17010: 930e                      MOVE   A8,*A14+,1
17020: 0d5f 5560 0002            CALLA  25560h
17050: ca16                      JREQ   171C0h
17060: d38e 0000                 MOVE   *A12(0h),*A14+,1
17080: 4508                      SUB    A8,A8
17090: 930e                      MOVE   A8,*A14+,1
170a0: 0d5f 5780 0002            CALLA  25780h
170d0: ca0e                      JREQ   171C0h
170e0: a3cf                      MOVE   A14,-*SP,1
170f0: 1828                      MOVK   1h,A8
17100: 930e                      MOVE   A8,*A14+,1
17110: 0d5f 61f0 0001            CALLA  161F0h
17140: 4d08                      MOVE   A8,A8
17150: cb02                      JRNE   17180h
17160: 4508                      SUB    A8,A8
17170: c038                      JR     17500h
17180: 4508                      SUB    A8,A8
17190: 830c                      MOVE   A8,*A12,1
171a0: 1828                      MOVK   1h,A8
171b0: c034                      JR     17500h
171c0: a3cf                      MOVE   A14,-*SP,1
171d0: 938e                      MOVE   A12,*A14+,1
171e0: 0d5f 7550 0001            CALLA  17550h
17210: 1428                      DEC    A8
17220: 1828                      MOVK   1h,A8
17230: ca01                      JREQ   17250h
17240: 4508                      SUB    A8,A8
17250: 0570                      SETF   10h,1,0
17260: 0508                      SEXT   A8,0
17270: c028                      JR     17500h
17280: a3cf                      MOVE   A14,-*SP,1
17290: 1828                      MOVK   1h,A8
172a0: 930e                      MOVE   A8,*A14+,1
172b0: 0d5f 60f0 0001            CALLA  160F0h
172e0: 4d08                      MOVE   A8,A8
172f0: ca1f                      JREQ   174F0h
17300: a3cf                      MOVE   A14,-*SP,1
17310: 93ae                      MOVE   A13,*A14+,1
17320: 0d5f 7550 0001            CALLA  17550h
17350: 4d08                      MOVE   A8,A8
17360: ca18                      JREQ   174F0h
17370: d38e 0000                 MOVE   *A12(0h),*A14+,1
17390: 4508                      SUB    A8,A8
173a0: 930e                      MOVE   A8,*A14+,1
173b0: 0d5f 5780 0002            CALLA  25780h
173e0: ca04                      JREQ   17430h
173f0: 4508                      SUB    A8,A8
17400: 830c                      MOVE   A8,*A12,1
17410: 1828                      MOVK   1h,A8
17420: c00d                      JR     17500h
17430: a3cf                      MOVE   A14,-*SP,1
17440: 938e                      MOVE   A12,*A14+,1
17450: 0d5f 7550 0001            CALLA  17550h
17480: 1428                      DEC    A8
17490: 1828                      MOVK   1h,A8
174a0: ca01                      JREQ   174C0h
174b0: 4508                      SUB    A8,A8
174c0: 0570                      SETF   10h,1,0
174d0: 0508                      SEXT   A8,0
174e0: c001                      JR     17500h
174f0: 4508                      SUB    A8,A8
17500: b7ee 0060                 MOVE   *SP(60h),A14,1
17520: 09af 3000                 MMFM   SP,A12,A13
17540: 0962                      RETS   2h

_r_send_eht_set_fil_current:
17550: 098f 022c                 MMTM   SP,A6,A10,A12,A13
17570: 4dcd                      MOVE   A14,A13
17580: 100e                      ADDK   20h,A14
17590: 100e                      ADDK   20h,A14
175a0: a3cf                      MOVE   A14,-*SP,1
175b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
175d0: d30e 0000                 MOVE   *A8(0h),*A14+,1
175f0: 0d5f e640 0001            CALLA  1E640h
17620: a7ca                      MOVE   -*A14,A10,1
17630: 182c                      MOVK   1h,A12
17640: 934e                      MOVE   A10,*A14+,1
17650: 0d5f 01e0 0002            CALLA  201E0h
17680: 09e8 70c0 0002            MOVI   270C0h,A8
176b0: 9b0e                      MOVE   *A8+,*A14+,1
176c0: 9b0e                      MOVE   *A8+,*A14+,1
176d0: 0d5f 2a00 0002            CALLA  22A00h
17700: 4508                      SUB    A8,A8
17710: 09e6 0000 3fe0            MOVI   3FE00000h,A6
17740: 92ce                      MOVE   A6,*A14+,1
17750: 930e                      MOVE   A8,*A14+,1
17760: 0d5f 12c0 0002            CALLA  212C0h
17790: 0d5f fd20 0001            CALLA  1FD20h
177c0: 4d0a                      MOVE   A8,A10
177d0: 4d88                      MOVE   A12,A8
177e0: 102c                      INC    A12
177f0: 260c                      SLL    10h,A12
17800: 2a0c                      SRA    10h,A12
17810: 09c8 002e                 MOVI   2Eh,A8
17830: 05e8 4668 0003            MOVB   A8,@34668h
17860: 4d86                      MOVE   A12,A6
17870: 102c                      INC    A12
17880: 260c                      SLL    10h,A12
17890: 2a0c                      SRA    10h,A12
178a0: 2466                      SLL    3h,A6
178b0: 0b26 4660 0003            ADDI   34660h,A6
178e0: 1308                      ADDK   18h,A8
178f0: 8d06                      MOVB   A8,*A6
17900: a3cf                      MOVE   A14,-*SP,1
17910: 1866                      MOVK   3h,A6
17920: 92ce                      MOVE   A6,*A14+,1
17930: 246c                      SLL    3h,A12
17940: 0b2c 4660 0003            ADDI   34660h,A12
17970: 938e                      MOVE   A12,*A14+,1
17980: 934e                      MOVE   A10,*A14+,1
17990: 0d5f e060 0001            CALLA  1E060h
179c0: a3cf                      MOVE   A14,-*SP,1
179d0: 09ea 4668 0003            MOVI   34668h,A10
17a00: 934e                      MOVE   A10,*A14+,1
17a10: 0d5f 6440 0002            CALLA  26440h
17a40: 4d0c                      MOVE   A8,A12
17a50: 102c                      INC    A12
17a60: 0570                      SETF   10h,1,0
17a70: 050c                      SEXT   A12,0
17a80: 4d88                      MOVE   A12,A8
17a90: 102c                      INC    A12
17aa0: 050c                      SEXT   A12,0
17ab0: 2468                      SLL    3h,A8
17ac0: 0b28 4660 0003            ADDI   34660h,A8
17af0: 19a6                      MOVK   Dh,A6
17b00: 8cc8                      MOVB   A6,*A8
17b10: 246c                      SLL    3h,A12
17b20: 0b2c 4660 0003            ADDI   34660h,A12
17b50: 4508                      SUB    A8,A8
17b60: 8d0c                      MOVB   A8,*A12
17b70: 18ac                      MOVK   5h,A12
17b80: 05ec 4660 0003            MOVB   A12,@34660h
17bb0: a3cf                      MOVE   A14,-*SP,1
17bc0: 934e                      MOVE   A10,*A14+,1
17bd0: 0d5f 6440 0002            CALLA  26440h
17c00: 10c8                      ADDK   6h,A8
17c10: 0788 4620 0003            MOVE   A8,@34620h,1
17c40: 1ac6                      MOVK   16h,A6
17c50: 0786 4640 0003            MOVE   A6,@34640h,1
17c80: a3cf                      MOVE   A14,-*SP,1
17c90: 09e8 4620 0003            MOVI   34620h,A8
17cc0: 930e                      MOVE   A8,*A14+,1
17cd0: 182c                      MOVK   1h,A12
17ce0: 938e                      MOVE   A12,*A14+,1
17cf0: 0d5f 0000 0000            CALLA  0h
17d20: 830d                      MOVE   A8,*A13,1
17d30: 4d08                      MOVE   A8,A8
17d40: cb19                      JRNE   17EE0h
17d50: a3cf                      MOVE   A14,-*SP,1
17d60: 458c                      SUB    A12,A12
17d70: 938e                      MOVE   A12,*A14+,1
17d80: 09ec 9be0 0002            MOVI   29BE0h,A12
17db0: 938e                      MOVE   A12,*A14+,1
17dc0: 92ce                      MOVE   A6,*A14+,1
17dd0: 0d5f 0000 0000            CALLA  0h
17e00: 830d                      MOVE   A8,*A13,1
17e10: 4d08                      MOVE   A8,A8
17e20: cb0b                      JRNE   17EE0h
17e30: a3cf                      MOVE   A14,-*SP,1
17e40: 93ae                      MOVE   A13,*A14+,1
17e50: 09e8 9c20 0002            MOVI   29C20h,A8
17e80: 930e                      MOVE   A8,*A14+,1
17e90: 0d5f d1a0 0001            CALLA  1D1A0h
17ec0: 4d08                      MOVE   A8,A8
17ed0: ca02                      JREQ   17F00h
17ee0: 4508                      SUB    A8,A8
17ef0: c001                      JR     17F10h
17f00: 1828                      MOVK   1h,A8
17f10: 0570                      SETF   10h,1,0
17f20: 0508                      SEXT   A8,0
17f30: b7ee 00a0                 MOVE   *SP(A0h),A14,1
17f50: 09af 3440                 MMFM   SP,A6,A10,A12,A13
17f70: 0962                      RETS   2h

_r_send_eht_set_acc_voltage:
17f80: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
17fa0: 4dcd                      MOVE   A14,A13
17fb0: 100e                      ADDK   20h,A14
17fc0: b7a4 ffe0                 MOVE   *A13(FFE0h),A4,1
17fe0: d28e 0000                 MOVE   *A4(0h),*A14+,1
18000: 0d5f 01e0 0002            CALLA  201E0h
18030: 4508                      SUB    A8,A8
18040: 09ec 0000 4024            MOVI   40240000h,A12
18070: 938e                      MOVE   A12,*A14+,1
18080: 930e                      MOVE   A8,*A14+,1
18090: 0d5f 2a00 0002            CALLA  22A00h
180c0: 4508                      SUB    A8,A8
180d0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
18100: 938e                      MOVE   A12,*A14+,1
18110: 930e                      MOVE   A8,*A14+,1
18120: 0d5f 12c0 0002            CALLA  212C0h
18150: 0d5f fd20 0001            CALLA  1FD20h
18180: 4d02                      MOVE   A8,A2
18190: 182c                      MOVK   1h,A12
181a0: 07a6 7980 0002            MOVE   @27980h,A6,1
181d0: d28e 0000                 MOVE   *A4(0h),*A14+,1
181f0: d60e 7aa0 0002            MOVE   @27AA0h,*A14+,1
18220: 0d5f 4120 0002            CALLA  24120h
18250: a7ca                      MOVE   -*A14,A10,1
18260: 934e                      MOVE   A10,*A14+,1
18270: 4508                      SUB    A8,A8
18280: 930e                      MOVE   A8,*A14+,1
18290: 0d5f 5890 0002            CALLA  25890h
182c0: ca03                      JREQ   18300h
182d0: 07aa 7100 0002            MOVE   @27100h,A10,1
18300: 934e                      MOVE   A10,*A14+,1
18310: 92ce                      MOVE   A6,*A14+,1
18320: 0d5f 5670 0002            CALLA  25670h
18350: ca01                      JREQ   18370h
18360: 4cca                      MOVE   A6,A10
18370: 934e                      MOVE   A10,*A14+,1
18380: 0d5f 01e0 0002            CALLA  201E0h
183b0: 4508                      SUB    A8,A8
183c0: 09e6 0000 4024            MOVI   40240000h,A6
183f0: 92ce                      MOVE   A6,*A14+,1
18400: 930e                      MOVE   A8,*A14+,1
18410: 0d5f 2a00 0002            CALLA  22A00h
18440: 4508                      SUB    A8,A8
18450: 09e6 0000 3fe0            MOVI   3FE00000h,A6
18480: 92ce                      MOVE   A6,*A14+,1
18490: 930e                      MOVE   A8,*A14+,1
184a0: 0d5f 12c0 0002            CALLA  212C0h
184d0: 0d5f fd20 0001            CALLA  1FD20h
18500: 4d0a                      MOVE   A8,A10
18510: 4d88                      MOVE   A12,A8
18520: 102c                      INC    A12
18530: 260c                      SLL    10h,A12
18540: 2a0c                      SRA    10h,A12
18550: 09c8 002e                 MOVI   2Eh,A8
18570: 05e8 4668 0003            MOVB   A8,@34668h
185a0: 4d86                      MOVE   A12,A6
185b0: 102c                      INC    A12
185c0: 260c                      SLL    10h,A12
185d0: 2a0c                      SRA    10h,A12
185e0: 2466                      SLL    3h,A6
185f0: 0b26 4660 0003            ADDI   34660h,A6
18620: 12e8                      ADDK   17h,A8
18630: 8d06                      MOVB   A8,*A6
18640: a3cf                      MOVE   A14,-*SP,1
18650: 1866                      MOVK   3h,A6
18660: 92ce                      MOVE   A6,*A14+,1
18670: 246c                      SLL    3h,A12
18680: 0b2c 4660 0003            ADDI   34660h,A12
186b0: 938e                      MOVE   A12,*A14+,1
186c0: 934e                      MOVE   A10,*A14+,1
186d0: 0d5f e060 0001            CALLA  1E060h
18700: a3cf                      MOVE   A14,-*SP,1
18710: 09ea 4668 0003            MOVI   34668h,A10
18740: 934e                      MOVE   A10,*A14+,1
18750: 0d5f 6440 0002            CALLA  26440h
18780: 4d0c                      MOVE   A8,A12
18790: 102c                      INC    A12
187a0: 0570                      SETF   10h,1,0
187b0: 050c                      SEXT   A12,0
187c0: 4d88                      MOVE   A12,A8
187d0: 102c                      INC    A12
187e0: 050c                      SEXT   A12,0
187f0: 2468                      SLL    3h,A8
18800: 0b28 4660 0003            ADDI   34660h,A8
18830: 19a6                      MOVK   Dh,A6
18840: 8cc8                      MOVB   A6,*A8
18850: 246c                      SLL    3h,A12
18860: 0b2c 4660 0003            ADDI   34660h,A12
18890: 4508                      SUB    A8,A8
188a0: 8d0c                      MOVB   A8,*A12
188b0: 18ac                      MOVK   5h,A12
188c0: 05ec 4660 0003            MOVB   A12,@34660h
188f0: a3cf                      MOVE   A14,-*SP,1
18900: 934e                      MOVE   A10,*A14+,1
18910: 0d5f 6440 0002            CALLA  26440h
18940: 10c8                      ADDK   6h,A8
18950: 0788 4620 0003            MOVE   A8,@34620h,1
18980: 1ac6                      MOVK   16h,A6
18990: 0786 4640 0003            MOVE   A6,@34640h,1
189c0: a3cf                      MOVE   A14,-*SP,1
189d0: 09e8 4620 0003            MOVI   34620h,A8
18a00: 930e                      MOVE   A8,*A14+,1
18a10: 182c                      MOVK   1h,A12
18a20: 938e                      MOVE   A12,*A14+,1
18a30: 0d5f 0000 0000            CALLA  0h
18a60: 830d                      MOVE   A8,*A13,1
18a70: 4d08                      MOVE   A8,A8
18a80: cb2d                      JRNE   18D60h
18a90: a3cf                      MOVE   A14,-*SP,1
18aa0: 458c                      SUB    A12,A12
18ab0: 938e                      MOVE   A12,*A14+,1
18ac0: 09ec 9be0 0002            MOVI   29BE0h,A12
18af0: 938e                      MOVE   A12,*A14+,1
18b00: 92ce                      MOVE   A6,*A14+,1
18b10: 0d5f 0000 0000            CALLA  0h
18b40: 830d                      MOVE   A8,*A13,1
18b50: 4d08                      MOVE   A8,A8
18b60: cb1f                      JRNE   18D60h
18b70: a3cf                      MOVE   A14,-*SP,1
18b80: 93ae                      MOVE   A13,*A14+,1
18b90: 09e8 9c20 0002            MOVI   29C20h,A8
18bc0: 930e                      MOVE   A8,*A14+,1
18bd0: 0d5f d1a0 0001            CALLA  1D1A0h
18c00: 4d08                      MOVE   A8,A8
18c10: cb14                      JRNE   18D60h
18c20: 4c48                      MOVE   A2,A8
18c30: 0d5f 0900 0002            CALLA  20900h
18c60: 4442                      SUB    A2,A2
18c70: 09e8 0000 4024            MOVI   40240000h,A8
18ca0: 930e                      MOVE   A8,*A14+,1
18cb0: 924e                      MOVE   A2,*A14+,1
18cc0: 0d5f 34b0 0002            CALLA  234B0h
18cf0: 0d5f f890 0001            CALLA  1F890h
18d20: a7c8                      MOVE   -*A14,A8,1
18d30: 8304                      MOVE   A8,*A4,1
18d40: 1828                      MOVK   1h,A8
18d50: c001                      JR     18D70h
18d60: 4508                      SUB    A8,A8
18d70: b7ee 00e0                 MOVE   *SP(E0h),A14,1
18d90: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
18db0: 0962                      RETS   2h

_r_set_eht_set_supply_state:
18dc0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
18de0: 4dcd                      MOVE   A14,A13
18df0: 0b0e 0040                 ADDI   40h,A14
18e10: 0570                      SETF   10h,1,0
18e20: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
18e40: b5a6 ffe0                 MOVE   *A13(FFE0h),A6,0
18e60: 0550                      SETF   10h,0,0
18e70: 05a8 7a80 0002            MOVE   @27A80h,A8,0
18ea0: 810d                      MOVE   A8,*A13,0
18eb0: 182c                      MOVK   1h,A12
18ec0: 4cc8                      MOVE   A6,A8
18ed0: ca6b                      JREQ   19590h
18ee0: 1428                      DEC    A8
18ef0: ca5f                      JREQ   194F0h
18f00: 1428                      DEC    A8
18f10: ca53                      JREQ   19450h
18f20: 1428                      DEC    A8
18f30: ca47                      JREQ   193B0h
18f40: 1428                      DEC    A8
18f50: ca3a                      JREQ   19300h
18f60: 1428                      DEC    A8
18f70: ca30                      JREQ   19280h
18f80: 1428                      DEC    A8
18f90: ca25                      JREQ   191F0h
18fa0: 1428                      DEC    A8
18fb0: ca1a                      JREQ   19160h
18fc0: 1428                      DEC    A8
18fd0: ca0d                      JREQ   190B0h
18fe0: 0d88 0062                 DSJ    A8,19620h
19000: a3cf                      MOVE   A14,-*SP,1
19010: 934e                      MOVE   A10,*A14+,1
19020: 05a8 7a40 0002            MOVE   @27A40h,A8,0
19050: 930e                      MOVE   A8,*A14+,1
19060: 93ae                      MOVE   A13,*A14+,1
19070: 0d5f 88c0 0000            CALLA  88C0h
190a0: c057                      JR     19620h
190b0: a3cf                      MOVE   A14,-*SP,1
190c0: 934e                      MOVE   A10,*A14+,1
190d0: 05a8 7a30 0002            MOVE   @27A30h,A8,0
19100: 930e                      MOVE   A8,*A14+,1
19110: 93ae                      MOVE   A13,*A14+,1
19120: 0d5f 88c0 0000            CALLA  88C0h
19150: c04c                      JR     19620h
19160: a3cf                      MOVE   A14,-*SP,1
19170: 934e                      MOVE   A10,*A14+,1
19180: 1888                      MOVK   4h,A8
19190: 930e                      MOVE   A8,*A14+,1
191a0: 93ae                      MOVE   A13,*A14+,1
191b0: 0d5f 88c0 0000            CALLA  88C0h
191e0: c043                      JR     19620h
191f0: a3cf                      MOVE   A14,-*SP,1
19200: 934e                      MOVE   A10,*A14+,1
19210: 1848                      MOVK   2h,A8
19220: 930e                      MOVE   A8,*A14+,1
19230: 93ae                      MOVE   A13,*A14+,1
19240: 0d5f 88c0 0000            CALLA  88C0h
19270: c03a                      JR     19620h
19280: a3cf                      MOVE   A14,-*SP,1
19290: 934e                      MOVE   A10,*A14+,1
192a0: 938e                      MOVE   A12,*A14+,1
192b0: 93ae                      MOVE   A13,*A14+,1
192c0: 0d5f 88c0 0000            CALLA  88C0h
192f0: c032                      JR     19620h
19300: a3cf                      MOVE   A14,-*SP,1
19310: 934e                      MOVE   A10,*A14+,1
19320: 05a8 d5b0 0002            MOVE   @2D5B0h,A8,0
19350: 930e                      MOVE   A8,*A14+,1
19360: 93ae                      MOVE   A13,*A14+,1
19370: 0d5f 88c0 0000            CALLA  88C0h
193a0: c027                      JR     19620h
193b0: a3cf                      MOVE   A14,-*SP,1
193c0: 934e                      MOVE   A10,*A14+,1
193d0: 09c8 0800                 MOVI   800h,A8
193f0: 930e                      MOVE   A8,*A14+,1
19400: 93ae                      MOVE   A13,*A14+,1
19410: 0d5f 88c0 0000            CALLA  88C0h
19440: c01d                      JR     19620h
19450: a3cf                      MOVE   A14,-*SP,1
19460: 934e                      MOVE   A10,*A14+,1
19470: 09c8 0400                 MOVI   400h,A8
19490: 930e                      MOVE   A8,*A14+,1
194a0: 93ae                      MOVE   A13,*A14+,1
194b0: 0d5f 88c0 0000            CALLA  88C0h
194e0: c013                      JR     19620h
194f0: a3cf                      MOVE   A14,-*SP,1
19500: 934e                      MOVE   A10,*A14+,1
19510: 09c8 0200                 MOVI   200h,A8
19530: 930e                      MOVE   A8,*A14+,1
19540: 93ae                      MOVE   A13,*A14+,1
19550: 0d5f 88c0 0000            CALLA  88C0h
19580: c009                      JR     19620h
19590: a3cf                      MOVE   A14,-*SP,1
195a0: 934e                      MOVE   A10,*A14+,1
195b0: 09c8 0100                 MOVI   100h,A8
195d0: 930e                      MOVE   A8,*A14+,1
195e0: 93ae                      MOVE   A13,*A14+,1
195f0: 0d5f 88c0 0000            CALLA  88C0h
19620: 4d88                      MOVE   A12,A8
19630: 102c                      INC    A12
19640: 260c                      SLL    10h,A12
19650: 2e0c                      SRL    10h,A12
19660: 09c8 002e                 MOVI   2Eh,A8
19680: 05e8 4668 0003            MOVB   A8,@34668h
196b0: 4d8a                      MOVE   A12,A10
196c0: 102c                      INC    A12
196d0: 260c                      SLL    10h,A12
196e0: 2e0c                      SRL    10h,A12
196f0: 246a                      SLL    3h,A10
19700: 0b2a 4660 0003            ADDI   34660h,A10
19730: 09c8 004f                 MOVI   4Fh,A8
19750: 8d0a                      MOVB   A8,*A10
19760: a3cf                      MOVE   A14,-*SP,1
19770: 188a                      MOVK   4h,A10
19780: 934e                      MOVE   A10,*A14+,1
19790: 246c                      SLL    3h,A12
197a0: 0b2c 4660 0003            ADDI   34660h,A12
197d0: 938e                      MOVE   A12,*A14+,1
197e0: 0550                      SETF   10h,0,0
197f0: 85ac                      MOVE   *A13,A12,0
19800: 938e                      MOVE   A12,*A14+,1
19810: 0d5f e060 0001            CALLA  1E060h
19840: a3cf                      MOVE   A14,-*SP,1
19850: 09e8 4668 0003            MOVI   34668h,A8
19880: 930e                      MOVE   A8,*A14+,1
19890: 0d5f 6440 0002            CALLA  26440h
198c0: 4d0c                      MOVE   A8,A12
198d0: 102c                      INC    A12
198e0: 0550                      SETF   10h,0,0
198f0: 052c                      ZEXT   A12,0
19900: 4d88                      MOVE   A12,A8
19910: 102c                      INC    A12
19920: 052c                      ZEXT   A12,0
19930: 2468                      SLL    3h,A8
19940: 0b28 4660 0003            ADDI   34660h,A8
19970: 19aa                      MOVK   Dh,A10
19980: 8d48                      MOVB   A10,*A8
19990: 246c                      SLL    3h,A12
199a0: 0b2c 4660 0003            ADDI   34660h,A12
199d0: 4508                      SUB    A8,A8
199e0: 8d0c                      MOVB   A8,*A12
199f0: 18ac                      MOVK   5h,A12
19a00: 05ec 4660 0003            MOVB   A12,@34660h
19a30: a3cf                      MOVE   A14,-*SP,1
19a40: 09e8 4668 0003            MOVI   34668h,A8
19a70: 930e                      MOVE   A8,*A14+,1
19a80: 0d5f 6440 0002            CALLA  26440h
19ab0: 10c8                      ADDK   6h,A8
19ac0: 0788 4620 0003            MOVE   A8,@34620h,1
19af0: 1aca                      MOVK   16h,A10
19b00: 078a 4640 0003            MOVE   A10,@34640h,1
19b30: a3cf                      MOVE   A14,-*SP,1
19b40: 09e8 4620 0003            MOVI   34620h,A8
19b70: 930e                      MOVE   A8,*A14+,1
19b80: 182c                      MOVK   1h,A12
19b90: 938e                      MOVE   A12,*A14+,1
19ba0: 0d5f 0000 0000            CALLA  0h
19bd0: b30d 0020                 MOVE   A8,*A13(20h),1
19bf0: 4d08                      MOVE   A8,A8
19c00: cb00 009c                 JRNE   1A5E0h
19c20: a3cf                      MOVE   A14,-*SP,1
19c30: 458c                      SUB    A12,A12
19c40: 938e                      MOVE   A12,*A14+,1
19c50: 09ec 9be0 0002            MOVI   29BE0h,A12
19c80: 938e                      MOVE   A12,*A14+,1
19c90: 934e                      MOVE   A10,*A14+,1
19ca0: 0d5f 0000 0000            CALLA  0h
19cd0: b30d 0020                 MOVE   A8,*A13(20h),1
19cf0: 4d08                      MOVE   A8,A8
19d00: cb00 008c                 JRNE   1A5E0h
19d20: a3cf                      MOVE   A14,-*SP,1
19d30: 4da8                      MOVE   A13,A8
19d40: 1008                      ADDK   20h,A8
19d50: 930e                      MOVE   A8,*A14+,1
19d60: 09e8 9c20 0002            MOVI   29C20h,A8
19d90: 930e                      MOVE   A8,*A14+,1
19da0: 0d5f d1a0 0001            CALLA  1D1A0h
19dd0: 19ea                      MOVK   Fh,A10
19de0: 5148                      AND    A10,A8
19df0: cb7e                      JRNE   1A5E0h
19e00: 0550                      SETF   10h,0,0
19e10: 85a8                      MOVE   *A13,A8,0
19e20: 0588 7a80 0002            MOVE   A8,@27A80h,0
19e50: 4cc6                      MOVE   A6,A6
19e60: ca32                      JREQ   1A190h
19e70: 1426                      DEC    A6
19e80: ca2c                      JREQ   1A150h
19e90: 1426                      DEC    A6
19ea0: ca26                      JREQ   1A110h
19eb0: 1426                      DEC    A6
19ec0: ca6f                      JREQ   1A5C0h
19ed0: 1426                      DEC    A6
19ee0: ca1b                      JREQ   1A0A0h
19ef0: 1426                      DEC    A6
19f00: ca15                      JREQ   1A060h
19f10: 1426                      DEC    A6
19f20: ca0f                      JREQ   1A020h
19f30: 1426                      DEC    A6
19f40: ca09                      JREQ   19FE0h
19f50: 0d86 0029                 DSJ    A6,1A200h
19f70: 85a6                      MOVE   *A13,A6,0
19f80: 05aa 7a30 0002            MOVE   @27A30h,A10,0
19fb0: 5146                      AND    A10,A6
19fc0: cb23                      JRNE   1A200h
19fd0: c048                      JR     1A460h
19fe0: 85a6                      MOVE   *A13,A6,0
19ff0: 1fa6                      BTST   2h,A6
1a000: cb1f                      JRNE   1A200h
1a010: c03e                      JR     1A400h
1a020: 85a6                      MOVE   *A13,A6,0
1a030: 1fc6                      BTST   1h,A6
1a040: cb1b                      JRNE   1A200h
1a050: c034                      JR     1A3A0h
1a060: 85a6                      MOVE   *A13,A6,0
1a070: 1fe6                      BTST   0h,A6
1a080: cb17                      JRNE   1A200h
1a090: c02a                      JR     1A340h
1a0a0: 85a6                      MOVE   *A13,A6,0
1a0b0: 05aa d5b0 0002            MOVE   @2D5B0h,A10,0
1a0e0: 5146                      AND    A10,A6
1a0f0: cb10                      JRNE   1A200h
1a100: c01d                      JR     1A2E0h
1a110: 85a6                      MOVE   *A13,A6,0
1a120: 1ea6                      BTST   Ah,A6
1a130: cb0c                      JRNE   1A200h
1a140: c013                      JR     1A280h
1a150: 85a6                      MOVE   *A13,A6,0
1a160: 1ec6                      BTST   9h,A6
1a170: cb08                      JRNE   1A200h
1a180: c009                      JR     1A220h
1a190: 85aa                      MOVE   *A13,A10,0
1a1a0: 1eea                      BTST   8h,A10
1a1b0: cb04                      JRNE   1A200h
1a1c0: 458c                      SUB    A12,A12
1a1d0: 078c 5240 0003            MOVE   A12,@35240h,1
1a200: 1828                      MOVK   1h,A8
1a210: c03d                      JR     1A5F0h
1a220: 454a                      SUB    A10,A10
1a230: 078a 5280 0003            MOVE   A10,@35280h,1
1a260: 1828                      MOVK   1h,A8
1a270: c037                      JR     1A5F0h
1a280: 454a                      SUB    A10,A10
1a290: 078a 4920 0003            MOVE   A10,@34920h,1
1a2c0: 1828                      MOVK   1h,A8
1a2d0: c031                      JR     1A5F0h
1a2e0: 44c6                      SUB    A6,A6
1a2f0: 0786 dc60 0002            MOVE   A6,@2DC60h,1
1a320: 1828                      MOVK   1h,A8
1a330: c02b                      JR     1A5F0h
1a340: 454a                      SUB    A10,A10
1a350: 078a 48e0 0003            MOVE   A10,@348E0h,1
1a380: 1828                      MOVK   1h,A8
1a390: c025                      JR     1A5F0h
1a3a0: 454a                      SUB    A10,A10
1a3b0: 078a 4900 0003            MOVE   A10,@34900h,1
1a3e0: 1828                      MOVK   1h,A8
1a3f0: c01f                      JR     1A5F0h
1a400: 454a                      SUB    A10,A10
1a410: 078a 4940 0003            MOVE   A10,@34940h,1
1a440: 1828                      MOVK   1h,A8
1a450: c019                      JR     1A5F0h
1a460: 44c6                      SUB    A6,A6
1a470: 0786 5240 0003            MOVE   A6,@35240h,1
1a4a0: 0786 5280 0003            MOVE   A6,@35280h,1
1a4d0: 0786 dc60 0002            MOVE   A6,@2DC60h,1
1a500: 0786 4920 0003            MOVE   A6,@34920h,1
1a530: 0786 48e0 0003            MOVE   A6,@348E0h,1
1a560: 0786 4900 0003            MOVE   A6,@34900h,1
1a590: 0786 4940 0003            MOVE   A6,@34940h,1
1a5c0: 1828                      MOVK   1h,A8
1a5d0: c001                      JR     1A5F0h
1a5e0: 4508                      SUB    A8,A8
1a5f0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
1a610: 09af 3440                 MMFM   SP,A6,A10,A12,A13
1a630: 0962                      RETS   2h

_send_an_eht_set_reset:
1a640: a38f                      MOVE   A12,-*SP,1
1a650: 09ec 4368 0003            MOVI   34368h,A12
1a680: 09c8 002e                 MOVI   2Eh,A8
1a6a0: 0568                      SETF   8h,1,0
1a6b0: 910c                      MOVE   A8,*A12+,0
1a6c0: 09c8 0052                 MOVI   52h,A8
1a6e0: 910c                      MOVE   A8,*A12+,0
1a6f0: 19a8                      MOVK   Dh,A8
1a700: 910c                      MOVE   A8,*A12+,0
1a710: 4508                      SUB    A8,A8
1a720: 8d0c                      MOVB   A8,*A12
1a730: 18ac                      MOVK   5h,A12
1a740: 05ec 4360 0003            MOVB   A12,@34360h
1a770: a3cf                      MOVE   A14,-*SP,1
1a780: 09e8 4368 0003            MOVI   34368h,A8
1a7b0: 930e                      MOVE   A8,*A14+,1
1a7c0: 0d5f 6440 0002            CALLA  26440h
1a7f0: 10c8                      ADDK   6h,A8
1a800: 0788 4320 0003            MOVE   A8,@34320h,1
1a830: 1aac                      MOVK   15h,A12
1a840: 078c 4340 0003            MOVE   A12,@34340h,1
1a870: a3cf                      MOVE   A14,-*SP,1
1a880: 09e8 4320 0003            MOVI   34320h,A8
1a8b0: 930e                      MOVE   A8,*A14+,1
1a8c0: 1828                      MOVK   1h,A8
1a8d0: 930e                      MOVE   A8,*A14+,1
1a8e0: 0d5f 0000 0000            CALLA  0h
1a910: 4f0e                      MOVE   A8,B14
1a920: cb4a                      JRNE   1ADD0h
1a930: a3cf                      MOVE   A14,-*SP,1
1a940: 4508                      SUB    A8,A8
1a950: 930e                      MOVE   A8,*A14+,1
1a960: 09e8 9920 0002            MOVI   29920h,A8
1a990: 930e                      MOVE   A8,*A14+,1
1a9a0: 938e                      MOVE   A12,*A14+,1
1a9b0: 0d5f 0000 0000            CALLA  0h
1a9e0: 4f0e                      MOVE   A8,B14
1a9f0: cb3d                      JRNE   1ADD0h
1aa00: 09ec 4368 0003            MOVI   34368h,A12
1aa30: 09c8 003f                 MOVI   3Fh,A8
1aa50: 0568                      SETF   8h,1,0
1aa60: 910c                      MOVE   A8,*A12+,0
1aa70: 1288                      ADDK   14h,A8
1aa80: 910c                      MOVE   A8,*A12+,0
1aa90: 19a8                      MOVK   Dh,A8
1aaa0: 910c                      MOVE   A8,*A12+,0
1aab0: 4508                      SUB    A8,A8
1aac0: 8d0c                      MOVB   A8,*A12
1aad0: 18ec                      MOVK   7h,A12
1aae0: 05ec 4360 0003            MOVB   A12,@34360h
1ab10: a3cf                      MOVE   A14,-*SP,1
1ab20: 09e8 4368 0003            MOVI   34368h,A8
1ab50: 930e                      MOVE   A8,*A14+,1
1ab60: 0d5f 6440 0002            CALLA  26440h
1ab90: 10c8                      ADDK   6h,A8
1aba0: 0788 4320 0003            MOVE   A8,@34320h,1
1abd0: 1aac                      MOVK   15h,A12
1abe0: 078c 4340 0003            MOVE   A12,@34340h,1
1ac10: a3cf                      MOVE   A14,-*SP,1
1ac20: 09e8 4320 0003            MOVI   34320h,A8
1ac50: 930e                      MOVE   A8,*A14+,1
1ac60: 1828                      MOVK   1h,A8
1ac70: 930e                      MOVE   A8,*A14+,1
1ac80: 0d5f 0000 0000            CALLA  0h
1acb0: 4f0e                      MOVE   A8,B14
1acc0: cb10                      JRNE   1ADD0h
1acd0: a3cf                      MOVE   A14,-*SP,1
1ace0: 4508                      SUB    A8,A8
1acf0: 930e                      MOVE   A8,*A14+,1
1ad00: 09e8 9920 0002            MOVI   29920h,A8
1ad30: 930e                      MOVE   A8,*A14+,1
1ad40: 938e                      MOVE   A12,*A14+,1
1ad50: 0d5f 0000 0000            CALLA  0h
1ad80: 4f0e                      MOVE   A8,B14
1ad90: cb03                      JRNE   1ADD0h
1ada0: 1828                      MOVK   1h,A8
1adb0: 97ec                      MOVE   *SP+,A12,1
1adc0: 0960                      RETS   
1add0: 4508                      SUB    A8,A8
1ade0: 97ec                      MOVE   *SP+,A12,1
1adf0: 0960                      RETS   

_request_eht_set_status:
1ae00: 098f 000c                 MMTM   SP,A12,A13
1ae20: 4dcd                      MOVE   A14,A13
1ae30: 100e                      ADDK   20h,A14
1ae40: 09ec 4368 0003            MOVI   34368h,A12
1ae70: 09c8 003f                 MOVI   3Fh,A8
1ae90: 0568                      SETF   8h,1,0
1aea0: 910c                      MOVE   A8,*A12+,0
1aeb0: 1288                      ADDK   14h,A8
1aec0: 910c                      MOVE   A8,*A12+,0
1aed0: 19a8                      MOVK   Dh,A8
1aee0: 910c                      MOVE   A8,*A12+,0
1aef0: 4508                      SUB    A8,A8
1af00: 8d0c                      MOVB   A8,*A12
1af10: 18ec                      MOVK   7h,A12
1af20: 05ec 4360 0003            MOVB   A12,@34360h
1af50: a3cf                      MOVE   A14,-*SP,1
1af60: 09e8 4368 0003            MOVI   34368h,A8
1af90: 930e                      MOVE   A8,*A14+,1
1afa0: 0d5f 6440 0002            CALLA  26440h
1afd0: 10c8                      ADDK   6h,A8
1afe0: 0788 4320 0003            MOVE   A8,@34320h,1
1b010: 1aac                      MOVK   15h,A12
1b020: 078c 4340 0003            MOVE   A12,@34340h,1
1b050: a3cf                      MOVE   A14,-*SP,1
1b060: 09e8 4320 0003            MOVI   34320h,A8
1b090: 930e                      MOVE   A8,*A14+,1
1b0a0: 1828                      MOVK   1h,A8
1b0b0: 930e                      MOVE   A8,*A14+,1
1b0c0: 0d5f 0000 0000            CALLA  0h
1b0f0: 830d                      MOVE   A8,*A13,1
1b100: 4d08                      MOVE   A8,A8
1b110: cb25                      JRNE   1B370h
1b120: a3cf                      MOVE   A14,-*SP,1
1b130: 458c                      SUB    A12,A12
1b140: 938e                      MOVE   A12,*A14+,1
1b150: 09ec 9920 0002            MOVI   29920h,A12
1b180: 938e                      MOVE   A12,*A14+,1
1b190: 1aac                      MOVK   15h,A12
1b1a0: 938e                      MOVE   A12,*A14+,1
1b1b0: 0d5f 0000 0000            CALLA  0h
1b1e0: 830d                      MOVE   A8,*A13,1
1b1f0: 4d08                      MOVE   A8,A8
1b200: cb16                      JRNE   1B370h
1b210: 0550                      SETF   10h,0,0
1b220: 05ac 7a70 0002            MOVE   @27A70h,A12,0
1b250: 0b4c ff7f                 CMPI   80h,A12
1b270: ca0f                      JREQ   1B370h
1b280: a3cf                      MOVE   A14,-*SP,1
1b290: 93ae                      MOVE   A13,*A14+,1
1b2a0: 09e8 9960 0002            MOVI   29960h,A8
1b2d0: 930e                      MOVE   A8,*A14+,1
1b2e0: 0d5f d1a0 0001            CALLA  1D1A0h
1b310: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1b330: 0550                      SETF   10h,0,0
1b340: 89ac                      MOVE   *A13,*A12,0
1b350: 1828                      MOVK   1h,A8
1b360: c001                      JR     1B380h
1b370: 4508                      SUB    A8,A8
1b380: b7ee 0060                 MOVE   *SP(60h),A14,1
1b3a0: 09af 3000                 MMFM   SP,A12,A13
1b3c0: 0962                      RETS   2h

_switch_supplies_back_on:
1b3d0: 1948                      MOVK   Ah,A8
1b3e0: 0788 4960 0003            MOVE   A8,@34960h,1
1b410: 1aa8                      MOVK   15h,A8
1b420: 0788 4980 0003            MOVE   A8,@34980h,1
1b450: 1948                      MOVK   Ah,A8
1b460: 0788 49a0 0003            MOVE   A8,@349A0h,1
1b490: 09c8 0064                 MOVI   64h,A8
1b4b0: 0570                      SETF   10h,1,0
1b4c0: 0588 49c0 0003            MOVE   A8,@349C0h,0
1b4f0: a3cf                      MOVE   A14,-*SP,1
1b500: 09e8 4960 0003            MOVI   34960h,A8
1b530: 930e                      MOVE   A8,*A14+,1
1b540: 1a28                      MOVK   11h,A8
1b550: 930e                      MOVE   A8,*A14+,1
1b560: 0d5f 0000 0000            CALLA  0h
1b590: 0960                      RETS   

_restore_eht_settings:
1b5a0: a3af                      MOVE   A13,-*SP,1
1b5b0: 4dcd                      MOVE   A14,A13
1b5c0: 1948                      MOVK   Ah,A8
1b5d0: 0788 4960 0003            MOVE   A8,@34960h,1
1b600: 1aa8                      MOVK   15h,A8
1b610: 0788 4980 0003            MOVE   A8,@34980h,1
1b640: 4508                      SUB    A8,A8
1b650: 0788 49a0 0003            MOVE   A8,@349A0h,1
1b680: 0570                      SETF   10h,1,0
1b690: 05c0 79e0 0002 49c0 0003  MOVE   @279E0h,@349C0h,0
1b6e0: a3cf                      MOVE   A14,-*SP,1
1b6f0: 09e8 4960 0003            MOVI   34960h,A8
1b720: 930e                      MOVE   A8,*A14+,1
1b730: 1a28                      MOVK   11h,A8
1b740: 930e                      MOVE   A8,*A14+,1
1b750: 0d5f 0000 0000            CALLA  0h
1b780: 1948                      MOVK   Ah,A8
1b790: 0788 4960 0003            MOVE   A8,@34960h,1
1b7c0: 1aa8                      MOVK   15h,A8
1b7d0: 0788 4980 0003            MOVE   A8,@34980h,1
1b800: 1828                      MOVK   1h,A8
1b810: 0788 49a0 0003            MOVE   A8,@349A0h,1
1b840: 0570                      SETF   10h,1,0
1b850: 05c0 79f0 0002 49c0 0003  MOVE   @279F0h,@349C0h,0
1b8a0: a3cf                      MOVE   A14,-*SP,1
1b8b0: 09e8 4960 0003            MOVI   34960h,A8
1b8e0: 930e                      MOVE   A8,*A14+,1
1b8f0: 1a28                      MOVK   11h,A8
1b900: 930e                      MOVE   A8,*A14+,1
1b910: 0d5f 0000 0000            CALLA  0h
1b940: 1988                      MOVK   Ch,A8
1b950: 0788 4960 0003            MOVE   A8,@34960h,1
1b980: 1aa8                      MOVK   15h,A8
1b990: 0788 4980 0003            MOVE   A8,@34980h,1
1b9c0: 1848                      MOVK   2h,A8
1b9d0: 0788 49a0 0003            MOVE   A8,@349A0h,1
1ba00: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1ba20: 0788 49c0 0003            MOVE   A8,@349C0h,1
1ba50: a3cf                      MOVE   A14,-*SP,1
1ba60: 09e8 4960 0003            MOVI   34960h,A8
1ba90: 930e                      MOVE   A8,*A14+,1
1baa0: 1a28                      MOVK   11h,A8
1bab0: 930e                      MOVE   A8,*A14+,1
1bac0: 0d5f 0000 0000            CALLA  0h
1baf0: 1948                      MOVK   Ah,A8
1bb00: 0788 4960 0003            MOVE   A8,@34960h,1
1bb30: 1aa8                      MOVK   15h,A8
1bb40: 0788 4980 0003            MOVE   A8,@34980h,1
1bb70: 18c8                      MOVK   6h,A8
1bb80: 0788 49a0 0003            MOVE   A8,@349A0h,1
1bbb0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1bbd0: 0d5f 04c0 0002            CALLA  204C0h
1bc00: 0570                      SETF   10h,1,0
1bc10: 0508                      SEXT   A8,0
1bc20: 0588 49c0 0003            MOVE   A8,@349C0h,0
1bc50: a3cf                      MOVE   A14,-*SP,1
1bc60: 09e8 4960 0003            MOVI   34960h,A8
1bc90: 930e                      MOVE   A8,*A14+,1
1bca0: 1a28                      MOVK   11h,A8
1bcb0: 930e                      MOVE   A8,*A14+,1
1bcc0: 0d5f 0000 0000            CALLA  0h
1bcf0: 19c8                      MOVK   Eh,A8
1bd00: 0788 4960 0003            MOVE   A8,@34960h,1
1bd30: 1aa8                      MOVK   15h,A8
1bd40: 0788 4980 0003            MOVE   A8,@34980h,1
1bd70: 18e8                      MOVK   7h,A8
1bd80: 0788 49a0 0003            MOVE   A8,@349A0h,1
1bdb0: 1828                      MOVK   1h,A8
1bdc0: 0570                      SETF   10h,1,0
1bdd0: 0588 49e0 0003            MOVE   A8,@349E0h,0
1be00: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
1be20: 0788 49c0 0003            MOVE   A8,@349C0h,1
1be50: a3cf                      MOVE   A14,-*SP,1
1be60: 09e8 4960 0003            MOVI   34960h,A8
1be90: 930e                      MOVE   A8,*A14+,1
1bea0: 1a28                      MOVK   11h,A8
1beb0: 930e                      MOVE   A8,*A14+,1
1bec0: 0d5f 0000 0000            CALLA  0h
1bef0: 0548                      SETF   8h,0,0
1bf00: 05a8 79d0 0002            MOVE   @279D0h,A8,0
1bf30: 0b48 ffa7                 CMPI   58h,A8
1bf50: ca28                      JREQ   1C1E0h
1bf60: 1848                      MOVK   2h,A8
1bf70: 0570                      SETF   10h,1,0
1bf80: 0588 49e0 0003            MOVE   A8,@349E0h,0
1bfb0: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
1bfd0: 0788 49c0 0003            MOVE   A8,@349C0h,1
1c000: a3cf                      MOVE   A14,-*SP,1
1c010: 09e8 4960 0003            MOVI   34960h,A8
1c040: 930e                      MOVE   A8,*A14+,1
1c050: 1a28                      MOVK   11h,A8
1c060: 930e                      MOVE   A8,*A14+,1
1c070: 0d5f 0000 0000            CALLA  0h
1c0a0: 1868                      MOVK   3h,A8
1c0b0: 0570                      SETF   10h,1,0
1c0c0: 0588 49e0 0003            MOVE   A8,@349E0h,0
1c0f0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
1c110: 0788 49c0 0003            MOVE   A8,@349C0h,1
1c140: a3cf                      MOVE   A14,-*SP,1
1c150: 09e8 4960 0003            MOVI   34960h,A8
1c180: 930e                      MOVE   A8,*A14+,1
1c190: 1a28                      MOVK   11h,A8
1c1a0: 930e                      MOVE   A8,*A14+,1
1c1b0: 0d5f 0000 0000            CALLA  0h
1c1e0: b7ee 0040                 MOVE   *SP(40h),A14,1
1c200: 97ed                      MOVE   *SP+,A13,1
1c210: 0962                      RETS   2h

_init_globals:
1c220: 1868                      MOVK   3h,A8
1c230: 0570                      SETF   10h,1,0
1c240: 0588 7a00 0002            MOVE   A8,@27A00h,0
1c270: 0588 7a10 0002            MOVE   A8,@27A10h,0
1c2a0: 4508                      SUB    A8,A8
1c2b0: 0788 5240 0003            MOVE   A8,@35240h,1
1c2e0: 0550                      SETF   10h,0,0
1c2f0: 05a8 7a50 0002            MOVE   @27A50h,A8,0
1c320: 0b48 ffaf                 CMPI   50h,A8
1c340: ca16                      JREQ   1C4B0h
1c350: 4508                      SUB    A8,A8
1c360: 0788 5280 0003            MOVE   A8,@35280h,1
1c390: 0788 dc60 0002            MOVE   A8,@2DC60h,1
1c3c0: 0788 4920 0003            MOVE   A8,@34920h,1
1c3f0: 09e8 0000 42c8            MOVI   42C80000h,A8
1c420: 0788 48e0 0003            MOVE   A8,@348E0h,1
1c450: 0788 4900 0003            MOVE   A8,@34900h,1
1c480: 0788 4940 0003            MOVE   A8,@34940h,1
1c4b0: 0960                      RETS   

_eht_fault_monitor:
1c4c0: 098f ea7c                 MMTM   SP,A0-A2,A4,A6,A9-A13
1c4e0: 4dcd                      MOVE   A14,A13
1c4f0: 100e                      ADDK   20h,A14
1c500: 182a                      MOVK   1h,A10
1c510: 1866                      MOVK   3h,A6
1c520: 09c8 0040                 MOVI   40h,A8
1c540: 0550                      SETF   10h,0,0
1c550: 810d                      MOVE   A8,*A13,0
1c560: 07a9 7120 0002            MOVE   @27120h,A9,1
1c590: 07a0 7120 0002            MOVE   @27120h,A0,1
1c5c0: 07a2 7120 0002            MOVE   @27120h,A2,1
1c5f0: 07a4 7140 0002            MOVE   @27140h,A4,1
1c620: 07a1 7140 0002            MOVE   @27140h,A1,1
1c650: 07ab 7140 0002            MOVE   @27140h,A11,1
1c680: 458c                      SUB    A12,A12
1c690: a3cf                      MOVE   A14,-*SP,1
1c6a0: 09c8 06e0                 MOVI   6E0h,A8
1c6c0: 930e                      MOVE   A8,*A14+,1
1c6d0: 09e8 9ea0 0002            MOVI   29EA0h,A8
1c700: 930e                      MOVE   A8,*A14+,1
1c710: 09e8 5245 5146            MOVI   51465245h,A8
1c740: 930e                      MOVE   A8,*A14+,1
1c750: 1aa8                      MOVK   15h,A8
1c760: 930e                      MOVE   A8,*A14+,1
1c770: 0d5f 0000 0000            CALLA  0h
1c7a0: 0d5f a640 0001            CALLA  1A640h
1c7d0: 0d5f c220 0001            CALLA  1C220h
1c800: a3cf                      MOVE   A14,-*SP,1
1c810: 09c8 010e                 MOVI   10Eh,A8
1c830: 930e                      MOVE   A8,*A14+,1
1c840: 09c8 0080                 MOVI   80h,A8
1c860: 930e                      MOVE   A8,*A14+,1
1c870: 0d5f 0000 0000            CALLA  0h
1c8a0: 4f0c                      MOVE   A8,B12
1c8b0: 183e                      MOVK   1h,B14
1c8c0: 163c                      SUBK   11h,B12
1c8d0: cb0c                      JRNE   1C9A0h
1c8e0: 0570                      SETF   10h,1,0
1c8f0: 05a8 7a10 0002            MOVE   @27A10h,A8,0
1c920: 1448                      SUBK   2h,A8
1c930: ca05                      JREQ   1C990h
1c940: 05a8 7a00 0002            MOVE   @27A00h,A8,0
1c970: 1448                      SUBK   2h,A8
1c980: cb01                      JRNE   1C9A0h
1c990: 45de                      SUB    B14,B14
1c9a0: 0550                      SETF   10h,0,0
1c9b0: 05a8 7a50 0002            MOVE   @27A50h,A8,0
1c9e0: 0b48 ff7f                 CMPI   80h,A8
1ca00: cb01                      JRNE   1CA20h
1ca10: 183e                      MOVK   1h,B14
1ca20: 05a8 7a60 0002            MOVE   @27A60h,A8,0
1ca50: cada                      JREQ   1C800h
1ca60: 4dde                      MOVE   B14,B14
1ca70: cad8                      JREQ   1C800h
1ca80: a3cf                      MOVE   A14,-*SP,1
1ca90: 93ae                      MOVE   A13,*A14+,1
1caa0: 0d5f ae00 0001            CALLA  1AE00h
1cad0: 0550                      SETF   10h,0,0
1cae0: 85a8                      MOVE   *A13,A8,0
1caf0: 0b88 ffa0 ffff            ANDI   5Fh,A8
1cb20: 0588 7a50 0002            MOVE   A8,@27A50h,0
1cb50: 85a8                      MOVE   *A13,A8,0
1cb60: ca18                      JREQ   1CCF0h
1cb70: 0b88 ffa0 ffff            ANDI   5Fh,A8
1cba0: 0b48 ffbf                 CMPI   40h,A8
1cbc0: ca12                      JREQ   1CCF0h
1cbd0: 85a8                      MOVE   *A13,A8,0
1cbe0: 0b48 ffaf                 CMPI   50h,A8
1cc00: ca0c                      JREQ   1CCD0h
1cc10: 102c                      INC    A12
1cc20: 050c                      SEXT   A12,0
1cc30: 348c                      CMPK   4h,A12
1cc40: c705                      JRGT   1CCA0h
1cc50: 0b48 ff7f                 CMPI   80h,A8
1cc70: cb02                      JRNE   1CCA0h
1cc80: 183e                      MOVK   1h,B14
1cc90: c007                      JR     1CD10h
1cca0: 45de                      SUB    B14,B14
1ccb0: 458c                      SUB    A12,A12
1ccc0: c004                      JR     1CD10h
1ccd0: 185e                      MOVK   2h,B14
1cce0: c002                      JR     1CD10h
1ccf0: 183e                      MOVK   1h,B14
1cd00: 458c                      SUB    A12,A12
1cd10: 4fd8                      MOVE   B14,A8
1cd20: ca26                      JREQ   1CF90h
1cd30: 1448                      SUBK   2h,A8
1cd40: ca1a                      JREQ   1CEF0h
1cd50: 342a                      CMPK   1h,A10
1cd60: cb02                      JRNE   1CD90h
1cd70: 3426                      CMPK   1h,A6
1cd80: ca38                      JREQ   1D110h
1cd90: 4d48                      MOVE   A10,A8
1cda0: cb0d                      JRNE   1CE80h
1cdb0: 0d5f b3d0 0001            CALLA  1B3D0h
1cde0: a3cf                      MOVE   A14,-*SP,1
1cdf0: 936e                      MOVE   A11,*A14+,1
1ce00: 922e                      MOVE   A1,*A14+,1
1ce10: 928e                      MOVE   A4,*A14+,1
1ce20: 924e                      MOVE   A2,*A14+,1
1ce30: 920e                      MOVE   A0,*A14+,1
1ce40: 0d5f b5a0 0001            CALLA  1B5A0h
1ce70: 182a                      MOVK   1h,A10
1ce80: 3446                      CMPK   2h,A6
1ce90: cb27                      JRNE   1D110h
1cea0: 0789 5240 0003            MOVE   A9,@35240h,1
1ced0: 1866                      MOVK   3h,A6
1cee0: c022                      JR     1D110h
1cef0: 3466                      CMPK   3h,A6
1cf00: cb20                      JRNE   1D110h
1cf10: 07a9 5240 0003            MOVE   @35240h,A9,1
1cf40: 0d5f c220 0001            CALLA  1C220h
1cf70: 1846                      MOVK   2h,A6
1cf80: c018                      JR     1D110h
1cf90: 0d5f a640 0001            CALLA  1A640h
1cfc0: 342a                      CMPK   1h,A10
1cfd0: cb13                      JRNE   1D110h
1cfe0: 07a0 dc60 0002            MOVE   @2DC60h,A0,1
1d010: 07a2 4920 0003            MOVE   @34920h,A2,1
1d040: 07a4 48e0 0003            MOVE   @348E0h,A4,1
1d070: 07a1 4900 0003            MOVE   @34900h,A1,1
1d0a0: 07ab 4940 0003            MOVE   @34940h,A11,1
1d0d0: 0d5f c220 0001            CALLA  1C220h
1d100: 454a                      SUB    A10,A10
1d110: 4508                      SUB    A8,A8
1d120: 0550                      SETF   10h,0,0
1d130: 0588 7a60 0002            MOVE   A8,@27A60h,0
1d160: c000 ff68                 JR     1C800h

_read_onoff_status:
1d180: 0960                      RETS   

_request_eht_set_values:
1d190: 0960                      RETS   

_interpret_cmd_response:
1d1a0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
1d1c0: 4dcd                      MOVE   A14,A13
1d1d0: 0b0e 0500                 ADDI   500h,A14
1d1f0: b7a4 ffc0                 MOVE   *A13(FFC0h),A4,1
1d210: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1d230: 4508                      SUB    A8,A8
1d240: 8d0d                      MOVB   A8,*A13
1d250: ad0d 0280                 MOVB   A8,*A13(280h)
1d270: 4daa                      MOVE   A13,A10
1d280: a3cf                      MOVE   A14,-*SP,1
1d290: 938e                      MOVE   A12,*A14+,1
1d2a0: 0d5f 6440 0002            CALLA  26440h
1d2d0: 4d06                      MOVE   A8,A6
1d2e0: a3cf                      MOVE   A14,-*SP,1
1d2f0: 938e                      MOVE   A12,*A14+,1
1d300: 4da8                      MOVE   A13,A8
1d310: 0b08 0280                 ADDI   280h,A8
1d330: 930e                      MOVE   A8,*A14+,1
1d340: 0d5f 6320 0002            CALLA  26320h
1d370: 458c                      SUB    A12,A12
1d380: 48cc                      CMP    A6,A12
1d390: c518                      JRGE   1D520h
1d3a0: 4d88                      MOVE   A12,A8
1d3b0: 2468                      SLL    3h,A8
1d3c0: 41a8                      ADD    A13,A8
1d3d0: af08 0280                 MOVB   *A8(280h),A8
1d3f0: 0be8 ffcf                 SUBI   30h,A8
1d410: 36c8                      CMPK   16h,A8
1d420: c30c                      JRHI   1D4F0h
1d430: 24a8                      SLL    5h,A8
1d440: 0b28 7160 0002            ADDI   27160h,A8
1d470: 8708                      MOVE   *A8,A8,1
1d480: 0168                      JUMP   A8
1d490: 4d88                      MOVE   A12,A8
1d4a0: 2468                      SLL    3h,A8
1d4b0: 41a8                      ADD    A13,A8
1d4c0: 0568                      SETF   8h,1,0
1d4d0: d10a 0280                 MOVE   *A8(280h),*A10+,0
1d4f0: 102c                      INC    A12
1d500: 48cc                      CMP    A6,A12
1d510: c4e8                      JRLT   1D3A0h
1d520: 458c                      SUB    A12,A12
1d530: 8d8a                      MOVB   A12,*A10
1d540: a3cf                      MOVE   A14,-*SP,1
1d550: 93ae                      MOVE   A13,*A14+,1
1d560: 0d5f 6440 0002            CALLA  26440h
1d590: 1448                      SUBK   2h,A8
1d5a0: c302                      JRHI   1D5D0h
1d5b0: 8384                      MOVE   A12,*A4,1
1d5c0: c012                      JR     1D6F0h
1d5d0: a3cf                      MOVE   A14,-*SP,1
1d5e0: 4daa                      MOVE   A13,A10
1d5f0: 120a                      ADDK   10h,A10
1d600: 934e                      MOVE   A10,*A14+,1
1d610: 4da6                      MOVE   A13,A6
1d620: 0b06 0280                 ADDI   280h,A6
1d640: 92ce                      MOVE   A6,*A14+,1
1d650: 0d5f 6320 0002            CALLA  26320h
1d680: 8d8a                      MOVB   A12,*A10
1d690: a3cf                      MOVE   A14,-*SP,1
1d6a0: 92ce                      MOVE   A6,*A14+,1
1d6b0: 0d5f de30 0001            CALLA  1DE30h
1d6e0: 8304                      MOVE   A8,*A4,1
1d6f0: a3cf                      MOVE   A14,-*SP,1
1d700: 93ae                      MOVE   A13,*A14+,1
1d710: 0d5f de30 0001            CALLA  1DE30h
1d740: 0570                      SETF   10h,1,0
1d750: 0508                      SEXT   A8,0
1d760: b7ee 00c0                 MOVE   *SP(C0h),A14,1
1d780: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
1d7a0: 0962                      RETS   2h

_interpret_hwid_response:
1d7b0: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
1d7d0: 4dcd                      MOVE   A14,A13
1d7e0: 0b0e 0500                 ADDI   500h,A14
1d800: b7a2 ffc0                 MOVE   *A13(FFC0h),A2,1
1d820: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1d840: 4508                      SUB    A8,A8
1d850: 8d0d                      MOVB   A8,*A13
1d860: ad0d 0280                 MOVB   A8,*A13(280h)
1d880: 4daa                      MOVE   A13,A10
1d890: a3cf                      MOVE   A14,-*SP,1
1d8a0: 938e                      MOVE   A12,*A14+,1
1d8b0: 0d5f 6440 0002            CALLA  26440h
1d8e0: 4d04                      MOVE   A8,A4
1d8f0: 44c6                      SUB    A6,A6
1d900: a3cf                      MOVE   A14,-*SP,1
1d910: 938e                      MOVE   A12,*A14+,1
1d920: 4da8                      MOVE   A13,A8
1d930: 0b08 0280                 ADDI   280h,A8
1d950: 930e                      MOVE   A8,*A14+,1
1d960: 0d5f 6320 0002            CALLA  26320h
1d990: 4ccc                      MOVE   A6,A12
1d9a0: 4886                      CMP    A4,A6
1d9b0: c52c                      JRGE   1DC80h
1d9c0: 4d88                      MOVE   A12,A8
1d9d0: 2468                      SLL    3h,A8
1d9e0: 41a8                      ADD    A13,A8
1d9f0: af08 0280                 MOVB   *A8(280h),A8
1da10: 0b48 ffbe                 CMPI   41h,A8
1da30: c409                      JRLT   1DAD0h
1da40: 4d88                      MOVE   A12,A8
1da50: 2468                      SLL    3h,A8
1da60: 41a8                      ADD    A13,A8
1da70: af08 0280                 MOVB   *A8(280h),A8
1da90: 0b48 ffa7                 CMPI   58h,A8
1dab0: c701                      JRGT   1DAD0h
1dac0: 1826                      MOVK   1h,A6
1dad0: 4cc8                      MOVE   A6,A8
1dae0: ca16                      JREQ   1DC50h
1daf0: 4d88                      MOVE   A12,A8
1db00: 2468                      SLL    3h,A8
1db10: 41a8                      ADD    A13,A8
1db20: af08 0280                 MOVB   *A8(280h),A8
1db40: 0be8 ffcf                 SUBI   30h,A8
1db60: 0b48 ffd7                 CMPI   28h,A8
1db80: c30c                      JRHI   1DC50h
1db90: 24a8                      SLL    5h,A8
1dba0: 0b28 7440 0002            ADDI   27440h,A8
1dbd0: 8708                      MOVE   *A8,A8,1
1dbe0: 0168                      JUMP   A8
1dbf0: 4d88                      MOVE   A12,A8
1dc00: 2468                      SLL    3h,A8
1dc10: 41a8                      ADD    A13,A8
1dc20: 0568                      SETF   8h,1,0
1dc30: d10a 0280                 MOVE   *A8(280h),*A10+,0
1dc50: 102c                      INC    A12
1dc60: 488c                      CMP    A4,A12
1dc70: c4d4                      JRLT   1D9C0h
1dc80: 458c                      SUB    A12,A12
1dc90: 8d8a                      MOVB   A12,*A10
1dca0: a3cf                      MOVE   A14,-*SP,1
1dcb0: 93ae                      MOVE   A13,*A14+,1
1dcc0: 0d5f 6440 0002            CALLA  26440h
1dcf0: 1428                      DEC    A8
1dd00: c202                      JRLS   1DD30h
1dd10: 8faa                      MOVB   *A13,A10
1dd20: c001                      JR     1DD40h
1dd30: 4d8a                      MOVE   A12,A10
1dd40: 8d42                      MOVB   A10,*A2
1dd50: a3cf                      MOVE   A14,-*SP,1
1dd60: 4daa                      MOVE   A13,A10
1dd70: 110a                      ADDK   8h,A10
1dd80: 934e                      MOVE   A10,*A14+,1
1dd90: 0d5f de30 0001            CALLA  1DE30h
1ddc0: 0570                      SETF   10h,1,0
1ddd0: 0508                      SEXT   A8,0
1dde0: b7ee 00e0                 MOVE   *SP(E0h),A14,1
1de00: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
1de20: 0962                      RETS   2h

_hextol:
1de30: 098f 400c                 MMTM   SP,A1,A12,A13
1de50: 4dcd                      MOVE   A14,A13
1de60: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1de80: 4421                      SUB    A1,A1
1de90: 8f88                      MOVB   *A12,A8
1dea0: ca15                      JREQ   1E000h
1deb0: 2481                      SLL    4h,A1
1dec0: 8f88                      MOVB   *A12,A8
1ded0: 0b48 ffcf                 CMPI   30h,A8
1def0: c404                      JRLT   1DF40h
1df00: 8f88                      MOVB   *A12,A8
1df10: 0b48 ffc6                 CMPI   39h,A8
1df30: c605                      JRLE   1DF90h
1df40: 8f88                      MOVB   *A12,A8
1df50: 4101                      ADD    A8,A1
1df60: 0be1 ffc8                 SUBI   37h,A1
1df80: c004                      JR     1DFD0h
1df90: 8f88                      MOVB   *A12,A8
1dfa0: 4101                      ADD    A8,A1
1dfb0: 0be1 ffcf                 SUBI   30h,A1
1dfd0: 110c                      ADDK   8h,A12
1dfe0: 8f88                      MOVB   *A12,A8
1dff0: cbeb                      JRNE   1DEB0h
1e000: 4c28                      MOVE   A1,A8
1e010: b7ee 0080                 MOVE   *SP(80h),A14,1
1e030: 09af 3002                 MMFM   SP,A1,A12,A13
1e050: 0962                      RETS   2h

_ltohex:
1e060: 098f 6a2c                 MMTM   SP,A1,A2,A4,A6,A10,A12,A13
1e080: 4dcd                      MOVE   A14,A13
1e090: 0b0e 0280                 ADDI   280h,A14
1e0b0: b7a2 ffc0                 MOVE   *A13(FFC0h),A2,1
1e0d0: b7a4 ffe0                 MOVE   *A13(FFE0h),A4,1
1e0f0: 458c                      SUB    A12,A12
1e100: 4c81                      MOVE   A4,A1
1e110: 8d8d                      MOVB   A12,*A13
1e120: 4daa                      MOVE   A13,A10
1e130: 4c21                      MOVE   A1,A1
1e140: ca05                      JREQ   1E1A0h
1e150: 102c                      INC    A12
1e160: 260c                      SLL    10h,A12
1e170: 2a0c                      SRA    10h,A12
1e180: 2b81                      SRA    4h,A1
1e190: cbfb                      JRNE   1E150h
1e1a0: 44c6                      SUB    A6,A6
1e1b0: 4d81                      MOVE   A12,A1
1e1c0: c622                      JRLE   1E3F0h
1e1d0: 4d88                      MOVE   A12,A8
1e1e0: 44c8                      SUB    A6,A8
1e1f0: 1428                      DEC    A8
1e200: 2448                      SLL    2h,A8
1e210: 03a8                      NEG    A8
1e220: 4c81                      MOVE   A4,A1
1e230: 6501                      SRA    A8,A1
1e240: 8c2a                      MOVB   A1,*A10
1e250: 8f48                      MOVB   *A10,A8
1e260: c403                      JRLT   1E2A0h
1e270: 8f48                      MOVB   *A10,A8
1e280: 1528                      SUBK   9h,A8
1e290: c603                      JRLE   1E2D0h
1e2a0: 09c8 0037                 MOVI   37h,A8
1e2c0: c002                      JR     1E2F0h
1e2d0: 09c8 0030                 MOVI   30h,A8
1e2f0: 8f41                      MOVB   *A10,A1
1e300: 4101                      ADD    A8,A1
1e310: 8c2a                      MOVB   A1,*A10
1e320: 4d88                      MOVE   A12,A8
1e330: 44c8                      SUB    A6,A8
1e340: 1428                      DEC    A8
1e350: 2448                      SLL    2h,A8
1e360: 1821                      MOVK   1h,A1
1e370: 6301                      SLL    A8,A1
1e380: 6c24                      MODS   A1,A4
1e390: 110a                      ADDK   8h,A10
1e3a0: 1026                      INC    A6
1e3b0: 2606                      SLL    10h,A6
1e3c0: 2a06                      SRA    10h,A6
1e3d0: 4986                      CMP    A12,A6
1e3e0: c4de                      JRLT   1E1D0h
1e3f0: 458c                      SUB    A12,A12
1e400: 8d8a                      MOVB   A12,*A10
1e410: 0570                      SETF   10h,1,0
1e420: b5a6 ffa0                 MOVE   *A13(FFA0h),A6,0
1e440: a3cf                      MOVE   A14,-*SP,1
1e450: 93ae                      MOVE   A13,*A14+,1
1e460: 0d5f 6440 0002            CALLA  26440h
1e490: 4506                      SUB    A8,A6
1e4a0: 0570                      SETF   10h,1,0
1e4b0: 0506                      SEXT   A6,0
1e4c0: 4cc1                      MOVE   A6,A1
1e4d0: c609                      JRLE   1E570h
1e4e0: 0568                      SETF   8h,1,0
1e4f0: 09ca 0030                 MOVI   30h,A10
1e510: 9142                      MOVE   A10,*A2+,0
1e520: 102c                      INC    A12
1e530: 260c                      SLL    10h,A12
1e540: 2a0c                      SRA    10h,A12
1e550: 48cc                      CMP    A6,A12
1e560: c4f8                      JRLT   1E4F0h
1e570: 458c                      SUB    A12,A12
1e580: 8d82                      MOVB   A12,*A2
1e590: a3cf                      MOVE   A14,-*SP,1
1e5a0: 93ae                      MOVE   A13,*A14+,1
1e5b0: 924e                      MOVE   A2,*A14+,1
1e5c0: 0d5f 6320 0002            CALLA  26320h
1e5f0: b7ee 0100                 MOVE   *SP(100h),A14,1
1e610: 09af 3456                 MMFM   SP,A1,A2,A4,A6,A10,A12,A13
1e630: 0962                      RETS   2h

_calibrate_fil:
1e640: 098f 000c                 MMTM   SP,A12,A13
1e660: 4dcd                      MOVE   A14,A13
1e670: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
1e690: d60e 7ac0 0002            MOVE   @27AC0h,*A14+,1
1e6c0: 0d5f 4120 0002            CALLA  24120h
1e6f0: 09e8 cccd 400c            MOVI   400CCCCDh,A8
1e720: 930e                      MOVE   A8,*A14+,1
1e730: 0d5f 59a0 0002            CALLA  259A0h
1e760: d60e 7ae0 0002            MOVE   @27AE0h,*A14+,1
1e790: d60e 7ac0 0002            MOVE   @27AC0h,*A14+,1
1e7c0: 0d5f 4120 0002            CALLA  24120h
1e7f0: 0d5f 4e00 0002            CALLA  24E00h
1e820: 09e8 0000 3f80            MOVI   3F800000h,A8
1e850: 930e                      MOVE   A8,*A14+,1
1e860: 0d5f 4240 0002            CALLA  24240h
1e890: a7cc                      MOVE   -*A14,A12,1
1e8a0: 938e                      MOVE   A12,*A14+,1
1e8b0: 4508                      SUB    A8,A8
1e8c0: 930e                      MOVE   A8,*A14+,1
1e8d0: 0d5f 5670 0002            CALLA  25670h
1e900: ca02                      JREQ   1E930h
1e910: 938e                      MOVE   A12,*A14+,1
1e920: c003                      JR     1E960h
1e930: d60e 7960 0002            MOVE   @27960h,*A14+,1
1e960: b7ed 0060                 MOVE   *SP(60h),A13,1
1e980: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
1e9b0: b7ee 0060                 MOVE   *SP(60h),A14,1
1e9d0: 09af 3000                 MMFM   SP,A12,A13
1e9f0: 0962                      RETS   2h

_add_string_terminator:
1ea00: 098f 022c                 MMTM   SP,A6,A10,A12,A13
1ea20: 4dcd                      MOVE   A14,A13
1ea30: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
1ea50: 458c                      SUB    A12,A12
1ea60: 09c6 004f                 MOVI   4Fh,A6
1ea80: 48cc                      CMP    A6,A12
1ea90: c404                      JRLT   1EAE0h
1eaa0: c007                      JR     1EB20h
1eab0: 102c                      INC    A12
1eac0: 48cc                      CMP    A6,A12
1ead0: c504                      JRGE   1EB20h
1eae0: 0568                      SETF   8h,1,0
1eaf0: 9548                      MOVE   *A10+,A8,0
1eb00: 1548                      SUBK   Ah,A8
1eb10: cbf9                      JRNE   1EAB0h
1eb20: 44c6                      SUB    A6,A6
1eb30: 8cca                      MOVB   A6,*A10
1eb40: 4d88                      MOVE   A12,A8
1eb50: 1028                      INC    A8
1eb60: b7ee 00a0                 MOVE   *SP(A0h),A14,1
1eb80: 09af 3440                 MMFM   SP,A6,A10,A12,A13
1eba0: 0962                      RETS   2h

_InitEHTUART:
1ebb0: 098f c000                 MMTM   SP,A0,A1
1ebd0: 09e0 0000 6030            MOVI   60300000h,A0
1ec00: 09c1 0080                 MOVI   80h,A1
1ec20: ac20 0060                 MOVB   A1,*A0(60h)
1ec40: 0080                      MWAIT  
1ec50: 09e1 000c 0000            MOVI   Ch,A1
1ec80: ac20 0000                 MOVB   A1,*A0(0h)
1eca0: 0080                      MWAIT  
1ecb0: 2f01                      SRL    8h,A1
1ecc0: ac20 0020                 MOVB   A1,*A0(20h)
1ece0: 0080                      MWAIT  
1ecf0: 09c1 0003                 MOVI   3h,A1
1ed10: ac20 0060                 MOVB   A1,*A0(60h)
1ed30: 0080                      MWAIT  
1ed40: 09e1 0005 0000            MOVI   5h,A1
1ed70: ac20 0020                 MOVB   A1,*A0(20h)
1ed90: 0080                      MWAIT  
1eda0: 09e1 0008 0000            MOVI   8h,A1
1edd0: ac20 0080                 MOVB   A1,*A0(80h)
1edf0: 0080                      MWAIT  
1ee00: 09af 0003                 MMFM   SP,A0,A1
1ee20: 0960                      RETS   

_StopEHTUART:
1ee30: 098f c000                 MMTM   SP,A0,A1
1ee50: 09e0 0000 6030            MOVI   60300000h,A0
1ee80: 09e1 0000 0000            MOVI   0h,A1
1eeb0: ac20 0020                 MOVB   A1,*A0(20h)
1eed0: 0080                      MWAIT  
1eee0: 09e1 0000 0000            MOVI   0h,A1
1ef10: ac20 0080                 MOVB   A1,*A0(80h)
1ef30: 0080                      MWAIT  
1ef40: 09af 0003                 MMFM   SP,A0,A1
1ef60: 0960                      RETS   

_EHTISR:
1ef70: 098f f082                 MMTM   SP,A0-A3,A8,A14
1ef90: 09e0 0000 6030            MOVI   60300000h,A0
1efc0: ae01 0040                 MOVB   *A0(40h),A1
1efe0: 2fe1                      SRL    1h,A1
1eff0: c83f                      JRC    1F3F0h
1f000: 3461                      CMPK   3h,A1
1f010: cb0d                      JRNE   1F0F0h
1f020: ae02 00a0                 MOVB   *A0(A0h),A2
1f040: 0b82 ffe1 ffff            ANDI   1Eh,A2
1f070: ca07                      JREQ   1F0F0h
1f080: ae02 0000                 MOVB   *A0(0h),A2
1f0a0: 1822                      MOVK   1h,A2
1f0b0: 05e2 d5c0 0002            MOVB   A2,@2D5C0h
1f0e0: c030                      JR     1F3F0h
1f0f0: 3441                      CMPK   2h,A1
1f100: cb1a                      JRNE   1F2B0h
1f110: ae02 0000                 MOVB   *A0(0h),A2
1f130: 0d3f 003b                 CALLR  1F500h
1f150: 3542                      CMPK   Ah,A2
1f160: cb02                      JRNE   1F190h
1f170: 0d3f 0045                 CALLR  1F5E0h
1f190: ae02 00a0                 MOVB   *A0(A0h),A2
1f1b0: 0b82 ffe1 ffff            ANDI   1Eh,A2
1f1e0: ca07                      JREQ   1F260h
1f1f0: ae02 0000                 MOVB   *A0(0h),A2
1f210: 1822                      MOVK   1h,A2
1f220: 05e2 d5c0 0002            MOVB   A2,@2D5C0h
1f250: c019                      JR     1F3F0h
1f260: 0b82 fffe ffff            ANDI   1h,A2
1f290: cbe7                      JRNE   1F110h
1f2a0: c014                      JR     1F3F0h
1f2b0: 3421                      CMPK   1h,A1
1f2c0: cb10                      JRNE   1F3D0h
1f2d0: 0d3f 0013                 CALLR  1F420h
1f2f0: b040 0000                 MOVE   A2,*A0(0h),0
1f310: 0080                      MWAIT  
1f320: 35a2                      CMPK   Dh,A2
1f330: cb09                      JRNE   1F3D0h
1f340: ae02 0020                 MOVB   *A0(20h),A2
1f360: 0b82 0002 0000            ANDI   FFFFFFFDh,A2
1f390: ac40 0020                 MOVB   A2,*A0(20h)
1f3b0: 0080                      MWAIT  
1f3c0: c002                      JR     1F3F0h
1f3d0: ae02 00c0                 MOVB   *A0(C0h),A2
1f3f0: 09af 410f                 MMFM   SP,A0-A3,A8,A14
1f410: 0960                      RETS   
1f420: 098f 1000                 MMTM   SP,A3
1f440: 07a3 5260 0003            MOVE   @35260h,A3,1
1f470: 0548                      SETF   8h,0,0
1f480: 9462                      MOVE   *A3+,A2,0
1f490: 0550                      SETF   10h,0,0
1f4a0: 0783 5260 0003            MOVE   A3,@35260h,1
1f4d0: 09af 0008                 MMFM   SP,A3
1f4f0: 0960                      RETS   
1f500: 098f 1000                 MMTM   SP,A3
1f520: 07a3 dc80 0002            MOVE   @2DC80h,A3,1
1f550: 0548                      SETF   8h,0,0
1f560: 9043                      MOVE   A2,*A3+,0
1f570: 0550                      SETF   10h,0,0
1f580: 0783 dc80 0002            MOVE   A3,@2DC80h,1
1f5b0: 09af 0008                 MMFM   SP,A3
1f5d0: 0960                      RETS   
1f5e0: 098f c000                 MMTM   SP,A0,A1
1f600: 1821                      MOVK   1h,A1
1f610: 05e1 d5a0 0002            MOVB   A1,@2D5A0h
1f640: 09c1 0040                 MOVI   40h,A1
1f660: 1900                      MOVK   8h,A0
1f670: 0910                      TRAP   10h
1f680: 09af 0003                 MMFM   SP,A0,A1
1f6a0: 0960                      RETS   

_TxEnable:
1f6b0: 098f c000                 MMTM   SP,A0,A1
1f6d0: 09e1 0000 6030            MOVI   60300000h,A1
1f700: ae20 0020                 MOVB   *A1(20h),A0
1f720: 0ba0 0002 0000            ORI    2h,A0
1f750: ac01 0020                 MOVB   A0,*A1(20h)
1f770: 09af 0003                 MMFM   SP,A0,A1
1f790: 0960                      RETS   
1f7a0: 098f c000                 MMTM   SP,A0,A1
1f7c0: 09e1 0000 6030            MOVI   60300000h,A1
1f7f0: ae20 0020                 MOVB   *A1(20h),A0
1f810: 0b80 0002 0000            ANDI   FFFFFFFDh,A0
1f840: ac01 0020                 MOVB   A0,*A1(20h)
1f860: 09af 0003                 MMFM   SP,A0,A1
1f880: 0960                      RETS   

FD$DTOF:
1f890: 07a8 0000 0000            MOVE   @0h,A8,1
1f8c0: ca0e                      JREQ   1F9B0h
1f8d0: 4dc8                      MOVE   A14,A8
1f8e0: 0be8 ffbf                 SUBI   40h,A8
1f900: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1f930: 0bee ffbf                 SUBI   40h,A14
1f950: d83f 0080                 CEXEC  1,00101F,0
1f970: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
1f9a0: 0960                      RETS   
1f9b0: 098f 9000                 MMTM   SP,A0,A3
1f9d0: a7c3                      MOVE   -*A14,A3,1
1f9e0: 2d83                      SRL    14h,A3
1f9f0: a7c0                      MOVE   -*A14,A0,1
1fa00: 4c08                      MOVE   A0,A8
1fa10: 2588                      SLL    Ch,A8
1fa20: 5503                      OR     A8,A3
1fa30: 2420                      SLL    1h,A0
1fa40: 4708                      SUBB   A8,A8
1fa50: 27e8                      SLL    1Fh,A8
1fa60: 2d60                      SRL    15h,A0
1fa70: ca18                      JREQ   1FC00h
1fa80: 0b40 f800                 CMPI   7FFh,A0
1faa0: ca20                      JREQ   1FCB0h
1fab0: 2ee3                      SRL    9h,A3
1fac0: c908                      JRNC   1FB50h
1fad0: 1023                      INC    A3
1fae0: 1d03                      BTST   17h,A3
1faf0: ca05                      JREQ   1FB50h
1fb00: 0b83 0000 ff80            ANDI   7FFFFFh,A3
1fb30: 2fe3                      SRL    1h,A3
1fb40: 1020                      INC    A0
1fb50: 0be0 fc7f                 SUBI   380h,A0
1fb70: c702                      JRGT   1FBA0h
1fb80: 5600                      CLR    A0
1fb90: c006                      JR     1FC00h
1fba0: 0b40 ff00                 CMPI   FFh,A0
1fbc0: c507                      JRGE   1FC40h
1fbd0: 26e0                      SLL    17h,A0
1fbe0: 5460                      OR     A3,A0
1fbf0: 5500                      OR     A8,A0
1fc00: 920e                      MOVE   A0,*A14+,1
1fc10: 09af 0009                 MMFM   SP,A0,A3
1fc30: 0960                      RETS   
1fc40: 4d03                      MOVE   A8,A3
1fc50: 1840                      MOVK   2h,A0
1fc60: a3cf                      MOVE   A14,-*SP,1
1fc70: 920e                      MOVE   A0,*A14+,1
1fc80: 0d5f 6170 0002            CALLA  26170h
1fcb0: 0ba3 0000 7f80            ORI    7F800000h,A3
1fce0: 926e                      MOVE   A3,*A14+,1
1fcf0: 09af 0009                 MMFM   SP,A0,A3
1fd10: 0960                      RETS   

FD$DTOI:
1fd20: 07a8 0000 0000            MOVE   @0h,A8,1
1fd50: ca1a                      JREQ   1FF00h
1fd60: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
1fd90: a30f                      MOVE   A8,-*SP,1
1fda0: 09c8 0029                 MOVI   29h,A8
1fdc0: 0628 4c00 000d            CMOVGC A8,000D4C,0
1fdf0: 4dc8                      MOVE   A14,A8
1fe00: 0be8 ffbf                 SUBI   40h,A8
1fe20: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1fe50: 0bee ffbf                 SUBI   40h,A14
1fe70: d83f 00a0                 CEXEC  1,00141F,0
1fe90: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
1fec0: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
1fef0: 0960                      RETS   
1ff00: 098f 9000                 MMTM   SP,A0,A3
1ff20: a7c8                      MOVE   -*A14,A8,1
1ff30: 2d88                      SRL    14h,A8
1ff40: a7c0                      MOVE   -*A14,A0,1
1ff50: 4c03                      MOVE   A0,A3
1ff60: 2583                      SLL    Ch,A3
1ff70: 5468                      OR     A3,A8
1ff80: 2420                      SLL    1h,A0
1ff90: 4663                      SUBB   A3,A3
1ffa0: 2d60                      SRL    15h,A0
1ffb0: 2fc8                      SRL    2h,A8
1ffc0: 0ba8 0000 4000            ORI    40000000h,A8
1fff0: 1020                      INC    A0
20000: 0be0 fc00                 SUBI   3FFh,A0
20020: c60a                      JRLE   200D0h
20030: 17e0                      SUBK   1Fh,A0
20040: c70c                      JRGT   20110h
20050: 6608                      SRL    A0,A8
20060: 4c63                      MOVE   A3,A3
20070: ca01                      JREQ   20090h
20080: 03a8                      NEG    A8
20090: 09af 0009                 MMFM   SP,A0,A3
200b0: 4d08                      MOVE   A8,A8
200c0: 0960                      RETS   
200d0: 09af 0009                 MMFM   SP,A0,A3
200f0: 4508                      SUB    A8,A8
20100: 0960                      RETS   
20110: 1820                      MOVK   1h,A0
20120: a3cf                      MOVE   A14,-*SP,1
20130: 920e                      MOVE   A0,*A14+,1
20140: 0d5f 6170 0002            CALLA  26170h
20170: 0bc3 ffff 7fff            XORI   7FFFFFFFh,A3
201a0: 4c68                      MOVE   A3,A8
201b0: 09af 0009                 MMFM   SP,A0,A3
201d0: 0960                      RETS   

FD$FTOD:
201e0: 07a8 0000 0000            MOVE   @0h,A8,1
20210: ca09                      JREQ   202B0h
20220: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
20250: d83e 0080                 CEXEC  0,00101F,0
20270: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
202a0: 0960                      RETS   
202b0: 098f c000                 MMTM   SP,A0,A1
202d0: a7c8                      MOVE   -*A14,A8,1
202e0: 4d01                      MOVE   A8,A1
202f0: 2421                      SLL    1h,A1
20300: 4600                      SUBB   A0,A0
20310: 2d01                      SRL    18h,A1
20320: ca14                      JREQ   20470h
20330: 27e0                      SLL    1Fh,A0
20340: 0b41 ff00                 CMPI   FFh,A1
20360: cb02                      JRNE   20390h
20370: 09c1 047f                 MOVI   47Fh,A1
20390: 0b01 0380                 ADDI   380h,A1
203b0: 2681                      SLL    14h,A1
203c0: 5420                      OR     A1,A0
203d0: 4d01                      MOVE   A8,A1
203e0: 27a1                      SLL    1Dh,A1
203f0: 2528                      SLL    9h,A8
20400: 2e88                      SRL    Ch,A8
20410: 5500                      OR     A8,A0
20420: 920e                      MOVE   A0,*A14+,1
20430: 922e                      MOVE   A1,*A14+,1
20440: 09af 0003                 MMFM   SP,A0,A1
20460: 0960                      RETS   
20470: 922e                      MOVE   A1,*A14+,1
20480: 922e                      MOVE   A1,*A14+,1
20490: 09af 0003                 MMFM   SP,A0,A1
204b0: 0960                      RETS   

FD$FTOI:
204c0: 07a8 0000 0000            MOVE   @0h,A8,1
204f0: ca15                      JREQ   20650h
20500: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
20530: a30f                      MOVE   A8,-*SP,1
20540: 09c8 0029                 MOVI   29h,A8
20560: 0628 4c00 000d            CMOVGC A8,000D4C,0
20590: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
205c0: d83e 00a0                 CEXEC  0,00141F,0
205e0: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
20610: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
20640: 0960                      RETS   
20650: 098f 9000                 MMTM   SP,A0,A3
20670: a7c0                      MOVE   -*A14,A0,1
20680: 4c08                      MOVE   A0,A8
20690: 2420                      SLL    1h,A0
206a0: 4663                      SUBB   A3,A3
206b0: 2d00                      SRL    18h,A0
206c0: 2528                      SLL    9h,A8
206d0: 2fc8                      SRL    2h,A8
206e0: 0ba8 0000 4000            ORI    40000000h,A8
20710: 1020                      INC    A0
20720: 0be0 ff80                 SUBI   7Fh,A0
20740: c60a                      JRLE   207F0h
20750: 17e0                      SUBK   1Fh,A0
20760: c70c                      JRGT   20830h
20770: 6608                      SRL    A0,A8
20780: 4c63                      MOVE   A3,A3
20790: ca01                      JREQ   207B0h
207a0: 03a8                      NEG    A8
207b0: 09af 0009                 MMFM   SP,A0,A3
207d0: 4d08                      MOVE   A8,A8
207e0: 0960                      RETS   
207f0: 09af 0009                 MMFM   SP,A0,A3
20810: 4508                      SUB    A8,A8
20820: 0960                      RETS   
20830: 1860                      MOVK   3h,A0
20840: a3cf                      MOVE   A14,-*SP,1
20850: 920e                      MOVE   A0,*A14+,1
20860: 0d5f 6170 0002            CALLA  26170h
20890: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
208c0: 4c68                      MOVE   A3,A8
208d0: 09af 0009                 MMFM   SP,A0,A3
208f0: 0960                      RETS   

FD$ITOD:
20900: a38f                      MOVE   A12,-*SP,1
20910: 07ac 0000 0000            MOVE   @0h,A12,1
20940: ca0a                      JREQ   209F0h
20950: 0628 4c00 0000            CMOVGC A8,00004C,0
20980: d83f 00c0                 CEXEC  1,00181F,0
209a0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
209d0: 97ec                      MOVE   *SP+,A12,1
209e0: 0960                      RETS   
209f0: 098f c000                 MMTM   SP,A0,A1
20a10: 5600                      CLR    A0
20a20: 0388                      ABS    A8
20a30: ca1a                      JREQ   20BE0h
20a40: c402                      JRLT   20A70h
20a50: 1820                      MOVK   1h,A0
20a60: 27e0                      SLL    1Fh,A0
20a70: 6b01                      LMO    A8,A1
20a80: 1021                      INC    A1
20a90: 0b41 ffdf                 CMPI   20h,A1
20ab0: cb02                      JRNE   20AE0h
20ac0: 5708                      CLR    A8
20ad0: c001                      JR     20AF0h
20ae0: 6228                      SLL    A1,A8
20af0: 03a1                      NEG    A1
20b00: 0b01 041f                 ADDI   41Fh,A1
20b20: 2681                      SLL    14h,A1
20b30: 5420                      OR     A1,A0
20b40: 4d01                      MOVE   A8,A1
20b50: 2681                      SLL    14h,A1
20b60: 2e88                      SRL    Ch,A8
20b70: 5500                      OR     A8,A0
20b80: 920e                      MOVE   A0,*A14+,1
20b90: 922e                      MOVE   A1,*A14+,1
20ba0: 09af 0003                 MMFM   SP,A0,A1
20bc0: 97ec                      MOVE   *SP+,A12,1
20bd0: 0960                      RETS   
20be0: 5600                      CLR    A0
20bf0: 920e                      MOVE   A0,*A14+,1
20c00: 920e                      MOVE   A0,*A14+,1
20c10: 09af 0003                 MMFM   SP,A0,A1
20c30: 97ec                      MOVE   *SP+,A12,1
20c40: 0960                      RETS   

FD$ITOF:
20c50: a38f                      MOVE   A12,-*SP,1
20c60: 07ac 0000 0000            MOVE   @0h,A12,1
20c90: ca0a                      JREQ   20D40h
20ca0: 0628 4c00 0000            CMOVGC A8,00004C,0
20cd0: d83e 00c0                 CEXEC  0,00181F,0
20cf0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
20d20: 97ec                      MOVE   *SP+,A12,1
20d30: 0960                      RETS   
20d40: 098f c000                 MMTM   SP,A0,A1
20d60: 5600                      CLR    A0
20d70: 0388                      ABS    A8
20d80: ca18                      JREQ   20F10h
20d90: c402                      JRLT   20DC0h
20da0: 1820                      MOVK   1h,A0
20db0: 27e0                      SLL    1Fh,A0
20dc0: 6b01                      LMO    A8,A1
20dd0: 1021                      INC    A1
20de0: 0b41 ffdf                 CMPI   20h,A1
20e00: cb02                      JRNE   20E30h
20e10: 5708                      CLR    A8
20e20: c001                      JR     20E40h
20e30: 6228                      SLL    A1,A8
20e40: 03a1                      NEG    A1
20e50: 2ee8                      SRL    9h,A8
20e60: c905                      JRNC   20EC0h
20e70: 1028                      INC    A8
20e80: 1d08                      BTST   17h,A8
20e90: ca02                      JREQ   20EC0h
20ea0: 1021                      INC    A1
20eb0: 2fe8                      SRL    1h,A8
20ec0: 0b01 009f                 ADDI   9Fh,A1
20ee0: 26e1                      SLL    17h,A1
20ef0: 5420                      OR     A1,A0
20f00: 5500                      OR     A8,A0
20f10: 920e                      MOVE   A0,*A14+,1
20f20: 09af 0003                 MMFM   SP,A0,A1
20f40: 97ec                      MOVE   *SP+,A12,1
20f50: 0960                      RETS   

FD$ABS:
20f60: b7c8 ffc0                 MOVE   *A14(FFC0h),A8,1
20f80: 0b88 0000 8000            ANDI   7FFFFFFFh,A8
20fb0: b30e ffc0                 MOVE   A8,*A14(FFC0h),1
20fd0: 0960                      RETS   

FD$SUB_R:
20fe0: 07a8 0000 0000            MOVE   @0h,A8,1
21010: ca3f                      JREQ   21410h
21020: 4dc8                      MOVE   A14,A8
21030: 0be8 ff7f                 SUBI   80h,A8
21050: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
21080: d83f 0060                 CEXEC  1,000C1F,0
210a0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
210d0: 0bee ff7f                 SUBI   80h,A14
210f0: d803 0000                 CEXEC  1,000001,0
21110: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
21140: 0960                      RETS   

FD$SUB:
21150: 07a8 0000 0000            MOVE   @0h,A8,1
21180: ca32                      JREQ   214B0h
21190: 4dc8                      MOVE   A14,A8
211a0: 0be8 ff7f                 SUBI   80h,A8
211c0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
211f0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
21220: d83f 0060                 CEXEC  1,000C1F,0
21240: 0bee ff7f                 SUBI   80h,A14
21260: d803 0000                 CEXEC  1,000001,0
21280: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
212b0: 0960                      RETS   

FD$ADD:
212c0: 07a8 0000 0000            MOVE   @0h,A8,1
212f0: ca23                      JREQ   21530h
21300: 4dc8                      MOVE   A14,A8
21310: 0be8 ff7f                 SUBI   80h,A8
21330: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
21360: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
21390: 0bee ff7f                 SUBI   80h,A14
213b0: d803 0000                 CEXEC  1,000001,0
213d0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
21400: 0960                      RETS   
21410: 098f ff00                 MMTM   SP,A0-A7
21430: a7c4                      MOVE   -*A14,A4,1
21440: a7c3                      MOVE   -*A14,A3,1
21450: a7c6                      MOVE   -*A14,A6,1
21460: a7c5                      MOVE   -*A14,A5,1
21470: 0bc5 0000 8000            XORI   80000000h,A5
214a0: c00e                      JR     21590h
214b0: 098f ff00                 MMTM   SP,A0-A7
214d0: a7c6                      MOVE   -*A14,A6,1
214e0: a7c5                      MOVE   -*A14,A5,1
214f0: 0bc5 0000 8000            XORI   80000000h,A5
21520: c004                      JR     21570h
21530: 098f ff00                 MMTM   SP,A0-A7
21550: a7c6                      MOVE   -*A14,A6,1
21560: a7c5                      MOVE   -*A14,A5,1
21570: a7c4                      MOVE   -*A14,A4,1
21580: a7c3                      MOVE   -*A14,A3,1
21590: 4c61                      MOVE   A3,A1
215a0: 2421                      SLL    1h,A1
215b0: ca00 00a8                 JREQ   22050h
215d0: 4ca2                      MOVE   A5,A2
215e0: 2422                      SLL    1h,A2
215f0: ca00 009c                 JREQ   21FD0h
21610: 4c61                      MOVE   A3,A1
21620: 4ca2                      MOVE   A5,A2
21630: 2583                      SLL    Ch,A3
21640: 2fa3                      SRL    3h,A3
21650: 0ba3 0000 2000            ORI    20000000h,A3
21680: 4c88                      MOVE   A4,A8
21690: ca03                      JREQ   216D0h
216a0: 2d28                      SRL    17h,A8
216b0: 5503                      OR     A8,A3
216c0: 2524                      SLL    9h,A4
216d0: 2585                      SLL    Ch,A5
216e0: 2fa5                      SRL    3h,A5
216f0: 0ba5 0000 2000            ORI    20000000h,A5
21720: 4cc8                      MOVE   A6,A8
21730: ca03                      JREQ   21770h
21740: 2d28                      SRL    17h,A8
21750: 5505                      OR     A8,A5
21760: 2526                      SLL    9h,A6
21770: 2421                      SLL    1h,A1
21780: 4600                      SUBB   A0,A0
21790: 2422                      SLL    1h,A2
217a0: 4708                      SUBB   A8,A8
217b0: 2d61                      SRL    15h,A1
217c0: 2d62                      SRL    15h,A2
217d0: 09c7 07ff                 MOVI   7FFh,A7
217f0: 48e1                      CMP    A7,A1
21800: ca00 0086                 JREQ   22080h
21820: 48e2                      CMP    A7,A2
21830: ca00 0088                 JREQ   220D0h
21850: 4441                      SUB    A2,A1
21860: ca03                      JREQ   218A0h
21870: c608                      JRLE   21900h
21880: 4022                      ADD    A1,A2
21890: c010                      JR     219A0h
218a0: 4865                      CMP    A3,A5
218b0: c40e                      JRLT   219A0h
218c0: c704                      JRGT   21910h
218d0: 4886                      CMP    A4,A6
218e0: c20b                      JRLS   219A0h
218f0: c004                      JR     21940h
21900: 03a1                      NEG    A1
21910: 4c67                      MOVE   A3,A7
21920: 4ca3                      MOVE   A5,A3
21930: 4ce5                      MOVE   A7,A5
21940: 4c87                      MOVE   A4,A7
21950: 4cc4                      MOVE   A6,A4
21960: 4ce6                      MOVE   A7,A6
21970: 4c07                      MOVE   A0,A7
21980: 4d00                      MOVE   A8,A0
21990: 4ce8                      MOVE   A7,A8
219a0: 4c21                      MOVE   A1,A1
219b0: ca18                      JREQ   21B40h
219c0: 0b41 ffe1                 CMPI   1Eh,A1
219e0: c40e                      JRLT   21AD0h
219f0: 0b41 ffc2                 CMPI   3Dh,A1
21a10: c708                      JRGT   21AA0h
21a20: 17c1                      SUBK   1Eh,A1
21a30: 2445                      SLL    2h,A5
21a40: 2c46                      SRL    1Eh,A6
21a50: 54a6                      OR     A5,A6
21a60: 56a5                      CLR    A5
21a70: 03a1                      NEG    A1
21a80: 6626                      SRL    A1,A6
21a90: c00a                      JR     21B40h
21aa0: 56a5                      CLR    A5
21ab0: 56c6                      CLR    A6
21ac0: c007                      JR     21B40h
21ad0: 4ca7                      MOVE   A5,A7
21ae0: 03a1                      NEG    A1
21af0: 6625                      SRL    A1,A5
21b00: 6626                      SRL    A1,A6
21b10: 1001                      ADDK   20h,A1
21b20: 6227                      SLL    A1,A7
21b30: 54e6                      OR     A7,A6
21b40: 4808                      CMP    A0,A8
21b50: ca27                      JREQ   21DD0h
21b60: 44c4                      SUB    A6,A4
21b70: 46a3                      SUBB   A5,A3
21b80: 6a67                      LMO    A3,A7
21b90: ca0a                      JREQ   21C40h
21ba0: 1447                      SUBK   2h,A7
21bb0: ca10                      JREQ   21CC0h
21bc0: 44e2                      SUB    A7,A2
21bd0: 62e3                      SLL    A7,A3
21be0: 4c81                      MOVE   A4,A1
21bf0: 62e4                      SLL    A7,A4
21c00: 1407                      SUBK   20h,A7
21c10: 66e1                      SRL    A7,A1
21c20: 5423                      OR     A1,A3
21c30: c008                      JR     21CC0h
21c40: 6a87                      LMO    A4,A7
21c50: ca3c                      JREQ   22020h
21c60: 17c2                      SUBK   1Eh,A2
21c70: 68e4                      RL     A7,A4
21c80: 4c83                      MOVE   A4,A3
21c90: 2fc3                      SRL    2h,A3
21ca0: 27c4                      SLL    1Eh,A4
21cb0: 44e2                      SUB    A7,A2
21cc0: 56e7                      CLR    A7
21cd0: 1ee4                      BTST   8h,A4
21ce0: ca07                      JREQ   21D60h
21cf0: 0b04 0100                 ADDI   100h,A4
21d10: 42e3                      ADDC   A7,A3
21d20: 1c23                      BTST   1Eh,A3
21d30: ca02                      JREQ   21D60h
21d40: 1022                      INC    A2
21d50: c003                      JR     21D90h
21d60: 2423                      SLL    1h,A3
21d70: 2424                      SLL    1h,A4
21d80: 42e3                      ADDC   A7,A3
21d90: 0b83 0000 c000            ANDI   3FFFFFFFh,A3
21dc0: c00c                      JR     21E90h
21dd0: 40c4                      ADD    A6,A4
21de0: 42a3                      ADDC   A5,A3
21df0: 1c23                      BTST   1Eh,A3
21e00: caeb                      JREQ   21CC0h
21e10: 1022                      INC    A2
21e20: 2fe4                      SRL    1h,A4
21e30: 2fe3                      SRL    1h,A3
21e40: c9e7                      JRNC   21CC0h
21e50: 0ba4 0000 8000            ORI    80000000h,A4
21e80: c0e3                      JR     21CC0h
21e90: 4c42                      MOVE   A2,A2
21ea0: c437                      JRLT   22220h
21eb0: cb05                      JRNE   21F10h
21ec0: 4c63                      MOVE   A3,A3
21ed0: cb34                      JRNE   22220h
21ee0: 4c84                      MOVE   A4,A4
21ef0: cb32                      JRNE   22220h
21f00: c011                      JR     22020h
21f10: 0b42 f800                 CMPI   7FFh,A2
21f30: c527                      JRGE   221B0h
21f40: 4c68                      MOVE   A3,A8
21f50: 2ec3                      SRL    Ah,A3
21f60: 2ec4                      SRL    Ah,A4
21f70: 26c8                      SLL    16h,A8
21f80: 5504                      OR     A8,A4
21f90: 27e0                      SLL    1Fh,A0
21fa0: 2682                      SLL    14h,A2
21fb0: 5443                      OR     A2,A3
21fc0: 5403                      OR     A0,A3
21fd0: 926e                      MOVE   A3,*A14+,1
21fe0: 928e                      MOVE   A4,*A14+,1
21ff0: 09af 00ff                 MMFM   SP,A0-A7
22010: 0960                      RETS   
22020: 5663                      CLR    A3
22030: 5684                      CLR    A4
22040: c0f8                      JR     21FD0h
22050: 4ca3                      MOVE   A5,A3
22060: 4cc4                      MOVE   A6,A4
22070: c0f5                      JR     21FD0h
22080: 48e2                      CMP    A7,A2
22090: cb04                      JRNE   220E0h
220a0: 4808                      CMP    A0,A8
220b0: cb0c                      JRNE   22180h
220c0: c001                      JR     220E0h
220d0: 4d00                      MOVE   A8,A0
220e0: 5621                      CLR    A1
220f0: 27e0                      SLL    1Fh,A0
22100: 0ba0 0000 7ff0            ORI    7FF00000h,A0
22130: 920e                      MOVE   A0,*A14+,1
22140: 922e                      MOVE   A1,*A14+,1
22150: 09af 00ff                 MMFM   SP,A0-A7
22170: 0960                      RETS   
22180: 5663                      CLR    A3
22190: 1880                      MOVK   4h,A0
221a0: c009                      JR     22240h
221b0: 4c03                      MOVE   A0,A3
221c0: 27e3                      SLL    1Fh,A3
221d0: 0ba3 0000 7ff0            ORI    7FF00000h,A3
22200: 18a0                      MOVK   5h,A0
22210: c002                      JR     22240h
22220: 1980                      MOVK   Ch,A0
22230: 5663                      CLR    A3
22240: a3cf                      MOVE   A14,-*SP,1
22250: 920e                      MOVE   A0,*A14+,1
22260: 0d5f 6170 0002            CALLA  26170h
22290: 5621                      CLR    A1
222a0: 926e                      MOVE   A3,*A14+,1
222b0: 922e                      MOVE   A1,*A14+,1
222c0: 09af 00ff                 MMFM   SP,A0-A7
222e0: 0960                      RETS   

FD$LE:
222f0: 1828                      MOVK   1h,A8
22300: c005                      JR     22360h

FD$LT:
22310: 1848                      MOVK   2h,A8
22320: c003                      JR     22360h

FD$GE:
22330: 1868                      MOVK   3h,A8
22340: c001                      JR     22360h

FD$GT:
22350: 1888                      MOVK   4h,A8
22360: a38f                      MOVE   A12,-*SP,1
22370: 07ac 0000 0000            MOVE   @0h,A12,1
223a0: ca20                      JREQ   225B0h
223b0: 098f 6000                 MMTM   SP,A1,A2
223d0: 4dc1                      MOVE   A14,A1
223e0: 0be1 ff7f                 SUBI   80h,A1
22400: 0682 8d81 0000            CMOVMC *A1+,2,1,00008D,0
22430: 0682 8d81 0010            CMOVMC *A1+,2,1,00108D,0
22460: 0bee ff7f                 SUBI   80h,A14
22480: d80b 0000                 CEXEC  1,000005,0
224a0: 0660 4e01 000c            CMOVCS ,000C4E,0
224d0: 18a2                      MOVK   5h,A2
224e0: ca03                      JREQ   22520h
224f0: 1862                      MOVK   3h,A2
22500: ce01                      JRN    22520h
22510: 1982                      MOVK   Ch,A2
22520: 03a8                      NEG    A8
22530: 6702                      SRL    A8,A2
22540: 4708                      SUBB   A8,A8
22550: 2c28                      SRL    1Fh,A8
22560: 09af 0006                 MMFM   SP,A1,A2
22580: 97ec                      MOVE   *SP+,A12,1
22590: 4d08                      MOVE   A8,A8
225a0: 0960                      RETS   
225b0: 098f b800                 MMTM   SP,A0,A2-A4
225d0: a7c2                      MOVE   -*A14,A2,1
225e0: a7c0                      MOVE   -*A14,A0,1
225f0: a7c3                      MOVE   -*A14,A3,1
22600: a7c4                      MOVE   -*A14,A4,1
22610: 4804                      CMP    A0,A4
22620: ca14                      JREQ   22770h
22630: 1862                      MOVK   3h,A2
22640: c401                      JRLT   22660h
22650: 1982                      MOVK   Ch,A2
22660: 2420                      SLL    1h,A0
22670: c906                      JRNC   226E0h
22680: 2424                      SLL    1h,A4
22690: c904                      JRNC   226E0h
226a0: 4804                      CMP    A0,A4
226b0: 1862                      MOVK   3h,A2
226c0: c301                      JRHI   226E0h
226d0: 1982                      MOVK   Ch,A2
226e0: 03a8                      NEG    A8
226f0: 6702                      SRL    A8,A2
22700: 4708                      SUBB   A8,A8
22710: 2c28                      SRL    1Fh,A8
22720: 09af 001d                 MMFM   SP,A0,A2-A4
22740: 97ec                      MOVE   *SP+,A12,1
22750: 4d08                      MOVE   A8,A8
22760: 0960                      RETS   
22770: 4843                      CMP    A2,A3
22780: 18a2                      MOVK   5h,A2
22790: ca06                      JREQ   22800h
227a0: 1862                      MOVK   3h,A2
227b0: c801                      JRC    227D0h
227c0: 1982                      MOVK   Ch,A2
227d0: 2420                      SLL    1h,A0
227e0: c901                      JRNC   22800h
227f0: 03e2                      NOT    A2
22800: 03a8                      NEG    A8
22810: 6702                      SRL    A8,A2
22820: 4708                      SUBB   A8,A8
22830: 2c28                      SRL    1Fh,A8
22840: 09af 001d                 MMFM   SP,A0,A2-A4
22860: 97ec                      MOVE   *SP+,A12,1
22870: 4d08                      MOVE   A8,A8
22880: 0960                      RETS   

FD$DIV_R:
22890: 07a8 0000 0000            MOVE   @0h,A8,1
228c0: ca2a                      JREQ   22B70h
228d0: a38f                      MOVE   A12,-*SP,1
228e0: 4dcc                      MOVE   A14,A12
228f0: 0bec ff7f                 SUBI   80h,A12
22910: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
22940: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
22970: 0bee ff7f                 SUBI   80h,A14
22990: d827 0000                 CEXEC  1,000013,0
229b0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
229e0: 97ec                      MOVE   *SP+,A12,1
229f0: 0960                      RETS   

FD$DIV:
22a00: 07a8 0000 0000            MOVE   @0h,A8,1
22a30: ca1a                      JREQ   22BE0h
22a40: a38f                      MOVE   A12,-*SP,1
22a50: 4dcc                      MOVE   A14,A12
22a60: 0bec ff7f                 SUBI   80h,A12
22a80: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
22ab0: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
22ae0: 0bee ff7f                 SUBI   80h,A14
22b00: d827 0000                 CEXEC  1,000013,0
22b20: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
22b50: 97ec                      MOVE   *SP+,A12,1
22b60: 0960                      RETS   
22b70: 098f ff40                 MMTM   SP,A0-A7,A9
22b90: a7c1                      MOVE   -*A14,A1,1
22ba0: a7c4                      MOVE   -*A14,A4,1
22bb0: a7c3                      MOVE   -*A14,A3,1
22bc0: a7c5                      MOVE   -*A14,A5,1
22bd0: c006                      JR     22C40h
22be0: 098f ff40                 MMTM   SP,A0-A7,A9
22c00: a7c3                      MOVE   -*A14,A3,1
22c10: a7c5                      MOVE   -*A14,A5,1
22c20: a7c1                      MOVE   -*A14,A1,1
22c30: a7c4                      MOVE   -*A14,A4,1
22c40: 4c28                      MOVE   A1,A8
22c50: 24e1                      SLL    7h,A1
22c60: 2ce8                      SRL    19h,A8
22c70: 4c80                      MOVE   A4,A0
22c80: 2580                      SLL    Ch,A0
22c90: 2f60                      SRL    5h,A0
22ca0: 0ba0 0000 0800            ORI    8000000h,A0
22cd0: 5500                      OR     A8,A0
22ce0: 4c68                      MOVE   A3,A8
22cf0: 2563                      SLL    Bh,A3
22d00: 2d68                      SRL    15h,A8
22d10: 4ca2                      MOVE   A5,A2
22d20: 2582                      SLL    Ch,A2
22d30: 2fe2                      SRL    1h,A2
22d40: 0ba2 0000 8000            ORI    80000000h,A2
22d70: 5502                      OR     A8,A2
22d80: 2424                      SLL    1h,A4
22d90: 4729                      SUBB   A9,A9
22da0: 2425                      SLL    1h,A5
22db0: 4708                      SUBB   A8,A8
22dc0: 5709                      XOR    A8,A9
22dd0: 27e9                      SLL    1Fh,A9
22de0: 2d64                      SRL    15h,A4
22df0: 2d65                      SRL    15h,A5
22e00: ca56                      JREQ   23370h
22e10: 0b45 f800                 CMPI   7FFh,A5
22e30: cb03                      JRNE   22E70h
22e40: 48a4                      CMP    A5,A4
22e50: ca56                      JREQ   233C0h
22e60: c042                      JR     23290h
22e70: 0b44 f800                 CMPI   7FFh,A4
22e90: ca32                      JREQ   231C0h
22ea0: 4c84                      MOVE   A4,A4
22eb0: ca3d                      JREQ   23290h
22ec0: 5708                      CLR    A8
22ed0: 5a40                      DIVU   A2,A0
22ee0: 4c26                      MOVE   A1,A6
22ef0: 56e7                      CLR    A7
22f00: 5a46                      DIVU   A2,A6
22f10: 4cc1                      MOVE   A6,A1
22f20: 4c06                      MOVE   A0,A6
22f30: 5e66                      MPYU   A3,A6
22f40: 5a46                      DIVU   A2,A6
22f50: 44c1                      SUB    A6,A1
22f60: 4700                      SUBB   A8,A0
22f70: 1c60                      BTST   1Ch,A0
22f80: ca07                      JREQ   23000h
22f90: 1425                      DEC    A5
22fa0: 2fe1                      SRL    1h,A1
22fb0: 2fe0                      SRL    1h,A0
22fc0: c903                      JRNC   23000h
22fd0: 0ba1 0000 8000            ORI    80000000h,A1
23000: 1f21                      BTST   6h,A1
23010: ca07                      JREQ   23090h
23020: 0b01 0040                 ADDI   40h,A1
23040: 4300                      ADDC   A8,A0
23050: 1c60                      BTST   1Ch,A0
23060: ca02                      JREQ   23090h
23070: 1425                      DEC    A5
23080: c004                      JR     230D0h
23090: 1025                      INC    A5
230a0: 2420                      SLL    1h,A0
230b0: 2421                      SLL    1h,A1
230c0: 4300                      ADDC   A8,A0
230d0: 0b80 0000 f000            ANDI   FFFFFFFh,A0
23100: 4c86                      MOVE   A4,A6
23110: 44a4                      SUB    A5,A4
23120: 0b04 03ff                 ADDI   3FFh,A4
23140: c61f                      JRLE   23340h
23150: 0b44 f800                 CMPI   7FFh,A4
23170: c404                      JRLT   231C0h
23180: 09c4 07ff                 MOVI   7FFh,A4
231a0: 48c4                      CMP    A6,A4
231b0: cb13                      JRNE   232F0h
231c0: 4c08                      MOVE   A0,A8
231d0: 2f00                      SRL    8h,A0
231e0: 2f01                      SRL    8h,A1
231f0: 2708                      SLL    18h,A8
23200: 5501                      OR     A8,A1
23210: 2684                      SLL    14h,A4
23220: 5524                      OR     A9,A4
23230: 5480                      OR     A4,A0
23240: 920e                      MOVE   A0,*A14+,1
23250: 922e                      MOVE   A1,*A14+,1
23260: 09af 02ff                 MMFM   SP,A0-A7,A9
23280: 0960                      RETS   
23290: 56c6                      CLR    A6
232a0: 92ce                      MOVE   A6,*A14+,1
232b0: 92ce                      MOVE   A6,*A14+,1
232c0: 09af 02ff                 MMFM   SP,A0-A7,A9
232e0: 0960                      RETS   
232f0: 0ba9 0000 7ff0            ORI    7FF00000h,A9
23320: 18e0                      MOVK   7h,A0
23330: c00c                      JR     23400h
23340: 5729                      CLR    A9
23350: 19c0                      MOVK   Eh,A0
23360: c009                      JR     23400h
23370: 0ba9 0000 7ff0            ORI    7FF00000h,A9
233a0: 19e0                      MOVK   Fh,A0
233b0: c004                      JR     23400h
233c0: 0ba9 0000 3ff0            ORI    3FF00000h,A9
233f0: 1a00                      MOVK   10h,A0
23400: a3cf                      MOVE   A14,-*SP,1
23410: 920e                      MOVE   A0,*A14+,1
23420: 0d5f 6170 0002            CALLA  26170h
23450: 56a5                      CLR    A5
23460: 932e                      MOVE   A9,*A14+,1
23470: 92ae                      MOVE   A5,*A14+,1
23480: 09af 02ff                 MMFM   SP,A0-A7,A9
234a0: 0960                      RETS   

FD$MUL:
234b0: 07a8 0000 0000            MOVE   @0h,A8,1
234e0: ca13                      JREQ   23620h
234f0: a38f                      MOVE   A12,-*SP,1
23500: 4dcc                      MOVE   A14,A12
23510: 0bec ff7f                 SUBI   80h,A12
23530: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
23560: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
23590: 0bee ff7f                 SUBI   80h,A14
235b0: d823 0000                 CEXEC  1,000011,0
235d0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
23600: 97ec                      MOVE   *SP+,A12,1
23610: 0960                      RETS   
23620: 098f ff70                 MMTM   SP,A0-A7,A9-A11
23640: a7c1                      MOVE   -*A14,A1,1
23650: a7c0                      MOVE   -*A14,A0,1
23660: a7c3                      MOVE   -*A14,A3,1
23670: a7c2                      MOVE   -*A14,A2,1
23680: 56a5                      CLR    A5
23690: 4c00                      MOVE   A0,A0
236a0: ca5f                      JREQ   23CA0h
236b0: 4c42                      MOVE   A2,A2
236c0: ca5d                      JREQ   23CA0h
236d0: 4c08                      MOVE   A0,A8
236e0: 4c4b                      MOVE   A2,A11
236f0: 242b                      SLL    1h,A11
23700: 474a                      SUBB   A10,A10
23710: 2428                      SLL    1h,A8
23720: 46a5                      SUBB   A5,A5
23730: 56aa                      XOR    A5,A10
23740: 27ea                      SLL    1Fh,A10
23750: 2d68                      SRL    15h,A8
23760: 2d6b                      SRL    15h,A11
23770: 0b4b f800                 CMPI   7FFh,A11
23790: ca56                      JREQ   23D00h
237a0: 0b48 f800                 CMPI   7FFh,A8
237c0: ca52                      JREQ   23CF0h
237d0: 410b                      ADD    A8,A11
237e0: 0beb fc00                 SUBI   3FFh,A11
23800: 4c68                      MOVE   A3,A8
23810: 2563                      SLL    Bh,A3
23820: 2562                      SLL    Bh,A2
23830: 0ba2 0000 8000            ORI    80000000h,A2
23860: 2d68                      SRL    15h,A8
23870: 5502                      OR     A8,A2
23880: 4c28                      MOVE   A1,A8
23890: 2560                      SLL    Bh,A0
238a0: 2561                      SLL    Bh,A1
238b0: 0ba0 0000 8000            ORI    80000000h,A0
238e0: 2d68                      SRL    15h,A8
238f0: 5500                      OR     A8,A0
23900: 4c08                      MOVE   A0,A8
23910: 4c26                      MOVE   A1,A6
23920: 4c24                      MOVE   A1,A4
23930: 5e40                      MPYU   A2,A0
23940: 5e68                      MPYU   A3,A8
23950: 5e46                      MPYU   A2,A6
23960: 5e64                      MPYU   A3,A4
23970: 56a5                      CLR    A5
23980: 4d22                      MOVE   A9,A2
23990: 4101                      ADD    A8,A1
239a0: 42a0                      ADDC   A5,A0
239b0: 40e2                      ADD    A7,A2
239c0: 42c1                      ADDC   A6,A1
239d0: 42a0                      ADDC   A5,A0
239e0: 4082                      ADD    A4,A2
239f0: 42a1                      ADDC   A5,A1
23a00: 42a0                      ADDC   A5,A0
23a10: ca28                      JREQ   23CA0h
23a20: 102b                      INC    A11
23a30: 1c00                      BTST   1Fh,A0
23a40: cb04                      JRNE   23A90h
23a50: 142b                      DEC    A11
23a60: 2420                      SLL    1h,A0
23a70: 2421                      SLL    1h,A1
23a80: 42a0                      ADDC   A5,A0
23a90: 1ea1                      BTST   Ah,A1
23aa0: ca06                      JREQ   23B10h
23ab0: 0b01 0400                 ADDI   400h,A1
23ad0: 42a0                      ADDC   A5,A0
23ae0: c902                      JRNC   23B10h
23af0: 102b                      INC    A11
23b00: c003                      JR     23B40h
23b10: 2420                      SLL    1h,A0
23b20: 2421                      SLL    1h,A1
23b30: 42a0                      ADDC   A5,A0
23b40: 4d6b                      MOVE   A11,A11
23b50: c42a                      JRLT   23E00h
23b60: ca10                      JREQ   23C70h
23b70: 0b4b f800                 CMPI   7FFh,A11
23b90: c51d                      JRGE   23D70h
23ba0: 4c05                      MOVE   A0,A5
23bb0: 2685                      SLL    14h,A5
23bc0: 2e81                      SRL    Ch,A1
23bd0: 2e80                      SRL    Ch,A0
23be0: 54a1                      OR     A5,A1
23bf0: 268b                      SLL    14h,A11
23c00: 5560                      OR     A11,A0
23c10: 5540                      OR     A10,A0
23c20: 920e                      MOVE   A0,*A14+,1
23c30: 922e                      MOVE   A1,*A14+,1
23c40: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
23c60: 0960                      RETS   
23c70: 4c00                      MOVE   A0,A0
23c80: cb17                      JRNE   23E00h
23c90: c0f0                      JR     23BA0h
23ca0: 92ae                      MOVE   A5,*A14+,1
23cb0: 92ae                      MOVE   A5,*A14+,1
23cc0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
23ce0: 0960                      RETS   
23cf0: 4d68                      MOVE   A11,A8
23d00: 4d08                      MOVE   A8,A8
23d10: ca0b                      JREQ   23DD0h
23d20: 09e0 0000 7ff0            MOVI   7FF00000h,A0
23d50: 5621                      CLR    A1
23d60: c0ea                      JR     23C10h
23d70: 09e3 0000 7ff0            MOVI   7FF00000h,A3
23da0: 5543                      OR     A10,A3
23db0: 18c0                      MOVK   6h,A0
23dc0: c005                      JR     23E20h
23dd0: 5663                      CLR    A3
23de0: 1960                      MOVK   Bh,A0
23df0: c002                      JR     23E20h
23e00: 5663                      CLR    A3
23e10: 19a0                      MOVK   Dh,A0
23e20: a3cf                      MOVE   A14,-*SP,1
23e30: 920e                      MOVE   A0,*A14+,1
23e40: 0d5f 6170 0002            CALLA  26170h
23e70: 5600                      CLR    A0
23e80: 926e                      MOVE   A3,*A14+,1
23e90: 920e                      MOVE   A0,*A14+,1
23ea0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
23ec0: 0960                      RETS   

FD$NE:
23ed0: 098f b800                 MMTM   SP,A0,A2-A4
23ef0: a7c2                      MOVE   -*A14,A2,1
23f00: a7c0                      MOVE   -*A14,A0,1
23f10: a7c3                      MOVE   -*A14,A3,1
23f20: a7c4                      MOVE   -*A14,A4,1
23f30: 5708                      CLR    A8
23f40: 4804                      CMP    A0,A4
23f50: cb06                      JRNE   23FC0h
23f60: 4843                      CMP    A2,A3
23f70: ca01                      JREQ   23F90h
23f80: 1028                      INC    A8
23f90: 09af 001d                 MMFM   SP,A0,A2-A4
23fb0: 0960                      RETS   
23fc0: 1028                      INC    A8
23fd0: 09af 001d                 MMFM   SP,A0,A2-A4
23ff0: 0960                      RETS   

FS$SUB_R:
24000: 07a8 0000 0000            MOVE   @0h,A8,1
24030: ca30                      JREQ   24340h
24040: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
24070: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
240a0: d83e 0060                 CEXEC  0,000C1F,0
240c0: d802 0000                 CEXEC  0,000001,0
240e0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
24110: 0960                      RETS   

FS$SUB:
24120: 07a8 0000 0000            MOVE   @0h,A8,1
24150: ca26                      JREQ   243C0h
24160: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
24190: d83e 0060                 CEXEC  0,000C1F,0
241b0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
241e0: d802 0000                 CEXEC  0,000001,0
24200: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
24230: 0960                      RETS   

FS$ADD:
24240: 07a8 0000 0000            MOVE   @0h,A8,1
24270: ca1b                      JREQ   24430h
24280: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
242b0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
242e0: d802 0000                 CEXEC  0,000001,0
24300: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
24330: 0960                      RETS   
24340: 098f fa00                 MMTM   SP,A0-A4,A6
24360: a7c6                      MOVE   -*A14,A6,1
24370: a7c8                      MOVE   -*A14,A8,1
24380: 0bc8 0000 8000            XORI   80000000h,A8
243b0: c00b                      JR     24470h
243c0: 098f fa00                 MMTM   SP,A0-A4,A6
243e0: a7c8                      MOVE   -*A14,A8,1
243f0: 0bc8 0000 8000            XORI   80000000h,A8
24420: c003                      JR     24460h
24430: 098f fa00                 MMTM   SP,A0-A4,A6
24450: a7c8                      MOVE   -*A14,A8,1
24460: a7c6                      MOVE   -*A14,A6,1
24470: 4cc3                      MOVE   A6,A3
24480: 2423                      SLL    1h,A3
24490: ca59                      JREQ   24A30h
244a0: 4d02                      MOVE   A8,A2
244b0: 2422                      SLL    1h,A2
244c0: ca5a                      JREQ   24A70h
244d0: 2428                      SLL    1h,A8
244e0: 4600                      SUBB   A0,A0
244f0: 27e0                      SLL    1Fh,A0
24500: 2426                      SLL    1h,A6
24510: 4621                      SUBB   A1,A1
24520: 27e1                      SLL    1Fh,A1
24530: 2d02                      SRL    18h,A2
24540: 2d03                      SRL    18h,A3
24550: 2508                      SLL    8h,A8
24560: 2fa8                      SRL    3h,A8
24570: 0ba8 0000 2000            ORI    20000000h,A8
245a0: 2506                      SLL    8h,A6
245b0: 2fa6                      SRL    3h,A6
245c0: 0ba6 0000 2000            ORI    20000000h,A6
245f0: 0b42 ff00                 CMPI   FFh,A2
24610: ca4b                      JREQ   24AD0h
24620: 0b43 ff00                 CMPI   FFh,A3
24640: ca4e                      JREQ   24B30h
24650: 4462                      SUB    A3,A2
24660: ca03                      JREQ   246A0h
24670: c605                      JRLE   246D0h
24680: 4043                      ADD    A2,A3
24690: c00c                      JR     24760h
246a0: 4906                      CMP    A8,A6
246b0: c208                      JRLS   24740h
246c0: c001                      JR     246E0h
246d0: 03a2                      NEG    A2
246e0: 56c8                      XOR    A6,A8
246f0: 5706                      XOR    A8,A6
24700: 56c8                      XOR    A6,A8
24710: 5601                      XOR    A0,A1
24720: 5620                      XOR    A1,A0
24730: 5601                      XOR    A0,A1
24740: 4c42                      MOVE   A2,A2
24750: ca07                      JREQ   247D0h
24760: 0b42 ffe1                 CMPI   1Eh,A2
24780: c402                      JRLT   247B0h
24790: 56c6                      CLR    A6
247a0: c002                      JR     247D0h
247b0: 03a2                      NEG    A2
247c0: 6646                      SRL    A2,A6
247d0: 4801                      CMP    A0,A1
247e0: ca08                      JREQ   24870h
247f0: 44c8                      SUB    A6,A8
24800: 6b06                      LMO    A8,A6
24810: ca27                      JREQ   24A90h
24820: 1446                      SUBK   2h,A6
24830: ca08                      JREQ   248C0h
24840: 44c3                      SUB    A6,A3
24850: 62c8                      SLL    A6,A8
24860: c005                      JR     248C0h
24870: 40c8                      ADD    A6,A8
24880: 1c28                      BTST   1Eh,A8
24890: ca02                      JREQ   248C0h
248a0: 1023                      INC    A3
248b0: 2fe8                      SRL    1h,A8
248c0: 0b08 0020                 ADDI   20h,A8
248e0: 1c28                      BTST   1Eh,A8
248f0: ca02                      JREQ   24920h
24900: 1023                      INC    A3
24910: c001                      JR     24930h
24920: 2428                      SLL    1h,A8
24930: 0b88 0000 c000            ANDI   3FFFFFFFh,A8
24960: 4c63                      MOVE   A3,A3
24970: c42d                      JRLT   24C50h
24980: cb03                      JRNE   249C0h
24990: 2f28                      SRL    7h,A8
249a0: cb2a                      JRNE   24C50h
249b0: c00d                      JR     24A90h
249c0: 0b43 ff00                 CMPI   FFh,A3
249e0: c520                      JRGE   24BF0h
249f0: 2f28                      SRL    7h,A8
24a00: 26e3                      SLL    17h,A3
24a10: 5468                      OR     A3,A8
24a20: 5408                      OR     A0,A8
24a30: 930e                      MOVE   A8,*A14+,1
24a40: 09af 005f                 MMFM   SP,A0-A4,A6
24a60: 0960                      RETS   
24a70: 4cc8                      MOVE   A6,A8
24a80: c0fa                      JR     24A30h
24a90: 930e                      MOVE   A8,*A14+,1
24aa0: 09af 005f                 MMFM   SP,A0-A4,A6
24ac0: 0960                      RETS   
24ad0: 0b43 ff00                 CMPI   FFh,A3
24af0: cb04                      JRNE   24B40h
24b00: 4801                      CMP    A0,A1
24b10: cb0a                      JRNE   24BC0h
24b20: c001                      JR     24B40h
24b30: 4c20                      MOVE   A1,A0
24b40: 09e8 0000 7f80            MOVI   7F800000h,A8
24b70: 5408                      OR     A0,A8
24b80: 930e                      MOVE   A8,*A14+,1
24b90: 09af 005f                 MMFM   SP,A0-A4,A6
24bb0: 0960                      RETS   
24bc0: 1880                      MOVK   4h,A0
24bd0: 5663                      CLR    A3
24be0: c008                      JR     24C70h
24bf0: 4c03                      MOVE   A0,A3
24c00: 0ba3 0000 7f80            ORI    7F800000h,A3
24c30: 18a0                      MOVK   5h,A0
24c40: c002                      JR     24C70h
24c50: 1980                      MOVK   Ch,A0
24c60: 5663                      CLR    A3
24c70: a3cf                      MOVE   A14,-*SP,1
24c80: 920e                      MOVE   A0,*A14+,1
24c90: 0d5f 6170 0002            CALLA  26170h
24cc0: 926e                      MOVE   A3,*A14+,1
24cd0: 09af 005f                 MMFM   SP,A0-A4,A6
24cf0: 0960                      RETS   

FS$DIV_R:
24d00: 07a8 0000 0000            MOVE   @0h,A8,1
24d30: ca1c                      JREQ   24F00h
24d40: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
24d70: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
24da0: d826 0000                 CEXEC  0,000013,0
24dc0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
24df0: 0960                      RETS   

FS$DIV:
24e00: 07a8 0000 0000            MOVE   @0h,A8,1
24e30: ca11                      JREQ   24F50h
24e40: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
24e70: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
24ea0: d826 0000                 CEXEC  0,000013,0
24ec0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
24ef0: 0960                      RETS   
24f00: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
24f20: a7c2                      MOVE   -*A14,A2,1
24f30: a7c4                      MOVE   -*A14,A4,1
24f40: c004                      JR     24F90h
24f50: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
24f70: a7c4                      MOVE   -*A14,A4,1
24f80: a7c2                      MOVE   -*A14,A2,1
24f90: 4c48                      MOVE   A2,A8
24fa0: 2528                      SLL    9h,A8
24fb0: 2f68                      SRL    5h,A8
24fc0: 0ba8 0000 0800            ORI    8000000h,A8
24ff0: 4c80                      MOVE   A4,A0
25000: 2520                      SLL    9h,A0
25010: 2fe0                      SRL    1h,A0
25020: 0ba0 0000 8000            ORI    80000000h,A0
25050: 2422                      SLL    1h,A2
25060: 4729                      SUBB   A9,A9
25070: 2424                      SLL    1h,A4
25080: 46c6                      SUBB   A6,A6
25090: 5726                      XOR    A9,A6
250a0: 27e6                      SLL    1Fh,A6
250b0: 2d02                      SRL    18h,A2
250c0: 2d04                      SRL    18h,A4
250d0: ca36                      JREQ   25440h
250e0: 0b44 ff00                 CMPI   FFh,A4
25100: ca24                      JREQ   25350h
25110: 0b42 ff00                 CMPI   FFh,A2
25130: ca19                      JREQ   252D0h
25140: 4c42                      MOVE   A2,A2
25150: ca21                      JREQ   25370h
25160: 4482                      SUB    A4,A2
25170: 5729                      CLR    A9
25180: 5a08                      DIVU   A0,A8
25190: 1c68                      BTST   1Ch,A8
251a0: ca02                      JREQ   251D0h
251b0: 1022                      INC    A2
251c0: 2fe8                      SRL    1h,A8
251d0: 1108                      ADDK   8h,A8
251e0: 1c68                      BTST   1Ch,A8
251f0: ca02                      JREQ   25220h
25200: 1022                      INC    A2
25210: c002                      JR     25240h
25220: 1422                      DEC    A2
25230: 2428                      SLL    1h,A8
25240: 0b88 0000 f000            ANDI   FFFFFFFh,A8
25270: 0b02 007f                 ADDI   7Fh,A2
25290: c617                      JRLE   25410h
252a0: 0b42 ff00                 CMPI   FFh,A2
252c0: c50f                      JRGE   253C0h
252d0: 2f68                      SRL    5h,A8
252e0: 26e2                      SLL    17h,A2
252f0: 54c2                      OR     A6,A2
25300: 5448                      OR     A2,A8
25310: 930e                      MOVE   A8,*A14+,1
25320: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
25340: 0960                      RETS   
25350: 4882                      CMP    A4,A2
25360: ca12                      JREQ   25490h
25370: 5708                      CLR    A8
25380: 930e                      MOVE   A8,*A14+,1
25390: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
253b0: 0960                      RETS   
253c0: 0ba6 0000 7f80            ORI    7F800000h,A6
253f0: 18e0                      MOVK   7h,A0
25400: c00c                      JR     254D0h
25410: 56c6                      CLR    A6
25420: 19c0                      MOVK   Eh,A0
25430: c009                      JR     254D0h
25440: 0ba6 0000 7f80            ORI    7F800000h,A6
25470: 19e0                      MOVK   Fh,A0
25480: c004                      JR     254D0h
25490: 0ba6 0000 3f80            ORI    3F800000h,A6
254c0: 1a00                      MOVK   10h,A0
254d0: a3cf                      MOVE   A14,-*SP,1
254e0: 920e                      MOVE   A0,*A14+,1
254f0: 0d5f 6170 0002            CALLA  26170h
25520: 92ce                      MOVE   A6,*A14+,1
25530: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
25550: 0960                      RETS   

FS$GE:
25560: a20f                      MOVE   A0,-*SP,1
25570: a7c0                      MOVE   -*A14,A0,1
25580: a7c8                      MOVE   -*A14,A8,1
25590: 1c00                      BTST   1Fh,A0
255a0: ca05                      JREQ   25600h
255b0: 1c08                      BTST   1Fh,A8
255c0: ca03                      JREQ   25600h
255d0: 4500                      SUB    A8,A0
255e0: 5708                      CLR    A8
255f0: 03a0                      NEG    A0
25600: 4808                      CMP    A0,A8
25610: 1828                      MOVK   1h,A8
25620: c501                      JRGE   25640h
25630: 5708                      CLR    A8
25640: 97e0                      MOVE   *SP+,A0,1
25650: 4d08                      MOVE   A8,A8
25660: 0960                      RETS   

FS$GT:
25670: a20f                      MOVE   A0,-*SP,1
25680: a7c0                      MOVE   -*A14,A0,1
25690: a7c8                      MOVE   -*A14,A8,1
256a0: 1c00                      BTST   1Fh,A0
256b0: ca05                      JREQ   25710h
256c0: 1c08                      BTST   1Fh,A8
256d0: ca03                      JREQ   25710h
256e0: 4500                      SUB    A8,A0
256f0: 5708                      CLR    A8
25700: 03a0                      NEG    A0
25710: 4808                      CMP    A0,A8
25720: 1828                      MOVK   1h,A8
25730: c701                      JRGT   25750h
25740: 5708                      CLR    A8
25750: 97e0                      MOVE   *SP+,A0,1
25760: 4d08                      MOVE   A8,A8
25770: 0960                      RETS   

FS$LE:
25780: a20f                      MOVE   A0,-*SP,1
25790: a7c0                      MOVE   -*A14,A0,1
257a0: a7c8                      MOVE   -*A14,A8,1
257b0: 1c00                      BTST   1Fh,A0
257c0: ca05                      JREQ   25820h
257d0: 1c08                      BTST   1Fh,A8
257e0: ca03                      JREQ   25820h
257f0: 4500                      SUB    A8,A0
25800: 5708                      CLR    A8
25810: 03a0                      NEG    A0
25820: 4808                      CMP    A0,A8
25830: 1828                      MOVK   1h,A8
25840: c601                      JRLE   25860h
25850: 5708                      CLR    A8
25860: 97e0                      MOVE   *SP+,A0,1
25870: 4d08                      MOVE   A8,A8
25880: 0960                      RETS   

FS$LT:
25890: a20f                      MOVE   A0,-*SP,1
258a0: a7c0                      MOVE   -*A14,A0,1
258b0: a7c8                      MOVE   -*A14,A8,1
258c0: 1c00                      BTST   1Fh,A0
258d0: ca05                      JREQ   25930h
258e0: 1c08                      BTST   1Fh,A8
258f0: ca03                      JREQ   25930h
25900: 4500                      SUB    A8,A0
25910: 5708                      CLR    A8
25920: 03a0                      NEG    A0
25930: 4808                      CMP    A0,A8
25940: 1828                      MOVK   1h,A8
25950: c401                      JRLT   25970h
25960: 5708                      CLR    A8
25970: 97e0                      MOVE   *SP+,A0,1
25980: 4d08                      MOVE   A8,A8
25990: 0960                      RETS   

FS$MUL:
259a0: 07a8 0000 0000            MOVE   @0h,A8,1
259d0: ca0c                      JREQ   25AA0h
259e0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
25a10: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
25a40: d822 0000                 CEXEC  0,000011,0
25a60: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
25a90: 0960                      RETS   
25aa0: 098f a840                 MMTM   SP,A0,A2,A4,A9
25ac0: a7c8                      MOVE   -*A14,A8,1
25ad0: a7c9                      MOVE   -*A14,A9,1
25ae0: 4d08                      MOVE   A8,A8
25af0: ca3d                      JREQ   25ED0h
25b00: 4d29                      MOVE   A9,A9
25b10: ca3b                      JREQ   25ED0h
25b20: 2428                      SLL    1h,A8
25b30: 4684                      SUBB   A4,A4
25b40: 2429                      SLL    1h,A9
25b50: 4600                      SUBB   A0,A0
25b60: 5604                      XOR    A0,A4
25b70: 27e4                      SLL    1Fh,A4
25b80: 4d00                      MOVE   A8,A0
25b90: 4d22                      MOVE   A9,A2
25ba0: 2d00                      SRL    18h,A0
25bb0: 2d02                      SRL    18h,A2
25bc0: 0b42 ff00                 CMPI   FFh,A2
25be0: ca34                      JREQ   25F30h
25bf0: 0b40 ff00                 CMPI   FFh,A0
25c10: ca30                      JREQ   25F20h
25c20: 4002                      ADD    A0,A2
25c30: 0be2 ff80                 SUBI   7Fh,A2
25c50: 2508                      SLL    8h,A8
25c60: 2fe8                      SRL    1h,A8
25c70: 0ba8 0000 8000            ORI    80000000h,A8
25ca0: 2509                      SLL    8h,A9
25cb0: 2fe9                      SRL    1h,A9
25cc0: 0ba9 0000 8000            ORI    80000000h,A9
25cf0: 5f28                      MPYU   A9,A8
25d00: ca1c                      JREQ   25ED0h
25d10: 1022                      INC    A2
25d20: 1c08                      BTST   1Fh,A8
25d30: cb02                      JRNE   25D60h
25d40: 1422                      DEC    A2
25d50: 2428                      SLL    1h,A8
25d60: 0b08 0080                 ADDI   80h,A8
25d80: c902                      JRNC   25DB0h
25d90: 1022                      INC    A2
25da0: c001                      JR     25DC0h
25db0: 2428                      SLL    1h,A8
25dc0: 4c42                      MOVE   A2,A2
25dd0: c424                      JRLT   26020h
25de0: ca0b                      JREQ   25EA0h
25df0: 0b42 ff00                 CMPI   FFh,A2
25e10: c517                      JRGE   25F90h
25e20: 2ee8                      SRL    9h,A8
25e30: 26e2                      SLL    17h,A2
25e40: 5448                      OR     A2,A8
25e50: 5488                      OR     A4,A8
25e60: 930e                      MOVE   A8,*A14+,1
25e70: 09af 0215                 MMFM   SP,A0,A2,A4,A9
25e90: 0960                      RETS   
25ea0: 4d08                      MOVE   A8,A8
25eb0: cb16                      JRNE   26020h
25ec0: c0f5                      JR     25E20h
25ed0: 5708                      CLR    A8
25ee0: 930e                      MOVE   A8,*A14+,1
25ef0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
25f10: 0960                      RETS   
25f20: 4c40                      MOVE   A2,A0
25f30: 4c00                      MOVE   A0,A0
25f40: ca0a                      JREQ   25FF0h
25f50: 09e8 0000 7ff0            MOVI   7FF00000h,A8
25f80: c0ec                      JR     25E50h
25f90: 09e9 0000 7ff0            MOVI   7FF00000h,A9
25fc0: 5489                      OR     A4,A9
25fd0: 18c0                      MOVK   6h,A0
25fe0: c005                      JR     26040h
25ff0: 5729                      CLR    A9
26000: 1960                      MOVK   Bh,A0
26010: c002                      JR     26040h
26020: 5729                      CLR    A9
26030: 19a0                      MOVK   Dh,A0
26040: a3cf                      MOVE   A14,-*SP,1
26050: 920e                      MOVE   A0,*A14+,1
26060: 0d5f 6170 0002            CALLA  26170h
26090: 932e                      MOVE   A9,*A14+,1
260a0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
260c0: 0960                      RETS   

FS$NE:
260d0: a20f                      MOVE   A0,-*SP,1
260e0: a7c0                      MOVE   -*A14,A0,1
260f0: a7c8                      MOVE   -*A14,A8,1
26100: 4808                      CMP    A0,A8
26110: 1828                      MOVK   1h,A8
26120: cb01                      JRNE   26140h
26130: 5708                      CLR    A8
26140: 97e0                      MOVE   *SP+,A0,1
26150: 4d08                      MOVE   A8,A8
26160: 0960                      RETS   

_fp_error:
26170: a3af                      MOVE   A13,-*SP,1
26180: 4dcd                      MOVE   A14,A13
26190: b7ee 0040                 MOVE   *SP(40h),A14,1
261b0: 97ed                      MOVE   *SP+,A13,1
261c0: 0962                      RETS   2h

_strcat:
261d0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
261f0: 4dcd                      MOVE   A14,A13
26200: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
26220: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
26240: 4d86                      MOVE   A12,A6
26250: 0568                      SETF   8h,1,0
26260: 9588                      MOVE   *A12+,A8,0
26270: cbfe                      JRNE   26260h
26280: 150c                      SUBK   8h,A12
26290: 9548                      MOVE   *A10+,A8,0
262a0: 910c                      MOVE   A8,*A12+,0
262b0: cbfd                      JRNE   26290h
262c0: 4cc8                      MOVE   A6,A8
262d0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
262f0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
26310: 0962                      RETS   2h

_strcpy:
26320: 098f 022c                 MMTM   SP,A6,A10,A12,A13
26340: 4dcd                      MOVE   A14,A13
26350: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
26370: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
26390: 4d86                      MOVE   A12,A6
263a0: 0568                      SETF   8h,1,0
263b0: 9548                      MOVE   *A10+,A8,0
263c0: 910c                      MOVE   A8,*A12+,0
263d0: cbfd                      JRNE   263B0h
263e0: 4cc8                      MOVE   A6,A8
263f0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
26410: 09af 3440                 MMFM   SP,A6,A10,A12,A13
26430: 0962                      RETS   2h

_strlen:
26440: 098f 002c                 MMTM   SP,A10,A12,A13
26460: 4dcd                      MOVE   A14,A13
26470: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
26490: 09cc ffff                 MOVI   FFFFh,A12
264b0: 0568                      SETF   8h,1,0
264c0: 102c                      INC    A12
264d0: 9548                      MOVE   *A10+,A8,0
264e0: cbfd                      JRNE   264C0h
264f0: 4d88                      MOVE   A12,A8
26500: b7ee 0080                 MOVE   *SP(80h),A14,1
26520: 09af 3400                 MMFM   SP,A10,A12,A13
26540: 0962                      RETS   2h
