; g900.rlm .text, 14047 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_ProcDSPCmds:
00000: 098f 000c                 MMTM   SP,A12,A13
00020: 4dcd                      MOVE   A14,A13
00030: 100e                      ADDK   20h,A14
00040: 1828                      MOVK   1h,A8
00050: 0550                      SETF   10h,0,0
00060: 810d                      MOVE   A8,*A13,0
00070: a3cf                      MOVE   A14,-*SP,1
00080: 09c8 0100                 MOVI   100h,A8
000a0: 930e                      MOVE   A8,*A14+,1
000b0: 09e8 7c00 0003            MOVI   37C00h,A8
000e0: 930e                      MOVE   A8,*A14+,1
000f0: 09e8 5344 5143            MOVI   51435344h,A8
00120: 930e                      MOVE   A8,*A14+,1
00130: 1868                      MOVK   3h,A8
00140: 930e                      MOVE   A8,*A14+,1
00150: 0d5f 0000 0000            CALLA  0h
00180: 0d5f b320 0001            CALLA  1B320h
001b0: c00f                      JR     2B0h
001c0: 07a8 7b80 0003            MOVE   @37B80h,A8,1
001f0: ca0b                      JREQ   2B0h
00200: a3cf                      MOVE   A14,-*SP,1
00210: 09e8 8420 0003            MOVI   38420h,A8
00240: 930e                      MOVE   A8,*A14+,1
00250: d60e 7b80 0003            MOVE   @37B80h,*A14+,1
00280: 0d5f 0000 0000            CALLA  0h
002b0: a3cf                      MOVE   A14,-*SP,1
002c0: 4508                      SUB    A8,A8
002d0: 930e                      MOVE   A8,*A14+,1
002e0: 09e8 7b60 0003            MOVI   37B60h,A8
00310: 930e                      MOVE   A8,*A14+,1
00320: 1868                      MOVK   3h,A8
00330: 930e                      MOVE   A8,*A14+,1
00340: 0d5f 0000 0000            CALLA  0h
00370: 4d0c                      MOVE   A8,A12
00380: cbf2                      JRNE   2B0h
00390: 1828                      MOVK   1h,A8
003a0: 0788 8420 0003            MOVE   A8,@38420h,1
003d0: 07a8 7ba0 0003            MOVE   @37BA0h,A8,1
00400: 0b48 ffb6                 CMPI   49h,A8
00420: c306                      JRHI   490h
00430: 24a8                      SLL    5h,A8
00440: 0b28 6e00 0003            ADDI   36E00h,A8
00470: 8708                      MOVE   *A8,A8,1
00480: 0168                      JUMP   A8
00490: 186c                      MOVK   3h,A12
004a0: c000 02c3                 JR     30F0h
004c0: a3cf                      MOVE   A14,-*SP,1
004d0: 93ae                      MOVE   A13,*A14+,1
004e0: 0d5f 4a00 0001            CALLA  14A00h
00510: a3cf                      MOVE   A14,-*SP,1
00520: 09e8 7bc0 0003            MOVI   37BC0h,A8
00550: 930e                      MOVE   A8,*A14+,1
00560: 0d5f f060 0001            CALLA  1F060h
00590: 4d0c                      MOVE   A8,A12
005a0: 1828                      MOVK   1h,A8
005b0: 0550                      SETF   10h,0,0
005c0: 0588 84f0 0003            MOVE   A8,@384F0h,0
005f0: c000 02ae                 JR     30F0h
00610: a3cf                      MOVE   A14,-*SP,1
00620: 09e8 7bc0 0003            MOVI   37BC0h,A8
00650: 930e                      MOVE   A8,*A14+,1
00660: 0d5f f1e0 0002            CALLA  2F1E0h
00690: 4d0c                      MOVE   A8,A12
006a0: c000 02a3                 JR     30F0h
006c0: a3cf                      MOVE   A14,-*SP,1
006d0: 09e8 7bc0 0003            MOVI   37BC0h,A8
00700: 930e                      MOVE   A8,*A14+,1
00710: 0d5f eb50 0002            CALLA  2EB50h
00740: 4d0c                      MOVE   A8,A12
00750: c000 0298                 JR     30F0h
00770: a3cf                      MOVE   A14,-*SP,1
00780: 09e8 8448 0003            MOVI   38448h,A8
007b0: 930e                      MOVE   A8,*A14+,1
007c0: 09e8 7bc0 0003            MOVI   37BC0h,A8
007f0: 930e                      MOVE   A8,*A14+,1
00800: 0d5f e750 0002            CALLA  2E750h
00830: 4d0c                      MOVE   A8,A12
00840: cb00 0289                 JRNE   30F0h
00860: 1868                      MOVK   3h,A8
00870: 0788 8420 0003            MOVE   A8,@38420h,1
008a0: c000 0283                 JR     30F0h
008c0: a3cf                      MOVE   A14,-*SP,1
008d0: 09e8 7bc0 0003            MOVI   37BC0h,A8
00900: 930e                      MOVE   A8,*A14+,1
00910: 0d5f ad10 0001            CALLA  1AD10h
00940: 4d0c                      MOVE   A8,A12
00950: c000 0278                 JR     30F0h
00970: a3cf                      MOVE   A14,-*SP,1
00980: 09e8 7bc0 0003            MOVI   37BC0h,A8
009b0: 930e                      MOVE   A8,*A14+,1
009c0: 0d5f 11a0 0003            CALLA  311A0h
009f0: 4d0c                      MOVE   A8,A12
00a00: c000 026d                 JR     30F0h
00a20: a3cf                      MOVE   A14,-*SP,1
00a30: 09e8 7bc0 0003            MOVI   37BC0h,A8
00a60: 930e                      MOVE   A8,*A14+,1
00a70: 0d5f 4650 0001            CALLA  14650h
00aa0: 4d0c                      MOVE   A8,A12
00ab0: c000 0262                 JR     30F0h
00ad0: a3cf                      MOVE   A14,-*SP,1
00ae0: 09e8 7bc0 0003            MOVI   37BC0h,A8
00b10: 930e                      MOVE   A8,*A14+,1
00b20: 0d5f 4370 0001            CALLA  14370h
00b50: 4d0c                      MOVE   A8,A12
00b60: c000 0257                 JR     30F0h
00b80: a3cf                      MOVE   A14,-*SP,1
00b90: 09e8 7bc0 0003            MOVI   37BC0h,A8
00bc0: 930e                      MOVE   A8,*A14+,1
00bd0: 0d5f a600 0001            CALLA  1A600h
00c00: 4d0c                      MOVE   A8,A12
00c10: c000 024c                 JR     30F0h
00c30: a3cf                      MOVE   A14,-*SP,1
00c40: 09e8 7bc0 0003            MOVI   37BC0h,A8
00c70: 930e                      MOVE   A8,*A14+,1
00c80: 0d5f 3cf0 0002            CALLA  23CF0h
00cb0: 4d0c                      MOVE   A8,A12
00cc0: c000 0241                 JR     30F0h
00ce0: a3cf                      MOVE   A14,-*SP,1
00cf0: 09e8 8448 0003            MOVI   38448h,A8
00d20: 930e                      MOVE   A8,*A14+,1
00d30: 09e8 7bc0 0003            MOVI   37BC0h,A8
00d60: 930e                      MOVE   A8,*A14+,1
00d70: 0d5f 4480 0002            CALLA  24480h
00da0: 4d0c                      MOVE   A8,A12
00db0: cb00 0232                 JRNE   30F0h
00dd0: 1868                      MOVK   3h,A8
00de0: 0788 8420 0003            MOVE   A8,@38420h,1
00e10: c000 022c                 JR     30F0h
00e30: a3cf                      MOVE   A14,-*SP,1
00e40: 09e8 7bc0 0003            MOVI   37BC0h,A8
00e70: 930e                      MOVE   A8,*A14+,1
00e80: 0d5f 3fd0 0001            CALLA  13FD0h
00eb0: 05e8 8440 0003            MOVB   A8,@38440h
00ee0: c000 021f                 JR     30F0h
00f00: a3cf                      MOVE   A14,-*SP,1
00f10: 09e8 7bc0 0003            MOVI   37BC0h,A8
00f40: 930e                      MOVE   A8,*A14+,1
00f50: 0d5f 26a0 0002            CALLA  226A0h
00f80: 4d0c                      MOVE   A8,A12
00f90: c000 0214                 JR     30F0h
00fb0: a3cf                      MOVE   A14,-*SP,1
00fc0: 09e8 7bc0 0003            MOVI   37BC0h,A8
00ff0: 930e                      MOVE   A8,*A14+,1
01000: 0d5f 22a0 0002            CALLA  222A0h
01030: 4d0c                      MOVE   A8,A12
01040: c000 0209                 JR     30F0h
01060: a3cf                      MOVE   A14,-*SP,1
01070: 09e8 7bc0 0003            MOVI   37BC0h,A8
010a0: 930e                      MOVE   A8,*A14+,1
010b0: 0d5f 9e80 0001            CALLA  19E80h
010e0: 4d0c                      MOVE   A8,A12
010f0: c000 01fe                 JR     30F0h
01110: a3cf                      MOVE   A14,-*SP,1
01120: 09e8 7bc0 0003            MOVI   37BC0h,A8
01150: 930e                      MOVE   A8,*A14+,1
01160: 0d5f 3c30 0001            CALLA  13C30h
01190: 05e8 8440 0003            MOVB   A8,@38440h
011c0: c000 01f1                 JR     30F0h
011e0: a3cf                      MOVE   A14,-*SP,1
011f0: 09e8 7bc0 0003            MOVI   37BC0h,A8
01220: 930e                      MOVE   A8,*A14+,1
01230: 0d5f 1f70 0002            CALLA  21F70h
01260: 4d0c                      MOVE   A8,A12
01270: c000 01e6                 JR     30F0h
01290: a3cf                      MOVE   A14,-*SP,1
012a0: 09e8 7bc0 0003            MOVI   37BC0h,A8
012d0: 930e                      MOVE   A8,*A14+,1
012e0: 0d5f 0e50 0002            CALLA  20E50h
01310: 4d0c                      MOVE   A8,A12
01320: c000 01db                 JR     30F0h
01340: a3cf                      MOVE   A14,-*SP,1
01350: 09e8 7bc0 0003            MOVI   37BC0h,A8
01380: 930e                      MOVE   A8,*A14+,1
01390: 0d5f 0800 0002            CALLA  20800h
013c0: 4d0c                      MOVE   A8,A12
013d0: c000 01d0                 JR     30F0h
013f0: a3cf                      MOVE   A14,-*SP,1
01400: 09e8 7bc0 0003            MOVI   37BC0h,A8
01430: 930e                      MOVE   A8,*A14+,1
01440: 0d5f bed0 0001            CALLA  1BED0h
01470: 4d0c                      MOVE   A8,A12
01480: c000 01c5                 JR     30F0h
014a0: a3cf                      MOVE   A14,-*SP,1
014b0: 09e8 7bc0 0003            MOVI   37BC0h,A8
014e0: 930e                      MOVE   A8,*A14+,1
014f0: 0d5f 5a10 0001            CALLA  15A10h
01520: 4d0c                      MOVE   A8,A12
01530: c000 01ba                 JR     30F0h
01550: a3cf                      MOVE   A14,-*SP,1
01560: 09e8 7bc0 0003            MOVI   37BC0h,A8
01590: 930e                      MOVE   A8,*A14+,1
015a0: 0d5f 92a0 0002            CALLA  292A0h
015d0: 4d0c                      MOVE   A8,A12
015e0: c000 01af                 JR     30F0h
01600: a3cf                      MOVE   A14,-*SP,1
01610: 09e8 7bc0 0003            MOVI   37BC0h,A8
01640: 930e                      MOVE   A8,*A14+,1
01650: 0d5f 6060 0002            CALLA  26060h
01680: 4d0c                      MOVE   A8,A12
01690: c000 01a4                 JR     30F0h
016b0: a3cf                      MOVE   A14,-*SP,1
016c0: 09e8 7bc0 0003            MOVI   37BC0h,A8
016f0: 930e                      MOVE   A8,*A14+,1
01700: 0d5f 4c60 0002            CALLA  24C60h
01730: 4d0c                      MOVE   A8,A12
01740: c000 0199                 JR     30F0h
01760: a3cf                      MOVE   A14,-*SP,1
01770: 09e8 7bc0 0003            MOVI   37BC0h,A8
017a0: 930e                      MOVE   A8,*A14+,1
017b0: 0d5f 31e0 0002            CALLA  231E0h
017e0: 4d0c                      MOVE   A8,A12
017f0: c000 018e                 JR     30F0h
01810: a3cf                      MOVE   A14,-*SP,1
01820: 09e8 7bc0 0003            MOVI   37BC0h,A8
01850: 930e                      MOVE   A8,*A14+,1
01860: 0d5f 54e0 0002            CALLA  254E0h
01890: 4d0c                      MOVE   A8,A12
018a0: c000 0183                 JR     30F0h
018c0: a3cf                      MOVE   A14,-*SP,1
018d0: 09e8 7bc0 0003            MOVI   37BC0h,A8
01900: 930e                      MOVE   A8,*A14+,1
01910: 0d5f 4f40 0002            CALLA  24F40h
01940: 4d0c                      MOVE   A8,A12
01950: c000 0178                 JR     30F0h
01970: a3cf                      MOVE   A14,-*SP,1
01980: 09e8 7bc0 0003            MOVI   37BC0h,A8
019b0: 930e                      MOVE   A8,*A14+,1
019c0: 0d5f bb40 0001            CALLA  1BB40h
019f0: 4d0c                      MOVE   A8,A12
01a00: c000 016d                 JR     30F0h
01a20: a3cf                      MOVE   A14,-*SP,1
01a30: 09e8 7bc0 0003            MOVI   37BC0h,A8
01a60: 930e                      MOVE   A8,*A14+,1
01a70: 0d5f 6a40 0002            CALLA  26A40h
01aa0: 4d0c                      MOVE   A8,A12
01ab0: c000 0162                 JR     30F0h
01ad0: a3cf                      MOVE   A14,-*SP,1
01ae0: 09e8 7bc0 0003            MOVI   37BC0h,A8
01b10: 930e                      MOVE   A8,*A14+,1
01b20: 0d5f 96b0 0001            CALLA  196B0h
01b50: 4d0c                      MOVE   A8,A12
01b60: c000 0157                 JR     30F0h
01b80: a3cf                      MOVE   A14,-*SP,1
01b90: 09e8 7bc0 0003            MOVI   37BC0h,A8
01bc0: 930e                      MOVE   A8,*A14+,1
01bd0: 0d5f 8590 0001            CALLA  18590h
01c00: 4d0c                      MOVE   A8,A12
01c10: c000 014c                 JR     30F0h
01c30: a3cf                      MOVE   A14,-*SP,1
01c40: 09e8 7bc0 0003            MOVI   37BC0h,A8
01c70: 930e                      MOVE   A8,*A14+,1
01c80: 0d5f 8250 0001            CALLA  18250h
01cb0: 4d0c                      MOVE   A8,A12
01cc0: c000 0141                 JR     30F0h
01ce0: a3cf                      MOVE   A14,-*SP,1
01cf0: 09e8 7bc0 0003            MOVI   37BC0h,A8
01d20: 930e                      MOVE   A8,*A14+,1
01d30: 0d5f 7300 0001            CALLA  17300h
01d60: 4d0c                      MOVE   A8,A12
01d70: c000 0136                 JR     30F0h
01d90: a3cf                      MOVE   A14,-*SP,1
01da0: 09e8 7bc0 0003            MOVI   37BC0h,A8
01dd0: 930e                      MOVE   A8,*A14+,1
01de0: 0d5f f890 0000            CALLA  F890h
01e10: 4d0c                      MOVE   A8,A12
01e20: c000 012b                 JR     30F0h
01e40: a3cf                      MOVE   A14,-*SP,1
01e50: 09e8 7bc0 0003            MOVI   37BC0h,A8
01e80: 930e                      MOVE   A8,*A14+,1
01e90: 0d5f 5440 0001            CALLA  15440h
01ec0: 4d0c                      MOVE   A8,A12
01ed0: c000 0120                 JR     30F0h
01ef0: a3cf                      MOVE   A14,-*SP,1
01f00: 09e8 7bc0 0003            MOVI   37BC0h,A8
01f30: 930e                      MOVE   A8,*A14+,1
01f40: 0d5f 6380 0001            CALLA  16380h
01f70: 4d0c                      MOVE   A8,A12
01f80: c000 0115                 JR     30F0h
01fa0: a3cf                      MOVE   A14,-*SP,1
01fb0: 09e8 8448 0003            MOVI   38448h,A8
01fe0: 930e                      MOVE   A8,*A14+,1
01ff0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02020: 930e                      MOVE   A8,*A14+,1
02030: 0d5f 6b20 0001            CALLA  16B20h
02060: 4d0c                      MOVE   A8,A12
02070: cb00 0106                 JRNE   30F0h
02090: 1868                      MOVK   3h,A8
020a0: 0788 8420 0003            MOVE   A8,@38420h,1
020d0: c000 0100                 JR     30F0h
020f0: a3cf                      MOVE   A14,-*SP,1
02100: 09e8 7bc0 0003            MOVI   37BC0h,A8
02130: 930e                      MOVE   A8,*A14+,1
02140: 0d5f 9e10 0002            CALLA  29E10h
02170: 4d0c                      MOVE   A8,A12
02180: c000 00f5                 JR     30F0h
021a0: a3cf                      MOVE   A14,-*SP,1
021b0: 09e8 7bc0 0003            MOVI   37BC0h,A8
021e0: 930e                      MOVE   A8,*A14+,1
021f0: 0d5f 96e0 0002            CALLA  296E0h
02220: 4d0c                      MOVE   A8,A12
02230: c000 00ea                 JR     30F0h
02250: a3cf                      MOVE   A14,-*SP,1
02260: 09e8 7bc0 0003            MOVI   37BC0h,A8
02290: 930e                      MOVE   A8,*A14+,1
022a0: 0d5f 4a00 0001            CALLA  14A00h
022d0: 4d0c                      MOVE   A8,A12
022e0: c000 00df                 JR     30F0h
02300: a3cf                      MOVE   A14,-*SP,1
02310: 09e8 7bc0 0003            MOVI   37BC0h,A8
02340: 930e                      MOVE   A8,*A14+,1
02350: 0d5f f060 0001            CALLA  1F060h
02380: 4d0c                      MOVE   A8,A12
02390: c000 00d4                 JR     30F0h
023b0: a3cf                      MOVE   A14,-*SP,1
023c0: 09e8 7bc0 0003            MOVI   37BC0h,A8
023f0: 930e                      MOVE   A8,*A14+,1
02400: 0d5f 3230 0001            CALLA  13230h
02430: 4d0c                      MOVE   A8,A12
02440: c000 00c9                 JR     30F0h
02460: a3cf                      MOVE   A14,-*SP,1
02470: 09e8 7bc0 0003            MOVI   37BC0h,A8
024a0: 930e                      MOVE   A8,*A14+,1
024b0: 0d5f 2150 0001            CALLA  12150h
024e0: 4d0c                      MOVE   A8,A12
024f0: c000 00be                 JR     30F0h
02510: a3cf                      MOVE   A14,-*SP,1
02520: 09e8 7bc0 0003            MOVI   37BC0h,A8
02550: 930e                      MOVE   A8,*A14+,1
02560: 0d5f 13c0 0001            CALLA  113C0h
02590: 4d0c                      MOVE   A8,A12
025a0: c000 00b3                 JR     30F0h
025c0: a3cf                      MOVE   A14,-*SP,1
025d0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02600: 930e                      MOVE   A8,*A14+,1
02610: 0d5f 38f0 0001            CALLA  138F0h
02640: 4d0c                      MOVE   A8,A12
02650: c000 00a8                 JR     30F0h
02670: a3cf                      MOVE   A14,-*SP,1
02680: 09e8 7bc0 0003            MOVI   37BC0h,A8
026b0: 930e                      MOVE   A8,*A14+,1
026c0: 0d5f 0650 0001            CALLA  10650h
026f0: 4d0c                      MOVE   A8,A12
02700: c000 009d                 JR     30F0h
02720: a3cf                      MOVE   A14,-*SP,1
02730: 09e8 7bc0 0003            MOVI   37BC0h,A8
02760: 930e                      MOVE   A8,*A14+,1
02770: 0d5f 0060 0001            CALLA  10060h
027a0: 4d0c                      MOVE   A8,A12
027b0: c000 0092                 JR     30F0h
027d0: a3cf                      MOVE   A14,-*SP,1
027e0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02810: 930e                      MOVE   A8,*A14+,1
02820: 0d5f f570 0000            CALLA  F570h
02850: 4d0c                      MOVE   A8,A12
02860: c000 0087                 JR     30F0h
02880: a3cf                      MOVE   A14,-*SP,1
02890: 09e8 7bc0 0003            MOVI   37BC0h,A8
028c0: 930e                      MOVE   A8,*A14+,1
028d0: 0d5f eb20 0000            CALLA  EB20h
02900: 4d0c                      MOVE   A8,A12
02910: c07d                      JR     30F0h
02920: a3cf                      MOVE   A14,-*SP,1
02930: 09e8 7bc0 0003            MOVI   37BC0h,A8
02960: 930e                      MOVE   A8,*A14+,1
02970: 0d5f c8d0 0000            CALLA  C8D0h
029a0: 4d0c                      MOVE   A8,A12
029b0: c073                      JR     30F0h
029c0: a3cf                      MOVE   A14,-*SP,1
029d0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02a00: 930e                      MOVE   A8,*A14+,1
02a10: 0d5f d930 0000            CALLA  D930h
02a40: 4d0c                      MOVE   A8,A12
02a50: c069                      JR     30F0h
02a60: 184c                      MOVK   2h,A12
02a70: c067                      JR     30F0h
02a80: 184c                      MOVK   2h,A12
02a90: c065                      JR     30F0h
02aa0: 184c                      MOVK   2h,A12
02ab0: c063                      JR     30F0h
02ac0: a3cf                      MOVE   A14,-*SP,1
02ad0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02b00: 930e                      MOVE   A8,*A14+,1
02b10: 0d5f c560 0000            CALLA  C560h
02b40: 4d0c                      MOVE   A8,A12
02b50: c059                      JR     30F0h
02b60: a3cf                      MOVE   A14,-*SP,1
02b70: 09e8 7bc0 0003            MOVI   37BC0h,A8
02ba0: 930e                      MOVE   A8,*A14+,1
02bb0: 0d5f c1f0 0000            CALLA  C1F0h
02be0: 4d0c                      MOVE   A8,A12
02bf0: c04f                      JR     30F0h
02c00: a3cf                      MOVE   A14,-*SP,1
02c10: 09e8 7bc0 0003            MOVI   37BC0h,A8
02c40: 930e                      MOVE   A8,*A14+,1
02c50: 0d5f be80 0000            CALLA  BE80h
02c80: 4d0c                      MOVE   A8,A12
02c90: c045                      JR     30F0h
02ca0: a3cf                      MOVE   A14,-*SP,1
02cb0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02ce0: 930e                      MOVE   A8,*A14+,1
02cf0: 0d5f ab50 0000            CALLA  AB50h
02d20: 4d0c                      MOVE   A8,A12
02d30: c03b                      JR     30F0h
02d40: a3cf                      MOVE   A14,-*SP,1
02d50: 09e8 7bc0 0003            MOVI   37BC0h,A8
02d80: 930e                      MOVE   A8,*A14+,1
02d90: 0d5f aec0 0000            CALLA  AEC0h
02dc0: 4d0c                      MOVE   A8,A12
02dd0: c031                      JR     30F0h
02de0: a3cf                      MOVE   A14,-*SP,1
02df0: 09e8 7bc0 0003            MOVI   37BC0h,A8
02e20: 930e                      MOVE   A8,*A14+,1
02e30: 0d5f bb40 0000            CALLA  BB40h
02e60: 4d0c                      MOVE   A8,A12
02e70: c027                      JR     30F0h
02e80: a3cf                      MOVE   A14,-*SP,1
02e90: 09e8 7bc0 0003            MOVI   37BC0h,A8
02ec0: 930e                      MOVE   A8,*A14+,1
02ed0: 0d5f b670 0000            CALLA  B670h
02f00: 4d0c                      MOVE   A8,A12
02f10: c01d                      JR     30F0h
02f20: a3cf                      MOVE   A14,-*SP,1
02f30: 09e8 7bc0 0003            MOVI   37BC0h,A8
02f60: 930e                      MOVE   A8,*A14+,1
02f70: 0d5f b330 0000            CALLA  B330h
02fa0: 4d0c                      MOVE   A8,A12
02fb0: c013                      JR     30F0h
02fc0: a3cf                      MOVE   A14,-*SP,1
02fd0: 09e8 7bc0 0003            MOVI   37BC0h,A8
03000: 930e                      MOVE   A8,*A14+,1
03010: 0d5f d160 0000            CALLA  D160h
03040: 4d0c                      MOVE   A8,A12
03050: c009                      JR     30F0h
03060: a3cf                      MOVE   A14,-*SP,1
03070: 09e8 7bc0 0003            MOVI   37BC0h,A8
030a0: 930e                      MOVE   A8,*A14+,1
030b0: 0d5f 3700 0002            CALLA  23700h
030e0: 4d0c                      MOVE   A8,A12
030f0: 05ec 8440 0003            MOVB   A12,@38440h
03120: 148c                      SUBK   4h,A12
03130: cb00 fd07                 JRNE   1C0h
03150: 458c                      SUB    A12,A12
03160: 07ac 7b80 0003            MOVE   @37B80h,A12,1
03190: ca09                      JREQ   3230h
031a0: a3cf                      MOVE   A14,-*SP,1
031b0: 09e8 8420 0003            MOVI   38420h,A8
031e0: 930e                      MOVE   A8,*A14+,1
031f0: 938e                      MOVE   A12,*A14+,1
03200: 0d5f 0000 0000            CALLA  0h
03230: a3cf                      MOVE   A14,-*SP,1
03240: 09e8 7b60 0003            MOVI   37B60h,A8
03270: 930e                      MOVE   A8,*A14+,1
03280: 1868                      MOVK   3h,A8
03290: 930e                      MOVE   A8,*A14+,1
032a0: 0d5f 0000 0000            CALLA  0h
032d0: 4d0c                      MOVE   A8,A12
032e0: cb00 fcfb                 JRNE   2B0h
03300: a3cf                      MOVE   A14,-*SP,1
03310: 4508                      SUB    A8,A8
03320: 930e                      MOVE   A8,*A14+,1
03330: 09e8 7b60 0003            MOVI   37B60h,A8
03360: 930e                      MOVE   A8,*A14+,1
03370: 1868                      MOVK   3h,A8
03380: 930e                      MOVE   A8,*A14+,1
03390: 0d5f 0000 0000            CALLA  0h
033c0: 4d0c                      MOVE   A8,A12
033d0: cb00 fcec                 JRNE   2B0h
033f0: c0d6                      JR     3160h

_WaitForDSPCommand:
03400: 098f 002c                 MMTM   SP,A10,A12,A13
03420: 4dcd                      MOVE   A14,A13
03430: 07a8 a560 0003            MOVE   @3A560h,A8,1
03460: cb4c                      JRNE   3930h
03470: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
03490: cb3a                      JRNE   3840h
034a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
034d0: 0b28 8000 0000            ADDI   8000h,A8
03500: 8708                      MOVE   *A8,A8,1
03510: 0b88 ff00 ffff            ANDI   FFh,A8
03540: ca59                      JREQ   3AE0h
03550: 07a8 a560 0003            MOVE   @3A560h,A8,1
03580: cb1b                      JRNE   3740h
03590: a3cf                      MOVE   A14,-*SP,1
035a0: 1808                      MOVK   20h,A8
035b0: 930e                      MOVE   A8,*A14+,1
035c0: 09c8 4100                 MOVI   4100h,A8
035e0: 930e                      MOVE   A8,*A14+,1
035f0: 0d5f 0000 0000            CALLA  0h
03620: 4f0e                      MOVE   A8,B14
03630: 1748                      SUBK   1Ah,A8
03640: ca51                      JREQ   3B60h
03650: 07a8 7b00 0003            MOVE   @37B00h,A8,1
03680: 0b28 8000 0000            ADDI   8000h,A8
036b0: 8708                      MOVE   *A8,A8,1
036c0: 0b88 ff00 ffff            ANDI   FFh,A8
036f0: ca3e                      JREQ   3AE0h
03700: 07a8 a560 0003            MOVE   @3A560h,A8,1
03730: cae5                      JREQ   3590h
03740: 07a8 7b00 0003            MOVE   @37B00h,A8,1
03770: 0b28 8000 0000            ADDI   8000h,A8
037a0: 8708                      MOVE   *A8,A8,1
037b0: 0b88 ff00 ffff            ANDI   FFh,A8
037e0: cb14                      JRNE   3930h
037f0: c02e                      JR     3AE0h
03800: 07a8 a560 0003            MOVE   @3A560h,A8,1
03830: cb0f                      JRNE   3930h
03840: 07a8 7b00 0003            MOVE   @37B00h,A8,1
03870: 0b28 8000 0000            ADDI   8000h,A8
038a0: 8708                      MOVE   *A8,A8,1
038b0: 0b88 ff00 ffff            ANDI   FFh,A8
038e0: cbf1                      JRNE   3800h
038f0: 07a8 a560 0003            MOVE   @3A560h,A8,1
03920: ca19                      JREQ   3AC0h
03930: 07a8 7ae0 0003            MOVE   @37AE0h,A8,1
03960: 188c                      MOVK   4h,A12
03970: 870a                      MOVE   *A8,A10,1
03980: 538a                      ANDN   A12,A10
03990: 8348                      MOVE   A10,*A8,1
039a0: 870a                      MOVE   *A8,A10,1
039b0: 558a                      OR     A12,A10
039c0: 8348                      MOVE   A10,*A8,1
039d0: a3cf                      MOVE   A14,-*SP,1
039e0: 182a                      MOVK   1h,A10
039f0: 934e                      MOVE   A10,*A14+,1
03a00: 09ca 0800                 MOVI   800h,A10
03a20: 934e                      MOVE   A10,*A14+,1
03a30: 0d5f 0000 0000            CALLA  0h
03a60: 4508                      SUB    A8,A8
03a70: 0788 a560 0003            MOVE   A8,@3A560h,1
03aa0: 4d88                      MOVE   A12,A8
03ab0: c00b                      JR     3B70h
03ac0: 4508                      SUB    A8,A8
03ad0: c009                      JR     3B70h
03ae0: 07ac a560 0003            MOVE   @3A560h,A12,1
03b10: ca04                      JREQ   3B60h
03b20: 454a                      SUB    A10,A10
03b30: 078a a560 0003            MOVE   A10,@3A560h,1
03b60: 4508                      SUB    A8,A8
03b70: b7ee 0080                 MOVE   *SP(80h),A14,1
03b90: 09af 3400                 MMFM   SP,A10,A12,A13
03bb0: 0962                      RETS   2h

_cp_dsp_init:
03bc0: 098f 002c                 MMTM   SP,A10,A12,A13
03be0: 4dcd                      MOVE   A14,A13
03bf0: 0b0e 0080                 ADDI   80h,A14
03c10: 4da8                      MOVE   A13,A8
03c20: 0b08 0040                 ADDI   40h,A8
03c40: 09ec 7740 0003            MOVI   37740h,A12
03c70: 9b88                      MOVE   *A12+,*A8+,1
03c80: 0550                      SETF   10h,0,0
03c90: 8988                      MOVE   *A12,*A8,0
03ca0: a3cf                      MOVE   A14,-*SP,1
03cb0: 4dac                      MOVE   A13,A12
03cc0: 0b0c 0040                 ADDI   40h,A12
03ce0: 938e                      MOVE   A12,*A14+,1
03cf0: 1828                      MOVK   1h,A8
03d00: 930e                      MOVE   A8,*A14+,1
03d10: 0d5f 0000 0000            CALLA  0h
03d40: 830d                      MOVE   A8,*A13,1
03d50: 3988                      DSJS   A8,3E20h
03d60: a3cf                      MOVE   A14,-*SP,1
03d70: 4508                      SUB    A8,A8
03d80: 930e                      MOVE   A8,*A14+,1
03d90: 1828                      MOVK   1h,A8
03da0: 930e                      MOVE   A8,*A14+,1
03db0: 930e                      MOVE   A8,*A14+,1
03dc0: 1848                      MOVK   2h,A8
03dd0: 930e                      MOVE   A8,*A14+,1
03de0: 0d5f 0000 0000            CALLA  0h
03e10: 830d                      MOVE   A8,*A13,1
03e20: 09e8 0000 6048            MOVI   60480000h,A8
03e50: 0788 7b00 0003            MOVE   A8,@37B00h,1
03e80: 458c                      SUB    A12,A12
03e90: 0b28 9984 0000            ADDI   9984h,A8
03ec0: 0561                      SETF   1h,1,0
03ed0: 8188                      MOVE   A12,*A8,0
03ee0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
03f10: 4508                      SUB    A8,A8
03f20: 0b2c 9985 0000            ADDI   9985h,A12
03f50: 810c                      MOVE   A8,*A12,0
03f60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
03f90: 0b2c 99a4 0000            ADDI   99A4h,A12
03fc0: 810c                      MOVE   A8,*A12,0
03fd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04000: 0b2c 99a5 0000            ADDI   99A5h,A12
04030: 810c                      MOVE   A8,*A12,0
04040: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04070: 0b2c 9980 0000            ADDI   9980h,A12
040a0: 810c                      MOVE   A8,*A12,0
040b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
040e0: 0b2c 9981 0000            ADDI   9981h,A12
04110: 810c                      MOVE   A8,*A12,0
04120: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04150: 0b2c 9982 0000            ADDI   9982h,A12
04180: 810c                      MOVE   A8,*A12,0
04190: 07ac 7b00 0003            MOVE   @37B00h,A12,1
041c0: 0b2c 9983 0000            ADDI   9983h,A12
041f0: 810c                      MOVE   A8,*A12,0
04200: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04230: 0b2c 99a0 0000            ADDI   99A0h,A12
04260: 810c                      MOVE   A8,*A12,0
04270: 07ac 7b00 0003            MOVE   @37B00h,A12,1
042a0: 0b2c 99a1 0000            ADDI   99A1h,A12
042d0: 810c                      MOVE   A8,*A12,0
042e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04310: 0b2c 99a2 0000            ADDI   99A2h,A12
04340: 810c                      MOVE   A8,*A12,0
04350: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04380: 0b2c 99a3 0000            ADDI   99A3h,A12
043b0: 810c                      MOVE   A8,*A12,0
043c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
043f0: 0b2c 9987 0000            ADDI   9987h,A12
04420: 810c                      MOVE   A8,*A12,0
04430: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04460: 0b2c 99a7 0000            ADDI   99A7h,A12
04490: 810c                      MOVE   A8,*A12,0
044a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
044d0: 0b2c 8960 0000            ADDI   8960h,A12
04500: 810c                      MOVE   A8,*A12,0
04510: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04540: 0b2c 8961 0000            ADDI   8961h,A12
04570: 810c                      MOVE   A8,*A12,0
04580: 07ac 7b00 0003            MOVE   @37B00h,A12,1
045b0: 0b2c 8962 0000            ADDI   8962h,A12
045e0: 810c                      MOVE   A8,*A12,0
045f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04620: 0b2c 8963 0000            ADDI   8963h,A12
04650: 810c                      MOVE   A8,*A12,0
04660: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04690: 09c8 ffff                 MOVI   FFFFh,A8
046b0: 0b2c 8964 0000            ADDI   8964h,A12
046e0: 810c                      MOVE   A8,*A12,0
046f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04720: 4508                      SUB    A8,A8
04730: 0b2c 8965 0000            ADDI   8965h,A12
04760: 810c                      MOVE   A8,*A12,0
04770: 07ac 7b00 0003            MOVE   @37B00h,A12,1
047a0: 0b2c 8966 0000            ADDI   8966h,A12
047d0: 810c                      MOVE   A8,*A12,0
047e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04810: 1828                      MOVK   1h,A8
04820: 0b2c 8860 0000            ADDI   8860h,A12
04850: 830c                      MOVE   A8,*A12,1
04860: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04890: 0b2c 8880 0000            ADDI   8880h,A12
048c0: 830c                      MOVE   A8,*A12,1
048d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04900: 0b2c 88a0 0000            ADDI   88A0h,A12
04930: 830c                      MOVE   A8,*A12,1
04940: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04970: 0b2c 88c0 0000            ADDI   88C0h,A12
049a0: 830c                      MOVE   A8,*A12,1
049b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
049e0: 0b2c 88e0 0000            ADDI   88E0h,A12
04a10: 830c                      MOVE   A8,*A12,1
04a20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04a50: 0b2c 8900 0000            ADDI   8900h,A12
04a80: 830c                      MOVE   A8,*A12,1
04a90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04ac0: 0b2c 8920 0000            ADDI   8920h,A12
04af0: 830c                      MOVE   A8,*A12,1
04b00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
04b30: 0b2c 8940 0000            ADDI   8940h,A12
04b60: 830c                      MOVE   A8,*A12,1
04b70: 09ec 0000 6040            MOVI   60400000h,A12
04ba0: 078c 7ae0 0003            MOVE   A12,@37AE0h,1
04bd0: 100c                      ADDK   20h,A12
04be0: 078c a500 0003            MOVE   A12,@3A500h,1
04c10: 100c                      ADDK   20h,A12
04c20: 078c 7b40 0003            MOVE   A12,@37B40h,1
04c50: 09e8 00c0 6038            MOVI   603800C0h,A8
04c80: 0788 7be0 0003            MOVE   A8,@37BE0h,1
04cb0: 07a8 7ae0 0003            MOVE   @37AE0h,A8,1
04ce0: 184c                      MOVK   2h,A12
04cf0: 870a                      MOVE   *A8,A10,1
04d00: 558a                      OR     A12,A10
04d10: 8348                      MOVE   A10,*A8,1
04d20: 07aa 7b40 0003            MOVE   @37B40h,A10,1
04d50: 874c                      MOVE   *A10,A12,1
04d60: 0bac 0010 0000            ORI    10h,A12
04d90: 838a                      MOVE   A12,*A10,1
04da0: 458c                      SUB    A12,A12
04db0: 078c a560 0003            MOVE   A12,@3A560h,1
04de0: 1848                      MOVK   2h,A8
04df0: 0788 a580 0003            MOVE   A8,@3A580h,1
04e20: 07aa 7b00 0003            MOVE   @37B00h,A10,1
04e50: 1828                      MOVK   1h,A8
04e60: 0b2a a640 0000            ADDI   A640h,A10
04e90: 830a                      MOVE   A8,*A10,1
04ea0: a3cf                      MOVE   A14,-*SP,1
04eb0: 09ea 0000 0000            MOVI   0h,A10
04ee0: 934e                      MOVE   A10,*A14+,1
04ef0: 938e                      MOVE   A12,*A14+,1
04f00: 09c8 0400                 MOVI   400h,A8
04f20: 930e                      MOVE   A8,*A14+,1
04f30: 09e8 5344 4450            MOVI   44505344h,A8
04f60: 930e                      MOVE   A8,*A14+,1
04f70: 1a48                      MOVK   12h,A8
04f80: 930e                      MOVE   A8,*A14+,1
04f90: 0d5f 0000 0000            CALLA  0h
04fc0: 830d                      MOVE   A8,*A13,1
04fd0: 4d08                      MOVE   A8,A8
04fe0: cb25                      JRNE   5240h
04ff0: a3cf                      MOVE   A14,-*SP,1
05000: 1a4c                      MOVK   12h,A12
05010: 938e                      MOVE   A12,*A14+,1
05020: 0d5f 0000 0000            CALLA  0h
05050: 830d                      MOVE   A8,*A13,1
05060: 4d08                      MOVE   A8,A8
05070: cb1c                      JRNE   5240h
05080: a3cf                      MOVE   A14,-*SP,1
05090: 09ea 90d0 0000            MOVI   90D0h,A10
050c0: 934e                      MOVE   A10,*A14+,1
050d0: 454a                      SUB    A10,A10
050e0: 934e                      MOVE   A10,*A14+,1
050f0: 09ca 0400                 MOVI   400h,A10
05110: 934e                      MOVE   A10,*A14+,1
05120: 09ea 5344 4150            MOVI   41505344h,A10
05150: 934e                      MOVE   A10,*A14+,1
05160: 1a2a                      MOVK   11h,A10
05170: 934e                      MOVE   A10,*A14+,1
05180: 0d5f 0000 0000            CALLA  0h
051b0: 830d                      MOVE   A8,*A13,1
051c0: 4d08                      MOVE   A8,A8
051d0: cb06                      JRNE   5240h
051e0: a3cf                      MOVE   A14,-*SP,1
051f0: 934e                      MOVE   A10,*A14+,1
05200: 0d5f 0000 0000            CALLA  0h
05230: 830d                      MOVE   A8,*A13,1
05240: 0bee ff7f                 SUBI   80h,A14
05260: 09af 3400                 MMFM   SP,A10,A12,A13
05280: 0960                      RETS   

_cp_feature_status:
05290: 0550                      SETF   10h,0,0
052a0: 05a8 a580 0003            MOVE   @3A580h,A8,0
052d0: 0960                      RETS   

_cp_dsp_abort:
052e0: 07a8 a580 0003            MOVE   @3A580h,A8,1
05310: 38a8                      DSJS   A8,5370h
05320: 4508                      SUB    A8,A8
05330: 0788 a580 0003            MOVE   A8,@3A580h,1
05360: 0960                      RETS   
05370: 07a8 a560 0003            MOVE   @3A560h,A8,1
053a0: cb0b                      JRNE   5460h
053b0: 1828                      MOVK   1h,A8
053c0: 0788 a560 0003            MOVE   A8,@3A560h,1
053f0: a3cf                      MOVE   A14,-*SP,1
05400: 09c8 4000                 MOVI   4000h,A8
05420: 930e                      MOVE   A8,*A14+,1
05430: 0d5f 0000 0000            CALLA  0h
05460: 4508                      SUB    A8,A8
05470: 0960                      RETS   

_cp_abort_photo:
05480: 4508                      SUB    A8,A8
05490: 0788 7b20 0003            MOVE   A8,@37B20h,1
054c0: 0d5f 52e0 0000            CALLA  52E0h
054f0: 0960                      RETS   

_DSPISR:
05500: 098f 002c                 MMTM   SP,A10,A12,A13
05520: 4dcd                      MOVE   A14,A13
05530: 100e                      ADDK   20h,A14
05540: 07a8 a500 0003            MOVE   @3A500h,A8,1
05570: 8708                      MOVE   *A8,A8,1
05580: 1f28                      BTST   6h,A8
05590: ca63                      JREQ   5BD0h
055a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
055d0: 0b28 8020 0000            ADDI   8020h,A8
05600: 8708                      MOVE   *A8,A8,1
05610: 0b88 ff00 ffff            ANDI   FFh,A8
05640: 830d                      MOVE   A8,*A13,1
05650: 1f08                      BTST   7h,A8
05660: ca44                      JREQ   5AB0h
05670: 1fe8                      BTST   0h,A8
05680: ca07                      JREQ   5700h
05690: a3cf                      MOVE   A14,-*SP,1
056a0: 09c8 1000                 MOVI   1000h,A8
056c0: 930e                      MOVE   A8,*A14+,1
056d0: 0d5f aa90 0000            CALLA  AA90h
05700: 87a8                      MOVE   *A13,A8,1
05710: 1fc8                      BTST   1h,A8
05720: ca07                      JREQ   57A0h
05730: a3cf                      MOVE   A14,-*SP,1
05740: 09c8 2000                 MOVI   2000h,A8
05760: 930e                      MOVE   A8,*A14+,1
05770: 0d5f aa90 0000            CALLA  AA90h
057a0: 87a8                      MOVE   *A13,A8,1
057b0: 1fa8                      BTST   2h,A8
057c0: ca06                      JREQ   5830h
057d0: a3cf                      MOVE   A14,-*SP,1
057e0: 1888                      MOVK   4h,A8
057f0: 930e                      MOVE   A8,*A14+,1
05800: 0d5f aa90 0000            CALLA  AA90h
05830: 87a8                      MOVE   *A13,A8,1
05840: 1f88                      BTST   3h,A8
05850: ca2d                      JREQ   5B30h
05860: a3cf                      MOVE   A14,-*SP,1
05870: 09e8 0000 0100            MOVI   1000000h,A8
058a0: 930e                      MOVE   A8,*A14+,1
058b0: 0d5f aa90 0000            CALLA  AA90h
058e0: c024                      JR     5B30h
058f0: 87a8                      MOVE   *A13,A8,1
05900: 0788 a5a0 0003            MOVE   A8,@3A5A0h,1
05930: a3cf                      MOVE   A14,-*SP,1
05940: 09c8 0100                 MOVI   100h,A8
05960: 930e                      MOVE   A8,*A14+,1
05970: 0d5f aa90 0000            CALLA  AA90h
059a0: c018                      JR     5B30h
059b0: a3cf                      MOVE   A14,-*SP,1
059c0: 09c8 0800                 MOVI   800h,A8
059e0: 930e                      MOVE   A8,*A14+,1
059f0: 0d5f aa90 0000            CALLA  AA90h
05a20: c010                      JR     5B30h
05a30: a3cf                      MOVE   A14,-*SP,1
05a40: 09c8 0200                 MOVI   200h,A8
05a60: 930e                      MOVE   A8,*A14+,1
05a70: 0d5f aa90 0000            CALLA  AA90h
05aa0: c008                      JR     5B30h
05ab0: 1428                      DEC    A8
05ac0: cae2                      JREQ   58F0h
05ad0: 1428                      DEC    A8
05ae0: ca04                      JREQ   5B30h
05af0: 1428                      DEC    A8
05b00: caea                      JREQ   59B0h
05b10: 3828                      DSJS   A8,5B30h
05b20: c0f0                      JR     5A30h
05b30: 07a8 7ae0 0003            MOVE   @37AE0h,A8,1
05b60: 184c                      MOVK   2h,A12
05b70: 870a                      MOVE   *A8,A10,1
05b80: 538a                      ANDN   A12,A10
05b90: 8348                      MOVE   A10,*A8,1
05ba0: 870a                      MOVE   *A8,A10,1
05bb0: 558a                      OR     A12,A10
05bc0: 8348                      MOVE   A10,*A8,1
05bd0: 140e                      SUBK   20h,A14
05be0: 09af 3400                 MMFM   SP,A10,A12,A13
05c00: 0960                      RETS   

_cp_dsp_suspend:
05c10: 098f 000c                 MMTM   SP,A12,A13
05c30: 4dcd                      MOVE   A14,A13
05c40: 0b0e 0040                 ADDI   40h,A14
05c60: 1828                      MOVK   1h,A8
05c70: ad0d 0020                 MOVB   A8,*A13(20h)
05c90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
05cc0: 09cc 0080                 MOVI   80h,A12
05ce0: 0b28 a640 0000            ADDI   A640h,A8
05d10: 8388                      MOVE   A12,*A8,1
05d20: afa8 0020                 MOVB   *A13(20h),A8
05d40: ca17                      JREQ   5EC0h
05d50: a3cf                      MOVE   A14,-*SP,1
05d60: 1a4c                      MOVK   12h,A12
05d70: 938e                      MOVE   A12,*A14+,1
05d80: 0d5f 0000 0000            CALLA  0h
05db0: 830d                      MOVE   A8,*A13,1
05dc0: 4d08                      MOVE   A8,A8
05dd0: cb0b                      JRNE   5E90h
05de0: a3cf                      MOVE   A14,-*SP,1
05df0: 938e                      MOVE   A12,*A14+,1
05e00: 0d5f 0000 0000            CALLA  0h
05e30: 830d                      MOVE   A8,*A13,1
05e40: 4d08                      MOVE   A8,A8
05e50: cb03                      JRNE   5E90h
05e60: 458c                      SUB    A12,A12
05e70: ad8d 0020                 MOVB   A12,*A13(20h)
05e90: afac 0020                 MOVB   *A13(20h),A12
05eb0: cbe9                      JRNE   5D50h
05ec0: 182c                      MOVK   1h,A12
05ed0: ad8d 0020                 MOVB   A12,*A13(20h)
05ef0: a3cf                      MOVE   A14,-*SP,1
05f00: 1a2c                      MOVK   11h,A12
05f10: 938e                      MOVE   A12,*A14+,1
05f20: 0d5f 0000 0000            CALLA  0h
05f50: 830d                      MOVE   A8,*A13,1
05f60: 4d08                      MOVE   A8,A8
05f70: cb0b                      JRNE   6030h
05f80: a3cf                      MOVE   A14,-*SP,1
05f90: 938e                      MOVE   A12,*A14+,1
05fa0: 0d5f 0000 0000            CALLA  0h
05fd0: 830d                      MOVE   A8,*A13,1
05fe0: 4d08                      MOVE   A8,A8
05ff0: cb03                      JRNE   6030h
06000: 458c                      SUB    A12,A12
06010: ad8d 0020                 MOVB   A12,*A13(20h)
06030: afac 0020                 MOVB   *A13(20h),A12
06050: cbe9                      JRNE   5EF0h
06060: 07a8 7b40 0003            MOVE   @37B40h,A8,1
06090: 870c                      MOVE   *A8,A12,1
060a0: 0b8c 0010 0000            ANDI   FFFFFFEFh,A12
060d0: 8388                      MOVE   A12,*A8,1
060e0: a3cf                      MOVE   A14,-*SP,1
060f0: 458c                      SUB    A12,A12
06100: 938e                      MOVE   A12,*A14+,1
06110: 938e                      MOVE   A12,*A14+,1
06120: 182c                      MOVK   1h,A12
06130: 938e                      MOVE   A12,*A14+,1
06140: 184c                      MOVK   2h,A12
06150: 938e                      MOVE   A12,*A14+,1
06160: 0d5f 0000 0000            CALLA  0h
06190: 830d                      MOVE   A8,*A13,1
061a0: 0bee ffbf                 SUBI   40h,A14
061c0: 09af 3000                 MMFM   SP,A12,A13
061e0: 0960                      RETS   

_cp_dsp_cycle_time:
061f0: 098f 000c                 MMTM   SP,A12,A13
06210: 4dcd                      MOVE   A14,A13
06220: 0b0e 0060                 ADDI   60h,A14
06240: 09e8 697b 388a            MOVI   388A697Bh,A8
06270: 830d                      MOVE   A8,*A13,1
06280: 0550                      SETF   10h,0,0
06290: 05a8 7920 0003            MOVE   @37920h,A8,0
062c0: ca4e                      JREQ   67B0h
062d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
06300: 0b28 a760 0000            ADDI   A760h,A8
06330: 8708                      MOVE   *A8,A8,1
06340: 0b88 ff00 ffff            ANDI   FFh,A8
06370: 2508                      SLL    8h,A8
06380: b10d 0020                 MOVE   A8,*A13(20h),0
063a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
063d0: 0b28 a740 0000            ADDI   A740h,A8
06400: 8708                      MOVE   *A8,A8,1
06410: 0b88 ff00 ffff            ANDI   FFh,A8
06440: b5ac 0020                 MOVE   *A13(20h),A12,0
06460: 5588                      OR     A12,A8
06470: b10d 0020                 MOVE   A8,*A13(20h),0
06490: b5a8 0020                 MOVE   *A13(20h),A8,0
064b0: 0d5f 3e00 0003            CALLA  33E00h
064e0: 9bae                      MOVE   *A13+,*A14+,1
064f0: 0d5f 6320 0003            CALLA  36320h
06520: abcd                      MOVE   -*A14,-*A13,1
06530: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06560: 0b2c a7e0 0000            ADDI   A7E0h,A12
06590: 878c                      MOVE   *A12,A12,1
065a0: 0b8c ff00 ffff            ANDI   FFh,A12
065d0: 250c                      SLL    8h,A12
065e0: b18d 0020                 MOVE   A12,*A13(20h),0
06600: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06630: 0b2c a7c0 0000            ADDI   A7C0h,A12
06660: 878c                      MOVE   *A12,A12,1
06670: 0b8c ff00 ffff            ANDI   FFh,A12
066a0: b5a8 0020                 MOVE   *A13(20h),A8,0
066c0: 550c                      OR     A8,A12
066d0: b18d 0020                 MOVE   A12,*A13(20h),0
066f0: b5a8 0020                 MOVE   *A13(20h),A8,0
06710: 0d5f 3e00 0003            CALLA  33E00h
06740: 9bae                      MOVE   *A13+,*A14+,1
06750: 0d5f 6320 0003            CALLA  36320h
06780: abcd                      MOVE   -*A14,-*A13,1
06790: c000 00be                 JR     7390h
067b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
067e0: 0b2c a760 0000            ADDI   A760h,A12
06810: 878c                      MOVE   *A12,A12,1
06820: 0b8c ff00 ffff            ANDI   FFh,A12
06850: 250c                      SLL    8h,A12
06860: b18d 0020                 MOVE   A12,*A13(20h),0
06880: 07ac 7b00 0003            MOVE   @37B00h,A12,1
068b0: 0b2c a740 0000            ADDI   A740h,A12
068e0: 878c                      MOVE   *A12,A12,1
068f0: 0b8c ff00 ffff            ANDI   FFh,A12
06920: b5a8 0020                 MOVE   *A13(20h),A8,0
06940: 550c                      OR     A8,A12
06950: b18d 0020                 MOVE   A12,*A13(20h),0
06970: b5a8 0020                 MOVE   *A13(20h),A8,0
06990: 0d5f 3e00 0003            CALLA  33E00h
069c0: 9bae                      MOVE   *A13+,*A14+,1
069d0: 0d5f 6320 0003            CALLA  36320h
06a00: abcd                      MOVE   -*A14,-*A13,1
06a10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06a40: 0b2c a7a0 0000            ADDI   A7A0h,A12
06a70: 878c                      MOVE   *A12,A12,1
06a80: 0b8c ff00 ffff            ANDI   FFh,A12
06ab0: 250c                      SLL    8h,A12
06ac0: b18d 0020                 MOVE   A12,*A13(20h),0
06ae0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06b10: 0b2c a780 0000            ADDI   A780h,A12
06b40: 878c                      MOVE   *A12,A12,1
06b50: 0b8c ff00 ffff            ANDI   FFh,A12
06b80: b5a8 0020                 MOVE   *A13(20h),A8,0
06ba0: 550c                      OR     A8,A12
06bb0: b18d 0020                 MOVE   A12,*A13(20h),0
06bd0: b5a8 0020                 MOVE   *A13(20h),A8,0
06bf0: 0d5f 3e00 0003            CALLA  33E00h
06c20: 9bae                      MOVE   *A13+,*A14+,1
06c30: 0d5f 6320 0003            CALLA  36320h
06c60: abcd                      MOVE   -*A14,-*A13,1
06c70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06ca0: 0b2c a7e0 0000            ADDI   A7E0h,A12
06cd0: 878c                      MOVE   *A12,A12,1
06ce0: 0b8c ff00 ffff            ANDI   FFh,A12
06d10: 250c                      SLL    8h,A12
06d20: b18d 0020                 MOVE   A12,*A13(20h),0
06d40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06d70: 0b2c a7c0 0000            ADDI   A7C0h,A12
06da0: 878c                      MOVE   *A12,A12,1
06db0: 0b8c ff00 ffff            ANDI   FFh,A12
06de0: b5a8 0020                 MOVE   *A13(20h),A8,0
06e00: 550c                      OR     A8,A12
06e10: b18d 0020                 MOVE   A12,*A13(20h),0
06e30: b5a8 0020                 MOVE   *A13(20h),A8,0
06e50: 0d5f 3e00 0003            CALLA  33E00h
06e80: 9bae                      MOVE   *A13+,*A14+,1
06e90: 0d5f 6320 0003            CALLA  36320h
06ec0: abcd                      MOVE   -*A14,-*A13,1
06ed0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06f00: 0b2c a820 0000            ADDI   A820h,A12
06f30: 878c                      MOVE   *A12,A12,1
06f40: 0b8c ff00 ffff            ANDI   FFh,A12
06f70: 250c                      SLL    8h,A12
06f80: b18d 0020                 MOVE   A12,*A13(20h),0
06fa0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
06fd0: 0b2c a800 0000            ADDI   A800h,A12
07000: 878c                      MOVE   *A12,A12,1
07010: 0b8c ff00 ffff            ANDI   FFh,A12
07040: b5a8 0020                 MOVE   *A13(20h),A8,0
07060: 550c                      OR     A8,A12
07070: b18d 0020                 MOVE   A12,*A13(20h),0
07090: b5a8 0020                 MOVE   *A13(20h),A8,0
070b0: 0d5f 3e00 0003            CALLA  33E00h
070e0: 9bae                      MOVE   *A13+,*A14+,1
070f0: 0d5f 6320 0003            CALLA  36320h
07120: abcd                      MOVE   -*A14,-*A13,1
07130: 07ac 7b00 0003            MOVE   @37B00h,A12,1
07160: 0b2c a860 0000            ADDI   A860h,A12
07190: 878c                      MOVE   *A12,A12,1
071a0: 0b8c ff00 ffff            ANDI   FFh,A12
071d0: 250c                      SLL    8h,A12
071e0: b18d 0020                 MOVE   A12,*A13(20h),0
07200: 07ac 7b00 0003            MOVE   @37B00h,A12,1
07230: 0b2c a840 0000            ADDI   A840h,A12
07260: 878c                      MOVE   *A12,A12,1
07270: 0b8c ff00 ffff            ANDI   FFh,A12
072a0: b5a8 0020                 MOVE   *A13(20h),A8,0
072c0: 550c                      OR     A8,A12
072d0: b18d 0020                 MOVE   A12,*A13(20h),0
072f0: b5a8 0020                 MOVE   *A13(20h),A8,0
07310: 0d5f 3e00 0003            CALLA  33E00h
07340: 9bae                      MOVE   *A13+,*A14+,1
07350: 0d5f 6320 0003            CALLA  36320h
07380: abcd                      MOVE   -*A14,-*A13,1
07390: d3ae 0000                 MOVE   *A13(0h),*A14+,1
073b0: 0d5f 39a0 0003            CALLA  339A0h
073e0: b30d 0040                 MOVE   A8,*A13(40h),1
07400: c703                      JRGT   7440h
07410: 182c                      MOVK   1h,A12
07420: b38d 0040                 MOVE   A12,*A13(40h),1
07440: b7a8 0040                 MOVE   *A13(40h),A8,1
07460: 0bee ff9f                 SUBI   60h,A14
07480: 09af 3000                 MMFM   SP,A12,A13
074a0: 0960                      RETS   

_cp_photo_percentage:
074b0: 0550                      SETF   10h,0,0
074c0: 05a8 8400 0003            MOVE   @38400h,A8,0
074f0: 0960                      RETS   

_cp_read_dpram:
07500: 098f 000c                 MMTM   SP,A12,A13
07520: 4dcd                      MOVE   A14,A13
07530: 100e                      ADDK   20h,A14
07540: 09e8 0000 6048            MOVI   60480000h,A8
07570: 830d                      MOVE   A8,*A13,1
07580: 0550                      SETF   10h,0,0
07590: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
075b0: 24a8                      SLL    5h,A8
075c0: 87ac                      MOVE   *A13,A12,1
075d0: 4188                      ADD    A12,A8
075e0: 830d                      MOVE   A8,*A13,1
075f0: 8708                      MOVE   *A8,A8,1
07600: 0b88 ff00 ffff            ANDI   FFh,A8
07630: 0528                      ZEXT   A8,0
07640: b7ee 0060                 MOVE   *SP(60h),A14,1
07660: 09af 3000                 MMFM   SP,A12,A13
07680: 0962                      RETS   2h

_cp_read_dpram2:
07690: 098f 000c                 MMTM   SP,A12,A13
076b0: 4dcd                      MOVE   A14,A13
076c0: 0b0e 0040                 ADDI   40h,A14
076e0: 09e8 0000 6048            MOVI   60480000h,A8
07710: 830d                      MOVE   A8,*A13,1
07720: 0550                      SETF   10h,0,0
07730: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
07750: 24a8                      SLL    5h,A8
07760: 87ac                      MOVE   *A13,A12,1
07770: 4188                      ADD    A12,A8
07780: 830d                      MOVE   A8,*A13,1
07790: 870c                      MOVE   *A8,A12,1
077a0: 0b8c ff00 ffff            ANDI   FFh,A12
077d0: b18d 0020                 MOVE   A12,*A13(20h),0
077f0: 1008                      ADDK   20h,A8
07800: 830d                      MOVE   A8,*A13,1
07810: 870c                      MOVE   *A8,A12,1
07820: 0b8c ff00 ffff            ANDI   FFh,A12
07850: 052c                      ZEXT   A12,0
07860: 250c                      SLL    8h,A12
07870: b5a8 0020                 MOVE   *A13(20h),A8,0
07890: 410c                      ADD    A8,A12
078a0: b18d 0020                 MOVE   A12,*A13(20h),0
078c0: b5a8 0020                 MOVE   *A13(20h),A8,0
078e0: b7ee 0060                 MOVE   *SP(60h),A14,1
07900: 09af 3000                 MMFM   SP,A12,A13
07920: 0962                      RETS   2h

_cp_write_dpram:
07930: 098f 000c                 MMTM   SP,A12,A13
07950: 4dcd                      MOVE   A14,A13
07960: 100e                      ADDK   20h,A14
07970: 09e8 0000 6048            MOVI   60480000h,A8
079a0: 830d                      MOVE   A8,*A13,1
079b0: 0550                      SETF   10h,0,0
079c0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
079e0: 24a8                      SLL    5h,A8
079f0: 87ac                      MOVE   *A13,A12,1
07a00: 4188                      ADD    A12,A8
07a10: 830d                      MOVE   A8,*A13,1
07a20: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
07a40: 8388                      MOVE   A12,*A8,1
07a50: b7ee 0060                 MOVE   *SP(60h),A14,1
07a70: 09af 3000                 MMFM   SP,A12,A13
07a90: 0962                      RETS   2h

_cp_write_dpram2:
07aa0: 098f 000c                 MMTM   SP,A12,A13
07ac0: 4dcd                      MOVE   A14,A13
07ad0: 100e                      ADDK   20h,A14
07ae0: 09e8 0000 6048            MOVI   60480000h,A8
07b10: 830d                      MOVE   A8,*A13,1
07b20: 0550                      SETF   10h,0,0
07b30: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
07b50: 24a8                      SLL    5h,A8
07b60: 87ac                      MOVE   *A13,A12,1
07b70: 4188                      ADD    A12,A8
07b80: 830d                      MOVE   A8,*A13,1
07b90: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
07bb0: 0b8c ff00 ffff            ANDI   FFh,A12
07be0: 8388                      MOVE   A12,*A8,1
07bf0: 1008                      ADDK   20h,A8
07c00: 830d                      MOVE   A8,*A13,1
07c10: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
07c30: 2b0c                      SRA    8h,A12
07c40: 8388                      MOVE   A12,*A8,1
07c50: b7ee 0060                 MOVE   *SP(60h),A14,1
07c70: 09af 3000                 MMFM   SP,A12,A13
07c90: 0962                      RETS   2h

_cp_read_eo:
07ca0: a3af                      MOVE   A13,-*SP,1
07cb0: 4dcd                      MOVE   A14,A13
07cc0: 0b0e 0040                 ADDI   40h,A14
07ce0: a3cf                      MOVE   A14,-*SP,1
07cf0: 4da8                      MOVE   A13,A8
07d00: 1008                      ADDK   20h,A8
07d10: 930e                      MOVE   A8,*A14+,1
07d20: 4da8                      MOVE   A13,A8
07d30: 1408                      SUBK   20h,A8
07d40: 930e                      MOVE   A8,*A14+,1
07d50: 0d5f 6b20 0001            CALLA  16B20h
07d80: 830d                      MOVE   A8,*A13,1
07d90: 0550                      SETF   10h,0,0
07da0: b5a8 0020                 MOVE   *A13(20h),A8,0
07dc0: b7ee 0040                 MOVE   *SP(40h),A14,1
07de0: 97ed                      MOVE   *SP+,A13,1
07df0: 0962                      RETS   2h

_cp_write_eo:
07e00: a3af                      MOVE   A13,-*SP,1
07e10: 4dcd                      MOVE   A14,A13
07e20: 0b0e 0060                 ADDI   60h,A14
07e40: 4da8                      MOVE   A13,A8
07e50: 1008                      ADDK   20h,A8
07e60: b30d 0040                 MOVE   A8,*A13(40h),1
07e80: 0550                      SETF   10h,0,0
07e90: b9a8 ffe0 0000            MOVE   *A13(FFE0h),*A8(0h),0
07ec0: b9a8 ffc0 0010            MOVE   *A13(FFC0h),*A8(10h),0
07ef0: a3cf                      MOVE   A14,-*SP,1
07f00: 930e                      MOVE   A8,*A14+,1
07f10: 0d5f 6380 0001            CALLA  16380h
07f40: 830d                      MOVE   A8,*A13,1
07f50: b7ee 0040                 MOVE   *SP(40h),A14,1
07f70: 97ed                      MOVE   *SP+,A13,1
07f80: 0962                      RETS   2h

_cp_read_hrru:
07f90: a3af                      MOVE   A13,-*SP,1
07fa0: 4dcd                      MOVE   A14,A13
07fb0: 0b0e 0040                 ADDI   40h,A14
07fd0: a3cf                      MOVE   A14,-*SP,1
07fe0: 4da8                      MOVE   A13,A8
07ff0: 1008                      ADDK   20h,A8
08000: 930e                      MOVE   A8,*A14+,1
08010: 4da8                      MOVE   A13,A8
08020: 1408                      SUBK   20h,A8
08030: 930e                      MOVE   A8,*A14+,1
08040: 0d5f 4480 0002            CALLA  24480h
08070: 830d                      MOVE   A8,*A13,1
08080: 0550                      SETF   10h,0,0
08090: b5a8 0020                 MOVE   *A13(20h),A8,0
080b0: b7ee 0040                 MOVE   *SP(40h),A14,1
080d0: 97ed                      MOVE   *SP+,A13,1
080e0: 0962                      RETS   2h

_cp_write_hrru:
080f0: a3af                      MOVE   A13,-*SP,1
08100: 4dcd                      MOVE   A14,A13
08110: 0b0e 0060                 ADDI   60h,A14
08130: 4da8                      MOVE   A13,A8
08140: 1008                      ADDK   20h,A8
08150: b30d 0040                 MOVE   A8,*A13(40h),1
08170: 0550                      SETF   10h,0,0
08180: b9a8 ffe0 0000            MOVE   *A13(FFE0h),*A8(0h),0
081b0: b9a8 ffc0 0010            MOVE   *A13(FFC0h),*A8(10h),0
081e0: a3cf                      MOVE   A14,-*SP,1
081f0: 930e                      MOVE   A8,*A14+,1
08200: 0d5f 3cf0 0002            CALLA  23CF0h
08230: 830d                      MOVE   A8,*A13,1
08240: b7ee 0040                 MOVE   *SP(40h),A14,1
08260: 97ed                      MOVE   *SP+,A13,1
08270: 0962                      RETS   2h

_cp_dsp_spot_abort:
08280: 1828                      MOVK   1h,A8
08290: 0788 7940 0003            MOVE   A8,@37940h,1
082c0: 0960                      RETS   

_cp_dsp_spotdata_abort:
082d0: 1828                      MOVK   1h,A8
082e0: 0788 7960 0003            MOVE   A8,@37960h,1
08310: 0960                      RETS   

_cp_spotdata_percentage:
08320: 0548                      SETF   8h,0,0
08330: 05a8 79a0 0003            MOVE   @379A0h,A8,0
08360: 0960                      RETS   

_cp_spotdata_samples:
08370: 07a8 7980 0003            MOVE   @37980h,A8,1
083a0: 0960                      RETS   

_cp_start_covar_collection:
083b0: a3af                      MOVE   A13,-*SP,1
083c0: 4dcd                      MOVE   A14,A13
083d0: 100e                      ADDK   20h,A14
083e0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
08400: 0570                      SETF   10h,1,0
08410: b508 0040                 MOVE   *A8(40h),A8,0
08430: 0588 84a0 0003            MOVE   A8,@384A0h,0
08460: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
08480: 8708                      MOVE   *A8,A8,1
08490: 0788 8460 0003            MOVE   A8,@38460h,1
084c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
084e0: b708 0020                 MOVE   *A8(20h),A8,1
08500: 0788 8480 0003            MOVE   A8,@38480h,1
08530: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
08550: 0550                      SETF   10h,0,0
08560: b508 0050                 MOVE   *A8(50h),A8,0
08580: 0588 84b0 0003            MOVE   A8,@384B0h,0
085b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
085d0: b508 0060                 MOVE   *A8(60h),A8,0
085f0: 0588 84c0 0003            MOVE   A8,@384C0h,0
08620: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
08640: 0570                      SETF   10h,1,0
08650: b508 0070                 MOVE   *A8(70h),A8,0
08670: 0588 84d0 0003            MOVE   A8,@384D0h,0
086a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
086c0: b508 0080                 MOVE   *A8(80h),A8,0
086e0: 0588 84e0 0003            MOVE   A8,@384E0h,0
08710: 4508                      SUB    A8,A8
08720: 0588 84f0 0003            MOVE   A8,@384F0h,0
08750: 1bc8                      MOVK   1Eh,A8
08760: 0788 79c0 0003            MOVE   A8,@379C0h,1
08790: 4508                      SUB    A8,A8
087a0: 0788 79e0 0003            MOVE   A8,@379E0h,1
087d0: 09c8 0049                 MOVI   49h,A8
087f0: 0788 7a00 0003            MOVE   A8,@37A00h,1
08820: 09e8 8500 0003            MOVI   38500h,A8
08850: 0788 7a20 0003            MOVE   A8,@37A20h,1
08880: 05c0 84a0 0003 7a40 0003  MOVE   @384A0h,@37A40h,0
088d0: 07c0 8460 0003 7a50 0003  MOVE   @38460h,@37A50h,1
08920: 07c0 8480 0003 7a70 0003  MOVE   @38480h,@37A70h,1
08970: 05c0 84b0 0003 7a90 0003  MOVE   @384B0h,@37A90h,0
089c0: 05c0 84c0 0003 7aa0 0003  MOVE   @384C0h,@37AA0h,0
08a10: 05c0 84d0 0003 7ab0 0003  MOVE   @384D0h,@37AB0h,0
08a60: 05c0 84e0 0003 7ac0 0003  MOVE   @384E0h,@37AC0h,0
08ab0: a3cf                      MOVE   A14,-*SP,1
08ac0: 09e8 79c0 0003            MOVI   379C0h,A8
08af0: 930e                      MOVE   A8,*A14+,1
08b00: 1868                      MOVK   3h,A8
08b10: 930e                      MOVE   A8,*A14+,1
08b20: 0d5f 0000 0000            CALLA  0h
08b50: 830d                      MOVE   A8,*A13,1
08b60: b7ee 0040                 MOVE   *SP(40h),A14,1
08b80: 97ed                      MOVE   *SP+,A13,1
08b90: 0962                      RETS   2h

_cp_collect_covar_data:
08ba0: 098f 000c                 MMTM   SP,A12,A13
08bc0: 4dcd                      MOVE   A14,A13
08bd0: 100e                      ADDK   20h,A14
08be0: 0550                      SETF   10h,0,0
08bf0: 05a8 84f0 0003            MOVE   @384F0h,A8,0
08c20: ca45                      JREQ   9080h
08c30: 4508                      SUB    A8,A8
08c40: 810d                      MOVE   A8,*A13,0
08c50: 0570                      SETF   10h,1,0
08c60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
08c80: 85ac                      MOVE   *A13,A12,0
08c90: 24ec                      SLL    7h,A12
08ca0: 410c                      ADD    A8,A12
08cb0: 85a8                      MOVE   *A13,A8,0
08cc0: 24e8                      SLL    7h,A8
08cd0: 0b28 8500 0003            ADDI   38500h,A8
08d00: bb0c 0000 00a0            MOVE   *A8(0h),*A12(A0h),1
08d30: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
08d50: 85a8                      MOVE   *A13,A8,0
08d60: 24e8                      SLL    7h,A8
08d70: 4188                      ADD    A12,A8
08d80: 85ac                      MOVE   *A13,A12,0
08d90: 24ec                      SLL    7h,A12
08da0: 0b2c 8500 0003            ADDI   38500h,A12
08dd0: bb88 0020 00c0            MOVE   *A12(20h),*A8(C0h),1
08e00: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
08e20: 85a8                      MOVE   *A13,A8,0
08e30: 24e8                      SLL    7h,A8
08e40: 4188                      ADD    A12,A8
08e50: 85ac                      MOVE   *A13,A12,0
08e60: 24ec                      SLL    7h,A12
08e70: 0b2c 8500 0003            ADDI   38500h,A12
08ea0: bb88 0040 00e0            MOVE   *A12(40h),*A8(E0h),1
08ed0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
08ef0: 85a8                      MOVE   *A13,A8,0
08f00: 24e8                      SLL    7h,A8
08f10: 4188                      ADD    A12,A8
08f20: 85ac                      MOVE   *A13,A12,0
08f30: 24ec                      SLL    7h,A12
08f40: 0b2c 8500 0003            ADDI   38500h,A12
08f70: bb88 0060 0100            MOVE   *A12(60h),*A8(100h),1
08fa0: 85ac                      MOVE   *A13,A12,0
08fb0: 102c                      INC    A12
08fc0: 818d                      MOVE   A12,*A13,0
08fd0: 0b4c ffbf                 CMPI   40h,A12
08ff0: c4c6                      JRLT   8C60h
09000: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
09020: 0550                      SETF   10h,0,0
09030: 05ac 84f0 0003            MOVE   @384F0h,A12,0
09060: b188 0090                 MOVE   A12,*A8(90h),0
09080: b7ee 0060                 MOVE   *SP(60h),A14,1
090a0: 09af 3000                 MMFM   SP,A12,A13
090c0: 0962                      RETS   2h

_ProcAcqCmds:
090d0: 098f 000c                 MMTM   SP,A12,A13
090f0: 4dcd                      MOVE   A14,A13
09100: 0b0e 0380                 ADDI   380h,A14
09120: 4fa2                      MOVE   A13,B2
09130: 0b12 01c0                 ADDI   1C0h,B2
09150: 09f0 7780 0003            MOVI   37780h,B0
09180: 09d7 0080                 MOVI   80h,B7
091a0: 00f3                      BLMOVE 1,1
091b0: 09f0 7800 0003            MOVI   37800h,B0
091e0: 09d7 0080                 MOVI   80h,B7
09200: 00f3                      BLMOVE 1,1
09210: 09f0 7880 0003            MOVI   37880h,B0
09240: 09d7 0080                 MOVI   80h,B7
09260: 00f3                      BLMOVE 1,1
09270: a3cf                      MOVE   A14,-*SP,1
09280: 09c8 0100                 MOVI   100h,A8
092a0: 930e                      MOVE   A8,*A14+,1
092b0: 09e8 ae00 0003            MOVI   3AE00h,A8
092e0: 930e                      MOVE   A8,*A14+,1
092f0: 09e8 5344 5151            MOVI   51515344h,A8
09320: 930e                      MOVE   A8,*A14+,1
09330: 1be8                      MOVK   1Fh,A8
09340: 930e                      MOVE   A8,*A14+,1
09350: 0d5f 0000 0000            CALLA  0h
09380: 830d                      MOVE   A8,*A13,1
09390: 4d08                      MOVE   A8,A8
093a0: ca07                      JREQ   9420h
093b0: a3cf                      MOVE   A14,-*SP,1
093c0: 1a28                      MOVK   11h,A8
093d0: 930e                      MOVE   A8,*A14+,1
093e0: 0d5f 0000 0000            CALLA  0h
09410: 830d                      MOVE   A8,*A13,1
09420: a3cf                      MOVE   A14,-*SP,1
09430: 09c8 0100                 MOVI   100h,A8
09450: 930e                      MOVE   A8,*A14+,1
09460: 09e8 a5c0 0003            MOVI   3A5C0h,A8
09490: 930e                      MOVE   A8,*A14+,1
094a0: 09e8 5344 5151            MOVI   51515344h,A8
094d0: 930e                      MOVE   A8,*A14+,1
094e0: 1808                      MOVK   20h,A8
094f0: 930e                      MOVE   A8,*A14+,1
09500: 0d5f 0000 0000            CALLA  0h
09530: 830d                      MOVE   A8,*A13,1
09540: 4d08                      MOVE   A8,A8
09550: ca07                      JREQ   95D0h
09560: a3cf                      MOVE   A14,-*SP,1
09570: 1a28                      MOVK   11h,A8
09580: 930e                      MOVE   A8,*A14+,1
09590: 0d5f 0000 0000            CALLA  0h
095c0: 830d                      MOVE   A8,*A13,1
095d0: 4508                      SUB    A8,A8
095e0: b30d 0180                 MOVE   A8,*A13(180h),1
09600: b7a8 0180                 MOVE   *A13(180h),A8,1
09620: 24a8                      SLL    5h,A8
09630: 41a8                      ADD    A13,A8
09640: 458c                      SUB    A12,A12
09650: b388 0040                 MOVE   A12,*A8(40h),1
09670: b7a8 0180                 MOVE   *A13(180h),A8,1
09690: 24a8                      SLL    5h,A8
096a0: 41a8                      ADD    A13,A8
096b0: b388 00c0                 MOVE   A12,*A8(C0h),1
096d0: b7a8 0180                 MOVE   *A13(180h),A8,1
096f0: 1028                      INC    A8
09700: b30d 0180                 MOVE   A8,*A13(180h),1
09720: 1488                      SUBK   4h,A8
09730: c4ec                      JRLT   9600h
09740: 4da8                      MOVE   A13,A8
09750: 0b08 0040                 ADDI   40h,A8
09770: b30d 0320                 MOVE   A8,*A13(320h),1
09790: 458c                      SUB    A12,A12
097a0: b38d 0160                 MOVE   A12,*A13(160h),1
097c0: b38d 0140                 MOVE   A12,*A13(140h),1
097e0: a3cf                      MOVE   A14,-*SP,1
097f0: 938e                      MOVE   A12,*A14+,1
09800: 09e8 b600 0003            MOVI   3B600h,A8
09830: 930e                      MOVE   A8,*A14+,1
09840: 1be8                      MOVK   1Fh,A8
09850: 930e                      MOVE   A8,*A14+,1
09860: 0d5f 0000 0000            CALLA  0h
09890: 830d                      MOVE   A8,*A13,1
098a0: 4d08                      MOVE   A8,A8
098b0: cb00 00f2                 JRNE   A7F0h
098d0: 0570                      SETF   10h,1,0
098e0: 05a8 b620 0003            MOVE   @3B620h,A8,0
09910: b10d 0020                 MOVE   A8,*A13(20h),0
09930: 05a8 b630 0003            MOVE   @3B630h,A8,0
09960: b10d 0030                 MOVE   A8,*A13(30h),0
09980: 0550                      SETF   10h,0,0
09990: b5a8 0020                 MOVE   *A13(20h),A8,0
099b0: cb0c                      JRNE   9A80h
099c0: 102c                      INC    A12
099d0: b38d 0140                 MOVE   A12,*A13(140h),1
099f0: 142c                      DEC    A12
09a00: 24ac                      SLL    5h,A12
09a10: 41ac                      ADD    A13,A12
09a20: 07a8 b640 0003            MOVE   @3B640h,A8,1
09a50: b30c 0040                 MOVE   A8,*A12(40h),1
09a70: c00b                      JR     9B30h
09a80: 102c                      INC    A12
09a90: b38d 0160                 MOVE   A12,*A13(160h),1
09ab0: 142c                      DEC    A12
09ac0: 24ac                      SLL    5h,A12
09ad0: 41ac                      ADD    A13,A12
09ae0: 07a8 b640 0003            MOVE   @3B640h,A8,1
09b10: b30c 00c0                 MOVE   A8,*A12(C0h),1
09b30: b5ac 0030                 MOVE   *A13(30h),A12,0
09b50: b38d 0220                 MOVE   A12,*A13(220h),1
09b70: a3cf                      MOVE   A14,-*SP,1
09b80: 4dac                      MOVE   A13,A12
09b90: 0b0c 01c0                 ADDI   1C0h,A12
09bb0: 938e                      MOVE   A12,*A14+,1
09bc0: 186c                      MOVK   3h,A12
09bd0: 938e                      MOVE   A12,*A14+,1
09be0: 0d5f 0000 0000            CALLA  0h
09c10: 830d                      MOVE   A8,*A13,1
09c20: a3cf                      MOVE   A14,-*SP,1
09c30: 458c                      SUB    A12,A12
09c40: 938e                      MOVE   A12,*A14+,1
09c50: 09cc 2000                 MOVI   2000h,A12
09c70: 938e                      MOVE   A12,*A14+,1
09c80: 0d5f 0000 0000            CALLA  0h
09cb0: 830d                      MOVE   A8,*A13,1
09cc0: a3cf                      MOVE   A14,-*SP,1
09cd0: 458c                      SUB    A12,A12
09ce0: 938e                      MOVE   A12,*A14+,1
09cf0: 4dac                      MOVE   A13,A12
09d00: 0b0c 0340                 ADDI   340h,A12
09d20: 938e                      MOVE   A12,*A14+,1
09d30: 180c                      MOVK   20h,A12
09d40: 938e                      MOVE   A12,*A14+,1
09d50: 0d5f 0000 0000            CALLA  0h
09d80: 830d                      MOVE   A8,*A13,1
09d90: 0570                      SETF   10h,1,0
09da0: 05ac b630 0003            MOVE   @3B630h,A12,0
09dd0: 0550                      SETF   10h,0,0
09de0: b5a8 0030                 MOVE   *A13(30h),A8,0
09e00: 490c                      CMP    A8,A12
09e10: cb52                      JRNE   A340h
09e20: 87a8                      MOVE   *A13,A8,1
09e30: 15e8                      SUBK   Fh,A8
09e40: ca4f                      JREQ   A340h
09e50: a3cf                      MOVE   A14,-*SP,1
09e60: 09ec b600 0003            MOVI   3B600h,A12
09e90: 938e                      MOVE   A12,*A14+,1
09ea0: 1be8                      MOVK   1Fh,A8
09eb0: 930e                      MOVE   A8,*A14+,1
09ec0: 0d5f 0000 0000            CALLA  0h
09ef0: 830d                      MOVE   A8,*A13,1
09f00: 4d08                      MOVE   A8,A8
09f10: cb36                      JRNE   A280h
09f20: 0570                      SETF   10h,1,0
09f30: 05ac b630 0003            MOVE   @3B630h,A12,0
09f60: 0550                      SETF   10h,0,0
09f70: b5a8 0030                 MOVE   *A13(30h),A8,0
09f90: 490c                      CMP    A8,A12
09fa0: cb2d                      JRNE   A280h
09fb0: a3cf                      MOVE   A14,-*SP,1
09fc0: 4508                      SUB    A8,A8
09fd0: 930e                      MOVE   A8,*A14+,1
09fe0: 09ec b600 0003            MOVI   3B600h,A12
0a010: 938e                      MOVE   A12,*A14+,1
0a020: 1be8                      MOVK   1Fh,A8
0a030: 930e                      MOVE   A8,*A14+,1
0a040: 0d5f 0000 0000            CALLA  0h
0a070: 830d                      MOVE   A8,*A13,1
0a080: 0570                      SETF   10h,1,0
0a090: 05ac b620 0003            MOVE   @3B620h,A12,0
0a0c0: cb0e                      JRNE   A1B0h
0a0d0: b7a8 0140                 MOVE   *A13(140h),A8,1
0a0f0: 1028                      INC    A8
0a100: b30d 0140                 MOVE   A8,*A13(140h),1
0a120: 1428                      DEC    A8
0a130: 24a8                      SLL    5h,A8
0a140: 41a8                      ADD    A13,A8
0a150: 07ac b640 0003            MOVE   @3B640h,A12,1
0a180: b388 0040                 MOVE   A12,*A8(40h),1
0a1a0: c00d                      JR     A280h
0a1b0: b7a8 0160                 MOVE   *A13(160h),A8,1
0a1d0: 1028                      INC    A8
0a1e0: b30d 0160                 MOVE   A8,*A13(160h),1
0a200: 1428                      DEC    A8
0a210: 24a8                      SLL    5h,A8
0a220: 41a8                      ADD    A13,A8
0a230: 07ac b640 0003            MOVE   @3B640h,A12,1
0a260: b388 00c0                 MOVE   A12,*A8(C0h),1
0a280: 0570                      SETF   10h,1,0
0a290: 05ac b630 0003            MOVE   @3B630h,A12,0
0a2c0: 0550                      SETF   10h,0,0
0a2d0: b5a8 0030                 MOVE   *A13(30h),A8,0
0a2f0: 490c                      CMP    A8,A12
0a300: cb03                      JRNE   A340h
0a310: 87a8                      MOVE   *A13,A8,1
0a320: 15e8                      SUBK   Fh,A8
0a330: cbb1                      JRNE   9E50h
0a340: 4508                      SUB    A8,A8
0a350: b30d 0180                 MOVE   A8,*A13(180h),1
0a370: b7ac 0160                 MOVE   *A13(160h),A12,1
0a390: 4988                      CMP    A12,A8
0a3a0: c528                      JRGE   A630h
0a3b0: b7ac 0180                 MOVE   *A13(180h),A12,1
0a3d0: 24ac                      SLL    5h,A12
0a3e0: 41ac                      ADD    A13,A12
0a3f0: bb8d 00c0 02a0            MOVE   *A12(C0h),*A13(2A0h),1
0a420: a3cf                      MOVE   A14,-*SP,1
0a430: 4dac                      MOVE   A13,A12
0a440: 0b0c 0240                 ADDI   240h,A12
0a460: 938e                      MOVE   A12,*A14+,1
0a470: 1868                      MOVK   3h,A8
0a480: 930e                      MOVE   A8,*A14+,1
0a490: 0d5f 0000 0000            CALLA  0h
0a4c0: 830d                      MOVE   A8,*A13,1
0a4d0: a3cf                      MOVE   A14,-*SP,1
0a4e0: 458c                      SUB    A12,A12
0a4f0: 938e                      MOVE   A12,*A14+,1
0a500: 4dac                      MOVE   A13,A12
0a510: 0b0c 0340                 ADDI   340h,A12
0a530: 938e                      MOVE   A12,*A14+,1
0a540: 180c                      MOVK   20h,A12
0a550: 938e                      MOVE   A12,*A14+,1
0a560: 0d5f 0000 0000            CALLA  0h
0a590: 830d                      MOVE   A8,*A13,1
0a5a0: b7ac 0180                 MOVE   *A13(180h),A12,1
0a5c0: 102c                      INC    A12
0a5d0: b38d 0180                 MOVE   A12,*A13(180h),1
0a5f0: b7a8 0160                 MOVE   *A13(160h),A8,1
0a610: 490c                      CMP    A8,A12
0a620: c4d8                      JRLT   A3B0h
0a630: b7ac 0140                 MOVE   *A13(140h),A12,1
0a650: ca20                      JREQ   A860h
0a660: a3cf                      MOVE   A14,-*SP,1
0a670: 4da8                      MOVE   A13,A8
0a680: 0b08 02c0                 ADDI   2C0h,A8
0a6a0: 930e                      MOVE   A8,*A14+,1
0a6b0: 1868                      MOVK   3h,A8
0a6c0: 930e                      MOVE   A8,*A14+,1
0a6d0: 0d5f 0000 0000            CALLA  0h
0a700: 830d                      MOVE   A8,*A13,1
0a710: a3cf                      MOVE   A14,-*SP,1
0a720: 4508                      SUB    A8,A8
0a730: 930e                      MOVE   A8,*A14+,1
0a740: 4da8                      MOVE   A13,A8
0a750: 0b08 0340                 ADDI   340h,A8
0a770: 930e                      MOVE   A8,*A14+,1
0a780: 1808                      MOVK   20h,A8
0a790: 930e                      MOVE   A8,*A14+,1
0a7a0: 0d5f 0000 0000            CALLA  0h
0a7d0: 830d                      MOVE   A8,*A13,1
0a7e0: c007                      JR     A860h
0a7f0: a3cf                      MOVE   A14,-*SP,1
0a800: 1a28                      MOVK   11h,A8
0a810: 930e                      MOVE   A8,*A14+,1
0a820: 0d5f 0000 0000            CALLA  0h
0a850: 830d                      MOVE   A8,*A13,1
0a860: 09e8 8000 0000            MOVI   8000h,A8
0a890: b30d 01a0                 MOVE   A8,*A13(1A0h),1
0a8b0: 0550                      SETF   10h,0,0
0a8c0: b5ac 0030                 MOVE   *A13(30h),A12,0
0a8e0: ca00 fee9                 JREQ   9790h
0a900: b5ac 0030                 MOVE   *A13(30h),A12,0
0a920: 1fec                      BTST   0h,A12
0a930: ca07                      JREQ   A9B0h
0a940: a3cf                      MOVE   A14,-*SP,1
0a950: d3ae 01a0                 MOVE   *A13(1A0h),*A14+,1
0a970: 0d5f 0000 0000            CALLA  0h
0a9a0: 830d                      MOVE   A8,*A13,1
0a9b0: b7a8 01a0                 MOVE   *A13(1A0h),A8,1
0a9d0: 2428                      SLL    1h,A8
0a9e0: b30d 01a0                 MOVE   A8,*A13(1A0h),1
0aa00: 2fec                      SRL    1h,A12
0aa10: 0550                      SETF   10h,0,0
0aa20: b18d 0030                 MOVE   A12,*A13(30h),0
0aa40: b5ac 0030                 MOVE   *A13(30h),A12,0
0aa60: cbe9                      JRNE   A900h
0aa70: c000 fed0                 JR     9790h

_AnnDSPEvent:
0aa90: 098f c004                 MMTM   SP,A0,A1,A13
0aab0: 4dcd                      MOVE   A14,A13
0aac0: b7a1 ffe0                 MOVE   *A13(FFE0h),A1,1
0aae0: 1900                      MOVK   8h,A0
0aaf0: 0910                      TRAP   10h
0ab00: b7ee 0080                 MOVE   *SP(80h),A14,1
0ab20: 09af 2003                 MMFM   SP,A0,A1,A13
0ab40: 0962                      RETS   2h

_set_zone_alpha:
0ab50: 098f 000c                 MMTM   SP,A12,A13
0ab70: 4dcd                      MOVE   A14,A13
0ab80: 100e                      ADDK   20h,A14
0ab90: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0abc0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0abf0: 458c                      SUB    A12,A12
0ac00: 0b28 8040 0000            ADDI   8040h,A8
0ac30: 8388                      MOVE   A12,*A8,1
0ac40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0ac70: 87ac                      MOVE   *A13,A12,1
0ac80: 8f8c                      MOVB   *A12,A12
0ac90: 24ac                      SLL    5h,A12
0aca0: 410c                      ADD    A8,A12
0acb0: 87a8                      MOVE   *A13,A8,1
0acc0: 0b2c 8660 0000            ADDI   8660h,A12
0acf0: 0570                      SETF   10h,1,0
0ad00: b508 0008                 MOVE   *A8(8h),A8,0
0ad20: 830c                      MOVE   A8,*A12,1
0ad30: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ad60: 19a8                      MOVK   Dh,A8
0ad70: 0b2c 8000 0000            ADDI   8000h,A12
0ada0: 830c                      MOVE   A8,*A12,1
0adb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ade0: 0b2c 8000 0000            ADDI   8000h,A12
0ae10: 878c                      MOVE   *A12,A12,1
0ae20: 0b8c ff00 ffff            ANDI   FFh,A12
0ae50: cbf5                      JRNE   ADB0h
0ae60: 4508                      SUB    A8,A8
0ae70: b7ee 0060                 MOVE   *SP(60h),A14,1
0ae90: 09af 3000                 MMFM   SP,A12,A13
0aeb0: 0962                      RETS   2h

_set_zone_invert:
0aec0: 098f 000c                 MMTM   SP,A12,A13
0aee0: 4dcd                      MOVE   A14,A13
0aef0: 100e                      ADDK   20h,A14
0af00: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0af30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0af60: 182c                      MOVK   1h,A12
0af70: 0b28 8040 0000            ADDI   8040h,A8
0afa0: 8388                      MOVE   A12,*A8,1
0afb0: 87a8                      MOVE   *A13,A8,1
0afc0: 0570                      SETF   10h,1,0
0afd0: b50c 0008                 MOVE   *A8(8h),A12,0
0aff0: ca10                      JREQ   B100h
0b000: 8f0c                      MOVB   *A8,A12
0b010: 4d88                      MOVE   A12,A8
0b020: 24cc                      SLL    6h,A12
0b030: 24a8                      SLL    5h,A8
0b040: 410c                      ADD    A8,A12
0b050: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0b080: 410c                      ADD    A8,A12
0b090: 4508                      SUB    A8,A8
0b0a0: 0b2c 81a7 0000            ADDI   81A7h,A12
0b0d0: 0561                      SETF   1h,1,0
0b0e0: 810c                      MOVE   A8,*A12,0
0b0f0: c010                      JR     B200h
0b100: 8f0c                      MOVB   *A8,A12
0b110: 4d88                      MOVE   A12,A8
0b120: 24cc                      SLL    6h,A12
0b130: 24a8                      SLL    5h,A8
0b140: 410c                      ADD    A8,A12
0b150: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0b180: 410c                      ADD    A8,A12
0b190: 09c8 ffff                 MOVI   FFFFh,A8
0b1b0: 0b2c 81a7 0000            ADDI   81A7h,A12
0b1e0: 0561                      SETF   1h,1,0
0b1f0: 810c                      MOVE   A8,*A12,0
0b200: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0b230: 1988                      MOVK   Ch,A8
0b240: 0b2c 8000 0000            ADDI   8000h,A12
0b270: 830c                      MOVE   A8,*A12,1
0b280: a3cf                      MOVE   A14,-*SP,1
0b290: 182c                      MOVK   1h,A12
0b2a0: 938e                      MOVE   A12,*A14+,1
0b2b0: 0d5f 3400 0000            CALLA  3400h
0b2e0: b7ee 0060                 MOVE   *SP(60h),A14,1
0b300: 09af 3000                 MMFM   SP,A12,A13
0b320: 0962                      RETS   2h

_set_zone_port:
0b330: 098f 000c                 MMTM   SP,A12,A13
0b350: 4dcd                      MOVE   A14,A13
0b360: 100e                      ADDK   20h,A14
0b370: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0b3a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0b3d0: 182c                      MOVK   1h,A12
0b3e0: 0b28 8040 0000            ADDI   8040h,A8
0b410: 8388                      MOVE   A12,*A8,1
0b420: 87a8                      MOVE   *A13,A8,1
0b430: 8f0c                      MOVB   *A8,A12
0b440: 4d88                      MOVE   A12,A8
0b450: 24cc                      SLL    6h,A12
0b460: 24a8                      SLL    5h,A8
0b470: 410c                      ADD    A8,A12
0b480: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0b4b0: 410c                      ADD    A8,A12
0b4c0: 87a8                      MOVE   *A13,A8,1
0b4d0: 0b2c 81a4 0000            ADDI   81A4h,A12
0b500: 0563                      SETF   3h,1,0
0b510: b90c 0008 0000            MOVE   *A8(8h),*A12(0h),0
0b540: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0b570: 1988                      MOVK   Ch,A8
0b580: 0b2c 8000 0000            ADDI   8000h,A12
0b5b0: 830c                      MOVE   A8,*A12,1
0b5c0: a3cf                      MOVE   A14,-*SP,1
0b5d0: 182c                      MOVK   1h,A12
0b5e0: 938e                      MOVE   A12,*A14+,1
0b5f0: 0d5f 3400 0000            CALLA  3400h
0b620: b7ee 0060                 MOVE   *SP(60h),A14,1
0b640: 09af 3000                 MMFM   SP,A12,A13
0b660: 0962                      RETS   2h

_set_zone_offset:
0b670: 098f 000c                 MMTM   SP,A12,A13
0b690: 4dcd                      MOVE   A14,A13
0b6a0: 100e                      ADDK   20h,A14
0b6b0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0b6e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0b710: 182c                      MOVK   1h,A12
0b720: 0b28 8040 0000            ADDI   8040h,A8
0b750: 8388                      MOVE   A12,*A8,1
0b760: 87a8                      MOVE   *A13,A8,1
0b770: 8f0c                      MOVB   *A8,A12
0b780: 4d88                      MOVE   A12,A8
0b790: 24cc                      SLL    6h,A12
0b7a0: 24a8                      SLL    5h,A8
0b7b0: 410c                      ADD    A8,A12
0b7c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0b7f0: 410c                      ADD    A8,A12
0b800: 87a8                      MOVE   *A13,A8,1
0b810: 0570                      SETF   10h,1,0
0b820: b508 0008                 MOVE   *A8(8h),A8,0
0b840: 0b88 ff00 ffff            ANDI   FFh,A8
0b870: 0b2c 8180 0000            ADDI   8180h,A12
0b8a0: 830c                      MOVE   A8,*A12,1
0b8b0: 87ac                      MOVE   *A13,A12,1
0b8c0: 8f88                      MOVB   *A12,A8
0b8d0: 4d0c                      MOVE   A8,A12
0b8e0: 24c8                      SLL    6h,A8
0b8f0: 24ac                      SLL    5h,A12
0b900: 4188                      ADD    A12,A8
0b910: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0b940: 4188                      ADD    A12,A8
0b950: 87ac                      MOVE   *A13,A12,1
0b960: b58c 0008                 MOVE   *A12(8h),A12,0
0b980: 0b8c f0ff ffff            ANDI   F00h,A12
0b9b0: 2b0c                      SRA    8h,A12
0b9c0: 0b28 81a0 0000            ADDI   81A0h,A8
0b9f0: 0564                      SETF   4h,1,0
0ba00: 8188                      MOVE   A12,*A8,0
0ba10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ba40: 1988                      MOVK   Ch,A8
0ba50: 0b2c 8000 0000            ADDI   8000h,A12
0ba80: 830c                      MOVE   A8,*A12,1
0ba90: a3cf                      MOVE   A14,-*SP,1
0baa0: 182c                      MOVK   1h,A12
0bab0: 938e                      MOVE   A12,*A14+,1
0bac0: 0d5f 3400 0000            CALLA  3400h
0baf0: b7ee 0060                 MOVE   *SP(60h),A14,1
0bb10: 09af 3000                 MMFM   SP,A12,A13
0bb30: 0962                      RETS   2h

_set_zone_gain:
0bb40: 098f 000c                 MMTM   SP,A12,A13
0bb60: 4dcd                      MOVE   A14,A13
0bb70: 100e                      ADDK   20h,A14
0bb80: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0bbb0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0bbe0: 182c                      MOVK   1h,A12
0bbf0: 0b28 8040 0000            ADDI   8040h,A8
0bc20: 8388                      MOVE   A12,*A8,1
0bc30: 87a8                      MOVE   *A13,A8,1
0bc40: 8f0c                      MOVB   *A8,A12
0bc50: 4d88                      MOVE   A12,A8
0bc60: 24cc                      SLL    6h,A12
0bc70: 24a8                      SLL    5h,A8
0bc80: 410c                      ADD    A8,A12
0bc90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0bcc0: 410c                      ADD    A8,A12
0bcd0: 87a8                      MOVE   *A13,A8,1
0bce0: 0b2c 8160 0000            ADDI   8160h,A12
0bd10: 0570                      SETF   10h,1,0
0bd20: b508 0008                 MOVE   *A8(8h),A8,0
0bd40: 830c                      MOVE   A8,*A12,1
0bd50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0bd80: 1988                      MOVK   Ch,A8
0bd90: 0b2c 8000 0000            ADDI   8000h,A12
0bdc0: 830c                      MOVE   A8,*A12,1
0bdd0: a3cf                      MOVE   A14,-*SP,1
0bde0: 182c                      MOVK   1h,A12
0bdf0: 938e                      MOVE   A12,*A14+,1
0be00: 0d5f 3400 0000            CALLA  3400h
0be30: b7ee 0060                 MOVE   *SP(60h),A14,1
0be50: 09af 3000                 MMFM   SP,A12,A13
0be70: 0962                      RETS   2h

_set_zone_beta:
0be80: 098f 000c                 MMTM   SP,A12,A13
0bea0: 4dcd                      MOVE   A14,A13
0beb0: 100e                      ADDK   20h,A14
0bec0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0bef0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0bf20: 458c                      SUB    A12,A12
0bf30: 0b28 8040 0000            ADDI   8040h,A8
0bf60: 8388                      MOVE   A12,*A8,1
0bf70: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0bfa0: 87ac                      MOVE   *A13,A12,1
0bfb0: 8f8c                      MOVB   *A12,A12
0bfc0: 24ac                      SLL    5h,A12
0bfd0: 410c                      ADD    A8,A12
0bfe0: 87a8                      MOVE   *A13,A8,1
0bff0: 0b2c 8760 0000            ADDI   8760h,A12
0c020: 0570                      SETF   10h,1,0
0c030: b508 0008                 MOVE   *A8(8h),A8,0
0c050: 830c                      MOVE   A8,*A12,1
0c060: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0c090: 19a8                      MOVK   Dh,A8
0c0a0: 0b2c 8000 0000            ADDI   8000h,A12
0c0d0: 830c                      MOVE   A8,*A12,1
0c0e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0c110: 0b2c 8000 0000            ADDI   8000h,A12
0c140: 878c                      MOVE   *A12,A12,1
0c150: 0b8c ff00 ffff            ANDI   FFh,A12
0c180: cbf5                      JRNE   C0E0h
0c190: 4508                      SUB    A8,A8
0c1a0: b7ee 0060                 MOVE   *SP(60h),A14,1
0c1c0: 09af 3000                 MMFM   SP,A12,A13
0c1e0: 0962                      RETS   2h

_set_zone_k1:
0c1f0: 098f 000c                 MMTM   SP,A12,A13
0c210: 4dcd                      MOVE   A14,A13
0c220: 100e                      ADDK   20h,A14
0c230: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0c260: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0c290: 458c                      SUB    A12,A12
0c2a0: 0b28 8040 0000            ADDI   8040h,A8
0c2d0: 8388                      MOVE   A12,*A8,1
0c2e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0c310: 87ac                      MOVE   *A13,A12,1
0c320: 8f8c                      MOVB   *A12,A12
0c330: 24cc                      SLL    6h,A12
0c340: 410c                      ADD    A8,A12
0c350: 87a8                      MOVE   *A13,A8,1
0c360: 0b2c 8460 0000            ADDI   8460h,A12
0c390: 0570                      SETF   10h,1,0
0c3a0: b508 0008                 MOVE   *A8(8h),A8,0
0c3c0: 830c                      MOVE   A8,*A12,1
0c3d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0c400: 19a8                      MOVK   Dh,A8
0c410: 0b2c 8000 0000            ADDI   8000h,A12
0c440: 830c                      MOVE   A8,*A12,1
0c450: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0c480: 0b2c 8000 0000            ADDI   8000h,A12
0c4b0: 878c                      MOVE   *A12,A12,1
0c4c0: 0b8c ff00 ffff            ANDI   FFh,A12
0c4f0: cbf5                      JRNE   C450h
0c500: 4508                      SUB    A8,A8
0c510: b7ee 0060                 MOVE   *SP(60h),A14,1
0c530: 09af 3000                 MMFM   SP,A12,A13
0c550: 0962                      RETS   2h

_set_zone_k2:
0c560: 098f 000c                 MMTM   SP,A12,A13
0c580: 4dcd                      MOVE   A14,A13
0c590: 100e                      ADDK   20h,A14
0c5a0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0c5d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0c600: 458c                      SUB    A12,A12
0c610: 0b28 8040 0000            ADDI   8040h,A8
0c640: 8388                      MOVE   A12,*A8,1
0c650: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0c680: 87ac                      MOVE   *A13,A12,1
0c690: 8f8c                      MOVB   *A12,A12
0c6a0: 24cc                      SLL    6h,A12
0c6b0: 410c                      ADD    A8,A12
0c6c0: 87a8                      MOVE   *A13,A8,1
0c6d0: 0b2c 8480 0000            ADDI   8480h,A12
0c700: 0570                      SETF   10h,1,0
0c710: b508 0008                 MOVE   *A8(8h),A8,0
0c730: 830c                      MOVE   A8,*A12,1
0c740: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0c770: 19a8                      MOVK   Dh,A8
0c780: 0b2c 8000 0000            ADDI   8000h,A12
0c7b0: 830c                      MOVE   A8,*A12,1
0c7c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0c7f0: 0b2c 8000 0000            ADDI   8000h,A12
0c820: 878c                      MOVE   *A12,A12,1
0c830: 0b8c ff00 ffff            ANDI   FFh,A12
0c860: cbf5                      JRNE   C7C0h
0c870: 4508                      SUB    A8,A8
0c880: b7ee 0060                 MOVE   *SP(60h),A14,1
0c8a0: 09af 3000                 MMFM   SP,A12,A13
0c8c0: 0962                      RETS   2h

_set_noise_reduction:
0c8d0: 098f 000c                 MMTM   SP,A12,A13
0c8f0: 4dcd                      MOVE   A14,A13
0c900: 0b0e 0080                 ADDI   80h,A14
0c920: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0c950: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0c980: 458c                      SUB    A12,A12
0c990: 0b28 8040 0000            ADDI   8040h,A8
0c9c0: 8388                      MOVE   A12,*A8,1
0c9d0: 87a8                      MOVE   *A13,A8,1
0c9e0: 8f0c                      MOVB   *A8,A12
0c9f0: 144c                      SUBK   2h,A12
0ca00: cb09                      JRNE   CAA0h
0ca10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ca40: 1828                      MOVK   1h,A8
0ca50: 0b2c 8d00 0000            ADDI   8D00h,A12
0ca80: 830c                      MOVE   A8,*A12,1
0ca90: c008                      JR     CB20h
0caa0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cad0: 1868                      MOVK   3h,A8
0cae0: 0b2c 8d00 0000            ADDI   8D00h,A12
0cb10: 830c                      MOVE   A8,*A12,1
0cb20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cb50: 87a8                      MOVE   *A13,A8,1
0cb60: 0b2c 8860 0000            ADDI   8860h,A12
0cb90: 0570                      SETF   10h,1,0
0cba0: b508 0008                 MOVE   *A8(8h),A8,0
0cbc0: 830c                      MOVE   A8,*A12,1
0cbd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cc00: 87a8                      MOVE   *A13,A8,1
0cc10: 0b2c 8880 0000            ADDI   8880h,A12
0cc40: b508 0008                 MOVE   *A8(8h),A8,0
0cc60: 830c                      MOVE   A8,*A12,1
0cc70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cca0: 87a8                      MOVE   *A13,A8,1
0ccb0: 0b2c 88a0 0000            ADDI   88A0h,A12
0cce0: b508 0008                 MOVE   *A8(8h),A8,0
0cd00: 830c                      MOVE   A8,*A12,1
0cd10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cd40: 87a8                      MOVE   *A13,A8,1
0cd50: 0b2c 88c0 0000            ADDI   88C0h,A12
0cd80: b508 0008                 MOVE   *A8(8h),A8,0
0cda0: 830c                      MOVE   A8,*A12,1
0cdb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cde0: 87a8                      MOVE   *A13,A8,1
0cdf0: 0b2c 88e0 0000            ADDI   88E0h,A12
0ce20: b508 0008                 MOVE   *A8(8h),A8,0
0ce40: 830c                      MOVE   A8,*A12,1
0ce50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ce80: 87a8                      MOVE   *A13,A8,1
0ce90: 0b2c 8900 0000            ADDI   8900h,A12
0cec0: b508 0008                 MOVE   *A8(8h),A8,0
0cee0: 830c                      MOVE   A8,*A12,1
0cef0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cf20: 87a8                      MOVE   *A13,A8,1
0cf30: 0b2c 8920 0000            ADDI   8920h,A12
0cf60: b508 0008                 MOVE   *A8(8h),A8,0
0cf80: 830c                      MOVE   A8,*A12,1
0cf90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0cfc0: 87a8                      MOVE   *A13,A8,1
0cfd0: 0b2c 8940 0000            ADDI   8940h,A12
0d000: b508 0008                 MOVE   *A8(8h),A8,0
0d020: 830c                      MOVE   A8,*A12,1
0d030: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0d060: 19c8                      MOVK   Eh,A8
0d070: 0b2c 8000 0000            ADDI   8000h,A12
0d0a0: 830c                      MOVE   A8,*A12,1
0d0b0: a3cf                      MOVE   A14,-*SP,1
0d0c0: 458c                      SUB    A12,A12
0d0d0: 938e                      MOVE   A12,*A14+,1
0d0e0: 0d5f 3400 0000            CALLA  3400h
0d110: b7ee 0060                 MOVE   *SP(60h),A14,1
0d130: 09af 3000                 MMFM   SP,A12,A13
0d150: 0962                      RETS   2h

_set_lut:
0d160: 098f 002c                 MMTM   SP,A10,A12,A13
0d180: 4dcd                      MOVE   A14,A13
0d190: 0b0e 0040                 ADDI   40h,A14
0d1b0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0d1e0: 87a8                      MOVE   *A13,A8,1
0d1f0: 0570                      SETF   10h,1,0
0d200: b508 0008                 MOVE   *A8(8h),A8,0
0d220: c55a                      JRGE   D7D0h
0d230: 87a8                      MOVE   *A13,A8,1
0d240: 1108                      ADDK   8h,A8
0d250: 850c                      MOVE   *A8,A12,0
0d260: 0b0c 1000                 ADDI   1000h,A12
0d280: 8188                      MOVE   A12,*A8,0
0d290: 87ac                      MOVE   *A13,A12,1
0d2a0: b588 0008                 MOVE   *A12(8h),A8,0
0d2c0: b58c 0018                 MOVE   *A12(18h),A12,0
0d2e0: 4188                      ADD    A12,A8
0d2f0: 0b48 efff                 CMPI   1000h,A8
0d310: c43a                      JRLT   D6C0h
0d320: 87ac                      MOVE   *A13,A12,1
0d330: b588 0008                 MOVE   *A12(8h),A8,0
0d350: 03a8                      NEG    A8
0d360: 0b08 1000                 ADDI   1000h,A8
0d380: b10d 0020                 MOVE   A8,*A13(20h),0
0d3a0: a3cf                      MOVE   A14,-*SP,1
0d3b0: d38e 0028                 MOVE   *A12(28h),*A14+,1
0d3d0: 0550                      SETF   10h,0,0
0d3e0: b5a8 0020                 MOVE   *A13(20h),A8,0
0d400: 930e                      MOVE   A8,*A14+,1
0d410: b588 0008                 MOVE   *A12(8h),A8,0
0d430: 930e                      MOVE   A8,*A14+,1
0d440: 8f88                      MOVB   *A12,A8
0d450: 930e                      MOVE   A8,*A14+,1
0d460: 0d5f d9b0 0001            CALLA  1D9B0h
0d490: 4508                      SUB    A8,A8
0d4a0: 0570                      SETF   10h,1,0
0d4b0: b10c 0008                 MOVE   A8,*A12(8h),0
0d4d0: b5a8 0020                 MOVE   *A13(20h),A8,0
0d4f0: 2468                      SLL    3h,A8
0d500: b78a 0028                 MOVE   *A12(28h),A10,1
0d520: 410a                      ADD    A8,A10
0d530: b34c 0028                 MOVE   A10,*A12(28h),1
0d550: b5aa 0020                 MOVE   *A13(20h),A10,0
0d570: 130c                      ADDK   18h,A12
0d580: 8588                      MOVE   *A12,A8,0
0d590: 4548                      SUB    A10,A8
0d5a0: 810c                      MOVE   A8,*A12,0
0d5b0: a3cf                      MOVE   A14,-*SP,1
0d5c0: 87ac                      MOVE   *A13,A12,1
0d5d0: d38e 0028                 MOVE   *A12(28h),*A14+,1
0d5f0: 0550                      SETF   10h,0,0
0d600: b588 0018                 MOVE   *A12(18h),A8,0
0d620: 930e                      MOVE   A8,*A14+,1
0d630: b588 0008                 MOVE   *A12(8h),A8,0
0d650: 930e                      MOVE   A8,*A14+,1
0d660: 8f88                      MOVB   *A12,A8
0d670: 930e                      MOVE   A8,*A14+,1
0d680: 0d5f d9b0 0001            CALLA  1D9B0h
0d6b0: c021                      JR     D8D0h
0d6c0: a3cf                      MOVE   A14,-*SP,1
0d6d0: 87ac                      MOVE   *A13,A12,1
0d6e0: d38e 0028                 MOVE   *A12(28h),*A14+,1
0d700: 0550                      SETF   10h,0,0
0d710: b58a 0018                 MOVE   *A12(18h),A10,0
0d730: 934e                      MOVE   A10,*A14+,1
0d740: b58a 0008                 MOVE   *A12(8h),A10,0
0d760: 934e                      MOVE   A10,*A14+,1
0d770: 8f8a                      MOVB   *A12,A10
0d780: 934e                      MOVE   A10,*A14+,1
0d790: 0d5f d9b0 0001            CALLA  1D9B0h
0d7c0: c010                      JR     D8D0h
0d7d0: a3cf                      MOVE   A14,-*SP,1
0d7e0: 87ac                      MOVE   *A13,A12,1
0d7f0: d38e 0028                 MOVE   *A12(28h),*A14+,1
0d810: 0550                      SETF   10h,0,0
0d820: b58a 0018                 MOVE   *A12(18h),A10,0
0d840: 934e                      MOVE   A10,*A14+,1
0d850: b58a 0008                 MOVE   *A12(8h),A10,0
0d870: 934e                      MOVE   A10,*A14+,1
0d880: 8f8a                      MOVB   *A12,A10
0d890: 934e                      MOVE   A10,*A14+,1
0d8a0: 0d5f d9b0 0001            CALLA  1D9B0h
0d8d0: 4508                      SUB    A8,A8
0d8e0: b7ee 0080                 MOVE   *SP(80h),A14,1
0d900: 09af 3400                 MMFM   SP,A10,A12,A13
0d920: 0962                      RETS   2h

_set_freeze:
0d930: 098f 000c                 MMTM   SP,A12,A13
0d950: 4dcd                      MOVE   A14,A13
0d960: 100e                      ADDK   20h,A14
0d970: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0d9a0: c01b                      JR     DB60h
0d9b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0d9e0: 458c                      SUB    A12,A12
0d9f0: 0b28 8040 0000            ADDI   8040h,A8
0da20: 8388                      MOVE   A12,*A8,1
0da30: c019                      JR     DBD0h
0da40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0da70: 1828                      MOVK   1h,A8
0da80: 0b2c 8040 0000            ADDI   8040h,A12
0dab0: 830c                      MOVE   A8,*A12,1
0dac0: c010                      JR     DBD0h
0dad0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0db00: 1888                      MOVK   4h,A8
0db10: 0b2c 8040 0000            ADDI   8040h,A12
0db40: 830c                      MOVE   A8,*A12,1
0db50: c007                      JR     DBD0h
0db60: 87ac                      MOVE   *A13,A12,1
0db70: 8f88                      MOVB   *A12,A8
0db80: caf4                      JREQ   DAD0h
0db90: 1428                      DEC    A8
0dba0: cae9                      JREQ   DA40h
0dbb0: 1428                      DEC    A8
0dbc0: cade                      JREQ   D9B0h
0dbd0: 87ac                      MOVE   *A13,A12,1
0dbe0: af88 0008                 MOVB   *A12(8h),A8
0dc00: 3948                      DSJS   A8,DCB0h
0dc10: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0dc40: 09cc ffff                 MOVI   FFFFh,A12
0dc60: 0b28 9980 0000            ADDI   9980h,A8
0dc90: 0561                      SETF   1h,1,0
0dca0: 8188                      MOVE   A12,*A8,0
0dcb0: 87ac                      MOVE   *A13,A12,1
0dcc0: af88 0008                 MOVB   *A12(8h),A8
0dce0: cb09                      JRNE   DD80h
0dcf0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0dd20: 458c                      SUB    A12,A12
0dd30: 0b28 9980 0000            ADDI   9980h,A8
0dd60: 0561                      SETF   1h,1,0
0dd70: 8188                      MOVE   A12,*A8,0
0dd80: 87ac                      MOVE   *A13,A12,1
0dd90: af88 0010                 MOVB   *A12(10h),A8
0ddb0: 3948                      DSJS   A8,DE60h
0ddc0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0ddf0: 09cc ffff                 MOVI   FFFFh,A12
0de10: 0b28 9981 0000            ADDI   9981h,A8
0de40: 0561                      SETF   1h,1,0
0de50: 8188                      MOVE   A12,*A8,0
0de60: 87ac                      MOVE   *A13,A12,1
0de70: af88 0010                 MOVB   *A12(10h),A8
0de90: cb09                      JRNE   DF30h
0dea0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0ded0: 458c                      SUB    A12,A12
0dee0: 0b28 9981 0000            ADDI   9981h,A8
0df10: 0561                      SETF   1h,1,0
0df20: 8188                      MOVE   A12,*A8,0
0df30: 87ac                      MOVE   *A13,A12,1
0df40: af88 0018                 MOVB   *A12(18h),A8
0df60: 3948                      DSJS   A8,E010h
0df70: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0dfa0: 09cc ffff                 MOVI   FFFFh,A12
0dfc0: 0b28 9982 0000            ADDI   9982h,A8
0dff0: 0561                      SETF   1h,1,0
0e000: 8188                      MOVE   A12,*A8,0
0e010: 87ac                      MOVE   *A13,A12,1
0e020: af88 0018                 MOVB   *A12(18h),A8
0e040: cb09                      JRNE   E0E0h
0e050: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e080: 458c                      SUB    A12,A12
0e090: 0b28 9982 0000            ADDI   9982h,A8
0e0c0: 0561                      SETF   1h,1,0
0e0d0: 8188                      MOVE   A12,*A8,0
0e0e0: 87ac                      MOVE   *A13,A12,1
0e0f0: af88 0020                 MOVB   *A12(20h),A8
0e110: 3948                      DSJS   A8,E1C0h
0e120: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e150: 09cc ffff                 MOVI   FFFFh,A12
0e170: 0b28 9983 0000            ADDI   9983h,A8
0e1a0: 0561                      SETF   1h,1,0
0e1b0: 8188                      MOVE   A12,*A8,0
0e1c0: 87ac                      MOVE   *A13,A12,1
0e1d0: af88 0020                 MOVB   *A12(20h),A8
0e1f0: cb09                      JRNE   E290h
0e200: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e230: 458c                      SUB    A12,A12
0e240: 0b28 9983 0000            ADDI   9983h,A8
0e270: 0561                      SETF   1h,1,0
0e280: 8188                      MOVE   A12,*A8,0
0e290: 87ac                      MOVE   *A13,A12,1
0e2a0: af88 0028                 MOVB   *A12(28h),A8
0e2c0: 3948                      DSJS   A8,E370h
0e2d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e300: 09cc ffff                 MOVI   FFFFh,A12
0e320: 0b28 99a0 0000            ADDI   99A0h,A8
0e350: 0561                      SETF   1h,1,0
0e360: 8188                      MOVE   A12,*A8,0
0e370: 87ac                      MOVE   *A13,A12,1
0e380: af88 0028                 MOVB   *A12(28h),A8
0e3a0: cb09                      JRNE   E440h
0e3b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e3e0: 458c                      SUB    A12,A12
0e3f0: 0b28 99a0 0000            ADDI   99A0h,A8
0e420: 0561                      SETF   1h,1,0
0e430: 8188                      MOVE   A12,*A8,0
0e440: 87ac                      MOVE   *A13,A12,1
0e450: af88 0030                 MOVB   *A12(30h),A8
0e470: 3948                      DSJS   A8,E520h
0e480: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e4b0: 09cc ffff                 MOVI   FFFFh,A12
0e4d0: 0b28 99a1 0000            ADDI   99A1h,A8
0e500: 0561                      SETF   1h,1,0
0e510: 8188                      MOVE   A12,*A8,0
0e520: 87ac                      MOVE   *A13,A12,1
0e530: af88 0030                 MOVB   *A12(30h),A8
0e550: cb09                      JRNE   E5F0h
0e560: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e590: 458c                      SUB    A12,A12
0e5a0: 0b28 99a1 0000            ADDI   99A1h,A8
0e5d0: 0561                      SETF   1h,1,0
0e5e0: 8188                      MOVE   A12,*A8,0
0e5f0: 87ac                      MOVE   *A13,A12,1
0e600: af88 0038                 MOVB   *A12(38h),A8
0e620: 3948                      DSJS   A8,E6D0h
0e630: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e660: 09cc ffff                 MOVI   FFFFh,A12
0e680: 0b28 99a2 0000            ADDI   99A2h,A8
0e6b0: 0561                      SETF   1h,1,0
0e6c0: 8188                      MOVE   A12,*A8,0
0e6d0: 87ac                      MOVE   *A13,A12,1
0e6e0: af88 0038                 MOVB   *A12(38h),A8
0e700: cb09                      JRNE   E7A0h
0e710: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e740: 458c                      SUB    A12,A12
0e750: 0b28 99a2 0000            ADDI   99A2h,A8
0e780: 0561                      SETF   1h,1,0
0e790: 8188                      MOVE   A12,*A8,0
0e7a0: 87ac                      MOVE   *A13,A12,1
0e7b0: af88 0040                 MOVB   *A12(40h),A8
0e7d0: 3948                      DSJS   A8,E880h
0e7e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e810: 09cc ffff                 MOVI   FFFFh,A12
0e830: 0b28 99a3 0000            ADDI   99A3h,A8
0e860: 0561                      SETF   1h,1,0
0e870: 8188                      MOVE   A12,*A8,0
0e880: 87ac                      MOVE   *A13,A12,1
0e890: af88 0040                 MOVB   *A12(40h),A8
0e8b0: cb09                      JRNE   E950h
0e8c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0e8f0: 458c                      SUB    A12,A12
0e900: 0b28 99a3 0000            ADDI   99A3h,A8
0e930: 0561                      SETF   1h,1,0
0e940: 8188                      MOVE   A12,*A8,0
0e950: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0e980: 1a68                      MOVK   13h,A8
0e990: 0b2c 8000 0000            ADDI   8000h,A12
0e9c0: 830c                      MOVE   A8,*A12,1
0e9d0: 87ac                      MOVE   *A13,A12,1
0e9e0: 8f88                      MOVB   *A12,A8
0e9f0: cb07                      JRNE   EA70h
0ea00: a3cf                      MOVE   A14,-*SP,1
0ea10: 4508                      SUB    A8,A8
0ea20: 930e                      MOVE   A8,*A14+,1
0ea30: 0d5f 3400 0000            CALLA  3400h
0ea60: c006                      JR     EAD0h
0ea70: a3cf                      MOVE   A14,-*SP,1
0ea80: 1828                      MOVK   1h,A8
0ea90: 930e                      MOVE   A8,*A14+,1
0eaa0: 0d5f 3400 0000            CALLA  3400h
0ead0: b7ee 0060                 MOVE   *SP(60h),A14,1
0eaf0: 09af 3000                 MMFM   SP,A12,A13
0eb10: 0962                      RETS   2h

_set_scan_rate:
0eb20: 098f 002c                 MMTM   SP,A10,A12,A13
0eb40: 4dcd                      MOVE   A14,A13
0eb50: 0b0e 0040                 ADDI   40h,A14
0eb70: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0eba0: 458c                      SUB    A12,A12
0ebb0: 0b28 8040 0000            ADDI   8040h,A8
0ebe0: 8388                      MOVE   A12,*A8,1
0ebf0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0ec20: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0ec40: 0b28 8140 0000            ADDI   8140h,A8
0ec70: 0550                      SETF   10h,0,0
0ec80: 958a                      MOVE   *A12+,A10,0
0ec90: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0ecb0: 8348                      MOVE   A10,*A8,1
0ecc0: b98d 0000 0010            MOVE   *A12(0h),*A13(10h),0
0ecf0: 454a                      SUB    A10,A10
0ed00: 814d                      MOVE   A10,*A13,0
0ed10: 0570                      SETF   10h,1,0
0ed20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ed50: 85aa                      MOVE   *A13,A10,0
0ed60: 24ea                      SLL    7h,A10
0ed70: 418a                      ADD    A12,A10
0ed80: 0b2a 9000 0000            ADDI   9000h,A10
0edb0: 874a                      MOVE   *A10,A10,1
0edc0: 0b8a ff00 ffff            ANDI   FFh,A10
0edf0: b14d 0020                 MOVE   A10,*A13(20h),0
0ee10: 85a8                      MOVE   *A13,A8,0
0ee20: 24e8                      SLL    7h,A8
0ee30: 4188                      ADD    A12,A8
0ee40: 0b28 9020 0000            ADDI   9020h,A8
0ee70: 8708                      MOVE   *A8,A8,1
0ee80: 0b88 ff00 ffff            ANDI   FFh,A8
0eeb0: 2508                      SLL    8h,A8
0eec0: 4148                      ADD    A10,A8
0eed0: b10d 0020                 MOVE   A8,*A13(20h),0
0eef0: b5aa 0010                 MOVE   *A13(10h),A10,0
0ef10: b5a8 0020                 MOVE   *A13(20h),A8,0
0ef30: 4148                      ADD    A10,A8
0ef40: b10d 0020                 MOVE   A8,*A13(20h),0
0ef60: b5a8 0020                 MOVE   *A13(20h),A8,0
0ef80: c503                      JRGE   EFC0h
0ef90: 4508                      SUB    A8,A8
0efa0: b10d 0020                 MOVE   A8,*A13(20h),0
0efc0: 85a8                      MOVE   *A13,A8,0
0efd0: 24e8                      SLL    7h,A8
0efe0: 4188                      ADD    A12,A8
0eff0: b5aa 0020                 MOVE   *A13(20h),A10,0
0f010: 0b8a ff00 ffff            ANDI   FFh,A10
0f040: 0b28 9000 0000            ADDI   9000h,A8
0f070: 8348                      MOVE   A10,*A8,1
0f080: 85aa                      MOVE   *A13,A10,0
0f090: 24ea                      SLL    7h,A10
0f0a0: 418a                      ADD    A12,A10
0f0b0: b5a8 0020                 MOVE   *A13(20h),A8,0
0f0d0: 0b88 00ff ffff            ANDI   FF00h,A8
0f100: 2b08                      SRA    8h,A8
0f110: 0b2a 9020 0000            ADDI   9020h,A10
0f140: 830a                      MOVE   A8,*A10,1
0f150: 85aa                      MOVE   *A13,A10,0
0f160: 102a                      INC    A10
0f170: 814d                      MOVE   A10,*A13,0
0f180: 148a                      SUBK   4h,A10
0f190: c4b8                      JRLT   ED20h
0f1a0: 18ca                      MOVK   6h,A10
0f1b0: 0b2c 8000 0000            ADDI   8000h,A12
0f1e0: 834c                      MOVE   A10,*A12,1
0f1f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f220: 0b2c 8000 0000            ADDI   8000h,A12
0f250: 878c                      MOVE   *A12,A12,1
0f260: 0b8c ff00 ffff            ANDI   FFh,A12
0f290: cbf5                      JRNE   F1F0h
0f2a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f2d0: 09ca 0021                 MOVI   21h,A10
0f2f0: 0b2c 8000 0000            ADDI   8000h,A12
0f320: 834c                      MOVE   A10,*A12,1
0f330: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f360: 0b2c 8000 0000            ADDI   8000h,A12
0f390: 878c                      MOVE   *A12,A12,1
0f3a0: 0b8c ff00 ffff            ANDI   FFh,A12
0f3d0: cbf5                      JRNE   F330h
0f3e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f410: 180a                      MOVK   20h,A10
0f420: 0b2c 8000 0000            ADDI   8000h,A12
0f450: 834c                      MOVE   A10,*A12,1
0f460: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f490: 0b2c 8000 0000            ADDI   8000h,A12
0f4c0: 878c                      MOVE   *A12,A12,1
0f4d0: 0b8c ff00 ffff            ANDI   FFh,A12
0f500: cbf5                      JRNE   F460h
0f510: 4508                      SUB    A8,A8
0f520: b7ee 0080                 MOVE   *SP(80h),A14,1
0f540: 09af 3400                 MMFM   SP,A10,A12,A13
0f560: 0962                      RETS   2h

_set_number_raster:
0f570: 098f 000c                 MMTM   SP,A12,A13
0f590: 4dcd                      MOVE   A14,A13
0f5a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0f5d0: 458c                      SUB    A12,A12
0f5e0: 0b28 8040 0000            ADDI   8040h,A8
0f610: 8388                      MOVE   A12,*A8,1
0f620: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0f650: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0f670: 0550                      SETF   10h,0,0
0f680: 858c                      MOVE   *A12,A12,0
0f690: 0b8c ff00 ffff            ANDI   FFh,A12
0f6c0: 0b28 8b60 0000            ADDI   8B60h,A8
0f6f0: 8388                      MOVE   A12,*A8,1
0f700: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f730: 1908                      MOVK   8h,A8
0f740: 0b2c 8000 0000            ADDI   8000h,A12
0f770: 830c                      MOVE   A8,*A12,1
0f780: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0f7b0: 0b2c 8000 0000            ADDI   8000h,A12
0f7e0: 878c                      MOVE   *A12,A12,1
0f7f0: 0b8c ff00 ffff            ANDI   FFh,A12
0f820: cbf5                      JRNE   F780h
0f830: 4508                      SUB    A8,A8
0f840: b7ee 0060                 MOVE   *SP(60h),A14,1
0f860: 09af 3000                 MMFM   SP,A12,A13
0f880: 0962                      RETS   2h

_set_emission_image:
0f890: 098f 000c                 MMTM   SP,A12,A13
0f8b0: 4dcd                      MOVE   A14,A13
0f8c0: 0b0e 0040                 ADDI   40h,A14
0f8e0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0f900: 0550                      SETF   10h,0,0
0f910: 950c                      MOVE   *A8+,A12,0
0f920: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
0f940: 1868                      MOVK   3h,A8
0f950: 510c                      AND    A8,A12
0f960: 818d                      MOVE   A12,*A13,0
0f970: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0f990: 9588                      MOVE   *A12+,A8,0
0f9a0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0f9c0: b10d 0010                 MOVE   A8,*A13(10h),0
0f9e0: b98d 0000 0020            MOVE   *A12(0h),*A13(20h),0
0fa10: 07a8 7b00 0003            MOVE   @37B00h,A8,1
0fa40: 458c                      SUB    A12,A12
0fa50: 0b28 8040 0000            ADDI   8040h,A8
0fa80: 8388                      MOVE   A12,*A8,1
0fa90: 85a8                      MOVE   *A13,A8,0
0faa0: ca0a                      JREQ   FB50h
0fab0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0fae0: 2488                      SLL    4h,A8
0faf0: 11e8                      ADDK   Fh,A8
0fb00: 0b2c 99e0 0000            ADDI   99E0h,A12
0fb30: 830c                      MOVE   A8,*A12,1
0fb40: c008                      JR     FBD0h
0fb50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0fb80: 4508                      SUB    A8,A8
0fb90: 0b2c 99e0 0000            ADDI   99E0h,A12
0fbc0: 830c                      MOVE   A8,*A12,1
0fbd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0fc00: b5a8 0010                 MOVE   *A13(10h),A8,0
0fc20: 0b88 ff00 ffff            ANDI   FFh,A8
0fc50: 0b2c 9d20 0000            ADDI   9D20h,A12
0fc80: 830c                      MOVE   A8,*A12,1
0fc90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0fcc0: b5a8 0020                 MOVE   *A13(20h),A8,0
0fce0: 0b88 ff00 ffff            ANDI   FFh,A8
0fd10: 0b2c 9d40 0000            ADDI   9D40h,A12
0fd40: 830c                      MOVE   A8,*A12,1
0fd50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0fd80: b5a8 0010                 MOVE   *A13(10h),A8,0
0fda0: 0b88 ff00 ffff            ANDI   FFh,A8
0fdd0: 0b2c 9d60 0000            ADDI   9D60h,A12
0fe00: 830c                      MOVE   A8,*A12,1
0fe10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0fe40: b5a8 0020                 MOVE   *A13(20h),A8,0
0fe60: 0b88 ff00 ffff            ANDI   FFh,A8
0fe90: 0b2c 9d80 0000            ADDI   9D80h,A12
0fec0: 830c                      MOVE   A8,*A12,1
0fed0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ff00: 1ac8                      MOVK   16h,A8
0ff10: 0b2c 8000 0000            ADDI   8000h,A12
0ff40: 830c                      MOVE   A8,*A12,1
0ff50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
0ff80: 0b2c 8000 0000            ADDI   8000h,A12
0ffb0: 878c                      MOVE   *A12,A12,1
0ffc0: 0b8c ff00 ffff            ANDI   FFh,A12
0fff0: cbf5                      JRNE   FF50h
10000: 4508                      SUB    A8,A8
10010: b7ee 0060                 MOVE   *SP(60h),A14,1
10030: 09af 3000                 MMFM   SP,A12,A13
10050: 0962                      RETS   2h

_set_raster_origin:
10060: 098f 000c                 MMTM   SP,A12,A13
10080: 4dcd                      MOVE   A14,A13
10090: 100e                      ADDK   20h,A14
100a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
100c0: 0550                      SETF   10h,0,0
100d0: 950c                      MOVE   *A8+,A12,0
100e0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
10100: 818d                      MOVE   A12,*A13,0
10110: b90d 0000 0010            MOVE   *A8(0h),*A13(10h),0
10140: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10170: 458c                      SUB    A12,A12
10180: 0b28 8040 0000            ADDI   8040h,A8
101b0: 8388                      MOVE   A12,*A8,1
101c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
101f0: 85ac                      MOVE   *A13,A12,0
10200: 0b8c ff00 ffff            ANDI   FFh,A12
10230: 0b28 8b80 0000            ADDI   8B80h,A8
10260: 8388                      MOVE   A12,*A8,1
10270: 07ac 7b00 0003            MOVE   @37B00h,A12,1
102a0: 85a8                      MOVE   *A13,A8,0
102b0: 0b88 00ff ffff            ANDI   FF00h,A8
102e0: 2b08                      SRA    8h,A8
102f0: 0b2c 8ba0 0000            ADDI   8BA0h,A12
10320: 830c                      MOVE   A8,*A12,1
10330: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10360: b5a8 0010                 MOVE   *A13(10h),A8,0
10380: 0b88 ff00 ffff            ANDI   FFh,A8
103b0: 0b2c 8c40 0000            ADDI   8C40h,A12
103e0: 830c                      MOVE   A8,*A12,1
103f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10420: b5a8 0010                 MOVE   *A13(10h),A8,0
10440: 0b88 00ff ffff            ANDI   FF00h,A8
10470: 2b08                      SRA    8h,A8
10480: 0b2c 8c60 0000            ADDI   8C60h,A12
104b0: 830c                      MOVE   A8,*A12,1
104c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
104f0: 18e8                      MOVK   7h,A8
10500: 0b2c 8000 0000            ADDI   8000h,A12
10530: 830c                      MOVE   A8,*A12,1
10540: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10570: 0b2c 8000 0000            ADDI   8000h,A12
105a0: 878c                      MOVE   *A12,A12,1
105b0: 0b8c ff00 ffff            ANDI   FFh,A12
105e0: cbf5                      JRNE   10540h
105f0: 4508                      SUB    A8,A8
10600: b7ee 0060                 MOVE   *SP(60h),A14,1
10620: 09af 3000                 MMFM   SP,A12,A13
10640: 0962                      RETS   2h

_set_raster_size:
10650: 098f 000c                 MMTM   SP,A12,A13
10670: 4dcd                      MOVE   A14,A13
10680: 100e                      ADDK   20h,A14
10690: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
106b0: 0550                      SETF   10h,0,0
106c0: 950c                      MOVE   *A8+,A12,0
106d0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
106f0: 818d                      MOVE   A12,*A13,0
10700: b90d 0000 0010            MOVE   *A8(0h),*A13(10h),0
10730: b5a8 0010                 MOVE   *A13(10h),A8,0
10750: 0b48 f3ff                 CMPI   C00h,A8
10770: cb2c                      JRNE   10A40h
10780: 0b4c f6ff                 CMPI   900h,A12
107a0: cb29                      JRNE   10A40h
107b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
107e0: 458c                      SUB    A12,A12
107f0: 0b28 9800 0000            ADDI   9800h,A8
10820: 8388                      MOVE   A12,*A8,1
10830: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10860: 198c                      MOVK   Ch,A12
10870: 0b28 9820 0000            ADDI   9820h,A8
108a0: 8388                      MOVE   A12,*A8,1
108b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
108e0: 458c                      SUB    A12,A12
108f0: 0b28 9840 0000            ADDI   9840h,A8
10920: 8388                      MOVE   A12,*A8,1
10930: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10960: 192c                      MOVK   9h,A12
10970: 0b28 9860 0000            ADDI   9860h,A8
109a0: 8388                      MOVE   A12,*A8,1
109b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
109e0: 184c                      MOVK   2h,A12
109f0: 0b28 aae0 0000            ADDI   AAE0h,A8
10a20: 8388                      MOVE   A12,*A8,1
10a30: c028                      JR     10CC0h
10a40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10a70: 458c                      SUB    A12,A12
10a80: 0b28 9800 0000            ADDI   9800h,A8
10ab0: 8388                      MOVE   A12,*A8,1
10ac0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10af0: 188c                      MOVK   4h,A12
10b00: 0b28 9820 0000            ADDI   9820h,A8
10b30: 8388                      MOVE   A12,*A8,1
10b40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10b70: 458c                      SUB    A12,A12
10b80: 0b28 9840 0000            ADDI   9840h,A8
10bb0: 8388                      MOVE   A12,*A8,1
10bc0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10bf0: 186c                      MOVK   3h,A12
10c00: 0b28 9860 0000            ADDI   9860h,A8
10c30: 8388                      MOVE   A12,*A8,1
10c40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
10c70: 458c                      SUB    A12,A12
10c80: 0b28 aae0 0000            ADDI   AAE0h,A8
10cb0: 8388                      MOVE   A12,*A8,1
10cc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10cf0: 4508                      SUB    A8,A8
10d00: 0b2c 8040 0000            ADDI   8040h,A12
10d30: 830c                      MOVE   A8,*A12,1
10d40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10d70: 85a8                      MOVE   *A13,A8,0
10d80: 0b88 ff00 ffff            ANDI   FFh,A8
10db0: 0b2c 8c80 0000            ADDI   8C80h,A12
10de0: 830c                      MOVE   A8,*A12,1
10df0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10e20: 85a8                      MOVE   *A13,A8,0
10e30: 0b88 00ff ffff            ANDI   FF00h,A8
10e60: 2b08                      SRA    8h,A8
10e70: 0b2c 8ca0 0000            ADDI   8CA0h,A12
10ea0: 830c                      MOVE   A8,*A12,1
10eb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10ee0: b5a8 0010                 MOVE   *A13(10h),A8,0
10f00: 0b88 ff00 ffff            ANDI   FFh,A8
10f30: 0b2c 8bc0 0000            ADDI   8BC0h,A12
10f60: 830c                      MOVE   A8,*A12,1
10f70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
10fa0: b5a8 0010                 MOVE   *A13(10h),A8,0
10fc0: 0b88 00ff ffff            ANDI   FF00h,A8
10ff0: 2b08                      SRA    8h,A8
11000: 0b2c 8be0 0000            ADDI   8BE0h,A12
11030: 830c                      MOVE   A8,*A12,1
11040: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11070: 18e8                      MOVK   7h,A8
11080: 0b2c 8000 0000            ADDI   8000h,A12
110b0: 830c                      MOVE   A8,*A12,1
110c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
110f0: 0b2c 8000 0000            ADDI   8000h,A12
11120: 878c                      MOVE   *A12,A12,1
11130: 0b8c ff00 ffff            ANDI   FFh,A12
11160: cbf5                      JRNE   110C0h
11170: 07ac 7b00 0003            MOVE   @37B00h,A12,1
111a0: 0b2c ac00 0000            ADDI   AC00h,A12
111d0: 878c                      MOVE   *A12,A12,1
111e0: 0b8c ff00 ffff            ANDI   FFh,A12
11210: ca14                      JREQ   11360h
11220: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11250: 09c8 0023                 MOVI   23h,A8
11270: 0b2c 8000 0000            ADDI   8000h,A12
112a0: 830c                      MOVE   A8,*A12,1
112b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
112e0: 0b2c 8000 0000            ADDI   8000h,A12
11310: 878c                      MOVE   *A12,A12,1
11320: 0b8c ff00 ffff            ANDI   FFh,A12
11350: cbf5                      JRNE   112B0h
11360: 4508                      SUB    A8,A8
11370: b7ee 0060                 MOVE   *SP(60h),A14,1
11390: 09af 3000                 MMFM   SP,A12,A13
113b0: 0962                      RETS   2h

_set_dual_mag:
113c0: 098f 000c                 MMTM   SP,A12,A13
113e0: 4dcd                      MOVE   A14,A13
113f0: 0b0e 0060                 ADDI   60h,A14
11410: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
11430: 0550                      SETF   10h,0,0
11440: 950c                      MOVE   *A8+,A12,0
11450: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
11470: 1868                      MOVK   3h,A8
11480: 510c                      AND    A8,A12
11490: 818d                      MOVE   A12,*A13,0
114a0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
114c0: 9588                      MOVE   *A12+,A8,0
114d0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
114f0: b10d 0010                 MOVE   A8,*A13(10h),0
11510: 9588                      MOVE   *A12+,A8,0
11520: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
11540: b10d 0020                 MOVE   A8,*A13(20h),0
11560: 9588                      MOVE   *A12+,A8,0
11570: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
11590: b10d 0030                 MOVE   A8,*A13(30h),0
115b0: 9588                      MOVE   *A12+,A8,0
115c0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
115e0: b10d 0040                 MOVE   A8,*A13(40h),0
11600: b98d 0000 0050            MOVE   *A12(0h),*A13(50h),0
11630: 0570                      SETF   10h,1,0
11640: b5a8 0050                 MOVE   *A13(50h),A8,0
11660: 1448                      SUBK   2h,A8
11670: cb09                      JRNE   11710h
11680: 07a8 7b00 0003            MOVE   @37B00h,A8,1
116b0: 458c                      SUB    A12,A12
116c0: 0b28 8040 0000            ADDI   8040h,A8
116f0: 8388                      MOVE   A12,*A8,1
11700: c008                      JR     11790h
11710: 07a8 7b00 0003            MOVE   @37B00h,A8,1
11740: 184c                      MOVK   2h,A12
11750: 0b28 8040 0000            ADDI   8040h,A8
11780: 8388                      MOVE   A12,*A8,1
11790: 07ac 7b00 0003            MOVE   @37B00h,A12,1
117c0: 85a8                      MOVE   *A13,A8,0
117d0: 24e8                      SLL    7h,A8
117e0: 4188                      ADD    A12,A8
117f0: b5ac 0010                 MOVE   *A13(10h),A12,0
11810: 0b8c ff00 ffff            ANDI   FFh,A12
11840: 0b28 9400 0000            ADDI   9400h,A8
11870: 8388                      MOVE   A12,*A8,1
11880: 07ac 7b00 0003            MOVE   @37B00h,A12,1
118b0: 85a8                      MOVE   *A13,A8,0
118c0: 24e8                      SLL    7h,A8
118d0: 4188                      ADD    A12,A8
118e0: b5ac 0010                 MOVE   *A13(10h),A12,0
11900: 0b8c 00ff ffff            ANDI   FF00h,A12
11930: 2b0c                      SRA    8h,A12
11940: 0b28 9420 0000            ADDI   9420h,A8
11970: 8388                      MOVE   A12,*A8,1
11980: 07ac 7b00 0003            MOVE   @37B00h,A12,1
119b0: 85a8                      MOVE   *A13,A8,0
119c0: 24e8                      SLL    7h,A8
119d0: 4188                      ADD    A12,A8
119e0: b5ac 0020                 MOVE   *A13(20h),A12,0
11a00: 0b8c ff00 ffff            ANDI   FFh,A12
11a30: 0b28 9440 0000            ADDI   9440h,A8
11a60: 8388                      MOVE   A12,*A8,1
11a70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11aa0: 85a8                      MOVE   *A13,A8,0
11ab0: 24e8                      SLL    7h,A8
11ac0: 4188                      ADD    A12,A8
11ad0: b5ac 0020                 MOVE   *A13(20h),A12,0
11af0: 0b8c 00ff ffff            ANDI   FF00h,A12
11b20: 2b0c                      SRA    8h,A12
11b30: 0b28 9460 0000            ADDI   9460h,A8
11b60: 8388                      MOVE   A12,*A8,1
11b70: b5ac 0040                 MOVE   *A13(40h),A12,0
11b90: c503                      JRGE   11BD0h
11ba0: 4508                      SUB    A8,A8
11bb0: b10d 0040                 MOVE   A8,*A13(40h),0
11bd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11c00: 85a8                      MOVE   *A13,A8,0
11c10: 24e8                      SLL    7h,A8
11c20: 4188                      ADD    A12,A8
11c30: b5ac 0040                 MOVE   *A13(40h),A12,0
11c50: 0b8c ff00 ffff            ANDI   FFh,A12
11c80: 0b28 9000 0000            ADDI   9000h,A8
11cb0: 8388                      MOVE   A12,*A8,1
11cc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11cf0: 85a8                      MOVE   *A13,A8,0
11d00: 24e8                      SLL    7h,A8
11d10: 4188                      ADD    A12,A8
11d20: b5ac 0040                 MOVE   *A13(40h),A12,0
11d40: 0b8c 00ff ffff            ANDI   FF00h,A12
11d70: 2b0c                      SRA    8h,A12
11d80: 0b28 9020 0000            ADDI   9020h,A8
11db0: 8388                      MOVE   A12,*A8,1
11dc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11df0: 85a8                      MOVE   *A13,A8,0
11e00: 24e8                      SLL    7h,A8
11e10: 4188                      ADD    A12,A8
11e20: b5ac 0030                 MOVE   *A13(30h),A12,0
11e40: 0b8c ff00 ffff            ANDI   FFh,A12
11e70: 0b28 9040 0000            ADDI   9040h,A8
11ea0: 8388                      MOVE   A12,*A8,1
11eb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11ee0: 85a8                      MOVE   *A13,A8,0
11ef0: 24e8                      SLL    7h,A8
11f00: 4188                      ADD    A12,A8
11f10: b5ac 0030                 MOVE   *A13(30h),A12,0
11f30: 0b8c 00ff ffff            ANDI   FF00h,A12
11f60: 2b0c                      SRA    8h,A12
11f70: 0b28 9060 0000            ADDI   9060h,A8
11fa0: 8388                      MOVE   A12,*A8,1
11fb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
11fe0: 09c8 0021                 MOVI   21h,A8
12000: 0b2c 8000 0000            ADDI   8000h,A12
12030: 830c                      MOVE   A8,*A12,1
12040: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12070: 0b2c 8000 0000            ADDI   8000h,A12
120a0: 878c                      MOVE   *A12,A12,1
120b0: 0b8c ff00 ffff            ANDI   FFh,A12
120e0: cbf5                      JRNE   12040h
120f0: 4508                      SUB    A8,A8
12100: b7ee 0060                 MOVE   *SP(60h),A14,1
12120: 09af 3000                 MMFM   SP,A12,A13
12140: 0962                      RETS   2h

_set_stereo_parameters:
12150: 098f 000c                 MMTM   SP,A12,A13
12170: 4dcd                      MOVE   A14,A13
12180: 100e                      ADDK   20h,A14
12190: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
121c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
121f0: 458c                      SUB    A12,A12
12200: 0b28 8040 0000            ADDI   8040h,A8
12230: 8388                      MOVE   A12,*A8,1
12240: c000 00da                 JR     13000h
12260: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12290: 87a8                      MOVE   *A13,A8,1
122a0: b508 0010                 MOVE   *A8(10h),A8,0
122c0: 0b88 ff00 ffff            ANDI   FFh,A8
122f0: 0b2c 9a20 0000            ADDI   9A20h,A12
12320: 830c                      MOVE   A8,*A12,1
12330: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12360: 87a8                      MOVE   *A13,A8,1
12370: b508 0010                 MOVE   *A8(10h),A8,0
12390: 0b88 00ff ffff            ANDI   FF00h,A8
123c0: 2b08                      SRA    8h,A8
123d0: 0b2c 9a40 0000            ADDI   9A40h,A12
12400: 830c                      MOVE   A8,*A12,1
12410: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12440: 87a8                      MOVE   *A13,A8,1
12450: b508 0020                 MOVE   *A8(20h),A8,0
12470: 0b88 ff00 ffff            ANDI   FFh,A8
124a0: 0b2c 9a60 0000            ADDI   9A60h,A12
124d0: 830c                      MOVE   A8,*A12,1
124e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12510: 87a8                      MOVE   *A13,A8,1
12520: b508 0020                 MOVE   *A8(20h),A8,0
12540: 0b88 00ff ffff            ANDI   FF00h,A8
12570: 2b08                      SRA    8h,A8
12580: 0b2c 9a80 0000            ADDI   9A80h,A12
125b0: 830c                      MOVE   A8,*A12,1
125c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
125f0: 87a8                      MOVE   *A13,A8,1
12600: b508 0030                 MOVE   *A8(30h),A8,0
12620: 0b88 ff00 ffff            ANDI   FFh,A8
12650: 0b2c 9b20 0000            ADDI   9B20h,A12
12680: 830c                      MOVE   A8,*A12,1
12690: 07ac 7b00 0003            MOVE   @37B00h,A12,1
126c0: 87a8                      MOVE   *A13,A8,1
126d0: b508 0030                 MOVE   *A8(30h),A8,0
126f0: 0b88 00ff ffff            ANDI   FF00h,A8
12720: 2b08                      SRA    8h,A8
12730: 0b2c 9b40 0000            ADDI   9B40h,A12
12760: 830c                      MOVE   A8,*A12,1
12770: 07ac 7b00 0003            MOVE   @37B00h,A12,1
127a0: 87a8                      MOVE   *A13,A8,1
127b0: b508 0040                 MOVE   *A8(40h),A8,0
127d0: 0b88 ff00 ffff            ANDI   FFh,A8
12800: 0b2c 9b60 0000            ADDI   9B60h,A12
12830: 830c                      MOVE   A8,*A12,1
12840: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12870: 87a8                      MOVE   *A13,A8,1
12880: b508 0040                 MOVE   *A8(40h),A8,0
128a0: 0b88 00ff ffff            ANDI   FF00h,A8
128d0: 2b08                      SRA    8h,A8
128e0: 0b2c 9b80 0000            ADDI   9B80h,A12
12910: 830c                      MOVE   A8,*A12,1
12920: c077                      JR     130A0h
12930: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12960: 87a8                      MOVE   *A13,A8,1
12970: b508 0010                 MOVE   *A8(10h),A8,0
12990: 0b88 ff00 ffff            ANDI   FFh,A8
129c0: 0b2c 9ba0 0000            ADDI   9BA0h,A12
129f0: 830c                      MOVE   A8,*A12,1
12a00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12a30: 87a8                      MOVE   *A13,A8,1
12a40: b508 0010                 MOVE   *A8(10h),A8,0
12a60: 0b88 00ff ffff            ANDI   FF00h,A8
12a90: 2b08                      SRA    8h,A8
12aa0: 0b2c 9bc0 0000            ADDI   9BC0h,A12
12ad0: 830c                      MOVE   A8,*A12,1
12ae0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12b10: 87a8                      MOVE   *A13,A8,1
12b20: b508 0020                 MOVE   *A8(20h),A8,0
12b40: 0b88 ff00 ffff            ANDI   FFh,A8
12b70: 0b2c 9be0 0000            ADDI   9BE0h,A12
12ba0: 830c                      MOVE   A8,*A12,1
12bb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12be0: 87a8                      MOVE   *A13,A8,1
12bf0: b508 0020                 MOVE   *A8(20h),A8,0
12c10: 0b88 00ff ffff            ANDI   FF00h,A8
12c40: 2b08                      SRA    8h,A8
12c50: 0b2c 9c00 0000            ADDI   9C00h,A12
12c80: 830c                      MOVE   A8,*A12,1
12c90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12cc0: 87a8                      MOVE   *A13,A8,1
12cd0: b508 0030                 MOVE   *A8(30h),A8,0
12cf0: 0b88 ff00 ffff            ANDI   FFh,A8
12d20: 0b2c 9ca0 0000            ADDI   9CA0h,A12
12d50: 830c                      MOVE   A8,*A12,1
12d60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12d90: 87a8                      MOVE   *A13,A8,1
12da0: b508 0030                 MOVE   *A8(30h),A8,0
12dc0: 0b88 00ff ffff            ANDI   FF00h,A8
12df0: 2b08                      SRA    8h,A8
12e00: 0b2c 9cc0 0000            ADDI   9CC0h,A12
12e30: 830c                      MOVE   A8,*A12,1
12e40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12e70: 87a8                      MOVE   *A13,A8,1
12e80: b508 0040                 MOVE   *A8(40h),A8,0
12ea0: 0b88 ff00 ffff            ANDI   FFh,A8
12ed0: 0b2c 9ce0 0000            ADDI   9CE0h,A12
12f00: 830c                      MOVE   A8,*A12,1
12f10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
12f40: 87a8                      MOVE   *A13,A8,1
12f50: b508 0040                 MOVE   *A8(40h),A8,0
12f70: 0b88 00ff ffff            ANDI   FF00h,A8
12fa0: 2b08                      SRA    8h,A8
12fb0: 0b2c 9d00 0000            ADDI   9D00h,A12
12fe0: 830c                      MOVE   A8,*A12,1
12ff0: c00a                      JR     130A0h
13000: 87a8                      MOVE   *A13,A8,1
13010: 0570                      SETF   10h,1,0
13020: 850c                      MOVE   *A8,A12,0
13030: 1868                      MOVK   3h,A8
13040: 510c                      AND    A8,A12
13050: 142c                      DEC    A12
13060: ca00 ff1e                 JREQ   12260h
13080: 142c                      DEC    A12
13090: ca89                      JREQ   12930h
130a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
130d0: 1a88                      MOVK   14h,A8
130e0: 0b2c 8000 0000            ADDI   8000h,A12
13110: 830c                      MOVE   A8,*A12,1
13120: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13150: 0b2c 8000 0000            ADDI   8000h,A12
13180: 878c                      MOVE   *A12,A12,1
13190: 0b8c ff00 ffff            ANDI   FFh,A12
131c0: cbf5                      JRNE   13120h
131d0: 4508                      SUB    A8,A8
131e0: b7ee 0060                 MOVE   *SP(60h),A14,1
13200: 09af 3000                 MMFM   SP,A12,A13
13220: 0962                      RETS   2h

_set_stereo_scanning:
13230: 098f 000c                 MMTM   SP,A12,A13
13250: 4dcd                      MOVE   A14,A13
13260: 100e                      ADDK   20h,A14
13270: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13290: 0550                      SETF   10h,0,0
132a0: 8508                      MOVE   *A8,A8,0
132b0: 186c                      MOVK   3h,A12
132c0: 5188                      AND    A12,A8
132d0: 810d                      MOVE   A8,*A13,0
132e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
13310: 458c                      SUB    A12,A12
13320: 0b28 8040 0000            ADDI   8040h,A8
13350: 8388                      MOVE   A12,*A8,1
13360: c024                      JR     135B0h
13370: 07ac 7b00 0003            MOVE   @37B00h,A12,1
133a0: 4508                      SUB    A8,A8
133b0: 0b2c 99c0 0000            ADDI   99C0h,A12
133e0: 830c                      MOVE   A8,*A12,1
133f0: c023                      JR     13630h
13400: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13430: 1828                      MOVK   1h,A8
13440: 0b2c 99c0 0000            ADDI   99C0h,A12
13470: 830c                      MOVE   A8,*A12,1
13480: c01a                      JR     13630h
13490: 07ac 7b00 0003            MOVE   @37B00h,A12,1
134c0: 4508                      SUB    A8,A8
134d0: 0b2c 99c0 0000            ADDI   99C0h,A12
13500: 830c                      MOVE   A8,*A12,1
13510: c011                      JR     13630h
13520: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13550: 4508                      SUB    A8,A8
13560: 0b2c 99c0 0000            ADDI   99C0h,A12
13590: 830c                      MOVE   A8,*A12,1
135a0: c008                      JR     13630h
135b0: 85a8                      MOVE   *A13,A8,0
135c0: cada                      JREQ   13370h
135d0: 1428                      DEC    A8
135e0: cae1                      JREQ   13400h
135f0: 1428                      DEC    A8
13600: cae8                      JREQ   13490h
13610: 1428                      DEC    A8
13620: caef                      JREQ   13520h
13630: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13660: 1aa8                      MOVK   15h,A8
13670: 0b2c 8000 0000            ADDI   8000h,A12
136a0: 830c                      MOVE   A8,*A12,1
136b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
136e0: 0b2c 8000 0000            ADDI   8000h,A12
13710: 878c                      MOVE   *A12,A12,1
13720: 0b8c ff00 ffff            ANDI   FFh,A12
13750: cbf5                      JRNE   136B0h
13760: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13790: 1968                      MOVK   Bh,A8
137a0: 0b2c 8000 0000            ADDI   8000h,A12
137d0: 830c                      MOVE   A8,*A12,1
137e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13810: 0b2c 8000 0000            ADDI   8000h,A12
13840: 878c                      MOVE   *A12,A12,1
13850: 0b8c ff00 ffff            ANDI   FFh,A12
13880: cbf5                      JRNE   137E0h
13890: 4508                      SUB    A8,A8
138a0: b7ee 0060                 MOVE   *SP(60h),A14,1
138c0: 09af 3000                 MMFM   SP,A12,A13
138e0: 0962                      RETS   2h

_set_scan_mag_offset:
138f0: 098f 000c                 MMTM   SP,A12,A13
13910: 4dcd                      MOVE   A14,A13
13920: 100e                      ADDK   20h,A14
13930: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13950: 0550                      SETF   10h,0,0
13960: 950c                      MOVE   *A8+,A12,0
13970: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
13990: 818d                      MOVE   A12,*A13,0
139a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
139d0: 182c                      MOVK   1h,A12
139e0: 0b28 8040 0000            ADDI   8040h,A8
13a10: 8388                      MOVE   A12,*A8,1
13a20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
13a50: 85ac                      MOVE   *A13,A12,0
13a60: 24ac                      SLL    5h,A12
13a70: 410c                      ADD    A8,A12
13a80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13aa0: 0b2c 8d40 0000            ADDI   8D40h,A12
13ad0: 8508                      MOVE   *A8,A8,0
13ae0: 830c                      MOVE   A8,*A12,1
13af0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13b20: 09c8 0021                 MOVI   21h,A8
13b40: 0b2c 8000 0000            ADDI   8000h,A12
13b70: 830c                      MOVE   A8,*A12,1
13b80: a3cf                      MOVE   A14,-*SP,1
13b90: 182c                      MOVK   1h,A12
13ba0: 938e                      MOVE   A12,*A14+,1
13bb0: 0d5f 3400 0000            CALLA  3400h
13be0: b7ee 0060                 MOVE   *SP(60h),A14,1
13c00: 09af 3000                 MMFM   SP,A12,A13
13c20: 0962                      RETS   2h

_set_slow_line_amp:
13c30: 098f 000c                 MMTM   SP,A12,A13
13c50: 4dcd                      MOVE   A14,A13
13c60: 100e                      ADDK   20h,A14
13c70: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13c90: 0550                      SETF   10h,0,0
13ca0: 890d                      MOVE   *A8,*A13,0
13cb0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
13ce0: 182c                      MOVK   1h,A12
13cf0: 0b28 8040 0000            ADDI   8040h,A8
13d20: 8388                      MOVE   A12,*A8,1
13d30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
13d60: 85ac                      MOVE   *A13,A12,0
13d70: 0b8c ff00 ffff            ANDI   FFh,A12
13da0: 0b28 9900 0000            ADDI   9900h,A8
13dd0: 8388                      MOVE   A12,*A8,1
13de0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13e10: 85a8                      MOVE   *A13,A8,0
13e20: 0b88 00ff ffff            ANDI   FF00h,A8
13e50: 2b08                      SRA    8h,A8
13e60: 0b2c 9920 0000            ADDI   9920h,A12
13e90: 830c                      MOVE   A8,*A12,1
13ea0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
13ed0: 18c8                      MOVK   6h,A8
13ee0: 0b2c 8000 0000            ADDI   8000h,A12
13f10: 830c                      MOVE   A8,*A12,1
13f20: a3cf                      MOVE   A14,-*SP,1
13f30: 182c                      MOVK   1h,A12
13f40: 938e                      MOVE   A12,*A14+,1
13f50: 0d5f 3400 0000            CALLA  3400h
13f80: b7ee 0060                 MOVE   *SP(60h),A14,1
13fa0: 09af 3000                 MMFM   SP,A12,A13
13fc0: 0962                      RETS   2h

_set_fast_line_amp:
13fd0: 098f 000c                 MMTM   SP,A12,A13
13ff0: 4dcd                      MOVE   A14,A13
14000: 100e                      ADDK   20h,A14
14010: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14030: 0550                      SETF   10h,0,0
14040: 890d                      MOVE   *A8,*A13,0
14050: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14080: 182c                      MOVK   1h,A12
14090: 0b28 8040 0000            ADDI   8040h,A8
140c0: 8388                      MOVE   A12,*A8,1
140d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14100: 85ac                      MOVE   *A13,A12,0
14110: 0b8c ff00 ffff            ANDI   FFh,A12
14140: 0b28 98c0 0000            ADDI   98C0h,A8
14170: 8388                      MOVE   A12,*A8,1
14180: 07ac 7b00 0003            MOVE   @37B00h,A12,1
141b0: 85a8                      MOVE   *A13,A8,0
141c0: 0b88 00ff ffff            ANDI   FF00h,A8
141f0: 2b08                      SRA    8h,A8
14200: 0b2c 98e0 0000            ADDI   98E0h,A12
14230: 830c                      MOVE   A8,*A12,1
14240: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14270: 18c8                      MOVK   6h,A8
14280: 0b2c 8000 0000            ADDI   8000h,A12
142b0: 830c                      MOVE   A8,*A12,1
142c0: a3cf                      MOVE   A14,-*SP,1
142d0: 182c                      MOVK   1h,A12
142e0: 938e                      MOVE   A12,*A14+,1
142f0: 0d5f 3400 0000            CALLA  3400h
14320: b7ee 0060                 MOVE   *SP(60h),A14,1
14340: 09af 3000                 MMFM   SP,A12,A13
14360: 0962                      RETS   2h

_set_dual_mag_rate:
14370: 098f 000c                 MMTM   SP,A12,A13
14390: 4dcd                      MOVE   A14,A13
143a0: 100e                      ADDK   20h,A14
143b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
143d0: 0550                      SETF   10h,0,0
143e0: 890d                      MOVE   *A8,*A13,0
143f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14420: 458c                      SUB    A12,A12
14430: 0b28 8040 0000            ADDI   8040h,A8
14460: 8388                      MOVE   A12,*A8,1
14470: 85a8                      MOVE   *A13,A8,0
14480: 19ec                      MOVK   Fh,A12
14490: 510c                      AND    A8,A12
144a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
144d0: 0b28 8fe0 0000            ADDI   8FE0h,A8
14500: 8388                      MOVE   A12,*A8,1
14510: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14540: 09c8 0021                 MOVI   21h,A8
14560: 0b2c 8000 0000            ADDI   8000h,A12
14590: 830c                      MOVE   A8,*A12,1
145a0: a3cf                      MOVE   A14,-*SP,1
145b0: 182c                      MOVK   1h,A12
145c0: 938e                      MOVE   A12,*A14+,1
145d0: 0d5f 3400 0000            CALLA  3400h
14600: b7ee 0060                 MOVE   *SP(60h),A14,1
14620: 09af 3000                 MMFM   SP,A12,A13
14640: 0962                      RETS   2h

_set_dual_mag_slope:
14650: 098f 000c                 MMTM   SP,A12,A13
14670: 4dcd                      MOVE   A14,A13
14680: 100e                      ADDK   20h,A14
14690: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
146b0: 0550                      SETF   10h,0,0
146c0: 890d                      MOVE   *A8,*A13,0
146d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14700: 182c                      MOVK   1h,A12
14710: 0b28 8040 0000            ADDI   8040h,A8
14740: 8388                      MOVE   A12,*A8,1
14750: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14780: 85ac                      MOVE   *A13,A12,0
14790: 0b8c ff00 ffff            ANDI   FFh,A12
147c0: 0b28 a700 0000            ADDI   A700h,A8
147f0: 8388                      MOVE   A12,*A8,1
14800: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14830: 85a8                      MOVE   *A13,A8,0
14840: 0b88 00ff ffff            ANDI   FF00h,A8
14870: 2b08                      SRA    8h,A8
14880: 0b2c a720 0000            ADDI   A720h,A12
148b0: 830c                      MOVE   A8,*A12,1
148c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
148f0: 09c8 0021                 MOVI   21h,A8
14910: 0b2c 8000 0000            ADDI   8000h,A12
14940: 830c                      MOVE   A8,*A12,1
14950: a3cf                      MOVE   A14,-*SP,1
14960: 182c                      MOVK   1h,A12
14970: 938e                      MOVE   A12,*A14+,1
14980: 0d5f 3400 0000            CALLA  3400h
149b0: b7ee 0060                 MOVE   *SP(60h),A14,1
149d0: 09af 3000                 MMFM   SP,A12,A13
149f0: 0962                      RETS   2h

_scan_enable:
14a00: 098f 000c                 MMTM   SP,A12,A13
14a20: 4dcd                      MOVE   A14,A13
14a30: 100e                      ADDK   20h,A14
14a40: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14a60: 0550                      SETF   10h,0,0
14a70: 8508                      MOVE   *A8,A8,0
14a80: 19ec                      MOVK   Fh,A12
14a90: 5188                      AND    A12,A8
14aa0: 810d                      MOVE   A8,*A13,0
14ab0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14ae0: 458c                      SUB    A12,A12
14af0: 0b28 8040 0000            ADDI   8040h,A8
14b20: 8388                      MOVE   A12,*A8,1
14b30: c075                      JR     15290h
14b40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14b70: 1968                      MOVK   Bh,A8
14b80: 0b2c 8000 0000            ADDI   8000h,A12
14bb0: 830c                      MOVE   A8,*A12,1
14bc0: c076                      JR     15330h
14bd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14c00: 1808                      MOVK   20h,A8
14c10: 0b2c 8000 0000            ADDI   8000h,A12
14c40: 830c                      MOVE   A8,*A12,1
14c50: c06d                      JR     15330h
14c60: 0550                      SETF   10h,0,0
14c70: 05ac 7910 0003            MOVE   @37910h,A12,0
14ca0: 102c                      INC    A12
14cb0: 058c 7910 0003            MOVE   A12,@37910h,0
14ce0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14d10: 09cc ffff                 MOVI   FFFFh,A12
14d30: 0b28 9985 0000            ADDI   9985h,A8
14d60: 0561                      SETF   1h,1,0
14d70: 8188                      MOVE   A12,*A8,0
14d80: 0550                      SETF   10h,0,0
14d90: 05a8 7900 0003            MOVE   @37900h,A8,0
14dc0: 1028                      INC    A8
14dd0: 0588 7900 0003            MOVE   A8,@37900h,0
14e00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14e30: 09c8 ffff                 MOVI   FFFFh,A8
14e50: 0b2c 9984 0000            ADDI   9984h,A12
14e80: 0561                      SETF   1h,1,0
14e90: 810c                      MOVE   A8,*A12,0
14ea0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
14ed0: 1a68                      MOVK   13h,A8
14ee0: 0b2c 8000 0000            ADDI   8000h,A12
14f10: 830c                      MOVE   A8,*A12,1
14f20: c040                      JR     15330h
14f30: 0550                      SETF   10h,0,0
14f40: 05ac 7910 0003            MOVE   @37910h,A12,0
14f70: 142c                      DEC    A12
14f80: 058c 7910 0003            MOVE   A12,@37910h,0
14fb0: cb09                      JRNE   15050h
14fc0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
14ff0: 458c                      SUB    A12,A12
15000: 0b28 9985 0000            ADDI   9985h,A8
15030: 0561                      SETF   1h,1,0
15040: 8188                      MOVE   A12,*A8,0
15050: 0550                      SETF   10h,0,0
15060: 05ac 7900 0003            MOVE   @37900h,A12,0
15090: 142c                      DEC    A12
150a0: 058c 7900 0003            MOVE   A12,@37900h,0
150d0: cb09                      JRNE   15170h
150e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15110: 458c                      SUB    A12,A12
15120: 0b28 9984 0000            ADDI   9984h,A8
15150: 0561                      SETF   1h,1,0
15160: 8188                      MOVE   A12,*A8,0
15170: 07ac 7b00 0003            MOVE   @37B00h,A12,1
151a0: 1a68                      MOVK   13h,A8
151b0: 0b2c 8000 0000            ADDI   8000h,A12
151e0: 830c                      MOVE   A8,*A12,1
151f0: c013                      JR     15330h
15200: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15230: 1948                      MOVK   Ah,A8
15240: 0b2c 8000 0000            ADDI   8000h,A12
15270: 830c                      MOVE   A8,*A12,1
15280: c00a                      JR     15330h
15290: 0570                      SETF   10h,1,0
152a0: 85a8                      MOVE   *A13,A8,0
152b0: 1428                      DEC    A8
152c0: ca87                      JREQ   14B40h
152d0: 1428                      DEC    A8
152e0: ca8e                      JREQ   14BD0h
152f0: 1428                      DEC    A8
15300: ca95                      JREQ   14C60h
15310: 3e48                      DSJS   A8,15200h
15320: c0c0                      JR     14F30h
15330: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15360: 0b2c 8000 0000            ADDI   8000h,A12
15390: 878c                      MOVE   *A12,A12,1
153a0: 0b8c ff00 ffff            ANDI   FFh,A12
153d0: cbf5                      JRNE   15330h
153e0: 4508                      SUB    A8,A8
153f0: b7ee 0060                 MOVE   *SP(60h),A14,1
15410: 09af 3000                 MMFM   SP,A12,A13
15430: 0962                      RETS   2h

_set_microshift:
15440: 098f 000c                 MMTM   SP,A12,A13
15460: 4dcd                      MOVE   A14,A13
15470: 100e                      ADDK   20h,A14
15480: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
154a0: 0550                      SETF   10h,0,0
154b0: 950c                      MOVE   *A8+,A12,0
154c0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
154e0: 818d                      MOVE   A12,*A13,0
154f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15520: 458c                      SUB    A12,A12
15530: 0b28 8040 0000            ADDI   8040h,A8
15560: 8388                      MOVE   A12,*A8,1
15570: 07a8 7b00 0003            MOVE   @37B00h,A8,1
155a0: 85ac                      MOVE   *A13,A12,0
155b0: 0b8c ff00 ffff            ANDI   FFh,A12
155e0: 0b28 9b20 0000            ADDI   9B20h,A8
15610: 8388                      MOVE   A12,*A8,1
15620: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15650: 85a8                      MOVE   *A13,A8,0
15660: 0b88 00ff ffff            ANDI   FF00h,A8
15690: 2b08                      SRA    8h,A8
156a0: 0b2c 9b40 0000            ADDI   9B40h,A12
156d0: 830c                      MOVE   A8,*A12,1
156e0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
15700: 898d                      MOVE   *A12,*A13,0
15710: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15740: 85ac                      MOVE   *A13,A12,0
15750: 0b8c ff00 ffff            ANDI   FFh,A12
15780: 0b28 9b60 0000            ADDI   9B60h,A8
157b0: 8388                      MOVE   A12,*A8,1
157c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
157f0: 85a8                      MOVE   *A13,A8,0
15800: 0b88 00ff ffff            ANDI   FF00h,A8
15830: 2b08                      SRA    8h,A8
15840: 0b2c 9b80 0000            ADDI   9B80h,A12
15870: 830c                      MOVE   A8,*A12,1
15880: 07ac 7b00 0003            MOVE   @37B00h,A12,1
158b0: 1a88                      MOVK   14h,A8
158c0: 0b2c 8000 0000            ADDI   8000h,A12
158f0: 830c                      MOVE   A8,*A12,1
15900: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15930: 0b2c 8000 0000            ADDI   8000h,A12
15960: 878c                      MOVE   *A12,A12,1
15970: 0b8c ff00 ffff            ANDI   FFh,A12
159a0: cbf5                      JRNE   15900h
159b0: 4508                      SUB    A8,A8
159c0: b7ee 0060                 MOVE   *SP(60h),A14,1
159e0: 09af 3000                 MMFM   SP,A12,A13
15a00: 0962                      RETS   2h

_set_scan_transform:
15a10: 098f 000c                 MMTM   SP,A12,A13
15a30: 4dcd                      MOVE   A14,A13
15a40: 100e                      ADDK   20h,A14
15a50: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15a70: 0550                      SETF   10h,0,0
15a80: 950c                      MOVE   *A8+,A12,0
15a90: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
15ab0: 818d                      MOVE   A12,*A13,0
15ac0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15af0: 458c                      SUB    A12,A12
15b00: 0b28 8040 0000            ADDI   8040h,A8
15b30: 8388                      MOVE   A12,*A8,1
15b40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15b70: 85ac                      MOVE   *A13,A12,0
15b80: 0b8c ff00 ffff            ANDI   FFh,A12
15bb0: 0b28 a540 0000            ADDI   A540h,A8
15be0: 8388                      MOVE   A12,*A8,1
15bf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15c20: 85a8                      MOVE   *A13,A8,0
15c30: 0b88 00ff ffff            ANDI   FF00h,A8
15c60: 2b08                      SRA    8h,A8
15c70: 0b2c a560 0000            ADDI   A560h,A12
15ca0: 830c                      MOVE   A8,*A12,1
15cb0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
15cd0: 9588                      MOVE   *A12+,A8,0
15ce0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
15d00: 810d                      MOVE   A8,*A13,0
15d10: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15d40: 85ac                      MOVE   *A13,A12,0
15d50: 0b8c ff00 ffff            ANDI   FFh,A12
15d80: 0b28 a580 0000            ADDI   A580h,A8
15db0: 8388                      MOVE   A12,*A8,1
15dc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15df0: 85a8                      MOVE   *A13,A8,0
15e00: 0b88 00ff ffff            ANDI   FF00h,A8
15e30: 2b08                      SRA    8h,A8
15e40: 0b2c a5a0 0000            ADDI   A5A0h,A12
15e70: 830c                      MOVE   A8,*A12,1
15e80: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
15ea0: 9588                      MOVE   *A12+,A8,0
15eb0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
15ed0: 810d                      MOVE   A8,*A13,0
15ee0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
15f10: 85ac                      MOVE   *A13,A12,0
15f20: 0b8c ff00 ffff            ANDI   FFh,A12
15f50: 0b28 a5c0 0000            ADDI   A5C0h,A8
15f80: 8388                      MOVE   A12,*A8,1
15f90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
15fc0: 85a8                      MOVE   *A13,A8,0
15fd0: 0b88 00ff ffff            ANDI   FF00h,A8
16000: 2b08                      SRA    8h,A8
16010: 0b2c a5e0 0000            ADDI   A5E0h,A12
16040: 830c                      MOVE   A8,*A12,1
16050: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
16070: 898d                      MOVE   *A12,*A13,0
16080: 07a8 7b00 0003            MOVE   @37B00h,A8,1
160b0: 85ac                      MOVE   *A13,A12,0
160c0: 0b8c ff00 ffff            ANDI   FFh,A12
160f0: 0b28 a600 0000            ADDI   A600h,A8
16120: 8388                      MOVE   A12,*A8,1
16130: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16160: 85a8                      MOVE   *A13,A8,0
16170: 0b88 00ff ffff            ANDI   FF00h,A8
161a0: 2b08                      SRA    8h,A8
161b0: 0b2c a620 0000            ADDI   A620h,A12
161e0: 830c                      MOVE   A8,*A12,1
161f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16220: 1b48                      MOVK   1Ah,A8
16230: 0b2c 8000 0000            ADDI   8000h,A12
16260: 830c                      MOVE   A8,*A12,1
16270: 07ac 7b00 0003            MOVE   @37B00h,A12,1
162a0: 0b2c 8000 0000            ADDI   8000h,A12
162d0: 878c                      MOVE   *A12,A12,1
162e0: 0b8c ff00 ffff            ANDI   FFh,A12
16310: cbf5                      JRNE   16270h
16320: 4508                      SUB    A8,A8
16330: b7ee 0060                 MOVE   *SP(60h),A14,1
16350: 09af 3000                 MMFM   SP,A12,A13
16370: 0962                      RETS   2h

_set_eo_register:
16380: 098f 000c                 MMTM   SP,A12,A13
163a0: 4dcd                      MOVE   A14,A13
163b0: 100e                      ADDK   20h,A14
163c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
163e0: 0550                      SETF   10h,0,0
163f0: 950c                      MOVE   *A8+,A12,0
16400: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
16420: 818d                      MOVE   A12,*A13,0
16430: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16460: 458c                      SUB    A12,A12
16470: 0b28 8040 0000            ADDI   8040h,A8
164a0: 8388                      MOVE   A12,*A8,1
164b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
164e0: 182c                      MOVK   1h,A12
164f0: 0b28 8060 0000            ADDI   8060h,A8
16520: 8388                      MOVE   A12,*A8,1
16530: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16560: 0b28 8080 0000            ADDI   8080h,A8
16590: 8388                      MOVE   A12,*A8,1
165a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
165d0: 85ac                      MOVE   *A13,A12,0
165e0: 0b8c ff00 ffff            ANDI   FFh,A12
16610: 0b28 80a0 0000            ADDI   80A0h,A8
16640: 8388                      MOVE   A12,*A8,1
16650: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16680: 85a8                      MOVE   *A13,A8,0
16690: 0b88 00ff ffff            ANDI   FF00h,A8
166c0: 2b08                      SRA    8h,A8
166d0: 0b2c 80c0 0000            ADDI   80C0h,A12
16700: 830c                      MOVE   A8,*A12,1
16710: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
16730: 898d                      MOVE   *A12,*A13,0
16740: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16770: 85ac                      MOVE   *A13,A12,0
16780: 0b8c ff00 ffff            ANDI   FFh,A12
167b0: 8388                      MOVE   A12,*A8,1
167c0: 85ac                      MOVE   *A13,A12,0
167d0: 0b8c 00ff ffff            ANDI   FF00h,A12
16800: 2b0c                      SRA    8h,A12
16810: b388 0020                 MOVE   A12,*A8(20h),1
16830: 182c                      MOVK   1h,A12
16840: 0b28 80e0 0000            ADDI   80E0h,A8
16870: 8388                      MOVE   A12,*A8,1
16880: 07a8 7b00 0003            MOVE   @37B00h,A8,1
168b0: 458c                      SUB    A12,A12
168c0: 0b28 8100 0000            ADDI   8100h,A8
168f0: 8388                      MOVE   A12,*A8,1
16900: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16930: 09cc 0040                 MOVI   40h,A12
16950: 0b28 8120 0000            ADDI   8120h,A8
16980: 8388                      MOVE   A12,*A8,1
16990: 07a8 7b00 0003            MOVE   @37B00h,A8,1
169c0: 188c                      MOVK   4h,A12
169d0: 0b28 8000 0000            ADDI   8000h,A8
16a00: 8388                      MOVE   A12,*A8,1
16a10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16a40: 0b2c 8000 0000            ADDI   8000h,A12
16a70: 878c                      MOVE   *A12,A12,1
16a80: 0b8c ff00 ffff            ANDI   FFh,A12
16ab0: cbf5                      JRNE   16A10h
16ac0: 4508                      SUB    A8,A8
16ad0: b7ee 0060                 MOVE   *SP(60h),A14,1
16af0: 09af 3000                 MMFM   SP,A12,A13
16b10: 0962                      RETS   2h

_read_eo_register:
16b20: 098f 002c                 MMTM   SP,A10,A12,A13
16b40: 4dcd                      MOVE   A14,A13
16b50: 100e                      ADDK   20h,A14
16b60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16b80: 0550                      SETF   10h,0,0
16b90: 890d                      MOVE   *A8,*A13,0
16ba0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16bd0: 182c                      MOVK   1h,A12
16be0: 0b28 8040 0000            ADDI   8040h,A8
16c10: 8388                      MOVE   A12,*A8,1
16c20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16c50: 0b28 8060 0000            ADDI   8060h,A8
16c80: 8388                      MOVE   A12,*A8,1
16c90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16cc0: 0b28 8080 0000            ADDI   8080h,A8
16cf0: 8388                      MOVE   A12,*A8,1
16d00: 07a8 7b00 0003            MOVE   @37B00h,A8,1
16d30: 85ac                      MOVE   *A13,A12,0
16d40: 0b8c ff00 ffff            ANDI   FFh,A12
16d70: 0b28 80a0 0000            ADDI   80A0h,A8
16da0: 8388                      MOVE   A12,*A8,1
16db0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16de0: 85a8                      MOVE   *A13,A8,0
16df0: 0b88 00ff ffff            ANDI   FF00h,A8
16e20: 2b08                      SRA    8h,A8
16e30: 0b2c 80c0 0000            ADDI   80C0h,A12
16e60: 830c                      MOVE   A8,*A12,1
16e70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16ea0: 1828                      MOVK   1h,A8
16eb0: 0b2c 80e0 0000            ADDI   80E0h,A12
16ee0: 830c                      MOVE   A8,*A12,1
16ef0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16f20: 4508                      SUB    A8,A8
16f30: 0b2c 8100 0000            ADDI   8100h,A12
16f60: 830c                      MOVE   A8,*A12,1
16f70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
16fa0: 09c8 0040                 MOVI   40h,A8
16fc0: 0b2c 8120 0000            ADDI   8120h,A12
16ff0: 830c                      MOVE   A8,*A12,1
17000: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17030: 18a8                      MOVK   5h,A8
17040: 0b2c 8000 0000            ADDI   8000h,A12
17070: 830c                      MOVE   A8,*A12,1
17080: 07ac 7b00 0003            MOVE   @37B00h,A12,1
170b0: 0b2c 8000 0000            ADDI   8000h,A12
170e0: 878c                      MOVE   *A12,A12,1
170f0: 0b8c ff00 ffff            ANDI   FFh,A12
17120: cbf5                      JRNE   17080h
17130: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
17150: 07a8 7b00 0003            MOVE   @37B00h,A8,1
17180: b708 0020                 MOVE   *A8(20h),A8,1
171a0: 0b88 ff00 ffff            ANDI   FFh,A8
171d0: 2508                      SLL    8h,A8
171e0: 0550                      SETF   10h,0,0
171f0: 810c                      MOVE   A8,*A12,0
17200: 07a8 7b00 0003            MOVE   @37B00h,A8,1
17230: 8708                      MOVE   *A8,A8,1
17240: 0b88 ff00 ffff            ANDI   FFh,A8
17270: 858a                      MOVE   *A12,A10,0
17280: 550a                      OR     A8,A10
17290: 814c                      MOVE   A10,*A12,0
172a0: 4508                      SUB    A8,A8
172b0: b7ee 0080                 MOVE   *SP(80h),A14,1
172d0: 09af 3400                 MMFM   SP,A10,A12,A13
172f0: 0962                      RETS   2h

_set_gun_align:
17300: 098f 000c                 MMTM   SP,A12,A13
17320: 4dcd                      MOVE   A14,A13
17330: 100e                      ADDK   20h,A14
17340: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17360: 0550                      SETF   10h,0,0
17370: 950c                      MOVE   *A8+,A12,0
17380: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
173a0: 818d                      MOVE   A12,*A13,0
173b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
173e0: 458c                      SUB    A12,A12
173f0: 0b28 8040 0000            ADDI   8040h,A8
17420: 8388                      MOVE   A12,*A8,1
17430: 85a8                      MOVE   *A13,A8,0
17440: ca38                      JREQ   177D0h
17450: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
17470: 9588                      MOVE   *A12+,A8,0
17480: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
174a0: 810d                      MOVE   A8,*A13,0
174b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
174e0: 85ac                      MOVE   *A13,A12,0
174f0: 0b8c ff00 ffff            ANDI   FFh,A12
17520: 0b28 9a20 0000            ADDI   9A20h,A8
17550: 8388                      MOVE   A12,*A8,1
17560: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17590: 85a8                      MOVE   *A13,A8,0
175a0: 0b88 00ff ffff            ANDI   FF00h,A8
175d0: 2b08                      SRA    8h,A8
175e0: 0b2c 9a40 0000            ADDI   9A40h,A12
17610: 830c                      MOVE   A8,*A12,1
17620: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
17640: 898d                      MOVE   *A12,*A13,0
17650: 07a8 7b00 0003            MOVE   @37B00h,A8,1
17680: 85ac                      MOVE   *A13,A12,0
17690: 0b8c ff00 ffff            ANDI   FFh,A12
176c0: 0b28 9a60 0000            ADDI   9A60h,A8
176f0: 8388                      MOVE   A12,*A8,1
17700: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17730: 85a8                      MOVE   *A13,A8,0
17740: 0b88 00ff ffff            ANDI   FF00h,A8
17770: 2b08                      SRA    8h,A8
17780: 0b2c 9a80 0000            ADDI   9A80h,A12
177b0: 830c                      MOVE   A8,*A12,1
177c0: c037                      JR     17B40h
177d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
177f0: 9588                      MOVE   *A12+,A8,0
17800: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
17820: 810d                      MOVE   A8,*A13,0
17830: 07a8 7b00 0003            MOVE   @37B00h,A8,1
17860: 85ac                      MOVE   *A13,A12,0
17870: 0b8c ff00 ffff            ANDI   FFh,A12
178a0: 0b28 9aa0 0000            ADDI   9AA0h,A8
178d0: 8388                      MOVE   A12,*A8,1
178e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17910: 85a8                      MOVE   *A13,A8,0
17920: 0b88 00ff ffff            ANDI   FF00h,A8
17950: 2b08                      SRA    8h,A8
17960: 0b2c 9ac0 0000            ADDI   9AC0h,A12
17990: 830c                      MOVE   A8,*A12,1
179a0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
179c0: 898d                      MOVE   *A12,*A13,0
179d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
17a00: 85ac                      MOVE   *A13,A12,0
17a10: 0b8c ff00 ffff            ANDI   FFh,A12
17a40: 0b28 9ae0 0000            ADDI   9AE0h,A8
17a70: 8388                      MOVE   A12,*A8,1
17a80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17ab0: 85a8                      MOVE   *A13,A8,0
17ac0: 0b88 00ff ffff            ANDI   FF00h,A8
17af0: 2b08                      SRA    8h,A8
17b00: 0b2c 9b00 0000            ADDI   9B00h,A12
17b30: 830c                      MOVE   A8,*A12,1
17b40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17b70: 4d88                      MOVE   A12,A8
17b80: 0b28 9a20 0000            ADDI   9A20h,A8
17bb0: 0b2c 9ba0 0000            ADDI   9BA0h,A12
17be0: 8b0c                      MOVE   *A8,*A12,1
17bf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17c20: 4d88                      MOVE   A12,A8
17c30: 0b28 9a40 0000            ADDI   9A40h,A8
17c60: 0b2c 9bc0 0000            ADDI   9BC0h,A12
17c90: 8b0c                      MOVE   *A8,*A12,1
17ca0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17cd0: 4d88                      MOVE   A12,A8
17ce0: 0b28 9a60 0000            ADDI   9A60h,A8
17d10: 0b2c 9be0 0000            ADDI   9BE0h,A12
17d40: 8b0c                      MOVE   *A8,*A12,1
17d50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17d80: 4d88                      MOVE   A12,A8
17d90: 0b28 9a80 0000            ADDI   9A80h,A8
17dc0: 0b2c 9c00 0000            ADDI   9C00h,A12
17df0: 8b0c                      MOVE   *A8,*A12,1
17e00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17e30: 4d88                      MOVE   A12,A8
17e40: 0b28 9aa0 0000            ADDI   9AA0h,A8
17e70: 0b2c 9c20 0000            ADDI   9C20h,A12
17ea0: 8b0c                      MOVE   *A8,*A12,1
17eb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17ee0: 4d88                      MOVE   A12,A8
17ef0: 0b28 9ac0 0000            ADDI   9AC0h,A8
17f20: 0b2c 9c40 0000            ADDI   9C40h,A12
17f50: 8b0c                      MOVE   *A8,*A12,1
17f60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
17f90: 4d88                      MOVE   A12,A8
17fa0: 0b28 9ae0 0000            ADDI   9AE0h,A8
17fd0: 0b2c 9c60 0000            ADDI   9C60h,A12
18000: 8b0c                      MOVE   *A8,*A12,1
18010: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18040: 4d88                      MOVE   A12,A8
18050: 0b28 9b00 0000            ADDI   9B00h,A8
18080: 0b2c 9c80 0000            ADDI   9C80h,A12
180b0: 8b0c                      MOVE   *A8,*A12,1
180c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
180f0: 1a88                      MOVK   14h,A8
18100: 0b2c 8000 0000            ADDI   8000h,A12
18130: 830c                      MOVE   A8,*A12,1
18140: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18170: 0b2c 8000 0000            ADDI   8000h,A12
181a0: 878c                      MOVE   *A12,A12,1
181b0: 0b8c ff00 ffff            ANDI   FFh,A12
181e0: cbf5                      JRNE   18140h
181f0: 4508                      SUB    A8,A8
18200: b7ee 0060                 MOVE   *SP(60h),A14,1
18220: 09af 3000                 MMFM   SP,A12,A13
18240: 0962                      RETS   2h

_set_mag_range:
18250: 098f 000c                 MMTM   SP,A12,A13
18270: 4dcd                      MOVE   A14,A13
18280: 100e                      ADDK   20h,A14
18290: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
182b0: 0550                      SETF   10h,0,0
182c0: 890d                      MOVE   *A8,*A13,0
182d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
18300: 458c                      SUB    A12,A12
18310: 0b28 8040 0000            ADDI   8040h,A8
18340: 8388                      MOVE   A12,*A8,1
18350: 07a8 7b00 0003            MOVE   @37B00h,A8,1
18380: 85ac                      MOVE   *A13,A12,0
18390: 0b8c ff00 ffff            ANDI   FFh,A12
183c0: 0b28 9940 0000            ADDI   9940h,A8
183f0: 8388                      MOVE   A12,*A8,1
18400: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18430: 1a08                      MOVK   10h,A8
18440: 0b2c 8000 0000            ADDI   8000h,A12
18470: 830c                      MOVE   A8,*A12,1
18480: 07ac 7b00 0003            MOVE   @37B00h,A12,1
184b0: 0b2c 8000 0000            ADDI   8000h,A12
184e0: 878c                      MOVE   *A12,A12,1
184f0: 0b8c ff00 ffff            ANDI   FFh,A12
18520: cbf5                      JRNE   18480h
18530: 4508                      SUB    A8,A8
18540: b7ee 0060                 MOVE   *SP(60h),A14,1
18560: 09af 3000                 MMFM   SP,A12,A13
18580: 0962                      RETS   2h

_set_store_origin:
18590: 098f 000c                 MMTM   SP,A12,A13
185b0: 4dcd                      MOVE   A14,A13
185c0: 0b0e 0040                 ADDI   40h,A14
185e0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18600: 0550                      SETF   10h,0,0
18610: 950c                      MOVE   *A8+,A12,0
18620: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
18640: 1868                      MOVK   3h,A8
18650: 510c                      AND    A8,A12
18660: 818d                      MOVE   A12,*A13,0
18670: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
18690: 9588                      MOVE   *A12+,A8,0
186a0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
186c0: b10d 0010                 MOVE   A8,*A13(10h),0
186e0: b98d 0000 0020            MOVE   *A12(0h),*A13(20h),0
18710: 07a8 7b00 0003            MOVE   @37B00h,A8,1
18740: 458c                      SUB    A12,A12
18750: 0b28 8040 0000            ADDI   8040h,A8
18780: 8388                      MOVE   A12,*A8,1
18790: c000 00cd                 JR     19480h
187b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
187e0: b5a8 0010                 MOVE   *A13(10h),A8,0
18800: 0b88 ff00 ffff            ANDI   FFh,A8
18830: 0b2c a1a0 0000            ADDI   A1A0h,A12
18860: 830c                      MOVE   A8,*A12,1
18870: 07ac 7b00 0003            MOVE   @37B00h,A12,1
188a0: b5a8 0010                 MOVE   *A13(10h),A8,0
188c0: 0b88 00ff ffff            ANDI   FF00h,A8
188f0: 2b08                      SRA    8h,A8
18900: 0b2c a1c0 0000            ADDI   A1C0h,A12
18930: 830c                      MOVE   A8,*A12,1
18940: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18970: b5a8 0020                 MOVE   *A13(20h),A8,0
18990: 0b88 ff00 ffff            ANDI   FFh,A8
189c0: 0b2c a0a0 0000            ADDI   A0A0h,A12
189f0: 830c                      MOVE   A8,*A12,1
18a00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18a30: b5a8 0020                 MOVE   *A13(20h),A8,0
18a50: 0b88 00ff ffff            ANDI   FF00h,A8
18a80: 2b08                      SRA    8h,A8
18a90: 0b2c a0c0 0000            ADDI   A0C0h,A12
18ac0: 830c                      MOVE   A8,*A12,1
18ad0: c000 00a3                 JR     19520h
18af0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18b20: b5a8 0010                 MOVE   *A13(10h),A8,0
18b40: 0b88 ff00 ffff            ANDI   FFh,A8
18b70: 0b2c a1e0 0000            ADDI   A1E0h,A12
18ba0: 830c                      MOVE   A8,*A12,1
18bb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18be0: b5a8 0010                 MOVE   *A13(10h),A8,0
18c00: 0b88 00ff ffff            ANDI   FF00h,A8
18c30: 2b08                      SRA    8h,A8
18c40: 0b2c a200 0000            ADDI   A200h,A12
18c70: 830c                      MOVE   A8,*A12,1
18c80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18cb0: b5a8 0020                 MOVE   *A13(20h),A8,0
18cd0: 0b88 ff00 ffff            ANDI   FFh,A8
18d00: 0b2c a0e0 0000            ADDI   A0E0h,A12
18d30: 830c                      MOVE   A8,*A12,1
18d40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18d70: b5a8 0020                 MOVE   *A13(20h),A8,0
18d90: 0b88 00ff ffff            ANDI   FF00h,A8
18dc0: 2b08                      SRA    8h,A8
18dd0: 0b2c a100 0000            ADDI   A100h,A12
18e00: 830c                      MOVE   A8,*A12,1
18e10: c070                      JR     19520h
18e20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18e50: b5a8 0010                 MOVE   *A13(10h),A8,0
18e70: 0b88 ff00 ffff            ANDI   FFh,A8
18ea0: 0b2c a220 0000            ADDI   A220h,A12
18ed0: 830c                      MOVE   A8,*A12,1
18ee0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18f10: b5a8 0010                 MOVE   *A13(10h),A8,0
18f30: 0b88 00ff ffff            ANDI   FF00h,A8
18f60: 2b08                      SRA    8h,A8
18f70: 0b2c a240 0000            ADDI   A240h,A12
18fa0: 830c                      MOVE   A8,*A12,1
18fb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
18fe0: b5a8 0020                 MOVE   *A13(20h),A8,0
19000: 0b88 ff00 ffff            ANDI   FFh,A8
19030: 0b2c a120 0000            ADDI   A120h,A12
19060: 830c                      MOVE   A8,*A12,1
19070: 07ac 7b00 0003            MOVE   @37B00h,A12,1
190a0: b5a8 0020                 MOVE   *A13(20h),A8,0
190c0: 0b88 00ff ffff            ANDI   FF00h,A8
190f0: 2b08                      SRA    8h,A8
19100: 0b2c a140 0000            ADDI   A140h,A12
19130: 830c                      MOVE   A8,*A12,1
19140: c03d                      JR     19520h
19150: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19180: b5a8 0010                 MOVE   *A13(10h),A8,0
191a0: 0b88 ff00 ffff            ANDI   FFh,A8
191d0: 0b2c a260 0000            ADDI   A260h,A12
19200: 830c                      MOVE   A8,*A12,1
19210: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19240: b5a8 0010                 MOVE   *A13(10h),A8,0
19260: 0b88 00ff ffff            ANDI   FF00h,A8
19290: 2b08                      SRA    8h,A8
192a0: 0b2c a280 0000            ADDI   A280h,A12
192d0: 830c                      MOVE   A8,*A12,1
192e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19310: b5a8 0020                 MOVE   *A13(20h),A8,0
19330: 0b88 ff00 ffff            ANDI   FFh,A8
19360: 0b2c a160 0000            ADDI   A160h,A12
19390: 830c                      MOVE   A8,*A12,1
193a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
193d0: b5a8 0020                 MOVE   *A13(20h),A8,0
193f0: 0b88 00ff ffff            ANDI   FF00h,A8
19420: 2b08                      SRA    8h,A8
19430: 0b2c a180 0000            ADDI   A180h,A12
19460: 830c                      MOVE   A8,*A12,1
19470: c00a                      JR     19520h
19480: 85a8                      MOVE   *A13,A8,0
19490: ca00 ff30                 JREQ   187B0h
194b0: 1428                      DEC    A8
194c0: ca00 ff61                 JREQ   18AF0h
194e0: 1428                      DEC    A8
194f0: ca92                      JREQ   18E20h
19500: 1428                      DEC    A8
19510: cac3                      JREQ   19150h
19520: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19550: 18e8                      MOVK   7h,A8
19560: 0b2c 8000 0000            ADDI   8000h,A12
19590: 830c                      MOVE   A8,*A12,1
195a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
195d0: 0b2c 8000 0000            ADDI   8000h,A12
19600: 878c                      MOVE   *A12,A12,1
19610: 0b8c ff00 ffff            ANDI   FFh,A12
19640: cbf5                      JRNE   195A0h
19650: 4508                      SUB    A8,A8
19660: b7ee 0060                 MOVE   *SP(60h),A14,1
19680: 09af 3000                 MMFM   SP,A12,A13
196a0: 0962                      RETS   2h

_set_scan_origin:
196b0: 098f 000c                 MMTM   SP,A12,A13
196d0: 4dcd                      MOVE   A14,A13
196e0: 0b0e 0040                 ADDI   40h,A14
19700: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19720: 0550                      SETF   10h,0,0
19730: 950c                      MOVE   *A8+,A12,0
19740: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
19760: 1868                      MOVK   3h,A8
19770: 510c                      AND    A8,A12
19780: 818d                      MOVE   A12,*A13,0
19790: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
197b0: 9588                      MOVE   *A12+,A8,0
197c0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
197e0: b10d 0010                 MOVE   A8,*A13(10h),0
19800: b98d 0000 0020            MOVE   *A12(0h),*A13(20h),0
19830: 07a8 7b00 0003            MOVE   @37B00h,A8,1
19860: 458c                      SUB    A12,A12
19870: 0b28 8040 0000            ADDI   8040h,A8
198a0: 8388                      MOVE   A12,*A8,1
198b0: 0570                      SETF   10h,1,0
198c0: b5a8 0020                 MOVE   *A13(20h),A8,0
198e0: c502                      JRGE   19910h
198f0: b18d 0020                 MOVE   A12,*A13(20h),0
19910: 07a8 7b00 0003            MOVE   @37B00h,A8,1
19940: 85ac                      MOVE   *A13,A12,0
19950: 24ec                      SLL    7h,A12
19960: 410c                      ADD    A8,A12
19970: b5a8 0020                 MOVE   *A13(20h),A8,0
19990: 0b88 ff00 ffff            ANDI   FFh,A8
199c0: 0b2c 9000 0000            ADDI   9000h,A12
199f0: 830c                      MOVE   A8,*A12,1
19a00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19a30: 85a8                      MOVE   *A13,A8,0
19a40: 24e8                      SLL    7h,A8
19a50: 4188                      ADD    A12,A8
19a60: b5ac 0020                 MOVE   *A13(20h),A12,0
19a80: 0b8c 00ff ffff            ANDI   FF00h,A12
19ab0: 2b0c                      SRA    8h,A12
19ac0: 0b28 9020 0000            ADDI   9020h,A8
19af0: 8388                      MOVE   A12,*A8,1
19b00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19b30: 85a8                      MOVE   *A13,A8,0
19b40: 24e8                      SLL    7h,A8
19b50: 4188                      ADD    A12,A8
19b60: b5ac 0010                 MOVE   *A13(10h),A12,0
19b80: 0b8c ff00 ffff            ANDI   FFh,A12
19bb0: 0b28 9040 0000            ADDI   9040h,A8
19be0: 8388                      MOVE   A12,*A8,1
19bf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19c20: 85a8                      MOVE   *A13,A8,0
19c30: 24e8                      SLL    7h,A8
19c40: 4188                      ADD    A12,A8
19c50: b5ac 0010                 MOVE   *A13(10h),A12,0
19c70: 0b8c 00ff ffff            ANDI   FF00h,A12
19ca0: 2b0c                      SRA    8h,A12
19cb0: 0b28 9060 0000            ADDI   9060h,A8
19ce0: 8388                      MOVE   A12,*A8,1
19cf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19d20: 18e8                      MOVK   7h,A8
19d30: 0b2c 8000 0000            ADDI   8000h,A12
19d60: 830c                      MOVE   A8,*A12,1
19d70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
19da0: 0b2c 8000 0000            ADDI   8000h,A12
19dd0: 878c                      MOVE   *A12,A12,1
19de0: 0b8c ff00 ffff            ANDI   FFh,A12
19e10: cbf5                      JRNE   19D70h
19e20: 4508                      SUB    A8,A8
19e30: b7ee 0060                 MOVE   *SP(60h),A14,1
19e50: 09af 3000                 MMFM   SP,A12,A13
19e70: 0962                      RETS   2h

_set_scan_shape:
19e80: 098f 000c                 MMTM   SP,A12,A13
19ea0: 4dcd                      MOVE   A14,A13
19eb0: 0b0e 0040                 ADDI   40h,A14
19ed0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19ef0: 0550                      SETF   10h,0,0
19f00: 950c                      MOVE   *A8+,A12,0
19f10: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
19f30: 1868                      MOVK   3h,A8
19f40: 510c                      AND    A8,A12
19f50: 818d                      MOVE   A12,*A13,0
19f60: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
19f80: 9588                      MOVE   *A12+,A8,0
19f90: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
19fb0: b10d 0010                 MOVE   A8,*A13(10h),0
19fd0: b98d 0000 0020            MOVE   *A12(0h),*A13(20h),0
1a000: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1a030: 458c                      SUB    A12,A12
1a040: 0b28 8040 0000            ADDI   8040h,A8
1a070: 8388                      MOVE   A12,*A8,1
1a080: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1a0b0: 85ac                      MOVE   *A13,A12,0
1a0c0: 24ec                      SLL    7h,A12
1a0d0: 410c                      ADD    A8,A12
1a0e0: b5a8 0010                 MOVE   *A13(10h),A8,0
1a100: 0b88 ff00 ffff            ANDI   FFh,A8
1a130: 0b2c 9400 0000            ADDI   9400h,A12
1a160: 830c                      MOVE   A8,*A12,1
1a170: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a1a0: 85a8                      MOVE   *A13,A8,0
1a1b0: 24e8                      SLL    7h,A8
1a1c0: 4188                      ADD    A12,A8
1a1d0: b5ac 0010                 MOVE   *A13(10h),A12,0
1a1f0: 0b8c 00ff ffff            ANDI   FF00h,A12
1a220: 2b0c                      SRA    8h,A12
1a230: 0b28 9420 0000            ADDI   9420h,A8
1a260: 8388                      MOVE   A12,*A8,1
1a270: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a2a0: 85a8                      MOVE   *A13,A8,0
1a2b0: 24e8                      SLL    7h,A8
1a2c0: 4188                      ADD    A12,A8
1a2d0: b5ac 0020                 MOVE   *A13(20h),A12,0
1a2f0: 0b8c ff00 ffff            ANDI   FFh,A12
1a320: 0b28 9440 0000            ADDI   9440h,A8
1a350: 8388                      MOVE   A12,*A8,1
1a360: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a390: 85a8                      MOVE   *A13,A8,0
1a3a0: 24e8                      SLL    7h,A8
1a3b0: 4188                      ADD    A12,A8
1a3c0: b5ac 0020                 MOVE   *A13(20h),A12,0
1a3e0: 0b8c 00ff ffff            ANDI   FF00h,A12
1a410: 2b0c                      SRA    8h,A12
1a420: 0b28 9460 0000            ADDI   9460h,A8
1a450: 8388                      MOVE   A12,*A8,1
1a460: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a490: 09c8 0021                 MOVI   21h,A8
1a4b0: 0b2c 8000 0000            ADDI   8000h,A12
1a4e0: 830c                      MOVE   A8,*A12,1
1a4f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a520: 0b2c 8000 0000            ADDI   8000h,A12
1a550: 878c                      MOVE   *A12,A12,1
1a560: 0b8c ff00 ffff            ANDI   FFh,A12
1a590: cbf5                      JRNE   1A4F0h
1a5a0: 4508                      SUB    A8,A8
1a5b0: b7ee 0060                 MOVE   *SP(60h),A14,1
1a5d0: 09af 3000                 MMFM   SP,A12,A13
1a5f0: 0962                      RETS   2h

_set_spot_definition:
1a600: 098f 000c                 MMTM   SP,A12,A13
1a620: 4dcd                      MOVE   A14,A13
1a630: 0b0e 0040                 ADDI   40h,A14
1a650: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a670: 0550                      SETF   10h,0,0
1a680: 950c                      MOVE   *A8+,A12,0
1a690: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
1a6b0: 818d                      MOVE   A12,*A13,0
1a6c0: 950c                      MOVE   *A8+,A12,0
1a6d0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
1a6f0: b18d 0010                 MOVE   A12,*A13(10h),0
1a710: b90d 0000 0020            MOVE   *A8(0h),*A13(20h),0
1a740: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1a770: 458c                      SUB    A12,A12
1a780: 0b28 8040 0000            ADDI   8040h,A8
1a7b0: 8388                      MOVE   A12,*A8,1
1a7c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1a7f0: 85ac                      MOVE   *A13,A12,0
1a800: 0b8c ff00 ffff            ANDI   FFh,A12
1a830: 0b28 a4e0 0000            ADDI   A4E0h,A8
1a860: 8388                      MOVE   A12,*A8,1
1a870: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a8a0: 85a8                      MOVE   *A13,A8,0
1a8b0: 0b88 00ff ffff            ANDI   FF00h,A8
1a8e0: 2b08                      SRA    8h,A8
1a8f0: 0b2c a500 0000            ADDI   A500h,A12
1a920: 830c                      MOVE   A8,*A12,1
1a930: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1a960: b5a8 0010                 MOVE   *A13(10h),A8,0
1a980: 0b88 ff00 ffff            ANDI   FFh,A8
1a9b0: 0b2c a4a0 0000            ADDI   A4A0h,A12
1a9e0: 830c                      MOVE   A8,*A12,1
1a9f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1aa20: b5a8 0010                 MOVE   *A13(10h),A8,0
1aa40: 0b88 00ff ffff            ANDI   FF00h,A8
1aa70: 2b08                      SRA    8h,A8
1aa80: 0b2c a4c0 0000            ADDI   A4C0h,A12
1aab0: 830c                      MOVE   A8,*A12,1
1aac0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1aaf0: b5a8 0020                 MOVE   *A13(20h),A8,0
1ab10: 0b88 ff00 ffff            ANDI   FFh,A8
1ab40: 0b2c a520 0000            ADDI   A520h,A12
1ab70: 830c                      MOVE   A8,*A12,1
1ab80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1abb0: 1b28                      MOVK   19h,A8
1abc0: 0b2c 8000 0000            ADDI   8000h,A12
1abf0: 830c                      MOVE   A8,*A12,1
1ac00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ac30: 0b2c 8000 0000            ADDI   8000h,A12
1ac60: 878c                      MOVE   *A12,A12,1
1ac70: 0b8c ff00 ffff            ANDI   FFh,A12
1aca0: cbf5                      JRNE   1AC00h
1acb0: 4508                      SUB    A8,A8
1acc0: b7ee 0060                 MOVE   *SP(60h),A14,1
1ace0: 09af 3000                 MMFM   SP,A12,A13
1ad00: 0962                      RETS   2h

_set_post_rot_offset:
1ad10: 098f 000c                 MMTM   SP,A12,A13
1ad30: 4dcd                      MOVE   A14,A13
1ad40: 100e                      ADDK   20h,A14
1ad50: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1ad70: 0550                      SETF   10h,0,0
1ad80: 950c                      MOVE   *A8+,A12,0
1ad90: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
1adb0: 818d                      MOVE   A12,*A13,0
1adc0: b90d 0000 0010            MOVE   *A8(0h),*A13(10h),0
1adf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ae20: 4508                      SUB    A8,A8
1ae30: 0b2c 8040 0000            ADDI   8040h,A12
1ae60: 830c                      MOVE   A8,*A12,1
1ae70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1aea0: 0570                      SETF   10h,1,0
1aeb0: 85a8                      MOVE   *A13,A8,0
1aec0: 0b88 ff00 ffff            ANDI   FFh,A8
1aef0: 0b2c ac80 0000            ADDI   AC80h,A12
1af20: 830c                      MOVE   A8,*A12,1
1af30: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1af60: 85a8                      MOVE   *A13,A8,0
1af70: 0b88 00ff ffff            ANDI   FF00h,A8
1afa0: 2b08                      SRA    8h,A8
1afb0: 0b2c aca0 0000            ADDI   ACA0h,A12
1afe0: 830c                      MOVE   A8,*A12,1
1aff0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b020: b5a8 0010                 MOVE   *A13(10h),A8,0
1b040: 0b88 ff00 ffff            ANDI   FFh,A8
1b070: 0b2c acc0 0000            ADDI   ACC0h,A12
1b0a0: 830c                      MOVE   A8,*A12,1
1b0b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b0e0: b5a8 0010                 MOVE   *A13(10h),A8,0
1b100: 0b88 00ff ffff            ANDI   FF00h,A8
1b130: 2b08                      SRA    8h,A8
1b140: 0b2c ace0 0000            ADDI   ACE0h,A12
1b170: 830c                      MOVE   A8,*A12,1
1b180: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b1b0: 09c8 002b                 MOVI   2Bh,A8
1b1d0: 0b2c 8000 0000            ADDI   8000h,A12
1b200: 830c                      MOVE   A8,*A12,1
1b210: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b240: 0b2c 8000 0000            ADDI   8000h,A12
1b270: 878c                      MOVE   *A12,A12,1
1b280: 0b8c ff00 ffff            ANDI   FFh,A12
1b2b0: cbf5                      JRNE   1B210h
1b2c0: 4508                      SUB    A8,A8
1b2d0: b7ee 0060                 MOVE   *SP(60h),A14,1
1b2f0: 09af 3000                 MMFM   SP,A12,A13
1b310: 0962                      RETS   2h

_eo_init:
1b320: 098f 000c                 MMTM   SP,A12,A13
1b340: 4dcd                      MOVE   A14,A13
1b350: 0b0e 0040                 ADDI   40h,A14
1b370: 09c8 0400                 MOVI   400h,A8
1b390: 830d                      MOVE   A8,*A13,1
1b3a0: 09c8 0300                 MOVI   300h,A8
1b3c0: b30d 0020                 MOVE   A8,*A13(20h),1
1b3e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1b410: 458c                      SUB    A12,A12
1b420: 0b28 8040 0000            ADDI   8040h,A8
1b450: 8388                      MOVE   A12,*A8,1
1b460: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1b490: 1a4c                      MOVK   12h,A12
1b4a0: 0b28 8000 0000            ADDI   8000h,A8
1b4d0: 8388                      MOVE   A12,*A8,1
1b4e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b510: 0b2c 8000 0000            ADDI   8000h,A12
1b540: 878c                      MOVE   *A12,A12,1
1b550: 0b8c ff00 ffff            ANDI   FFh,A12
1b580: cbf5                      JRNE   1B4E0h
1b590: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b5c0: 87a8                      MOVE   *A13,A8,1
1b5d0: 0b88 ff00 ffff            ANDI   FFh,A8
1b600: 0b2c 9800 0000            ADDI   9800h,A12
1b630: 830c                      MOVE   A8,*A12,1
1b640: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b670: 87a8                      MOVE   *A13,A8,1
1b680: 0b88 00ff ffff            ANDI   FF00h,A8
1b6b0: 2b08                      SRA    8h,A8
1b6c0: 0b2c 9820 0000            ADDI   9820h,A12
1b6f0: 830c                      MOVE   A8,*A12,1
1b700: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b730: b7a8 0020                 MOVE   *A13(20h),A8,1
1b750: 0b88 ff00 ffff            ANDI   FFh,A8
1b780: 0b2c 9840 0000            ADDI   9840h,A12
1b7b0: 830c                      MOVE   A8,*A12,1
1b7c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b7f0: b7a8 0020                 MOVE   *A13(20h),A8,1
1b810: 0b88 00ff ffff            ANDI   FF00h,A8
1b840: 2b08                      SRA    8h,A8
1b850: 0b2c 9860 0000            ADDI   9860h,A12
1b880: 830c                      MOVE   A8,*A12,1
1b890: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b8c0: 18e8                      MOVK   7h,A8
1b8d0: 0b2c 8000 0000            ADDI   8000h,A12
1b900: 830c                      MOVE   A8,*A12,1
1b910: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b940: 0b2c 8000 0000            ADDI   8000h,A12
1b970: 878c                      MOVE   *A12,A12,1
1b980: 0b8c ff00 ffff            ANDI   FFh,A12
1b9b0: cbf5                      JRNE   1B910h
1b9c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1b9f0: 1968                      MOVK   Bh,A8
1ba00: 0b2c 8000 0000            ADDI   8000h,A12
1ba30: 830c                      MOVE   A8,*A12,1
1ba40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ba70: 0b2c 8000 0000            ADDI   8000h,A12
1baa0: 878c                      MOVE   *A12,A12,1
1bab0: 0b8c ff00 ffff            ANDI   FFh,A12
1bae0: cbf5                      JRNE   1BA40h
1baf0: 0bee ffbf                 SUBI   40h,A14
1bb10: 09af 3000                 MMFM   SP,A12,A13
1bb30: 0960                      RETS   

_dsp_set_hrru_lut:
1bb40: 098f 001c                 MMTM   SP,A11-A13
1bb60: 4dcd                      MOVE   A14,A13
1bb70: 0b0e 0080                 ADDI   80h,A14
1bb90: bbad ffe0 0060            MOVE   *A13(FFE0h),*A13(60h),1
1bbc0: b7a8 0060                 MOVE   *A13(60h),A8,1
1bbe0: 0550                      SETF   10h,0,0
1bbf0: b90d 0000 0020            MOVE   *A8(0h),*A13(20h),0
1bc20: 4508                      SUB    A8,A8
1bc30: 810d                      MOVE   A8,*A13,0
1bc40: b7a8 0060                 MOVE   *A13(60h),A8,1
1bc60: 0570                      SETF   10h,1,0
1bc70: b508 0010                 MOVE   *A8(10h),A8,0
1bc90: c61d                      JRLE   1BE70h
1bca0: b7a8 0060                 MOVE   *A13(60h),A8,1
1bcc0: 1008                      ADDK   20h,A8
1bcd0: 870b                      MOVE   *A8,A11,1
1bce0: 0550                      SETF   10h,0,0
1bcf0: 956c                      MOVE   *A11+,A12,0
1bd00: 8368                      MOVE   A11,*A8,1
1bd10: b18d 0030                 MOVE   A12,*A13(30h),0
1bd30: a3cf                      MOVE   A14,-*SP,1
1bd40: 4dac                      MOVE   A13,A12
1bd50: 100c                      ADDK   20h,A12
1bd60: 938e                      MOVE   A12,*A14+,1
1bd70: 0d5f 3cf0 0002            CALLA  23CF0h
1bda0: b30d 0040                 MOVE   A8,*A13(40h),1
1bdc0: 0550                      SETF   10h,0,0
1bdd0: 85ab                      MOVE   *A13,A11,0
1bde0: 102b                      INC    A11
1bdf0: 816d                      MOVE   A11,*A13,0
1be00: b7ac 0060                 MOVE   *A13(60h),A12,1
1be20: 0570                      SETF   10h,1,0
1be30: b588 0010                 MOVE   *A12(10h),A8,0
1be50: 490b                      CMP    A8,A11
1be60: c4e3                      JRLT   1BCA0h
1be70: 4508                      SUB    A8,A8
1be80: b7ee 0080                 MOVE   *SP(80h),A14,1
1bea0: 09af 3800                 MMFM   SP,A11-A13
1bec0: 0962                      RETS   2h

_get_lut:
1bed0: 098f 002c                 MMTM   SP,A10,A12,A13
1bef0: 4dcd                      MOVE   A14,A13
1bf00: 0b0e 0040                 ADDI   40h,A14
1bf20: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
1bf50: 87a8                      MOVE   *A13,A8,1
1bf60: 0570                      SETF   10h,1,0
1bf70: b508 0008                 MOVE   *A8(8h),A8,0
1bf90: c55a                      JRGE   1C540h
1bfa0: 87a8                      MOVE   *A13,A8,1
1bfb0: 1108                      ADDK   8h,A8
1bfc0: 850c                      MOVE   *A8,A12,0
1bfd0: 0b0c 1000                 ADDI   1000h,A12
1bff0: 8188                      MOVE   A12,*A8,0
1c000: 87ac                      MOVE   *A13,A12,1
1c010: b588 0008                 MOVE   *A12(8h),A8,0
1c030: b58c 0018                 MOVE   *A12(18h),A12,0
1c050: 4188                      ADD    A12,A8
1c060: 0b48 efff                 CMPI   1000h,A8
1c080: c43a                      JRLT   1C430h
1c090: 87ac                      MOVE   *A13,A12,1
1c0a0: b588 0008                 MOVE   *A12(8h),A8,0
1c0c0: 03a8                      NEG    A8
1c0d0: 0b08 1000                 ADDI   1000h,A8
1c0f0: b10d 0020                 MOVE   A8,*A13(20h),0
1c110: a3cf                      MOVE   A14,-*SP,1
1c120: d38e 0028                 MOVE   *A12(28h),*A14+,1
1c140: 0550                      SETF   10h,0,0
1c150: b5a8 0020                 MOVE   *A13(20h),A8,0
1c170: 930e                      MOVE   A8,*A14+,1
1c180: b588 0008                 MOVE   *A12(8h),A8,0
1c1a0: 930e                      MOVE   A8,*A14+,1
1c1b0: 8f88                      MOVB   *A12,A8
1c1c0: 930e                      MOVE   A8,*A14+,1
1c1d0: 0d5f c6a0 0001            CALLA  1C6A0h
1c200: 4508                      SUB    A8,A8
1c210: 0570                      SETF   10h,1,0
1c220: b10c 0008                 MOVE   A8,*A12(8h),0
1c240: b5a8 0020                 MOVE   *A13(20h),A8,0
1c260: 2468                      SLL    3h,A8
1c270: b78a 0028                 MOVE   *A12(28h),A10,1
1c290: 410a                      ADD    A8,A10
1c2a0: b34c 0028                 MOVE   A10,*A12(28h),1
1c2c0: b5aa 0020                 MOVE   *A13(20h),A10,0
1c2e0: 130c                      ADDK   18h,A12
1c2f0: 8588                      MOVE   *A12,A8,0
1c300: 4548                      SUB    A10,A8
1c310: 810c                      MOVE   A8,*A12,0
1c320: a3cf                      MOVE   A14,-*SP,1
1c330: 87ac                      MOVE   *A13,A12,1
1c340: d38e 0028                 MOVE   *A12(28h),*A14+,1
1c360: 0550                      SETF   10h,0,0
1c370: b588 0018                 MOVE   *A12(18h),A8,0
1c390: 930e                      MOVE   A8,*A14+,1
1c3a0: b588 0008                 MOVE   *A12(8h),A8,0
1c3c0: 930e                      MOVE   A8,*A14+,1
1c3d0: 8f88                      MOVB   *A12,A8
1c3e0: 930e                      MOVE   A8,*A14+,1
1c3f0: 0d5f c6a0 0001            CALLA  1C6A0h
1c420: c021                      JR     1C640h
1c430: a3cf                      MOVE   A14,-*SP,1
1c440: 87ac                      MOVE   *A13,A12,1
1c450: d38e 0028                 MOVE   *A12(28h),*A14+,1
1c470: 0550                      SETF   10h,0,0
1c480: b58a 0018                 MOVE   *A12(18h),A10,0
1c4a0: 934e                      MOVE   A10,*A14+,1
1c4b0: b58a 0008                 MOVE   *A12(8h),A10,0
1c4d0: 934e                      MOVE   A10,*A14+,1
1c4e0: 8f8a                      MOVB   *A12,A10
1c4f0: 934e                      MOVE   A10,*A14+,1
1c500: 0d5f c6a0 0001            CALLA  1C6A0h
1c530: c010                      JR     1C640h
1c540: a3cf                      MOVE   A14,-*SP,1
1c550: 87ac                      MOVE   *A13,A12,1
1c560: d38e 0028                 MOVE   *A12(28h),*A14+,1
1c580: 0550                      SETF   10h,0,0
1c590: b58a 0018                 MOVE   *A12(18h),A10,0
1c5b0: 934e                      MOVE   A10,*A14+,1
1c5c0: b58a 0008                 MOVE   *A12(8h),A10,0
1c5e0: 934e                      MOVE   A10,*A14+,1
1c5f0: 8f8a                      MOVB   *A12,A10
1c600: 934e                      MOVE   A10,*A14+,1
1c610: 0d5f c6a0 0001            CALLA  1C6A0h
1c640: 4508                      SUB    A8,A8
1c650: b7ee 0080                 MOVE   *SP(80h),A14,1
1c670: 09af 3400                 MMFM   SP,A10,A12,A13
1c690: 0962                      RETS   2h

_read_lut:
1c6a0: 098f 000c                 MMTM   SP,A12,A13
1c6c0: 4dcd                      MOVE   A14,A13
1c6d0: 100e                      ADDK   20h,A14
1c6e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1c710: 182c                      MOVK   1h,A12
1c720: 0b28 8040 0000            ADDI   8040h,A8
1c750: 8388                      MOVE   A12,*A8,1
1c760: c072                      JR     1CE90h
1c770: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1c7a0: 1908                      MOVK   8h,A8
1c7b0: 0b2c 8120 0000            ADDI   8120h,A12
1c7e0: 830c                      MOVE   A8,*A12,1
1c7f0: c07a                      JR     1CFA0h
1c800: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1c830: 1908                      MOVK   8h,A8
1c840: 0b2c 8120 0000            ADDI   8120h,A12
1c870: 830c                      MOVE   A8,*A12,1
1c880: 0550                      SETF   10h,0,0
1c890: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1c8b0: 0b0c 1000                 ADDI   1000h,A12
1c8d0: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1c8f0: c06a                      JR     1CFA0h
1c900: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1c930: 1908                      MOVK   8h,A8
1c940: 0b2c 8120 0000            ADDI   8120h,A12
1c970: 830c                      MOVE   A8,*A12,1
1c980: 0550                      SETF   10h,0,0
1c990: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1c9b0: 0b0c 2000                 ADDI   2000h,A12
1c9d0: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1c9f0: c05a                      JR     1CFA0h
1ca00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ca30: 1908                      MOVK   8h,A8
1ca40: 0b2c 8120 0000            ADDI   8120h,A12
1ca70: 830c                      MOVE   A8,*A12,1
1ca80: 0550                      SETF   10h,0,0
1ca90: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1cab0: 0b0c 3000                 ADDI   3000h,A12
1cad0: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1caf0: c04a                      JR     1CFA0h
1cb00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1cb30: 1a08                      MOVK   10h,A8
1cb40: 0b2c 8120 0000            ADDI   8120h,A12
1cb70: 830c                      MOVE   A8,*A12,1
1cb80: c041                      JR     1CFA0h
1cb90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1cbc0: 1a08                      MOVK   10h,A8
1cbd0: 0b2c 8120 0000            ADDI   8120h,A12
1cc00: 830c                      MOVE   A8,*A12,1
1cc10: 0550                      SETF   10h,0,0
1cc20: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1cc40: 0b0c 1000                 ADDI   1000h,A12
1cc60: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1cc80: c031                      JR     1CFA0h
1cc90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ccc0: 1a08                      MOVK   10h,A8
1ccd0: 0b2c 8120 0000            ADDI   8120h,A12
1cd00: 830c                      MOVE   A8,*A12,1
1cd10: 0550                      SETF   10h,0,0
1cd20: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1cd40: 0b0c 2000                 ADDI   2000h,A12
1cd60: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1cd80: c021                      JR     1CFA0h
1cd90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1cdc0: 1a08                      MOVK   10h,A8
1cdd0: 0b2c 8120 0000            ADDI   8120h,A12
1ce00: 830c                      MOVE   A8,*A12,1
1ce10: 0550                      SETF   10h,0,0
1ce20: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1ce40: 0b0c 3000                 ADDI   3000h,A12
1ce60: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1ce80: c011                      JR     1CFA0h
1ce90: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1ceb0: ca8b                      JREQ   1C770h
1cec0: 1428                      DEC    A8
1ced0: ca92                      JREQ   1C800h
1cee0: 1428                      DEC    A8
1cef0: caa0                      JREQ   1C900h
1cf00: 1428                      DEC    A8
1cf10: caae                      JREQ   1CA00h
1cf20: 1428                      DEC    A8
1cf30: cabc                      JREQ   1CB00h
1cf40: 1428                      DEC    A8
1cf50: cac3                      JREQ   1CB90h
1cf60: 1428                      DEC    A8
1cf70: cad1                      JREQ   1CC90h
1cf80: 1428                      DEC    A8
1cf90: cadf                      JREQ   1CD90h
1cfa0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1cfd0: 0550                      SETF   10h,0,0
1cfe0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1d000: 0b88 ff00 ffff            ANDI   FFh,A8
1d030: 0b2c 80a0 0000            ADDI   80A0h,A12
1d060: 830c                      MOVE   A8,*A12,1
1d070: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d0a0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1d0c0: 0b88 00ff ffff            ANDI   FF00h,A8
1d0f0: 2b08                      SRA    8h,A8
1d100: 0b2c 80c0 0000            ADDI   80C0h,A12
1d130: 830c                      MOVE   A8,*A12,1
1d140: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d170: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1d190: 0b88 ff00 ffff            ANDI   FFh,A8
1d1c0: 0b2c 80e0 0000            ADDI   80E0h,A12
1d1f0: 830c                      MOVE   A8,*A12,1
1d200: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d230: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1d250: 0b88 00ff ffff            ANDI   FF00h,A8
1d280: 2b08                      SRA    8h,A8
1d290: 0b2c 8100 0000            ADDI   8100h,A12
1d2c0: 830c                      MOVE   A8,*A12,1
1d2d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d300: 1828                      MOVK   1h,A8
1d310: 0b2c 8060 0000            ADDI   8060h,A12
1d340: 830c                      MOVE   A8,*A12,1
1d350: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d380: 4508                      SUB    A8,A8
1d390: 0b2c 8080 0000            ADDI   8080h,A12
1d3c0: 830c                      MOVE   A8,*A12,1
1d3d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d400: 1868                      MOVK   3h,A8
1d410: 0b2c 8000 0000            ADDI   8000h,A12
1d440: 830c                      MOVE   A8,*A12,1
1d450: 09cc 0200                 MOVI   200h,A12
1d470: b18d 0010                 MOVE   A12,*A13(10h),0
1d490: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1d4b0: ca3f                      JREQ   1D8B0h
1d4c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d4f0: 0b2c 8060 0000            ADDI   8060h,A12
1d520: 878c                      MOVE   *A12,A12,1
1d530: 0b8c ff00 ffff            ANDI   FFh,A12
1d560: cb30                      JRNE   1D870h
1d570: 0550                      SETF   10h,0,0
1d580: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1d5a0: 0b4c fdff                 CMPI   200h,A12
1d5c0: c502                      JRGE   1D5F0h
1d5d0: b18d 0010                 MOVE   A12,*A13(10h),0
1d5f0: 4508                      SUB    A8,A8
1d600: 810d                      MOVE   A8,*A13,0
1d610: b5ac 0010                 MOVE   *A13(10h),A12,0
1d630: c618                      JRLE   1D7C0h
1d640: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d670: 85a8                      MOVE   *A13,A8,0
1d680: 24a8                      SLL    5h,A8
1d690: 4188                      ADD    A12,A8
1d6a0: b7ac ff80                 MOVE   *A13(FF80h),A12,1
1d6c0: 9d0c                      MOVB   *A8,*A12
1d6d0: 110c                      ADDK   8h,A12
1d6e0: b38d ff80                 MOVE   A12,*A13(FF80h),1
1d700: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1d720: 1428                      DEC    A8
1d730: b10d ffa0                 MOVE   A8,*A13(FFA0h),0
1d750: 85a8                      MOVE   *A13,A8,0
1d760: 1028                      INC    A8
1d770: 810d                      MOVE   A8,*A13,0
1d780: b5ac 0010                 MOVE   *A13(10h),A12,0
1d7a0: 4988                      CMP    A12,A8
1d7b0: c4e8                      JRLT   1D640h
1d7c0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1d7e0: ca08                      JREQ   1D870h
1d7f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1d820: 182c                      MOVK   1h,A12
1d830: 0b28 8060 0000            ADDI   8060h,A8
1d860: 8388                      MOVE   A12,*A8,1
1d870: 0550                      SETF   10h,0,0
1d880: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1d8a0: cbc1                      JRNE   1D4C0h
1d8b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1d8e0: 0b2c 8000 0000            ADDI   8000h,A12
1d910: 878c                      MOVE   *A12,A12,1
1d920: 0b8c ff00 ffff            ANDI   FFh,A12
1d950: cbf5                      JRNE   1D8B0h
1d960: b7ee 0060                 MOVE   *SP(60h),A14,1
1d980: 09af 3000                 MMFM   SP,A12,A13
1d9a0: 0962                      RETS   2h

_write_lut:
1d9b0: 098f 002c                 MMTM   SP,A10,A12,A13
1d9d0: 4dcd                      MOVE   A14,A13
1d9e0: 100e                      ADDK   20h,A14
1d9f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1da20: 182c                      MOVK   1h,A12
1da30: 0b28 8040 0000            ADDI   8040h,A8
1da60: 8388                      MOVE   A12,*A8,1
1da70: c072                      JR     1E1A0h
1da80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1dab0: 1908                      MOVK   8h,A8
1dac0: 0b2c 8120 0000            ADDI   8120h,A12
1daf0: 830c                      MOVE   A8,*A12,1
1db00: c07a                      JR     1E2B0h
1db10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1db40: 1908                      MOVK   8h,A8
1db50: 0b2c 8120 0000            ADDI   8120h,A12
1db80: 830c                      MOVE   A8,*A12,1
1db90: 0550                      SETF   10h,0,0
1dba0: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1dbc0: 0b0c 1000                 ADDI   1000h,A12
1dbe0: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1dc00: c06a                      JR     1E2B0h
1dc10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1dc40: 1908                      MOVK   8h,A8
1dc50: 0b2c 8120 0000            ADDI   8120h,A12
1dc80: 830c                      MOVE   A8,*A12,1
1dc90: 0550                      SETF   10h,0,0
1dca0: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1dcc0: 0b0c 2000                 ADDI   2000h,A12
1dce0: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1dd00: c05a                      JR     1E2B0h
1dd10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1dd40: 1908                      MOVK   8h,A8
1dd50: 0b2c 8120 0000            ADDI   8120h,A12
1dd80: 830c                      MOVE   A8,*A12,1
1dd90: 0550                      SETF   10h,0,0
1dda0: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1ddc0: 0b0c 3000                 ADDI   3000h,A12
1dde0: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1de00: c04a                      JR     1E2B0h
1de10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1de40: 1a08                      MOVK   10h,A8
1de50: 0b2c 8120 0000            ADDI   8120h,A12
1de80: 830c                      MOVE   A8,*A12,1
1de90: c041                      JR     1E2B0h
1dea0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ded0: 1a08                      MOVK   10h,A8
1dee0: 0b2c 8120 0000            ADDI   8120h,A12
1df10: 830c                      MOVE   A8,*A12,1
1df20: 0550                      SETF   10h,0,0
1df30: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1df50: 0b0c 1000                 ADDI   1000h,A12
1df70: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1df90: c031                      JR     1E2B0h
1dfa0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1dfd0: 1a08                      MOVK   10h,A8
1dfe0: 0b2c 8120 0000            ADDI   8120h,A12
1e010: 830c                      MOVE   A8,*A12,1
1e020: 0550                      SETF   10h,0,0
1e030: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1e050: 0b0c 2000                 ADDI   2000h,A12
1e070: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1e090: c021                      JR     1E2B0h
1e0a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e0d0: 1a08                      MOVK   10h,A8
1e0e0: 0b2c 8120 0000            ADDI   8120h,A12
1e110: 830c                      MOVE   A8,*A12,1
1e120: 0550                      SETF   10h,0,0
1e130: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1e150: 0b0c 3000                 ADDI   3000h,A12
1e170: b18d ffc0                 MOVE   A12,*A13(FFC0h),0
1e190: c011                      JR     1E2B0h
1e1a0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1e1c0: ca8b                      JREQ   1DA80h
1e1d0: 1428                      DEC    A8
1e1e0: ca92                      JREQ   1DB10h
1e1f0: 1428                      DEC    A8
1e200: caa0                      JREQ   1DC10h
1e210: 1428                      DEC    A8
1e220: caae                      JREQ   1DD10h
1e230: 1428                      DEC    A8
1e240: cabc                      JREQ   1DE10h
1e250: 1428                      DEC    A8
1e260: cac3                      JREQ   1DEA0h
1e270: 1428                      DEC    A8
1e280: cad1                      JREQ   1DFA0h
1e290: 1428                      DEC    A8
1e2a0: cadf                      JREQ   1E0A0h
1e2b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e2e0: 0550                      SETF   10h,0,0
1e2f0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1e310: 0b88 ff00 ffff            ANDI   FFh,A8
1e340: 0b2c 80a0 0000            ADDI   80A0h,A12
1e370: 830c                      MOVE   A8,*A12,1
1e380: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e3b0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1e3d0: 0b88 00ff ffff            ANDI   FF00h,A8
1e400: 2b08                      SRA    8h,A8
1e410: 0b2c 80c0 0000            ADDI   80C0h,A12
1e440: 830c                      MOVE   A8,*A12,1
1e450: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e480: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1e4a0: 0b88 ff00 ffff            ANDI   FFh,A8
1e4d0: 0b2c 80e0 0000            ADDI   80E0h,A12
1e500: 830c                      MOVE   A8,*A12,1
1e510: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e540: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1e560: 0b88 00ff ffff            ANDI   FF00h,A8
1e590: 2b08                      SRA    8h,A8
1e5a0: 0b2c 8100 0000            ADDI   8100h,A12
1e5d0: 830c                      MOVE   A8,*A12,1
1e5e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e610: 4508                      SUB    A8,A8
1e620: 0b2c 8060 0000            ADDI   8060h,A12
1e650: 830c                      MOVE   A8,*A12,1
1e660: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e690: 0b2c 8080 0000            ADDI   8080h,A12
1e6c0: 830c                      MOVE   A8,*A12,1
1e6d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e700: 1848                      MOVK   2h,A8
1e710: 0b2c 8000 0000            ADDI   8000h,A12
1e740: 830c                      MOVE   A8,*A12,1
1e750: 09cc 0200                 MOVI   200h,A12
1e770: b18d 0010                 MOVE   A12,*A13(10h),0
1e790: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1e7b0: ca7a                      JREQ   1EF60h
1e7c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e7f0: 0b2c 8060 0000            ADDI   8060h,A12
1e820: 878c                      MOVE   *A12,A12,1
1e830: 0b8c ff00 ffff            ANDI   FFh,A12
1e860: cb2f                      JRNE   1EB60h
1e870: 0550                      SETF   10h,0,0
1e880: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1e8a0: 0b4c fdff                 CMPI   200h,A12
1e8c0: c502                      JRGE   1E8F0h
1e8d0: b18d 0010                 MOVE   A12,*A13(10h),0
1e8f0: 4508                      SUB    A8,A8
1e900: 810d                      MOVE   A8,*A13,0
1e910: b5ac 0010                 MOVE   *A13(10h),A12,0
1e930: c61a                      JRLE   1EAE0h
1e940: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1e970: 85a8                      MOVE   *A13,A8,0
1e980: 24a8                      SLL    5h,A8
1e990: 4188                      ADD    A12,A8
1e9a0: b7ac ff80                 MOVE   *A13(FF80h),A12,1
1e9c0: 0548                      SETF   8h,0,0
1e9d0: 958a                      MOVE   *A12+,A10,0
1e9e0: b38d ff80                 MOVE   A12,*A13(FF80h),1
1ea00: 8348                      MOVE   A10,*A8,1
1ea10: 0550                      SETF   10h,0,0
1ea20: b5aa ffa0                 MOVE   *A13(FFA0h),A10,0
1ea40: 142a                      DEC    A10
1ea50: b14d ffa0                 MOVE   A10,*A13(FFA0h),0
1ea70: 85a8                      MOVE   *A13,A8,0
1ea80: 1028                      INC    A8
1ea90: 810d                      MOVE   A8,*A13,0
1eaa0: b5aa 0010                 MOVE   *A13(10h),A10,0
1eac0: 4948                      CMP    A10,A8
1ead0: c4e6                      JRLT   1E940h
1eae0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1eb10: 182a                      MOVK   1h,A10
1eb20: 0b2c 8060 0000            ADDI   8060h,A12
1eb50: 834c                      MOVE   A10,*A12,1
1eb60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1eb90: 0b2c 8080 0000            ADDI   8080h,A12
1ebc0: 878c                      MOVE   *A12,A12,1
1ebd0: 0b8c ff00 ffff            ANDI   FFh,A12
1ec00: cb31                      JRNE   1EF20h
1ec10: 0550                      SETF   10h,0,0
1ec20: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1ec40: ca2d                      JREQ   1EF20h
1ec50: 0b4c fdff                 CMPI   200h,A12
1ec70: c502                      JRGE   1ECA0h
1ec80: b18d 0010                 MOVE   A12,*A13(10h),0
1eca0: 454a                      SUB    A10,A10
1ecb0: 814d                      MOVE   A10,*A13,0
1ecc0: b5a8 0010                 MOVE   *A13(10h),A8,0
1ece0: c61b                      JRLE   1EEA0h
1ecf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ed20: 85aa                      MOVE   *A13,A10,0
1ed30: 24aa                      SLL    5h,A10
1ed40: 418a                      ADD    A12,A10
1ed50: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
1ed70: 0548                      SETF   8h,0,0
1ed80: 950c                      MOVE   *A8+,A12,0
1ed90: b30d ff80                 MOVE   A8,*A13(FF80h),1
1edb0: b38a 4000                 MOVE   A12,*A10(4000h),1
1edd0: 0550                      SETF   10h,0,0
1ede0: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1ee00: 142c                      DEC    A12
1ee10: b18d ffa0                 MOVE   A12,*A13(FFA0h),0
1ee30: 85aa                      MOVE   *A13,A10,0
1ee40: 102a                      INC    A10
1ee50: 814d                      MOVE   A10,*A13,0
1ee60: b5a8 0010                 MOVE   *A13(10h),A8,0
1ee80: 490a                      CMP    A8,A10
1ee90: c4e5                      JRLT   1ECF0h
1eea0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1eed0: 182a                      MOVK   1h,A10
1eee0: 0b28 8080 0000            ADDI   8080h,A8
1ef10: 8348                      MOVE   A10,*A8,1
1ef20: 0550                      SETF   10h,0,0
1ef30: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1ef50: cb86                      JRNE   1E7C0h
1ef60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1ef90: 0b2c 8000 0000            ADDI   8000h,A12
1efc0: 878c                      MOVE   *A12,A12,1
1efd0: 0b8c ff00 ffff            ANDI   FFh,A12
1f000: cbf5                      JRNE   1EF60h
1f010: b7ee 0080                 MOVE   *SP(80h),A14,1
1f030: 09af 3400                 MMFM   SP,A10,A12,A13
1f050: 0962                      RETS   2h

_collect_covariance:
1f060: 098f 000c                 MMTM   SP,A12,A13
1f080: 4dcd                      MOVE   A14,A13
1f090: 0b0e 00c0                 ADDI   C0h,A14
1f0b0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
1f0e0: 87a8                      MOVE   *A13,A8,1
1f0f0: bb0d 0000 00a0            MOVE   *A8(0h),*A13(A0h),1
1f120: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1f150: 87ac                      MOVE   *A13,A12,1
1f160: 0b28 8040 0000            ADDI   8040h,A8
1f190: 0570                      SETF   10h,1,0
1f1a0: b58c 00a0                 MOVE   *A12(A0h),A12,0
1f1c0: 8388                      MOVE   A12,*A8,1
1f1d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f200: 87a8                      MOVE   *A13,A8,1
1f210: b708 0030                 MOVE   *A8(30h),A8,1
1f230: 0b88 ff00 ffff            ANDI   FFh,A8
1f260: 0b2c 9f60 0000            ADDI   9F60h,A12
1f290: 830c                      MOVE   A8,*A12,1
1f2a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f2d0: 87a8                      MOVE   *A13,A8,1
1f2e0: b708 0030                 MOVE   *A8(30h),A8,1
1f300: 0b88 00ff ffff            ANDI   FF00h,A8
1f330: 2b08                      SRA    8h,A8
1f340: 0b2c 9f80 0000            ADDI   9F80h,A12
1f370: 830c                      MOVE   A8,*A12,1
1f380: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f3b0: 87a8                      MOVE   *A13,A8,1
1f3c0: b708 0030                 MOVE   *A8(30h),A8,1
1f3e0: 0b88 ffff ff00            ANDI   FF0000h,A8
1f410: 2a08                      SRA    10h,A8
1f420: 0b2c 9fa0 0000            ADDI   9FA0h,A12
1f450: 830c                      MOVE   A8,*A12,1
1f460: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f490: 87a8                      MOVE   *A13,A8,1
1f4a0: b708 0030                 MOVE   *A8(30h),A8,1
1f4c0: 0b88 ffff 00ff            ANDI   FF000000h,A8
1f4f0: 2d08                      SRL    18h,A8
1f500: 0b2c 9fc0 0000            ADDI   9FC0h,A12
1f530: 830c                      MOVE   A8,*A12,1
1f540: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f570: 87a8                      MOVE   *A13,A8,1
1f580: b708 0050                 MOVE   *A8(50h),A8,1
1f5a0: 0b88 ff00 ffff            ANDI   FFh,A8
1f5d0: 0b2c 9fe0 0000            ADDI   9FE0h,A12
1f600: 830c                      MOVE   A8,*A12,1
1f610: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f640: 87a8                      MOVE   *A13,A8,1
1f650: b708 0050                 MOVE   *A8(50h),A8,1
1f670: 0b88 00ff ffff            ANDI   FF00h,A8
1f6a0: 2b08                      SRA    8h,A8
1f6b0: 0b2c a000 0000            ADDI   A000h,A12
1f6e0: 830c                      MOVE   A8,*A12,1
1f6f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f720: 87a8                      MOVE   *A13,A8,1
1f730: b708 0050                 MOVE   *A8(50h),A8,1
1f750: 0b88 ffff ff00            ANDI   FF0000h,A8
1f780: 2a08                      SRA    10h,A8
1f790: 0b2c a020 0000            ADDI   A020h,A12
1f7c0: 830c                      MOVE   A8,*A12,1
1f7d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f800: 87a8                      MOVE   *A13,A8,1
1f810: b708 0050                 MOVE   *A8(50h),A8,1
1f830: 0b88 ffff 00ff            ANDI   FF000000h,A8
1f860: 2d08                      SRL    18h,A8
1f870: 0b2c a040 0000            ADDI   A040h,A12
1f8a0: 830c                      MOVE   A8,*A12,1
1f8b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f8e0: 87a8                      MOVE   *A13,A8,1
1f8f0: 0550                      SETF   10h,0,0
1f900: b508 0080                 MOVE   *A8(80h),A8,0
1f920: 0b88 ff00 ffff            ANDI   FFh,A8
1f950: 0b2c a060 0000            ADDI   A060h,A12
1f980: 830c                      MOVE   A8,*A12,1
1f990: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1f9c0: 87a8                      MOVE   *A13,A8,1
1f9d0: b508 0080                 MOVE   *A8(80h),A8,0
1f9f0: 0b88 00ff ffff            ANDI   FF00h,A8
1fa20: 2b08                      SRA    8h,A8
1fa30: 0b2c a080 0000            ADDI   A080h,A12
1fa60: 830c                      MOVE   A8,*A12,1
1fa70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1faa0: 87a8                      MOVE   *A13,A8,1
1fab0: b508 0070                 MOVE   *A8(70h),A8,0
1fad0: 0b88 ff00 ffff            ANDI   FFh,A8
1fb00: 0b2c a680 0000            ADDI   A680h,A12
1fb30: 830c                      MOVE   A8,*A12,1
1fb40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1fb70: 87a8                      MOVE   *A13,A8,1
1fb80: b508 0070                 MOVE   *A8(70h),A8,0
1fba0: 0b88 00ff ffff            ANDI   FF00h,A8
1fbd0: 2b08                      SRA    8h,A8
1fbe0: 0b2c a6a0 0000            ADDI   A6A0h,A12
1fc10: 830c                      MOVE   A8,*A12,1
1fc20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1fc50: 87a8                      MOVE   *A13,A8,1
1fc60: 0b2c a660 0000            ADDI   A660h,A12
1fc90: 0570                      SETF   10h,1,0
1fca0: b508 0090                 MOVE   *A8(90h),A8,0
1fcc0: 830c                      MOVE   A8,*A12,1
1fcd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1fd00: 87a8                      MOVE   *A13,A8,1
1fd10: b508 0020                 MOVE   *A8(20h),A8,0
1fd30: 0b88 ff00 ffff            ANDI   FFh,A8
1fd60: 0b2c 80e0 0000            ADDI   80E0h,A12
1fd90: 830c                      MOVE   A8,*A12,1
1fda0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
1fdd0: 87a8                      MOVE   *A13,A8,1
1fde0: b508 0020                 MOVE   *A8(20h),A8,0
1fe00: 0b88 00ff ffff            ANDI   FF00h,A8
1fe30: 2b08                      SRA    8h,A8
1fe40: 0b2c 8100 0000            ADDI   8100h,A12
1fe70: 830c                      MOVE   A8,*A12,1
1fe80: 09cc 0200                 MOVI   200h,A12
1fea0: b18d 0060                 MOVE   A12,*A13(60h),0
1fec0: 87a8                      MOVE   *A13,A8,1
1fed0: b508 0020                 MOVE   *A8(20h),A8,0
1fef0: 2488                      SLL    4h,A8
1ff00: b30d 0040                 MOVE   A8,*A13(40h),1
1ff20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
1ff50: 182c                      MOVK   1h,A12
1ff60: 0b28 8060 0000            ADDI   8060h,A8
1ff90: 8388                      MOVE   A12,*A8,1
1ffa0: b7a8 0040                 MOVE   *A13(40h),A8,1
1ffc0: 0b48 fdff                 CMPI   200h,A8
1ffe0: c609                      JRLE   20080h
1fff0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20020: 1828                      MOVK   1h,A8
20030: 0b2c 8080 0000            ADDI   8080h,A12
20060: 830c                      MOVE   A8,*A12,1
20070: c008                      JR     20100h
20080: 07ac 7b00 0003            MOVE   @37B00h,A12,1
200b0: 4508                      SUB    A8,A8
200c0: 0b2c 8080 0000            ADDI   8080h,A12
200f0: 830c                      MOVE   A8,*A12,1
20100: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20130: 1b08                      MOVK   18h,A8
20140: 0b2c 8000 0000            ADDI   8000h,A12
20170: 830c                      MOVE   A8,*A12,1
20180: a3cf                      MOVE   A14,-*SP,1
20190: 458c                      SUB    A12,A12
201a0: 938e                      MOVE   A12,*A14+,1
201b0: 0d5f 3400 0000            CALLA  3400h
201e0: b30d 0080                 MOVE   A8,*A13(80h),1
20200: 1488                      SUBK   4h,A8
20210: cb02                      JRNE   20240h
20220: 1888                      MOVK   4h,A8
20230: c057                      JR     207B0h
20240: b7a8 0040                 MOVE   *A13(40h),A8,1
20260: 0b48 fdff                 CMPI   200h,A8
20280: c503                      JRGE   202C0h
20290: 0550                      SETF   10h,0,0
202a0: b10d 0060                 MOVE   A8,*A13(60h),0
202c0: 0550                      SETF   10h,0,0
202d0: b18d 0020                 MOVE   A12,*A13(20h),0
202f0: b5a8 0060                 MOVE   *A13(60h),A8,0
20310: c61d                      JRLE   204F0h
20320: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20350: b5a8 0020                 MOVE   *A13(20h),A8,0
20370: 24a8                      SLL    5h,A8
20380: 4188                      ADD    A12,A8
20390: b7ac 00a0                 MOVE   *A13(A0h),A12,1
203b0: 0548                      SETF   8h,0,0
203c0: d10c 0000                 MOVE   *A8(0h),*A12+,0
203e0: b38d 00a0                 MOVE   A12,*A13(A0h),1
20400: b7a8 0040                 MOVE   *A13(40h),A8,1
20420: 1428                      DEC    A8
20430: b30d 0040                 MOVE   A8,*A13(40h),1
20450: 0550                      SETF   10h,0,0
20460: b5a8 0020                 MOVE   *A13(20h),A8,0
20480: 1028                      INC    A8
20490: b10d 0020                 MOVE   A8,*A13(20h),0
204b0: b5ac 0060                 MOVE   *A13(60h),A12,0
204d0: 4988                      CMP    A12,A8
204e0: c4e3                      JRLT   20320h
204f0: b7ac 0040                 MOVE   *A13(40h),A12,1
20510: ca28                      JREQ   207A0h
20520: 0b4c fdff                 CMPI   200h,A12
20540: c502                      JRGE   20570h
20550: b18d 0060                 MOVE   A12,*A13(60h),0
20570: 4508                      SUB    A8,A8
20580: b10d 0020                 MOVE   A8,*A13(20h),0
205a0: b5ac 0060                 MOVE   *A13(60h),A12,0
205c0: c61d                      JRLE   207A0h
205d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20600: b5a8 0020                 MOVE   *A13(20h),A8,0
20620: 24a8                      SLL    5h,A8
20630: 4188                      ADD    A12,A8
20640: b7ac 00a0                 MOVE   *A13(A0h),A12,1
20660: 0548                      SETF   8h,0,0
20670: d10c 4000                 MOVE   *A8(4000h),*A12+,0
20690: b38d 00a0                 MOVE   A12,*A13(A0h),1
206b0: b7a8 0040                 MOVE   *A13(40h),A8,1
206d0: 1428                      DEC    A8
206e0: b30d 0040                 MOVE   A8,*A13(40h),1
20700: 0550                      SETF   10h,0,0
20710: b5a8 0020                 MOVE   *A13(20h),A8,0
20730: 1028                      INC    A8
20740: b10d 0020                 MOVE   A8,*A13(20h),0
20760: b5ac 0060                 MOVE   *A13(60h),A12,0
20780: 4988                      CMP    A12,A8
20790: c4e3                      JRLT   205D0h
207a0: 4508                      SUB    A8,A8
207b0: b7ee 0060                 MOVE   *SP(60h),A14,1
207d0: 09af 3000                 MMFM   SP,A12,A13
207f0: 0962                      RETS   2h

_get_histogram:
20800: 098f 000c                 MMTM   SP,A12,A13
20820: 4dcd                      MOVE   A14,A13
20830: 100e                      ADDK   20h,A14
20840: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
20860: 0550                      SETF   10h,0,0
20870: 8508                      MOVE   *A8,A8,0
20880: 830d                      MOVE   A8,*A13,1
20890: 19ec                      MOVK   Fh,A12
208a0: 510c                      AND    A8,A12
208b0: ca18                      JREQ   20A40h
208c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
208f0: 1908                      MOVK   8h,A8
20900: 0b2c 9da0 0000            ADDI   9DA0h,A12
20930: 830c                      MOVE   A8,*A12,1
20940: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20970: 0b2c 9dc0 0000            ADDI   9DC0h,A12
209a0: 8bac                      MOVE   *A13,*A12,1
209b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
209e0: 4508                      SUB    A8,A8
209f0: 0b2c 9de0 0000            ADDI   9DE0h,A12
20a20: 830c                      MOVE   A8,*A12,1
20a30: c020                      JR     20C40h
20a40: 0b88 ff0f ffff            ANDI   F0h,A8
20a70: ca1a                      JREQ   20C20h
20a80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20ab0: 1a08                      MOVK   10h,A8
20ac0: 0b2c 9da0 0000            ADDI   9DA0h,A12
20af0: 830c                      MOVE   A8,*A12,1
20b00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20b30: 4508                      SUB    A8,A8
20b40: 0b2c 9dc0 0000            ADDI   9DC0h,A12
20b70: 830c                      MOVE   A8,*A12,1
20b80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20bb0: 87a8                      MOVE   *A13,A8,1
20bc0: 2b88                      SRA    4h,A8
20bd0: 0b2c 9de0 0000            ADDI   9DE0h,A12
20c00: 830c                      MOVE   A8,*A12,1
20c10: c002                      JR     20C40h
20c20: 1848                      MOVK   2h,A8
20c30: c01c                      JR     20E00h
20c40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20c70: 4508                      SUB    A8,A8
20c80: 0b2c 8040 0000            ADDI   8040h,A12
20cb0: 830c                      MOVE   A8,*A12,1
20cc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20cf0: 1ae8                      MOVK   17h,A8
20d00: 0b2c 8000 0000            ADDI   8000h,A12
20d30: 830c                      MOVE   A8,*A12,1
20d40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
20d70: 0b2c 8000 0000            ADDI   8000h,A12
20da0: 878c                      MOVE   *A12,A12,1
20db0: 0b8c ff00 ffff            ANDI   FFh,A12
20de0: cbf5                      JRNE   20D40h
20df0: 4508                      SUB    A8,A8
20e00: b7ee 0060                 MOVE   *SP(60h),A14,1
20e20: 09af 3000                 MMFM   SP,A12,A13
20e40: 0962                      RETS   2h

_trans_histogram:
20e50: 098f 000c                 MMTM   SP,A12,A13
20e70: 4dcd                      MOVE   A14,A13
20e80: 0b0e 0080                 ADDI   80h,A14
20ea0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
20ed0: 87a8                      MOVE   *A13,A8,1
20ee0: 8b0d                      MOVE   *A8,*A13,1
20ef0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
20f20: 458c                      SUB    A12,A12
20f30: 0b28 8040 0000            ADDI   8040h,A8
20f60: 8388                      MOVE   A12,*A8,1
20f70: 07a8 7b00 0003            MOVE   @37B00h,A8,1
20fa0: 0b28 80a0 0000            ADDI   80A0h,A8
20fd0: 8388                      MOVE   A12,*A8,1
20fe0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
21010: 09cc 003e                 MOVI   3Eh,A12
21030: 0b28 80c0 0000            ADDI   80C0h,A8
21060: 8388                      MOVE   A12,*A8,1
21070: 07a8 7b00 0003            MOVE   @37B00h,A8,1
210a0: 458c                      SUB    A12,A12
210b0: 0b28 80e0 0000            ADDI   80E0h,A8
210e0: 8388                      MOVE   A12,*A8,1
210f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
21120: 182c                      MOVK   1h,A12
21130: 0b28 8100 0000            ADDI   8100h,A8
21160: 8388                      MOVE   A12,*A8,1
21170: 07a8 7b00 0003            MOVE   @37B00h,A8,1
211a0: 19ec                      MOVK   Fh,A12
211b0: 0b28 8000 0000            ADDI   8000h,A8
211e0: 8388                      MOVE   A12,*A8,1
211f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
21220: 182c                      MOVK   1h,A12
21230: 0b28 8060 0000            ADDI   8060h,A8
21260: 8388                      MOVE   A12,*A8,1
21270: 07a8 7b00 0003            MOVE   @37B00h,A8,1
212a0: 0b28 8080 0000            ADDI   8080h,A8
212d0: 8388                      MOVE   A12,*A8,1
212e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
21310: 0b2c 8060 0000            ADDI   8060h,A12
21340: 878c                      MOVE   *A12,A12,1
21350: 0b8c ff00 ffff            ANDI   FFh,A12
21380: cbf5                      JRNE   212E0h
21390: 458c                      SUB    A12,A12
213a0: b38d 0040                 MOVE   A12,*A13(40h),1
213c0: 458c                      SUB    A12,A12
213d0: b38d 0020                 MOVE   A12,*A13(20h),1
213f0: b38d 0060                 MOVE   A12,*A13(60h),1
21410: b7ac 0040                 MOVE   *A13(40h),A12,1
21430: b7a8 0060                 MOVE   *A13(60h),A8,1
21450: 410c                      ADD    A8,A12
21460: 24ac                      SLL    5h,A12
21470: 07a8 7b00 0003            MOVE   @37B00h,A8,1
214a0: 410c                      ADD    A8,A12
214b0: 878c                      MOVE   *A12,A12,1
214c0: 0b8c ff00 ffff            ANDI   FFh,A12
214f0: b7a8 0020                 MOVE   *A13(20h),A8,1
21510: 2508                      SLL    8h,A8
21520: 5588                      OR     A12,A8
21530: b30d 0020                 MOVE   A8,*A13(20h),1
21550: b7ac 0060                 MOVE   *A13(60h),A12,1
21570: 102c                      INC    A12
21580: b38d 0060                 MOVE   A12,*A13(60h),1
215a0: 146c                      SUBK   3h,A12
215b0: c4e5                      JRLT   21410h
215c0: 458c                      SUB    A12,A12
215d0: b38d 0060                 MOVE   A12,*A13(60h),1
215f0: b7ac 0060                 MOVE   *A13(60h),A12,1
21610: 24ac                      SLL    5h,A12
21620: 87a8                      MOVE   *A13,A8,1
21630: 410c                      ADD    A8,A12
21640: 878c                      MOVE   *A12,A12,1
21650: ca09                      JREQ   216F0h
21660: b7ac 0060                 MOVE   *A13(60h),A12,1
21680: 24ac                      SLL    5h,A12
21690: 410c                      ADD    A8,A12
216a0: 8788                      MOVE   *A12,A8,1
216b0: d3a8 0020                 MOVE   *A13(20h),*A8+,1
216d0: 830c                      MOVE   A8,*A12,1
216e0: c003                      JR     21720h
216f0: 186c                      MOVK   3h,A12
21700: b38d 0060                 MOVE   A12,*A13(60h),1
21720: b7ac 0060                 MOVE   *A13(60h),A12,1
21740: 102c                      INC    A12
21750: b38d 0060                 MOVE   A12,*A13(60h),1
21770: 148c                      SUBK   4h,A12
21780: c4e6                      JRLT   215F0h
21790: b7ac 0040                 MOVE   *A13(40h),A12,1
217b0: 108c                      ADDK   4h,A12
217c0: b38d 0040                 MOVE   A12,*A13(40h),1
217e0: 0b4c fdff                 CMPI   200h,A12
21800: c4bb                      JRLT   213C0h
21810: 07ac 7b00 0003            MOVE   @37B00h,A12,1
21840: 0b2c 8080 0000            ADDI   8080h,A12
21870: 878c                      MOVE   *A12,A12,1
21880: 0b8c ff00 ffff            ANDI   FFh,A12
218b0: cbf5                      JRNE   21810h
218c0: 458c                      SUB    A12,A12
218d0: b38d 0040                 MOVE   A12,*A13(40h),1
218f0: 458c                      SUB    A12,A12
21900: b38d 0020                 MOVE   A12,*A13(20h),1
21920: b38d 0060                 MOVE   A12,*A13(60h),1
21940: b7ac 0040                 MOVE   *A13(40h),A12,1
21960: b7a8 0060                 MOVE   *A13(60h),A8,1
21980: 410c                      ADD    A8,A12
21990: 24ac                      SLL    5h,A12
219a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
219d0: 410c                      ADD    A8,A12
219e0: b78c 4000                 MOVE   *A12(4000h),A12,1
21a00: 0b8c ff00 ffff            ANDI   FFh,A12
21a30: b7a8 0020                 MOVE   *A13(20h),A8,1
21a50: 2508                      SLL    8h,A8
21a60: 5588                      OR     A12,A8
21a70: b30d 0020                 MOVE   A8,*A13(20h),1
21a90: b7ac 0060                 MOVE   *A13(60h),A12,1
21ab0: 102c                      INC    A12
21ac0: b38d 0060                 MOVE   A12,*A13(60h),1
21ae0: 146c                      SUBK   3h,A12
21af0: c4e4                      JRLT   21940h
21b00: 458c                      SUB    A12,A12
21b10: b38d 0060                 MOVE   A12,*A13(60h),1
21b30: b7ac 0060                 MOVE   *A13(60h),A12,1
21b50: 24ac                      SLL    5h,A12
21b60: 87a8                      MOVE   *A13,A8,1
21b70: 410c                      ADD    A8,A12
21b80: 878c                      MOVE   *A12,A12,1
21b90: ca09                      JREQ   21C30h
21ba0: b7ac 0060                 MOVE   *A13(60h),A12,1
21bc0: 24ac                      SLL    5h,A12
21bd0: 410c                      ADD    A8,A12
21be0: 8788                      MOVE   *A12,A8,1
21bf0: d3a8 0020                 MOVE   *A13(20h),*A8+,1
21c10: 830c                      MOVE   A8,*A12,1
21c20: c003                      JR     21C60h
21c30: 186c                      MOVK   3h,A12
21c40: b38d 0060                 MOVE   A12,*A13(60h),1
21c60: b7ac 0060                 MOVE   *A13(60h),A12,1
21c80: 102c                      INC    A12
21c90: b38d 0060                 MOVE   A12,*A13(60h),1
21cb0: 148c                      SUBK   4h,A12
21cc0: c4e6                      JRLT   21B30h
21cd0: b7ac 0040                 MOVE   *A13(40h),A12,1
21cf0: 108c                      ADDK   4h,A12
21d00: b38d 0040                 MOVE   A12,*A13(40h),1
21d20: 0b4c fdff                 CMPI   200h,A12
21d40: c4ba                      JRLT   218F0h
21d50: 4508                      SUB    A8,A8
21d60: b30d 0060                 MOVE   A8,*A13(60h),1
21d80: b7ac 0060                 MOVE   *A13(60h),A12,1
21da0: 24ac                      SLL    5h,A12
21db0: 87a8                      MOVE   *A13,A8,1
21dc0: 410c                      ADD    A8,A12
21dd0: 4508                      SUB    A8,A8
21de0: 830c                      MOVE   A8,*A12,1
21df0: b7ac 0060                 MOVE   *A13(60h),A12,1
21e10: 102c                      INC    A12
21e20: b38d 0060                 MOVE   A12,*A13(60h),1
21e40: 148c                      SUBK   4h,A12
21e50: c4f2                      JRLT   21D80h
21e60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
21e90: 0b2c 8000 0000            ADDI   8000h,A12
21ec0: 878c                      MOVE   *A12,A12,1
21ed0: 0b8c ff00 ffff            ANDI   FFh,A12
21f00: cbf5                      JRNE   21E60h
21f10: 4508                      SUB    A8,A8
21f20: b7ee 0060                 MOVE   *SP(60h),A14,1
21f40: 09af 3000                 MMFM   SP,A12,A13
21f60: 0962                      RETS   2h

_trans_histdata:
21f70: 098f 000c                 MMTM   SP,A12,A13
21f90: 4dcd                      MOVE   A14,A13
21fa0: 0b0e 0060                 ADDI   60h,A14
21fc0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
21ff0: 87a8                      MOVE   *A13,A8,1
22000: bb0d 0000 0020            MOVE   *A8(0h),*A13(20h),1
22030: b7a8 0020                 MOVE   *A13(20h),A8,1
22050: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22080: 0b2c 9e00 0000            ADDI   9E00h,A12
220b0: 0548                      SETF   8h,0,0
220c0: d188 0000                 MOVE   *A12(0h),*A8+,0
220e0: b30d 0020                 MOVE   A8,*A13(20h),1
22100: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22130: 0b2c 9f40 0000            ADDI   9F40h,A12
22160: d188 0000                 MOVE   *A12(0h),*A8+,0
22180: b30d 0020                 MOVE   A8,*A13(20h),1
221a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
221d0: 0b2c 9f20 0000            ADDI   9F20h,A12
22200: d188 0000                 MOVE   *A12(0h),*A8+,0
22220: b30d 0020                 MOVE   A8,*A13(20h),1
22240: 4508                      SUB    A8,A8
22250: b7ee 0060                 MOVE   *SP(60h),A14,1
22270: 09af 3000                 MMFM   SP,A12,A13
22290: 0962                      RETS   2h

_set_scan_event_line:
222a0: 098f 000c                 MMTM   SP,A12,A13
222c0: 4dcd                      MOVE   A14,A13
222d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
22300: 458c                      SUB    A12,A12
22310: 0b28 8040 0000            ADDI   8040h,A8
22340: 8388                      MOVE   A12,*A8,1
22350: 07a8 7b00 0003            MOVE   @37B00h,A8,1
22380: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
223a0: 0550                      SETF   10h,0,0
223b0: 858c                      MOVE   *A12,A12,0
223c0: 0b8c ff00 ffff            ANDI   FFh,A12
223f0: 0b28 a6c0 0000            ADDI   A6C0h,A8
22420: 8388                      MOVE   A12,*A8,1
22430: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22460: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
22480: 8508                      MOVE   *A8,A8,0
22490: 0b88 00ff ffff            ANDI   FF00h,A8
224c0: 2b08                      SRA    8h,A8
224d0: 0b2c a6e0 0000            ADDI   A6E0h,A12
22500: 830c                      MOVE   A8,*A12,1
22510: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22540: 1bc8                      MOVK   1Eh,A8
22550: 0b2c 8000 0000            ADDI   8000h,A12
22580: 830c                      MOVE   A8,*A12,1
22590: 07ac 7b00 0003            MOVE   @37B00h,A12,1
225c0: 0b2c 8000 0000            ADDI   8000h,A12
225f0: 878c                      MOVE   *A12,A12,1
22600: 0b8c ff00 ffff            ANDI   FFh,A12
22630: cbf5                      JRNE   22590h
22640: 4508                      SUB    A8,A8
22650: b7ee 0060                 MOVE   *SP(60h),A14,1
22670: 09af 3000                 MMFM   SP,A12,A13
22690: 0962                      RETS   2h

_set_frame_average:
226a0: 098f 000c                 MMTM   SP,A12,A13
226c0: 4dcd                      MOVE   A14,A13
226d0: 100e                      ADDK   20h,A14
226e0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
22710: 07a8 7b00 0003            MOVE   @37B00h,A8,1
22740: 458c                      SUB    A12,A12
22750: 0b28 8040 0000            ADDI   8040h,A8
22780: 8388                      MOVE   A12,*A8,1
22790: 07a8 7b00 0003            MOVE   @37B00h,A8,1
227c0: 87ac                      MOVE   *A13,A12,1
227d0: 0b28 8860 0000            ADDI   8860h,A8
22800: 0548                      SETF   8h,0,0
22810: 858c                      MOVE   *A12,A12,0
22820: 8388                      MOVE   A12,*A8,1
22830: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22860: 87a8                      MOVE   *A13,A8,1
22870: 0b2c 8880 0000            ADDI   8880h,A12
228a0: b508 0008                 MOVE   *A8(8h),A8,0
228c0: 830c                      MOVE   A8,*A12,1
228d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22900: 87a8                      MOVE   *A13,A8,1
22910: 0b2c 88a0 0000            ADDI   88A0h,A12
22940: b508 0010                 MOVE   *A8(10h),A8,0
22960: 830c                      MOVE   A8,*A12,1
22970: 07ac 7b00 0003            MOVE   @37B00h,A12,1
229a0: 87a8                      MOVE   *A13,A8,1
229b0: 0b2c 88c0 0000            ADDI   88C0h,A12
229e0: b508 0018                 MOVE   *A8(18h),A8,0
22a00: 830c                      MOVE   A8,*A12,1
22a10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22a40: 87a8                      MOVE   *A13,A8,1
22a50: 0b2c 88e0 0000            ADDI   88E0h,A12
22a80: b508 0020                 MOVE   *A8(20h),A8,0
22aa0: 830c                      MOVE   A8,*A12,1
22ab0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22ae0: 87a8                      MOVE   *A13,A8,1
22af0: 0b2c 8900 0000            ADDI   8900h,A12
22b20: b508 0028                 MOVE   *A8(28h),A8,0
22b40: 830c                      MOVE   A8,*A12,1
22b50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22b80: 87a8                      MOVE   *A13,A8,1
22b90: 0b2c 8920 0000            ADDI   8920h,A12
22bc0: b508 0030                 MOVE   *A8(30h),A8,0
22be0: 830c                      MOVE   A8,*A12,1
22bf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22c20: 87a8                      MOVE   *A13,A8,1
22c30: 0b2c 8940 0000            ADDI   8940h,A12
22c60: b508 0038                 MOVE   *A8(38h),A8,0
22c80: 830c                      MOVE   A8,*A12,1
22c90: 87ac                      MOVE   *A13,A12,1
22ca0: b588 0040                 MOVE   *A12(40h),A8,0
22cc0: 0d88 002f                 DSJ    A8,22FD0h
22ce0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
22d10: 458c                      SUB    A12,A12
22d20: 0b28 8d00 0000            ADDI   8D00h,A8
22d50: 8388                      MOVE   A12,*A8,1
22d60: 07a8 7b00 0003            MOVE   @37B00h,A8,1
22d90: 19cc                      MOVK   Eh,A12
22da0: 0b28 8000 0000            ADDI   8000h,A8
22dd0: 8388                      MOVE   A12,*A8,1
22de0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22e10: 0b2c 8000 0000            ADDI   8000h,A12
22e40: 878c                      MOVE   *A12,A12,1
22e50: 0b8c ff00 ffff            ANDI   FFh,A12
22e80: cbf5                      JRNE   22DE0h
22e90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22ec0: 1968                      MOVK   Bh,A8
22ed0: 0b2c 8000 0000            ADDI   8000h,A12
22f00: 830c                      MOVE   A8,*A12,1
22f10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
22f40: 0b2c 8000 0000            ADDI   8000h,A12
22f70: 878c                      MOVE   *A12,A12,1
22f80: 0b8c ff00 ffff            ANDI   FFh,A12
22fb0: cbf5                      JRNE   22F10h
22fc0: c01b                      JR     23180h
22fd0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23000: 458c                      SUB    A12,A12
23010: 0b28 8d00 0000            ADDI   8D00h,A8
23040: 8388                      MOVE   A12,*A8,1
23050: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23080: 19cc                      MOVK   Eh,A12
23090: 0b28 8000 0000            ADDI   8000h,A8
230c0: 8388                      MOVE   A12,*A8,1
230d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23100: 0b2c 8000 0000            ADDI   8000h,A12
23130: 878c                      MOVE   *A12,A12,1
23140: 0b8c ff00 ffff            ANDI   FFh,A12
23170: cbf5                      JRNE   230D0h
23180: 4508                      SUB    A8,A8
23190: b7ee 0060                 MOVE   *SP(60h),A14,1
231b0: 09af 3000                 MMFM   SP,A12,A13
231d0: 0962                      RETS   2h

_set_line_average:
231e0: 098f 000c                 MMTM   SP,A12,A13
23200: 4dcd                      MOVE   A14,A13
23210: 100e                      ADDK   20h,A14
23220: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
23250: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23280: 458c                      SUB    A12,A12
23290: 0b28 8040 0000            ADDI   8040h,A8
232c0: 8388                      MOVE   A12,*A8,1
232d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23300: 87ac                      MOVE   *A13,A12,1
23310: 0b28 8860 0000            ADDI   8860h,A8
23340: 0548                      SETF   8h,0,0
23350: 858c                      MOVE   *A12,A12,0
23360: 8388                      MOVE   A12,*A8,1
23370: 07ac 7b00 0003            MOVE   @37B00h,A12,1
233a0: 1848                      MOVK   2h,A8
233b0: 0b2c 8d00 0000            ADDI   8D00h,A12
233e0: 830c                      MOVE   A8,*A12,1
233f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23420: 19c8                      MOVK   Eh,A8
23430: 0b2c 8000 0000            ADDI   8000h,A12
23460: 830c                      MOVE   A8,*A12,1
23470: 07ac 7b00 0003            MOVE   @37B00h,A12,1
234a0: 0b2c 8000 0000            ADDI   8000h,A12
234d0: 878c                      MOVE   *A12,A12,1
234e0: 0b8c ff00 ffff            ANDI   FFh,A12
23510: cbf5                      JRNE   23470h
23520: 87ac                      MOVE   *A13,A12,1
23530: 0548                      SETF   8h,0,0
23540: b588 0008                 MOVE   *A12(8h),A8,0
23560: 3a68                      DSJS   A8,236A0h
23570: 07a8 7b00 0003            MOVE   @37B00h,A8,1
235a0: 196c                      MOVK   Bh,A12
235b0: 0b28 8000 0000            ADDI   8000h,A8
235e0: 8388                      MOVE   A12,*A8,1
235f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23620: 0b2c 8000 0000            ADDI   8000h,A12
23650: 878c                      MOVE   *A12,A12,1
23660: 0b8c ff00 ffff            ANDI   FFh,A12
23690: cbf5                      JRNE   235F0h
236a0: 4508                      SUB    A8,A8
236b0: b7ee 0060                 MOVE   *SP(60h),A14,1
236d0: 09af 3000                 MMFM   SP,A12,A13
236f0: 0962                      RETS   2h

_set_windowing_on_off:
23700: 098f 000c                 MMTM   SP,A12,A13
23720: 4dcd                      MOVE   A14,A13
23730: 100e                      ADDK   20h,A14
23740: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
23760: 9d0d                      MOVB   *A8,*A13
23770: 07a8 7b00 0003            MOVE   @37B00h,A8,1
237a0: 458c                      SUB    A12,A12
237b0: 0b28 8040 0000            ADDI   8040h,A8
237e0: 8388                      MOVE   A12,*A8,1
237f0: 0548                      SETF   8h,0,0
23800: 85a8                      MOVE   *A13,A8,0
23810: 3a48                      DSJS   A8,23940h
23820: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23850: 09cc ffff                 MOVI   FFFFh,A12
23870: 0b28 8960 0000            ADDI   8960h,A8
238a0: 0561                      SETF   1h,1,0
238b0: 8188                      MOVE   A12,*A8,0
238c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
238f0: 0b28 8961 0000            ADDI   8961h,A8
23920: 8188                      MOVE   A12,*A8,0
23930: c00f                      JR     23A30h
23940: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23970: 0b28 8960 0000            ADDI   8960h,A8
239a0: 0561                      SETF   1h,1,0
239b0: 8188                      MOVE   A12,*A8,0
239c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
239f0: 0b28 8961 0000            ADDI   8961h,A8
23a20: 8188                      MOVE   A12,*A8,0
23a30: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23a60: 1b68                      MOVK   1Bh,A8
23a70: 0b2c 8000 0000            ADDI   8000h,A12
23aa0: 830c                      MOVE   A8,*A12,1
23ab0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23ae0: 0b2c 8000 0000            ADDI   8000h,A12
23b10: 878c                      MOVE   *A12,A12,1
23b20: 0b8c ff00 ffff            ANDI   FFh,A12
23b50: cbf5                      JRNE   23AB0h
23b60: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23b90: 1a68                      MOVK   13h,A8
23ba0: 0b2c 8000 0000            ADDI   8000h,A12
23bd0: 830c                      MOVE   A8,*A12,1
23be0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23c10: 0b2c 8000 0000            ADDI   8000h,A12
23c40: 878c                      MOVE   *A12,A12,1
23c50: 0b8c ff00 ffff            ANDI   FFh,A12
23c80: cbf5                      JRNE   23BE0h
23c90: 4508                      SUB    A8,A8
23ca0: b7ee 0060                 MOVE   *SP(60h),A14,1
23cc0: 09af 3000                 MMFM   SP,A12,A13
23ce0: 0962                      RETS   2h

_set_hrru_register:
23cf0: 098f 000c                 MMTM   SP,A12,A13
23d10: 4dcd                      MOVE   A14,A13
23d20: 100e                      ADDK   20h,A14
23d30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
23d50: 0550                      SETF   10h,0,0
23d60: 950c                      MOVE   *A8+,A12,0
23d70: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
23d90: 818d                      MOVE   A12,*A13,0
23da0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23dd0: 458c                      SUB    A12,A12
23de0: 0b28 8040 0000            ADDI   8040h,A8
23e10: 8388                      MOVE   A12,*A8,1
23e20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23e50: 182c                      MOVK   1h,A12
23e60: 0b28 8060 0000            ADDI   8060h,A8
23e90: 8388                      MOVE   A12,*A8,1
23ea0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23ed0: 0b28 8080 0000            ADDI   8080h,A8
23f00: 8388                      MOVE   A12,*A8,1
23f10: 07a8 7b00 0003            MOVE   @37B00h,A8,1
23f40: 85ac                      MOVE   *A13,A12,0
23f50: 0b8c ff00 ffff            ANDI   FFh,A12
23f80: 0b28 80a0 0000            ADDI   80A0h,A8
23fb0: 8388                      MOVE   A12,*A8,1
23fc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
23ff0: 85a8                      MOVE   *A13,A8,0
24000: 0b88 00ff ffff            ANDI   FF00h,A8
24030: 2b08                      SRA    8h,A8
24040: 0b2c 80c0 0000            ADDI   80C0h,A12
24070: 830c                      MOVE   A8,*A12,1
24080: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
240a0: 898d                      MOVE   *A12,*A13,0
240b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
240e0: 85ac                      MOVE   *A13,A12,0
240f0: 0b8c ff00 ffff            ANDI   FFh,A12
24120: 8388                      MOVE   A12,*A8,1
24130: 85ac                      MOVE   *A13,A12,0
24140: 0b8c 00ff ffff            ANDI   FF00h,A12
24170: 2b0c                      SRA    8h,A12
24180: b388 0020                 MOVE   A12,*A8(20h),1
241a0: 182c                      MOVK   1h,A12
241b0: 0b28 80e0 0000            ADDI   80E0h,A8
241e0: 8388                      MOVE   A12,*A8,1
241f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24220: 458c                      SUB    A12,A12
24230: 0b28 8100 0000            ADDI   8100h,A8
24260: 8388                      MOVE   A12,*A8,1
24270: 07a8 7b00 0003            MOVE   @37B00h,A8,1
242a0: 180c                      MOVK   20h,A12
242b0: 0b28 8120 0000            ADDI   8120h,A8
242e0: 8388                      MOVE   A12,*A8,1
242f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24320: 188c                      MOVK   4h,A12
24330: 0b28 8000 0000            ADDI   8000h,A8
24360: 8388                      MOVE   A12,*A8,1
24370: 07ac 7b00 0003            MOVE   @37B00h,A12,1
243a0: 0b2c 8000 0000            ADDI   8000h,A12
243d0: 878c                      MOVE   *A12,A12,1
243e0: 0b8c ff00 ffff            ANDI   FFh,A12
24410: cbf5                      JRNE   24370h
24420: 4508                      SUB    A8,A8
24430: b7ee 0060                 MOVE   *SP(60h),A14,1
24450: 09af 3000                 MMFM   SP,A12,A13
24470: 0962                      RETS   2h

_read_hrru_register:
24480: 098f 002c                 MMTM   SP,A10,A12,A13
244a0: 4dcd                      MOVE   A14,A13
244b0: 100e                      ADDK   20h,A14
244c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
244e0: 0550                      SETF   10h,0,0
244f0: 890d                      MOVE   *A8,*A13,0
24500: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24530: 458c                      SUB    A12,A12
24540: 0b28 8040 0000            ADDI   8040h,A8
24570: 8388                      MOVE   A12,*A8,1
24580: 07a8 7b00 0003            MOVE   @37B00h,A8,1
245b0: 182c                      MOVK   1h,A12
245c0: 0b28 8060 0000            ADDI   8060h,A8
245f0: 8388                      MOVE   A12,*A8,1
24600: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24630: 0b28 8080 0000            ADDI   8080h,A8
24660: 8388                      MOVE   A12,*A8,1
24670: 07a8 7b00 0003            MOVE   @37B00h,A8,1
246a0: 85ac                      MOVE   *A13,A12,0
246b0: 0b8c ff00 ffff            ANDI   FFh,A12
246e0: 0b28 80a0 0000            ADDI   80A0h,A8
24710: 8388                      MOVE   A12,*A8,1
24720: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24750: 85a8                      MOVE   *A13,A8,0
24760: 0b88 00ff ffff            ANDI   FF00h,A8
24790: 2b08                      SRA    8h,A8
247a0: 0b2c 80c0 0000            ADDI   80C0h,A12
247d0: 830c                      MOVE   A8,*A12,1
247e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24810: 1828                      MOVK   1h,A8
24820: 0b2c 80e0 0000            ADDI   80E0h,A12
24850: 830c                      MOVE   A8,*A12,1
24860: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24890: 4508                      SUB    A8,A8
248a0: 0b2c 8100 0000            ADDI   8100h,A12
248d0: 830c                      MOVE   A8,*A12,1
248e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24910: 1808                      MOVK   20h,A8
24920: 0b2c 8120 0000            ADDI   8120h,A12
24950: 830c                      MOVE   A8,*A12,1
24960: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24990: 18a8                      MOVK   5h,A8
249a0: 0b2c 8000 0000            ADDI   8000h,A12
249d0: 830c                      MOVE   A8,*A12,1
249e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24a10: 0b2c 8000 0000            ADDI   8000h,A12
24a40: 878c                      MOVE   *A12,A12,1
24a50: 0b8c ff00 ffff            ANDI   FFh,A12
24a80: cbf5                      JRNE   249E0h
24a90: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
24ab0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24ae0: b708 0020                 MOVE   *A8(20h),A8,1
24b00: 0b88 ff00 ffff            ANDI   FFh,A8
24b30: 2508                      SLL    8h,A8
24b40: 0550                      SETF   10h,0,0
24b50: 810c                      MOVE   A8,*A12,0
24b60: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24b90: 8708                      MOVE   *A8,A8,1
24ba0: 0b88 ff00 ffff            ANDI   FFh,A8
24bd0: 858a                      MOVE   *A12,A10,0
24be0: 550a                      OR     A8,A10
24bf0: 814c                      MOVE   A10,*A12,0
24c00: 4508                      SUB    A8,A8
24c10: b7ee 0080                 MOVE   *SP(80h),A14,1
24c30: 09af 3400                 MMFM   SP,A10,A12,A13
24c50: 0962                      RETS   2h

_dsp_set_digital_rate:
24c60: 098f 000c                 MMTM   SP,A12,A13
24c80: 4dcd                      MOVE   A14,A13
24c90: 100e                      ADDK   20h,A14
24ca0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
24cc0: 0550                      SETF   10h,0,0
24cd0: 890d                      MOVE   *A8,*A13,0
24ce0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24d10: 182c                      MOVK   1h,A12
24d20: 0b28 8040 0000            ADDI   8040h,A8
24d50: 8388                      MOVE   A12,*A8,1
24d60: 85a8                      MOVE   *A13,A8,0
24d70: 19ec                      MOVK   Fh,A12
24d80: 510c                      AND    A8,A12
24d90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24dc0: 0b28 98a0 0000            ADDI   98A0h,A8
24df0: 8388                      MOVE   A12,*A8,1
24e00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
24e30: 09c8 0021                 MOVI   21h,A8
24e50: 0b2c 8000 0000            ADDI   8000h,A12
24e80: 830c                      MOVE   A8,*A12,1
24e90: a3cf                      MOVE   A14,-*SP,1
24ea0: 182c                      MOVK   1h,A12
24eb0: 938e                      MOVE   A12,*A14+,1
24ec0: 0d5f 3400 0000            CALLA  3400h
24ef0: b7ee 0060                 MOVE   *SP(60h),A14,1
24f10: 09af 3000                 MMFM   SP,A12,A13
24f30: 0962                      RETS   2h

_set_seven_bit_freeze:
24f40: 098f 000c                 MMTM   SP,A12,A13
24f60: 4dcd                      MOVE   A14,A13
24f70: 100e                      ADDK   20h,A14
24f80: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
24fb0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
24fe0: 458c                      SUB    A12,A12
24ff0: 0b28 8040 0000            ADDI   8040h,A8
25020: 8388                      MOVE   A12,*A8,1
25030: 87a8                      MOVE   *A13,A8,1
25040: 8f0c                      MOVB   *A8,A12
25050: cb18                      JRNE   251E0h
25060: af0c 0008                 MOVB   *A8(8h),A12
25080: 396c                      DSJS   A12,25140h
25090: 07ac 7b00 0003            MOVE   @37B00h,A12,1
250c0: 09c8 ffff                 MOVI   FFFFh,A8
250e0: 0b2c 9987 0000            ADDI   9987h,A12
25110: 0561                      SETF   1h,1,0
25120: 810c                      MOVE   A8,*A12,0
25130: c021                      JR     25350h
25140: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25170: 4508                      SUB    A8,A8
25180: 0b2c 9987 0000            ADDI   9987h,A12
251b0: 0561                      SETF   1h,1,0
251c0: 810c                      MOVE   A8,*A12,0
251d0: c017                      JR     25350h
251e0: af0c 0008                 MOVB   *A8(8h),A12
25200: 396c                      DSJS   A12,252C0h
25210: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25240: 09c8 ffff                 MOVI   FFFFh,A8
25260: 0b2c 99a7 0000            ADDI   99A7h,A12
25290: 0561                      SETF   1h,1,0
252a0: 810c                      MOVE   A8,*A12,0
252b0: c009                      JR     25350h
252c0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
252f0: 4508                      SUB    A8,A8
25300: 0b2c 99a7 0000            ADDI   99A7h,A12
25330: 0561                      SETF   1h,1,0
25340: 810c                      MOVE   A8,*A12,0
25350: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25380: 1a68                      MOVK   13h,A8
25390: 0b2c 8000 0000            ADDI   8000h,A12
253c0: 830c                      MOVE   A8,*A12,1
253d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25400: 0b2c 8000 0000            ADDI   8000h,A12
25430: 878c                      MOVE   *A12,A12,1
25440: 0b8c ff00 ffff            ANDI   FFh,A12
25470: cbf5                      JRNE   253D0h
25480: 4508                      SUB    A8,A8
25490: b7ee 0060                 MOVE   *SP(60h),A14,1
254b0: 09af 3000                 MMFM   SP,A12,A13
254d0: 0962                      RETS   2h

_set_one_zero_freeze:
254e0: 098f 000c                 MMTM   SP,A12,A13
25500: 4dcd                      MOVE   A14,A13
25510: 100e                      ADDK   20h,A14
25520: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
25550: 07a8 7b00 0003            MOVE   @37B00h,A8,1
25580: 458c                      SUB    A12,A12
25590: 0b28 8040 0000            ADDI   8040h,A8
255c0: 8388                      MOVE   A12,*A8,1
255d0: 87a8                      MOVE   *A13,A8,1
255e0: 8f0c                      MOVB   *A8,A12
255f0: cb58                      JRNE   25B80h
25600: af0c 0008                 MOVB   *A8(8h),A12
25620: 3a4c                      DSJS   A12,25750h
25630: 0550                      SETF   10h,0,0
25640: 05ac 7910 0003            MOVE   @37910h,A12,0
25670: 102c                      INC    A12
25680: 058c 7910 0003            MOVE   A12,@37910h,0
256b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
256e0: 09cc ffff                 MOVI   FFFFh,A12
25700: 0b28 9985 0000            ADDI   9985h,A8
25730: 0561                      SETF   1h,1,0
25740: 8188                      MOVE   A12,*A8,0
25750: 87ac                      MOVE   *A13,A12,1
25760: af88 0008                 MOVB   *A12(8h),A8
25780: cb12                      JRNE   258B0h
25790: 0550                      SETF   10h,0,0
257a0: 05a8 7910 0003            MOVE   @37910h,A8,0
257d0: 1428                      DEC    A8
257e0: 0588 7910 0003            MOVE   A8,@37910h,0
25810: cb09                      JRNE   258B0h
25820: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25850: 4508                      SUB    A8,A8
25860: 0b2c 9985 0000            ADDI   9985h,A12
25890: 0561                      SETF   1h,1,0
258a0: 810c                      MOVE   A8,*A12,0
258b0: 87ac                      MOVE   *A13,A12,1
258c0: af88 0010                 MOVB   *A12(10h),A8
258e0: 3a48                      DSJS   A8,25A10h
258f0: 0550                      SETF   10h,0,0
25900: 05a8 7900 0003            MOVE   @37900h,A8,0
25930: 1028                      INC    A8
25940: 0588 7900 0003            MOVE   A8,@37900h,0
25970: 07ac 7b00 0003            MOVE   @37B00h,A12,1
259a0: 09c8 ffff                 MOVI   FFFFh,A8
259c0: 0b2c 9984 0000            ADDI   9984h,A12
259f0: 0561                      SETF   1h,1,0
25a00: 810c                      MOVE   A8,*A12,0
25a10: 87ac                      MOVE   *A13,A12,1
25a20: af88 0010                 MOVB   *A12(10h),A8
25a40: cb48                      JRNE   25ED0h
25a50: 0550                      SETF   10h,0,0
25a60: 05a8 7900 0003            MOVE   @37900h,A8,0
25a90: 1428                      DEC    A8
25aa0: 0588 7900 0003            MOVE   A8,@37900h,0
25ad0: cb3f                      JRNE   25ED0h
25ae0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25b10: 4508                      SUB    A8,A8
25b20: 0b2c 9984 0000            ADDI   9984h,A12
25b50: 0561                      SETF   1h,1,0
25b60: 810c                      MOVE   A8,*A12,0
25b70: c035                      JR     25ED0h
25b80: af0c 0008                 MOVB   *A8(8h),A12
25ba0: 394c                      DSJS   A12,25C50h
25bb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25be0: 09c8 ffff                 MOVI   FFFFh,A8
25c00: 0b2c 99a5 0000            ADDI   99A5h,A12
25c30: 0561                      SETF   1h,1,0
25c40: 810c                      MOVE   A8,*A12,0
25c50: 87ac                      MOVE   *A13,A12,1
25c60: af88 0008                 MOVB   *A12(8h),A8
25c80: cb09                      JRNE   25D20h
25c90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
25cc0: 458c                      SUB    A12,A12
25cd0: 0b28 99a5 0000            ADDI   99A5h,A8
25d00: 0561                      SETF   1h,1,0
25d10: 8188                      MOVE   A12,*A8,0
25d20: 87ac                      MOVE   *A13,A12,1
25d30: af88 0010                 MOVB   *A12(10h),A8
25d50: 3948                      DSJS   A8,25E00h
25d60: 07a8 7b00 0003            MOVE   @37B00h,A8,1
25d90: 09cc ffff                 MOVI   FFFFh,A12
25db0: 0b28 99a4 0000            ADDI   99A4h,A8
25de0: 0561                      SETF   1h,1,0
25df0: 8188                      MOVE   A12,*A8,0
25e00: 87ac                      MOVE   *A13,A12,1
25e10: af88 0010                 MOVB   *A12(10h),A8
25e30: cb09                      JRNE   25ED0h
25e40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
25e70: 458c                      SUB    A12,A12
25e80: 0b28 99a4 0000            ADDI   99A4h,A8
25eb0: 0561                      SETF   1h,1,0
25ec0: 8188                      MOVE   A12,*A8,0
25ed0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25f00: 1a68                      MOVK   13h,A8
25f10: 0b2c 8000 0000            ADDI   8000h,A12
25f40: 830c                      MOVE   A8,*A12,1
25f50: 07ac 7b00 0003            MOVE   @37B00h,A12,1
25f80: 0b2c 8000 0000            ADDI   8000h,A12
25fb0: 878c                      MOVE   *A12,A12,1
25fc0: 0b8c ff00 ffff            ANDI   FFh,A12
25ff0: cbf5                      JRNE   25F50h
26000: 4508                      SUB    A8,A8
26010: b7ee 0060                 MOVE   *SP(60h),A14,1
26030: 09af 3000                 MMFM   SP,A12,A13
26050: 0962                      RETS   2h

_dsp_set_fcf_limits:
26060: 098f 000c                 MMTM   SP,A12,A13
26080: 4dcd                      MOVE   A14,A13
26090: 100e                      ADDK   20h,A14
260a0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
260d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26100: 458c                      SUB    A12,A12
26110: 0b28 8040 0000            ADDI   8040h,A8
26140: 8388                      MOVE   A12,*A8,1
26150: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26180: 87ac                      MOVE   *A13,A12,1
26190: 878c                      MOVE   *A12,A12,1
261a0: 0b8c ff00 ffff            ANDI   FFh,A12
261d0: 0b28 ab00 0000            ADDI   AB00h,A8
26200: 8388                      MOVE   A12,*A8,1
26210: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26240: 87a8                      MOVE   *A13,A8,1
26250: 8708                      MOVE   *A8,A8,1
26260: 0b88 00ff ffff            ANDI   FF00h,A8
26290: 2b08                      SRA    8h,A8
262a0: 0b2c ab20 0000            ADDI   AB20h,A12
262d0: 830c                      MOVE   A8,*A12,1
262e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26310: 87a8                      MOVE   *A13,A8,1
26320: 8708                      MOVE   *A8,A8,1
26330: 0b88 ffff ff00            ANDI   FF0000h,A8
26360: 2a08                      SRA    10h,A8
26370: 0b2c ab40 0000            ADDI   AB40h,A12
263a0: 830c                      MOVE   A8,*A12,1
263b0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
263e0: 87a8                      MOVE   *A13,A8,1
263f0: 8708                      MOVE   *A8,A8,1
26400: 0b88 ffff 00ff            ANDI   FF000000h,A8
26430: 2d08                      SRL    18h,A8
26440: 0b2c ab60 0000            ADDI   AB60h,A12
26470: 830c                      MOVE   A8,*A12,1
26480: 07ac 7b00 0003            MOVE   @37B00h,A12,1
264b0: 87a8                      MOVE   *A13,A8,1
264c0: b708 0020                 MOVE   *A8(20h),A8,1
264e0: 0b88 ff00 ffff            ANDI   FFh,A8
26510: 0b2c ab80 0000            ADDI   AB80h,A12
26540: 830c                      MOVE   A8,*A12,1
26550: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26580: 87a8                      MOVE   *A13,A8,1
26590: b708 0020                 MOVE   *A8(20h),A8,1
265b0: 0b88 00ff ffff            ANDI   FF00h,A8
265e0: 2b08                      SRA    8h,A8
265f0: 0b2c aba0 0000            ADDI   ABA0h,A12
26620: 830c                      MOVE   A8,*A12,1
26630: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26660: 87a8                      MOVE   *A13,A8,1
26670: b708 0020                 MOVE   *A8(20h),A8,1
26690: 0b88 ffff ff00            ANDI   FF0000h,A8
266c0: 2a08                      SRA    10h,A8
266d0: 0b2c abc0 0000            ADDI   ABC0h,A12
26700: 830c                      MOVE   A8,*A12,1
26710: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26740: 87a8                      MOVE   *A13,A8,1
26750: b708 0020                 MOVE   *A8(20h),A8,1
26770: 0b88 ffff 00ff            ANDI   FF000000h,A8
267a0: 2d08                      SRL    18h,A8
267b0: 0b2c abe0 0000            ADDI   ABE0h,A12
267e0: 830c                      MOVE   A8,*A12,1
267f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26820: 87a8                      MOVE   *A13,A8,1
26830: 0b2c ac00 0000            ADDI   AC00h,A12
26860: 0548                      SETF   8h,0,0
26870: b508 0040                 MOVE   *A8(40h),A8,0
26890: 830c                      MOVE   A8,*A12,1
268a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
268d0: 09c8 0023                 MOVI   23h,A8
268f0: 0b2c 8000 0000            ADDI   8000h,A12
26920: 830c                      MOVE   A8,*A12,1
26930: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26960: 0b2c 8000 0000            ADDI   8000h,A12
26990: 878c                      MOVE   *A12,A12,1
269a0: 0b8c ff00 ffff            ANDI   FFh,A12
269d0: cbf5                      JRNE   26930h
269e0: 4508                      SUB    A8,A8
269f0: b7ee 0060                 MOVE   *SP(60h),A14,1
26a10: 09af 3000                 MMFM   SP,A12,A13
26a30: 0962                      RETS   2h

_dsp_take_photo:
26a40: 098f 002c                 MMTM   SP,A10,A12,A13
26a60: 4dcd                      MOVE   A14,A13
26a70: 0b0e 00a0                 ADDI   A0h,A14
26a90: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
26ac0: 1828                      MOVK   1h,A8
26ad0: 0788 7b20 0003            MOVE   A8,@37B20h,1
26b00: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26b30: 0b28 8860 0000            ADDI   8860h,A8
26b60: 0550                      SETF   10h,0,0
26b70: b90d 0000 0020            MOVE   *A8(0h),*A13(20h),0
26ba0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26bd0: 0b28 8d00 0000            ADDI   8D00h,A8
26c00: b90d 0000 0030            MOVE   *A8(0h),*A13(30h),0
26c30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26c60: 458c                      SUB    A12,A12
26c70: 0b28 8040 0000            ADDI   8040h,A8
26ca0: 8388                      MOVE   A12,*A8,1
26cb0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26ce0: 0b28 8860 0000            ADDI   8860h,A8
26d10: 8388                      MOVE   A12,*A8,1
26d20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26d50: 0b28 8d00 0000            ADDI   8D00h,A8
26d80: 8388                      MOVE   A12,*A8,1
26d90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
26dc0: 19cc                      MOVK   Eh,A12
26dd0: 0b28 8000 0000            ADDI   8000h,A8
26e00: 8388                      MOVE   A12,*A8,1
26e10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
26e40: 0b2c 8000 0000            ADDI   8000h,A12
26e70: 878c                      MOVE   *A12,A12,1
26e80: 0b8c ff00 ffff            ANDI   FFh,A12
26eb0: cbf5                      JRNE   26E10h
26ec0: 87ac                      MOVE   *A13,A12,1
26ed0: 0550                      SETF   10h,0,0
26ee0: b98d 0010 0060            MOVE   *A12(10h),*A13(60h),0
26f10: b98d 0000 0070            MOVE   *A12(0h),*A13(70h),0
26f40: a3cf                      MOVE   A14,-*SP,1
26f50: 4da8                      MOVE   A13,A8
26f60: 0b08 0060                 ADDI   60h,A8
26f80: 930e                      MOVE   A8,*A14+,1
26f90: 0d5f 0650 0001            CALLA  10650h
26fc0: a3cf                      MOVE   A14,-*SP,1
26fd0: 1828                      MOVK   1h,A8
26fe0: 930e                      MOVE   A8,*A14+,1
26ff0: 0d5f 0000 0000            CALLA  0h
27020: af88 0058                 MOVB   *A12(58h),A8
27040: 38c8                      DSJS   A8,270B0h
27050: 09c8 0100                 MOVI   100h,A8
27070: 0550                      SETF   10h,0,0
27080: b10d 0040                 MOVE   A8,*A13(40h),0
270a0: c005                      JR     27100h
270b0: 09c8 0100                 MOVI   100h,A8
270d0: 0550                      SETF   10h,0,0
270e0: b10d 0040                 MOVE   A8,*A13(40h),0
27100: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27130: 4508                      SUB    A8,A8
27140: 0b2c 8ae0 0000            ADDI   8AE0h,A12
27170: 830c                      MOVE   A8,*A12,1
27180: 07ac 7b00 0003            MOVE   @37B00h,A12,1
271b0: b5a8 0040                 MOVE   *A13(40h),A8,0
271d0: 0b88 00ff ffff            ANDI   FF00h,A8
27200: 2b08                      SRA    8h,A8
27210: 0b2c 8b00 0000            ADDI   8B00h,A12
27240: 830c                      MOVE   A8,*A12,1
27250: a3cf                      MOVE   A14,-*SP,1
27260: 87ac                      MOVE   *A13,A12,1
27270: d38e 0088                 MOVE   *A12(88h),*A14+,1
27290: 0d5f c8a0 0002            CALLA  2C8A0h
272c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
272f0: 458c                      SUB    A12,A12
27300: 0b28 8040 0000            ADDI   8040h,A8
27330: 8388                      MOVE   A12,*A8,1
27340: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27370: 87ac                      MOVE   *A13,A12,1
27380: 0550                      SETF   10h,0,0
27390: b58c 0020                 MOVE   *A12(20h),A12,0
273b0: 0b8c ff00 ffff            ANDI   FFh,A12
273e0: 0b28 80e0 0000            ADDI   80E0h,A8
27410: 8388                      MOVE   A12,*A8,1
27420: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27450: 87a8                      MOVE   *A13,A8,1
27460: b508 0020                 MOVE   *A8(20h),A8,0
27480: 0b88 00ff ffff            ANDI   FF00h,A8
274b0: 2b08                      SRA    8h,A8
274c0: 0b2c 8100 0000            ADDI   8100h,A12
274f0: 830c                      MOVE   A8,*A12,1
27500: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27530: 4508                      SUB    A8,A8
27540: 0b2c 8060 0000            ADDI   8060h,A12
27570: 830c                      MOVE   A8,*A12,1
27580: 07ac 7b00 0003            MOVE   @37B00h,A12,1
275b0: 0b2c 8080 0000            ADDI   8080h,A12
275e0: 830c                      MOVE   A8,*A12,1
275f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27620: 87a8                      MOVE   *A13,A8,1
27630: 0b2c a880 0000            ADDI   A880h,A12
27660: 0562                      SETF   2h,1,0
27670: b90c 0060 0000            MOVE   *A8(60h),*A12(0h),0
276a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
276d0: 0b2c a882 0000            ADDI   A882h,A12
27700: 0561                      SETF   1h,1,0
27710: b90c 0058 0000            MOVE   *A8(58h),*A12(0h),0
27740: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27770: 0b2c a883 0000            ADDI   A883h,A12
277a0: 0562                      SETF   2h,1,0
277b0: b90c 0068 0000            MOVE   *A8(68h),*A12(0h),0
277e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27810: 4508                      SUB    A8,A8
27820: 0b2c a887 0000            ADDI   A887h,A12
27850: 0561                      SETF   1h,1,0
27860: 810c                      MOVE   A8,*A12,0
27870: 07ac 7b00 0003            MOVE   @37B00h,A12,1
278a0: 87a8                      MOVE   *A13,A8,1
278b0: 0b2c a8a0 0000            ADDI   A8A0h,A12
278e0: af08 0070                 MOVB   *A8(70h),A8
27900: 830c                      MOVE   A8,*A12,1
27910: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27940: 87a8                      MOVE   *A13,A8,1
27950: 0b2c a8c0 0000            ADDI   A8C0h,A12
27980: af08 0078                 MOVB   *A8(78h),A8
279a0: 830c                      MOVE   A8,*A12,1
279b0: 87ac                      MOVE   *A13,A12,1
279c0: af88 00a8                 MOVB   *A12(A8h),A8
279e0: cb5c                      JRNE   27FB0h
279f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27a20: 458c                      SUB    A12,A12
27a30: 0b28 a8e0 0000            ADDI   A8E0h,A8
27a60: 8388                      MOVE   A12,*A8,1
27a70: 1828                      MOVK   1h,A8
27a80: 0550                      SETF   10h,0,0
27a90: b10d 0080                 MOVE   A8,*A13(80h),0
27ab0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27ae0: b5a8 0080                 MOVE   *A13(80h),A8,0
27b00: 24a8                      SLL    5h,A8
27b10: 4188                      ADD    A12,A8
27b20: 182c                      MOVK   1h,A12
27b30: 0b28 a8e0 0000            ADDI   A8E0h,A8
27b60: 8388                      MOVE   A12,*A8,1
27b70: b5a8 0080                 MOVE   *A13(80h),A8,0
27b90: 1028                      INC    A8
27ba0: b10d 0080                 MOVE   A8,*A13(80h),0
27bc0: 1508                      SUBK   8h,A8
27bd0: c4ed                      JRLT   27AB0h
27be0: 1908                      MOVK   8h,A8
27bf0: b10d 0080                 MOVE   A8,*A13(80h),0
27c10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
27c40: b5a8 0080                 MOVE   *A13(80h),A8,0
27c60: 24a8                      SLL    5h,A8
27c70: 4188                      ADD    A12,A8
27c80: 09cc 00ff                 MOVI   FFh,A12
27ca0: 0b28 a8e0 0000            ADDI   A8E0h,A8
27cd0: 8388                      MOVE   A12,*A8,1
27ce0: b5a8 0080                 MOVE   *A13(80h),A8,0
27d00: 1028                      INC    A8
27d10: b10d 0080                 MOVE   A8,*A13(80h),0
27d30: 1608                      SUBK   10h,A8
27d40: c4ec                      JRLT   27C10h
27d50: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27d80: 458c                      SUB    A12,A12
27d90: 0b28 ad60 0000            ADDI   AD60h,A8
27dc0: 8388                      MOVE   A12,*A8,1
27dd0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27e00: 0b28 ad80 0000            ADDI   AD80h,A8
27e30: 8388                      MOVE   A12,*A8,1
27e40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27e70: 0b28 ad00 0000            ADDI   AD00h,A8
27ea0: 8388                      MOVE   A12,*A8,1
27eb0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27ee0: 0b28 ad20 0000            ADDI   AD20h,A8
27f10: 8388                      MOVE   A12,*A8,1
27f20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27f50: 0b28 ad40 0000            ADDI   AD40h,A8
27f80: 8388                      MOVE   A12,*A8,1
27f90: c000 0084                 JR     287F0h
27fb0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
27fe0: 182c                      MOVK   1h,A12
27ff0: 0b28 a8e0 0000            ADDI   A8E0h,A8
28020: 8388                      MOVE   A12,*A8,1
28030: 0550                      SETF   10h,0,0
28040: b18d 0080                 MOVE   A12,*A13(80h),0
28060: 07ac 7b00 0003            MOVE   @37B00h,A12,1
28090: b5a8 0080                 MOVE   *A13(80h),A8,0
280b0: 24a8                      SLL    5h,A8
280c0: 4188                      ADD    A12,A8
280d0: b5ac 0080                 MOVE   *A13(80h),A12,0
280f0: 4d8a                      MOVE   A12,A10
28100: 248a                      SLL    4h,A10
28110: 418a                      ADD    A12,A10
28120: 0b28 a8e0 0000            ADDI   A8E0h,A8
28150: 8348                      MOVE   A10,*A8,1
28160: 102c                      INC    A12
28170: b18d 0080                 MOVE   A12,*A13(80h),0
28190: 160c                      SUBK   10h,A12
281a0: c4eb                      JRLT   28060h
281b0: 87ac                      MOVE   *A13,A12,1
281c0: af8a 00a8                 MOVB   *A12(A8h),A10
281e0: 0d8a 0030                 DSJ    A10,28500h
28200: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28230: b588 0030                 MOVE   *A12(30h),A8,0
28250: 0b88 ff00 ffff            ANDI   FFh,A8
28280: 0b2a ad00 0000            ADDI   AD00h,A10
282b0: 830a                      MOVE   A8,*A10,1
282c0: 07aa 7b00 0003            MOVE   @37B00h,A10,1
282f0: b588 0030                 MOVE   *A12(30h),A8,0
28310: 0b88 00ff ffff            ANDI   FF00h,A8
28340: 2b08                      SRA    8h,A8
28350: 0b2a ad20 0000            ADDI   AD20h,A10
28380: 830a                      MOVE   A8,*A10,1
28390: 07aa 7b00 0003            MOVE   @37B00h,A10,1
283c0: 4508                      SUB    A8,A8
283d0: 0b2a ad60 0000            ADDI   AD60h,A10
28400: 830a                      MOVE   A8,*A10,1
28410: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28440: 0b2a ad80 0000            ADDI   AD80h,A10
28470: 830a                      MOVE   A8,*A10,1
28480: 07aa 7b00 0003            MOVE   @37B00h,A10,1
284b0: 0b2a ad40 0000            ADDI   AD40h,A10
284e0: 830a                      MOVE   A8,*A10,1
284f0: c02f                      JR     287F0h
28500: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28530: b588 0030                 MOVE   *A12(30h),A8,0
28550: 0b88 ff00 ffff            ANDI   FFh,A8
28580: 0b2a ad60 0000            ADDI   AD60h,A10
285b0: 830a                      MOVE   A8,*A10,1
285c0: 07aa 7b00 0003            MOVE   @37B00h,A10,1
285f0: b588 0030                 MOVE   *A12(30h),A8,0
28610: 0b88 00ff ffff            ANDI   FF00h,A8
28640: 2b08                      SRA    8h,A8
28650: 0b2a ad80 0000            ADDI   AD80h,A10
28680: 830a                      MOVE   A8,*A10,1
28690: 07aa 7b00 0003            MOVE   @37B00h,A10,1
286c0: 4508                      SUB    A8,A8
286d0: 0b2a ad00 0000            ADDI   AD00h,A10
28700: 830a                      MOVE   A8,*A10,1
28710: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28740: 0b2a ad20 0000            ADDI   AD20h,A10
28770: 830a                      MOVE   A8,*A10,1
28780: 07aa 7b00 0003            MOVE   @37B00h,A10,1
287b0: 0b2a ad40 0000            ADDI   AD40h,A10
287e0: 830a                      MOVE   A8,*A10,1
287f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
28820: 09ca 0022                 MOVI   22h,A10
28840: 0b2c 8000 0000            ADDI   8000h,A12
28870: 834c                      MOVE   A10,*A12,1
28880: 87ac                      MOVE   *A13,A12,1
28890: af88 00a8                 MOVB   *A12(A8h),A8
288b0: cb11                      JRNE   289D0h
288c0: a3cf                      MOVE   A14,-*SP,1
288d0: 0548                      SETF   8h,0,0
288e0: b588 0080                 MOVE   *A12(80h),A8,0
28900: 930e                      MOVE   A8,*A14+,1
28910: 0550                      SETF   10h,0,0
28920: b588 0020                 MOVE   *A12(20h),A8,0
28940: 930e                      MOVE   A8,*A14+,1
28950: 0548                      SETF   8h,0,0
28960: b588 0050                 MOVE   *A12(50h),A8,0
28980: 930e                      MOVE   A8,*A14+,1
28990: 0d5f b430 0002            CALLA  2B430h
289c0: c012                      JR     28AF0h
289d0: a3cf                      MOVE   A14,-*SP,1
289e0: 0548                      SETF   8h,0,0
289f0: b588 00a8                 MOVE   *A12(A8h),A8,0
28a10: 930e                      MOVE   A8,*A14+,1
28a20: 0550                      SETF   10h,0,0
28a30: b588 0040                 MOVE   *A12(40h),A8,0
28a50: 930e                      MOVE   A8,*A14+,1
28a60: b588 0030                 MOVE   *A12(30h),A8,0
28a80: 930e                      MOVE   A8,*A14+,1
28a90: b588 0020                 MOVE   *A12(20h),A8,0
28ab0: 930e                      MOVE   A8,*A14+,1
28ac0: 0d5f d490 0002            CALLA  2D490h
28af0: a3cf                      MOVE   A14,-*SP,1
28b00: 4508                      SUB    A8,A8
28b10: 930e                      MOVE   A8,*A14+,1
28b20: 0d5f 3400 0000            CALLA  3400h
28b50: 07a8 7b20 0003            MOVE   @37B20h,A8,1
28b80: cb26                      JRNE   28DF0h
28b90: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28bc0: 458c                      SUB    A12,A12
28bd0: 0b2a 8040 0000            ADDI   8040h,A10
28c00: 838a                      MOVE   A12,*A10,1
28c10: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28c40: 09cc ffff                 MOVI   FFFFh,A12
28c60: 0b2a a887 0000            ADDI   A887h,A10
28c90: 0561                      SETF   1h,1,0
28ca0: 818a                      MOVE   A12,*A10,0
28cb0: 07aa 7b00 0003            MOVE   @37B00h,A10,1
28ce0: 09cc 0022                 MOVI   22h,A12
28d00: 0b2a 8000 0000            ADDI   8000h,A10
28d30: 838a                      MOVE   A12,*A10,1
28d40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
28d70: 0b2c 8000 0000            ADDI   8000h,A12
28da0: 878c                      MOVE   *A12,A12,1
28db0: 0b8c ff00 ffff            ANDI   FFh,A12
28de0: cbf5                      JRNE   28D40h
28df0: 09cc 0300                 MOVI   300h,A12
28e10: 0550                      SETF   10h,0,0
28e20: b18d 0060                 MOVE   A12,*A13(60h),0
28e40: 09ca 0400                 MOVI   400h,A10
28e60: b14d 0070                 MOVE   A10,*A13(70h),0
28e80: a3cf                      MOVE   A14,-*SP,1
28e90: 4da8                      MOVE   A13,A8
28ea0: 0b08 0060                 ADDI   60h,A8
28ec0: 930e                      MOVE   A8,*A14+,1
28ed0: 0d5f 0650 0001            CALLA  10650h
28f00: 07a8 7b00 0003            MOVE   @37B00h,A8,1
28f30: 454a                      SUB    A10,A10
28f40: 0b28 8040 0000            ADDI   8040h,A8
28f70: 8348                      MOVE   A10,*A8,1
28f80: 07a8 7b00 0003            MOVE   @37B00h,A8,1
28fb0: 0b28 8860 0000            ADDI   8860h,A8
28fe0: 0550                      SETF   10h,0,0
28ff0: b5aa 0020                 MOVE   *A13(20h),A10,0
29010: 8348                      MOVE   A10,*A8,1
29020: 07a8 7b00 0003            MOVE   @37B00h,A8,1
29050: 0b28 8d00 0000            ADDI   8D00h,A8
29080: b5ac 0030                 MOVE   *A13(30h),A12,0
290a0: 8388                      MOVE   A12,*A8,1
290b0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
290e0: 19ca                      MOVK   Eh,A10
290f0: 0b28 8000 0000            ADDI   8000h,A8
29120: 8348                      MOVE   A10,*A8,1
29130: 07ac 7b00 0003            MOVE   @37B00h,A12,1
29160: 0b2c 8000 0000            ADDI   8000h,A12
29190: 878c                      MOVE   *A12,A12,1
291a0: 0b8c ff00 ffff            ANDI   FFh,A12
291d0: cbf5                      JRNE   29130h
291e0: 07ac 7b20 0003            MOVE   @37B20h,A12,1
29210: cb02                      JRNE   29240h
29220: 1828                      MOVK   1h,A8
29230: c001                      JR     29250h
29240: 4508                      SUB    A8,A8
29250: b7ee 0080                 MOVE   *SP(80h),A14,1
29270: 09af 3400                 MMFM   SP,A10,A12,A13
29290: 0962                      RETS   2h

_dsp_read_hrru_lut:
292a0: 098f 000c                 MMTM   SP,A12,A13
292c0: 4dcd                      MOVE   A14,A13
292d0: 0b0e 0080                 ADDI   80h,A14
292f0: bbad ffe0 0060            MOVE   *A13(FFE0h),*A13(60h),1
29320: b7a8 0060                 MOVE   *A13(60h),A8,1
29340: 0550                      SETF   10h,0,0
29350: b90d 0000 0010            MOVE   *A8(0h),*A13(10h),0
29380: 4508                      SUB    A8,A8
29390: 810d                      MOVE   A8,*A13,0
293a0: b7a8 0060                 MOVE   *A13(60h),A8,1
293c0: 0570                      SETF   10h,1,0
293d0: b508 0010                 MOVE   *A8(10h),A8,0
293f0: c628                      JRLE   29680h
29400: a3cf                      MOVE   A14,-*SP,1
29410: 4da8                      MOVE   A13,A8
29420: 1008                      ADDK   20h,A8
29430: 930e                      MOVE   A8,*A14+,1
29440: 4da8                      MOVE   A13,A8
29450: 1208                      ADDK   10h,A8
29460: 930e                      MOVE   A8,*A14+,1
29470: 0d5f 4480 0002            CALLA  24480h
294a0: b30d 0040                 MOVE   A8,*A13(40h),1
294c0: 0550                      SETF   10h,0,0
294d0: b5a8 0020                 MOVE   *A13(20h),A8,0
294f0: b7ac 0060                 MOVE   *A13(60h),A12,1
29510: b78c 0020                 MOVE   *A12(20h),A12,1
29530: 858c                      MOVE   *A12,A12,0
29540: 4988                      CMP    A12,A8
29550: ca02                      JREQ   29580h
29560: 1828                      MOVK   1h,A8
29570: c011                      JR     29690h
29580: b7ac 0060                 MOVE   *A13(60h),A12,1
295a0: 100c                      ADDK   20h,A12
295b0: 8788                      MOVE   *A12,A8,1
295c0: 1208                      ADDK   10h,A8
295d0: 830c                      MOVE   A8,*A12,1
295e0: 85ac                      MOVE   *A13,A12,0
295f0: 102c                      INC    A12
29600: 818d                      MOVE   A12,*A13,0
29610: b7a8 0060                 MOVE   *A13(60h),A8,1
29630: 0570                      SETF   10h,1,0
29640: b508 0010                 MOVE   *A8(10h),A8,0
29660: 490c                      CMP    A8,A12
29670: c4d8                      JRLT   29400h
29680: 4508                      SUB    A8,A8
29690: b7ee 0060                 MOVE   *SP(60h),A14,1
296b0: 09af 3000                 MMFM   SP,A12,A13
296d0: 0962                      RETS   2h

_dsp_control_xray:
296e0: 098f 000c                 MMTM   SP,A12,A13
29700: 4dcd                      MOVE   A14,A13
29710: 100e                      ADDK   20h,A14
29720: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
29750: 87a8                      MOVE   *A13,A8,1
29760: 0548                      SETF   8h,0,0
29770: 8508                      MOVE   *A8,A8,0
29780: 1488                      SUBK   4h,A8
29790: cb06                      JRNE   29800h
297a0: 1828                      MOVK   1h,A8
297b0: 0550                      SETF   10h,0,0
297c0: 0588 7920 0003            MOVE   A8,@37920h,0
297f0: c005                      JR     29850h
29800: 4508                      SUB    A8,A8
29810: 0550                      SETF   10h,0,0
29820: 0588 7920 0003            MOVE   A8,@37920h,0
29850: 07a8 7b00 0003            MOVE   @37B00h,A8,1
29880: 458c                      SUB    A12,A12
29890: 0b28 8040 0000            ADDI   8040h,A8
298c0: 8388                      MOVE   A12,*A8,1
298d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
29900: 87ac                      MOVE   *A13,A12,1
29910: 0b28 8a00 0000            ADDI   8A00h,A8
29940: 0548                      SETF   8h,0,0
29950: 858c                      MOVE   *A12,A12,0
29960: 8388                      MOVE   A12,*A8,1
29970: 07ac 7b00 0003            MOVE   @37B00h,A12,1
299a0: 87a8                      MOVE   *A13,A8,1
299b0: 0b2c 8a20 0000            ADDI   8A20h,A12
299e0: b508 0008                 MOVE   *A8(8h),A8,0
29a00: 830c                      MOVE   A8,*A12,1
29a10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
29a40: 87a8                      MOVE   *A13,A8,1
29a50: 0b2c 8a80 0000            ADDI   8A80h,A12
29a80: b508 0010                 MOVE   *A8(10h),A8,0
29aa0: 830c                      MOVE   A8,*A12,1
29ab0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
29ae0: 87a8                      MOVE   *A13,A8,1
29af0: 0550                      SETF   10h,0,0
29b00: b508 0018                 MOVE   *A8(18h),A8,0
29b20: 0b88 ff00 ffff            ANDI   FFh,A8
29b50: 0b2c 8aa0 0000            ADDI   8AA0h,A12
29b80: 830c                      MOVE   A8,*A12,1
29b90: 07ac 7b00 0003            MOVE   @37B00h,A12,1
29bc0: 87a8                      MOVE   *A13,A8,1
29bd0: b508 0018                 MOVE   *A8(18h),A8,0
29bf0: 0b88 00ff ffff            ANDI   FF00h,A8
29c20: 2b08                      SRA    8h,A8
29c30: 0b2c 8ac0 0000            ADDI   8AC0h,A12
29c60: 830c                      MOVE   A8,*A12,1
29c70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
29ca0: 09c8 0024                 MOVI   24h,A8
29cc0: 0b2c 8000 0000            ADDI   8000h,A12
29cf0: 830c                      MOVE   A8,*A12,1
29d00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
29d30: 0b2c 8000 0000            ADDI   8000h,A12
29d60: 878c                      MOVE   *A12,A12,1
29d70: 0b8c ff00 ffff            ANDI   FFh,A12
29da0: cbf5                      JRNE   29D00h
29db0: 4508                      SUB    A8,A8
29dc0: b7ee 0060                 MOVE   *SP(60h),A14,1
29de0: 09af 3000                 MMFM   SP,A12,A13
29e00: 0962                      RETS   2h

_dsp_get_xray_buffer:
29e10: 098f 827c                 MMTM   SP,A0,A6,A9-A13
29e30: 4dcd                      MOVE   A14,A13
29e40: 100e                      ADDK   20h,A14
29e50: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
29e80: 87a0                      MOVE   *A13,A0,1
29e90: 8600                      MOVE   *A0,A0,1
29ea0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
29ed0: 44c6                      SUB    A6,A6
29ee0: 0b28 8040 0000            ADDI   8040h,A8
29f10: 82c8                      MOVE   A6,*A8,1
29f20: 87a8                      MOVE   *A13,A8,1
29f30: 0570                      SETF   10h,1,0
29f40: b506 0020                 MOVE   *A8(20h),A6,0
29f60: ca12                      JREQ   2A090h
29f70: 07a6 7b00 0003            MOVE   @37B00h,A6,1
29fa0: 4508                      SUB    A8,A8
29fb0: 0b26 80a0 0000            ADDI   80A0h,A6
29fe0: 8306                      MOVE   A8,*A6,1
29ff0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a020: 09c8 0038                 MOVI   38h,A8
2a040: 0b26 80c0 0000            ADDI   80C0h,A6
2a070: 8306                      MOVE   A8,*A6,1
2a080: c011                      JR     2A1A0h
2a090: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a0c0: 4508                      SUB    A8,A8
2a0d0: 0b26 80a0 0000            ADDI   80A0h,A6
2a100: 8306                      MOVE   A8,*A6,1
2a110: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a140: 09c8 0034                 MOVI   34h,A8
2a160: 0b26 80c0 0000            ADDI   80C0h,A6
2a190: 8306                      MOVE   A8,*A6,1
2a1a0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a1d0: 4508                      SUB    A8,A8
2a1e0: 0b26 80e0 0000            ADDI   80E0h,A6
2a210: 8306                      MOVE   A8,*A6,1
2a220: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a250: 1888                      MOVK   4h,A8
2a260: 0b26 8100 0000            ADDI   8100h,A6
2a290: 8306                      MOVE   A8,*A6,1
2a2a0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a2d0: 1828                      MOVK   1h,A8
2a2e0: 0b26 8060 0000            ADDI   8060h,A6
2a310: 8306                      MOVE   A8,*A6,1
2a320: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a350: 0b26 8080 0000            ADDI   8080h,A6
2a380: 8306                      MOVE   A8,*A6,1
2a390: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a3c0: 19e8                      MOVK   Fh,A8
2a3d0: 0b26 8000 0000            ADDI   8000h,A6
2a400: 8306                      MOVE   A8,*A6,1
2a410: 454a                      SUB    A10,A10
2a420: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a450: 0b26 8060 0000            ADDI   8060h,A6
2a480: 86c6                      MOVE   *A6,A6,1
2a490: 0b86 ff00 ffff            ANDI   FFh,A6
2a4c0: cbf5                      JRNE   2A420h
2a4d0: 456b                      SUB    A11,A11
2a4e0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a510: 4d69                      MOVE   A11,A9
2a520: 1049                      ADDK   2h,A9
2a530: 24a9                      SLL    5h,A9
2a540: 40c9                      ADD    A6,A9
2a550: 8729                      MOVE   *A9,A9,1
2a560: 0b89 ff00 ffff            ANDI   FFh,A9
2a590: 19e8                      MOVK   Fh,A8
2a5a0: 5128                      AND    A9,A8
2a5b0: 8606                      MOVE   *A0,A6,1
2a5c0: 4106                      ADD    A8,A6
2a5d0: 82c0                      MOVE   A6,*A0,1
2a5e0: 1000                      ADDK   20h,A0
2a5f0: 4d26                      MOVE   A9,A6
2a600: 2f86                      SRL    4h,A6
2a610: 8608                      MOVE   *A0,A8,1
2a620: 40c8                      ADD    A6,A8
2a630: 8300                      MOVE   A8,*A0,1
2a640: 1000                      ADDK   20h,A0
2a650: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a680: 4d69                      MOVE   A11,A9
2a690: 1029                      INC    A9
2a6a0: 24a9                      SLL    5h,A9
2a6b0: 40c9                      ADD    A6,A9
2a6c0: 8729                      MOVE   *A9,A9,1
2a6d0: 0b89 ff00 ffff            ANDI   FFh,A9
2a700: 19e8                      MOVK   Fh,A8
2a710: 5128                      AND    A9,A8
2a720: 8606                      MOVE   *A0,A6,1
2a730: 4106                      ADD    A8,A6
2a740: 82c0                      MOVE   A6,*A0,1
2a750: 1000                      ADDK   20h,A0
2a760: 4d26                      MOVE   A9,A6
2a770: 2f86                      SRL    4h,A6
2a780: 8608                      MOVE   *A0,A8,1
2a790: 40c8                      ADD    A6,A8
2a7a0: 8300                      MOVE   A8,*A0,1
2a7b0: 1000                      ADDK   20h,A0
2a7c0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a7f0: 4d69                      MOVE   A11,A9
2a800: 10c9                      ADDK   6h,A9
2a810: 24a9                      SLL    5h,A9
2a820: 40c9                      ADD    A6,A9
2a830: 8729                      MOVE   *A9,A9,1
2a840: 0b89 ff00 ffff            ANDI   FFh,A9
2a870: 19e8                      MOVK   Fh,A8
2a880: 5128                      AND    A9,A8
2a890: 8606                      MOVE   *A0,A6,1
2a8a0: 4106                      ADD    A8,A6
2a8b0: 82c0                      MOVE   A6,*A0,1
2a8c0: 1000                      ADDK   20h,A0
2a8d0: 4d26                      MOVE   A9,A6
2a8e0: 2f86                      SRL    4h,A6
2a8f0: 8608                      MOVE   *A0,A8,1
2a900: 40c8                      ADD    A6,A8
2a910: 8300                      MOVE   A8,*A0,1
2a920: 1000                      ADDK   20h,A0
2a930: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2a960: 4d69                      MOVE   A11,A9
2a970: 10a9                      ADDK   5h,A9
2a980: 24a9                      SLL    5h,A9
2a990: 40c9                      ADD    A6,A9
2a9a0: 8729                      MOVE   *A9,A9,1
2a9b0: 0b89 ff00 ffff            ANDI   FFh,A9
2a9e0: 19e8                      MOVK   Fh,A8
2a9f0: 5128                      AND    A9,A8
2aa00: 8606                      MOVE   *A0,A6,1
2aa10: 4106                      ADD    A8,A6
2aa20: 82c0                      MOVE   A6,*A0,1
2aa30: 1000                      ADDK   20h,A0
2aa40: 4d26                      MOVE   A9,A6
2aa50: 2f86                      SRL    4h,A6
2aa60: 8608                      MOVE   *A0,A8,1
2aa70: 40c8                      ADD    A6,A8
2aa80: 8300                      MOVE   A8,*A0,1
2aa90: 1000                      ADDK   20h,A0
2aaa0: 110b                      ADDK   8h,A11
2aab0: 0b4b fdff                 CMPI   200h,A11
2aad0: c4a0                      JRLT   2A4E0h
2aae0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2ab10: 1828                      MOVK   1h,A8
2ab20: 0b26 8060 0000            ADDI   8060h,A6
2ab50: 8306                      MOVE   A8,*A6,1
2ab60: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2ab90: 0b26 8080 0000            ADDI   8080h,A6
2abc0: 86c6                      MOVE   *A6,A6,1
2abd0: 0b86 ff00 ffff            ANDI   FFh,A6
2ac00: cbf5                      JRNE   2AB60h
2ac10: 456b                      SUB    A11,A11
2ac20: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2ac50: 4d69                      MOVE   A11,A9
2ac60: 1049                      ADDK   2h,A9
2ac70: 24a9                      SLL    5h,A9
2ac80: 40c9                      ADD    A6,A9
2ac90: b729 4000                 MOVE   *A9(4000h),A9,1
2acb0: 0b89 ff00 ffff            ANDI   FFh,A9
2ace0: 19e8                      MOVK   Fh,A8
2acf0: 5128                      AND    A9,A8
2ad00: 8606                      MOVE   *A0,A6,1
2ad10: 4106                      ADD    A8,A6
2ad20: 82c0                      MOVE   A6,*A0,1
2ad30: 1000                      ADDK   20h,A0
2ad40: 4d26                      MOVE   A9,A6
2ad50: 2f86                      SRL    4h,A6
2ad60: 8608                      MOVE   *A0,A8,1
2ad70: 40c8                      ADD    A6,A8
2ad80: 8300                      MOVE   A8,*A0,1
2ad90: 1000                      ADDK   20h,A0
2ada0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2add0: 4d69                      MOVE   A11,A9
2ade0: 1029                      INC    A9
2adf0: 24a9                      SLL    5h,A9
2ae00: 40c9                      ADD    A6,A9
2ae10: b729 4000                 MOVE   *A9(4000h),A9,1
2ae30: 0b89 ff00 ffff            ANDI   FFh,A9
2ae60: 19e8                      MOVK   Fh,A8
2ae70: 5128                      AND    A9,A8
2ae80: 8606                      MOVE   *A0,A6,1
2ae90: 4106                      ADD    A8,A6
2aea0: 82c0                      MOVE   A6,*A0,1
2aeb0: 1000                      ADDK   20h,A0
2aec0: 4d26                      MOVE   A9,A6
2aed0: 2f86                      SRL    4h,A6
2aee0: 8608                      MOVE   *A0,A8,1
2aef0: 40c8                      ADD    A6,A8
2af00: 8300                      MOVE   A8,*A0,1
2af10: 1000                      ADDK   20h,A0
2af20: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2af50: 4d69                      MOVE   A11,A9
2af60: 10c9                      ADDK   6h,A9
2af70: 24a9                      SLL    5h,A9
2af80: 40c9                      ADD    A6,A9
2af90: b729 4000                 MOVE   *A9(4000h),A9,1
2afb0: 0b89 ff00 ffff            ANDI   FFh,A9
2afe0: 19e8                      MOVK   Fh,A8
2aff0: 5128                      AND    A9,A8
2b000: 8606                      MOVE   *A0,A6,1
2b010: 4106                      ADD    A8,A6
2b020: 82c0                      MOVE   A6,*A0,1
2b030: 1000                      ADDK   20h,A0
2b040: 4d26                      MOVE   A9,A6
2b050: 2f86                      SRL    4h,A6
2b060: 8608                      MOVE   *A0,A8,1
2b070: 40c8                      ADD    A6,A8
2b080: 8300                      MOVE   A8,*A0,1
2b090: 1000                      ADDK   20h,A0
2b0a0: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2b0d0: 4d69                      MOVE   A11,A9
2b0e0: 10a9                      ADDK   5h,A9
2b0f0: 24a9                      SLL    5h,A9
2b100: 40c9                      ADD    A6,A9
2b110: b729 4000                 MOVE   *A9(4000h),A9,1
2b130: 0b89 ff00 ffff            ANDI   FFh,A9
2b160: 19e8                      MOVK   Fh,A8
2b170: 5128                      AND    A9,A8
2b180: 8606                      MOVE   *A0,A6,1
2b190: 4106                      ADD    A8,A6
2b1a0: 82c0                      MOVE   A6,*A0,1
2b1b0: 1000                      ADDK   20h,A0
2b1c0: 4d26                      MOVE   A9,A6
2b1d0: 2f86                      SRL    4h,A6
2b1e0: 8608                      MOVE   *A0,A8,1
2b1f0: 40c8                      ADD    A6,A8
2b200: 8300                      MOVE   A8,*A0,1
2b210: 1000                      ADDK   20h,A0
2b220: 110b                      ADDK   8h,A11
2b230: 0b4b fdff                 CMPI   200h,A11
2b250: c49c                      JRLT   2AC20h
2b260: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2b290: 1828                      MOVK   1h,A8
2b2a0: 0b26 8080 0000            ADDI   8080h,A6
2b2d0: 8306                      MOVE   A8,*A6,1
2b2e0: 102a                      INC    A10
2b2f0: 348a                      CMPK   4h,A10
2b300: c400 ff10                 JRLT   2A420h
2b320: 07a6 7b00 0003            MOVE   @37B00h,A6,1
2b350: 0b26 8000 0000            ADDI   8000h,A6
2b380: 86c6                      MOVE   *A6,A6,1
2b390: 0b86 ff00 ffff            ANDI   FFh,A6
2b3c0: cbf5                      JRNE   2B320h
2b3d0: 4508                      SUB    A8,A8
2b3e0: b7ee 0100                 MOVE   *SP(100h),A14,1
2b400: 09af 3e41                 MMFM   SP,A0,A6,A9-A13
2b420: 0962                      RETS   2h

_transfer_overlay:
2b430: 098f 001c                 MMTM   SP,A11-A13
2b450: 4dcd                      MOVE   A14,A13
2b460: 0b0e 0060                 ADDI   60h,A14
2b480: 0550                      SETF   10h,0,0
2b490: b9ad ffc0 0030            MOVE   *A13(FFC0h),*A13(30h),0
2b4c0: 0548                      SETF   8h,0,0
2b4d0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2b4f0: 38a8                      DSJS   A8,2B550h
2b500: 09e8 0000 1000            MOVI   10000000h,A8
2b530: 830d                      MOVE   A8,*A13,1
2b540: c01f                      JR     2B740h
2b550: 4508                      SUB    A8,A8
2b560: 0550                      SETF   10h,0,0
2b570: b10d 0020                 MOVE   A8,*A13(20h),0
2b590: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2b5c0: b5ac 0020                 MOVE   *A13(20h),A12,0
2b5e0: 24ac                      SLL    5h,A12
2b5f0: 410c                      ADD    A8,A12
2b600: 4508                      SUB    A8,A8
2b610: 830c                      MOVE   A8,*A12,1
2b620: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2b650: b5a8 0020                 MOVE   *A13(20h),A8,0
2b670: 24a8                      SLL    5h,A8
2b680: 4188                      ADD    A12,A8
2b690: 458c                      SUB    A12,A12
2b6a0: b388 4000                 MOVE   A12,*A8(4000h),1
2b6c0: b5a8 0020                 MOVE   *A13(20h),A8,0
2b6e0: 1028                      INC    A8
2b6f0: b10d 0020                 MOVE   A8,*A13(20h),0
2b710: 0b48 fdff                 CMPI   200h,A8
2b730: c4e5                      JRLT   2B590h
2b740: 0550                      SETF   10h,0,0
2b750: b5ac 0030                 MOVE   *A13(30h),A12,0
2b770: ca00 010c                 JREQ   2C850h
2b790: 07a8 7b20 0003            MOVE   @37B20h,A8,1
2b7c0: ca00 0107                 JREQ   2C850h
2b7e0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2b810: 0b2c 8000 0000            ADDI   8000h,A12
2b840: 878c                      MOVE   *A12,A12,1
2b850: 0b8c ff00 ffff            ANDI   FFh,A12
2b880: ca00 00fb                 JREQ   2C850h
2b8a0: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
2b8c0: b5a8 0030                 MOVE   *A13(30h),A8,0
2b8e0: 450c                      SUB    A8,A12
2b8f0: 09cb 0064                 MOVI   64h,A11
2b910: 5d8b                      MPYS   A12,A11
2b920: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
2b940: 598b                      DIVS   A12,A11
2b950: 058b 8400 0003            MOVE   A11,@38400h,0
2b980: 07ab 7b00 0003            MOVE   @37B00h,A11,1
2b9b0: 0b2b 8060 0000            ADDI   8060h,A11
2b9e0: 876b                      MOVE   *A11,A11,1
2b9f0: 0b8b ff00 ffff            ANDI   FFh,A11
2ba20: cb5d                      JRNE   2C000h
2ba30: 4d0b                      MOVE   A8,A11
2ba40: ca5b                      JREQ   2C000h
2ba50: 0548                      SETF   8h,0,0
2ba60: b5ab ffe0                 MOVE   *A13(FFE0h),A11,0
2ba80: ca49                      JREQ   2BF20h
2ba90: b5ab ffa0                 MOVE   *A13(FFA0h),A11,0
2bab0: ca2d                      JREQ   2BD90h
2bac0: 456b                      SUB    A11,A11
2bad0: 0550                      SETF   10h,0,0
2bae0: b16d 0020                 MOVE   A11,*A13(20h),0
2bb00: 87ac                      MOVE   *A13,A12,1
2bb10: 0548                      SETF   8h,0,0
2bb20: 8588                      MOVE   *A12,A8,0
2bb30: 19eb                      MOVK   Fh,A11
2bb40: 5168                      AND    A11,A8
2bb50: ad0d 0040                 MOVB   A8,*A13(40h)
2bb70: 110c                      ADDK   8h,A12
2bb80: 838d                      MOVE   A12,*A13,1
2bb90: 8588                      MOVE   *A12,A8,0
2bba0: 5168                      AND    A11,A8
2bbb0: 2488                      SLL    4h,A8
2bbc0: b5ab 0040                 MOVE   *A13(40h),A11,0
2bbe0: 4168                      ADD    A11,A8
2bbf0: ad0d 0040                 MOVB   A8,*A13(40h)
2bc10: 110c                      ADDK   8h,A12
2bc20: 838d                      MOVE   A12,*A13,1
2bc30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2bc60: 0550                      SETF   10h,0,0
2bc70: b5ab 0020                 MOVE   *A13(20h),A11,0
2bc90: 24ab                      SLL    5h,A11
2bca0: 410b                      ADD    A8,A11
2bcb0: 0548                      SETF   8h,0,0
2bcc0: b5ac 0040                 MOVE   *A13(40h),A12,0
2bce0: 838b                      MOVE   A12,*A11,1
2bcf0: 0550                      SETF   10h,0,0
2bd00: b5ab 0020                 MOVE   *A13(20h),A11,0
2bd20: 102b                      INC    A11
2bd30: b16d 0020                 MOVE   A11,*A13(20h),0
2bd50: 0b4b fdff                 CMPI   200h,A11
2bd70: c4d8                      JRLT   2BB00h
2bd80: c019                      JR     2BF20h
2bd90: 456b                      SUB    A11,A11
2bda0: 0550                      SETF   10h,0,0
2bdb0: b16d 0020                 MOVE   A11,*A13(20h),0
2bdd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2be00: b5a8 0020                 MOVE   *A13(20h),A8,0
2be20: 24a8                      SLL    5h,A8
2be30: 4188                      ADD    A12,A8
2be40: 87ab                      MOVE   *A13,A11,1
2be50: 0548                      SETF   8h,0,0
2be60: 956c                      MOVE   *A11+,A12,0
2be70: 836d                      MOVE   A11,*A13,1
2be80: 8388                      MOVE   A12,*A8,1
2be90: 0550                      SETF   10h,0,0
2bea0: b5ac 0020                 MOVE   *A13(20h),A12,0
2bec0: 102c                      INC    A12
2bed0: b18d 0020                 MOVE   A12,*A13(20h),0
2bef0: 0b4c fdff                 CMPI   200h,A12
2bf10: c4eb                      JRLT   2BDD0h
2bf20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2bf50: 1828                      MOVK   1h,A8
2bf60: 0b2c 8060 0000            ADDI   8060h,A12
2bf90: 830c                      MOVE   A8,*A12,1
2bfa0: 0550                      SETF   10h,0,0
2bfb0: b5ac 0030                 MOVE   *A13(30h),A12,0
2bfd0: 142c                      DEC    A12
2bfe0: b18d 0030                 MOVE   A12,*A13(30h),0
2c000: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2c030: 0b2c 8080 0000            ADDI   8080h,A12
2c060: 878c                      MOVE   *A12,A12,1
2c070: 0b8c ff00 ffff            ANDI   FFh,A12
2c0a0: cb60                      JRNE   2C6B0h
2c0b0: b5ac 0030                 MOVE   *A13(30h),A12,0
2c0d0: ca5d                      JREQ   2C6B0h
2c0e0: 0548                      SETF   8h,0,0
2c0f0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2c110: ca4b                      JREQ   2C5D0h
2c120: b5ab ffa0                 MOVE   *A13(FFA0h),A11,0
2c140: ca2e                      JREQ   2C430h
2c150: 456b                      SUB    A11,A11
2c160: 0550                      SETF   10h,0,0
2c170: b16d 0020                 MOVE   A11,*A13(20h),0
2c190: 87ac                      MOVE   *A13,A12,1
2c1a0: 0548                      SETF   8h,0,0
2c1b0: 8588                      MOVE   *A12,A8,0
2c1c0: 19eb                      MOVK   Fh,A11
2c1d0: 5168                      AND    A11,A8
2c1e0: ad0d 0040                 MOVB   A8,*A13(40h)
2c200: 110c                      ADDK   8h,A12
2c210: 838d                      MOVE   A12,*A13,1
2c220: 8588                      MOVE   *A12,A8,0
2c230: 5168                      AND    A11,A8
2c240: 2488                      SLL    4h,A8
2c250: b5ab 0040                 MOVE   *A13(40h),A11,0
2c270: 4168                      ADD    A11,A8
2c280: ad0d 0040                 MOVB   A8,*A13(40h)
2c2a0: 110c                      ADDK   8h,A12
2c2b0: 838d                      MOVE   A12,*A13,1
2c2c0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2c2f0: 0550                      SETF   10h,0,0
2c300: b5ab 0020                 MOVE   *A13(20h),A11,0
2c320: 24ab                      SLL    5h,A11
2c330: 410b                      ADD    A8,A11
2c340: 0548                      SETF   8h,0,0
2c350: b5ac 0040                 MOVE   *A13(40h),A12,0
2c370: b38b 4000                 MOVE   A12,*A11(4000h),1
2c390: 0550                      SETF   10h,0,0
2c3a0: b5ab 0020                 MOVE   *A13(20h),A11,0
2c3c0: 102b                      INC    A11
2c3d0: b16d 0020                 MOVE   A11,*A13(20h),0
2c3f0: 0b4b fdff                 CMPI   200h,A11
2c410: c4d7                      JRLT   2C190h
2c420: c01a                      JR     2C5D0h
2c430: 456b                      SUB    A11,A11
2c440: 0550                      SETF   10h,0,0
2c450: b16d 0020                 MOVE   A11,*A13(20h),0
2c470: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2c4a0: b5a8 0020                 MOVE   *A13(20h),A8,0
2c4c0: 24a8                      SLL    5h,A8
2c4d0: 4188                      ADD    A12,A8
2c4e0: 87ab                      MOVE   *A13,A11,1
2c4f0: 0548                      SETF   8h,0,0
2c500: 956c                      MOVE   *A11+,A12,0
2c510: 836d                      MOVE   A11,*A13,1
2c520: b388 4000                 MOVE   A12,*A8(4000h),1
2c540: 0550                      SETF   10h,0,0
2c550: b5ac 0020                 MOVE   *A13(20h),A12,0
2c570: 102c                      INC    A12
2c580: b18d 0020                 MOVE   A12,*A13(20h),0
2c5a0: 0b4c fdff                 CMPI   200h,A12
2c5c0: c4ea                      JRLT   2C470h
2c5d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2c600: 1828                      MOVK   1h,A8
2c610: 0b2c 8080 0000            ADDI   8080h,A12
2c640: 830c                      MOVE   A8,*A12,1
2c650: 0550                      SETF   10h,0,0
2c660: b5ac 0030                 MOVE   *A13(30h),A12,0
2c680: 142c                      DEC    A12
2c690: b18d 0030                 MOVE   A12,*A13(30h),0
2c6b0: a3cf                      MOVE   A14,-*SP,1
2c6c0: 182c                      MOVK   1h,A12
2c6d0: 938e                      MOVE   A12,*A14+,1
2c6e0: 0d5f 0000 0000            CALLA  0h
2c710: 0550                      SETF   10h,0,0
2c720: b5a8 0030                 MOVE   *A13(30h),A8,0
2c740: ca10                      JREQ   2C850h
2c750: 07ab 7b20 0003            MOVE   @37B20h,A11,1
2c780: ca0c                      JREQ   2C850h
2c790: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2c7c0: 0b2c 8000 0000            ADDI   8000h,A12
2c7f0: 878c                      MOVE   *A12,A12,1
2c800: 0b8c ff00 ffff            ANDI   FFh,A12
2c830: cb00 ff05                 JRNE   2B8A0h
2c850: b7ee 0080                 MOVE   *SP(80h),A14,1
2c870: 09af 3800                 MMFM   SP,A11-A13
2c890: 0962                      RETS   2h

_load_image_lut:
2c8a0: 098f 002c                 MMTM   SP,A10,A12,A13
2c8c0: 4dcd                      MOVE   A14,A13
2c8d0: 100e                      ADDK   20h,A14
2c8e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2c910: 458c                      SUB    A12,A12
2c920: 0b28 8040 0000            ADDI   8040h,A8
2c950: 8388                      MOVE   A12,*A8,1
2c960: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2c990: 0b28 80a0 0000            ADDI   80A0h,A8
2c9c0: 8388                      MOVE   A12,*A8,1
2c9d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ca00: 09cc 003c                 MOVI   3Ch,A12
2ca20: 0b28 80c0 0000            ADDI   80C0h,A8
2ca50: 8388                      MOVE   A12,*A8,1
2ca60: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ca90: 458c                      SUB    A12,A12
2caa0: 0b28 80e0 0000            ADDI   80E0h,A8
2cad0: 8388                      MOVE   A12,*A8,1
2cae0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2cb10: 182c                      MOVK   1h,A12
2cb20: 0b28 8100 0000            ADDI   8100h,A8
2cb50: 8388                      MOVE   A12,*A8,1
2cb60: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2cb90: 458c                      SUB    A12,A12
2cba0: 0b28 8060 0000            ADDI   8060h,A8
2cbd0: 8388                      MOVE   A12,*A8,1
2cbe0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2cc10: 0b28 8080 0000            ADDI   8080h,A8
2cc40: 8388                      MOVE   A12,*A8,1
2cc50: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2cc80: 182c                      MOVK   1h,A12
2cc90: 0b28 8000 0000            ADDI   8000h,A8
2ccc0: 8388                      MOVE   A12,*A8,1
2ccd0: 4508                      SUB    A8,A8
2cce0: 0550                      SETF   10h,0,0
2ccf0: 810d                      MOVE   A8,*A13,0
2cd00: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2cd30: 85a8                      MOVE   *A13,A8,0
2cd40: 24a8                      SLL    5h,A8
2cd50: 4188                      ADD    A12,A8
2cd60: 458c                      SUB    A12,A12
2cd70: 8388                      MOVE   A12,*A8,1
2cd80: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2cdb0: 85ac                      MOVE   *A13,A12,0
2cdc0: 102c                      INC    A12
2cdd0: 24ac                      SLL    5h,A12
2cde0: 410c                      ADD    A8,A12
2cdf0: 4508                      SUB    A8,A8
2ce00: 830c                      MOVE   A8,*A12,1
2ce10: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2ce40: 85a8                      MOVE   *A13,A8,0
2ce50: 1048                      ADDK   2h,A8
2ce60: 24a8                      SLL    5h,A8
2ce70: 4188                      ADD    A12,A8
2ce80: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
2cea0: 0548                      SETF   8h,0,0
2ceb0: 958a                      MOVE   *A12+,A10,0
2cec0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
2cee0: 8348                      MOVE   A10,*A8,1
2cef0: 07aa 7b00 0003            MOVE   @37B00h,A10,1
2cf20: 0550                      SETF   10h,0,0
2cf30: 85a8                      MOVE   *A13,A8,0
2cf40: 1068                      ADDK   3h,A8
2cf50: 24a8                      SLL    5h,A8
2cf60: 4148                      ADD    A10,A8
2cf70: 458c                      SUB    A12,A12
2cf80: 8388                      MOVE   A12,*A8,1
2cf90: 85a8                      MOVE   *A13,A8,0
2cfa0: 1088                      ADDK   4h,A8
2cfb0: 810d                      MOVE   A8,*A13,0
2cfc0: 85a8                      MOVE   *A13,A8,0
2cfd0: 0b48 fdff                 CMPI   200h,A8
2cff0: c4d0                      JRLT   2CD00h
2d000: 182c                      MOVK   1h,A12
2d010: 0b2a 8060 0000            ADDI   8060h,A10
2d040: 838a                      MOVE   A12,*A10,1
2d050: 454a                      SUB    A10,A10
2d060: 814d                      MOVE   A10,*A13,0
2d070: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2d0a0: 85aa                      MOVE   *A13,A10,0
2d0b0: 24aa                      SLL    5h,A10
2d0c0: 418a                      ADD    A12,A10
2d0d0: 4508                      SUB    A8,A8
2d0e0: b30a 4000                 MOVE   A8,*A10(4000h),1
2d100: 85aa                      MOVE   *A13,A10,0
2d110: 102a                      INC    A10
2d120: 24aa                      SLL    5h,A10
2d130: 418a                      ADD    A12,A10
2d140: b30a 4000                 MOVE   A8,*A10(4000h),1
2d160: 85aa                      MOVE   *A13,A10,0
2d170: 104a                      ADDK   2h,A10
2d180: 24aa                      SLL    5h,A10
2d190: 418a                      ADD    A12,A10
2d1a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
2d1c0: 0548                      SETF   8h,0,0
2d1d0: 950c                      MOVE   *A8+,A12,0
2d1e0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
2d200: b38a 4000                 MOVE   A12,*A10(4000h),1
2d220: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2d250: 0550                      SETF   10h,0,0
2d260: 85aa                      MOVE   *A13,A10,0
2d270: 106a                      ADDK   3h,A10
2d280: 24aa                      SLL    5h,A10
2d290: 418a                      ADD    A12,A10
2d2a0: 4508                      SUB    A8,A8
2d2b0: b30a 4000                 MOVE   A8,*A10(4000h),1
2d2d0: 85aa                      MOVE   *A13,A10,0
2d2e0: 108a                      ADDK   4h,A10
2d2f0: 814d                      MOVE   A10,*A13,0
2d300: 85aa                      MOVE   *A13,A10,0
2d310: 0b4a fdff                 CMPI   200h,A10
2d330: c4d3                      JRLT   2D070h
2d340: 1828                      MOVK   1h,A8
2d350: 0b2c 8080 0000            ADDI   8080h,A12
2d380: 830c                      MOVE   A8,*A12,1
2d390: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2d3c0: 0b2c 8000 0000            ADDI   8000h,A12
2d3f0: 878c                      MOVE   *A12,A12,1
2d400: 0b8c ff00 ffff            ANDI   FFh,A12
2d430: cbf5                      JRNE   2D390h
2d440: b7ee 0080                 MOVE   *SP(80h),A14,1
2d460: 09af 3400                 MMFM   SP,A10,A12,A13
2d480: 0962                      RETS   2h

_test_overlay:
2d490: 098f 003c                 MMTM   SP,A10-A13
2d4b0: 4dcd                      MOVE   A14,A13
2d4c0: 0b0e 0040                 ADDI   40h,A14
2d4e0: 0550                      SETF   10h,0,0
2d4f0: b9ad ffe0 0020            MOVE   *A13(FFE0h),*A13(20h),0
2d520: 4508                      SUB    A8,A8
2d530: 810d                      MOVE   A8,*A13,0
2d540: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2d570: 85ac                      MOVE   *A13,A12,0
2d580: 24ac                      SLL    5h,A12
2d590: 410c                      ADD    A8,A12
2d5a0: 85a8                      MOVE   *A13,A8,0
2d5b0: 2b68                      SRA    5h,A8
2d5c0: 830c                      MOVE   A8,*A12,1
2d5d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2d600: 85a8                      MOVE   *A13,A8,0
2d610: 24a8                      SLL    5h,A8
2d620: 4188                      ADD    A12,A8
2d630: 870c                      MOVE   *A8,A12,1
2d640: 248c                      SLL    4h,A12
2d650: 8388                      MOVE   A12,*A8,1
2d660: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2d690: 85a8                      MOVE   *A13,A8,0
2d6a0: 24a8                      SLL    5h,A8
2d6b0: 4188                      ADD    A12,A8
2d6c0: 85ac                      MOVE   *A13,A12,0
2d6d0: 2b6c                      SRA    5h,A12
2d6e0: 870a                      MOVE   *A8,A10,1
2d6f0: 418a                      ADD    A12,A10
2d700: 8348                      MOVE   A10,*A8,1
2d710: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2d740: 85aa                      MOVE   *A13,A10,0
2d750: 24aa                      SLL    5h,A10
2d760: 418a                      ADD    A12,A10
2d770: 85a8                      MOVE   *A13,A8,0
2d780: 2b68                      SRA    5h,A8
2d790: b30a 4000                 MOVE   A8,*A10(4000h),1
2d7b0: 85aa                      MOVE   *A13,A10,0
2d7c0: 24aa                      SLL    5h,A10
2d7d0: 418a                      ADD    A12,A10
2d7e0: b748 4000                 MOVE   *A10(4000h),A8,1
2d800: 2488                      SLL    4h,A8
2d810: b30a 4000                 MOVE   A8,*A10(4000h),1
2d830: 85aa                      MOVE   *A13,A10,0
2d840: 24aa                      SLL    5h,A10
2d850: 418a                      ADD    A12,A10
2d860: 85a8                      MOVE   *A13,A8,0
2d870: 2b68                      SRA    5h,A8
2d880: b74c 4000                 MOVE   *A10(4000h),A12,1
2d8a0: 410c                      ADD    A8,A12
2d8b0: b38a 4000                 MOVE   A12,*A10(4000h),1
2d8d0: 85ac                      MOVE   *A13,A12,0
2d8e0: 102c                      INC    A12
2d8f0: 818d                      MOVE   A12,*A13,0
2d900: 0b4c fdff                 CMPI   200h,A12
2d920: c4c1                      JRLT   2D540h
2d930: 0548                      SETF   8h,0,0
2d940: b5aa ff80                 MOVE   *A13(FF80h),A10,0
2d960: 3a2a                      DSJS   A10,2DA80h
2d970: 0550                      SETF   10h,0,0
2d980: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
2d9a0: 03aa                      NEG    A10
2d9b0: 0b0a 0fff                 ADDI   FFFh,A10
2d9d0: b14d 0030                 MOVE   A10,*A13(30h),0
2d9f0: b5aa ffa0                 MOVE   *A13(FFA0h),A10,0
2da10: b5a8 0030                 MOVE   *A13(30h),A8,0
2da30: 4d0b                      MOVE   A8,A11
2da40: 5b4b                      DIVU   A10,A11
2da50: b16d 0030                 MOVE   A11,*A13(30h),0
2da70: c00c                      JR     2DB40h
2da80: 0550                      SETF   10h,0,0
2da90: b9ad ffc0 0030            MOVE   *A13(FFC0h),*A13(30h),0
2dac0: b5aa ffa0                 MOVE   *A13(FFA0h),A10,0
2dae0: b5a8 0030                 MOVE   *A13(30h),A8,0
2db00: 4d0b                      MOVE   A8,A11
2db10: 5b4b                      DIVU   A10,A11
2db20: b16d 0030                 MOVE   A11,*A13(30h),0
2db40: b5a8 0020                 MOVE   *A13(20h),A8,0
2db60: ca00 00b8                 JREQ   2E700h
2db80: 07ab 7b20 0003            MOVE   @37B20h,A11,1
2dbb0: ca00 00b3                 JREQ   2E700h
2dbd0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2dc00: 0b28 8000 0000            ADDI   8000h,A8
2dc30: 8708                      MOVE   *A8,A8,1
2dc40: 0b88 ff00 ffff            ANDI   FFh,A8
2dc70: ca00 00a7                 JREQ   2E700h
2dc90: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
2dcb0: b5aa 0020                 MOVE   *A13(20h),A10,0
2dcd0: 454c                      SUB    A10,A12
2dce0: 09cb 0064                 MOVI   64h,A11
2dd00: 5d8b                      MPYS   A12,A11
2dd10: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
2dd30: 598b                      DIVS   A12,A11
2dd40: 058b 8400 0003            MOVE   A11,@38400h,0
2dd70: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2dda0: 0b28 8060 0000            ADDI   8060h,A8
2ddd0: 8708                      MOVE   *A8,A8,1
2dde0: 0b88 ff00 ffff            ANDI   FFh,A8
2de10: cb45                      JRNE   2E270h
2de20: 4d48                      MOVE   A10,A8
2de30: ca43                      JREQ   2E270h
2de40: 09cb 0030                 MOVI   30h,A11
2de60: 6d68                      MODS   A11,A8
2de70: cb1f                      JRNE   2E070h
2de80: b5a8 0030                 MOVE   *A13(30h),A8,0
2dea0: ca1c                      JREQ   2E070h
2deb0: 456b                      SUB    A11,A11
2dec0: 816d                      MOVE   A11,*A13,0
2ded0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2df00: 85aa                      MOVE   *A13,A10,0
2df10: 24aa                      SLL    5h,A10
2df20: 418a                      ADD    A12,A10
2df30: 09c8 00ff                 MOVI   FFh,A8
2df50: 830a                      MOVE   A8,*A10,1
2df60: 85aa                      MOVE   *A13,A10,0
2df70: 102a                      INC    A10
2df80: 814d                      MOVE   A10,*A13,0
2df90: 140a                      SUBK   20h,A10
2dfa0: c4f2                      JRLT   2DED0h
2dfb0: 0b2c ad40 0000            ADDI   AD40h,A12
2dfe0: b5aa ffa0                 MOVE   *A13(FFA0h),A10,0
2e000: 834c                      MOVE   A10,*A12,1
2e010: b5ac 0030                 MOVE   *A13(30h),A12,0
2e030: 142c                      DEC    A12
2e040: b18d 0030                 MOVE   A12,*A13(30h),0
2e060: c013                      JR     2E1A0h
2e070: 4508                      SUB    A8,A8
2e080: 810d                      MOVE   A8,*A13,0
2e090: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2e0c0: 85aa                      MOVE   *A13,A10,0
2e0d0: 24aa                      SLL    5h,A10
2e0e0: 418a                      ADD    A12,A10
2e0f0: 4508                      SUB    A8,A8
2e100: 830a                      MOVE   A8,*A10,1
2e110: 85aa                      MOVE   *A13,A10,0
2e120: 102a                      INC    A10
2e130: 814d                      MOVE   A10,*A13,0
2e140: 140a                      SUBK   20h,A10
2e150: c4f3                      JRLT   2E090h
2e160: 0b2c ad40 0000            ADDI   AD40h,A12
2e190: 830c                      MOVE   A8,*A12,1
2e1a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2e1d0: 182a                      MOVK   1h,A10
2e1e0: 0b2c 8060 0000            ADDI   8060h,A12
2e210: 834c                      MOVE   A10,*A12,1
2e220: b5ac 0020                 MOVE   *A13(20h),A12,0
2e240: 142c                      DEC    A12
2e250: b18d 0020                 MOVE   A12,*A13(20h),0
2e270: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2e2a0: 0b2c 8080 0000            ADDI   8080h,A12
2e2d0: 878c                      MOVE   *A12,A12,1
2e2e0: 0b8c ff00 ffff            ANDI   FFh,A12
2e310: cb24                      JRNE   2E560h
2e320: b5ac 0020                 MOVE   *A13(20h),A12,0
2e340: ca21                      JREQ   2E560h
2e350: 454a                      SUB    A10,A10
2e360: 814d                      MOVE   A10,*A13,0
2e370: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2e3a0: 85aa                      MOVE   *A13,A10,0
2e3b0: 24aa                      SLL    5h,A10
2e3c0: 418a                      ADD    A12,A10
2e3d0: 4508                      SUB    A8,A8
2e3e0: b30a 4000                 MOVE   A8,*A10(4000h),1
2e400: 85aa                      MOVE   *A13,A10,0
2e410: 102a                      INC    A10
2e420: 814d                      MOVE   A10,*A13,0
2e430: 140a                      SUBK   20h,A10
2e440: c4f2                      JRLT   2E370h
2e450: 0b2c ad40 0000            ADDI   AD40h,A12
2e480: 830c                      MOVE   A8,*A12,1
2e490: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2e4c0: 182a                      MOVK   1h,A10
2e4d0: 0b2c 8080 0000            ADDI   8080h,A12
2e500: 834c                      MOVE   A10,*A12,1
2e510: b5ac 0020                 MOVE   *A13(20h),A12,0
2e530: 142c                      DEC    A12
2e540: b18d 0020                 MOVE   A12,*A13(20h),0
2e560: a3cf                      MOVE   A14,-*SP,1
2e570: 182c                      MOVK   1h,A12
2e580: 938e                      MOVE   A12,*A14+,1
2e590: 0d5f 0000 0000            CALLA  0h
2e5c0: 0550                      SETF   10h,0,0
2e5d0: b5aa 0020                 MOVE   *A13(20h),A10,0
2e5f0: ca10                      JREQ   2E700h
2e600: 07a8 7b20 0003            MOVE   @37B20h,A8,1
2e630: ca0c                      JREQ   2E700h
2e640: 07ab 7b00 0003            MOVE   @37B00h,A11,1
2e670: 0b2b 8000 0000            ADDI   8000h,A11
2e6a0: 876b                      MOVE   *A11,A11,1
2e6b0: 0b8b ff00 ffff            ANDI   FFh,A11
2e6e0: cb00 ff59                 JRNE   2DC90h
2e700: b7ee 00a0                 MOVE   *SP(A0h),A14,1
2e720: 09af 3c00                 MMFM   SP,A10-A13
2e740: 0962                      RETS   2h

_read_spot_data:
2e750: 098f 000c                 MMTM   SP,A12,A13
2e770: 4dcd                      MOVE   A14,A13
2e780: 100e                      ADDK   20h,A14
2e790: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
2e7b0: 0550                      SETF   10h,0,0
2e7c0: 890d                      MOVE   *A8,*A13,0
2e7d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2e800: 0b28 ae60 0000            ADDI   AE60h,A8
2e830: 85ac                      MOVE   *A13,A12,0
2e840: 8388                      MOVE   A12,*A8,1
2e850: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2e880: 458c                      SUB    A12,A12
2e890: 0b28 8040 0000            ADDI   8040h,A8
2e8c0: 8388                      MOVE   A12,*A8,1
2e8d0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2e900: 09cc 0030                 MOVI   30h,A12
2e920: 0b28 8000 0000            ADDI   8000h,A8
2e950: 8388                      MOVE   A12,*A8,1
2e960: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2e990: 0b2c 8000 0000            ADDI   8000h,A12
2e9c0: 878c                      MOVE   *A12,A12,1
2e9d0: 0b8c ff00 ffff            ANDI   FFh,A12
2ea00: cbf5                      JRNE   2E960h
2ea10: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
2ea30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ea60: 0b28 adc0 0000            ADDI   ADC0h,A8
2ea90: 8708                      MOVE   *A8,A8,1
2eaa0: 0b88 ff00 ffff            ANDI   FFh,A8
2ead0: 0550                      SETF   10h,0,0
2eae0: 810c                      MOVE   A8,*A12,0
2eaf0: 4508                      SUB    A8,A8
2eb00: b7ee 0060                 MOVE   *SP(60h),A14,1
2eb20: 09af 3000                 MMFM   SP,A12,A13
2eb40: 0962                      RETS   2h

_spot_move:
2eb50: 098f 000c                 MMTM   SP,A12,A13
2eb70: 4dcd                      MOVE   A14,A13
2eb80: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ebb0: 458c                      SUB    A12,A12
2ebc0: 0b28 8040 0000            ADDI   8040h,A8
2ebf0: 8388                      MOVE   A12,*A8,1
2ec00: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ec30: 0b28 ae60 0000            ADDI   AE60h,A8
2ec60: 8388                      MOVE   A12,*A8,1
2ec70: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2eca0: 0b28 a4e0 0000            ADDI   A4E0h,A8
2ecd0: 8388                      MOVE   A12,*A8,1
2ece0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ed10: 0b28 a500 0000            ADDI   A500h,A8
2ed40: 8388                      MOVE   A12,*A8,1
2ed50: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ed80: 0b28 a4a0 0000            ADDI   A4A0h,A8
2edb0: 8388                      MOVE   A12,*A8,1
2edc0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2edf0: 0b28 a4c0 0000            ADDI   A4C0h,A8
2ee20: 8388                      MOVE   A12,*A8,1
2ee30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ee60: 09cc 002f                 MOVI   2Fh,A12
2ee80: 0b28 8000 0000            ADDI   8000h,A8
2eeb0: 8388                      MOVE   A12,*A8,1
2eec0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2eef0: 0b28 8000 0000            ADDI   8000h,A8
2ef20: 8708                      MOVE   *A8,A8,1
2ef30: 0b88 ff00 ffff            ANDI   FFh,A8
2ef60: ca1d                      JREQ   2F140h
2ef70: a3cf                      MOVE   A14,-*SP,1
2ef80: 182c                      MOVK   1h,A12
2ef90: 938e                      MOVE   A12,*A14+,1
2efa0: 0d5f 0000 0000            CALLA  0h
2efd0: 07a8 7940 0003            MOVE   @37940h,A8,1
2f000: ca08                      JREQ   2F090h
2f010: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2f040: 1828                      MOVK   1h,A8
2f050: 0b2c ae60 0000            ADDI   AE60h,A12
2f080: 830c                      MOVE   A8,*A12,1
2f090: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2f0c0: 0b2c 8000 0000            ADDI   8000h,A12
2f0f0: 878c                      MOVE   *A12,A12,1
2f100: 0b8c ff00 ffff            ANDI   FFh,A12
2f130: cbe3                      JRNE   2EF70h
2f140: 458c                      SUB    A12,A12
2f150: 078c 7940 0003            MOVE   A12,@37940h,1
2f180: 4d88                      MOVE   A12,A8
2f190: b7ee 0060                 MOVE   *SP(60h),A14,1
2f1b0: 09af 3000                 MMFM   SP,A12,A13
2f1d0: 0962                      RETS   2h

_dsp_gather_spotdata:
2f1e0: 098f 006c                 MMTM   SP,A9,A10,A12,A13
2f200: 4dcd                      MOVE   A14,A13
2f210: 0b0e 00e0                 ADDI   E0h,A14
2f230: 09c8 0400                 MOVI   400h,A8
2f250: 830d                      MOVE   A8,*A13,1
2f260: bbad ffe0 0020            MOVE   *A13(FFE0h),*A13(20h),1
2f290: b7a9 0020                 MOVE   *A13(20h),A9,1
2f2b0: b729 0040                 MOVE   *A9(40h),A9,1
2f2d0: 4508                      SUB    A8,A8
2f2e0: b30d 0040                 MOVE   A8,*A13(40h),1
2f300: b30d 00c0                 MOVE   A8,*A13(C0h),1
2f320: a3cf                      MOVE   A14,-*SP,1
2f330: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2f350: b7a8 0020                 MOVE   *A13(20h),A8,1
2f370: d30e 0000                 MOVE   *A8(0h),*A14+,1
2f390: 4da8                      MOVE   A13,A8
2f3a0: 0b08 0080                 ADDI   80h,A8
2f3c0: 930e                      MOVE   A8,*A14+,1
2f3d0: 0d5f 6bf0 0003            CALLA  36BF0h
2f400: b7a8 00a0                 MOVE   *A13(A0h),A8,1
2f420: cb04                      JRNE   2F470h
2f430: bbad 0080 0060            MOVE   *A13(80h),*A13(60h),1
2f460: c005                      JR     2F4C0h
2f470: b7a8 0080                 MOVE   *A13(80h),A8,1
2f490: 1028                      INC    A8
2f4a0: b30d 0060                 MOVE   A8,*A13(60h),1
2f4c0: b7a8 0060                 MOVE   *A13(60h),A8,1
2f4e0: 0d5f 3e00 0003            CALLA  33E00h
2f510: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2f530: 0d5f 5900 0003            CALLA  35900h
2f560: 09e8 0000 4000            MOVI   40000000h,A8
2f590: 930e                      MOVE   A8,*A14+,1
2f5a0: 0d5f 5a00 0003            CALLA  35A00h
2f5d0: 09e8 0000 3f80            MOVI   3F800000h,A8
2f600: 930e                      MOVE   A8,*A14+,1
2f610: 0d5f 4c00 0003            CALLA  34C00h
2f640: 0d5f 36c0 0003            CALLA  336C0h
2f670: 4508                      SUB    A8,A8
2f680: 09ec 0000 4059            MOVI   40590000h,A12
2f6b0: 938e                      MOVE   A12,*A14+,1
2f6c0: 930e                      MOVE   A8,*A14+,1
2f6d0: 0d5f 41e0 0003            CALLA  341E0h
2f700: 0d5f 3400 0003            CALLA  33400h
2f730: 0548                      SETF   8h,0,0
2f740: 0528                      ZEXT   A8,0
2f750: 05e8 79a0 0003            MOVB   A8,@379A0h
2f780: 458c                      SUB    A12,A12
2f790: 078c 7980 0003            MOVE   A12,@37980h,1
2f7c0: 078c 7960 0003            MOVE   A12,@37960h,1
2f7f0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2f820: 0b28 8040 0000            ADDI   8040h,A8
2f850: 8388                      MOVE   A12,*A8,1
2f860: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2f890: b7ac 0020                 MOVE   *A13(20h),A12,1
2f8b0: b78c 0020                 MOVE   *A12(20h),A12,1
2f8d0: 0b8c ff00 ffff            ANDI   FFh,A12
2f900: 0b28 ade0 0000            ADDI   ADE0h,A8
2f930: 8388                      MOVE   A12,*A8,1
2f940: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2f970: b7a8 0020                 MOVE   *A13(20h),A8,1
2f990: b708 0020                 MOVE   *A8(20h),A8,1
2f9b0: 0b88 00ff ffff            ANDI   FF00h,A8
2f9e0: 2b08                      SRA    8h,A8
2f9f0: 0b2c ae00 0000            ADDI   AE00h,A12
2fa20: 830c                      MOVE   A8,*A12,1
2fa30: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fa60: b7a8 0060                 MOVE   *A13(60h),A8,1
2fa80: 0b88 ff00 ffff            ANDI   FFh,A8
2fab0: 0b2c ae20 0000            ADDI   AE20h,A12
2fae0: 830c                      MOVE   A8,*A12,1
2faf0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fb20: b7a8 0060                 MOVE   *A13(60h),A8,1
2fb40: 0b88 00ff ffff            ANDI   FF00h,A8
2fb70: 2f08                      SRL    8h,A8
2fb80: 0b2c ae40 0000            ADDI   AE40h,A12
2fbb0: 830c                      MOVE   A8,*A12,1
2fbc0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fbf0: 4508                      SUB    A8,A8
2fc00: 0b2c 8060 0000            ADDI   8060h,A12
2fc30: 830c                      MOVE   A8,*A12,1
2fc40: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fc70: 0b2c 8080 0000            ADDI   8080h,A12
2fca0: 830c                      MOVE   A8,*A12,1
2fcb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fce0: 0b2c ae60 0000            ADDI   AE60h,A12
2fd10: 830c                      MOVE   A8,*A12,1
2fd20: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fd50: 09c8 002e                 MOVI   2Eh,A8
2fd70: 0b2c 8000 0000            ADDI   8000h,A12
2fda0: 830c                      MOVE   A8,*A12,1
2fdb0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fde0: 0b2c ae60 0000            ADDI   AE60h,A12
2fe10: 878c                      MOVE   *A12,A12,1
2fe20: 0b8c ff00 ffff            ANDI   FFh,A12
2fe50: cb00 012d                 JRNE   31140h
2fe70: 07ac 7b00 0003            MOVE   @37B00h,A12,1
2fea0: 0b2c 8000 0000            ADDI   8000h,A12
2fed0: 878c                      MOVE   *A12,A12,1
2fee0: 0b8c ff00 ffff            ANDI   FFh,A12
2ff10: ca00 0121                 JREQ   31140h
2ff30: a3cf                      MOVE   A14,-*SP,1
2ff40: 182c                      MOVK   1h,A12
2ff50: 938e                      MOVE   A12,*A14+,1
2ff60: 0d5f 0000 0000            CALLA  0h
2ff90: 07a8 7b00 0003            MOVE   @37B00h,A8,1
2ffc0: 0b28 8060 0000            ADDI   8060h,A8
2fff0: 8708                      MOVE   *A8,A8,1
30000: 0b88 ff00 ffff            ANDI   FFh,A8
30030: cb17                      JRNE   301B0h
30040: b7ac 0020                 MOVE   *A13(20h),A12,1
30060: b788 0020                 MOVE   *A12(20h),A8,1
30080: 14a8                      SUBK   5h,A8
30090: c406                      JRLT   30100h
300a0: a3cf                      MOVE   A14,-*SP,1
300b0: 1828                      MOVK   1h,A8
300c0: 930e                      MOVE   A8,*A14+,1
300d0: 0d5f 0000 0000            CALLA  0h
30100: 07a8 7b00 0003            MOVE   @37B00h,A8,1
30130: 0b28 8060 0000            ADDI   8060h,A8
30160: 8708                      MOVE   *A8,A8,1
30170: 0b88 ff00 ffff            ANDI   FFh,A8
301a0: cae9                      JREQ   30040h
301b0: 454a                      SUB    A10,A10
301c0: 0548                      SETF   8h,0,0
301d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
30200: 4d48                      MOVE   A10,A8
30210: 24a8                      SLL    5h,A8
30220: 4188                      ADD    A12,A8
30230: d109 0000                 MOVE   *A8(0h),*A9+,0
30250: 102a                      INC    A10
30260: 260a                      SLL    10h,A10
30270: 2e0a                      SRL    10h,A10
30280: 0b4a fdff                 CMPI   200h,A10
302a0: c4f2                      JRLT   301D0h
302b0: 4508                      SUB    A8,A8
302c0: 0b2c 8060 0000            ADDI   8060h,A12
302f0: 830c                      MOVE   A8,*A12,1
30300: 4da8                      MOVE   A13,A8
30310: 0b08 0040                 ADDI   40h,A8
30330: 0d5f 6160 0003            CALLA  36160h
30360: b7a8 0060                 MOVE   *A13(60h),A8,1
30380: 0d5f 3e00 0003            CALLA  33E00h
303b0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
303d0: 0d5f 5900 0003            CALLA  35900h
30400: 09ec 0000 4000            MOVI   40000000h,A12
30430: 938e                      MOVE   A12,*A14+,1
30440: 0d5f 5a00 0003            CALLA  35A00h
30470: 09e8 0000 3f80            MOVI   3F800000h,A8
304a0: 930e                      MOVE   A8,*A14+,1
304b0: 0d5f 4c00 0003            CALLA  34C00h
304e0: 0d5f 36c0 0003            CALLA  336C0h
30510: 4508                      SUB    A8,A8
30520: 09ec 0000 4059            MOVI   40590000h,A12
30550: 938e                      MOVE   A12,*A14+,1
30560: 930e                      MOVE   A8,*A14+,1
30570: 0d5f 41e0 0003            CALLA  341E0h
305a0: 0d5f 3400 0003            CALLA  33400h
305d0: 0528                      ZEXT   A8,0
305e0: 05e8 79a0 0003            MOVB   A8,@379A0h
30610: 07ac 7b00 0003            MOVE   @37B00h,A12,1
30640: 0b2c 8080 0000            ADDI   8080h,A12
30670: 878c                      MOVE   *A12,A12,1
30680: 0b8c ff00 ffff            ANDI   FFh,A12
306b0: ca03                      JREQ   306F0h
306c0: 182c                      MOVK   1h,A12
306d0: b38d 00c0                 MOVE   A12,*A13(C0h),1
306f0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
30720: 0b2c 8080 0000            ADDI   8080h,A12
30750: 878c                      MOVE   *A12,A12,1
30760: 0b8c ff00 ffff            ANDI   FFh,A12
30790: cb17                      JRNE   30910h
307a0: b7ac 0020                 MOVE   *A13(20h),A12,1
307c0: b788 0020                 MOVE   *A12(20h),A8,1
307e0: 14a8                      SUBK   5h,A8
307f0: c406                      JRLT   30860h
30800: a3cf                      MOVE   A14,-*SP,1
30810: 1828                      MOVK   1h,A8
30820: 930e                      MOVE   A8,*A14+,1
30830: 0d5f 0000 0000            CALLA  0h
30860: 07a8 7b00 0003            MOVE   @37B00h,A8,1
30890: 0b28 8080 0000            ADDI   8080h,A8
308c0: 8708                      MOVE   *A8,A8,1
308d0: 0b88 ff00 ffff            ANDI   FFh,A8
30900: cae9                      JREQ   307A0h
30910: 454a                      SUB    A10,A10
30920: 0548                      SETF   8h,0,0
30930: 07ac 7b00 0003            MOVE   @37B00h,A12,1
30960: 4d48                      MOVE   A10,A8
30970: 24a8                      SLL    5h,A8
30980: 4188                      ADD    A12,A8
30990: d109 4000                 MOVE   *A8(4000h),*A9+,0
309b0: 102a                      INC    A10
309c0: 260a                      SLL    10h,A10
309d0: 2e0a                      SRL    10h,A10
309e0: 0b4a fdff                 CMPI   200h,A10
30a00: c4f2                      JRLT   30930h
30a10: 0b2c 8060 0000            ADDI   8060h,A12
30a40: 878c                      MOVE   *A12,A12,1
30a50: 0b8c ff00 ffff            ANDI   FFh,A12
30a80: ca03                      JREQ   30AC0h
30a90: 182c                      MOVK   1h,A12
30aa0: b38d 00c0                 MOVE   A12,*A13(C0h),1
30ac0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
30af0: 4508                      SUB    A8,A8
30b00: 0b2c 8080 0000            ADDI   8080h,A12
30b30: 830c                      MOVE   A8,*A12,1
30b40: 87ac                      MOVE   *A13,A12,1
30b50: 07a8 7980 0003            MOVE   @37980h,A8,1
30b80: 410c                      ADD    A8,A12
30b90: 078c 7980 0003            MOVE   A12,@37980h,1
30bc0: 4da8                      MOVE   A13,A8
30bd0: 0b08 0040                 ADDI   40h,A8
30bf0: 0d5f 6160 0003            CALLA  36160h
30c20: b7a8 0060                 MOVE   *A13(60h),A8,1
30c40: 0d5f 3e00 0003            CALLA  33E00h
30c70: d3ae 0040                 MOVE   *A13(40h),*A14+,1
30c90: 0d5f 5900 0003            CALLA  35900h
30cc0: 09e8 0000 4000            MOVI   40000000h,A8
30cf0: 930e                      MOVE   A8,*A14+,1
30d00: 0d5f 5a00 0003            CALLA  35A00h
30d30: 09e8 0000 3f80            MOVI   3F800000h,A8
30d60: 930e                      MOVE   A8,*A14+,1
30d70: 0d5f 4c00 0003            CALLA  34C00h
30da0: 0d5f 36c0 0003            CALLA  336C0h
30dd0: 4508                      SUB    A8,A8
30de0: 09ec 0000 4059            MOVI   40590000h,A12
30e10: 938e                      MOVE   A12,*A14+,1
30e20: 930e                      MOVE   A8,*A14+,1
30e30: 0d5f 41e0 0003            CALLA  341E0h
30e60: 0d5f 3400 0003            CALLA  33400h
30e90: 0528                      ZEXT   A8,0
30ea0: 05e8 79a0 0003            MOVB   A8,@379A0h
30ed0: 07ac 7960 0003            MOVE   @37960h,A12,1
30f00: ca0c                      JREQ   30FD0h
30f10: 07a8 7b00 0003            MOVE   @37B00h,A8,1
30f40: 182c                      MOVK   1h,A12
30f50: 0b28 ae60 0000            ADDI   AE60h,A8
30f80: 8388                      MOVE   A12,*A8,1
30f90: 4508                      SUB    A8,A8
30fa0: 05e8 79a0 0003            MOVB   A8,@379A0h
30fd0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
31000: 0b2c ae60 0000            ADDI   AE60h,A12
31030: 878c                      MOVE   *A12,A12,1
31040: 0b8c ff00 ffff            ANDI   FFh,A12
31070: cb0c                      JRNE   31140h
31080: 07ac 7b00 0003            MOVE   @37B00h,A12,1
310b0: 0b2c 8000 0000            ADDI   8000h,A12
310e0: 878c                      MOVE   *A12,A12,1
310f0: 0b8c ff00 ffff            ANDI   FFh,A12
31120: cb00 fedf                 JRNE   2FF30h
31140: 4508                      SUB    A8,A8
31150: b7ee 00a0                 MOVE   *SP(A0h),A14,1
31170: 09af 3600                 MMFM   SP,A9,A10,A12,A13
31190: 0962                      RETS   2h

_do_featurescan:
311a0: 098f 000c                 MMTM   SP,A12,A13
311c0: 4dcd                      MOVE   A14,A13
311d0: 100e                      ADDK   20h,A14
311e0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
31210: a3cf                      MOVE   A14,-*SP,1
31220: 87a8                      MOVE   *A13,A8,1
31230: 0550                      SETF   10h,0,0
31240: b508 0020                 MOVE   *A8(20h),A8,0
31260: 930e                      MOVE   A8,*A14+,1
31270: 0d5f 1530 0003            CALLA  31530h
312a0: 07a8 a580 0003            MOVE   @3A580h,A8,1
312d0: ca18                      JREQ   31460h
312e0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31310: 09cc 0029                 MOVI   29h,A12
31330: 0b28 8000 0000            ADDI   8000h,A8
31360: 8388                      MOVE   A12,*A8,1
31370: a3cf                      MOVE   A14,-*SP,1
31380: 87a8                      MOVE   *A13,A8,1
31390: 0550                      SETF   10h,0,0
313a0: b50c 0020                 MOVE   *A8(20h),A12,0
313c0: 938e                      MOVE   A12,*A14+,1
313d0: d30e 0000                 MOVE   *A8(0h),*A14+,1
313f0: 0d5f 19e0 0003            CALLA  319E0h
31420: 07ac a580 0003            MOVE   @3A580h,A12,1
31450: cbe8                      JRNE   312E0h
31460: a3cf                      MOVE   A14,-*SP,1
31470: 87ac                      MOVE   *A13,A12,1
31480: d38e 0000                 MOVE   *A12(0h),*A14+,1
314a0: 0d5f 30e0 0003            CALLA  330E0h
314d0: 4508                      SUB    A8,A8
314e0: b7ee 0060                 MOVE   *SP(60h),A14,1
31500: 09af 3000                 MMFM   SP,A12,A13
31520: 0962                      RETS   2h

_setup_featurescan:
31530: 098f 000c                 MMTM   SP,A12,A13
31550: 4dcd                      MOVE   A14,A13
31560: 1828                      MOVK   1h,A8
31570: 0788 a580 0003            MOVE   A8,@3A580h,1
315a0: 07a8 7b00 0003            MOVE   @37B00h,A8,1
315d0: 458c                      SUB    A12,A12
315e0: 0b28 8040 0000            ADDI   8040h,A8
31610: 8388                      MOVE   A12,*A8,1
31620: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31650: 0b28 80a0 0000            ADDI   80A0h,A8
31680: 8388                      MOVE   A12,*A8,1
31690: 07a8 7b00 0003            MOVE   @37B00h,A8,1
316c0: 0b28 80c0 0000            ADDI   80C0h,A8
316f0: 8388                      MOVE   A12,*A8,1
31700: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31730: 0550                      SETF   10h,0,0
31740: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
31760: 0b8c ff00 ffff            ANDI   FFh,A12
31790: 0b28 80e0 0000            ADDI   80E0h,A8
317c0: 8388                      MOVE   A12,*A8,1
317d0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
31800: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
31820: 0b88 00ff ffff            ANDI   FF00h,A8
31850: 2b08                      SRA    8h,A8
31860: 0b2c 8100 0000            ADDI   8100h,A12
31890: 830c                      MOVE   A8,*A12,1
318a0: 07ac 7b00 0003            MOVE   @37B00h,A12,1
318d0: 4508                      SUB    A8,A8
318e0: 0b2c 8060 0000            ADDI   8060h,A12
31910: 830c                      MOVE   A8,*A12,1
31920: 07ac 7b00 0003            MOVE   @37B00h,A12,1
31950: 0b2c 8080 0000            ADDI   8080h,A12
31980: 830c                      MOVE   A8,*A12,1
31990: b7ee 0060                 MOVE   *SP(60h),A14,1
319b0: 09af 3000                 MMFM   SP,A12,A13
319d0: 0962                      RETS   2h

_write_chords:
319e0: 098f 000c                 MMTM   SP,A12,A13
31a00: 4dcd                      MOVE   A14,A13
31a10: 0b0e 0080                 ADDI   80h,A14
31a30: 4508                      SUB    A8,A8
31a40: 0550                      SETF   10h,0,0
31a50: b10d 0030                 MOVE   A8,*A13(30h),0
31a70: b10d 0040                 MOVE   A8,*A13(40h),0
31a90: bbad ffe0 0060            MOVE   *A13(FFE0h),*A13(60h),1
31ac0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
31ae0: c600 0153                 JRLE   33030h
31b00: b5a8 0030                 MOVE   *A13(30h),A8,0
31b20: ca1d                      JREQ   31D00h
31b30: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31b60: 0b28 8080 0000            ADDI   8080h,A8
31b90: 8708                      MOVE   *A8,A8,1
31ba0: 0b88 ff00 ffff            ANDI   FFh,A8
31bd0: ca2e                      JREQ   31EC0h
31be0: a3cf                      MOVE   A14,-*SP,1
31bf0: 1828                      MOVK   1h,A8
31c00: 930e                      MOVE   A8,*A14+,1
31c10: 0d5f 0000 0000            CALLA  0h
31c40: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31c70: 0b28 8080 0000            ADDI   8080h,A8
31ca0: 8708                      MOVE   *A8,A8,1
31cb0: 0b88 ff00 ffff            ANDI   FFh,A8
31ce0: cbef                      JRNE   31BE0h
31cf0: c01c                      JR     31EC0h
31d00: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31d30: 0b28 8060 0000            ADDI   8060h,A8
31d60: 8708                      MOVE   *A8,A8,1
31d70: 0b88 ff00 ffff            ANDI   FFh,A8
31da0: ca11                      JREQ   31EC0h
31db0: a3cf                      MOVE   A14,-*SP,1
31dc0: 1828                      MOVK   1h,A8
31dd0: 930e                      MOVE   A8,*A14+,1
31de0: 0d5f 0000 0000            CALLA  0h
31e10: 07a8 7b00 0003            MOVE   @37B00h,A8,1
31e40: 0b28 8060 0000            ADDI   8060h,A8
31e70: 8708                      MOVE   *A8,A8,1
31e80: 0b88 ff00 ffff            ANDI   FFh,A8
31eb0: cbef                      JRNE   31DB0h
31ec0: 4508                      SUB    A8,A8
31ed0: 0550                      SETF   10h,0,0
31ee0: b10d 0020                 MOVE   A8,*A13(20h),0
31f00: b5a8 0040                 MOVE   *A13(40h),A8,0
31f20: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
31f40: 4988                      CMP    A12,A8
31f50: c500 00ec                 JRGE   32E30h
31f70: b5ac 0020                 MOVE   *A13(20h),A12,0
31f90: 4d88                      MOVE   A12,A8
31fa0: 244c                      SLL    2h,A12
31fb0: 2428                      SLL    1h,A8
31fc0: 410c                      ADD    A8,A12
31fd0: b18d 0010                 MOVE   A12,*A13(10h),0
31ff0: b5ac 0030                 MOVE   *A13(30h),A12,0
32010: ca67                      JREQ   32690h
32020: 07a8 7b00 0003            MOVE   @37B00h,A8,1
32050: b5ac 0010                 MOVE   *A13(10h),A12,0
32070: 24ac                      SLL    5h,A12
32080: 410c                      ADD    A8,A12
32090: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
320b0: 8508                      MOVE   *A8,A8,0
320c0: 0b88 ff00 ffff            ANDI   FFh,A8
320f0: b30c 4000                 MOVE   A8,*A12(4000h),1
32110: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32140: b5a8 0010                 MOVE   *A13(10h),A8,0
32160: 1028                      INC    A8
32170: 24a8                      SLL    5h,A8
32180: 4188                      ADD    A12,A8
32190: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
321b0: 858c                      MOVE   *A12,A12,0
321c0: 0b8c 00ff ffff            ANDI   FF00h,A12
321f0: 2b0c                      SRA    8h,A12
32200: b388 4000                 MOVE   A12,*A8(4000h),1
32220: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32250: b5a8 0010                 MOVE   *A13(10h),A8,0
32270: 1048                      ADDK   2h,A8
32280: 24a8                      SLL    5h,A8
32290: 4188                      ADD    A12,A8
322a0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
322c0: b58c 0010                 MOVE   *A12(10h),A12,0
322e0: 0b8c ff00 ffff            ANDI   FFh,A12
32310: b388 4000                 MOVE   A12,*A8(4000h),1
32330: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32360: b5a8 0010                 MOVE   *A13(10h),A8,0
32380: 1068                      ADDK   3h,A8
32390: 24a8                      SLL    5h,A8
323a0: 4188                      ADD    A12,A8
323b0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
323d0: b58c 0010                 MOVE   *A12(10h),A12,0
323f0: 0b8c 00ff ffff            ANDI   FF00h,A12
32420: 2b0c                      SRA    8h,A12
32430: b388 4000                 MOVE   A12,*A8(4000h),1
32450: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32480: b5a8 0010                 MOVE   *A13(10h),A8,0
324a0: 1088                      ADDK   4h,A8
324b0: 24a8                      SLL    5h,A8
324c0: 4188                      ADD    A12,A8
324d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
324f0: b58c 0020                 MOVE   *A12(20h),A12,0
32510: 0b8c ff00 ffff            ANDI   FFh,A12
32540: b388 4000                 MOVE   A12,*A8(4000h),1
32560: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32590: b5a8 0010                 MOVE   *A13(10h),A8,0
325b0: 10a8                      ADDK   5h,A8
325c0: 24a8                      SLL    5h,A8
325d0: 4188                      ADD    A12,A8
325e0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
32600: b58c 0020                 MOVE   *A12(20h),A12,0
32620: 0b8c 00ff ffff            ANDI   FF00h,A12
32650: 2b0c                      SRA    8h,A12
32660: b388 4000                 MOVE   A12,*A8(4000h),1
32680: c060                      JR     32C90h
32690: 07a8 7b00 0003            MOVE   @37B00h,A8,1
326c0: b5ac 0010                 MOVE   *A13(10h),A12,0
326e0: 24ac                      SLL    5h,A12
326f0: 410c                      ADD    A8,A12
32700: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
32720: 8508                      MOVE   *A8,A8,0
32730: 0b88 ff00 ffff            ANDI   FFh,A8
32760: 830c                      MOVE   A8,*A12,1
32770: 07ac 7b00 0003            MOVE   @37B00h,A12,1
327a0: b5a8 0010                 MOVE   *A13(10h),A8,0
327c0: 1028                      INC    A8
327d0: 24a8                      SLL    5h,A8
327e0: 4188                      ADD    A12,A8
327f0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
32810: 858c                      MOVE   *A12,A12,0
32820: 0b8c 00ff ffff            ANDI   FF00h,A12
32850: 2b0c                      SRA    8h,A12
32860: 8388                      MOVE   A12,*A8,1
32870: 07ac 7b00 0003            MOVE   @37B00h,A12,1
328a0: b5a8 0010                 MOVE   *A13(10h),A8,0
328c0: 1048                      ADDK   2h,A8
328d0: 24a8                      SLL    5h,A8
328e0: 4188                      ADD    A12,A8
328f0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
32910: b58c 0010                 MOVE   *A12(10h),A12,0
32930: 0b8c ff00 ffff            ANDI   FFh,A12
32960: 8388                      MOVE   A12,*A8,1
32970: 07ac 7b00 0003            MOVE   @37B00h,A12,1
329a0: b5a8 0010                 MOVE   *A13(10h),A8,0
329c0: 1068                      ADDK   3h,A8
329d0: 24a8                      SLL    5h,A8
329e0: 4188                      ADD    A12,A8
329f0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
32a10: b58c 0010                 MOVE   *A12(10h),A12,0
32a30: 0b8c 00ff ffff            ANDI   FF00h,A12
32a60: 2b0c                      SRA    8h,A12
32a70: 8388                      MOVE   A12,*A8,1
32a80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32ab0: b5a8 0010                 MOVE   *A13(10h),A8,0
32ad0: 1088                      ADDK   4h,A8
32ae0: 24a8                      SLL    5h,A8
32af0: 4188                      ADD    A12,A8
32b00: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
32b20: b58c 0020                 MOVE   *A12(20h),A12,0
32b40: 0b8c ff00 ffff            ANDI   FFh,A12
32b70: 8388                      MOVE   A12,*A8,1
32b80: 07ac 7b00 0003            MOVE   @37B00h,A12,1
32bb0: b5a8 0010                 MOVE   *A13(10h),A8,0
32bd0: 10a8                      ADDK   5h,A8
32be0: 24a8                      SLL    5h,A8
32bf0: 4188                      ADD    A12,A8
32c00: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
32c20: b58c 0020                 MOVE   *A12(20h),A12,0
32c40: 0b8c 00ff ffff            ANDI   FF00h,A12
32c70: 2b0c                      SRA    8h,A12
32c80: 8388                      MOVE   A12,*A8,1
32c90: b5ac 0040                 MOVE   *A13(40h),A12,0
32cb0: 102c                      INC    A12
32cc0: b18d 0040                 MOVE   A12,*A13(40h),0
32ce0: b5a8 0020                 MOVE   *A13(20h),A8,0
32d00: 1028                      INC    A8
32d10: b10d 0020                 MOVE   A8,*A13(20h),0
32d30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
32d50: 0b08 0030                 ADDI   30h,A8
32d70: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
32d90: b5a8 0020                 MOVE   *A13(20h),A8,0
32db0: 0b48 ffaa                 CMPI   55h,A8
32dd0: c505                      JRGE   32E30h
32de0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
32e00: 490c                      CMP    A8,A12
32e10: c400 ff14                 JRLT   31F70h
32e30: b5ac 0030                 MOVE   *A13(30h),A12,0
32e50: ca0c                      JREQ   32F20h
32e60: 07a8 7b00 0003            MOVE   @37B00h,A8,1
32e90: 182c                      MOVK   1h,A12
32ea0: 0b28 8080 0000            ADDI   8080h,A8
32ed0: 8388                      MOVE   A12,*A8,1
32ee0: 4508                      SUB    A8,A8
32ef0: b10d 0030                 MOVE   A8,*A13(30h),0
32f10: c00a                      JR     32FC0h
32f20: 07a8 7b00 0003            MOVE   @37B00h,A8,1
32f50: 182c                      MOVK   1h,A12
32f60: 0b28 8060 0000            ADDI   8060h,A8
32f90: 8388                      MOVE   A12,*A8,1
32fa0: b18d 0030                 MOVE   A12,*A13(30h),0
32fc0: b5a8 0040                 MOVE   *A13(40h),A8,0
32fe0: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
33000: 4988                      CMP    A12,A8
33010: c400 fead                 JRLT   31B00h
33030: a3cf                      MOVE   A14,-*SP,1
33040: 458c                      SUB    A12,A12
33050: 938e                      MOVE   A12,*A14+,1
33060: 0d5f 3400 0000            CALLA  3400h
33090: b7ee 0060                 MOVE   *SP(60h),A14,1
330b0: 09af 3000                 MMFM   SP,A12,A13
330d0: 0962                      RETS   2h

_done_featurescan:
330e0: 098f 000c                 MMTM   SP,A12,A13
33100: 4dcd                      MOVE   A14,A13
33110: 07a8 7b00 0003            MOVE   @37B00h,A8,1
33140: 192c                      MOVK   9h,A12
33150: 0b28 8000 0000            ADDI   8000h,A8
33180: 8388                      MOVE   A12,*A8,1
33190: 07ac 7b00 0003            MOVE   @37B00h,A12,1
331c0: 0b2c 8000 0000            ADDI   8000h,A12
331f0: 878c                      MOVE   *A12,A12,1
33200: 0b8c ff00 ffff            ANDI   FFh,A12
33230: cbf5                      JRNE   33190h
33240: 184c                      MOVK   2h,A12
33250: 078c a580 0003            MOVE   A12,@3A580h,1
33280: b7ee 0060                 MOVE   *SP(60h),A14,1
332a0: 09af 3000                 MMFM   SP,A12,A13
332c0: 0962                      RETS   2h
332d0: 2d60                      SRL    15h,A0
332e0: 2fc8                      SRL    2h,A8
332f0: 0ba8 0000 4000            ORI    40000000h,A8
33320: 1020                      INC    A0
33330: 0be0 fc00                 SUBI   3FFh,A0
33350: c625                      JRLE   335B0h
33360: 17e0                      SUBK   1Fh,A0
33370: c727                      JRGT   335F0h
33380: 6608                      SRL    A0,A8
33390: 4c63                      MOVE   A3,A3
333a0: ca01                      JREQ   333C0h
333b0: 03a8                      NEG    A8
333c0: 09af 0009                 MMFM   SP,A0,A3
333e0: 4d08                      MOVE   A8,A8
333f0: 0960                      RETS   

FD$DTOU:
33400: 098f 9000                 MMTM   SP,A0,A3
33420: a7c8                      MOVE   -*A14,A8,1
33430: 2d88                      SRL    14h,A8
33440: a7c0                      MOVE   -*A14,A0,1
33450: 4c03                      MOVE   A0,A3
33460: 2583                      SLL    Ch,A3
33470: 5468                      OR     A3,A8
33480: 2420                      SLL    1h,A0
33490: 4663                      SUBB   A3,A3
334a0: cbe2                      JRNE   332D0h
334b0: 2d60                      SRL    15h,A0
334c0: 2fe8                      SRL    1h,A8
334d0: 0ba8 0000 8000            ORI    80000000h,A8
33500: 1020                      INC    A0
33510: 0be0 fc00                 SUBI   3FFh,A0
33530: c607                      JRLE   335B0h
33540: 1400                      SUBK   20h,A0
33550: c709                      JRGT   335F0h
33560: 6608                      SRL    A0,A8
33570: 09af 0009                 MMFM   SP,A0,A3
33590: 4d08                      MOVE   A8,A8
335a0: 0960                      RETS   
335b0: 09af 0009                 MMFM   SP,A0,A3
335d0: 4508                      SUB    A8,A8
335e0: 0960                      RETS   
335f0: 1820                      MOVK   1h,A0
33600: a3cf                      MOVE   A14,-*SP,1
33610: 920e                      MOVE   A0,*A14+,1
33620: 0d5f 6d90 0003            CALLA  36D90h
33650: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
33680: 4c68                      MOVE   A3,A8
33690: 09af 0009                 MMFM   SP,A0,A3
336b0: 0960                      RETS   

FD$FTOD:
336c0: 07a8 0000 0000            MOVE   @0h,A8,1
336f0: ca09                      JREQ   33790h
33700: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
33730: d83e 0080                 CEXEC  0,00101F,0
33750: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
33780: 0960                      RETS   
33790: 098f c000                 MMTM   SP,A0,A1
337b0: a7c8                      MOVE   -*A14,A8,1
337c0: 4d01                      MOVE   A8,A1
337d0: 2421                      SLL    1h,A1
337e0: 4600                      SUBB   A0,A0
337f0: 2d01                      SRL    18h,A1
33800: ca14                      JREQ   33950h
33810: 27e0                      SLL    1Fh,A0
33820: 0b41 ff00                 CMPI   FFh,A1
33840: cb02                      JRNE   33870h
33850: 09c1 047f                 MOVI   47Fh,A1
33870: 0b01 0380                 ADDI   380h,A1
33890: 2681                      SLL    14h,A1
338a0: 5420                      OR     A1,A0
338b0: 4d01                      MOVE   A8,A1
338c0: 27a1                      SLL    1Dh,A1
338d0: 2528                      SLL    9h,A8
338e0: 2e88                      SRL    Ch,A8
338f0: 5500                      OR     A8,A0
33900: 920e                      MOVE   A0,*A14+,1
33910: 922e                      MOVE   A1,*A14+,1
33920: 09af 0003                 MMFM   SP,A0,A1
33940: 0960                      RETS   
33950: 922e                      MOVE   A1,*A14+,1
33960: 922e                      MOVE   A1,*A14+,1
33970: 09af 0003                 MMFM   SP,A0,A1
33990: 0960                      RETS   

FD$FTOI:
339a0: 07a8 0000 0000            MOVE   @0h,A8,1
339d0: ca15                      JREQ   33B30h
339e0: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
33a10: a30f                      MOVE   A8,-*SP,1
33a20: 09c8 0029                 MOVI   29h,A8
33a40: 0628 4c00 000d            CMOVGC A8,000D4C,0
33a70: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
33aa0: d83e 00a0                 CEXEC  0,00141F,0
33ac0: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
33af0: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
33b20: 0960                      RETS   
33b30: 098f 9000                 MMTM   SP,A0,A3
33b50: a7c0                      MOVE   -*A14,A0,1
33b60: 4c08                      MOVE   A0,A8
33b70: 2420                      SLL    1h,A0
33b80: 4663                      SUBB   A3,A3
33b90: 2d00                      SRL    18h,A0
33ba0: 2528                      SLL    9h,A8
33bb0: 2fc8                      SRL    2h,A8
33bc0: 0ba8 0000 4000            ORI    40000000h,A8
33bf0: 1020                      INC    A0
33c00: 0be0 ff80                 SUBI   7Fh,A0
33c20: c60a                      JRLE   33CD0h
33c30: 17e0                      SUBK   1Fh,A0
33c40: c70c                      JRGT   33D10h
33c50: 6608                      SRL    A0,A8
33c60: 4c63                      MOVE   A3,A3
33c70: ca01                      JREQ   33C90h
33c80: 03a8                      NEG    A8
33c90: 09af 0009                 MMFM   SP,A0,A3
33cb0: 4d08                      MOVE   A8,A8
33cc0: 0960                      RETS   
33cd0: 09af 0009                 MMFM   SP,A0,A3
33cf0: 4508                      SUB    A8,A8
33d00: 0960                      RETS   
33d10: 1860                      MOVK   3h,A0
33d20: a3cf                      MOVE   A14,-*SP,1
33d30: 920e                      MOVE   A0,*A14+,1
33d40: 0d5f 6d90 0003            CALLA  36D90h
33d70: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
33da0: 4c68                      MOVE   A3,A8
33db0: 09af 0009                 MMFM   SP,A0,A3
33dd0: 0960                      RETS   
33de0: 0000                      DW     0000h
33df0: 4f80                      MOVE   A12,B0

FD$UTOF:
33e00: a38f                      MOVE   A12,-*SP,1
33e10: 07ac 0000 0000            MOVE   @0h,A12,1
33e40: ca1a                      JREQ   33FF0h
33e50: 0628 4c00 0000            CMOVGC A8,00004C,0
33e80: d83e 00c0                 CEXEC  0,00181F,0
33ea0: d806 1bb0                 CEXEC  0,037603,0
33ec0: d80a 0000                 CEXEC  0,000005,0
33ee0: 0660 4e01 000c            CMOVCS ,000C4E,0
33f10: cf08                      JRNN   33FA0h
33f20: 09ec 3de0 0003            MOVI   33DE0h,A12
33f50: 0681 8d0c 0010            CMOVMC *A12+,1,0,00108D,0
33f80: d802 0000                 CEXEC  0,000001,0
33fa0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
33fd0: 97ec                      MOVE   *SP+,A12,1
33fe0: 0960                      RETS   
33ff0: 098f c000                 MMTM   SP,A0,A1
34010: 5600                      CLR    A0
34020: 4d08                      MOVE   A8,A8
34030: ca15                      JREQ   34190h
34040: 6b01                      LMO    A8,A1
34050: 1021                      INC    A1
34060: 0b41 ffdf                 CMPI   20h,A1
34080: cb02                      JRNE   340B0h
34090: 5708                      CLR    A8
340a0: c001                      JR     340C0h
340b0: 6228                      SLL    A1,A8
340c0: 03a1                      NEG    A1
340d0: 2ee8                      SRL    9h,A8
340e0: c905                      JRNC   34140h
340f0: 1028                      INC    A8
34100: 1d08                      BTST   17h,A8
34110: ca02                      JREQ   34140h
34120: 1021                      INC    A1
34130: 2fe8                      SRL    1h,A8
34140: 0b01 009f                 ADDI   9Fh,A1
34160: 26e1                      SLL    17h,A1
34170: 5420                      OR     A1,A0
34180: 5500                      OR     A8,A0
34190: 920e                      MOVE   A0,*A14+,1
341a0: 09af 0003                 MMFM   SP,A0,A1
341c0: 97ec                      MOVE   *SP+,A12,1
341d0: 0960                      RETS   

FD$MUL:
341e0: 07a8 0000 0000            MOVE   @0h,A8,1
34210: ca13                      JREQ   34350h
34220: a38f                      MOVE   A12,-*SP,1
34230: 4dcc                      MOVE   A14,A12
34240: 0bec ff7f                 SUBI   80h,A12
34260: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
34290: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
342c0: 0bee ff7f                 SUBI   80h,A14
342e0: d823 0000                 CEXEC  1,000011,0
34300: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
34330: 97ec                      MOVE   *SP+,A12,1
34340: 0960                      RETS   
34350: 098f ff70                 MMTM   SP,A0-A7,A9-A11
34370: a7c1                      MOVE   -*A14,A1,1
34380: a7c0                      MOVE   -*A14,A0,1
34390: a7c3                      MOVE   -*A14,A3,1
343a0: a7c2                      MOVE   -*A14,A2,1
343b0: 56a5                      CLR    A5
343c0: 4c00                      MOVE   A0,A0
343d0: ca5f                      JREQ   349D0h
343e0: 4c42                      MOVE   A2,A2
343f0: ca5d                      JREQ   349D0h
34400: 4c08                      MOVE   A0,A8
34410: 4c4b                      MOVE   A2,A11
34420: 242b                      SLL    1h,A11
34430: 474a                      SUBB   A10,A10
34440: 2428                      SLL    1h,A8
34450: 46a5                      SUBB   A5,A5
34460: 56aa                      XOR    A5,A10
34470: 27ea                      SLL    1Fh,A10
34480: 2d68                      SRL    15h,A8
34490: 2d6b                      SRL    15h,A11
344a0: 0b4b f800                 CMPI   7FFh,A11
344c0: ca56                      JREQ   34A30h
344d0: 0b48 f800                 CMPI   7FFh,A8
344f0: ca52                      JREQ   34A20h
34500: 410b                      ADD    A8,A11
34510: 0beb fc00                 SUBI   3FFh,A11
34530: 4c68                      MOVE   A3,A8
34540: 2563                      SLL    Bh,A3
34550: 2562                      SLL    Bh,A2
34560: 0ba2 0000 8000            ORI    80000000h,A2
34590: 2d68                      SRL    15h,A8
345a0: 5502                      OR     A8,A2
345b0: 4c28                      MOVE   A1,A8
345c0: 2560                      SLL    Bh,A0
345d0: 2561                      SLL    Bh,A1
345e0: 0ba0 0000 8000            ORI    80000000h,A0
34610: 2d68                      SRL    15h,A8
34620: 5500                      OR     A8,A0
34630: 4c08                      MOVE   A0,A8
34640: 4c26                      MOVE   A1,A6
34650: 4c24                      MOVE   A1,A4
34660: 5e40                      MPYU   A2,A0
34670: 5e68                      MPYU   A3,A8
34680: 5e46                      MPYU   A2,A6
34690: 5e64                      MPYU   A3,A4
346a0: 56a5                      CLR    A5
346b0: 4d22                      MOVE   A9,A2
346c0: 4101                      ADD    A8,A1
346d0: 42a0                      ADDC   A5,A0
346e0: 40e2                      ADD    A7,A2
346f0: 42c1                      ADDC   A6,A1
34700: 42a0                      ADDC   A5,A0
34710: 4082                      ADD    A4,A2
34720: 42a1                      ADDC   A5,A1
34730: 42a0                      ADDC   A5,A0
34740: ca28                      JREQ   349D0h
34750: 102b                      INC    A11
34760: 1c00                      BTST   1Fh,A0
34770: cb04                      JRNE   347C0h
34780: 142b                      DEC    A11
34790: 2420                      SLL    1h,A0
347a0: 2421                      SLL    1h,A1
347b0: 42a0                      ADDC   A5,A0
347c0: 1ea1                      BTST   Ah,A1
347d0: ca06                      JREQ   34840h
347e0: 0b01 0400                 ADDI   400h,A1
34800: 42a0                      ADDC   A5,A0
34810: c902                      JRNC   34840h
34820: 102b                      INC    A11
34830: c003                      JR     34870h
34840: 2420                      SLL    1h,A0
34850: 2421                      SLL    1h,A1
34860: 42a0                      ADDC   A5,A0
34870: 4d6b                      MOVE   A11,A11
34880: c42a                      JRLT   34B30h
34890: ca10                      JREQ   349A0h
348a0: 0b4b f800                 CMPI   7FFh,A11
348c0: c51d                      JRGE   34AA0h
348d0: 4c05                      MOVE   A0,A5
348e0: 2685                      SLL    14h,A5
348f0: 2e81                      SRL    Ch,A1
34900: 2e80                      SRL    Ch,A0
34910: 54a1                      OR     A5,A1
34920: 268b                      SLL    14h,A11
34930: 5560                      OR     A11,A0
34940: 5540                      OR     A10,A0
34950: 920e                      MOVE   A0,*A14+,1
34960: 922e                      MOVE   A1,*A14+,1
34970: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
34990: 0960                      RETS   
349a0: 4c00                      MOVE   A0,A0
349b0: cb17                      JRNE   34B30h
349c0: c0f0                      JR     348D0h
349d0: 92ae                      MOVE   A5,*A14+,1
349e0: 92ae                      MOVE   A5,*A14+,1
349f0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
34a10: 0960                      RETS   
34a20: 4d68                      MOVE   A11,A8
34a30: 4d08                      MOVE   A8,A8
34a40: ca0b                      JREQ   34B00h
34a50: 09e0 0000 7ff0            MOVI   7FF00000h,A0
34a80: 5621                      CLR    A1
34a90: c0ea                      JR     34940h
34aa0: 09e3 0000 7ff0            MOVI   7FF00000h,A3
34ad0: 5543                      OR     A10,A3
34ae0: 18c0                      MOVK   6h,A0
34af0: c005                      JR     34B50h
34b00: 5663                      CLR    A3
34b10: 1960                      MOVK   Bh,A0
34b20: c002                      JR     34B50h
34b30: 5663                      CLR    A3
34b40: 19a0                      MOVK   Dh,A0
34b50: a3cf                      MOVE   A14,-*SP,1
34b60: 920e                      MOVE   A0,*A14+,1
34b70: 0d5f 6d90 0003            CALLA  36D90h
34ba0: 5600                      CLR    A0
34bb0: 926e                      MOVE   A3,*A14+,1
34bc0: 920e                      MOVE   A0,*A14+,1
34bd0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
34bf0: 0960                      RETS   

FS$SUB_R:
34c00: 07a8 0000 0000            MOVE   @0h,A8,1
34c30: ca30                      JREQ   34F40h
34c40: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
34c70: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
34ca0: d83e 0060                 CEXEC  0,000C1F,0
34cc0: d802 0000                 CEXEC  0,000001,0
34ce0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
34d10: 0960                      RETS   

FS$SUB:
34d20: 07a8 0000 0000            MOVE   @0h,A8,1
34d50: ca26                      JREQ   34FC0h
34d60: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
34d90: d83e 0060                 CEXEC  0,000C1F,0
34db0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
34de0: d802 0000                 CEXEC  0,000001,0
34e00: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
34e30: 0960                      RETS   

FS$ADD:
34e40: 07a8 0000 0000            MOVE   @0h,A8,1
34e70: ca1b                      JREQ   35030h
34e80: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
34eb0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
34ee0: d802 0000                 CEXEC  0,000001,0
34f00: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
34f30: 0960                      RETS   
34f40: 098f fa00                 MMTM   SP,A0-A4,A6
34f60: a7c6                      MOVE   -*A14,A6,1
34f70: a7c8                      MOVE   -*A14,A8,1
34f80: 0bc8 0000 8000            XORI   80000000h,A8
34fb0: c00b                      JR     35070h
34fc0: 098f fa00                 MMTM   SP,A0-A4,A6
34fe0: a7c8                      MOVE   -*A14,A8,1
34ff0: 0bc8 0000 8000            XORI   80000000h,A8
35020: c003                      JR     35060h
35030: 098f fa00                 MMTM   SP,A0-A4,A6
35050: a7c8                      MOVE   -*A14,A8,1
35060: a7c6                      MOVE   -*A14,A6,1
35070: 4cc3                      MOVE   A6,A3
35080: 2423                      SLL    1h,A3
35090: ca59                      JREQ   35630h
350a0: 4d02                      MOVE   A8,A2
350b0: 2422                      SLL    1h,A2
350c0: ca5a                      JREQ   35670h
350d0: 2428                      SLL    1h,A8
350e0: 4600                      SUBB   A0,A0
350f0: 27e0                      SLL    1Fh,A0
35100: 2426                      SLL    1h,A6
35110: 4621                      SUBB   A1,A1
35120: 27e1                      SLL    1Fh,A1
35130: 2d02                      SRL    18h,A2
35140: 2d03                      SRL    18h,A3
35150: 2508                      SLL    8h,A8
35160: 2fa8                      SRL    3h,A8
35170: 0ba8 0000 2000            ORI    20000000h,A8
351a0: 2506                      SLL    8h,A6
351b0: 2fa6                      SRL    3h,A6
351c0: 0ba6 0000 2000            ORI    20000000h,A6
351f0: 0b42 ff00                 CMPI   FFh,A2
35210: ca4b                      JREQ   356D0h
35220: 0b43 ff00                 CMPI   FFh,A3
35240: ca4e                      JREQ   35730h
35250: 4462                      SUB    A3,A2
35260: ca03                      JREQ   352A0h
35270: c605                      JRLE   352D0h
35280: 4043                      ADD    A2,A3
35290: c00c                      JR     35360h
352a0: 4906                      CMP    A8,A6
352b0: c208                      JRLS   35340h
352c0: c001                      JR     352E0h
352d0: 03a2                      NEG    A2
352e0: 56c8                      XOR    A6,A8
352f0: 5706                      XOR    A8,A6
35300: 56c8                      XOR    A6,A8
35310: 5601                      XOR    A0,A1
35320: 5620                      XOR    A1,A0
35330: 5601                      XOR    A0,A1
35340: 4c42                      MOVE   A2,A2
35350: ca07                      JREQ   353D0h
35360: 0b42 ffe1                 CMPI   1Eh,A2
35380: c402                      JRLT   353B0h
35390: 56c6                      CLR    A6
353a0: c002                      JR     353D0h
353b0: 03a2                      NEG    A2
353c0: 6646                      SRL    A2,A6
353d0: 4801                      CMP    A0,A1
353e0: ca08                      JREQ   35470h
353f0: 44c8                      SUB    A6,A8
35400: 6b06                      LMO    A8,A6
35410: ca27                      JREQ   35690h
35420: 1446                      SUBK   2h,A6
35430: ca08                      JREQ   354C0h
35440: 44c3                      SUB    A6,A3
35450: 62c8                      SLL    A6,A8
35460: c005                      JR     354C0h
35470: 40c8                      ADD    A6,A8
35480: 1c28                      BTST   1Eh,A8
35490: ca02                      JREQ   354C0h
354a0: 1023                      INC    A3
354b0: 2fe8                      SRL    1h,A8
354c0: 0b08 0020                 ADDI   20h,A8
354e0: 1c28                      BTST   1Eh,A8
354f0: ca02                      JREQ   35520h
35500: 1023                      INC    A3
35510: c001                      JR     35530h
35520: 2428                      SLL    1h,A8
35530: 0b88 0000 c000            ANDI   3FFFFFFFh,A8
35560: 4c63                      MOVE   A3,A3
35570: c42d                      JRLT   35850h
35580: cb03                      JRNE   355C0h
35590: 2f28                      SRL    7h,A8
355a0: cb2a                      JRNE   35850h
355b0: c00d                      JR     35690h
355c0: 0b43 ff00                 CMPI   FFh,A3
355e0: c520                      JRGE   357F0h
355f0: 2f28                      SRL    7h,A8
35600: 26e3                      SLL    17h,A3
35610: 5468                      OR     A3,A8
35620: 5408                      OR     A0,A8
35630: 930e                      MOVE   A8,*A14+,1
35640: 09af 005f                 MMFM   SP,A0-A4,A6
35660: 0960                      RETS   
35670: 4cc8                      MOVE   A6,A8
35680: c0fa                      JR     35630h
35690: 930e                      MOVE   A8,*A14+,1
356a0: 09af 005f                 MMFM   SP,A0-A4,A6
356c0: 0960                      RETS   
356d0: 0b43 ff00                 CMPI   FFh,A3
356f0: cb04                      JRNE   35740h
35700: 4801                      CMP    A0,A1
35710: cb0a                      JRNE   357C0h
35720: c001                      JR     35740h
35730: 4c20                      MOVE   A1,A0
35740: 09e8 0000 7f80            MOVI   7F800000h,A8
35770: 5408                      OR     A0,A8
35780: 930e                      MOVE   A8,*A14+,1
35790: 09af 005f                 MMFM   SP,A0-A4,A6
357b0: 0960                      RETS   
357c0: 1880                      MOVK   4h,A0
357d0: 5663                      CLR    A3
357e0: c008                      JR     35870h
357f0: 4c03                      MOVE   A0,A3
35800: 0ba3 0000 7f80            ORI    7F800000h,A3
35830: 18a0                      MOVK   5h,A0
35840: c002                      JR     35870h
35850: 1980                      MOVK   Ch,A0
35860: 5663                      CLR    A3
35870: a3cf                      MOVE   A14,-*SP,1
35880: 920e                      MOVE   A0,*A14+,1
35890: 0d5f 6d90 0003            CALLA  36D90h
358c0: 926e                      MOVE   A3,*A14+,1
358d0: 09af 005f                 MMFM   SP,A0-A4,A6
358f0: 0960                      RETS   

FS$DIV_R:
35900: 07a8 0000 0000            MOVE   @0h,A8,1
35930: ca1c                      JREQ   35B00h
35940: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
35970: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
359a0: d826 0000                 CEXEC  0,000013,0
359c0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
359f0: 0960                      RETS   

FS$DIV:
35a00: 07a8 0000 0000            MOVE   @0h,A8,1
35a30: ca11                      JREQ   35B50h
35a40: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
35a70: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
35aa0: d826 0000                 CEXEC  0,000013,0
35ac0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
35af0: 0960                      RETS   
35b00: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
35b20: a7c2                      MOVE   -*A14,A2,1
35b30: a7c4                      MOVE   -*A14,A4,1
35b40: c004                      JR     35B90h
35b50: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
35b70: a7c4                      MOVE   -*A14,A4,1
35b80: a7c2                      MOVE   -*A14,A2,1
35b90: 4c48                      MOVE   A2,A8
35ba0: 2528                      SLL    9h,A8
35bb0: 2f68                      SRL    5h,A8
35bc0: 0ba8 0000 0800            ORI    8000000h,A8
35bf0: 4c80                      MOVE   A4,A0
35c00: 2520                      SLL    9h,A0
35c10: 2fe0                      SRL    1h,A0
35c20: 0ba0 0000 8000            ORI    80000000h,A0
35c50: 2422                      SLL    1h,A2
35c60: 4729                      SUBB   A9,A9
35c70: 2424                      SLL    1h,A4
35c80: 46c6                      SUBB   A6,A6
35c90: 5726                      XOR    A9,A6
35ca0: 27e6                      SLL    1Fh,A6
35cb0: 2d02                      SRL    18h,A2
35cc0: 2d04                      SRL    18h,A4
35cd0: ca36                      JREQ   36040h
35ce0: 0b44 ff00                 CMPI   FFh,A4
35d00: ca24                      JREQ   35F50h
35d10: 0b42 ff00                 CMPI   FFh,A2
35d30: ca19                      JREQ   35ED0h
35d40: 4c42                      MOVE   A2,A2
35d50: ca21                      JREQ   35F70h
35d60: 4482                      SUB    A4,A2
35d70: 5729                      CLR    A9
35d80: 5a08                      DIVU   A0,A8
35d90: 1c68                      BTST   1Ch,A8
35da0: ca02                      JREQ   35DD0h
35db0: 1022                      INC    A2
35dc0: 2fe8                      SRL    1h,A8
35dd0: 1108                      ADDK   8h,A8
35de0: 1c68                      BTST   1Ch,A8
35df0: ca02                      JREQ   35E20h
35e00: 1022                      INC    A2
35e10: c002                      JR     35E40h
35e20: 1422                      DEC    A2
35e30: 2428                      SLL    1h,A8
35e40: 0b88 0000 f000            ANDI   FFFFFFFh,A8
35e70: 0b02 007f                 ADDI   7Fh,A2
35e90: c617                      JRLE   36010h
35ea0: 0b42 ff00                 CMPI   FFh,A2
35ec0: c50f                      JRGE   35FC0h
35ed0: 2f68                      SRL    5h,A8
35ee0: 26e2                      SLL    17h,A2
35ef0: 54c2                      OR     A6,A2
35f00: 5448                      OR     A2,A8
35f10: 930e                      MOVE   A8,*A14+,1
35f20: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
35f40: 0960                      RETS   
35f50: 4882                      CMP    A4,A2
35f60: ca12                      JREQ   36090h
35f70: 5708                      CLR    A8
35f80: 930e                      MOVE   A8,*A14+,1
35f90: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
35fb0: 0960                      RETS   
35fc0: 0ba6 0000 7f80            ORI    7F800000h,A6
35ff0: 18e0                      MOVK   7h,A0
36000: c00c                      JR     360D0h
36010: 56c6                      CLR    A6
36020: 19c0                      MOVK   Eh,A0
36030: c009                      JR     360D0h
36040: 0ba6 0000 7f80            ORI    7F800000h,A6
36070: 19e0                      MOVK   Fh,A0
36080: c004                      JR     360D0h
36090: 0ba6 0000 3f80            ORI    3F800000h,A6
360c0: 1a00                      MOVK   10h,A0
360d0: a3cf                      MOVE   A14,-*SP,1
360e0: 920e                      MOVE   A0,*A14+,1
360f0: 0d5f 6d90 0003            CALLA  36D90h
36120: 92ce                      MOVE   A6,*A14+,1
36130: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
36150: 0960                      RETS   

FS$INC:
36160: a32f                      MOVE   A9,-*SP,1
36170: 4d09                      MOVE   A8,A9
36180: c003                      JR     361C0h

FS$INCR:
36190: a32f                      MOVE   A9,-*SP,1
361a0: 4d09                      MOVE   A8,A9
361b0: 9b0e                      MOVE   *A8+,*A14+,1
361c0: 9b2e                      MOVE   *A9+,*A14+,1
361d0: 09e8 0000 3f80            MOVI   3F800000h,A8
36200: 930e                      MOVE   A8,*A14+,1
36210: 0d5f 4e40 0003            CALLA  34E40h
36240: abc9                      MOVE   -*A14,-*A9,1
36250: 97e9                      MOVE   *SP+,A9,1
36260: 0960                      RETS   

FS$INCRX:
36270: 930e                      MOVE   A8,*A14+,1

FS$INCX:
36280: 930e                      MOVE   A8,*A14+,1
36290: 09e8 0000 3f80            MOVI   3F800000h,A8
362c0: 930e                      MOVE   A8,*A14+,1
362d0: 0d5f 4e40 0003            CALLA  34E40h
36300: a7c8                      MOVE   -*A14,A8,1
36310: 0960                      RETS   

FS$MUL:
36320: 07a8 0000 0000            MOVE   @0h,A8,1
36350: ca0c                      JREQ   36420h
36360: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
36390: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
363c0: d822 0000                 CEXEC  0,000011,0
363e0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
36410: 0960                      RETS   
36420: 098f a840                 MMTM   SP,A0,A2,A4,A9
36440: a7c8                      MOVE   -*A14,A8,1
36450: a7c9                      MOVE   -*A14,A9,1
36460: 4d08                      MOVE   A8,A8
36470: ca3d                      JREQ   36850h
36480: 4d29                      MOVE   A9,A9
36490: ca3b                      JREQ   36850h
364a0: 2428                      SLL    1h,A8
364b0: 4684                      SUBB   A4,A4
364c0: 2429                      SLL    1h,A9
364d0: 4600                      SUBB   A0,A0
364e0: 5604                      XOR    A0,A4
364f0: 27e4                      SLL    1Fh,A4
36500: 4d00                      MOVE   A8,A0
36510: 4d22                      MOVE   A9,A2
36520: 2d00                      SRL    18h,A0
36530: 2d02                      SRL    18h,A2
36540: 0b42 ff00                 CMPI   FFh,A2
36560: ca34                      JREQ   368B0h
36570: 0b40 ff00                 CMPI   FFh,A0
36590: ca30                      JREQ   368A0h
365a0: 4002                      ADD    A0,A2
365b0: 0be2 ff80                 SUBI   7Fh,A2
365d0: 2508                      SLL    8h,A8
365e0: 2fe8                      SRL    1h,A8
365f0: 0ba8 0000 8000            ORI    80000000h,A8
36620: 2509                      SLL    8h,A9
36630: 2fe9                      SRL    1h,A9
36640: 0ba9 0000 8000            ORI    80000000h,A9
36670: 5f28                      MPYU   A9,A8
36680: ca1c                      JREQ   36850h
36690: 1022                      INC    A2
366a0: 1c08                      BTST   1Fh,A8
366b0: cb02                      JRNE   366E0h
366c0: 1422                      DEC    A2
366d0: 2428                      SLL    1h,A8
366e0: 0b08 0080                 ADDI   80h,A8
36700: c902                      JRNC   36730h
36710: 1022                      INC    A2
36720: c001                      JR     36740h
36730: 2428                      SLL    1h,A8
36740: 4c42                      MOVE   A2,A2
36750: c424                      JRLT   369A0h
36760: ca0b                      JREQ   36820h
36770: 0b42 ff00                 CMPI   FFh,A2
36790: c517                      JRGE   36910h
367a0: 2ee8                      SRL    9h,A8
367b0: 26e2                      SLL    17h,A2
367c0: 5448                      OR     A2,A8
367d0: 5488                      OR     A4,A8
367e0: 930e                      MOVE   A8,*A14+,1
367f0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
36810: 0960                      RETS   
36820: 4d08                      MOVE   A8,A8
36830: cb16                      JRNE   369A0h
36840: c0f5                      JR     367A0h
36850: 5708                      CLR    A8
36860: 930e                      MOVE   A8,*A14+,1
36870: 09af 0215                 MMFM   SP,A0,A2,A4,A9
36890: 0960                      RETS   
368a0: 4c40                      MOVE   A2,A0
368b0: 4c00                      MOVE   A0,A0
368c0: ca0a                      JREQ   36970h
368d0: 09e8 0000 7ff0            MOVI   7FF00000h,A8
36900: c0ec                      JR     367D0h
36910: 09e9 0000 7ff0            MOVI   7FF00000h,A9
36940: 5489                      OR     A4,A9
36950: 18c0                      MOVK   6h,A0
36960: c005                      JR     369C0h
36970: 5729                      CLR    A9
36980: 1960                      MOVK   Bh,A0
36990: c002                      JR     369C0h
369a0: 5729                      CLR    A9
369b0: 19a0                      MOVK   Dh,A0
369c0: a3cf                      MOVE   A14,-*SP,1
369d0: 920e                      MOVE   A0,*A14+,1
369e0: 0d5f 6d90 0003            CALLA  36D90h
36a10: 932e                      MOVE   A9,*A14+,1
36a20: 09af 0215                 MMFM   SP,A0,A2,A4,A9
36a40: 0960                      RETS   

_div:
36a50: 098f 003c                 MMTM   SP,A10-A13
36a70: 4dcd                      MOVE   A14,A13
36a80: 0b0e 0040                 ADDI   40h,A14
36aa0: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
36ac0: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
36ae0: 4d8b                      MOVE   A12,A11
36af0: 594b                      DIVS   A10,A11
36b00: 836d                      MOVE   A11,*A13,1
36b10: 6d4c                      MODS   A10,A12
36b20: b38d 0020                 MOVE   A12,*A13(20h),1
36b40: 4da8                      MOVE   A13,A8
36b50: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
36b70: ca02                      JREQ   36BA0h
36b80: 9b0d                      MOVE   *A8+,*A13+,1
36b90: 8b0d                      MOVE   *A8,*A13,1
36ba0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
36bc0: 09af 3c00                 MMFM   SP,A10-A13
36be0: 0962                      RETS   2h

_ldiv:
36bf0: 098f 003c                 MMTM   SP,A10-A13
36c10: 4dcd                      MOVE   A14,A13
36c20: 0b0e 0040                 ADDI   40h,A14
36c40: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
36c60: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
36c80: 4d8b                      MOVE   A12,A11
36c90: 594b                      DIVS   A10,A11
36ca0: 836d                      MOVE   A11,*A13,1
36cb0: 6d4c                      MODS   A10,A12
36cc0: b38d 0020                 MOVE   A12,*A13(20h),1
36ce0: 4da8                      MOVE   A13,A8
36cf0: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
36d10: ca02                      JREQ   36D40h
36d20: 9b0d                      MOVE   *A8+,*A13+,1
36d30: 8b0d                      MOVE   *A8,*A13,1
36d40: b7ee 00a0                 MOVE   *SP(A0h),A14,1
36d60: 09af 3c00                 MMFM   SP,A10-A13
36d80: 0962                      RETS   2h

_fp_error:
36d90: a3af                      MOVE   A13,-*SP,1
36da0: 4dcd                      MOVE   A14,A13
36db0: b7ee 0040                 MOVE   *SP(40h),A14,1
36dd0: 97ed                      MOVE   *SP+,A13,1
36de0: 0962                      RETS   2h
