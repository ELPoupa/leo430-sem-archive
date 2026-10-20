; g500.rlm .text, 19463 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_MonitorStage:
00000: 098f 002c                 MMTM   SP,A10,A12,A13
00020: 4dcd                      MOVE   A14,A13
00030: 0b0e 0160                 ADDI   160h,A14
00050: 182c                      MOVK   1h,A12
00060: 4508                      SUB    A8,A8
00070: 0788 d290 0004            MOVE   A8,@4D290h,1
000a0: a3cf                      MOVE   A14,-*SP,1
000b0: 09c8 06e0                 MOVI   6E0h,A8
000d0: 930e                      MOVE   A8,*A14+,1
000e0: 09e8 93c0 0005            MOVI   593C0h,A8
00110: 930e                      MOVE   A8,*A14+,1
00120: 09e8 5453 4d47            MOVI   4D475453h,A8
00150: 930e                      MOVE   A8,*A14+,1
00160: 1928                      MOVK   9h,A8
00170: 930e                      MOVE   A8,*A14+,1
00180: 0d5f 0000 0000            CALLA  0h
001b0: a3cf                      MOVE   A14,-*SP,1
001c0: 09c8 006c                 MOVI   6Ch,A8
001e0: 930e                      MOVE   A8,*A14+,1
001f0: 09e8 8d60 0005            MOVI   58D60h,A8
00220: 930e                      MOVE   A8,*A14+,1
00230: 09e8 5453 4d47            MOVI   4D475453h,A8
00260: 930e                      MOVE   A8,*A14+,1
00270: 1948                      MOVK   Ah,A8
00280: 930e                      MOVE   A8,*A14+,1
00290: 0d5f 0000 0000            CALLA  0h
002c0: a3cf                      MOVE   A14,-*SP,1
002d0: 09c8 0054                 MOVI   54h,A8
002f0: 930e                      MOVE   A8,*A14+,1
00300: 09e8 90c0 0005            MOVI   590C0h,A8
00330: 930e                      MOVE   A8,*A14+,1
00340: 1928                      MOVK   9h,A8
00350: 930e                      MOVE   A8,*A14+,1
00360: 0d5f 0000 0000            CALLA  0h
00390: 4d0a                      MOVE   A8,A10
003a0: 1628                      SUBK   11h,A8
003b0: cb16                      JRNE   520h
003c0: 07e8 dd20 0004            MOVE   @4DD20h,A8
003f0: 3a48                      DSJS   A8,520h
00400: 0d5f 7080 0000            CALLA  7080h
00430: 07a8 82c0 0005            MOVE   @582C0h,A8,1
00460: 1428                      DEC    A8
00470: 0788 82c0 0005            MOVE   A8,@582C0h,1
004a0: c707                      JRGT   520h
004b0: 0d5f 22d0 0001            CALLA  122D0h
004e0: 18e8                      MOVK   7h,A8
004f0: 0788 82c0 0005            MOVE   A8,@582C0h,1
00520: 4d48                      MOVE   A10,A8
00530: cb00 023d                 JRNE   2920h
00550: 07aa 9100 0005            MOVE   @59100h,A10,1
00580: 142a                      DEC    A10
00590: 378a                      CMPK   1Ch,A10
005a0: c306                      JRHI   610h
005b0: 24aa                      SLL    5h,A10
005c0: 0b2a c080 0004            ADDI   4C080h,A10
005f0: 874a                      MOVE   *A10,A10,1
00600: 016a                      JUMP   A10
00610: 458c                      SUB    A12,A12
00620: c000 022e                 JR     2920h
00640: a3cf                      MOVE   A14,-*SP,1
00650: 09f0 9120 0005            MOVI   59120h,B0
00680: 4fc2                      MOVE   A14,B2
00690: 0b0e 00c0                 ADDI   C0h,A14
006b0: 09d7 00c0                 MOVI   C0h,B7
006d0: 00f3                      BLMOVE 1,1
006e0: d60e 91e0 0005            MOVE   @591E0h,*A14+,1
00710: 07ea 9200 0005            MOVE   @59200h,A10
00740: 934e                      MOVE   A10,*A14+,1
00750: 0d5f 6320 0003            CALLA  36320h
00780: 4d0c                      MOVE   A8,A12
00790: c000 0217                 JR     2920h
007b0: 0548                      SETF   8h,0,0
007c0: 05aa 9120 0005            MOVE   @59120h,A10,0
007f0: 05ea 8280 0005            MOVB   A10,@58280h
00820: ca0a                      JREQ   8D0h
00830: a3cf                      MOVE   A14,-*SP,1
00840: d60e 8260 0005            MOVE   @58260h,*A14+,1
00870: 0d5f 5aa0 0003            CALLA  35AA0h
008a0: 4d0c                      MOVE   A8,A12
008b0: c000 0205                 JR     2920h
008d0: a3cf                      MOVE   A14,-*SP,1
008e0: 09e8 b717 3851            MOVI   3851B717h,A8
00910: 930e                      MOVE   A8,*A14+,1
00920: 0d5f 5aa0 0003            CALLA  35AA0h
00950: 4d0c                      MOVE   A8,A12
00960: c000 01fa                 JR     2920h
00980: a3cf                      MOVE   A14,-*SP,1
00990: 93ae                      MOVE   A13,*A14+,1
009a0: 192c                      MOVK   9h,A12
009b0: 938e                      MOVE   A12,*A14+,1
009c0: 0d5f 0000 0000            CALLA  0h
009f0: 4d0a                      MOVE   A8,A10
00a00: cb1a                      JRNE   BB0h
00a10: c015                      JR     B70h
00a20: a3cf                      MOVE   A14,-*SP,1
00a30: 182c                      MOVK   1h,A12
00a40: 938e                      MOVE   A12,*A14+,1
00a50: 09ea 90c0 0005            MOVI   590C0h,A10
00a80: 934e                      MOVE   A10,*A14+,1
00a90: 1928                      MOVK   9h,A8
00aa0: 930e                      MOVE   A8,*A14+,1
00ab0: 0d5f 0000 0000            CALLA  0h
00ae0: a3cf                      MOVE   A14,-*SP,1
00af0: 93ae                      MOVE   A13,*A14+,1
00b00: 1928                      MOVK   9h,A8
00b10: 930e                      MOVE   A8,*A14+,1
00b20: 0d5f 0000 0000            CALLA  0h
00b50: 4d08                      MOVE   A8,A8
00b60: cb04                      JRNE   BB0h
00b70: b7ac 0040                 MOVE   *A13(40h),A12,1
00b90: 176c                      SUBK   1Bh,A12
00ba0: cae7                      JREQ   A20h
00bb0: 07c0 9120 0005 8260 0005  MOVE   @59120h,@58260h,1
00c00: 0548                      SETF   8h,0,0
00c10: 05aa 8280 0005            MOVE   @58280h,A10,0
00c40: ca0a                      JREQ   CF0h
00c50: a3cf                      MOVE   A14,-*SP,1
00c60: d60e 9120 0005            MOVE   @59120h,*A14+,1
00c90: 0d5f 5aa0 0003            CALLA  35AA0h
00cc0: 4d0c                      MOVE   A8,A12
00cd0: c000 01c3                 JR     2920h
00cf0: 182c                      MOVK   1h,A12
00d00: c000 01c0                 JR     2920h
00d20: 0d5f ba30 0001            CALLA  1BA30h
00d50: 4d0c                      MOVE   A8,A12
00d60: c000 01ba                 JR     2920h
00d80: a3cf                      MOVE   A14,-*SP,1
00d90: 07ea 9120 0005            MOVE   @59120h,A10
00dc0: 934e                      MOVE   A10,*A14+,1
00dd0: 0d5f 47c0 0003            CALLA  347C0h
00e00: c000 01b0                 JR     2920h
00e20: a3cf                      MOVE   A14,-*SP,1
00e30: 07ea 9120 0005            MOVE   @59120h,A10
00e60: 934e                      MOVE   A10,*A14+,1
00e70: 0d5f 4710 0003            CALLA  34710h
00ea0: c000 01a6                 JR     2920h
00ec0: a3cf                      MOVE   A14,-*SP,1
00ed0: 07ea 9120 0005            MOVE   @59120h,A10
00f00: 934e                      MOVE   A10,*A14+,1
00f10: 0d5f 4660 0003            CALLA  34660h
00f40: c000 019c                 JR     2920h
00f60: a3cf                      MOVE   A14,-*SP,1
00f70: 07ea 9120 0005            MOVE   @59120h,A10
00fa0: 934e                      MOVE   A10,*A14+,1
00fb0: 0d5f 45b0 0003            CALLA  345B0h
00fe0: c000 0192                 JR     2920h
01000: a3cf                      MOVE   A14,-*SP,1
01010: 07ea 9120 0005            MOVE   @59120h,A10
01040: 934e                      MOVE   A10,*A14+,1
01050: 0d5f 4500 0003            CALLA  34500h
01080: c000 0188                 JR     2920h
010a0: a3cf                      MOVE   A14,-*SP,1
010b0: 07ea 9120 0005            MOVE   @59120h,A10
010e0: 934e                      MOVE   A10,*A14+,1
010f0: 0d5f 4450 0003            CALLA  34450h
01120: c000 017e                 JR     2920h
01140: 0d5f fe00 0000            CALLA  FE00h
01170: 4d0c                      MOVE   A8,A12
01180: 0568                      SETF   8h,1,0
01190: 050c                      SEXT   A12,0
011a0: 342c                      CMPK   1h,A12
011b0: cb00 0175                 JRNE   2920h
011d0: 07aa d290 0004            MOVE   @4D290h,A10,1
01200: 0baa 0800 0000            ORI    800h,A10
01230: 078a d290 0004            MOVE   A10,@4D290h,1
01260: c000 016a                 JR     2920h
01280: a3cf                      MOVE   A14,-*SP,1
01290: 09ea 9120 0005            MOVI   59120h,A10
012c0: 9b4e                      MOVE   *A10+,*A14+,1
012d0: 9b4e                      MOVE   *A10+,*A14+,1
012e0: 9b4e                      MOVE   *A10+,*A14+,1
012f0: 0d5f 9b50 0000            CALLA  9B50h
01320: c000 015e                 JR     2920h
01340: a3cf                      MOVE   A14,-*SP,1
01350: 09f0 9120 0005            MOVI   59120h,B0
01380: 4fc2                      MOVE   A14,B2
01390: 0b0e 00c0                 ADDI   C0h,A14
013b0: 09d7 00c0                 MOVI   C0h,B7
013d0: 00f3                      BLMOVE 1,1
013e0: 0d5f 9c60 0000            CALLA  9C60h
01410: c000 014f                 JR     2920h
01430: a3cf                      MOVE   A14,-*SP,1
01440: 09ea 9120 0005            MOVI   59120h,A10
01470: 9b4e                      MOVE   *A10+,*A14+,1
01480: 9b4e                      MOVE   *A10+,*A14+,1
01490: 9b4e                      MOVE   *A10+,*A14+,1
014a0: 0d5f 9d50 0000            CALLA  9D50h
014d0: c000 0143                 JR     2920h
014f0: a3cf                      MOVE   A14,-*SP,1
01500: 09f0 9120 0005            MOVI   59120h,B0
01530: 4fc2                      MOVE   A14,B2
01540: 0b0e 00c0                 ADDI   C0h,A14
01560: 09d7 00c0                 MOVI   C0h,B7
01580: 00f3                      BLMOVE 1,1
01590: 0d5f 98d0 0000            CALLA  98D0h
015c0: 4d0c                      MOVE   A8,A12
015d0: cb00 0133                 JRNE   2920h
015f0: 07aa d290 0004            MOVE   @4D290h,A10,1
01620: 0baa 0020 0000            ORI    20h,A10
01650: 078a d290 0004            MOVE   A10,@4D290h,1
01680: c000 0128                 JR     2920h
016a0: a3cf                      MOVE   A14,-*SP,1
016b0: 09ea 9120 0005            MOVI   59120h,A10
016e0: 9b4e                      MOVE   *A10+,*A14+,1
016f0: 9b4e                      MOVE   *A10+,*A14+,1
01700: 9b4e                      MOVE   *A10+,*A14+,1
01710: 0d5f 9650 0000            CALLA  9650h
01740: 4d0c                      MOVE   A8,A12
01750: cb00 011b                 JRNE   2920h
01770: 07aa d290 0004            MOVE   @4D290h,A10,1
017a0: 0baa 0020 0000            ORI    20h,A10
017d0: 078a d290 0004            MOVE   A10,@4D290h,1
01800: c000 0110                 JR     2920h
01820: a3cf                      MOVE   A14,-*SP,1
01830: 09ea 9120 0005            MOVI   59120h,A10
01860: 9b4e                      MOVE   *A10+,*A14+,1
01870: 9b4e                      MOVE   *A10+,*A14+,1
01880: 9b4e                      MOVE   *A10+,*A14+,1
01890: 0d5f 93d0 0000            CALLA  93D0h
018c0: 4d0c                      MOVE   A8,A12
018d0: cb00 0103                 JRNE   2920h
018f0: 07aa d290 0004            MOVE   @4D290h,A10,1
01920: 0baa 0020 0000            ORI    20h,A10
01950: 078a d290 0004            MOVE   A10,@4D290h,1
01980: c000 00f8                 JR     2920h
019a0: 0d5f 4670 0001            CALLA  14670h
019d0: 0d5f 7080 0000            CALLA  7080h
01a00: 4d0c                      MOVE   A8,A12
01a10: c000 00ef                 JR     2920h
01a30: a3cf                      MOVE   A14,-*SP,1
01a40: 07ea 9120 0005            MOVE   @59120h,A10
01a70: 934e                      MOVE   A10,*A14+,1
01a80: 0d5f 8ff0 0002            CALLA  28FF0h
01ab0: c000 00e5                 JR     2920h
01ad0: a3cf                      MOVE   A14,-*SP,1
01ae0: 07ea 9120 0005            MOVE   @59120h,A10
01b10: 934e                      MOVE   A10,*A14+,1
01b20: 0d5f 5a10 0002            CALLA  25A10h
01b50: c000 00db                 JR     2920h
01b70: 07aa d290 0004            MOVE   @4D290h,A10,1
01ba0: 0baa 1000 0000            ORI    1000h,A10
01bd0: 078a d290 0004            MOVE   A10,@4D290h,1
01c00: 4508                      SUB    A8,A8
01c10: 05e8 dd70 0004            MOVB   A8,@4DD70h
01c40: a3cf                      MOVE   A14,-*SP,1
01c50: 09f0 9120 0005            MOVI   59120h,B0
01c80: 4fc2                      MOVE   A14,B2
01c90: 0b0e 00c0                 ADDI   C0h,A14
01cb0: 09d7 00c0                 MOVI   C0h,B7
01cd0: 00f3                      BLMOVE 1,1
01ce0: 0d5f bb30 0001            CALLA  1BB30h
01d10: 0d5f 7080 0000            CALLA  7080h
01d40: 07aa d290 0004            MOVE   @4D290h,A10,1
01d70: 0baa 0010 0000            ORI    10h,A10
01da0: 078a d290 0004            MOVE   A10,@4D290h,1
01dd0: c000 00b3                 JR     2920h
01df0: 0d5f 0000 0000            CALLA  0h
01e20: 07aa d290 0004            MOVE   @4D290h,A10,1
01e50: 0baa 1000 0000            ORI    1000h,A10
01e80: 078a d290 0004            MOVE   A10,@4D290h,1
01eb0: 4508                      SUB    A8,A8
01ec0: 05e8 dd70 0004            MOVB   A8,@4DD70h
01ef0: a3cf                      MOVE   A14,-*SP,1
01f00: 09ea 9120 0005            MOVI   59120h,A10
01f30: 9b4e                      MOVE   *A10+,*A14+,1
01f40: 9b4e                      MOVE   *A10+,*A14+,1
01f50: 9b4e                      MOVE   *A10+,*A14+,1
01f60: 0d5f 73d0 0000            CALLA  73D0h
01f90: 0d5f 7080 0000            CALLA  7080h
01fc0: 07aa d290 0004            MOVE   @4D290h,A10,1
01ff0: 0baa 0010 0000            ORI    10h,A10
02020: 078a d290 0004            MOVE   A10,@4D290h,1
02050: 0d5f 0000 0000            CALLA  0h
02080: c000 0088                 JR     2920h
020a0: 0d5f 7080 0000            CALLA  7080h
020d0: 4d0c                      MOVE   A8,A12
020e0: c000 0082                 JR     2920h
02100: a3cf                      MOVE   A14,-*SP,1
02110: 09f0 9120 0005            MOVI   59120h,B0
02140: 4fc2                      MOVE   A14,B2
02150: 0b0e 00c0                 ADDI   C0h,A14
02170: 09d7 00c0                 MOVI   C0h,B7
02190: 00f3                      BLMOVE 1,1
021a0: 0d5f f5f0 0002            CALLA  2F5F0h
021d0: 4d0c                      MOVE   A8,A12
021e0: cb73                      JRNE   2920h
021f0: 184a                      MOVK   2h,A10
02200: 07a8 d290 0004            MOVE   @4D290h,A8,1
02230: 550a                      OR     A8,A10
02240: 078a d290 0004            MOVE   A10,@4D290h,1
02270: c06a                      JR     2920h
02280: a3cf                      MOVE   A14,-*SP,1
02290: 09f0 9120 0005            MOVI   59120h,B0
022c0: 4fc2                      MOVE   A14,B2
022d0: 0b0e 00c0                 ADDI   C0h,A14
022f0: 09d7 00c0                 MOVI   C0h,B7
02310: 00f3                      BLMOVE 1,1
02320: 0d5f e1d0 0002            CALLA  2E1D0h
02350: 4d0c                      MOVE   A8,A12
02360: cb5b                      JRNE   2920h
02370: 182a                      MOVK   1h,A10
02380: 07a8 d290 0004            MOVE   @4D290h,A8,1
023b0: 550a                      OR     A8,A10
023c0: 078a d290 0004            MOVE   A10,@4D290h,1
023f0: c052                      JR     2920h
02400: 07aa d290 0004            MOVE   @4D290h,A10,1
02430: 0baa 1000 0000            ORI    1000h,A10
02460: 078a d290 0004            MOVE   A10,@4D290h,1
02490: 4508                      SUB    A8,A8
024a0: 05e8 dd70 0004            MOVB   A8,@4DD70h
024d0: 0d5f 3020 0000            CALLA  3020h
02500: 0d5f 7080 0000            CALLA  7080h
02530: 07aa d290 0004            MOVE   @4D290h,A10,1
02560: 0baa 0010 0000            ORI    10h,A10
02590: 078a d290 0004            MOVE   A10,@4D290h,1
025c0: c035                      JR     2920h
025d0: a3cf                      MOVE   A14,-*SP,1
025e0: 09f0 9120 0005            MOVI   59120h,B0
02610: 4fc2                      MOVE   A14,B2
02620: 0b0e 00c0                 ADDI   C0h,A14
02640: 09d7 00c0                 MOVI   C0h,B7
02660: 00f3                      BLMOVE 1,1
02670: 0d5f 2c70 0000            CALLA  2C70h
026a0: 4d0c                      MOVE   A8,A12
026b0: c026                      JR     2920h
026c0: a3cf                      MOVE   A14,-*SP,1
026d0: 07ea 9120 0005            MOVE   @59120h,A10
02700: 934e                      MOVE   A10,*A14+,1
02710: 0d5f 4fd0 0000            CALLA  4FD0h
02740: 4d0c                      MOVE   A8,A12
02750: 3b88                      DSJS   A8,2920h
02760: 07aa d290 0004            MOVE   @4D290h,A10,1
02790: 0baa 0400 0000            ORI    400h,A10
027c0: 078a d290 0004            MOVE   A10,@4D290h,1
027f0: 0baa 0020 0000            ORI    20h,A10
02820: 078a d290 0004            MOVE   A10,@4D290h,1
02850: 1828                      MOVK   1h,A8
02860: 5548                      OR     A10,A8
02870: 0788 d290 0004            MOVE   A8,@4D290h,1
028a0: 184a                      MOVK   2h,A10
028b0: 550a                      OR     A8,A10
028c0: 078a d290 0004            MOVE   A10,@4D290h,1
028f0: 0d5f 8330 0000            CALLA  8330h
02920: 342c                      CMPK   1h,A12
02930: ca14                      JREQ   2A80h
02940: 182c                      MOVK   1h,A12
02950: 078c d180 0005            MOVE   A12,@5D180h,1
02980: 0340 9100 0005 d1a0 0005  MOVB   @59100h,@5D1A0h
029d0: a3cf                      MOVE   A14,-*SP,1
029e0: 09ea d180 0005            MOVI   5D180h,A10
02a10: 934e                      MOVE   A10,*A14+,1
02a20: d60e 90e0 0005            MOVE   @590E0h,*A14+,1
02a50: 0d5f 0000 0000            CALLA  0h
02a80: 07ea dd30 0004            MOVE   @4DD30h,A10
02ab0: ca00 fd7f                 JREQ   2C0h
02ad0: 1828                      MOVK   1h,A8
02ae0: 0788 d180 0005            MOVE   A8,@5D180h,1
02b10: 0baa 0020 0000            ORI    20h,A10
02b40: 05ea d1a0 0005            MOVB   A10,@5D1A0h
02b70: a3cf                      MOVE   A14,-*SP,1
02b80: 09ea d180 0005            MOVI   5D180h,A10
02bb0: 934e                      MOVE   A10,*A14+,1
02bc0: 1988                      MOVK   Ch,A8
02bd0: 930e                      MOVE   A8,*A14+,1
02be0: 0d5f 0000 0000            CALLA  0h
02c10: 4508                      SUB    A8,A8
02c20: 05e8 dd30 0004            MOVB   A8,@4DD30h
02c50: c000 fd65                 JR     2C0h

_manual_init_tiga_request:
02c70: a3af                      MOVE   A13,-*SP,1
02c80: 4dcd                      MOVE   A14,A13
02c90: a3cf                      MOVE   A14,-*SP,1
02ca0: 4da8                      MOVE   A13,A8
02cb0: 0be8 ff3f                 SUBI   C0h,A8
02cd0: 930e                      MOVE   A8,*A14+,1
02ce0: 0d5f cfa0 0002            CALLA  2CFA0h
02d10: 4d08                      MOVE   A8,A8
02d20: ca2a                      JREQ   2FD0h
02d30: a3cf                      MOVE   A14,-*SP,1
02d40: 09f0 d4c0 0004            MOVI   4D4C0h,B0
02d70: 4fc2                      MOVE   A14,B2
02d80: 0b0e 00c0                 ADDI   C0h,A14
02da0: 09d7 00c0                 MOVI   C0h,B7
02dc0: 00f3                      BLMOVE 1,1
02dd0: 0d5f e1d0 0002            CALLA  2E1D0h
02e00: 4d08                      MOVE   A8,A8
02e10: ca1b                      JREQ   2FD0h
02e20: a3cf                      MOVE   A14,-*SP,1
02e30: 09f0 d580 0004            MOVI   4D580h,B0
02e60: 4fc2                      MOVE   A14,B2
02e70: 0b0e 00c0                 ADDI   C0h,A14
02e90: 09d7 00c0                 MOVI   C0h,B7
02eb0: 00f3                      BLMOVE 1,1
02ec0: 0d5f f5f0 0002            CALLA  2F5F0h
02ef0: 4d08                      MOVE   A8,A8
02f00: cb02                      JRNE   2F30h
02f10: 4508                      SUB    A8,A8
02f20: c00b                      JR     2FE0h
02f30: 0d5f 7080 0000            CALLA  7080h
02f60: 4d08                      MOVE   A8,A8
02f70: 1828                      MOVK   1h,A8
02f80: cb01                      JRNE   2FA0h
02f90: 4508                      SUB    A8,A8
02fa0: 0568                      SETF   8h,1,0
02fb0: 0508                      SEXT   A8,0
02fc0: c001                      JR     2FE0h
02fd0: 4508                      SUB    A8,A8
02fe0: b7ee 0040                 MOVE   *SP(40h),A14,1
03000: 97ed                      MOVE   *SP+,A13,1
03010: 0962                      RETS   2h

_auto_stage_init_tiga_request:
03020: a3af                      MOVE   A13,-*SP,1
03030: 4dcd                      MOVE   A14,A13
03040: 0b0e 01c0                 ADDI   1C0h,A14
03060: a3cf                      MOVE   A14,-*SP,1
03070: 09e8 d9a0 0004            MOVI   4D9A0h,A8
030a0: 930e                      MOVE   A8,*A14+,1
030b0: 0d5f 90a0 0002            CALLA  290A0h
030e0: 4d08                      MOVE   A8,A8
030f0: ca00 01e7                 JREQ   4F80h
03110: 0d5f 0a10 0003            CALLA  30A10h
03140: 4d08                      MOVE   A8,A8
03150: ca00 01e1                 JREQ   4F80h
03170: 07e8 d328 0004            MOVE   @4D328h,A8
031a0: 0d88 0040                 DSJ    A8,35C0h
031c0: 4508                      SUB    A8,A8
031d0: 8d0d                      MOVB   A8,*A13
031e0: ad0d 0008                 MOVB   A8,*A13(8h)
03200: ad0d 0010                 MOVB   A8,*A13(10h)
03220: ad0d 0018                 MOVB   A8,*A13(18h)
03240: ad0d 0020                 MOVB   A8,*A13(20h)
03260: 1828                      MOVK   1h,A8
03270: ad0d 0028                 MOVB   A8,*A13(28h)
03290: a3cf                      MOVE   A14,-*SP,1
032a0: 93ae                      MOVE   A13,*A14+,1
032b0: 0d5f 5980 0001            CALLA  15980h
032e0: 4d08                      MOVE   A8,A8
032f0: ca00 01c7                 JREQ   4F80h
03310: d60e d7a0 0004            MOVE   @4D7A0h,*A14+,1
03340: 0d5f 4980 0004            CALLA  44980h
03370: 4508                      SUB    A8,A8
03380: 930e                      MOVE   A8,*A14+,1
03390: 930e                      MOVE   A8,*A14+,1
033a0: 0d5f 6e20 0004            CALLA  46E20h
033d0: ca0b                      JREQ   3490h
033e0: 07a8 d560 0004            MOVE   @4D560h,A8,1
03410: b30d 00e0                 MOVE   A8,*A13(E0h),1
03430: 07e8 d310 0004            MOVE   @4D310h,A8
03460: 0d88 005a                 DSJ    A8,3A20h
03480: c018                      JR     3610h
03490: d60e d7a0 0004            MOVE   @4D7A0h,*A14+,1
034c0: 09e8 0000 4000            MOVI   40000000h,A8
034f0: 930e                      MOVE   A8,*A14+,1
03500: 0d5f a3c0 0004            CALLA  4A3C0h
03530: d60e d560 0004            MOVE   @4D560h,*A14+,1
03560: 0d5f 8a20 0004            CALLA  48A20h
03590: a7c8                      MOVE   -*A14,A8,1
035a0: b30d 00e0                 MOVE   A8,*A13(E0h),1
035c0: 07e8 d310 0004            MOVE   @4D310h,A8
035f0: 0d88 0041                 DSJ    A8,3A20h
03610: 4508                      SUB    A8,A8
03620: 8d0d                      MOVB   A8,*A13
03630: ad0d 0008                 MOVB   A8,*A13(8h)
03650: 1828                      MOVK   1h,A8
03660: ad0d 0010                 MOVB   A8,*A13(10h)
03680: 4508                      SUB    A8,A8
03690: ad0d 0018                 MOVB   A8,*A13(18h)
036b0: ad0d 0020                 MOVB   A8,*A13(20h)
036d0: ad0d 0028                 MOVB   A8,*A13(28h)
036f0: a3cf                      MOVE   A14,-*SP,1
03700: 93ae                      MOVE   A13,*A14+,1
03710: 0d5f 5980 0001            CALLA  15980h
03740: 4d08                      MOVE   A8,A8
03750: ca00 0181                 JREQ   4F80h
03770: d60e d740 0004            MOVE   @4D740h,*A14+,1
037a0: 0d5f 4980 0004            CALLA  44980h
037d0: 4508                      SUB    A8,A8
037e0: 930e                      MOVE   A8,*A14+,1
037f0: 930e                      MOVE   A8,*A14+,1
03800: 0d5f 6e20 0004            CALLA  46E20h
03830: ca0b                      JREQ   38F0h
03840: 07a8 d500 0004            MOVE   @4D500h,A8,1
03870: b30d 0080                 MOVE   A8,*A13(80h),1
03890: 07e8 d318 0004            MOVE   @4D318h,A8
038c0: 0d88 005a                 DSJ    A8,3E80h
038e0: c018                      JR     3A70h
038f0: d60e d740 0004            MOVE   @4D740h,*A14+,1
03920: 09e8 0000 4000            MOVI   40000000h,A8
03950: 930e                      MOVE   A8,*A14+,1
03960: 0d5f a3c0 0004            CALLA  4A3C0h
03990: d60e d500 0004            MOVE   @4D500h,*A14+,1
039c0: 0d5f 8a20 0004            CALLA  48A20h
039f0: a7c8                      MOVE   -*A14,A8,1
03a00: b30d 0080                 MOVE   A8,*A13(80h),1
03a20: 07e8 d318 0004            MOVE   @4D318h,A8
03a50: 0d88 0041                 DSJ    A8,3E80h
03a70: 4508                      SUB    A8,A8
03a80: 8d0d                      MOVB   A8,*A13
03a90: ad0d 0008                 MOVB   A8,*A13(8h)
03ab0: ad0d 0010                 MOVB   A8,*A13(10h)
03ad0: 1828                      MOVK   1h,A8
03ae0: ad0d 0018                 MOVB   A8,*A13(18h)
03b00: 4508                      SUB    A8,A8
03b10: ad0d 0020                 MOVB   A8,*A13(20h)
03b30: ad0d 0028                 MOVB   A8,*A13(28h)
03b50: a3cf                      MOVE   A14,-*SP,1
03b60: 93ae                      MOVE   A13,*A14+,1
03b70: 0d5f 5980 0001            CALLA  15980h
03ba0: 4d08                      MOVE   A8,A8
03bb0: ca00 013b                 JREQ   4F80h
03bd0: d60e d760 0004            MOVE   @4D760h,*A14+,1
03c00: 0d5f 4980 0004            CALLA  44980h
03c30: 4508                      SUB    A8,A8
03c40: 930e                      MOVE   A8,*A14+,1
03c50: 930e                      MOVE   A8,*A14+,1
03c60: 0d5f 6e20 0004            CALLA  46E20h
03c90: ca0b                      JREQ   3D50h
03ca0: 07a8 d520 0004            MOVE   @4D520h,A8,1
03cd0: b30d 00a0                 MOVE   A8,*A13(A0h),1
03cf0: 0570                      SETF   10h,1,0
03d00: 05a8 de40 0004            MOVE   @4DE40h,A8,0
03d30: cb19                      JRNE   3ED0h
03d40: c057                      JR     42C0h
03d50: d60e d760 0004            MOVE   @4D760h,*A14+,1
03d80: 09e8 0000 4000            MOVI   40000000h,A8
03db0: 930e                      MOVE   A8,*A14+,1
03dc0: 0d5f a3c0 0004            CALLA  4A3C0h
03df0: d60e d520 0004            MOVE   @4D520h,*A14+,1
03e20: 0d5f 8a20 0004            CALLA  48A20h
03e50: a7c8                      MOVE   -*A14,A8,1
03e60: b30d 00a0                 MOVE   A8,*A13(A0h),1
03e80: 0570                      SETF   10h,1,0
03e90: 05a8 de40 0004            MOVE   @4DE40h,A8,0
03ec0: ca3f                      JREQ   42C0h
03ed0: 07e8 d320 0004            MOVE   @4D320h,A8
03f00: 0d88 003a                 DSJ    A8,42C0h
03f20: 4508                      SUB    A8,A8
03f30: 8d0d                      MOVB   A8,*A13
03f40: ad0d 0008                 MOVB   A8,*A13(8h)
03f60: ad0d 0010                 MOVB   A8,*A13(10h)
03f80: ad0d 0018                 MOVB   A8,*A13(18h)
03fa0: 1828                      MOVK   1h,A8
03fb0: ad0d 0020                 MOVB   A8,*A13(20h)
03fd0: 4508                      SUB    A8,A8
03fe0: ad0d 0028                 MOVB   A8,*A13(28h)
04000: a3cf                      MOVE   A14,-*SP,1
04010: 93ae                      MOVE   A13,*A14+,1
04020: 0d5f 5980 0001            CALLA  15980h
04050: 4d08                      MOVE   A8,A8
04060: ca00 00f0                 JREQ   4F80h
04080: d60e d780 0004            MOVE   @4D780h,*A14+,1
040b0: 0d5f 4980 0004            CALLA  44980h
040e0: 4508                      SUB    A8,A8
040f0: 930e                      MOVE   A8,*A14+,1
04100: 930e                      MOVE   A8,*A14+,1
04110: 0d5f 6e00 0004            CALLA  46E00h
04140: ca11                      JREQ   4260h
04150: d60e d780 0004            MOVE   @4D780h,*A14+,1
04180: 09e8 0000 4000            MOVI   40000000h,A8
041b0: 930e                      MOVE   A8,*A14+,1
041c0: 0d5f a3c0 0004            CALLA  4A3C0h
041f0: d60e d520 0004            MOVE   @4D520h,*A14+,1
04220: 0d5f 8a20 0004            CALLA  48A20h
04250: c003                      JR     4290h
04260: d60e d540 0004            MOVE   @4D540h,*A14+,1
04290: a7c8                      MOVE   -*A14,A8,1
042a0: b30d 00c0                 MOVE   A8,*A13(C0h),1
042c0: 4508                      SUB    A8,A8
042d0: 8d0d                      MOVB   A8,*A13
042e0: 1828                      MOVK   1h,A8
042f0: ad0d 0008                 MOVB   A8,*A13(8h)
04310: 4508                      SUB    A8,A8
04320: ad0d 0010                 MOVB   A8,*A13(10h)
04340: ad0d 0018                 MOVB   A8,*A13(18h)
04360: ad0d 0020                 MOVB   A8,*A13(20h)
04380: ad0d 0028                 MOVB   A8,*A13(28h)
043a0: a3cf                      MOVE   A14,-*SP,1
043b0: 93ae                      MOVE   A13,*A14+,1
043c0: 0d5f 5980 0001            CALLA  15980h
043f0: 4d08                      MOVE   A8,A8
04400: ca00 00b6                 JREQ   4F80h
04420: d60e d720 0004            MOVE   @4D720h,*A14+,1
04450: 0d5f 4980 0004            CALLA  44980h
04480: 4508                      SUB    A8,A8
04490: 930e                      MOVE   A8,*A14+,1
044a0: 930e                      MOVE   A8,*A14+,1
044b0: 0d5f 6e00 0004            CALLA  46E00h
044e0: ca11                      JREQ   4600h
044f0: d60e d720 0004            MOVE   @4D720h,*A14+,1
04520: 09e8 0000 4000            MOVI   40000000h,A8
04550: 930e                      MOVE   A8,*A14+,1
04560: 0d5f a3c0 0004            CALLA  4A3C0h
04590: d60e d4e0 0004            MOVE   @4D4E0h,*A14+,1
045c0: 0d5f 8a20 0004            CALLA  48A20h
045f0: c003                      JR     4630h
04600: d60e d4e0 0004            MOVE   @4D4E0h,*A14+,1
04630: a7c8                      MOVE   -*A14,A8,1
04640: b30d 0060                 MOVE   A8,*A13(60h),1
04660: 1828                      MOVK   1h,A8
04670: 8d0d                      MOVB   A8,*A13
04680: 4508                      SUB    A8,A8
04690: ad0d 0008                 MOVB   A8,*A13(8h)
046b0: ad0d 0010                 MOVB   A8,*A13(10h)
046d0: ad0d 0018                 MOVB   A8,*A13(18h)
046f0: ad0d 0020                 MOVB   A8,*A13(20h)
04710: ad0d 0028                 MOVB   A8,*A13(28h)
04730: a3cf                      MOVE   A14,-*SP,1
04740: 93ae                      MOVE   A13,*A14+,1
04750: 0d5f 5980 0001            CALLA  15980h
04780: 4d08                      MOVE   A8,A8
04790: cb02                      JRNE   47C0h
047a0: 4508                      SUB    A8,A8
047b0: c07d                      JR     4F90h
047c0: d60e d700 0004            MOVE   @4D700h,*A14+,1
047f0: 0d5f 4980 0004            CALLA  44980h
04820: 4508                      SUB    A8,A8
04830: 930e                      MOVE   A8,*A14+,1
04840: 930e                      MOVE   A8,*A14+,1
04850: 0d5f 6e00 0004            CALLA  46E00h
04880: ca11                      JREQ   49A0h
04890: d60e d700 0004            MOVE   @4D700h,*A14+,1
048c0: 09e8 0000 4000            MOVI   40000000h,A8
048f0: 930e                      MOVE   A8,*A14+,1
04900: 0d5f a3c0 0004            CALLA  4A3C0h
04930: d60e d4c0 0004            MOVE   @4D4C0h,*A14+,1
04960: 0d5f 8a20 0004            CALLA  48A20h
04990: c003                      JR     49D0h
049a0: d60e d4c0 0004            MOVE   @4D4C0h,*A14+,1
049d0: a7c8                      MOVE   -*A14,A8,1
049e0: b30d 0040                 MOVE   A8,*A13(40h),1
04a00: 07a8 de00 0004            MOVE   @4DE00h,A8,1
04a30: b30d 0040                 MOVE   A8,*A13(40h),1
04a50: 07a8 de20 0004            MOVE   @4DE20h,A8,1
04a80: b30d 0060                 MOVE   A8,*A13(60h),1
04aa0: 4508                      SUB    A8,A8
04ab0: b30d 00a0                 MOVE   A8,*A13(A0h),1
04ad0: b30d 00c0                 MOVE   A8,*A13(C0h),1
04af0: 09e8 0000 bf80            MOVI   BF800000h,A8
04b20: 0788 d1a0 0004            MOVE   A8,@4D1A0h,1
04b50: 4508                      SUB    A8,A8
04b60: 0788 d1c0 0004            MOVE   A8,@4D1C0h,1
04b90: 07a8 d140 0004            MOVE   @4D140h,A8,1
04bc0: b30d 0100                 MOVE   A8,*A13(100h),1
04be0: 07a8 d160 0004            MOVE   @4D160h,A8,1
04c10: b30d 0120                 MOVE   A8,*A13(120h),1
04c30: 07a8 d180 0004            MOVE   @4D180h,A8,1
04c60: b30d 0140                 MOVE   A8,*A13(140h),1
04c80: 07a8 d1a0 0004            MOVE   @4D1A0h,A8,1
04cb0: b30d 0160                 MOVE   A8,*A13(160h),1
04cd0: 07a8 d1c0 0004            MOVE   @4D1C0h,A8,1
04d00: b30d 0180                 MOVE   A8,*A13(180h),1
04d20: 07a8 d1e0 0004            MOVE   @4D1E0h,A8,1
04d50: b30d 01a0                 MOVE   A8,*A13(1A0h),1
04d70: a3cf                      MOVE   A14,-*SP,1
04d80: 4fa0                      MOVE   A13,B0
04d90: 0b10 0100                 ADDI   100h,B0
04db0: 4fc2                      MOVE   A14,B2
04dc0: 0b0e 00c0                 ADDI   C0h,A14
04de0: 09d7 00c0                 MOVI   C0h,B7
04e00: 00f3                      BLMOVE 1,1
04e10: 0d5f 2c70 0000            CALLA  2C70h
04e40: a3cf                      MOVE   A14,-*SP,1
04e50: 4fa0                      MOVE   A13,B0
04e60: 0b10 0040                 ADDI   40h,B0
04e80: 4fc2                      MOVE   A14,B2
04e90: 0b0e 00c0                 ADDI   C0h,A14
04eb0: 09d7 00c0                 MOVI   C0h,B7
04ed0: 00f3                      BLMOVE 1,1
04ee0: 0d5f bb30 0001            CALLA  1BB30h
04f10: 4d08                      MOVE   A8,A8
04f20: 1828                      MOVK   1h,A8
04f30: cb01                      JRNE   4F50h
04f40: 4508                      SUB    A8,A8
04f50: 0568                      SETF   8h,1,0
04f60: 0508                      SEXT   A8,0
04f70: c001                      JR     4F90h
04f80: 4508                      SUB    A8,A8
04f90: 0bee fe3f                 SUBI   1C0h,A14
04fb0: 97ed                      MOVE   *SP+,A13,1
04fc0: 0960                      RETS   

_send_config_stage_tiga_request:
04fd0: 098f 000c                 MMTM   SP,A12,A13
04ff0: 4dcd                      MOVE   A14,A13
05000: afac ffe0                 MOVB   *A13(FFE0h),A12
05020: 4d88                      MOVE   A12,A8
05030: 1428                      DEC    A8
05040: 36c8                      CMPK   16h,A8
05050: c318                      JRHI   51E0h
05060: 24a8                      SLL    5h,A8
05070: 0b28 c420 0004            ADDI   4C420h,A8
050a0: 8708                      MOVE   *A8,A8,1
050b0: 0168                      JUMP   A8
050c0: a3cf                      MOVE   A14,-*SP,1
050d0: 938e                      MOVE   A12,*A14+,1
050e0: 0d5f 5450 0000            CALLA  5450h
05110: 4d0c                      MOVE   A8,A12
05120: cb09                      JRNE   51C0h
05130: 07a8 d290 0004            MOVE   @4D290h,A8,1
05160: 0ba8 2000 0000            ORI    2000h,A8
05190: 0788 d290 0004            MOVE   A8,@4D290h,1
051c0: 4d88                      MOVE   A12,A8
051d0: c003                      JR     5210h
051e0: 0d5f 5260 0000            CALLA  5260h
05210: b7ee 0060                 MOVE   *SP(60h),A14,1
05230: 09af 3000                 MMFM   SP,A12,A13
05250: 0962                      RETS   2h

_configure_manual_stage:
05260: 098f 000c                 MMTM   SP,A12,A13
05280: 4dcd                      MOVE   A14,A13
05290: 0b0e 0040                 ADDI   40h,A14
052b0: 09e8 dee0 0004            MOVI   4DEE0h,A8
052e0: 4dac                      MOVE   A13,A12
052f0: 9b0c                      MOVE   *A8+,*A12+,1
05300: 0550                      SETF   10h,0,0
05310: 890c                      MOVE   *A8,*A12,0
05320: a3cf                      MOVE   A14,-*SP,1
05330: 93ae                      MOVE   A13,*A14+,1
05340: 0d5f 5ac0 0002            CALLA  25AC0h
05370: 1428                      DEC    A8
05380: ca02                      JREQ   53B0h
05390: 4508                      SUB    A8,A8
053a0: c005                      JR     5400h
053b0: 458c                      SUB    A12,A12
053c0: 05ec dd20 0004            MOVB   A12,@4DD20h
053f0: 1828                      MOVK   1h,A8
05400: 0bee ffbf                 SUBI   40h,A14
05420: 09af 3000                 MMFM   SP,A12,A13
05440: 0960                      RETS   

_configure_motorised_stage:
05450: 098f 002c                 MMTM   SP,A10,A12,A13
05470: 4dcd                      MOVE   A14,A13
05480: 0b0e 02e0                 ADDI   2E0h,A14
054a0: afac ffe0                 MOVB   *A13(FFE0h),A12
054c0: 4d88                      MOVE   A12,A8
054d0: 4d0a                      MOVE   A8,A10
054e0: 24a8                      SLL    5h,A8
054f0: 248a                      SLL    4h,A10
05500: 4148                      ADD    A10,A8
05510: 0b28 dee0 0004            ADDI   4DEE0h,A8
05540: 4daa                      MOVE   A13,A10
05550: 0b0a 01e0                 ADDI   1E0h,A10
05570: 9b0a                      MOVE   *A8+,*A10+,1
05580: 0550                      SETF   10h,0,0
05590: 890a                      MOVE   *A8,*A10,0
055a0: a3cf                      MOVE   A14,-*SP,1
055b0: 4daa                      MOVE   A13,A10
055c0: 0b0a 01e0                 ADDI   1E0h,A10
055e0: 934e                      MOVE   A10,*A14+,1
055f0: 0d5f 5ac0 0002            CALLA  25AC0h
05620: 0d88 017a                 DSJ    A8,6DE0h
05640: a3cf                      MOVE   A14,-*SP,1
05650: 1a08                      MOVK   10h,A8
05660: 930e                      MOVE   A8,*A14+,1
05670: 0d5f 0000 0000            CALLA  0h
056a0: 4f80                      MOVE   A12,B0
056b0: 4c12                      MOVE   B0,B2
056c0: 24f0                      SLL    7h,B0
056d0: 24d2                      SLL    6h,B2
056e0: 4050                      ADD    B2,B0
056f0: 0b30 e360 0004            ADDI   4E360h,B0
05720: 09f2 d340 0004            MOVI   4D340h,B2
05750: 09d7 00c0                 MOVI   C0h,B7
05770: 00f3                      BLMOVE 1,1
05780: 4f80                      MOVE   A12,B0
05790: 4c1a                      MOVE   B0,B10
057a0: 24f0                      SLL    7h,B0
057b0: 24da                      SLL    6h,B10
057c0: 4150                      ADD    B10,B0
057d0: 0b30 f560 0004            ADDI   4F560h,B0
05800: 09f2 d4c0 0004            MOVI   4D4C0h,B2
05830: 09d7 00c0                 MOVI   C0h,B7
05850: 00f3                      BLMOVE 1,1
05860: 4f80                      MOVE   A12,B0
05870: 4c1a                      MOVE   B0,B10
05880: 24f0                      SLL    7h,B0
05890: 24da                      SLL    6h,B10
058a0: 4150                      ADD    B10,B0
058b0: 0b30 0760 0005            ADDI   50760h,B0
058e0: 09f2 d580 0004            MOVI   4D580h,B2
05910: 09d7 00c0                 MOVI   C0h,B7
05930: 00f3                      BLMOVE 1,1
05940: 4f80                      MOVE   A12,B0
05950: 4c1a                      MOVE   B0,B10
05960: 24f0                      SLL    7h,B0
05970: 24da                      SLL    6h,B10
05980: 4150                      ADD    B10,B0
05990: 0b30 1960 0005            ADDI   51960h,B0
059c0: 09f2 d640 0004            MOVI   4D640h,B2
059f0: 09d7 00c0                 MOVI   C0h,B7
05a10: 00f3                      BLMOVE 1,1
05a20: d60e d580 0004            MOVE   @4D580h,*A14+,1
05a50: d60e d4c0 0004            MOVE   @4D4C0h,*A14+,1
05a80: 0d5f 8b40 0004            CALLA  48B40h
05ab0: 09e8 0000 3f00            MOVI   3F000000h,A8
05ae0: 930e                      MOVE   A8,*A14+,1
05af0: 0d5f a3c0 0004            CALLA  4A3C0h
05b20: d60e d4c0 0004            MOVE   @4D4C0h,*A14+,1
05b50: 0d5f 8c60 0004            CALLA  48C60h
05b80: a7c8                      MOVE   -*A14,A8,1
05b90: 0788 d640 0004            MOVE   A8,@4D640h,1
05bc0: d60e d5a0 0004            MOVE   @4D5A0h,*A14+,1
05bf0: d60e d4e0 0004            MOVE   @4D4E0h,*A14+,1
05c20: 0d5f 8b40 0004            CALLA  48B40h
05c50: 09e8 0000 3f00            MOVI   3F000000h,A8
05c80: 930e                      MOVE   A8,*A14+,1
05c90: 0d5f a3c0 0004            CALLA  4A3C0h
05cc0: d60e d4e0 0004            MOVE   @4D4E0h,*A14+,1
05cf0: 0d5f 8c60 0004            CALLA  48C60h
05d20: a7c8                      MOVE   -*A14,A8,1
05d30: 0788 d660 0004            MOVE   A8,@4D660h,1
05d60: d60e d5c0 0004            MOVE   @4D5C0h,*A14+,1
05d90: d60e d500 0004            MOVE   @4D500h,*A14+,1
05dc0: 0d5f 8b40 0004            CALLA  48B40h
05df0: 09e8 0000 3f00            MOVI   3F000000h,A8
05e20: 930e                      MOVE   A8,*A14+,1
05e30: 0d5f a3c0 0004            CALLA  4A3C0h
05e60: d60e d500 0004            MOVE   @4D500h,*A14+,1
05e90: 0d5f 8c60 0004            CALLA  48C60h
05ec0: a7c8                      MOVE   -*A14,A8,1
05ed0: 0788 d680 0004            MOVE   A8,@4D680h,1
05f00: 4f80                      MOVE   A12,B0
05f10: 4c12                      MOVE   B0,B2
05f20: 24f0                      SLL    7h,B0
05f30: 24d2                      SLL    6h,B2
05f40: 4050                      ADD    B2,B0
05f50: 0b30 2b60 0005            ADDI   52B60h,B0
05f80: 09f2 d700 0004            MOVI   4D700h,B2
05fb0: 09d7 00c0                 MOVI   C0h,B7
05fd0: 00f3                      BLMOVE 1,1
05fe0: 4d8a                      MOVE   A12,A10
05ff0: 4d48                      MOVE   A10,A8
06000: 24ca                      SLL    6h,A10
06010: 24a8                      SLL    5h,A8
06020: 410a                      ADD    A8,A10
06030: 0b2a 3d60 0005            ADDI   53D60h,A10
06060: 09e8 da00 0004            MOVI   4DA00h,A8
06090: 9b48                      MOVE   *A10+,*A8+,1
060a0: 9b48                      MOVE   *A10+,*A8+,1
060b0: 8b48                      MOVE   *A10,*A8,1
060c0: 09f2 d7c0 0004            MOVI   4D7C0h,B2
060f0: 09f0 d580 0004            MOVI   4D580h,B0
06120: 09d7 00c0                 MOVI   C0h,B7
06140: 00f3                      BLMOVE 1,1
06150: 09f2 d880 0004            MOVI   4D880h,B2
06180: 09f0 d4c0 0004            MOVI   4D4C0h,B0
061b0: 09d7 00c0                 MOVI   C0h,B7
061d0: 00f3                      BLMOVE 1,1
061e0: 4d8a                      MOVE   A12,A10
061f0: 4d48                      MOVE   A10,A8
06200: 24ca                      SLL    6h,A10
06210: 24a8                      SLL    5h,A8
06220: 410a                      ADD    A8,A10
06230: 0b2a 4660 0005            ADDI   54660h,A10
06260: 4da8                      MOVE   A13,A8
06270: 9b48                      MOVE   *A10+,*A8+,1
06280: 9b48                      MOVE   *A10+,*A8+,1
06290: 8b48                      MOVE   *A10,*A8,1
062a0: 4d8a                      MOVE   A12,A10
062b0: 4d48                      MOVE   A10,A8
062c0: 24ca                      SLL    6h,A10
062d0: 24a8                      SLL    5h,A8
062e0: 410a                      ADD    A8,A10
062f0: 0b2a 4f60 0005            ADDI   54F60h,A10
06320: 4da8                      MOVE   A13,A8
06330: 0b08 0060                 ADDI   60h,A8
06350: 9b48                      MOVE   *A10+,*A8+,1
06360: 9b48                      MOVE   *A10+,*A8+,1
06370: 8b48                      MOVE   *A10,*A8,1
06380: 4f80                      MOVE   A12,B0
06390: 4c1a                      MOVE   B0,B10
063a0: 24f0                      SLL    7h,B0
063b0: 24da                      SLL    6h,B10
063c0: 4150                      ADD    B10,B0
063d0: 0b30 5860 0005            ADDI   55860h,B0
06400: 4fa2                      MOVE   A13,B2
06410: 0b12 00c0                 ADDI   C0h,B2
06430: 09d7 00c0                 MOVI   C0h,B7
06450: 00f3                      BLMOVE 1,1
06460: 4d8a                      MOVE   A12,A10
06470: 24aa                      SLL    5h,A10
06480: 0b2a 7c60 0005            ADDI   57C60h,A10
064b0: 874a                      MOVE   *A10,A10,1
064c0: 078a de00 0004            MOVE   A10,@4DE00h,1
064f0: 4d88                      MOVE   A12,A8
06500: 24a8                      SLL    5h,A8
06510: 0b28 7f60 0005            ADDI   57F60h,A8
06540: 8708                      MOVE   *A8,A8,1
06550: 0788 de20 0004            MOVE   A8,@4DE20h,1
06580: a3cf                      MOVE   A14,-*SP,1
06590: 93ae                      MOVE   A13,*A14+,1
065a0: 0d5f 6400 0002            CALLA  26400h
065d0: 0d88 007f                 DSJ    A8,6DE0h
065f0: 09f2 d400 0004            MOVI   4D400h,B2
06620: 4fa0                      MOVE   A13,B0
06630: 0b10 00c0                 ADDI   C0h,B0
06650: 09d7 00c0                 MOVI   C0h,B7
06670: 00f3                      BLMOVE 1,1
06680: 09ea da60 0004            MOVI   4DA60h,A10
066b0: 4da8                      MOVE   A13,A8
066c0: 9b0a                      MOVE   *A8+,*A10+,1
066d0: 9b0a                      MOVE   *A8+,*A10+,1
066e0: 8b0a                      MOVE   *A8,*A10,1
066f0: 09ea dac0 0004            MOVI   4DAC0h,A10
06720: 4da8                      MOVE   A13,A8
06730: 0b08 0060                 ADDI   60h,A8
06750: 9b0a                      MOVE   *A8+,*A10+,1
06760: 9b0a                      MOVE   *A8+,*A10+,1
06770: 8b0a                      MOVE   *A8,*A10,1
06780: 4d8a                      MOVE   A12,A10
06790: 4d48                      MOVE   A10,A8
067a0: 24ca                      SLL    6h,A10
067b0: 24a8                      SLL    5h,A8
067c0: 410a                      ADD    A8,A10
067d0: 0b2a 6a60 0005            ADDI   56A60h,A10
06800: 4da8                      MOVE   A13,A8
06810: 0b08 0180                 ADDI   180h,A8
06830: 9b48                      MOVE   *A10+,*A8+,1
06840: 9b48                      MOVE   *A10+,*A8+,1
06850: 8b48                      MOVE   *A10,*A8,1
06860: a3cf                      MOVE   A14,-*SP,1
06870: 4e1a                      MOVE   B0,A10
06880: 934e                      MOVE   A10,*A14+,1
06890: 0d5f 90a0 0002            CALLA  290A0h
068c0: 0d88 0050                 DSJ    A8,6DE0h
068e0: 4d88                      MOVE   A12,A8
068f0: 4d0a                      MOVE   A8,A10
06900: 24c8                      SLL    6h,A8
06910: 24aa                      SLL    5h,A10
06920: 4148                      ADD    A10,A8
06930: 0b28 7360 0005            ADDI   57360h,A8
06960: 09ea d9a0 0004            MOVI   4D9A0h,A10
06990: 9b0a                      MOVE   *A8+,*A10+,1
069a0: 9b0a                      MOVE   *A8+,*A10+,1
069b0: 8b0a                      MOVE   *A8,*A10,1
069c0: 0d5f 6e40 0000            CALLA  6E40h
069f0: 0d88 003d                 DSJ    A8,6DE0h
06a10: 0d5f 38f0 0001            CALLA  138F0h
06a40: 1428                      DEC    A8
06a50: ca02                      JREQ   6A80h
06a60: 454a                      SUB    A10,A10
06a70: c018                      JR     6C00h
06a80: 182a                      MOVK   1h,A10
06a90: 4f80                      MOVE   A12,B0
06aa0: 4c12                      MOVE   B0,B2
06ab0: 24f0                      SLL    7h,B0
06ac0: 24d2                      SLL    6h,B2
06ad0: 4050                      ADD    B2,B0
06ae0: 0b30 e360 0004            ADDI   4E360h,B0
06b10: 4fa2                      MOVE   A13,B2
06b20: 0b12 0220                 ADDI   220h,B2
06b40: 09d7 00c0                 MOVI   C0h,B7
06b60: 00f3                      BLMOVE 1,1
06b70: a3cf                      MOVE   A14,-*SP,1
06b80: 4da8                      MOVE   A13,A8
06b90: 0b08 0220                 ADDI   220h,A8
06bb0: 930e                      MOVE   A8,*A14+,1
06bc0: 0d5f 4870 0003            CALLA  34870h
06bf0: 3bc8                      DSJS   A8,6DE0h
06c00: 1928                      MOVK   9h,A8
06c10: 0788 d1c0 0005            MOVE   A8,@5D1C0h,1
06c40: 198c                      MOVK   Ch,A12
06c50: 078c d1e0 0005            MOVE   A12,@5D1E0h,1
06c80: 1b68                      MOVK   1Bh,A8
06c90: 0788 d200 0005            MOVE   A8,@5D200h,1
06cc0: 05ea d220 0005            MOVB   A10,@5D220h
06cf0: a3cf                      MOVE   A14,-*SP,1
06d00: 09ea d1c0 0005            MOVI   5D1C0h,A10
06d30: 934e                      MOVE   A10,*A14+,1
06d40: 188c                      MOVK   4h,A12
06d50: 938e                      MOVE   A12,*A14+,1
06d60: 0d5f 0000 0000            CALLA  0h
06d90: 1828                      MOVK   1h,A8
06da0: 05e8 dd20 0004            MOVB   A8,@4DD20h
06dd0: c001                      JR     6DF0h
06de0: 4508                      SUB    A8,A8
06df0: b7ee 0080                 MOVE   *SP(80h),A14,1
06e10: 09af 3400                 MMFM   SP,A10,A12,A13
06e30: 0962                      RETS   2h

_read_stage_status:
06e40: a3cf                      MOVE   A14,-*SP,1
06e50: 09e8 c700 0004            MOVI   4C700h,A8
06e80: 930e                      MOVE   A8,*A14+,1
06e90: 09e8 8a40 0005            MOVI   58A40h,A8
06ec0: 930e                      MOVE   A8,*A14+,1
06ed0: 0d5f bc70 0004            CALLA  4BC70h
06f00: 0d5f 1ad0 0001            CALLA  11AD0h
06f30: 1428                      DEC    A8
06f40: ca0a                      JREQ   6FF0h
06f50: 07e8 dd30 0004            MOVE   @4DD30h,A8
06f80: 14c8                      SUBK   6h,A8
06f90: 1828                      MOVK   1h,A8
06fa0: ca01                      JREQ   6FC0h
06fb0: 4508                      SUB    A8,A8
06fc0: 0568                      SETF   8h,1,0
06fd0: 0508                      SEXT   A8,0
06fe0: 0960                      RETS   
06ff0: a3cf                      MOVE   A14,-*SP,1
07000: 09e8 ce60 0005            MOVI   5CE60h,A8
07030: 930e                      MOVE   A8,*A14+,1
07040: 0d5f 9e60 0000            CALLA  9E60h
07070: 0960                      RETS   

_get_current_stage_status:
07080: 07a8 82a0 0005            MOVE   @582A0h,A8,1
070b0: cb2f                      JRNE   73B0h
070c0: 1828                      MOVK   1h,A8
070d0: 0788 82a0 0005            MOVE   A8,@582A0h,1
07100: 07e8 d300 0004            MOVE   @4D300h,A8
07130: 1428                      DEC    A8
07140: ca18                      JREQ   72D0h
07150: 07e8 d308 0004            MOVE   @4D308h,A8
07180: 1428                      DEC    A8
07190: ca13                      JREQ   72D0h
071a0: 07e8 d310 0004            MOVE   @4D310h,A8
071d0: 1428                      DEC    A8
071e0: ca0e                      JREQ   72D0h
071f0: 07e8 d318 0004            MOVE   @4D318h,A8
07220: 1428                      DEC    A8
07230: ca09                      JREQ   72D0h
07240: 07e8 d320 0004            MOVE   @4D320h,A8
07270: 1428                      DEC    A8
07280: ca04                      JREQ   72D0h
07290: 07e8 d328 0004            MOVE   @4D328h,A8
072c0: 39c8                      DSJS   A8,73B0h
072d0: 0d5f 6e40 0000            CALLA  6E40h
07300: 1428                      DEC    A8
07310: ca05                      JREQ   7370h
07320: 4508                      SUB    A8,A8
07330: 0788 82a0 0005            MOVE   A8,@582A0h,1
07360: 0960                      RETS   
07370: 4508                      SUB    A8,A8
07380: 0788 82a0 0005            MOVE   A8,@582A0h,1
073b0: 1828                      MOVK   1h,A8
073c0: 0960                      RETS   

_joystick_emuln_tiga_request:
073d0: 098f 000c                 MMTM   SP,A12,A13
073f0: 4dcd                      MOVE   A14,A13
07400: 0b0e 00c0                 ADDI   C0h,A14
07420: 458c                      SUB    A12,A12
07430: a3cf                      MOVE   A14,-*SP,1
07440: 4da8                      MOVE   A13,A8
07450: 0be8 ff9f                 SUBI   60h,A8
07470: 930e                      MOVE   A8,*A14+,1
07480: 0d5f df30 0001            CALLA  1DF30h
074b0: 0d88 004f                 DSJ    A8,79C0h
074d0: 1828                      MOVK   1h,A8
074e0: 05e8 dd10 0004            MOVB   A8,@4DD10h
07510: 0d5f 75d0 0001            CALLA  175D0h
07540: 07ec dd10 0004            MOVE   @4DD10h,A12
07570: cb07                      JRNE   75F0h
07580: 0d5f 4670 0001            CALLA  14670h
075b0: 182c                      MOVK   1h,A12
075c0: 05ec dd10 0004            MOVB   A12,@4DD10h
075f0: 182c                      MOVK   1h,A12
07600: 07e8 d300 0004            MOVE   @4D300h,A8
07630: 38a8                      DSJS   A8,7690h
07640: 07e8 d260 0004            MOVE   @4D260h,A8
07670: 3828                      DSJS   A8,7690h
07680: 458c                      SUB    A12,A12
07690: 07e8 d308 0004            MOVE   @4D308h,A8
076c0: 38a8                      DSJS   A8,7720h
076d0: 07e8 d268 0004            MOVE   @4D268h,A8
07700: 3828                      DSJS   A8,7720h
07710: 458c                      SUB    A12,A12
07720: 07e8 d310 0004            MOVE   @4D310h,A8
07750: 38a8                      DSJS   A8,77B0h
07760: 07e8 d270 0004            MOVE   @4D270h,A8
07790: 3828                      DSJS   A8,77B0h
077a0: 458c                      SUB    A12,A12
077b0: 07e8 d318 0004            MOVE   @4D318h,A8
077e0: 38a8                      DSJS   A8,7840h
077f0: 07e8 d278 0004            MOVE   @4D278h,A8
07820: 3828                      DSJS   A8,7840h
07830: 458c                      SUB    A12,A12
07840: 07e8 d320 0004            MOVE   @4D320h,A8
07870: 38a8                      DSJS   A8,78D0h
07880: 07e8 d280 0004            MOVE   @4D280h,A8
078b0: 3828                      DSJS   A8,78D0h
078c0: 458c                      SUB    A12,A12
078d0: 07e8 d328 0004            MOVE   @4D328h,A8
07900: 38a8                      DSJS   A8,7960h
07910: 07e8 d288 0004            MOVE   @4D288h,A8
07940: 3828                      DSJS   A8,7960h
07950: 458c                      SUB    A12,A12
07960: 342c                      CMPK   1h,A12
07970: cbb9                      JRNE   7510h
07980: 07e8 dd00 0004            MOVE   @4DD00h,A8
079b0: cbb5                      JRNE   7510h
079c0: 0d8c 008c                 DSJ    A12,82A0h
079e0: 07ec d320 0004            MOVE   @4D320h,A12
07a10: 0d8c 0087                 DSJ    A12,82A0h
07a30: 07ec d220 0004            MOVE   @4D220h,A12
07a60: 0d8c 0082                 DSJ    A12,82A0h
07a80: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
07ab0: 09ec 0000 43b4            MOVI   43B40000h,A12
07ae0: 938e                      MOVE   A12,*A14+,1
07af0: 0d5f a090 0004            CALLA  4A090h
07b20: cb09                      JRNE   7BC0h
07b30: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
07b60: 4508                      SUB    A8,A8
07b70: 930e                      MOVE   A8,*A14+,1
07b80: 0d5f a2b0 0004            CALLA  4A2B0h
07bb0: ca6e                      JREQ   82A0h
07bc0: 07a8 d140 0004            MOVE   @4D140h,A8,1
07bf0: 830d                      MOVE   A8,*A13,1
07c00: 07ac d160 0004            MOVE   @4D160h,A12,1
07c30: b38d 0020                 MOVE   A12,*A13(20h),1
07c50: 07a8 d180 0004            MOVE   @4D180h,A8,1
07c80: b30d 0040                 MOVE   A8,*A13(40h),1
07ca0: 07a8 d1a0 0004            MOVE   @4D1A0h,A8,1
07cd0: b30d 0060                 MOVE   A8,*A13(60h),1
07cf0: 07a8 d1e0 0004            MOVE   @4D1E0h,A8,1
07d20: b30d 00a0                 MOVE   A8,*A13(A0h),1
07d40: 07a8 d1c0 0004            MOVE   @4D1C0h,A8,1
07d70: b30d 0080                 MOVE   A8,*A13(80h),1
07d90: 930e                      MOVE   A8,*A14+,1
07da0: 09e8 0000 43b4            MOVI   43B40000h,A8
07dd0: 930e                      MOVE   A8,*A14+,1
07de0: 0d5f a090 0004            CALLA  4A090h
07e10: ca1e                      JREQ   8000h
07e20: 458c                      SUB    A12,A12
07e30: 09e8 8000 4076            MOVI   40768000h,A8
07e60: 930e                      MOVE   A8,*A14+,1
07e70: 938e                      MOVE   A12,*A14+,1
07e80: d3ae 0080                 MOVE   *A13(80h),*A14+,1
07ea0: 0d5f 4980 0004            CALLA  44980h
07ed0: 0d5f 5ad0 0004            CALLA  45AD0h
07f00: 0d5f 4030 0004            CALLA  44030h
07f30: a7c8                      MOVE   -*A14,A8,1
07f40: b30d 0080                 MOVE   A8,*A13(80h),1
07f60: d3ae 0080                 MOVE   *A13(80h),*A14+,1
07f80: 09e8 0000 43b4            MOVI   43B40000h,A8
07fb0: 930e                      MOVE   A8,*A14+,1
07fc0: 0d5f a1a0 0004            CALLA  4A1A0h
07ff0: cae2                      JREQ   7E20h
08000: d3ae 0080                 MOVE   *A13(80h),*A14+,1
08020: 458c                      SUB    A12,A12
08030: 938e                      MOVE   A12,*A14+,1
08040: 0d5f a2b0 0004            CALLA  4A2B0h
08070: ca1b                      JREQ   8230h
08080: 458c                      SUB    A12,A12
08090: 09e8 8000 4076            MOVI   40768000h,A8
080c0: 930e                      MOVE   A8,*A14+,1
080d0: 938e                      MOVE   A12,*A14+,1
080e0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
08100: 0d5f 4980 0004            CALLA  44980h
08130: 0d5f 5db0 0004            CALLA  45DB0h
08160: 0d5f 4030 0004            CALLA  44030h
08190: a7c8                      MOVE   -*A14,A8,1
081a0: b30d 0080                 MOVE   A8,*A13(80h),1
081c0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
081e0: 938e                      MOVE   A12,*A14+,1
081f0: 0d5f 9f80 0004            CALLA  49F80h
08220: cae5                      JREQ   8080h
08230: a3cf                      MOVE   A14,-*SP,1
08240: 93ae                      MOVE   A13,*A14+,1
08250: 0d5f cfa0 0002            CALLA  2CFA0h
08280: 4d08                      MOVE   A8,A8
08290: ca04                      JREQ   82E0h
082a0: 458c                      SUB    A12,A12
082b0: 05ec dd30 0004            MOVB   A12,@4DD30h
082e0: b7ee 0060                 MOVE   *SP(60h),A14,1
08300: 09af 3000                 MMFM   SP,A12,A13
08320: 0962                      RETS   2h

_read_stage_software:
08330: 07e8 d300 0004            MOVE   @4D300h,A8
08360: 3aa8                      DSJS   A8,84C0h
08370: a3cf                      MOVE   A14,-*SP,1
08380: 4508                      SUB    A8,A8
08390: 930e                      MOVE   A8,*A14+,1
083a0: 0d5f 8c80 0000            CALLA  8C80h
083d0: 4d08                      MOVE   A8,A8
083e0: ca00 0086                 JREQ   8C60h
08400: a3cf                      MOVE   A14,-*SP,1
08410: 09e8 9220 0005            MOVI   59220h,A8
08440: 930e                      MOVE   A8,*A14+,1
08450: 09e8 db80 0004            MOVI   4DB80h,A8
08480: 930e                      MOVE   A8,*A14+,1
08490: 0d5f bc70 0004            CALLA  4BC70h
084c0: 07e8 d308 0004            MOVE   @4D308h,A8
084f0: 3a88                      DSJS   A8,8640h
08500: a3cf                      MOVE   A14,-*SP,1
08510: 1828                      MOVK   1h,A8
08520: 930e                      MOVE   A8,*A14+,1
08530: 0d5f 8c80 0000            CALLA  8C80h
08560: 4d08                      MOVE   A8,A8
08570: ca6e                      JREQ   8C60h
08580: a3cf                      MOVE   A14,-*SP,1
08590: 09e8 9220 0005            MOVI   59220h,A8
085c0: 930e                      MOVE   A8,*A14+,1
085d0: 09e8 dbc0 0004            MOVI   4DBC0h,A8
08600: 930e                      MOVE   A8,*A14+,1
08610: 0d5f bc70 0004            CALLA  4BC70h
08640: 07e8 d310 0004            MOVE   @4D310h,A8
08670: 3a88                      DSJS   A8,87C0h
08680: a3cf                      MOVE   A14,-*SP,1
08690: 1848                      MOVK   2h,A8
086a0: 930e                      MOVE   A8,*A14+,1
086b0: 0d5f 8c80 0000            CALLA  8C80h
086e0: 4d08                      MOVE   A8,A8
086f0: ca56                      JREQ   8C60h
08700: a3cf                      MOVE   A14,-*SP,1
08710: 09e8 9220 0005            MOVI   59220h,A8
08740: 930e                      MOVE   A8,*A14+,1
08750: 09e8 dc00 0004            MOVI   4DC00h,A8
08780: 930e                      MOVE   A8,*A14+,1
08790: 0d5f bc70 0004            CALLA  4BC70h
087c0: 07e8 d318 0004            MOVE   @4D318h,A8
087f0: 3a88                      DSJS   A8,8940h
08800: a3cf                      MOVE   A14,-*SP,1
08810: 1868                      MOVK   3h,A8
08820: 930e                      MOVE   A8,*A14+,1
08830: 0d5f 8c80 0000            CALLA  8C80h
08860: 4d08                      MOVE   A8,A8
08870: ca3e                      JREQ   8C60h
08880: a3cf                      MOVE   A14,-*SP,1
08890: 09e8 9220 0005            MOVI   59220h,A8
088c0: 930e                      MOVE   A8,*A14+,1
088d0: 09e8 dc40 0004            MOVI   4DC40h,A8
08900: 930e                      MOVE   A8,*A14+,1
08910: 0d5f bc70 0004            CALLA  4BC70h
08940: 07e8 d320 0004            MOVE   @4D320h,A8
08970: 3a88                      DSJS   A8,8AC0h
08980: a3cf                      MOVE   A14,-*SP,1
08990: 1888                      MOVK   4h,A8
089a0: 930e                      MOVE   A8,*A14+,1
089b0: 0d5f 8c80 0000            CALLA  8C80h
089e0: 4d08                      MOVE   A8,A8
089f0: ca26                      JREQ   8C60h
08a00: a3cf                      MOVE   A14,-*SP,1
08a10: 09e8 9220 0005            MOVI   59220h,A8
08a40: 930e                      MOVE   A8,*A14+,1
08a50: 09e8 dc80 0004            MOVI   4DC80h,A8
08a80: 930e                      MOVE   A8,*A14+,1
08a90: 0d5f bc70 0004            CALLA  4BC70h
08ac0: 07e8 d328 0004            MOVE   @4D328h,A8
08af0: 3a88                      DSJS   A8,8C40h
08b00: a3cf                      MOVE   A14,-*SP,1
08b10: 18a8                      MOVK   5h,A8
08b20: 930e                      MOVE   A8,*A14+,1
08b30: 0d5f 8c80 0000            CALLA  8C80h
08b60: 4d08                      MOVE   A8,A8
08b70: ca0e                      JREQ   8C60h
08b80: a3cf                      MOVE   A14,-*SP,1
08b90: 09e8 9220 0005            MOVI   59220h,A8
08bc0: 930e                      MOVE   A8,*A14+,1
08bd0: 09e8 dcc0 0004            MOVI   4DCC0h,A8
08c00: 930e                      MOVE   A8,*A14+,1
08c10: 0d5f bc70 0004            CALLA  4BC70h
08c40: 1828                      MOVK   1h,A8
08c50: 0960                      RETS   
08c60: 4508                      SUB    A8,A8
08c70: 0960                      RETS   

_read_axis_software:
08c80: 098f 022c                 MMTM   SP,A6,A10,A12,A13
08ca0: 4dcd                      MOVE   A14,A13
08cb0: 0b0e 0060                 ADDI   60h,A14
08cd0: afa6 ffe0                 MOVB   *A13(FFE0h),A6
08cf0: 458c                      SUB    A12,A12
08d00: a3cf                      MOVE   A14,-*SP,1
08d10: 09e8 c720 0004            MOVI   4C720h,A8
08d40: 930e                      MOVE   A8,*A14+,1
08d50: 09e8 8a40 0005            MOVI   58A40h,A8
08d80: 930e                      MOVE   A8,*A14+,1
08d90: 0d5f bc70 0004            CALLA  4BC70h
08dc0: a3cf                      MOVE   A14,-*SP,1
08dd0: 1948                      MOVK   Ah,A8
08de0: 930e                      MOVE   A8,*A14+,1
08df0: 93ae                      MOVE   A13,*A14+,1
08e00: 92ce                      MOVE   A6,*A14+,1
08e10: 0d5f b220 0004            CALLA  4B220h
08e40: a3cf                      MOVE   A14,-*SP,1
08e50: 93ae                      MOVE   A13,*A14+,1
08e60: 09e8 8a40 0005            MOVI   58A40h,A8
08e90: 930e                      MOVE   A8,*A14+,1
08ea0: 0d5f b9c0 0004            CALLA  4B9C0h
08ed0: a3cf                      MOVE   A14,-*SP,1
08ee0: 09e8 c748 0004            MOVI   4C748h,A8
08f10: 930e                      MOVE   A8,*A14+,1
08f20: 09e8 8a40 0005            MOVI   58A40h,A8
08f50: 930e                      MOVE   A8,*A14+,1
08f60: 0d5f b9c0 0004            CALLA  4B9C0h
08f90: a3cf                      MOVE   A14,-*SP,1
08fa0: 93ae                      MOVE   A13,*A14+,1
08fb0: 4d88                      MOVE   A12,A8
08fc0: 0b08 0080                 ADDI   80h,A8
08fe0: 930e                      MOVE   A8,*A14+,1
08ff0: 0d5f a8a0 0001            CALLA  1A8A0h
09020: a3cf                      MOVE   A14,-*SP,1
09030: 93ae                      MOVE   A13,*A14+,1
09040: 09e8 8a40 0005            MOVI   58A40h,A8
09070: 930e                      MOVE   A8,*A14+,1
09080: 0d5f b9c0 0004            CALLA  4B9C0h
090b0: 0d5f 1ad0 0001            CALLA  11AD0h
090e0: 0d88 0027                 DSJ    A8,9370h
09100: a3cf                      MOVE   A14,-*SP,1
09110: 1808                      MOVK   20h,A8
09120: 930e                      MOVE   A8,*A14+,1
09130: 09e8 ce60 0005            MOVI   5CE60h,A8
09160: 930e                      MOVE   A8,*A14+,1
09170: 0d5f bb10 0004            CALLA  4BB10h
091a0: 4d0a                      MOVE   A8,A10
091b0: ca17                      JREQ   9330h
091c0: 4d88                      MOVE   A12,A8
091d0: 2468                      SLL    3h,A8
091e0: 0b28 9220 0005            ADDI   59220h,A8
09210: a3cf                      MOVE   A14,-*SP,1
09220: 934e                      MOVE   A10,*A14+,1
09230: 4d0a                      MOVE   A8,A10
09240: 0d5f a540 0001            CALLA  1A540h
09270: 8d0a                      MOVB   A8,*A10
09280: 102c                      INC    A12
09290: 270c                      SLL    18h,A12
092a0: 290c                      SRA    18h,A12
092b0: 34ec                      CMPK   7h,A12
092c0: c4a3                      JRLT   8D00h
092d0: 458c                      SUB    A12,A12
092e0: 05ec 9258 0005            MOVB   A12,@59258h
09310: 1828                      MOVK   1h,A8
09320: c005                      JR     9380h
09330: 196c                      MOVK   Bh,A12
09340: 05ec dd30 0004            MOVB   A12,@4DD30h
09370: 4508                      SUB    A8,A8
09380: b7ee 00a0                 MOVE   *SP(A0h),A14,1
093a0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
093c0: 0962                      RETS   2h

_set_start_speed_tiga_request:
093d0: 098f 000c                 MMTM   SP,A12,A13
093f0: 4dcd                      MOVE   A14,A13
09400: 0b0e 0180                 ADDI   180h,A14
09420: 4da8                      MOVE   A13,A8
09430: 0be8 ff9f                 SUBI   60h,A8
09450: 4dac                      MOVE   A13,A12
09460: 9b0c                      MOVE   *A8+,*A12+,1
09470: 9b0c                      MOVE   *A8+,*A12+,1
09480: 8b0c                      MOVE   *A8,*A12,1
09490: 4dac                      MOVE   A13,A12
094a0: 0b0c 0060                 ADDI   60h,A12
094c0: 09e8 dac0 0004            MOVI   4DAC0h,A8
094f0: 9b0c                      MOVE   *A8+,*A12+,1
09500: 9b0c                      MOVE   *A8+,*A12+,1
09510: 8b0c                      MOVE   *A8,*A12,1
09520: 4fa2                      MOVE   A13,B2
09530: 0b12 00c0                 ADDI   C0h,B2
09550: 09f0 d400 0004            MOVI   4D400h,B0
09580: 09d7 00c0                 MOVI   C0h,B7
095a0: 00f3                      BLMOVE 1,1
095b0: a3cf                      MOVE   A14,-*SP,1
095c0: 93ae                      MOVE   A13,*A14+,1
095d0: 0d5f 6400 0002            CALLA  26400h
09600: b7ee 0060                 MOVE   *SP(60h),A14,1
09620: 09af 3000                 MMFM   SP,A12,A13
09640: 0962                      RETS   2h

_set_speed_inc_tiga_request:
09650: 098f 000c                 MMTM   SP,A12,A13
09670: 4dcd                      MOVE   A14,A13
09680: 0b0e 0180                 ADDI   180h,A14
096a0: 09e8 da60 0004            MOVI   4DA60h,A8
096d0: 4dac                      MOVE   A13,A12
096e0: 9b0c                      MOVE   *A8+,*A12+,1
096f0: 9b0c                      MOVE   *A8+,*A12+,1
09700: 8b0c                      MOVE   *A8,*A12,1
09710: 4dac                      MOVE   A13,A12
09720: 0b0c 0060                 ADDI   60h,A12
09740: 4da8                      MOVE   A13,A8
09750: 0be8 ff9f                 SUBI   60h,A8
09770: 9b0c                      MOVE   *A8+,*A12+,1
09780: 9b0c                      MOVE   *A8+,*A12+,1
09790: 8b0c                      MOVE   *A8,*A12,1
097a0: 4fa2                      MOVE   A13,B2
097b0: 0b12 00c0                 ADDI   C0h,B2
097d0: 09f0 d400 0004            MOVI   4D400h,B0
09800: 09d7 00c0                 MOVI   C0h,B7
09820: 00f3                      BLMOVE 1,1
09830: a3cf                      MOVE   A14,-*SP,1
09840: 93ae                      MOVE   A13,*A14+,1
09850: 0d5f 6400 0002            CALLA  26400h
09880: b7ee 0060                 MOVE   *SP(60h),A14,1
098a0: 09af 3000                 MMFM   SP,A12,A13
098c0: 0962                      RETS   2h

_set_timer_inc_tiga_request:
098d0: 098f 000c                 MMTM   SP,A12,A13
098f0: 4dcd                      MOVE   A14,A13
09900: 0b0e 0180                 ADDI   180h,A14
09920: 09e8 da60 0004            MOVI   4DA60h,A8
09950: 4dac                      MOVE   A13,A12
09960: 9b0c                      MOVE   *A8+,*A12+,1
09970: 9b0c                      MOVE   *A8+,*A12+,1
09980: 8b0c                      MOVE   *A8,*A12,1
09990: 4dac                      MOVE   A13,A12
099a0: 0b0c 0060                 ADDI   60h,A12
099c0: 09e8 dac0 0004            MOVI   4DAC0h,A8
099f0: 9b0c                      MOVE   *A8+,*A12+,1
09a00: 9b0c                      MOVE   *A8+,*A12+,1
09a10: 8b0c                      MOVE   *A8,*A12,1
09a20: 4fa2                      MOVE   A13,B2
09a30: 0b12 00c0                 ADDI   C0h,B2
09a50: 4fa0                      MOVE   A13,B0
09a60: 0bf0 ff3f                 SUBI   C0h,B0
09a80: 09d7 00c0                 MOVI   C0h,B7
09aa0: 00f3                      BLMOVE 1,1
09ab0: a3cf                      MOVE   A14,-*SP,1
09ac0: 93ae                      MOVE   A13,*A14+,1
09ad0: 0d5f 6400 0002            CALLA  26400h
09b00: b7ee 0060                 MOVE   *SP(60h),A14,1
09b20: 09af 3000                 MMFM   SP,A12,A13
09b40: 0962                      RETS   2h

_set_cruise_speed_tiga_request:
09b50: 098f 000c                 MMTM   SP,A12,A13
09b70: 4dcd                      MOVE   A14,A13
09b80: 09e8 d9a0 0004            MOVI   4D9A0h,A8
09bb0: 4dac                      MOVE   A13,A12
09bc0: 0bec ff9f                 SUBI   60h,A12
09be0: 9b88                      MOVE   *A12+,*A8+,1
09bf0: 9b88                      MOVE   *A12+,*A8+,1
09c00: 8b88                      MOVE   *A12,*A8,1
09c10: b7ee 0060                 MOVE   *SP(60h),A14,1
09c30: 09af 3000                 MMFM   SP,A12,A13
09c50: 0962                      RETS   2h

_set_backlash_dist_tiga_request:
09c60: a3af                      MOVE   A13,-*SP,1
09c70: 4dcd                      MOVE   A14,A13
09c80: 09f2 d700 0004            MOVI   4D700h,B2
09cb0: 4fa0                      MOVE   A13,B0
09cc0: 0bf0 ff3f                 SUBI   C0h,B0
09ce0: 09d7 00c0                 MOVI   C0h,B7
09d00: 00f3                      BLMOVE 1,1
09d10: b7ee 0040                 MOVE   *SP(40h),A14,1
09d30: 97ed                      MOVE   *SP+,A13,1
09d40: 0962                      RETS   2h

_set_backlash_speed_tiga_request:
09d50: 098f 000c                 MMTM   SP,A12,A13
09d70: 4dcd                      MOVE   A14,A13
09d80: 09e8 da00 0004            MOVI   4DA00h,A8
09db0: 4dac                      MOVE   A13,A12
09dc0: 0bec ff9f                 SUBI   60h,A12
09de0: 9b88                      MOVE   *A12+,*A8+,1
09df0: 9b88                      MOVE   *A12+,*A8+,1
09e00: 8b88                      MOVE   *A12,*A8,1
09e10: b7ee 0060                 MOVE   *SP(60h),A14,1
09e30: 09af 3000                 MMFM   SP,A12,A13
09e50: 0962                      RETS   2h

_decode_stage_status:
09e60: 098f 022c                 MMTM   SP,A6,A10,A12,A13
09e80: 4dcd                      MOVE   A14,A13
09e90: 0b0e 0800                 ADDI   800h,A14
09eb0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
09ed0: 18aa                      MOVK   5h,A10
09ee0: 07a8 d290 0004            MOVE   @4D290h,A8,1
09f10: 0ba8 0040 0000            ORI    40h,A8
09f40: 0788 d290 0004            MOVE   A8,@4D290h,1
09f70: 0ba8 0080 0000            ORI    80h,A8
09fa0: 0788 d290 0004            MOVE   A8,@4D290h,1
09fd0: 0ba8 0100 0000            ORI    100h,A8
0a000: 0788 d290 0004            MOVE   A8,@4D290h,1
0a030: 07e8 d300 0004            MOVE   @4D300h,A8
0a060: 0d88 008e                 DSJ    A8,A960h
0a080: a3cf                      MOVE   A14,-*SP,1
0a090: 09c8 0058                 MOVI   58h,A8
0a0b0: 930e                      MOVE   A8,*A14+,1
0a0c0: 938e                      MOVE   A12,*A14+,1
0a0d0: 0d5f bb10 0004            CALLA  4BB10h
0a100: 4d0c                      MOVE   A8,A12
0a110: ca00 05b2                 JREQ   FC50h
0a130: a3cf                      MOVE   A14,-*SP,1
0a140: 1808                      MOVK   20h,A8
0a150: 930e                      MOVE   A8,*A14+,1
0a160: 938e                      MOVE   A12,*A14+,1
0a170: 0d5f bb10 0004            CALLA  4BB10h
0a1a0: 4d0c                      MOVE   A8,A12
0a1b0: ca00 0591                 JREQ   FAE0h
0a1d0: a3cf                      MOVE   A14,-*SP,1
0a1e0: 110c                      ADDK   8h,A12
0a1f0: 938e                      MOVE   A12,*A14+,1
0a200: 0d5f b100 0004            CALLA  4B100h
0a230: 4f0e                      MOVE   A8,B14
0a240: 4fd8                      MOVE   B14,A8
0a250: 0d08 ffff ff7f            SUBI   800000h,A8
0a280: 0d5f 57c0 0004            CALLA  457C0h
0a2b0: d60e d340 0004            MOVE   @4D340h,*A14+,1
0a2e0: 0d5f a3c0 0004            CALLA  4A3C0h
0a310: 0d5f 4980 0004            CALLA  44980h
0a340: 4508                      SUB    A8,A8
0a350: 09e6 0000 3fa0            MOVI   3FA00000h,A6
0a380: 92ce                      MOVE   A6,*A14+,1
0a390: 930e                      MOVE   A8,*A14+,1
0a3a0: 0d5f 7fa0 0004            CALLA  47FA0h
0a3d0: 0d5f 4030 0004            CALLA  44030h
0a400: d60e d640 0004            MOVE   @4D640h,*A14+,1
0a430: 0d5f 8c60 0004            CALLA  48C60h
0a460: a7c8                      MOVE   -*A14,A8,1
0a470: 0788 d140 0004            MOVE   A8,@4D140h,1
0a4a0: a3cf                      MOVE   A14,-*SP,1
0a4b0: 1806                      MOVK   20h,A6
0a4c0: 92ce                      MOVE   A6,*A14+,1
0a4d0: 938e                      MOVE   A12,*A14+,1
0a4e0: 0d5f bb10 0004            CALLA  4BB10h
0a510: 4d0c                      MOVE   A8,A12
0a520: ca00 0543                 JREQ   F970h
0a540: 110c                      ADDK   8h,A12
0a550: 8f88                      MOVB   *A12,A8
0a560: 0b48 ffb2                 CMPI   4Dh,A8
0a580: ca1c                      JREQ   A750h
0a590: 0570                      SETF   10h,1,0
0a5a0: 05a8 de80 0004            MOVE   @4DE80h,A8,0
0a5d0: ca12                      JREQ   A700h
0a5e0: 07e6 d260 0004            MOVE   @4D260h,A6
0a610: 39c6                      DSJS   A6,A700h
0a620: 05a6 de70 0004            MOVE   @4DE70h,A6,0
0a650: 05a8 de60 0004            MOVE   @4DE60h,A8,0
0a680: 40c8                      ADD    A6,A8
0a690: 0588 de60 0004            MOVE   A8,@4DE60h,0
0a6c0: 4508                      SUB    A8,A8
0a6d0: 0588 de80 0004            MOVE   A8,@4DE80h,0
0a700: 44c6                      SUB    A6,A6
0a710: 05e6 d260 0004            MOVB   A6,@4D260h
0a740: c004                      JR     A790h
0a750: 1828                      MOVK   1h,A8
0a760: 05e8 d260 0004            MOVB   A8,@4D260h
0a790: a3cf                      MOVE   A14,-*SP,1
0a7a0: 1806                      MOVK   20h,A6
0a7b0: 92ce                      MOVE   A6,*A14+,1
0a7c0: 938e                      MOVE   A12,*A14+,1
0a7d0: 0d5f bb10 0004            CALLA  4BB10h
0a800: 4d0c                      MOVE   A8,A12
0a810: ca00 04fd                 JREQ   F800h
0a830: 110c                      ADDK   8h,A12
0a840: 8f88                      MOVB   *A12,A8
0a850: 0b48 ffb6                 CMPI   49h,A8
0a870: ca0a                      JREQ   A920h
0a880: 4508                      SUB    A8,A8
0a890: 05e8 d200 0004            MOVB   A8,@4D200h
0a8c0: 07e6 d308 0004            MOVE   @4D308h,A6
0a8f0: 0d86 0098                 DSJ    A6,B290h
0a910: c009                      JR     A9B0h
0a920: 1828                      MOVK   1h,A8
0a930: 05e8 d200 0004            MOVB   A8,@4D200h
0a960: 07e6 d308 0004            MOVE   @4D308h,A6
0a990: 0d86 008e                 DSJ    A6,B290h
0a9b0: a3cf                      MOVE   A14,-*SP,1
0a9c0: 09c6 0059                 MOVI   59h,A6
0a9e0: 92ce                      MOVE   A6,*A14+,1
0a9f0: 938e                      MOVE   A12,*A14+,1
0aa00: 0d5f bb10 0004            CALLA  4BB10h
0aa30: 4d0c                      MOVE   A8,A12
0aa40: ca00 04c3                 JREQ   F690h
0aa60: a3cf                      MOVE   A14,-*SP,1
0aa70: 1808                      MOVK   20h,A8
0aa80: 930e                      MOVE   A8,*A14+,1
0aa90: 938e                      MOVE   A12,*A14+,1
0aaa0: 0d5f bb10 0004            CALLA  4BB10h
0aad0: 4d0c                      MOVE   A8,A12
0aae0: ca00 04a2                 JREQ   F520h
0ab00: a3cf                      MOVE   A14,-*SP,1
0ab10: 110c                      ADDK   8h,A12
0ab20: 938e                      MOVE   A12,*A14+,1
0ab30: 0d5f b100 0004            CALLA  4B100h
0ab60: 4f0e                      MOVE   A8,B14
0ab70: 4fd8                      MOVE   B14,A8
0ab80: 0d08 ffff ff7f            SUBI   800000h,A8
0abb0: 0d5f 57c0 0004            CALLA  457C0h
0abe0: d60e d360 0004            MOVE   @4D360h,*A14+,1
0ac10: 0d5f a3c0 0004            CALLA  4A3C0h
0ac40: 0d5f 4980 0004            CALLA  44980h
0ac70: 4508                      SUB    A8,A8
0ac80: 09e6 0000 3fa0            MOVI   3FA00000h,A6
0acb0: 92ce                      MOVE   A6,*A14+,1
0acc0: 930e                      MOVE   A8,*A14+,1
0acd0: 0d5f 7fa0 0004            CALLA  47FA0h
0ad00: 0d5f 4030 0004            CALLA  44030h
0ad30: d60e d660 0004            MOVE   @4D660h,*A14+,1
0ad60: 0d5f 8c60 0004            CALLA  48C60h
0ad90: a7c8                      MOVE   -*A14,A8,1
0ada0: 0788 d160 0004            MOVE   A8,@4D160h,1
0add0: a3cf                      MOVE   A14,-*SP,1
0ade0: 1806                      MOVK   20h,A6
0adf0: 92ce                      MOVE   A6,*A14+,1
0ae00: 938e                      MOVE   A12,*A14+,1
0ae10: 0d5f bb10 0004            CALLA  4BB10h
0ae40: 4d0c                      MOVE   A8,A12
0ae50: ca00 0452                 JREQ   F390h
0ae70: 110c                      ADDK   8h,A12
0ae80: 8f88                      MOVB   *A12,A8
0ae90: 0b48 ffb2                 CMPI   4Dh,A8
0aeb0: ca1c                      JREQ   B080h
0aec0: 0570                      SETF   10h,1,0
0aed0: 05a8 de90 0004            MOVE   @4DE90h,A8,0
0af00: ca12                      JREQ   B030h
0af10: 07e6 d268 0004            MOVE   @4D268h,A6
0af40: 39c6                      DSJS   A6,B030h
0af50: 05a6 de70 0004            MOVE   @4DE70h,A6,0
0af80: 05a8 de60 0004            MOVE   @4DE60h,A8,0
0afb0: 40c8                      ADD    A6,A8
0afc0: 0588 de60 0004            MOVE   A8,@4DE60h,0
0aff0: 4508                      SUB    A8,A8
0b000: 0588 de90 0004            MOVE   A8,@4DE90h,0
0b030: 44c6                      SUB    A6,A6
0b040: 05e6 d268 0004            MOVB   A6,@4D268h
0b070: c004                      JR     B0C0h
0b080: 1828                      MOVK   1h,A8
0b090: 05e8 d268 0004            MOVB   A8,@4D268h
0b0c0: a3cf                      MOVE   A14,-*SP,1
0b0d0: 1806                      MOVK   20h,A6
0b0e0: 92ce                      MOVE   A6,*A14+,1
0b0f0: 938e                      MOVE   A12,*A14+,1
0b100: 0d5f bb10 0004            CALLA  4BB10h
0b130: 4d0c                      MOVE   A8,A12
0b140: ca00 040a                 JREQ   F200h
0b160: 110c                      ADDK   8h,A12
0b170: 8f88                      MOVB   *A12,A8
0b180: 0b48 ffb6                 CMPI   49h,A8
0b1a0: ca0a                      JREQ   B250h
0b1b0: 4508                      SUB    A8,A8
0b1c0: 05e8 d208 0004            MOVB   A8,@4D208h
0b1f0: 07e6 d310 0004            MOVE   @4D310h,A6
0b220: 0d86 0098                 DSJ    A6,BBC0h
0b240: c009                      JR     B2E0h
0b250: 1828                      MOVK   1h,A8
0b260: 05e8 d208 0004            MOVB   A8,@4D208h
0b290: 07e6 d310 0004            MOVE   @4D310h,A6
0b2c0: 0d86 008e                 DSJ    A6,BBC0h
0b2e0: a3cf                      MOVE   A14,-*SP,1
0b2f0: 09c6 005a                 MOVI   5Ah,A6
0b310: 92ce                      MOVE   A6,*A14+,1
0b320: 938e                      MOVE   A12,*A14+,1
0b330: 0d5f bb10 0004            CALLA  4BB10h
0b360: 4d0c                      MOVE   A8,A12
0b370: ca00 03ce                 JREQ   F070h
0b390: a3cf                      MOVE   A14,-*SP,1
0b3a0: 1808                      MOVK   20h,A8
0b3b0: 930e                      MOVE   A8,*A14+,1
0b3c0: 938e                      MOVE   A12,*A14+,1
0b3d0: 0d5f bb10 0004            CALLA  4BB10h
0b400: 4d0c                      MOVE   A8,A12
0b410: ca00 03ab                 JREQ   EEE0h
0b430: a3cf                      MOVE   A14,-*SP,1
0b440: 110c                      ADDK   8h,A12
0b450: 938e                      MOVE   A12,*A14+,1
0b460: 0d5f b100 0004            CALLA  4B100h
0b490: 4f0e                      MOVE   A8,B14
0b4a0: 4fd8                      MOVE   B14,A8
0b4b0: 0d08 ffff ff7f            SUBI   800000h,A8
0b4e0: 0d5f 57c0 0004            CALLA  457C0h
0b510: d60e d380 0004            MOVE   @4D380h,*A14+,1
0b540: 0d5f a3c0 0004            CALLA  4A3C0h
0b570: 0d5f 4980 0004            CALLA  44980h
0b5a0: 4508                      SUB    A8,A8
0b5b0: 09e6 0000 3fa0            MOVI   3FA00000h,A6
0b5e0: 92ce                      MOVE   A6,*A14+,1
0b5f0: 930e                      MOVE   A8,*A14+,1
0b600: 0d5f 7fa0 0004            CALLA  47FA0h
0b630: 0d5f 4030 0004            CALLA  44030h
0b660: d60e d680 0004            MOVE   @4D680h,*A14+,1
0b690: 0d5f 8c60 0004            CALLA  48C60h
0b6c0: a7c8                      MOVE   -*A14,A8,1
0b6d0: 0788 d180 0004            MOVE   A8,@4D180h,1
0b700: a3cf                      MOVE   A14,-*SP,1
0b710: 1806                      MOVK   20h,A6
0b720: 92ce                      MOVE   A6,*A14+,1
0b730: 938e                      MOVE   A12,*A14+,1
0b740: 0d5f bb10 0004            CALLA  4BB10h
0b770: 4d0c                      MOVE   A8,A12
0b780: ca00 035b                 JREQ   ED50h
0b7a0: 110c                      ADDK   8h,A12
0b7b0: 8f88                      MOVB   *A12,A8
0b7c0: 0b48 ffb2                 CMPI   4Dh,A8
0b7e0: ca1c                      JREQ   B9B0h
0b7f0: 0570                      SETF   10h,1,0
0b800: 05a8 dea0 0004            MOVE   @4DEA0h,A8,0
0b830: ca12                      JREQ   B960h
0b840: 07e6 d270 0004            MOVE   @4D270h,A6
0b870: 39c6                      DSJS   A6,B960h
0b880: 05a6 de70 0004            MOVE   @4DE70h,A6,0
0b8b0: 05a8 de60 0004            MOVE   @4DE60h,A8,0
0b8e0: 40c8                      ADD    A6,A8
0b8f0: 0588 de60 0004            MOVE   A8,@4DE60h,0
0b920: 4508                      SUB    A8,A8
0b930: 0588 dea0 0004            MOVE   A8,@4DEA0h,0
0b960: 44c6                      SUB    A6,A6
0b970: 05e6 d270 0004            MOVB   A6,@4D270h
0b9a0: c004                      JR     B9F0h
0b9b0: 1828                      MOVK   1h,A8
0b9c0: 05e8 d270 0004            MOVB   A8,@4D270h
0b9f0: a3cf                      MOVE   A14,-*SP,1
0ba00: 1806                      MOVK   20h,A6
0ba10: 92ce                      MOVE   A6,*A14+,1
0ba20: 938e                      MOVE   A12,*A14+,1
0ba30: 0d5f bb10 0004            CALLA  4BB10h
0ba60: 4d0c                      MOVE   A8,A12
0ba70: ca00 0313                 JREQ   EBC0h
0ba90: 110c                      ADDK   8h,A12
0baa0: 8f88                      MOVB   *A12,A8
0bab0: 0b48 ffb6                 CMPI   49h,A8
0bad0: ca0a                      JREQ   BB80h
0bae0: 4508                      SUB    A8,A8
0baf0: 05e8 d210 0004            MOVB   A8,@4D210h
0bb20: 07e6 d318 0004            MOVE   @4D318h,A6
0bb50: 0d86 0098                 DSJ    A6,C4F0h
0bb70: c009                      JR     BC10h
0bb80: 1828                      MOVK   1h,A8
0bb90: 05e8 d210 0004            MOVB   A8,@4D210h
0bbc0: 07e6 d318 0004            MOVE   @4D318h,A6
0bbf0: 0d86 008e                 DSJ    A6,C4F0h
0bc10: a3cf                      MOVE   A14,-*SP,1
0bc20: 09c6 0054                 MOVI   54h,A6
0bc40: 92ce                      MOVE   A6,*A14+,1
0bc50: 938e                      MOVE   A12,*A14+,1
0bc60: 0d5f bb10 0004            CALLA  4BB10h
0bc90: 4d0c                      MOVE   A8,A12
0bca0: ca00 02d7                 JREQ   EA30h
0bcc0: a3cf                      MOVE   A14,-*SP,1
0bcd0: 1808                      MOVK   20h,A8
0bce0: 930e                      MOVE   A8,*A14+,1
0bcf0: 938e                      MOVE   A12,*A14+,1
0bd00: 0d5f bb10 0004            CALLA  4BB10h
0bd30: 4d0c                      MOVE   A8,A12
0bd40: ca00 02b4                 JREQ   E8A0h
0bd60: a3cf                      MOVE   A14,-*SP,1
0bd70: 110c                      ADDK   8h,A12
0bd80: 938e                      MOVE   A12,*A14+,1
0bd90: 0d5f b100 0004            CALLA  4B100h
0bdc0: 4f0e                      MOVE   A8,B14
0bdd0: 4fd8                      MOVE   B14,A8
0bde0: 0d08 ffff ff7f            SUBI   800000h,A8
0be10: 0d5f 57c0 0004            CALLA  457C0h
0be40: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
0be70: 0d5f a3c0 0004            CALLA  4A3C0h
0bea0: 0d5f 4980 0004            CALLA  44980h
0bed0: 4508                      SUB    A8,A8
0bee0: 09e6 0000 3fa0            MOVI   3FA00000h,A6
0bf10: 92ce                      MOVE   A6,*A14+,1
0bf20: 930e                      MOVE   A8,*A14+,1
0bf30: 0d5f 7fa0 0004            CALLA  47FA0h
0bf60: 0d5f 4030 0004            CALLA  44030h
0bf90: d60e d6a0 0004            MOVE   @4D6A0h,*A14+,1
0bfc0: 0d5f 8c60 0004            CALLA  48C60h
0bff0: a7c8                      MOVE   -*A14,A8,1
0c000: 0788 d1a0 0004            MOVE   A8,@4D1A0h,1
0c030: a3cf                      MOVE   A14,-*SP,1
0c040: 1806                      MOVK   20h,A6
0c050: 92ce                      MOVE   A6,*A14+,1
0c060: 938e                      MOVE   A12,*A14+,1
0c070: 0d5f bb10 0004            CALLA  4BB10h
0c0a0: 4d0c                      MOVE   A8,A12
0c0b0: ca00 0264                 JREQ   E710h
0c0d0: 110c                      ADDK   8h,A12
0c0e0: 8f88                      MOVB   *A12,A8
0c0f0: 0b48 ffb2                 CMPI   4Dh,A8
0c110: ca1c                      JREQ   C2E0h
0c120: 0570                      SETF   10h,1,0
0c130: 05a8 deb0 0004            MOVE   @4DEB0h,A8,0
0c160: ca12                      JREQ   C290h
0c170: 07e6 d278 0004            MOVE   @4D278h,A6
0c1a0: 39c6                      DSJS   A6,C290h
0c1b0: 05a6 de70 0004            MOVE   @4DE70h,A6,0
0c1e0: 05a8 de60 0004            MOVE   @4DE60h,A8,0
0c210: 40c8                      ADD    A6,A8
0c220: 0588 de60 0004            MOVE   A8,@4DE60h,0
0c250: 4508                      SUB    A8,A8
0c260: 0588 deb0 0004            MOVE   A8,@4DEB0h,0
0c290: 44c6                      SUB    A6,A6
0c2a0: 05e6 d278 0004            MOVB   A6,@4D278h
0c2d0: c004                      JR     C320h
0c2e0: 1828                      MOVK   1h,A8
0c2f0: 05e8 d278 0004            MOVB   A8,@4D278h
0c320: a3cf                      MOVE   A14,-*SP,1
0c330: 1806                      MOVK   20h,A6
0c340: 92ce                      MOVE   A6,*A14+,1
0c350: 938e                      MOVE   A12,*A14+,1
0c360: 0d5f bb10 0004            CALLA  4BB10h
0c390: 4d0c                      MOVE   A8,A12
0c3a0: ca00 021c                 JREQ   E580h
0c3c0: 110c                      ADDK   8h,A12
0c3d0: 8f88                      MOVB   *A12,A8
0c3e0: 0b48 ffb6                 CMPI   49h,A8
0c400: ca0a                      JREQ   C4B0h
0c410: 4508                      SUB    A8,A8
0c420: 05e8 d218 0004            MOVB   A8,@4D218h
0c450: 07e6 d320 0004            MOVE   @4D320h,A6
0c480: 0d86 009f                 DSJ    A6,CE90h
0c4a0: c009                      JR     C540h
0c4b0: 1828                      MOVK   1h,A8
0c4c0: 05e8 d218 0004            MOVB   A8,@4D218h
0c4f0: 07e6 d320 0004            MOVE   @4D320h,A6
0c520: 0d86 0095                 DSJ    A6,CE90h
0c540: a3cf                      MOVE   A14,-*SP,1
0c550: 09c6 0052                 MOVI   52h,A6
0c570: 92ce                      MOVE   A6,*A14+,1
0c580: 938e                      MOVE   A12,*A14+,1
0c590: 0d5f bb10 0004            CALLA  4BB10h
0c5c0: 4d0c                      MOVE   A8,A12
0c5d0: ca00 01e0                 JREQ   E3F0h
0c5f0: a3cf                      MOVE   A14,-*SP,1
0c600: 1808                      MOVK   20h,A8
0c610: 930e                      MOVE   A8,*A14+,1
0c620: 938e                      MOVE   A12,*A14+,1
0c630: 0d5f bb10 0004            CALLA  4BB10h
0c660: 4d0c                      MOVE   A8,A12
0c670: ca00 01bd                 JREQ   E260h
0c690: a3cf                      MOVE   A14,-*SP,1
0c6a0: 110c                      ADDK   8h,A12
0c6b0: 938e                      MOVE   A12,*A14+,1
0c6c0: 0d5f b100 0004            CALLA  4B100h
0c6f0: 4f0e                      MOVE   A8,B14
0c700: 4fd8                      MOVE   B14,A8
0c710: 0d08 ffff ff7f            SUBI   800000h,A8
0c740: 0d5f 57c0 0004            CALLA  457C0h
0c770: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
0c7a0: 0d5f a3c0 0004            CALLA  4A3C0h
0c7d0: 0d5f 4980 0004            CALLA  44980h
0c800: 4508                      SUB    A8,A8
0c810: 09e6 0000 3fa0            MOVI   3FA00000h,A6
0c840: 92ce                      MOVE   A6,*A14+,1
0c850: 930e                      MOVE   A8,*A14+,1
0c860: 0d5f 7fa0 0004            CALLA  47FA0h
0c890: 0d5f 4030 0004            CALLA  44030h
0c8c0: d60e d6c0 0004            MOVE   @4D6C0h,*A14+,1
0c8f0: 0d5f 8c60 0004            CALLA  48C60h
0c920: a7c8                      MOVE   -*A14,A8,1
0c930: 0788 d1c0 0004            MOVE   A8,@4D1C0h,1
0c960: a3cf                      MOVE   A14,-*SP,1
0c970: 1806                      MOVK   20h,A6
0c980: 92ce                      MOVE   A6,*A14+,1
0c990: 938e                      MOVE   A12,*A14+,1
0c9a0: 0d5f bb10 0004            CALLA  4BB10h
0c9d0: 4d0c                      MOVE   A8,A12
0c9e0: ca00 016d                 JREQ   E0D0h
0ca00: 110c                      ADDK   8h,A12
0ca10: 8f88                      MOVB   *A12,A8
0ca20: 0b48 ffb2                 CMPI   4Dh,A8
0ca40: ca23                      JREQ   CC80h
0ca50: 0570                      SETF   10h,1,0
0ca60: 05a8 dec0 0004            MOVE   @4DEC0h,A8,0
0ca90: ca19                      JREQ   CC30h
0caa0: 07e6 d280 0004            MOVE   @4D280h,A6
0cad0: 1426                      DEC    A6
0cae0: ca06                      JREQ   CB50h
0caf0: 4d06                      MOVE   A8,A6
0cb00: ca12                      JREQ   CC30h
0cb10: 05a8 de40 0004            MOVE   @4DE40h,A8,0
0cb40: cb0e                      JRNE   CC30h
0cb50: 05a6 de70 0004            MOVE   @4DE70h,A6,0
0cb80: 05a8 de60 0004            MOVE   @4DE60h,A8,0
0cbb0: 40c8                      ADD    A6,A8
0cbc0: 0588 de60 0004            MOVE   A8,@4DE60h,0
0cbf0: 4508                      SUB    A8,A8
0cc00: 0588 dec0 0004            MOVE   A8,@4DEC0h,0
0cc30: 44c6                      SUB    A6,A6
0cc40: 05e6 d280 0004            MOVB   A6,@4D280h
0cc70: c004                      JR     CCC0h
0cc80: 1828                      MOVK   1h,A8
0cc90: 05e8 d280 0004            MOVB   A8,@4D280h
0ccc0: a3cf                      MOVE   A14,-*SP,1
0ccd0: 1806                      MOVK   20h,A6
0cce0: 92ce                      MOVE   A6,*A14+,1
0ccf0: 938e                      MOVE   A12,*A14+,1
0cd00: 0d5f bb10 0004            CALLA  4BB10h
0cd30: 4d0c                      MOVE   A8,A12
0cd40: ca00 011e                 JREQ   DF40h
0cd60: 110c                      ADDK   8h,A12
0cd70: 8f88                      MOVB   *A12,A8
0cd80: 0b48 ffb6                 CMPI   49h,A8
0cda0: ca0a                      JREQ   CE50h
0cdb0: 4508                      SUB    A8,A8
0cdc0: 05e8 d220 0004            MOVB   A8,@4D220h
0cdf0: 07e6 d328 0004            MOVE   @4D328h,A6
0ce20: 0d86 0096                 DSJ    A6,D7A0h
0ce40: c009                      JR     CEE0h
0ce50: 1828                      MOVK   1h,A8
0ce60: 05e8 d220 0004            MOVB   A8,@4D220h
0ce90: 07e6 d328 0004            MOVE   @4D328h,A6
0cec0: 0d86 008c                 DSJ    A6,D7A0h
0cee0: a3cf                      MOVE   A14,-*SP,1
0cef0: 09c6 004d                 MOVI   4Dh,A6
0cf10: 92ce                      MOVE   A6,*A14+,1
0cf20: 938e                      MOVE   A12,*A14+,1
0cf30: 0d5f bb10 0004            CALLA  4BB10h
0cf60: 4d0c                      MOVE   A8,A12
0cf70: ca00 00e2                 JREQ   DDB0h
0cf90: a3cf                      MOVE   A14,-*SP,1
0cfa0: 1808                      MOVK   20h,A8
0cfb0: 930e                      MOVE   A8,*A14+,1
0cfc0: 938e                      MOVE   A12,*A14+,1
0cfd0: 0d5f bb10 0004            CALLA  4BB10h
0d000: 4d0c                      MOVE   A8,A12
0d010: ca00 00bf                 JREQ   DC20h
0d030: a3cf                      MOVE   A14,-*SP,1
0d040: 110c                      ADDK   8h,A12
0d050: 938e                      MOVE   A12,*A14+,1
0d060: 0d5f b100 0004            CALLA  4B100h
0d090: 4f0e                      MOVE   A8,B14
0d0a0: 4fd8                      MOVE   B14,A8
0d0b0: 0d08 ffff ff7f            SUBI   800000h,A8
0d0e0: 0d5f 57c0 0004            CALLA  457C0h
0d110: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
0d140: 0d5f a3c0 0004            CALLA  4A3C0h
0d170: 0d5f 4980 0004            CALLA  44980h
0d1a0: 4508                      SUB    A8,A8
0d1b0: 09e6 0000 3fa0            MOVI   3FA00000h,A6
0d1e0: 92ce                      MOVE   A6,*A14+,1
0d1f0: 930e                      MOVE   A8,*A14+,1
0d200: 0d5f 7fa0 0004            CALLA  47FA0h
0d230: 0d5f 4030 0004            CALLA  44030h
0d260: d60e d6e0 0004            MOVE   @4D6E0h,*A14+,1
0d290: 0d5f 8c60 0004            CALLA  48C60h
0d2c0: a7c8                      MOVE   -*A14,A8,1
0d2d0: 0788 d1e0 0004            MOVE   A8,@4D1E0h,1
0d300: a3cf                      MOVE   A14,-*SP,1
0d310: 1806                      MOVK   20h,A6
0d320: 92ce                      MOVE   A6,*A14+,1
0d330: 938e                      MOVE   A12,*A14+,1
0d340: 0d5f bb10 0004            CALLA  4BB10h
0d370: 4d0c                      MOVE   A8,A12
0d380: ca70                      JREQ   DA90h
0d390: 110c                      ADDK   8h,A12
0d3a0: 8f88                      MOVB   *A12,A8
0d3b0: 0b48 ffb2                 CMPI   4Dh,A8
0d3d0: ca1c                      JREQ   D5A0h
0d3e0: 0570                      SETF   10h,1,0
0d3f0: 05a8 ded0 0004            MOVE   @4DED0h,A8,0
0d420: ca12                      JREQ   D550h
0d430: 07e6 d288 0004            MOVE   @4D288h,A6
0d460: 39c6                      DSJS   A6,D550h
0d470: 05a6 de70 0004            MOVE   @4DE70h,A6,0
0d4a0: 05a8 de60 0004            MOVE   @4DE60h,A8,0
0d4d0: 40c8                      ADD    A6,A8
0d4e0: 0588 de60 0004            MOVE   A8,@4DE60h,0
0d510: 4508                      SUB    A8,A8
0d520: 0588 ded0 0004            MOVE   A8,@4DED0h,0
0d550: 44c6                      SUB    A6,A6
0d560: 05e6 d288 0004            MOVB   A6,@4D288h
0d590: c004                      JR     D5E0h
0d5a0: 1828                      MOVK   1h,A8
0d5b0: 05e8 d288 0004            MOVB   A8,@4D288h
0d5e0: a3cf                      MOVE   A14,-*SP,1
0d5f0: 1806                      MOVK   20h,A6
0d600: 92ce                      MOVE   A6,*A14+,1
0d610: 938e                      MOVE   A12,*A14+,1
0d620: 0d5f bb10 0004            CALLA  4BB10h
0d650: 4d0c                      MOVE   A8,A12
0d660: ca29                      JREQ   D900h
0d670: 110c                      ADDK   8h,A12
0d680: 8f88                      MOVB   *A12,A8
0d690: 0b48 ffb6                 CMPI   49h,A8
0d6b0: ca0a                      JREQ   D760h
0d6c0: 458c                      SUB    A12,A12
0d6d0: 05ec d228 0004            MOVB   A12,@4D228h
0d700: 07a8 d290 0004            MOVE   @4D290h,A8,1
0d730: 1e28                      BTST   Eh,A8
0d740: cb0a                      JRNE   D7F0h
0d750: c012                      JR     D880h
0d760: 182c                      MOVK   1h,A12
0d770: 05ec d228 0004            MOVB   A12,@4D228h
0d7a0: 07ac d290 0004            MOVE   @4D290h,A12,1
0d7d0: 1e2c                      BTST   Eh,A12
0d7e0: ca09                      JREQ   D880h
0d7f0: 07ac d290 0004            MOVE   @4D290h,A12,1
0d820: 0bac 8000 0000            ORI    8000h,A12
0d850: 078c d290 0004            MOVE   A12,@4D290h,1
0d880: 458c                      SUB    A12,A12
0d890: 0570                      SETF   10h,1,0
0d8a0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0d8d0: 1828                      MOVK   1h,A8
0d8e0: c000 024b                 JR     FDB0h
0d900: 0570                      SETF   10h,1,0
0d910: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0d940: 102c                      INC    A12
0d950: 058c 82e0 0005            MOVE   A12,@582E0h,0
0d980: 050c                      SEXT   A12,0
0d990: 14ac                      SUBK   5h,A12
0d9a0: c703                      JRGT   D9E0h
0d9b0: 1828                      MOVK   1h,A8
0d9c0: c000 023d                 JR     FDB0h
0d9e0: 458c                      SUB    A12,A12
0d9f0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0da20: 1968                      MOVK   Bh,A8
0da30: 05e8 dd30 0004            MOVB   A8,@4DD30h
0da60: 4d88                      MOVE   A12,A8
0da70: c000 0232                 JR     FDB0h
0da90: 0570                      SETF   10h,1,0
0daa0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0dad0: 102c                      INC    A12
0dae0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0db10: 050c                      SEXT   A12,0
0db20: 14ac                      SUBK   5h,A12
0db30: c703                      JRGT   DB70h
0db40: 1828                      MOVK   1h,A8
0db50: c000 0224                 JR     FDB0h
0db70: 458c                      SUB    A12,A12
0db80: 058c 82e0 0005            MOVE   A12,@582E0h,0
0dbb0: 1968                      MOVK   Bh,A8
0dbc0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0dbf0: 4d88                      MOVE   A12,A8
0dc00: c000 0219                 JR     FDB0h
0dc20: 0570                      SETF   10h,1,0
0dc30: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0dc60: 102c                      INC    A12
0dc70: 058c 82e0 0005            MOVE   A12,@582E0h,0
0dca0: 050c                      SEXT   A12,0
0dcb0: 14ac                      SUBK   5h,A12
0dcc0: c703                      JRGT   DD00h
0dcd0: 1828                      MOVK   1h,A8
0dce0: c000 020b                 JR     FDB0h
0dd00: 458c                      SUB    A12,A12
0dd10: 058c 82e0 0005            MOVE   A12,@582E0h,0
0dd40: 1968                      MOVK   Bh,A8
0dd50: 05e8 dd30 0004            MOVB   A8,@4DD30h
0dd80: 4d88                      MOVE   A12,A8
0dd90: c000 0200                 JR     FDB0h
0ddb0: 0570                      SETF   10h,1,0
0ddc0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0ddf0: 102c                      INC    A12
0de00: 058c 82e0 0005            MOVE   A12,@582E0h,0
0de30: 050c                      SEXT   A12,0
0de40: 14ac                      SUBK   5h,A12
0de50: c703                      JRGT   DE90h
0de60: 1828                      MOVK   1h,A8
0de70: c000 01f2                 JR     FDB0h
0de90: 458c                      SUB    A12,A12
0dea0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0ded0: 1988                      MOVK   Ch,A8
0dee0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0df10: 4d88                      MOVE   A12,A8
0df20: c000 01e7                 JR     FDB0h
0df40: 0570                      SETF   10h,1,0
0df50: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0df80: 102c                      INC    A12
0df90: 058c 82e0 0005            MOVE   A12,@582E0h,0
0dfc0: 050c                      SEXT   A12,0
0dfd0: 14ac                      SUBK   5h,A12
0dfe0: c703                      JRGT   E020h
0dff0: 1828                      MOVK   1h,A8
0e000: c000 01d9                 JR     FDB0h
0e020: 458c                      SUB    A12,A12
0e030: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e060: 1968                      MOVK   Bh,A8
0e070: 05e8 dd30 0004            MOVB   A8,@4DD30h
0e0a0: 4d88                      MOVE   A12,A8
0e0b0: c000 01ce                 JR     FDB0h
0e0d0: 0570                      SETF   10h,1,0
0e0e0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0e110: 102c                      INC    A12
0e120: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e150: 050c                      SEXT   A12,0
0e160: 14ac                      SUBK   5h,A12
0e170: c703                      JRGT   E1B0h
0e180: 1828                      MOVK   1h,A8
0e190: c000 01c0                 JR     FDB0h
0e1b0: 458c                      SUB    A12,A12
0e1c0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e1f0: 1968                      MOVK   Bh,A8
0e200: 05e8 dd30 0004            MOVB   A8,@4DD30h
0e230: 4d88                      MOVE   A12,A8
0e240: c000 01b5                 JR     FDB0h
0e260: 0570                      SETF   10h,1,0
0e270: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0e2a0: 102c                      INC    A12
0e2b0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e2e0: 050c                      SEXT   A12,0
0e2f0: 14ac                      SUBK   5h,A12
0e300: c703                      JRGT   E340h
0e310: 1828                      MOVK   1h,A8
0e320: c000 01a7                 JR     FDB0h
0e340: 458c                      SUB    A12,A12
0e350: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e380: 1968                      MOVK   Bh,A8
0e390: 05e8 dd30 0004            MOVB   A8,@4DD30h
0e3c0: 4d88                      MOVE   A12,A8
0e3d0: c000 019c                 JR     FDB0h
0e3f0: 0570                      SETF   10h,1,0
0e400: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0e430: 102c                      INC    A12
0e440: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e470: 050c                      SEXT   A12,0
0e480: 14ac                      SUBK   5h,A12
0e490: c703                      JRGT   E4D0h
0e4a0: 1828                      MOVK   1h,A8
0e4b0: c000 018e                 JR     FDB0h
0e4d0: 458c                      SUB    A12,A12
0e4e0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e510: 1988                      MOVK   Ch,A8
0e520: 05e8 dd30 0004            MOVB   A8,@4DD30h
0e550: 4d88                      MOVE   A12,A8
0e560: c000 0183                 JR     FDB0h
0e580: 0570                      SETF   10h,1,0
0e590: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0e5c0: 102c                      INC    A12
0e5d0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e600: 050c                      SEXT   A12,0
0e610: 14ac                      SUBK   5h,A12
0e620: c703                      JRGT   E660h
0e630: 1828                      MOVK   1h,A8
0e640: c000 0175                 JR     FDB0h
0e660: 458c                      SUB    A12,A12
0e670: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e6a0: 1968                      MOVK   Bh,A8
0e6b0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0e6e0: 4d88                      MOVE   A12,A8
0e6f0: c000 016a                 JR     FDB0h
0e710: 0570                      SETF   10h,1,0
0e720: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0e750: 102c                      INC    A12
0e760: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e790: 050c                      SEXT   A12,0
0e7a0: 14ac                      SUBK   5h,A12
0e7b0: c703                      JRGT   E7F0h
0e7c0: 1828                      MOVK   1h,A8
0e7d0: c000 015c                 JR     FDB0h
0e7f0: 458c                      SUB    A12,A12
0e800: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e830: 1968                      MOVK   Bh,A8
0e840: 05e8 dd30 0004            MOVB   A8,@4DD30h
0e870: 4d88                      MOVE   A12,A8
0e880: c000 0151                 JR     FDB0h
0e8a0: 0570                      SETF   10h,1,0
0e8b0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0e8e0: 102c                      INC    A12
0e8f0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e920: 050c                      SEXT   A12,0
0e930: 14ac                      SUBK   5h,A12
0e940: c703                      JRGT   E980h
0e950: 1828                      MOVK   1h,A8
0e960: c000 0143                 JR     FDB0h
0e980: 458c                      SUB    A12,A12
0e990: 058c 82e0 0005            MOVE   A12,@582E0h,0
0e9c0: 1968                      MOVK   Bh,A8
0e9d0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0ea00: 4d88                      MOVE   A12,A8
0ea10: c000 0138                 JR     FDB0h
0ea30: 0570                      SETF   10h,1,0
0ea40: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0ea70: 102c                      INC    A12
0ea80: 058c 82e0 0005            MOVE   A12,@582E0h,0
0eab0: 050c                      SEXT   A12,0
0eac0: 14ac                      SUBK   5h,A12
0ead0: c703                      JRGT   EB10h
0eae0: 1828                      MOVK   1h,A8
0eaf0: c000 012a                 JR     FDB0h
0eb10: 458c                      SUB    A12,A12
0eb20: 058c 82e0 0005            MOVE   A12,@582E0h,0
0eb50: 1988                      MOVK   Ch,A8
0eb60: 05e8 dd30 0004            MOVB   A8,@4DD30h
0eb90: 4d88                      MOVE   A12,A8
0eba0: c000 011f                 JR     FDB0h
0ebc0: 0570                      SETF   10h,1,0
0ebd0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0ec00: 102c                      INC    A12
0ec10: 058c 82e0 0005            MOVE   A12,@582E0h,0
0ec40: 050c                      SEXT   A12,0
0ec50: 14ac                      SUBK   5h,A12
0ec60: c703                      JRGT   ECA0h
0ec70: 1828                      MOVK   1h,A8
0ec80: c000 0111                 JR     FDB0h
0eca0: 458c                      SUB    A12,A12
0ecb0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0ece0: 1968                      MOVK   Bh,A8
0ecf0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0ed20: 4d88                      MOVE   A12,A8
0ed30: c000 0106                 JR     FDB0h
0ed50: 0570                      SETF   10h,1,0
0ed60: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0ed90: 102c                      INC    A12
0eda0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0edd0: 050c                      SEXT   A12,0
0ede0: 14ac                      SUBK   5h,A12
0edf0: c703                      JRGT   EE30h
0ee00: 1828                      MOVK   1h,A8
0ee10: c000 00f8                 JR     FDB0h
0ee30: 458c                      SUB    A12,A12
0ee40: 058c 82e0 0005            MOVE   A12,@582E0h,0
0ee70: 1968                      MOVK   Bh,A8
0ee80: 05e8 dd30 0004            MOVB   A8,@4DD30h
0eeb0: 4d88                      MOVE   A12,A8
0eec0: c000 00ed                 JR     FDB0h
0eee0: 0570                      SETF   10h,1,0
0eef0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0ef20: 102c                      INC    A12
0ef30: 058c 82e0 0005            MOVE   A12,@582E0h,0
0ef60: 050c                      SEXT   A12,0
0ef70: 14ac                      SUBK   5h,A12
0ef80: c703                      JRGT   EFC0h
0ef90: 1828                      MOVK   1h,A8
0efa0: c000 00df                 JR     FDB0h
0efc0: 458c                      SUB    A12,A12
0efd0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f000: 1968                      MOVK   Bh,A8
0f010: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f040: 4d88                      MOVE   A12,A8
0f050: c000 00d4                 JR     FDB0h
0f070: 0570                      SETF   10h,1,0
0f080: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f0b0: 102c                      INC    A12
0f0c0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f0f0: 050c                      SEXT   A12,0
0f100: 14ac                      SUBK   5h,A12
0f110: c703                      JRGT   F150h
0f120: 1828                      MOVK   1h,A8
0f130: c000 00c6                 JR     FDB0h
0f150: 458c                      SUB    A12,A12
0f160: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f190: 1988                      MOVK   Ch,A8
0f1a0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f1d0: 4d88                      MOVE   A12,A8
0f1e0: c000 00bb                 JR     FDB0h
0f200: 0570                      SETF   10h,1,0
0f210: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f240: 102c                      INC    A12
0f250: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f280: 050c                      SEXT   A12,0
0f290: 14ac                      SUBK   5h,A12
0f2a0: c703                      JRGT   F2E0h
0f2b0: 1828                      MOVK   1h,A8
0f2c0: c000 00ad                 JR     FDB0h
0f2e0: 458c                      SUB    A12,A12
0f2f0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f320: 1968                      MOVK   Bh,A8
0f330: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f360: 4d88                      MOVE   A12,A8
0f370: c000 00a2                 JR     FDB0h
0f390: 0570                      SETF   10h,1,0
0f3a0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f3d0: 102c                      INC    A12
0f3e0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f410: 050c                      SEXT   A12,0
0f420: 14ac                      SUBK   5h,A12
0f430: c703                      JRGT   F470h
0f440: 1828                      MOVK   1h,A8
0f450: c000 0094                 JR     FDB0h
0f470: 458c                      SUB    A12,A12
0f480: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f4b0: 1968                      MOVK   Bh,A8
0f4c0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f4f0: 4d88                      MOVE   A12,A8
0f500: c000 0089                 JR     FDB0h
0f520: 0570                      SETF   10h,1,0
0f530: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f560: 102c                      INC    A12
0f570: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f5a0: 050c                      SEXT   A12,0
0f5b0: 14ac                      SUBK   5h,A12
0f5c0: c702                      JRGT   F5F0h
0f5d0: 1828                      MOVK   1h,A8
0f5e0: c07c                      JR     FDB0h
0f5f0: 458c                      SUB    A12,A12
0f600: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f630: 1968                      MOVK   Bh,A8
0f640: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f670: 4d88                      MOVE   A12,A8
0f680: c072                      JR     FDB0h
0f690: 0570                      SETF   10h,1,0
0f6a0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f6d0: 102c                      INC    A12
0f6e0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f710: 050c                      SEXT   A12,0
0f720: 14ac                      SUBK   5h,A12
0f730: c702                      JRGT   F760h
0f740: 1828                      MOVK   1h,A8
0f750: c065                      JR     FDB0h
0f760: 458c                      SUB    A12,A12
0f770: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f7a0: 1988                      MOVK   Ch,A8
0f7b0: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f7e0: 4d88                      MOVE   A12,A8
0f7f0: c05b                      JR     FDB0h
0f800: 0570                      SETF   10h,1,0
0f810: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f840: 102c                      INC    A12
0f850: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f880: 050c                      SEXT   A12,0
0f890: 14ac                      SUBK   5h,A12
0f8a0: c702                      JRGT   F8D0h
0f8b0: 1828                      MOVK   1h,A8
0f8c0: c04e                      JR     FDB0h
0f8d0: 458c                      SUB    A12,A12
0f8e0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f910: 1968                      MOVK   Bh,A8
0f920: 05e8 dd30 0004            MOVB   A8,@4DD30h
0f950: 4d88                      MOVE   A12,A8
0f960: c044                      JR     FDB0h
0f970: 0570                      SETF   10h,1,0
0f980: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0f9b0: 102c                      INC    A12
0f9c0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0f9f0: 050c                      SEXT   A12,0
0fa00: 14ac                      SUBK   5h,A12
0fa10: c702                      JRGT   FA40h
0fa20: 1828                      MOVK   1h,A8
0fa30: c037                      JR     FDB0h
0fa40: 458c                      SUB    A12,A12
0fa50: 058c 82e0 0005            MOVE   A12,@582E0h,0
0fa80: 1968                      MOVK   Bh,A8
0fa90: 05e8 dd30 0004            MOVB   A8,@4DD30h
0fac0: 4d88                      MOVE   A12,A8
0fad0: c02d                      JR     FDB0h
0fae0: 0570                      SETF   10h,1,0
0faf0: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0fb20: 102c                      INC    A12
0fb30: 058c 82e0 0005            MOVE   A12,@582E0h,0
0fb60: 050c                      SEXT   A12,0
0fb70: 14ac                      SUBK   5h,A12
0fb80: c702                      JRGT   FBB0h
0fb90: 1828                      MOVK   1h,A8
0fba0: c020                      JR     FDB0h
0fbb0: 458c                      SUB    A12,A12
0fbc0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0fbf0: 1966                      MOVK   Bh,A6
0fc00: 05e6 dd30 0004            MOVB   A6,@4DD30h
0fc30: 4d88                      MOVE   A12,A8
0fc40: c016                      JR     FDB0h
0fc50: 0570                      SETF   10h,1,0
0fc60: 05ac 82e0 0005            MOVE   @582E0h,A12,0
0fc90: 102c                      INC    A12
0fca0: 058c 82e0 0005            MOVE   A12,@582E0h,0
0fcd0: 050c                      SEXT   A12,0
0fce0: 14ac                      SUBK   5h,A12
0fcf0: c702                      JRGT   FD20h
0fd00: 1828                      MOVK   1h,A8
0fd10: c009                      JR     FDB0h
0fd20: 458c                      SUB    A12,A12
0fd30: 058c 82e0 0005            MOVE   A12,@582E0h,0
0fd60: 1986                      MOVK   Ch,A6
0fd70: 05e6 dd30 0004            MOVB   A6,@4DD30h
0fda0: 4d88                      MOVE   A12,A8
0fdb0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0fdd0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0fdf0: 0962                      RETS   2h

_check_stage_psu_tiga_request:
0fe00: a3cf                      MOVE   A14,-*SP,1
0fe10: 09e8 c758 0004            MOVI   4C758h,A8
0fe40: 930e                      MOVE   A8,*A14+,1
0fe50: 09e8 8a40 0005            MOVI   58A40h,A8
0fe80: 930e                      MOVE   A8,*A14+,1
0fe90: 0d5f bc70 0004            CALLA  4BC70h
0fec0: 0d5f 1ad0 0001            CALLA  11AD0h
0fef0: 3928                      DSJS   A8,FF90h
0ff00: a3cf                      MOVE   A14,-*SP,1
0ff10: 09e8 ce60 0005            MOVI   5CE60h,A8
0ff40: 930e                      MOVE   A8,*A14+,1
0ff50: 0d5f ffb0 0000            CALLA  FFB0h
0ff80: 0960                      RETS   
0ff90: 4508                      SUB    A8,A8
0ffa0: 0960                      RETS   

_decode_psu_data:
0ffb0: 098f 000c                 MMTM   SP,A12,A13
0ffd0: 4dcd                      MOVE   A14,A13
0ffe0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
10000: 07e8 d300 0004            MOVE   @4D300h,A8
10030: 0d88 0023                 DSJ    A8,10280h
10050: a3cf                      MOVE   A14,-*SP,1
10060: 1808                      MOVK   20h,A8
10070: 930e                      MOVE   A8,*A14+,1
10080: 938e                      MOVE   A12,*A14+,1
10090: 0d5f bb10 0004            CALLA  4BB10h
100c0: 4d0c                      MOVE   A8,A12
100d0: ca00 0122                 JREQ   11310h
100f0: 110c                      ADDK   8h,A12
10100: 8f88                      MOVB   *A12,A8
10110: 0be8 ffd4                 SUBI   2Bh,A8
10130: ca10                      JREQ   10240h
10140: 1448                      SUBK   2h,A8
10150: ca09                      JREQ   101F0h
10160: 0be8 ffdd                 SUBI   22h,A8
10180: cb00 0111                 JRNE   112B0h
101a0: 4508                      SUB    A8,A8
101b0: 05e8 dd40 0004            MOVB   A8,@4DD40h
101e0: c009                      JR     10280h
101f0: 1828                      MOVK   1h,A8
10200: 05e8 dd40 0004            MOVB   A8,@4DD40h
10230: c004                      JR     10280h
10240: 1848                      MOVK   2h,A8
10250: 05e8 dd40 0004            MOVB   A8,@4DD40h
10280: 07e8 d308 0004            MOVE   @4D308h,A8
102b0: 0d88 0023                 DSJ    A8,10500h
102d0: a3cf                      MOVE   A14,-*SP,1
102e0: 1808                      MOVK   20h,A8
102f0: 930e                      MOVE   A8,*A14+,1
10300: 938e                      MOVE   A12,*A14+,1
10310: 0d5f bb10 0004            CALLA  4BB10h
10340: 4d0c                      MOVE   A8,A12
10350: ca00 00ee                 JREQ   11250h
10370: 110c                      ADDK   8h,A12
10380: 8f88                      MOVB   *A12,A8
10390: 0be8 ffd4                 SUBI   2Bh,A8
103b0: ca10                      JREQ   104C0h
103c0: 1448                      SUBK   2h,A8
103d0: ca09                      JREQ   10470h
103e0: 0be8 ffdd                 SUBI   22h,A8
10400: cb00 00dd                 JRNE   111F0h
10420: 4508                      SUB    A8,A8
10430: 05e8 dd48 0004            MOVB   A8,@4DD48h
10460: c009                      JR     10500h
10470: 1828                      MOVK   1h,A8
10480: 05e8 dd48 0004            MOVB   A8,@4DD48h
104b0: c004                      JR     10500h
104c0: 1848                      MOVK   2h,A8
104d0: 05e8 dd48 0004            MOVB   A8,@4DD48h
10500: 07e8 d310 0004            MOVE   @4D310h,A8
10530: 0d88 0023                 DSJ    A8,10780h
10550: a3cf                      MOVE   A14,-*SP,1
10560: 1808                      MOVK   20h,A8
10570: 930e                      MOVE   A8,*A14+,1
10580: 938e                      MOVE   A12,*A14+,1
10590: 0d5f bb10 0004            CALLA  4BB10h
105c0: 4d0c                      MOVE   A8,A12
105d0: ca00 00ba                 JREQ   11190h
105f0: 110c                      ADDK   8h,A12
10600: 8f88                      MOVB   *A12,A8
10610: 0be8 ffd4                 SUBI   2Bh,A8
10630: ca10                      JREQ   10740h
10640: 1448                      SUBK   2h,A8
10650: ca09                      JREQ   106F0h
10660: 0be8 ffdd                 SUBI   22h,A8
10680: cb00 00a9                 JRNE   11130h
106a0: 4508                      SUB    A8,A8
106b0: 05e8 dd50 0004            MOVB   A8,@4DD50h
106e0: c009                      JR     10780h
106f0: 1828                      MOVK   1h,A8
10700: 05e8 dd50 0004            MOVB   A8,@4DD50h
10730: c004                      JR     10780h
10740: 1848                      MOVK   2h,A8
10750: 05e8 dd50 0004            MOVB   A8,@4DD50h
10780: 07e8 d318 0004            MOVE   @4D318h,A8
107b0: 0d88 0022                 DSJ    A8,109F0h
107d0: a3cf                      MOVE   A14,-*SP,1
107e0: 1808                      MOVK   20h,A8
107f0: 930e                      MOVE   A8,*A14+,1
10800: 938e                      MOVE   A12,*A14+,1
10810: 0d5f bb10 0004            CALLA  4BB10h
10840: 4d0c                      MOVE   A8,A12
10850: ca00 0086                 JREQ   110D0h
10870: 110c                      ADDK   8h,A12
10880: 8f88                      MOVB   *A12,A8
10890: 0be8 ffd4                 SUBI   2Bh,A8
108b0: ca0f                      JREQ   109B0h
108c0: 1448                      SUBK   2h,A8
108d0: ca08                      JREQ   10960h
108e0: 0be8 ffdd                 SUBI   22h,A8
10900: cb76                      JRNE   11070h
10910: 4508                      SUB    A8,A8
10920: 05e8 dd58 0004            MOVB   A8,@4DD58h
10950: c009                      JR     109F0h
10960: 1828                      MOVK   1h,A8
10970: 05e8 dd58 0004            MOVB   A8,@4DD58h
109a0: c004                      JR     109F0h
109b0: 1848                      MOVK   2h,A8
109c0: 05e8 dd58 0004            MOVB   A8,@4DD58h
109f0: 07e8 d320 0004            MOVE   @4D320h,A8
10a20: 0d88 0021                 DSJ    A8,10C50h
10a40: a3cf                      MOVE   A14,-*SP,1
10a50: 1808                      MOVK   20h,A8
10a60: 930e                      MOVE   A8,*A14+,1
10a70: 938e                      MOVE   A12,*A14+,1
10a80: 0d5f bb10 0004            CALLA  4BB10h
10ab0: 4d0c                      MOVE   A8,A12
10ac0: ca54                      JREQ   11010h
10ad0: 110c                      ADDK   8h,A12
10ae0: 8f88                      MOVB   *A12,A8
10af0: 0be8 ffd4                 SUBI   2Bh,A8
10b10: ca0f                      JREQ   10C10h
10b20: 1448                      SUBK   2h,A8
10b30: ca08                      JREQ   10BC0h
10b40: 0be8 ffdd                 SUBI   22h,A8
10b60: cb44                      JRNE   10FB0h
10b70: 4508                      SUB    A8,A8
10b80: 05e8 dd60 0004            MOVB   A8,@4DD60h
10bb0: c009                      JR     10C50h
10bc0: 1828                      MOVK   1h,A8
10bd0: 05e8 dd60 0004            MOVB   A8,@4DD60h
10c00: c004                      JR     10C50h
10c10: 1848                      MOVK   2h,A8
10c20: 05e8 dd60 0004            MOVB   A8,@4DD60h
10c50: 07e8 d328 0004            MOVE   @4D328h,A8
10c80: 3b08                      DSJS   A8,10E10h
10c90: a3cf                      MOVE   A14,-*SP,1
10ca0: 1808                      MOVK   20h,A8
10cb0: 930e                      MOVE   A8,*A14+,1
10cc0: 938e                      MOVE   A12,*A14+,1
10cd0: 0d5f bb10 0004            CALLA  4BB10h
10d00: 4d0c                      MOVE   A8,A12
10d10: ca23                      JREQ   10F50h
10d20: 110c                      ADDK   8h,A12
10d30: 8f88                      MOVB   *A12,A8
10d40: 0be8 ffd4                 SUBI   2Bh,A8
10d60: ca06                      JREQ   10DD0h
10d70: 1448                      SUBK   2h,A8
10d80: ca16                      JREQ   10EF0h
10d90: 0be8 ffdd                 SUBI   22h,A8
10db0: cb07                      JRNE   10E30h
10dc0: c00c                      JR     10E90h
10dd0: 184c                      MOVK   2h,A12
10de0: 05ec dd68 0004            MOVB   A12,@4DD68h
10e10: 1828                      MOVK   1h,A8
10e20: c053                      JR     11360h
10e30: 198c                      MOVK   Ch,A12
10e40: 05ec dd30 0004            MOVB   A12,@4DD30h
10e70: 4508                      SUB    A8,A8
10e80: c04d                      JR     11360h
10e90: 458c                      SUB    A12,A12
10ea0: 05ec dd68 0004            MOVB   A12,@4DD68h
10ed0: 1828                      MOVK   1h,A8
10ee0: c047                      JR     11360h
10ef0: 182c                      MOVK   1h,A12
10f00: 05ec dd68 0004            MOVB   A12,@4DD68h
10f30: 4d88                      MOVE   A12,A8
10f40: c041                      JR     11360h
10f50: 196c                      MOVK   Bh,A12
10f60: 05ec dd30 0004            MOVB   A12,@4DD30h
10f90: 4508                      SUB    A8,A8
10fa0: c03b                      JR     11360h
10fb0: 198c                      MOVK   Ch,A12
10fc0: 05ec dd30 0004            MOVB   A12,@4DD30h
10ff0: 4508                      SUB    A8,A8
11000: c035                      JR     11360h
11010: 196c                      MOVK   Bh,A12
11020: 05ec dd30 0004            MOVB   A12,@4DD30h
11050: 4508                      SUB    A8,A8
11060: c02f                      JR     11360h
11070: 198c                      MOVK   Ch,A12
11080: 05ec dd30 0004            MOVB   A12,@4DD30h
110b0: 4508                      SUB    A8,A8
110c0: c029                      JR     11360h
110d0: 196c                      MOVK   Bh,A12
110e0: 05ec dd30 0004            MOVB   A12,@4DD30h
11110: 4508                      SUB    A8,A8
11120: c023                      JR     11360h
11130: 198c                      MOVK   Ch,A12
11140: 05ec dd30 0004            MOVB   A12,@4DD30h
11170: 4508                      SUB    A8,A8
11180: c01d                      JR     11360h
11190: 196c                      MOVK   Bh,A12
111a0: 05ec dd30 0004            MOVB   A12,@4DD30h
111d0: 4508                      SUB    A8,A8
111e0: c017                      JR     11360h
111f0: 198c                      MOVK   Ch,A12
11200: 05ec dd30 0004            MOVB   A12,@4DD30h
11230: 4508                      SUB    A8,A8
11240: c011                      JR     11360h
11250: 196c                      MOVK   Bh,A12
11260: 05ec dd30 0004            MOVB   A12,@4DD30h
11290: 4508                      SUB    A8,A8
112a0: c00b                      JR     11360h
112b0: 198c                      MOVK   Ch,A12
112c0: 05ec dd30 0004            MOVB   A12,@4DD30h
112f0: 4508                      SUB    A8,A8
11300: c005                      JR     11360h
11310: 196c                      MOVK   Bh,A12
11320: 05ec dd30 0004            MOVB   A12,@4DD30h
11350: 4508                      SUB    A8,A8
11360: b7ee 0060                 MOVE   *SP(60h),A14,1
11380: 09af 3000                 MMFM   SP,A12,A13
113a0: 0962                      RETS   2h

_error_check:
113b0: 07e8 ce68 0005            MOVE   @5CE68h,A8
113e0: 0b48 ffab                 CMPI   54h,A8
11400: cb06                      JRNE   11470h
11410: 07e8 ce70 0005            MOVE   @5CE70h,A8
11440: 0b48 ffb0                 CMPI   4Fh,A8
11460: ca60                      JREQ   11A70h
11470: 07e8 ce68 0005            MOVE   @5CE68h,A8
114a0: 0b48 ffb0                 CMPI   4Fh,A8
114c0: cb06                      JRNE   11530h
114d0: 07e8 ce70 0005            MOVE   @5CE70h,A8
11500: 0b48 ffad                 CMPI   52h,A8
11520: ca4e                      JREQ   11A10h
11530: 07e8 ce68 0005            MOVE   @5CE68h,A8
11560: 0b48 ffcf                 CMPI   30h,A8
11580: cb30                      JRNE   11890h
11590: 07e8 ce70 0005            MOVE   @5CE70h,A8
115c0: 0b48 ffce                 CMPI   31h,A8
115e0: ca3c                      JREQ   119B0h
115f0: 07e8 ce68 0005            MOVE   @5CE68h,A8
11620: 0b48 ffcf                 CMPI   30h,A8
11640: cb24                      JRNE   11890h
11650: 07e8 ce70 0005            MOVE   @5CE70h,A8
11680: 0b48 ffcd                 CMPI   32h,A8
116a0: ca2a                      JREQ   11950h
116b0: 07e8 ce68 0005            MOVE   @5CE68h,A8
116e0: 0b48 ffcf                 CMPI   30h,A8
11700: cb18                      JRNE   11890h
11710: 07e8 ce70 0005            MOVE   @5CE70h,A8
11740: 0b48 ffcb                 CMPI   34h,A8
11760: ca18                      JREQ   118F0h
11770: 07e8 ce68 0005            MOVE   @5CE68h,A8
117a0: 0b48 ffcf                 CMPI   30h,A8
117c0: cb0c                      JRNE   11890h
117d0: 07e8 ce70 0005            MOVE   @5CE70h,A8
11800: 0b48 ffc7                 CMPI   38h,A8
11820: cb06                      JRNE   11890h
11830: 18c8                      MOVK   6h,A8
11840: 05e8 dd30 0004            MOVB   A8,@4DD30h
11870: 4508                      SUB    A8,A8
11880: 0960                      RETS   
11890: 18e8                      MOVK   7h,A8
118a0: 05e8 dd30 0004            MOVB   A8,@4DD30h
118d0: 4508                      SUB    A8,A8
118e0: 0960                      RETS   
118f0: 18a8                      MOVK   5h,A8
11900: 05e8 dd30 0004            MOVB   A8,@4DD30h
11930: 4508                      SUB    A8,A8
11940: 0960                      RETS   
11950: 1888                      MOVK   4h,A8
11960: 05e8 dd30 0004            MOVB   A8,@4DD30h
11990: 4508                      SUB    A8,A8
119a0: 0960                      RETS   
119b0: 1868                      MOVK   3h,A8
119c0: 05e8 dd30 0004            MOVB   A8,@4DD30h
119f0: 4508                      SUB    A8,A8
11a00: 0960                      RETS   
11a10: 1848                      MOVK   2h,A8
11a20: 05e8 dd30 0004            MOVB   A8,@4DD30h
11a50: 4508                      SUB    A8,A8
11a60: 0960                      RETS   
11a70: 1828                      MOVK   1h,A8
11a80: 05e8 dd30 0004            MOVB   A8,@4DD30h
11ab0: 4508                      SUB    A8,A8
11ac0: 0960                      RETS   

_send_stage_command:
11ad0: a38f                      MOVE   A12,-*SP,1
11ae0: 18ac                      MOVK   5h,A12
11af0: 1948                      MOVK   Ah,A8
11b00: 0788 8a20 0005            MOVE   A8,@58A20h,1
11b30: a3cf                      MOVE   A14,-*SP,1
11b40: 09e8 c778 0004            MOVI   4C778h,A8
11b70: 930e                      MOVE   A8,*A14+,1
11b80: 09e8 8a40 0005            MOVI   58A40h,A8
11bb0: 930e                      MOVE   A8,*A14+,1
11bc0: 0d5f b9c0 0004            CALLA  4B9C0h
11bf0: a3cf                      MOVE   A14,-*SP,1
11c00: 09e8 8a40 0005            MOVI   58A40h,A8
11c30: 930e                      MOVE   A8,*A14+,1
11c40: 0d5f bd90 0004            CALLA  4BD90h
11c70: 1088                      ADDK   4h,A8
11c80: 0788 8a00 0005            MOVE   A8,@58A00h,1
11cb0: 4d88                      MOVE   A12,A8
11cc0: 142c                      DEC    A12
11cd0: 270c                      SLL    18h,A12
11ce0: 290c                      SRA    18h,A12
11cf0: a3cf                      MOVE   A14,-*SP,1
11d00: 09e8 8a00 0005            MOVI   58A00h,A8
11d30: 930e                      MOVE   A8,*A14+,1
11d40: 1848                      MOVK   2h,A8
11d50: 930e                      MOVE   A8,*A14+,1
11d60: 0d5f 0000 0000            CALLA  0h
11d90: 4f0e                      MOVE   A8,B14
11da0: cb37                      JRNE   12120h
11db0: a3cf                      MOVE   A14,-*SP,1
11dc0: 4508                      SUB    A8,A8
11dd0: 930e                      MOVE   A8,*A14+,1
11de0: 09e8 ce20 0005            MOVI   5CE20h,A8
11e10: 930e                      MOVE   A8,*A14+,1
11e20: 1948                      MOVK   Ah,A8
11e30: 930e                      MOVE   A8,*A14+,1
11e40: 0d5f 0000 0000            CALLA  0h
11e70: 4f0e                      MOVE   A8,B14
11e80: cb24                      JRNE   120D0h
11e90: 07e8 ce68 0005            MOVE   @5CE68h,A8
11ec0: 0b48 ffcf                 CMPI   30h,A8
11ee0: cb06                      JRNE   11F50h
11ef0: 07e8 ce70 0005            MOVE   @5CE70h,A8
11f20: 0b48 ffcf                 CMPI   30h,A8
11f40: ca31                      JREQ   12260h
11f50: a3cf                      MOVE   A14,-*SP,1
11f60: 1868                      MOVK   3h,A8
11f70: 930e                      MOVE   A8,*A14+,1
11f80: 09e8 c790 0004            MOVI   4C790h,A8
11fb0: 930e                      MOVE   A8,*A14+,1
11fc0: 09e8 8a40 0005            MOVI   58A40h,A8
11ff0: 930e                      MOVE   A8,*A14+,1
12000: 0d5f bea0 0004            CALLA  4BEA0h
12030: 4d08                      MOVE   A8,A8
12040: ca1a                      JREQ   121F0h
12050: 0d5f 13b0 0001            CALLA  113B0h
12080: 07e8 dd30 0004            MOVE   @4DD30h,A8
120b0: 3948                      DSJS   A8,12160h
120c0: c00f                      JR     121C0h
120d0: 1928                      MOVK   9h,A8
120e0: 05e8 dd30 0004            MOVB   A8,@4DD30h
12110: c004                      JR     12160h
12120: 1908                      MOVK   8h,A8
12130: 05e8 dd30 0004            MOVB   A8,@4DD30h
12160: 4d88                      MOVE   A12,A8
12170: 142c                      DEC    A12
12180: 270c                      SLL    18h,A12
12190: 290c                      SRA    18h,A12
121a0: 4d08                      MOVE   A8,A8
121b0: cbb3                      JRNE   11CF0h
121c0: 4508                      SUB    A8,A8
121d0: 97ec                      MOVE   *SP+,A12,1
121e0: 0960                      RETS   
121f0: 458c                      SUB    A12,A12
12200: 05ec dd30 0004            MOVB   A12,@4DD30h
12230: 4d88                      MOVE   A12,A8
12240: 97ec                      MOVE   *SP+,A12,1
12250: 0960                      RETS   
12260: 458c                      SUB    A12,A12
12270: 05ec dd30 0004            MOVB   A12,@4DD30h
122a0: 1828                      MOVK   1h,A8
122b0: 97ec                      MOVE   *SP+,A12,1
122c0: 0960                      RETS   

_reduce_power_mode:
122d0: 07e8 db30 0004            MOVE   @4DB30h,A8
12300: 1428                      DEC    A8
12310: ca54                      JREQ   12860h
12320: 07e8 ddd0 0004            MOVE   @4DDD0h,A8
12350: ca50                      JREQ   12860h
12360: 07e8 dd70 0004            MOVE   @4DD70h,A8
12390: 1428                      DEC    A8
123a0: ca4b                      JREQ   12860h
123b0: 1828                      MOVK   1h,A8
123c0: 05e8 dd70 0004            MOVB   A8,@4DD70h
123f0: 07e8 d300 0004            MOVE   @4D300h,A8
12420: 3908                      DSJS   A8,124B0h
12430: a3cf                      MOVE   A14,-*SP,1
12440: 4508                      SUB    A8,A8
12450: 930e                      MOVE   A8,*A14+,1
12460: 0d5f 2870 0001            CALLA  12870h
12490: 4d08                      MOVE   A8,A8
124a0: ca3b                      JREQ   12860h
124b0: 07e8 d308 0004            MOVE   @4D308h,A8
124e0: 3908                      DSJS   A8,12570h
124f0: a3cf                      MOVE   A14,-*SP,1
12500: 1828                      MOVK   1h,A8
12510: 930e                      MOVE   A8,*A14+,1
12520: 0d5f 2870 0001            CALLA  12870h
12550: 4d08                      MOVE   A8,A8
12560: ca2f                      JREQ   12860h
12570: 07e8 d310 0004            MOVE   @4D310h,A8
125a0: 3908                      DSJS   A8,12630h
125b0: a3cf                      MOVE   A14,-*SP,1
125c0: 1848                      MOVK   2h,A8
125d0: 930e                      MOVE   A8,*A14+,1
125e0: 0d5f 2870 0001            CALLA  12870h
12610: 4d08                      MOVE   A8,A8
12620: ca23                      JREQ   12860h
12630: 07e8 d318 0004            MOVE   @4D318h,A8
12660: 3908                      DSJS   A8,126F0h
12670: a3cf                      MOVE   A14,-*SP,1
12680: 1868                      MOVK   3h,A8
12690: 930e                      MOVE   A8,*A14+,1
126a0: 0d5f 2870 0001            CALLA  12870h
126d0: 4d08                      MOVE   A8,A8
126e0: ca17                      JREQ   12860h
126f0: 07e8 d320 0004            MOVE   @4D320h,A8
12720: 3908                      DSJS   A8,127B0h
12730: a3cf                      MOVE   A14,-*SP,1
12740: 1888                      MOVK   4h,A8
12750: 930e                      MOVE   A8,*A14+,1
12760: 0d5f 2870 0001            CALLA  12870h
12790: 4d08                      MOVE   A8,A8
127a0: ca0b                      JREQ   12860h
127b0: 07e8 d328 0004            MOVE   @4D328h,A8
127e0: 38e8                      DSJS   A8,12860h
127f0: a3cf                      MOVE   A14,-*SP,1
12800: 18a8                      MOVK   5h,A8
12810: 930e                      MOVE   A8,*A14+,1
12820: 0d5f 2870 0001            CALLA  12870h
12850: 4d08                      MOVE   A8,A8
12860: 0960                      RETS   

_reduce_axis_power:
12870: 098f 000c                 MMTM   SP,A12,A13
12890: 4dcd                      MOVE   A14,A13
128a0: afac ffe0                 MOVB   *A13(FFE0h),A12
128c0: a3cf                      MOVE   A14,-*SP,1
128d0: 09c8 00c1                 MOVI   C1h,A8
128f0: 930e                      MOVE   A8,*A14+,1
12900: 09e8 8080 0000            MOVI   8080h,A8
12930: 930e                      MOVE   A8,*A14+,1
12940: 938e                      MOVE   A12,*A14+,1
12950: 0d5f 3290 0001            CALLA  13290h
12980: 0d88 0020                 DSJ    A8,12BA0h
129a0: a3cf                      MOVE   A14,-*SP,1
129b0: 09c8 0080                 MOVI   80h,A8
129d0: 930e                      MOVE   A8,*A14+,1
129e0: 09e8 8081 0000            MOVI   8081h,A8
12a10: 930e                      MOVE   A8,*A14+,1
12a20: 938e                      MOVE   A12,*A14+,1
12a30: 0d5f 3290 0001            CALLA  13290h
12a60: 3a68                      DSJS   A8,12BA0h
12a70: a3cf                      MOVE   A14,-*SP,1
12a80: 09c8 0080                 MOVI   80h,A8
12aa0: 930e                      MOVE   A8,*A14+,1
12ab0: 09e8 8082 0000            MOVI   8082h,A8
12ae0: 930e                      MOVE   A8,*A14+,1
12af0: 938e                      MOVE   A12,*A14+,1
12b00: 0d5f 3290 0001            CALLA  13290h
12b30: 1428                      DEC    A8
12b40: 1828                      MOVK   1h,A8
12b50: ca01                      JREQ   12B70h
12b60: 4508                      SUB    A8,A8
12b70: 0568                      SETF   8h,1,0
12b80: 0508                      SEXT   A8,0
12b90: c001                      JR     12BB0h
12ba0: 4508                      SUB    A8,A8
12bb0: b7ee 0060                 MOVE   *SP(60h),A14,1
12bd0: 09af 3000                 MMFM   SP,A12,A13
12bf0: 0962                      RETS   2h

_read_axis_register:
12c00: 098f 000c                 MMTM   SP,A12,A13
12c20: 4dcd                      MOVE   A14,A13
12c30: 0b0e 0060                 ADDI   60h,A14
12c50: a3cf                      MOVE   A14,-*SP,1
12c60: 09e8 c720 0004            MOVI   4C720h,A8
12c90: 930e                      MOVE   A8,*A14+,1
12ca0: 09e8 8a40 0005            MOVI   58A40h,A8
12cd0: 930e                      MOVE   A8,*A14+,1
12ce0: 0d5f bc70 0004            CALLA  4BC70h
12d10: a3cf                      MOVE   A14,-*SP,1
12d20: 1948                      MOVK   Ah,A8
12d30: 930e                      MOVE   A8,*A14+,1
12d40: 93ae                      MOVE   A13,*A14+,1
12d50: afa8 ffe0                 MOVB   *A13(FFE0h),A8
12d70: 930e                      MOVE   A8,*A14+,1
12d80: 0d5f b220 0004            CALLA  4B220h
12db0: a3cf                      MOVE   A14,-*SP,1
12dc0: 93ae                      MOVE   A13,*A14+,1
12dd0: 09e8 8a40 0005            MOVI   58A40h,A8
12e00: 930e                      MOVE   A8,*A14+,1
12e10: 0d5f b9c0 0004            CALLA  4B9C0h
12e40: a3cf                      MOVE   A14,-*SP,1
12e50: 09e8 c748 0004            MOVI   4C748h,A8
12e80: 930e                      MOVE   A8,*A14+,1
12e90: 09e8 8a40 0005            MOVI   58A40h,A8
12ec0: 930e                      MOVE   A8,*A14+,1
12ed0: 0d5f b9c0 0004            CALLA  4B9C0h
12f00: a3cf                      MOVE   A14,-*SP,1
12f10: 93ae                      MOVE   A13,*A14+,1
12f20: 0550                      SETF   10h,0,0
12f30: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
12f50: 930e                      MOVE   A8,*A14+,1
12f60: 0d5f a8a0 0001            CALLA  1A8A0h
12f90: a3cf                      MOVE   A14,-*SP,1
12fa0: 93ae                      MOVE   A13,*A14+,1
12fb0: 09e8 8a40 0005            MOVI   58A40h,A8
12fe0: 930e                      MOVE   A8,*A14+,1
12ff0: 0d5f b9c0 0004            CALLA  4B9C0h
13020: 0d5f 1ad0 0001            CALLA  11AD0h
13050: 3ba8                      DSJS   A8,13230h
13060: a3cf                      MOVE   A14,-*SP,1
13070: 1808                      MOVK   20h,A8
13080: 930e                      MOVE   A8,*A14+,1
13090: 09e8 ce60 0005            MOVI   5CE60h,A8
130c0: 930e                      MOVE   A8,*A14+,1
130d0: 0d5f bb10 0004            CALLA  4BB10h
13100: 4d0c                      MOVE   A8,A12
13110: cb06                      JRNE   13180h
13120: 196c                      MOVK   Bh,A12
13130: 05ec dd30 0004            MOVB   A12,@4DD30h
13160: 4508                      SUB    A8,A8
13170: c00c                      JR     13240h
13180: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
131a0: a3cf                      MOVE   A14,-*SP,1
131b0: 938e                      MOVE   A12,*A14+,1
131c0: 4d0c                      MOVE   A8,A12
131d0: 0d5f a540 0001            CALLA  1A540h
13200: 8d0c                      MOVB   A8,*A12
13210: 1828                      MOVK   1h,A8
13220: c001                      JR     13240h
13230: 4508                      SUB    A8,A8
13240: b7ee 0060                 MOVE   *SP(60h),A14,1
13260: 09af 3000                 MMFM   SP,A12,A13
13280: 0962                      RETS   2h

_write_axis_register:
13290: a3af                      MOVE   A13,-*SP,1
132a0: 4dcd                      MOVE   A14,A13
132b0: 0b0e 0060                 ADDI   60h,A14
132d0: a3cf                      MOVE   A14,-*SP,1
132e0: 09e8 c7b0 0004            MOVI   4C7B0h,A8
13310: 930e                      MOVE   A8,*A14+,1
13320: 09e8 8a40 0005            MOVI   58A40h,A8
13350: 930e                      MOVE   A8,*A14+,1
13360: 0d5f bc70 0004            CALLA  4BC70h
13390: a3cf                      MOVE   A14,-*SP,1
133a0: 1948                      MOVK   Ah,A8
133b0: 930e                      MOVE   A8,*A14+,1
133c0: 93ae                      MOVE   A13,*A14+,1
133d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
133f0: 930e                      MOVE   A8,*A14+,1
13400: 0d5f b220 0004            CALLA  4B220h
13430: a3cf                      MOVE   A14,-*SP,1
13440: 93ae                      MOVE   A13,*A14+,1
13450: 09e8 8a40 0005            MOVI   58A40h,A8
13480: 930e                      MOVE   A8,*A14+,1
13490: 0d5f b9c0 0004            CALLA  4B9C0h
134c0: a3cf                      MOVE   A14,-*SP,1
134d0: 09e8 c748 0004            MOVI   4C748h,A8
13500: 930e                      MOVE   A8,*A14+,1
13510: 09e8 8a40 0005            MOVI   58A40h,A8
13540: 930e                      MOVE   A8,*A14+,1
13550: 0d5f b9c0 0004            CALLA  4B9C0h
13580: a3cf                      MOVE   A14,-*SP,1
13590: 93ae                      MOVE   A13,*A14+,1
135a0: 0550                      SETF   10h,0,0
135b0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
135d0: 930e                      MOVE   A8,*A14+,1
135e0: 0d5f a8a0 0001            CALLA  1A8A0h
13610: a3cf                      MOVE   A14,-*SP,1
13620: 93ae                      MOVE   A13,*A14+,1
13630: 09e8 8a40 0005            MOVI   58A40h,A8
13660: 930e                      MOVE   A8,*A14+,1
13670: 0d5f b9c0 0004            CALLA  4B9C0h
136a0: a3cf                      MOVE   A14,-*SP,1
136b0: 09e8 c748 0004            MOVI   4C748h,A8
136e0: 930e                      MOVE   A8,*A14+,1
136f0: 09e8 8a40 0005            MOVI   58A40h,A8
13720: 930e                      MOVE   A8,*A14+,1
13730: 0d5f b9c0 0004            CALLA  4B9C0h
13760: a3cf                      MOVE   A14,-*SP,1
13770: 93ae                      MOVE   A13,*A14+,1
13780: 0548                      SETF   8h,0,0
13790: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
137b0: 930e                      MOVE   A8,*A14+,1
137c0: 0d5f a8a0 0001            CALLA  1A8A0h
137f0: a3cf                      MOVE   A14,-*SP,1
13800: 93ae                      MOVE   A13,*A14+,1
13810: 09e8 8a40 0005            MOVI   58A40h,A8
13840: 930e                      MOVE   A8,*A14+,1
13850: 0d5f b9c0 0004            CALLA  4B9C0h
13880: 0d5f 1ad0 0001            CALLA  11AD0h
138b0: b7ee 0040                 MOVE   *SP(40h),A14,1
138d0: 97ed                      MOVE   *SP+,A13,1
138e0: 0962                      RETS   2h

_read_hw_fw_ver_numbers:
138f0: 4508                      SUB    A8,A8
13900: 0788 d2c0 0004            MOVE   A8,@4D2C0h,1
13930: 0788 d2e0 0004            MOVE   A8,@4D2E0h,1
13960: a3cf                      MOVE   A14,-*SP,1
13970: 09e8 c790 0004            MOVI   4C790h,A8
139a0: 930e                      MOVE   A8,*A14+,1
139b0: 09e8 8a40 0005            MOVI   58A40h,A8
139e0: 930e                      MOVE   A8,*A14+,1
139f0: 0d5f bc70 0004            CALLA  4BC70h
13a20: 0d5f 1ad0 0001            CALLA  11AD0h
13a50: 3928                      DSJS   A8,13AF0h
13a60: a3cf                      MOVE   A14,-*SP,1
13a70: 09e8 ce60 0005            MOVI   5CE60h,A8
13aa0: 930e                      MOVE   A8,*A14+,1
13ab0: 0d5f 3b10 0001            CALLA  13B10h
13ae0: 0960                      RETS   
13af0: 4508                      SUB    A8,A8
13b00: 0960                      RETS   

_decode_hw_fw_ver_numbers:
13b10: 098f 002c                 MMTM   SP,A10,A12,A13
13b30: 4dcd                      MOVE   A14,A13
13b40: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
13b60: a3cf                      MOVE   A14,-*SP,1
13b70: 09c8 0048                 MOVI   48h,A8
13b90: 930e                      MOVE   A8,*A14+,1
13ba0: 938e                      MOVE   A12,*A14+,1
13bb0: 0d5f bb10 0004            CALLA  4BB10h
13be0: 4d0c                      MOVE   A8,A12
13bf0: ca6b                      JREQ   142B0h
13c00: a3cf                      MOVE   A14,-*SP,1
13c10: 1808                      MOVK   20h,A8
13c20: 930e                      MOVE   A8,*A14+,1
13c30: 938e                      MOVE   A12,*A14+,1
13c40: 0d5f bb10 0004            CALLA  4BB10h
13c70: 4d0c                      MOVE   A8,A12
13c80: ca5c                      JREQ   14250h
13c90: a3cf                      MOVE   A14,-*SP,1
13ca0: 110c                      ADDK   8h,A12
13cb0: 938e                      MOVE   A12,*A14+,1
13cc0: 0d5f ac00 0004            CALLA  4AC00h
13cf0: 0d5f 57c0 0004            CALLA  457C0h
13d20: a7ca                      MOVE   -*A14,A10,1
13d30: a3cf                      MOVE   A14,-*SP,1
13d40: 09c8 0046                 MOVI   46h,A8
13d60: 930e                      MOVE   A8,*A14+,1
13d70: 938e                      MOVE   A12,*A14+,1
13d80: 0d5f bb10 0004            CALLA  4BB10h
13db0: 4d0c                      MOVE   A8,A12
13dc0: ca42                      JREQ   141F0h
13dd0: a3cf                      MOVE   A14,-*SP,1
13de0: 1808                      MOVK   20h,A8
13df0: 930e                      MOVE   A8,*A14+,1
13e00: 938e                      MOVE   A12,*A14+,1
13e10: 0d5f bb10 0004            CALLA  4BB10h
13e40: 4d0c                      MOVE   A8,A12
13e50: ca33                      JREQ   14190h
13e60: 110c                      ADDK   8h,A12
13e70: a3cf                      MOVE   A14,-*SP,1
13e80: 938e                      MOVE   A12,*A14+,1
13e90: 0d5f ac00 0004            CALLA  4AC00h
13ec0: 0d5f 57c0 0004            CALLA  457C0h
13ef0: a7cc                      MOVE   -*A14,A12,1
13f00: 934e                      MOVE   A10,*A14+,1
13f10: 4508                      SUB    A8,A8
13f20: 930e                      MOVE   A8,*A14+,1
13f30: 0d5f a090 0004            CALLA  4A090h
13f60: ca20                      JREQ   14170h
13f70: 938e                      MOVE   A12,*A14+,1
13f80: 4508                      SUB    A8,A8
13f90: 930e                      MOVE   A8,*A14+,1
13fa0: 0d5f a090 0004            CALLA  4A090h
13fd0: ca19                      JREQ   14170h
13fe0: 934e                      MOVE   A10,*A14+,1
13ff0: 0d5f 51e0 0004            CALLA  451E0h
14020: 0788 d2c0 0004            MOVE   A8,@4D2C0h,1
14050: 938e                      MOVE   A12,*A14+,1
14060: 0d5f 51e0 0004            CALLA  451E0h
14090: 0788 d2e0 0004            MOVE   A8,@4D2E0h,1
140c0: 07ac d290 0004            MOVE   @4D290h,A12,1
140f0: 0bac 0800 0000            ORI    800h,A12
14120: 078c d290 0004            MOVE   A12,@4D290h,1
14150: 1828                      MOVK   1h,A8
14160: c019                      JR     14300h
14170: 4508                      SUB    A8,A8
14180: c017                      JR     14300h
14190: 196c                      MOVK   Bh,A12
141a0: 05ec dd30 0004            MOVB   A12,@4DD30h
141d0: 4508                      SUB    A8,A8
141e0: c011                      JR     14300h
141f0: 198c                      MOVK   Ch,A12
14200: 05ec dd30 0004            MOVB   A12,@4DD30h
14230: 4508                      SUB    A8,A8
14240: c00b                      JR     14300h
14250: 196c                      MOVK   Bh,A12
14260: 05ec dd30 0004            MOVB   A12,@4DD30h
14290: 4508                      SUB    A8,A8
142a0: c005                      JR     14300h
142b0: 198c                      MOVK   Ch,A12
142c0: 05ec dd30 0004            MOVB   A12,@4DD30h
142f0: 4508                      SUB    A8,A8
14300: b7ee 0080                 MOVE   *SP(80h),A14,1
14320: 09af 3400                 MMFM   SP,A10,A12,A13
14340: 0962                      RETS   2h

_check_for_abort:
14350: a3cf                      MOVE   A14,-*SP,1
14360: 09e8 90c0 0005            MOVI   590C0h,A8
14390: 930e                      MOVE   A8,*A14+,1
143a0: 1928                      MOVK   9h,A8
143b0: 930e                      MOVE   A8,*A14+,1
143c0: 0d5f 0000 0000            CALLA  0h
143f0: 4f0e                      MOVE   A8,B14
14400: ca0a                      JREQ   144B0h
14410: 15fe                      SUBK   Fh,B14
14420: ca06                      JREQ   14490h
14430: 19a8                      MOVK   Dh,A8
14440: 05e8 dd30 0004            MOVB   A8,@4DD30h
14470: 4508                      SUB    A8,A8
14480: 0960                      RETS   
14490: 1828                      MOVK   1h,A8
144a0: 0960                      RETS   
144b0: a3cf                      MOVE   A14,-*SP,1
144c0: 4508                      SUB    A8,A8
144d0: 930e                      MOVE   A8,*A14+,1
144e0: 09e8 90c0 0005            MOVI   590C0h,A8
14510: 930e                      MOVE   A8,*A14+,1
14520: 1928                      MOVK   9h,A8
14530: 930e                      MOVE   A8,*A14+,1
14540: 0d5f 0000 0000            CALLA  0h
14570: 4f0e                      MOVE   A8,B14
14580: cb08                      JRNE   14610h
14590: a3cf                      MOVE   A14,-*SP,1
145a0: d60e 9100 0005            MOVE   @59100h,*A14+,1
145d0: 0d5f b540 0001            CALLA  1B540h
14600: 0960                      RETS   
14610: 1928                      MOVK   9h,A8
14620: 05e8 dd30 0004            MOVB   A8,@4DD30h
14650: 4508                      SUB    A8,A8
14660: 0960                      RETS   

_send_abort_move_tiga_request:
14670: a3cf                      MOVE   A14,-*SP,1
14680: 09e8 cac0 0004            MOVI   4CAC0h,A8
146b0: 930e                      MOVE   A8,*A14+,1
146c0: 09e8 8a40 0005            MOVI   58A40h,A8
146f0: 930e                      MOVE   A8,*A14+,1
14700: 0d5f bc70 0004            CALLA  4BC70h
14730: 0d5f 1ad0 0001            CALLA  11AD0h
14760: 0960                      RETS   

_check_max_speed:
14770: 098f 022c                 MMTM   SP,A6,A10,A12,A13
14790: 4dcd                      MOVE   A14,A13
147a0: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
147c0: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
147e0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
14800: 07e8 d300 0004            MOVE   @4D300h,A8
14830: 3b88                      DSJS   A8,14A00h
14840: a3cf                      MOVE   A14,-*SP,1
14850: 0570                      SETF   10h,1,0
14860: 8548                      MOVE   *A10,A8,0
14870: 930e                      MOVE   A8,*A14+,1
14880: d60e d400 0004            MOVE   @4D400h,*A14+,1
148b0: 05a8 dac0 0004            MOVE   @4DAC0h,A8,0
148e0: 930e                      MOVE   A8,*A14+,1
148f0: d60e d340 0004            MOVE   @4D340h,*A14+,1
14920: 05a8 da60 0004            MOVE   @4DA60h,A8,0
14950: 930e                      MOVE   A8,*A14+,1
14960: d60e d140 0004            MOVE   @4D140h,*A14+,1
14990: d2ce 0000                 MOVE   *A6(0h),*A14+,1
149b0: 0d5f ac50 0001            CALLA  1AC50h
149e0: 0570                      SETF   10h,1,0
149f0: 810c                      MOVE   A8,*A12,0
14a00: 07e8 d308 0004            MOVE   @4D308h,A8
14a30: 3bc8                      DSJS   A8,14C20h
14a40: a3cf                      MOVE   A14,-*SP,1
14a50: 0570                      SETF   10h,1,0
14a60: b548 0010                 MOVE   *A10(10h),A8,0
14a80: 930e                      MOVE   A8,*A14+,1
14a90: d60e d420 0004            MOVE   @4D420h,*A14+,1
14ac0: 05a8 dad0 0004            MOVE   @4DAD0h,A8,0
14af0: 930e                      MOVE   A8,*A14+,1
14b00: d60e d360 0004            MOVE   @4D360h,*A14+,1
14b30: 05a8 da70 0004            MOVE   @4DA70h,A8,0
14b60: 930e                      MOVE   A8,*A14+,1
14b70: d60e d160 0004            MOVE   @4D160h,*A14+,1
14ba0: d2ce 0020                 MOVE   *A6(20h),*A14+,1
14bc0: 0d5f ac50 0001            CALLA  1AC50h
14bf0: 0570                      SETF   10h,1,0
14c00: b10c 0010                 MOVE   A8,*A12(10h),0
14c20: 07e8 d310 0004            MOVE   @4D310h,A8
14c50: 3bc8                      DSJS   A8,14E40h
14c60: a3cf                      MOVE   A14,-*SP,1
14c70: 0570                      SETF   10h,1,0
14c80: b548 0020                 MOVE   *A10(20h),A8,0
14ca0: 930e                      MOVE   A8,*A14+,1
14cb0: d60e d440 0004            MOVE   @4D440h,*A14+,1
14ce0: 05a8 dae0 0004            MOVE   @4DAE0h,A8,0
14d10: 930e                      MOVE   A8,*A14+,1
14d20: d60e d380 0004            MOVE   @4D380h,*A14+,1
14d50: 05a8 da80 0004            MOVE   @4DA80h,A8,0
14d80: 930e                      MOVE   A8,*A14+,1
14d90: d60e d180 0004            MOVE   @4D180h,*A14+,1
14dc0: d2ce 0040                 MOVE   *A6(40h),*A14+,1
14de0: 0d5f ac50 0001            CALLA  1AC50h
14e10: 0570                      SETF   10h,1,0
14e20: b10c 0020                 MOVE   A8,*A12(20h),0
14e40: 07e8 d318 0004            MOVE   @4D318h,A8
14e70: 3bc8                      DSJS   A8,15060h
14e80: a3cf                      MOVE   A14,-*SP,1
14e90: 0570                      SETF   10h,1,0
14ea0: b548 0030                 MOVE   *A10(30h),A8,0
14ec0: 930e                      MOVE   A8,*A14+,1
14ed0: d60e d460 0004            MOVE   @4D460h,*A14+,1
14f00: 05a8 daf0 0004            MOVE   @4DAF0h,A8,0
14f30: 930e                      MOVE   A8,*A14+,1
14f40: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
14f70: 05a8 da90 0004            MOVE   @4DA90h,A8,0
14fa0: 930e                      MOVE   A8,*A14+,1
14fb0: d60e d1a0 0004            MOVE   @4D1A0h,*A14+,1
14fe0: d2ce 0060                 MOVE   *A6(60h),*A14+,1
15000: 0d5f ac50 0001            CALLA  1AC50h
15030: 0570                      SETF   10h,1,0
15040: b10c 0030                 MOVE   A8,*A12(30h),0
15060: 07e8 d320 0004            MOVE   @4D320h,A8
15090: 3bc8                      DSJS   A8,15280h
150a0: a3cf                      MOVE   A14,-*SP,1
150b0: 0570                      SETF   10h,1,0
150c0: b548 0040                 MOVE   *A10(40h),A8,0
150e0: 930e                      MOVE   A8,*A14+,1
150f0: d60e d480 0004            MOVE   @4D480h,*A14+,1
15120: 05a8 db00 0004            MOVE   @4DB00h,A8,0
15150: 930e                      MOVE   A8,*A14+,1
15160: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
15190: 05a8 daa0 0004            MOVE   @4DAA0h,A8,0
151c0: 930e                      MOVE   A8,*A14+,1
151d0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
15200: d2ce 0080                 MOVE   *A6(80h),*A14+,1
15220: 0d5f ac50 0001            CALLA  1AC50h
15250: 0570                      SETF   10h,1,0
15260: b10c 0040                 MOVE   A8,*A12(40h),0
15280: 07e8 d328 0004            MOVE   @4D328h,A8
152b0: 3bc8                      DSJS   A8,154A0h
152c0: a3cf                      MOVE   A14,-*SP,1
152d0: 0570                      SETF   10h,1,0
152e0: b548 0050                 MOVE   *A10(50h),A8,0
15300: 930e                      MOVE   A8,*A14+,1
15310: d60e d4a0 0004            MOVE   @4D4A0h,*A14+,1
15340: 05a8 db10 0004            MOVE   @4DB10h,A8,0
15370: 930e                      MOVE   A8,*A14+,1
15380: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
153b0: 05a8 dab0 0004            MOVE   @4DAB0h,A8,0
153e0: 930e                      MOVE   A8,*A14+,1
153f0: d60e d1e0 0004            MOVE   @4D1E0h,*A14+,1
15420: d2ce 00a0                 MOVE   *A6(A0h),*A14+,1
15440: 0d5f ac50 0001            CALLA  1AC50h
15470: 0570                      SETF   10h,1,0
15480: b10c 0050                 MOVE   A8,*A12(50h),0
154a0: 07e8 d300 0004            MOVE   @4D300h,A8
154d0: 38a8                      DSJS   A8,15530h
154e0: 0570                      SETF   10h,1,0
154f0: 8588                      MOVE   *A12,A8,0
15500: 8546                      MOVE   *A10,A6,0
15510: 48c8                      CMP    A6,A8
15520: cb3f                      JRNE   15920h
15530: 07e6 d308 0004            MOVE   @4D308h,A6
15560: 38e6                      DSJS   A6,155E0h
15570: 0570                      SETF   10h,1,0
15580: b586 0010                 MOVE   *A12(10h),A6,0
155a0: b548 0010                 MOVE   *A10(10h),A8,0
155c0: 4906                      CMP    A8,A6
155d0: cb34                      JRNE   15920h
155e0: 07e6 d310 0004            MOVE   @4D310h,A6
15610: 38e6                      DSJS   A6,15690h
15620: 0570                      SETF   10h,1,0
15630: b586 0020                 MOVE   *A12(20h),A6,0
15650: b548 0020                 MOVE   *A10(20h),A8,0
15670: 4906                      CMP    A8,A6
15680: cb29                      JRNE   15920h
15690: 07e6 d318 0004            MOVE   @4D318h,A6
156c0: 38e6                      DSJS   A6,15740h
156d0: 0570                      SETF   10h,1,0
156e0: b586 0030                 MOVE   *A12(30h),A6,0
15700: b548 0030                 MOVE   *A10(30h),A8,0
15720: 4906                      CMP    A8,A6
15730: cb1e                      JRNE   15920h
15740: 07e6 d320 0004            MOVE   @4D320h,A6
15770: 3926                      DSJS   A6,15810h
15780: 0570                      SETF   10h,1,0
15790: b586 0040                 MOVE   *A12(40h),A6,0
157b0: b548 0040                 MOVE   *A10(40h),A8,0
157d0: 4906                      CMP    A8,A6
157e0: ca02                      JREQ   15810h
157f0: 4508                      SUB    A8,A8
15800: c012                      JR     15930h
15810: 07e6 d328 0004            MOVE   @4D328h,A6
15840: 3926                      DSJS   A6,158E0h
15850: 0570                      SETF   10h,1,0
15860: b586 0050                 MOVE   *A12(50h),A6,0
15880: b548 0050                 MOVE   *A10(50h),A8,0
158a0: 4906                      CMP    A8,A6
158b0: ca02                      JREQ   158E0h
158c0: 4508                      SUB    A8,A8
158d0: c001                      JR     158F0h
158e0: 1828                      MOVK   1h,A8
158f0: 0568                      SETF   8h,1,0
15900: 0508                      SEXT   A8,0
15910: c001                      JR     15930h
15920: 4508                      SUB    A8,A8
15930: b7ee 00a0                 MOVE   *SP(A0h),A14,1
15950: 09af 3440                 MMFM   SP,A6,A10,A12,A13
15970: 0962                      RETS   2h

_reset_axes:
15980: 098f 000c                 MMTM   SP,A12,A13
159a0: 4dcd                      MOVE   A14,A13
159b0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
159d0: a3cf                      MOVE   A14,-*SP,1
159e0: 938e                      MOVE   A12,*A14+,1
159f0: 0d5f 6610 0001            CALLA  16610h
15a20: 4d08                      MOVE   A8,A8
15a30: cb24                      JRNE   15C80h
15a40: c000 00b5                 JR     165B0h
15a60: 45de                      SUB    B14,B14
15a70: 07e8 d308 0004            MOVE   @4D308h,A8
15aa0: 3848                      DSJS   A8,15AD0h
15ab0: c041                      JR     15ED0h
15ac0: 45de                      SUB    B14,B14
15ad0: 07e8 d310 0004            MOVE   @4D310h,A8
15b00: 3848                      DSJS   A8,15B30h
15b10: c04e                      JR     16000h
15b20: 45de                      SUB    B14,B14
15b30: 07e8 d318 0004            MOVE   @4D318h,A8
15b60: 3848                      DSJS   A8,15B90h
15b70: c05b                      JR     16130h
15b80: 45de                      SUB    B14,B14
15b90: 07e8 d320 0004            MOVE   @4D320h,A8
15bc0: 3848                      DSJS   A8,15BF0h
15bd0: c068                      JR     16260h
15be0: 45de                      SUB    B14,B14
15bf0: 07e8 d328 0004            MOVE   @4D328h,A8
15c20: 3848                      DSJS   A8,15C50h
15c30: c075                      JR     16390h
15c40: 45de                      SUB    B14,B14
15c50: 143e                      DEC    B14
15c60: ca00 0082                 JREQ   164A0h
15c80: 0d5f 4350 0001            CALLA  14350h
15cb0: 4d08                      MOVE   A8,A8
15cc0: ca00 008d                 JREQ   165B0h
15ce0: 0d5f 6e40 0000            CALLA  6E40h
15d10: 4d08                      MOVE   A8,A8
15d20: ca00 0087                 JREQ   165B0h
15d40: 183e                      MOVK   1h,B14
15d50: 4ddc                      MOVE   B14,B12
15d60: 07e8 d300 0004            MOVE   @4D300h,A8
15d90: 0d88 ffcc                 DSJ    A8,15A70h
15db0: 8f88                      MOVB   *A12,A8
15dc0: 0d88 ffc9                 DSJ    A8,15A70h
15de0: 07e8 d260 0004            MOVE   @4D260h,A8
15e10: 1428                      DEC    A8
15e20: cac3                      JREQ   15A60h
15e30: 07e8 d200 0004            MOVE   @4D200h,A8
15e60: cbc0                      JRNE   15A70h
15e70: 459c                      SUB    B12,B12
15e80: 07e8 d308 0004            MOVE   @4D308h,A8
15eb0: 0d88 ffc0                 DSJ    A8,15AD0h
15ed0: af88 0008                 MOVB   *A12(8h),A8
15ef0: 0d88 ffbc                 DSJ    A8,15AD0h
15f10: 07e8 d268 0004            MOVE   @4D268h,A8
15f40: 1428                      DEC    A8
15f50: cab6                      JREQ   15AC0h
15f60: 07e8 d208 0004            MOVE   @4D208h,A8
15f90: cbb3                      JRNE   15AD0h
15fa0: 459c                      SUB    B12,B12
15fb0: 07e8 d310 0004            MOVE   @4D310h,A8
15fe0: 0d88 ffb3                 DSJ    A8,15B30h
16000: af88 0010                 MOVB   *A12(10h),A8
16020: 0d88 ffaf                 DSJ    A8,15B30h
16040: 07e8 d270 0004            MOVE   @4D270h,A8
16070: 1428                      DEC    A8
16080: caa9                      JREQ   15B20h
16090: 07e8 d210 0004            MOVE   @4D210h,A8
160c0: cba6                      JRNE   15B30h
160d0: 459c                      SUB    B12,B12
160e0: 07e8 d318 0004            MOVE   @4D318h,A8
16110: 0d88 ffa6                 DSJ    A8,15B90h
16130: af88 0018                 MOVB   *A12(18h),A8
16150: 0d88 ffa2                 DSJ    A8,15B90h
16170: 07e8 d278 0004            MOVE   @4D278h,A8
161a0: 1428                      DEC    A8
161b0: ca9c                      JREQ   15B80h
161c0: 07e8 d218 0004            MOVE   @4D218h,A8
161f0: cb99                      JRNE   15B90h
16200: 459c                      SUB    B12,B12
16210: 07e8 d320 0004            MOVE   @4D320h,A8
16240: 0d88 ff99                 DSJ    A8,15BF0h
16260: af88 0020                 MOVB   *A12(20h),A8
16280: 0d88 ff95                 DSJ    A8,15BF0h
162a0: 07e8 d280 0004            MOVE   @4D280h,A8
162d0: 1428                      DEC    A8
162e0: ca8f                      JREQ   15BE0h
162f0: 07e8 d220 0004            MOVE   @4D220h,A8
16320: cb8c                      JRNE   15BF0h
16330: 459c                      SUB    B12,B12
16340: 07e8 d328 0004            MOVE   @4D328h,A8
16370: 0d88 ff8c                 DSJ    A8,15C50h
16390: af88 0028                 MOVB   *A12(28h),A8
163b0: 0d88 ff88                 DSJ    A8,15C50h
163d0: 07e8 d288 0004            MOVE   @4D288h,A8
16400: 1428                      DEC    A8
16410: ca82                      JREQ   15C40h
16420: 07e8 d228 0004            MOVE   @4D228h,A8
16450: cb00 ff7e                 JRNE   15C50h
16470: 459c                      SUB    B12,B12
16480: 0d9e ff7e                 DSJ    B14,15C80h
164a0: 07ec db50 0004            MOVE   @4DB50h,A12
164d0: 142c                      DEC    A12
164e0: ca0c                      JREQ   165B0h
164f0: 07ec d2b0 0004            MOVE   @4D2B0h,A12
16520: 142c                      DEC    A12
16530: ca07                      JREQ   165B0h
16540: 143c                      DEC    B12
16550: 1828                      MOVK   1h,A8
16560: ca01                      JREQ   16580h
16570: 4508                      SUB    A8,A8
16580: 0568                      SETF   8h,1,0
16590: 0508                      SEXT   A8,0
165a0: c001                      JR     165C0h
165b0: 4508                      SUB    A8,A8
165c0: b7ee 0060                 MOVE   *SP(60h),A14,1
165e0: 09af 3000                 MMFM   SP,A12,A13
16600: 0962                      RETS   2h

_send_axes_reset:
16610: 098f 000c                 MMTM   SP,A12,A13
16630: 4dcd                      MOVE   A14,A13
16640: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
16660: a3cf                      MOVE   A14,-*SP,1
16670: 09e8 cae0 0004            MOVI   4CAE0h,A8
166a0: 930e                      MOVE   A8,*A14+,1
166b0: 09e8 8a40 0005            MOVI   58A40h,A8
166e0: 930e                      MOVE   A8,*A14+,1
166f0: 0d5f bc70 0004            CALLA  4BC70h
16720: 07e8 d300 0004            MOVE   @4D300h,A8
16750: 0d88 0021                 DSJ    A8,16980h
16770: 8f88                      MOVB   *A12,A8
16780: 1428                      DEC    A8
16790: ca12                      JREQ   168C0h
167a0: a3cf                      MOVE   A14,-*SP,1
167b0: 09e8 cb00 0004            MOVI   4CB00h,A8
167e0: 930e                      MOVE   A8,*A14+,1
167f0: 09e8 8a40 0005            MOVI   58A40h,A8
16820: 930e                      MOVE   A8,*A14+,1
16830: 0d5f b9c0 0004            CALLA  4B9C0h
16860: 07e8 d308 0004            MOVE   @4D308h,A8
16890: 0d88 0034                 DSJ    A8,16BF0h
168b0: c011                      JR     169D0h
168c0: a3cf                      MOVE   A14,-*SP,1
168d0: 09e8 cb18 0004            MOVI   4CB18h,A8
16900: 930e                      MOVE   A8,*A14+,1
16910: 09e8 8a40 0005            MOVI   58A40h,A8
16940: 930e                      MOVE   A8,*A14+,1
16950: 0d5f b9c0 0004            CALLA  4B9C0h
16980: 07e8 d308 0004            MOVE   @4D308h,A8
169b0: 0d88 0022                 DSJ    A8,16BF0h
169d0: af88 0008                 MOVB   *A12(8h),A8
169f0: 1428                      DEC    A8
16a00: ca12                      JREQ   16B30h
16a10: a3cf                      MOVE   A14,-*SP,1
16a20: 09e8 cb00 0004            MOVI   4CB00h,A8
16a50: 930e                      MOVE   A8,*A14+,1
16a60: 09e8 8a40 0005            MOVI   58A40h,A8
16a90: 930e                      MOVE   A8,*A14+,1
16aa0: 0d5f b9c0 0004            CALLA  4B9C0h
16ad0: 07e8 d310 0004            MOVE   @4D310h,A8
16b00: 0d88 0034                 DSJ    A8,16E60h
16b20: c011                      JR     16C40h
16b30: a3cf                      MOVE   A14,-*SP,1
16b40: 09e8 cb18 0004            MOVI   4CB18h,A8
16b70: 930e                      MOVE   A8,*A14+,1
16b80: 09e8 8a40 0005            MOVI   58A40h,A8
16bb0: 930e                      MOVE   A8,*A14+,1
16bc0: 0d5f b9c0 0004            CALLA  4B9C0h
16bf0: 07e8 d310 0004            MOVE   @4D310h,A8
16c20: 0d88 0022                 DSJ    A8,16E60h
16c40: af88 0010                 MOVB   *A12(10h),A8
16c60: 1428                      DEC    A8
16c70: ca12                      JREQ   16DA0h
16c80: a3cf                      MOVE   A14,-*SP,1
16c90: 09e8 cb00 0004            MOVI   4CB00h,A8
16cc0: 930e                      MOVE   A8,*A14+,1
16cd0: 09e8 8a40 0005            MOVI   58A40h,A8
16d00: 930e                      MOVE   A8,*A14+,1
16d10: 0d5f b9c0 0004            CALLA  4B9C0h
16d40: 07e8 d318 0004            MOVE   @4D318h,A8
16d70: 0d88 0034                 DSJ    A8,170D0h
16d90: c011                      JR     16EB0h
16da0: a3cf                      MOVE   A14,-*SP,1
16db0: 09e8 cb18 0004            MOVI   4CB18h,A8
16de0: 930e                      MOVE   A8,*A14+,1
16df0: 09e8 8a40 0005            MOVI   58A40h,A8
16e20: 930e                      MOVE   A8,*A14+,1
16e30: 0d5f b9c0 0004            CALLA  4B9C0h
16e60: 07e8 d318 0004            MOVE   @4D318h,A8
16e90: 0d88 0022                 DSJ    A8,170D0h
16eb0: af88 0018                 MOVB   *A12(18h),A8
16ed0: 1428                      DEC    A8
16ee0: ca12                      JREQ   17010h
16ef0: a3cf                      MOVE   A14,-*SP,1
16f00: 09e8 cb00 0004            MOVI   4CB00h,A8
16f30: 930e                      MOVE   A8,*A14+,1
16f40: 09e8 8a40 0005            MOVI   58A40h,A8
16f70: 930e                      MOVE   A8,*A14+,1
16f80: 0d5f b9c0 0004            CALLA  4B9C0h
16fb0: 07e8 d320 0004            MOVE   @4D320h,A8
16fe0: 0d88 0034                 DSJ    A8,17340h
17000: c011                      JR     17120h
17010: a3cf                      MOVE   A14,-*SP,1
17020: 09e8 cb18 0004            MOVI   4CB18h,A8
17050: 930e                      MOVE   A8,*A14+,1
17060: 09e8 8a40 0005            MOVI   58A40h,A8
17090: 930e                      MOVE   A8,*A14+,1
170a0: 0d5f b9c0 0004            CALLA  4B9C0h
170d0: 07e8 d320 0004            MOVE   @4D320h,A8
17100: 0d88 0022                 DSJ    A8,17340h
17120: af88 0020                 MOVB   *A12(20h),A8
17140: 1428                      DEC    A8
17150: ca12                      JREQ   17280h
17160: a3cf                      MOVE   A14,-*SP,1
17170: 09e8 cb00 0004            MOVI   4CB00h,A8
171a0: 930e                      MOVE   A8,*A14+,1
171b0: 09e8 8a40 0005            MOVI   58A40h,A8
171e0: 930e                      MOVE   A8,*A14+,1
171f0: 0d5f b9c0 0004            CALLA  4B9C0h
17220: 07e8 d328 0004            MOVE   @4D328h,A8
17250: 0d88 002e                 DSJ    A8,17550h
17270: c010                      JR     17380h
17280: a3cf                      MOVE   A14,-*SP,1
17290: 09e8 cb18 0004            MOVI   4CB18h,A8
172c0: 930e                      MOVE   A8,*A14+,1
172d0: 09e8 8a40 0005            MOVI   58A40h,A8
17300: 930e                      MOVE   A8,*A14+,1
17310: 0d5f b9c0 0004            CALLA  4B9C0h
17340: 07e8 d328 0004            MOVE   @4D328h,A8
17370: 3ba8                      DSJS   A8,17550h
17380: af88 0028                 MOVB   *A12(28h),A8
173a0: 1428                      DEC    A8
173b0: ca0d                      JREQ   17490h
173c0: a3cf                      MOVE   A14,-*SP,1
173d0: 09e8 cb00 0004            MOVI   4CB00h,A8
17400: 930e                      MOVE   A8,*A14+,1
17410: 09e8 8a40 0005            MOVI   58A40h,A8
17440: 930e                      MOVE   A8,*A14+,1
17450: 0d5f b9c0 0004            CALLA  4B9C0h
17480: c00c                      JR     17550h
17490: a3cf                      MOVE   A14,-*SP,1
174a0: 09e8 cb18 0004            MOVI   4CB18h,A8
174d0: 930e                      MOVE   A8,*A14+,1
174e0: 09e8 8a40 0005            MOVI   58A40h,A8
17510: 930e                      MOVE   A8,*A14+,1
17520: 0d5f b9c0 0004            CALLA  4B9C0h
17550: 0d5f 1ad0 0001            CALLA  11AD0h
17580: b7ee 0060                 MOVE   *SP(60h),A14,1
175a0: 09af 3000                 MMFM   SP,A12,A13
175c0: 0962                      RETS   2h

_check_for_new_speed:
175d0: 098f 002c                 MMTM   SP,A10,A12,A13
175f0: 4dcd                      MOVE   A14,A13
17600: 0b0e 0060                 ADDI   60h,A14
17620: 182c                      MOVK   1h,A12
17630: 454a                      SUB    A10,A10
17640: a3cf                      MOVE   A14,-*SP,1
17650: 09c8 0038                 MOVI   38h,A8
17670: 930e                      MOVE   A8,*A14+,1
17680: 09e8 90c0 0005            MOVI   590C0h,A8
176b0: 930e                      MOVE   A8,*A14+,1
176c0: 1928                      MOVK   9h,A8
176d0: 930e                      MOVE   A8,*A14+,1
176e0: 0d5f 0000 0000            CALLA  0h
17710: 4f0e                      MOVE   A8,B14
17720: 1628                      SUBK   11h,A8
17730: ca00 008d                 JREQ   18020h
17750: 07a8 9100 0005            MOVE   @59100h,A8,1
17780: 14e8                      SUBK   7h,A8
17790: ca0a                      JREQ   17840h
177a0: a3cf                      MOVE   A14,-*SP,1
177b0: d60e 9100 0005            MOVE   @59100h,*A14+,1
177e0: 0d5f b540 0001            CALLA  1B540h
17810: 4d08                      MOVE   A8,A8
17820: cb09                      JRNE   178C0h
17830: c07c                      JR     18000h
17840: 09e8 9120 0005            MOVI   59120h,A8
17870: 4daa                      MOVE   A13,A10
17880: 9b0a                      MOVE   *A8+,*A10+,1
17890: 9b0a                      MOVE   *A8+,*A10+,1
178a0: 8b0a                      MOVE   *A8,*A10,1
178b0: 4d8a                      MOVE   A12,A10
178c0: a3cf                      MOVE   A14,-*SP,1
178d0: 09e8 90c0 0005            MOVI   590C0h,A8
17900: 930e                      MOVE   A8,*A14+,1
17910: 1928                      MOVK   9h,A8
17920: 930e                      MOVE   A8,*A14+,1
17930: 0d5f 0000 0000            CALLA  0h
17960: 4f0e                      MOVE   A8,B14
17970: 15e8                      SUBK   Fh,A8
17980: ca1e                      JREQ   17B70h
17990: 4fd8                      MOVE   B14,A8
179a0: cb61                      JRNE   17FC0h
179b0: a3cf                      MOVE   A14,-*SP,1
179c0: 454a                      SUB    A10,A10
179d0: 934e                      MOVE   A10,*A14+,1
179e0: 09e8 90c0 0005            MOVI   590C0h,A8
17a10: 930e                      MOVE   A8,*A14+,1
17a20: 192a                      MOVK   9h,A10
17a30: 934e                      MOVE   A10,*A14+,1
17a40: 0d5f 0000 0000            CALLA  0h
17a70: 4f0e                      MOVE   A8,B14
17a80: cb4e                      JRNE   17F70h
17a90: 07a8 9100 0005            MOVE   @59100h,A8,1
17ac0: 14e8                      SUBK   7h,A8
17ad0: cb41                      JRNE   17EF0h
17ae0: 09e8 9120 0005            MOVI   59120h,A8
17b10: 4daa                      MOVE   A13,A10
17b20: 9b0a                      MOVE   *A8+,*A10+,1
17b30: 9b0a                      MOVE   *A8+,*A10+,1
17b40: 8b0a                      MOVE   *A8,*A10,1
17b50: 182a                      MOVK   1h,A10
17b60: c001                      JR     17B80h
17b70: 458c                      SUB    A12,A12
17b80: 342c                      CMPK   1h,A12
17b90: cad2                      JREQ   178C0h
17ba0: 4d48                      MOVE   A10,A8
17bb0: ca31                      JREQ   17ED0h
17bc0: 0570                      SETF   10h,1,0
17bd0: 85ac                      MOVE   *A13,A12,0
17be0: cb0f                      JRNE   17CE0h
17bf0: b5aa 0010                 MOVE   *A13(10h),A10,0
17c10: cb0c                      JRNE   17CE0h
17c20: b5a8 0020                 MOVE   *A13(20h),A8,0
17c40: cb09                      JRNE   17CE0h
17c50: b5a8 0030                 MOVE   *A13(30h),A8,0
17c70: cb06                      JRNE   17CE0h
17c80: b5a8 0040                 MOVE   *A13(40h),A8,0
17ca0: cb03                      JRNE   17CE0h
17cb0: b5a8 0050                 MOVE   *A13(50h),A8,0
17cd0: ca17                      JREQ   17E50h
17ce0: a3cf                      MOVE   A14,-*SP,1
17cf0: 09ea 9120 0005            MOVI   59120h,A10
17d20: 934e                      MOVE   A10,*A14+,1
17d30: 0d5f df30 0001            CALLA  1DF30h
17d60: 4d08                      MOVE   A8,A8
17d70: cb0b                      JRNE   17E30h
17d80: 07e8 dd30 0004            MOVE   @4DD30h,A8
17db0: 14c8                      SUBK   6h,A8
17dc0: ca02                      JREQ   17DF0h
17dd0: 4508                      SUB    A8,A8
17de0: c027                      JR     18060h
17df0: 4508                      SUB    A8,A8
17e00: 05e8 dd30 0004            MOVB   A8,@4DD30h
17e30: 1828                      MOVK   1h,A8
17e40: c021                      JR     18060h
17e50: 1828                      MOVK   1h,A8
17e60: 05e8 dd10 0004            MOVB   A8,@4DD10h
17e90: 0d5f 4670 0001            CALLA  14670h
17ec0: c019                      JR     18060h
17ed0: 1828                      MOVK   1h,A8
17ee0: c017                      JR     18060h
17ef0: a3cf                      MOVE   A14,-*SP,1
17f00: d60e 9100 0005            MOVE   @59100h,*A14+,1
17f30: 0d5f b540 0001            CALLA  1B540h
17f60: c00f                      JR     18060h
17f70: 05ea dd30 0004            MOVB   A10,@4DD30h
17fa0: 4508                      SUB    A8,A8
17fb0: c00a                      JR     18060h
17fc0: 19ac                      MOVK   Dh,A12
17fd0: 05ec dd30 0004            MOVB   A12,@4DD30h
18000: 4508                      SUB    A8,A8
18010: c004                      JR     18060h
18020: 0d5f 6e40 0000            CALLA  6E40h
18050: 4d88                      MOVE   A12,A8
18060: 0bee ff9f                 SUBI   60h,A14
18080: 09af 3400                 MMFM   SP,A10,A12,A13
180a0: 0960                      RETS   

_calculate_backlash_position:
180b0: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
180d0: 4dcd                      MOVE   A14,A13
180e0: b7a2 ffa0                 MOVE   *A13(FFA0h),A2,1
18100: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
18120: b7a4 ffe0                 MOVE   *A13(FFE0h),A4,1
18140: 07e8 d300 0004            MOVE   @4D300h,A8
18170: 0d88 0058                 DSJ    A8,18710h
18190: 868a                      MOVE   *A4,A10,1
181a0: d28e 0000                 MOVE   *A4(0h),*A14+,1
181c0: d60e d700 0004            MOVE   @4D700h,*A14+,1
181f0: 0d5f 8c60 0004            CALLA  48C60h
18220: a7c6                      MOVE   -*A14,A6,1
18230: 07e8 dd80 0004            MOVE   @4DD80h,A8
18260: ca50                      JREQ   18770h
18270: 1428                      DEC    A8
18280: ca1c                      JREQ   18450h
18290: 1428                      DEC    A8
182a0: ca0a                      JREQ   18350h
182b0: 1428                      DEC    A8
182c0: ca28                      JREQ   18550h
182d0: 834c                      MOVE   A10,*A12,1
182e0: 45de                      SUB    B14,B14
182f0: 07ea d308 0004            MOVE   @4D308h,A10
18320: 0d8a 00a9                 DSJ    A10,18DD0h
18340: c049                      JR     187E0h
18350: d28e 0000                 MOVE   *A4(0h),*A14+,1
18370: d24e 0000                 MOVE   *A2(0h),*A14+,1
18390: 0d5f 9f80 0004            CALLA  49F80h
183c0: ca1b                      JREQ   18580h
183d0: 834c                      MOVE   A10,*A12,1
183e0: 45de                      SUB    B14,B14
183f0: 07ea d308 0004            MOVE   @4D308h,A10
18420: 0d8a 0099                 DSJ    A10,18DD0h
18440: c039                      JR     187E0h
18450: d28e 0000                 MOVE   *A4(0h),*A14+,1
18470: d24e 0000                 MOVE   *A2(0h),*A14+,1
18490: 0d5f a1a0 0004            CALLA  4A1A0h
184c0: ca0e                      JREQ   185B0h
184d0: 834c                      MOVE   A10,*A12,1
184e0: 45de                      SUB    B14,B14
184f0: 07ea d308 0004            MOVE   @4D308h,A10
18520: 0d8a 0089                 DSJ    A10,18DD0h
18540: c029                      JR     187E0h
18550: 82cc                      MOVE   A6,*A12,1
18560: 183e                      MOVK   1h,B14
18570: c005                      JR     185D0h
18580: 82cc                      MOVE   A6,*A12,1
18590: 183e                      MOVK   1h,B14
185a0: c002                      JR     185D0h
185b0: 82cc                      MOVE   A6,*A12,1
185c0: 183e                      MOVK   1h,B14
185d0: d38e 0000                 MOVE   *A12(0h),*A14+,1
185f0: d60e d880 0004            MOVE   @4D880h,*A14+,1
18620: 0d5f 9f80 0004            CALLA  49F80h
18650: ca00 01e7                 JREQ   1A4E0h
18670: d38e 0000                 MOVE   *A12(0h),*A14+,1
18690: d60e d7c0 0004            MOVE   @4D7C0h,*A14+,1
186c0: 0d5f a1a0 0004            CALLA  4A1A0h
186f0: ca00 01dd                 JREQ   1A4E0h
18710: 07ea d308 0004            MOVE   @4D308h,A10
18740: 0d8a 0067                 DSJ    A10,18DD0h
18760: c007                      JR     187E0h
18770: 834c                      MOVE   A10,*A12,1
18780: 45de                      SUB    B14,B14
18790: 07ea d308 0004            MOVE   @4D308h,A10
187c0: 0d8a 005f                 DSJ    A10,18DD0h
187e0: b68a 0020                 MOVE   *A4(20h),A10,1
18800: d28e 0020                 MOVE   *A4(20h),*A14+,1
18820: d60e d720 0004            MOVE   @4D720h,*A14+,1
18850: 0d5f 8c60 0004            CALLA  48C60h
18880: a7c6                      MOVE   -*A14,A6,1
18890: 07e8 dd90 0004            MOVE   @4DD90h,A8
188c0: ca56                      JREQ   18E30h
188d0: 1428                      DEC    A8
188e0: ca1e                      JREQ   18AD0h
188f0: 1428                      DEC    A8
18900: ca0b                      JREQ   189C0h
18910: 1428                      DEC    A8
18920: ca2b                      JREQ   18BE0h
18930: b34c 0020                 MOVE   A10,*A12(20h),1
18950: 45de                      SUB    B14,B14
18960: 07ea d310 0004            MOVE   @4D310h,A10
18990: 0d8a 00af                 DSJ    A10,194A0h
189b0: c04f                      JR     18EB0h
189c0: d28e 0020                 MOVE   *A4(20h),*A14+,1
189e0: d24e 0020                 MOVE   *A2(20h),*A14+,1
18a00: 0d5f 9f80 0004            CALLA  49F80h
18a30: ca1e                      JREQ   18C20h
18a40: b34c 0020                 MOVE   A10,*A12(20h),1
18a60: 45de                      SUB    B14,B14
18a70: 07ea d310 0004            MOVE   @4D310h,A10
18aa0: 0d8a 009e                 DSJ    A10,194A0h
18ac0: c03e                      JR     18EB0h
18ad0: d28e 0020                 MOVE   *A4(20h),*A14+,1
18af0: d24e 0020                 MOVE   *A2(20h),*A14+,1
18b10: 0d5f a1a0 0004            CALLA  4A1A0h
18b40: ca11                      JREQ   18C60h
18b50: b34c 0020                 MOVE   A10,*A12(20h),1
18b70: 45de                      SUB    B14,B14
18b80: 07ea d310 0004            MOVE   @4D310h,A10
18bb0: 0d8a 008d                 DSJ    A10,194A0h
18bd0: c02d                      JR     18EB0h
18be0: b2cc 0020                 MOVE   A6,*A12(20h),1
18c00: 183e                      MOVK   1h,B14
18c10: c007                      JR     18C90h
18c20: b2cc 0020                 MOVE   A6,*A12(20h),1
18c40: 183e                      MOVK   1h,B14
18c50: c003                      JR     18C90h
18c60: b2cc 0020                 MOVE   A6,*A12(20h),1
18c80: 183e                      MOVK   1h,B14
18c90: d38e 0020                 MOVE   *A12(20h),*A14+,1
18cb0: d60e d8a0 0004            MOVE   @4D8A0h,*A14+,1
18ce0: 0d5f 9f80 0004            CALLA  49F80h
18d10: ca00 017b                 JREQ   1A4E0h
18d30: d38e 0020                 MOVE   *A12(20h),*A14+,1
18d50: d60e d7e0 0004            MOVE   @4D7E0h,*A14+,1
18d80: 0d5f a1a0 0004            CALLA  4A1A0h
18db0: ca00 0171                 JREQ   1A4E0h
18dd0: 07ea d310 0004            MOVE   @4D310h,A10
18e00: 0d8a 0068                 DSJ    A10,194A0h
18e20: c008                      JR     18EB0h
18e30: b34c 0020                 MOVE   A10,*A12(20h),1
18e50: 45de                      SUB    B14,B14
18e60: 07ea d310 0004            MOVE   @4D310h,A10
18e90: 0d8a 005f                 DSJ    A10,194A0h
18eb0: b68a 0040                 MOVE   *A4(40h),A10,1
18ed0: d28e 0040                 MOVE   *A4(40h),*A14+,1
18ef0: d60e d740 0004            MOVE   @4D740h,*A14+,1
18f20: 0d5f 8c60 0004            CALLA  48C60h
18f50: a7c6                      MOVE   -*A14,A6,1
18f60: 07e8 dda0 0004            MOVE   @4DDA0h,A8
18f90: ca56                      JREQ   19500h
18fa0: 1428                      DEC    A8
18fb0: ca1e                      JREQ   191A0h
18fc0: 1428                      DEC    A8
18fd0: ca0b                      JREQ   19090h
18fe0: 1428                      DEC    A8
18ff0: ca2b                      JREQ   192B0h
19000: b34c 0040                 MOVE   A10,*A12(40h),1
19020: 45de                      SUB    B14,B14
19030: 07ea d318 0004            MOVE   @4D318h,A10
19060: 0d8a 00af                 DSJ    A10,19B70h
19080: c04f                      JR     19580h
19090: d28e 0040                 MOVE   *A4(40h),*A14+,1
190b0: d24e 0040                 MOVE   *A2(40h),*A14+,1
190d0: 0d5f 9f80 0004            CALLA  49F80h
19100: ca1e                      JREQ   192F0h
19110: b34c 0040                 MOVE   A10,*A12(40h),1
19130: 45de                      SUB    B14,B14
19140: 07ea d318 0004            MOVE   @4D318h,A10
19170: 0d8a 009e                 DSJ    A10,19B70h
19190: c03e                      JR     19580h
191a0: d28e 0040                 MOVE   *A4(40h),*A14+,1
191c0: d24e 0040                 MOVE   *A2(40h),*A14+,1
191e0: 0d5f a1a0 0004            CALLA  4A1A0h
19210: ca11                      JREQ   19330h
19220: b34c 0040                 MOVE   A10,*A12(40h),1
19240: 45de                      SUB    B14,B14
19250: 07ea d318 0004            MOVE   @4D318h,A10
19280: 0d8a 008d                 DSJ    A10,19B70h
192a0: c02d                      JR     19580h
192b0: b2cc 0040                 MOVE   A6,*A12(40h),1
192d0: 183e                      MOVK   1h,B14
192e0: c007                      JR     19360h
192f0: b2cc 0040                 MOVE   A6,*A12(40h),1
19310: 183e                      MOVK   1h,B14
19320: c003                      JR     19360h
19330: b2cc 0040                 MOVE   A6,*A12(40h),1
19350: 183e                      MOVK   1h,B14
19360: d38e 0040                 MOVE   *A12(40h),*A14+,1
19380: d60e d8c0 0004            MOVE   @4D8C0h,*A14+,1
193b0: 0d5f 9f80 0004            CALLA  49F80h
193e0: ca00 010e                 JREQ   1A4E0h
19400: d38e 0040                 MOVE   *A12(40h),*A14+,1
19420: d60e d800 0004            MOVE   @4D800h,*A14+,1
19450: 0d5f a1a0 0004            CALLA  4A1A0h
19480: ca00 0104                 JREQ   1A4E0h
194a0: 07ea d318 0004            MOVE   @4D318h,A10
194d0: 0d8a 0068                 DSJ    A10,19B70h
194f0: c008                      JR     19580h
19500: b34c 0040                 MOVE   A10,*A12(40h),1
19520: 45de                      SUB    B14,B14
19530: 07ea d318 0004            MOVE   @4D318h,A10
19560: 0d8a 005f                 DSJ    A10,19B70h
19580: b68a 0060                 MOVE   *A4(60h),A10,1
195a0: d28e 0060                 MOVE   *A4(60h),*A14+,1
195c0: d60e d760 0004            MOVE   @4D760h,*A14+,1
195f0: 0d5f 8c60 0004            CALLA  48C60h
19620: a7c6                      MOVE   -*A14,A6,1
19630: 07e8 ddb0 0004            MOVE   @4DDB0h,A8
19660: ca56                      JREQ   19BD0h
19670: 1428                      DEC    A8
19680: ca1e                      JREQ   19870h
19690: 1428                      DEC    A8
196a0: ca0b                      JREQ   19760h
196b0: 1428                      DEC    A8
196c0: ca2b                      JREQ   19980h
196d0: b34c 0060                 MOVE   A10,*A12(60h),1
196f0: 45de                      SUB    B14,B14
19700: 07ea d320 0004            MOVE   @4D320h,A10
19730: 0d8a 00ad                 DSJ    A10,1A220h
19750: c04f                      JR     19C50h
19760: d28e 0060                 MOVE   *A4(60h),*A14+,1
19780: d24e 0060                 MOVE   *A2(60h),*A14+,1
197a0: 0d5f 9f80 0004            CALLA  49F80h
197d0: ca1e                      JREQ   199C0h
197e0: b34c 0060                 MOVE   A10,*A12(60h),1
19800: 45de                      SUB    B14,B14
19810: 07ea d320 0004            MOVE   @4D320h,A10
19840: 0d8a 009c                 DSJ    A10,1A220h
19860: c03e                      JR     19C50h
19870: d28e 0060                 MOVE   *A4(60h),*A14+,1
19890: d24e 0060                 MOVE   *A2(60h),*A14+,1
198b0: 0d5f a1a0 0004            CALLA  4A1A0h
198e0: ca11                      JREQ   19A00h
198f0: b34c 0060                 MOVE   A10,*A12(60h),1
19910: 45de                      SUB    B14,B14
19920: 07ea d320 0004            MOVE   @4D320h,A10
19950: 0d8a 008b                 DSJ    A10,1A220h
19970: c02d                      JR     19C50h
19980: b2cc 0060                 MOVE   A6,*A12(60h),1
199a0: 183e                      MOVK   1h,B14
199b0: c007                      JR     19A30h
199c0: b2cc 0060                 MOVE   A6,*A12(60h),1
199e0: 183e                      MOVK   1h,B14
199f0: c003                      JR     19A30h
19a00: b2cc 0060                 MOVE   A6,*A12(60h),1
19a20: 183e                      MOVK   1h,B14
19a30: d38e 0060                 MOVE   *A12(60h),*A14+,1
19a50: d60e d8e0 0004            MOVE   @4D8E0h,*A14+,1
19a80: 0d5f 9f80 0004            CALLA  49F80h
19ab0: ca00 00a1                 JREQ   1A4E0h
19ad0: d38e 0060                 MOVE   *A12(60h),*A14+,1
19af0: d60e d820 0004            MOVE   @4D820h,*A14+,1
19b20: 0d5f a1a0 0004            CALLA  4A1A0h
19b50: ca00 0097                 JREQ   1A4E0h
19b70: 07ea d320 0004            MOVE   @4D320h,A10
19ba0: 0d8a 0066                 DSJ    A10,1A220h
19bc0: c008                      JR     19C50h
19bd0: b34c 0060                 MOVE   A10,*A12(60h),1
19bf0: 45de                      SUB    B14,B14
19c00: 07ea d320 0004            MOVE   @4D320h,A10
19c30: 0d8a 005d                 DSJ    A10,1A220h
19c50: b68a 0080                 MOVE   *A4(80h),A10,1
19c70: d28e 0080                 MOVE   *A4(80h),*A14+,1
19c90: d60e d780 0004            MOVE   @4D780h,*A14+,1
19cc0: 0d5f 8c60 0004            CALLA  48C60h
19cf0: a7c6                      MOVE   -*A14,A6,1
19d00: 07e8 ddc0 0004            MOVE   @4DDC0h,A8
19d30: ca54                      JREQ   1A280h
19d40: 1428                      DEC    A8
19d50: ca1e                      JREQ   19F40h
19d60: 1428                      DEC    A8
19d70: ca0b                      JREQ   19E30h
19d80: 1428                      DEC    A8
19d90: ca2b                      JREQ   1A050h
19da0: b34c 0080                 MOVE   A10,*A12(80h),1
19dc0: 45de                      SUB    B14,B14
19dd0: 07ea d328 0004            MOVE   @4D328h,A10
19e00: 0d8a 006a                 DSJ    A10,1A4C0h
19e20: c04c                      JR     1A2F0h
19e30: d28e 0080                 MOVE   *A4(80h),*A14+,1
19e50: d24e 0080                 MOVE   *A2(80h),*A14+,1
19e70: 0d5f 9f80 0004            CALLA  49F80h
19ea0: ca1e                      JREQ   1A090h
19eb0: b34c 0080                 MOVE   A10,*A12(80h),1
19ed0: 45de                      SUB    B14,B14
19ee0: 07ea d328 0004            MOVE   @4D328h,A10
19f10: 0d8a 0059                 DSJ    A10,1A4C0h
19f30: c03b                      JR     1A2F0h
19f40: d28e 0080                 MOVE   *A4(80h),*A14+,1
19f60: d24e 0080                 MOVE   *A2(80h),*A14+,1
19f80: 0d5f a1a0 0004            CALLA  4A1A0h
19fb0: ca11                      JREQ   1A0D0h
19fc0: b34c 0080                 MOVE   A10,*A12(80h),1
19fe0: 45de                      SUB    B14,B14
19ff0: 07ea d328 0004            MOVE   @4D328h,A10
1a020: 0d8a 0048                 DSJ    A10,1A4C0h
1a040: c02a                      JR     1A2F0h
1a050: b2cc 0080                 MOVE   A6,*A12(80h),1
1a070: 183e                      MOVK   1h,B14
1a080: c007                      JR     1A100h
1a090: b2cc 0080                 MOVE   A6,*A12(80h),1
1a0b0: 183e                      MOVK   1h,B14
1a0c0: c003                      JR     1A100h
1a0d0: b2cc 0080                 MOVE   A6,*A12(80h),1
1a0f0: 183e                      MOVK   1h,B14
1a100: d38e 0080                 MOVE   *A12(80h),*A14+,1
1a120: d60e d900 0004            MOVE   @4D900h,*A14+,1
1a150: 0d5f 9f80 0004            CALLA  49F80h
1a180: ca35                      JREQ   1A4E0h
1a190: d38e 0080                 MOVE   *A12(80h),*A14+,1
1a1b0: d60e d840 0004            MOVE   @4D840h,*A14+,1
1a1e0: 0d5f a1a0 0004            CALLA  4A1A0h
1a210: ca2c                      JREQ   1A4E0h
1a220: 07ea d328 0004            MOVE   @4D328h,A10
1a250: 0d8a 0025                 DSJ    A10,1A4C0h
1a270: c007                      JR     1A2F0h
1a280: b34c 0080                 MOVE   A10,*A12(80h),1
1a2a0: 45de                      SUB    B14,B14
1a2b0: 07ea d328 0004            MOVE   @4D328h,A10
1a2e0: 3baa                      DSJS   A10,1A4C0h
1a2f0: d28e 00a0                 MOVE   *A4(A0h),*A14+,1
1a310: d60e d7a0 0004            MOVE   @4D7A0h,*A14+,1
1a340: 0d5f 8c60 0004            CALLA  48C60h
1a370: a7ca                      MOVE   -*A14,A10,1
1a380: b34c 00a0                 MOVE   A10,*A12(A0h),1
1a3a0: d38e 00a0                 MOVE   *A12(A0h),*A14+,1
1a3c0: d60e d920 0004            MOVE   @4D920h,*A14+,1
1a3f0: 0d5f 9f80 0004            CALLA  49F80h
1a420: ca0b                      JREQ   1A4E0h
1a430: d38e 00a0                 MOVE   *A12(A0h),*A14+,1
1a450: d60e d860 0004            MOVE   @4D860h,*A14+,1
1a480: 0d5f a1a0 0004            CALLA  4A1A0h
1a4b0: ca02                      JREQ   1A4E0h
1a4c0: 1828                      MOVK   1h,A8
1a4d0: c001                      JR     1A4F0h
1a4e0: 4508                      SUB    A8,A8
1a4f0: b7ee 00e0                 MOVE   *SP(E0h),A14,1
1a510: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
1a530: 0962                      RETS   2h

_hextoc:
1a540: 098f 400c                 MMTM   SP,A1,A12,A13
1a560: 4dcd                      MOVE   A14,A13
1a570: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1a590: 4421                      SUB    A1,A1
1a5a0: 8f88                      MOVB   *A12,A8
1a5b0: 1408                      SUBK   20h,A8
1a5c0: cb04                      JRNE   1A610h
1a5d0: 110c                      ADDK   8h,A12
1a5e0: 8f88                      MOVB   *A12,A8
1a5f0: 1408                      SUBK   20h,A8
1a600: cafc                      JREQ   1A5D0h
1a610: 8f88                      MOVB   *A12,A8
1a620: cb0f                      JRNE   1A720h
1a630: c01e                      JR     1A820h
1a640: 2481                      SLL    4h,A1
1a650: 8f88                      MOVB   *A12,A8
1a660: 4101                      ADD    A8,A1
1a670: 0be1 ffcf                 SUBI   30h,A1
1a690: c005                      JR     1A6F0h
1a6a0: 2481                      SLL    4h,A1
1a6b0: 8f88                      MOVB   *A12,A8
1a6c0: 4101                      ADD    A8,A1
1a6d0: 0be1 ffc8                 SUBI   37h,A1
1a6f0: 110c                      ADDK   8h,A12
1a700: 8f88                      MOVB   *A12,A8
1a710: ca10                      JREQ   1A820h
1a720: 8f88                      MOVB   *A12,A8
1a730: 0b48 ffcf                 CMPI   30h,A8
1a750: c404                      JRLT   1A7A0h
1a760: 8f88                      MOVB   *A12,A8
1a770: 0b48 ffc6                 CMPI   39h,A8
1a790: c6ea                      JRLE   1A640h
1a7a0: 8f88                      MOVB   *A12,A8
1a7b0: 0b48 ffbe                 CMPI   41h,A8
1a7d0: c404                      JRLT   1A820h
1a7e0: 8f88                      MOVB   *A12,A8
1a7f0: 0b48 ffb9                 CMPI   46h,A8
1a810: c6e8                      JRLE   1A6A0h
1a820: 4c28                      MOVE   A1,A8
1a830: 0568                      SETF   8h,1,0
1a840: 0508                      SEXT   A8,0
1a850: b7ee 0080                 MOVE   *SP(80h),A14,1
1a870: 09af 3002                 MMFM   SP,A1,A12,A13
1a890: 0962                      RETS   2h

_hexstr:
1a8a0: 098f 4a2c                 MMTM   SP,A1,A4,A6,A10,A12,A13
1a8c0: 4dcd                      MOVE   A14,A13
1a8d0: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
1a8f0: b7a4 ffe0                 MOVE   *A13(FFE0h),A4,1
1a910: 454a                      SUB    A10,A10
1a920: 4c81                      MOVE   A4,A1
1a930: ca05                      JREQ   1A990h
1a940: 102a                      INC    A10
1a950: 260a                      SLL    10h,A10
1a960: 2a0a                      SRA    10h,A10
1a970: 2b81                      SRA    4h,A1
1a980: cbfb                      JRNE   1A940h
1a990: 44c6                      SUB    A6,A6
1a9a0: 4d41                      MOVE   A10,A1
1a9b0: c622                      JRLE   1ABE0h
1a9c0: 4d48                      MOVE   A10,A8
1a9d0: 44c8                      SUB    A6,A8
1a9e0: 1428                      DEC    A8
1a9f0: 2448                      SLL    2h,A8
1aa00: 03a8                      NEG    A8
1aa10: 4c81                      MOVE   A4,A1
1aa20: 6501                      SRA    A8,A1
1aa30: 8c2c                      MOVB   A1,*A12
1aa40: 8f88                      MOVB   *A12,A8
1aa50: c403                      JRLT   1AA90h
1aa60: 8f88                      MOVB   *A12,A8
1aa70: 1528                      SUBK   9h,A8
1aa80: c603                      JRLE   1AAC0h
1aa90: 09c8 0037                 MOVI   37h,A8
1aab0: c002                      JR     1AAE0h
1aac0: 09c8 0030                 MOVI   30h,A8
1aae0: 8f81                      MOVB   *A12,A1
1aaf0: 4101                      ADD    A8,A1
1ab00: 8c2c                      MOVB   A1,*A12
1ab10: 4d48                      MOVE   A10,A8
1ab20: 44c8                      SUB    A6,A8
1ab30: 1428                      DEC    A8
1ab40: 2448                      SLL    2h,A8
1ab50: 1821                      MOVK   1h,A1
1ab60: 6301                      SLL    A8,A1
1ab70: 6c24                      MODS   A1,A4
1ab80: 110c                      ADDK   8h,A12
1ab90: 1026                      INC    A6
1aba0: 2606                      SLL    10h,A6
1abb0: 2a06                      SRA    10h,A6
1abc0: 4946                      CMP    A10,A6
1abd0: c4de                      JRLT   1A9C0h
1abe0: 454a                      SUB    A10,A10
1abf0: 8d4c                      MOVB   A10,*A12
1ac00: b7ee 00e0                 MOVE   *SP(E0h),A14,1
1ac20: 09af 3452                 MMFM   SP,A1,A4,A6,A10,A12,A13
1ac40: 0962                      RETS   2h

_calc_best_speed:
1ac50: 098f ea2c                 MMTM   SP,A0-A2,A4,A6,A10,A12,A13
1ac70: 4dcd                      MOVE   A14,A13
1ac80: 0570                      SETF   10h,1,0
1ac90: b5a2 ff20                 MOVE   *A13(FF20h),A2,0
1acb0: b7a4 ff40                 MOVE   *A13(FF40h),A4,1
1acd0: b5a1 ff60                 MOVE   *A13(FF60h),A1,0
1acf0: 928e                      MOVE   A4,*A14+,1
1ad00: 0d5f 4980 0004            CALLA  44980h
1ad30: 4508                      SUB    A8,A8
1ad40: 09ec 4000 408f            MOVI   408F4000h,A12
1ad70: 938e                      MOVE   A12,*A14+,1
1ad80: 930e                      MOVE   A8,*A14+,1
1ad90: 0d5f 74f0 0004            CALLA  474F0h
1adc0: 0d5f 4030 0004            CALLA  44030h
1adf0: a7c4                      MOVE   -*A14,A4,1
1ae00: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
1ae20: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1ae40: 0d5f 8b40 0004            CALLA  48B40h
1ae70: a7c6                      MOVE   -*A14,A6,1
1ae80: 92ce                      MOVE   A6,*A14+,1
1ae90: 0d5f 89c0 0004            CALLA  489C0h
1aec0: a7c6                      MOVE   -*A14,A6,1
1aed0: 92ce                      MOVE   A6,*A14+,1
1aee0: 0d5f 4980 0004            CALLA  44980h
1af10: 4508                      SUB    A8,A8
1af20: 09ec 0000 4040            MOVI   40400000h,A12
1af50: 938e                      MOVE   A12,*A14+,1
1af60: 930e                      MOVE   A8,*A14+,1
1af70: 0d5f 7fa0 0004            CALLA  47FA0h
1afa0: 0d5f 4030 0004            CALLA  44030h
1afd0: a7c6                      MOVE   -*A14,A6,1
1afe0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
1b000: 92ce                      MOVE   A6,*A14+,1
1b010: 0d5f 9720 0004            CALLA  49720h
1b040: a7c6                      MOVE   -*A14,A6,1
1b050: 938e                      MOVE   A12,*A14+,1
1b060: 92ce                      MOVE   A6,*A14+,1
1b070: 0d5f 9720 0004            CALLA  49720h
1b0a0: a7c6                      MOVE   -*A14,A6,1
1b0b0: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
1b0d0: 07aa cb60 0004            MOVE   @4CB60h,A10,1
1b100: 484c                      CMP    A2,A12
1b110: c530                      JRGE   1B420h
1b120: 934e                      MOVE   A10,*A14+,1
1b130: 92ce                      MOVE   A6,*A14+,1
1b140: 0d5f a2b0 0004            CALLA  4A2B0h
1b170: ca2a                      JREQ   1B420h
1b180: 934e                      MOVE   A10,*A14+,1
1b190: 0d5f 4980 0004            CALLA  44980h
1b1c0: 4d88                      MOVE   A12,A8
1b1d0: 0d5f 5470 0004            CALLA  45470h
1b200: 4508                      SUB    A8,A8
1b210: 09e0 0000 4040            MOVI   40400000h,A0
1b240: 920e                      MOVE   A0,*A14+,1
1b250: 930e                      MOVE   A8,*A14+,1
1b260: 0d5f 7fa0 0004            CALLA  47FA0h
1b290: 928e                      MOVE   A4,*A14+,1
1b2a0: 0d5f 4980 0004            CALLA  44980h
1b2d0: 0d5f 7fa0 0004            CALLA  47FA0h
1b300: 0d5f 5db0 0004            CALLA  45DB0h
1b330: 0d5f 4030 0004            CALLA  44030h
1b360: a7ca                      MOVE   -*A14,A10,1
1b370: 402c                      ADD    A1,A12
1b380: 260c                      SLL    10h,A12
1b390: 2a0c                      SRA    10h,A12
1b3a0: 484c                      CMP    A2,A12
1b3b0: c506                      JRGE   1B420h
1b3c0: 934e                      MOVE   A10,*A14+,1
1b3d0: 92ce                      MOVE   A6,*A14+,1
1b3e0: 0d5f 9f80 0004            CALLA  49F80h
1b410: cad6                      JREQ   1B180h
1b420: 934e                      MOVE   A10,*A14+,1
1b430: 92ce                      MOVE   A6,*A14+,1
1b440: 0d5f a1a0 0004            CALLA  4A1A0h
1b470: ca03                      JREQ   1B4B0h
1b480: 4c4c                      MOVE   A2,A12
1b490: 4d88                      MOVE   A12,A8
1b4a0: c004                      JR     1B4F0h
1b4b0: 442c                      SUB    A1,A12
1b4c0: 260c                      SLL    10h,A12
1b4d0: 2a0c                      SRA    10h,A12
1b4e0: 4d88                      MOVE   A12,A8
1b4f0: b7ee 0120                 MOVE   *SP(120h),A14,1
1b510: 09af 3457                 MMFM   SP,A0-A2,A4,A6,A10,A12,A13
1b530: 0962                      RETS   2h

_action_message:
1b540: 098f 000c                 MMTM   SP,A12,A13
1b560: 4dcd                      MOVE   A14,A13
1b570: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1b590: 1488                      SUBK   4h,A8
1b5a0: 36c8                      CMPK   16h,A8
1b5b0: c30e                      JRHI   1B6A0h
1b5c0: 24a8                      SLL    5h,A8
1b5d0: 0b28 c7e0 0004            ADDI   4C7E0h,A8
1b600: 8708                      MOVE   *A8,A8,1
1b610: 0168                      JUMP   A8
1b620: 1828                      MOVK   1h,A8
1b630: 07ac d290 0004            MOVE   @4D290h,A12,1
1b660: 5588                      OR     A12,A8
1b670: 0788 d290 0004            MOVE   A8,@4D290h,1
1b6a0: 1828                      MOVK   1h,A8
1b6b0: c032                      JR     1B9E0h
1b6c0: 0d5f ba30 0001            CALLA  1BA30h
1b6f0: 4508                      SUB    A8,A8
1b700: c02d                      JR     1B9E0h
1b710: 07ac d290 0004            MOVE   @4D290h,A12,1
1b740: 0bac 0020 0000            ORI    20h,A12
1b770: 078c d290 0004            MOVE   A12,@4D290h,1
1b7a0: 1828                      MOVK   1h,A8
1b7b0: c022                      JR     1B9E0h
1b7c0: 0d5f 4670 0001            CALLA  14670h
1b7f0: 4508                      SUB    A8,A8
1b800: c01d                      JR     1B9E0h
1b810: 190c                      MOVK   8h,A12
1b820: 07a8 d290 0004            MOVE   @4D290h,A8,1
1b850: 550c                      OR     A8,A12
1b860: 078c d290 0004            MOVE   A12,@4D290h,1
1b890: 1828                      MOVK   1h,A8
1b8a0: c013                      JR     1B9E0h
1b8b0: 188c                      MOVK   4h,A12
1b8c0: 07a8 d290 0004            MOVE   @4D290h,A8,1
1b8f0: 550c                      OR     A8,A12
1b900: 078c d290 0004            MOVE   A12,@4D290h,1
1b930: 1828                      MOVK   1h,A8
1b940: c009                      JR     1B9E0h
1b950: 184c                      MOVK   2h,A12
1b960: 07a8 d290 0004            MOVE   @4D290h,A8,1
1b990: 550c                      OR     A8,A12
1b9a0: 078c d290 0004            MOVE   A12,@4D290h,1
1b9d0: 1828                      MOVK   1h,A8
1b9e0: b7ee 0060                 MOVE   *SP(60h),A14,1
1ba00: 09af 3000                 MMFM   SP,A12,A13
1ba20: 0962                      RETS   2h

_disable_touch_alarm_tiga_reques:
1ba30: a3cf                      MOVE   A14,-*SP,1
1ba40: 09e8 cb30 0004            MOVI   4CB30h,A8
1ba70: 930e                      MOVE   A8,*A14+,1
1ba80: 09e8 8a40 0005            MOVI   58A40h,A8
1bab0: 930e                      MOVE   A8,*A14+,1
1bac0: 0d5f bc70 0004            CALLA  4BC70h
1baf0: 0d5f 1ad0 0001            CALLA  11AD0h
1bb20: 0960                      RETS   

_move_the_stage_tiga_request:
1bb30: 098f 002c                 MMTM   SP,A10,A12,A13
1bb50: 4dcd                      MOVE   A14,A13
1bb60: 0b0e 02a0                 ADDI   2A0h,A14
1bb80: 4fa2                      MOVE   A13,B2
1bb90: 4fa0                      MOVE   A13,B0
1bba0: 0bf0 ff3f                 SUBI   C0h,B0
1bbc0: 09d7 00c0                 MOVI   C0h,B7
1bbe0: 00f3                      BLMOVE 1,1
1bbf0: 4fa2                      MOVE   A13,B2
1bc00: 0b12 00c0                 ADDI   C0h,B2
1bc20: 09f0 d140 0004            MOVI   4D140h,B0
1bc50: 09d7 00c0                 MOVI   C0h,B7
1bc70: 00f3                      BLMOVE 1,1
1bc80: 458c                      SUB    A12,A12
1bc90: 07e8 d320 0004            MOVE   @4D320h,A8
1bcc0: 0d88 0051                 DSJ    A8,1C1F0h
1bce0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1bd00: 09e8 0000 43b4            MOVI   43B40000h,A8
1bd30: 930e                      MOVE   A8,*A14+,1
1bd40: 0d5f a090 0004            CALLA  4A090h
1bd70: ca16                      JREQ   1BEE0h
1bd80: 09e8 0000 43b4            MOVI   43B40000h,A8
1bdb0: 930e                      MOVE   A8,*A14+,1
1bdc0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1bde0: 0d5f 8a20 0004            CALLA  48A20h
1be10: a7c8                      MOVE   -*A14,A8,1
1be20: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
1be40: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1be60: 09e8 0000 43b4            MOVI   43B40000h,A8
1be90: 930e                      MOVE   A8,*A14+,1
1bea0: 0d5f a1a0 0004            CALLA  4A1A0h
1bed0: caea                      JREQ   1BD80h
1bee0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1bf00: 4508                      SUB    A8,A8
1bf10: 930e                      MOVE   A8,*A14+,1
1bf20: 0d5f a2b0 0004            CALLA  4A2B0h
1bf50: ca14                      JREQ   1C0A0h
1bf60: 09e8 0000 43b4            MOVI   43B40000h,A8
1bf90: 930e                      MOVE   A8,*A14+,1
1bfa0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1bfc0: 0d5f 8c60 0004            CALLA  48C60h
1bff0: a7c8                      MOVE   -*A14,A8,1
1c000: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
1c020: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1c040: 4508                      SUB    A8,A8
1c050: 930e                      MOVE   A8,*A14+,1
1c060: 0d5f 9f80 0004            CALLA  49F80h
1c090: caec                      JREQ   1BF60h
1c0a0: 100e                      ADDK   20h,A14
1c0b0: a3cf                      MOVE   A14,-*SP,1
1c0c0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1c0e0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
1c110: 0d5f 4880 0002            CALLA  24880h
1c140: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
1c170: 0d5f 8c60 0004            CALLA  48C60h
1c1a0: a7c8                      MOVE   -*A14,A8,1
1c1b0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
1c1d0: b30d 0080                 MOVE   A8,*A13(80h),1
1c1f0: 07e8 db20 0004            MOVE   @4DB20h,A8
1c220: 1428                      DEC    A8
1c230: ca62                      JREQ   1C860h
1c240: a3cf                      MOVE   A14,-*SP,1
1c250: 4da8                      MOVE   A13,A8
1c260: 0b08 0240                 ADDI   240h,A8
1c280: 930e                      MOVE   A8,*A14+,1
1c290: 4da8                      MOVE   A13,A8
1c2a0: 0be8 ff3f                 SUBI   C0h,A8
1c2c0: 930e                      MOVE   A8,*A14+,1
1c2d0: 09e8 d9a0 0004            MOVI   4D9A0h,A8
1c300: 930e                      MOVE   A8,*A14+,1
1c310: 0d5f 4770 0001            CALLA  14770h
1c340: 1428                      DEC    A8
1c350: ca0c                      JREQ   1C420h
1c360: a3cf                      MOVE   A14,-*SP,1
1c370: 4dac                      MOVE   A13,A12
1c380: 0b0c 0240                 ADDI   240h,A12
1c3a0: 938e                      MOVE   A12,*A14+,1
1c3b0: 0d5f 90a0 0002            CALLA  290A0h
1c3e0: 4d08                      MOVE   A8,A8
1c3f0: cb51                      JRNE   1C910h
1c400: c000 01ab                 JR     1DED0h
1c420: 0570                      SETF   10h,1,0
1c430: 05a8 d940 0004            MOVE   @4D940h,A8,0
1c460: 05aa d9a0 0004            MOVE   @4D9A0h,A10,0
1c490: 4948                      CMP    A10,A8
1c4a0: ca01                      JREQ   1C4C0h
1c4b0: 182c                      MOVK   1h,A12
1c4c0: 05a8 d950 0004            MOVE   @4D950h,A8,0
1c4f0: 05aa d9b0 0004            MOVE   @4D9B0h,A10,0
1c520: 4948                      CMP    A10,A8
1c530: ca01                      JREQ   1C550h
1c540: 182c                      MOVK   1h,A12
1c550: 05a8 d960 0004            MOVE   @4D960h,A8,0
1c580: 05aa d9c0 0004            MOVE   @4D9C0h,A10,0
1c5b0: 4948                      CMP    A10,A8
1c5c0: ca01                      JREQ   1C5E0h
1c5d0: 182c                      MOVK   1h,A12
1c5e0: 05a8 d970 0004            MOVE   @4D970h,A8,0
1c610: 05aa d9d0 0004            MOVE   @4D9D0h,A10,0
1c640: 4948                      CMP    A10,A8
1c650: ca01                      JREQ   1C670h
1c660: 182c                      MOVK   1h,A12
1c670: 05a8 d980 0004            MOVE   @4D980h,A8,0
1c6a0: 05aa d9e0 0004            MOVE   @4D9E0h,A10,0
1c6d0: 4948                      CMP    A10,A8
1c6e0: ca01                      JREQ   1C700h
1c6f0: 182c                      MOVK   1h,A12
1c700: 05a8 d990 0004            MOVE   @4D990h,A8,0
1c730: 05aa d9f0 0004            MOVE   @4D9F0h,A10,0
1c760: 4948                      CMP    A10,A8
1c770: ca01                      JREQ   1C790h
1c780: 182c                      MOVK   1h,A12
1c790: 3aec                      DSJS   A12,1C910h
1c7a0: a3cf                      MOVE   A14,-*SP,1
1c7b0: 09ec d9a0 0004            MOVI   4D9A0h,A12
1c7e0: 938e                      MOVE   A12,*A14+,1
1c7f0: 0d5f 90a0 0002            CALLA  290A0h
1c820: 4d0a                      MOVE   A8,A10
1c830: cb0d                      JRNE   1C910h
1c840: c000 0167                 JR     1DED0h
1c860: a3cf                      MOVE   A14,-*SP,1
1c870: 4dac                      MOVE   A13,A12
1c880: 0bec ff3f                 SUBI   C0h,A12
1c8a0: 938e                      MOVE   A12,*A14+,1
1c8b0: 0d5f a130 0002            CALLA  2A130h
1c8e0: 4d0a                      MOVE   A8,A10
1c8f0: ca00 015c                 JREQ   1DED0h
1c910: 0570                      SETF   10h,1,0
1c920: 05ac de50 0004            MOVE   @4DE50h,A12,0
1c950: cb0a                      JRNE   1CA00h
1c960: a3cf                      MOVE   A14,-*SP,1
1c970: 93ae                      MOVE   A13,*A14+,1
1c980: 0d5f ed90 0001            CALLA  1ED90h
1c9b0: 4d0a                      MOVE   A8,A10
1c9c0: cb00 0087                 JRNE   1D250h
1c9e0: c000 014d                 JR     1DED0h
1ca00: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
1ca20: d60e d180 0004            MOVE   @4D180h,*A14+,1
1ca50: 0d5f a2b0 0004            CALLA  4A2B0h
1ca80: ca12                      JREQ   1CBB0h
1ca90: 4fa2                      MOVE   A13,B2
1caa0: 09f0 d140 0004            MOVI   4D140h,B0
1cad0: 09d7 00c0                 MOVI   C0h,B7
1caf0: 00f3                      BLMOVE 1,1
1cb00: bbad ff80 0040            MOVE   *A13(FF80h),*A13(40h),1
1cb30: a3cf                      MOVE   A14,-*SP,1
1cb40: 93ae                      MOVE   A13,*A14+,1
1cb50: 0d5f ed90 0001            CALLA  1ED90h
1cb80: 4d0a                      MOVE   A8,A10
1cb90: ca00 0132                 JREQ   1DED0h
1cbb0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
1cbd0: d60e d1a0 0004            MOVE   @4D1A0h,*A14+,1
1cc00: 0d5f a2b0 0004            CALLA  4A2B0h
1cc30: ca12                      JREQ   1CD60h
1cc40: 4fa2                      MOVE   A13,B2
1cc50: 09f0 d140 0004            MOVI   4D140h,B0
1cc80: 09d7 00c0                 MOVI   C0h,B7
1cca0: 00f3                      BLMOVE 1,1
1ccb0: bbad ffa0 0060            MOVE   *A13(FFA0h),*A13(60h),1
1cce0: a3cf                      MOVE   A14,-*SP,1
1ccf0: 93ae                      MOVE   A13,*A14+,1
1cd00: 0d5f ed90 0001            CALLA  1ED90h
1cd30: 4d0a                      MOVE   A8,A10
1cd40: ca00 0117                 JREQ   1DED0h
1cd60: 4fa2                      MOVE   A13,B2
1cd70: 4fa0                      MOVE   A13,B0
1cd80: 0bf0 ff3f                 SUBI   C0h,B0
1cda0: 09d7 00c0                 MOVI   C0h,B7
1cdc0: 00f3                      BLMOVE 1,1
1cdd0: 07ac d180 0004            MOVE   @4D180h,A12,1
1ce00: b38d 0040                 MOVE   A12,*A13(40h),1
1ce20: 07aa d1a0 0004            MOVE   @4D1A0h,A10,1
1ce50: b34d 0060                 MOVE   A10,*A13(60h),1
1ce70: a3cf                      MOVE   A14,-*SP,1
1ce80: 93ae                      MOVE   A13,*A14+,1
1ce90: 0d5f ed90 0001            CALLA  1ED90h
1cec0: 4d0a                      MOVE   A8,A10
1ced0: ca00 00fe                 JREQ   1DED0h
1cef0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
1cf10: d60e d1a0 0004            MOVE   @4D1A0h,*A14+,1
1cf40: 0d5f aaf0 0004            CALLA  4AAF0h
1cf70: ca12                      JREQ   1D0A0h
1cf80: 4fa2                      MOVE   A13,B2
1cf90: 09f0 d140 0004            MOVI   4D140h,B0
1cfc0: 09d7 00c0                 MOVI   C0h,B7
1cfe0: 00f3                      BLMOVE 1,1
1cff0: bbad ffa0 0060            MOVE   *A13(FFA0h),*A13(60h),1
1d020: a3cf                      MOVE   A14,-*SP,1
1d030: 93ae                      MOVE   A13,*A14+,1
1d040: 0d5f ed90 0001            CALLA  1ED90h
1d070: 4d0a                      MOVE   A8,A10
1d080: ca00 00e3                 JREQ   1DED0h
1d0a0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
1d0c0: d60e d180 0004            MOVE   @4D180h,*A14+,1
1d0f0: 0d5f aaf0 0004            CALLA  4AAF0h
1d120: ca12                      JREQ   1D250h
1d130: 4fa2                      MOVE   A13,B2
1d140: 09f0 d140 0004            MOVI   4D140h,B0
1d170: 09d7 00c0                 MOVI   C0h,B7
1d190: 00f3                      BLMOVE 1,1
1d1a0: bbad ff80 0040            MOVE   *A13(FF80h),*A13(40h),1
1d1d0: a3cf                      MOVE   A14,-*SP,1
1d1e0: 93ae                      MOVE   A13,*A14+,1
1d1f0: 0d5f ed90 0001            CALLA  1ED90h
1d220: 4d0a                      MOVE   A8,A10
1d230: ca00 00c8                 JREQ   1DED0h
1d250: 07ec db30 0004            MOVE   @4DB30h,A12
1d280: 0d8c 00ae                 DSJ    A12,1DD80h
1d2a0: a3cf                      MOVE   A14,-*SP,1
1d2b0: 09ec da00 0004            MOVI   4DA00h,A12
1d2e0: 938e                      MOVE   A12,*A14+,1
1d2f0: 0d5f 90a0 0002            CALLA  290A0h
1d320: 4d0a                      MOVE   A8,A10
1d330: ca00 00b8                 JREQ   1DED0h
1d350: a3cf                      MOVE   A14,-*SP,1
1d360: 4daa                      MOVE   A13,A10
1d370: 0b0a 00c0                 ADDI   C0h,A10
1d390: 934e                      MOVE   A10,*A14+,1
1d3a0: 4da8                      MOVE   A13,A8
1d3b0: 0b08 0180                 ADDI   180h,A8
1d3d0: 930e                      MOVE   A8,*A14+,1
1d3e0: 4da8                      MOVE   A13,A8
1d3f0: 0be8 ff3f                 SUBI   C0h,A8
1d410: 930e                      MOVE   A8,*A14+,1
1d420: 0d5f 80b0 0001            CALLA  180B0h
1d450: 4d08                      MOVE   A8,A8
1d460: ca00 00a1                 JREQ   1DE90h
1d480: d3ae 0200                 MOVE   *A13(200h),*A14+,1
1d4a0: 09e8 0000 43b4            MOVI   43B40000h,A8
1d4d0: 930e                      MOVE   A8,*A14+,1
1d4e0: 0d5f a090 0004            CALLA  4A090h
1d510: ca0c                      JREQ   1D5E0h
1d520: 09e8 0000 43b4            MOVI   43B40000h,A8
1d550: 930e                      MOVE   A8,*A14+,1
1d560: d3ae 0200                 MOVE   *A13(200h),*A14+,1
1d580: 0d5f 8a20 0004            CALLA  48A20h
1d5b0: a7c8                      MOVE   -*A14,A8,1
1d5c0: b30d 0200                 MOVE   A8,*A13(200h),1
1d5e0: d3ae 0200                 MOVE   *A13(200h),*A14+,1
1d600: 4508                      SUB    A8,A8
1d610: 930e                      MOVE   A8,*A14+,1
1d620: 0d5f a2b0 0004            CALLA  4A2B0h
1d650: ca0c                      JREQ   1D720h
1d660: 09e8 0000 43b4            MOVI   43B40000h,A8
1d690: 930e                      MOVE   A8,*A14+,1
1d6a0: d3ae 0200                 MOVE   *A13(200h),*A14+,1
1d6c0: 0d5f 8c60 0004            CALLA  48C60h
1d6f0: a7c8                      MOVE   -*A14,A8,1
1d700: b30d 0200                 MOVE   A8,*A13(200h),1
1d720: 100e                      ADDK   20h,A14
1d730: a3cf                      MOVE   A14,-*SP,1
1d740: d3ae 0200                 MOVE   *A13(200h),*A14+,1
1d760: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
1d790: 0d5f 4880 0002            CALLA  24880h
1d7c0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
1d7f0: 0d5f 8c60 0004            CALLA  48C60h
1d820: a7c8                      MOVE   -*A14,A8,1
1d830: b30d 0200                 MOVE   A8,*A13(200h),1
1d850: a3cf                      MOVE   A14,-*SP,1
1d860: 4da8                      MOVE   A13,A8
1d870: 0b08 0180                 ADDI   180h,A8
1d890: 930e                      MOVE   A8,*A14+,1
1d8a0: 0d5f ed90 0001            CALLA  1ED90h
1d8d0: 4d08                      MOVE   A8,A8
1d8e0: ca58                      JREQ   1DE70h
1d8f0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1d910: 09e8 0000 43b4            MOVI   43B40000h,A8
1d940: 930e                      MOVE   A8,*A14+,1
1d950: 0d5f a090 0004            CALLA  4A090h
1d980: ca0c                      JREQ   1DA50h
1d990: 09e8 0000 43b4            MOVI   43B40000h,A8
1d9c0: 930e                      MOVE   A8,*A14+,1
1d9d0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1d9f0: 0d5f 8a20 0004            CALLA  48A20h
1da20: a7c8                      MOVE   -*A14,A8,1
1da30: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
1da50: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1da70: 4508                      SUB    A8,A8
1da80: 930e                      MOVE   A8,*A14+,1
1da90: 0d5f a2b0 0004            CALLA  4A2B0h
1dac0: ca0c                      JREQ   1DB90h
1dad0: 09e8 0000 43b4            MOVI   43B40000h,A8
1db00: 930e                      MOVE   A8,*A14+,1
1db10: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1db30: 0d5f 8c60 0004            CALLA  48C60h
1db60: a7c8                      MOVE   -*A14,A8,1
1db70: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
1db90: 100e                      ADDK   20h,A14
1dba0: a3cf                      MOVE   A14,-*SP,1
1dbb0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1dbd0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
1dc00: 0d5f 4880 0002            CALLA  24880h
1dc30: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
1dc60: 0d5f 8c60 0004            CALLA  48C60h
1dc90: a7c8                      MOVE   -*A14,A8,1
1dca0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
1dcc0: a3cf                      MOVE   A14,-*SP,1
1dcd0: 4da8                      MOVE   A13,A8
1dce0: 0be8 ff3f                 SUBI   C0h,A8
1dd00: 930e                      MOVE   A8,*A14+,1
1dd10: 0d5f ed90 0001            CALLA  1ED90h
1dd40: 4d08                      MOVE   A8,A8
1dd50: cb02                      JRNE   1DD80h
1dd60: 4508                      SUB    A8,A8
1dd70: c016                      JR     1DEE0h
1dd80: a3cf                      MOVE   A14,-*SP,1
1dd90: 09ec d9a0 0004            MOVI   4D9A0h,A12
1ddc0: 938e                      MOVE   A12,*A14+,1
1ddd0: 0d5f 90a0 0002            CALLA  290A0h
1de00: 4d0a                      MOVE   A8,A10
1de10: 1828                      MOVK   1h,A8
1de20: cb01                      JRNE   1DE40h
1de30: 4508                      SUB    A8,A8
1de40: 0568                      SETF   8h,1,0
1de50: 0508                      SEXT   A8,0
1de60: c007                      JR     1DEE0h
1de70: 4508                      SUB    A8,A8
1de80: c005                      JR     1DEE0h
1de90: 1948                      MOVK   Ah,A8
1dea0: 05e8 dd30 0004            MOVB   A8,@4DD30h
1ded0: 4508                      SUB    A8,A8
1dee0: b7ee 0080                 MOVE   *SP(80h),A14,1
1df00: 09af 3400                 MMFM   SP,A10,A12,A13
1df20: 0962                      RETS   2h

_move_stage_at_speed:
1df30: 098f 000c                 MMTM   SP,A12,A13
1df50: 4dcd                      MOVE   A14,A13
1df60: 0b0e 0060                 ADDI   60h,A14
1df80: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1dfa0: a3cf                      MOVE   A14,-*SP,1
1dfb0: 09e8 cb80 0004            MOVI   4CB80h,A8
1dfe0: 930e                      MOVE   A8,*A14+,1
1dff0: 09e8 8a40 0005            MOVI   58A40h,A8
1e020: 930e                      MOVE   A8,*A14+,1
1e030: 0d5f bc70 0004            CALLA  4BC70h
1e060: 07e8 d300 0004            MOVE   @4D300h,A8
1e090: 3ba8                      DSJS   A8,1E270h
1e0a0: a3cf                      MOVE   A14,-*SP,1
1e0b0: 09e8 cba0 0004            MOVI   4CBA0h,A8
1e0e0: 930e                      MOVE   A8,*A14+,1
1e0f0: 09e8 8a40 0005            MOVI   58A40h,A8
1e120: 930e                      MOVE   A8,*A14+,1
1e130: 0d5f b9c0 0004            CALLA  4B9C0h
1e160: a3cf                      MOVE   A14,-*SP,1
1e170: 93ae                      MOVE   A13,*A14+,1
1e180: 0570                      SETF   10h,1,0
1e190: 8588                      MOVE   *A12,A8,0
1e1a0: 930e                      MOVE   A8,*A14+,1
1e1b0: 0d5f b220 0004            CALLA  4B220h
1e1e0: a3cf                      MOVE   A14,-*SP,1
1e1f0: 93ae                      MOVE   A13,*A14+,1
1e200: 09e8 8a40 0005            MOVI   58A40h,A8
1e230: 930e                      MOVE   A8,*A14+,1
1e240: 0d5f b9c0 0004            CALLA  4B9C0h
1e270: 07e8 d308 0004            MOVE   @4D308h,A8
1e2a0: 3bc8                      DSJS   A8,1E490h
1e2b0: a3cf                      MOVE   A14,-*SP,1
1e2c0: 09e8 cba0 0004            MOVI   4CBA0h,A8
1e2f0: 930e                      MOVE   A8,*A14+,1
1e300: 09e8 8a40 0005            MOVI   58A40h,A8
1e330: 930e                      MOVE   A8,*A14+,1
1e340: 0d5f b9c0 0004            CALLA  4B9C0h
1e370: a3cf                      MOVE   A14,-*SP,1
1e380: 93ae                      MOVE   A13,*A14+,1
1e390: 0570                      SETF   10h,1,0
1e3a0: b588 0010                 MOVE   *A12(10h),A8,0
1e3c0: 930e                      MOVE   A8,*A14+,1
1e3d0: 0d5f b220 0004            CALLA  4B220h
1e400: a3cf                      MOVE   A14,-*SP,1
1e410: 93ae                      MOVE   A13,*A14+,1
1e420: 09e8 8a40 0005            MOVI   58A40h,A8
1e450: 930e                      MOVE   A8,*A14+,1
1e460: 0d5f b9c0 0004            CALLA  4B9C0h
1e490: 07e8 d310 0004            MOVE   @4D310h,A8
1e4c0: 3bc8                      DSJS   A8,1E6B0h
1e4d0: a3cf                      MOVE   A14,-*SP,1
1e4e0: 09e8 cba0 0004            MOVI   4CBA0h,A8
1e510: 930e                      MOVE   A8,*A14+,1
1e520: 09e8 8a40 0005            MOVI   58A40h,A8
1e550: 930e                      MOVE   A8,*A14+,1
1e560: 0d5f b9c0 0004            CALLA  4B9C0h
1e590: a3cf                      MOVE   A14,-*SP,1
1e5a0: 93ae                      MOVE   A13,*A14+,1
1e5b0: 0570                      SETF   10h,1,0
1e5c0: b588 0020                 MOVE   *A12(20h),A8,0
1e5e0: 930e                      MOVE   A8,*A14+,1
1e5f0: 0d5f b220 0004            CALLA  4B220h
1e620: a3cf                      MOVE   A14,-*SP,1
1e630: 93ae                      MOVE   A13,*A14+,1
1e640: 09e8 8a40 0005            MOVI   58A40h,A8
1e670: 930e                      MOVE   A8,*A14+,1
1e680: 0d5f b9c0 0004            CALLA  4B9C0h
1e6b0: 07e8 d318 0004            MOVE   @4D318h,A8
1e6e0: 3bc8                      DSJS   A8,1E8D0h
1e6f0: a3cf                      MOVE   A14,-*SP,1
1e700: 09e8 cba0 0004            MOVI   4CBA0h,A8
1e730: 930e                      MOVE   A8,*A14+,1
1e740: 09e8 8a40 0005            MOVI   58A40h,A8
1e770: 930e                      MOVE   A8,*A14+,1
1e780: 0d5f b9c0 0004            CALLA  4B9C0h
1e7b0: a3cf                      MOVE   A14,-*SP,1
1e7c0: 93ae                      MOVE   A13,*A14+,1
1e7d0: 0570                      SETF   10h,1,0
1e7e0: b588 0030                 MOVE   *A12(30h),A8,0
1e800: 930e                      MOVE   A8,*A14+,1
1e810: 0d5f b220 0004            CALLA  4B220h
1e840: a3cf                      MOVE   A14,-*SP,1
1e850: 93ae                      MOVE   A13,*A14+,1
1e860: 09e8 8a40 0005            MOVI   58A40h,A8
1e890: 930e                      MOVE   A8,*A14+,1
1e8a0: 0d5f b9c0 0004            CALLA  4B9C0h
1e8d0: 07e8 d320 0004            MOVE   @4D320h,A8
1e900: 3bc8                      DSJS   A8,1EAF0h
1e910: a3cf                      MOVE   A14,-*SP,1
1e920: 09e8 cba0 0004            MOVI   4CBA0h,A8
1e950: 930e                      MOVE   A8,*A14+,1
1e960: 09e8 8a40 0005            MOVI   58A40h,A8
1e990: 930e                      MOVE   A8,*A14+,1
1e9a0: 0d5f b9c0 0004            CALLA  4B9C0h
1e9d0: a3cf                      MOVE   A14,-*SP,1
1e9e0: 93ae                      MOVE   A13,*A14+,1
1e9f0: 0570                      SETF   10h,1,0
1ea00: b588 0040                 MOVE   *A12(40h),A8,0
1ea20: 930e                      MOVE   A8,*A14+,1
1ea30: 0d5f b220 0004            CALLA  4B220h
1ea60: a3cf                      MOVE   A14,-*SP,1
1ea70: 93ae                      MOVE   A13,*A14+,1
1ea80: 09e8 8a40 0005            MOVI   58A40h,A8
1eab0: 930e                      MOVE   A8,*A14+,1
1eac0: 0d5f b9c0 0004            CALLA  4B9C0h
1eaf0: 07e8 d328 0004            MOVE   @4D328h,A8
1eb20: 3bc8                      DSJS   A8,1ED10h
1eb30: a3cf                      MOVE   A14,-*SP,1
1eb40: 09e8 cba0 0004            MOVI   4CBA0h,A8
1eb70: 930e                      MOVE   A8,*A14+,1
1eb80: 09e8 8a40 0005            MOVI   58A40h,A8
1ebb0: 930e                      MOVE   A8,*A14+,1
1ebc0: 0d5f b9c0 0004            CALLA  4B9C0h
1ebf0: a3cf                      MOVE   A14,-*SP,1
1ec00: 93ae                      MOVE   A13,*A14+,1
1ec10: 0570                      SETF   10h,1,0
1ec20: b588 0050                 MOVE   *A12(50h),A8,0
1ec40: 930e                      MOVE   A8,*A14+,1
1ec50: 0d5f b220 0004            CALLA  4B220h
1ec80: a3cf                      MOVE   A14,-*SP,1
1ec90: 93ae                      MOVE   A13,*A14+,1
1eca0: 09e8 8a40 0005            MOVI   58A40h,A8
1ecd0: 930e                      MOVE   A8,*A14+,1
1ece0: 0d5f b9c0 0004            CALLA  4B9C0h
1ed10: 0d5f 1ad0 0001            CALLA  11AD0h
1ed40: b7ee 0060                 MOVE   *SP(60h),A14,1
1ed60: 09af 3000                 MMFM   SP,A12,A13
1ed80: 0962                      RETS   2h

_move_stage_to_position:
1ed90: 098f 022c                 MMTM   SP,A6,A10,A12,A13
1edb0: 4dcd                      MOVE   A14,A13
1edc0: 0b0e 01c0                 ADDI   1C0h,A14
1ede0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
1ee00: 183e                      MOVK   1h,B14
1ee10: 07e8 d300 0004            MOVE   @4D300h,A8
1ee40: 0d88 0074                 DSJ    A8,1F5A0h
1ee60: d34e 0000                 MOVE   *A10(0h),*A14+,1
1ee80: d60e d140 0004            MOVE   @4D140h,*A14+,1
1eeb0: 0d5f 8b40 0004            CALLA  48B40h
1eee0: a7cc                      MOVE   -*A14,A12,1
1eef0: d60e d340 0004            MOVE   @4D340h,*A14+,1
1ef20: 938e                      MOVE   A12,*A14+,1
1ef30: 0d5f 9720 0004            CALLA  49720h
1ef60: a7cc                      MOVE   -*A14,A12,1
1ef70: 938e                      MOVE   A12,*A14+,1
1ef80: 0d5f 4980 0004            CALLA  44980h
1efb0: 4508                      SUB    A8,A8
1efc0: 09e6 0000 4040            MOVI   40400000h,A6
1eff0: 92ce                      MOVE   A6,*A14+,1
1f000: 930e                      MOVE   A8,*A14+,1
1f010: 0d5f 7fa0 0004            CALLA  47FA0h
1f040: 0d5f 4030 0004            CALLA  44030h
1f070: a7cc                      MOVE   -*A14,A12,1
1f080: 938e                      MOVE   A12,*A14+,1
1f090: 0d5f 4980 0004            CALLA  44980h
1f0c0: 4508                      SUB    A8,A8
1f0d0: 09e6 c000 405f            MOVI   405FC000h,A6
1f100: 92ce                      MOVE   A6,*A14+,1
1f110: 930e                      MOVE   A8,*A14+,1
1f120: 0d5f 6de0 0004            CALLA  46DE0h
1f150: ca16                      JREQ   1F2C0h
1f160: 938e                      MOVE   A12,*A14+,1
1f170: 0d5f 4980 0004            CALLA  44980h
1f1a0: 4508                      SUB    A8,A8
1f1b0: 09e6 c000 c05f            MOVI   C05FC000h,A6
1f1e0: 92ce                      MOVE   A6,*A14+,1
1f1f0: 930e                      MOVE   A8,*A14+,1
1f200: 0d5f 6e20 0004            CALLA  46E20h
1f230: ca08                      JREQ   1F2C0h
1f240: 938e                      MOVE   A12,*A14+,1
1f250: 0d5f 4c60 0004            CALLA  44C60h
1f280: 0568                      SETF   8h,1,0
1f290: 0508                      SEXT   A8,0
1f2a0: 8d0d                      MOVB   A8,*A13
1f2b0: c001                      JR     1F2D0h
1f2c0: 45de                      SUB    B14,B14
1f2d0: d34e 0000                 MOVE   *A10(0h),*A14+,1
1f2f0: d60e d640 0004            MOVE   @4D640h,*A14+,1
1f320: 0d5f 8b40 0004            CALLA  48B40h
1f350: a7cc                      MOVE   -*A14,A12,1
1f360: 938e                      MOVE   A12,*A14+,1
1f370: 0d5f 4980 0004            CALLA  44980h
1f3a0: 458c                      SUB    A12,A12
1f3b0: 09e6 0000 4040            MOVI   40400000h,A6
1f3e0: 92ce                      MOVE   A6,*A14+,1
1f3f0: 938e                      MOVE   A12,*A14+,1
1f400: 0d5f 7fa0 0004            CALLA  47FA0h
1f430: d60e d340 0004            MOVE   @4D340h,*A14+,1
1f460: 0d5f 4980 0004            CALLA  44980h
1f490: 0d5f 74f0 0004            CALLA  474F0h
1f4c0: 09e8 0000 4160            MOVI   41600000h,A8
1f4f0: 930e                      MOVE   A8,*A14+,1
1f500: 938e                      MOVE   A12,*A14+,1
1f510: 0d5f 5db0 0004            CALLA  45DB0h
1f540: 0d5f 4030 0004            CALLA  44030h
1f570: a7c8                      MOVE   -*A14,A8,1
1f580: b30d 0040                 MOVE   A8,*A13(40h),1
1f5a0: 07ec d308 0004            MOVE   @4D308h,A12
1f5d0: 0d8c 0075                 DSJ    A12,1FD40h
1f5f0: 343e                      CMPK   1h,B14
1f600: cb46                      JRNE   1FA70h
1f610: d34e 0020                 MOVE   *A10(20h),*A14+,1
1f630: d60e d160 0004            MOVE   @4D160h,*A14+,1
1f660: 0d5f 8b40 0004            CALLA  48B40h
1f690: a7cc                      MOVE   -*A14,A12,1
1f6a0: d60e d360 0004            MOVE   @4D360h,*A14+,1
1f6d0: 938e                      MOVE   A12,*A14+,1
1f6e0: 0d5f 9720 0004            CALLA  49720h
1f710: a7cc                      MOVE   -*A14,A12,1
1f720: 938e                      MOVE   A12,*A14+,1
1f730: 0d5f 4980 0004            CALLA  44980h
1f760: 44c6                      SUB    A6,A6
1f770: 09e8 0000 4040            MOVI   40400000h,A8
1f7a0: 930e                      MOVE   A8,*A14+,1
1f7b0: 92ce                      MOVE   A6,*A14+,1
1f7c0: 0d5f 7fa0 0004            CALLA  47FA0h
1f7f0: 0d5f 4030 0004            CALLA  44030h
1f820: a7cc                      MOVE   -*A14,A12,1
1f830: 938e                      MOVE   A12,*A14+,1
1f840: 0d5f 4980 0004            CALLA  44980h
1f870: 09e8 c000 405f            MOVI   405FC000h,A8
1f8a0: 930e                      MOVE   A8,*A14+,1
1f8b0: 92ce                      MOVE   A6,*A14+,1
1f8c0: 0d5f 6de0 0004            CALLA  46DE0h
1f8f0: ca16                      JREQ   1FA60h
1f900: 938e                      MOVE   A12,*A14+,1
1f910: 0d5f 4980 0004            CALLA  44980h
1f940: 09e8 c000 c05f            MOVI   C05FC000h,A8
1f970: 930e                      MOVE   A8,*A14+,1
1f980: 92ce                      MOVE   A6,*A14+,1
1f990: 0d5f 6e20 0004            CALLA  46E20h
1f9c0: ca09                      JREQ   1FA60h
1f9d0: 938e                      MOVE   A12,*A14+,1
1f9e0: 0d5f 4c60 0004            CALLA  44C60h
1fa10: 0568                      SETF   8h,1,0
1fa20: 0508                      SEXT   A8,0
1fa30: ad0d 0008                 MOVB   A8,*A13(8h)
1fa50: c001                      JR     1FA70h
1fa60: 45de                      SUB    B14,B14
1fa70: d34e 0020                 MOVE   *A10(20h),*A14+,1
1fa90: d60e d660 0004            MOVE   @4D660h,*A14+,1
1fac0: 0d5f 8b40 0004            CALLA  48B40h
1faf0: a7cc                      MOVE   -*A14,A12,1
1fb00: 938e                      MOVE   A12,*A14+,1
1fb10: 0d5f 4980 0004            CALLA  44980h
1fb40: 458c                      SUB    A12,A12
1fb50: 09e6 0000 4040            MOVI   40400000h,A6
1fb80: 92ce                      MOVE   A6,*A14+,1
1fb90: 938e                      MOVE   A12,*A14+,1
1fba0: 0d5f 7fa0 0004            CALLA  47FA0h
1fbd0: d60e d360 0004            MOVE   @4D360h,*A14+,1
1fc00: 0d5f 4980 0004            CALLA  44980h
1fc30: 0d5f 74f0 0004            CALLA  474F0h
1fc60: 09e8 0000 4160            MOVI   41600000h,A8
1fc90: 930e                      MOVE   A8,*A14+,1
1fca0: 938e                      MOVE   A12,*A14+,1
1fcb0: 0d5f 5db0 0004            CALLA  45DB0h
1fce0: 0d5f 4030 0004            CALLA  44030h
1fd10: a7c8                      MOVE   -*A14,A8,1
1fd20: b30d 0060                 MOVE   A8,*A13(60h),1
1fd40: 07ec d310 0004            MOVE   @4D310h,A12
1fd70: 0d8c 0075                 DSJ    A12,204E0h
1fd90: 343e                      CMPK   1h,B14
1fda0: cb46                      JRNE   20210h
1fdb0: d34e 0040                 MOVE   *A10(40h),*A14+,1
1fdd0: d60e d180 0004            MOVE   @4D180h,*A14+,1
1fe00: 0d5f 8b40 0004            CALLA  48B40h
1fe30: a7cc                      MOVE   -*A14,A12,1
1fe40: d60e d380 0004            MOVE   @4D380h,*A14+,1
1fe70: 938e                      MOVE   A12,*A14+,1
1fe80: 0d5f 9720 0004            CALLA  49720h
1feb0: a7cc                      MOVE   -*A14,A12,1
1fec0: 938e                      MOVE   A12,*A14+,1
1fed0: 0d5f 4980 0004            CALLA  44980h
1ff00: 44c6                      SUB    A6,A6
1ff10: 09e8 0000 4040            MOVI   40400000h,A8
1ff40: 930e                      MOVE   A8,*A14+,1
1ff50: 92ce                      MOVE   A6,*A14+,1
1ff60: 0d5f 7fa0 0004            CALLA  47FA0h
1ff90: 0d5f 4030 0004            CALLA  44030h
1ffc0: a7cc                      MOVE   -*A14,A12,1
1ffd0: 938e                      MOVE   A12,*A14+,1
1ffe0: 0d5f 4980 0004            CALLA  44980h
20010: 09e8 c000 405f            MOVI   405FC000h,A8
20040: 930e                      MOVE   A8,*A14+,1
20050: 92ce                      MOVE   A6,*A14+,1
20060: 0d5f 6de0 0004            CALLA  46DE0h
20090: ca16                      JREQ   20200h
200a0: 938e                      MOVE   A12,*A14+,1
200b0: 0d5f 4980 0004            CALLA  44980h
200e0: 09e8 c000 c05f            MOVI   C05FC000h,A8
20110: 930e                      MOVE   A8,*A14+,1
20120: 92ce                      MOVE   A6,*A14+,1
20130: 0d5f 6e20 0004            CALLA  46E20h
20160: ca09                      JREQ   20200h
20170: 938e                      MOVE   A12,*A14+,1
20180: 0d5f 4c60 0004            CALLA  44C60h
201b0: 0568                      SETF   8h,1,0
201c0: 0508                      SEXT   A8,0
201d0: ad0d 0010                 MOVB   A8,*A13(10h)
201f0: c001                      JR     20210h
20200: 45de                      SUB    B14,B14
20210: d34e 0040                 MOVE   *A10(40h),*A14+,1
20230: d60e d680 0004            MOVE   @4D680h,*A14+,1
20260: 0d5f 8b40 0004            CALLA  48B40h
20290: a7cc                      MOVE   -*A14,A12,1
202a0: 938e                      MOVE   A12,*A14+,1
202b0: 0d5f 4980 0004            CALLA  44980h
202e0: 458c                      SUB    A12,A12
202f0: 09e6 0000 4040            MOVI   40400000h,A6
20320: 92ce                      MOVE   A6,*A14+,1
20330: 938e                      MOVE   A12,*A14+,1
20340: 0d5f 7fa0 0004            CALLA  47FA0h
20370: d60e d380 0004            MOVE   @4D380h,*A14+,1
203a0: 0d5f 4980 0004            CALLA  44980h
203d0: 0d5f 74f0 0004            CALLA  474F0h
20400: 09e8 0000 4160            MOVI   41600000h,A8
20430: 930e                      MOVE   A8,*A14+,1
20440: 938e                      MOVE   A12,*A14+,1
20450: 0d5f 5db0 0004            CALLA  45DB0h
20480: 0d5f 4030 0004            CALLA  44030h
204b0: a7c8                      MOVE   -*A14,A8,1
204c0: b30d 0080                 MOVE   A8,*A13(80h),1
204e0: 07ec d318 0004            MOVE   @4D318h,A12
20510: 0d8c 0075                 DSJ    A12,20C80h
20530: 343e                      CMPK   1h,B14
20540: cb46                      JRNE   209B0h
20550: d34e 0060                 MOVE   *A10(60h),*A14+,1
20570: d60e d1a0 0004            MOVE   @4D1A0h,*A14+,1
205a0: 0d5f 8b40 0004            CALLA  48B40h
205d0: a7cc                      MOVE   -*A14,A12,1
205e0: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
20610: 938e                      MOVE   A12,*A14+,1
20620: 0d5f 9720 0004            CALLA  49720h
20650: a7cc                      MOVE   -*A14,A12,1
20660: 938e                      MOVE   A12,*A14+,1
20670: 0d5f 4980 0004            CALLA  44980h
206a0: 44c6                      SUB    A6,A6
206b0: 09e8 0000 4040            MOVI   40400000h,A8
206e0: 930e                      MOVE   A8,*A14+,1
206f0: 92ce                      MOVE   A6,*A14+,1
20700: 0d5f 7fa0 0004            CALLA  47FA0h
20730: 0d5f 4030 0004            CALLA  44030h
20760: a7cc                      MOVE   -*A14,A12,1
20770: 938e                      MOVE   A12,*A14+,1
20780: 0d5f 4980 0004            CALLA  44980h
207b0: 09e8 c000 405f            MOVI   405FC000h,A8
207e0: 930e                      MOVE   A8,*A14+,1
207f0: 92ce                      MOVE   A6,*A14+,1
20800: 0d5f 6de0 0004            CALLA  46DE0h
20830: ca16                      JREQ   209A0h
20840: 938e                      MOVE   A12,*A14+,1
20850: 0d5f 4980 0004            CALLA  44980h
20880: 09e8 c000 c05f            MOVI   C05FC000h,A8
208b0: 930e                      MOVE   A8,*A14+,1
208c0: 92ce                      MOVE   A6,*A14+,1
208d0: 0d5f 6e20 0004            CALLA  46E20h
20900: ca09                      JREQ   209A0h
20910: 938e                      MOVE   A12,*A14+,1
20920: 0d5f 4c60 0004            CALLA  44C60h
20950: 0568                      SETF   8h,1,0
20960: 0508                      SEXT   A8,0
20970: ad0d 0018                 MOVB   A8,*A13(18h)
20990: c001                      JR     209B0h
209a0: 45de                      SUB    B14,B14
209b0: d34e 0060                 MOVE   *A10(60h),*A14+,1
209d0: d60e d6a0 0004            MOVE   @4D6A0h,*A14+,1
20a00: 0d5f 8b40 0004            CALLA  48B40h
20a30: a7cc                      MOVE   -*A14,A12,1
20a40: 938e                      MOVE   A12,*A14+,1
20a50: 0d5f 4980 0004            CALLA  44980h
20a80: 458c                      SUB    A12,A12
20a90: 09e6 0000 4040            MOVI   40400000h,A6
20ac0: 92ce                      MOVE   A6,*A14+,1
20ad0: 938e                      MOVE   A12,*A14+,1
20ae0: 0d5f 7fa0 0004            CALLA  47FA0h
20b10: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
20b40: 0d5f 4980 0004            CALLA  44980h
20b70: 0d5f 74f0 0004            CALLA  474F0h
20ba0: 09e8 0000 4160            MOVI   41600000h,A8
20bd0: 930e                      MOVE   A8,*A14+,1
20be0: 938e                      MOVE   A12,*A14+,1
20bf0: 0d5f 5db0 0004            CALLA  45DB0h
20c20: 0d5f 4030 0004            CALLA  44030h
20c50: a7c8                      MOVE   -*A14,A8,1
20c60: b30d 00a0                 MOVE   A8,*A13(A0h),1
20c80: 07ec d320 0004            MOVE   @4D320h,A12
20cb0: 0d8c 0075                 DSJ    A12,21420h
20cd0: 343e                      CMPK   1h,B14
20ce0: cb46                      JRNE   21150h
20cf0: d34e 0080                 MOVE   *A10(80h),*A14+,1
20d10: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
20d40: 0d5f 8b40 0004            CALLA  48B40h
20d70: a7cc                      MOVE   -*A14,A12,1
20d80: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
20db0: 938e                      MOVE   A12,*A14+,1
20dc0: 0d5f 9720 0004            CALLA  49720h
20df0: a7cc                      MOVE   -*A14,A12,1
20e00: 938e                      MOVE   A12,*A14+,1
20e10: 0d5f 4980 0004            CALLA  44980h
20e40: 44c6                      SUB    A6,A6
20e50: 09e8 0000 4040            MOVI   40400000h,A8
20e80: 930e                      MOVE   A8,*A14+,1
20e90: 92ce                      MOVE   A6,*A14+,1
20ea0: 0d5f 7fa0 0004            CALLA  47FA0h
20ed0: 0d5f 4030 0004            CALLA  44030h
20f00: a7cc                      MOVE   -*A14,A12,1
20f10: 938e                      MOVE   A12,*A14+,1
20f20: 0d5f 4980 0004            CALLA  44980h
20f50: 09e8 c000 405f            MOVI   405FC000h,A8
20f80: 930e                      MOVE   A8,*A14+,1
20f90: 92ce                      MOVE   A6,*A14+,1
20fa0: 0d5f 6de0 0004            CALLA  46DE0h
20fd0: ca16                      JREQ   21140h
20fe0: 938e                      MOVE   A12,*A14+,1
20ff0: 0d5f 4980 0004            CALLA  44980h
21020: 09e8 c000 c05f            MOVI   C05FC000h,A8
21050: 930e                      MOVE   A8,*A14+,1
21060: 92ce                      MOVE   A6,*A14+,1
21070: 0d5f 6e20 0004            CALLA  46E20h
210a0: ca09                      JREQ   21140h
210b0: 938e                      MOVE   A12,*A14+,1
210c0: 0d5f 4c60 0004            CALLA  44C60h
210f0: 0568                      SETF   8h,1,0
21100: 0508                      SEXT   A8,0
21110: ad0d 0020                 MOVB   A8,*A13(20h)
21130: c001                      JR     21150h
21140: 45de                      SUB    B14,B14
21150: d34e 0080                 MOVE   *A10(80h),*A14+,1
21170: d60e d6c0 0004            MOVE   @4D6C0h,*A14+,1
211a0: 0d5f 8b40 0004            CALLA  48B40h
211d0: a7cc                      MOVE   -*A14,A12,1
211e0: 938e                      MOVE   A12,*A14+,1
211f0: 0d5f 4980 0004            CALLA  44980h
21220: 458c                      SUB    A12,A12
21230: 09e6 0000 4040            MOVI   40400000h,A6
21260: 92ce                      MOVE   A6,*A14+,1
21270: 938e                      MOVE   A12,*A14+,1
21280: 0d5f 7fa0 0004            CALLA  47FA0h
212b0: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
212e0: 0d5f 4980 0004            CALLA  44980h
21310: 0d5f 74f0 0004            CALLA  474F0h
21340: 09e8 0000 4160            MOVI   41600000h,A8
21370: 930e                      MOVE   A8,*A14+,1
21380: 938e                      MOVE   A12,*A14+,1
21390: 0d5f 5db0 0004            CALLA  45DB0h
213c0: 0d5f 4030 0004            CALLA  44030h
213f0: a7c8                      MOVE   -*A14,A8,1
21400: b30d 00c0                 MOVE   A8,*A13(C0h),1
21420: 07ec d328 0004            MOVE   @4D328h,A12
21450: 0d8c 0075                 DSJ    A12,21BC0h
21470: 343e                      CMPK   1h,B14
21480: cb46                      JRNE   218F0h
21490: d34e 00a0                 MOVE   *A10(A0h),*A14+,1
214b0: d60e d1e0 0004            MOVE   @4D1E0h,*A14+,1
214e0: 0d5f 8b40 0004            CALLA  48B40h
21510: a7cc                      MOVE   -*A14,A12,1
21520: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
21550: 938e                      MOVE   A12,*A14+,1
21560: 0d5f 9720 0004            CALLA  49720h
21590: a7cc                      MOVE   -*A14,A12,1
215a0: 938e                      MOVE   A12,*A14+,1
215b0: 0d5f 4980 0004            CALLA  44980h
215e0: 44c6                      SUB    A6,A6
215f0: 09e8 0000 4040            MOVI   40400000h,A8
21620: 930e                      MOVE   A8,*A14+,1
21630: 92ce                      MOVE   A6,*A14+,1
21640: 0d5f 7fa0 0004            CALLA  47FA0h
21670: 0d5f 4030 0004            CALLA  44030h
216a0: a7cc                      MOVE   -*A14,A12,1
216b0: 938e                      MOVE   A12,*A14+,1
216c0: 0d5f 4980 0004            CALLA  44980h
216f0: 09e8 c000 405f            MOVI   405FC000h,A8
21720: 930e                      MOVE   A8,*A14+,1
21730: 92ce                      MOVE   A6,*A14+,1
21740: 0d5f 6de0 0004            CALLA  46DE0h
21770: ca16                      JREQ   218E0h
21780: 938e                      MOVE   A12,*A14+,1
21790: 0d5f 4980 0004            CALLA  44980h
217c0: 09e8 c000 c05f            MOVI   C05FC000h,A8
217f0: 930e                      MOVE   A8,*A14+,1
21800: 92ce                      MOVE   A6,*A14+,1
21810: 0d5f 6e20 0004            CALLA  46E20h
21840: ca09                      JREQ   218E0h
21850: 938e                      MOVE   A12,*A14+,1
21860: 0d5f 4c60 0004            CALLA  44C60h
21890: 0568                      SETF   8h,1,0
218a0: 0508                      SEXT   A8,0
218b0: ad0d 0028                 MOVB   A8,*A13(28h)
218d0: c001                      JR     218F0h
218e0: 45de                      SUB    B14,B14
218f0: d34e 00a0                 MOVE   *A10(A0h),*A14+,1
21910: d60e d6e0 0004            MOVE   @4D6E0h,*A14+,1
21940: 0d5f 8b40 0004            CALLA  48B40h
21970: a7cc                      MOVE   -*A14,A12,1
21980: 938e                      MOVE   A12,*A14+,1
21990: 0d5f 4980 0004            CALLA  44980h
219c0: 458c                      SUB    A12,A12
219d0: 09e6 0000 4040            MOVI   40400000h,A6
21a00: 92ce                      MOVE   A6,*A14+,1
21a10: 938e                      MOVE   A12,*A14+,1
21a20: 0d5f 7fa0 0004            CALLA  47FA0h
21a50: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
21a80: 0d5f 4980 0004            CALLA  44980h
21ab0: 0d5f 74f0 0004            CALLA  474F0h
21ae0: 09e8 0000 4160            MOVI   41600000h,A8
21b10: 930e                      MOVE   A8,*A14+,1
21b20: 938e                      MOVE   A12,*A14+,1
21b30: 0d5f 5db0 0004            CALLA  45DB0h
21b60: 0d5f 4030 0004            CALLA  44030h
21b90: a7c8                      MOVE   -*A14,A8,1
21ba0: b30d 00e0                 MOVE   A8,*A13(E0h),1
21bc0: 143e                      DEC    B14
21bd0: ca0c                      JREQ   21CA0h
21be0: a3cf                      MOVE   A14,-*SP,1
21bf0: 4dac                      MOVE   A13,A12
21c00: 0b0c 0040                 ADDI   40h,A12
21c20: 938e                      MOVE   A12,*A14+,1
21c30: 0d5f 38f0 0002            CALLA  238F0h
21c60: 4d06                      MOVE   A8,A6
21c70: cb0a                      JRNE   21D20h
21c80: c000 00df                 JR     22A90h
21ca0: a3cf                      MOVE   A14,-*SP,1
21cb0: 93ae                      MOVE   A13,*A14+,1
21cc0: 0d5f 2af0 0002            CALLA  22AF0h
21cf0: 4d06                      MOVE   A8,A6
21d00: ca00 00d7                 JREQ   22A90h
21d20: 0d5f 4350 0001            CALLA  14350h
21d50: 4d06                      MOVE   A8,A6
21d60: ca00 00d1                 JREQ   22A90h
21d80: 0d5f 6e40 0000            CALLA  6E40h
21db0: 4d06                      MOVE   A8,A6
21dc0: ca00 00cb                 JREQ   22A90h
21de0: 183e                      MOVK   1h,B14
21df0: 07ec d300 0004            MOVE   @4D300h,A12
21e20: 38ac                      DSJS   A12,21E80h
21e30: 07ec d260 0004            MOVE   @4D260h,A12
21e60: 382c                      DSJS   A12,21E80h
21e70: 45de                      SUB    B14,B14
21e80: 07ec d308 0004            MOVE   @4D308h,A12
21eb0: 38ac                      DSJS   A12,21F10h
21ec0: 07ec d268 0004            MOVE   @4D268h,A12
21ef0: 382c                      DSJS   A12,21F10h
21f00: 45de                      SUB    B14,B14
21f10: 07ec d310 0004            MOVE   @4D310h,A12
21f40: 38ac                      DSJS   A12,21FA0h
21f50: 07ec d270 0004            MOVE   @4D270h,A12
21f80: 382c                      DSJS   A12,21FA0h
21f90: 45de                      SUB    B14,B14
21fa0: 07ec d318 0004            MOVE   @4D318h,A12
21fd0: 38ac                      DSJS   A12,22030h
21fe0: 07ec d278 0004            MOVE   @4D278h,A12
22010: 382c                      DSJS   A12,22030h
22020: 45de                      SUB    B14,B14
22030: 07ec d320 0004            MOVE   @4D320h,A12
22060: 38ac                      DSJS   A12,220C0h
22070: 07ec d280 0004            MOVE   @4D280h,A12
220a0: 382c                      DSJS   A12,220C0h
220b0: 45de                      SUB    B14,B14
220c0: 07ec d328 0004            MOVE   @4D328h,A12
220f0: 38ac                      DSJS   A12,22150h
22100: 07ec d288 0004            MOVE   @4D288h,A12
22130: 382c                      DSJS   A12,22150h
22140: 45de                      SUB    B14,B14
22150: 0d9e ffbb                 DSJ    B14,21D20h
22170: 07ec d320 0004            MOVE   @4D320h,A12
221a0: 0d8c 006e                 DSJ    A12,228A0h
221c0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
221f0: 09ec 0000 43b4            MOVI   43B40000h,A12
22220: 938e                      MOVE   A12,*A14+,1
22230: 0d5f a090 0004            CALLA  4A090h
22260: cb09                      JRNE   22300h
22270: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
222a0: 44c6                      SUB    A6,A6
222b0: 92ce                      MOVE   A6,*A14+,1
222c0: 0d5f a2b0 0004            CALLA  4A2B0h
222f0: ca5a                      JREQ   228A0h
22300: 07a6 d140 0004            MOVE   @4D140h,A6,1
22330: b2cd 0100                 MOVE   A6,*A13(100h),1
22350: 07a8 d160 0004            MOVE   @4D160h,A8,1
22380: b30d 0120                 MOVE   A8,*A13(120h),1
223a0: 07ac d180 0004            MOVE   @4D180h,A12,1
223d0: b38d 0140                 MOVE   A12,*A13(140h),1
223f0: 07a8 d1a0 0004            MOVE   @4D1A0h,A8,1
22420: b30d 0160                 MOVE   A8,*A13(160h),1
22440: 07a8 d1e0 0004            MOVE   @4D1E0h,A8,1
22470: b30d 01a0                 MOVE   A8,*A13(1A0h),1
22490: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
224c0: 09e8 0000 43b4            MOVI   43B40000h,A8
224f0: 930e                      MOVE   A8,*A14+,1
22500: 0d5f a1a0 0004            CALLA  4A1A0h
22530: ca17                      JREQ   226B0h
22540: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
22570: 4508                      SUB    A8,A8
22580: 930e                      MOVE   A8,*A14+,1
22590: 0d5f a2b0 0004            CALLA  4A2B0h
225c0: ca1b                      JREQ   22780h
225d0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
22600: 09e8 0000 43b4            MOVI   43B40000h,A8
22630: 930e                      MOVE   A8,*A14+,1
22640: 0d5f 8c60 0004            CALLA  48C60h
22670: a7c8                      MOVE   -*A14,A8,1
22680: b30d 0180                 MOVE   A8,*A13(180h),1
226a0: c00d                      JR     22780h
226b0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
226e0: 09e8 0000 43b4            MOVI   43B40000h,A8
22710: 930e                      MOVE   A8,*A14+,1
22720: 0d5f 8b40 0004            CALLA  48B40h
22750: a7c8                      MOVE   -*A14,A8,1
22760: b30d 0180                 MOVE   A8,*A13(180h),1
22780: bbaa 0180 0080            MOVE   *A13(180h),*A10(80h),1
227b0: b7aa 0180                 MOVE   *A13(180h),A10,1
227d0: 078a d1c0 0004            MOVE   A10,@4D1C0h,1
22800: a3cf                      MOVE   A14,-*SP,1
22810: 4da8                      MOVE   A13,A8
22820: 0b08 0100                 ADDI   100h,A8
22840: 930e                      MOVE   A8,*A14+,1
22850: 0d5f cfa0 0002            CALLA  2CFA0h
22880: 4d06                      MOVE   A8,A6
22890: ca1f                      JREQ   22A90h
228a0: 07ec dd00 0004            MOVE   @4DD00h,A12
228d0: cb19                      JRNE   22A70h
228e0: 07ea db40 0004            MOVE   @4DB40h,A10
22910: 142a                      DEC    A10
22920: ca0e                      JREQ   22A10h
22930: 07ea db60 0004            MOVE   @4DB60h,A10
22960: 142a                      DEC    A10
22970: ca09                      JREQ   22A10h
22980: 07ea db50 0004            MOVE   @4DB50h,A10
229b0: 142a                      DEC    A10
229c0: ca04                      JREQ   22A10h
229d0: 07ea d2b0 0004            MOVE   @4D2B0h,A10
22a00: ca02                      JREQ   22A30h
22a10: 4508                      SUB    A8,A8
22a20: c001                      JR     22A40h
22a30: 1828                      MOVK   1h,A8
22a40: 0568                      SETF   8h,1,0
22a50: 0508                      SEXT   A8,0
22a60: c003                      JR     22AA0h
22a70: 1828                      MOVK   1h,A8
22a80: c001                      JR     22AA0h
22a90: 4508                      SUB    A8,A8
22aa0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
22ac0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
22ae0: 0962                      RETS   2h

_move_a_short_distance:
22af0: 098f 000c                 MMTM   SP,A12,A13
22b10: 4dcd                      MOVE   A14,A13
22b20: 0b0e 0060                 ADDI   60h,A14
22b40: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
22b60: a3cf                      MOVE   A14,-*SP,1
22b70: 09e8 cbb0 0004            MOVI   4CBB0h,A8
22ba0: 930e                      MOVE   A8,*A14+,1
22bb0: 09e8 8a40 0005            MOVI   58A40h,A8
22be0: 930e                      MOVE   A8,*A14+,1
22bf0: 0d5f bc70 0004            CALLA  4BC70h
22c20: 07e8 d300 0004            MOVE   @4D300h,A8
22c50: 3b88                      DSJS   A8,22E20h
22c60: a3cf                      MOVE   A14,-*SP,1
22c70: 09e8 cba0 0004            MOVI   4CBA0h,A8
22ca0: 930e                      MOVE   A8,*A14+,1
22cb0: 09e8 8a40 0005            MOVI   58A40h,A8
22ce0: 930e                      MOVE   A8,*A14+,1
22cf0: 0d5f b9c0 0004            CALLA  4B9C0h
22d20: a3cf                      MOVE   A14,-*SP,1
22d30: 93ae                      MOVE   A13,*A14+,1
22d40: 8f88                      MOVB   *A12,A8
22d50: 930e                      MOVE   A8,*A14+,1
22d60: 0d5f b220 0004            CALLA  4B220h
22d90: a3cf                      MOVE   A14,-*SP,1
22da0: 93ae                      MOVE   A13,*A14+,1
22db0: 09e8 8a40 0005            MOVI   58A40h,A8
22de0: 930e                      MOVE   A8,*A14+,1
22df0: 0d5f b9c0 0004            CALLA  4B9C0h
22e20: 07e8 d308 0004            MOVE   @4D308h,A8
22e50: 3ba8                      DSJS   A8,23030h
22e60: a3cf                      MOVE   A14,-*SP,1
22e70: 09e8 cba0 0004            MOVI   4CBA0h,A8
22ea0: 930e                      MOVE   A8,*A14+,1
22eb0: 09e8 8a40 0005            MOVI   58A40h,A8
22ee0: 930e                      MOVE   A8,*A14+,1
22ef0: 0d5f b9c0 0004            CALLA  4B9C0h
22f20: a3cf                      MOVE   A14,-*SP,1
22f30: 93ae                      MOVE   A13,*A14+,1
22f40: af88 0008                 MOVB   *A12(8h),A8
22f60: 930e                      MOVE   A8,*A14+,1
22f70: 0d5f b220 0004            CALLA  4B220h
22fa0: a3cf                      MOVE   A14,-*SP,1
22fb0: 93ae                      MOVE   A13,*A14+,1
22fc0: 09e8 8a40 0005            MOVI   58A40h,A8
22ff0: 930e                      MOVE   A8,*A14+,1
23000: 0d5f b9c0 0004            CALLA  4B9C0h
23030: 07e8 d310 0004            MOVE   @4D310h,A8
23060: 3ba8                      DSJS   A8,23240h
23070: a3cf                      MOVE   A14,-*SP,1
23080: 09e8 cba0 0004            MOVI   4CBA0h,A8
230b0: 930e                      MOVE   A8,*A14+,1
230c0: 09e8 8a40 0005            MOVI   58A40h,A8
230f0: 930e                      MOVE   A8,*A14+,1
23100: 0d5f b9c0 0004            CALLA  4B9C0h
23130: a3cf                      MOVE   A14,-*SP,1
23140: 93ae                      MOVE   A13,*A14+,1
23150: af88 0010                 MOVB   *A12(10h),A8
23170: 930e                      MOVE   A8,*A14+,1
23180: 0d5f b220 0004            CALLA  4B220h
231b0: a3cf                      MOVE   A14,-*SP,1
231c0: 93ae                      MOVE   A13,*A14+,1
231d0: 09e8 8a40 0005            MOVI   58A40h,A8
23200: 930e                      MOVE   A8,*A14+,1
23210: 0d5f b9c0 0004            CALLA  4B9C0h
23240: 07e8 d318 0004            MOVE   @4D318h,A8
23270: 3ba8                      DSJS   A8,23450h
23280: a3cf                      MOVE   A14,-*SP,1
23290: 09e8 cba0 0004            MOVI   4CBA0h,A8
232c0: 930e                      MOVE   A8,*A14+,1
232d0: 09e8 8a40 0005            MOVI   58A40h,A8
23300: 930e                      MOVE   A8,*A14+,1
23310: 0d5f b9c0 0004            CALLA  4B9C0h
23340: a3cf                      MOVE   A14,-*SP,1
23350: 93ae                      MOVE   A13,*A14+,1
23360: af88 0018                 MOVB   *A12(18h),A8
23380: 930e                      MOVE   A8,*A14+,1
23390: 0d5f b220 0004            CALLA  4B220h
233c0: a3cf                      MOVE   A14,-*SP,1
233d0: 93ae                      MOVE   A13,*A14+,1
233e0: 09e8 8a40 0005            MOVI   58A40h,A8
23410: 930e                      MOVE   A8,*A14+,1
23420: 0d5f b9c0 0004            CALLA  4B9C0h
23450: 07e8 d320 0004            MOVE   @4D320h,A8
23480: 3ba8                      DSJS   A8,23660h
23490: a3cf                      MOVE   A14,-*SP,1
234a0: 09e8 cba0 0004            MOVI   4CBA0h,A8
234d0: 930e                      MOVE   A8,*A14+,1
234e0: 09e8 8a40 0005            MOVI   58A40h,A8
23510: 930e                      MOVE   A8,*A14+,1
23520: 0d5f b9c0 0004            CALLA  4B9C0h
23550: a3cf                      MOVE   A14,-*SP,1
23560: 93ae                      MOVE   A13,*A14+,1
23570: af88 0020                 MOVB   *A12(20h),A8
23590: 930e                      MOVE   A8,*A14+,1
235a0: 0d5f b220 0004            CALLA  4B220h
235d0: a3cf                      MOVE   A14,-*SP,1
235e0: 93ae                      MOVE   A13,*A14+,1
235f0: 09e8 8a40 0005            MOVI   58A40h,A8
23620: 930e                      MOVE   A8,*A14+,1
23630: 0d5f b9c0 0004            CALLA  4B9C0h
23660: 07e8 d328 0004            MOVE   @4D328h,A8
23690: 3ba8                      DSJS   A8,23870h
236a0: a3cf                      MOVE   A14,-*SP,1
236b0: 09e8 cba0 0004            MOVI   4CBA0h,A8
236e0: 930e                      MOVE   A8,*A14+,1
236f0: 09e8 8a40 0005            MOVI   58A40h,A8
23720: 930e                      MOVE   A8,*A14+,1
23730: 0d5f b9c0 0004            CALLA  4B9C0h
23760: a3cf                      MOVE   A14,-*SP,1
23770: 93ae                      MOVE   A13,*A14+,1
23780: af88 0028                 MOVB   *A12(28h),A8
237a0: 930e                      MOVE   A8,*A14+,1
237b0: 0d5f b220 0004            CALLA  4B220h
237e0: a3cf                      MOVE   A14,-*SP,1
237f0: 93ae                      MOVE   A13,*A14+,1
23800: 09e8 8a40 0005            MOVI   58A40h,A8
23830: 930e                      MOVE   A8,*A14+,1
23840: 0d5f b9c0 0004            CALLA  4B9C0h
23870: 0d5f 1ad0 0001            CALLA  11AD0h
238a0: b7ee 0060                 MOVE   *SP(60h),A14,1
238c0: 09af 3000                 MMFM   SP,A12,A13
238e0: 0962                      RETS   2h

_move_to_a_position:
238f0: 098f 000c                 MMTM   SP,A12,A13
23910: 4dcd                      MOVE   A14,A13
23920: 0b0e 0060                 ADDI   60h,A14
23940: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
23960: a3cf                      MOVE   A14,-*SP,1
23970: 09e8 cbd0 0004            MOVI   4CBD0h,A8
239a0: 930e                      MOVE   A8,*A14+,1
239b0: 09e8 8a40 0005            MOVI   58A40h,A8
239e0: 930e                      MOVE   A8,*A14+,1
239f0: 0d5f bc70 0004            CALLA  4BC70h
23a20: 07e8 d300 0004            MOVE   @4D300h,A8
23a50: 0d88 0020                 DSJ    A8,23C70h
23a70: a3cf                      MOVE   A14,-*SP,1
23a80: 09e8 cba0 0004            MOVI   4CBA0h,A8
23ab0: 930e                      MOVE   A8,*A14+,1
23ac0: 09e8 8a40 0005            MOVI   58A40h,A8
23af0: 930e                      MOVE   A8,*A14+,1
23b00: 0d5f b9c0 0004            CALLA  4B9C0h
23b30: a3cf                      MOVE   A14,-*SP,1
23b40: 93ae                      MOVE   A13,*A14+,1
23b50: d38e 0000                 MOVE   *A12(0h),*A14+,1
23b70: 0d5f 4c60 0004            CALLA  44C60h
23ba0: 930e                      MOVE   A8,*A14+,1
23bb0: 0d5f b220 0004            CALLA  4B220h
23be0: a3cf                      MOVE   A14,-*SP,1
23bf0: 93ae                      MOVE   A13,*A14+,1
23c00: 09e8 8a40 0005            MOVI   58A40h,A8
23c30: 930e                      MOVE   A8,*A14+,1
23c40: 0d5f b9c0 0004            CALLA  4B9C0h
23c70: 07e8 d308 0004            MOVE   @4D308h,A8
23ca0: 0d88 0020                 DSJ    A8,23EC0h
23cc0: a3cf                      MOVE   A14,-*SP,1
23cd0: 09e8 cba0 0004            MOVI   4CBA0h,A8
23d00: 930e                      MOVE   A8,*A14+,1
23d10: 09e8 8a40 0005            MOVI   58A40h,A8
23d40: 930e                      MOVE   A8,*A14+,1
23d50: 0d5f b9c0 0004            CALLA  4B9C0h
23d80: a3cf                      MOVE   A14,-*SP,1
23d90: 93ae                      MOVE   A13,*A14+,1
23da0: d38e 0020                 MOVE   *A12(20h),*A14+,1
23dc0: 0d5f 4c60 0004            CALLA  44C60h
23df0: 930e                      MOVE   A8,*A14+,1
23e00: 0d5f b220 0004            CALLA  4B220h
23e30: a3cf                      MOVE   A14,-*SP,1
23e40: 93ae                      MOVE   A13,*A14+,1
23e50: 09e8 8a40 0005            MOVI   58A40h,A8
23e80: 930e                      MOVE   A8,*A14+,1
23e90: 0d5f b9c0 0004            CALLA  4B9C0h
23ec0: 07e8 d310 0004            MOVE   @4D310h,A8
23ef0: 0d88 0020                 DSJ    A8,24110h
23f10: a3cf                      MOVE   A14,-*SP,1
23f20: 09e8 cba0 0004            MOVI   4CBA0h,A8
23f50: 930e                      MOVE   A8,*A14+,1
23f60: 09e8 8a40 0005            MOVI   58A40h,A8
23f90: 930e                      MOVE   A8,*A14+,1
23fa0: 0d5f b9c0 0004            CALLA  4B9C0h
23fd0: a3cf                      MOVE   A14,-*SP,1
23fe0: 93ae                      MOVE   A13,*A14+,1
23ff0: d38e 0040                 MOVE   *A12(40h),*A14+,1
24010: 0d5f 4c60 0004            CALLA  44C60h
24040: 930e                      MOVE   A8,*A14+,1
24050: 0d5f b220 0004            CALLA  4B220h
24080: a3cf                      MOVE   A14,-*SP,1
24090: 93ae                      MOVE   A13,*A14+,1
240a0: 09e8 8a40 0005            MOVI   58A40h,A8
240d0: 930e                      MOVE   A8,*A14+,1
240e0: 0d5f b9c0 0004            CALLA  4B9C0h
24110: 07e8 d318 0004            MOVE   @4D318h,A8
24140: 0d88 0020                 DSJ    A8,24360h
24160: a3cf                      MOVE   A14,-*SP,1
24170: 09e8 cba0 0004            MOVI   4CBA0h,A8
241a0: 930e                      MOVE   A8,*A14+,1
241b0: 09e8 8a40 0005            MOVI   58A40h,A8
241e0: 930e                      MOVE   A8,*A14+,1
241f0: 0d5f b9c0 0004            CALLA  4B9C0h
24220: a3cf                      MOVE   A14,-*SP,1
24230: 93ae                      MOVE   A13,*A14+,1
24240: d38e 0060                 MOVE   *A12(60h),*A14+,1
24260: 0d5f 4c60 0004            CALLA  44C60h
24290: 930e                      MOVE   A8,*A14+,1
242a0: 0d5f b220 0004            CALLA  4B220h
242d0: a3cf                      MOVE   A14,-*SP,1
242e0: 93ae                      MOVE   A13,*A14+,1
242f0: 09e8 8a40 0005            MOVI   58A40h,A8
24320: 930e                      MOVE   A8,*A14+,1
24330: 0d5f b9c0 0004            CALLA  4B9C0h
24360: 07e8 d320 0004            MOVE   @4D320h,A8
24390: 0d88 0020                 DSJ    A8,245B0h
243b0: a3cf                      MOVE   A14,-*SP,1
243c0: 09e8 cba0 0004            MOVI   4CBA0h,A8
243f0: 930e                      MOVE   A8,*A14+,1
24400: 09e8 8a40 0005            MOVI   58A40h,A8
24430: 930e                      MOVE   A8,*A14+,1
24440: 0d5f b9c0 0004            CALLA  4B9C0h
24470: a3cf                      MOVE   A14,-*SP,1
24480: 93ae                      MOVE   A13,*A14+,1
24490: d38e 0080                 MOVE   *A12(80h),*A14+,1
244b0: 0d5f 4c60 0004            CALLA  44C60h
244e0: 930e                      MOVE   A8,*A14+,1
244f0: 0d5f b220 0004            CALLA  4B220h
24520: a3cf                      MOVE   A14,-*SP,1
24530: 93ae                      MOVE   A13,*A14+,1
24540: 09e8 8a40 0005            MOVI   58A40h,A8
24570: 930e                      MOVE   A8,*A14+,1
24580: 0d5f b9c0 0004            CALLA  4B9C0h
245b0: 07e8 d328 0004            MOVE   @4D328h,A8
245e0: 0d88 0020                 DSJ    A8,24800h
24600: a3cf                      MOVE   A14,-*SP,1
24610: 09e8 cba0 0004            MOVI   4CBA0h,A8
24640: 930e                      MOVE   A8,*A14+,1
24650: 09e8 8a40 0005            MOVI   58A40h,A8
24680: 930e                      MOVE   A8,*A14+,1
24690: 0d5f b9c0 0004            CALLA  4B9C0h
246c0: a3cf                      MOVE   A14,-*SP,1
246d0: 93ae                      MOVE   A13,*A14+,1
246e0: d38e 00a0                 MOVE   *A12(A0h),*A14+,1
24700: 0d5f 4c60 0004            CALLA  44C60h
24730: 930e                      MOVE   A8,*A14+,1
24740: 0d5f b220 0004            CALLA  4B220h
24770: a3cf                      MOVE   A14,-*SP,1
24780: 93ae                      MOVE   A13,*A14+,1
24790: 09e8 8a40 0005            MOVI   58A40h,A8
247c0: 930e                      MOVE   A8,*A14+,1
247d0: 0d5f b9c0 0004            CALLA  4B9C0h
24800: 0d5f 1ad0 0001            CALLA  11AD0h
24830: b7ee 0060                 MOVE   *SP(60h),A14,1
24850: 09af 3000                 MMFM   SP,A12,A13
24870: 0962                      RETS   2h

_shortest_dist:
24880: 098f 022c                 MMTM   SP,A6,A10,A12,A13
248a0: 4dcd                      MOVE   A14,A13
248b0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
248d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
248f0: 938e                      MOVE   A12,*A14+,1
24900: 934e                      MOVE   A10,*A14+,1
24910: 0d5f a090 0004            CALLA  4A090h
24940: ca2a                      JREQ   24BF0h
24950: 934e                      MOVE   A10,*A14+,1
24960: 938e                      MOVE   A12,*A14+,1
24970: 0d5f 8b40 0004            CALLA  48B40h
249a0: 0d5f 4c60 0004            CALLA  44C60h
249d0: 0388                      ABS    A8
249e0: 0b48 ff4b                 CMPI   B4h,A8
24a00: c618                      JRLE   24B90h
24a10: 938e                      MOVE   A12,*A14+,1
24a20: 0d5f 4980 0004            CALLA  44980h
24a50: 4508                      SUB    A8,A8
24a60: 09e6 8000 4076            MOVI   40768000h,A6
24a90: 92ce                      MOVE   A6,*A14+,1
24aa0: 930e                      MOVE   A8,*A14+,1
24ab0: 0d5f 5ad0 0004            CALLA  45AD0h
24ae0: 934e                      MOVE   A10,*A14+,1
24af0: 0d5f 4980 0004            CALLA  44980h
24b20: 0d5f 5db0 0004            CALLA  45DB0h
24b50: 0d5f 4030 0004            CALLA  44030h
24b80: c02f                      JR     24E80h
24b90: 934e                      MOVE   A10,*A14+,1
24ba0: 938e                      MOVE   A12,*A14+,1
24bb0: 0d5f 8b40 0004            CALLA  48B40h
24be0: c029                      JR     24E80h
24bf0: 938e                      MOVE   A12,*A14+,1
24c00: 934e                      MOVE   A10,*A14+,1
24c10: 0d5f 8b40 0004            CALLA  48B40h
24c40: 0d5f 4c60 0004            CALLA  44C60h
24c70: 0388                      ABS    A8
24c80: 0b48 ff4b                 CMPI   B4h,A8
24ca0: c618                      JRLE   24E30h
24cb0: 934e                      MOVE   A10,*A14+,1
24cc0: 0d5f 4980 0004            CALLA  44980h
24cf0: 938e                      MOVE   A12,*A14+,1
24d00: 0d5f 4980 0004            CALLA  44980h
24d30: 0d5f 5c40 0004            CALLA  45C40h
24d60: 44c6                      SUB    A6,A6
24d70: 09e8 8000 4076            MOVI   40768000h,A8
24da0: 930e                      MOVE   A8,*A14+,1
24db0: 92ce                      MOVE   A6,*A14+,1
24dc0: 0d5f 5c40 0004            CALLA  45C40h
24df0: 0d5f 4030 0004            CALLA  44030h
24e20: c005                      JR     24E80h
24e30: 934e                      MOVE   A10,*A14+,1
24e40: 938e                      MOVE   A12,*A14+,1
24e50: 0d5f 8b40 0004            CALLA  48B40h
24e80: a7cc                      MOVE   -*A14,A12,1
24e90: 938e                      MOVE   A12,*A14+,1
24ea0: b7ed 00a0                 MOVE   *SP(A0h),A13,1
24ec0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
24ef0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
24f10: 09af 3440                 MMFM   SP,A6,A10,A12,A13
24f30: 0962                      RETS   2h

_pass_float:
24f40: 098f 022c                 MMTM   SP,A6,A10,A12,A13
24f60: 4dcd                      MOVE   A14,A13
24f70: 0b0e 0240                 ADDI   240h,A14
24f90: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
24fb0: 07ac cc20 0004            MOVE   @4CC20h,A12,1
24fe0: a3cf                      MOVE   A14,-*SP,1
24ff0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
25010: 93ae                      MOVE   A13,*A14+,1
25020: 0d5f bc70 0004            CALLA  4BC70h
25050: 934e                      MOVE   A10,*A14+,1
25060: 0d5f 4980 0004            CALLA  44980h
25090: 4508                      SUB    A8,A8
250a0: 930e                      MOVE   A8,*A14+,1
250b0: 930e                      MOVE   A8,*A14+,1
250c0: 0d5f 6e00 0004            CALLA  46E00h
250f0: ca0e                      JREQ   251E0h
25100: 934e                      MOVE   A10,*A14+,1
25110: 0d5f ab90 0004            CALLA  4AB90h
25140: a7ca                      MOVE   -*A14,A10,1
25150: a3cf                      MOVE   A14,-*SP,1
25160: 09e8 cbf0 0004            MOVI   4CBF0h,A8
25190: 930e                      MOVE   A8,*A14+,1
251a0: 93ae                      MOVE   A13,*A14+,1
251b0: 0d5f b9c0 0004            CALLA  4B9C0h
251e0: 934e                      MOVE   A10,*A14+,1
251f0: 0d5f 4c60 0004            CALLA  44C60h
25220: 4d06                      MOVE   A8,A6
25230: a3cf                      MOVE   A14,-*SP,1
25240: 4da8                      MOVE   A13,A8
25250: 0b08 01a0                 ADDI   1A0h,A8
25270: 930e                      MOVE   A8,*A14+,1
25280: 92ce                      MOVE   A6,*A14+,1
25290: 0d5f b220 0004            CALLA  4B220h
252c0: a3cf                      MOVE   A14,-*SP,1
252d0: 4da8                      MOVE   A13,A8
252e0: 0b08 01a0                 ADDI   1A0h,A8
25300: 930e                      MOVE   A8,*A14+,1
25310: 93ae                      MOVE   A13,*A14+,1
25320: 0d5f b9c0 0004            CALLA  4B9C0h
25350: a3cf                      MOVE   A14,-*SP,1
25360: 09e8 cc00 0004            MOVI   4CC00h,A8
25390: 930e                      MOVE   A8,*A14+,1
253a0: 93ae                      MOVE   A13,*A14+,1
253b0: 0d5f b9c0 0004            CALLA  4B9C0h
253e0: 4cc8                      MOVE   A6,A8
253f0: 0d5f 57c0 0004            CALLA  457C0h
25420: 934e                      MOVE   A10,*A14+,1
25430: 0d5f 8a20 0004            CALLA  48A20h
25460: a7ca                      MOVE   -*A14,A10,1
25470: 938e                      MOVE   A12,*A14+,1
25480: 934e                      MOVE   A10,*A14+,1
25490: 0d5f a3c0 0004            CALLA  4A3C0h
254c0: a7ca                      MOVE   -*A14,A10,1
254d0: 07ac cc40 0004            MOVE   @4CC40h,A12,1
25500: 934e                      MOVE   A10,*A14+,1
25510: 938e                      MOVE   A12,*A14+,1
25520: 0d5f 9820 0004            CALLA  49820h
25550: 0d5f 4c60 0004            CALLA  44C60h
25580: 4d06                      MOVE   A8,A6
25590: a3cf                      MOVE   A14,-*SP,1
255a0: 4da8                      MOVE   A13,A8
255b0: 0b08 01a0                 ADDI   1A0h,A8
255d0: 930e                      MOVE   A8,*A14+,1
255e0: 92ce                      MOVE   A6,*A14+,1
255f0: 0d5f b220 0004            CALLA  4B220h
25620: a3cf                      MOVE   A14,-*SP,1
25630: 4da8                      MOVE   A13,A8
25640: 0b08 01a0                 ADDI   1A0h,A8
25660: 930e                      MOVE   A8,*A14+,1
25670: 93ae                      MOVE   A13,*A14+,1
25680: 0d5f b9c0 0004            CALLA  4B9C0h
256b0: 4cc8                      MOVE   A6,A8
256c0: 0d5f 57c0 0004            CALLA  457C0h
256f0: 938e                      MOVE   A12,*A14+,1
25700: 0d5f a3c0 0004            CALLA  4A3C0h
25730: 934e                      MOVE   A10,*A14+,1
25740: 0d5f 8a20 0004            CALLA  48A20h
25770: a7ca                      MOVE   -*A14,A10,1
25780: 938e                      MOVE   A12,*A14+,1
25790: 0d5f 4980 0004            CALLA  44980h
257c0: 44c6                      SUB    A6,A6
257d0: 09e8 0000 4024            MOVI   40240000h,A8
25800: 930e                      MOVE   A8,*A14+,1
25810: 92ce                      MOVE   A6,*A14+,1
25820: 0d5f 74f0 0004            CALLA  474F0h
25850: 0d5f 4030 0004            CALLA  44030h
25880: a7cc                      MOVE   -*A14,A12,1
25890: 938e                      MOVE   A12,*A14+,1
258a0: 0d5f 4980 0004            CALLA  44980h
258d0: 09e8 cc60 0004            MOVI   4CC60h,A8
25900: 9b0e                      MOVE   *A8+,*A14+,1
25910: 9b0e                      MOVE   *A8+,*A14+,1
25920: 0d5f 6de0 0004            CALLA  46DE0h
25950: caba                      JREQ   25500h
25960: a3cf                      MOVE   A14,-*SP,1
25970: 92ce                      MOVE   A6,*A14+,1
25980: 93ae                      MOVE   A13,*A14+,1
25990: 0d5f 0000 0000            CALLA  0h
259c0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
259e0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
25a00: 0962                      RETS   2h

_backlash_required_tiga_request:
25a10: a3af                      MOVE   A13,-*SP,1
25a20: 4dcd                      MOVE   A14,A13
25a30: afa8 ffe0                 MOVB   *A13(FFE0h),A8
25a50: 05e8 db30 0004            MOVB   A8,@4DB30h
25a80: b7ee 0040                 MOVE   *SP(40h),A14,1
25aa0: 97ed                      MOVE   *SP+,A13,1
25ab0: 0962                      RETS   2h

_set_stage_config:
25ac0: 098f 000c                 MMTM   SP,A12,A13
25ae0: 4dcd                      MOVE   A14,A13
25af0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
25b10: a3cf                      MOVE   A14,-*SP,1
25b20: 09e8 cca0 0004            MOVI   4CCA0h,A8
25b50: 930e                      MOVE   A8,*A14+,1
25b60: 09e8 8a40 0005            MOVI   58A40h,A8
25b90: 930e                      MOVE   A8,*A14+,1
25ba0: 0d5f bc70 0004            CALLA  4BC70h
25bd0: 8f88                      MOVB   *A12,A8
25be0: 3988                      DSJS   A8,25CB0h
25bf0: a3cf                      MOVE   A14,-*SP,1
25c00: 09e8 ccc0 0004            MOVI   4CCC0h,A8
25c30: 930e                      MOVE   A8,*A14+,1
25c40: 09e8 8a40 0005            MOVI   58A40h,A8
25c70: 930e                      MOVE   A8,*A14+,1
25c80: 0d5f b9c0 0004            CALLA  4B9C0h
25cb0: af88 0008                 MOVB   *A12(8h),A8
25cd0: 3988                      DSJS   A8,25DA0h
25ce0: a3cf                      MOVE   A14,-*SP,1
25cf0: 09e8 cce8 0004            MOVI   4CCE8h,A8
25d20: 930e                      MOVE   A8,*A14+,1
25d30: 09e8 8a40 0005            MOVI   58A40h,A8
25d60: 930e                      MOVE   A8,*A14+,1
25d70: 0d5f b9c0 0004            CALLA  4B9C0h
25da0: af88 0010                 MOVB   *A12(10h),A8
25dc0: 3988                      DSJS   A8,25E90h
25dd0: a3cf                      MOVE   A14,-*SP,1
25de0: 09e8 cd10 0004            MOVI   4CD10h,A8
25e10: 930e                      MOVE   A8,*A14+,1
25e20: 09e8 8a40 0005            MOVI   58A40h,A8
25e50: 930e                      MOVE   A8,*A14+,1
25e60: 0d5f b9c0 0004            CALLA  4B9C0h
25e90: af88 0018                 MOVB   *A12(18h),A8
25eb0: 3988                      DSJS   A8,25F80h
25ec0: a3cf                      MOVE   A14,-*SP,1
25ed0: 09e8 cd38 0004            MOVI   4CD38h,A8
25f00: 930e                      MOVE   A8,*A14+,1
25f10: 09e8 8a40 0005            MOVI   58A40h,A8
25f40: 930e                      MOVE   A8,*A14+,1
25f50: 0d5f b9c0 0004            CALLA  4B9C0h
25f80: af88 0020                 MOVB   *A12(20h),A8
25fa0: 3988                      DSJS   A8,26070h
25fb0: a3cf                      MOVE   A14,-*SP,1
25fc0: 09e8 cd60 0004            MOVI   4CD60h,A8
25ff0: 930e                      MOVE   A8,*A14+,1
26000: 09e8 8a40 0005            MOVI   58A40h,A8
26030: 930e                      MOVE   A8,*A14+,1
26040: 0d5f b9c0 0004            CALLA  4B9C0h
26070: af88 0028                 MOVB   *A12(28h),A8
26090: 3988                      DSJS   A8,26160h
260a0: a3cf                      MOVE   A14,-*SP,1
260b0: 09e8 cd88 0004            MOVI   4CD88h,A8
260e0: 930e                      MOVE   A8,*A14+,1
260f0: 09e8 8a40 0005            MOVI   58A40h,A8
26120: 930e                      MOVE   A8,*A14+,1
26130: 0d5f b9c0 0004            CALLA  4B9C0h
26160: 0d5f 1ad0 0001            CALLA  11AD0h
26190: 1428                      DEC    A8
261a0: ca02                      JREQ   261D0h
261b0: 4508                      SUB    A8,A8
261c0: c01e                      JR     263B0h
261d0: 8f88                      MOVB   *A12,A8
261e0: 05e8 d300 0004            MOVB   A8,@4D300h
26210: af88 0008                 MOVB   *A12(8h),A8
26230: 05e8 d308 0004            MOVB   A8,@4D308h
26260: af88 0010                 MOVB   *A12(10h),A8
26280: 05e8 d310 0004            MOVB   A8,@4D310h
262b0: af88 0018                 MOVB   *A12(18h),A8
262d0: 05e8 d318 0004            MOVB   A8,@4D318h
26300: af88 0020                 MOVB   *A12(20h),A8
26320: 05e8 d320 0004            MOVB   A8,@4D320h
26350: af8c 0028                 MOVB   *A12(28h),A12
26370: 05ec d328 0004            MOVB   A12,@4D328h
263a0: 1828                      MOVK   1h,A8
263b0: b7ee 0060                 MOVE   *SP(60h),A14,1
263d0: 09af 3000                 MMFM   SP,A12,A13
263f0: 0962                      RETS   2h

_set_ramp_rate:
26400: 098f 000c                 MMTM   SP,A12,A13
26420: 4dcd                      MOVE   A14,A13
26430: 0b0e 0060                 ADDI   60h,A14
26450: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
26470: a3cf                      MOVE   A14,-*SP,1
26480: 09e8 cdb0 0004            MOVI   4CDB0h,A8
264b0: 930e                      MOVE   A8,*A14+,1
264c0: 09e8 8a40 0005            MOVI   58A40h,A8
264f0: 930e                      MOVE   A8,*A14+,1
26500: 0d5f bc70 0004            CALLA  4BC70h
26530: 07e8 d300 0004            MOVE   @4D300h,A8
26560: 0d88 005b                 DSJ    A8,26B30h
26580: a3cf                      MOVE   A14,-*SP,1
26590: 09e8 cdd0 0004            MOVI   4CDD0h,A8
265c0: 930e                      MOVE   A8,*A14+,1
265d0: 09e8 8a40 0005            MOVI   58A40h,A8
26600: 930e                      MOVE   A8,*A14+,1
26610: 0d5f b9c0 0004            CALLA  4B9C0h
26640: a3cf                      MOVE   A14,-*SP,1
26650: 93ae                      MOVE   A13,*A14+,1
26660: 0570                      SETF   10h,1,0
26670: 8588                      MOVE   *A12,A8,0
26680: 930e                      MOVE   A8,*A14+,1
26690: 0d5f b220 0004            CALLA  4B220h
266c0: a3cf                      MOVE   A14,-*SP,1
266d0: 93ae                      MOVE   A13,*A14+,1
266e0: 09e8 8a40 0005            MOVI   58A40h,A8
26710: 930e                      MOVE   A8,*A14+,1
26720: 0d5f b9c0 0004            CALLA  4B9C0h
26750: a3cf                      MOVE   A14,-*SP,1
26760: 09e8 cdd0 0004            MOVI   4CDD0h,A8
26790: 930e                      MOVE   A8,*A14+,1
267a0: 09e8 8a40 0005            MOVI   58A40h,A8
267d0: 930e                      MOVE   A8,*A14+,1
267e0: 0d5f b9c0 0004            CALLA  4B9C0h
26810: a3cf                      MOVE   A14,-*SP,1
26820: 93ae                      MOVE   A13,*A14+,1
26830: 0570                      SETF   10h,1,0
26840: b588 0060                 MOVE   *A12(60h),A8,0
26860: 930e                      MOVE   A8,*A14+,1
26870: 0d5f b220 0004            CALLA  4B220h
268a0: a3cf                      MOVE   A14,-*SP,1
268b0: 93ae                      MOVE   A13,*A14+,1
268c0: 09e8 8a40 0005            MOVI   58A40h,A8
268f0: 930e                      MOVE   A8,*A14+,1
26900: 0d5f b9c0 0004            CALLA  4B9C0h
26930: a3cf                      MOVE   A14,-*SP,1
26940: 09e8 cdd0 0004            MOVI   4CDD0h,A8
26970: 930e                      MOVE   A8,*A14+,1
26980: 09e8 8a40 0005            MOVI   58A40h,A8
269b0: 930e                      MOVE   A8,*A14+,1
269c0: 0d5f b9c0 0004            CALLA  4B9C0h
269f0: a3cf                      MOVE   A14,-*SP,1
26a00: 93ae                      MOVE   A13,*A14+,1
26a10: d38e 00c0                 MOVE   *A12(C0h),*A14+,1
26a30: 0d5f 4c60 0004            CALLA  44C60h
26a60: 930e                      MOVE   A8,*A14+,1
26a70: 0d5f b220 0004            CALLA  4B220h
26aa0: a3cf                      MOVE   A14,-*SP,1
26ab0: 93ae                      MOVE   A13,*A14+,1
26ac0: 09e8 8a40 0005            MOVI   58A40h,A8
26af0: 930e                      MOVE   A8,*A14+,1
26b00: 0d5f b9c0 0004            CALLA  4B9C0h
26b30: 07e8 d308 0004            MOVE   @4D308h,A8
26b60: 0d88 005c                 DSJ    A8,27140h
26b80: a3cf                      MOVE   A14,-*SP,1
26b90: 09e8 cdd0 0004            MOVI   4CDD0h,A8
26bc0: 930e                      MOVE   A8,*A14+,1
26bd0: 09e8 8a40 0005            MOVI   58A40h,A8
26c00: 930e                      MOVE   A8,*A14+,1
26c10: 0d5f b9c0 0004            CALLA  4B9C0h
26c40: a3cf                      MOVE   A14,-*SP,1
26c50: 93ae                      MOVE   A13,*A14+,1
26c60: 0570                      SETF   10h,1,0
26c70: b588 0010                 MOVE   *A12(10h),A8,0
26c90: 930e                      MOVE   A8,*A14+,1
26ca0: 0d5f b220 0004            CALLA  4B220h
26cd0: a3cf                      MOVE   A14,-*SP,1
26ce0: 93ae                      MOVE   A13,*A14+,1
26cf0: 09e8 8a40 0005            MOVI   58A40h,A8
26d20: 930e                      MOVE   A8,*A14+,1
26d30: 0d5f b9c0 0004            CALLA  4B9C0h
26d60: a3cf                      MOVE   A14,-*SP,1
26d70: 09e8 cdd0 0004            MOVI   4CDD0h,A8
26da0: 930e                      MOVE   A8,*A14+,1
26db0: 09e8 8a40 0005            MOVI   58A40h,A8
26de0: 930e                      MOVE   A8,*A14+,1
26df0: 0d5f b9c0 0004            CALLA  4B9C0h
26e20: a3cf                      MOVE   A14,-*SP,1
26e30: 93ae                      MOVE   A13,*A14+,1
26e40: 0570                      SETF   10h,1,0
26e50: b588 0070                 MOVE   *A12(70h),A8,0
26e70: 930e                      MOVE   A8,*A14+,1
26e80: 0d5f b220 0004            CALLA  4B220h
26eb0: a3cf                      MOVE   A14,-*SP,1
26ec0: 93ae                      MOVE   A13,*A14+,1
26ed0: 09e8 8a40 0005            MOVI   58A40h,A8
26f00: 930e                      MOVE   A8,*A14+,1
26f10: 0d5f b9c0 0004            CALLA  4B9C0h
26f40: a3cf                      MOVE   A14,-*SP,1
26f50: 09e8 cdd0 0004            MOVI   4CDD0h,A8
26f80: 930e                      MOVE   A8,*A14+,1
26f90: 09e8 8a40 0005            MOVI   58A40h,A8
26fc0: 930e                      MOVE   A8,*A14+,1
26fd0: 0d5f b9c0 0004            CALLA  4B9C0h
27000: a3cf                      MOVE   A14,-*SP,1
27010: 93ae                      MOVE   A13,*A14+,1
27020: d38e 00e0                 MOVE   *A12(E0h),*A14+,1
27040: 0d5f 4c60 0004            CALLA  44C60h
27070: 930e                      MOVE   A8,*A14+,1
27080: 0d5f b220 0004            CALLA  4B220h
270b0: a3cf                      MOVE   A14,-*SP,1
270c0: 93ae                      MOVE   A13,*A14+,1
270d0: 09e8 8a40 0005            MOVI   58A40h,A8
27100: 930e                      MOVE   A8,*A14+,1
27110: 0d5f b9c0 0004            CALLA  4B9C0h
27140: 07e8 d310 0004            MOVE   @4D310h,A8
27170: 0d88 005c                 DSJ    A8,27750h
27190: a3cf                      MOVE   A14,-*SP,1
271a0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
271d0: 930e                      MOVE   A8,*A14+,1
271e0: 09e8 8a40 0005            MOVI   58A40h,A8
27210: 930e                      MOVE   A8,*A14+,1
27220: 0d5f b9c0 0004            CALLA  4B9C0h
27250: a3cf                      MOVE   A14,-*SP,1
27260: 93ae                      MOVE   A13,*A14+,1
27270: 0570                      SETF   10h,1,0
27280: b588 0020                 MOVE   *A12(20h),A8,0
272a0: 930e                      MOVE   A8,*A14+,1
272b0: 0d5f b220 0004            CALLA  4B220h
272e0: a3cf                      MOVE   A14,-*SP,1
272f0: 93ae                      MOVE   A13,*A14+,1
27300: 09e8 8a40 0005            MOVI   58A40h,A8
27330: 930e                      MOVE   A8,*A14+,1
27340: 0d5f b9c0 0004            CALLA  4B9C0h
27370: a3cf                      MOVE   A14,-*SP,1
27380: 09e8 cdd0 0004            MOVI   4CDD0h,A8
273b0: 930e                      MOVE   A8,*A14+,1
273c0: 09e8 8a40 0005            MOVI   58A40h,A8
273f0: 930e                      MOVE   A8,*A14+,1
27400: 0d5f b9c0 0004            CALLA  4B9C0h
27430: a3cf                      MOVE   A14,-*SP,1
27440: 93ae                      MOVE   A13,*A14+,1
27450: 0570                      SETF   10h,1,0
27460: b588 0080                 MOVE   *A12(80h),A8,0
27480: 930e                      MOVE   A8,*A14+,1
27490: 0d5f b220 0004            CALLA  4B220h
274c0: a3cf                      MOVE   A14,-*SP,1
274d0: 93ae                      MOVE   A13,*A14+,1
274e0: 09e8 8a40 0005            MOVI   58A40h,A8
27510: 930e                      MOVE   A8,*A14+,1
27520: 0d5f b9c0 0004            CALLA  4B9C0h
27550: a3cf                      MOVE   A14,-*SP,1
27560: 09e8 cdd0 0004            MOVI   4CDD0h,A8
27590: 930e                      MOVE   A8,*A14+,1
275a0: 09e8 8a40 0005            MOVI   58A40h,A8
275d0: 930e                      MOVE   A8,*A14+,1
275e0: 0d5f b9c0 0004            CALLA  4B9C0h
27610: a3cf                      MOVE   A14,-*SP,1
27620: 93ae                      MOVE   A13,*A14+,1
27630: d38e 0100                 MOVE   *A12(100h),*A14+,1
27650: 0d5f 4c60 0004            CALLA  44C60h
27680: 930e                      MOVE   A8,*A14+,1
27690: 0d5f b220 0004            CALLA  4B220h
276c0: a3cf                      MOVE   A14,-*SP,1
276d0: 93ae                      MOVE   A13,*A14+,1
276e0: 09e8 8a40 0005            MOVI   58A40h,A8
27710: 930e                      MOVE   A8,*A14+,1
27720: 0d5f b9c0 0004            CALLA  4B9C0h
27750: 07e8 d318 0004            MOVE   @4D318h,A8
27780: 0d88 005c                 DSJ    A8,27D60h
277a0: a3cf                      MOVE   A14,-*SP,1
277b0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
277e0: 930e                      MOVE   A8,*A14+,1
277f0: 09e8 8a40 0005            MOVI   58A40h,A8
27820: 930e                      MOVE   A8,*A14+,1
27830: 0d5f b9c0 0004            CALLA  4B9C0h
27860: a3cf                      MOVE   A14,-*SP,1
27870: 93ae                      MOVE   A13,*A14+,1
27880: 0570                      SETF   10h,1,0
27890: b588 0030                 MOVE   *A12(30h),A8,0
278b0: 930e                      MOVE   A8,*A14+,1
278c0: 0d5f b220 0004            CALLA  4B220h
278f0: a3cf                      MOVE   A14,-*SP,1
27900: 93ae                      MOVE   A13,*A14+,1
27910: 09e8 8a40 0005            MOVI   58A40h,A8
27940: 930e                      MOVE   A8,*A14+,1
27950: 0d5f b9c0 0004            CALLA  4B9C0h
27980: a3cf                      MOVE   A14,-*SP,1
27990: 09e8 cdd0 0004            MOVI   4CDD0h,A8
279c0: 930e                      MOVE   A8,*A14+,1
279d0: 09e8 8a40 0005            MOVI   58A40h,A8
27a00: 930e                      MOVE   A8,*A14+,1
27a10: 0d5f b9c0 0004            CALLA  4B9C0h
27a40: a3cf                      MOVE   A14,-*SP,1
27a50: 93ae                      MOVE   A13,*A14+,1
27a60: 0570                      SETF   10h,1,0
27a70: b588 0090                 MOVE   *A12(90h),A8,0
27a90: 930e                      MOVE   A8,*A14+,1
27aa0: 0d5f b220 0004            CALLA  4B220h
27ad0: a3cf                      MOVE   A14,-*SP,1
27ae0: 93ae                      MOVE   A13,*A14+,1
27af0: 09e8 8a40 0005            MOVI   58A40h,A8
27b20: 930e                      MOVE   A8,*A14+,1
27b30: 0d5f b9c0 0004            CALLA  4B9C0h
27b60: a3cf                      MOVE   A14,-*SP,1
27b70: 09e8 cdd0 0004            MOVI   4CDD0h,A8
27ba0: 930e                      MOVE   A8,*A14+,1
27bb0: 09e8 8a40 0005            MOVI   58A40h,A8
27be0: 930e                      MOVE   A8,*A14+,1
27bf0: 0d5f b9c0 0004            CALLA  4B9C0h
27c20: a3cf                      MOVE   A14,-*SP,1
27c30: 93ae                      MOVE   A13,*A14+,1
27c40: d38e 0120                 MOVE   *A12(120h),*A14+,1
27c60: 0d5f 4c60 0004            CALLA  44C60h
27c90: 930e                      MOVE   A8,*A14+,1
27ca0: 0d5f b220 0004            CALLA  4B220h
27cd0: a3cf                      MOVE   A14,-*SP,1
27ce0: 93ae                      MOVE   A13,*A14+,1
27cf0: 09e8 8a40 0005            MOVI   58A40h,A8
27d20: 930e                      MOVE   A8,*A14+,1
27d30: 0d5f b9c0 0004            CALLA  4B9C0h
27d60: 07e8 d320 0004            MOVE   @4D320h,A8
27d90: 0d88 005c                 DSJ    A8,28370h
27db0: a3cf                      MOVE   A14,-*SP,1
27dc0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
27df0: 930e                      MOVE   A8,*A14+,1
27e00: 09e8 8a40 0005            MOVI   58A40h,A8
27e30: 930e                      MOVE   A8,*A14+,1
27e40: 0d5f b9c0 0004            CALLA  4B9C0h
27e70: a3cf                      MOVE   A14,-*SP,1
27e80: 93ae                      MOVE   A13,*A14+,1
27e90: 0570                      SETF   10h,1,0
27ea0: b588 0040                 MOVE   *A12(40h),A8,0
27ec0: 930e                      MOVE   A8,*A14+,1
27ed0: 0d5f b220 0004            CALLA  4B220h
27f00: a3cf                      MOVE   A14,-*SP,1
27f10: 93ae                      MOVE   A13,*A14+,1
27f20: 09e8 8a40 0005            MOVI   58A40h,A8
27f50: 930e                      MOVE   A8,*A14+,1
27f60: 0d5f b9c0 0004            CALLA  4B9C0h
27f90: a3cf                      MOVE   A14,-*SP,1
27fa0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
27fd0: 930e                      MOVE   A8,*A14+,1
27fe0: 09e8 8a40 0005            MOVI   58A40h,A8
28010: 930e                      MOVE   A8,*A14+,1
28020: 0d5f b9c0 0004            CALLA  4B9C0h
28050: a3cf                      MOVE   A14,-*SP,1
28060: 93ae                      MOVE   A13,*A14+,1
28070: 0570                      SETF   10h,1,0
28080: b588 00a0                 MOVE   *A12(A0h),A8,0
280a0: 930e                      MOVE   A8,*A14+,1
280b0: 0d5f b220 0004            CALLA  4B220h
280e0: a3cf                      MOVE   A14,-*SP,1
280f0: 93ae                      MOVE   A13,*A14+,1
28100: 09e8 8a40 0005            MOVI   58A40h,A8
28130: 930e                      MOVE   A8,*A14+,1
28140: 0d5f b9c0 0004            CALLA  4B9C0h
28170: a3cf                      MOVE   A14,-*SP,1
28180: 09e8 cdd0 0004            MOVI   4CDD0h,A8
281b0: 930e                      MOVE   A8,*A14+,1
281c0: 09e8 8a40 0005            MOVI   58A40h,A8
281f0: 930e                      MOVE   A8,*A14+,1
28200: 0d5f b9c0 0004            CALLA  4B9C0h
28230: a3cf                      MOVE   A14,-*SP,1
28240: 93ae                      MOVE   A13,*A14+,1
28250: d38e 0140                 MOVE   *A12(140h),*A14+,1
28270: 0d5f 4c60 0004            CALLA  44C60h
282a0: 930e                      MOVE   A8,*A14+,1
282b0: 0d5f b220 0004            CALLA  4B220h
282e0: a3cf                      MOVE   A14,-*SP,1
282f0: 93ae                      MOVE   A13,*A14+,1
28300: 09e8 8a40 0005            MOVI   58A40h,A8
28330: 930e                      MOVE   A8,*A14+,1
28340: 0d5f b9c0 0004            CALLA  4B9C0h
28370: 07e8 d328 0004            MOVE   @4D328h,A8
283a0: 0d88 005c                 DSJ    A8,28980h
283c0: a3cf                      MOVE   A14,-*SP,1
283d0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
28400: 930e                      MOVE   A8,*A14+,1
28410: 09e8 8a40 0005            MOVI   58A40h,A8
28440: 930e                      MOVE   A8,*A14+,1
28450: 0d5f b9c0 0004            CALLA  4B9C0h
28480: a3cf                      MOVE   A14,-*SP,1
28490: 93ae                      MOVE   A13,*A14+,1
284a0: 0570                      SETF   10h,1,0
284b0: b588 0050                 MOVE   *A12(50h),A8,0
284d0: 930e                      MOVE   A8,*A14+,1
284e0: 0d5f b220 0004            CALLA  4B220h
28510: a3cf                      MOVE   A14,-*SP,1
28520: 93ae                      MOVE   A13,*A14+,1
28530: 09e8 8a40 0005            MOVI   58A40h,A8
28560: 930e                      MOVE   A8,*A14+,1
28570: 0d5f b9c0 0004            CALLA  4B9C0h
285a0: a3cf                      MOVE   A14,-*SP,1
285b0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
285e0: 930e                      MOVE   A8,*A14+,1
285f0: 09e8 8a40 0005            MOVI   58A40h,A8
28620: 930e                      MOVE   A8,*A14+,1
28630: 0d5f b9c0 0004            CALLA  4B9C0h
28660: a3cf                      MOVE   A14,-*SP,1
28670: 93ae                      MOVE   A13,*A14+,1
28680: 0570                      SETF   10h,1,0
28690: b588 00b0                 MOVE   *A12(B0h),A8,0
286b0: 930e                      MOVE   A8,*A14+,1
286c0: 0d5f b220 0004            CALLA  4B220h
286f0: a3cf                      MOVE   A14,-*SP,1
28700: 93ae                      MOVE   A13,*A14+,1
28710: 09e8 8a40 0005            MOVI   58A40h,A8
28740: 930e                      MOVE   A8,*A14+,1
28750: 0d5f b9c0 0004            CALLA  4B9C0h
28780: a3cf                      MOVE   A14,-*SP,1
28790: 09e8 cdd0 0004            MOVI   4CDD0h,A8
287c0: 930e                      MOVE   A8,*A14+,1
287d0: 09e8 8a40 0005            MOVI   58A40h,A8
28800: 930e                      MOVE   A8,*A14+,1
28810: 0d5f b9c0 0004            CALLA  4B9C0h
28840: a3cf                      MOVE   A14,-*SP,1
28850: 93ae                      MOVE   A13,*A14+,1
28860: d38e 0160                 MOVE   *A12(160h),*A14+,1
28880: 0d5f 4c60 0004            CALLA  44C60h
288b0: 930e                      MOVE   A8,*A14+,1
288c0: 0d5f b220 0004            CALLA  4B220h
288f0: a3cf                      MOVE   A14,-*SP,1
28900: 93ae                      MOVE   A13,*A14+,1
28910: 09e8 8a40 0005            MOVI   58A40h,A8
28940: 930e                      MOVE   A8,*A14+,1
28950: 0d5f b9c0 0004            CALLA  4B9C0h
28980: 0d5f 1ad0 0001            CALLA  11AD0h
289b0: 1428                      DEC    A8
289c0: ca02                      JREQ   289F0h
289d0: 4508                      SUB    A8,A8
289e0: c05b                      JR     28FA0h
289f0: 0570                      SETF   10h,1,0
28a00: 8588                      MOVE   *A12,A8,0
28a10: 0588 da60 0004            MOVE   A8,@4DA60h,0
28a40: b588 0010                 MOVE   *A12(10h),A8,0
28a60: 0588 da70 0004            MOVE   A8,@4DA70h,0
28a90: b588 0020                 MOVE   *A12(20h),A8,0
28ab0: 0588 da80 0004            MOVE   A8,@4DA80h,0
28ae0: b588 0030                 MOVE   *A12(30h),A8,0
28b00: 0588 da90 0004            MOVE   A8,@4DA90h,0
28b30: b588 0040                 MOVE   *A12(40h),A8,0
28b50: 0588 daa0 0004            MOVE   A8,@4DAA0h,0
28b80: b588 0050                 MOVE   *A12(50h),A8,0
28ba0: 0588 dab0 0004            MOVE   A8,@4DAB0h,0
28bd0: b588 0060                 MOVE   *A12(60h),A8,0
28bf0: 0588 dac0 0004            MOVE   A8,@4DAC0h,0
28c20: b588 0070                 MOVE   *A12(70h),A8,0
28c40: 0588 dad0 0004            MOVE   A8,@4DAD0h,0
28c70: b588 0080                 MOVE   *A12(80h),A8,0
28c90: 0588 dae0 0004            MOVE   A8,@4DAE0h,0
28cc0: b588 0090                 MOVE   *A12(90h),A8,0
28ce0: 0588 daf0 0004            MOVE   A8,@4DAF0h,0
28d10: b588 00a0                 MOVE   *A12(A0h),A8,0
28d30: 0588 db00 0004            MOVE   A8,@4DB00h,0
28d60: b588 00b0                 MOVE   *A12(B0h),A8,0
28d80: 0588 db10 0004            MOVE   A8,@4DB10h,0
28db0: b788 00c0                 MOVE   *A12(C0h),A8,1
28dd0: 0788 d400 0004            MOVE   A8,@4D400h,1
28e00: b788 00e0                 MOVE   *A12(E0h),A8,1
28e20: 0788 d420 0004            MOVE   A8,@4D420h,1
28e50: b788 0100                 MOVE   *A12(100h),A8,1
28e70: 0788 d440 0004            MOVE   A8,@4D440h,1
28ea0: b788 0120                 MOVE   *A12(120h),A8,1
28ec0: 0788 d460 0004            MOVE   A8,@4D460h,1
28ef0: b788 0140                 MOVE   *A12(140h),A8,1
28f10: 0788 d480 0004            MOVE   A8,@4D480h,1
28f40: b78c 0160                 MOVE   *A12(160h),A12,1
28f60: 078c d4a0 0004            MOVE   A12,@4D4A0h,1
28f90: 1828                      MOVK   1h,A8
28fa0: b7ee 0060                 MOVE   *SP(60h),A14,1
28fc0: 09af 3000                 MMFM   SP,A12,A13
28fe0: 0962                      RETS   2h

_set_move_mode_tiga_request:
28ff0: a3af                      MOVE   A13,-*SP,1
29000: 4dcd                      MOVE   A14,A13
29010: afa8 ffe0                 MOVB   *A13(FFE0h),A8
29030: 05e8 db20 0004            MOVB   A8,@4DB20h
29060: b7ee 0040                 MOVE   *SP(40h),A14,1
29080: 97ed                      MOVE   *SP+,A13,1
29090: 0962                      RETS   2h

_set_cruising_speed:
290a0: 098f 000c                 MMTM   SP,A12,A13
290c0: 4dcd                      MOVE   A14,A13
290d0: 0b0e 0060                 ADDI   60h,A14
290f0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
29110: a3cf                      MOVE   A14,-*SP,1
29120: 09e8 cde0 0004            MOVI   4CDE0h,A8
29150: 930e                      MOVE   A8,*A14+,1
29160: 09e8 8a40 0005            MOVI   58A40h,A8
29190: 930e                      MOVE   A8,*A14+,1
291a0: 0d5f bc70 0004            CALLA  4BC70h
291d0: 07e8 d300 0004            MOVE   @4D300h,A8
29200: 3ba8                      DSJS   A8,293E0h
29210: a3cf                      MOVE   A14,-*SP,1
29220: 09e8 cdd0 0004            MOVI   4CDD0h,A8
29250: 930e                      MOVE   A8,*A14+,1
29260: 09e8 8a40 0005            MOVI   58A40h,A8
29290: 930e                      MOVE   A8,*A14+,1
292a0: 0d5f b9c0 0004            CALLA  4B9C0h
292d0: a3cf                      MOVE   A14,-*SP,1
292e0: 93ae                      MOVE   A13,*A14+,1
292f0: 0570                      SETF   10h,1,0
29300: 8588                      MOVE   *A12,A8,0
29310: 930e                      MOVE   A8,*A14+,1
29320: 0d5f b220 0004            CALLA  4B220h
29350: a3cf                      MOVE   A14,-*SP,1
29360: 93ae                      MOVE   A13,*A14+,1
29370: 09e8 8a40 0005            MOVI   58A40h,A8
293a0: 930e                      MOVE   A8,*A14+,1
293b0: 0d5f b9c0 0004            CALLA  4B9C0h
293e0: 07e8 d308 0004            MOVE   @4D308h,A8
29410: 3bc8                      DSJS   A8,29600h
29420: a3cf                      MOVE   A14,-*SP,1
29430: 09e8 cdd0 0004            MOVI   4CDD0h,A8
29460: 930e                      MOVE   A8,*A14+,1
29470: 09e8 8a40 0005            MOVI   58A40h,A8
294a0: 930e                      MOVE   A8,*A14+,1
294b0: 0d5f b9c0 0004            CALLA  4B9C0h
294e0: a3cf                      MOVE   A14,-*SP,1
294f0: 93ae                      MOVE   A13,*A14+,1
29500: 0570                      SETF   10h,1,0
29510: b588 0010                 MOVE   *A12(10h),A8,0
29530: 930e                      MOVE   A8,*A14+,1
29540: 0d5f b220 0004            CALLA  4B220h
29570: a3cf                      MOVE   A14,-*SP,1
29580: 93ae                      MOVE   A13,*A14+,1
29590: 09e8 8a40 0005            MOVI   58A40h,A8
295c0: 930e                      MOVE   A8,*A14+,1
295d0: 0d5f b9c0 0004            CALLA  4B9C0h
29600: 07e8 d310 0004            MOVE   @4D310h,A8
29630: 3bc8                      DSJS   A8,29820h
29640: a3cf                      MOVE   A14,-*SP,1
29650: 09e8 cdd0 0004            MOVI   4CDD0h,A8
29680: 930e                      MOVE   A8,*A14+,1
29690: 09e8 8a40 0005            MOVI   58A40h,A8
296c0: 930e                      MOVE   A8,*A14+,1
296d0: 0d5f b9c0 0004            CALLA  4B9C0h
29700: a3cf                      MOVE   A14,-*SP,1
29710: 93ae                      MOVE   A13,*A14+,1
29720: 0570                      SETF   10h,1,0
29730: b588 0020                 MOVE   *A12(20h),A8,0
29750: 930e                      MOVE   A8,*A14+,1
29760: 0d5f b220 0004            CALLA  4B220h
29790: a3cf                      MOVE   A14,-*SP,1
297a0: 93ae                      MOVE   A13,*A14+,1
297b0: 09e8 8a40 0005            MOVI   58A40h,A8
297e0: 930e                      MOVE   A8,*A14+,1
297f0: 0d5f b9c0 0004            CALLA  4B9C0h
29820: 07e8 d318 0004            MOVE   @4D318h,A8
29850: 3bc8                      DSJS   A8,29A40h
29860: a3cf                      MOVE   A14,-*SP,1
29870: 09e8 cdd0 0004            MOVI   4CDD0h,A8
298a0: 930e                      MOVE   A8,*A14+,1
298b0: 09e8 8a40 0005            MOVI   58A40h,A8
298e0: 930e                      MOVE   A8,*A14+,1
298f0: 0d5f b9c0 0004            CALLA  4B9C0h
29920: a3cf                      MOVE   A14,-*SP,1
29930: 93ae                      MOVE   A13,*A14+,1
29940: 0570                      SETF   10h,1,0
29950: b588 0030                 MOVE   *A12(30h),A8,0
29970: 930e                      MOVE   A8,*A14+,1
29980: 0d5f b220 0004            CALLA  4B220h
299b0: a3cf                      MOVE   A14,-*SP,1
299c0: 93ae                      MOVE   A13,*A14+,1
299d0: 09e8 8a40 0005            MOVI   58A40h,A8
29a00: 930e                      MOVE   A8,*A14+,1
29a10: 0d5f b9c0 0004            CALLA  4B9C0h
29a40: 07e8 d320 0004            MOVE   @4D320h,A8
29a70: 3bc8                      DSJS   A8,29C60h
29a80: a3cf                      MOVE   A14,-*SP,1
29a90: 09e8 cdd0 0004            MOVI   4CDD0h,A8
29ac0: 930e                      MOVE   A8,*A14+,1
29ad0: 09e8 8a40 0005            MOVI   58A40h,A8
29b00: 930e                      MOVE   A8,*A14+,1
29b10: 0d5f b9c0 0004            CALLA  4B9C0h
29b40: a3cf                      MOVE   A14,-*SP,1
29b50: 93ae                      MOVE   A13,*A14+,1
29b60: 0570                      SETF   10h,1,0
29b70: b588 0040                 MOVE   *A12(40h),A8,0
29b90: 930e                      MOVE   A8,*A14+,1
29ba0: 0d5f b220 0004            CALLA  4B220h
29bd0: a3cf                      MOVE   A14,-*SP,1
29be0: 93ae                      MOVE   A13,*A14+,1
29bf0: 09e8 8a40 0005            MOVI   58A40h,A8
29c20: 930e                      MOVE   A8,*A14+,1
29c30: 0d5f b9c0 0004            CALLA  4B9C0h
29c60: 07e8 d328 0004            MOVE   @4D328h,A8
29c90: 3bc8                      DSJS   A8,29E80h
29ca0: a3cf                      MOVE   A14,-*SP,1
29cb0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
29ce0: 930e                      MOVE   A8,*A14+,1
29cf0: 09e8 8a40 0005            MOVI   58A40h,A8
29d20: 930e                      MOVE   A8,*A14+,1
29d30: 0d5f b9c0 0004            CALLA  4B9C0h
29d60: a3cf                      MOVE   A14,-*SP,1
29d70: 93ae                      MOVE   A13,*A14+,1
29d80: 0570                      SETF   10h,1,0
29d90: b588 0050                 MOVE   *A12(50h),A8,0
29db0: 930e                      MOVE   A8,*A14+,1
29dc0: 0d5f b220 0004            CALLA  4B220h
29df0: a3cf                      MOVE   A14,-*SP,1
29e00: 93ae                      MOVE   A13,*A14+,1
29e10: 09e8 8a40 0005            MOVI   58A40h,A8
29e40: 930e                      MOVE   A8,*A14+,1
29e50: 0d5f b9c0 0004            CALLA  4B9C0h
29e80: 0d5f 1ad0 0001            CALLA  11AD0h
29eb0: 1428                      DEC    A8
29ec0: ca02                      JREQ   29EF0h
29ed0: 4508                      SUB    A8,A8
29ee0: c01f                      JR     2A0E0h
29ef0: 0570                      SETF   10h,1,0
29f00: 8588                      MOVE   *A12,A8,0
29f10: 0588 d940 0004            MOVE   A8,@4D940h,0
29f40: b588 0010                 MOVE   *A12(10h),A8,0
29f60: 0588 d950 0004            MOVE   A8,@4D950h,0
29f90: b588 0020                 MOVE   *A12(20h),A8,0
29fb0: 0588 d960 0004            MOVE   A8,@4D960h,0
29fe0: b588 0030                 MOVE   *A12(30h),A8,0
2a000: 0588 d970 0004            MOVE   A8,@4D970h,0
2a030: b588 0040                 MOVE   *A12(40h),A8,0
2a050: 0588 d980 0004            MOVE   A8,@4D980h,0
2a080: b58c 0050                 MOVE   *A12(50h),A12,0
2a0a0: 058c d990 0004            MOVE   A12,@4D990h,0
2a0d0: 1828                      MOVK   1h,A8
2a0e0: b7ee 0060                 MOVE   *SP(60h),A14,1
2a100: 09af 3000                 MMFM   SP,A12,A13
2a120: 0962                      RETS   2h

_set_vector_move:
2a130: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
2a150: 4dcd                      MOVE   A14,A13
2a160: 0b0e 0060                 ADDI   60h,A14
2a180: b7a4 ffe0                 MOVE   *A13(FFE0h),A4,1
2a1a0: 07aa cf20 0004            MOVE   @4CF20h,A10,1
2a1d0: 44c6                      SUB    A6,A6
2a1e0: 07e8 d300 0004            MOVE   @4D300h,A8
2a210: 0d88 0027                 DSJ    A8,2A4A0h
2a230: 100e                      ADDK   20h,A14
2a240: a3cf                      MOVE   A14,-*SP,1
2a250: 93ae                      MOVE   A13,*A14+,1
2a260: 0570                      SETF   10h,1,0
2a270: 05a8 d9a0 0004            MOVE   @4D9A0h,A8,0
2a2a0: 930e                      MOVE   A8,*A14+,1
2a2b0: d60e d400 0004            MOVE   @4D400h,*A14+,1
2a2e0: 05a8 dac0 0004            MOVE   @4DAC0h,A8,0
2a310: 930e                      MOVE   A8,*A14+,1
2a320: d60e d340 0004            MOVE   @4D340h,*A14+,1
2a350: 05a8 da60 0004            MOVE   @4DA60h,A8,0
2a380: 930e                      MOVE   A8,*A14+,1
2a390: d60e d140 0004            MOVE   @4D140h,*A14+,1
2a3c0: d28e 0000                 MOVE   *A4(0h),*A14+,1
2a3e0: 0d5f 1c60 0003            CALLA  31C60h
2a410: a7cc                      MOVE   -*A14,A12,1
2a420: 938e                      MOVE   A12,*A14+,1
2a430: 934e                      MOVE   A10,*A14+,1
2a440: 0d5f a090 0004            CALLA  4A090h
2a470: ca02                      JREQ   2A4A0h
2a480: 4d8a                      MOVE   A12,A10
2a490: 1826                      MOVK   1h,A6
2a4a0: 07ec d308 0004            MOVE   @4D308h,A12
2a4d0: 0d8c 0029                 DSJ    A12,2A780h
2a4f0: 100e                      ADDK   20h,A14
2a500: a3cf                      MOVE   A14,-*SP,1
2a510: 4da8                      MOVE   A13,A8
2a520: 1208                      ADDK   10h,A8
2a530: 930e                      MOVE   A8,*A14+,1
2a540: 0570                      SETF   10h,1,0
2a550: 05a8 d9b0 0004            MOVE   @4D9B0h,A8,0
2a580: 930e                      MOVE   A8,*A14+,1
2a590: d60e d420 0004            MOVE   @4D420h,*A14+,1
2a5c0: 05a8 dad0 0004            MOVE   @4DAD0h,A8,0
2a5f0: 930e                      MOVE   A8,*A14+,1
2a600: d60e d360 0004            MOVE   @4D360h,*A14+,1
2a630: 05a8 da70 0004            MOVE   @4DA70h,A8,0
2a660: 930e                      MOVE   A8,*A14+,1
2a670: d60e d160 0004            MOVE   @4D160h,*A14+,1
2a6a0: d28e 0020                 MOVE   *A4(20h),*A14+,1
2a6c0: 0d5f 1c60 0003            CALLA  31C60h
2a6f0: a7cc                      MOVE   -*A14,A12,1
2a700: 938e                      MOVE   A12,*A14+,1
2a710: 934e                      MOVE   A10,*A14+,1
2a720: 0d5f a090 0004            CALLA  4A090h
2a750: ca02                      JREQ   2A780h
2a760: 4d8a                      MOVE   A12,A10
2a770: 1846                      MOVK   2h,A6
2a780: 07ec d310 0004            MOVE   @4D310h,A12
2a7b0: 0d8c 0029                 DSJ    A12,2AA60h
2a7d0: 100e                      ADDK   20h,A14
2a7e0: a3cf                      MOVE   A14,-*SP,1
2a7f0: 4da8                      MOVE   A13,A8
2a800: 1008                      ADDK   20h,A8
2a810: 930e                      MOVE   A8,*A14+,1
2a820: 0570                      SETF   10h,1,0
2a830: 05a8 d9c0 0004            MOVE   @4D9C0h,A8,0
2a860: 930e                      MOVE   A8,*A14+,1
2a870: d60e d440 0004            MOVE   @4D440h,*A14+,1
2a8a0: 05a8 dae0 0004            MOVE   @4DAE0h,A8,0
2a8d0: 930e                      MOVE   A8,*A14+,1
2a8e0: d60e d380 0004            MOVE   @4D380h,*A14+,1
2a910: 05a8 da80 0004            MOVE   @4DA80h,A8,0
2a940: 930e                      MOVE   A8,*A14+,1
2a950: d60e d180 0004            MOVE   @4D180h,*A14+,1
2a980: d28e 0040                 MOVE   *A4(40h),*A14+,1
2a9a0: 0d5f 1c60 0003            CALLA  31C60h
2a9d0: a7cc                      MOVE   -*A14,A12,1
2a9e0: 938e                      MOVE   A12,*A14+,1
2a9f0: 934e                      MOVE   A10,*A14+,1
2aa00: 0d5f a090 0004            CALLA  4A090h
2aa30: ca02                      JREQ   2AA60h
2aa40: 4d8a                      MOVE   A12,A10
2aa50: 1866                      MOVK   3h,A6
2aa60: 07ec d318 0004            MOVE   @4D318h,A12
2aa90: 0d8c 002a                 DSJ    A12,2AD50h
2aab0: 100e                      ADDK   20h,A14
2aac0: a3cf                      MOVE   A14,-*SP,1
2aad0: 4da8                      MOVE   A13,A8
2aae0: 0b08 0030                 ADDI   30h,A8
2ab00: 930e                      MOVE   A8,*A14+,1
2ab10: 0570                      SETF   10h,1,0
2ab20: 05a8 d9d0 0004            MOVE   @4D9D0h,A8,0
2ab50: 930e                      MOVE   A8,*A14+,1
2ab60: d60e d460 0004            MOVE   @4D460h,*A14+,1
2ab90: 05a8 daf0 0004            MOVE   @4DAF0h,A8,0
2abc0: 930e                      MOVE   A8,*A14+,1
2abd0: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
2ac00: 05a8 da90 0004            MOVE   @4DA90h,A8,0
2ac30: 930e                      MOVE   A8,*A14+,1
2ac40: d60e d1a0 0004            MOVE   @4D1A0h,*A14+,1
2ac70: d28e 0060                 MOVE   *A4(60h),*A14+,1
2ac90: 0d5f 1c60 0003            CALLA  31C60h
2acc0: a7cc                      MOVE   -*A14,A12,1
2acd0: 938e                      MOVE   A12,*A14+,1
2ace0: 934e                      MOVE   A10,*A14+,1
2acf0: 0d5f a090 0004            CALLA  4A090h
2ad20: ca02                      JREQ   2AD50h
2ad30: 4d8a                      MOVE   A12,A10
2ad40: 1886                      MOVK   4h,A6
2ad50: 07ec d320 0004            MOVE   @4D320h,A12
2ad80: 0d8c 002a                 DSJ    A12,2B040h
2ada0: 100e                      ADDK   20h,A14
2adb0: a3cf                      MOVE   A14,-*SP,1
2adc0: 4da8                      MOVE   A13,A8
2add0: 0b08 0040                 ADDI   40h,A8
2adf0: 930e                      MOVE   A8,*A14+,1
2ae00: 0570                      SETF   10h,1,0
2ae10: 05a8 d9e0 0004            MOVE   @4D9E0h,A8,0
2ae40: 930e                      MOVE   A8,*A14+,1
2ae50: d60e d480 0004            MOVE   @4D480h,*A14+,1
2ae80: 05a8 db00 0004            MOVE   @4DB00h,A8,0
2aeb0: 930e                      MOVE   A8,*A14+,1
2aec0: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
2aef0: 05a8 daa0 0004            MOVE   @4DAA0h,A8,0
2af20: 930e                      MOVE   A8,*A14+,1
2af30: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
2af60: d28e 0080                 MOVE   *A4(80h),*A14+,1
2af80: 0d5f 1c60 0003            CALLA  31C60h
2afb0: a7cc                      MOVE   -*A14,A12,1
2afc0: 938e                      MOVE   A12,*A14+,1
2afd0: 934e                      MOVE   A10,*A14+,1
2afe0: 0d5f a090 0004            CALLA  4A090h
2b010: ca02                      JREQ   2B040h
2b020: 4d8a                      MOVE   A12,A10
2b030: 18a6                      MOVK   5h,A6
2b040: 07ec d328 0004            MOVE   @4D328h,A12
2b070: 0d8c 002a                 DSJ    A12,2B330h
2b090: 100e                      ADDK   20h,A14
2b0a0: a3cf                      MOVE   A14,-*SP,1
2b0b0: 4da8                      MOVE   A13,A8
2b0c0: 0b08 0050                 ADDI   50h,A8
2b0e0: 930e                      MOVE   A8,*A14+,1
2b0f0: 0570                      SETF   10h,1,0
2b100: 05a8 d9f0 0004            MOVE   @4D9F0h,A8,0
2b130: 930e                      MOVE   A8,*A14+,1
2b140: d60e d4a0 0004            MOVE   @4D4A0h,*A14+,1
2b170: 05a8 db10 0004            MOVE   @4DB10h,A8,0
2b1a0: 930e                      MOVE   A8,*A14+,1
2b1b0: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
2b1e0: 05a8 dab0 0004            MOVE   @4DAB0h,A8,0
2b210: 930e                      MOVE   A8,*A14+,1
2b220: d60e d1e0 0004            MOVE   @4D1E0h,*A14+,1
2b250: d28e 00a0                 MOVE   *A4(A0h),*A14+,1
2b270: 0d5f 1c60 0003            CALLA  31C60h
2b2a0: a7cc                      MOVE   -*A14,A12,1
2b2b0: 938e                      MOVE   A12,*A14+,1
2b2c0: 934e                      MOVE   A10,*A14+,1
2b2d0: 0d5f a090 0004            CALLA  4A090h
2b300: ca02                      JREQ   2B330h
2b310: 4d8a                      MOVE   A12,A10
2b320: 18c6                      MOVK   6h,A6
2b330: 4cc8                      MOVE   A6,A8
2b340: ca00 01be                 JREQ   2CF40h
2b360: 07ec d300 0004            MOVE   @4D300h,A12
2b390: 0d8c 0042                 DSJ    A12,2B7D0h
2b3b0: 3426                      CMPK   1h,A6
2b3c0: ca40                      JREQ   2B7D0h
2b3d0: d28e 0000                 MOVE   *A4(0h),*A14+,1
2b3f0: d60e d140 0004            MOVE   @4D140h,*A14+,1
2b420: 0d5f 8b40 0004            CALLA  48B40h
2b450: 0d5f 4980 0004            CALLA  44980h
2b480: 4508                      SUB    A8,A8
2b490: 09e2 0000 4040            MOVI   40400000h,A2
2b4c0: 924e                      MOVE   A2,*A14+,1
2b4d0: 930e                      MOVE   A8,*A14+,1
2b4e0: 0d5f 7fa0 0004            CALLA  47FA0h
2b510: d60e d340 0004            MOVE   @4D340h,*A14+,1
2b540: 0d5f 4980 0004            CALLA  44980h
2b570: 0d5f 74f0 0004            CALLA  474F0h
2b5a0: 0d5f 4030 0004            CALLA  44030h
2b5d0: a7cc                      MOVE   -*A14,A12,1
2b5e0: 938e                      MOVE   A12,*A14+,1
2b5f0: 0d5f 89c0 0004            CALLA  489C0h
2b620: a7cc                      MOVE   -*A14,A12,1
2b630: 938e                      MOVE   A12,*A14+,1
2b640: 4508                      SUB    A8,A8
2b650: 930e                      MOVE   A8,*A14+,1
2b660: 0d5f a090 0004            CALLA  4A090h
2b690: ca13                      JREQ   2B7D0h
2b6a0: a3cf                      MOVE   A14,-*SP,1
2b6b0: 93ae                      MOVE   A13,*A14+,1
2b6c0: 934e                      MOVE   A10,*A14+,1
2b6d0: d60e d400 0004            MOVE   @4D400h,*A14+,1
2b700: 0570                      SETF   10h,1,0
2b710: 05a8 dac0 0004            MOVE   @4DAC0h,A8,0
2b740: 930e                      MOVE   A8,*A14+,1
2b750: 05a2 da60 0004            MOVE   @4DA60h,A2,0
2b780: 924e                      MOVE   A2,*A14+,1
2b790: 938e                      MOVE   A12,*A14+,1
2b7a0: 0d5f 2c30 0003            CALLA  32C30h
2b7d0: 07ec d308 0004            MOVE   @4D308h,A12
2b800: 0d8c 0043                 DSJ    A12,2BC50h
2b820: 3446                      CMPK   2h,A6
2b830: ca41                      JREQ   2BC50h
2b840: d28e 0020                 MOVE   *A4(20h),*A14+,1
2b860: d60e d160 0004            MOVE   @4D160h,*A14+,1
2b890: 0d5f 8b40 0004            CALLA  48B40h
2b8c0: 0d5f 4980 0004            CALLA  44980h
2b8f0: 4442                      SUB    A2,A2
2b900: 09e8 0000 4040            MOVI   40400000h,A8
2b930: 930e                      MOVE   A8,*A14+,1
2b940: 924e                      MOVE   A2,*A14+,1
2b950: 0d5f 7fa0 0004            CALLA  47FA0h
2b980: d60e d360 0004            MOVE   @4D360h,*A14+,1
2b9b0: 0d5f 4980 0004            CALLA  44980h
2b9e0: 0d5f 74f0 0004            CALLA  474F0h
2ba10: 0d5f 4030 0004            CALLA  44030h
2ba40: a7cc                      MOVE   -*A14,A12,1
2ba50: 938e                      MOVE   A12,*A14+,1
2ba60: 0d5f 89c0 0004            CALLA  489C0h
2ba90: a7cc                      MOVE   -*A14,A12,1
2baa0: 938e                      MOVE   A12,*A14+,1
2bab0: 924e                      MOVE   A2,*A14+,1
2bac0: 0d5f a090 0004            CALLA  4A090h
2baf0: ca15                      JREQ   2BC50h
2bb00: a3cf                      MOVE   A14,-*SP,1
2bb10: 4da8                      MOVE   A13,A8
2bb20: 1208                      ADDK   10h,A8
2bb30: 930e                      MOVE   A8,*A14+,1
2bb40: 934e                      MOVE   A10,*A14+,1
2bb50: d60e d420 0004            MOVE   @4D420h,*A14+,1
2bb80: 0570                      SETF   10h,1,0
2bb90: 05a8 dad0 0004            MOVE   @4DAD0h,A8,0
2bbc0: 930e                      MOVE   A8,*A14+,1
2bbd0: 05a2 da70 0004            MOVE   @4DA70h,A2,0
2bc00: 924e                      MOVE   A2,*A14+,1
2bc10: 938e                      MOVE   A12,*A14+,1
2bc20: 0d5f 2c30 0003            CALLA  32C30h
2bc50: 07ec d310 0004            MOVE   @4D310h,A12
2bc80: 0d8c 0043                 DSJ    A12,2C0D0h
2bca0: 3466                      CMPK   3h,A6
2bcb0: ca41                      JREQ   2C0D0h
2bcc0: d28e 0040                 MOVE   *A4(40h),*A14+,1
2bce0: d60e d180 0004            MOVE   @4D180h,*A14+,1
2bd10: 0d5f 8b40 0004            CALLA  48B40h
2bd40: 0d5f 4980 0004            CALLA  44980h
2bd70: 4442                      SUB    A2,A2
2bd80: 09e8 0000 4040            MOVI   40400000h,A8
2bdb0: 930e                      MOVE   A8,*A14+,1
2bdc0: 924e                      MOVE   A2,*A14+,1
2bdd0: 0d5f 7fa0 0004            CALLA  47FA0h
2be00: d60e d380 0004            MOVE   @4D380h,*A14+,1
2be30: 0d5f 4980 0004            CALLA  44980h
2be60: 0d5f 74f0 0004            CALLA  474F0h
2be90: 0d5f 4030 0004            CALLA  44030h
2bec0: a7cc                      MOVE   -*A14,A12,1
2bed0: 938e                      MOVE   A12,*A14+,1
2bee0: 0d5f 89c0 0004            CALLA  489C0h
2bf10: a7cc                      MOVE   -*A14,A12,1
2bf20: 938e                      MOVE   A12,*A14+,1
2bf30: 924e                      MOVE   A2,*A14+,1
2bf40: 0d5f a090 0004            CALLA  4A090h
2bf70: ca15                      JREQ   2C0D0h
2bf80: a3cf                      MOVE   A14,-*SP,1
2bf90: 4da8                      MOVE   A13,A8
2bfa0: 1008                      ADDK   20h,A8
2bfb0: 930e                      MOVE   A8,*A14+,1
2bfc0: 934e                      MOVE   A10,*A14+,1
2bfd0: d60e d440 0004            MOVE   @4D440h,*A14+,1
2c000: 0570                      SETF   10h,1,0
2c010: 05a8 dae0 0004            MOVE   @4DAE0h,A8,0
2c040: 930e                      MOVE   A8,*A14+,1
2c050: 05a2 da80 0004            MOVE   @4DA80h,A2,0
2c080: 924e                      MOVE   A2,*A14+,1
2c090: 938e                      MOVE   A12,*A14+,1
2c0a0: 0d5f 2c30 0003            CALLA  32C30h
2c0d0: 07ec d318 0004            MOVE   @4D318h,A12
2c100: 0d8c 0044                 DSJ    A12,2C560h
2c120: 3486                      CMPK   4h,A6
2c130: ca42                      JREQ   2C560h
2c140: d28e 0060                 MOVE   *A4(60h),*A14+,1
2c160: d60e d1a0 0004            MOVE   @4D1A0h,*A14+,1
2c190: 0d5f 8b40 0004            CALLA  48B40h
2c1c0: 0d5f 4980 0004            CALLA  44980h
2c1f0: 4442                      SUB    A2,A2
2c200: 09e8 0000 4040            MOVI   40400000h,A8
2c230: 930e                      MOVE   A8,*A14+,1
2c240: 924e                      MOVE   A2,*A14+,1
2c250: 0d5f 7fa0 0004            CALLA  47FA0h
2c280: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
2c2b0: 0d5f 4980 0004            CALLA  44980h
2c2e0: 0d5f 74f0 0004            CALLA  474F0h
2c310: 0d5f 4030 0004            CALLA  44030h
2c340: a7cc                      MOVE   -*A14,A12,1
2c350: 938e                      MOVE   A12,*A14+,1
2c360: 0d5f 89c0 0004            CALLA  489C0h
2c390: a7cc                      MOVE   -*A14,A12,1
2c3a0: 938e                      MOVE   A12,*A14+,1
2c3b0: 924e                      MOVE   A2,*A14+,1
2c3c0: 0d5f a090 0004            CALLA  4A090h
2c3f0: ca16                      JREQ   2C560h
2c400: a3cf                      MOVE   A14,-*SP,1
2c410: 4da8                      MOVE   A13,A8
2c420: 0b08 0030                 ADDI   30h,A8
2c440: 930e                      MOVE   A8,*A14+,1
2c450: 934e                      MOVE   A10,*A14+,1
2c460: d60e d460 0004            MOVE   @4D460h,*A14+,1
2c490: 0570                      SETF   10h,1,0
2c4a0: 05a8 daf0 0004            MOVE   @4DAF0h,A8,0
2c4d0: 930e                      MOVE   A8,*A14+,1
2c4e0: 05a2 da90 0004            MOVE   @4DA90h,A2,0
2c510: 924e                      MOVE   A2,*A14+,1
2c520: 938e                      MOVE   A12,*A14+,1
2c530: 0d5f 2c30 0003            CALLA  32C30h
2c560: 07ec d320 0004            MOVE   @4D320h,A12
2c590: 0d8c 0044                 DSJ    A12,2C9F0h
2c5b0: 34a6                      CMPK   5h,A6
2c5c0: ca42                      JREQ   2C9F0h
2c5d0: d28e 0080                 MOVE   *A4(80h),*A14+,1
2c5f0: d60e d1c0 0004            MOVE   @4D1C0h,*A14+,1
2c620: 0d5f 8b40 0004            CALLA  48B40h
2c650: 0d5f 4980 0004            CALLA  44980h
2c680: 4442                      SUB    A2,A2
2c690: 09e8 0000 4040            MOVI   40400000h,A8
2c6c0: 930e                      MOVE   A8,*A14+,1
2c6d0: 924e                      MOVE   A2,*A14+,1
2c6e0: 0d5f 7fa0 0004            CALLA  47FA0h
2c710: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
2c740: 0d5f 4980 0004            CALLA  44980h
2c770: 0d5f 74f0 0004            CALLA  474F0h
2c7a0: 0d5f 4030 0004            CALLA  44030h
2c7d0: a7cc                      MOVE   -*A14,A12,1
2c7e0: 938e                      MOVE   A12,*A14+,1
2c7f0: 0d5f 89c0 0004            CALLA  489C0h
2c820: a7cc                      MOVE   -*A14,A12,1
2c830: 938e                      MOVE   A12,*A14+,1
2c840: 924e                      MOVE   A2,*A14+,1
2c850: 0d5f a090 0004            CALLA  4A090h
2c880: ca16                      JREQ   2C9F0h
2c890: a3cf                      MOVE   A14,-*SP,1
2c8a0: 4da8                      MOVE   A13,A8
2c8b0: 0b08 0040                 ADDI   40h,A8
2c8d0: 930e                      MOVE   A8,*A14+,1
2c8e0: 934e                      MOVE   A10,*A14+,1
2c8f0: d60e d480 0004            MOVE   @4D480h,*A14+,1
2c920: 0570                      SETF   10h,1,0
2c930: 05a8 db00 0004            MOVE   @4DB00h,A8,0
2c960: 930e                      MOVE   A8,*A14+,1
2c970: 05a2 daa0 0004            MOVE   @4DAA0h,A2,0
2c9a0: 924e                      MOVE   A2,*A14+,1
2c9b0: 938e                      MOVE   A12,*A14+,1
2c9c0: 0d5f 2c30 0003            CALLA  32C30h
2c9f0: 07ec d328 0004            MOVE   @4D328h,A12
2ca20: 0d8c 0044                 DSJ    A12,2CE80h
2ca40: 14c6                      SUBK   6h,A6
2ca50: ca42                      JREQ   2CE80h
2ca60: d28e 00a0                 MOVE   *A4(A0h),*A14+,1
2ca80: d60e d1e0 0004            MOVE   @4D1E0h,*A14+,1
2cab0: 0d5f 8b40 0004            CALLA  48B40h
2cae0: 0d5f 4980 0004            CALLA  44980h
2cb10: 44c6                      SUB    A6,A6
2cb20: 09e2 0000 4040            MOVI   40400000h,A2
2cb50: 924e                      MOVE   A2,*A14+,1
2cb60: 92ce                      MOVE   A6,*A14+,1
2cb70: 0d5f 7fa0 0004            CALLA  47FA0h
2cba0: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
2cbd0: 0d5f 4980 0004            CALLA  44980h
2cc00: 0d5f 74f0 0004            CALLA  474F0h
2cc30: 0d5f 4030 0004            CALLA  44030h
2cc60: a7cc                      MOVE   -*A14,A12,1
2cc70: 938e                      MOVE   A12,*A14+,1
2cc80: 0d5f 89c0 0004            CALLA  489C0h
2ccb0: a7cc                      MOVE   -*A14,A12,1
2ccc0: 938e                      MOVE   A12,*A14+,1
2ccd0: 92ce                      MOVE   A6,*A14+,1
2cce0: 0d5f a090 0004            CALLA  4A090h
2cd10: ca16                      JREQ   2CE80h
2cd20: a3cf                      MOVE   A14,-*SP,1
2cd30: 4da8                      MOVE   A13,A8
2cd40: 0b08 0050                 ADDI   50h,A8
2cd60: 930e                      MOVE   A8,*A14+,1
2cd70: 934e                      MOVE   A10,*A14+,1
2cd80: d60e d4a0 0004            MOVE   @4D4A0h,*A14+,1
2cdb0: 0570                      SETF   10h,1,0
2cdc0: 05aa db10 0004            MOVE   @4DB10h,A10,0
2cdf0: 934e                      MOVE   A10,*A14+,1
2ce00: 05a8 dab0 0004            MOVE   @4DAB0h,A8,0
2ce30: 930e                      MOVE   A8,*A14+,1
2ce40: 938e                      MOVE   A12,*A14+,1
2ce50: 0d5f 2c30 0003            CALLA  32C30h
2ce80: a3cf                      MOVE   A14,-*SP,1
2ce90: 93ae                      MOVE   A13,*A14+,1
2cea0: 0d5f 90a0 0002            CALLA  290A0h
2ced0: 1428                      DEC    A8
2cee0: 1828                      MOVK   1h,A8
2cef0: ca01                      JREQ   2CF10h
2cf00: 4508                      SUB    A8,A8
2cf10: 0568                      SETF   8h,1,0
2cf20: 0508                      SEXT   A8,0
2cf30: c001                      JR     2CF50h
2cf40: 4508                      SUB    A8,A8
2cf50: b7ee 00e0                 MOVE   *SP(E0h),A14,1
2cf70: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
2cf90: 0962                      RETS   2h

_set_stage_position:
2cfa0: 098f 000c                 MMTM   SP,A12,A13
2cfc0: 4dcd                      MOVE   A14,A13
2cfd0: 0b0e 0060                 ADDI   60h,A14
2cff0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
2d010: a3cf                      MOVE   A14,-*SP,1
2d020: 09e8 ce00 0004            MOVI   4CE00h,A8
2d050: 930e                      MOVE   A8,*A14+,1
2d060: 09e8 8a40 0005            MOVI   58A40h,A8
2d090: 930e                      MOVE   A8,*A14+,1
2d0a0: 0d5f bc70 0004            CALLA  4BC70h
2d0d0: 07e8 d300 0004            MOVE   @4D300h,A8
2d100: 0d88 0027                 DSJ    A8,2D390h
2d120: a3cf                      MOVE   A14,-*SP,1
2d130: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2d160: 930e                      MOVE   A8,*A14+,1
2d170: 09e8 8a40 0005            MOVI   58A40h,A8
2d1a0: 930e                      MOVE   A8,*A14+,1
2d1b0: 0d5f b9c0 0004            CALLA  4B9C0h
2d1e0: a3cf                      MOVE   A14,-*SP,1
2d1f0: 93ae                      MOVE   A13,*A14+,1
2d200: a3cf                      MOVE   A14,-*SP,1
2d210: d60e d640 0004            MOVE   @4D640h,*A14+,1
2d240: d60e d340 0004            MOVE   @4D340h,*A14+,1
2d270: d38e 0000                 MOVE   *A12(0h),*A14+,1
2d290: 0d5f 40f0 0003            CALLA  340F0h
2d2c0: 930e                      MOVE   A8,*A14+,1
2d2d0: 0d5f b220 0004            CALLA  4B220h
2d300: a3cf                      MOVE   A14,-*SP,1
2d310: 93ae                      MOVE   A13,*A14+,1
2d320: 09e8 8a40 0005            MOVI   58A40h,A8
2d350: 930e                      MOVE   A8,*A14+,1
2d360: 0d5f b9c0 0004            CALLA  4B9C0h
2d390: 07e8 d308 0004            MOVE   @4D308h,A8
2d3c0: 0d88 0027                 DSJ    A8,2D650h
2d3e0: a3cf                      MOVE   A14,-*SP,1
2d3f0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2d420: 930e                      MOVE   A8,*A14+,1
2d430: 09e8 8a40 0005            MOVI   58A40h,A8
2d460: 930e                      MOVE   A8,*A14+,1
2d470: 0d5f b9c0 0004            CALLA  4B9C0h
2d4a0: a3cf                      MOVE   A14,-*SP,1
2d4b0: 93ae                      MOVE   A13,*A14+,1
2d4c0: a3cf                      MOVE   A14,-*SP,1
2d4d0: d60e d660 0004            MOVE   @4D660h,*A14+,1
2d500: d60e d360 0004            MOVE   @4D360h,*A14+,1
2d530: d38e 0020                 MOVE   *A12(20h),*A14+,1
2d550: 0d5f 40f0 0003            CALLA  340F0h
2d580: 930e                      MOVE   A8,*A14+,1
2d590: 0d5f b220 0004            CALLA  4B220h
2d5c0: a3cf                      MOVE   A14,-*SP,1
2d5d0: 93ae                      MOVE   A13,*A14+,1
2d5e0: 09e8 8a40 0005            MOVI   58A40h,A8
2d610: 930e                      MOVE   A8,*A14+,1
2d620: 0d5f b9c0 0004            CALLA  4B9C0h
2d650: 07e8 d310 0004            MOVE   @4D310h,A8
2d680: 0d88 0027                 DSJ    A8,2D910h
2d6a0: a3cf                      MOVE   A14,-*SP,1
2d6b0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2d6e0: 930e                      MOVE   A8,*A14+,1
2d6f0: 09e8 8a40 0005            MOVI   58A40h,A8
2d720: 930e                      MOVE   A8,*A14+,1
2d730: 0d5f b9c0 0004            CALLA  4B9C0h
2d760: a3cf                      MOVE   A14,-*SP,1
2d770: 93ae                      MOVE   A13,*A14+,1
2d780: a3cf                      MOVE   A14,-*SP,1
2d790: d60e d680 0004            MOVE   @4D680h,*A14+,1
2d7c0: d60e d380 0004            MOVE   @4D380h,*A14+,1
2d7f0: d38e 0040                 MOVE   *A12(40h),*A14+,1
2d810: 0d5f 40f0 0003            CALLA  340F0h
2d840: 930e                      MOVE   A8,*A14+,1
2d850: 0d5f b220 0004            CALLA  4B220h
2d880: a3cf                      MOVE   A14,-*SP,1
2d890: 93ae                      MOVE   A13,*A14+,1
2d8a0: 09e8 8a40 0005            MOVI   58A40h,A8
2d8d0: 930e                      MOVE   A8,*A14+,1
2d8e0: 0d5f b9c0 0004            CALLA  4B9C0h
2d910: 07e8 d318 0004            MOVE   @4D318h,A8
2d940: 0d88 0027                 DSJ    A8,2DBD0h
2d960: a3cf                      MOVE   A14,-*SP,1
2d970: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2d9a0: 930e                      MOVE   A8,*A14+,1
2d9b0: 09e8 8a40 0005            MOVI   58A40h,A8
2d9e0: 930e                      MOVE   A8,*A14+,1
2d9f0: 0d5f b9c0 0004            CALLA  4B9C0h
2da20: a3cf                      MOVE   A14,-*SP,1
2da30: 93ae                      MOVE   A13,*A14+,1
2da40: a3cf                      MOVE   A14,-*SP,1
2da50: d60e d6a0 0004            MOVE   @4D6A0h,*A14+,1
2da80: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
2dab0: d38e 0060                 MOVE   *A12(60h),*A14+,1
2dad0: 0d5f 40f0 0003            CALLA  340F0h
2db00: 930e                      MOVE   A8,*A14+,1
2db10: 0d5f b220 0004            CALLA  4B220h
2db40: a3cf                      MOVE   A14,-*SP,1
2db50: 93ae                      MOVE   A13,*A14+,1
2db60: 09e8 8a40 0005            MOVI   58A40h,A8
2db90: 930e                      MOVE   A8,*A14+,1
2dba0: 0d5f b9c0 0004            CALLA  4B9C0h
2dbd0: 07e8 d320 0004            MOVE   @4D320h,A8
2dc00: 0d88 0027                 DSJ    A8,2DE90h
2dc20: a3cf                      MOVE   A14,-*SP,1
2dc30: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2dc60: 930e                      MOVE   A8,*A14+,1
2dc70: 09e8 8a40 0005            MOVI   58A40h,A8
2dca0: 930e                      MOVE   A8,*A14+,1
2dcb0: 0d5f b9c0 0004            CALLA  4B9C0h
2dce0: a3cf                      MOVE   A14,-*SP,1
2dcf0: 93ae                      MOVE   A13,*A14+,1
2dd00: a3cf                      MOVE   A14,-*SP,1
2dd10: d60e d6c0 0004            MOVE   @4D6C0h,*A14+,1
2dd40: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
2dd70: d38e 0080                 MOVE   *A12(80h),*A14+,1
2dd90: 0d5f 40f0 0003            CALLA  340F0h
2ddc0: 930e                      MOVE   A8,*A14+,1
2ddd0: 0d5f b220 0004            CALLA  4B220h
2de00: a3cf                      MOVE   A14,-*SP,1
2de10: 93ae                      MOVE   A13,*A14+,1
2de20: 09e8 8a40 0005            MOVI   58A40h,A8
2de50: 930e                      MOVE   A8,*A14+,1
2de60: 0d5f b9c0 0004            CALLA  4B9C0h
2de90: 07e8 d328 0004            MOVE   @4D328h,A8
2dec0: 0d88 0027                 DSJ    A8,2E150h
2dee0: a3cf                      MOVE   A14,-*SP,1
2def0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2df20: 930e                      MOVE   A8,*A14+,1
2df30: 09e8 8a40 0005            MOVI   58A40h,A8
2df60: 930e                      MOVE   A8,*A14+,1
2df70: 0d5f b9c0 0004            CALLA  4B9C0h
2dfa0: a3cf                      MOVE   A14,-*SP,1
2dfb0: 93ae                      MOVE   A13,*A14+,1
2dfc0: a3cf                      MOVE   A14,-*SP,1
2dfd0: d60e d6e0 0004            MOVE   @4D6E0h,*A14+,1
2e000: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
2e030: d38e 00a0                 MOVE   *A12(A0h),*A14+,1
2e050: 0d5f 40f0 0003            CALLA  340F0h
2e080: 930e                      MOVE   A8,*A14+,1
2e090: 0d5f b220 0004            CALLA  4B220h
2e0c0: a3cf                      MOVE   A14,-*SP,1
2e0d0: 93ae                      MOVE   A13,*A14+,1
2e0e0: 09e8 8a40 0005            MOVI   58A40h,A8
2e110: 930e                      MOVE   A8,*A14+,1
2e120: 0d5f b9c0 0004            CALLA  4B9C0h
2e150: 0d5f 1ad0 0001            CALLA  11AD0h
2e180: b7ee 0060                 MOVE   *SP(60h),A14,1
2e1a0: 09af 3000                 MMFM   SP,A12,A13
2e1c0: 0962                      RETS   2h

_set_usr_low_limits_tiga_request:
2e1d0: a3af                      MOVE   A13,-*SP,1
2e1e0: 4dcd                      MOVE   A14,A13
2e1f0: 0b0e 0060                 ADDI   60h,A14
2e210: a3cf                      MOVE   A14,-*SP,1
2e220: 09e8 ce20 0004            MOVI   4CE20h,A8
2e250: 930e                      MOVE   A8,*A14+,1
2e260: 09e8 8a40 0005            MOVI   58A40h,A8
2e290: 930e                      MOVE   A8,*A14+,1
2e2a0: 0d5f bc70 0004            CALLA  4BC70h
2e2d0: 07e8 d300 0004            MOVE   @4D300h,A8
2e300: 0d88 0027                 DSJ    A8,2E590h
2e320: a3cf                      MOVE   A14,-*SP,1
2e330: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2e360: 930e                      MOVE   A8,*A14+,1
2e370: 09e8 8a40 0005            MOVI   58A40h,A8
2e3a0: 930e                      MOVE   A8,*A14+,1
2e3b0: 0d5f b9c0 0004            CALLA  4B9C0h
2e3e0: a3cf                      MOVE   A14,-*SP,1
2e3f0: 93ae                      MOVE   A13,*A14+,1
2e400: a3cf                      MOVE   A14,-*SP,1
2e410: d60e d640 0004            MOVE   @4D640h,*A14+,1
2e440: d60e d340 0004            MOVE   @4D340h,*A14+,1
2e470: d3ae ff40                 MOVE   *A13(FF40h),*A14+,1
2e490: 0d5f 40f0 0003            CALLA  340F0h
2e4c0: 930e                      MOVE   A8,*A14+,1
2e4d0: 0d5f b220 0004            CALLA  4B220h
2e500: a3cf                      MOVE   A14,-*SP,1
2e510: 93ae                      MOVE   A13,*A14+,1
2e520: 09e8 8a40 0005            MOVI   58A40h,A8
2e550: 930e                      MOVE   A8,*A14+,1
2e560: 0d5f b9c0 0004            CALLA  4B9C0h
2e590: 07e8 d308 0004            MOVE   @4D308h,A8
2e5c0: 0d88 0027                 DSJ    A8,2E850h
2e5e0: a3cf                      MOVE   A14,-*SP,1
2e5f0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2e620: 930e                      MOVE   A8,*A14+,1
2e630: 09e8 8a40 0005            MOVI   58A40h,A8
2e660: 930e                      MOVE   A8,*A14+,1
2e670: 0d5f b9c0 0004            CALLA  4B9C0h
2e6a0: a3cf                      MOVE   A14,-*SP,1
2e6b0: 93ae                      MOVE   A13,*A14+,1
2e6c0: a3cf                      MOVE   A14,-*SP,1
2e6d0: d60e d660 0004            MOVE   @4D660h,*A14+,1
2e700: d60e d360 0004            MOVE   @4D360h,*A14+,1
2e730: d3ae ff60                 MOVE   *A13(FF60h),*A14+,1
2e750: 0d5f 40f0 0003            CALLA  340F0h
2e780: 930e                      MOVE   A8,*A14+,1
2e790: 0d5f b220 0004            CALLA  4B220h
2e7c0: a3cf                      MOVE   A14,-*SP,1
2e7d0: 93ae                      MOVE   A13,*A14+,1
2e7e0: 09e8 8a40 0005            MOVI   58A40h,A8
2e810: 930e                      MOVE   A8,*A14+,1
2e820: 0d5f b9c0 0004            CALLA  4B9C0h
2e850: 07e8 d310 0004            MOVE   @4D310h,A8
2e880: 0d88 0027                 DSJ    A8,2EB10h
2e8a0: a3cf                      MOVE   A14,-*SP,1
2e8b0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2e8e0: 930e                      MOVE   A8,*A14+,1
2e8f0: 09e8 8a40 0005            MOVI   58A40h,A8
2e920: 930e                      MOVE   A8,*A14+,1
2e930: 0d5f b9c0 0004            CALLA  4B9C0h
2e960: a3cf                      MOVE   A14,-*SP,1
2e970: 93ae                      MOVE   A13,*A14+,1
2e980: a3cf                      MOVE   A14,-*SP,1
2e990: d60e d680 0004            MOVE   @4D680h,*A14+,1
2e9c0: d60e d380 0004            MOVE   @4D380h,*A14+,1
2e9f0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
2ea10: 0d5f 40f0 0003            CALLA  340F0h
2ea40: 930e                      MOVE   A8,*A14+,1
2ea50: 0d5f b220 0004            CALLA  4B220h
2ea80: a3cf                      MOVE   A14,-*SP,1
2ea90: 93ae                      MOVE   A13,*A14+,1
2eaa0: 09e8 8a40 0005            MOVI   58A40h,A8
2ead0: 930e                      MOVE   A8,*A14+,1
2eae0: 0d5f b9c0 0004            CALLA  4B9C0h
2eb10: 07e8 d318 0004            MOVE   @4D318h,A8
2eb40: 0d88 0027                 DSJ    A8,2EDD0h
2eb60: a3cf                      MOVE   A14,-*SP,1
2eb70: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2eba0: 930e                      MOVE   A8,*A14+,1
2ebb0: 09e8 8a40 0005            MOVI   58A40h,A8
2ebe0: 930e                      MOVE   A8,*A14+,1
2ebf0: 0d5f b9c0 0004            CALLA  4B9C0h
2ec20: a3cf                      MOVE   A14,-*SP,1
2ec30: 93ae                      MOVE   A13,*A14+,1
2ec40: a3cf                      MOVE   A14,-*SP,1
2ec50: d60e d6a0 0004            MOVE   @4D6A0h,*A14+,1
2ec80: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
2ecb0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
2ecd0: 0d5f 40f0 0003            CALLA  340F0h
2ed00: 930e                      MOVE   A8,*A14+,1
2ed10: 0d5f b220 0004            CALLA  4B220h
2ed40: a3cf                      MOVE   A14,-*SP,1
2ed50: 93ae                      MOVE   A13,*A14+,1
2ed60: 09e8 8a40 0005            MOVI   58A40h,A8
2ed90: 930e                      MOVE   A8,*A14+,1
2eda0: 0d5f b9c0 0004            CALLA  4B9C0h
2edd0: 07e8 d320 0004            MOVE   @4D320h,A8
2ee00: 0d88 0027                 DSJ    A8,2F090h
2ee20: a3cf                      MOVE   A14,-*SP,1
2ee30: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2ee60: 930e                      MOVE   A8,*A14+,1
2ee70: 09e8 8a40 0005            MOVI   58A40h,A8
2eea0: 930e                      MOVE   A8,*A14+,1
2eeb0: 0d5f b9c0 0004            CALLA  4B9C0h
2eee0: a3cf                      MOVE   A14,-*SP,1
2eef0: 93ae                      MOVE   A13,*A14+,1
2ef00: a3cf                      MOVE   A14,-*SP,1
2ef10: d60e d6c0 0004            MOVE   @4D6C0h,*A14+,1
2ef40: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
2ef70: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2ef90: 0d5f 40f0 0003            CALLA  340F0h
2efc0: 930e                      MOVE   A8,*A14+,1
2efd0: 0d5f b220 0004            CALLA  4B220h
2f000: a3cf                      MOVE   A14,-*SP,1
2f010: 93ae                      MOVE   A13,*A14+,1
2f020: 09e8 8a40 0005            MOVI   58A40h,A8
2f050: 930e                      MOVE   A8,*A14+,1
2f060: 0d5f b9c0 0004            CALLA  4B9C0h
2f090: 07e8 d328 0004            MOVE   @4D328h,A8
2f0c0: 0d88 0027                 DSJ    A8,2F350h
2f0e0: a3cf                      MOVE   A14,-*SP,1
2f0f0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2f120: 930e                      MOVE   A8,*A14+,1
2f130: 09e8 8a40 0005            MOVI   58A40h,A8
2f160: 930e                      MOVE   A8,*A14+,1
2f170: 0d5f b9c0 0004            CALLA  4B9C0h
2f1a0: a3cf                      MOVE   A14,-*SP,1
2f1b0: 93ae                      MOVE   A13,*A14+,1
2f1c0: a3cf                      MOVE   A14,-*SP,1
2f1d0: d60e d6e0 0004            MOVE   @4D6E0h,*A14+,1
2f200: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
2f230: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2f250: 0d5f 40f0 0003            CALLA  340F0h
2f280: 930e                      MOVE   A8,*A14+,1
2f290: 0d5f b220 0004            CALLA  4B220h
2f2c0: a3cf                      MOVE   A14,-*SP,1
2f2d0: 93ae                      MOVE   A13,*A14+,1
2f2e0: 09e8 8a40 0005            MOVI   58A40h,A8
2f310: 930e                      MOVE   A8,*A14+,1
2f320: 0d5f b9c0 0004            CALLA  4B9C0h
2f350: 0d5f 1ad0 0001            CALLA  11AD0h
2f380: 1428                      DEC    A8
2f390: ca02                      JREQ   2F3C0h
2f3a0: 4508                      SUB    A8,A8
2f3b0: c01f                      JR     2F5B0h
2f3c0: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
2f3e0: 0788 d880 0004            MOVE   A8,@4D880h,1
2f410: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
2f430: 0788 d8a0 0004            MOVE   A8,@4D8A0h,1
2f460: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
2f480: 0788 d8c0 0004            MOVE   A8,@4D8C0h,1
2f4b0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
2f4d0: 0788 d8e0 0004            MOVE   A8,@4D8E0h,1
2f500: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
2f520: 0788 d900 0004            MOVE   A8,@4D900h,1
2f550: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
2f570: 0788 d920 0004            MOVE   A8,@4D920h,1
2f5a0: 1828                      MOVK   1h,A8
2f5b0: b7ee 0040                 MOVE   *SP(40h),A14,1
2f5d0: 97ed                      MOVE   *SP+,A13,1
2f5e0: 0962                      RETS   2h

_set_usr_upr_limits_tiga_request:
2f5f0: a3af                      MOVE   A13,-*SP,1
2f600: 4dcd                      MOVE   A14,A13
2f610: 0b0e 0060                 ADDI   60h,A14
2f630: a3cf                      MOVE   A14,-*SP,1
2f640: 09e8 ce40 0004            MOVI   4CE40h,A8
2f670: 930e                      MOVE   A8,*A14+,1
2f680: 09e8 8a40 0005            MOVI   58A40h,A8
2f6b0: 930e                      MOVE   A8,*A14+,1
2f6c0: 0d5f bc70 0004            CALLA  4BC70h
2f6f0: 07e8 d300 0004            MOVE   @4D300h,A8
2f720: 0d88 0027                 DSJ    A8,2F9B0h
2f740: a3cf                      MOVE   A14,-*SP,1
2f750: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2f780: 930e                      MOVE   A8,*A14+,1
2f790: 09e8 8a40 0005            MOVI   58A40h,A8
2f7c0: 930e                      MOVE   A8,*A14+,1
2f7d0: 0d5f b9c0 0004            CALLA  4B9C0h
2f800: a3cf                      MOVE   A14,-*SP,1
2f810: 93ae                      MOVE   A13,*A14+,1
2f820: a3cf                      MOVE   A14,-*SP,1
2f830: d60e d640 0004            MOVE   @4D640h,*A14+,1
2f860: d60e d340 0004            MOVE   @4D340h,*A14+,1
2f890: d3ae ff40                 MOVE   *A13(FF40h),*A14+,1
2f8b0: 0d5f 40f0 0003            CALLA  340F0h
2f8e0: 930e                      MOVE   A8,*A14+,1
2f8f0: 0d5f b220 0004            CALLA  4B220h
2f920: a3cf                      MOVE   A14,-*SP,1
2f930: 93ae                      MOVE   A13,*A14+,1
2f940: 09e8 8a40 0005            MOVI   58A40h,A8
2f970: 930e                      MOVE   A8,*A14+,1
2f980: 0d5f b9c0 0004            CALLA  4B9C0h
2f9b0: 07e8 d308 0004            MOVE   @4D308h,A8
2f9e0: 0d88 0027                 DSJ    A8,2FC70h
2fa00: a3cf                      MOVE   A14,-*SP,1
2fa10: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2fa40: 930e                      MOVE   A8,*A14+,1
2fa50: 09e8 8a40 0005            MOVI   58A40h,A8
2fa80: 930e                      MOVE   A8,*A14+,1
2fa90: 0d5f b9c0 0004            CALLA  4B9C0h
2fac0: a3cf                      MOVE   A14,-*SP,1
2fad0: 93ae                      MOVE   A13,*A14+,1
2fae0: a3cf                      MOVE   A14,-*SP,1
2faf0: d60e d660 0004            MOVE   @4D660h,*A14+,1
2fb20: d60e d360 0004            MOVE   @4D360h,*A14+,1
2fb50: d3ae ff60                 MOVE   *A13(FF60h),*A14+,1
2fb70: 0d5f 40f0 0003            CALLA  340F0h
2fba0: 930e                      MOVE   A8,*A14+,1
2fbb0: 0d5f b220 0004            CALLA  4B220h
2fbe0: a3cf                      MOVE   A14,-*SP,1
2fbf0: 93ae                      MOVE   A13,*A14+,1
2fc00: 09e8 8a40 0005            MOVI   58A40h,A8
2fc30: 930e                      MOVE   A8,*A14+,1
2fc40: 0d5f b9c0 0004            CALLA  4B9C0h
2fc70: 07e8 d310 0004            MOVE   @4D310h,A8
2fca0: 0d88 0027                 DSJ    A8,2FF30h
2fcc0: a3cf                      MOVE   A14,-*SP,1
2fcd0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2fd00: 930e                      MOVE   A8,*A14+,1
2fd10: 09e8 8a40 0005            MOVI   58A40h,A8
2fd40: 930e                      MOVE   A8,*A14+,1
2fd50: 0d5f b9c0 0004            CALLA  4B9C0h
2fd80: a3cf                      MOVE   A14,-*SP,1
2fd90: 93ae                      MOVE   A13,*A14+,1
2fda0: a3cf                      MOVE   A14,-*SP,1
2fdb0: d60e d680 0004            MOVE   @4D680h,*A14+,1
2fde0: d60e d380 0004            MOVE   @4D380h,*A14+,1
2fe10: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
2fe30: 0d5f 40f0 0003            CALLA  340F0h
2fe60: 930e                      MOVE   A8,*A14+,1
2fe70: 0d5f b220 0004            CALLA  4B220h
2fea0: a3cf                      MOVE   A14,-*SP,1
2feb0: 93ae                      MOVE   A13,*A14+,1
2fec0: 09e8 8a40 0005            MOVI   58A40h,A8
2fef0: 930e                      MOVE   A8,*A14+,1
2ff00: 0d5f b9c0 0004            CALLA  4B9C0h
2ff30: 07e8 d318 0004            MOVE   @4D318h,A8
2ff60: 0d88 0027                 DSJ    A8,301F0h
2ff80: a3cf                      MOVE   A14,-*SP,1
2ff90: 09e8 cdd0 0004            MOVI   4CDD0h,A8
2ffc0: 930e                      MOVE   A8,*A14+,1
2ffd0: 09e8 8a40 0005            MOVI   58A40h,A8
30000: 930e                      MOVE   A8,*A14+,1
30010: 0d5f b9c0 0004            CALLA  4B9C0h
30040: a3cf                      MOVE   A14,-*SP,1
30050: 93ae                      MOVE   A13,*A14+,1
30060: a3cf                      MOVE   A14,-*SP,1
30070: d60e d6a0 0004            MOVE   @4D6A0h,*A14+,1
300a0: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
300d0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
300f0: 0d5f 40f0 0003            CALLA  340F0h
30120: 930e                      MOVE   A8,*A14+,1
30130: 0d5f b220 0004            CALLA  4B220h
30160: a3cf                      MOVE   A14,-*SP,1
30170: 93ae                      MOVE   A13,*A14+,1
30180: 09e8 8a40 0005            MOVI   58A40h,A8
301b0: 930e                      MOVE   A8,*A14+,1
301c0: 0d5f b9c0 0004            CALLA  4B9C0h
301f0: 07e8 d320 0004            MOVE   @4D320h,A8
30220: 0d88 0027                 DSJ    A8,304B0h
30240: a3cf                      MOVE   A14,-*SP,1
30250: 09e8 cdd0 0004            MOVI   4CDD0h,A8
30280: 930e                      MOVE   A8,*A14+,1
30290: 09e8 8a40 0005            MOVI   58A40h,A8
302c0: 930e                      MOVE   A8,*A14+,1
302d0: 0d5f b9c0 0004            CALLA  4B9C0h
30300: a3cf                      MOVE   A14,-*SP,1
30310: 93ae                      MOVE   A13,*A14+,1
30320: a3cf                      MOVE   A14,-*SP,1
30330: d60e d6c0 0004            MOVE   @4D6C0h,*A14+,1
30360: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
30390: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
303b0: 0d5f 40f0 0003            CALLA  340F0h
303e0: 930e                      MOVE   A8,*A14+,1
303f0: 0d5f b220 0004            CALLA  4B220h
30420: a3cf                      MOVE   A14,-*SP,1
30430: 93ae                      MOVE   A13,*A14+,1
30440: 09e8 8a40 0005            MOVI   58A40h,A8
30470: 930e                      MOVE   A8,*A14+,1
30480: 0d5f b9c0 0004            CALLA  4B9C0h
304b0: 07e8 d328 0004            MOVE   @4D328h,A8
304e0: 0d88 0027                 DSJ    A8,30770h
30500: a3cf                      MOVE   A14,-*SP,1
30510: 09e8 cdd0 0004            MOVI   4CDD0h,A8
30540: 930e                      MOVE   A8,*A14+,1
30550: 09e8 8a40 0005            MOVI   58A40h,A8
30580: 930e                      MOVE   A8,*A14+,1
30590: 0d5f b9c0 0004            CALLA  4B9C0h
305c0: a3cf                      MOVE   A14,-*SP,1
305d0: 93ae                      MOVE   A13,*A14+,1
305e0: a3cf                      MOVE   A14,-*SP,1
305f0: d60e d6e0 0004            MOVE   @4D6E0h,*A14+,1
30620: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
30650: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
30670: 0d5f 40f0 0003            CALLA  340F0h
306a0: 930e                      MOVE   A8,*A14+,1
306b0: 0d5f b220 0004            CALLA  4B220h
306e0: a3cf                      MOVE   A14,-*SP,1
306f0: 93ae                      MOVE   A13,*A14+,1
30700: 09e8 8a40 0005            MOVI   58A40h,A8
30730: 930e                      MOVE   A8,*A14+,1
30740: 0d5f b9c0 0004            CALLA  4B9C0h
30770: 0d5f 1ad0 0001            CALLA  11AD0h
307a0: 1428                      DEC    A8
307b0: ca02                      JREQ   307E0h
307c0: 4508                      SUB    A8,A8
307d0: c01f                      JR     309D0h
307e0: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
30800: 0788 d7c0 0004            MOVE   A8,@4D7C0h,1
30830: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
30850: 0788 d7e0 0004            MOVE   A8,@4D7E0h,1
30880: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
308a0: 0788 d800 0004            MOVE   A8,@4D800h,1
308d0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
308f0: 0788 d820 0004            MOVE   A8,@4D820h,1
30920: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
30940: 0788 d840 0004            MOVE   A8,@4D840h,1
30970: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
30990: 0788 d860 0004            MOVE   A8,@4D860h,1
309c0: 1828                      MOVK   1h,A8
309d0: b7ee 0040                 MOVE   *SP(40h),A14,1
309f0: 97ed                      MOVE   *SP+,A13,1
30a00: 0962                      RETS   2h

_set_stage_lower_limits:
30a10: a3af                      MOVE   A13,-*SP,1
30a20: 4dcd                      MOVE   A14,A13
30a30: 0b0e 0060                 ADDI   60h,A14
30a50: a3cf                      MOVE   A14,-*SP,1
30a60: 09e8 ce60 0004            MOVI   4CE60h,A8
30a90: 930e                      MOVE   A8,*A14+,1
30aa0: 09e8 8a40 0005            MOVI   58A40h,A8
30ad0: 930e                      MOVE   A8,*A14+,1
30ae0: 0d5f bc70 0004            CALLA  4BC70h
30b10: 07e8 d300 0004            MOVE   @4D300h,A8
30b40: 0d88 0028                 DSJ    A8,30DE0h
30b60: a3cf                      MOVE   A14,-*SP,1
30b70: 09e8 cdd0 0004            MOVI   4CDD0h,A8
30ba0: 930e                      MOVE   A8,*A14+,1
30bb0: 09e8 8a40 0005            MOVI   58A40h,A8
30be0: 930e                      MOVE   A8,*A14+,1
30bf0: 0d5f b9c0 0004            CALLA  4B9C0h
30c20: a3cf                      MOVE   A14,-*SP,1
30c30: 93ae                      MOVE   A13,*A14+,1
30c40: a3cf                      MOVE   A14,-*SP,1
30c50: d60e d640 0004            MOVE   @4D640h,*A14+,1
30c80: d60e d340 0004            MOVE   @4D340h,*A14+,1
30cb0: d60e d4c0 0004            MOVE   @4D4C0h,*A14+,1
30ce0: 0d5f 40f0 0003            CALLA  340F0h
30d10: 930e                      MOVE   A8,*A14+,1
30d20: 0d5f b220 0004            CALLA  4B220h
30d50: a3cf                      MOVE   A14,-*SP,1
30d60: 93ae                      MOVE   A13,*A14+,1
30d70: 09e8 8a40 0005            MOVI   58A40h,A8
30da0: 930e                      MOVE   A8,*A14+,1
30db0: 0d5f b9c0 0004            CALLA  4B9C0h
30de0: 07e8 d308 0004            MOVE   @4D308h,A8
30e10: 0d88 0028                 DSJ    A8,310B0h
30e30: a3cf                      MOVE   A14,-*SP,1
30e40: 09e8 cdd0 0004            MOVI   4CDD0h,A8
30e70: 930e                      MOVE   A8,*A14+,1
30e80: 09e8 8a40 0005            MOVI   58A40h,A8
30eb0: 930e                      MOVE   A8,*A14+,1
30ec0: 0d5f b9c0 0004            CALLA  4B9C0h
30ef0: a3cf                      MOVE   A14,-*SP,1
30f00: 93ae                      MOVE   A13,*A14+,1
30f10: a3cf                      MOVE   A14,-*SP,1
30f20: d60e d660 0004            MOVE   @4D660h,*A14+,1
30f50: d60e d360 0004            MOVE   @4D360h,*A14+,1
30f80: d60e d4e0 0004            MOVE   @4D4E0h,*A14+,1
30fb0: 0d5f 40f0 0003            CALLA  340F0h
30fe0: 930e                      MOVE   A8,*A14+,1
30ff0: 0d5f b220 0004            CALLA  4B220h
31020: a3cf                      MOVE   A14,-*SP,1
31030: 93ae                      MOVE   A13,*A14+,1
31040: 09e8 8a40 0005            MOVI   58A40h,A8
31070: 930e                      MOVE   A8,*A14+,1
31080: 0d5f b9c0 0004            CALLA  4B9C0h
310b0: 07e8 d310 0004            MOVE   @4D310h,A8
310e0: 0d88 0028                 DSJ    A8,31380h
31100: a3cf                      MOVE   A14,-*SP,1
31110: 09e8 cdd0 0004            MOVI   4CDD0h,A8
31140: 930e                      MOVE   A8,*A14+,1
31150: 09e8 8a40 0005            MOVI   58A40h,A8
31180: 930e                      MOVE   A8,*A14+,1
31190: 0d5f b9c0 0004            CALLA  4B9C0h
311c0: a3cf                      MOVE   A14,-*SP,1
311d0: 93ae                      MOVE   A13,*A14+,1
311e0: a3cf                      MOVE   A14,-*SP,1
311f0: d60e d680 0004            MOVE   @4D680h,*A14+,1
31220: d60e d380 0004            MOVE   @4D380h,*A14+,1
31250: d60e d500 0004            MOVE   @4D500h,*A14+,1
31280: 0d5f 40f0 0003            CALLA  340F0h
312b0: 930e                      MOVE   A8,*A14+,1
312c0: 0d5f b220 0004            CALLA  4B220h
312f0: a3cf                      MOVE   A14,-*SP,1
31300: 93ae                      MOVE   A13,*A14+,1
31310: 09e8 8a40 0005            MOVI   58A40h,A8
31340: 930e                      MOVE   A8,*A14+,1
31350: 0d5f b9c0 0004            CALLA  4B9C0h
31380: 07e8 d318 0004            MOVE   @4D318h,A8
313b0: 0d88 0028                 DSJ    A8,31650h
313d0: a3cf                      MOVE   A14,-*SP,1
313e0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
31410: 930e                      MOVE   A8,*A14+,1
31420: 09e8 8a40 0005            MOVI   58A40h,A8
31450: 930e                      MOVE   A8,*A14+,1
31460: 0d5f b9c0 0004            CALLA  4B9C0h
31490: a3cf                      MOVE   A14,-*SP,1
314a0: 93ae                      MOVE   A13,*A14+,1
314b0: a3cf                      MOVE   A14,-*SP,1
314c0: d60e d6a0 0004            MOVE   @4D6A0h,*A14+,1
314f0: d60e d3a0 0004            MOVE   @4D3A0h,*A14+,1
31520: d60e d520 0004            MOVE   @4D520h,*A14+,1
31550: 0d5f 40f0 0003            CALLA  340F0h
31580: 930e                      MOVE   A8,*A14+,1
31590: 0d5f b220 0004            CALLA  4B220h
315c0: a3cf                      MOVE   A14,-*SP,1
315d0: 93ae                      MOVE   A13,*A14+,1
315e0: 09e8 8a40 0005            MOVI   58A40h,A8
31610: 930e                      MOVE   A8,*A14+,1
31620: 0d5f b9c0 0004            CALLA  4B9C0h
31650: 07e8 d320 0004            MOVE   @4D320h,A8
31680: 0d88 0028                 DSJ    A8,31920h
316a0: a3cf                      MOVE   A14,-*SP,1
316b0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
316e0: 930e                      MOVE   A8,*A14+,1
316f0: 09e8 8a40 0005            MOVI   58A40h,A8
31720: 930e                      MOVE   A8,*A14+,1
31730: 0d5f b9c0 0004            CALLA  4B9C0h
31760: a3cf                      MOVE   A14,-*SP,1
31770: 93ae                      MOVE   A13,*A14+,1
31780: a3cf                      MOVE   A14,-*SP,1
31790: d60e d6c0 0004            MOVE   @4D6C0h,*A14+,1
317c0: d60e d3c0 0004            MOVE   @4D3C0h,*A14+,1
317f0: d60e d540 0004            MOVE   @4D540h,*A14+,1
31820: 0d5f 40f0 0003            CALLA  340F0h
31850: 930e                      MOVE   A8,*A14+,1
31860: 0d5f b220 0004            CALLA  4B220h
31890: a3cf                      MOVE   A14,-*SP,1
318a0: 93ae                      MOVE   A13,*A14+,1
318b0: 09e8 8a40 0005            MOVI   58A40h,A8
318e0: 930e                      MOVE   A8,*A14+,1
318f0: 0d5f b9c0 0004            CALLA  4B9C0h
31920: 07e8 d328 0004            MOVE   @4D328h,A8
31950: 0d88 0028                 DSJ    A8,31BF0h
31970: a3cf                      MOVE   A14,-*SP,1
31980: 09e8 cdd0 0004            MOVI   4CDD0h,A8
319b0: 930e                      MOVE   A8,*A14+,1
319c0: 09e8 8a40 0005            MOVI   58A40h,A8
319f0: 930e                      MOVE   A8,*A14+,1
31a00: 0d5f b9c0 0004            CALLA  4B9C0h
31a30: a3cf                      MOVE   A14,-*SP,1
31a40: 93ae                      MOVE   A13,*A14+,1
31a50: a3cf                      MOVE   A14,-*SP,1
31a60: d60e d6e0 0004            MOVE   @4D6E0h,*A14+,1
31a90: d60e d3e0 0004            MOVE   @4D3E0h,*A14+,1
31ac0: d60e d560 0004            MOVE   @4D560h,*A14+,1
31af0: 0d5f 40f0 0003            CALLA  340F0h
31b20: 930e                      MOVE   A8,*A14+,1
31b30: 0d5f b220 0004            CALLA  4B220h
31b60: a3cf                      MOVE   A14,-*SP,1
31b70: 93ae                      MOVE   A13,*A14+,1
31b80: 09e8 8a40 0005            MOVI   58A40h,A8
31bb0: 930e                      MOVE   A8,*A14+,1
31bc0: 0d5f b9c0 0004            CALLA  4B9C0h
31bf0: 0d5f 1ad0 0001            CALLA  11AD0h
31c20: 0bee ff9f                 SUBI   60h,A14
31c40: 97ed                      MOVE   *SP+,A13,1
31c50: 0960                      RETS   

_calc_move_time:
31c60: 098f ea7c                 MMTM   SP,A0-A2,A4,A6,A9-A13
31c80: 4dcd                      MOVE   A14,A13
31c90: 0570                      SETF   10h,1,0
31ca0: b5a1 ff20                 MOVE   *A13(FF20h),A1,0
31cc0: b7a6 ff40                 MOVE   *A13(FF40h),A6,1
31ce0: b5a0 ff60                 MOVE   *A13(FF60h),A0,0
31d00: 07aa cf20 0004            MOVE   @4CF20h,A10,1
31d30: 07a4 cf20 0004            MOVE   @4CF20h,A4,1
31d60: 92ce                      MOVE   A6,*A14+,1
31d70: 0d5f 4980 0004            CALLA  44980h
31da0: 4508                      SUB    A8,A8
31db0: 09ec 4000 408f            MOVI   408F4000h,A12
31de0: 938e                      MOVE   A12,*A14+,1
31df0: 930e                      MOVE   A8,*A14+,1
31e00: 0d5f 74f0 0004            CALLA  474F0h
31e30: 0d5f 4030 0004            CALLA  44030h
31e60: a7c6                      MOVE   -*A14,A6,1
31e70: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
31e90: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
31eb0: 0d5f 8b40 0004            CALLA  48B40h
31ee0: 0d5f 4980 0004            CALLA  44980h
31f10: 4508                      SUB    A8,A8
31f20: 09ec 0000 4040            MOVI   40400000h,A12
31f50: 938e                      MOVE   A12,*A14+,1
31f60: 930e                      MOVE   A8,*A14+,1
31f70: 0d5f 7fa0 0004            CALLA  47FA0h
31fa0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
31fc0: 0d5f 4980 0004            CALLA  44980h
31ff0: 0d5f 74f0 0004            CALLA  474F0h
32020: 0d5f 4030 0004            CALLA  44030h
32050: a7cb                      MOVE   -*A14,A11,1
32060: 936e                      MOVE   A11,*A14+,1
32070: 4508                      SUB    A8,A8
32080: 930e                      MOVE   A8,*A14+,1
32090: 0d5f a2b0 0004            CALLA  4A2B0h
320c0: ca05                      JREQ   32120h
320d0: 936e                      MOVE   A11,*A14+,1
320e0: 0d5f ab90 0004            CALLA  4AB90h
32110: a7cb                      MOVE   -*A14,A11,1
32120: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
32140: 936e                      MOVE   A11,*A14+,1
32150: 09e8 0000 4040            MOVI   40400000h,A8
32180: 930e                      MOVE   A8,*A14+,1
32190: 0d5f 9820 0004            CALLA  49820h
321c0: a7c2                      MOVE   -*A14,A2,1
321d0: 482c                      CMP    A1,A12
321e0: c536                      JRGE   32550h
321f0: 934e                      MOVE   A10,*A14+,1
32200: 924e                      MOVE   A2,*A14+,1
32210: 0d5f a2b0 0004            CALLA  4A2B0h
32240: ca30                      JREQ   32550h
32250: 934e                      MOVE   A10,*A14+,1
32260: 0d5f 4980 0004            CALLA  44980h
32290: 4d88                      MOVE   A12,A8
322a0: 0d5f 5470 0004            CALLA  45470h
322d0: 4508                      SUB    A8,A8
322e0: 09e9 0000 4040            MOVI   40400000h,A9
32310: 932e                      MOVE   A9,*A14+,1
32320: 930e                      MOVE   A8,*A14+,1
32330: 0d5f 7fa0 0004            CALLA  47FA0h
32360: 92ce                      MOVE   A6,*A14+,1
32370: 0d5f 4980 0004            CALLA  44980h
323a0: 0d5f 7fa0 0004            CALLA  47FA0h
323d0: 0d5f 5db0 0004            CALLA  45DB0h
32400: 0d5f 4030 0004            CALLA  44030h
32430: a7ca                      MOVE   -*A14,A10,1
32440: 92ce                      MOVE   A6,*A14+,1
32450: 928e                      MOVE   A4,*A14+,1
32460: 0d5f 8c60 0004            CALLA  48C60h
32490: a7c4                      MOVE   -*A14,A4,1
324a0: 400c                      ADD    A0,A12
324b0: 260c                      SLL    10h,A12
324c0: 2a0c                      SRA    10h,A12
324d0: 482c                      CMP    A1,A12
324e0: c506                      JRGE   32550h
324f0: 934e                      MOVE   A10,*A14+,1
32500: 924e                      MOVE   A2,*A14+,1
32510: 0d5f 9f80 0004            CALLA  49F80h
32540: cad0                      JREQ   32250h
32550: 934e                      MOVE   A10,*A14+,1
32560: 924e                      MOVE   A2,*A14+,1
32570: 0d5f a1a0 0004            CALLA  4A1A0h
325a0: ca02                      JREQ   325D0h
325b0: 4c2c                      MOVE   A1,A12
325c0: c028                      JR     32850h
325d0: 440c                      SUB    A0,A12
325e0: 260c                      SLL    10h,A12
325f0: 2a0c                      SRA    10h,A12
32600: 92ce                      MOVE   A6,*A14+,1
32610: 928e                      MOVE   A4,*A14+,1
32620: 0d5f 8a20 0004            CALLA  48A20h
32650: a7c4                      MOVE   -*A14,A4,1
32660: 934e                      MOVE   A10,*A14+,1
32670: 0d5f 4980 0004            CALLA  44980h
326a0: 4d88                      MOVE   A12,A8
326b0: 0d5f 5470 0004            CALLA  45470h
326e0: 4442                      SUB    A2,A2
326f0: 09e0 0000 4040            MOVI   40400000h,A0
32720: 920e                      MOVE   A0,*A14+,1
32730: 924e                      MOVE   A2,*A14+,1
32740: 0d5f 7fa0 0004            CALLA  47FA0h
32770: 92ce                      MOVE   A6,*A14+,1
32780: 0d5f 4980 0004            CALLA  44980h
327b0: 0d5f 7fa0 0004            CALLA  47FA0h
327e0: 0d5f 5c40 0004            CALLA  45C40h
32810: 0d5f 4030 0004            CALLA  44030h
32840: a7ca                      MOVE   -*A14,A10,1
32850: 934e                      MOVE   A10,*A14+,1
32860: 09e6 0000 4000            MOVI   40000000h,A6
32890: 92ce                      MOVE   A6,*A14+,1
328a0: 0d5f a3c0 0004            CALLA  4A3C0h
328d0: 936e                      MOVE   A11,*A14+,1
328e0: 0d5f 8a20 0004            CALLA  48A20h
32910: a7ca                      MOVE   -*A14,A10,1
32920: 934e                      MOVE   A10,*A14+,1
32930: 0d5f 4980 0004            CALLA  44980h
32960: 4d88                      MOVE   A12,A8
32970: 0d5f 5470 0004            CALLA  45470h
329a0: 4442                      SUB    A2,A2
329b0: 09e0 0000 4040            MOVI   40400000h,A0
329e0: 920e                      MOVE   A0,*A14+,1
329f0: 924e                      MOVE   A2,*A14+,1
32a00: 0d5f 7fa0 0004            CALLA  47FA0h
32a30: 0d5f 74f0 0004            CALLA  474F0h
32a60: 0d5f 4030 0004            CALLA  44030h
32a90: a7ca                      MOVE   -*A14,A10,1
32aa0: 928e                      MOVE   A4,*A14+,1
32ab0: 92ce                      MOVE   A6,*A14+,1
32ac0: 0d5f a3c0 0004            CALLA  4A3C0h
32af0: 934e                      MOVE   A10,*A14+,1
32b00: 0d5f 8c60 0004            CALLA  48C60h
32b30: a7ca                      MOVE   -*A14,A10,1
32b40: b7a4 ff00                 MOVE   *A13(FF00h),A4,1
32b60: 0570                      SETF   10h,1,0
32b70: 8184                      MOVE   A12,*A4,0
32b80: 934e                      MOVE   A10,*A14+,1
32b90: b7ed 0160                 MOVE   *SP(160h),A13,1
32bb0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
32be0: b7ee 0160                 MOVE   *SP(160h),A14,1
32c00: 09af 3e57                 MMFM   SP,A0-A2,A4,A6,A9-A13
32c20: 0962                      RETS   2h

_calc_vector_speed:
32c30: 098f eb7c                 MMTM   SP,A0-A2,A4,A6,A7,A9-A13
32c50: 4dcd                      MOVE   A14,A13
32c60: b7ac ff40                 MOVE   *A13(FF40h),A12,1
32c80: b7ab ff60                 MOVE   *A13(FF60h),A11,1
32ca0: b7aa ff80                 MOVE   *A13(FF80h),A10,1
32cc0: b7a9 ffe0                 MOVE   *A13(FFE0h),A9,1
32ce0: 0570                      SETF   10h,1,0
32cf0: b5a6 ffc0                 MOVE   *A13(FFC0h),A6,0
32d10: b5a0 ffa0                 MOVE   *A13(FFA0h),A0,0
32d30: 934e                      MOVE   A10,*A14+,1
32d40: 0d5f 4980 0004            CALLA  44980h
32d70: 4508                      SUB    A8,A8
32d80: 09e2 4000 408f            MOVI   408F4000h,A2
32db0: 924e                      MOVE   A2,*A14+,1
32dc0: 930e                      MOVE   A8,*A14+,1
32dd0: 0d5f 74f0 0004            CALLA  474F0h
32e00: 0d5f 4030 0004            CALLA  44030h
32e30: a7ca                      MOVE   -*A14,A10,1
32e40: 8588                      MOVE   *A12,A8,0
32e50: 44c8                      SUB    A6,A8
32e60: 4d07                      MOVE   A8,A7
32e70: 5807                      DIVS   A0,A7
32e80: 4eee                      MOVE   A7,B14
32e90: 103e                      INC    B14
32ea0: 051e                      SEXT   B14,0
32eb0: 07a4 cf20 0004            MOVE   @4CF20h,A4,1
32ee0: 928e                      MOVE   A4,*A14+,1
32ef0: 936e                      MOVE   A11,*A14+,1
32f00: 0d5f a2b0 0004            CALLA  4A2B0h
32f30: ca00 0080                 JREQ   33750h
32f50: 8588                      MOVE   *A12,A8,0
32f60: 48c8                      CMP    A6,A8
32f70: c706                      JRGT   32FE0h
32f80: c000 00ea                 JR     33E40h
32fa0: 8584                      MOVE   *A12,A4,0
32fb0: 48c4                      CMP    A6,A4
32fc0: c600 00e6                 JRLE   33E40h
32fe0: 143e                      DEC    B14
32ff0: 051e                      SEXT   B14,0
33000: 4fd7                      MOVE   B14,A7
33010: 5c07                      MPYS   A0,A7
33020: 40c7                      ADD    A6,A7
33030: 80ec                      MOVE   A7,*A12,0
33040: 4fd8                      MOVE   B14,A8
33050: 0d5f 57c0 0004            CALLA  457C0h
33080: 934e                      MOVE   A10,*A14+,1
33090: 0d5f a3c0 0004            CALLA  4A3C0h
330c0: a7c2                      MOVE   -*A14,A2,1
330d0: 4fd7                      MOVE   B14,A7
330e0: 1427                      DEC    A7
330f0: 5c07                      MPYS   A0,A7
33100: 4cc8                      MOVE   A6,A8
33110: 2428                      SLL    1h,A8
33120: 40e8                      ADD    A7,A8
33130: 0d5f 57c0 0004            CALLA  457C0h
33160: 934e                      MOVE   A10,*A14+,1
33170: 0d5f a3c0 0004            CALLA  4A3C0h
331a0: 0d5f 4980 0004            CALLA  44980h
331d0: 4508                      SUB    A8,A8
331e0: 09e7 0000 4040            MOVI   40400000h,A7
33210: 92ee                      MOVE   A7,*A14+,1
33220: 930e                      MOVE   A8,*A14+,1
33230: 0d5f 7fa0 0004            CALLA  47FA0h
33260: 4fd8                      MOVE   B14,A8
33270: 0d5f 5470 0004            CALLA  45470h
332a0: 0d5f 7fa0 0004            CALLA  47FA0h
332d0: 4508                      SUB    A8,A8
332e0: 09e7 0000 3fe0            MOVI   3FE00000h,A7
33310: 92ee                      MOVE   A7,*A14+,1
33320: 930e                      MOVE   A8,*A14+,1
33330: 0d5f 7fa0 0004            CALLA  47FA0h
33360: 0d5f 4030 0004            CALLA  44030h
33390: a7c4                      MOVE   -*A14,A4,1
333a0: 928e                      MOVE   A4,*A14+,1
333b0: 09e4 0000 4000            MOVI   40000000h,A4
333e0: 928e                      MOVE   A4,*A14+,1
333f0: 0d5f a3c0 0004            CALLA  4A3C0h
33420: 932e                      MOVE   A9,*A14+,1
33430: 0d5f 8a20 0004            CALLA  48A20h
33460: a7c1                      MOVE   -*A14,A1,1
33470: 922e                      MOVE   A1,*A14+,1
33480: 0d5f 4980 0004            CALLA  44980h
334b0: 8588                      MOVE   *A12,A8,0
334c0: 0d5f 57c0 0004            CALLA  457C0h
334f0: 0d5f 4980 0004            CALLA  44980h
33520: 4508                      SUB    A8,A8
33530: 09e1 0000 4040            MOVI   40400000h,A1
33560: 922e                      MOVE   A1,*A14+,1
33570: 930e                      MOVE   A8,*A14+,1
33580: 0d5f 7fa0 0004            CALLA  47FA0h
335b0: 0d5f 74f0 0004            CALLA  474F0h
335e0: 0d5f 4030 0004            CALLA  44030h
33610: a7c4                      MOVE   -*A14,A4,1
33620: 924e                      MOVE   A2,*A14+,1
33630: 09e2 0000 4000            MOVI   40000000h,A2
33660: 924e                      MOVE   A2,*A14+,1
33670: 0d5f a3c0 0004            CALLA  4A3C0h
336a0: 928e                      MOVE   A4,*A14+,1
336b0: 0d5f 8c60 0004            CALLA  48C60h
336e0: a7c4                      MOVE   -*A14,A4,1
336f0: 928e                      MOVE   A4,*A14+,1
33700: 936e                      MOVE   A11,*A14+,1
33710: 0d5f 9f80 0004            CALLA  49F80h
33740: ca85                      JREQ   32FA0h
33750: 8584                      MOVE   *A12,A4,0
33760: 48c4                      CMP    A6,A4
33770: c66c                      JRLE   33E40h
33780: 103e                      INC    B14
33790: 051e                      SEXT   B14,0
337a0: 4fd8                      MOVE   B14,A8
337b0: 0d5f 57c0 0004            CALLA  457C0h
337e0: 934e                      MOVE   A10,*A14+,1
337f0: 0d5f a3c0 0004            CALLA  4A3C0h
33820: a7c2                      MOVE   -*A14,A2,1
33830: 4fd1                      MOVE   B14,A1
33840: 1421                      DEC    A1
33850: 5c01                      MPYS   A0,A1
33860: 2426                      SLL    1h,A6
33870: 4026                      ADD    A1,A6
33880: 4cc8                      MOVE   A6,A8
33890: 0d5f 57c0 0004            CALLA  457C0h
338c0: 934e                      MOVE   A10,*A14+,1
338d0: 0d5f a3c0 0004            CALLA  4A3C0h
33900: 0d5f 4980 0004            CALLA  44980h
33930: 454a                      SUB    A10,A10
33940: 09e6 0000 4040            MOVI   40400000h,A6
33970: 92ce                      MOVE   A6,*A14+,1
33980: 934e                      MOVE   A10,*A14+,1
33990: 0d5f 7fa0 0004            CALLA  47FA0h
339c0: 4fd8                      MOVE   B14,A8
339d0: 0d5f 5470 0004            CALLA  45470h
33a00: 0d5f 7fa0 0004            CALLA  47FA0h
33a30: 09e0 0000 3fe0            MOVI   3FE00000h,A0
33a60: 920e                      MOVE   A0,*A14+,1
33a70: 934e                      MOVE   A10,*A14+,1
33a80: 0d5f 7fa0 0004            CALLA  47FA0h
33ab0: 0d5f 4030 0004            CALLA  44030h
33ae0: a7c4                      MOVE   -*A14,A4,1
33af0: 928e                      MOVE   A4,*A14+,1
33b00: 09e4 0000 4000            MOVI   40000000h,A4
33b30: 928e                      MOVE   A4,*A14+,1
33b40: 0d5f a3c0 0004            CALLA  4A3C0h
33b70: 932e                      MOVE   A9,*A14+,1
33b80: 0d5f 8a20 0004            CALLA  48A20h
33bb0: a7c1                      MOVE   -*A14,A1,1
33bc0: 924e                      MOVE   A2,*A14+,1
33bd0: 928e                      MOVE   A4,*A14+,1
33be0: 0d5f a3c0 0004            CALLA  4A3C0h
33c10: 936e                      MOVE   A11,*A14+,1
33c20: 0d5f 8a20 0004            CALLA  48A20h
33c50: a7c4                      MOVE   -*A14,A4,1
33c60: 922e                      MOVE   A1,*A14+,1
33c70: 0d5f 4980 0004            CALLA  44980h
33ca0: 928e                      MOVE   A4,*A14+,1
33cb0: 0d5f 4980 0004            CALLA  44980h
33ce0: 92ce                      MOVE   A6,*A14+,1
33cf0: 934e                      MOVE   A10,*A14+,1
33d00: 0d5f 7fa0 0004            CALLA  47FA0h
33d30: 0d5f 74f0 0004            CALLA  474F0h
33d60: 920e                      MOVE   A0,*A14+,1
33d70: 934e                      MOVE   A10,*A14+,1
33d80: 0d5f 5db0 0004            CALLA  45DB0h
33db0: 0d5f 44c0 0004            CALLA  444C0h
33de0: 0508                      SEXT   A8,0
33df0: 810c                      MOVE   A8,*A12,0
33e00: 8584                      MOVE   *A12,A4,0
33e10: 1444                      SUBK   2h,A4
33e20: c425                      JRLT   34080h
33e30: c026                      JR     340A0h
33e40: 932e                      MOVE   A9,*A14+,1
33e50: 0d5f 4980 0004            CALLA  44980h
33e80: 936e                      MOVE   A11,*A14+,1
33e90: 0d5f 4980 0004            CALLA  44980h
33ec0: 454a                      SUB    A10,A10
33ed0: 09e6 0000 4040            MOVI   40400000h,A6
33f00: 92ce                      MOVE   A6,*A14+,1
33f10: 934e                      MOVE   A10,*A14+,1
33f20: 0d5f 7fa0 0004            CALLA  47FA0h
33f50: 0d5f 74f0 0004            CALLA  474F0h
33f80: 09e4 0000 3fe0            MOVI   3FE00000h,A4
33fb0: 928e                      MOVE   A4,*A14+,1
33fc0: 934e                      MOVE   A10,*A14+,1
33fd0: 0d5f 5db0 0004            CALLA  45DB0h
34000: 0d5f 44c0 0004            CALLA  444C0h
34030: 0508                      SEXT   A8,0
34040: 810c                      MOVE   A8,*A12,0
34050: 8582                      MOVE   *A12,A2,0
34060: 1442                      SUBK   2h,A2
34070: c502                      JRGE   340A0h
34080: 1844                      MOVK   2h,A4
34090: 808c                      MOVE   A4,*A12,0
340a0: b7ee 0180                 MOVE   *SP(180h),A14,1
340c0: 09af 3ed7                 MMFM   SP,A0-A2,A4,A6,A7,A9-A13
340e0: 0962                      RETS   2h

_calc_step_pos:
340f0: 098f 002c                 MMTM   SP,A10,A12,A13
34110: 4dcd                      MOVE   A14,A13
34120: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
34140: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
34160: 938e                      MOVE   A12,*A14+,1
34170: 0d5f 8a20 0004            CALLA  48A20h
341a0: a7cc                      MOVE   -*A14,A12,1
341b0: 938e                      MOVE   A12,*A14+,1
341c0: 0d5f 4980 0004            CALLA  44980h
341f0: 4508                      SUB    A8,A8
34200: 09ea 0000 4040            MOVI   40400000h,A10
34230: 934e                      MOVE   A10,*A14+,1
34240: 930e                      MOVE   A8,*A14+,1
34250: 0d5f 7fa0 0004            CALLA  47FA0h
34280: 0d5f 4030 0004            CALLA  44030h
342b0: a7cc                      MOVE   -*A14,A12,1
342c0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
342e0: 938e                      MOVE   A12,*A14+,1
342f0: 0d5f 9720 0004            CALLA  49720h
34320: a7cc                      MOVE   -*A14,A12,1
34330: 09e8 0000 4b00            MOVI   4B000000h,A8
34360: 930e                      MOVE   A8,*A14+,1
34370: 938e                      MOVE   A12,*A14+,1
34380: 0d5f 8c60 0004            CALLA  48C60h
343b0: b7cc ffe0                 MOVE   *A14(FFE0h),A12,1
343d0: 0d5f 4c60 0004            CALLA  44C60h
34400: b7ee 0080                 MOVE   *SP(80h),A14,1
34420: 09af 3400                 MMFM   SP,A10,A12,A13
34440: 0962                      RETS   2h

_x_backlash_tiga_request:
34450: a3af                      MOVE   A13,-*SP,1
34460: 4dcd                      MOVE   A14,A13
34470: afa8 ffe0                 MOVB   *A13(FFE0h),A8
34490: 05e8 dd80 0004            MOVB   A8,@4DD80h
344c0: b7ee 0040                 MOVE   *SP(40h),A14,1
344e0: 97ed                      MOVE   *SP+,A13,1
344f0: 0962                      RETS   2h

_y_backlash_tiga_request:
34500: a3af                      MOVE   A13,-*SP,1
34510: 4dcd                      MOVE   A14,A13
34520: afa8 ffe0                 MOVB   *A13(FFE0h),A8
34540: 05e8 dd90 0004            MOVB   A8,@4DD90h
34570: b7ee 0040                 MOVE   *SP(40h),A14,1
34590: 97ed                      MOVE   *SP+,A13,1
345a0: 0962                      RETS   2h

_z_backlash_tiga_request:
345b0: a3af                      MOVE   A13,-*SP,1
345c0: 4dcd                      MOVE   A14,A13
345d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
345f0: 05e8 dda0 0004            MOVB   A8,@4DDA0h
34620: b7ee 0040                 MOVE   *SP(40h),A14,1
34640: 97ed                      MOVE   *SP+,A13,1
34650: 0962                      RETS   2h

_t_backlash_tiga_request:
34660: a3af                      MOVE   A13,-*SP,1
34670: 4dcd                      MOVE   A14,A13
34680: afa8 ffe0                 MOVB   *A13(FFE0h),A8
346a0: 05e8 ddb0 0004            MOVB   A8,@4DDB0h
346d0: b7ee 0040                 MOVE   *SP(40h),A14,1
346f0: 97ed                      MOVE   *SP+,A13,1
34700: 0962                      RETS   2h

_r_backlash_tiga_request:
34710: a3af                      MOVE   A13,-*SP,1
34720: 4dcd                      MOVE   A14,A13
34730: afa8 ffe0                 MOVB   *A13(FFE0h),A8
34750: 05e8 ddc0 0004            MOVB   A8,@4DDC0h
34780: b7ee 0040                 MOVE   *SP(40h),A14,1
347a0: 97ed                      MOVE   *SP+,A13,1
347b0: 0962                      RETS   2h

_stage_motors_off_tiga_request:
347c0: a3af                      MOVE   A13,-*SP,1
347d0: 4dcd                      MOVE   A14,A13
347e0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
34800: 05e8 ddd0 0004            MOVB   A8,@4DDD0h
34830: b7ee 0040                 MOVE   *SP(40h),A14,1
34850: 97ed                      MOVE   *SP+,A13,1
34860: 0962                      RETS   2h

_set_axis_stepsizes:
34870: 098f 000c                 MMTM   SP,A12,A13
34890: 4dcd                      MOVE   A14,A13
348a0: 0b0e 0060                 ADDI   60h,A14
348c0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
348e0: a3cf                      MOVE   A14,-*SP,1
348f0: 09e8 ce80 0004            MOVI   4CE80h,A8
34920: 930e                      MOVE   A8,*A14+,1
34930: 09e8 8a40 0005            MOVI   58A40h,A8
34960: 930e                      MOVE   A8,*A14+,1
34970: 0d5f bc70 0004            CALLA  4BC70h
349a0: 07e8 d300 0004            MOVE   @4D300h,A8
349d0: 0d88 0027                 DSJ    A8,34C60h
349f0: a3cf                      MOVE   A14,-*SP,1
34a00: 09e8 cdd0 0004            MOVI   4CDD0h,A8
34a30: 930e                      MOVE   A8,*A14+,1
34a40: 09e8 8a40 0005            MOVI   58A40h,A8
34a70: 930e                      MOVE   A8,*A14+,1
34a80: 0d5f b9c0 0004            CALLA  4B9C0h
34ab0: a3cf                      MOVE   A14,-*SP,1
34ac0: 93ae                      MOVE   A13,*A14+,1
34ad0: d38e 0000                 MOVE   *A12(0h),*A14+,1
34af0: 09e8 705f 3089            MOVI   3089705Fh,A8
34b20: 930e                      MOVE   A8,*A14+,1
34b30: 0d5f 9820 0004            CALLA  49820h
34b60: 0d5f 4c60 0004            CALLA  44C60h
34b90: 930e                      MOVE   A8,*A14+,1
34ba0: 0d5f b220 0004            CALLA  4B220h
34bd0: a3cf                      MOVE   A14,-*SP,1
34be0: 93ae                      MOVE   A13,*A14+,1
34bf0: 09e8 8a40 0005            MOVI   58A40h,A8
34c20: 930e                      MOVE   A8,*A14+,1
34c30: 0d5f b9c0 0004            CALLA  4B9C0h
34c60: 07e8 d308 0004            MOVE   @4D308h,A8
34c90: 0d88 0027                 DSJ    A8,34F20h
34cb0: a3cf                      MOVE   A14,-*SP,1
34cc0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
34cf0: 930e                      MOVE   A8,*A14+,1
34d00: 09e8 8a40 0005            MOVI   58A40h,A8
34d30: 930e                      MOVE   A8,*A14+,1
34d40: 0d5f b9c0 0004            CALLA  4B9C0h
34d70: a3cf                      MOVE   A14,-*SP,1
34d80: 93ae                      MOVE   A13,*A14+,1
34d90: d38e 0020                 MOVE   *A12(20h),*A14+,1
34db0: 09e8 705f 3089            MOVI   3089705Fh,A8
34de0: 930e                      MOVE   A8,*A14+,1
34df0: 0d5f 9820 0004            CALLA  49820h
34e20: 0d5f 4c60 0004            CALLA  44C60h
34e50: 930e                      MOVE   A8,*A14+,1
34e60: 0d5f b220 0004            CALLA  4B220h
34e90: a3cf                      MOVE   A14,-*SP,1
34ea0: 93ae                      MOVE   A13,*A14+,1
34eb0: 09e8 8a40 0005            MOVI   58A40h,A8
34ee0: 930e                      MOVE   A8,*A14+,1
34ef0: 0d5f b9c0 0004            CALLA  4B9C0h
34f20: 07e8 d310 0004            MOVE   @4D310h,A8
34f50: 0d88 0027                 DSJ    A8,351E0h
34f70: a3cf                      MOVE   A14,-*SP,1
34f80: 09e8 cdd0 0004            MOVI   4CDD0h,A8
34fb0: 930e                      MOVE   A8,*A14+,1
34fc0: 09e8 8a40 0005            MOVI   58A40h,A8
34ff0: 930e                      MOVE   A8,*A14+,1
35000: 0d5f b9c0 0004            CALLA  4B9C0h
35030: a3cf                      MOVE   A14,-*SP,1
35040: 93ae                      MOVE   A13,*A14+,1
35050: d38e 0040                 MOVE   *A12(40h),*A14+,1
35070: 09e8 705f 3089            MOVI   3089705Fh,A8
350a0: 930e                      MOVE   A8,*A14+,1
350b0: 0d5f 9820 0004            CALLA  49820h
350e0: 0d5f 4c60 0004            CALLA  44C60h
35110: 930e                      MOVE   A8,*A14+,1
35120: 0d5f b220 0004            CALLA  4B220h
35150: a3cf                      MOVE   A14,-*SP,1
35160: 93ae                      MOVE   A13,*A14+,1
35170: 09e8 8a40 0005            MOVI   58A40h,A8
351a0: 930e                      MOVE   A8,*A14+,1
351b0: 0d5f b9c0 0004            CALLA  4B9C0h
351e0: 07e8 d318 0004            MOVE   @4D318h,A8
35210: 0d88 0027                 DSJ    A8,354A0h
35230: a3cf                      MOVE   A14,-*SP,1
35240: 09e8 cdd0 0004            MOVI   4CDD0h,A8
35270: 930e                      MOVE   A8,*A14+,1
35280: 09e8 8a40 0005            MOVI   58A40h,A8
352b0: 930e                      MOVE   A8,*A14+,1
352c0: 0d5f b9c0 0004            CALLA  4B9C0h
352f0: a3cf                      MOVE   A14,-*SP,1
35300: 93ae                      MOVE   A13,*A14+,1
35310: d38e 0060                 MOVE   *A12(60h),*A14+,1
35330: 09e8 705f 3089            MOVI   3089705Fh,A8
35360: 930e                      MOVE   A8,*A14+,1
35370: 0d5f 9820 0004            CALLA  49820h
353a0: 0d5f 4c60 0004            CALLA  44C60h
353d0: 930e                      MOVE   A8,*A14+,1
353e0: 0d5f b220 0004            CALLA  4B220h
35410: a3cf                      MOVE   A14,-*SP,1
35420: 93ae                      MOVE   A13,*A14+,1
35430: 09e8 8a40 0005            MOVI   58A40h,A8
35460: 930e                      MOVE   A8,*A14+,1
35470: 0d5f b9c0 0004            CALLA  4B9C0h
354a0: 07e8 d320 0004            MOVE   @4D320h,A8
354d0: 0d88 0027                 DSJ    A8,35760h
354f0: a3cf                      MOVE   A14,-*SP,1
35500: 09e8 cdd0 0004            MOVI   4CDD0h,A8
35530: 930e                      MOVE   A8,*A14+,1
35540: 09e8 8a40 0005            MOVI   58A40h,A8
35570: 930e                      MOVE   A8,*A14+,1
35580: 0d5f b9c0 0004            CALLA  4B9C0h
355b0: a3cf                      MOVE   A14,-*SP,1
355c0: 93ae                      MOVE   A13,*A14+,1
355d0: d38e 0080                 MOVE   *A12(80h),*A14+,1
355f0: 09e8 705f 3089            MOVI   3089705Fh,A8
35620: 930e                      MOVE   A8,*A14+,1
35630: 0d5f 9820 0004            CALLA  49820h
35660: 0d5f 4c60 0004            CALLA  44C60h
35690: 930e                      MOVE   A8,*A14+,1
356a0: 0d5f b220 0004            CALLA  4B220h
356d0: a3cf                      MOVE   A14,-*SP,1
356e0: 93ae                      MOVE   A13,*A14+,1
356f0: 09e8 8a40 0005            MOVI   58A40h,A8
35720: 930e                      MOVE   A8,*A14+,1
35730: 0d5f b9c0 0004            CALLA  4B9C0h
35760: 07e8 d328 0004            MOVE   @4D328h,A8
35790: 0d88 0027                 DSJ    A8,35A20h
357b0: a3cf                      MOVE   A14,-*SP,1
357c0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
357f0: 930e                      MOVE   A8,*A14+,1
35800: 09e8 8a40 0005            MOVI   58A40h,A8
35830: 930e                      MOVE   A8,*A14+,1
35840: 0d5f b9c0 0004            CALLA  4B9C0h
35870: a3cf                      MOVE   A14,-*SP,1
35880: 93ae                      MOVE   A13,*A14+,1
35890: d38e 00a0                 MOVE   *A12(A0h),*A14+,1
358b0: 09e8 705f 3089            MOVI   3089705Fh,A8
358e0: 930e                      MOVE   A8,*A14+,1
358f0: 0d5f 9820 0004            CALLA  49820h
35920: 0d5f 4c60 0004            CALLA  44C60h
35950: 930e                      MOVE   A8,*A14+,1
35960: 0d5f b220 0004            CALLA  4B220h
35990: a3cf                      MOVE   A14,-*SP,1
359a0: 93ae                      MOVE   A13,*A14+,1
359b0: 09e8 8a40 0005            MOVI   58A40h,A8
359e0: 930e                      MOVE   A8,*A14+,1
359f0: 0d5f b9c0 0004            CALLA  4B9C0h
35a20: 0d5f 1ad0 0001            CALLA  11AD0h
35a50: b7ee 0060                 MOVE   *SP(60h),A14,1
35a70: 09af 3000                 MMFM   SP,A12,A13
35a90: 0962                      RETS   2h

_set_joystick_pixelsize:
35aa0: 098f 002c                 MMTM   SP,A10,A12,A13
35ac0: 4dcd                      MOVE   A14,A13
35ad0: 07a8 d2c0 0004            MOVE   @4D2C0h,A8,1
35b00: cb04                      JRNE   35B50h
35b10: 07a8 d2e0 0004            MOVE   @4D2E0h,A8,1
35b40: ca40                      JREQ   35F50h
35b50: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
35b70: 09e8 705f 3089            MOVI   3089705Fh,A8
35ba0: 930e                      MOVE   A8,*A14+,1
35bb0: 0d5f 9820 0004            CALLA  49820h
35be0: a7cc                      MOVE   -*A14,A12,1
35bf0: 938e                      MOVE   A12,*A14+,1
35c00: 09e8 0000 40a0            MOVI   40A00000h,A8
35c30: 930e                      MOVE   A8,*A14+,1
35c40: 0d5f a3c0 0004            CALLA  4A3C0h
35c70: 09e8 0000 42c8            MOVI   42C80000h,A8
35ca0: 930e                      MOVE   A8,*A14+,1
35cb0: 0d5f 9820 0004            CALLA  49820h
35ce0: a7ca                      MOVE   -*A14,A10,1
35cf0: d60e dde0 0004            MOVE   @4DDE0h,*A14+,1
35d20: 934e                      MOVE   A10,*A14+,1
35d30: 0d5f 8c60 0004            CALLA  48C60h
35d60: 938e                      MOVE   A12,*A14+,1
35d70: 0d5f a2b0 0004            CALLA  4A2B0h
35da0: cb0c                      JRNE   35E70h
35db0: d60e dde0 0004            MOVE   @4DDE0h,*A14+,1
35de0: 934e                      MOVE   A10,*A14+,1
35df0: 0d5f 8b40 0004            CALLA  48B40h
35e20: 938e                      MOVE   A12,*A14+,1
35e30: 0d5f a090 0004            CALLA  4A090h
35e60: ca0a                      JREQ   35F10h
35e70: a3cf                      MOVE   A14,-*SP,1
35e80: 938e                      MOVE   A12,*A14+,1
35e90: 0d5f 5fb0 0003            CALLA  35FB0h
35ec0: 4d0a                      MOVE   A8,A10
35ed0: ca05                      JREQ   35F30h
35ee0: 078c dde0 0004            MOVE   A12,@4DDE0h,1
35f10: 1828                      MOVK   1h,A8
35f20: c003                      JR     35F60h
35f30: 4508                      SUB    A8,A8
35f40: c001                      JR     35F60h
35f50: 1828                      MOVK   1h,A8
35f60: b7ee 0080                 MOVE   *SP(80h),A14,1
35f80: 09af 3400                 MMFM   SP,A10,A12,A13
35fa0: 0962                      RETS   2h

_write_joystick_pixelsize:
35fb0: a3af                      MOVE   A13,-*SP,1
35fc0: 4dcd                      MOVE   A14,A13
35fd0: 0b0e 0060                 ADDI   60h,A14
35ff0: a3cf                      MOVE   A14,-*SP,1
36000: 09e8 cea0 0004            MOVI   4CEA0h,A8
36030: 930e                      MOVE   A8,*A14+,1
36040: 09e8 8a40 0005            MOVI   58A40h,A8
36070: 930e                      MOVE   A8,*A14+,1
36080: 0d5f bc70 0004            CALLA  4BC70h
360b0: a3cf                      MOVE   A14,-*SP,1
360c0: 09e8 cdd0 0004            MOVI   4CDD0h,A8
360f0: 930e                      MOVE   A8,*A14+,1
36100: 09e8 8a40 0005            MOVI   58A40h,A8
36130: 930e                      MOVE   A8,*A14+,1
36140: 0d5f b9c0 0004            CALLA  4B9C0h
36170: a3cf                      MOVE   A14,-*SP,1
36180: 93ae                      MOVE   A13,*A14+,1
36190: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
361b0: 0d5f 4c60 0004            CALLA  44C60h
361e0: 930e                      MOVE   A8,*A14+,1
361f0: 0d5f b220 0004            CALLA  4B220h
36220: a3cf                      MOVE   A14,-*SP,1
36230: 93ae                      MOVE   A13,*A14+,1
36240: 09e8 8a40 0005            MOVI   58A40h,A8
36270: 930e                      MOVE   A8,*A14+,1
36280: 0d5f b9c0 0004            CALLA  4B9C0h
362b0: 0d5f 1ad0 0001            CALLA  11AD0h
362e0: b7ee 0040                 MOVE   *SP(40h),A14,1
36300: 97ed                      MOVE   *SP+,A13,1
36310: 0962                      RETS   2h

_general_stage_cmd_tiga_req:
36320: a3af                      MOVE   A13,-*SP,1
36330: 4dcd                      MOVE   A14,A13
36340: 0b0e 0060                 ADDI   60h,A14
36360: a3cf                      MOVE   A14,-*SP,1
36370: 09e8 cec0 0004            MOVI   4CEC0h,A8
363a0: 930e                      MOVE   A8,*A14+,1
363b0: 09e8 8a40 0005            MOVI   58A40h,A8
363e0: 930e                      MOVE   A8,*A14+,1
363f0: 0d5f bc70 0004            CALLA  4BC70h
36420: afa8 ffe0                 MOVB   *A13(FFE0h),A8
36440: 3be8                      DSJS   A8,36640h
36450: a3cf                      MOVE   A14,-*SP,1
36460: 09e8 cee8 0004            MOVI   4CEE8h,A8
36490: 930e                      MOVE   A8,*A14+,1
364a0: 09e8 8a40 0005            MOVI   58A40h,A8
364d0: 930e                      MOVE   A8,*A14+,1
364e0: 0d5f b9c0 0004            CALLA  4B9C0h
36510: a3cf                      MOVE   A14,-*SP,1
36520: 93ae                      MOVE   A13,*A14+,1
36530: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
36550: 09e8 0000 4120            MOVI   41200000h,A8
36580: 930e                      MOVE   A8,*A14+,1
36590: 0d5f a3c0 0004            CALLA  4A3C0h
365c0: 0d5f 4c60 0004            CALLA  44C60h
365f0: 930e                      MOVE   A8,*A14+,1
36600: 0d5f b220 0004            CALLA  4B220h
36630: c013                      JR     36770h
36640: a3cf                      MOVE   A14,-*SP,1
36650: 09e8 cf00 0004            MOVI   4CF00h,A8
36680: 930e                      MOVE   A8,*A14+,1
36690: 09e8 8a40 0005            MOVI   58A40h,A8
366c0: 930e                      MOVE   A8,*A14+,1
366d0: 0d5f b9c0 0004            CALLA  4B9C0h
36700: a3cf                      MOVE   A14,-*SP,1
36710: 93ae                      MOVE   A13,*A14+,1
36720: 4508                      SUB    A8,A8
36730: 930e                      MOVE   A8,*A14+,1
36740: 0d5f b220 0004            CALLA  4B220h
36770: a3cf                      MOVE   A14,-*SP,1
36780: 93ae                      MOVE   A13,*A14+,1
36790: 09e8 8a40 0005            MOVI   58A40h,A8
367c0: 930e                      MOVE   A8,*A14+,1
367d0: 0d5f b9c0 0004            CALLA  4B9C0h
36800: 0d5f 1ad0 0001            CALLA  11AD0h
36830: 1428                      DEC    A8
36840: 1828                      MOVK   1h,A8
36850: ca01                      JREQ   36870h
36860: 4508                      SUB    A8,A8
36870: 0568                      SETF   8h,1,0
36880: 0508                      SEXT   A8,0
36890: b7ee 0040                 MOVE   *SP(40h),A14,1
368b0: 97ed                      MOVE   *SP+,A13,1
368c0: 0962                      RETS   2h

_FaultStage:
368d0: a3cf                      MOVE   A14,-*SP,1
368e0: 09c8 006c                 MOVI   6Ch,A8
36900: 930e                      MOVE   A8,*A14+,1
36910: 09e8 86a0 0005            MOVI   586A0h,A8
36940: 930e                      MOVE   A8,*A14+,1
36950: 09e8 5453 4647            MOVI   46475453h,A8
36980: 930e                      MOVE   A8,*A14+,1
36990: 1968                      MOVK   Bh,A8
369a0: 930e                      MOVE   A8,*A14+,1
369b0: 0d5f 0000 0000            CALLA  0h
369e0: a3cf                      MOVE   A14,-*SP,1
369f0: 4508                      SUB    A8,A8
36a00: 930e                      MOVE   A8,*A14+,1
36a10: 1a08                      MOVK   10h,A8
36a20: 930e                      MOVE   A8,*A14+,1
36a30: 0d5f 0000 0000            CALLA  0h
36a60: 1828                      MOVK   1h,A8
36a70: 05e8 dd00 0004            MOVB   A8,@4DD00h
36aa0: 0d5f 6b20 0003            CALLA  36B20h
36ad0: 4508                      SUB    A8,A8
36ae0: 05e8 dd00 0004            MOVB   A8,@4DD00h
36b10: c0ec                      JR     369E0h

_stage_fault_routine:
36b20: 098f 0028                 MMTM   SP,A10,A12
36b40: 4508                      SUB    A8,A8
36b50: 05e8 d4f0 0005            MOVB   A8,@5D4F0h
36b80: 05e8 d510 0005            MOVB   A8,@5D510h
36bb0: 05e8 d500 0005            MOVB   A8,@5D500h
36be0: 1968                      MOVK   Bh,A8
36bf0: 0788 cae0 0005            MOVE   A8,@5CAE0h,1
36c20: a3cf                      MOVE   A14,-*SP,1
36c30: 09e8 cf40 0004            MOVI   4CF40h,A8
36c60: 930e                      MOVE   A8,*A14+,1
36c70: 09e8 cb00 0005            MOVI   5CB00h,A8
36ca0: 930e                      MOVE   A8,*A14+,1
36cb0: 0d5f bc70 0004            CALLA  4BC70h
36ce0: a3cf                      MOVE   A14,-*SP,1
36cf0: 09e8 cb00 0005            MOVI   5CB00h,A8
36d20: 930e                      MOVE   A8,*A14+,1
36d30: 0d5f bd90 0004            CALLA  4BD90h
36d60: 1088                      ADDK   4h,A8
36d70: 0788 cac0 0005            MOVE   A8,@5CAC0h,1
36da0: a3cf                      MOVE   A14,-*SP,1
36db0: 09e8 cac0 0005            MOVI   5CAC0h,A8
36de0: 930e                      MOVE   A8,*A14+,1
36df0: 1848                      MOVK   2h,A8
36e00: 930e                      MOVE   A8,*A14+,1
36e10: 0d5f 0000 0000            CALLA  0h
36e40: 4f0e                      MOVE   A8,B14
36e50: cb00 0158                 JRNE   383F0h
36e70: a3cf                      MOVE   A14,-*SP,1
36e80: 4508                      SUB    A8,A8
36e90: 930e                      MOVE   A8,*A14+,1
36ea0: 09e8 8300 0005            MOVI   58300h,A8
36ed0: 930e                      MOVE   A8,*A14+,1
36ee0: 1968                      MOVK   Bh,A8
36ef0: 930e                      MOVE   A8,*A14+,1
36f00: 0d5f 0000 0000            CALLA  0h
36f30: 4f0e                      MOVE   A8,B14
36f40: cb00 0149                 JRNE   383F0h
36f60: 07e8 8348 0005            MOVE   @58348h,A8
36f90: 0b48 ffcf                 CMPI   30h,A8
36fb0: cb00 0142                 JRNE   383F0h
36fd0: 07e8 8350 0005            MOVE   @58350h,A8
37000: 0b48 ffcf                 CMPI   30h,A8
37020: cb00 013b                 JRNE   383F0h
37040: 09ec 8340 0005            MOVI   58340h,A12
37070: a3cf                      MOVE   A14,-*SP,1
37080: 1808                      MOVK   20h,A8
37090: 930e                      MOVE   A8,*A14+,1
370a0: 938e                      MOVE   A12,*A14+,1
370b0: 0d5f bb10 0004            CALLA  4BB10h
370e0: 4d0c                      MOVE   A8,A12
370f0: ca00 012e                 JREQ   383F0h
37110: a3cf                      MOVE   A14,-*SP,1
37120: 110c                      ADDK   8h,A12
37130: 938e                      MOVE   A12,*A14+,1
37140: 0d5f a540 0001            CALLA  1A540h
37170: 4d0a                      MOVE   A8,A10
37180: 1828                      MOVK   1h,A8
37190: 510a                      AND    A8,A10
371a0: 182a                      MOVK   1h,A10
371b0: cb01                      JRNE   371D0h
371c0: 454a                      SUB    A10,A10
371d0: 05ea d2b0 0004            MOVB   A10,@4D2B0h
37200: 07ea d300 0004            MOVE   @4D300h,A10
37230: 0d8a 0028                 DSJ    A10,374D0h
37250: a3cf                      MOVE   A14,-*SP,1
37260: 180a                      MOVK   20h,A10
37270: 934e                      MOVE   A10,*A14+,1
37280: 938e                      MOVE   A12,*A14+,1
37290: 0d5f bb10 0004            CALLA  4BB10h
372c0: 4d0c                      MOVE   A8,A12
372d0: ca00 0110                 JREQ   383F0h
372f0: a3cf                      MOVE   A14,-*SP,1
37300: 110c                      ADDK   8h,A12
37310: 938e                      MOVE   A12,*A14+,1
37320: 0d5f a540 0001            CALLA  1A540h
37350: 4d0a                      MOVE   A8,A10
37360: a3cf                      MOVE   A14,-*SP,1
37370: 934e                      MOVE   A10,*A14+,1
37380: 0d5f 8430 0003            CALLA  38430h
373b0: 4d0a                      MOVE   A8,A10
373c0: 07e8 d230 0004            MOVE   @4D230h,A8
373f0: 4948                      CMP    A10,A8
37400: ca0c                      JREQ   374D0h
37410: 05ea d230 0004            MOVB   A10,@4D230h
37440: 07a8 d290 0004            MOVE   @4D290h,A8,1
37470: 0ba8 0200 0000            ORI    200h,A8
374a0: 0788 d290 0004            MOVE   A8,@4D290h,1
374d0: 07ea d308 0004            MOVE   @4D308h,A10
37500: 0d8a 0028                 DSJ    A10,377A0h
37520: a3cf                      MOVE   A14,-*SP,1
37530: 180a                      MOVK   20h,A10
37540: 934e                      MOVE   A10,*A14+,1
37550: 938e                      MOVE   A12,*A14+,1
37560: 0d5f bb10 0004            CALLA  4BB10h
37590: 4d0c                      MOVE   A8,A12
375a0: ca00 00e3                 JREQ   383F0h
375c0: a3cf                      MOVE   A14,-*SP,1
375d0: 110c                      ADDK   8h,A12
375e0: 938e                      MOVE   A12,*A14+,1
375f0: 0d5f a540 0001            CALLA  1A540h
37620: 4d0a                      MOVE   A8,A10
37630: a3cf                      MOVE   A14,-*SP,1
37640: 934e                      MOVE   A10,*A14+,1
37650: 0d5f 8430 0003            CALLA  38430h
37680: 4d0a                      MOVE   A8,A10
37690: 07e8 d238 0004            MOVE   @4D238h,A8
376c0: 4948                      CMP    A10,A8
376d0: ca0c                      JREQ   377A0h
376e0: 05ea d238 0004            MOVB   A10,@4D238h
37710: 07a8 d290 0004            MOVE   @4D290h,A8,1
37740: 0ba8 0200 0000            ORI    200h,A8
37770: 0788 d290 0004            MOVE   A8,@4D290h,1
377a0: 07ea d310 0004            MOVE   @4D310h,A10
377d0: 0d8a 0028                 DSJ    A10,37A70h
377f0: a3cf                      MOVE   A14,-*SP,1
37800: 180a                      MOVK   20h,A10
37810: 934e                      MOVE   A10,*A14+,1
37820: 938e                      MOVE   A12,*A14+,1
37830: 0d5f bb10 0004            CALLA  4BB10h
37860: 4d0c                      MOVE   A8,A12
37870: ca00 00b6                 JREQ   383F0h
37890: a3cf                      MOVE   A14,-*SP,1
378a0: 110c                      ADDK   8h,A12
378b0: 938e                      MOVE   A12,*A14+,1
378c0: 0d5f a540 0001            CALLA  1A540h
378f0: 4d0a                      MOVE   A8,A10
37900: a3cf                      MOVE   A14,-*SP,1
37910: 934e                      MOVE   A10,*A14+,1
37920: 0d5f 8430 0003            CALLA  38430h
37950: 4d0a                      MOVE   A8,A10
37960: 07e8 d240 0004            MOVE   @4D240h,A8
37990: 4948                      CMP    A10,A8
379a0: ca0c                      JREQ   37A70h
379b0: 05ea d240 0004            MOVB   A10,@4D240h
379e0: 07a8 d290 0004            MOVE   @4D290h,A8,1
37a10: 0ba8 0200 0000            ORI    200h,A8
37a40: 0788 d290 0004            MOVE   A8,@4D290h,1
37a70: 07ea d318 0004            MOVE   @4D318h,A10
37aa0: 0d8a 0028                 DSJ    A10,37D40h
37ac0: a3cf                      MOVE   A14,-*SP,1
37ad0: 180a                      MOVK   20h,A10
37ae0: 934e                      MOVE   A10,*A14+,1
37af0: 938e                      MOVE   A12,*A14+,1
37b00: 0d5f bb10 0004            CALLA  4BB10h
37b30: 4d0c                      MOVE   A8,A12
37b40: ca00 0089                 JREQ   383F0h
37b60: a3cf                      MOVE   A14,-*SP,1
37b70: 110c                      ADDK   8h,A12
37b80: 938e                      MOVE   A12,*A14+,1
37b90: 0d5f a540 0001            CALLA  1A540h
37bc0: 4d0a                      MOVE   A8,A10
37bd0: a3cf                      MOVE   A14,-*SP,1
37be0: 934e                      MOVE   A10,*A14+,1
37bf0: 0d5f 8430 0003            CALLA  38430h
37c20: 4d0a                      MOVE   A8,A10
37c30: 07e8 d248 0004            MOVE   @4D248h,A8
37c60: 4948                      CMP    A10,A8
37c70: ca0c                      JREQ   37D40h
37c80: 05ea d248 0004            MOVB   A10,@4D248h
37cb0: 07a8 d290 0004            MOVE   @4D290h,A8,1
37ce0: 0ba8 0200 0000            ORI    200h,A8
37d10: 0788 d290 0004            MOVE   A8,@4D290h,1
37d40: 07ea d320 0004            MOVE   @4D320h,A10
37d70: 0d8a 0027                 DSJ    A10,38000h
37d90: a3cf                      MOVE   A14,-*SP,1
37da0: 180a                      MOVK   20h,A10
37db0: 934e                      MOVE   A10,*A14+,1
37dc0: 938e                      MOVE   A12,*A14+,1
37dd0: 0d5f bb10 0004            CALLA  4BB10h
37e00: 4d0c                      MOVE   A8,A12
37e10: ca5d                      JREQ   383F0h
37e20: a3cf                      MOVE   A14,-*SP,1
37e30: 110c                      ADDK   8h,A12
37e40: 938e                      MOVE   A12,*A14+,1
37e50: 0d5f a540 0001            CALLA  1A540h
37e80: 4d0a                      MOVE   A8,A10
37e90: a3cf                      MOVE   A14,-*SP,1
37ea0: 934e                      MOVE   A10,*A14+,1
37eb0: 0d5f 8430 0003            CALLA  38430h
37ee0: 4d0a                      MOVE   A8,A10
37ef0: 07e8 d250 0004            MOVE   @4D250h,A8
37f20: 4948                      CMP    A10,A8
37f30: ca0c                      JREQ   38000h
37f40: 05ea d250 0004            MOVB   A10,@4D250h
37f70: 07a8 d290 0004            MOVE   @4D290h,A8,1
37fa0: 0ba8 0200 0000            ORI    200h,A8
37fd0: 0788 d290 0004            MOVE   A8,@4D290h,1
38000: 07ea d328 0004            MOVE   @4D328h,A10
38030: 0d8a 0027                 DSJ    A10,382C0h
38050: a3cf                      MOVE   A14,-*SP,1
38060: 180a                      MOVK   20h,A10
38070: 934e                      MOVE   A10,*A14+,1
38080: 938e                      MOVE   A12,*A14+,1
38090: 0d5f bb10 0004            CALLA  4BB10h
380c0: 4d0c                      MOVE   A8,A12
380d0: ca31                      JREQ   383F0h
380e0: a3cf                      MOVE   A14,-*SP,1
380f0: 110c                      ADDK   8h,A12
38100: 938e                      MOVE   A12,*A14+,1
38110: 0d5f a540 0001            CALLA  1A540h
38140: 4d0a                      MOVE   A8,A10
38150: a3cf                      MOVE   A14,-*SP,1
38160: 934e                      MOVE   A10,*A14+,1
38170: 0d5f 8430 0003            CALLA  38430h
381a0: 4d0a                      MOVE   A8,A10
381b0: 07ec d258 0004            MOVE   @4D258h,A12
381e0: 494c                      CMP    A10,A12
381f0: ca0c                      JREQ   382C0h
38200: 05ea d258 0004            MOVB   A10,@4D258h
38230: 07ac d290 0004            MOVE   @4D290h,A12,1
38260: 0bac 0200 0000            ORI    200h,A12
38290: 078c d290 0004            MOVE   A12,@4D290h,1
382c0: 0340 d500 0005 db60 0004  MOVB   @5D500h,@4DB60h
38310: 0340 d510 0005 db40 0004  MOVB   @5D510h,@4DB40h
38360: 0340 d4f0 0005 db50 0004  MOVB   @5D4F0h,@4DB50h
383b0: 1828                      MOVK   1h,A8
383c0: 09af 1400                 MMFM   SP,A10,A12
383e0: 0960                      RETS   
383f0: 4508                      SUB    A8,A8
38400: 09af 1400                 MMFM   SP,A10,A12
38420: 0960                      RETS   

_check_limits:
38430: a3af                      MOVE   A13,-*SP,1
38440: 4dcd                      MOVE   A14,A13
38450: afa8 ffe0                 MOVB   *A13(FFE0h),A8
38470: 4f0e                      MOVE   A8,B14
38480: ca36                      JREQ   387F0h
38490: 1ffe                      BTST   0h,B14
384a0: cb2f                      JRNE   387A0h
384b0: 1f5e                      BTST   5h,B14
384c0: cb27                      JRNE   38740h
384d0: 1fde                      BTST   1h,B14
384e0: ca0d                      JREQ   385C0h
384f0: 07a8 9100 0005            MOVE   @59100h,A8,1
38520: 1468                      SUBK   3h,A8
38530: cb02                      JRNE   38560h
38540: 4508                      SUB    A8,A8
38550: c02a                      JR     38800h
38560: 1828                      MOVK   1h,A8
38570: 05e8 d510 0005            MOVB   A8,@5D510h
385a0: 1848                      MOVK   2h,A8
385b0: c024                      JR     38800h
385c0: 1f7e                      BTST   4h,B14
385d0: cb10                      JRNE   386E0h
385e0: 1fbe                      BTST   2h,B14
385f0: cb08                      JRNE   38680h
38600: 1f9e                      BTST   3h,B14
38610: ca1e                      JREQ   38800h
38620: 1828                      MOVK   1h,A8
38630: 05e8 d500 0005            MOVB   A8,@5D500h
38660: 1888                      MOVK   4h,A8
38670: c018                      JR     38800h
38680: 1828                      MOVK   1h,A8
38690: 05e8 d500 0005            MOVB   A8,@5D500h
386c0: 1868                      MOVK   3h,A8
386d0: c012                      JR     38800h
386e0: 1828                      MOVK   1h,A8
386f0: 05e8 d510 0005            MOVB   A8,@5D510h
38720: 18a8                      MOVK   5h,A8
38730: c00c                      JR     38800h
38740: 1828                      MOVK   1h,A8
38750: 05e8 d4f0 0005            MOVB   A8,@5D4F0h
38780: 18c8                      MOVK   6h,A8
38790: c006                      JR     38800h
387a0: 1828                      MOVK   1h,A8
387b0: 05e8 d4f0 0005            MOVB   A8,@5D4F0h
387e0: c001                      JR     38800h
387f0: 4508                      SUB    A8,A8
38800: b7ee 0040                 MOVE   *SP(40h),A14,1
38820: 97ed                      MOVE   *SP+,A13,1
38830: 0962                      RETS   2h

_cp_stg_init:
38840: a38f                      MOVE   A12,-*SP,1
38850: a3cf                      MOVE   A14,-*SP,1
38860: 09e8 0000 0000            MOVI   0h,A8
38890: 930e                      MOVE   A8,*A14+,1
388a0: 4508                      SUB    A8,A8
388b0: 930e                      MOVE   A8,*A14+,1
388c0: 09c8 0400                 MOVI   400h,A8
388e0: 930e                      MOVE   A8,*A14+,1
388f0: 09e8 5453 4d47            MOVI   4D475453h,A8
38920: 930e                      MOVE   A8,*A14+,1
38930: 1888                      MOVK   4h,A8
38940: 930e                      MOVE   A8,*A14+,1
38950: 0d5f 0000 0000            CALLA  0h
38980: 4d0c                      MOVE   A8,A12
38990: cb06                      JRNE   38A00h
389a0: a3cf                      MOVE   A14,-*SP,1
389b0: 188c                      MOVK   4h,A12
389c0: 938e                      MOVE   A12,*A14+,1
389d0: 0d5f 0000 0000            CALLA  0h
38a00: a3cf                      MOVE   A14,-*SP,1
38a10: 09e8 68d0 0003            MOVI   368D0h,A8
38a40: 930e                      MOVE   A8,*A14+,1
38a50: 4508                      SUB    A8,A8
38a60: 930e                      MOVE   A8,*A14+,1
38a70: 09c8 0400                 MOVI   400h,A8
38a90: 930e                      MOVE   A8,*A14+,1
38aa0: 09e8 5453 4647            MOVI   46475453h,A8
38ad0: 930e                      MOVE   A8,*A14+,1
38ae0: 1968                      MOVK   Bh,A8
38af0: 930e                      MOVE   A8,*A14+,1
38b00: 0d5f 0000 0000            CALLA  0h
38b30: 4d0c                      MOVE   A8,A12
38b40: cb06                      JRNE   38BB0h
38b50: a3cf                      MOVE   A14,-*SP,1
38b60: 196c                      MOVK   Bh,A12
38b70: 938e                      MOVE   A12,*A14+,1
38b80: 0d5f 0000 0000            CALLA  0h
38bb0: a3cf                      MOVE   A14,-*SP,1
38bc0: 09c8 0032                 MOVI   32h,A8
38be0: 930e                      MOVE   A8,*A14+,1
38bf0: 09e8 d360 0005            MOVI   5D360h,A8
38c20: 930e                      MOVE   A8,*A14+,1
38c30: 09e8 5453 4d47            MOVI   4D475453h,A8
38c60: 930e                      MOVE   A8,*A14+,1
38c70: 1988                      MOVK   Ch,A8
38c80: 930e                      MOVE   A8,*A14+,1
38c90: 0d5f 0000 0000            CALLA  0h
38cc0: 4d0c                      MOVE   A8,A12
38cd0: 4d88                      MOVE   A12,A8
38ce0: 97ec                      MOVE   *SP+,A12,1
38cf0: 0960                      RETS   

_cp_s_status:
38d00: 098f 002c                 MMTM   SP,A10,A12,A13
38d20: 4dcd                      MOVE   A14,A13
38d30: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
38d50: 07a8 d290 0004            MOVE   @4D290h,A8,1
38d80: b30c 0150                 MOVE   A8,*A12(150h),1
38da0: 0b88 afff ffff            ANDI   5000h,A8
38dd0: 0788 d290 0004            MOVE   A8,@4D290h,1
38e00: b788 0150                 MOVE   *A12(150h),A8,1
38e20: 1f68                      BTST   4h,A8
38e30: ca09                      JREQ   38ED0h
38e40: 07a8 d290 0004            MOVE   @4D290h,A8,1
38e70: 0b88 bfff ffff            ANDI   4000h,A8
38ea0: 0788 d290 0004            MOVE   A8,@4D290h,1
38ed0: b788 0150                 MOVE   *A12(150h),A8,1
38ef0: 1e08                      BTST   Fh,A8
38f00: ca09                      JREQ   38FA0h
38f10: 07a8 d290 0004            MOVE   @4D290h,A8,1
38f40: 0b88 efff ffff            ANDI   1000h,A8
38f70: 0788 d290 0004            MOVE   A8,@4D290h,1
38fa0: 07e8 d300 0004            MOVE   @4D300h,A8
38fd0: 3a68                      DSJS   A8,39110h
38fe0: 07a8 d140 0004            MOVE   @4D140h,A8,1
39010: 830c                      MOVE   A8,*A12,1
39020: 07e8 d200 0004            MOVE   @4D200h,A8
39050: ad0c 00c0                 MOVB   A8,*A12(C0h)
39070: 07e8 d230 0004            MOVE   @4D230h,A8
390a0: ad0c 00f0                 MOVB   A8,*A12(F0h)
390c0: 07e8 d260 0004            MOVE   @4D260h,A8
390f0: ad0c 0120                 MOVB   A8,*A12(120h)
39110: 07e8 d308 0004            MOVE   @4D308h,A8
39140: 3a88                      DSJS   A8,39290h
39150: 07a8 d160 0004            MOVE   @4D160h,A8,1
39180: b30c 0020                 MOVE   A8,*A12(20h),1
391a0: 07e8 d208 0004            MOVE   @4D208h,A8
391d0: ad0c 00c8                 MOVB   A8,*A12(C8h)
391f0: 07e8 d238 0004            MOVE   @4D238h,A8
39220: ad0c 00f8                 MOVB   A8,*A12(F8h)
39240: 07e8 d268 0004            MOVE   @4D268h,A8
39270: ad0c 0128                 MOVB   A8,*A12(128h)
39290: 07e8 d310 0004            MOVE   @4D310h,A8
392c0: 3a88                      DSJS   A8,39410h
392d0: 07a8 d180 0004            MOVE   @4D180h,A8,1
39300: b30c 0040                 MOVE   A8,*A12(40h),1
39320: 07e8 d210 0004            MOVE   @4D210h,A8
39350: ad0c 00d0                 MOVB   A8,*A12(D0h)
39370: 07e8 d240 0004            MOVE   @4D240h,A8
393a0: ad0c 0100                 MOVB   A8,*A12(100h)
393c0: 07e8 d270 0004            MOVE   @4D270h,A8
393f0: ad0c 0130                 MOVB   A8,*A12(130h)
39410: 07e8 d318 0004            MOVE   @4D318h,A8
39440: 0d88 003c                 DSJ    A8,39820h
39460: 07a8 d1a0 0004            MOVE   @4D1A0h,A8,1
39490: b30c 0060                 MOVE   A8,*A12(60h),1
394b0: 07e8 d218 0004            MOVE   @4D218h,A8
394e0: ad0c 00d8                 MOVB   A8,*A12(D8h)
39500: 07e8 d248 0004            MOVE   @4D248h,A8
39530: ad0c 0108                 MOVB   A8,*A12(108h)
39550: 07e8 d278 0004            MOVE   @4D278h,A8
39580: ad0c 0138                 MOVB   A8,*A12(138h)
395a0: d38e 0060                 MOVE   *A12(60h),*A14+,1
395c0: 0d5f 4980 0004            CALLA  44980h
395f0: 4508                      SUB    A8,A8
39600: 09ea 8000 4056            MOVI   40568000h,A10
39630: 934e                      MOVE   A10,*A14+,1
39640: 930e                      MOVE   A8,*A14+,1
39650: 0d5f 6e40 0004            CALLA  46E40h
39680: ca05                      JREQ   396E0h
39690: 09e8 0000 42b4            MOVI   42B40000h,A8
396c0: b30c 0060                 MOVE   A8,*A12(60h),1
396e0: d38e 0060                 MOVE   *A12(60h),*A14+,1
39700: 0d5f 4980 0004            CALLA  44980h
39730: 4508                      SUB    A8,A8
39740: 09ea 8000 c056            MOVI   C0568000h,A10
39770: 934e                      MOVE   A10,*A14+,1
39780: 930e                      MOVE   A8,*A14+,1
39790: 0d5f 6e00 0004            CALLA  46E00h
397c0: ca05                      JREQ   39820h
397d0: 09e8 0000 c2b4            MOVI   C2B40000h,A8
39800: b30c 0060                 MOVE   A8,*A12(60h),1
39820: 07ea d320 0004            MOVE   @4D320h,A10
39850: 0d8a 0076                 DSJ    A10,39FD0h
39870: 07aa d1c0 0004            MOVE   @4D1C0h,A10,1
398a0: b34c 0080                 MOVE   A10,*A12(80h),1
398c0: 07e8 d220 0004            MOVE   @4D220h,A8
398f0: ad0c 00e0                 MOVB   A8,*A12(E0h)
39910: 07e8 d250 0004            MOVE   @4D250h,A8
39940: ad0c 0110                 MOVB   A8,*A12(110h)
39960: 07e8 d280 0004            MOVE   @4D280h,A8
39990: ad0c 0140                 MOVB   A8,*A12(140h)
399b0: d38e 0080                 MOVE   *A12(80h),*A14+,1
399d0: 0d5f 4980 0004            CALLA  44980h
39a00: 4508                      SUB    A8,A8
39a10: 09ea 8000 4076            MOVI   40768000h,A10
39a40: 934e                      MOVE   A10,*A14+,1
39a50: 930e                      MOVE   A8,*A14+,1
39a60: 0d5f 6e40 0004            CALLA  46E40h
39a90: ca25                      JREQ   39CF0h
39aa0: 454a                      SUB    A10,A10
39ab0: 09e8 8000 4076            MOVI   40768000h,A8
39ae0: 930e                      MOVE   A8,*A14+,1
39af0: 934e                      MOVE   A10,*A14+,1
39b00: 4d88                      MOVE   A12,A8
39b10: 4d0a                      MOVE   A8,A10
39b20: d34e 0080                 MOVE   *A10(80h),*A14+,1
39b40: 0d5f 4980 0004            CALLA  44980h
39b70: 0d5f 5ad0 0004            CALLA  45AD0h
39ba0: 0d5f 4030 0004            CALLA  44030h
39bd0: a7c8                      MOVE   -*A14,A8,1
39be0: b30a 0080                 MOVE   A8,*A10(80h),1
39c00: d38e 0080                 MOVE   *A12(80h),*A14+,1
39c20: 0d5f 4980 0004            CALLA  44980h
39c50: 454a                      SUB    A10,A10
39c60: 09e8 8000 4076            MOVI   40768000h,A8
39c90: 930e                      MOVE   A8,*A14+,1
39ca0: 934e                      MOVE   A10,*A14+,1
39cb0: 0d5f 6de0 0004            CALLA  46DE0h
39ce0: cadb                      JREQ   39AA0h
39cf0: d38e 0080                 MOVE   *A12(80h),*A14+,1
39d10: 0d5f 4980 0004            CALLA  44980h
39d40: 454a                      SUB    A10,A10
39d50: 934e                      MOVE   A10,*A14+,1
39d60: 934e                      MOVE   A10,*A14+,1
39d70: 0d5f 6e00 0004            CALLA  46E00h
39da0: ca22                      JREQ   39FD0h
39db0: 454a                      SUB    A10,A10
39dc0: 09e8 8000 4076            MOVI   40768000h,A8
39df0: 930e                      MOVE   A8,*A14+,1
39e00: 934e                      MOVE   A10,*A14+,1
39e10: 4d88                      MOVE   A12,A8
39e20: 4d0a                      MOVE   A8,A10
39e30: d34e 0080                 MOVE   *A10(80h),*A14+,1
39e50: 0d5f 4980 0004            CALLA  44980h
39e80: 0d5f 5db0 0004            CALLA  45DB0h
39eb0: 0d5f 4030 0004            CALLA  44030h
39ee0: a7c8                      MOVE   -*A14,A8,1
39ef0: b30a 0080                 MOVE   A8,*A10(80h),1
39f10: d38e 0080                 MOVE   *A12(80h),*A14+,1
39f30: 0d5f 4980 0004            CALLA  44980h
39f60: 454a                      SUB    A10,A10
39f70: 934e                      MOVE   A10,*A14+,1
39f80: 934e                      MOVE   A10,*A14+,1
39f90: 0d5f 6e20 0004            CALLA  46E20h
39fc0: cade                      JREQ   39DB0h
39fd0: 07ea d328 0004            MOVE   @4D328h,A10
3a000: 3a8a                      DSJS   A10,3A150h
3a010: 07aa d1e0 0004            MOVE   @4D1E0h,A10,1
3a040: b34c 00a0                 MOVE   A10,*A12(A0h),1
3a060: 07e8 d228 0004            MOVE   @4D228h,A8
3a090: ad0c 00e8                 MOVB   A8,*A12(E8h)
3a0b0: 07e8 d258 0004            MOVE   @4D258h,A8
3a0e0: ad0c 0118                 MOVB   A8,*A12(118h)
3a100: 07e8 d288 0004            MOVE   @4D288h,A8
3a130: ad0c 0148                 MOVB   A8,*A12(148h)
3a150: 07ea d2b0 0004            MOVE   @4D2B0h,A10
3a180: ad4c 0170                 MOVB   A10,*A12(170h)
3a1a0: 0d5f 19f0 0004            CALLA  419F0h
3a1d0: ad0c 0178                 MOVB   A8,*A12(178h)
3a1f0: 07aa d2c0 0004            MOVE   @4D2C0h,A10,1
3a220: b34c 0180                 MOVE   A10,*A12(180h),1
3a240: 07a8 d2e0 0004            MOVE   @4D2E0h,A8,1
3a270: b30c 01a0                 MOVE   A8,*A12(1A0h),1
3a290: b7ee 0080                 MOVE   *SP(80h),A14,1
3a2b0: 09af 3400                 MMFM   SP,A10,A12,A13
3a2d0: 0962                      RETS   2h

_cp_s_set_data:
3a2e0: 098f 000c                 MMTM   SP,A12,A13
3a300: 4dcd                      MOVE   A14,A13
3a310: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3a330: 07e8 d300 0004            MOVE   @4D300h,A8
3a360: 0d88 002d                 DSJ    A8,3A650h
3a380: 07a8 d7c0 0004            MOVE   @4D7C0h,A8,1
3a3b0: 830c                      MOVE   A8,*A12,1
3a3c0: 07a8 d880 0004            MOVE   @4D880h,A8,1
3a3f0: b30c 00c0                 MOVE   A8,*A12(C0h),1
3a410: 07a8 d400 0004            MOVE   @4D400h,A8,1
3a440: b30c 0180                 MOVE   A8,*A12(180h),1
3a460: 07a8 d700 0004            MOVE   @4D700h,A8,1
3a490: b30c 0240                 MOVE   A8,*A12(240h),1
3a4b0: 0570                      SETF   10h,1,0
3a4c0: 05a8 da60 0004            MOVE   @4DA60h,A8,0
3a4f0: b10c 0300                 MOVE   A8,*A12(300h),0
3a510: 05a8 dac0 0004            MOVE   @4DAC0h,A8,0
3a540: b10c 0360                 MOVE   A8,*A12(360h),0
3a560: 05a8 d9a0 0004            MOVE   @4D9A0h,A8,0
3a590: b10c 03c0                 MOVE   A8,*A12(3C0h),0
3a5b0: 05a8 da00 0004            MOVE   @4DA00h,A8,0
3a5e0: b10c 0420                 MOVE   A8,*A12(420h),0
3a600: 07e8 dd40 0004            MOVE   @4DD40h,A8
3a630: ad0c 0480                 MOVB   A8,*A12(480h)
3a650: 07e8 d308 0004            MOVE   @4D308h,A8
3a680: 0d88 002e                 DSJ    A8,3A980h
3a6a0: 07a8 d7e0 0004            MOVE   @4D7E0h,A8,1
3a6d0: b30c 0020                 MOVE   A8,*A12(20h),1
3a6f0: 07a8 d8a0 0004            MOVE   @4D8A0h,A8,1
3a720: b30c 00e0                 MOVE   A8,*A12(E0h),1
3a740: 07a8 d420 0004            MOVE   @4D420h,A8,1
3a770: b30c 01a0                 MOVE   A8,*A12(1A0h),1
3a790: 07a8 d720 0004            MOVE   @4D720h,A8,1
3a7c0: b30c 0260                 MOVE   A8,*A12(260h),1
3a7e0: 0570                      SETF   10h,1,0
3a7f0: 05a8 da70 0004            MOVE   @4DA70h,A8,0
3a820: b10c 0310                 MOVE   A8,*A12(310h),0
3a840: 05a8 dad0 0004            MOVE   @4DAD0h,A8,0
3a870: b10c 0370                 MOVE   A8,*A12(370h),0
3a890: 05a8 d9b0 0004            MOVE   @4D9B0h,A8,0
3a8c0: b10c 03d0                 MOVE   A8,*A12(3D0h),0
3a8e0: 05a8 da10 0004            MOVE   @4DA10h,A8,0
3a910: b10c 0430                 MOVE   A8,*A12(430h),0
3a930: 07e8 dd48 0004            MOVE   @4DD48h,A8
3a960: ad0c 0488                 MOVB   A8,*A12(488h)
3a980: 07e8 d310 0004            MOVE   @4D310h,A8
3a9b0: 0d88 002e                 DSJ    A8,3ACB0h
3a9d0: 07a8 d800 0004            MOVE   @4D800h,A8,1
3aa00: b30c 0040                 MOVE   A8,*A12(40h),1
3aa20: 07a8 d8c0 0004            MOVE   @4D8C0h,A8,1
3aa50: b30c 0100                 MOVE   A8,*A12(100h),1
3aa70: 07a8 d440 0004            MOVE   @4D440h,A8,1
3aaa0: b30c 01c0                 MOVE   A8,*A12(1C0h),1
3aac0: 07a8 d740 0004            MOVE   @4D740h,A8,1
3aaf0: b30c 0280                 MOVE   A8,*A12(280h),1
3ab10: 0570                      SETF   10h,1,0
3ab20: 05a8 da80 0004            MOVE   @4DA80h,A8,0
3ab50: b10c 0320                 MOVE   A8,*A12(320h),0
3ab70: 05a8 dae0 0004            MOVE   @4DAE0h,A8,0
3aba0: b10c 0380                 MOVE   A8,*A12(380h),0
3abc0: 05a8 d9c0 0004            MOVE   @4D9C0h,A8,0
3abf0: b10c 03e0                 MOVE   A8,*A12(3E0h),0
3ac10: 05a8 da20 0004            MOVE   @4DA20h,A8,0
3ac40: b10c 0440                 MOVE   A8,*A12(440h),0
3ac60: 07e8 dd50 0004            MOVE   @4DD50h,A8
3ac90: ad0c 0490                 MOVB   A8,*A12(490h)
3acb0: 07e8 d318 0004            MOVE   @4D318h,A8
3ace0: 0d88 002e                 DSJ    A8,3AFE0h
3ad00: 07a8 d820 0004            MOVE   @4D820h,A8,1
3ad30: b30c 0060                 MOVE   A8,*A12(60h),1
3ad50: 07a8 d8e0 0004            MOVE   @4D8E0h,A8,1
3ad80: b30c 0120                 MOVE   A8,*A12(120h),1
3ada0: 07a8 d460 0004            MOVE   @4D460h,A8,1
3add0: b30c 01e0                 MOVE   A8,*A12(1E0h),1
3adf0: 07a8 d760 0004            MOVE   @4D760h,A8,1
3ae20: b30c 02a0                 MOVE   A8,*A12(2A0h),1
3ae40: 0570                      SETF   10h,1,0
3ae50: 05a8 da90 0004            MOVE   @4DA90h,A8,0
3ae80: b10c 0330                 MOVE   A8,*A12(330h),0
3aea0: 05a8 daf0 0004            MOVE   @4DAF0h,A8,0
3aed0: b10c 0390                 MOVE   A8,*A12(390h),0
3aef0: 05a8 d9d0 0004            MOVE   @4D9D0h,A8,0
3af20: b10c 03f0                 MOVE   A8,*A12(3F0h),0
3af40: 05a8 da30 0004            MOVE   @4DA30h,A8,0
3af70: b10c 0450                 MOVE   A8,*A12(450h),0
3af90: 07e8 dd58 0004            MOVE   @4DD58h,A8
3afc0: ad0c 0498                 MOVB   A8,*A12(498h)
3afe0: 07e8 d320 0004            MOVE   @4D320h,A8
3b010: 0d88 002e                 DSJ    A8,3B310h
3b030: 07a8 d840 0004            MOVE   @4D840h,A8,1
3b060: b30c 0080                 MOVE   A8,*A12(80h),1
3b080: 07a8 d900 0004            MOVE   @4D900h,A8,1
3b0b0: b30c 0140                 MOVE   A8,*A12(140h),1
3b0d0: 07a8 d480 0004            MOVE   @4D480h,A8,1
3b100: b30c 0200                 MOVE   A8,*A12(200h),1
3b120: 07a8 d780 0004            MOVE   @4D780h,A8,1
3b150: b30c 02c0                 MOVE   A8,*A12(2C0h),1
3b170: 0570                      SETF   10h,1,0
3b180: 05a8 daa0 0004            MOVE   @4DAA0h,A8,0
3b1b0: b10c 0340                 MOVE   A8,*A12(340h),0
3b1d0: 05a8 db00 0004            MOVE   @4DB00h,A8,0
3b200: b10c 03a0                 MOVE   A8,*A12(3A0h),0
3b220: 05a8 d9e0 0004            MOVE   @4D9E0h,A8,0
3b250: b10c 0400                 MOVE   A8,*A12(400h),0
3b270: 05a8 da40 0004            MOVE   @4DA40h,A8,0
3b2a0: b10c 0460                 MOVE   A8,*A12(460h),0
3b2c0: 07e8 dd60 0004            MOVE   @4DD60h,A8
3b2f0: ad0c 04a0                 MOVB   A8,*A12(4A0h)
3b310: 07e8 d328 0004            MOVE   @4D328h,A8
3b340: 0d88 002e                 DSJ    A8,3B640h
3b360: 07a8 d860 0004            MOVE   @4D860h,A8,1
3b390: b30c 00a0                 MOVE   A8,*A12(A0h),1
3b3b0: 07a8 d920 0004            MOVE   @4D920h,A8,1
3b3e0: b30c 0160                 MOVE   A8,*A12(160h),1
3b400: 07a8 d4a0 0004            MOVE   @4D4A0h,A8,1
3b430: b30c 0220                 MOVE   A8,*A12(220h),1
3b450: 07a8 d7a0 0004            MOVE   @4D7A0h,A8,1
3b480: b30c 02e0                 MOVE   A8,*A12(2E0h),1
3b4a0: 0570                      SETF   10h,1,0
3b4b0: 05a8 dab0 0004            MOVE   @4DAB0h,A8,0
3b4e0: b10c 0350                 MOVE   A8,*A12(350h),0
3b500: 05a8 db10 0004            MOVE   @4DB10h,A8,0
3b530: b10c 03b0                 MOVE   A8,*A12(3B0h),0
3b550: 05a8 d9f0 0004            MOVE   @4D9F0h,A8,0
3b580: b10c 0410                 MOVE   A8,*A12(410h),0
3b5a0: 05a8 da50 0004            MOVE   @4DA50h,A8,0
3b5d0: b10c 0470                 MOVE   A8,*A12(470h),0
3b5f0: 07e8 dd68 0004            MOVE   @4DD68h,A8
3b620: ad0c 04a8                 MOVB   A8,*A12(4A8h)
3b640: 07e8 db20 0004            MOVE   @4DB20h,A8
3b670: ad0c 04b0                 MOVB   A8,*A12(4B0h)
3b690: 07e8 db30 0004            MOVE   @4DB30h,A8
3b6c0: ad0c 04b8                 MOVB   A8,*A12(4B8h)
3b6e0: b7ee 0060                 MOVE   *SP(60h),A14,1
3b700: 09af 3000                 MMFM   SP,A12,A13
3b720: 0962                      RETS   2h

_cp_s_conf:
3b730: a3af                      MOVE   A13,-*SP,1
3b740: 4dcd                      MOVE   A14,A13
3b750: 100e                      ADDK   20h,A14
3b760: 1928                      MOVK   9h,A8
3b770: 0788 9260 0005            MOVE   A8,@59260h,1
3b7a0: 1988                      MOVK   Ch,A8
3b7b0: 0788 9280 0005            MOVE   A8,@59280h,1
3b7e0: 1828                      MOVK   1h,A8
3b7f0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3b820: afa8 ffe0                 MOVB   *A13(FFE0h),A8
3b840: 05e8 92c0 0005            MOVB   A8,@592C0h
3b870: a3cf                      MOVE   A14,-*SP,1
3b880: 09e8 9260 0005            MOVI   59260h,A8
3b8b0: 930e                      MOVE   A8,*A14+,1
3b8c0: 1928                      MOVK   9h,A8
3b8d0: 930e                      MOVE   A8,*A14+,1
3b8e0: 0d5f 0000 0000            CALLA  0h
3b910: 830d                      MOVE   A8,*A13,1
3b920: 4d08                      MOVE   A8,A8
3b930: ca13                      JREQ   3BA70h
3b940: 1828                      MOVK   1h,A8
3b950: 0788 d320 0005            MOVE   A8,@5D320h,1
3b980: 09c8 0041                 MOVI   41h,A8
3b9a0: 05e8 d340 0005            MOVB   A8,@5D340h
3b9d0: a3cf                      MOVE   A14,-*SP,1
3b9e0: 09e8 d320 0005            MOVI   5D320h,A8
3ba10: 930e                      MOVE   A8,*A14+,1
3ba20: 1988                      MOVK   Ch,A8
3ba30: 930e                      MOVE   A8,*A14+,1
3ba40: 0d5f 0000 0000            CALLA  0h
3ba70: b7ee 0040                 MOVE   *SP(40h),A14,1
3ba90: 97ed                      MOVE   *SP+,A13,1
3baa0: 0962                      RETS   2h

_cp_s_man_init:
3bab0: 098f 000c                 MMTM   SP,A12,A13
3bad0: 4dcd                      MOVE   A14,A13
3bae0: 100e                      ADDK   20h,A14
3baf0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3bb10: 1808                      MOVK   20h,A8
3bb20: 0788 9260 0005            MOVE   A8,@59260h,1
3bb50: 1988                      MOVK   Ch,A8
3bb60: 0788 9280 0005            MOVE   A8,@59280h,1
3bb90: 1848                      MOVK   2h,A8
3bba0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3bbd0: 8788                      MOVE   *A12,A8,1
3bbe0: 0788 92c0 0005            MOVE   A8,@592C0h,1
3bc10: b788 0020                 MOVE   *A12(20h),A8,1
3bc30: 0788 92e0 0005            MOVE   A8,@592E0h,1
3bc60: b788 0040                 MOVE   *A12(40h),A8,1
3bc80: 0788 9300 0005            MOVE   A8,@59300h,1
3bcb0: b788 0060                 MOVE   *A12(60h),A8,1
3bcd0: 0788 9320 0005            MOVE   A8,@59320h,1
3bd00: b788 0080                 MOVE   *A12(80h),A8,1
3bd20: 0788 9340 0005            MOVE   A8,@59340h,1
3bd50: b78c 00a0                 MOVE   *A12(A0h),A12,1
3bd70: 078c 9360 0005            MOVE   A12,@59360h,1
3bda0: a3cf                      MOVE   A14,-*SP,1
3bdb0: 09ec 9260 0005            MOVI   59260h,A12
3bde0: 938e                      MOVE   A12,*A14+,1
3bdf0: 1928                      MOVK   9h,A8
3be00: 930e                      MOVE   A8,*A14+,1
3be10: 0d5f 0000 0000            CALLA  0h
3be40: 830d                      MOVE   A8,*A13,1
3be50: 4d08                      MOVE   A8,A8
3be60: ca13                      JREQ   3BFA0h
3be70: 182c                      MOVK   1h,A12
3be80: 078c d320 0005            MOVE   A12,@5D320h,1
3beb0: 09c8 0042                 MOVI   42h,A8
3bed0: 05e8 d340 0005            MOVB   A8,@5D340h
3bf00: a3cf                      MOVE   A14,-*SP,1
3bf10: 09ec d320 0005            MOVI   5D320h,A12
3bf40: 938e                      MOVE   A12,*A14+,1
3bf50: 1988                      MOVK   Ch,A8
3bf60: 930e                      MOVE   A8,*A14+,1
3bf70: 0d5f 0000 0000            CALLA  0h
3bfa0: b7ee 0060                 MOVE   *SP(60h),A14,1
3bfc0: 09af 3000                 MMFM   SP,A12,A13
3bfe0: 0962                      RETS   2h

_cp_s_auto_init:
3bff0: 098f 0014                 MMTM   SP,A11,A13
3c010: 4dcd                      MOVE   A14,A13
3c020: 100e                      ADDK   20h,A14
3c030: 4508                      SUB    A8,A8
3c040: 0570                      SETF   10h,1,0
3c050: 0588 de60 0004            MOVE   A8,@4DE60h,0
3c080: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c0b0: 07e8 d300 0004            MOVE   @4D300h,A8
3c0e0: 3968                      DSJS   A8,3C1A0h
3c0f0: 1828                      MOVK   1h,A8
3c100: 0588 de80 0004            MOVE   A8,@4DE80h,0
3c130: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c160: 1028                      INC    A8
3c170: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c1a0: 07e8 d308 0004            MOVE   @4D308h,A8
3c1d0: 3968                      DSJS   A8,3C290h
3c1e0: 1828                      MOVK   1h,A8
3c1f0: 0588 de90 0004            MOVE   A8,@4DE90h,0
3c220: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c250: 1028                      INC    A8
3c260: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c290: 07e8 d310 0004            MOVE   @4D310h,A8
3c2c0: 3968                      DSJS   A8,3C380h
3c2d0: 1828                      MOVK   1h,A8
3c2e0: 0588 dea0 0004            MOVE   A8,@4DEA0h,0
3c310: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c340: 1028                      INC    A8
3c350: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c380: 07e8 d318 0004            MOVE   @4D318h,A8
3c3b0: 3968                      DSJS   A8,3C470h
3c3c0: 1828                      MOVK   1h,A8
3c3d0: 0588 deb0 0004            MOVE   A8,@4DEB0h,0
3c400: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c430: 1028                      INC    A8
3c440: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c470: 07e8 d320 0004            MOVE   @4D320h,A8
3c4a0: 3968                      DSJS   A8,3C560h
3c4b0: 1828                      MOVK   1h,A8
3c4c0: 0588 dec0 0004            MOVE   A8,@4DEC0h,0
3c4f0: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c520: 1028                      INC    A8
3c530: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c560: 07e8 d328 0004            MOVE   @4D328h,A8
3c590: 3968                      DSJS   A8,3C650h
3c5a0: 1828                      MOVK   1h,A8
3c5b0: 0588 ded0 0004            MOVE   A8,@4DED0h,0
3c5e0: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c610: 1028                      INC    A8
3c620: 0588 de70 0004            MOVE   A8,@4DE70h,0
3c650: 05a8 de70 0004            MOVE   @4DE70h,A8,0
3c680: 09cb 0064                 MOVI   64h,A11
3c6a0: 590b                      DIVS   A8,A11
3c6b0: 058b de70 0004            MOVE   A11,@4DE70h,0
3c6e0: 1908                      MOVK   8h,A8
3c6f0: 0788 9260 0005            MOVE   A8,@59260h,1
3c720: 198b                      MOVK   Ch,A11
3c730: 078b 9280 0005            MOVE   A11,@59280h,1
3c760: 186b                      MOVK   3h,A11
3c770: 078b 92a0 0005            MOVE   A11,@592A0h,1
3c7a0: 09cb 0040                 MOVI   40h,A11
3c7c0: 078b d290 0004            MOVE   A11,@4D290h,1
3c7f0: a3cf                      MOVE   A14,-*SP,1
3c800: 09e8 9260 0005            MOVI   59260h,A8
3c830: 930e                      MOVE   A8,*A14+,1
3c840: 1928                      MOVK   9h,A8
3c850: 930e                      MOVE   A8,*A14+,1
3c860: 0d5f 0000 0000            CALLA  0h
3c890: 830d                      MOVE   A8,*A13,1
3c8a0: 4d08                      MOVE   A8,A8
3c8b0: ca13                      JREQ   3C9F0h
3c8c0: 182b                      MOVK   1h,A11
3c8d0: 078b d320 0005            MOVE   A11,@5D320h,1
3c900: 09c8 0043                 MOVI   43h,A8
3c920: 05e8 d340 0005            MOVB   A8,@5D340h
3c950: a3cf                      MOVE   A14,-*SP,1
3c960: 09eb d320 0005            MOVI   5D320h,A11
3c990: 936e                      MOVE   A11,*A14+,1
3c9a0: 198b                      MOVK   Ch,A11
3c9b0: 936e                      MOVE   A11,*A14+,1
3c9c0: 0d5f 0000 0000            CALLA  0h
3c9f0: 140e                      SUBK   20h,A14
3ca00: 09af 2800                 MMFM   SP,A11,A13
3ca20: 0960                      RETS   

_cp_s_luser:
3ca30: 098f 000c                 MMTM   SP,A12,A13
3ca50: 4dcd                      MOVE   A14,A13
3ca60: 100e                      ADDK   20h,A14
3ca70: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3ca90: 1808                      MOVK   20h,A8
3caa0: 0788 9260 0005            MOVE   A8,@59260h,1
3cad0: 1988                      MOVK   Ch,A8
3cae0: 0788 9280 0005            MOVE   A8,@59280h,1
3cb10: 1888                      MOVK   4h,A8
3cb20: 0788 92a0 0005            MOVE   A8,@592A0h,1
3cb50: 8788                      MOVE   *A12,A8,1
3cb60: 0788 92c0 0005            MOVE   A8,@592C0h,1
3cb90: b788 0020                 MOVE   *A12(20h),A8,1
3cbb0: 0788 92e0 0005            MOVE   A8,@592E0h,1
3cbe0: b788 0040                 MOVE   *A12(40h),A8,1
3cc00: 0788 9300 0005            MOVE   A8,@59300h,1
3cc30: b788 0060                 MOVE   *A12(60h),A8,1
3cc50: 0788 9320 0005            MOVE   A8,@59320h,1
3cc80: b788 0080                 MOVE   *A12(80h),A8,1
3cca0: 0788 9340 0005            MOVE   A8,@59340h,1
3ccd0: b78c 00a0                 MOVE   *A12(A0h),A12,1
3ccf0: 078c 9360 0005            MOVE   A12,@59360h,1
3cd20: a3cf                      MOVE   A14,-*SP,1
3cd30: 09ec 9260 0005            MOVI   59260h,A12
3cd60: 938e                      MOVE   A12,*A14+,1
3cd70: 1928                      MOVK   9h,A8
3cd80: 930e                      MOVE   A8,*A14+,1
3cd90: 0d5f 0000 0000            CALLA  0h
3cdc0: 830d                      MOVE   A8,*A13,1
3cdd0: 4d08                      MOVE   A8,A8
3cde0: ca1b                      JREQ   3CFA0h
3cdf0: 182c                      MOVK   1h,A12
3ce00: 07a8 d290 0004            MOVE   @4D290h,A8,1
3ce30: 550c                      OR     A8,A12
3ce40: 078c d290 0004            MOVE   A12,@4D290h,1
3ce70: 1828                      MOVK   1h,A8
3ce80: 0788 d320 0005            MOVE   A8,@5D320h,1
3ceb0: 09cc 0044                 MOVI   44h,A12
3ced0: 05ec d340 0005            MOVB   A12,@5D340h
3cf00: a3cf                      MOVE   A14,-*SP,1
3cf10: 09e8 d320 0005            MOVI   5D320h,A8
3cf40: 930e                      MOVE   A8,*A14+,1
3cf50: 1988                      MOVK   Ch,A8
3cf60: 930e                      MOVE   A8,*A14+,1
3cf70: 0d5f 0000 0000            CALLA  0h
3cfa0: b7ee 0060                 MOVE   *SP(60h),A14,1
3cfc0: 09af 3000                 MMFM   SP,A12,A13
3cfe0: 0962                      RETS   2h

_cp_s_ulimit:
3cff0: 098f 000c                 MMTM   SP,A12,A13
3d010: 4dcd                      MOVE   A14,A13
3d020: 100e                      ADDK   20h,A14
3d030: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3d050: 1808                      MOVK   20h,A8
3d060: 0788 9260 0005            MOVE   A8,@59260h,1
3d090: 1988                      MOVK   Ch,A8
3d0a0: 0788 9280 0005            MOVE   A8,@59280h,1
3d0d0: 18a8                      MOVK   5h,A8
3d0e0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3d110: 8788                      MOVE   *A12,A8,1
3d120: 0788 92c0 0005            MOVE   A8,@592C0h,1
3d150: b788 0020                 MOVE   *A12(20h),A8,1
3d170: 0788 92e0 0005            MOVE   A8,@592E0h,1
3d1a0: b788 0040                 MOVE   *A12(40h),A8,1
3d1c0: 0788 9300 0005            MOVE   A8,@59300h,1
3d1f0: b788 0060                 MOVE   *A12(60h),A8,1
3d210: 0788 9320 0005            MOVE   A8,@59320h,1
3d240: b788 0080                 MOVE   *A12(80h),A8,1
3d260: 0788 9340 0005            MOVE   A8,@59340h,1
3d290: b78c 00a0                 MOVE   *A12(A0h),A12,1
3d2b0: 078c 9360 0005            MOVE   A12,@59360h,1
3d2e0: a3cf                      MOVE   A14,-*SP,1
3d2f0: 09ec 9260 0005            MOVI   59260h,A12
3d320: 938e                      MOVE   A12,*A14+,1
3d330: 1928                      MOVK   9h,A8
3d340: 930e                      MOVE   A8,*A14+,1
3d350: 0d5f 0000 0000            CALLA  0h
3d380: 830d                      MOVE   A8,*A13,1
3d390: 4d08                      MOVE   A8,A8
3d3a0: ca1b                      JREQ   3D560h
3d3b0: 184c                      MOVK   2h,A12
3d3c0: 07a8 d290 0004            MOVE   @4D290h,A8,1
3d3f0: 550c                      OR     A8,A12
3d400: 078c d290 0004            MOVE   A12,@4D290h,1
3d430: 1828                      MOVK   1h,A8
3d440: 0788 d320 0005            MOVE   A8,@5D320h,1
3d470: 09cc 0045                 MOVI   45h,A12
3d490: 05ec d340 0005            MOVB   A12,@5D340h
3d4c0: a3cf                      MOVE   A14,-*SP,1
3d4d0: 09e8 d320 0005            MOVI   5D320h,A8
3d500: 930e                      MOVE   A8,*A14+,1
3d510: 1988                      MOVK   Ch,A8
3d520: 930e                      MOVE   A8,*A14+,1
3d530: 0d5f 0000 0000            CALLA  0h
3d560: b7ee 0060                 MOVE   *SP(60h),A14,1
3d580: 09af 3000                 MMFM   SP,A12,A13
3d5a0: 0962                      RETS   2h

_cp_s_speed:
3d5b0: 098f 000c                 MMTM   SP,A12,A13
3d5d0: 4dcd                      MOVE   A14,A13
3d5e0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3d600: 0570                      SETF   10h,1,0
3d610: 8588                      MOVE   *A12,A8,0
3d620: cb13                      JRNE   3D760h
3d630: b588 0010                 MOVE   *A12(10h),A8,0
3d650: cb10                      JRNE   3D760h
3d660: b588 0020                 MOVE   *A12(20h),A8,0
3d680: cb0d                      JRNE   3D760h
3d690: b588 0030                 MOVE   *A12(30h),A8,0
3d6b0: cb0a                      JRNE   3D760h
3d6c0: b588 0040                 MOVE   *A12(40h),A8,0
3d6e0: cb07                      JRNE   3D760h
3d6f0: b588 0050                 MOVE   *A12(50h),A8,0
3d710: cb04                      JRNE   3D760h
3d720: 4508                      SUB    A8,A8
3d730: 05e8 dd10 0004            MOVB   A8,@4DD10h
3d760: 1a88                      MOVK   14h,A8
3d770: 0788 9260 0005            MOVE   A8,@59260h,1
3d7a0: 1988                      MOVK   Ch,A8
3d7b0: 0788 9280 0005            MOVE   A8,@59280h,1
3d7e0: 18e8                      MOVK   7h,A8
3d7f0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3d820: 8588                      MOVE   *A12,A8,0
3d830: 0588 92c0 0005            MOVE   A8,@592C0h,0
3d860: b588 0010                 MOVE   *A12(10h),A8,0
3d880: 0588 92d0 0005            MOVE   A8,@592D0h,0
3d8b0: b588 0020                 MOVE   *A12(20h),A8,0
3d8d0: 0588 92e0 0005            MOVE   A8,@592E0h,0
3d900: b588 0030                 MOVE   *A12(30h),A8,0
3d920: 0588 92f0 0005            MOVE   A8,@592F0h,0
3d950: b588 0040                 MOVE   *A12(40h),A8,0
3d970: 0588 9300 0005            MOVE   A8,@59300h,0
3d9a0: b58c 0050                 MOVE   *A12(50h),A12,0
3d9c0: 058c 9310 0005            MOVE   A12,@59310h,0
3d9f0: a3cf                      MOVE   A14,-*SP,1
3da00: 09ec 9260 0005            MOVI   59260h,A12
3da30: 938e                      MOVE   A12,*A14+,1
3da40: 1928                      MOVK   9h,A8
3da50: 930e                      MOVE   A8,*A14+,1
3da60: 0d5f 0000 0000            CALLA  0h
3da90: b7ee 0060                 MOVE   *SP(60h),A14,1
3dab0: 09af 3000                 MMFM   SP,A12,A13
3dad0: 0962                      RETS   2h

_cp_s_position:
3dae0: 098f 000c                 MMTM   SP,A12,A13
3db00: 4dcd                      MOVE   A14,A13
3db10: 100e                      ADDK   20h,A14
3db20: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3db40: 1808                      MOVK   20h,A8
3db50: 0788 9260 0005            MOVE   A8,@59260h,1
3db80: 1988                      MOVK   Ch,A8
3db90: 0788 9280 0005            MOVE   A8,@59280h,1
3dbc0: 1908                      MOVK   8h,A8
3dbd0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3dc00: 8788                      MOVE   *A12,A8,1
3dc10: 0788 92c0 0005            MOVE   A8,@592C0h,1
3dc40: b788 0020                 MOVE   *A12(20h),A8,1
3dc60: 0788 92e0 0005            MOVE   A8,@592E0h,1
3dc90: b788 0040                 MOVE   *A12(40h),A8,1
3dcb0: 0788 9300 0005            MOVE   A8,@59300h,1
3dce0: b788 0060                 MOVE   *A12(60h),A8,1
3dd00: 0788 9320 0005            MOVE   A8,@59320h,1
3dd30: b788 0080                 MOVE   *A12(80h),A8,1
3dd50: 0788 9340 0005            MOVE   A8,@59340h,1
3dd80: b78c 00a0                 MOVE   *A12(A0h),A12,1
3dda0: 078c 9360 0005            MOVE   A12,@59360h,1
3ddd0: a3cf                      MOVE   A14,-*SP,1
3dde0: 09ec 9260 0005            MOVI   59260h,A12
3de10: 938e                      MOVE   A12,*A14+,1
3de20: 1928                      MOVK   9h,A8
3de30: 930e                      MOVE   A8,*A14+,1
3de40: 0d5f 0000 0000            CALLA  0h
3de70: 830d                      MOVE   A8,*A13,1
3de80: 4d08                      MOVE   A8,A8
3de90: ca13                      JREQ   3DFD0h
3dea0: 182c                      MOVK   1h,A12
3deb0: 078c d320 0005            MOVE   A12,@5D320h,1
3dee0: 09c8 0048                 MOVI   48h,A8
3df00: 05e8 d340 0005            MOVB   A8,@5D340h
3df30: a3cf                      MOVE   A14,-*SP,1
3df40: 09ec d320 0005            MOVI   5D320h,A12
3df70: 938e                      MOVE   A12,*A14+,1
3df80: 1988                      MOVK   Ch,A8
3df90: 930e                      MOVE   A8,*A14+,1
3dfa0: 0d5f 0000 0000            CALLA  0h
3dfd0: b7ee 0060                 MOVE   *SP(60h),A14,1
3dff0: 09af 3000                 MMFM   SP,A12,A13
3e010: 0962                      RETS   2h

_cp_s_backlash:
3e020: 098f 000c                 MMTM   SP,A12,A13
3e040: 4dcd                      MOVE   A14,A13
3e050: 100e                      ADDK   20h,A14
3e060: 1928                      MOVK   9h,A8
3e070: 0788 9260 0005            MOVE   A8,@59260h,1
3e0a0: 1988                      MOVK   Ch,A8
3e0b0: 0788 9280 0005            MOVE   A8,@59280h,1
3e0e0: 1928                      MOVK   9h,A8
3e0f0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3e120: afa8 ffe0                 MOVB   *A13(FFE0h),A8
3e140: 05e8 92c0 0005            MOVB   A8,@592C0h
3e170: a3cf                      MOVE   A14,-*SP,1
3e180: 09e8 9260 0005            MOVI   59260h,A8
3e1b0: 930e                      MOVE   A8,*A14+,1
3e1c0: 1928                      MOVK   9h,A8
3e1d0: 930e                      MOVE   A8,*A14+,1
3e1e0: 0d5f 0000 0000            CALLA  0h
3e210: 830d                      MOVE   A8,*A13,1
3e220: 4d08                      MOVE   A8,A8
3e230: ca1b                      JREQ   3E3F0h
3e240: 1888                      MOVK   4h,A8
3e250: 07ac d290 0004            MOVE   @4D290h,A12,1
3e280: 5588                      OR     A12,A8
3e290: 0788 d290 0004            MOVE   A8,@4D290h,1
3e2c0: 182c                      MOVK   1h,A12
3e2d0: 078c d320 0005            MOVE   A12,@5D320h,1
3e300: 09c8 0049                 MOVI   49h,A8
3e320: 05e8 d340 0005            MOVB   A8,@5D340h
3e350: a3cf                      MOVE   A14,-*SP,1
3e360: 09ec d320 0005            MOVI   5D320h,A12
3e390: 938e                      MOVE   A12,*A14+,1
3e3a0: 1988                      MOVK   Ch,A8
3e3b0: 930e                      MOVE   A8,*A14+,1
3e3c0: 0d5f 0000 0000            CALLA  0h
3e3f0: b7ee 0060                 MOVE   *SP(60h),A14,1
3e410: 09af 3000                 MMFM   SP,A12,A13
3e430: 0962                      RETS   2h

_cp_s_vector:
3e440: 098f 000c                 MMTM   SP,A12,A13
3e460: 4dcd                      MOVE   A14,A13
3e470: 100e                      ADDK   20h,A14
3e480: 1928                      MOVK   9h,A8
3e490: 0788 9260 0005            MOVE   A8,@59260h,1
3e4c0: 1988                      MOVK   Ch,A8
3e4d0: 0788 9280 0005            MOVE   A8,@59280h,1
3e500: 1948                      MOVK   Ah,A8
3e510: 0788 92a0 0005            MOVE   A8,@592A0h,1
3e540: afa8 ffe0                 MOVB   *A13(FFE0h),A8
3e560: 05e8 92c0 0005            MOVB   A8,@592C0h
3e590: a3cf                      MOVE   A14,-*SP,1
3e5a0: 09e8 9260 0005            MOVI   59260h,A8
3e5d0: 930e                      MOVE   A8,*A14+,1
3e5e0: 1928                      MOVK   9h,A8
3e5f0: 930e                      MOVE   A8,*A14+,1
3e600: 0d5f 0000 0000            CALLA  0h
3e630: 830d                      MOVE   A8,*A13,1
3e640: 4d08                      MOVE   A8,A8
3e650: ca1b                      JREQ   3E810h
3e660: 1908                      MOVK   8h,A8
3e670: 07ac d290 0004            MOVE   @4D290h,A12,1
3e6a0: 5588                      OR     A12,A8
3e6b0: 0788 d290 0004            MOVE   A8,@4D290h,1
3e6e0: 182c                      MOVK   1h,A12
3e6f0: 078c d320 0005            MOVE   A12,@5D320h,1
3e720: 09c8 004a                 MOVI   4Ah,A8
3e740: 05e8 d340 0005            MOVB   A8,@5D340h
3e770: a3cf                      MOVE   A14,-*SP,1
3e780: 09ec d320 0005            MOVI   5D320h,A12
3e7b0: 938e                      MOVE   A12,*A14+,1
3e7c0: 1988                      MOVK   Ch,A8
3e7d0: 930e                      MOVE   A8,*A14+,1
3e7e0: 0d5f 0000 0000            CALLA  0h
3e810: b7ee 0060                 MOVE   *SP(60h),A14,1
3e830: 09af 3000                 MMFM   SP,A12,A13
3e850: 0962                      RETS   2h

_cp_s_start:
3e860: 098f 000c                 MMTM   SP,A12,A13
3e880: 4dcd                      MOVE   A14,A13
3e890: 100e                      ADDK   20h,A14
3e8a0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3e8c0: 1a88                      MOVK   14h,A8
3e8d0: 0788 9260 0005            MOVE   A8,@59260h,1
3e900: 1988                      MOVK   Ch,A8
3e910: 0788 9280 0005            MOVE   A8,@59280h,1
3e940: 0788 92a0 0005            MOVE   A8,@592A0h,1
3e970: 0570                      SETF   10h,1,0
3e980: 8588                      MOVE   *A12,A8,0
3e990: 0588 92c0 0005            MOVE   A8,@592C0h,0
3e9c0: b588 0010                 MOVE   *A12(10h),A8,0
3e9e0: 0588 92d0 0005            MOVE   A8,@592D0h,0
3ea10: b588 0020                 MOVE   *A12(20h),A8,0
3ea30: 0588 92e0 0005            MOVE   A8,@592E0h,0
3ea60: b588 0030                 MOVE   *A12(30h),A8,0
3ea80: 0588 92f0 0005            MOVE   A8,@592F0h,0
3eab0: b588 0040                 MOVE   *A12(40h),A8,0
3ead0: 0588 9300 0005            MOVE   A8,@59300h,0
3eb00: b58c 0050                 MOVE   *A12(50h),A12,0
3eb20: 058c 9310 0005            MOVE   A12,@59310h,0
3eb50: a3cf                      MOVE   A14,-*SP,1
3eb60: 09ec 9260 0005            MOVI   59260h,A12
3eb90: 938e                      MOVE   A12,*A14+,1
3eba0: 1928                      MOVK   9h,A8
3ebb0: 930e                      MOVE   A8,*A14+,1
3ebc0: 0d5f 0000 0000            CALLA  0h
3ebf0: 830d                      MOVE   A8,*A13,1
3ec00: 4d08                      MOVE   A8,A8
3ec10: ca1c                      JREQ   3EDE0h
3ec20: 07ac d290 0004            MOVE   @4D290h,A12,1
3ec50: 0bac 0020 0000            ORI    20h,A12
3ec80: 078c d290 0004            MOVE   A12,@4D290h,1
3ecb0: 1828                      MOVK   1h,A8
3ecc0: 0788 d320 0005            MOVE   A8,@5D320h,1
3ecf0: 09cc 004c                 MOVI   4Ch,A12
3ed10: 05ec d340 0005            MOVB   A12,@5D340h
3ed40: a3cf                      MOVE   A14,-*SP,1
3ed50: 09e8 d320 0005            MOVI   5D320h,A8
3ed80: 930e                      MOVE   A8,*A14+,1
3ed90: 1988                      MOVK   Ch,A8
3eda0: 930e                      MOVE   A8,*A14+,1
3edb0: 0d5f 0000 0000            CALLA  0h
3ede0: b7ee 0060                 MOVE   *SP(60h),A14,1
3ee00: 09af 3000                 MMFM   SP,A12,A13
3ee20: 0962                      RETS   2h

_cp_s_inc:
3ee30: 098f 000c                 MMTM   SP,A12,A13
3ee50: 4dcd                      MOVE   A14,A13
3ee60: 100e                      ADDK   20h,A14
3ee70: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3ee90: 1a88                      MOVK   14h,A8
3eea0: 0788 9260 0005            MOVE   A8,@59260h,1
3eed0: 1988                      MOVK   Ch,A8
3eee0: 0788 9280 0005            MOVE   A8,@59280h,1
3ef10: 19a8                      MOVK   Dh,A8
3ef20: 0788 92a0 0005            MOVE   A8,@592A0h,1
3ef50: 0570                      SETF   10h,1,0
3ef60: 8588                      MOVE   *A12,A8,0
3ef70: 0588 92c0 0005            MOVE   A8,@592C0h,0
3efa0: b588 0010                 MOVE   *A12(10h),A8,0
3efc0: 0588 92d0 0005            MOVE   A8,@592D0h,0
3eff0: b588 0020                 MOVE   *A12(20h),A8,0
3f010: 0588 92e0 0005            MOVE   A8,@592E0h,0
3f040: b588 0030                 MOVE   *A12(30h),A8,0
3f060: 0588 92f0 0005            MOVE   A8,@592F0h,0
3f090: b588 0040                 MOVE   *A12(40h),A8,0
3f0b0: 0588 9300 0005            MOVE   A8,@59300h,0
3f0e0: b58c 0050                 MOVE   *A12(50h),A12,0
3f100: 058c 9310 0005            MOVE   A12,@59310h,0
3f130: a3cf                      MOVE   A14,-*SP,1
3f140: 09ec 9260 0005            MOVI   59260h,A12
3f170: 938e                      MOVE   A12,*A14+,1
3f180: 1928                      MOVK   9h,A8
3f190: 930e                      MOVE   A8,*A14+,1
3f1a0: 0d5f 0000 0000            CALLA  0h
3f1d0: 830d                      MOVE   A8,*A13,1
3f1e0: 4d08                      MOVE   A8,A8
3f1f0: ca1c                      JREQ   3F3C0h
3f200: 07ac d290 0004            MOVE   @4D290h,A12,1
3f230: 0bac 0020 0000            ORI    20h,A12
3f260: 078c d290 0004            MOVE   A12,@4D290h,1
3f290: 1828                      MOVK   1h,A8
3f2a0: 0788 d320 0005            MOVE   A8,@5D320h,1
3f2d0: 09cc 004d                 MOVI   4Dh,A12
3f2f0: 05ec d340 0005            MOVB   A12,@5D340h
3f320: a3cf                      MOVE   A14,-*SP,1
3f330: 09e8 d320 0005            MOVI   5D320h,A8
3f360: 930e                      MOVE   A8,*A14+,1
3f370: 1988                      MOVK   Ch,A8
3f380: 930e                      MOVE   A8,*A14+,1
3f390: 0d5f 0000 0000            CALLA  0h
3f3c0: b7ee 0060                 MOVE   *SP(60h),A14,1
3f3e0: 09af 3000                 MMFM   SP,A12,A13
3f400: 0962                      RETS   2h

_cp_s_tstep:
3f410: 098f 000c                 MMTM   SP,A12,A13
3f430: 4dcd                      MOVE   A14,A13
3f440: 100e                      ADDK   20h,A14
3f450: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3f470: 1808                      MOVK   20h,A8
3f480: 0788 9260 0005            MOVE   A8,@59260h,1
3f4b0: 1988                      MOVK   Ch,A8
3f4c0: 0788 9280 0005            MOVE   A8,@59280h,1
3f4f0: 19c8                      MOVK   Eh,A8
3f500: 0788 92a0 0005            MOVE   A8,@592A0h,1
3f530: 8788                      MOVE   *A12,A8,1
3f540: 0788 92c0 0005            MOVE   A8,@592C0h,1
3f570: b788 0020                 MOVE   *A12(20h),A8,1
3f590: 0788 92e0 0005            MOVE   A8,@592E0h,1
3f5c0: b788 0040                 MOVE   *A12(40h),A8,1
3f5e0: 0788 9300 0005            MOVE   A8,@59300h,1
3f610: b788 0060                 MOVE   *A12(60h),A8,1
3f630: 0788 9320 0005            MOVE   A8,@59320h,1
3f660: b788 0080                 MOVE   *A12(80h),A8,1
3f680: 0788 9340 0005            MOVE   A8,@59340h,1
3f6b0: b78c 00a0                 MOVE   *A12(A0h),A12,1
3f6d0: 078c 9360 0005            MOVE   A12,@59360h,1
3f700: a3cf                      MOVE   A14,-*SP,1
3f710: 09ec 9260 0005            MOVI   59260h,A12
3f740: 938e                      MOVE   A12,*A14+,1
3f750: 1928                      MOVK   9h,A8
3f760: 930e                      MOVE   A8,*A14+,1
3f770: 0d5f 0000 0000            CALLA  0h
3f7a0: 830d                      MOVE   A8,*A13,1
3f7b0: 4d08                      MOVE   A8,A8
3f7c0: ca1c                      JREQ   3F990h
3f7d0: 07ac d290 0004            MOVE   @4D290h,A12,1
3f800: 0bac 0020 0000            ORI    20h,A12
3f830: 078c d290 0004            MOVE   A12,@4D290h,1
3f860: 1828                      MOVK   1h,A8
3f870: 0788 d320 0005            MOVE   A8,@5D320h,1
3f8a0: 09cc 004e                 MOVI   4Eh,A12
3f8c0: 05ec d340 0005            MOVB   A12,@5D340h
3f8f0: a3cf                      MOVE   A14,-*SP,1
3f900: 09e8 d320 0005            MOVI   5D320h,A8
3f930: 930e                      MOVE   A8,*A14+,1
3f940: 1988                      MOVK   Ch,A8
3f950: 930e                      MOVE   A8,*A14+,1
3f960: 0d5f 0000 0000            CALLA  0h
3f990: b7ee 0060                 MOVE   *SP(60h),A14,1
3f9b0: 09af 3000                 MMFM   SP,A12,A13
3f9d0: 0962                      RETS   2h

_cp_s_back_speed:
3f9e0: 098f 000c                 MMTM   SP,A12,A13
3fa00: 4dcd                      MOVE   A14,A13
3fa10: 100e                      ADDK   20h,A14
3fa20: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
3fa40: 1a88                      MOVK   14h,A8
3fa50: 0788 9260 0005            MOVE   A8,@59260h,1
3fa80: 1988                      MOVK   Ch,A8
3fa90: 0788 9280 0005            MOVE   A8,@59280h,1
3fac0: 19e8                      MOVK   Fh,A8
3fad0: 0788 92a0 0005            MOVE   A8,@592A0h,1
3fb00: 0570                      SETF   10h,1,0
3fb10: 8588                      MOVE   *A12,A8,0
3fb20: 0588 92c0 0005            MOVE   A8,@592C0h,0
3fb50: b588 0010                 MOVE   *A12(10h),A8,0
3fb70: 0588 92d0 0005            MOVE   A8,@592D0h,0
3fba0: b588 0020                 MOVE   *A12(20h),A8,0
3fbc0: 0588 92e0 0005            MOVE   A8,@592E0h,0
3fbf0: b588 0030                 MOVE   *A12(30h),A8,0
3fc10: 0588 92f0 0005            MOVE   A8,@592F0h,0
3fc40: b588 0040                 MOVE   *A12(40h),A8,0
3fc60: 0588 9300 0005            MOVE   A8,@59300h,0
3fc90: b58c 0050                 MOVE   *A12(50h),A12,0
3fcb0: 058c 9310 0005            MOVE   A12,@59310h,0
3fce0: a3cf                      MOVE   A14,-*SP,1
3fcf0: 09ec 9260 0005            MOVI   59260h,A12
3fd20: 938e                      MOVE   A12,*A14+,1
3fd30: 1928                      MOVK   9h,A8
3fd40: 930e                      MOVE   A8,*A14+,1
3fd50: 0d5f 0000 0000            CALLA  0h
3fd80: 830d                      MOVE   A8,*A13,1
3fd90: 4d08                      MOVE   A8,A8
3fda0: ca1c                      JREQ   3FF70h
3fdb0: 07ac d290 0004            MOVE   @4D290h,A12,1
3fde0: 0bac 0020 0000            ORI    20h,A12
3fe10: 078c d290 0004            MOVE   A12,@4D290h,1
3fe40: 1828                      MOVK   1h,A8
3fe50: 0788 d320 0005            MOVE   A8,@5D320h,1
3fe80: 09cc 004f                 MOVI   4Fh,A12
3fea0: 05ec d340 0005            MOVB   A12,@5D340h
3fed0: a3cf                      MOVE   A14,-*SP,1
3fee0: 09e8 d320 0005            MOVI   5D320h,A8
3ff10: 930e                      MOVE   A8,*A14+,1
3ff20: 1988                      MOVK   Ch,A8
3ff30: 930e                      MOVE   A8,*A14+,1
3ff40: 0d5f 0000 0000            CALLA  0h
3ff70: b7ee 0060                 MOVE   *SP(60h),A14,1
3ff90: 09af 3000                 MMFM   SP,A12,A13
3ffb0: 0962                      RETS   2h

_cp_s_back_dist:
3ffc0: 098f 000c                 MMTM   SP,A12,A13
3ffe0: 4dcd                      MOVE   A14,A13
3fff0: 100e                      ADDK   20h,A14
40000: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
40020: 1808                      MOVK   20h,A8
40030: 0788 9260 0005            MOVE   A8,@59260h,1
40060: 1988                      MOVK   Ch,A8
40070: 0788 9280 0005            MOVE   A8,@59280h,1
400a0: 1a08                      MOVK   10h,A8
400b0: 0788 92a0 0005            MOVE   A8,@592A0h,1
400e0: 8788                      MOVE   *A12,A8,1
400f0: 0788 92c0 0005            MOVE   A8,@592C0h,1
40120: b788 0020                 MOVE   *A12(20h),A8,1
40140: 0788 92e0 0005            MOVE   A8,@592E0h,1
40170: b788 0040                 MOVE   *A12(40h),A8,1
40190: 0788 9300 0005            MOVE   A8,@59300h,1
401c0: b788 0060                 MOVE   *A12(60h),A8,1
401e0: 0788 9320 0005            MOVE   A8,@59320h,1
40210: b788 0080                 MOVE   *A12(80h),A8,1
40230: 0788 9340 0005            MOVE   A8,@59340h,1
40260: b78c 00a0                 MOVE   *A12(A0h),A12,1
40280: 078c 9360 0005            MOVE   A12,@59360h,1
402b0: a3cf                      MOVE   A14,-*SP,1
402c0: 09ec 9260 0005            MOVI   59260h,A12
402f0: 938e                      MOVE   A12,*A14+,1
40300: 1928                      MOVK   9h,A8
40310: 930e                      MOVE   A8,*A14+,1
40320: 0d5f 0000 0000            CALLA  0h
40350: 830d                      MOVE   A8,*A13,1
40360: 4d08                      MOVE   A8,A8
40370: ca1c                      JREQ   40540h
40380: 07ac d290 0004            MOVE   @4D290h,A12,1
403b0: 0bac 0020 0000            ORI    20h,A12
403e0: 078c d290 0004            MOVE   A12,@4D290h,1
40410: 1828                      MOVK   1h,A8
40420: 0788 d320 0005            MOVE   A8,@5D320h,1
40450: 09cc 0050                 MOVI   50h,A12
40470: 05ec d340 0005            MOVB   A12,@5D340h
404a0: a3cf                      MOVE   A14,-*SP,1
404b0: 09e8 d320 0005            MOVI   5D320h,A8
404e0: 930e                      MOVE   A8,*A14+,1
404f0: 1988                      MOVK   Ch,A8
40500: 930e                      MOVE   A8,*A14+,1
40510: 0d5f 0000 0000            CALLA  0h
40540: b7ee 0060                 MOVE   *SP(60h),A14,1
40560: 09af 3000                 MMFM   SP,A12,A13
40580: 0962                      RETS   2h

_cp_s_max_speed:
40590: 098f 000c                 MMTM   SP,A12,A13
405b0: 4dcd                      MOVE   A14,A13
405c0: 100e                      ADDK   20h,A14
405d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
405f0: 1a88                      MOVK   14h,A8
40600: 0788 9260 0005            MOVE   A8,@59260h,1
40630: 1988                      MOVK   Ch,A8
40640: 0788 9280 0005            MOVE   A8,@59280h,1
40670: 1a28                      MOVK   11h,A8
40680: 0788 92a0 0005            MOVE   A8,@592A0h,1
406b0: 0570                      SETF   10h,1,0
406c0: 8588                      MOVE   *A12,A8,0
406d0: 0588 92c0 0005            MOVE   A8,@592C0h,0
40700: b588 0010                 MOVE   *A12(10h),A8,0
40720: 0588 92d0 0005            MOVE   A8,@592D0h,0
40750: b588 0020                 MOVE   *A12(20h),A8,0
40770: 0588 92e0 0005            MOVE   A8,@592E0h,0
407a0: b588 0030                 MOVE   *A12(30h),A8,0
407c0: 0588 92f0 0005            MOVE   A8,@592F0h,0
407f0: b588 0040                 MOVE   *A12(40h),A8,0
40810: 0588 9300 0005            MOVE   A8,@59300h,0
40840: b58c 0050                 MOVE   *A12(50h),A12,0
40860: 058c 9310 0005            MOVE   A12,@59310h,0
40890: a3cf                      MOVE   A14,-*SP,1
408a0: 09ec 9260 0005            MOVI   59260h,A12
408d0: 938e                      MOVE   A12,*A14+,1
408e0: 1928                      MOVK   9h,A8
408f0: 930e                      MOVE   A8,*A14+,1
40900: 0d5f 0000 0000            CALLA  0h
40930: 830d                      MOVE   A8,*A13,1
40940: 4d08                      MOVE   A8,A8
40950: ca1c                      JREQ   40B20h
40960: 07ac d290 0004            MOVE   @4D290h,A12,1
40990: 0bac 0020 0000            ORI    20h,A12
409c0: 078c d290 0004            MOVE   A12,@4D290h,1
409f0: 1828                      MOVK   1h,A8
40a00: 0788 d320 0005            MOVE   A8,@5D320h,1
40a30: 09cc 0051                 MOVI   51h,A12
40a50: 05ec d340 0005            MOVB   A12,@5D340h
40a80: a3cf                      MOVE   A14,-*SP,1
40a90: 09e8 d320 0005            MOVI   5D320h,A8
40ac0: 930e                      MOVE   A8,*A14+,1
40ad0: 1988                      MOVK   Ch,A8
40ae0: 930e                      MOVE   A8,*A14+,1
40af0: 0d5f 0000 0000            CALLA  0h
40b20: b7ee 0060                 MOVE   *SP(60h),A14,1
40b40: 09af 3000                 MMFM   SP,A12,A13
40b60: 0962                      RETS   2h

_cp_s_axis_id:
40b70: 098f 000c                 MMTM   SP,A12,A13
40b90: 4dcd                      MOVE   A14,A13
40ba0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
40bc0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
40be0: 8f08                      MOVB   *A8,A8
40bf0: 0be8 ffb2                 SUBI   4Dh,A8
40c10: 35a8                      CMPK   Dh,A8
40c20: c341                      JRHI   41040h
40c30: 24a8                      SLL    5h,A8
40c40: 0b28 cf70 0004            ADDI   4CF70h,A8
40c70: 8708                      MOVE   *A8,A8,1
40c80: 0168                      JUMP   A8
40c90: a3cf                      MOVE   A14,-*SP,1
40ca0: 09e8 dc00 0004            MOVI   4DC00h,A8
40cd0: 930e                      MOVE   A8,*A14+,1
40ce0: 938e                      MOVE   A12,*A14+,1
40cf0: 0d5f bc70 0004            CALLA  4BC70h
40d20: c031                      JR     41040h
40d30: a3cf                      MOVE   A14,-*SP,1
40d40: 09e8 dbc0 0004            MOVI   4DBC0h,A8
40d70: 930e                      MOVE   A8,*A14+,1
40d80: 938e                      MOVE   A12,*A14+,1
40d90: 0d5f bc70 0004            CALLA  4BC70h
40dc0: c027                      JR     41040h
40dd0: a3cf                      MOVE   A14,-*SP,1
40de0: 09e8 db80 0004            MOVI   4DB80h,A8
40e10: 930e                      MOVE   A8,*A14+,1
40e20: 938e                      MOVE   A12,*A14+,1
40e30: 0d5f bc70 0004            CALLA  4BC70h
40e60: c01d                      JR     41040h
40e70: a3cf                      MOVE   A14,-*SP,1
40e80: 09e8 dc40 0004            MOVI   4DC40h,A8
40eb0: 930e                      MOVE   A8,*A14+,1
40ec0: 938e                      MOVE   A12,*A14+,1
40ed0: 0d5f bc70 0004            CALLA  4BC70h
40f00: c013                      JR     41040h
40f10: a3cf                      MOVE   A14,-*SP,1
40f20: 09e8 dc80 0004            MOVI   4DC80h,A8
40f50: 930e                      MOVE   A8,*A14+,1
40f60: 938e                      MOVE   A12,*A14+,1
40f70: 0d5f bc70 0004            CALLA  4BC70h
40fa0: c009                      JR     41040h
40fb0: a3cf                      MOVE   A14,-*SP,1
40fc0: 09e8 dcc0 0004            MOVI   4DCC0h,A8
40ff0: 930e                      MOVE   A8,*A14+,1
41000: 938e                      MOVE   A12,*A14+,1
41010: 0d5f bc70 0004            CALLA  4BC70h
41040: b7ee 0060                 MOVE   *SP(60h),A14,1
41060: 09af 3000                 MMFM   SP,A12,A13
41080: 0962                      RETS   2h

_cp_s_abort:
41090: a3af                      MOVE   A13,-*SP,1
410a0: 4dcd                      MOVE   A14,A13
410b0: 100e                      ADDK   20h,A14
410c0: 1908                      MOVK   8h,A8
410d0: 0788 9260 0005            MOVE   A8,@59260h,1
41100: 1988                      MOVK   Ch,A8
41110: 0788 9280 0005            MOVE   A8,@59280h,1
41140: 1968                      MOVK   Bh,A8
41150: 0788 92a0 0005            MOVE   A8,@592A0h,1
41180: a3cf                      MOVE   A14,-*SP,1
41190: 09e8 9260 0005            MOVI   59260h,A8
411c0: 930e                      MOVE   A8,*A14+,1
411d0: 1928                      MOVK   9h,A8
411e0: 930e                      MOVE   A8,*A14+,1
411f0: 0d5f 0000 0000            CALLA  0h
41220: 830d                      MOVE   A8,*A13,1
41230: 4d08                      MOVE   A8,A8
41240: ca13                      JREQ   41380h
41250: 1828                      MOVK   1h,A8
41260: 0788 d320 0005            MOVE   A8,@5D320h,1
41290: 09c8 004b                 MOVI   4Bh,A8
412b0: 05e8 d340 0005            MOVB   A8,@5D340h
412e0: a3cf                      MOVE   A14,-*SP,1
412f0: 09e8 d320 0005            MOVI   5D320h,A8
41320: 930e                      MOVE   A8,*A14+,1
41330: 1988                      MOVK   Ch,A8
41340: 930e                      MOVE   A8,*A14+,1
41350: 0d5f 0000 0000            CALLA  0h
41380: 140e                      SUBK   20h,A14
41390: 97ed                      MOVE   *SP+,A13,1
413a0: 0960                      RETS   

_cp_s_check_psu:
413b0: a3af                      MOVE   A13,-*SP,1
413c0: 4dcd                      MOVE   A14,A13
413d0: 100e                      ADDK   20h,A14
413e0: 1908                      MOVK   8h,A8
413f0: 0788 9260 0005            MOVE   A8,@59260h,1
41420: 1988                      MOVK   Ch,A8
41430: 0788 9280 0005            MOVE   A8,@59280h,1
41460: 1a68                      MOVK   13h,A8
41470: 0788 92a0 0005            MOVE   A8,@592A0h,1
414a0: a3cf                      MOVE   A14,-*SP,1
414b0: 09e8 9260 0005            MOVI   59260h,A8
414e0: 930e                      MOVE   A8,*A14+,1
414f0: 1928                      MOVK   9h,A8
41500: 930e                      MOVE   A8,*A14+,1
41510: 0d5f 0000 0000            CALLA  0h
41540: 830d                      MOVE   A8,*A13,1
41550: 4d08                      MOVE   A8,A8
41560: ca13                      JREQ   416A0h
41570: 1828                      MOVK   1h,A8
41580: 0788 d320 0005            MOVE   A8,@5D320h,1
415b0: 09c8 0053                 MOVI   53h,A8
415d0: 05e8 d340 0005            MOVB   A8,@5D340h
41600: a3cf                      MOVE   A14,-*SP,1
41610: 09e8 d320 0005            MOVI   5D320h,A8
41640: 930e                      MOVE   A8,*A14+,1
41650: 1988                      MOVK   Ch,A8
41660: 930e                      MOVE   A8,*A14+,1
41670: 0d5f 0000 0000            CALLA  0h
416a0: 140e                      SUBK   20h,A14
416b0: 97ed                      MOVE   *SP+,A13,1
416c0: 0960                      RETS   

_cp_stg_suspend:
416d0: 098f 0028                 MMTM   SP,A10,A12
416f0: 182a                      MOVK   1h,A10
41700: a3cf                      MOVE   A14,-*SP,1
41710: 1888                      MOVK   4h,A8
41720: 930e                      MOVE   A8,*A14+,1
41730: 0d5f 0000 0000            CALLA  0h
41760: 4d0c                      MOVE   A8,A12
41770: cb09                      JRNE   41810h
41780: a3cf                      MOVE   A14,-*SP,1
41790: 1888                      MOVK   4h,A8
417a0: 930e                      MOVE   A8,*A14+,1
417b0: 0d5f 0000 0000            CALLA  0h
417e0: 4d0c                      MOVE   A8,A12
417f0: cb01                      JRNE   41810h
41800: 454a                      SUB    A10,A10
41810: 4d48                      MOVE   A10,A8
41820: cbed                      JRNE   41700h
41830: 182a                      MOVK   1h,A10
41840: a3cf                      MOVE   A14,-*SP,1
41850: 1968                      MOVK   Bh,A8
41860: 930e                      MOVE   A8,*A14+,1
41870: 0d5f 0000 0000            CALLA  0h
418a0: 4d0c                      MOVE   A8,A12
418b0: cb09                      JRNE   41950h
418c0: a3cf                      MOVE   A14,-*SP,1
418d0: 1968                      MOVK   Bh,A8
418e0: 930e                      MOVE   A8,*A14+,1
418f0: 0d5f 0000 0000            CALLA  0h
41920: 4d0c                      MOVE   A8,A12
41930: cb01                      JRNE   41950h
41940: 454a                      SUB    A10,A10
41950: 4d48                      MOVE   A10,A8
41960: cbed                      JRNE   41840h
41970: 454a                      SUB    A10,A10
41980: 078a 0c00 0000            MOVE   A10,@C00h,1
419b0: 4d88                      MOVE   A12,A8
419c0: 09af 1400                 MMFM   SP,A10,A12
419e0: 0960                      RETS   

_get_stage_errors:
419f0: a3af                      MOVE   A13,-*SP,1
41a00: 4dcd                      MOVE   A14,A13
41a10: 0b0e 0040                 ADDI   40h,A14
41a30: a3cf                      MOVE   A14,-*SP,1
41a40: 93ae                      MOVE   A13,*A14+,1
41a50: 1988                      MOVK   Ch,A8
41a60: 930e                      MOVE   A8,*A14+,1
41a70: 0d5f 0000 0000            CALLA  0h
41aa0: 4f0e                      MOVE   A8,B14
41ab0: 15e8                      SUBK   Fh,A8
41ac0: cb02                      JRNE   41AF0h
41ad0: 1828                      MOVK   1h,A8
41ae0: c016                      JR     41C50h
41af0: 4fd8                      MOVE   B14,A8
41b00: cb0b                      JRNE   41BC0h
41b10: a3cf                      MOVE   A14,-*SP,1
41b20: 4508                      SUB    A8,A8
41b30: 930e                      MOVE   A8,*A14+,1
41b40: 93ae                      MOVE   A13,*A14+,1
41b50: 1988                      MOVK   Ch,A8
41b60: 930e                      MOVE   A8,*A14+,1
41b70: 0d5f 0000 0000            CALLA  0h
41ba0: 4f0e                      MOVE   A8,B14
41bb0: ca02                      JREQ   41BE0h
41bc0: 1828                      MOVK   1h,A8
41bd0: c007                      JR     41C50h
41be0: 0548                      SETF   8h,0,0
41bf0: b5a8 0020                 MOVE   *A13(20h),A8,0
41c10: 0ba8 0080 0000            ORI    80h,A8
41c40: 0528                      ZEXT   A8,0
41c50: 0bee ffbf                 SUBI   40h,A14
41c70: 97ed                      MOVE   *SP+,A13,1
41c80: 0960                      RETS   

_cp_s_xbacklash:
41c90: a3af                      MOVE   A13,-*SP,1
41ca0: 4dcd                      MOVE   A14,A13
41cb0: 100e                      ADDK   20h,A14
41cc0: 1928                      MOVK   9h,A8
41cd0: 0788 9260 0005            MOVE   A8,@59260h,1
41d00: 1988                      MOVK   Ch,A8
41d10: 0788 9280 0005            MOVE   A8,@59280h,1
41d40: 1a88                      MOVK   14h,A8
41d50: 0788 92a0 0005            MOVE   A8,@592A0h,1
41d80: afa8 ffe0                 MOVB   *A13(FFE0h),A8
41da0: 05e8 92c0 0005            MOVB   A8,@592C0h
41dd0: a3cf                      MOVE   A14,-*SP,1
41de0: 09e8 9260 0005            MOVI   59260h,A8
41e10: 930e                      MOVE   A8,*A14+,1
41e20: 1928                      MOVK   9h,A8
41e30: 930e                      MOVE   A8,*A14+,1
41e40: 0d5f 0000 0000            CALLA  0h
41e70: 830d                      MOVE   A8,*A13,1
41e80: 4d08                      MOVE   A8,A8
41e90: ca13                      JREQ   41FD0h
41ea0: 1828                      MOVK   1h,A8
41eb0: 0788 d320 0005            MOVE   A8,@5D320h,1
41ee0: 09c8 0054                 MOVI   54h,A8
41f00: 05e8 d340 0005            MOVB   A8,@5D340h
41f30: a3cf                      MOVE   A14,-*SP,1
41f40: 09e8 d320 0005            MOVI   5D320h,A8
41f70: 930e                      MOVE   A8,*A14+,1
41f80: 1988                      MOVK   Ch,A8
41f90: 930e                      MOVE   A8,*A14+,1
41fa0: 0d5f 0000 0000            CALLA  0h
41fd0: b7ee 0040                 MOVE   *SP(40h),A14,1
41ff0: 97ed                      MOVE   *SP+,A13,1
42000: 0962                      RETS   2h

_cp_s_ybacklash:
42010: a3af                      MOVE   A13,-*SP,1
42020: 4dcd                      MOVE   A14,A13
42030: 100e                      ADDK   20h,A14
42040: 1928                      MOVK   9h,A8
42050: 0788 9260 0005            MOVE   A8,@59260h,1
42080: 1988                      MOVK   Ch,A8
42090: 0788 9280 0005            MOVE   A8,@59280h,1
420c0: 1aa8                      MOVK   15h,A8
420d0: 0788 92a0 0005            MOVE   A8,@592A0h,1
42100: afa8 ffe0                 MOVB   *A13(FFE0h),A8
42120: 05e8 92c0 0005            MOVB   A8,@592C0h
42150: a3cf                      MOVE   A14,-*SP,1
42160: 09e8 9260 0005            MOVI   59260h,A8
42190: 930e                      MOVE   A8,*A14+,1
421a0: 1928                      MOVK   9h,A8
421b0: 930e                      MOVE   A8,*A14+,1
421c0: 0d5f 0000 0000            CALLA  0h
421f0: 830d                      MOVE   A8,*A13,1
42200: 4d08                      MOVE   A8,A8
42210: ca13                      JREQ   42350h
42220: 1828                      MOVK   1h,A8
42230: 0788 d320 0005            MOVE   A8,@5D320h,1
42260: 09c8 0055                 MOVI   55h,A8
42280: 05e8 d340 0005            MOVB   A8,@5D340h
422b0: a3cf                      MOVE   A14,-*SP,1
422c0: 09e8 d320 0005            MOVI   5D320h,A8
422f0: 930e                      MOVE   A8,*A14+,1
42300: 1988                      MOVK   Ch,A8
42310: 930e                      MOVE   A8,*A14+,1
42320: 0d5f 0000 0000            CALLA  0h
42350: b7ee 0040                 MOVE   *SP(40h),A14,1
42370: 97ed                      MOVE   *SP+,A13,1
42380: 0962                      RETS   2h

_cp_s_zbacklash:
42390: a3af                      MOVE   A13,-*SP,1
423a0: 4dcd                      MOVE   A14,A13
423b0: 100e                      ADDK   20h,A14
423c0: 1928                      MOVK   9h,A8
423d0: 0788 9260 0005            MOVE   A8,@59260h,1
42400: 1988                      MOVK   Ch,A8
42410: 0788 9280 0005            MOVE   A8,@59280h,1
42440: 1ac8                      MOVK   16h,A8
42450: 0788 92a0 0005            MOVE   A8,@592A0h,1
42480: afa8 ffe0                 MOVB   *A13(FFE0h),A8
424a0: 05e8 92c0 0005            MOVB   A8,@592C0h
424d0: a3cf                      MOVE   A14,-*SP,1
424e0: 09e8 9260 0005            MOVI   59260h,A8
42510: 930e                      MOVE   A8,*A14+,1
42520: 1928                      MOVK   9h,A8
42530: 930e                      MOVE   A8,*A14+,1
42540: 0d5f 0000 0000            CALLA  0h
42570: 830d                      MOVE   A8,*A13,1
42580: 4d08                      MOVE   A8,A8
42590: ca13                      JREQ   426D0h
425a0: 1828                      MOVK   1h,A8
425b0: 0788 d320 0005            MOVE   A8,@5D320h,1
425e0: 09c8 0056                 MOVI   56h,A8
42600: 05e8 d340 0005            MOVB   A8,@5D340h
42630: a3cf                      MOVE   A14,-*SP,1
42640: 09e8 d320 0005            MOVI   5D320h,A8
42670: 930e                      MOVE   A8,*A14+,1
42680: 1988                      MOVK   Ch,A8
42690: 930e                      MOVE   A8,*A14+,1
426a0: 0d5f 0000 0000            CALLA  0h
426d0: b7ee 0040                 MOVE   *SP(40h),A14,1
426f0: 97ed                      MOVE   *SP+,A13,1
42700: 0962                      RETS   2h

_cp_s_tbacklash:
42710: a3af                      MOVE   A13,-*SP,1
42720: 4dcd                      MOVE   A14,A13
42730: 100e                      ADDK   20h,A14
42740: 1928                      MOVK   9h,A8
42750: 0788 9260 0005            MOVE   A8,@59260h,1
42780: 1988                      MOVK   Ch,A8
42790: 0788 9280 0005            MOVE   A8,@59280h,1
427c0: 1ae8                      MOVK   17h,A8
427d0: 0788 92a0 0005            MOVE   A8,@592A0h,1
42800: afa8 ffe0                 MOVB   *A13(FFE0h),A8
42820: 05e8 92c0 0005            MOVB   A8,@592C0h
42850: a3cf                      MOVE   A14,-*SP,1
42860: 09e8 9260 0005            MOVI   59260h,A8
42890: 930e                      MOVE   A8,*A14+,1
428a0: 1928                      MOVK   9h,A8
428b0: 930e                      MOVE   A8,*A14+,1
428c0: 0d5f 0000 0000            CALLA  0h
428f0: 830d                      MOVE   A8,*A13,1
42900: 4d08                      MOVE   A8,A8
42910: ca13                      JREQ   42A50h
42920: 1828                      MOVK   1h,A8
42930: 0788 d320 0005            MOVE   A8,@5D320h,1
42960: 09c8 0057                 MOVI   57h,A8
42980: 05e8 d340 0005            MOVB   A8,@5D340h
429b0: a3cf                      MOVE   A14,-*SP,1
429c0: 09e8 d320 0005            MOVI   5D320h,A8
429f0: 930e                      MOVE   A8,*A14+,1
42a00: 1988                      MOVK   Ch,A8
42a10: 930e                      MOVE   A8,*A14+,1
42a20: 0d5f 0000 0000            CALLA  0h
42a50: b7ee 0040                 MOVE   *SP(40h),A14,1
42a70: 97ed                      MOVE   *SP+,A13,1
42a80: 0962                      RETS   2h

_cp_s_rbacklash:
42a90: a3af                      MOVE   A13,-*SP,1
42aa0: 4dcd                      MOVE   A14,A13
42ab0: 100e                      ADDK   20h,A14
42ac0: 1928                      MOVK   9h,A8
42ad0: 0788 9260 0005            MOVE   A8,@59260h,1
42b00: 1988                      MOVK   Ch,A8
42b10: 0788 9280 0005            MOVE   A8,@59280h,1
42b40: 1b08                      MOVK   18h,A8
42b50: 0788 92a0 0005            MOVE   A8,@592A0h,1
42b80: afa8 ffe0                 MOVB   *A13(FFE0h),A8
42ba0: 05e8 92c0 0005            MOVB   A8,@592C0h
42bd0: a3cf                      MOVE   A14,-*SP,1
42be0: 09e8 9260 0005            MOVI   59260h,A8
42c10: 930e                      MOVE   A8,*A14+,1
42c20: 1928                      MOVK   9h,A8
42c30: 930e                      MOVE   A8,*A14+,1
42c40: 0d5f 0000 0000            CALLA  0h
42c70: 830d                      MOVE   A8,*A13,1
42c80: 4d08                      MOVE   A8,A8
42c90: ca13                      JREQ   42DD0h
42ca0: 1828                      MOVK   1h,A8
42cb0: 0788 d320 0005            MOVE   A8,@5D320h,1
42ce0: 09c8 0058                 MOVI   58h,A8
42d00: 05e8 d340 0005            MOVB   A8,@5D340h
42d30: a3cf                      MOVE   A14,-*SP,1
42d40: 09e8 d320 0005            MOVI   5D320h,A8
42d70: 930e                      MOVE   A8,*A14+,1
42d80: 1988                      MOVK   Ch,A8
42d90: 930e                      MOVE   A8,*A14+,1
42da0: 0d5f 0000 0000            CALLA  0h
42dd0: b7ee 0040                 MOVE   *SP(40h),A14,1
42df0: 97ed                      MOVE   *SP+,A13,1
42e00: 0962                      RETS   2h

_cp_stage_motors_on_off:
42e10: a3af                      MOVE   A13,-*SP,1
42e20: 4dcd                      MOVE   A14,A13
42e30: 100e                      ADDK   20h,A14
42e40: 1928                      MOVK   9h,A8
42e50: 0788 9260 0005            MOVE   A8,@59260h,1
42e80: 1988                      MOVK   Ch,A8
42e90: 0788 9280 0005            MOVE   A8,@59280h,1
42ec0: 1b28                      MOVK   19h,A8
42ed0: 0788 92a0 0005            MOVE   A8,@592A0h,1
42f00: afa8 ffe0                 MOVB   *A13(FFE0h),A8
42f20: 05e8 92c0 0005            MOVB   A8,@592C0h
42f50: a3cf                      MOVE   A14,-*SP,1
42f60: 09e8 9260 0005            MOVI   59260h,A8
42f90: 930e                      MOVE   A8,*A14+,1
42fa0: 1928                      MOVK   9h,A8
42fb0: 930e                      MOVE   A8,*A14+,1
42fc0: 0d5f 0000 0000            CALLA  0h
42ff0: 830d                      MOVE   A8,*A13,1
43000: 4d08                      MOVE   A8,A8
43010: ca13                      JREQ   43150h
43020: 1828                      MOVK   1h,A8
43030: 0788 d320 0005            MOVE   A8,@5D320h,1
43060: 09c8 0059                 MOVI   59h,A8
43080: 05e8 d340 0005            MOVB   A8,@5D340h
430b0: a3cf                      MOVE   A14,-*SP,1
430c0: 09e8 d320 0005            MOVI   5D320h,A8
430f0: 930e                      MOVE   A8,*A14+,1
43100: 1988                      MOVK   Ch,A8
43110: 930e                      MOVE   A8,*A14+,1
43120: 0d5f 0000 0000            CALLA  0h
43150: b7ee 0040                 MOVE   *SP(40h),A14,1
43170: 97ed                      MOVE   *SP+,A13,1
43180: 0962                      RETS   2h

_cp_disable_touch_alarm:
43190: a3af                      MOVE   A13,-*SP,1
431a0: 4dcd                      MOVE   A14,A13
431b0: 100e                      ADDK   20h,A14
431c0: 1908                      MOVK   8h,A8
431d0: 0788 9260 0005            MOVE   A8,@59260h,1
43200: 1988                      MOVK   Ch,A8
43210: 0788 9280 0005            MOVE   A8,@59280h,1
43240: 1b48                      MOVK   1Ah,A8
43250: 0788 92a0 0005            MOVE   A8,@592A0h,1
43280: a3cf                      MOVE   A14,-*SP,1
43290: 09e8 9260 0005            MOVI   59260h,A8
432c0: 930e                      MOVE   A8,*A14+,1
432d0: 1928                      MOVK   9h,A8
432e0: 930e                      MOVE   A8,*A14+,1
432f0: 0d5f 0000 0000            CALLA  0h
43320: 830d                      MOVE   A8,*A13,1
43330: 4d08                      MOVE   A8,A8
43340: ca13                      JREQ   43480h
43350: 1828                      MOVK   1h,A8
43360: 0788 d320 0005            MOVE   A8,@5D320h,1
43390: 09c8 005a                 MOVI   5Ah,A8
433b0: 05e8 d340 0005            MOVB   A8,@5D340h
433e0: a3cf                      MOVE   A14,-*SP,1
433f0: 09e8 d320 0005            MOVI   5D320h,A8
43420: 930e                      MOVE   A8,*A14+,1
43430: 1988                      MOVK   Ch,A8
43440: 930e                      MOVE   A8,*A14+,1
43450: 0d5f 0000 0000            CALLA  0h
43480: 140e                      SUBK   20h,A14
43490: 97ed                      MOVE   *SP+,A13,1
434a0: 0960                      RETS   

_cp_general_stage_cmd:
434b0: 098f 000c                 MMTM   SP,A12,A13
434d0: 4dcd                      MOVE   A14,A13
434e0: 100e                      ADDK   20h,A14
434f0: b7ac ff80                 MOVE   *A13(FF80h),A12,1
43510: 09c8 0025                 MOVI   25h,A8
43530: 0788 9260 0005            MOVE   A8,@59260h,1
43560: 1988                      MOVK   Ch,A8
43570: 0788 9280 0005            MOVE   A8,@59280h,1
435a0: 1ba8                      MOVK   1Dh,A8
435b0: 0788 92a0 0005            MOVE   A8,@592A0h,1
435e0: 8788                      MOVE   *A12,A8,1
435f0: 0788 92c0 0005            MOVE   A8,@592C0h,1
43620: b788 0020                 MOVE   *A12(20h),A8,1
43640: 0788 92e0 0005            MOVE   A8,@592E0h,1
43670: b788 0040                 MOVE   *A12(40h),A8,1
43690: 0788 9300 0005            MOVE   A8,@59300h,1
436c0: b788 0060                 MOVE   *A12(60h),A8,1
436e0: 0788 9320 0005            MOVE   A8,@59320h,1
43710: b788 0080                 MOVE   *A12(80h),A8,1
43730: 0788 9340 0005            MOVE   A8,@59340h,1
43760: b78c 00a0                 MOVE   *A12(A0h),A12,1
43780: 078c 9360 0005            MOVE   A12,@59360h,1
437b0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
437d0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
437f0: 0d5f 4030 0004            CALLA  44030h
43820: a7c8                      MOVE   -*A14,A8,1
43830: 0788 9380 0005            MOVE   A8,@59380h,1
43860: afa8 ffe0                 MOVB   *A13(FFE0h),A8
43880: 05e8 93a0 0005            MOVB   A8,@593A0h
438b0: a3cf                      MOVE   A14,-*SP,1
438c0: 09ec 9260 0005            MOVI   59260h,A12
438f0: 938e                      MOVE   A12,*A14+,1
43900: 1928                      MOVK   9h,A8
43910: 930e                      MOVE   A8,*A14+,1
43920: 0d5f 0000 0000            CALLA  0h
43950: 830d                      MOVE   A8,*A13,1
43960: 4d08                      MOVE   A8,A8
43970: ca13                      JREQ   43AB0h
43980: 182c                      MOVK   1h,A12
43990: 078c d320 0005            MOVE   A12,@5D320h,1
439c0: 09c8 005d                 MOVI   5Dh,A8
439e0: 05e8 d340 0005            MOVB   A8,@5D340h
43a10: a3cf                      MOVE   A14,-*SP,1
43a20: 09ec d320 0005            MOVI   5D320h,A12
43a50: 938e                      MOVE   A12,*A14+,1
43a60: 1988                      MOVK   Ch,A8
43a70: 930e                      MOVE   A8,*A14+,1
43a80: 0d5f 0000 0000            CALLA  0h
43ab0: b7ee 0060                 MOVE   *SP(60h),A14,1
43ad0: 09af 3000                 MMFM   SP,A12,A13
43af0: 0962                      RETS   2h

_cp_force_status_read:
43b00: 1908                      MOVK   8h,A8
43b10: 0788 9260 0005            MOVE   A8,@59260h,1
43b40: 1988                      MOVK   Ch,A8
43b50: 0788 9280 0005            MOVE   A8,@59280h,1
43b80: 18c8                      MOVK   6h,A8
43b90: 0788 92a0 0005            MOVE   A8,@592A0h,1
43bc0: a3cf                      MOVE   A14,-*SP,1
43bd0: 09e8 9260 0005            MOVI   59260h,A8
43c00: 930e                      MOVE   A8,*A14+,1
43c10: 1928                      MOVK   9h,A8
43c20: 930e                      MOVE   A8,*A14+,1
43c30: 0d5f 0000 0000            CALLA  0h
43c60: 4f0e                      MOVE   A8,B14
43c70: 07a8 d290 0004            MOVE   @4D290h,A8,1
43ca0: 0ba8 4000 0000            ORI    4000h,A8
43cd0: 0788 d290 0004            MOVE   A8,@4D290h,1
43d00: 4dde                      MOVE   B14,B14
43d10: ca13                      JREQ   43E50h
43d20: 1828                      MOVK   1h,A8
43d30: 0788 d320 0005            MOVE   A8,@5D320h,1
43d60: 09c8 005d                 MOVI   5Dh,A8
43d80: 05e8 d340 0005            MOVB   A8,@5D340h
43db0: a3cf                      MOVE   A14,-*SP,1
43dc0: 09e8 d320 0005            MOVI   5D320h,A8
43df0: 930e                      MOVE   A8,*A14+,1
43e00: 1988                      MOVK   Ch,A8
43e10: 930e                      MOVE   A8,*A14+,1
43e20: 0d5f 0000 0000            CALLA  0h
43e50: 0960                      RETS   

_cp_set_rot_axis_limit_switch:
43e60: a3af                      MOVE   A13,-*SP,1
43e70: 4dcd                      MOVE   A14,A13
43e80: 0570                      SETF   10h,1,0
43e90: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
43eb0: 0588 de40 0004            MOVE   A8,@4DE40h,0
43ee0: b7ee 0040                 MOVE   *SP(40h),A14,1
43f00: 97ed                      MOVE   *SP+,A13,1
43f10: 0962                      RETS   2h

_cp_set_protected_z_mode:
43f20: a3af                      MOVE   A13,-*SP,1
43f30: 4dcd                      MOVE   A14,A13
43f40: 0570                      SETF   10h,1,0
43f50: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
43f70: 0588 de50 0004            MOVE   A8,@4DE50h,0
43fa0: b7ee 0040                 MOVE   *SP(40h),A14,1
43fc0: 97ed                      MOVE   *SP+,A13,1
43fd0: 0962                      RETS   2h

_cp_get_stage_init_percent:
43fe0: 0570                      SETF   10h,1,0
43ff0: 05a8 de60 0004            MOVE   @4DE60h,A8,0
44020: 0960                      RETS   

FD$DTOF:
44030: 07a8 0000 0000            MOVE   @0h,A8,1
44060: ca0e                      JREQ   44150h
44070: 4dc8                      MOVE   A14,A8
44080: 0be8 ffbf                 SUBI   40h,A8
440a0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
440d0: 0bee ffbf                 SUBI   40h,A14
440f0: d83f 0080                 CEXEC  1,00101F,0
44110: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
44140: 0960                      RETS   
44150: 098f 9000                 MMTM   SP,A0,A3
44170: a7c3                      MOVE   -*A14,A3,1
44180: 2d83                      SRL    14h,A3
44190: a7c0                      MOVE   -*A14,A0,1
441a0: 4c08                      MOVE   A0,A8
441b0: 2588                      SLL    Ch,A8
441c0: 5503                      OR     A8,A3
441d0: 2420                      SLL    1h,A0
441e0: 4708                      SUBB   A8,A8
441f0: 27e8                      SLL    1Fh,A8
44200: 2d60                      SRL    15h,A0
44210: ca18                      JREQ   443A0h
44220: 0b40 f800                 CMPI   7FFh,A0
44240: ca20                      JREQ   44450h
44250: 2ee3                      SRL    9h,A3
44260: c908                      JRNC   442F0h
44270: 1023                      INC    A3
44280: 1d03                      BTST   17h,A3
44290: ca05                      JREQ   442F0h
442a0: 0b83 0000 ff80            ANDI   7FFFFFh,A3
442d0: 2fe3                      SRL    1h,A3
442e0: 1020                      INC    A0
442f0: 0be0 fc7f                 SUBI   380h,A0
44310: c702                      JRGT   44340h
44320: 5600                      CLR    A0
44330: c006                      JR     443A0h
44340: 0b40 ff00                 CMPI   FFh,A0
44360: c507                      JRGE   443E0h
44370: 26e0                      SLL    17h,A0
44380: 5460                      OR     A3,A0
44390: 5500                      OR     A8,A0
443a0: 920e                      MOVE   A0,*A14+,1
443b0: 09af 0009                 MMFM   SP,A0,A3
443d0: 0960                      RETS   
443e0: 4d03                      MOVE   A8,A3
443f0: 1840                      MOVK   2h,A0
44400: a3cf                      MOVE   A14,-*SP,1
44410: 920e                      MOVE   A0,*A14+,1
44420: 0d5f b1c0 0004            CALLA  4B1C0h
44450: 0ba3 0000 7f80            ORI    7F800000h,A3
44480: 926e                      MOVE   A3,*A14+,1
44490: 09af 0009                 MMFM   SP,A0,A3
444b0: 0960                      RETS   

FD$DTOI:
444c0: 07a8 0000 0000            MOVE   @0h,A8,1
444f0: ca1a                      JREQ   446A0h
44500: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
44530: a30f                      MOVE   A8,-*SP,1
44540: 09c8 0029                 MOVI   29h,A8
44560: 0628 4c00 000d            CMOVGC A8,000D4C,0
44590: 4dc8                      MOVE   A14,A8
445a0: 0be8 ffbf                 SUBI   40h,A8
445c0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
445f0: 0bee ffbf                 SUBI   40h,A14
44610: d83f 00a0                 CEXEC  1,00141F,0
44630: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
44660: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
44690: 0960                      RETS   
446a0: 098f 9000                 MMTM   SP,A0,A3
446c0: a7c8                      MOVE   -*A14,A8,1
446d0: 2d88                      SRL    14h,A8
446e0: a7c0                      MOVE   -*A14,A0,1
446f0: 4c03                      MOVE   A0,A3
44700: 2583                      SLL    Ch,A3
44710: 5468                      OR     A3,A8
44720: 2420                      SLL    1h,A0
44730: 4663                      SUBB   A3,A3
44740: 2d60                      SRL    15h,A0
44750: 2fc8                      SRL    2h,A8
44760: 0ba8 0000 4000            ORI    40000000h,A8
44790: 1020                      INC    A0
447a0: 0be0 fc00                 SUBI   3FFh,A0
447c0: c60a                      JRLE   44870h
447d0: 17e0                      SUBK   1Fh,A0
447e0: c70c                      JRGT   448B0h
447f0: 6608                      SRL    A0,A8
44800: 4c63                      MOVE   A3,A3
44810: ca01                      JREQ   44830h
44820: 03a8                      NEG    A8
44830: 09af 0009                 MMFM   SP,A0,A3
44850: 4d08                      MOVE   A8,A8
44860: 0960                      RETS   
44870: 09af 0009                 MMFM   SP,A0,A3
44890: 4508                      SUB    A8,A8
448a0: 0960                      RETS   
448b0: 1820                      MOVK   1h,A0
448c0: a3cf                      MOVE   A14,-*SP,1
448d0: 920e                      MOVE   A0,*A14+,1
448e0: 0d5f b1c0 0004            CALLA  4B1C0h
44910: 0bc3 ffff 7fff            XORI   7FFFFFFFh,A3
44940: 4c68                      MOVE   A3,A8
44950: 09af 0009                 MMFM   SP,A0,A3
44970: 0960                      RETS   

FD$FTOD:
44980: 07a8 0000 0000            MOVE   @0h,A8,1
449b0: ca09                      JREQ   44A50h
449c0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
449f0: d83e 0080                 CEXEC  0,00101F,0
44a10: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
44a40: 0960                      RETS   
44a50: 098f c000                 MMTM   SP,A0,A1
44a70: a7c8                      MOVE   -*A14,A8,1
44a80: 4d01                      MOVE   A8,A1
44a90: 2421                      SLL    1h,A1
44aa0: 4600                      SUBB   A0,A0
44ab0: 2d01                      SRL    18h,A1
44ac0: ca14                      JREQ   44C10h
44ad0: 27e0                      SLL    1Fh,A0
44ae0: 0b41 ff00                 CMPI   FFh,A1
44b00: cb02                      JRNE   44B30h
44b10: 09c1 047f                 MOVI   47Fh,A1
44b30: 0b01 0380                 ADDI   380h,A1
44b50: 2681                      SLL    14h,A1
44b60: 5420                      OR     A1,A0
44b70: 4d01                      MOVE   A8,A1
44b80: 27a1                      SLL    1Dh,A1
44b90: 2528                      SLL    9h,A8
44ba0: 2e88                      SRL    Ch,A8
44bb0: 5500                      OR     A8,A0
44bc0: 920e                      MOVE   A0,*A14+,1
44bd0: 922e                      MOVE   A1,*A14+,1
44be0: 09af 0003                 MMFM   SP,A0,A1
44c00: 0960                      RETS   
44c10: 922e                      MOVE   A1,*A14+,1
44c20: 922e                      MOVE   A1,*A14+,1
44c30: 09af 0003                 MMFM   SP,A0,A1
44c50: 0960                      RETS   

FD$FTOI:
44c60: 07a8 0000 0000            MOVE   @0h,A8,1
44c90: ca15                      JREQ   44DF0h
44ca0: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
44cd0: a30f                      MOVE   A8,-*SP,1
44ce0: 09c8 0029                 MOVI   29h,A8
44d00: 0628 4c00 000d            CMOVGC A8,000D4C,0
44d30: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
44d60: d83e 00a0                 CEXEC  0,00141F,0
44d80: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
44db0: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
44de0: 0960                      RETS   
44df0: 098f 9000                 MMTM   SP,A0,A3
44e10: a7c0                      MOVE   -*A14,A0,1
44e20: 4c08                      MOVE   A0,A8
44e30: 2420                      SLL    1h,A0
44e40: 4663                      SUBB   A3,A3
44e50: 2d00                      SRL    18h,A0
44e60: 2528                      SLL    9h,A8
44e70: 2fc8                      SRL    2h,A8
44e80: 0ba8 0000 4000            ORI    40000000h,A8
44eb0: 1020                      INC    A0
44ec0: 0be0 ff80                 SUBI   7Fh,A0
44ee0: c60a                      JRLE   44F90h
44ef0: 17e0                      SUBK   1Fh,A0
44f00: c70c                      JRGT   44FD0h
44f10: 6608                      SRL    A0,A8
44f20: 4c63                      MOVE   A3,A3
44f30: ca01                      JREQ   44F50h
44f40: 03a8                      NEG    A8
44f50: 09af 0009                 MMFM   SP,A0,A3
44f70: 4d08                      MOVE   A8,A8
44f80: 0960                      RETS   
44f90: 09af 0009                 MMFM   SP,A0,A3
44fb0: 4508                      SUB    A8,A8
44fc0: 0960                      RETS   
44fd0: 1860                      MOVK   3h,A0
44fe0: a3cf                      MOVE   A14,-*SP,1
44ff0: 920e                      MOVE   A0,*A14+,1
45000: 0d5f b1c0 0004            CALLA  4B1C0h
45030: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
45060: 4c68                      MOVE   A3,A8
45070: 09af 0009                 MMFM   SP,A0,A3
45090: 0960                      RETS   
450a0: 2d00                      SRL    18h,A0
450b0: 2528                      SLL    9h,A8
450c0: 2fc8                      SRL    2h,A8
450d0: 0ba8 0000 4000            ORI    40000000h,A8
45100: 1020                      INC    A0
45110: 0be0 ff80                 SUBI   7Fh,A0
45130: c622                      JRLE   45360h
45140: 17e0                      SUBK   1Fh,A0
45150: c724                      JRGT   453A0h
45160: 6608                      SRL    A0,A8
45170: 4c63                      MOVE   A3,A3
45180: ca01                      JREQ   451A0h
45190: 03a8                      NEG    A8
451a0: 09af 0009                 MMFM   SP,A0,A3
451c0: 4d08                      MOVE   A8,A8
451d0: 0960                      RETS   

FD$FTOU:
451e0: 098f 9000                 MMTM   SP,A0,A3
45200: a7c0                      MOVE   -*A14,A0,1
45210: 4c08                      MOVE   A0,A8
45220: 2420                      SLL    1h,A0
45230: 4663                      SUBB   A3,A3
45240: cbe5                      JRNE   450A0h
45250: 2d00                      SRL    18h,A0
45260: 2528                      SLL    9h,A8
45270: 2fe8                      SRL    1h,A8
45280: 0ba8 0000 8000            ORI    80000000h,A8
452b0: 1020                      INC    A0
452c0: 0be0 ff80                 SUBI   7Fh,A0
452e0: c607                      JRLE   45360h
452f0: 1400                      SUBK   20h,A0
45300: c709                      JRGT   453A0h
45310: 6608                      SRL    A0,A8
45320: 09af 0009                 MMFM   SP,A0,A3
45340: 4d08                      MOVE   A8,A8
45350: 0960                      RETS   
45360: 09af 0009                 MMFM   SP,A0,A3
45380: 4508                      SUB    A8,A8
45390: 0960                      RETS   
453a0: 1860                      MOVK   3h,A0
453b0: a3cf                      MOVE   A14,-*SP,1
453c0: 920e                      MOVE   A0,*A14+,1
453d0: 0d5f b1c0 0004            CALLA  4B1C0h
45400: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
45430: 4c68                      MOVE   A3,A8
45440: 09af 0009                 MMFM   SP,A0,A3
45460: 0960                      RETS   

FD$ITOD:
45470: a38f                      MOVE   A12,-*SP,1
45480: 07ac 0000 0000            MOVE   @0h,A12,1
454b0: ca0a                      JREQ   45560h
454c0: 0628 4c00 0000            CMOVGC A8,00004C,0
454f0: d83f 00c0                 CEXEC  1,00181F,0
45510: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
45540: 97ec                      MOVE   *SP+,A12,1
45550: 0960                      RETS   
45560: 098f c000                 MMTM   SP,A0,A1
45580: 5600                      CLR    A0
45590: 0388                      ABS    A8
455a0: ca1a                      JREQ   45750h
455b0: c402                      JRLT   455E0h
455c0: 1820                      MOVK   1h,A0
455d0: 27e0                      SLL    1Fh,A0
455e0: 6b01                      LMO    A8,A1
455f0: 1021                      INC    A1
45600: 0b41 ffdf                 CMPI   20h,A1
45620: cb02                      JRNE   45650h
45630: 5708                      CLR    A8
45640: c001                      JR     45660h
45650: 6228                      SLL    A1,A8
45660: 03a1                      NEG    A1
45670: 0b01 041f                 ADDI   41Fh,A1
45690: 2681                      SLL    14h,A1
456a0: 5420                      OR     A1,A0
456b0: 4d01                      MOVE   A8,A1
456c0: 2681                      SLL    14h,A1
456d0: 2e88                      SRL    Ch,A8
456e0: 5500                      OR     A8,A0
456f0: 920e                      MOVE   A0,*A14+,1
45700: 922e                      MOVE   A1,*A14+,1
45710: 09af 0003                 MMFM   SP,A0,A1
45730: 97ec                      MOVE   *SP+,A12,1
45740: 0960                      RETS   
45750: 5600                      CLR    A0
45760: 920e                      MOVE   A0,*A14+,1
45770: 920e                      MOVE   A0,*A14+,1
45780: 09af 0003                 MMFM   SP,A0,A1
457a0: 97ec                      MOVE   *SP+,A12,1
457b0: 0960                      RETS   

FD$ITOF:
457c0: a38f                      MOVE   A12,-*SP,1
457d0: 07ac 0000 0000            MOVE   @0h,A12,1
45800: ca0a                      JREQ   458B0h
45810: 0628 4c00 0000            CMOVGC A8,00004C,0
45840: d83e 00c0                 CEXEC  0,00181F,0
45860: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
45890: 97ec                      MOVE   *SP+,A12,1
458a0: 0960                      RETS   
458b0: 098f c000                 MMTM   SP,A0,A1
458d0: 5600                      CLR    A0
458e0: 0388                      ABS    A8
458f0: ca18                      JREQ   45A80h
45900: c402                      JRLT   45930h
45910: 1820                      MOVK   1h,A0
45920: 27e0                      SLL    1Fh,A0
45930: 6b01                      LMO    A8,A1
45940: 1021                      INC    A1
45950: 0b41 ffdf                 CMPI   20h,A1
45970: cb02                      JRNE   459A0h
45980: 5708                      CLR    A8
45990: c001                      JR     459B0h
459a0: 6228                      SLL    A1,A8
459b0: 03a1                      NEG    A1
459c0: 2ee8                      SRL    9h,A8
459d0: c905                      JRNC   45A30h
459e0: 1028                      INC    A8
459f0: 1d08                      BTST   17h,A8
45a00: ca02                      JREQ   45A30h
45a10: 1021                      INC    A1
45a20: 2fe8                      SRL    1h,A8
45a30: 0b01 009f                 ADDI   9Fh,A1
45a50: 26e1                      SLL    17h,A1
45a60: 5420                      OR     A1,A0
45a70: 5500                      OR     A8,A0
45a80: 920e                      MOVE   A0,*A14+,1
45a90: 09af 0003                 MMFM   SP,A0,A1
45ab0: 97ec                      MOVE   *SP+,A12,1
45ac0: 0960                      RETS   

FD$SUB_R:
45ad0: 07a8 0000 0000            MOVE   @0h,A8,1
45b00: ca3f                      JREQ   45F00h
45b10: 4dc8                      MOVE   A14,A8
45b20: 0be8 ff7f                 SUBI   80h,A8
45b40: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
45b70: d83f 0060                 CEXEC  1,000C1F,0
45b90: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
45bc0: 0bee ff7f                 SUBI   80h,A14
45be0: d803 0000                 CEXEC  1,000001,0
45c00: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
45c30: 0960                      RETS   

FD$SUB:
45c40: 07a8 0000 0000            MOVE   @0h,A8,1
45c70: ca32                      JREQ   45FA0h
45c80: 4dc8                      MOVE   A14,A8
45c90: 0be8 ff7f                 SUBI   80h,A8
45cb0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
45ce0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
45d10: d83f 0060                 CEXEC  1,000C1F,0
45d30: 0bee ff7f                 SUBI   80h,A14
45d50: d803 0000                 CEXEC  1,000001,0
45d70: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
45da0: 0960                      RETS   

FD$ADD:
45db0: 07a8 0000 0000            MOVE   @0h,A8,1
45de0: ca23                      JREQ   46020h
45df0: 4dc8                      MOVE   A14,A8
45e00: 0be8 ff7f                 SUBI   80h,A8
45e20: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
45e50: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
45e80: 0bee ff7f                 SUBI   80h,A14
45ea0: d803 0000                 CEXEC  1,000001,0
45ec0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
45ef0: 0960                      RETS   
45f00: 098f ff00                 MMTM   SP,A0-A7
45f20: a7c4                      MOVE   -*A14,A4,1
45f30: a7c3                      MOVE   -*A14,A3,1
45f40: a7c6                      MOVE   -*A14,A6,1
45f50: a7c5                      MOVE   -*A14,A5,1
45f60: 0bc5 0000 8000            XORI   80000000h,A5
45f90: c00e                      JR     46080h
45fa0: 098f ff00                 MMTM   SP,A0-A7
45fc0: a7c6                      MOVE   -*A14,A6,1
45fd0: a7c5                      MOVE   -*A14,A5,1
45fe0: 0bc5 0000 8000            XORI   80000000h,A5
46010: c004                      JR     46060h
46020: 098f ff00                 MMTM   SP,A0-A7
46040: a7c6                      MOVE   -*A14,A6,1
46050: a7c5                      MOVE   -*A14,A5,1
46060: a7c4                      MOVE   -*A14,A4,1
46070: a7c3                      MOVE   -*A14,A3,1
46080: 4c61                      MOVE   A3,A1
46090: 2421                      SLL    1h,A1
460a0: ca00 00a8                 JREQ   46B40h
460c0: 4ca2                      MOVE   A5,A2
460d0: 2422                      SLL    1h,A2
460e0: ca00 009c                 JREQ   46AC0h
46100: 4c61                      MOVE   A3,A1
46110: 4ca2                      MOVE   A5,A2
46120: 2583                      SLL    Ch,A3
46130: 2fa3                      SRL    3h,A3
46140: 0ba3 0000 2000            ORI    20000000h,A3
46170: 4c88                      MOVE   A4,A8
46180: ca03                      JREQ   461C0h
46190: 2d28                      SRL    17h,A8
461a0: 5503                      OR     A8,A3
461b0: 2524                      SLL    9h,A4
461c0: 2585                      SLL    Ch,A5
461d0: 2fa5                      SRL    3h,A5
461e0: 0ba5 0000 2000            ORI    20000000h,A5
46210: 4cc8                      MOVE   A6,A8
46220: ca03                      JREQ   46260h
46230: 2d28                      SRL    17h,A8
46240: 5505                      OR     A8,A5
46250: 2526                      SLL    9h,A6
46260: 2421                      SLL    1h,A1
46270: 4600                      SUBB   A0,A0
46280: 2422                      SLL    1h,A2
46290: 4708                      SUBB   A8,A8
462a0: 2d61                      SRL    15h,A1
462b0: 2d62                      SRL    15h,A2
462c0: 09c7 07ff                 MOVI   7FFh,A7
462e0: 48e1                      CMP    A7,A1
462f0: ca00 0086                 JREQ   46B70h
46310: 48e2                      CMP    A7,A2
46320: ca00 0088                 JREQ   46BC0h
46340: 4441                      SUB    A2,A1
46350: ca03                      JREQ   46390h
46360: c608                      JRLE   463F0h
46370: 4022                      ADD    A1,A2
46380: c010                      JR     46490h
46390: 4865                      CMP    A3,A5
463a0: c40e                      JRLT   46490h
463b0: c704                      JRGT   46400h
463c0: 4886                      CMP    A4,A6
463d0: c20b                      JRLS   46490h
463e0: c004                      JR     46430h
463f0: 03a1                      NEG    A1
46400: 4c67                      MOVE   A3,A7
46410: 4ca3                      MOVE   A5,A3
46420: 4ce5                      MOVE   A7,A5
46430: 4c87                      MOVE   A4,A7
46440: 4cc4                      MOVE   A6,A4
46450: 4ce6                      MOVE   A7,A6
46460: 4c07                      MOVE   A0,A7
46470: 4d00                      MOVE   A8,A0
46480: 4ce8                      MOVE   A7,A8
46490: 4c21                      MOVE   A1,A1
464a0: ca18                      JREQ   46630h
464b0: 0b41 ffe1                 CMPI   1Eh,A1
464d0: c40e                      JRLT   465C0h
464e0: 0b41 ffc2                 CMPI   3Dh,A1
46500: c708                      JRGT   46590h
46510: 17c1                      SUBK   1Eh,A1
46520: 2445                      SLL    2h,A5
46530: 2c46                      SRL    1Eh,A6
46540: 54a6                      OR     A5,A6
46550: 56a5                      CLR    A5
46560: 03a1                      NEG    A1
46570: 6626                      SRL    A1,A6
46580: c00a                      JR     46630h
46590: 56a5                      CLR    A5
465a0: 56c6                      CLR    A6
465b0: c007                      JR     46630h
465c0: 4ca7                      MOVE   A5,A7
465d0: 03a1                      NEG    A1
465e0: 6625                      SRL    A1,A5
465f0: 6626                      SRL    A1,A6
46600: 1001                      ADDK   20h,A1
46610: 6227                      SLL    A1,A7
46620: 54e6                      OR     A7,A6
46630: 4808                      CMP    A0,A8
46640: ca27                      JREQ   468C0h
46650: 44c4                      SUB    A6,A4
46660: 46a3                      SUBB   A5,A3
46670: 6a67                      LMO    A3,A7
46680: ca0a                      JREQ   46730h
46690: 1447                      SUBK   2h,A7
466a0: ca10                      JREQ   467B0h
466b0: 44e2                      SUB    A7,A2
466c0: 62e3                      SLL    A7,A3
466d0: 4c81                      MOVE   A4,A1
466e0: 62e4                      SLL    A7,A4
466f0: 1407                      SUBK   20h,A7
46700: 66e1                      SRL    A7,A1
46710: 5423                      OR     A1,A3
46720: c008                      JR     467B0h
46730: 6a87                      LMO    A4,A7
46740: ca3c                      JREQ   46B10h
46750: 17c2                      SUBK   1Eh,A2
46760: 68e4                      RL     A7,A4
46770: 4c83                      MOVE   A4,A3
46780: 2fc3                      SRL    2h,A3
46790: 27c4                      SLL    1Eh,A4
467a0: 44e2                      SUB    A7,A2
467b0: 56e7                      CLR    A7
467c0: 1ee4                      BTST   8h,A4
467d0: ca07                      JREQ   46850h
467e0: 0b04 0100                 ADDI   100h,A4
46800: 42e3                      ADDC   A7,A3
46810: 1c23                      BTST   1Eh,A3
46820: ca02                      JREQ   46850h
46830: 1022                      INC    A2
46840: c003                      JR     46880h
46850: 2423                      SLL    1h,A3
46860: 2424                      SLL    1h,A4
46870: 42e3                      ADDC   A7,A3
46880: 0b83 0000 c000            ANDI   3FFFFFFFh,A3
468b0: c00c                      JR     46980h
468c0: 40c4                      ADD    A6,A4
468d0: 42a3                      ADDC   A5,A3
468e0: 1c23                      BTST   1Eh,A3
468f0: caeb                      JREQ   467B0h
46900: 1022                      INC    A2
46910: 2fe4                      SRL    1h,A4
46920: 2fe3                      SRL    1h,A3
46930: c9e7                      JRNC   467B0h
46940: 0ba4 0000 8000            ORI    80000000h,A4
46970: c0e3                      JR     467B0h
46980: 4c42                      MOVE   A2,A2
46990: c437                      JRLT   46D10h
469a0: cb05                      JRNE   46A00h
469b0: 4c63                      MOVE   A3,A3
469c0: cb34                      JRNE   46D10h
469d0: 4c84                      MOVE   A4,A4
469e0: cb32                      JRNE   46D10h
469f0: c011                      JR     46B10h
46a00: 0b42 f800                 CMPI   7FFh,A2
46a20: c527                      JRGE   46CA0h
46a30: 4c68                      MOVE   A3,A8
46a40: 2ec3                      SRL    Ah,A3
46a50: 2ec4                      SRL    Ah,A4
46a60: 26c8                      SLL    16h,A8
46a70: 5504                      OR     A8,A4
46a80: 27e0                      SLL    1Fh,A0
46a90: 2682                      SLL    14h,A2
46aa0: 5443                      OR     A2,A3
46ab0: 5403                      OR     A0,A3
46ac0: 926e                      MOVE   A3,*A14+,1
46ad0: 928e                      MOVE   A4,*A14+,1
46ae0: 09af 00ff                 MMFM   SP,A0-A7
46b00: 0960                      RETS   
46b10: 5663                      CLR    A3
46b20: 5684                      CLR    A4
46b30: c0f8                      JR     46AC0h
46b40: 4ca3                      MOVE   A5,A3
46b50: 4cc4                      MOVE   A6,A4
46b60: c0f5                      JR     46AC0h
46b70: 48e2                      CMP    A7,A2
46b80: cb04                      JRNE   46BD0h
46b90: 4808                      CMP    A0,A8
46ba0: cb0c                      JRNE   46C70h
46bb0: c001                      JR     46BD0h
46bc0: 4d00                      MOVE   A8,A0
46bd0: 5621                      CLR    A1
46be0: 27e0                      SLL    1Fh,A0
46bf0: 0ba0 0000 7ff0            ORI    7FF00000h,A0
46c20: 920e                      MOVE   A0,*A14+,1
46c30: 922e                      MOVE   A1,*A14+,1
46c40: 09af 00ff                 MMFM   SP,A0-A7
46c60: 0960                      RETS   
46c70: 5663                      CLR    A3
46c80: 1880                      MOVK   4h,A0
46c90: c009                      JR     46D30h
46ca0: 4c03                      MOVE   A0,A3
46cb0: 27e3                      SLL    1Fh,A3
46cc0: 0ba3 0000 7ff0            ORI    7FF00000h,A3
46cf0: 18a0                      MOVK   5h,A0
46d00: c002                      JR     46D30h
46d10: 1980                      MOVK   Ch,A0
46d20: 5663                      CLR    A3
46d30: a3cf                      MOVE   A14,-*SP,1
46d40: 920e                      MOVE   A0,*A14+,1
46d50: 0d5f b1c0 0004            CALLA  4B1C0h
46d80: 5621                      CLR    A1
46d90: 926e                      MOVE   A3,*A14+,1
46da0: 922e                      MOVE   A1,*A14+,1
46db0: 09af 00ff                 MMFM   SP,A0-A7
46dd0: 0960                      RETS   

FD$LE:
46de0: 1828                      MOVK   1h,A8
46df0: c005                      JR     46E50h

FD$LT:
46e00: 1848                      MOVK   2h,A8
46e10: c003                      JR     46E50h

FD$GE:
46e20: 1868                      MOVK   3h,A8
46e30: c001                      JR     46E50h

FD$GT:
46e40: 1888                      MOVK   4h,A8
46e50: a38f                      MOVE   A12,-*SP,1
46e60: 07ac 0000 0000            MOVE   @0h,A12,1
46e90: ca20                      JREQ   470A0h
46ea0: 098f 6000                 MMTM   SP,A1,A2
46ec0: 4dc1                      MOVE   A14,A1
46ed0: 0be1 ff7f                 SUBI   80h,A1
46ef0: 0682 8d81 0000            CMOVMC *A1+,2,1,00008D,0
46f20: 0682 8d81 0010            CMOVMC *A1+,2,1,00108D,0
46f50: 0bee ff7f                 SUBI   80h,A14
46f70: d80b 0000                 CEXEC  1,000005,0
46f90: 0660 4e01 000c            CMOVCS ,000C4E,0
46fc0: 18a2                      MOVK   5h,A2
46fd0: ca03                      JREQ   47010h
46fe0: 1862                      MOVK   3h,A2
46ff0: ce01                      JRN    47010h
47000: 1982                      MOVK   Ch,A2
47010: 03a8                      NEG    A8
47020: 6702                      SRL    A8,A2
47030: 4708                      SUBB   A8,A8
47040: 2c28                      SRL    1Fh,A8
47050: 09af 0006                 MMFM   SP,A1,A2
47070: 97ec                      MOVE   *SP+,A12,1
47080: 4d08                      MOVE   A8,A8
47090: 0960                      RETS   
470a0: 098f b800                 MMTM   SP,A0,A2-A4
470c0: a7c2                      MOVE   -*A14,A2,1
470d0: a7c0                      MOVE   -*A14,A0,1
470e0: a7c3                      MOVE   -*A14,A3,1
470f0: a7c4                      MOVE   -*A14,A4,1
47100: 4804                      CMP    A0,A4
47110: ca14                      JREQ   47260h
47120: 1862                      MOVK   3h,A2
47130: c401                      JRLT   47150h
47140: 1982                      MOVK   Ch,A2
47150: 2420                      SLL    1h,A0
47160: c906                      JRNC   471D0h
47170: 2424                      SLL    1h,A4
47180: c904                      JRNC   471D0h
47190: 4804                      CMP    A0,A4
471a0: 1862                      MOVK   3h,A2
471b0: c301                      JRHI   471D0h
471c0: 1982                      MOVK   Ch,A2
471d0: 03a8                      NEG    A8
471e0: 6702                      SRL    A8,A2
471f0: 4708                      SUBB   A8,A8
47200: 2c28                      SRL    1Fh,A8
47210: 09af 001d                 MMFM   SP,A0,A2-A4
47230: 97ec                      MOVE   *SP+,A12,1
47240: 4d08                      MOVE   A8,A8
47250: 0960                      RETS   
47260: 4843                      CMP    A2,A3
47270: 18a2                      MOVK   5h,A2
47280: ca06                      JREQ   472F0h
47290: 1862                      MOVK   3h,A2
472a0: c801                      JRC    472C0h
472b0: 1982                      MOVK   Ch,A2
472c0: 2420                      SLL    1h,A0
472d0: c901                      JRNC   472F0h
472e0: 03e2                      NOT    A2
472f0: 03a8                      NEG    A8
47300: 6702                      SRL    A8,A2
47310: 4708                      SUBB   A8,A8
47320: 2c28                      SRL    1Fh,A8
47330: 09af 001d                 MMFM   SP,A0,A2-A4
47350: 97ec                      MOVE   *SP+,A12,1
47360: 4d08                      MOVE   A8,A8
47370: 0960                      RETS   

FD$DIV_R:
47380: 07a8 0000 0000            MOVE   @0h,A8,1
473b0: ca2a                      JREQ   47660h
473c0: a38f                      MOVE   A12,-*SP,1
473d0: 4dcc                      MOVE   A14,A12
473e0: 0bec ff7f                 SUBI   80h,A12
47400: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
47430: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
47460: 0bee ff7f                 SUBI   80h,A14
47480: d827 0000                 CEXEC  1,000013,0
474a0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
474d0: 97ec                      MOVE   *SP+,A12,1
474e0: 0960                      RETS   

FD$DIV:
474f0: 07a8 0000 0000            MOVE   @0h,A8,1
47520: ca1a                      JREQ   476D0h
47530: a38f                      MOVE   A12,-*SP,1
47540: 4dcc                      MOVE   A14,A12
47550: 0bec ff7f                 SUBI   80h,A12
47570: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
475a0: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
475d0: 0bee ff7f                 SUBI   80h,A14
475f0: d827 0000                 CEXEC  1,000013,0
47610: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
47640: 97ec                      MOVE   *SP+,A12,1
47650: 0960                      RETS   
47660: 098f ff40                 MMTM   SP,A0-A7,A9
47680: a7c1                      MOVE   -*A14,A1,1
47690: a7c4                      MOVE   -*A14,A4,1
476a0: a7c3                      MOVE   -*A14,A3,1
476b0: a7c5                      MOVE   -*A14,A5,1
476c0: c006                      JR     47730h
476d0: 098f ff40                 MMTM   SP,A0-A7,A9
476f0: a7c3                      MOVE   -*A14,A3,1
47700: a7c5                      MOVE   -*A14,A5,1
47710: a7c1                      MOVE   -*A14,A1,1
47720: a7c4                      MOVE   -*A14,A4,1
47730: 4c28                      MOVE   A1,A8
47740: 24e1                      SLL    7h,A1
47750: 2ce8                      SRL    19h,A8
47760: 4c80                      MOVE   A4,A0
47770: 2580                      SLL    Ch,A0
47780: 2f60                      SRL    5h,A0
47790: 0ba0 0000 0800            ORI    8000000h,A0
477c0: 5500                      OR     A8,A0
477d0: 4c68                      MOVE   A3,A8
477e0: 2563                      SLL    Bh,A3
477f0: 2d68                      SRL    15h,A8
47800: 4ca2                      MOVE   A5,A2
47810: 2582                      SLL    Ch,A2
47820: 2fe2                      SRL    1h,A2
47830: 0ba2 0000 8000            ORI    80000000h,A2
47860: 5502                      OR     A8,A2
47870: 2424                      SLL    1h,A4
47880: 4729                      SUBB   A9,A9
47890: 2425                      SLL    1h,A5
478a0: 4708                      SUBB   A8,A8
478b0: 5709                      XOR    A8,A9
478c0: 27e9                      SLL    1Fh,A9
478d0: 2d64                      SRL    15h,A4
478e0: 2d65                      SRL    15h,A5
478f0: ca56                      JREQ   47E60h
47900: 0b45 f800                 CMPI   7FFh,A5
47920: cb03                      JRNE   47960h
47930: 48a4                      CMP    A5,A4
47940: ca56                      JREQ   47EB0h
47950: c042                      JR     47D80h
47960: 0b44 f800                 CMPI   7FFh,A4
47980: ca32                      JREQ   47CB0h
47990: 4c84                      MOVE   A4,A4
479a0: ca3d                      JREQ   47D80h
479b0: 5708                      CLR    A8
479c0: 5a40                      DIVU   A2,A0
479d0: 4c26                      MOVE   A1,A6
479e0: 56e7                      CLR    A7
479f0: 5a46                      DIVU   A2,A6
47a00: 4cc1                      MOVE   A6,A1
47a10: 4c06                      MOVE   A0,A6
47a20: 5e66                      MPYU   A3,A6
47a30: 5a46                      DIVU   A2,A6
47a40: 44c1                      SUB    A6,A1
47a50: 4700                      SUBB   A8,A0
47a60: 1c60                      BTST   1Ch,A0
47a70: ca07                      JREQ   47AF0h
47a80: 1425                      DEC    A5
47a90: 2fe1                      SRL    1h,A1
47aa0: 2fe0                      SRL    1h,A0
47ab0: c903                      JRNC   47AF0h
47ac0: 0ba1 0000 8000            ORI    80000000h,A1
47af0: 1f21                      BTST   6h,A1
47b00: ca07                      JREQ   47B80h
47b10: 0b01 0040                 ADDI   40h,A1
47b30: 4300                      ADDC   A8,A0
47b40: 1c60                      BTST   1Ch,A0
47b50: ca02                      JREQ   47B80h
47b60: 1425                      DEC    A5
47b70: c004                      JR     47BC0h
47b80: 1025                      INC    A5
47b90: 2420                      SLL    1h,A0
47ba0: 2421                      SLL    1h,A1
47bb0: 4300                      ADDC   A8,A0
47bc0: 0b80 0000 f000            ANDI   FFFFFFFh,A0
47bf0: 4c86                      MOVE   A4,A6
47c00: 44a4                      SUB    A5,A4
47c10: 0b04 03ff                 ADDI   3FFh,A4
47c30: c61f                      JRLE   47E30h
47c40: 0b44 f800                 CMPI   7FFh,A4
47c60: c404                      JRLT   47CB0h
47c70: 09c4 07ff                 MOVI   7FFh,A4
47c90: 48c4                      CMP    A6,A4
47ca0: cb13                      JRNE   47DE0h
47cb0: 4c08                      MOVE   A0,A8
47cc0: 2f00                      SRL    8h,A0
47cd0: 2f01                      SRL    8h,A1
47ce0: 2708                      SLL    18h,A8
47cf0: 5501                      OR     A8,A1
47d00: 2684                      SLL    14h,A4
47d10: 5524                      OR     A9,A4
47d20: 5480                      OR     A4,A0
47d30: 920e                      MOVE   A0,*A14+,1
47d40: 922e                      MOVE   A1,*A14+,1
47d50: 09af 02ff                 MMFM   SP,A0-A7,A9
47d70: 0960                      RETS   
47d80: 56c6                      CLR    A6
47d90: 92ce                      MOVE   A6,*A14+,1
47da0: 92ce                      MOVE   A6,*A14+,1
47db0: 09af 02ff                 MMFM   SP,A0-A7,A9
47dd0: 0960                      RETS   
47de0: 0ba9 0000 7ff0            ORI    7FF00000h,A9
47e10: 18e0                      MOVK   7h,A0
47e20: c00c                      JR     47EF0h
47e30: 5729                      CLR    A9
47e40: 19c0                      MOVK   Eh,A0
47e50: c009                      JR     47EF0h
47e60: 0ba9 0000 7ff0            ORI    7FF00000h,A9
47e90: 19e0                      MOVK   Fh,A0
47ea0: c004                      JR     47EF0h
47eb0: 0ba9 0000 3ff0            ORI    3FF00000h,A9
47ee0: 1a00                      MOVK   10h,A0
47ef0: a3cf                      MOVE   A14,-*SP,1
47f00: 920e                      MOVE   A0,*A14+,1
47f10: 0d5f b1c0 0004            CALLA  4B1C0h
47f40: 56a5                      CLR    A5
47f50: 932e                      MOVE   A9,*A14+,1
47f60: 92ae                      MOVE   A5,*A14+,1
47f70: 09af 02ff                 MMFM   SP,A0-A7,A9
47f90: 0960                      RETS   

FD$MUL:
47fa0: 07a8 0000 0000            MOVE   @0h,A8,1
47fd0: ca13                      JREQ   48110h
47fe0: a38f                      MOVE   A12,-*SP,1
47ff0: 4dcc                      MOVE   A14,A12
48000: 0bec ff7f                 SUBI   80h,A12
48020: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
48050: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
48080: 0bee ff7f                 SUBI   80h,A14
480a0: d823 0000                 CEXEC  1,000011,0
480c0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
480f0: 97ec                      MOVE   *SP+,A12,1
48100: 0960                      RETS   
48110: 098f ff70                 MMTM   SP,A0-A7,A9-A11
48130: a7c1                      MOVE   -*A14,A1,1
48140: a7c0                      MOVE   -*A14,A0,1
48150: a7c3                      MOVE   -*A14,A3,1
48160: a7c2                      MOVE   -*A14,A2,1
48170: 56a5                      CLR    A5
48180: 4c00                      MOVE   A0,A0
48190: ca5f                      JREQ   48790h
481a0: 4c42                      MOVE   A2,A2
481b0: ca5d                      JREQ   48790h
481c0: 4c08                      MOVE   A0,A8
481d0: 4c4b                      MOVE   A2,A11
481e0: 242b                      SLL    1h,A11
481f0: 474a                      SUBB   A10,A10
48200: 2428                      SLL    1h,A8
48210: 46a5                      SUBB   A5,A5
48220: 56aa                      XOR    A5,A10
48230: 27ea                      SLL    1Fh,A10
48240: 2d68                      SRL    15h,A8
48250: 2d6b                      SRL    15h,A11
48260: 0b4b f800                 CMPI   7FFh,A11
48280: ca56                      JREQ   487F0h
48290: 0b48 f800                 CMPI   7FFh,A8
482b0: ca52                      JREQ   487E0h
482c0: 410b                      ADD    A8,A11
482d0: 0beb fc00                 SUBI   3FFh,A11
482f0: 4c68                      MOVE   A3,A8
48300: 2563                      SLL    Bh,A3
48310: 2562                      SLL    Bh,A2
48320: 0ba2 0000 8000            ORI    80000000h,A2
48350: 2d68                      SRL    15h,A8
48360: 5502                      OR     A8,A2
48370: 4c28                      MOVE   A1,A8
48380: 2560                      SLL    Bh,A0
48390: 2561                      SLL    Bh,A1
483a0: 0ba0 0000 8000            ORI    80000000h,A0
483d0: 2d68                      SRL    15h,A8
483e0: 5500                      OR     A8,A0
483f0: 4c08                      MOVE   A0,A8
48400: 4c26                      MOVE   A1,A6
48410: 4c24                      MOVE   A1,A4
48420: 5e40                      MPYU   A2,A0
48430: 5e68                      MPYU   A3,A8
48440: 5e46                      MPYU   A2,A6
48450: 5e64                      MPYU   A3,A4
48460: 56a5                      CLR    A5
48470: 4d22                      MOVE   A9,A2
48480: 4101                      ADD    A8,A1
48490: 42a0                      ADDC   A5,A0
484a0: 40e2                      ADD    A7,A2
484b0: 42c1                      ADDC   A6,A1
484c0: 42a0                      ADDC   A5,A0
484d0: 4082                      ADD    A4,A2
484e0: 42a1                      ADDC   A5,A1
484f0: 42a0                      ADDC   A5,A0
48500: ca28                      JREQ   48790h
48510: 102b                      INC    A11
48520: 1c00                      BTST   1Fh,A0
48530: cb04                      JRNE   48580h
48540: 142b                      DEC    A11
48550: 2420                      SLL    1h,A0
48560: 2421                      SLL    1h,A1
48570: 42a0                      ADDC   A5,A0
48580: 1ea1                      BTST   Ah,A1
48590: ca06                      JREQ   48600h
485a0: 0b01 0400                 ADDI   400h,A1
485c0: 42a0                      ADDC   A5,A0
485d0: c902                      JRNC   48600h
485e0: 102b                      INC    A11
485f0: c003                      JR     48630h
48600: 2420                      SLL    1h,A0
48610: 2421                      SLL    1h,A1
48620: 42a0                      ADDC   A5,A0
48630: 4d6b                      MOVE   A11,A11
48640: c42a                      JRLT   488F0h
48650: ca10                      JREQ   48760h
48660: 0b4b f800                 CMPI   7FFh,A11
48680: c51d                      JRGE   48860h
48690: 4c05                      MOVE   A0,A5
486a0: 2685                      SLL    14h,A5
486b0: 2e81                      SRL    Ch,A1
486c0: 2e80                      SRL    Ch,A0
486d0: 54a1                      OR     A5,A1
486e0: 268b                      SLL    14h,A11
486f0: 5560                      OR     A11,A0
48700: 5540                      OR     A10,A0
48710: 920e                      MOVE   A0,*A14+,1
48720: 922e                      MOVE   A1,*A14+,1
48730: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
48750: 0960                      RETS   
48760: 4c00                      MOVE   A0,A0
48770: cb17                      JRNE   488F0h
48780: c0f0                      JR     48690h
48790: 92ae                      MOVE   A5,*A14+,1
487a0: 92ae                      MOVE   A5,*A14+,1
487b0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
487d0: 0960                      RETS   
487e0: 4d68                      MOVE   A11,A8
487f0: 4d08                      MOVE   A8,A8
48800: ca0b                      JREQ   488C0h
48810: 09e0 0000 7ff0            MOVI   7FF00000h,A0
48840: 5621                      CLR    A1
48850: c0ea                      JR     48700h
48860: 09e3 0000 7ff0            MOVI   7FF00000h,A3
48890: 5543                      OR     A10,A3
488a0: 18c0                      MOVK   6h,A0
488b0: c005                      JR     48910h
488c0: 5663                      CLR    A3
488d0: 1960                      MOVK   Bh,A0
488e0: c002                      JR     48910h
488f0: 5663                      CLR    A3
48900: 19a0                      MOVK   Dh,A0
48910: a3cf                      MOVE   A14,-*SP,1
48920: 920e                      MOVE   A0,*A14+,1
48930: 0d5f b1c0 0004            CALLA  4B1C0h
48960: 5600                      CLR    A0
48970: 926e                      MOVE   A3,*A14+,1
48980: 920e                      MOVE   A0,*A14+,1
48990: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
489b0: 0960                      RETS   

FS$ABS:
489c0: a7c8                      MOVE   -*A14,A8,1
489d0: 0b88 0000 8000            ANDI   7FFFFFFFh,A8
48a00: 930e                      MOVE   A8,*A14+,1
48a10: 0960                      RETS   

FS$SUB_R:
48a20: 07a8 0000 0000            MOVE   @0h,A8,1
48a50: ca30                      JREQ   48D60h
48a60: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
48a90: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
48ac0: d83e 0060                 CEXEC  0,000C1F,0
48ae0: d802 0000                 CEXEC  0,000001,0
48b00: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
48b30: 0960                      RETS   

FS$SUB:
48b40: 07a8 0000 0000            MOVE   @0h,A8,1
48b70: ca26                      JREQ   48DE0h
48b80: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
48bb0: d83e 0060                 CEXEC  0,000C1F,0
48bd0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
48c00: d802 0000                 CEXEC  0,000001,0
48c20: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
48c50: 0960                      RETS   

FS$ADD:
48c60: 07a8 0000 0000            MOVE   @0h,A8,1
48c90: ca1b                      JREQ   48E50h
48ca0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
48cd0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
48d00: d802 0000                 CEXEC  0,000001,0
48d20: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
48d50: 0960                      RETS   
48d60: 098f fa00                 MMTM   SP,A0-A4,A6
48d80: a7c6                      MOVE   -*A14,A6,1
48d90: a7c8                      MOVE   -*A14,A8,1
48da0: 0bc8 0000 8000            XORI   80000000h,A8
48dd0: c00b                      JR     48E90h
48de0: 098f fa00                 MMTM   SP,A0-A4,A6
48e00: a7c8                      MOVE   -*A14,A8,1
48e10: 0bc8 0000 8000            XORI   80000000h,A8
48e40: c003                      JR     48E80h
48e50: 098f fa00                 MMTM   SP,A0-A4,A6
48e70: a7c8                      MOVE   -*A14,A8,1
48e80: a7c6                      MOVE   -*A14,A6,1
48e90: 4cc3                      MOVE   A6,A3
48ea0: 2423                      SLL    1h,A3
48eb0: ca59                      JREQ   49450h
48ec0: 4d02                      MOVE   A8,A2
48ed0: 2422                      SLL    1h,A2
48ee0: ca5a                      JREQ   49490h
48ef0: 2428                      SLL    1h,A8
48f00: 4600                      SUBB   A0,A0
48f10: 27e0                      SLL    1Fh,A0
48f20: 2426                      SLL    1h,A6
48f30: 4621                      SUBB   A1,A1
48f40: 27e1                      SLL    1Fh,A1
48f50: 2d02                      SRL    18h,A2
48f60: 2d03                      SRL    18h,A3
48f70: 2508                      SLL    8h,A8
48f80: 2fa8                      SRL    3h,A8
48f90: 0ba8 0000 2000            ORI    20000000h,A8
48fc0: 2506                      SLL    8h,A6
48fd0: 2fa6                      SRL    3h,A6
48fe0: 0ba6 0000 2000            ORI    20000000h,A6
49010: 0b42 ff00                 CMPI   FFh,A2
49030: ca4b                      JREQ   494F0h
49040: 0b43 ff00                 CMPI   FFh,A3
49060: ca4e                      JREQ   49550h
49070: 4462                      SUB    A3,A2
49080: ca03                      JREQ   490C0h
49090: c605                      JRLE   490F0h
490a0: 4043                      ADD    A2,A3
490b0: c00c                      JR     49180h
490c0: 4906                      CMP    A8,A6
490d0: c208                      JRLS   49160h
490e0: c001                      JR     49100h
490f0: 03a2                      NEG    A2
49100: 56c8                      XOR    A6,A8
49110: 5706                      XOR    A8,A6
49120: 56c8                      XOR    A6,A8
49130: 5601                      XOR    A0,A1
49140: 5620                      XOR    A1,A0
49150: 5601                      XOR    A0,A1
49160: 4c42                      MOVE   A2,A2
49170: ca07                      JREQ   491F0h
49180: 0b42 ffe1                 CMPI   1Eh,A2
491a0: c402                      JRLT   491D0h
491b0: 56c6                      CLR    A6
491c0: c002                      JR     491F0h
491d0: 03a2                      NEG    A2
491e0: 6646                      SRL    A2,A6
491f0: 4801                      CMP    A0,A1
49200: ca08                      JREQ   49290h
49210: 44c8                      SUB    A6,A8
49220: 6b06                      LMO    A8,A6
49230: ca27                      JREQ   494B0h
49240: 1446                      SUBK   2h,A6
49250: ca08                      JREQ   492E0h
49260: 44c3                      SUB    A6,A3
49270: 62c8                      SLL    A6,A8
49280: c005                      JR     492E0h
49290: 40c8                      ADD    A6,A8
492a0: 1c28                      BTST   1Eh,A8
492b0: ca02                      JREQ   492E0h
492c0: 1023                      INC    A3
492d0: 2fe8                      SRL    1h,A8
492e0: 0b08 0020                 ADDI   20h,A8
49300: 1c28                      BTST   1Eh,A8
49310: ca02                      JREQ   49340h
49320: 1023                      INC    A3
49330: c001                      JR     49350h
49340: 2428                      SLL    1h,A8
49350: 0b88 0000 c000            ANDI   3FFFFFFFh,A8
49380: 4c63                      MOVE   A3,A3
49390: c42d                      JRLT   49670h
493a0: cb03                      JRNE   493E0h
493b0: 2f28                      SRL    7h,A8
493c0: cb2a                      JRNE   49670h
493d0: c00d                      JR     494B0h
493e0: 0b43 ff00                 CMPI   FFh,A3
49400: c520                      JRGE   49610h
49410: 2f28                      SRL    7h,A8
49420: 26e3                      SLL    17h,A3
49430: 5468                      OR     A3,A8
49440: 5408                      OR     A0,A8
49450: 930e                      MOVE   A8,*A14+,1
49460: 09af 005f                 MMFM   SP,A0-A4,A6
49480: 0960                      RETS   
49490: 4cc8                      MOVE   A6,A8
494a0: c0fa                      JR     49450h
494b0: 930e                      MOVE   A8,*A14+,1
494c0: 09af 005f                 MMFM   SP,A0-A4,A6
494e0: 0960                      RETS   
494f0: 0b43 ff00                 CMPI   FFh,A3
49510: cb04                      JRNE   49560h
49520: 4801                      CMP    A0,A1
49530: cb0a                      JRNE   495E0h
49540: c001                      JR     49560h
49550: 4c20                      MOVE   A1,A0
49560: 09e8 0000 7f80            MOVI   7F800000h,A8
49590: 5408                      OR     A0,A8
495a0: 930e                      MOVE   A8,*A14+,1
495b0: 09af 005f                 MMFM   SP,A0-A4,A6
495d0: 0960                      RETS   
495e0: 1880                      MOVK   4h,A0
495f0: 5663                      CLR    A3
49600: c008                      JR     49690h
49610: 4c03                      MOVE   A0,A3
49620: 0ba3 0000 7f80            ORI    7F800000h,A3
49650: 18a0                      MOVK   5h,A0
49660: c002                      JR     49690h
49670: 1980                      MOVK   Ch,A0
49680: 5663                      CLR    A3
49690: a3cf                      MOVE   A14,-*SP,1
496a0: 920e                      MOVE   A0,*A14+,1
496b0: 0d5f b1c0 0004            CALLA  4B1C0h
496e0: 926e                      MOVE   A3,*A14+,1
496f0: 09af 005f                 MMFM   SP,A0-A4,A6
49710: 0960                      RETS   

FS$DIV_R:
49720: 07a8 0000 0000            MOVE   @0h,A8,1
49750: ca1c                      JREQ   49920h
49760: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
49790: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
497c0: d826 0000                 CEXEC  0,000013,0
497e0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
49810: 0960                      RETS   

FS$DIV:
49820: 07a8 0000 0000            MOVE   @0h,A8,1
49850: ca11                      JREQ   49970h
49860: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
49890: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
498c0: d826 0000                 CEXEC  0,000013,0
498e0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
49910: 0960                      RETS   
49920: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
49940: a7c2                      MOVE   -*A14,A2,1
49950: a7c4                      MOVE   -*A14,A4,1
49960: c004                      JR     499B0h
49970: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
49990: a7c4                      MOVE   -*A14,A4,1
499a0: a7c2                      MOVE   -*A14,A2,1
499b0: 4c48                      MOVE   A2,A8
499c0: 2528                      SLL    9h,A8
499d0: 2f68                      SRL    5h,A8
499e0: 0ba8 0000 0800            ORI    8000000h,A8
49a10: 4c80                      MOVE   A4,A0
49a20: 2520                      SLL    9h,A0
49a30: 2fe0                      SRL    1h,A0
49a40: 0ba0 0000 8000            ORI    80000000h,A0
49a70: 2422                      SLL    1h,A2
49a80: 4729                      SUBB   A9,A9
49a90: 2424                      SLL    1h,A4
49aa0: 46c6                      SUBB   A6,A6
49ab0: 5726                      XOR    A9,A6
49ac0: 27e6                      SLL    1Fh,A6
49ad0: 2d02                      SRL    18h,A2
49ae0: 2d04                      SRL    18h,A4
49af0: ca36                      JREQ   49E60h
49b00: 0b44 ff00                 CMPI   FFh,A4
49b20: ca24                      JREQ   49D70h
49b30: 0b42 ff00                 CMPI   FFh,A2
49b50: ca19                      JREQ   49CF0h
49b60: 4c42                      MOVE   A2,A2
49b70: ca21                      JREQ   49D90h
49b80: 4482                      SUB    A4,A2
49b90: 5729                      CLR    A9
49ba0: 5a08                      DIVU   A0,A8
49bb0: 1c68                      BTST   1Ch,A8
49bc0: ca02                      JREQ   49BF0h
49bd0: 1022                      INC    A2
49be0: 2fe8                      SRL    1h,A8
49bf0: 1108                      ADDK   8h,A8
49c00: 1c68                      BTST   1Ch,A8
49c10: ca02                      JREQ   49C40h
49c20: 1022                      INC    A2
49c30: c002                      JR     49C60h
49c40: 1422                      DEC    A2
49c50: 2428                      SLL    1h,A8
49c60: 0b88 0000 f000            ANDI   FFFFFFFh,A8
49c90: 0b02 007f                 ADDI   7Fh,A2
49cb0: c617                      JRLE   49E30h
49cc0: 0b42 ff00                 CMPI   FFh,A2
49ce0: c50f                      JRGE   49DE0h
49cf0: 2f68                      SRL    5h,A8
49d00: 26e2                      SLL    17h,A2
49d10: 54c2                      OR     A6,A2
49d20: 5448                      OR     A2,A8
49d30: 930e                      MOVE   A8,*A14+,1
49d40: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
49d60: 0960                      RETS   
49d70: 4882                      CMP    A4,A2
49d80: ca12                      JREQ   49EB0h
49d90: 5708                      CLR    A8
49da0: 930e                      MOVE   A8,*A14+,1
49db0: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
49dd0: 0960                      RETS   
49de0: 0ba6 0000 7f80            ORI    7F800000h,A6
49e10: 18e0                      MOVK   7h,A0
49e20: c00c                      JR     49EF0h
49e30: 56c6                      CLR    A6
49e40: 19c0                      MOVK   Eh,A0
49e50: c009                      JR     49EF0h
49e60: 0ba6 0000 7f80            ORI    7F800000h,A6
49e90: 19e0                      MOVK   Fh,A0
49ea0: c004                      JR     49EF0h
49eb0: 0ba6 0000 3f80            ORI    3F800000h,A6
49ee0: 1a00                      MOVK   10h,A0
49ef0: a3cf                      MOVE   A14,-*SP,1
49f00: 920e                      MOVE   A0,*A14+,1
49f10: 0d5f b1c0 0004            CALLA  4B1C0h
49f40: 92ce                      MOVE   A6,*A14+,1
49f50: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
49f70: 0960                      RETS   

FS$GE:
49f80: a20f                      MOVE   A0,-*SP,1
49f90: a7c0                      MOVE   -*A14,A0,1
49fa0: a7c8                      MOVE   -*A14,A8,1
49fb0: 1c00                      BTST   1Fh,A0
49fc0: ca05                      JREQ   4A020h
49fd0: 1c08                      BTST   1Fh,A8
49fe0: ca03                      JREQ   4A020h
49ff0: 4500                      SUB    A8,A0
4a000: 5708                      CLR    A8
4a010: 03a0                      NEG    A0
4a020: 4808                      CMP    A0,A8
4a030: 1828                      MOVK   1h,A8
4a040: c501                      JRGE   4A060h
4a050: 5708                      CLR    A8
4a060: 97e0                      MOVE   *SP+,A0,1
4a070: 4d08                      MOVE   A8,A8
4a080: 0960                      RETS   

FS$GT:
4a090: a20f                      MOVE   A0,-*SP,1
4a0a0: a7c0                      MOVE   -*A14,A0,1
4a0b0: a7c8                      MOVE   -*A14,A8,1
4a0c0: 1c00                      BTST   1Fh,A0
4a0d0: ca05                      JREQ   4A130h
4a0e0: 1c08                      BTST   1Fh,A8
4a0f0: ca03                      JREQ   4A130h
4a100: 4500                      SUB    A8,A0
4a110: 5708                      CLR    A8
4a120: 03a0                      NEG    A0
4a130: 4808                      CMP    A0,A8
4a140: 1828                      MOVK   1h,A8
4a150: c701                      JRGT   4A170h
4a160: 5708                      CLR    A8
4a170: 97e0                      MOVE   *SP+,A0,1
4a180: 4d08                      MOVE   A8,A8
4a190: 0960                      RETS   

FS$LE:
4a1a0: a20f                      MOVE   A0,-*SP,1
4a1b0: a7c0                      MOVE   -*A14,A0,1
4a1c0: a7c8                      MOVE   -*A14,A8,1
4a1d0: 1c00                      BTST   1Fh,A0
4a1e0: ca05                      JREQ   4A240h
4a1f0: 1c08                      BTST   1Fh,A8
4a200: ca03                      JREQ   4A240h
4a210: 4500                      SUB    A8,A0
4a220: 5708                      CLR    A8
4a230: 03a0                      NEG    A0
4a240: 4808                      CMP    A0,A8
4a250: 1828                      MOVK   1h,A8
4a260: c601                      JRLE   4A280h
4a270: 5708                      CLR    A8
4a280: 97e0                      MOVE   *SP+,A0,1
4a290: 4d08                      MOVE   A8,A8
4a2a0: 0960                      RETS   

FS$LT:
4a2b0: a20f                      MOVE   A0,-*SP,1
4a2c0: a7c0                      MOVE   -*A14,A0,1
4a2d0: a7c8                      MOVE   -*A14,A8,1
4a2e0: 1c00                      BTST   1Fh,A0
4a2f0: ca05                      JREQ   4A350h
4a300: 1c08                      BTST   1Fh,A8
4a310: ca03                      JREQ   4A350h
4a320: 4500                      SUB    A8,A0
4a330: 5708                      CLR    A8
4a340: 03a0                      NEG    A0
4a350: 4808                      CMP    A0,A8
4a360: 1828                      MOVK   1h,A8
4a370: c401                      JRLT   4A390h
4a380: 5708                      CLR    A8
4a390: 97e0                      MOVE   *SP+,A0,1
4a3a0: 4d08                      MOVE   A8,A8
4a3b0: 0960                      RETS   

FS$MUL:
4a3c0: 07a8 0000 0000            MOVE   @0h,A8,1
4a3f0: ca0c                      JREQ   4A4C0h
4a400: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
4a430: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
4a460: d822 0000                 CEXEC  0,000011,0
4a480: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
4a4b0: 0960                      RETS   
4a4c0: 098f a840                 MMTM   SP,A0,A2,A4,A9
4a4e0: a7c8                      MOVE   -*A14,A8,1
4a4f0: a7c9                      MOVE   -*A14,A9,1
4a500: 4d08                      MOVE   A8,A8
4a510: ca3d                      JREQ   4A8F0h
4a520: 4d29                      MOVE   A9,A9
4a530: ca3b                      JREQ   4A8F0h
4a540: 2428                      SLL    1h,A8
4a550: 4684                      SUBB   A4,A4
4a560: 2429                      SLL    1h,A9
4a570: 4600                      SUBB   A0,A0
4a580: 5604                      XOR    A0,A4
4a590: 27e4                      SLL    1Fh,A4
4a5a0: 4d00                      MOVE   A8,A0
4a5b0: 4d22                      MOVE   A9,A2
4a5c0: 2d00                      SRL    18h,A0
4a5d0: 2d02                      SRL    18h,A2
4a5e0: 0b42 ff00                 CMPI   FFh,A2
4a600: ca34                      JREQ   4A950h
4a610: 0b40 ff00                 CMPI   FFh,A0
4a630: ca30                      JREQ   4A940h
4a640: 4002                      ADD    A0,A2
4a650: 0be2 ff80                 SUBI   7Fh,A2
4a670: 2508                      SLL    8h,A8
4a680: 2fe8                      SRL    1h,A8
4a690: 0ba8 0000 8000            ORI    80000000h,A8
4a6c0: 2509                      SLL    8h,A9
4a6d0: 2fe9                      SRL    1h,A9
4a6e0: 0ba9 0000 8000            ORI    80000000h,A9
4a710: 5f28                      MPYU   A9,A8
4a720: ca1c                      JREQ   4A8F0h
4a730: 1022                      INC    A2
4a740: 1c08                      BTST   1Fh,A8
4a750: cb02                      JRNE   4A780h
4a760: 1422                      DEC    A2
4a770: 2428                      SLL    1h,A8
4a780: 0b08 0080                 ADDI   80h,A8
4a7a0: c902                      JRNC   4A7D0h
4a7b0: 1022                      INC    A2
4a7c0: c001                      JR     4A7E0h
4a7d0: 2428                      SLL    1h,A8
4a7e0: 4c42                      MOVE   A2,A2
4a7f0: c424                      JRLT   4AA40h
4a800: ca0b                      JREQ   4A8C0h
4a810: 0b42 ff00                 CMPI   FFh,A2
4a830: c517                      JRGE   4A9B0h
4a840: 2ee8                      SRL    9h,A8
4a850: 26e2                      SLL    17h,A2
4a860: 5448                      OR     A2,A8
4a870: 5488                      OR     A4,A8
4a880: 930e                      MOVE   A8,*A14+,1
4a890: 09af 0215                 MMFM   SP,A0,A2,A4,A9
4a8b0: 0960                      RETS   
4a8c0: 4d08                      MOVE   A8,A8
4a8d0: cb16                      JRNE   4AA40h
4a8e0: c0f5                      JR     4A840h
4a8f0: 5708                      CLR    A8
4a900: 930e                      MOVE   A8,*A14+,1
4a910: 09af 0215                 MMFM   SP,A0,A2,A4,A9
4a930: 0960                      RETS   
4a940: 4c40                      MOVE   A2,A0
4a950: 4c00                      MOVE   A0,A0
4a960: ca0a                      JREQ   4AA10h
4a970: 09e8 0000 7ff0            MOVI   7FF00000h,A8
4a9a0: c0ec                      JR     4A870h
4a9b0: 09e9 0000 7ff0            MOVI   7FF00000h,A9
4a9e0: 5489                      OR     A4,A9
4a9f0: 18c0                      MOVK   6h,A0
4aa00: c005                      JR     4AA60h
4aa10: 5729                      CLR    A9
4aa20: 1960                      MOVK   Bh,A0
4aa30: c002                      JR     4AA60h
4aa40: 5729                      CLR    A9
4aa50: 19a0                      MOVK   Dh,A0
4aa60: a3cf                      MOVE   A14,-*SP,1
4aa70: 920e                      MOVE   A0,*A14+,1
4aa80: 0d5f b1c0 0004            CALLA  4B1C0h
4aab0: 932e                      MOVE   A9,*A14+,1
4aac0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
4aae0: 0960                      RETS   

FS$NE:
4aaf0: a20f                      MOVE   A0,-*SP,1
4ab00: a7c0                      MOVE   -*A14,A0,1
4ab10: a7c8                      MOVE   -*A14,A8,1
4ab20: 4808                      CMP    A0,A8
4ab30: 1828                      MOVK   1h,A8
4ab40: cb01                      JRNE   4AB60h
4ab50: 5708                      CLR    A8
4ab60: 97e0                      MOVE   *SP+,A0,1
4ab70: 4d08                      MOVE   A8,A8
4ab80: 0960                      RETS   

FS$NEG:
4ab90: a7c8                      MOVE   -*A14,A8,1
4aba0: ca03                      JREQ   4ABE0h
4abb0: 0bc8 0000 8000            XORI   80000000h,A8
4abe0: 930e                      MOVE   A8,*A14+,1
4abf0: 0960                      RETS   

_atoi:
4ac00: 098f 402c                 MMTM   SP,A1,A10,A12,A13
4ac20: 4dcd                      MOVE   A14,A13
4ac30: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
4ac50: 4421                      SUB    A1,A1
4ac60: 8f88                      MOVB   *A12,A8
4ac70: 2468                      SLL    3h,A8
4ac80: 0b28 d528 0005            ADDI   5D528h,A8
4acb0: 0548                      SETF   8h,0,0
4acc0: 8508                      MOVE   *A8,A8,0
4acd0: 1f88                      BTST   3h,A8
4ace0: ca09                      JREQ   4AD80h
4acf0: 110c                      ADDK   8h,A12
4ad00: 8f88                      MOVB   *A12,A8
4ad10: 2468                      SLL    3h,A8
4ad20: 0b28 d528 0005            ADDI   5D528h,A8
4ad50: 8508                      MOVE   *A8,A8,0
4ad60: 1f88                      BTST   3h,A8
4ad70: cbf7                      JRNE   4ACF0h
4ad80: 8f8a                      MOVB   *A12,A10
4ad90: 0b4a ffd2                 CMPI   2Dh,A10
4adb0: ca0f                      JREQ   4AEB0h
4adc0: 45de                      SUB    B14,B14
4add0: 0b4a ffd4                 CMPI   2Bh,A10
4adf0: cb0e                      JRNE   4AEE0h
4ae00: 110c                      ADDK   8h,A12
4ae10: 8f8a                      MOVB   *A12,A10
4ae20: 4d48                      MOVE   A10,A8
4ae30: 2468                      SLL    3h,A8
4ae40: 0b28 d528 0005            ADDI   5D528h,A8
4ae70: 8508                      MOVE   *A8,A8,0
4ae80: 1fa8                      BTST   2h,A8
4ae90: cb0c                      JRNE   4AF60h
4aea0: c01c                      JR     4B070h
4aeb0: 183e                      MOVK   1h,B14
4aec0: 110c                      ADDK   8h,A12
4aed0: 8f8a                      MOVB   *A12,A10
4aee0: 4d48                      MOVE   A10,A8
4aef0: 2468                      SLL    3h,A8
4af00: 0b28 d528 0005            ADDI   5D528h,A8
4af30: 8508                      MOVE   *A8,A8,0
4af40: 1fa8                      BTST   2h,A8
4af50: ca11                      JREQ   4B070h
4af60: 4c28                      MOVE   A1,A8
4af70: 2461                      SLL    3h,A1
4af80: 2428                      SLL    1h,A8
4af90: 4101                      ADD    A8,A1
4afa0: 4141                      ADD    A10,A1
4afb0: 0be1 ffcf                 SUBI   30h,A1
4afd0: 110c                      ADDK   8h,A12
4afe0: 8f8a                      MOVB   *A12,A10
4aff0: 4d48                      MOVE   A10,A8
4b000: 2468                      SLL    3h,A8
4b010: 0b28 d528 0005            ADDI   5D528h,A8
4b040: 8508                      MOVE   *A8,A8,0
4b050: 1fa8                      BTST   2h,A8
4b060: cbef                      JRNE   4AF60h
4b070: 4fd8                      MOVE   B14,A8
4b080: ca01                      JREQ   4B0A0h
4b090: 03a1                      NEG    A1
4b0a0: 4c28                      MOVE   A1,A8
4b0b0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
4b0d0: 09af 3402                 MMFM   SP,A1,A10,A12,A13
4b0f0: 0962                      RETS   2h

_atol:
4b100: a3af                      MOVE   A13,-*SP,1
4b110: 4dcd                      MOVE   A14,A13
4b120: a3cf                      MOVE   A14,-*SP,1
4b130: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
4b150: 0d5f ac00 0004            CALLA  4AC00h
4b180: b7ee 0040                 MOVE   *SP(40h),A14,1
4b1a0: 97ed                      MOVE   *SP+,A13,1
4b1b0: 0962                      RETS   2h

_fp_error:
4b1c0: a3af                      MOVE   A13,-*SP,1
4b1d0: 4dcd                      MOVE   A14,A13
4b1e0: b7ee 0040                 MOVE   *SP(40h),A14,1
4b200: 97ed                      MOVE   *SP+,A13,1
4b210: 0962                      RETS   2h

_ltoa:
4b220: 098f 402c                 MMTM   SP,A1,A10,A12,A13
4b240: 4dcd                      MOVE   A14,A13
4b250: 0b0e 00a0                 ADDI   A0h,A14
4b270: b7a1 ffe0                 MOVE   *A13(FFE0h),A1,1
4b290: 4e2e                      MOVE   A1,B14
4b2a0: 2c3e                      SRL    1Fh,B14
4b2b0: ca01                      JREQ   4B2D0h
4b2c0: 03a1                      NEG    A1
4b2d0: 4dac                      MOVE   A13,A12
4b2e0: 0b0c 0098                 ADDI   98h,A12
4b300: 4508                      SUB    A8,A8
4b310: 8d0c                      MOVB   A8,*A12
4b320: 0568                      SETF   8h,1,0
4b330: 1948                      MOVK   Ah,A8
4b340: 4c2a                      MOVE   A1,A10
4b350: 6d0a                      MODS   A8,A10
4b360: 0b0a 0030                 ADDI   30h,A10
4b380: a14c                      MOVE   A10,-*A12,0
4b390: 5901                      DIVS   A8,A1
4b3a0: cbf8                      JRNE   4B330h
4b3b0: 4fd1                      MOVE   B14,A1
4b3c0: ca03                      JREQ   4B400h
4b3d0: 09ca 002d                 MOVI   2Dh,A10
4b3f0: a14c                      MOVE   A10,-*A12,0
4b400: a3cf                      MOVE   A14,-*SP,1
4b410: 4daa                      MOVE   A13,A10
4b420: 458a                      SUB    A12,A10
4b430: 4d41                      MOVE   A10,A1
4b440: 0b01 00a0                 ADDI   A0h,A1
4b460: 2ba1                      SRA    3h,A1
4b470: 922e                      MOVE   A1,*A14+,1
4b480: 938e                      MOVE   A12,*A14+,1
4b490: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
4b4b0: 0d5f b550 0004            CALLA  4B550h
4b4e0: 4c28                      MOVE   A1,A8
4b4f0: 1428                      DEC    A8
4b500: b7ee 00a0                 MOVE   *SP(A0h),A14,1
4b520: 09af 3402                 MMFM   SP,A1,A10,A12,A13
4b540: 0962                      RETS   2h

_memcpy:
4b550: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
4b570: 4dcd                      MOVE   A14,A13
4b580: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
4b5a0: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
4b5c0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
4b5e0: 4d44                      MOVE   A10,A4
4b5f0: 142c                      DEC    A12
4b600: 0b4c 0000                 CMPI   FFFFh,A12
4b620: ca06                      JREQ   4B690h
4b630: 0568                      SETF   8h,1,0
4b640: 98ca                      MOVE   *A6+,*A10+,0
4b650: 142c                      DEC    A12
4b660: 0b4c 0000                 CMPI   FFFFh,A12
4b680: cbfb                      JRNE   4B640h
4b690: 4c88                      MOVE   A4,A8
4b6a0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
4b6c0: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
4b6e0: 0962                      RETS   2h

_memmove:
4b6f0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
4b710: 4dcd                      MOVE   A14,A13
4b720: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
4b740: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
4b760: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
4b780: 4d44                      MOVE   A10,A4
4b790: 4946                      CMP    A10,A6
4b7a0: c311                      JRHI   4B8C0h
4b7b0: 4d88                      MOVE   A12,A8
4b7c0: 2468                      SLL    3h,A8
4b7d0: 4106                      ADD    A8,A6
4b7e0: 4d88                      MOVE   A12,A8
4b7f0: 2468                      SLL    3h,A8
4b800: 410a                      ADD    A8,A10
4b810: 142c                      DEC    A12
4b820: 0b4c 0000                 CMPI   FFFFh,A12
4b840: ca11                      JREQ   4B960h
4b850: 0568                      SETF   8h,1,0
4b860: a8ca                      MOVE   -*A6,-*A10,0
4b870: 142c                      DEC    A12
4b880: 0b4c 0000                 CMPI   FFFFh,A12
4b8a0: cbfb                      JRNE   4B860h
4b8b0: c00a                      JR     4B960h
4b8c0: 142c                      DEC    A12
4b8d0: 0b4c 0000                 CMPI   FFFFh,A12
4b8f0: ca06                      JREQ   4B960h
4b900: 0568                      SETF   8h,1,0
4b910: 98ca                      MOVE   *A6+,*A10+,0
4b920: 142c                      DEC    A12
4b930: 0b4c 0000                 CMPI   FFFFh,A12
4b950: cbfb                      JRNE   4B910h
4b960: 4c88                      MOVE   A4,A8
4b970: b7ee 00c0                 MOVE   *SP(C0h),A14,1
4b990: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
4b9b0: 0962                      RETS   2h

_strcat:
4b9c0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
4b9e0: 4dcd                      MOVE   A14,A13
4b9f0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
4ba10: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
4ba30: 4d86                      MOVE   A12,A6
4ba40: 0568                      SETF   8h,1,0
4ba50: 9588                      MOVE   *A12+,A8,0
4ba60: cbfe                      JRNE   4BA50h
4ba70: 150c                      SUBK   8h,A12
4ba80: 9548                      MOVE   *A10+,A8,0
4ba90: 910c                      MOVE   A8,*A12+,0
4baa0: cbfd                      JRNE   4BA80h
4bab0: 4cc8                      MOVE   A6,A8
4bac0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
4bae0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
4bb00: 0962                      RETS   2h

_strchr:
4bb10: 098f 022c                 MMTM   SP,A6,A10,A12,A13
4bb30: 4dcd                      MOVE   A14,A13
4bb40: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
4bb60: afa6 ffc0                 MOVB   *A13(FFC0h),A6
4bb80: 0568                      SETF   8h,1,0
4bb90: 954c                      MOVE   *A10+,A12,0
4bba0: 48cc                      CMP    A6,A12
4bbb0: ca04                      JREQ   4BC00h
4bbc0: 4d8c                      MOVE   A12,A12
4bbd0: cbfb                      JRNE   4BB90h
4bbe0: 4508                      SUB    A8,A8
4bbf0: c002                      JR     4BC20h
4bc00: 4d48                      MOVE   A10,A8
4bc10: 1508                      SUBK   8h,A8
4bc20: b7ee 00a0                 MOVE   *SP(A0h),A14,1
4bc40: 09af 3440                 MMFM   SP,A6,A10,A12,A13
4bc60: 0962                      RETS   2h

_strcpy:
4bc70: 098f 022c                 MMTM   SP,A6,A10,A12,A13
4bc90: 4dcd                      MOVE   A14,A13
4bca0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
4bcc0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
4bce0: 4d86                      MOVE   A12,A6
4bcf0: 0568                      SETF   8h,1,0
4bd00: 9548                      MOVE   *A10+,A8,0
4bd10: 910c                      MOVE   A8,*A12+,0
4bd20: cbfd                      JRNE   4BD00h
4bd30: 4cc8                      MOVE   A6,A8
4bd40: b7ee 00a0                 MOVE   *SP(A0h),A14,1
4bd60: 09af 3440                 MMFM   SP,A6,A10,A12,A13
4bd80: 0962                      RETS   2h

_strlen:
4bd90: 098f 002c                 MMTM   SP,A10,A12,A13
4bdb0: 4dcd                      MOVE   A14,A13
4bdc0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
4bde0: 09cc ffff                 MOVI   FFFFh,A12
4be00: 0568                      SETF   8h,1,0
4be10: 102c                      INC    A12
4be20: 9548                      MOVE   *A10+,A8,0
4be30: cbfd                      JRNE   4BE10h
4be40: 4d88                      MOVE   A12,A8
4be50: b7ee 0080                 MOVE   *SP(80h),A14,1
4be70: 09af 3400                 MMFM   SP,A10,A12,A13
4be90: 0962                      RETS   2h

_strncmp:
4bea0: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
4bec0: 4dcd                      MOVE   A14,A13
4bed0: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
4bef0: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
4bf10: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
4bf30: 4d8c                      MOVE   A12,A12
4bf40: ca0c                      JREQ   4C010h
4bf50: 0568                      SETF   8h,1,0
4bf60: 9544                      MOVE   *A10+,A4,0
4bf70: 94c2                      MOVE   *A6+,A2,0
4bf80: 4482                      SUB    A4,A2
4bf90: cb05                      JRNE   4BFF0h
4bfa0: 4c82                      MOVE   A4,A2
4bfb0: 0dcc fff9                 DSJNE  A12,4BF60h
4bfd0: 4508                      SUB    A8,A8
4bfe0: c003                      JR     4C020h
4bff0: 4c48                      MOVE   A2,A8
4c000: c001                      JR     4C020h
4c010: 4508                      SUB    A8,A8
4c020: b7ee 00e0                 MOVE   *SP(E0h),A14,1
4c040: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
4c060: 0962                      RETS   2h
