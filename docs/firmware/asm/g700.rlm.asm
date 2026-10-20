; g700.rlm .text, 9373 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_AcquireProcess:
00000: 098f 000c                 MMTM   SP,A12,A13
00020: 4dcd                      MOVE   A14,A13
00030: 0b0e 0040                 ADDI   40h,A14
00050: a3cf                      MOVE   A14,-*SP,1
00060: 09c8 1260                 MOVI   1260h,A8
00080: 930e                      MOVE   A8,*A14+,1
00090: 09e8 0780 0003            MOVI   30780h,A8
000c0: 930e                      MOVE   A8,*A14+,1
000d0: 09e8 4341 4d51            MOVI   4D514341h,A8
00100: 930e                      MOVE   A8,*A14+,1
00110: 19a8                      MOVK   Dh,A8
00120: 930e                      MOVE   A8,*A14+,1
00130: 0d5f 0000 0000            CALLA  0h
00160: 830d                      MOVE   A8,*A13,1
00170: a3cf                      MOVE   A14,-*SP,1
00180: 18e8                      MOVK   7h,A8
00190: 930e                      MOVE   A8,*A14+,1
001a0: 09e8 6ec0 0002            MOVI   26EC0h,A8
001d0: 930e                      MOVE   A8,*A14+,1
001e0: 09e8 4341 4d51            MOVI   4D514341h,A8
00210: 930e                      MOVE   A8,*A14+,1
00220: 19c8                      MOVK   Eh,A8
00230: 930e                      MOVE   A8,*A14+,1
00240: 0d5f 0000 0000            CALLA  0h
00270: 830d                      MOVE   A8,*A13,1
00280: a3cf                      MOVE   A14,-*SP,1
00290: 1828                      MOVK   1h,A8
002a0: 930e                      MOVE   A8,*A14+,1
002b0: 09e8 5640 0002            MOVI   25640h,A8
002e0: 930e                      MOVE   A8,*A14+,1
002f0: 19a8                      MOVK   Dh,A8
00300: 930e                      MOVE   A8,*A14+,1
00310: 0d5f 0000 0000            CALLA  0h
00340: 830d                      MOVE   A8,*A13,1
00350: 4d08                      MOVE   A8,A8
00360: cb00 01f9                 JRNE   2310h
00380: c000 01d0                 JR     20A0h
003a0: a3cf                      MOVE   A14,-*SP,1
003b0: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
003e0: 07e8 56a0 0002            MOVE   @256A0h,A8
00410: 930e                      MOVE   A8,*A14+,1
00420: 0d5f 8ff0 0000            CALLA  8FF0h
00450: ad0d 0020                 MOVB   A8,*A13(20h)
00470: c000 01cd                 JR     2160h
00490: a3cf                      MOVE   A14,-*SP,1
004a0: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
004d0: 07e8 56a0 0002            MOVE   @256A0h,A8
00500: 930e                      MOVE   A8,*A14+,1
00510: 0d5f 9780 0000            CALLA  9780h
00540: ad0d 0020                 MOVB   A8,*A13(20h)
00560: c000 01be                 JR     2160h
00580: a3cf                      MOVE   A14,-*SP,1
00590: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
005c0: 07e8 56a0 0002            MOVE   @256A0h,A8
005f0: 930e                      MOVE   A8,*A14+,1
00600: 0d5f 7fb0 0000            CALLA  7FB0h
00630: ad0d 0020                 MOVB   A8,*A13(20h)
00650: c000 01af                 JR     2160h
00670: a3cf                      MOVE   A14,-*SP,1
00680: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
006b0: 07e8 56a0 0002            MOVE   @256A0h,A8
006e0: 930e                      MOVE   A8,*A14+,1
006f0: 0d5f 87d0 0000            CALLA  87D0h
00720: ad0d 0020                 MOVB   A8,*A13(20h)
00740: c000 01a0                 JR     2160h
00760: a3cf                      MOVE   A14,-*SP,1
00770: 0548                      SETF   8h,0,0
00780: 05a8 56a8 0002            MOVE   @256A8h,A8,0
007b0: 0d5f d580 0001            CALLA  1D580h
007e0: 07e8 56a0 0002            MOVE   @256A0h,A8
00810: 930e                      MOVE   A8,*A14+,1
00820: 0d5f a490 0000            CALLA  A490h
00850: ad0d 0020                 MOVB   A8,*A13(20h)
00870: c000 018d                 JR     2160h
00890: a3cf                      MOVE   A14,-*SP,1
008a0: 07e8 56a8 0002            MOVE   @256A8h,A8
008d0: 930e                      MOVE   A8,*A14+,1
008e0: 07e8 56a0 0002            MOVE   @256A0h,A8
00910: 930e                      MOVE   A8,*A14+,1
00920: 0d5f 62d0 0000            CALLA  62D0h
00950: ad0d 0020                 MOVB   A8,*A13(20h)
00970: c000 017d                 JR     2160h
00990: a3cf                      MOVE   A14,-*SP,1
009a0: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
009d0: 07e8 56a0 0002            MOVE   @256A0h,A8
00a00: 930e                      MOVE   A8,*A14+,1
00a10: 0d5f 68a0 0000            CALLA  68A0h
00a40: ad0d 0020                 MOVB   A8,*A13(20h)
00a60: 1848                      MOVK   2h,A8
00a70: 07ac 5580 0002            MOVE   @25580h,A12,1
00aa0: 5588                      OR     A12,A8
00ab0: 0788 5580 0002            MOVE   A8,@25580h,1
00ae0: c000 0166                 JR     2160h
00b00: a3cf                      MOVE   A14,-*SP,1
00b10: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
00b40: 07ec 56a0 0002            MOVE   @256A0h,A12
00b70: 938e                      MOVE   A12,*A14+,1
00b80: 0d5f 7140 0000            CALLA  7140h
00bb0: ad0d 0020                 MOVB   A8,*A13(20h)
00bd0: 184c                      MOVK   2h,A12
00be0: 07a8 5580 0002            MOVE   @25580h,A8,1
00c10: 550c                      OR     A8,A12
00c20: 078c 5580 0002            MOVE   A12,@25580h,1
00c50: c000 014f                 JR     2160h
00c70: a3cf                      MOVE   A14,-*SP,1
00c80: 07ec 56a8 0002            MOVE   @256A8h,A12
00cb0: 938e                      MOVE   A12,*A14+,1
00cc0: 07e8 56a0 0002            MOVE   @256A0h,A8
00cf0: 930e                      MOVE   A8,*A14+,1
00d00: 0d5f 79e0 0000            CALLA  79E0h
00d30: ad0d 0020                 MOVB   A8,*A13(20h)
00d50: c000 013f                 JR     2160h
00d70: a3cf                      MOVE   A14,-*SP,1
00d80: 07ec 56a0 0002            MOVE   @256A0h,A12
00db0: 938e                      MOVE   A12,*A14+,1
00dc0: 0d5f 45a0 0000            CALLA  45A0h
00df0: ad0d 0020                 MOVB   A8,*A13(20h)
00e10: c000 0133                 JR     2160h
00e30: a3cf                      MOVE   A14,-*SP,1
00e40: 07ec 56a0 0002            MOVE   @256A0h,A12
00e70: 938e                      MOVE   A12,*A14+,1
00e80: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
00eb0: 0d5f 3540 0000            CALLA  3540h
00ee0: ad0d 0020                 MOVB   A8,*A13(20h)
00f00: c000 0124                 JR     2160h
00f20: a3cf                      MOVE   A14,-*SP,1
00f30: 07ec 56a0 0002            MOVE   @256A0h,A12
00f60: 938e                      MOVE   A12,*A14+,1
00f70: 0d5f 47c0 0000            CALLA  47C0h
00fa0: ad0d 0020                 MOVB   A8,*A13(20h)
00fc0: c000 0118                 JR     2160h
00fe0: a3cf                      MOVE   A14,-*SP,1
00ff0: 09ec 56b8 0002            MOVI   256B8h,A12
01020: 938e                      MOVE   A12,*A14+,1
01030: 0570                      SETF   10h,1,0
01040: 05a8 56a8 0002            MOVE   @256A8h,A8,0
01070: 930e                      MOVE   A8,*A14+,1
01080: 07ec 56a0 0002            MOVE   @256A0h,A12
010b0: 938e                      MOVE   A12,*A14+,1
010c0: 0d5f 4a40 0000            CALLA  4A40h
010f0: ad0d 0020                 MOVB   A8,*A13(20h)
01110: c000 0103                 JR     2160h
01130: a3cf                      MOVE   A14,-*SP,1
01140: 07ec 56b0 0002            MOVE   @256B0h,A12
01170: 938e                      MOVE   A12,*A14+,1
01180: 07e8 56a8 0002            MOVE   @256A8h,A8
011b0: 930e                      MOVE   A8,*A14+,1
011c0: 07e8 56a0 0002            MOVE   @256A0h,A8
011f0: 930e                      MOVE   A8,*A14+,1
01200: 0d5f 31c0 0000            CALLA  31C0h
01230: ad0d 0020                 MOVB   A8,*A13(20h)
01250: c000 00ef                 JR     2160h
01270: a3cf                      MOVE   A14,-*SP,1
01280: 07ec 56a0 0002            MOVE   @256A0h,A12
012b0: 938e                      MOVE   A12,*A14+,1
012c0: 0d5f 56d0 0000            CALLA  56D0h
012f0: ad0d 0020                 MOVB   A8,*A13(20h)
01310: c000 00e3                 JR     2160h
01330: a3cf                      MOVE   A14,-*SP,1
01340: 07ec 56a0 0002            MOVE   @256A0h,A12
01370: 938e                      MOVE   A12,*A14+,1
01380: 0d5f 9f10 0000            CALLA  9F10h
013b0: ad0d 0020                 MOVB   A8,*A13(20h)
013d0: c000 00d7                 JR     2160h
013f0: a3cf                      MOVE   A14,-*SP,1
01400: 09ec 56a0 0002            MOVI   256A0h,A12
01430: 9b8e                      MOVE   *A12+,*A14+,1
01440: 9b8e                      MOVE   *A12+,*A14+,1
01450: 9b8e                      MOVE   *A12+,*A14+,1
01460: 0d5f aaa0 0000            CALLA  AAA0h
01490: ad0d 0020                 MOVB   A8,*A13(20h)
014b0: c000 00c9                 JR     2160h
014d0: a3cf                      MOVE   A14,-*SP,1
014e0: 0548                      SETF   8h,0,0
014f0: 05ac 56a0 0002            MOVE   @256A0h,A12,0
01520: 938e                      MOVE   A12,*A14+,1
01530: 0d5f bc70 0000            CALLA  BC70h
01560: ad0d 0020                 MOVB   A8,*A13(20h)
01580: c000 00bc                 JR     2160h
015a0: a3cf                      MOVE   A14,-*SP,1
015b0: 0548                      SETF   8h,0,0
015c0: 05ac 56a0 0002            MOVE   @256A0h,A12,0
015f0: 938e                      MOVE   A12,*A14+,1
01600: 0d5f b3f0 0000            CALLA  B3F0h
01630: ad0d 0020                 MOVB   A8,*A13(20h)
01650: c000 00af                 JR     2160h
01670: a3cf                      MOVE   A14,-*SP,1
01680: 07ec 56a0 0002            MOVE   @256A0h,A12
016b0: 938e                      MOVE   A12,*A14+,1
016c0: 0d5f cca0 0000            CALLA  CCA0h
016f0: ad0d 0020                 MOVB   A8,*A13(20h)
01710: c000 00a3                 JR     2160h
01730: a3cf                      MOVE   A14,-*SP,1
01740: 09ec 56a0 0002            MOVI   256A0h,A12
01770: 9b8e                      MOVE   *A12+,*A14+,1
01780: 9b8e                      MOVE   *A12+,*A14+,1
01790: 9b8e                      MOVE   *A12+,*A14+,1
017a0: 0d5f d220 0000            CALLA  D220h
017d0: ad0d 0020                 MOVB   A8,*A13(20h)
017f0: c000 0095                 JR     2160h
01810: a3cf                      MOVE   A14,-*SP,1
01820: 07ec 56a8 0002            MOVE   @256A8h,A12
01850: 938e                      MOVE   A12,*A14+,1
01860: 07e8 56a0 0002            MOVE   @256A0h,A8
01890: 930e                      MOVE   A8,*A14+,1
018a0: 0d5f 2ef0 0000            CALLA  2EF0h
018d0: ad0d 0020                 MOVB   A8,*A13(20h)
018f0: c000 0085                 JR     2160h
01910: a3cf                      MOVE   A14,-*SP,1
01920: 07ec 56a0 0002            MOVE   @256A0h,A12
01950: 938e                      MOVE   A12,*A14+,1
01960: 0d5f 26e0 0000            CALLA  26E0h
01990: ad0d 0020                 MOVB   A8,*A13(20h)
019b0: c07a                      JR     2160h
019c0: a3cf                      MOVE   A14,-*SP,1
019d0: 09ec 56a0 0002            MOVI   256A0h,A12
01a00: 9b8e                      MOVE   *A12+,*A14+,1
01a10: 9b8e                      MOVE   *A12+,*A14+,1
01a20: 9b8e                      MOVE   *A12+,*A14+,1
01a30: 0d5f e650 0000            CALLA  E650h
01a60: ad0d 0020                 MOVB   A8,*A13(20h)
01a80: c06d                      JR     2160h
01a90: a3cf                      MOVE   A14,-*SP,1
01aa0: 0548                      SETF   8h,0,0
01ab0: 05ac 56a8 0002            MOVE   @256A8h,A12,0
01ae0: 938e                      MOVE   A12,*A14+,1
01af0: 05a8 56a0 0002            MOVE   @256A0h,A8,0
01b20: 930e                      MOVE   A8,*A14+,1
01b30: 0d5f c4e0 0000            CALLA  C4E0h
01b60: ad0d 0020                 MOVB   A8,*A13(20h)
01b80: c05d                      JR     2160h
01b90: a3cf                      MOVE   A14,-*SP,1
01ba0: 0570                      SETF   10h,1,0
01bb0: 05ac 56b8 0002            MOVE   @256B8h,A12,0
01be0: 938e                      MOVE   A12,*A14+,1
01bf0: 07e8 56b0 0002            MOVE   @256B0h,A8
01c20: 930e                      MOVE   A8,*A14+,1
01c30: 07e8 56a8 0002            MOVE   @256A8h,A8
01c60: 930e                      MOVE   A8,*A14+,1
01c70: 07e8 56a0 0002            MOVE   @256A0h,A8
01ca0: 930e                      MOVE   A8,*A14+,1
01cb0: 0d5f f250 0000            CALLA  F250h
01ce0: ad0d 0020                 MOVB   A8,*A13(20h)
01d00: c045                      JR     2160h
01d10: a3cf                      MOVE   A14,-*SP,1
01d20: 07ec 56b0 0002            MOVE   @256B0h,A12
01d50: 938e                      MOVE   A12,*A14+,1
01d60: 07e8 56a8 0002            MOVE   @256A8h,A8
01d90: 930e                      MOVE   A8,*A14+,1
01da0: 07e8 56a0 0002            MOVE   @256A0h,A8
01dd0: 930e                      MOVE   A8,*A14+,1
01de0: 0d5f f8c0 0000            CALLA  F8C0h
01e10: ad0d 0020                 MOVB   A8,*A13(20h)
01e30: c032                      JR     2160h
01e40: 0d5f 0320 0001            CALLA  10320h
01e70: ad0d 0020                 MOVB   A8,*A13(20h)
01e90: c02c                      JR     2160h
01ea0: a3cf                      MOVE   A14,-*SP,1
01eb0: d60e 56e0 0002            MOVE   @256E0h,*A14+,1
01ee0: d60e 56c0 0002            MOVE   @256C0h,*A14+,1
01f10: d60e 56a0 0002            MOVE   @256A0h,*A14+,1
01f40: 0d5f 0860 0001            CALLA  10860h
01f70: ad0d 0020                 MOVB   A8,*A13(20h)
01f90: c01c                      JR     2160h
01fa0: 0d5f 1030 0001            CALLA  11030h
01fd0: ad0d 0020                 MOVB   A8,*A13(20h)
01ff0: c016                      JR     2160h
02000: 0d5f 11c0 0001            CALLA  111C0h
02030: ad0d 0020                 MOVB   A8,*A13(20h)
02050: c010                      JR     2160h
02060: 182c                      MOVK   1h,A12
02070: ad8d 0020                 MOVB   A12,*A13(20h)
02090: c00c                      JR     2160h
020a0: 07ac 5680 0002            MOVE   @25680h,A12,1
020d0: 142c                      DEC    A12
020e0: 37cc                      CMPK   1Eh,A12
020f0: c3f6                      JRHI   2060h
02100: 24ac                      SLL    5h,A12
02110: 0b2c 49e0 0002            ADDI   249E0h,A12
02140: 878c                      MOVE   *A12,A12,1
02150: 016c                      JUMP   A12
02160: afac 0020                 MOVB   *A13(20h),A12
02180: ca00 fe0e                 JREQ   280h
021a0: 1828                      MOVK   1h,A8
021b0: 0788 9ac0 0003            MOVE   A8,@39AC0h,1
021e0: 0340 5680 0002 9ae0 0003  MOVB   @25680h,@39AE0h
02230: a3cf                      MOVE   A14,-*SP,1
02240: 09e8 9ac0 0003            MOVI   39AC0h,A8
02270: 930e                      MOVE   A8,*A14+,1
02280: d60e 5660 0002            MOVE   @25660h,*A14+,1
022b0: 0d5f 0000 0000            CALLA  0h
022e0: 830d                      MOVE   A8,*A13,1
022f0: c000 fdf7                 JR     280h
02310: 1628                      SUBK   11h,A8
02320: cb00 fdf4                 JRNE   280h
02340: 0548                      SETF   8h,0,0
02350: 05ac 55c0 0002            MOVE   @255C0h,A12,0
02380: 39ec                      DSJS   A12,2480h
02390: 05ac 55e0 0002            MOVE   @255E0h,A12,0
023c0: cb0b                      JRNE   2480h
023d0: 1828                      MOVK   1h,A8
023e0: 05e8 55e0 0002            MOVB   A8,@255E0h
02410: a3cf                      MOVE   A14,-*SP,1
02420: 930e                      MOVE   A8,*A14+,1
02430: 0d5f fee0 0000            CALLA  FEE0h
02460: c000 fde0                 JR     280h
02480: 05ac 55c0 0002            MOVE   @255C0h,A12,0
024b0: 398c                      DSJS   A12,2580h
024c0: 05ac 55e0 0002            MOVE   @255E0h,A12,0
024f0: 390c                      DSJS   A12,2580h
02500: a3cf                      MOVE   A14,-*SP,1
02510: 458c                      SUB    A12,A12
02520: 938e                      MOVE   A12,*A14+,1
02530: 0d5f fee0 0000            CALLA  FEE0h
02560: c000 fdd0                 JR     280h
02580: 05ac 55c0 0002            MOVE   @255C0h,A12,0
025b0: cb00 fdcb                 JRNE   280h
025d0: 05a8 55e0 0002            MOVE   @255E0h,A8,0
02600: 0d88 fdc6                 DSJ    A8,280h
02620: 4508                      SUB    A8,A8
02630: 05e8 55e0 0002            MOVB   A8,@255E0h
02660: a3cf                      MOVE   A14,-*SP,1
02670: 184c                      MOVK   2h,A12
02680: 938e                      MOVE   A12,*A14+,1
02690: 0d5f fee0 0000            CALLA  FEE0h
026c0: c000 fdba                 JR     280h

_see_lut_tiga_request:
026e0: 098f 000c                 MMTM   SP,A12,A13
02700: 4dcd                      MOVE   A14,A13
02710: 0b0e 0060                 ADDI   60h,A14
02730: 1948                      MOVK   Ah,A8
02740: 0570                      SETF   10h,1,0
02750: b10d 0020                 MOVE   A8,*A13(20h),0
02770: 4508                      SUB    A8,A8
02780: b10d 0030                 MOVE   A8,*A13(30h),0
027a0: 1948                      MOVK   Ah,A8
027b0: b10d 0040                 MOVE   A8,*A13(40h),0
027d0: 1a28                      MOVK   11h,A8
027e0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
02810: 19c8                      MOVK   Eh,A8
02820: 0788 cd00 0003            MOVE   A8,@3CD00h,1
02850: 09c8 0036                 MOVI   36h,A8
02870: 0788 cd20 0003            MOVE   A8,@3CD20h,1
028a0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
028c0: 05e8 cd40 0003            MOVB   A8,@3CD40h
028f0: b5a8 0030                 MOVE   *A13(30h),A8,0
02910: 0588 cd48 0003            MOVE   A8,@3CD48h,0
02940: b5a8 0020                 MOVE   *A13(20h),A8,0
02960: 0588 cd58 0003            MOVE   A8,@3CD58h,0
02990: 09e8 6f00 0002            MOVI   26F00h,A8
029c0: 0788 cd68 0003            MOVE   A8,@3CD68h,1
029f0: b5a8 0040                 MOVE   *A13(40h),A8,0
02a10: 1428                      DEC    A8
02a20: b10d 0040                 MOVE   A8,*A13(40h),0
02a40: 1028                      INC    A8
02a50: ca43                      JREQ   2E90h
02a60: a3cf                      MOVE   A14,-*SP,1
02a70: 09e8 cce0 0003            MOVI   3CCE0h,A8
02aa0: 930e                      MOVE   A8,*A14+,1
02ab0: 1868                      MOVK   3h,A8
02ac0: 930e                      MOVE   A8,*A14+,1
02ad0: 0d5f 0000 0000            CALLA  0h
02b00: 830d                      MOVE   A8,*A13,1
02b10: 4d08                      MOVE   A8,A8
02b20: cb2e                      JRNE   2E10h
02b30: a3cf                      MOVE   A14,-*SP,1
02b40: 4508                      SUB    A8,A8
02b50: 930e                      MOVE   A8,*A14+,1
02b60: 09e8 9a80 0003            MOVI   39A80h,A8
02b90: 930e                      MOVE   A8,*A14+,1
02ba0: 19c8                      MOVK   Eh,A8
02bb0: 930e                      MOVE   A8,*A14+,1
02bc0: 0d5f 0000 0000            CALLA  0h
02bf0: 830d                      MOVE   A8,*A13,1
02c00: 4d08                      MOVE   A8,A8
02c10: cb1f                      JRNE   2E10h
02c20: 07e8 9aa0 0003            MOVE   @39AA0h,A8
02c50: cb12                      JRNE   2D80h
02c60: 4508                      SUB    A8,A8
02c70: 0570                      SETF   10h,1,0
02c80: b10d 0050                 MOVE   A8,*A13(50h),0
02ca0: b5a8 0020                 MOVE   *A13(20h),A8,0
02cc0: c609                      JRLE   2D60h
02cd0: b5a8 0050                 MOVE   *A13(50h),A8,0
02cf0: 1028                      INC    A8
02d00: b10d 0050                 MOVE   A8,*A13(50h),0
02d20: b5ac 0020                 MOVE   *A13(20h),A12,0
02d40: 4988                      CMP    A12,A8
02d50: c4f7                      JRLT   2CD0h
02d60: 4508                      SUB    A8,A8
02d70: c012                      JR     2EA0h
02d80: 1468                      SUBK   3h,A8
02d90: ca05                      JREQ   2DF0h
02da0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
02dd0: 144c                      SUBK   2h,A12
02de0: cb02                      JRNE   2E10h
02df0: 1828                      MOVK   1h,A8
02e00: c009                      JR     2EA0h
02e10: 0570                      SETF   10h,1,0
02e20: b5ac 0040                 MOVE   *A13(40h),A12,0
02e40: 142c                      DEC    A12
02e50: b18d 0040                 MOVE   A12,*A13(40h),0
02e70: 102c                      INC    A12
02e80: cbbd                      JRNE   2A60h
02e90: 1828                      MOVK   1h,A8
02ea0: b7ee 0060                 MOVE   *SP(60h),A14,1
02ec0: 09af 3000                 MMFM   SP,A12,A13
02ee0: 0962                      RETS   2h

_copy_lut_tiga_request:
02ef0: 098f 000c                 MMTM   SP,A12,A13
02f10: 4dcd                      MOVE   A14,A13
02f20: 100e                      ADDK   20h,A14
02f30: 4508                      SUB    A8,A8
02f40: 0570                      SETF   10h,1,0
02f50: 810d                      MOVE   A8,*A13,0
02f60: afa8 ffe0                 MOVB   *A13(FFE0h),A8
02f80: 2568                      SLL    Bh,A8
02f90: 0b28 9b00 0003            ADDI   39B00h,A8
02fc0: 85ac                      MOVE   *A13,A12,0
02fd0: 246c                      SLL    3h,A12
02fe0: 4188                      ADD    A12,A8
02ff0: 85ac                      MOVE   *A13,A12,0
03000: 246c                      SLL    3h,A12
03010: 0b2c 6f00 0002            ADDI   26F00h,A12
03040: 9d0c                      MOVB   *A8,*A12
03050: 85ac                      MOVE   *A13,A12,0
03060: 102c                      INC    A12
03070: 818d                      MOVE   A12,*A13,0
03080: 0b4c feff                 CMPI   100h,A12
030a0: c4eb                      JRLT   2F60h
030b0: a3cf                      MOVE   A14,-*SP,1
030c0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
030e0: 930e                      MOVE   A8,*A14+,1
030f0: 09c8 0100                 MOVI   100h,A8
03110: 930e                      MOVE   A8,*A14+,1
03120: 4508                      SUB    A8,A8
03130: 930e                      MOVE   A8,*A14+,1
03140: 0d5f e1f0 0000            CALLA  E1F0h
03170: b7ee 0060                 MOVE   *SP(60h),A14,1
03190: 09af 3000                 MMFM   SP,A12,A13
031b0: 0962                      RETS   2h

_combine_luts_tiga_request:
031c0: 098f 000c                 MMTM   SP,A12,A13
031e0: 4dcd                      MOVE   A14,A13
031f0: 100e                      ADDK   20h,A14
03200: 4508                      SUB    A8,A8
03210: 0570                      SETF   10h,1,0
03220: 810d                      MOVE   A8,*A13,0
03230: afa8 ffe0                 MOVB   *A13(FFE0h),A8
03250: 2568                      SLL    Bh,A8
03260: 0b28 9b00 0003            ADDI   39B00h,A8
03290: 85ac                      MOVE   *A13,A12,0
032a0: 246c                      SLL    3h,A12
032b0: 4188                      ADD    A12,A8
032c0: 0548                      SETF   8h,0,0
032d0: 850c                      MOVE   *A8,A12,0
032e0: 246c                      SLL    3h,A12
032f0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
03310: 2568                      SLL    Bh,A8
03320: 0b28 9b00 0003            ADDI   39B00h,A8
03350: 4188                      ADD    A12,A8
03360: 0570                      SETF   10h,1,0
03370: 85ac                      MOVE   *A13,A12,0
03380: 246c                      SLL    3h,A12
03390: 0b2c 6f00 0002            ADDI   26F00h,A12
033c0: 9d0c                      MOVB   *A8,*A12
033d0: 85ac                      MOVE   *A13,A12,0
033e0: 102c                      INC    A12
033f0: 818d                      MOVE   A12,*A13,0
03400: 0b4c feff                 CMPI   100h,A12
03420: c4e0                      JRLT   3230h
03430: a3cf                      MOVE   A14,-*SP,1
03440: afa8 ffa0                 MOVB   *A13(FFA0h),A8
03460: 930e                      MOVE   A8,*A14+,1
03470: 09c8 0100                 MOVI   100h,A8
03490: 930e                      MOVE   A8,*A14+,1
034a0: 4508                      SUB    A8,A8
034b0: 930e                      MOVE   A8,*A14+,1
034c0: 0d5f e1f0 0000            CALLA  E1F0h
034f0: b7ee 0060                 MOVE   *SP(60h),A14,1
03510: 09af 3000                 MMFM   SP,A12,A13
03530: 0962                      RETS   2h

_set_gamma_lut_tiga_request:
03540: 098f 000c                 MMTM   SP,A12,A13
03560: 4dcd                      MOVE   A14,A13
03570: 0b0e 1960                 ADDI   1960h,A14
03590: 1828                      MOVK   1h,A8
035a0: ad0d 00a0                 MOVB   A8,*A13(A0h)
035c0: a3cf                      MOVE   A14,-*SP,1
035d0: 4da8                      MOVE   A13,A8
035e0: 0b08 00c0                 ADDI   C0h,A8
03600: 930e                      MOVE   A8,*A14+,1
03610: 19a8                      MOVK   Dh,A8
03620: 930e                      MOVE   A8,*A14+,1
03630: 0d5f 0000 0000            CALLA  0h
03660: b30d 1940                 MOVE   A8,*A13(1940h),1
03680: 4d08                      MOVE   A8,A8
03690: cb24                      JRNE   38E0h
036a0: b7a8 0100                 MOVE   *A13(100h),A8,1
036c0: 1568                      SUBK   Bh,A8
036d0: cb1c                      JRNE   38A0h
036e0: afa8 0120                 MOVB   *A13(120h),A8
03700: afac ffc0                 MOVB   *A13(FFC0h),A12
03720: 4988                      CMP    A12,A8
03730: cb12                      JRNE   3860h
03740: a3cf                      MOVE   A14,-*SP,1
03750: 4508                      SUB    A8,A8
03760: 930e                      MOVE   A8,*A14+,1
03770: 4da8                      MOVE   A13,A8
03780: 0b08 00c0                 ADDI   C0h,A8
037a0: 930e                      MOVE   A8,*A14+,1
037b0: 19a8                      MOVK   Dh,A8
037c0: 930e                      MOVE   A8,*A14+,1
037d0: 0d5f 0000 0000            CALLA  0h
03800: b30d 1940                 MOVE   A8,*A13(1940h),1
03820: bbad 0140 ffe0            MOVE   *A13(140h),*A13(FFE0h),1
03850: c00b                      JR     3910h
03860: 4508                      SUB    A8,A8
03870: ad0d 00a0                 MOVB   A8,*A13(A0h)
03890: c007                      JR     3910h
038a0: 458c                      SUB    A12,A12
038b0: ad8d 00a0                 MOVB   A12,*A13(A0h)
038d0: c003                      JR     3910h
038e0: 458c                      SUB    A12,A12
038f0: ad8d 00a0                 MOVB   A12,*A13(A0h)
03910: afac 00a0                 MOVB   *A13(A0h),A12
03930: cbc8                      JRNE   35C0h
03940: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03960: 0d5f c690 0001            CALLA  1C690h
03990: 4508                      SUB    A8,A8
039a0: 09ec 0000 3ff0            MOVI   3FF00000h,A12
039d0: 938e                      MOVE   A12,*A14+,1
039e0: 930e                      MOVE   A8,*A14+,1
039f0: 0d5f ec70 0001            CALLA  1EC70h
03a20: a7c8                      MOVE   -*A14,A8,1
03a30: b30d 0040                 MOVE   A8,*A13(40h),1
03a50: a7c8                      MOVE   -*A14,A8,1
03a60: b30d 0020                 MOVE   A8,*A13(20h),1
03a80: 4508                      SUB    A8,A8
03a90: 0570                      SETF   10h,1,0
03aa0: 810d                      MOVE   A8,*A13,0
03ab0: 85a8                      MOVE   *A13,A8,0
03ac0: 0d5f cdb0 0001            CALLA  1CDB0h
03af0: a7cc                      MOVE   -*A14,A12,1
03b00: b38d 0080                 MOVE   A12,*A13(80h),1
03b20: a7cc                      MOVE   -*A14,A12,1
03b30: b38d 0060                 MOVE   A12,*A13(60h),1
03b50: 458c                      SUB    A12,A12
03b60: 09e8 e000 406f            MOVI   406FE000h,A8
03b90: 930e                      MOVE   A8,*A14+,1
03ba0: 938e                      MOVE   A12,*A14+,1
03bb0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
03bd0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
03bf0: 0d5f ec70 0001            CALLA  1EC70h
03c20: a7c8                      MOVE   -*A14,A8,1
03c30: b30d 0080                 MOVE   A8,*A13(80h),1
03c50: a7c8                      MOVE   -*A14,A8,1
03c60: b30d 0060                 MOVE   A8,*A13(60h),1
03c80: 0b0e 0040                 ADDI   40h,A14
03ca0: a3cf                      MOVE   A14,-*SP,1
03cb0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
03cd0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
03cf0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
03d10: d3ae 0080                 MOVE   *A13(80h),*A14+,1
03d30: 0d5f 0650 0002            CALLA  20650h
03d60: a7c8                      MOVE   -*A14,A8,1
03d70: b30d 0080                 MOVE   A8,*A13(80h),1
03d90: a7c8                      MOVE   -*A14,A8,1
03da0: b30d 0060                 MOVE   A8,*A13(60h),1
03dc0: 09e8 e000 406f            MOVI   406FE000h,A8
03df0: 930e                      MOVE   A8,*A14+,1
03e00: 938e                      MOVE   A12,*A14+,1
03e10: d3ae 0060                 MOVE   *A13(60h),*A14+,1
03e30: d3ae 0080                 MOVE   *A13(80h),*A14+,1
03e50: 0d5f f890 0001            CALLA  1F890h
03e80: a7c8                      MOVE   -*A14,A8,1
03e90: b30d 0080                 MOVE   A8,*A13(80h),1
03eb0: a7c8                      MOVE   -*A14,A8,1
03ec0: b30d 0060                 MOVE   A8,*A13(60h),1
03ee0: 09e8 0000 3fe0            MOVI   3FE00000h,A8
03f10: 930e                      MOVE   A8,*A14+,1
03f20: 938e                      MOVE   A12,*A14+,1
03f30: d3ae 0060                 MOVE   *A13(60h),*A14+,1
03f50: d3ae 0080                 MOVE   *A13(80h),*A14+,1
03f70: 0d5f dc40 0001            CALLA  1DC40h
03fa0: a7c8                      MOVE   -*A14,A8,1
03fb0: b30d 0080                 MOVE   A8,*A13(80h),1
03fd0: a7c8                      MOVE   -*A14,A8,1
03fe0: b30d 0060                 MOVE   A8,*A13(60h),1
04000: 0570                      SETF   10h,1,0
04010: 85a8                      MOVE   *A13,A8,0
04020: 2468                      SLL    3h,A8
04030: 0b28 6f00 0002            ADDI   26F00h,A8
04060: d3ae 0060                 MOVE   *A13(60h),*A14+,1
04080: d3ae 0080                 MOVE   *A13(80h),*A14+,1
040a0: 4d0c                      MOVE   A8,A12
040b0: 0d5f c3d0 0001            CALLA  1C3D0h
040e0: 2708                      SLL    18h,A8
040f0: 2d08                      SRL    18h,A8
04100: 8d0c                      MOVB   A8,*A12
04110: 85ac                      MOVE   *A13,A12,0
04120: 102c                      INC    A12
04130: 818d                      MOVE   A12,*A13,0
04140: 0b4c feff                 CMPI   100h,A12
04160: c494                      JRLT   3AB0h
04170: afa8 ffc0                 MOVB   *A13(FFC0h),A8
04190: 15c8                      SUBK   Eh,A8
041a0: cb15                      JRNE   4300h
041b0: 4508                      SUB    A8,A8
041c0: 810d                      MOVE   A8,*A13,0
041d0: a3cf                      MOVE   A14,-*SP,1
041e0: 8fac                      MOVB   *A13,A12
041f0: 938e                      MOVE   A12,*A14+,1
04200: 09c8 0100                 MOVI   100h,A8
04220: 930e                      MOVE   A8,*A14+,1
04230: 4508                      SUB    A8,A8
04240: 930e                      MOVE   A8,*A14+,1
04250: 0d5f e1f0 0000            CALLA  E1F0h
04280: 0570                      SETF   10h,1,0
04290: 85a8                      MOVE   *A13,A8,0
042a0: 1028                      INC    A8
042b0: 810d                      MOVE   A8,*A13,0
042c0: 1468                      SUBK   3h,A8
042d0: c6ef                      JRLE   41D0h
042e0: 4508                      SUB    A8,A8
042f0: c025                      JR     4550h
04300: afa8 ffc0                 MOVB   *A13(FFC0h),A8
04320: 15e8                      SUBK   Fh,A8
04330: cb15                      JRNE   4490h
04340: 4508                      SUB    A8,A8
04350: 810d                      MOVE   A8,*A13,0
04360: a3cf                      MOVE   A14,-*SP,1
04370: 8fac                      MOVB   *A13,A12
04380: 938e                      MOVE   A12,*A14+,1
04390: 09c8 0100                 MOVI   100h,A8
043b0: 930e                      MOVE   A8,*A14+,1
043c0: 4508                      SUB    A8,A8
043d0: 930e                      MOVE   A8,*A14+,1
043e0: 0d5f e1f0 0000            CALLA  E1F0h
04410: 0570                      SETF   10h,1,0
04420: 85a8                      MOVE   *A13,A8,0
04430: 1028                      INC    A8
04440: 810d                      MOVE   A8,*A13,0
04450: 14e8                      SUBK   7h,A8
04460: c6ef                      JRLE   4360h
04470: 4508                      SUB    A8,A8
04480: c00c                      JR     4550h
04490: a3cf                      MOVE   A14,-*SP,1
044a0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
044c0: 930e                      MOVE   A8,*A14+,1
044d0: 09c8 0100                 MOVI   100h,A8
044f0: 930e                      MOVE   A8,*A14+,1
04500: 4508                      SUB    A8,A8
04510: 930e                      MOVE   A8,*A14+,1
04520: 0d5f e1f0 0000            CALLA  E1F0h
04550: b7ee 0060                 MOVE   *SP(60h),A14,1
04570: 09af 3000                 MMFM   SP,A12,A13
04590: 0962                      RETS   2h

_set_identity_lut_tiga_request:
045a0: a3af                      MOVE   A13,-*SP,1
045b0: 4dcd                      MOVE   A14,A13
045c0: 100e                      ADDK   20h,A14
045d0: 4508                      SUB    A8,A8
045e0: 0570                      SETF   10h,1,0
045f0: 810d                      MOVE   A8,*A13,0
04600: 85a8                      MOVE   *A13,A8,0
04610: 2468                      SLL    3h,A8
04620: 0b28 6f00 0002            ADDI   26F00h,A8
04650: 9da8                      MOVB   *A13,*A8
04660: 85a8                      MOVE   *A13,A8,0
04670: 1028                      INC    A8
04680: 810d                      MOVE   A8,*A13,0
04690: 0b48 feff                 CMPI   100h,A8
046b0: c4f4                      JRLT   4600h
046c0: a3cf                      MOVE   A14,-*SP,1
046d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
046f0: 930e                      MOVE   A8,*A14+,1
04700: 09c8 0100                 MOVI   100h,A8
04720: 930e                      MOVE   A8,*A14+,1
04730: 4508                      SUB    A8,A8
04740: 930e                      MOVE   A8,*A14+,1
04750: 0d5f e1f0 0000            CALLA  E1F0h
04780: b7ee 0040                 MOVE   *SP(40h),A14,1
047a0: 97ed                      MOVE   *SP+,A13,1
047b0: 0962                      RETS   2h

_set_invert_lut_tiga_request:
047c0: 098f 000c                 MMTM   SP,A12,A13
047e0: 4dcd                      MOVE   A14,A13
047f0: 100e                      ADDK   20h,A14
04800: 4508                      SUB    A8,A8
04810: 0570                      SETF   10h,1,0
04820: 810d                      MOVE   A8,*A13,0
04830: 85a8                      MOVE   *A13,A8,0
04840: 2468                      SLL    3h,A8
04850: 0b28 6f00 0002            ADDI   26F00h,A8
04880: 85ac                      MOVE   *A13,A12,0
04890: 03ac                      NEG    A12
048a0: 0b0c 00ff                 ADDI   FFh,A12
048c0: 8d88                      MOVB   A12,*A8
048d0: 85ac                      MOVE   *A13,A12,0
048e0: 102c                      INC    A12
048f0: 818d                      MOVE   A12,*A13,0
04900: 0b4c feff                 CMPI   100h,A12
04920: c4f0                      JRLT   4830h
04930: a3cf                      MOVE   A14,-*SP,1
04940: afa8 ffe0                 MOVB   *A13(FFE0h),A8
04960: 930e                      MOVE   A8,*A14+,1
04970: 09c8 0100                 MOVI   100h,A8
04990: 930e                      MOVE   A8,*A14+,1
049a0: 4508                      SUB    A8,A8
049b0: 930e                      MOVE   A8,*A14+,1
049c0: 0d5f e1f0 0000            CALLA  E1F0h
049f0: b7ee 0060                 MOVE   *SP(60h),A14,1
04a10: 09af 3000                 MMFM   SP,A12,A13
04a30: 0962                      RETS   2h

_set_user_lut_tiga_request:
04a40: 098f 002c                 MMTM   SP,A10,A12,A13
04a60: 4dcd                      MOVE   A14,A13
04a70: 0b0e 0140                 ADDI   140h,A14
04a90: 4508                      SUB    A8,A8
04aa0: 0570                      SETF   10h,1,0
04ab0: 810d                      MOVE   A8,*A13,0
04ac0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
04ae0: b90d 0000 0010            MOVE   *A8(0h),*A13(10h),0
04b10: 4508                      SUB    A8,A8
04b20: b10d 0020                 MOVE   A8,*A13(20h),0
04b40: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
04b60: 1428                      DEC    A8
04b70: c600 0099                 JRLE   5520h
04b90: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
04bb0: bd0d 0010 0080            MOVB   *A8(10h),*A13(80h)
04be0: b90d 0000 0040            MOVE   *A8(0h),*A13(40h),0
04c10: 1308                      ADDK   18h,A8
04c20: b30d ffa0                 MOVE   A8,*A13(FFA0h),1
04c40: bd0d 0010 0090            MOVB   *A8(10h),*A13(90h)
04c70: b90d 0000 0050            MOVE   *A8(0h),*A13(50h),0
04ca0: 0548                      SETF   8h,0,0
04cb0: b5a8 0080                 MOVE   *A13(80h),A8,0
04cd0: b5ac 0090                 MOVE   *A13(90h),A12,0
04cf0: 4588                      SUB    A12,A8
04d00: 0570                      SETF   10h,1,0
04d10: b10d 0070                 MOVE   A8,*A13(70h),0
04d30: b5a8 0040                 MOVE   *A13(40h),A8,0
04d50: b5ac 0050                 MOVE   *A13(50h),A12,0
04d70: 4588                      SUB    A12,A8
04d80: b10d 0060                 MOVE   A8,*A13(60h),0
04da0: b5a8 0060                 MOVE   *A13(60h),A8,0
04dc0: ca6a                      JREQ   5470h
04dd0: b5a8 0070                 MOVE   *A13(70h),A8,0
04df0: 0d5f cdb0 0001            CALLA  1CDB0h
04e20: b5a8 0060                 MOVE   *A13(60h),A8,0
04e40: 0d5f cdb0 0001            CALLA  1CDB0h
04e70: 0d5f ede0 0001            CALLA  1EDE0h
04ea0: a7c8                      MOVE   -*A14,A8,1
04eb0: b30d 00c0                 MOVE   A8,*A13(C0h),1
04ed0: a7c8                      MOVE   -*A14,A8,1
04ee0: b30d 00a0                 MOVE   A8,*A13(A0h),1
04f00: 0548                      SETF   8h,0,0
04f10: b5a8 0080                 MOVE   *A13(80h),A8,0
04f30: 0d5f d140 0001            CALLA  1D140h
04f60: 0570                      SETF   10h,1,0
04f70: b5a8 0040                 MOVE   *A13(40h),A8,0
04f90: 0d5f cdb0 0001            CALLA  1CDB0h
04fc0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
04fe0: d3ae 00c0                 MOVE   *A13(C0h),*A14+,1
05000: 0d5f f890 0001            CALLA  1F890h
05030: 0d5f dad0 0001            CALLA  1DAD0h
05060: a7c8                      MOVE   -*A14,A8,1
05070: b30d 0100                 MOVE   A8,*A13(100h),1
05090: a7c8                      MOVE   -*A14,A8,1
050a0: b30d 00e0                 MOVE   A8,*A13(E0h),1
050c0: b9ad 0040 0030            MOVE   *A13(40h),*A13(30h),0
050f0: b5a8 0030                 MOVE   *A13(30h),A8,0
05110: 4988                      CMP    A12,A8
05120: c534                      JRGE   5470h
05130: 0570                      SETF   10h,1,0
05140: 85ac                      MOVE   *A13,A12,0
05150: 246c                      SLL    3h,A12
05160: 0b2c 6f00 0002            ADDI   26F00h,A12
05190: b5a8 0030                 MOVE   *A13(30h),A8,0
051b0: 0d5f cdb0 0001            CALLA  1CDB0h
051e0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
05200: d3ae 00c0                 MOVE   *A13(C0h),*A14+,1
05220: 0d5f f890 0001            CALLA  1F890h
05250: d3ae 00e0                 MOVE   *A13(E0h),*A14+,1
05270: d3ae 0100                 MOVE   *A13(100h),*A14+,1
05290: 0d5f dc40 0001            CALLA  1DC40h
052c0: 4508                      SUB    A8,A8
052d0: 09ea 0000 3fe0            MOVI   3FE00000h,A10
05300: 934e                      MOVE   A10,*A14+,1
05310: 930e                      MOVE   A8,*A14+,1
05320: 0d5f dc40 0001            CALLA  1DC40h
05350: 0d5f c3d0 0001            CALLA  1C3D0h
05380: 2708                      SLL    18h,A8
05390: 2d08                      SRL    18h,A8
053a0: 8d0c                      MOVB   A8,*A12
053b0: 85ac                      MOVE   *A13,A12,0
053c0: 102c                      INC    A12
053d0: 818d                      MOVE   A12,*A13,0
053e0: b5a8 0030                 MOVE   *A13(30h),A8,0
05400: 1028                      INC    A8
05410: b10d 0030                 MOVE   A8,*A13(30h),0
05430: b5aa 0050                 MOVE   *A13(50h),A10,0
05450: 4948                      CMP    A10,A8
05460: c4cd                      JRLT   5140h
05470: b5ac 0020                 MOVE   *A13(20h),A12,0
05490: 102c                      INC    A12
054a0: b18d 0020                 MOVE   A12,*A13(20h),0
054c0: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
054e0: 102c                      INC    A12
054f0: 494c                      CMP    A10,A12
05500: c400 ff67                 JRLT   4B90h
05520: 85ac                      MOVE   *A13,A12,0
05530: 246c                      SLL    3h,A12
05540: 0b2c 6f00 0002            ADDI   26F00h,A12
05570: bdac 0090 0000            MOVB   *A13(90h),*A12(0h)
055a0: 85ac                      MOVE   *A13,A12,0
055b0: 102c                      INC    A12
055c0: 818d                      MOVE   A12,*A13,0
055d0: a3cf                      MOVE   A14,-*SP,1
055e0: afaa ffe0                 MOVB   *A13(FFE0h),A10
05600: 934e                      MOVE   A10,*A14+,1
05610: 938e                      MOVE   A12,*A14+,1
05620: b5a8 0010                 MOVE   *A13(10h),A8,0
05640: 930e                      MOVE   A8,*A14+,1
05650: 0d5f e1f0 0000            CALLA  E1F0h
05680: b7ee 0080                 MOVE   *SP(80h),A14,1
056a0: 09af 3400                 MMFM   SP,A10,A12,A13
056c0: 0962                      RETS   2h

_set_wind_reqd_tiga_request:
056d0: a3af                      MOVE   A13,-*SP,1
056e0: 4dcd                      MOVE   A14,A13
056f0: 0b0e 0040                 ADDI   40h,A14
05710: 1948                      MOVK   Ah,A8
05720: 0570                      SETF   10h,1,0
05730: b10d 0020                 MOVE   A8,*A13(20h),0
05750: 1928                      MOVK   9h,A8
05760: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
05790: 19c8                      MOVK   Eh,A8
057a0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
057d0: 4508                      SUB    A8,A8
057e0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
05810: afa8 ffe0                 MOVB   *A13(FFE0h),A8
05830: 05e8 cd40 0003            MOVB   A8,@3CD40h
05860: b5a8 0020                 MOVE   *A13(20h),A8,0
05880: 1428                      DEC    A8
05890: b10d 0020                 MOVE   A8,*A13(20h),0
058b0: 1028                      INC    A8
058c0: ca33                      JREQ   5C00h
058d0: a3cf                      MOVE   A14,-*SP,1
058e0: 09e8 cce0 0003            MOVI   3CCE0h,A8
05910: 930e                      MOVE   A8,*A14+,1
05920: 1868                      MOVK   3h,A8
05930: 930e                      MOVE   A8,*A14+,1
05940: 0d5f 0000 0000            CALLA  0h
05970: 830d                      MOVE   A8,*A13,1
05980: 4d08                      MOVE   A8,A8
05990: cb1e                      JRNE   5B80h
059a0: a3cf                      MOVE   A14,-*SP,1
059b0: 4508                      SUB    A8,A8
059c0: 930e                      MOVE   A8,*A14+,1
059d0: 09e8 9a80 0003            MOVI   39A80h,A8
05a00: 930e                      MOVE   A8,*A14+,1
05a10: 19c8                      MOVK   Eh,A8
05a20: 930e                      MOVE   A8,*A14+,1
05a30: 0d5f 0000 0000            CALLA  0h
05a60: 830d                      MOVE   A8,*A13,1
05a70: 4d08                      MOVE   A8,A8
05a80: cb0f                      JRNE   5B80h
05a90: 07e8 9aa0 0003            MOVE   @39AA0h,A8
05ac0: cb02                      JRNE   5AF0h
05ad0: 4508                      SUB    A8,A8
05ae0: c012                      JR     5C10h
05af0: 1468                      SUBK   3h,A8
05b00: ca05                      JREQ   5B60h
05b10: 07e8 9aa0 0003            MOVE   @39AA0h,A8
05b40: 1448                      SUBK   2h,A8
05b50: cb02                      JRNE   5B80h
05b60: 1828                      MOVK   1h,A8
05b70: c009                      JR     5C10h
05b80: 0570                      SETF   10h,1,0
05b90: b5a8 0020                 MOVE   *A13(20h),A8,0
05bb0: 1428                      DEC    A8
05bc0: b10d 0020                 MOVE   A8,*A13(20h),0
05be0: 1028                      INC    A8
05bf0: cbcd                      JRNE   58D0h
05c00: 1828                      MOVK   1h,A8
05c10: b7ee 0040                 MOVE   *SP(40h),A14,1
05c30: 97ed                      MOVE   *SP+,A13,1
05c40: 0962                      RETS   2h

_set_lut_to_zone:
05c50: a3af                      MOVE   A13,-*SP,1
05c60: 4dcd                      MOVE   A14,A13
05c70: 0b0e 0040                 ADDI   40h,A14
05c90: 1948                      MOVK   Ah,A8
05ca0: 0570                      SETF   10h,1,0
05cb0: b10d 0020                 MOVE   A8,*A13(20h),0
05cd0: 1a28                      MOVK   11h,A8
05ce0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
05d10: 19c8                      MOVK   Eh,A8
05d20: 0788 cd00 0003            MOVE   A8,@3CD00h,1
05d50: 1828                      MOVK   1h,A8
05d60: 0788 cd20 0003            MOVE   A8,@3CD20h,1
05d90: afa8 ffa0                 MOVB   *A13(FFA0h),A8
05db0: 05e8 cd40 0003            MOVB   A8,@3CD40h
05de0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
05e00: 0588 cd48 0003            MOVE   A8,@3CD48h,0
05e30: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
05e50: 0588 cd58 0003            MOVE   A8,@3CD58h,0
05e80: 09e8 6f00 0002            MOVI   26F00h,A8
05eb0: 0788 cd68 0003            MOVE   A8,@3CD68h,1
05ee0: b5a8 0020                 MOVE   *A13(20h),A8,0
05f00: 1428                      DEC    A8
05f10: b10d 0020                 MOVE   A8,*A13(20h),0
05f30: 1028                      INC    A8
05f40: ca33                      JREQ   6280h
05f50: a3cf                      MOVE   A14,-*SP,1
05f60: 09e8 cce0 0003            MOVI   3CCE0h,A8
05f90: 930e                      MOVE   A8,*A14+,1
05fa0: 1868                      MOVK   3h,A8
05fb0: 930e                      MOVE   A8,*A14+,1
05fc0: 0d5f 0000 0000            CALLA  0h
05ff0: 830d                      MOVE   A8,*A13,1
06000: 4d08                      MOVE   A8,A8
06010: cb1e                      JRNE   6200h
06020: a3cf                      MOVE   A14,-*SP,1
06030: 4508                      SUB    A8,A8
06040: 930e                      MOVE   A8,*A14+,1
06050: 09e8 9a80 0003            MOVI   39A80h,A8
06080: 930e                      MOVE   A8,*A14+,1
06090: 19c8                      MOVK   Eh,A8
060a0: 930e                      MOVE   A8,*A14+,1
060b0: 0d5f 0000 0000            CALLA  0h
060e0: 830d                      MOVE   A8,*A13,1
060f0: 4d08                      MOVE   A8,A8
06100: cb0f                      JRNE   6200h
06110: 07e8 9aa0 0003            MOVE   @39AA0h,A8
06140: cb02                      JRNE   6170h
06150: 4508                      SUB    A8,A8
06160: c012                      JR     6290h
06170: 1468                      SUBK   3h,A8
06180: ca05                      JREQ   61E0h
06190: 07e8 9aa0 0003            MOVE   @39AA0h,A8
061c0: 1448                      SUBK   2h,A8
061d0: cb02                      JRNE   6200h
061e0: 1828                      MOVK   1h,A8
061f0: c009                      JR     6290h
06200: 0570                      SETF   10h,1,0
06210: b5a8 0020                 MOVE   *A13(20h),A8,0
06230: 1428                      DEC    A8
06240: b10d 0020                 MOVE   A8,*A13(20h),0
06260: 1028                      INC    A8
06270: cbcd                      JRNE   5F50h
06280: 1828                      MOVK   1h,A8
06290: b7ee 0040                 MOVE   *SP(40h),A14,1
062b0: 97ed                      MOVE   *SP+,A13,1
062c0: 0962                      RETS   2h

_assign_zone_port_tiga_request:
062d0: a3af                      MOVE   A13,-*SP,1
062e0: 4dcd                      MOVE   A14,A13
062f0: 0b0e 0040                 ADDI   40h,A14
06310: 1948                      MOVK   Ah,A8
06320: 0570                      SETF   10h,1,0
06330: b10d 0020                 MOVE   A8,*A13(20h),0
06350: 1968                      MOVK   Bh,A8
06360: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
06390: 19c8                      MOVK   Eh,A8
063a0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
063d0: 1848                      MOVK   2h,A8
063e0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
06410: afa8 ffe0                 MOVB   *A13(FFE0h),A8
06430: 05e8 cd40 0003            MOVB   A8,@3CD40h
06460: afa8 ffc0                 MOVB   *A13(FFC0h),A8
06480: 0588 cd48 0003            MOVE   A8,@3CD48h,0
064b0: b5a8 0020                 MOVE   *A13(20h),A8,0
064d0: 1428                      DEC    A8
064e0: b10d 0020                 MOVE   A8,*A13(20h),0
06500: 1028                      INC    A8
06510: ca33                      JREQ   6850h
06520: a3cf                      MOVE   A14,-*SP,1
06530: 09e8 cce0 0003            MOVI   3CCE0h,A8
06560: 930e                      MOVE   A8,*A14+,1
06570: 1868                      MOVK   3h,A8
06580: 930e                      MOVE   A8,*A14+,1
06590: 0d5f 0000 0000            CALLA  0h
065c0: 830d                      MOVE   A8,*A13,1
065d0: 4d08                      MOVE   A8,A8
065e0: cb1e                      JRNE   67D0h
065f0: a3cf                      MOVE   A14,-*SP,1
06600: 4508                      SUB    A8,A8
06610: 930e                      MOVE   A8,*A14+,1
06620: 09e8 9a80 0003            MOVI   39A80h,A8
06650: 930e                      MOVE   A8,*A14+,1
06660: 19c8                      MOVK   Eh,A8
06670: 930e                      MOVE   A8,*A14+,1
06680: 0d5f 0000 0000            CALLA  0h
066b0: 830d                      MOVE   A8,*A13,1
066c0: 4d08                      MOVE   A8,A8
066d0: cb0f                      JRNE   67D0h
066e0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
06710: cb02                      JRNE   6740h
06720: 4508                      SUB    A8,A8
06730: c012                      JR     6860h
06740: 1468                      SUBK   3h,A8
06750: ca05                      JREQ   67B0h
06760: 07e8 9aa0 0003            MOVE   @39AA0h,A8
06790: 1448                      SUBK   2h,A8
067a0: cb02                      JRNE   67D0h
067b0: 1828                      MOVK   1h,A8
067c0: c009                      JR     6860h
067d0: 0570                      SETF   10h,1,0
067e0: b5a8 0020                 MOVE   *A13(20h),A8,0
06800: 1428                      DEC    A8
06810: b10d 0020                 MOVE   A8,*A13(20h),0
06830: 1028                      INC    A8
06840: cbcd                      JRNE   6520h
06850: 1828                      MOVK   1h,A8
06860: b7ee 0040                 MOVE   *SP(40h),A14,1
06880: 97ed                      MOVE   *SP+,A13,1
06890: 0962                      RETS   2h

_set_det_offset_tiga_request:
068a0: 098f 000c                 MMTM   SP,A12,A13
068c0: 4dcd                      MOVE   A14,A13
068d0: 0b0e 0080                 ADDI   80h,A14
068f0: 1948                      MOVK   Ah,A8
06900: 0570                      SETF   10h,1,0
06910: b10d 0020                 MOVE   A8,*A13(20h),0
06930: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
06950: 0d5f c690 0001            CALLA  1C690h
06980: a7c8                      MOVE   -*A14,A8,1
06990: b30d 0060                 MOVE   A8,*A13(60h),1
069b0: a7c8                      MOVE   -*A14,A8,1
069c0: b30d 0040                 MOVE   A8,*A13(40h),1
069e0: 1968                      MOVK   Bh,A8
069f0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
06a20: 19c8                      MOVK   Eh,A8
06a30: 0788 cd00 0003            MOVE   A8,@3CD00h,1
06a60: 1868                      MOVK   3h,A8
06a70: 0788 cd20 0003            MOVE   A8,@3CD20h,1
06aa0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
06ac0: 05e8 cd40 0003            MOVB   A8,@3CD40h
06af0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
06b10: d3ae 0060                 MOVE   *A13(60h),*A14+,1
06b30: 09e8 4dc0 0002            MOVI   24DC0h,A8
06b60: 9b0e                      MOVE   *A8+,*A14+,1
06b70: 9b0e                      MOVE   *A8+,*A14+,1
06b80: 0d5f f890 0001            CALLA  1F890h
06bb0: 4508                      SUB    A8,A8
06bc0: 09ec 0000 40a0            MOVI   40A00000h,A12
06bf0: 938e                      MOVE   A12,*A14+,1
06c00: 930e                      MOVE   A8,*A14+,1
06c10: 0d5f dc40 0001            CALLA  1DC40h
06c40: 0d5f bde0 0001            CALLA  1BDE0h
06c70: 0508                      SEXT   A8,0
06c80: 0588 cd48 0003            MOVE   A8,@3CD48h,0
06cb0: b5ac 0020                 MOVE   *A13(20h),A12,0
06cd0: 142c                      DEC    A12
06ce0: b18d 0020                 MOVE   A12,*A13(20h),0
06d00: 102c                      INC    A12
06d10: ca3c                      JREQ   70E0h
06d20: a3cf                      MOVE   A14,-*SP,1
06d30: 09ec cce0 0003            MOVI   3CCE0h,A12
06d60: 938e                      MOVE   A12,*A14+,1
06d70: 1868                      MOVK   3h,A8
06d80: 930e                      MOVE   A8,*A14+,1
06d90: 0d5f 0000 0000            CALLA  0h
06dc0: 830d                      MOVE   A8,*A13,1
06dd0: 4d08                      MOVE   A8,A8
06de0: cb27                      JRNE   7060h
06df0: a3cf                      MOVE   A14,-*SP,1
06e00: 458c                      SUB    A12,A12
06e10: 938e                      MOVE   A12,*A14+,1
06e20: 09ec 9a80 0003            MOVI   39A80h,A12
06e50: 938e                      MOVE   A12,*A14+,1
06e60: 19cc                      MOVK   Eh,A12
06e70: 938e                      MOVE   A12,*A14+,1
06e80: 0d5f 0000 0000            CALLA  0h
06eb0: 830d                      MOVE   A8,*A13,1
06ec0: 4d08                      MOVE   A8,A8
06ed0: cb18                      JRNE   7060h
06ee0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
06f10: cb0b                      JRNE   6FD0h
06f20: afa8 ffe0                 MOVB   *A13(FFE0h),A8
06f40: 24a8                      SLL    5h,A8
06f50: 0b28 5480 0002            ADDI   25480h,A8
06f80: bba8 ffc0 0000            MOVE   *A13(FFC0h),*A8(0h),1
06fb0: 4508                      SUB    A8,A8
06fc0: c012                      JR     70F0h
06fd0: 146c                      SUBK   3h,A12
06fe0: ca05                      JREQ   7040h
06ff0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
07020: 144c                      SUBK   2h,A12
07030: cb02                      JRNE   7060h
07040: 1828                      MOVK   1h,A8
07050: c009                      JR     70F0h
07060: 0570                      SETF   10h,1,0
07070: b5ac 0020                 MOVE   *A13(20h),A12,0
07090: 142c                      DEC    A12
070a0: b18d 0020                 MOVE   A12,*A13(20h),0
070c0: 102c                      INC    A12
070d0: cbc4                      JRNE   6D20h
070e0: 1828                      MOVK   1h,A8
070f0: b7ee 0060                 MOVE   *SP(60h),A14,1
07110: 09af 3000                 MMFM   SP,A12,A13
07130: 0962                      RETS   2h

_set_det_gain_tiga_request:
07140: 098f 000c                 MMTM   SP,A12,A13
07160: 4dcd                      MOVE   A14,A13
07170: 0b0e 0080                 ADDI   80h,A14
07190: 1948                      MOVK   Ah,A8
071a0: 0570                      SETF   10h,1,0
071b0: b10d 0020                 MOVE   A8,*A13(20h),0
071d0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
071f0: 0d5f c690 0001            CALLA  1C690h
07220: a7c8                      MOVE   -*A14,A8,1
07230: b30d 0060                 MOVE   A8,*A13(60h),1
07250: a7c8                      MOVE   -*A14,A8,1
07260: b30d 0040                 MOVE   A8,*A13(40h),1
07280: 1968                      MOVK   Bh,A8
07290: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
072c0: 19c8                      MOVK   Eh,A8
072d0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
07300: 1888                      MOVK   4h,A8
07310: 0788 cd20 0003            MOVE   A8,@3CD20h,1
07340: afa8 ffe0                 MOVB   *A13(FFE0h),A8
07360: 05e8 cd40 0003            MOVB   A8,@3CD40h
07390: d3ae 0040                 MOVE   *A13(40h),*A14+,1
073b0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
073d0: 09e8 4e00 0002            MOVI   24E00h,A8
07400: 9b0e                      MOVE   *A8+,*A14+,1
07410: 9b0e                      MOVE   *A8+,*A14+,1
07420: 0d5f f890 0001            CALLA  1F890h
07450: 4508                      SUB    A8,A8
07460: 09ec 0000 3fe0            MOVI   3FE00000h,A12
07490: 938e                      MOVE   A12,*A14+,1
074a0: 930e                      MOVE   A8,*A14+,1
074b0: 0d5f dc40 0001            CALLA  1DC40h
074e0: 0d5f bde0 0001            CALLA  1BDE0h
07510: 0508                      SEXT   A8,0
07520: 0588 cd48 0003            MOVE   A8,@3CD48h,0
07550: b5ac 0020                 MOVE   *A13(20h),A12,0
07570: 142c                      DEC    A12
07580: b18d 0020                 MOVE   A12,*A13(20h),0
075a0: 102c                      INC    A12
075b0: ca3c                      JREQ   7980h
075c0: a3cf                      MOVE   A14,-*SP,1
075d0: 09ec cce0 0003            MOVI   3CCE0h,A12
07600: 938e                      MOVE   A12,*A14+,1
07610: 1868                      MOVK   3h,A8
07620: 930e                      MOVE   A8,*A14+,1
07630: 0d5f 0000 0000            CALLA  0h
07660: 830d                      MOVE   A8,*A13,1
07670: 4d08                      MOVE   A8,A8
07680: cb27                      JRNE   7900h
07690: a3cf                      MOVE   A14,-*SP,1
076a0: 458c                      SUB    A12,A12
076b0: 938e                      MOVE   A12,*A14+,1
076c0: 09ec 9a80 0003            MOVI   39A80h,A12
076f0: 938e                      MOVE   A12,*A14+,1
07700: 19cc                      MOVK   Eh,A12
07710: 938e                      MOVE   A12,*A14+,1
07720: 0d5f 0000 0000            CALLA  0h
07750: 830d                      MOVE   A8,*A13,1
07760: 4d08                      MOVE   A8,A8
07770: cb18                      JRNE   7900h
07780: 07ec 9aa0 0003            MOVE   @39AA0h,A12
077b0: cb0b                      JRNE   7870h
077c0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
077e0: 24a8                      SLL    5h,A8
077f0: 0b28 5380 0002            ADDI   25380h,A8
07820: bba8 ffc0 0000            MOVE   *A13(FFC0h),*A8(0h),1
07850: 4508                      SUB    A8,A8
07860: c012                      JR     7990h
07870: 146c                      SUBK   3h,A12
07880: ca05                      JREQ   78E0h
07890: 07ec 9aa0 0003            MOVE   @39AA0h,A12
078c0: 144c                      SUBK   2h,A12
078d0: cb02                      JRNE   7900h
078e0: 1828                      MOVK   1h,A8
078f0: c009                      JR     7990h
07900: 0570                      SETF   10h,1,0
07910: b5ac 0020                 MOVE   *A13(20h),A12,0
07930: 142c                      DEC    A12
07940: b18d 0020                 MOVE   A12,*A13(20h),0
07960: 102c                      INC    A12
07970: cbc4                      JRNE   75C0h
07980: 1828                      MOVK   1h,A8
07990: b7ee 0060                 MOVE   *SP(60h),A14,1
079b0: 09af 3000                 MMFM   SP,A12,A13
079d0: 0962                      RETS   2h

_set_det_invert_tiga_request:
079e0: a3af                      MOVE   A13,-*SP,1
079f0: 4dcd                      MOVE   A14,A13
07a00: 0b0e 0040                 ADDI   40h,A14
07a20: 1948                      MOVK   Ah,A8
07a30: 0570                      SETF   10h,1,0
07a40: b10d 0020                 MOVE   A8,*A13(20h),0
07a60: 1968                      MOVK   Bh,A8
07a70: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
07aa0: 19c8                      MOVK   Eh,A8
07ab0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
07ae0: 18a8                      MOVK   5h,A8
07af0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
07b20: afa8 ffe0                 MOVB   *A13(FFE0h),A8
07b40: 05e8 cd40 0003            MOVB   A8,@3CD40h
07b70: afa8 ffc0                 MOVB   *A13(FFC0h),A8
07b90: 0588 cd48 0003            MOVE   A8,@3CD48h,0
07bc0: b5a8 0020                 MOVE   *A13(20h),A8,0
07be0: 1428                      DEC    A8
07bf0: b10d 0020                 MOVE   A8,*A13(20h),0
07c10: 1028                      INC    A8
07c20: ca33                      JREQ   7F60h
07c30: a3cf                      MOVE   A14,-*SP,1
07c40: 09e8 cce0 0003            MOVI   3CCE0h,A8
07c70: 930e                      MOVE   A8,*A14+,1
07c80: 1868                      MOVK   3h,A8
07c90: 930e                      MOVE   A8,*A14+,1
07ca0: 0d5f 0000 0000            CALLA  0h
07cd0: 830d                      MOVE   A8,*A13,1
07ce0: 4d08                      MOVE   A8,A8
07cf0: cb1e                      JRNE   7EE0h
07d00: a3cf                      MOVE   A14,-*SP,1
07d10: 4508                      SUB    A8,A8
07d20: 930e                      MOVE   A8,*A14+,1
07d30: 09e8 9a80 0003            MOVI   39A80h,A8
07d60: 930e                      MOVE   A8,*A14+,1
07d70: 19c8                      MOVK   Eh,A8
07d80: 930e                      MOVE   A8,*A14+,1
07d90: 0d5f 0000 0000            CALLA  0h
07dc0: 830d                      MOVE   A8,*A13,1
07dd0: 4d08                      MOVE   A8,A8
07de0: cb0f                      JRNE   7EE0h
07df0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
07e20: cb02                      JRNE   7E50h
07e30: 4508                      SUB    A8,A8
07e40: c012                      JR     7F70h
07e50: 1468                      SUBK   3h,A8
07e60: ca05                      JREQ   7EC0h
07e70: 07e8 9aa0 0003            MOVE   @39AA0h,A8
07ea0: 1448                      SUBK   2h,A8
07eb0: cb02                      JRNE   7EE0h
07ec0: 1828                      MOVK   1h,A8
07ed0: c009                      JR     7F70h
07ee0: 0570                      SETF   10h,1,0
07ef0: b5a8 0020                 MOVE   *A13(20h),A8,0
07f10: 1428                      DEC    A8
07f20: b10d 0020                 MOVE   A8,*A13(20h),0
07f40: 1028                      INC    A8
07f50: cbcd                      JRNE   7C30h
07f60: 1828                      MOVK   1h,A8
07f70: b7ee 0040                 MOVE   *SP(40h),A14,1
07f90: 97ed                      MOVE   *SP+,A13,1
07fa0: 0962                      RETS   2h

_set_detector_alpha:
07fb0: 098f 000c                 MMTM   SP,A12,A13
07fd0: 4dcd                      MOVE   A14,A13
07fe0: 0b0e 0080                 ADDI   80h,A14
08000: 1948                      MOVK   Ah,A8
08010: 0570                      SETF   10h,1,0
08020: b10d 0020                 MOVE   A8,*A13(20h),0
08040: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
08060: 0d5f c690 0001            CALLA  1C690h
08090: a7c8                      MOVE   -*A14,A8,1
080a0: b30d 0060                 MOVE   A8,*A13(60h),1
080c0: a7c8                      MOVE   -*A14,A8,1
080d0: b30d 0040                 MOVE   A8,*A13(40h),1
080f0: 1968                      MOVK   Bh,A8
08100: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
08130: 19c8                      MOVK   Eh,A8
08140: 0788 cd00 0003            MOVE   A8,@3CD00h,1
08170: 18c8                      MOVK   6h,A8
08180: 0788 cd20 0003            MOVE   A8,@3CD20h,1
081b0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
081d0: 05e8 cd40 0003            MOVB   A8,@3CD40h
08200: d3ae 0040                 MOVE   *A13(40h),*A14+,1
08220: d3ae 0060                 MOVE   *A13(60h),*A14+,1
08240: 4508                      SUB    A8,A8
08250: 09ec e000 406f            MOVI   406FE000h,A12
08280: 938e                      MOVE   A12,*A14+,1
08290: 930e                      MOVE   A8,*A14+,1
082a0: 0d5f f890 0001            CALLA  1F890h
082d0: 4508                      SUB    A8,A8
082e0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
08310: 938e                      MOVE   A12,*A14+,1
08320: 930e                      MOVE   A8,*A14+,1
08330: 0d5f dc40 0001            CALLA  1DC40h
08360: 0d5f bde0 0001            CALLA  1BDE0h
08390: 0508                      SEXT   A8,0
083a0: 0588 cd48 0003            MOVE   A8,@3CD48h,0
083d0: b5ac 0020                 MOVE   *A13(20h),A12,0
083f0: 142c                      DEC    A12
08400: b18d 0020                 MOVE   A12,*A13(20h),0
08420: 102c                      INC    A12
08430: ca33                      JREQ   8770h
08440: a3cf                      MOVE   A14,-*SP,1
08450: 09ec cce0 0003            MOVI   3CCE0h,A12
08480: 938e                      MOVE   A12,*A14+,1
08490: 1868                      MOVK   3h,A8
084a0: 930e                      MOVE   A8,*A14+,1
084b0: 0d5f 0000 0000            CALLA  0h
084e0: 830d                      MOVE   A8,*A13,1
084f0: 4d08                      MOVE   A8,A8
08500: cb1e                      JRNE   86F0h
08510: a3cf                      MOVE   A14,-*SP,1
08520: 458c                      SUB    A12,A12
08530: 938e                      MOVE   A12,*A14+,1
08540: 09ec 9a80 0003            MOVI   39A80h,A12
08570: 938e                      MOVE   A12,*A14+,1
08580: 19cc                      MOVK   Eh,A12
08590: 938e                      MOVE   A12,*A14+,1
085a0: 0d5f 0000 0000            CALLA  0h
085d0: 830d                      MOVE   A8,*A13,1
085e0: 4d08                      MOVE   A8,A8
085f0: cb0f                      JRNE   86F0h
08600: 07ec 9aa0 0003            MOVE   @39AA0h,A12
08630: cb02                      JRNE   8660h
08640: 4508                      SUB    A8,A8
08650: c012                      JR     8780h
08660: 146c                      SUBK   3h,A12
08670: ca05                      JREQ   86D0h
08680: 07ec 9aa0 0003            MOVE   @39AA0h,A12
086b0: 144c                      SUBK   2h,A12
086c0: cb02                      JRNE   86F0h
086d0: 1828                      MOVK   1h,A8
086e0: c009                      JR     8780h
086f0: 0570                      SETF   10h,1,0
08700: b5ac 0020                 MOVE   *A13(20h),A12,0
08720: 142c                      DEC    A12
08730: b18d 0020                 MOVE   A12,*A13(20h),0
08750: 102c                      INC    A12
08760: cbcd                      JRNE   8440h
08770: 1828                      MOVK   1h,A8
08780: b7ee 0060                 MOVE   *SP(60h),A14,1
087a0: 09af 3000                 MMFM   SP,A12,A13
087c0: 0962                      RETS   2h

_set_detector_beta:
087d0: 098f 000c                 MMTM   SP,A12,A13
087f0: 4dcd                      MOVE   A14,A13
08800: 0b0e 0080                 ADDI   80h,A14
08820: 1948                      MOVK   Ah,A8
08830: 0570                      SETF   10h,1,0
08840: b10d 0020                 MOVE   A8,*A13(20h),0
08860: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
08880: 0d5f c690 0001            CALLA  1C690h
088b0: a7c8                      MOVE   -*A14,A8,1
088c0: b30d 0060                 MOVE   A8,*A13(60h),1
088e0: a7c8                      MOVE   -*A14,A8,1
088f0: b30d 0040                 MOVE   A8,*A13(40h),1
08910: 1968                      MOVK   Bh,A8
08920: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
08950: 19c8                      MOVK   Eh,A8
08960: 0788 cd00 0003            MOVE   A8,@3CD00h,1
08990: 18e8                      MOVK   7h,A8
089a0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
089d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
089f0: 05e8 cd40 0003            MOVB   A8,@3CD40h
08a20: d3ae 0040                 MOVE   *A13(40h),*A14+,1
08a40: d3ae 0060                 MOVE   *A13(60h),*A14+,1
08a60: 4508                      SUB    A8,A8
08a70: 09ec 0000 4040            MOVI   40400000h,A12
08aa0: 938e                      MOVE   A12,*A14+,1
08ab0: 930e                      MOVE   A8,*A14+,1
08ac0: 0d5f f890 0001            CALLA  1F890h
08af0: 4508                      SUB    A8,A8
08b00: 09ec 0000 3fe0            MOVI   3FE00000h,A12
08b30: 938e                      MOVE   A12,*A14+,1
08b40: 930e                      MOVE   A8,*A14+,1
08b50: 0d5f dc40 0001            CALLA  1DC40h
08b80: 0d5f bde0 0001            CALLA  1BDE0h
08bb0: 0508                      SEXT   A8,0
08bc0: 0588 cd48 0003            MOVE   A8,@3CD48h,0
08bf0: b5ac 0020                 MOVE   *A13(20h),A12,0
08c10: 142c                      DEC    A12
08c20: b18d 0020                 MOVE   A12,*A13(20h),0
08c40: 102c                      INC    A12
08c50: ca33                      JREQ   8F90h
08c60: a3cf                      MOVE   A14,-*SP,1
08c70: 09ec cce0 0003            MOVI   3CCE0h,A12
08ca0: 938e                      MOVE   A12,*A14+,1
08cb0: 1868                      MOVK   3h,A8
08cc0: 930e                      MOVE   A8,*A14+,1
08cd0: 0d5f 0000 0000            CALLA  0h
08d00: 830d                      MOVE   A8,*A13,1
08d10: 4d08                      MOVE   A8,A8
08d20: cb1e                      JRNE   8F10h
08d30: a3cf                      MOVE   A14,-*SP,1
08d40: 458c                      SUB    A12,A12
08d50: 938e                      MOVE   A12,*A14+,1
08d60: 09ec 9a80 0003            MOVI   39A80h,A12
08d90: 938e                      MOVE   A12,*A14+,1
08da0: 19cc                      MOVK   Eh,A12
08db0: 938e                      MOVE   A12,*A14+,1
08dc0: 0d5f 0000 0000            CALLA  0h
08df0: 830d                      MOVE   A8,*A13,1
08e00: 4d08                      MOVE   A8,A8
08e10: cb0f                      JRNE   8F10h
08e20: 07ec 9aa0 0003            MOVE   @39AA0h,A12
08e50: cb02                      JRNE   8E80h
08e60: 4508                      SUB    A8,A8
08e70: c012                      JR     8FA0h
08e80: 146c                      SUBK   3h,A12
08e90: ca05                      JREQ   8EF0h
08ea0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
08ed0: 144c                      SUBK   2h,A12
08ee0: cb02                      JRNE   8F10h
08ef0: 1828                      MOVK   1h,A8
08f00: c009                      JR     8FA0h
08f10: 0570                      SETF   10h,1,0
08f20: b5ac 0020                 MOVE   *A13(20h),A12,0
08f40: 142c                      DEC    A12
08f50: b18d 0020                 MOVE   A12,*A13(20h),0
08f70: 102c                      INC    A12
08f80: cbcd                      JRNE   8C60h
08f90: 1828                      MOVK   1h,A8
08fa0: b7ee 0060                 MOVE   *SP(60h),A14,1
08fc0: 09af 3000                 MMFM   SP,A12,A13
08fe0: 0962                      RETS   2h

_set_detector_k1:
08ff0: 098f 000c                 MMTM   SP,A12,A13
09010: 4dcd                      MOVE   A14,A13
09020: 0b0e 0080                 ADDI   80h,A14
09040: 1948                      MOVK   Ah,A8
09050: 0570                      SETF   10h,1,0
09060: b10d 0020                 MOVE   A8,*A13(20h),0
09080: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
090a0: 0d5f c690 0001            CALLA  1C690h
090d0: a7c8                      MOVE   -*A14,A8,1
090e0: b30d 0060                 MOVE   A8,*A13(60h),1
09100: a7c8                      MOVE   -*A14,A8,1
09110: b30d 0040                 MOVE   A8,*A13(40h),1
09130: 1968                      MOVK   Bh,A8
09140: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
09170: 19c8                      MOVK   Eh,A8
09180: 0788 cd00 0003            MOVE   A8,@3CD00h,1
091b0: 1908                      MOVK   8h,A8
091c0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
091f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
09210: 05e8 cd40 0003            MOVB   A8,@3CD40h
09240: d3ae 0040                 MOVE   *A13(40h),*A14+,1
09260: d3ae 0060                 MOVE   *A13(60h),*A14+,1
09280: 4508                      SUB    A8,A8
09290: 09ec 0000 4040            MOVI   40400000h,A12
092c0: 938e                      MOVE   A12,*A14+,1
092d0: 930e                      MOVE   A8,*A14+,1
092e0: 0d5f f890 0001            CALLA  1F890h
09310: 0d5f bde0 0001            CALLA  1BDE0h
09340: 0508                      SEXT   A8,0
09350: 0588 cd48 0003            MOVE   A8,@3CD48h,0
09380: b5ac 0020                 MOVE   *A13(20h),A12,0
093a0: 142c                      DEC    A12
093b0: b18d 0020                 MOVE   A12,*A13(20h),0
093d0: 102c                      INC    A12
093e0: ca33                      JREQ   9720h
093f0: a3cf                      MOVE   A14,-*SP,1
09400: 09ec cce0 0003            MOVI   3CCE0h,A12
09430: 938e                      MOVE   A12,*A14+,1
09440: 1868                      MOVK   3h,A8
09450: 930e                      MOVE   A8,*A14+,1
09460: 0d5f 0000 0000            CALLA  0h
09490: 830d                      MOVE   A8,*A13,1
094a0: 4d08                      MOVE   A8,A8
094b0: cb1e                      JRNE   96A0h
094c0: a3cf                      MOVE   A14,-*SP,1
094d0: 458c                      SUB    A12,A12
094e0: 938e                      MOVE   A12,*A14+,1
094f0: 09ec 9a80 0003            MOVI   39A80h,A12
09520: 938e                      MOVE   A12,*A14+,1
09530: 19cc                      MOVK   Eh,A12
09540: 938e                      MOVE   A12,*A14+,1
09550: 0d5f 0000 0000            CALLA  0h
09580: 830d                      MOVE   A8,*A13,1
09590: 4d08                      MOVE   A8,A8
095a0: cb0f                      JRNE   96A0h
095b0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
095e0: cb02                      JRNE   9610h
095f0: 4508                      SUB    A8,A8
09600: c012                      JR     9730h
09610: 146c                      SUBK   3h,A12
09620: ca05                      JREQ   9680h
09630: 07ec 9aa0 0003            MOVE   @39AA0h,A12
09660: 144c                      SUBK   2h,A12
09670: cb02                      JRNE   96A0h
09680: 1828                      MOVK   1h,A8
09690: c009                      JR     9730h
096a0: 0570                      SETF   10h,1,0
096b0: b5ac 0020                 MOVE   *A13(20h),A12,0
096d0: 142c                      DEC    A12
096e0: b18d 0020                 MOVE   A12,*A13(20h),0
09700: 102c                      INC    A12
09710: cbcd                      JRNE   93F0h
09720: 1828                      MOVK   1h,A8
09730: b7ee 0060                 MOVE   *SP(60h),A14,1
09750: 09af 3000                 MMFM   SP,A12,A13
09770: 0962                      RETS   2h

_set_detector_k2:
09780: 098f 000c                 MMTM   SP,A12,A13
097a0: 4dcd                      MOVE   A14,A13
097b0: 0b0e 0080                 ADDI   80h,A14
097d0: 1948                      MOVK   Ah,A8
097e0: 0570                      SETF   10h,1,0
097f0: b10d 0020                 MOVE   A8,*A13(20h),0
09810: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
09830: 0d5f c690 0001            CALLA  1C690h
09860: a7c8                      MOVE   -*A14,A8,1
09870: b30d 0060                 MOVE   A8,*A13(60h),1
09890: a7c8                      MOVE   -*A14,A8,1
098a0: b30d 0040                 MOVE   A8,*A13(40h),1
098c0: 1968                      MOVK   Bh,A8
098d0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
09900: 19c8                      MOVK   Eh,A8
09910: 0788 cd00 0003            MOVE   A8,@3CD00h,1
09940: 1928                      MOVK   9h,A8
09950: 0788 cd20 0003            MOVE   A8,@3CD20h,1
09980: afa8 ffe0                 MOVB   *A13(FFE0h),A8
099a0: 05e8 cd40 0003            MOVB   A8,@3CD40h
099d0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
099f0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
09a10: 4508                      SUB    A8,A8
09a20: 09ec 0000 4040            MOVI   40400000h,A12
09a50: 938e                      MOVE   A12,*A14+,1
09a60: 930e                      MOVE   A8,*A14+,1
09a70: 0d5f f890 0001            CALLA  1F890h
09aa0: 0d5f bde0 0001            CALLA  1BDE0h
09ad0: 0508                      SEXT   A8,0
09ae0: 0588 cd48 0003            MOVE   A8,@3CD48h,0
09b10: b5ac 0020                 MOVE   *A13(20h),A12,0
09b30: 142c                      DEC    A12
09b40: b18d 0020                 MOVE   A12,*A13(20h),0
09b60: 102c                      INC    A12
09b70: ca33                      JREQ   9EB0h
09b80: a3cf                      MOVE   A14,-*SP,1
09b90: 09ec cce0 0003            MOVI   3CCE0h,A12
09bc0: 938e                      MOVE   A12,*A14+,1
09bd0: 1868                      MOVK   3h,A8
09be0: 930e                      MOVE   A8,*A14+,1
09bf0: 0d5f 0000 0000            CALLA  0h
09c20: 830d                      MOVE   A8,*A13,1
09c30: 4d08                      MOVE   A8,A8
09c40: cb1e                      JRNE   9E30h
09c50: a3cf                      MOVE   A14,-*SP,1
09c60: 458c                      SUB    A12,A12
09c70: 938e                      MOVE   A12,*A14+,1
09c80: 09ec 9a80 0003            MOVI   39A80h,A12
09cb0: 938e                      MOVE   A12,*A14+,1
09cc0: 19cc                      MOVK   Eh,A12
09cd0: 938e                      MOVE   A12,*A14+,1
09ce0: 0d5f 0000 0000            CALLA  0h
09d10: 830d                      MOVE   A8,*A13,1
09d20: 4d08                      MOVE   A8,A8
09d30: cb0f                      JRNE   9E30h
09d40: 07ec 9aa0 0003            MOVE   @39AA0h,A12
09d70: cb02                      JRNE   9DA0h
09d80: 4508                      SUB    A8,A8
09d90: c012                      JR     9EC0h
09da0: 146c                      SUBK   3h,A12
09db0: ca05                      JREQ   9E10h
09dc0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
09df0: 144c                      SUBK   2h,A12
09e00: cb02                      JRNE   9E30h
09e10: 1828                      MOVK   1h,A8
09e20: c009                      JR     9EC0h
09e30: 0570                      SETF   10h,1,0
09e40: b5ac 0020                 MOVE   *A13(20h),A12,0
09e60: 142c                      DEC    A12
09e70: b18d 0020                 MOVE   A12,*A13(20h),0
09e90: 102c                      INC    A12
09ea0: cbcd                      JRNE   9B80h
09eb0: 1828                      MOVK   1h,A8
09ec0: b7ee 0060                 MOVE   *SP(60h),A14,1
09ee0: 09af 3000                 MMFM   SP,A12,A13
09f00: 0962                      RETS   2h

_set_mixing_reqd_tiga_request:
09f10: a3af                      MOVE   A13,-*SP,1
09f20: 4dcd                      MOVE   A14,A13
09f30: 0b0e 0040                 ADDI   40h,A14
09f50: 1948                      MOVK   Ah,A8
09f60: 0570                      SETF   10h,1,0
09f70: b10d 0020                 MOVE   A8,*A13(20h),0
09f90: 1928                      MOVK   9h,A8
09fa0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
09fd0: 19c8                      MOVK   Eh,A8
09fe0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0a010: 1968                      MOVK   Bh,A8
0a020: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0a050: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0a070: 05e8 cd40 0003            MOVB   A8,@3CD40h
0a0a0: b5a8 0020                 MOVE   *A13(20h),A8,0
0a0c0: 1428                      DEC    A8
0a0d0: b10d 0020                 MOVE   A8,*A13(20h),0
0a0f0: 1028                      INC    A8
0a100: ca33                      JREQ   A440h
0a110: a3cf                      MOVE   A14,-*SP,1
0a120: 09e8 cce0 0003            MOVI   3CCE0h,A8
0a150: 930e                      MOVE   A8,*A14+,1
0a160: 1868                      MOVK   3h,A8
0a170: 930e                      MOVE   A8,*A14+,1
0a180: 0d5f 0000 0000            CALLA  0h
0a1b0: 830d                      MOVE   A8,*A13,1
0a1c0: 4d08                      MOVE   A8,A8
0a1d0: cb1e                      JRNE   A3C0h
0a1e0: a3cf                      MOVE   A14,-*SP,1
0a1f0: 4508                      SUB    A8,A8
0a200: 930e                      MOVE   A8,*A14+,1
0a210: 09e8 9a80 0003            MOVI   39A80h,A8
0a240: 930e                      MOVE   A8,*A14+,1
0a250: 19c8                      MOVK   Eh,A8
0a260: 930e                      MOVE   A8,*A14+,1
0a270: 0d5f 0000 0000            CALLA  0h
0a2a0: 830d                      MOVE   A8,*A13,1
0a2b0: 4d08                      MOVE   A8,A8
0a2c0: cb0f                      JRNE   A3C0h
0a2d0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0a300: cb02                      JRNE   A330h
0a310: 4508                      SUB    A8,A8
0a320: c012                      JR     A450h
0a330: 1468                      SUBK   3h,A8
0a340: ca05                      JREQ   A3A0h
0a350: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0a380: 1448                      SUBK   2h,A8
0a390: cb02                      JRNE   A3C0h
0a3a0: 1828                      MOVK   1h,A8
0a3b0: c009                      JR     A450h
0a3c0: 0570                      SETF   10h,1,0
0a3d0: b5a8 0020                 MOVE   *A13(20h),A8,0
0a3f0: 1428                      DEC    A8
0a400: b10d 0020                 MOVE   A8,*A13(20h),0
0a420: 1028                      INC    A8
0a430: cbcd                      JRNE   A110h
0a440: 1828                      MOVK   1h,A8
0a450: b7ee 0040                 MOVE   *SP(40h),A14,1
0a470: 97ed                      MOVE   *SP+,A13,1
0a480: 0962                      RETS   2h

_set_detector_sub:
0a490: a3af                      MOVE   A13,-*SP,1
0a4a0: 4dcd                      MOVE   A14,A13
0a4b0: 0b0e 0040                 ADDI   40h,A14
0a4d0: 1948                      MOVK   Ah,A8
0a4e0: 0570                      SETF   10h,1,0
0a4f0: b10d 0020                 MOVE   A8,*A13(20h),0
0a510: 1968                      MOVK   Bh,A8
0a520: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0a550: 19c8                      MOVK   Eh,A8
0a560: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0a590: 1948                      MOVK   Ah,A8
0a5a0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0a5d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0a5f0: 05e8 cd40 0003            MOVB   A8,@3CD40h
0a620: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0a640: 0d5f c970 0001            CALLA  1C970h
0a670: 0508                      SEXT   A8,0
0a680: 0588 cd48 0003            MOVE   A8,@3CD48h,0
0a6b0: b5a8 0020                 MOVE   *A13(20h),A8,0
0a6d0: 1428                      DEC    A8
0a6e0: b10d 0020                 MOVE   A8,*A13(20h),0
0a700: 1028                      INC    A8
0a710: ca33                      JREQ   AA50h
0a720: a3cf                      MOVE   A14,-*SP,1
0a730: 09e8 cce0 0003            MOVI   3CCE0h,A8
0a760: 930e                      MOVE   A8,*A14+,1
0a770: 1868                      MOVK   3h,A8
0a780: 930e                      MOVE   A8,*A14+,1
0a790: 0d5f 0000 0000            CALLA  0h
0a7c0: 830d                      MOVE   A8,*A13,1
0a7d0: 4d08                      MOVE   A8,A8
0a7e0: cb1e                      JRNE   A9D0h
0a7f0: a3cf                      MOVE   A14,-*SP,1
0a800: 4508                      SUB    A8,A8
0a810: 930e                      MOVE   A8,*A14+,1
0a820: 09e8 9a80 0003            MOVI   39A80h,A8
0a850: 930e                      MOVE   A8,*A14+,1
0a860: 19c8                      MOVK   Eh,A8
0a870: 930e                      MOVE   A8,*A14+,1
0a880: 0d5f 0000 0000            CALLA  0h
0a8b0: 830d                      MOVE   A8,*A13,1
0a8c0: 4d08                      MOVE   A8,A8
0a8d0: cb0f                      JRNE   A9D0h
0a8e0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0a910: cb02                      JRNE   A940h
0a920: 4508                      SUB    A8,A8
0a930: c012                      JR     AA60h
0a940: 1468                      SUBK   3h,A8
0a950: ca05                      JREQ   A9B0h
0a960: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0a990: 1448                      SUBK   2h,A8
0a9a0: cb02                      JRNE   A9D0h
0a9b0: 1828                      MOVK   1h,A8
0a9c0: c009                      JR     AA60h
0a9d0: 0570                      SETF   10h,1,0
0a9e0: b5a8 0020                 MOVE   *A13(20h),A8,0
0aa00: 1428                      DEC    A8
0aa10: b10d 0020                 MOVE   A8,*A13(20h),0
0aa30: 1028                      INC    A8
0aa40: cbcd                      JRNE   A720h
0aa50: 1828                      MOVK   1h,A8
0aa60: b7ee 0040                 MOVE   *SP(40h),A14,1
0aa80: 97ed                      MOVE   *SP+,A13,1
0aa90: 0962                      RETS   2h

_frame_average_tiga_request:
0aaa0: 098f 000c                 MMTM   SP,A12,A13
0aac0: 4dcd                      MOVE   A14,A13
0aad0: 0b0e 0040                 ADDI   40h,A14
0aaf0: 1948                      MOVK   Ah,A8
0ab00: 0570                      SETF   10h,1,0
0ab10: b10d 0020                 MOVE   A8,*A13(20h),0
0ab30: 1a28                      MOVK   11h,A8
0ab40: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0ab70: 19c8                      MOVK   Eh,A8
0ab80: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0abb0: 09c8 003d                 MOVI   3Dh,A8
0abd0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0ac00: 0548                      SETF   8h,0,0
0ac10: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
0ac30: 05e8 cd40 0003            MOVB   A8,@3CD40h
0ac60: b5a8 ffa8                 MOVE   *A13(FFA8h),A8,0
0ac80: 05e8 cd48 0003            MOVB   A8,@3CD48h
0acb0: b5a8 ffb0                 MOVE   *A13(FFB0h),A8,0
0acd0: 05e8 cd50 0003            MOVB   A8,@3CD50h
0ad00: b5a8 ffb8                 MOVE   *A13(FFB8h),A8,0
0ad20: 05e8 cd58 0003            MOVB   A8,@3CD58h
0ad50: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0ad70: 05e8 cd60 0003            MOVB   A8,@3CD60h
0ada0: b5a8 ffc8                 MOVE   *A13(FFC8h),A8,0
0adc0: 05e8 cd68 0003            MOVB   A8,@3CD68h
0adf0: b5a8 ffd0                 MOVE   *A13(FFD0h),A8,0
0ae10: 05e8 cd70 0003            MOVB   A8,@3CD70h
0ae40: b5a8 ffd8                 MOVE   *A13(FFD8h),A8,0
0ae60: 05e8 cd78 0003            MOVB   A8,@3CD78h
0ae90: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0aeb0: 05e8 cd80 0003            MOVB   A8,@3CD80h
0aee0: 4508                      SUB    A8,A8
0aef0: 05e8 55a0 0002            MOVB   A8,@255A0h
0af20: 0570                      SETF   10h,1,0
0af30: b5a8 0020                 MOVE   *A13(20h),A8,0
0af50: 1428                      DEC    A8
0af60: b10d 0020                 MOVE   A8,*A13(20h),0
0af80: 1028                      INC    A8
0af90: ca3f                      JREQ   B390h
0afa0: a3cf                      MOVE   A14,-*SP,1
0afb0: 09e8 cce0 0003            MOVI   3CCE0h,A8
0afe0: 930e                      MOVE   A8,*A14+,1
0aff0: 1868                      MOVK   3h,A8
0b000: 930e                      MOVE   A8,*A14+,1
0b010: 0d5f 0000 0000            CALLA  0h
0b040: 830d                      MOVE   A8,*A13,1
0b050: 4d08                      MOVE   A8,A8
0b060: cb2a                      JRNE   B310h
0b070: a3cf                      MOVE   A14,-*SP,1
0b080: 4508                      SUB    A8,A8
0b090: 930e                      MOVE   A8,*A14+,1
0b0a0: 09e8 9a80 0003            MOVI   39A80h,A8
0b0d0: 930e                      MOVE   A8,*A14+,1
0b0e0: 19c8                      MOVK   Eh,A8
0b0f0: 930e                      MOVE   A8,*A14+,1
0b100: 0d5f 0000 0000            CALLA  0h
0b130: 830d                      MOVE   A8,*A13,1
0b140: 4d08                      MOVE   A8,A8
0b150: cb1b                      JRNE   B310h
0b160: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0b190: cb0e                      JRNE   B280h
0b1a0: 1848                      MOVK   2h,A8
0b1b0: 05e8 5300 0002            MOVB   A8,@25300h
0b1e0: 1828                      MOVK   1h,A8
0b1f0: 07ac 5580 0002            MOVE   @25580h,A12,1
0b220: 5588                      OR     A12,A8
0b230: 0788 5580 0002            MOVE   A8,@25580h,1
0b260: 4508                      SUB    A8,A8
0b270: c012                      JR     B3A0h
0b280: 1468                      SUBK   3h,A8
0b290: ca05                      JREQ   B2F0h
0b2a0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0b2d0: 144c                      SUBK   2h,A12
0b2e0: cb02                      JRNE   B310h
0b2f0: 1828                      MOVK   1h,A8
0b300: c009                      JR     B3A0h
0b310: 0570                      SETF   10h,1,0
0b320: b5ac 0020                 MOVE   *A13(20h),A12,0
0b340: 142c                      DEC    A12
0b350: b18d 0020                 MOVE   A12,*A13(20h),0
0b370: 102c                      INC    A12
0b380: cbc1                      JRNE   AFA0h
0b390: 1828                      MOVK   1h,A8
0b3a0: b7ee 0060                 MOVE   *SP(60h),A14,1
0b3c0: 09af 3000                 MMFM   SP,A12,A13
0b3e0: 0962                      RETS   2h

_frame_integration_tiga_request:
0b3f0: 098f 000c                 MMTM   SP,A12,A13
0b410: 4dcd                      MOVE   A14,A13
0b420: 0b0e 0040                 ADDI   40h,A14
0b440: 1948                      MOVK   Ah,A8
0b450: 0570                      SETF   10h,1,0
0b460: b10d 0020                 MOVE   A8,*A13(20h),0
0b480: 1968                      MOVK   Bh,A8
0b490: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0b4c0: 19c8                      MOVK   Eh,A8
0b4d0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0b500: 19e8                      MOVK   Fh,A8
0b510: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0b540: 1848                      MOVK   2h,A8
0b550: 05e8 cd40 0003            MOVB   A8,@3CD40h
0b580: 0548                      SETF   8h,0,0
0b590: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0b5b0: 0570                      SETF   10h,1,0
0b5c0: 0588 cd48 0003            MOVE   A8,@3CD48h,0
0b5f0: 4508                      SUB    A8,A8
0b600: 05e8 55a0 0002            MOVB   A8,@255A0h
0b630: b5a8 0020                 MOVE   *A13(20h),A8,0
0b650: 1428                      DEC    A8
0b660: b10d 0020                 MOVE   A8,*A13(20h),0
0b680: 1028                      INC    A8
0b690: ca57                      JREQ   BC10h
0b6a0: a3cf                      MOVE   A14,-*SP,1
0b6b0: 09e8 cce0 0003            MOVI   3CCE0h,A8
0b6e0: 930e                      MOVE   A8,*A14+,1
0b6f0: 1868                      MOVK   3h,A8
0b700: 930e                      MOVE   A8,*A14+,1
0b710: 0d5f 0000 0000            CALLA  0h
0b740: 830d                      MOVE   A8,*A13,1
0b750: 4d08                      MOVE   A8,A8
0b760: cb42                      JRNE   BB90h
0b770: 4508                      SUB    A8,A8
0b780: 05e8 5300 0002            MOVB   A8,@25300h
0b7b0: 1828                      MOVK   1h,A8
0b7c0: 07ac 5580 0002            MOVE   @25580h,A12,1
0b7f0: 5588                      OR     A12,A8
0b800: 0788 5580 0002            MOVE   A8,@25580h,1
0b830: a3cf                      MOVE   A14,-*SP,1
0b840: 458c                      SUB    A12,A12
0b850: 938e                      MOVE   A12,*A14+,1
0b860: 09ec 9a80 0003            MOVI   39A80h,A12
0b890: 938e                      MOVE   A12,*A14+,1
0b8a0: 19cc                      MOVK   Eh,A12
0b8b0: 938e                      MOVE   A12,*A14+,1
0b8c0: 0d5f 0000 0000            CALLA  0h
0b8f0: 830d                      MOVE   A8,*A13,1
0b900: 4d08                      MOVE   A8,A8
0b910: cb27                      JRNE   BB90h
0b920: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0b950: cb0e                      JRNE   BA40h
0b960: 1888                      MOVK   4h,A8
0b970: 05e8 5300 0002            MOVB   A8,@25300h
0b9a0: 182c                      MOVK   1h,A12
0b9b0: 07a8 5580 0002            MOVE   @25580h,A8,1
0b9e0: 550c                      OR     A8,A12
0b9f0: 078c 5580 0002            MOVE   A12,@25580h,1
0ba20: 4508                      SUB    A8,A8
0ba30: c01e                      JR     BC20h
0ba40: 146c                      SUBK   3h,A12
0ba50: ca05                      JREQ   BAB0h
0ba60: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0ba90: 144c                      SUBK   2h,A12
0baa0: cb02                      JRNE   BAD0h
0bab0: 1828                      MOVK   1h,A8
0bac0: c015                      JR     BC20h
0bad0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0bb00: 148c                      SUBK   4h,A12
0bb10: cb07                      JRNE   BB90h
0bb20: 0548                      SETF   8h,0,0
0bb30: 05ac 55a0 0002            MOVE   @255A0h,A12,0
0bb60: 384c                      DSJS   A12,BB90h
0bb70: 4508                      SUB    A8,A8
0bb80: c009                      JR     BC20h
0bb90: 0570                      SETF   10h,1,0
0bba0: b5ac 0020                 MOVE   *A13(20h),A12,0
0bbc0: 142c                      DEC    A12
0bbd0: b18d 0020                 MOVE   A12,*A13(20h),0
0bbf0: 102c                      INC    A12
0bc00: cba9                      JRNE   B6A0h
0bc10: 1828                      MOVK   1h,A8
0bc20: b7ee 0060                 MOVE   *SP(60h),A14,1
0bc40: 09af 3000                 MMFM   SP,A12,A13
0bc60: 0962                      RETS   2h

_line_integration_tiga_request:
0bc70: 098f 000c                 MMTM   SP,A12,A13
0bc90: 4dcd                      MOVE   A14,A13
0bca0: 0b0e 0040                 ADDI   40h,A14
0bcc0: 1948                      MOVK   Ah,A8
0bcd0: 0570                      SETF   10h,1,0
0bce0: b10d 0020                 MOVE   A8,*A13(20h),0
0bd00: 1968                      MOVK   Bh,A8
0bd10: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0bd40: 19c8                      MOVK   Eh,A8
0bd50: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0bd80: 19e8                      MOVK   Fh,A8
0bd90: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0bdc0: 1828                      MOVK   1h,A8
0bdd0: 05e8 cd40 0003            MOVB   A8,@3CD40h
0be00: 0548                      SETF   8h,0,0
0be10: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0be30: 0570                      SETF   10h,1,0
0be40: 0588 cd48 0003            MOVE   A8,@3CD48h,0
0be70: 4508                      SUB    A8,A8
0be80: 05e8 55a0 0002            MOVB   A8,@255A0h
0beb0: b5a8 0020                 MOVE   *A13(20h),A8,0
0bed0: 1428                      DEC    A8
0bee0: b10d 0020                 MOVE   A8,*A13(20h),0
0bf00: 1028                      INC    A8
0bf10: ca56                      JREQ   C480h
0bf20: a3cf                      MOVE   A14,-*SP,1
0bf30: 09e8 cce0 0003            MOVI   3CCE0h,A8
0bf60: 930e                      MOVE   A8,*A14+,1
0bf70: 1868                      MOVK   3h,A8
0bf80: 930e                      MOVE   A8,*A14+,1
0bf90: 0d5f 0000 0000            CALLA  0h
0bfc0: 830d                      MOVE   A8,*A13,1
0bfd0: 4d08                      MOVE   A8,A8
0bfe0: cb41                      JRNE   C400h
0bff0: 1828                      MOVK   1h,A8
0c000: 05e8 5300 0002            MOVB   A8,@25300h
0c030: 07ac 5580 0002            MOVE   @25580h,A12,1
0c060: 550c                      OR     A8,A12
0c070: 078c 5580 0002            MOVE   A12,@25580h,1
0c0a0: a3cf                      MOVE   A14,-*SP,1
0c0b0: 458c                      SUB    A12,A12
0c0c0: 938e                      MOVE   A12,*A14+,1
0c0d0: 09ec 9a80 0003            MOVI   39A80h,A12
0c100: 938e                      MOVE   A12,*A14+,1
0c110: 19cc                      MOVK   Eh,A12
0c120: 938e                      MOVE   A12,*A14+,1
0c130: 0d5f 0000 0000            CALLA  0h
0c160: 830d                      MOVE   A8,*A13,1
0c170: 4d08                      MOVE   A8,A8
0c180: cb27                      JRNE   C400h
0c190: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0c1c0: cb0e                      JRNE   C2B0h
0c1d0: 1868                      MOVK   3h,A8
0c1e0: 05e8 5300 0002            MOVB   A8,@25300h
0c210: 182c                      MOVK   1h,A12
0c220: 07a8 5580 0002            MOVE   @25580h,A8,1
0c250: 550c                      OR     A8,A12
0c260: 078c 5580 0002            MOVE   A12,@25580h,1
0c290: 4508                      SUB    A8,A8
0c2a0: c01e                      JR     C490h
0c2b0: 146c                      SUBK   3h,A12
0c2c0: ca05                      JREQ   C320h
0c2d0: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0c300: 144c                      SUBK   2h,A12
0c310: cb02                      JRNE   C340h
0c320: 1828                      MOVK   1h,A8
0c330: c015                      JR     C490h
0c340: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0c370: 148c                      SUBK   4h,A12
0c380: cb07                      JRNE   C400h
0c390: 0548                      SETF   8h,0,0
0c3a0: 05ac 55a0 0002            MOVE   @255A0h,A12,0
0c3d0: 384c                      DSJS   A12,C400h
0c3e0: 4508                      SUB    A8,A8
0c3f0: c009                      JR     C490h
0c400: 0570                      SETF   10h,1,0
0c410: b5ac 0020                 MOVE   *A13(20h),A12,0
0c430: 142c                      DEC    A12
0c440: b18d 0020                 MOVE   A12,*A13(20h),0
0c460: 102c                      INC    A12
0c470: cbaa                      JRNE   BF20h
0c480: 1828                      MOVK   1h,A8
0c490: b7ee 0060                 MOVE   *SP(60h),A14,1
0c4b0: 09af 3000                 MMFM   SP,A12,A13
0c4d0: 0962                      RETS   2h

_line_average_tiga_request:
0c4e0: 098f 000c                 MMTM   SP,A12,A13
0c500: 4dcd                      MOVE   A14,A13
0c510: 0b0e 0040                 ADDI   40h,A14
0c530: 1948                      MOVK   Ah,A8
0c540: 0570                      SETF   10h,1,0
0c550: b10d 0020                 MOVE   A8,*A13(20h),0
0c570: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0c5a0: 19c8                      MOVK   Eh,A8
0c5b0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0c5e0: 13a8                      ADDK   1Dh,A8
0c5f0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0c620: 0548                      SETF   8h,0,0
0c630: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0c650: 05e8 cd40 0003            MOVB   A8,@3CD40h
0c680: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0c6a0: 05e8 cd48 0003            MOVB   A8,@3CD48h
0c6d0: 4508                      SUB    A8,A8
0c6e0: 05e8 55a0 0002            MOVB   A8,@255A0h
0c710: 0570                      SETF   10h,1,0
0c720: b5a8 0020                 MOVE   *A13(20h),A8,0
0c740: 1428                      DEC    A8
0c750: b10d 0020                 MOVE   A8,*A13(20h),0
0c770: 1028                      INC    A8
0c780: ca4b                      JREQ   CC40h
0c790: a3cf                      MOVE   A14,-*SP,1
0c7a0: 09e8 cce0 0003            MOVI   3CCE0h,A8
0c7d0: 930e                      MOVE   A8,*A14+,1
0c7e0: 1868                      MOVK   3h,A8
0c7f0: 930e                      MOVE   A8,*A14+,1
0c800: 0d5f 0000 0000            CALLA  0h
0c830: 830d                      MOVE   A8,*A13,1
0c840: 4d08                      MOVE   A8,A8
0c850: cb36                      JRNE   CBC0h
0c860: a3cf                      MOVE   A14,-*SP,1
0c870: 4508                      SUB    A8,A8
0c880: 930e                      MOVE   A8,*A14+,1
0c890: 09e8 9a80 0003            MOVI   39A80h,A8
0c8c0: 930e                      MOVE   A8,*A14+,1
0c8d0: 19c8                      MOVK   Eh,A8
0c8e0: 930e                      MOVE   A8,*A14+,1
0c8f0: 0d5f 0000 0000            CALLA  0h
0c920: 830d                      MOVE   A8,*A13,1
0c930: 4d08                      MOVE   A8,A8
0c940: cb27                      JRNE   CBC0h
0c950: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0c980: cb0e                      JRNE   CA70h
0c990: 18a8                      MOVK   5h,A8
0c9a0: 05e8 5300 0002            MOVB   A8,@25300h
0c9d0: 1828                      MOVK   1h,A8
0c9e0: 07ac 5580 0002            MOVE   @25580h,A12,1
0ca10: 5588                      OR     A12,A8
0ca20: 0788 5580 0002            MOVE   A8,@25580h,1
0ca50: 4508                      SUB    A8,A8
0ca60: c01e                      JR     CC50h
0ca70: 1468                      SUBK   3h,A8
0ca80: ca05                      JREQ   CAE0h
0ca90: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0cac0: 144c                      SUBK   2h,A12
0cad0: cb02                      JRNE   CB00h
0cae0: 1828                      MOVK   1h,A8
0caf0: c015                      JR     CC50h
0cb00: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0cb30: 148c                      SUBK   4h,A12
0cb40: cb07                      JRNE   CBC0h
0cb50: 0548                      SETF   8h,0,0
0cb60: 05ac 55a0 0002            MOVE   @255A0h,A12,0
0cb90: 384c                      DSJS   A12,CBC0h
0cba0: 4508                      SUB    A8,A8
0cbb0: c009                      JR     CC50h
0cbc0: 0570                      SETF   10h,1,0
0cbd0: b5ac 0020                 MOVE   *A13(20h),A12,0
0cbf0: 142c                      DEC    A12
0cc00: b18d 0020                 MOVE   A12,*A13(20h),0
0cc20: 102c                      INC    A12
0cc30: cbb5                      JRNE   C790h
0cc40: 1828                      MOVK   1h,A8
0cc50: b7ee 0060                 MOVE   *SP(60h),A14,1
0cc70: 09af 3000                 MMFM   SP,A12,A13
0cc90: 0962                      RETS   2h

_set_mix_window_tiga_request:
0cca0: a3af                      MOVE   A13,-*SP,1
0ccb0: 4dcd                      MOVE   A14,A13
0ccc0: 0b0e 0040                 ADDI   40h,A14
0cce0: 1948                      MOVK   Ah,A8
0ccf0: 0570                      SETF   10h,1,0
0cd00: b10d 0020                 MOVE   A8,*A13(20h),0
0cd20: 1928                      MOVK   9h,A8
0cd30: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0cd60: 19c8                      MOVK   Eh,A8
0cd70: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0cda0: 1988                      MOVK   Ch,A8
0cdb0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0cde0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0ce00: 05e8 cd40 0003            MOVB   A8,@3CD40h
0ce30: b5a8 0020                 MOVE   *A13(20h),A8,0
0ce50: 1428                      DEC    A8
0ce60: b10d 0020                 MOVE   A8,*A13(20h),0
0ce80: 1028                      INC    A8
0ce90: ca33                      JREQ   D1D0h
0cea0: a3cf                      MOVE   A14,-*SP,1
0ceb0: 09e8 cce0 0003            MOVI   3CCE0h,A8
0cee0: 930e                      MOVE   A8,*A14+,1
0cef0: 1868                      MOVK   3h,A8
0cf00: 930e                      MOVE   A8,*A14+,1
0cf10: 0d5f 0000 0000            CALLA  0h
0cf40: 830d                      MOVE   A8,*A13,1
0cf50: 4d08                      MOVE   A8,A8
0cf60: cb1e                      JRNE   D150h
0cf70: a3cf                      MOVE   A14,-*SP,1
0cf80: 4508                      SUB    A8,A8
0cf90: 930e                      MOVE   A8,*A14+,1
0cfa0: 09e8 9a80 0003            MOVI   39A80h,A8
0cfd0: 930e                      MOVE   A8,*A14+,1
0cfe0: 19c8                      MOVK   Eh,A8
0cff0: 930e                      MOVE   A8,*A14+,1
0d000: 0d5f 0000 0000            CALLA  0h
0d030: 830d                      MOVE   A8,*A13,1
0d040: 4d08                      MOVE   A8,A8
0d050: cb0f                      JRNE   D150h
0d060: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0d090: cb02                      JRNE   D0C0h
0d0a0: 4508                      SUB    A8,A8
0d0b0: c012                      JR     D1E0h
0d0c0: 1468                      SUBK   3h,A8
0d0d0: ca05                      JREQ   D130h
0d0e0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0d110: 1448                      SUBK   2h,A8
0d120: cb02                      JRNE   D150h
0d130: 1828                      MOVK   1h,A8
0d140: c009                      JR     D1E0h
0d150: 0570                      SETF   10h,1,0
0d160: b5a8 0020                 MOVE   *A13(20h),A8,0
0d180: 1428                      DEC    A8
0d190: b10d 0020                 MOVE   A8,*A13(20h),0
0d1b0: 1028                      INC    A8
0d1c0: cbcd                      JRNE   CEA0h
0d1d0: 1828                      MOVK   1h,A8
0d1e0: b7ee 0040                 MOVE   *SP(40h),A14,1
0d200: 97ed                      MOVE   *SP+,A13,1
0d210: 0962                      RETS   2h

_control_freeze_tiga_request:
0d220: 098f 000c                 MMTM   SP,A12,A13
0d240: 4dcd                      MOVE   A14,A13
0d250: 0b0e 0040                 ADDI   40h,A14
0d270: 1948                      MOVK   Ah,A8
0d280: 0570                      SETF   10h,1,0
0d290: b10d 0020                 MOVE   A8,*A13(20h),0
0d2b0: 1a28                      MOVK   11h,A8
0d2c0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0d2f0: 19c8                      MOVK   Eh,A8
0d300: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0d330: 19a8                      MOVK   Dh,A8
0d340: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0d370: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0d390: 05e8 cd40 0003            MOVB   A8,@3CD40h
0d3c0: afa8 ffa8                 MOVB   *A13(FFA8h),A8
0d3e0: 05e8 cd48 0003            MOVB   A8,@3CD48h
0d410: afa8 ffb0                 MOVB   *A13(FFB0h),A8
0d430: 05e8 cd50 0003            MOVB   A8,@3CD50h
0d460: afa8 ffb8                 MOVB   *A13(FFB8h),A8
0d480: 05e8 cd58 0003            MOVB   A8,@3CD58h
0d4b0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
0d4d0: 05e8 cd60 0003            MOVB   A8,@3CD60h
0d500: afa8 ffc8                 MOVB   *A13(FFC8h),A8
0d520: 05e8 cd68 0003            MOVB   A8,@3CD68h
0d550: afa8 ffd0                 MOVB   *A13(FFD0h),A8
0d570: 05e8 cd70 0003            MOVB   A8,@3CD70h
0d5a0: afa8 ffd8                 MOVB   *A13(FFD8h),A8
0d5c0: 05e8 cd78 0003            MOVB   A8,@3CD78h
0d5f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0d610: 05e8 cd80 0003            MOVB   A8,@3CD80h
0d640: 4508                      SUB    A8,A8
0d650: 05e8 55b0 0002            MOVB   A8,@255B0h
0d680: b5a8 0020                 MOVE   *A13(20h),A8,0
0d6a0: 1428                      DEC    A8
0d6b0: b10d 0020                 MOVE   A8,*A13(20h),0
0d6d0: 1028                      INC    A8
0d6e0: ca00 00a9                 JREQ   E190h
0d700: a3cf                      MOVE   A14,-*SP,1
0d710: 09e8 cce0 0003            MOVI   3CCE0h,A8
0d740: 930e                      MOVE   A8,*A14+,1
0d750: 1868                      MOVK   3h,A8
0d760: 930e                      MOVE   A8,*A14+,1
0d770: 0d5f 0000 0000            CALLA  0h
0d7a0: 830d                      MOVE   A8,*A13,1
0d7b0: 4d08                      MOVE   A8,A8
0d7c0: cb00 0092                 JRNE   E100h
0d7e0: 1828                      MOVK   1h,A8
0d7f0: 05e8 5320 0002            MOVB   A8,@25320h
0d820: 1888                      MOVK   4h,A8
0d830: 07ac 5580 0002            MOVE   @25580h,A12,1
0d860: 5588                      OR     A12,A8
0d870: 0788 5580 0002            MOVE   A8,@25580h,1
0d8a0: a3cf                      MOVE   A14,-*SP,1
0d8b0: 458c                      SUB    A12,A12
0d8c0: 938e                      MOVE   A12,*A14+,1
0d8d0: 09ec 9a80 0003            MOVI   39A80h,A12
0d900: 938e                      MOVE   A12,*A14+,1
0d910: 19cc                      MOVK   Eh,A12
0d920: 938e                      MOVE   A12,*A14+,1
0d930: 0d5f 0000 0000            CALLA  0h
0d960: 830d                      MOVE   A8,*A13,1
0d970: 4d08                      MOVE   A8,A8
0d980: cb77                      JRNE   E100h
0d990: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0d9c0: cb56                      JRNE   DF30h
0d9d0: 4508                      SUB    A8,A8
0d9e0: 05e8 5320 0002            MOVB   A8,@25320h
0da10: afac ffa8                 MOVB   *A13(FFA8h),A12
0da30: 144c                      SUBK   2h,A12
0da40: ca05                      JREQ   DAA0h
0da50: afac ffa8                 MOVB   *A13(FFA8h),A12
0da70: 05ec 5328 0002            MOVB   A12,@25328h
0daa0: afac ffb0                 MOVB   *A13(FFB0h),A12
0dac0: 144c                      SUBK   2h,A12
0dad0: ca05                      JREQ   DB30h
0dae0: afac ffb0                 MOVB   *A13(FFB0h),A12
0db00: 05ec 5330 0002            MOVB   A12,@25330h
0db30: afac ffb8                 MOVB   *A13(FFB8h),A12
0db50: 144c                      SUBK   2h,A12
0db60: ca05                      JREQ   DBC0h
0db70: afac ffb8                 MOVB   *A13(FFB8h),A12
0db90: 05ec 5338 0002            MOVB   A12,@25338h
0dbc0: afac ffc0                 MOVB   *A13(FFC0h),A12
0dbe0: 144c                      SUBK   2h,A12
0dbf0: ca05                      JREQ   DC50h
0dc00: afac ffc0                 MOVB   *A13(FFC0h),A12
0dc20: 05ec 5340 0002            MOVB   A12,@25340h
0dc50: afac ffc8                 MOVB   *A13(FFC8h),A12
0dc70: 144c                      SUBK   2h,A12
0dc80: ca05                      JREQ   DCE0h
0dc90: afac ffc8                 MOVB   *A13(FFC8h),A12
0dcb0: 05ec 5348 0002            MOVB   A12,@25348h
0dce0: afac ffd0                 MOVB   *A13(FFD0h),A12
0dd00: 144c                      SUBK   2h,A12
0dd10: ca05                      JREQ   DD70h
0dd20: afac ffd0                 MOVB   *A13(FFD0h),A12
0dd40: 05ec 5350 0002            MOVB   A12,@25350h
0dd70: afac ffd8                 MOVB   *A13(FFD8h),A12
0dd90: 144c                      SUBK   2h,A12
0dda0: ca05                      JREQ   DE00h
0ddb0: afac ffd8                 MOVB   *A13(FFD8h),A12
0ddd0: 05ec 5358 0002            MOVB   A12,@25358h
0de00: afac ffe0                 MOVB   *A13(FFE0h),A12
0de20: 144c                      SUBK   2h,A12
0de30: ca05                      JREQ   DE90h
0de40: afac ffe0                 MOVB   *A13(FFE0h),A12
0de60: 05ec 5360 0002            MOVB   A12,@25360h
0de90: 188c                      MOVK   4h,A12
0dea0: 07a8 5580 0002            MOVE   @25580h,A8,1
0ded0: 550c                      OR     A8,A12
0dee0: 078c 5580 0002            MOVE   A12,@25580h,1
0df10: 4508                      SUB    A8,A8
0df20: c027                      JR     E1A0h
0df30: 146c                      SUBK   3h,A12
0df40: ca05                      JREQ   DFA0h
0df50: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0df80: 144c                      SUBK   2h,A12
0df90: cb06                      JRNE   E000h
0dfa0: 458c                      SUB    A12,A12
0dfb0: 05ec 5320 0002            MOVB   A12,@25320h
0dfe0: 1828                      MOVK   1h,A8
0dff0: c01a                      JR     E1A0h
0e000: 07ec 9aa0 0003            MOVE   @39AA0h,A12
0e030: 148c                      SUBK   4h,A12
0e040: cb0b                      JRNE   E100h
0e050: 0548                      SETF   8h,0,0
0e060: 05ac 55b0 0002            MOVE   @255B0h,A12,0
0e090: 38cc                      DSJS   A12,E100h
0e0a0: 458c                      SUB    A12,A12
0e0b0: 05ec 5320 0002            MOVB   A12,@25320h
0e0e0: 4d88                      MOVE   A12,A8
0e0f0: c00a                      JR     E1A0h
0e100: 0570                      SETF   10h,1,0
0e110: b5ac 0020                 MOVE   *A13(20h),A12,0
0e130: 142c                      DEC    A12
0e140: b18d 0020                 MOVE   A12,*A13(20h),0
0e160: 102c                      INC    A12
0e170: cb00 ff57                 JRNE   D700h
0e190: 1828                      MOVK   1h,A8
0e1a0: b7ee 0060                 MOVE   *SP(60h),A14,1
0e1c0: 09af 3000                 MMFM   SP,A12,A13
0e1e0: 0962                      RETS   2h

_save_lut:
0e1f0: 098f 000c                 MMTM   SP,A12,A13
0e210: 4dcd                      MOVE   A14,A13
0e220: 100e                      ADDK   20h,A14
0e230: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0e250: c411                      JRLT   E370h
0e260: 14e8                      SUBK   7h,A8
0e270: c70f                      JRGT   E370h
0e280: a3cf                      MOVE   A14,-*SP,1
0e290: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0e2b0: 930e                      MOVE   A8,*A14+,1
0e2c0: 0570                      SETF   10h,1,0
0e2d0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0e2f0: 930e                      MOVE   A8,*A14+,1
0e300: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0e320: 930e                      MOVE   A8,*A14+,1
0e330: 0d5f 5c50 0000            CALLA  5C50h
0e360: c029                      JR     E600h
0e370: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0e390: 1508                      SUBK   8h,A8
0e3a0: ad0d ffa0                 MOVB   A8,*A13(FFA0h)
0e3c0: 0570                      SETF   10h,1,0
0e3d0: b9ad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),0
0e400: 85a8                      MOVE   *A13,A8,0
0e410: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
0e430: 4988                      CMP    A12,A8
0e440: c51a                      JRGE   E5F0h
0e450: 85ac                      MOVE   *A13,A12,0
0e460: c411                      JRLT   E580h
0e470: 0b4c ff00                 CMPI   FFh,A12
0e490: c70e                      JRGT   E580h
0e4a0: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0e4c0: 2568                      SLL    Bh,A8
0e4d0: 0b28 9b00 0003            ADDI   39B00h,A8
0e500: 246c                      SLL    3h,A12
0e510: 4188                      ADD    A12,A8
0e520: 85ac                      MOVE   *A13,A12,0
0e530: 246c                      SLL    3h,A12
0e540: 0b2c 6f00 0002            ADDI   26F00h,A12
0e570: 9d88                      MOVB   *A12,*A8
0e580: 85ac                      MOVE   *A13,A12,0
0e590: 102c                      INC    A12
0e5a0: 818d                      MOVE   A12,*A13,0
0e5b0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0e5d0: 490c                      CMP    A8,A12
0e5e0: c4e6                      JRLT   E450h
0e5f0: 4508                      SUB    A8,A8
0e600: b7ee 0060                 MOVE   *SP(60h),A14,1
0e620: 09af 3000                 MMFM   SP,A12,A13
0e640: 0962                      RETS   2h

_define_window_tiga_request:
0e650: 098f 0014                 MMTM   SP,A11,A13
0e670: 4dcd                      MOVE   A14,A13
0e680: 0b0e 00c0                 ADDI   C0h,A14
0e6a0: 4508                      SUB    A8,A8
0e6b0: ad0d 00a0                 MOVB   A8,*A13(A0h)
0e6d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0e6f0: cb05                      JRNE   E750h
0e700: 09e8 0000 3000            MOVI   30000000h,A8
0e730: 830d                      MOVE   A8,*A13,1
0e740: c004                      JR     E790h
0e750: 09e8 0000 5000            MOVI   50000000h,A8
0e780: 830d                      MOVE   A8,*A13,1
0e790: 09c8 0400                 MOVI   400h,A8
0e7b0: b30d 0060                 MOVE   A8,*A13(60h),1
0e7d0: 2468                      SLL    3h,A8
0e7e0: b30d 0060                 MOVE   A8,*A13(60h),1
0e800: 0570                      SETF   10h,1,0
0e810: b5ab ffb0                 MOVE   *A13(FFB0h),A11,0
0e830: 5f0b                      MPYU   A8,A11
0e840: 87a8                      MOVE   *A13,A8,1
0e850: 410b                      ADD    A8,A11
0e860: 836d                      MOVE   A11,*A13,1
0e870: b36d 0020                 MOVE   A11,*A13(20h),1
0e890: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
0e8b0: 186b                      MOVK   3h,A11
0e8c0: 510b                      AND    A8,A11
0e8d0: 2fc8                      SRL    2h,A8
0e8e0: 24a8                      SLL    5h,A8
0e8f0: 4168                      ADD    A11,A8
0e900: 87ab                      MOVE   *A13,A11,1
0e910: 4168                      ADD    A11,A8
0e920: 830d                      MOVE   A8,*A13,1
0e930: b5ab ffc0                 MOVE   *A13(FFC0h),A11,0
0e950: 1868                      MOVK   3h,A8
0e960: 5168                      AND    A11,A8
0e970: 2fcb                      SRL    2h,A11
0e980: 24ab                      SLL    5h,A11
0e990: 410b                      ADD    A8,A11
0e9a0: b7a8 0020                 MOVE   *A13(20h),A8,1
0e9c0: 410b                      ADD    A8,A11
0e9d0: b36d 0020                 MOVE   A11,*A13(20h),1
0e9f0: b5a8 ffd0                 MOVE   *A13(FFD0h),A8,0
0ea10: b5ab ffb0                 MOVE   *A13(FFB0h),A11,0
0ea30: 4568                      SUB    A11,A8
0ea40: 2608                      SLL    10h,A8
0ea50: b30d 0040                 MOVE   A8,*A13(40h),1
0ea70: b7ab 0020                 MOVE   *A13(20h),A11,1
0ea90: 87a8                      MOVE   *A13,A8,1
0eaa0: 450b                      SUB    A8,A11
0eab0: b7a8 0040                 MOVE   *A13(40h),A8,1
0ead0: 410b                      ADD    A8,A11
0eae0: b36d 0040                 MOVE   A11,*A13(40h),1
0eb00: afa8 ffe8                 MOVB   *A13(FFE8h),A8
0eb20: 1fe8                      BTST   0h,A8
0eb30: ca05                      JREQ   EB90h
0eb40: 09cb ffff                 MOVI   FFFFh,A11
0eb60: b36d 0080                 MOVE   A11,*A13(80h),1
0eb80: c003                      JR     EBC0h
0eb90: 456b                      SUB    A11,A11
0eba0: b36d 0080                 MOVE   A11,*A13(80h),1
0ebc0: a3cf                      MOVE   A14,-*SP,1
0ebd0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0ebf0: 936e                      MOVE   A11,*A14+,1
0ec00: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0ec20: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0ec40: 0d5f b590 0001            CALLA  1B590h
0ec70: afa8 00a0                 MOVB   *A13(A0h),A8
0ec90: b7ee 0060                 MOVE   *SP(60h),A14,1
0ecb0: 09af 2800                 MMFM   SP,A11,A13
0ecd0: 0962                      RETS   2h

_window_scan_enable:
0ece0: a3af                      MOVE   A13,-*SP,1
0ecf0: 4dcd                      MOVE   A14,A13
0ed00: 0b0e 0040                 ADDI   40h,A14
0ed20: 1948                      MOVK   Ah,A8
0ed30: 0570                      SETF   10h,1,0
0ed40: b10d 0020                 MOVE   A8,*A13(20h),0
0ed60: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0ed90: 19c8                      MOVK   Eh,A8
0eda0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0edd0: 1b48                      MOVK   1Ah,A8
0ede0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0ee10: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0ee30: 0588 cd40 0003            MOVE   A8,@3CD40h,0
0ee60: b5a8 0020                 MOVE   *A13(20h),A8,0
0ee80: 1428                      DEC    A8
0ee90: b10d 0020                 MOVE   A8,*A13(20h),0
0eeb0: 1028                      INC    A8
0eec0: ca33                      JREQ   F200h
0eed0: a3cf                      MOVE   A14,-*SP,1
0eee0: 09e8 cce0 0003            MOVI   3CCE0h,A8
0ef10: 930e                      MOVE   A8,*A14+,1
0ef20: 1868                      MOVK   3h,A8
0ef30: 930e                      MOVE   A8,*A14+,1
0ef40: 0d5f 0000 0000            CALLA  0h
0ef70: 830d                      MOVE   A8,*A13,1
0ef80: 4d08                      MOVE   A8,A8
0ef90: cb1e                      JRNE   F180h
0efa0: a3cf                      MOVE   A14,-*SP,1
0efb0: 4508                      SUB    A8,A8
0efc0: 930e                      MOVE   A8,*A14+,1
0efd0: 09e8 9a80 0003            MOVI   39A80h,A8
0f000: 930e                      MOVE   A8,*A14+,1
0f010: 19c8                      MOVK   Eh,A8
0f020: 930e                      MOVE   A8,*A14+,1
0f030: 0d5f 0000 0000            CALLA  0h
0f060: 830d                      MOVE   A8,*A13,1
0f070: 4d08                      MOVE   A8,A8
0f080: cb0f                      JRNE   F180h
0f090: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0f0c0: cb02                      JRNE   F0F0h
0f0d0: 4508                      SUB    A8,A8
0f0e0: c012                      JR     F210h
0f0f0: 1468                      SUBK   3h,A8
0f100: ca05                      JREQ   F160h
0f110: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0f140: 1448                      SUBK   2h,A8
0f150: cb02                      JRNE   F180h
0f160: 1828                      MOVK   1h,A8
0f170: c009                      JR     F210h
0f180: 0570                      SETF   10h,1,0
0f190: b5a8 0020                 MOVE   *A13(20h),A8,0
0f1b0: 1428                      DEC    A8
0f1c0: b10d 0020                 MOVE   A8,*A13(20h),0
0f1e0: 1028                      INC    A8
0f1f0: cbcd                      JRNE   EED0h
0f200: 1828                      MOVK   1h,A8
0f210: b7ee 0040                 MOVE   *SP(40h),A14,1
0f230: 97ed                      MOVE   *SP+,A13,1
0f240: 0962                      RETS   2h

_xray_control:
0f250: a3af                      MOVE   A13,-*SP,1
0f260: 4dcd                      MOVE   A14,A13
0f270: 0b0e 0040                 ADDI   40h,A14
0f290: 1948                      MOVK   Ah,A8
0f2a0: 0570                      SETF   10h,1,0
0f2b0: b10d 0020                 MOVE   A8,*A13(20h),0
0f2d0: 19a8                      MOVK   Dh,A8
0f2e0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0f310: 19c8                      MOVK   Eh,A8
0f320: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0f350: 1b68                      MOVK   1Bh,A8
0f360: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0f390: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0f3b0: 05e8 cd40 0003            MOVB   A8,@3CD40h
0f3e0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
0f400: 05e8 cd48 0003            MOVB   A8,@3CD48h
0f430: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0f450: 05e8 cd50 0003            MOVB   A8,@3CD50h
0f480: b5a8 ff80                 MOVE   *A13(FF80h),A8,0
0f4a0: 0588 cd58 0003            MOVE   A8,@3CD58h,0
0f4d0: b5a8 0020                 MOVE   *A13(20h),A8,0
0f4f0: 1428                      DEC    A8
0f500: b10d 0020                 MOVE   A8,*A13(20h),0
0f520: 1028                      INC    A8
0f530: ca33                      JREQ   F870h
0f540: a3cf                      MOVE   A14,-*SP,1
0f550: 09e8 cce0 0003            MOVI   3CCE0h,A8
0f580: 930e                      MOVE   A8,*A14+,1
0f590: 1868                      MOVK   3h,A8
0f5a0: 930e                      MOVE   A8,*A14+,1
0f5b0: 0d5f 0000 0000            CALLA  0h
0f5e0: 830d                      MOVE   A8,*A13,1
0f5f0: 4d08                      MOVE   A8,A8
0f600: cb1e                      JRNE   F7F0h
0f610: a3cf                      MOVE   A14,-*SP,1
0f620: 4508                      SUB    A8,A8
0f630: 930e                      MOVE   A8,*A14+,1
0f640: 09e8 9a80 0003            MOVI   39A80h,A8
0f670: 930e                      MOVE   A8,*A14+,1
0f680: 19c8                      MOVK   Eh,A8
0f690: 930e                      MOVE   A8,*A14+,1
0f6a0: 0d5f 0000 0000            CALLA  0h
0f6d0: 830d                      MOVE   A8,*A13,1
0f6e0: 4d08                      MOVE   A8,A8
0f6f0: cb0f                      JRNE   F7F0h
0f700: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0f730: cb02                      JRNE   F760h
0f740: 4508                      SUB    A8,A8
0f750: c012                      JR     F880h
0f760: 1468                      SUBK   3h,A8
0f770: ca05                      JREQ   F7D0h
0f780: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0f7b0: 1448                      SUBK   2h,A8
0f7c0: cb02                      JRNE   F7F0h
0f7d0: 1828                      MOVK   1h,A8
0f7e0: c009                      JR     F880h
0f7f0: 0570                      SETF   10h,1,0
0f800: b5a8 0020                 MOVE   *A13(20h),A8,0
0f820: 1428                      DEC    A8
0f830: b10d 0020                 MOVE   A8,*A13(20h),0
0f850: 1028                      INC    A8
0f860: cbcd                      JRNE   F540h
0f870: 1828                      MOVK   1h,A8
0f880: b7ee 0040                 MOVE   *SP(40h),A14,1
0f8a0: 97ed                      MOVE   *SP+,A13,1
0f8b0: 0962                      RETS   2h

_one_zero_freeze:
0f8c0: a3af                      MOVE   A13,-*SP,1
0f8d0: 4dcd                      MOVE   A14,A13
0f8e0: 0b0e 0040                 ADDI   40h,A14
0f900: 1948                      MOVK   Ah,A8
0f910: 0570                      SETF   10h,1,0
0f920: b10d 0020                 MOVE   A8,*A13(20h),0
0f940: 1968                      MOVK   Bh,A8
0f950: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0f980: 19c8                      MOVK   Eh,A8
0f990: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0f9c0: 1388                      ADDK   1Ch,A8
0f9d0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0fa00: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0fa20: 05e8 cd40 0003            MOVB   A8,@3CD40h
0fa50: afa8 ffc0                 MOVB   *A13(FFC0h),A8
0fa70: 05e8 cd48 0003            MOVB   A8,@3CD48h
0faa0: afa8 ffa0                 MOVB   *A13(FFA0h),A8
0fac0: 05e8 cd50 0003            MOVB   A8,@3CD50h
0faf0: b5a8 0020                 MOVE   *A13(20h),A8,0
0fb10: 1428                      DEC    A8
0fb20: b10d 0020                 MOVE   A8,*A13(20h),0
0fb40: 1028                      INC    A8
0fb50: ca33                      JREQ   FE90h
0fb60: a3cf                      MOVE   A14,-*SP,1
0fb70: 09e8 cce0 0003            MOVI   3CCE0h,A8
0fba0: 930e                      MOVE   A8,*A14+,1
0fbb0: 1868                      MOVK   3h,A8
0fbc0: 930e                      MOVE   A8,*A14+,1
0fbd0: 0d5f 0000 0000            CALLA  0h
0fc00: 830d                      MOVE   A8,*A13,1
0fc10: 4d08                      MOVE   A8,A8
0fc20: cb1e                      JRNE   FE10h
0fc30: a3cf                      MOVE   A14,-*SP,1
0fc40: 4508                      SUB    A8,A8
0fc50: 930e                      MOVE   A8,*A14+,1
0fc60: 09e8 9a80 0003            MOVI   39A80h,A8
0fc90: 930e                      MOVE   A8,*A14+,1
0fca0: 19c8                      MOVK   Eh,A8
0fcb0: 930e                      MOVE   A8,*A14+,1
0fcc0: 0d5f 0000 0000            CALLA  0h
0fcf0: 830d                      MOVE   A8,*A13,1
0fd00: 4d08                      MOVE   A8,A8
0fd10: cb0f                      JRNE   FE10h
0fd20: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0fd50: cb02                      JRNE   FD80h
0fd60: 4508                      SUB    A8,A8
0fd70: c012                      JR     FEA0h
0fd80: 1468                      SUBK   3h,A8
0fd90: ca05                      JREQ   FDF0h
0fda0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
0fdd0: 1448                      SUBK   2h,A8
0fde0: cb02                      JRNE   FE10h
0fdf0: 1828                      MOVK   1h,A8
0fe00: c009                      JR     FEA0h
0fe10: 0570                      SETF   10h,1,0
0fe20: b5a8 0020                 MOVE   *A13(20h),A8,0
0fe40: 1428                      DEC    A8
0fe50: b10d 0020                 MOVE   A8,*A13(20h),0
0fe70: 1028                      INC    A8
0fe80: cbcd                      JRNE   FB60h
0fe90: 1828                      MOVK   1h,A8
0fea0: b7ee 0040                 MOVE   *SP(40h),A14,1
0fec0: 97ed                      MOVE   *SP+,A13,1
0fed0: 0962                      RETS   2h

_collect_spot_data:
0fee0: 098f 000c                 MMTM   SP,A12,A13
0ff00: 4dcd                      MOVE   A14,A13
0ff10: 100e                      ADDK   20h,A14
0ff20: 1928                      MOVK   9h,A8
0ff30: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
0ff60: 19c8                      MOVK   Eh,A8
0ff70: 0788 cd00 0003            MOVE   A8,@3CD00h,1
0ffa0: 09c8 0046                 MOVI   46h,A8
0ffc0: 0788 cd20 0003            MOVE   A8,@3CD20h,1
0fff0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
10010: 05e8 cd40 0003            MOVB   A8,@3CD40h
10040: a3cf                      MOVE   A14,-*SP,1
10050: 09e8 cce0 0003            MOVI   3CCE0h,A8
10080: 930e                      MOVE   A8,*A14+,1
10090: 1868                      MOVK   3h,A8
100a0: 930e                      MOVE   A8,*A14+,1
100b0: 0d5f 0000 0000            CALLA  0h
100e0: 830d                      MOVE   A8,*A13,1
100f0: 4d08                      MOVE   A8,A8
10100: cb1c                      JRNE   102D0h
10110: a3cf                      MOVE   A14,-*SP,1
10120: 4508                      SUB    A8,A8
10130: 930e                      MOVE   A8,*A14+,1
10140: 09e8 9a80 0003            MOVI   39A80h,A8
10170: 930e                      MOVE   A8,*A14+,1
10180: 19c8                      MOVK   Eh,A8
10190: 930e                      MOVE   A8,*A14+,1
101a0: 0d5f 0000 0000            CALLA  0h
101d0: 830d                      MOVE   A8,*A13,1
101e0: 4d08                      MOVE   A8,A8
101f0: cb0d                      JRNE   102D0h
10200: 0340 9aa8 0003 55d0 0002  MOVB   @39AA8h,@255D0h
10250: 1908                      MOVK   8h,A8
10260: 07ac 5580 0002            MOVE   @25580h,A12,1
10290: 5588                      OR     A12,A8
102a0: 0788 5580 0002            MOVE   A8,@25580h,1
102d0: b7ee 0060                 MOVE   *SP(60h),A14,1
102f0: 09af 3000                 MMFM   SP,A12,A13
10310: 0962                      RETS   2h

_ext_spot_control:
10320: a3af                      MOVE   A13,-*SP,1
10330: 4dcd                      MOVE   A14,A13
10340: 0b0e 0040                 ADDI   40h,A14
10360: 1948                      MOVK   Ah,A8
10370: 0570                      SETF   10h,1,0
10380: b10d 0020                 MOVE   A8,*A13(20h),0
103a0: 1908                      MOVK   8h,A8
103b0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
103e0: 19c8                      MOVK   Eh,A8
103f0: 0788 cd00 0003            MOVE   A8,@3CD00h,1
10420: 09c8 0047                 MOVI   47h,A8
10440: 0788 cd20 0003            MOVE   A8,@3CD20h,1
10470: b5a8 0020                 MOVE   *A13(20h),A8,0
10490: 1428                      DEC    A8
104a0: b10d 0020                 MOVE   A8,*A13(20h),0
104c0: 1028                      INC    A8
104d0: ca33                      JREQ   10810h
104e0: a3cf                      MOVE   A14,-*SP,1
104f0: 09e8 cce0 0003            MOVI   3CCE0h,A8
10520: 930e                      MOVE   A8,*A14+,1
10530: 1868                      MOVK   3h,A8
10540: 930e                      MOVE   A8,*A14+,1
10550: 0d5f 0000 0000            CALLA  0h
10580: 830d                      MOVE   A8,*A13,1
10590: 4d08                      MOVE   A8,A8
105a0: cb1e                      JRNE   10790h
105b0: a3cf                      MOVE   A14,-*SP,1
105c0: 4508                      SUB    A8,A8
105d0: 930e                      MOVE   A8,*A14+,1
105e0: 09e8 9a80 0003            MOVI   39A80h,A8
10610: 930e                      MOVE   A8,*A14+,1
10620: 19c8                      MOVK   Eh,A8
10630: 930e                      MOVE   A8,*A14+,1
10640: 0d5f 0000 0000            CALLA  0h
10670: 830d                      MOVE   A8,*A13,1
10680: 4d08                      MOVE   A8,A8
10690: cb0f                      JRNE   10790h
106a0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
106d0: cb02                      JRNE   10700h
106e0: 4508                      SUB    A8,A8
106f0: c012                      JR     10820h
10700: 1468                      SUBK   3h,A8
10710: ca05                      JREQ   10770h
10720: 07e8 9aa0 0003            MOVE   @39AA0h,A8
10750: 1448                      SUBK   2h,A8
10760: cb02                      JRNE   10790h
10770: 1828                      MOVK   1h,A8
10780: c009                      JR     10820h
10790: 0570                      SETF   10h,1,0
107a0: b5a8 0020                 MOVE   *A13(20h),A8,0
107c0: 1428                      DEC    A8
107d0: b10d 0020                 MOVE   A8,*A13(20h),0
107f0: 1028                      INC    A8
10800: cbcd                      JRNE   104E0h
10810: 1828                      MOVK   1h,A8
10820: 0bee ffbf                 SUBI   40h,A14
10840: 97ed                      MOVE   *SP+,A13,1
10850: 0960                      RETS   

_gather_spotdata:
10860: a3af                      MOVE   A13,-*SP,1
10870: 4dcd                      MOVE   A14,A13
10880: 0b0e 0040                 ADDI   40h,A14
108a0: 1948                      MOVK   Ah,A8
108b0: 0570                      SETF   10h,1,0
108c0: b10d 0020                 MOVE   A8,*A13(20h),0
108e0: 1a88                      MOVK   14h,A8
108f0: 0788 cce0 0003            MOVE   A8,@3CCE0h,1
10920: 19c8                      MOVK   Eh,A8
10930: 0788 cd00 0003            MOVE   A8,@3CD00h,1
10960: 09c8 0048                 MOVI   48h,A8
10980: 0788 cd20 0003            MOVE   A8,@3CD20h,1
109b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
109d0: 0788 cd40 0003            MOVE   A8,@3CD40h,1
10a00: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
10a20: 0788 cd60 0003            MOVE   A8,@3CD60h,1
10a50: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
10a70: 0788 cd80 0003            MOVE   A8,@3CD80h,1
10aa0: b5a8 0020                 MOVE   *A13(20h),A8,0
10ac0: 1428                      DEC    A8
10ad0: b10d 0020                 MOVE   A8,*A13(20h),0
10af0: 1028                      INC    A8
10b00: ca4d                      JREQ   10FE0h
10b10: a3cf                      MOVE   A14,-*SP,1
10b20: 09e8 cce0 0003            MOVI   3CCE0h,A8
10b50: 930e                      MOVE   A8,*A14+,1
10b60: 1868                      MOVK   3h,A8
10b70: 930e                      MOVE   A8,*A14+,1
10b80: 0d5f 0000 0000            CALLA  0h
10bb0: 830d                      MOVE   A8,*A13,1
10bc0: 4d08                      MOVE   A8,A8
10bd0: cb38                      JRNE   10F60h
10be0: a3cf                      MOVE   A14,-*SP,1
10bf0: 4508                      SUB    A8,A8
10c00: 930e                      MOVE   A8,*A14+,1
10c10: 09e8 9a80 0003            MOVI   39A80h,A8
10c40: 930e                      MOVE   A8,*A14+,1
10c50: 19c8                      MOVK   Eh,A8
10c60: 930e                      MOVE   A8,*A14+,1
10c70: 0d5f 0000 0000            CALLA  0h
10ca0: 830d                      MOVE   A8,*A13,1
10cb0: 4d08                      MOVE   A8,A8
10cc0: cb29                      JRNE   10F60h
10cd0: 07e8 9aa0 0003            MOVE   @39AA0h,A8
10d00: cb0f                      JRNE   10E00h
10d10: 1868                      MOVK   3h,A8
10d20: 05e8 5620 0002            MOVB   A8,@25620h
10d50: 07a8 5580 0002            MOVE   @25580h,A8,1
10d80: 0ba8 0010 0000            ORI    10h,A8
10db0: 0788 5580 0002            MOVE   A8,@25580h,1
10de0: 4508                      SUB    A8,A8
10df0: c01f                      JR     10FF0h
10e00: 1468                      SUBK   3h,A8
10e10: ca05                      JREQ   10E70h
10e20: 07e8 9aa0 0003            MOVE   @39AA0h,A8
10e50: 1448                      SUBK   2h,A8
10e60: cb0f                      JRNE   10F60h
10e70: 1868                      MOVK   3h,A8
10e80: 05e8 5620 0002            MOVB   A8,@25620h
10eb0: 07a8 5580 0002            MOVE   @25580h,A8,1
10ee0: 0ba8 0010 0000            ORI    10h,A8
10f10: 0788 5580 0002            MOVE   A8,@25580h,1
10f40: 1828                      MOVK   1h,A8
10f50: c009                      JR     10FF0h
10f60: 0570                      SETF   10h,1,0
10f70: b5a8 0020                 MOVE   *A13(20h),A8,0
10f90: 1428                      DEC    A8
10fa0: b10d 0020                 MOVE   A8,*A13(20h),0
10fc0: 1028                      INC    A8
10fd0: cbb3                      JRNE   10B10h
10fe0: 1828                      MOVK   1h,A8
10ff0: b7ee 0040                 MOVE   *SP(40h),A14,1
11010: 97ed                      MOVE   *SP+,A13,1
11020: 0962                      RETS   2h

_free_spotdata_buffer:
11030: a3cf                      MOVE   A14,-*SP,1
11040: d60e 5600 0002            MOVE   @25600h,*A14+,1
11070: 0d5f 0000 0000            CALLA  0h
110a0: 4508                      SUB    A8,A8
110b0: 0788 5600 0002            MOVE   A8,@25600h,1
110e0: 05e8 5620 0002            MOVB   A8,@25620h
11110: 07a8 5580 0002            MOVE   @25580h,A8,1
11140: 0ba8 0010 0000            ORI    10h,A8
11170: 0788 5580 0002            MOVE   A8,@25580h,1
111a0: 4508                      SUB    A8,A8
111b0: 0960                      RETS   

_set_spotdata_ready:
111c0: 1868                      MOVK   3h,A8
111d0: 05e8 5620 0002            MOVB   A8,@25620h
11200: 07a8 5580 0002            MOVE   @25580h,A8,1
11230: 0ba8 0010 0000            ORI    10h,A8
11260: 0788 5580 0002            MOVE   A8,@25580h,1
11290: 4508                      SUB    A8,A8
112a0: 0960                      RETS   

_cp_acq_init:
112b0: a3af                      MOVE   A13,-*SP,1
112c0: 4dcd                      MOVE   A14,A13
112d0: 100e                      ADDK   20h,A14
112e0: a3cf                      MOVE   A14,-*SP,1
112f0: 09e8 0000 0000            MOVI   0h,A8
11320: 930e                      MOVE   A8,*A14+,1
11330: 4508                      SUB    A8,A8
11340: 930e                      MOVE   A8,*A14+,1
11350: 09c8 0400                 MOVI   400h,A8
11370: 930e                      MOVE   A8,*A14+,1
11380: 09e8 4341 4d51            MOVI   4D514341h,A8
113b0: 930e                      MOVE   A8,*A14+,1
113c0: 18a8                      MOVK   5h,A8
113d0: 930e                      MOVE   A8,*A14+,1
113e0: 0d5f 0000 0000            CALLA  0h
11410: 830d                      MOVE   A8,*A13,1
11420: 4d08                      MOVE   A8,A8
11430: cb07                      JRNE   114B0h
11440: a3cf                      MOVE   A14,-*SP,1
11450: 18a8                      MOVK   5h,A8
11460: 930e                      MOVE   A8,*A14+,1
11470: 0d5f 0000 0000            CALLA  0h
114a0: 830d                      MOVE   A8,*A13,1
114b0: a3cf                      MOVE   A14,-*SP,1
114c0: 09c8 0032                 MOVI   32h,A8
114e0: 930e                      MOVE   A8,*A14+,1
114f0: 09e8 cb40 0003            MOVI   3CB40h,A8
11520: 930e                      MOVE   A8,*A14+,1
11530: 09e8 4341 4d51            MOVI   4D514341h,A8
11560: 930e                      MOVE   A8,*A14+,1
11570: 19e8                      MOVK   Fh,A8
11580: 930e                      MOVE   A8,*A14+,1
11590: 0d5f 0000 0000            CALLA  0h
115c0: 830d                      MOVE   A8,*A13,1
115d0: 140e                      SUBK   20h,A14
115e0: 97ed                      MOVE   *SP+,A13,1
115f0: 0960                      RETS   

_cp_acq_status:
11600: 098f 000c                 MMTM   SP,A12,A13
11620: 4dcd                      MOVE   A14,A13
11630: 100e                      ADDK   20h,A14
11640: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
11660: 07ac 5580 0002            MOVE   @25580h,A12,1
11690: b388 0248                 MOVE   A12,*A8(248h),1
116b0: 4508                      SUB    A8,A8
116c0: 0788 5580 0002            MOVE   A8,@25580h,1
116f0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
11710: b78c 0248                 MOVE   *A12(248h),A12,1
11730: 1fec                      BTST   0h,A12
11740: ca07                      JREQ   117C0h
11750: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
11770: 07e8 5300 0002            MOVE   @25300h,A8
117a0: ad0c 0268                 MOVB   A8,*A12(268h)
117c0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
117e0: b788 0248                 MOVE   *A12(248h),A8,1
11800: 1fc8                      BTST   1h,A8
11810: ca20                      JREQ   11A20h
11820: 4508                      SUB    A8,A8
11830: 0570                      SETF   10h,1,0
11840: 810d                      MOVE   A8,*A13,0
11850: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
11870: 85a8                      MOVE   *A13,A8,0
11880: 24a8                      SLL    5h,A8
11890: 4188                      ADD    A12,A8
118a0: 85ac                      MOVE   *A13,A12,0
118b0: 24ac                      SLL    5h,A12
118c0: 0b2c 5380 0002            ADDI   25380h,A12
118f0: 8b88                      MOVE   *A12,*A8,1
11900: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
11920: 85a8                      MOVE   *A13,A8,0
11930: 24a8                      SLL    5h,A8
11940: 4188                      ADD    A12,A8
11950: 85ac                      MOVE   *A13,A12,0
11960: 24ac                      SLL    5h,A12
11970: 0b2c 5480 0002            ADDI   25480h,A12
119a0: bb88 0000 0100            MOVE   *A12(0h),*A8(100h),1
119d0: 85ac                      MOVE   *A13,A12,0
119e0: 102c                      INC    A12
119f0: 818d                      MOVE   A12,*A13,0
11a00: 14ec                      SUBK   7h,A12
11a10: c6e3                      JRLE   11850h
11a20: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
11a40: b788 0248                 MOVE   *A12(248h),A8,1
11a60: 1fa8                      BTST   2h,A8
11a70: ca2d                      JREQ   11D50h
11a80: 07e8 5320 0002            MOVE   @25320h,A8
11ab0: ad0c 0200                 MOVB   A8,*A12(200h)
11ad0: 07e8 5328 0002            MOVE   @25328h,A8
11b00: ad0c 0208                 MOVB   A8,*A12(208h)
11b20: 07e8 5330 0002            MOVE   @25330h,A8
11b50: ad0c 0210                 MOVB   A8,*A12(210h)
11b70: 07e8 5338 0002            MOVE   @25338h,A8
11ba0: ad0c 0218                 MOVB   A8,*A12(218h)
11bc0: 07e8 5340 0002            MOVE   @25340h,A8
11bf0: ad0c 0220                 MOVB   A8,*A12(220h)
11c10: 07e8 5348 0002            MOVE   @25348h,A8
11c40: ad0c 0228                 MOVB   A8,*A12(228h)
11c60: 07e8 5350 0002            MOVE   @25350h,A8
11c90: ad0c 0230                 MOVB   A8,*A12(230h)
11cb0: 07e8 5358 0002            MOVE   @25358h,A8
11ce0: ad0c 0238                 MOVB   A8,*A12(238h)
11d00: 07e8 5360 0002            MOVE   @25360h,A8
11d30: ad0c 0240                 MOVB   A8,*A12(240h)
11d50: b788 0248                 MOVE   *A12(248h),A8,1
11d70: 1f88                      BTST   3h,A8
11d80: ca06                      JREQ   11DF0h
11d90: 0548                      SETF   8h,0,0
11da0: 05a8 55d0 0002            MOVE   @255D0h,A8,0
11dd0: ad0c 0278                 MOVB   A8,*A12(278h)
11df0: b788 0248                 MOVE   *A12(248h),A8,1
11e10: 1f68                      BTST   4h,A8
11e20: cb05                      JRNE   11E80h
11e30: 0548                      SETF   8h,0,0
11e40: 05a8 5620 0002            MOVE   @25620h,A8,0
11e70: 3b68                      DSJS   A8,12030h
11e80: 0548                      SETF   8h,0,0
11e90: 05a8 5620 0002            MOVE   @25620h,A8,0
11ec0: ad0c 0280                 MOVB   A8,*A12(280h)
11ee0: 0d5f 0000 0000            CALLA  0h
11f10: ad0c 0288                 MOVB   A8,*A12(288h)
11f30: 0d5f 0000 0000            CALLA  0h
11f60: b30c 0290                 MOVE   A8,*A12(290h),1
11f80: 07a8 5600 0002            MOVE   @25600h,A8,1
11fb0: b30c 02b0                 MOVE   A8,*A12(2B0h),1
11fd0: cb05                      JRNE   12030h
11fe0: 4508                      SUB    A8,A8
11ff0: ad0c 0288                 MOVB   A8,*A12(288h)
12010: b30c 0290                 MOVE   A8,*A12(290h),1
12030: 0d5f 9770 0001            CALLA  19770h
12060: ad0c 0270                 MOVB   A8,*A12(270h)
12080: b7ee 0060                 MOVE   *SP(60h),A14,1
120a0: 09af 3000                 MMFM   SP,A12,A13
120c0: 0962                      RETS   2h

_cp_acq_fave:
120d0: a3af                      MOVE   A13,-*SP,1
120e0: 4dcd                      MOVE   A14,A13
120f0: 100e                      ADDK   20h,A14
12100: c008                      JR     12190h
12110: 1828                      MOVK   1h,A8
12120: 05e8 55a0 0002            MOVB   A8,@255A0h
12150: 0d5f 0000 0000            CALLA  0h
12180: c006                      JR     121F0h
12190: 07e8 5300 0002            MOVE   @25300h,A8
121c0: caf4                      JREQ   12110h
121d0: 1428                      DEC    A8
121e0: caf2                      JREQ   12110h
121f0: 1a28                      MOVK   11h,A8
12200: 0788 ef00 0002            MOVE   A8,@2EF00h,1
12230: 19e8                      MOVK   Fh,A8
12240: 0788 ef20 0002            MOVE   A8,@2EF20h,1
12270: 1a28                      MOVK   11h,A8
12280: 0788 ef40 0002            MOVE   A8,@2EF40h,1
122b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
122d0: 0548                      SETF   8h,0,0
122e0: 8508                      MOVE   *A8,A8,0
122f0: 05e8 ef60 0002            MOVB   A8,@2EF60h
12320: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12340: b508 0008                 MOVE   *A8(8h),A8,0
12360: 05e8 ef68 0002            MOVB   A8,@2EF68h
12390: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
123b0: b508 0010                 MOVE   *A8(10h),A8,0
123d0: 05e8 ef70 0002            MOVB   A8,@2EF70h
12400: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12420: b508 0018                 MOVE   *A8(18h),A8,0
12440: 05e8 ef78 0002            MOVB   A8,@2EF78h
12470: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12490: b508 0020                 MOVE   *A8(20h),A8,0
124b0: 05e8 ef80 0002            MOVB   A8,@2EF80h
124e0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12500: b508 0028                 MOVE   *A8(28h),A8,0
12520: 05e8 ef88 0002            MOVB   A8,@2EF88h
12550: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12570: b508 0030                 MOVE   *A8(30h),A8,0
12590: 05e8 ef90 0002            MOVB   A8,@2EF90h
125c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
125e0: b508 0038                 MOVE   *A8(38h),A8,0
12600: 05e8 ef98 0002            MOVB   A8,@2EF98h
12630: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12650: b508 0040                 MOVE   *A8(40h),A8,0
12670: 05e8 efa0 0002            MOVB   A8,@2EFA0h
126a0: a3cf                      MOVE   A14,-*SP,1
126b0: 09e8 ef00 0002            MOVI   2EF00h,A8
126e0: 930e                      MOVE   A8,*A14+,1
126f0: 19a8                      MOVK   Dh,A8
12700: 930e                      MOVE   A8,*A14+,1
12710: 0d5f 0000 0000            CALLA  0h
12740: 830d                      MOVE   A8,*A13,1
12750: 4d08                      MOVE   A8,A8
12760: ca14                      JREQ   128B0h
12770: 1828                      MOVK   1h,A8
12780: 0788 cb00 0003            MOVE   A8,@3CB00h,1
127b0: 09c8 0051                 MOVI   51h,A8
127d0: 05e8 cb20 0003            MOVB   A8,@3CB20h
12800: a3cf                      MOVE   A14,-*SP,1
12810: 09e8 cb00 0003            MOVI   3CB00h,A8
12840: 930e                      MOVE   A8,*A14+,1
12850: 19e8                      MOVK   Fh,A8
12860: 930e                      MOVE   A8,*A14+,1
12870: 0d5f 0000 0000            CALLA  0h
128a0: 830d                      MOVE   A8,*A13,1
128b0: b7ee 0040                 MOVE   *SP(40h),A14,1
128d0: 97ed                      MOVE   *SP+,A13,1
128e0: 0962                      RETS   2h

_cp_acq_fint:
128f0: a3af                      MOVE   A13,-*SP,1
12900: 4dcd                      MOVE   A14,A13
12910: 100e                      ADDK   20h,A14
12920: c008                      JR     129B0h
12930: 1828                      MOVK   1h,A8
12940: 05e8 55a0 0002            MOVB   A8,@255A0h
12970: 0d5f 0000 0000            CALLA  0h
129a0: c006                      JR     12A10h
129b0: 07e8 5300 0002            MOVE   @25300h,A8
129e0: caf4                      JREQ   12930h
129f0: 1428                      DEC    A8
12a00: caf2                      JREQ   12930h
12a10: 1928                      MOVK   9h,A8
12a20: 0788 ef00 0002            MOVE   A8,@2EF00h,1
12a50: 19e8                      MOVK   Fh,A8
12a60: 0788 ef20 0002            MOVE   A8,@2EF20h,1
12a90: 1a68                      MOVK   13h,A8
12aa0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
12ad0: 0548                      SETF   8h,0,0
12ae0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
12b00: 05e8 ef60 0002            MOVB   A8,@2EF60h
12b30: a3cf                      MOVE   A14,-*SP,1
12b40: 09e8 ef00 0002            MOVI   2EF00h,A8
12b70: 930e                      MOVE   A8,*A14+,1
12b80: 19a8                      MOVK   Dh,A8
12b90: 930e                      MOVE   A8,*A14+,1
12ba0: 0d5f 0000 0000            CALLA  0h
12bd0: 830d                      MOVE   A8,*A13,1
12be0: 4d08                      MOVE   A8,A8
12bf0: ca14                      JREQ   12D40h
12c00: 1828                      MOVK   1h,A8
12c10: 0788 cb00 0003            MOVE   A8,@3CB00h,1
12c40: 09c8 0053                 MOVI   53h,A8
12c60: 05e8 cb20 0003            MOVB   A8,@3CB20h
12c90: a3cf                      MOVE   A14,-*SP,1
12ca0: 09e8 cb00 0003            MOVI   3CB00h,A8
12cd0: 930e                      MOVE   A8,*A14+,1
12ce0: 19e8                      MOVK   Fh,A8
12cf0: 930e                      MOVE   A8,*A14+,1
12d00: 0d5f 0000 0000            CALLA  0h
12d30: 830d                      MOVE   A8,*A13,1
12d40: b7ee 0040                 MOVE   *SP(40h),A14,1
12d60: 97ed                      MOVE   *SP+,A13,1
12d70: 0962                      RETS   2h

_cp_acq_lint:
12d80: a3af                      MOVE   A13,-*SP,1
12d90: 4dcd                      MOVE   A14,A13
12da0: 100e                      ADDK   20h,A14
12db0: c008                      JR     12E40h
12dc0: 1828                      MOVK   1h,A8
12dd0: 05e8 55a0 0002            MOVB   A8,@255A0h
12e00: 0d5f 0000 0000            CALLA  0h
12e30: c006                      JR     12EA0h
12e40: 07e8 5300 0002            MOVE   @25300h,A8
12e70: caf4                      JREQ   12DC0h
12e80: 1428                      DEC    A8
12e90: caf2                      JREQ   12DC0h
12ea0: 1928                      MOVK   9h,A8
12eb0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
12ee0: 19e8                      MOVK   Fh,A8
12ef0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
12f20: 1a48                      MOVK   12h,A8
12f30: 0788 ef40 0002            MOVE   A8,@2EF40h,1
12f60: 0548                      SETF   8h,0,0
12f70: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
12f90: 05e8 ef60 0002            MOVB   A8,@2EF60h
12fc0: a3cf                      MOVE   A14,-*SP,1
12fd0: 09e8 ef00 0002            MOVI   2EF00h,A8
13000: 930e                      MOVE   A8,*A14+,1
13010: 19a8                      MOVK   Dh,A8
13020: 930e                      MOVE   A8,*A14+,1
13030: 0d5f 0000 0000            CALLA  0h
13060: 830d                      MOVE   A8,*A13,1
13070: 4d08                      MOVE   A8,A8
13080: ca14                      JREQ   131D0h
13090: 1828                      MOVK   1h,A8
130a0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
130d0: 09c8 0052                 MOVI   52h,A8
130f0: 05e8 cb20 0003            MOVB   A8,@3CB20h
13120: a3cf                      MOVE   A14,-*SP,1
13130: 09e8 cb00 0003            MOVI   3CB00h,A8
13160: 930e                      MOVE   A8,*A14+,1
13170: 19e8                      MOVK   Fh,A8
13180: 930e                      MOVE   A8,*A14+,1
13190: 0d5f 0000 0000            CALLA  0h
131c0: 830d                      MOVE   A8,*A13,1
131d0: b7ee 0040                 MOVE   *SP(40h),A14,1
131f0: 97ed                      MOVE   *SP+,A13,1
13200: 0962                      RETS   2h

_cp_acq_lave:
13210: a3af                      MOVE   A13,-*SP,1
13220: 4dcd                      MOVE   A14,A13
13230: 100e                      ADDK   20h,A14
13240: c008                      JR     132D0h
13250: 1828                      MOVK   1h,A8
13260: 05e8 55a0 0002            MOVB   A8,@255A0h
13290: 0d5f 0000 0000            CALLA  0h
132c0: c006                      JR     13330h
132d0: 07e8 5300 0002            MOVE   @25300h,A8
13300: caf4                      JREQ   13250h
13310: 1428                      DEC    A8
13320: caf2                      JREQ   13250h
13330: 1948                      MOVK   Ah,A8
13340: 0788 ef00 0002            MOVE   A8,@2EF00h,1
13370: 19e8                      MOVK   Fh,A8
13380: 0788 ef20 0002            MOVE   A8,@2EF20h,1
133b0: 1b28                      MOVK   19h,A8
133c0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
133f0: 0548                      SETF   8h,0,0
13400: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
13420: 05e8 ef60 0002            MOVB   A8,@2EF60h
13450: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
13470: 05e8 ef68 0002            MOVB   A8,@2EF68h
134a0: a3cf                      MOVE   A14,-*SP,1
134b0: 09e8 ef00 0002            MOVI   2EF00h,A8
134e0: 930e                      MOVE   A8,*A14+,1
134f0: 19a8                      MOVK   Dh,A8
13500: 930e                      MOVE   A8,*A14+,1
13510: 0d5f 0000 0000            CALLA  0h
13540: 830d                      MOVE   A8,*A13,1
13550: 4d08                      MOVE   A8,A8
13560: ca14                      JREQ   136B0h
13570: 1828                      MOVK   1h,A8
13580: 0788 cb00 0003            MOVE   A8,@3CB00h,1
135b0: 09c8 0059                 MOVI   59h,A8
135d0: 05e8 cb20 0003            MOVB   A8,@3CB20h
13600: a3cf                      MOVE   A14,-*SP,1
13610: 09e8 cb00 0003            MOVI   3CB00h,A8
13640: 930e                      MOVE   A8,*A14+,1
13650: 19e8                      MOVK   Fh,A8
13660: 930e                      MOVE   A8,*A14+,1
13670: 0d5f 0000 0000            CALLA  0h
136a0: 830d                      MOVE   A8,*A13,1
136b0: b7ee 0040                 MOVE   *SP(40h),A14,1
136d0: 97ed                      MOVE   *SP+,A13,1
136e0: 0962                      RETS   2h

_cp_acq_frez:
136f0: a3af                      MOVE   A13,-*SP,1
13700: 4dcd                      MOVE   A14,A13
13710: 100e                      ADDK   20h,A14
13720: 07e8 5320 0002            MOVE   @25320h,A8
13750: 38e8                      DSJS   A8,137D0h
13760: 1828                      MOVK   1h,A8
13770: 05e8 55b0 0002            MOVB   A8,@255B0h
137a0: 0d5f 0000 0000            CALLA  0h
137d0: 1a28                      MOVK   11h,A8
137e0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
13810: 19e8                      MOVK   Fh,A8
13820: 0788 ef20 0002            MOVE   A8,@2EF20h,1
13850: 1aa8                      MOVK   15h,A8
13860: 0788 ef40 0002            MOVE   A8,@2EF40h,1
13890: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
138b0: 8f08                      MOVB   *A8,A8
138c0: 05e8 ef60 0002            MOVB   A8,@2EF60h
138f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13910: af08 0008                 MOVB   *A8(8h),A8
13930: 05e8 ef68 0002            MOVB   A8,@2EF68h
13960: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13980: af08 0010                 MOVB   *A8(10h),A8
139a0: 05e8 ef70 0002            MOVB   A8,@2EF70h
139d0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
139f0: af08 0018                 MOVB   *A8(18h),A8
13a10: 05e8 ef78 0002            MOVB   A8,@2EF78h
13a40: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13a60: af08 0020                 MOVB   *A8(20h),A8
13a80: 05e8 ef80 0002            MOVB   A8,@2EF80h
13ab0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13ad0: af08 0028                 MOVB   *A8(28h),A8
13af0: 05e8 ef88 0002            MOVB   A8,@2EF88h
13b20: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13b40: af08 0030                 MOVB   *A8(30h),A8
13b60: 05e8 ef90 0002            MOVB   A8,@2EF90h
13b90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13bb0: af08 0038                 MOVB   *A8(38h),A8
13bd0: 05e8 ef98 0002            MOVB   A8,@2EF98h
13c00: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13c20: af08 0040                 MOVB   *A8(40h),A8
13c40: 05e8 efa0 0002            MOVB   A8,@2EFA0h
13c70: a3cf                      MOVE   A14,-*SP,1
13c80: 09e8 ef00 0002            MOVI   2EF00h,A8
13cb0: 930e                      MOVE   A8,*A14+,1
13cc0: 19a8                      MOVK   Dh,A8
13cd0: 930e                      MOVE   A8,*A14+,1
13ce0: 0d5f 0000 0000            CALLA  0h
13d10: 830d                      MOVE   A8,*A13,1
13d20: 4d08                      MOVE   A8,A8
13d30: ca14                      JREQ   13E80h
13d40: 1828                      MOVK   1h,A8
13d50: 0788 cb00 0003            MOVE   A8,@3CB00h,1
13d80: 09c8 0055                 MOVI   55h,A8
13da0: 05e8 cb20 0003            MOVB   A8,@3CB20h
13dd0: a3cf                      MOVE   A14,-*SP,1
13de0: 09e8 cb00 0003            MOVI   3CB00h,A8
13e10: 930e                      MOVE   A8,*A14+,1
13e20: 19e8                      MOVK   Fh,A8
13e30: 930e                      MOVE   A8,*A14+,1
13e40: 0d5f 0000 0000            CALLA  0h
13e70: 830d                      MOVE   A8,*A13,1
13e80: b7ee 0040                 MOVE   *SP(40h),A14,1
13ea0: 97ed                      MOVE   *SP+,A13,1
13eb0: 0962                      RETS   2h

_cp_abort_freeze:
13ec0: 0960                      RETS   

_cp_acq_coeff:
13ed0: a3af                      MOVE   A13,-*SP,1
13ee0: 4dcd                      MOVE   A14,A13
13ef0: 100e                      ADDK   20h,A14
13f00: c000 013d                 JR     152F0h
13f20: 1a08                      MOVK   10h,A8
13f30: 0788 ef00 0002            MOVE   A8,@2EF00h,1
13f60: 19e8                      MOVK   Fh,A8
13f70: 0788 ef20 0002            MOVE   A8,@2EF20h,1
13fa0: 1828                      MOVK   1h,A8
13fb0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
13fe0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
14000: 05e8 ef60 0002            MOVB   A8,@2EF60h
14030: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
14050: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
14070: 0d5f b950 0001            CALLA  1B950h
140a0: a7c8                      MOVE   -*A14,A8,1
140b0: 0788 ef80 0002            MOVE   A8,@2EF80h,1
140e0: a3cf                      MOVE   A14,-*SP,1
140f0: 09e8 ef00 0002            MOVI   2EF00h,A8
14120: 930e                      MOVE   A8,*A14+,1
14130: 19a8                      MOVK   Dh,A8
14140: 930e                      MOVE   A8,*A14+,1
14150: 0d5f 0000 0000            CALLA  0h
14180: 830d                      MOVE   A8,*A13,1
14190: 4d08                      MOVE   A8,A8
141a0: ca00 0122                 JREQ   153E0h
141c0: 1828                      MOVK   1h,A8
141d0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
14200: 09c8 0041                 MOVI   41h,A8
14220: 05e8 cb20 0003            MOVB   A8,@3CB20h
14250: a3cf                      MOVE   A14,-*SP,1
14260: 09e8 cb00 0003            MOVI   3CB00h,A8
14290: 930e                      MOVE   A8,*A14+,1
142a0: 19e8                      MOVK   Fh,A8
142b0: 930e                      MOVE   A8,*A14+,1
142c0: 0d5f 0000 0000            CALLA  0h
142f0: 830d                      MOVE   A8,*A13,1
14300: c000 010c                 JR     153E0h
14320: 1a08                      MOVK   10h,A8
14330: 0788 ef00 0002            MOVE   A8,@2EF00h,1
14360: 19e8                      MOVK   Fh,A8
14370: 0788 ef20 0002            MOVE   A8,@2EF20h,1
143a0: 1848                      MOVK   2h,A8
143b0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
143e0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
14400: 05e8 ef60 0002            MOVB   A8,@2EF60h
14430: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
14450: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
14470: 0d5f b950 0001            CALLA  1B950h
144a0: a7c8                      MOVE   -*A14,A8,1
144b0: 0788 ef80 0002            MOVE   A8,@2EF80h,1
144e0: a3cf                      MOVE   A14,-*SP,1
144f0: 09e8 ef00 0002            MOVI   2EF00h,A8
14520: 930e                      MOVE   A8,*A14+,1
14530: 19a8                      MOVK   Dh,A8
14540: 930e                      MOVE   A8,*A14+,1
14550: 0d5f 0000 0000            CALLA  0h
14580: 830d                      MOVE   A8,*A13,1
14590: 4d08                      MOVE   A8,A8
145a0: ca00 00e2                 JREQ   153E0h
145c0: 1828                      MOVK   1h,A8
145d0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
14600: 09c8 0042                 MOVI   42h,A8
14620: 05e8 cb20 0003            MOVB   A8,@3CB20h
14650: a3cf                      MOVE   A14,-*SP,1
14660: 09e8 cb00 0003            MOVI   3CB00h,A8
14690: 930e                      MOVE   A8,*A14+,1
146a0: 19e8                      MOVK   Fh,A8
146b0: 930e                      MOVE   A8,*A14+,1
146c0: 0d5f 0000 0000            CALLA  0h
146f0: 830d                      MOVE   A8,*A13,1
14700: c000 00cc                 JR     153E0h
14720: 1a08                      MOVK   10h,A8
14730: 0788 ef00 0002            MOVE   A8,@2EF00h,1
14760: 19e8                      MOVK   Fh,A8
14770: 0788 ef20 0002            MOVE   A8,@2EF20h,1
147a0: 1868                      MOVK   3h,A8
147b0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
147e0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
14800: 05e8 ef60 0002            MOVB   A8,@2EF60h
14830: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
14850: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
14870: 0d5f b950 0001            CALLA  1B950h
148a0: a7c8                      MOVE   -*A14,A8,1
148b0: 0788 ef80 0002            MOVE   A8,@2EF80h,1
148e0: a3cf                      MOVE   A14,-*SP,1
148f0: 09e8 ef00 0002            MOVI   2EF00h,A8
14920: 930e                      MOVE   A8,*A14+,1
14930: 19a8                      MOVK   Dh,A8
14940: 930e                      MOVE   A8,*A14+,1
14950: 0d5f 0000 0000            CALLA  0h
14980: 830d                      MOVE   A8,*A13,1
14990: 4d08                      MOVE   A8,A8
149a0: ca00 00a2                 JREQ   153E0h
149c0: 1828                      MOVK   1h,A8
149d0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
14a00: 09c8 0043                 MOVI   43h,A8
14a20: 05e8 cb20 0003            MOVB   A8,@3CB20h
14a50: a3cf                      MOVE   A14,-*SP,1
14a60: 09e8 cb00 0003            MOVI   3CB00h,A8
14a90: 930e                      MOVE   A8,*A14+,1
14aa0: 19e8                      MOVK   Fh,A8
14ab0: 930e                      MOVE   A8,*A14+,1
14ac0: 0d5f 0000 0000            CALLA  0h
14af0: 830d                      MOVE   A8,*A13,1
14b00: c000 008c                 JR     153E0h
14b20: 1a08                      MOVK   10h,A8
14b30: 0788 ef00 0002            MOVE   A8,@2EF00h,1
14b60: 19e8                      MOVK   Fh,A8
14b70: 0788 ef20 0002            MOVE   A8,@2EF20h,1
14ba0: 1888                      MOVK   4h,A8
14bb0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
14be0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
14c00: 05e8 ef60 0002            MOVB   A8,@2EF60h
14c30: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
14c50: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
14c70: 0d5f b950 0001            CALLA  1B950h
14ca0: a7c8                      MOVE   -*A14,A8,1
14cb0: 0788 ef80 0002            MOVE   A8,@2EF80h,1
14ce0: a3cf                      MOVE   A14,-*SP,1
14cf0: 09e8 ef00 0002            MOVI   2EF00h,A8
14d20: 930e                      MOVE   A8,*A14+,1
14d30: 19a8                      MOVK   Dh,A8
14d40: 930e                      MOVE   A8,*A14+,1
14d50: 0d5f 0000 0000            CALLA  0h
14d80: 830d                      MOVE   A8,*A13,1
14d90: 4d08                      MOVE   A8,A8
14da0: ca63                      JREQ   153E0h
14db0: 1828                      MOVK   1h,A8
14dc0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
14df0: 09c8 0044                 MOVI   44h,A8
14e10: 05e8 cb20 0003            MOVB   A8,@3CB20h
14e40: a3cf                      MOVE   A14,-*SP,1
14e50: 09e8 cb00 0003            MOVI   3CB00h,A8
14e80: 930e                      MOVE   A8,*A14+,1
14e90: 19e8                      MOVK   Fh,A8
14ea0: 930e                      MOVE   A8,*A14+,1
14eb0: 0d5f 0000 0000            CALLA  0h
14ee0: 830d                      MOVE   A8,*A13,1
14ef0: c04e                      JR     153E0h
14f00: 1948                      MOVK   Ah,A8
14f10: 0788 ef00 0002            MOVE   A8,@2EF00h,1
14f40: 19e8                      MOVK   Fh,A8
14f50: 0788 ef20 0002            MOVE   A8,@2EF20h,1
14f80: 18a8                      MOVK   5h,A8
14f90: 0788 ef40 0002            MOVE   A8,@2EF40h,1
14fc0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
14fe0: 05e8 ef60 0002            MOVB   A8,@2EF60h
15010: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
15030: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
15050: 0d5f c3d0 0001            CALLA  1C3D0h
15080: 0548                      SETF   8h,0,0
15090: 0528                      ZEXT   A8,0
150a0: 05e8 ef68 0002            MOVB   A8,@2EF68h
150d0: a3cf                      MOVE   A14,-*SP,1
150e0: 09e8 ef00 0002            MOVI   2EF00h,A8
15110: 930e                      MOVE   A8,*A14+,1
15120: 19a8                      MOVK   Dh,A8
15130: 930e                      MOVE   A8,*A14+,1
15140: 0d5f 0000 0000            CALLA  0h
15170: 830d                      MOVE   A8,*A13,1
15180: 4d08                      MOVE   A8,A8
15190: ca24                      JREQ   153E0h
151a0: 1828                      MOVK   1h,A8
151b0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
151e0: 09c8 0045                 MOVI   45h,A8
15200: 05e8 cb20 0003            MOVB   A8,@3CB20h
15230: a3cf                      MOVE   A14,-*SP,1
15240: 09e8 cb00 0003            MOVI   3CB00h,A8
15270: 930e                      MOVE   A8,*A14+,1
15280: 19e8                      MOVK   Fh,A8
15290: 930e                      MOVE   A8,*A14+,1
152a0: 0d5f 0000 0000            CALLA  0h
152d0: 830d                      MOVE   A8,*A13,1
152e0: c00f                      JR     153E0h
152f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
15310: ca00 febf                 JREQ   13F20h
15330: 1428                      DEC    A8
15340: ca00 fefc                 JREQ   14320h
15360: 1428                      DEC    A8
15370: ca00 ff39                 JREQ   14720h
15390: 1428                      DEC    A8
153a0: ca00 ff76                 JREQ   14B20h
153c0: 1428                      DEC    A8
153d0: cab2                      JREQ   14F00h
153e0: b7ee 0040                 MOVE   *SP(40h),A14,1
15400: 97ed                      MOVE   *SP+,A13,1
15410: 0962                      RETS   2h

_cp_acq_gain:
15420: a3af                      MOVE   A13,-*SP,1
15430: 4dcd                      MOVE   A14,A13
15440: 100e                      ADDK   20h,A14
15450: 1a08                      MOVK   10h,A8
15460: 0788 ef00 0002            MOVE   A8,@2EF00h,1
15490: 19e8                      MOVK   Fh,A8
154a0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
154d0: 1908                      MOVK   8h,A8
154e0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
15510: afa8 ffe0                 MOVB   *A13(FFE0h),A8
15530: 05e8 ef60 0002            MOVB   A8,@2EF60h
15560: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
15580: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
155a0: 0d5f b950 0001            CALLA  1B950h
155d0: a7c8                      MOVE   -*A14,A8,1
155e0: 0788 ef80 0002            MOVE   A8,@2EF80h,1
15610: a3cf                      MOVE   A14,-*SP,1
15620: 09e8 ef00 0002            MOVI   2EF00h,A8
15650: 930e                      MOVE   A8,*A14+,1
15660: 19a8                      MOVK   Dh,A8
15670: 930e                      MOVE   A8,*A14+,1
15680: 0d5f 0000 0000            CALLA  0h
156b0: 830d                      MOVE   A8,*A13,1
156c0: 4d08                      MOVE   A8,A8
156d0: ca14                      JREQ   15820h
156e0: 1828                      MOVK   1h,A8
156f0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
15720: 09c8 0048                 MOVI   48h,A8
15740: 05e8 cb20 0003            MOVB   A8,@3CB20h
15770: a3cf                      MOVE   A14,-*SP,1
15780: 09e8 cb00 0003            MOVI   3CB00h,A8
157b0: 930e                      MOVE   A8,*A14+,1
157c0: 19e8                      MOVK   Fh,A8
157d0: 930e                      MOVE   A8,*A14+,1
157e0: 0d5f 0000 0000            CALLA  0h
15810: 830d                      MOVE   A8,*A13,1
15820: b7ee 0040                 MOVE   *SP(40h),A14,1
15840: 97ed                      MOVE   *SP+,A13,1
15850: 0962                      RETS   2h

_cp_acq_offset:
15860: a3af                      MOVE   A13,-*SP,1
15870: 4dcd                      MOVE   A14,A13
15880: 100e                      ADDK   20h,A14
15890: 1a08                      MOVK   10h,A8
158a0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
158d0: 19e8                      MOVK   Fh,A8
158e0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
15910: 18e8                      MOVK   7h,A8
15920: 0788 ef40 0002            MOVE   A8,@2EF40h,1
15950: afa8 ffe0                 MOVB   *A13(FFE0h),A8
15970: 05e8 ef60 0002            MOVB   A8,@2EF60h
159a0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
159c0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
159e0: 0d5f b950 0001            CALLA  1B950h
15a10: a7c8                      MOVE   -*A14,A8,1
15a20: 0788 ef80 0002            MOVE   A8,@2EF80h,1
15a50: a3cf                      MOVE   A14,-*SP,1
15a60: 09e8 ef00 0002            MOVI   2EF00h,A8
15a90: 930e                      MOVE   A8,*A14+,1
15aa0: 19a8                      MOVK   Dh,A8
15ab0: 930e                      MOVE   A8,*A14+,1
15ac0: 0d5f 0000 0000            CALLA  0h
15af0: 830d                      MOVE   A8,*A13,1
15b00: 4d08                      MOVE   A8,A8
15b10: ca14                      JREQ   15C60h
15b20: 1828                      MOVK   1h,A8
15b30: 0788 cb00 0003            MOVE   A8,@3CB00h,1
15b60: 09c8 0047                 MOVI   47h,A8
15b80: 05e8 cb20 0003            MOVB   A8,@3CB20h
15bb0: a3cf                      MOVE   A14,-*SP,1
15bc0: 09e8 cb00 0003            MOVI   3CB00h,A8
15bf0: 930e                      MOVE   A8,*A14+,1
15c00: 19e8                      MOVK   Fh,A8
15c10: 930e                      MOVE   A8,*A14+,1
15c20: 0d5f 0000 0000            CALLA  0h
15c50: 830d                      MOVE   A8,*A13,1
15c60: b7ee 0040                 MOVE   *SP(40h),A14,1
15c80: 97ed                      MOVE   *SP+,A13,1
15c90: 0962                      RETS   2h

_cp_acq_invert:
15ca0: a3af                      MOVE   A13,-*SP,1
15cb0: 4dcd                      MOVE   A14,A13
15cc0: 100e                      ADDK   20h,A14
15cd0: 1948                      MOVK   Ah,A8
15ce0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
15d10: 19e8                      MOVK   Fh,A8
15d20: 0788 ef20 0002            MOVE   A8,@2EF20h,1
15d50: 1928                      MOVK   9h,A8
15d60: 0788 ef40 0002            MOVE   A8,@2EF40h,1
15d90: afa8 ffe0                 MOVB   *A13(FFE0h),A8
15db0: 05e8 ef60 0002            MOVB   A8,@2EF60h
15de0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
15e00: 05e8 ef68 0002            MOVB   A8,@2EF68h
15e30: a3cf                      MOVE   A14,-*SP,1
15e40: 09e8 ef00 0002            MOVI   2EF00h,A8
15e70: 930e                      MOVE   A8,*A14+,1
15e80: 19a8                      MOVK   Dh,A8
15e90: 930e                      MOVE   A8,*A14+,1
15ea0: 0d5f 0000 0000            CALLA  0h
15ed0: 830d                      MOVE   A8,*A13,1
15ee0: 4d08                      MOVE   A8,A8
15ef0: ca14                      JREQ   16040h
15f00: 1828                      MOVK   1h,A8
15f10: 0788 cb00 0003            MOVE   A8,@3CB00h,1
15f40: 09c8 0049                 MOVI   49h,A8
15f60: 05e8 cb20 0003            MOVB   A8,@3CB20h
15f90: a3cf                      MOVE   A14,-*SP,1
15fa0: 09e8 cb00 0003            MOVI   3CB00h,A8
15fd0: 930e                      MOVE   A8,*A14+,1
15fe0: 19e8                      MOVK   Fh,A8
15ff0: 930e                      MOVE   A8,*A14+,1
16000: 0d5f 0000 0000            CALLA  0h
16030: 830d                      MOVE   A8,*A13,1
16040: b7ee 0040                 MOVE   *SP(40h),A14,1
16060: 97ed                      MOVE   *SP+,A13,1
16070: 0962                      RETS   2h

_cp_acq_port:
16080: a3af                      MOVE   A13,-*SP,1
16090: 4dcd                      MOVE   A14,A13
160a0: 100e                      ADDK   20h,A14
160b0: 1948                      MOVK   Ah,A8
160c0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
160f0: 19e8                      MOVK   Fh,A8
16100: 0788 ef20 0002            MOVE   A8,@2EF20h,1
16130: 18c8                      MOVK   6h,A8
16140: 0788 ef40 0002            MOVE   A8,@2EF40h,1
16170: afa8 ffe0                 MOVB   *A13(FFE0h),A8
16190: 05e8 ef60 0002            MOVB   A8,@2EF60h
161c0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
161e0: 05e8 ef68 0002            MOVB   A8,@2EF68h
16210: a3cf                      MOVE   A14,-*SP,1
16220: 09e8 ef00 0002            MOVI   2EF00h,A8
16250: 930e                      MOVE   A8,*A14+,1
16260: 19a8                      MOVK   Dh,A8
16270: 930e                      MOVE   A8,*A14+,1
16280: 0d5f 0000 0000            CALLA  0h
162b0: 830d                      MOVE   A8,*A13,1
162c0: 4d08                      MOVE   A8,A8
162d0: ca14                      JREQ   16420h
162e0: 1828                      MOVK   1h,A8
162f0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
16320: 09c8 0046                 MOVI   46h,A8
16340: 05e8 cb20 0003            MOVB   A8,@3CB20h
16370: a3cf                      MOVE   A14,-*SP,1
16380: 09e8 cb00 0003            MOVI   3CB00h,A8
163b0: 930e                      MOVE   A8,*A14+,1
163c0: 19e8                      MOVK   Fh,A8
163d0: 930e                      MOVE   A8,*A14+,1
163e0: 0d5f 0000 0000            CALLA  0h
16410: 830d                      MOVE   A8,*A13,1
16420: b7ee 0040                 MOVE   *SP(40h),A14,1
16440: 97ed                      MOVE   *SP+,A13,1
16450: 0962                      RETS   2h

_cp_acq_mixing:
16460: a3af                      MOVE   A13,-*SP,1
16470: 4dcd                      MOVE   A14,A13
16480: 100e                      ADDK   20h,A14
16490: 1928                      MOVK   9h,A8
164a0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
164d0: 19e8                      MOVK   Fh,A8
164e0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
16510: 1a08                      MOVK   10h,A8
16520: 0788 ef40 0002            MOVE   A8,@2EF40h,1
16550: afa8 ffe0                 MOVB   *A13(FFE0h),A8
16570: 05e8 ef60 0002            MOVB   A8,@2EF60h
165a0: a3cf                      MOVE   A14,-*SP,1
165b0: 09e8 ef00 0002            MOVI   2EF00h,A8
165e0: 930e                      MOVE   A8,*A14+,1
165f0: 19a8                      MOVK   Dh,A8
16600: 930e                      MOVE   A8,*A14+,1
16610: 0d5f 0000 0000            CALLA  0h
16640: 830d                      MOVE   A8,*A13,1
16650: 4d08                      MOVE   A8,A8
16660: ca14                      JREQ   167B0h
16670: 1828                      MOVK   1h,A8
16680: 0788 cb00 0003            MOVE   A8,@3CB00h,1
166b0: 09c8 0050                 MOVI   50h,A8
166d0: 05e8 cb20 0003            MOVB   A8,@3CB20h
16700: a3cf                      MOVE   A14,-*SP,1
16710: 09e8 cb00 0003            MOVI   3CB00h,A8
16740: 930e                      MOVE   A8,*A14+,1
16750: 19e8                      MOVK   Fh,A8
16760: 930e                      MOVE   A8,*A14+,1
16770: 0d5f 0000 0000            CALLA  0h
167a0: 830d                      MOVE   A8,*A13,1
167b0: b7ee 0040                 MOVE   *SP(40h),A14,1
167d0: 97ed                      MOVE   *SP+,A13,1
167e0: 0962                      RETS   2h

_cp_acq_windowing:
167f0: a3af                      MOVE   A13,-*SP,1
16800: 4dcd                      MOVE   A14,A13
16810: 100e                      ADDK   20h,A14
16820: 1928                      MOVK   9h,A8
16830: 0788 ef00 0002            MOVE   A8,@2EF00h,1
16860: 19e8                      MOVK   Fh,A8
16870: 0788 ef20 0002            MOVE   A8,@2EF20h,1
168a0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
168d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
168f0: 05e8 ef60 0002            MOVB   A8,@2EF60h
16920: a3cf                      MOVE   A14,-*SP,1
16930: 09e8 ef00 0002            MOVI   2EF00h,A8
16960: 930e                      MOVE   A8,*A14+,1
16970: 19a8                      MOVK   Dh,A8
16980: 930e                      MOVE   A8,*A14+,1
16990: 0d5f 0000 0000            CALLA  0h
169c0: 830d                      MOVE   A8,*A13,1
169d0: 4d08                      MOVE   A8,A8
169e0: ca14                      JREQ   16B30h
169f0: 1828                      MOVK   1h,A8
16a00: 0788 cb00 0003            MOVE   A8,@3CB00h,1
16a30: 09c8 004f                 MOVI   4Fh,A8
16a50: 05e8 cb20 0003            MOVB   A8,@3CB20h
16a80: a3cf                      MOVE   A14,-*SP,1
16a90: 09e8 cb00 0003            MOVI   3CB00h,A8
16ac0: 930e                      MOVE   A8,*A14+,1
16ad0: 19e8                      MOVK   Fh,A8
16ae0: 930e                      MOVE   A8,*A14+,1
16af0: 0d5f 0000 0000            CALLA  0h
16b20: 830d                      MOVE   A8,*A13,1
16b30: b7ee 0040                 MOVE   *SP(40h),A14,1
16b50: 97ed                      MOVE   *SP+,A13,1
16b60: 0962                      RETS   2h

_cp_acq_mix_window:
16b70: a3af                      MOVE   A13,-*SP,1
16b80: 4dcd                      MOVE   A14,A13
16b90: 100e                      ADDK   20h,A14
16ba0: 1928                      MOVK   9h,A8
16bb0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
16be0: 19e8                      MOVK   Fh,A8
16bf0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
16c20: 1a88                      MOVK   14h,A8
16c30: 0788 ef40 0002            MOVE   A8,@2EF40h,1
16c60: afa8 ffe0                 MOVB   *A13(FFE0h),A8
16c80: 05e8 ef60 0002            MOVB   A8,@2EF60h
16cb0: a3cf                      MOVE   A14,-*SP,1
16cc0: 09e8 ef00 0002            MOVI   2EF00h,A8
16cf0: 930e                      MOVE   A8,*A14+,1
16d00: 19a8                      MOVK   Dh,A8
16d10: 930e                      MOVE   A8,*A14+,1
16d20: 0d5f 0000 0000            CALLA  0h
16d50: 830d                      MOVE   A8,*A13,1
16d60: 4d08                      MOVE   A8,A8
16d70: ca14                      JREQ   16EC0h
16d80: 1828                      MOVK   1h,A8
16d90: 0788 cb00 0003            MOVE   A8,@3CB00h,1
16dc0: 09c8 0054                 MOVI   54h,A8
16de0: 05e8 cb20 0003            MOVB   A8,@3CB20h
16e10: a3cf                      MOVE   A14,-*SP,1
16e20: 09e8 cb00 0003            MOVI   3CB00h,A8
16e50: 930e                      MOVE   A8,*A14+,1
16e60: 19e8                      MOVK   Fh,A8
16e70: 930e                      MOVE   A8,*A14+,1
16e80: 0d5f 0000 0000            CALLA  0h
16eb0: 830d                      MOVE   A8,*A13,1
16ec0: b7ee 0040                 MOVE   *SP(40h),A14,1
16ee0: 97ed                      MOVE   *SP+,A13,1
16ef0: 0962                      RETS   2h

_cp_acq_set_window:
16f00: a3af                      MOVE   A13,-*SP,1
16f10: 4dcd                      MOVE   A14,A13
16f20: 100e                      ADDK   20h,A14
16f30: 1a48                      MOVK   12h,A8
16f40: 0788 ef00 0002            MOVE   A8,@2EF00h,1
16f70: 19e8                      MOVK   Fh,A8
16f80: 0788 ef20 0002            MOVE   A8,@2EF20h,1
16fb0: 1b08                      MOVK   18h,A8
16fc0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
16ff0: 0570                      SETF   10h,1,0
17000: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
17020: 0588 ef60 0002            MOVE   A8,@2EF60h,0
17050: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
17070: 0588 ef70 0002            MOVE   A8,@2EF70h,0
170a0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
170c0: 0588 ef80 0002            MOVE   A8,@2EF80h,0
170f0: b5a8 ff80                 MOVE   *A13(FF80h),A8,0
17110: 0588 ef90 0002            MOVE   A8,@2EF90h,0
17140: afa8 ff60                 MOVB   *A13(FF60h),A8
17160: 05e8 efa0 0002            MOVB   A8,@2EFA0h
17190: afa8 ff40                 MOVB   *A13(FF40h),A8
171b0: 05e8 efa8 0002            MOVB   A8,@2EFA8h
171e0: a3cf                      MOVE   A14,-*SP,1
171f0: 09e8 ef00 0002            MOVI   2EF00h,A8
17220: 930e                      MOVE   A8,*A14+,1
17230: 19a8                      MOVK   Dh,A8
17240: 930e                      MOVE   A8,*A14+,1
17250: 0d5f 0000 0000            CALLA  0h
17280: 830d                      MOVE   A8,*A13,1
17290: 4d08                      MOVE   A8,A8
172a0: ca14                      JREQ   173F0h
172b0: 1828                      MOVK   1h,A8
172c0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
172f0: 09c8 0058                 MOVI   58h,A8
17310: 05e8 cb20 0003            MOVB   A8,@3CB20h
17340: a3cf                      MOVE   A14,-*SP,1
17350: 09e8 cb00 0003            MOVI   3CB00h,A8
17380: 930e                      MOVE   A8,*A14+,1
17390: 19e8                      MOVK   Fh,A8
173a0: 930e                      MOVE   A8,*A14+,1
173b0: 0d5f 0000 0000            CALLA  0h
173e0: 830d                      MOVE   A8,*A13,1
173f0: b7ee 0040                 MOVE   *SP(40h),A14,1
17410: 97ed                      MOVE   *SP+,A13,1
17420: 0962                      RETS   2h

_cp_acq_point_in_window:
17430: 098f 000c                 MMTM   SP,A12,A13
17450: 4dcd                      MOVE   A14,A13
17460: 0b0e 0060                 ADDI   60h,A14
17480: 0570                      SETF   10h,1,0
17490: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
174b0: cb06                      JRNE   17520h
174c0: 09e8 0000 3000            MOVI   30000000h,A8
174f0: b30d 0020                 MOVE   A8,*A13(20h),1
17510: c005                      JR     17570h
17520: 09e8 0000 5000            MOVI   50000000h,A8
17550: b30d 0020                 MOVE   A8,*A13(20h),1
17570: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
17590: 25a8                      SLL    Dh,A8
175a0: b7ac 0020                 MOVE   *A13(20h),A12,1
175c0: 4188                      ADD    A12,A8
175d0: b30d 0020                 MOVE   A8,*A13(20h),1
175f0: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
17610: 2bcc                      SRA    2h,A12
17620: 24ac                      SLL    5h,A12
17630: 410c                      ADD    A8,A12
17640: b38d 0020                 MOVE   A12,*A13(20h),1
17660: 838d                      MOVE   A12,*A13,1
17670: c01c                      JR     17840h
17680: 87ac                      MOVE   *A13,A12,1
17690: 8788                      MOVE   *A12,A8,1
176a0: 182c                      MOVK   1h,A12
176b0: 5188                      AND    A12,A8
176c0: ad0d 0040                 MOVB   A8,*A13(40h)
176e0: c020                      JR     178F0h
176f0: 87ac                      MOVE   *A13,A12,1
17700: 8788                      MOVE   *A12,A8,1
17710: 184c                      MOVK   2h,A12
17720: 5188                      AND    A12,A8
17730: ad0d 0040                 MOVB   A8,*A13(40h)
17750: c019                      JR     178F0h
17760: 87ac                      MOVE   *A13,A12,1
17770: 8788                      MOVE   *A12,A8,1
17780: 188c                      MOVK   4h,A12
17790: 5188                      AND    A12,A8
177a0: ad0d 0040                 MOVB   A8,*A13(40h)
177c0: c012                      JR     178F0h
177d0: 87ac                      MOVE   *A13,A12,1
177e0: 8788                      MOVE   *A12,A8,1
177f0: 190c                      MOVK   8h,A12
17800: 5188                      AND    A12,A8
17810: ad0d 0040                 MOVB   A8,*A13(40h)
17830: c00b                      JR     178F0h
17840: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
17860: 186c                      MOVK   3h,A12
17870: 510c                      AND    A8,A12
17880: cadf                      JREQ   17680h
17890: 142c                      DEC    A12
178a0: cae4                      JREQ   176F0h
178b0: 142c                      DEC    A12
178c0: cae9                      JREQ   17760h
178d0: 142c                      DEC    A12
178e0: caee                      JREQ   177D0h
178f0: afac 0040                 MOVB   *A13(40h),A12
17910: ca02                      JREQ   17940h
17920: 1828                      MOVK   1h,A8
17930: c001                      JR     17950h
17940: 4508                      SUB    A8,A8
17950: b7ee 0060                 MOVE   *SP(60h),A14,1
17970: 09af 3000                 MMFM   SP,A12,A13
17990: 0962                      RETS   2h

_cp_acq_ident_lut:
179a0: a3af                      MOVE   A13,-*SP,1
179b0: 4dcd                      MOVE   A14,A13
179c0: 100e                      ADDK   20h,A14
179d0: 1928                      MOVK   9h,A8
179e0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
17a10: 19e8                      MOVK   Fh,A8
17a20: 0788 ef20 0002            MOVE   A8,@2EF20h,1
17a50: 1948                      MOVK   Ah,A8
17a60: 0788 ef40 0002            MOVE   A8,@2EF40h,1
17a90: afa8 ffe0                 MOVB   *A13(FFE0h),A8
17ab0: 05e8 ef60 0002            MOVB   A8,@2EF60h
17ae0: a3cf                      MOVE   A14,-*SP,1
17af0: 09e8 ef00 0002            MOVI   2EF00h,A8
17b20: 930e                      MOVE   A8,*A14+,1
17b30: 19a8                      MOVK   Dh,A8
17b40: 930e                      MOVE   A8,*A14+,1
17b50: 0d5f 0000 0000            CALLA  0h
17b80: 830d                      MOVE   A8,*A13,1
17b90: 4d08                      MOVE   A8,A8
17ba0: ca14                      JREQ   17CF0h
17bb0: 1828                      MOVK   1h,A8
17bc0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
17bf0: 09c8 004a                 MOVI   4Ah,A8
17c10: 05e8 cb20 0003            MOVB   A8,@3CB20h
17c40: a3cf                      MOVE   A14,-*SP,1
17c50: 09e8 cb00 0003            MOVI   3CB00h,A8
17c80: 930e                      MOVE   A8,*A14+,1
17c90: 19e8                      MOVK   Fh,A8
17ca0: 930e                      MOVE   A8,*A14+,1
17cb0: 0d5f 0000 0000            CALLA  0h
17ce0: 830d                      MOVE   A8,*A13,1
17cf0: b7ee 0040                 MOVE   *SP(40h),A14,1
17d10: 97ed                      MOVE   *SP+,A13,1
17d20: 0962                      RETS   2h

_cp_acq_gamma_lut:
17d30: a3af                      MOVE   A13,-*SP,1
17d40: 4dcd                      MOVE   A14,A13
17d50: 100e                      ADDK   20h,A14
17d60: 1a08                      MOVK   10h,A8
17d70: 0788 ef00 0002            MOVE   A8,@2EF00h,1
17da0: 19e8                      MOVK   Fh,A8
17db0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
17de0: 1968                      MOVK   Bh,A8
17df0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
17e20: afa8 ffe0                 MOVB   *A13(FFE0h),A8
17e40: 05e8 ef60 0002            MOVB   A8,@2EF60h
17e70: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
17e90: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
17eb0: 0d5f b950 0001            CALLA  1B950h
17ee0: a7c8                      MOVE   -*A14,A8,1
17ef0: 0788 ef80 0002            MOVE   A8,@2EF80h,1
17f20: a3cf                      MOVE   A14,-*SP,1
17f30: 09e8 ef00 0002            MOVI   2EF00h,A8
17f60: 930e                      MOVE   A8,*A14+,1
17f70: 19a8                      MOVK   Dh,A8
17f80: 930e                      MOVE   A8,*A14+,1
17f90: 0d5f 0000 0000            CALLA  0h
17fc0: 830d                      MOVE   A8,*A13,1
17fd0: 4d08                      MOVE   A8,A8
17fe0: ca14                      JREQ   18130h
17ff0: 1828                      MOVK   1h,A8
18000: 0788 cb00 0003            MOVE   A8,@3CB00h,1
18030: 09c8 004b                 MOVI   4Bh,A8
18050: 05e8 cb20 0003            MOVB   A8,@3CB20h
18080: a3cf                      MOVE   A14,-*SP,1
18090: 09e8 cb00 0003            MOVI   3CB00h,A8
180c0: 930e                      MOVE   A8,*A14+,1
180d0: 19e8                      MOVK   Fh,A8
180e0: 930e                      MOVE   A8,*A14+,1
180f0: 0d5f 0000 0000            CALLA  0h
18120: 830d                      MOVE   A8,*A13,1
18130: b7ee 0040                 MOVE   *SP(40h),A14,1
18150: 97ed                      MOVE   *SP+,A13,1
18160: 0962                      RETS   2h

_cp_acq_invert_lut:
18170: a3af                      MOVE   A13,-*SP,1
18180: 4dcd                      MOVE   A14,A13
18190: 100e                      ADDK   20h,A14
181a0: 1928                      MOVK   9h,A8
181b0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
181e0: 19e8                      MOVK   Fh,A8
181f0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
18220: 1988                      MOVK   Ch,A8
18230: 0788 ef40 0002            MOVE   A8,@2EF40h,1
18260: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18280: 05e8 ef60 0002            MOVB   A8,@2EF60h
182b0: a3cf                      MOVE   A14,-*SP,1
182c0: 09e8 ef00 0002            MOVI   2EF00h,A8
182f0: 930e                      MOVE   A8,*A14+,1
18300: 19a8                      MOVK   Dh,A8
18310: 930e                      MOVE   A8,*A14+,1
18320: 0d5f 0000 0000            CALLA  0h
18350: 830d                      MOVE   A8,*A13,1
18360: 4d08                      MOVE   A8,A8
18370: ca14                      JREQ   184C0h
18380: 1828                      MOVK   1h,A8
18390: 0788 cb00 0003            MOVE   A8,@3CB00h,1
183c0: 09c8 004c                 MOVI   4Ch,A8
183e0: 05e8 cb20 0003            MOVB   A8,@3CB20h
18410: a3cf                      MOVE   A14,-*SP,1
18420: 09e8 cb00 0003            MOVI   3CB00h,A8
18450: 930e                      MOVE   A8,*A14+,1
18460: 19e8                      MOVK   Fh,A8
18470: 930e                      MOVE   A8,*A14+,1
18480: 0d5f 0000 0000            CALLA  0h
184b0: 830d                      MOVE   A8,*A13,1
184c0: b7ee 0040                 MOVE   *SP(40h),A14,1
184e0: 97ed                      MOVE   *SP+,A13,1
184f0: 0962                      RETS   2h

_cp_acq_comb_lut:
18500: a3af                      MOVE   A13,-*SP,1
18510: 4dcd                      MOVE   A14,A13
18520: 100e                      ADDK   20h,A14
18530: 1968                      MOVK   Bh,A8
18540: 0788 ef00 0002            MOVE   A8,@2EF00h,1
18570: 19e8                      MOVK   Fh,A8
18580: 0788 ef20 0002            MOVE   A8,@2EF20h,1
185b0: 19c8                      MOVK   Eh,A8
185c0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
185f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18610: 05e8 ef60 0002            MOVB   A8,@2EF60h
18640: afa8 ffc0                 MOVB   *A13(FFC0h),A8
18660: 05e8 ef68 0002            MOVB   A8,@2EF68h
18690: afa8 ffa0                 MOVB   *A13(FFA0h),A8
186b0: 05e8 ef70 0002            MOVB   A8,@2EF70h
186e0: a3cf                      MOVE   A14,-*SP,1
186f0: 09e8 ef00 0002            MOVI   2EF00h,A8
18720: 930e                      MOVE   A8,*A14+,1
18730: 19a8                      MOVK   Dh,A8
18740: 930e                      MOVE   A8,*A14+,1
18750: 0d5f 0000 0000            CALLA  0h
18780: 830d                      MOVE   A8,*A13,1
18790: 4d08                      MOVE   A8,A8
187a0: ca14                      JREQ   188F0h
187b0: 1828                      MOVK   1h,A8
187c0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
187f0: 09c8 004e                 MOVI   4Eh,A8
18810: 05e8 cb20 0003            MOVB   A8,@3CB20h
18840: a3cf                      MOVE   A14,-*SP,1
18850: 09e8 cb00 0003            MOVI   3CB00h,A8
18880: 930e                      MOVE   A8,*A14+,1
18890: 19e8                      MOVK   Fh,A8
188a0: 930e                      MOVE   A8,*A14+,1
188b0: 0d5f 0000 0000            CALLA  0h
188e0: 830d                      MOVE   A8,*A13,1
188f0: b7ee 0040                 MOVE   *SP(40h),A14,1
18910: 97ed                      MOVE   *SP+,A13,1
18920: 0962                      RETS   2h

_cp_acq_user_lut:
18930: 098f 000c                 MMTM   SP,A12,A13
18950: 4dcd                      MOVE   A14,A13
18960: 0b0e 0040                 ADDI   40h,A14
18980: 1908                      MOVK   8h,A8
18990: 0788 ef00 0002            MOVE   A8,@2EF00h,1
189c0: 1068                      ADDK   3h,A8
189d0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
18a00: 0570                      SETF   10h,1,0
18a10: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
18a30: 4d0c                      MOVE   A8,A12
18a40: 242c                      SLL    1h,A12
18a50: 410c                      ADD    A8,A12
18a60: 07a8 ef00 0002            MOVE   @2EF00h,A8,1
18a90: 410c                      ADD    A8,A12
18aa0: 078c ef00 0002            MOVE   A12,@2EF00h,1
18ad0: 19e8                      MOVK   Fh,A8
18ae0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
18b10: 19ac                      MOVK   Dh,A12
18b20: 078c ef40 0002            MOVE   A12,@2EF40h,1
18b50: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18b70: 05e8 ef60 0002            MOVB   A8,@2EF60h
18ba0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
18bc0: 0588 ef68 0002            MOVE   A8,@2EF68h,0
18bf0: 4508                      SUB    A8,A8
18c00: b10d 0020                 MOVE   A8,*A13(20h),0
18c20: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
18c40: c626                      JRLE   18EB0h
18c50: b5ac 0020                 MOVE   *A13(20h),A12,0
18c70: 4d88                      MOVE   A12,A8
18c80: 248c                      SLL    4h,A12
18c90: 2468                      SLL    3h,A8
18ca0: 410c                      ADD    A8,A12
18cb0: 0b2c ef78 0002            ADDI   2EF78h,A12
18ce0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
18d00: 890c                      MOVE   *A8,*A12,0
18d10: b5ac 0020                 MOVE   *A13(20h),A12,0
18d30: 4d88                      MOVE   A12,A8
18d40: 248c                      SLL    4h,A12
18d50: 2468                      SLL    3h,A8
18d60: 410c                      ADD    A8,A12
18d70: 0b2c ef78 0002            ADDI   2EF78h,A12
18da0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
18dc0: bd0c 0010 0010            MOVB   *A8(10h),*A12(10h)
18df0: 1308                      ADDK   18h,A8
18e00: b30d ffa0                 MOVE   A8,*A13(FFA0h),1
18e20: b5ac 0020                 MOVE   *A13(20h),A12,0
18e40: 102c                      INC    A12
18e50: b18d 0020                 MOVE   A12,*A13(20h),0
18e70: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
18e90: 490c                      CMP    A8,A12
18ea0: c4da                      JRLT   18C50h
18eb0: a3cf                      MOVE   A14,-*SP,1
18ec0: 09ec ef00 0002            MOVI   2EF00h,A12
18ef0: 938e                      MOVE   A12,*A14+,1
18f00: 19ac                      MOVK   Dh,A12
18f10: 938e                      MOVE   A12,*A14+,1
18f20: 0d5f 0000 0000            CALLA  0h
18f50: 830d                      MOVE   A8,*A13,1
18f60: 4d08                      MOVE   A8,A8
18f70: ca14                      JREQ   190C0h
18f80: 182c                      MOVK   1h,A12
18f90: 078c cb00 0003            MOVE   A12,@3CB00h,1
18fc0: 09c8 004d                 MOVI   4Dh,A8
18fe0: 05e8 cb20 0003            MOVB   A8,@3CB20h
19010: a3cf                      MOVE   A14,-*SP,1
19020: 09ec cb00 0003            MOVI   3CB00h,A12
19050: 938e                      MOVE   A12,*A14+,1
19060: 19e8                      MOVK   Fh,A8
19070: 930e                      MOVE   A8,*A14+,1
19080: 0d5f 0000 0000            CALLA  0h
190b0: 830d                      MOVE   A8,*A13,1
190c0: b7ee 0060                 MOVE   *SP(60h),A14,1
190e0: 09af 3000                 MMFM   SP,A12,A13
19100: 0962                      RETS   2h

_cp_acq_copy_lut:
19110: a3af                      MOVE   A13,-*SP,1
19120: 4dcd                      MOVE   A14,A13
19130: 100e                      ADDK   20h,A14
19140: 1948                      MOVK   Ah,A8
19150: 0788 ef00 0002            MOVE   A8,@2EF00h,1
19180: 19e8                      MOVK   Fh,A8
19190: 0788 ef20 0002            MOVE   A8,@2EF20h,1
191c0: 1ac8                      MOVK   16h,A8
191d0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
19200: afa8 ffe0                 MOVB   *A13(FFE0h),A8
19220: 05e8 ef60 0002            MOVB   A8,@2EF60h
19250: afa8 ffc0                 MOVB   *A13(FFC0h),A8
19270: 05e8 ef68 0002            MOVB   A8,@2EF68h
192a0: a3cf                      MOVE   A14,-*SP,1
192b0: 09e8 ef00 0002            MOVI   2EF00h,A8
192e0: 930e                      MOVE   A8,*A14+,1
192f0: 19a8                      MOVK   Dh,A8
19300: 930e                      MOVE   A8,*A14+,1
19310: 0d5f 0000 0000            CALLA  0h
19340: 830d                      MOVE   A8,*A13,1
19350: 4d08                      MOVE   A8,A8
19360: ca14                      JREQ   194B0h
19370: 1828                      MOVK   1h,A8
19380: 0788 cb00 0003            MOVE   A8,@3CB00h,1
193b0: 09c8 0056                 MOVI   56h,A8
193d0: 05e8 cb20 0003            MOVB   A8,@3CB20h
19400: a3cf                      MOVE   A14,-*SP,1
19410: 09e8 cb00 0003            MOVI   3CB00h,A8
19440: 930e                      MOVE   A8,*A14+,1
19450: 19e8                      MOVK   Fh,A8
19460: 930e                      MOVE   A8,*A14+,1
19470: 0d5f 0000 0000            CALLA  0h
194a0: 830d                      MOVE   A8,*A13,1
194b0: b7ee 0040                 MOVE   *SP(40h),A14,1
194d0: 97ed                      MOVE   *SP+,A13,1
194e0: 0962                      RETS   2h

_cp_acq_suspend:
194f0: a3af                      MOVE   A13,-*SP,1
19500: 4dcd                      MOVE   A14,A13
19510: 0b0e 0040                 ADDI   40h,A14
19530: 1828                      MOVK   1h,A8
19540: ad0d 0020                 MOVB   A8,*A13(20h)
19560: a3cf                      MOVE   A14,-*SP,1
19570: 18a8                      MOVK   5h,A8
19580: 930e                      MOVE   A8,*A14+,1
19590: 0d5f 0000 0000            CALLA  0h
195c0: 830d                      MOVE   A8,*A13,1
195d0: 4d08                      MOVE   A8,A8
195e0: cb0c                      JRNE   196B0h
195f0: a3cf                      MOVE   A14,-*SP,1
19600: 18a8                      MOVK   5h,A8
19610: 930e                      MOVE   A8,*A14+,1
19620: 0d5f 0000 0000            CALLA  0h
19650: 830d                      MOVE   A8,*A13,1
19660: 4d08                      MOVE   A8,A8
19670: cb03                      JRNE   196B0h
19680: 4508                      SUB    A8,A8
19690: ad0d 0020                 MOVB   A8,*A13(20h)
196b0: afa8 0020                 MOVB   *A13(20h),A8
196d0: cbe8                      JRNE   19560h
196e0: 4508                      SUB    A8,A8
196f0: 0788 0f00 0000            MOVE   A8,@F00h,1
19720: 87a8                      MOVE   *A13,A8,1
19730: 0bee ffbf                 SUBI   40h,A14
19750: 97ed                      MOVE   *SP+,A13,1
19760: 0960                      RETS   

_get_acquire_errors:
19770: a3af                      MOVE   A13,-*SP,1
19780: 4dcd                      MOVE   A14,A13
19790: 0b0e 0060                 ADDI   60h,A14
197b0: a3cf                      MOVE   A14,-*SP,1
197c0: 93ae                      MOVE   A13,*A14+,1
197d0: 19e8                      MOVK   Fh,A8
197e0: 930e                      MOVE   A8,*A14+,1
197f0: 0d5f 0000 0000            CALLA  0h
19820: b30d 0040                 MOVE   A8,*A13(40h),1
19840: 15e8                      SUBK   Fh,A8
19850: cb02                      JRNE   19880h
19860: 4508                      SUB    A8,A8
19870: c019                      JR     19A10h
19880: b7a8 0040                 MOVE   *A13(40h),A8,1
198a0: cb15                      JRNE   19A00h
198b0: a3cf                      MOVE   A14,-*SP,1
198c0: 4508                      SUB    A8,A8
198d0: 930e                      MOVE   A8,*A14+,1
198e0: 93ae                      MOVE   A13,*A14+,1
198f0: 19e8                      MOVK   Fh,A8
19900: 930e                      MOVE   A8,*A14+,1
19910: 0d5f 0000 0000            CALLA  0h
19940: b30d 0040                 MOVE   A8,*A13(40h),1
19960: 4d08                      MOVE   A8,A8
19970: cb08                      JRNE   19A00h
19980: 0548                      SETF   8h,0,0
19990: b5a8 0020                 MOVE   *A13(20h),A8,0
199b0: 0ba8 0080 0000            ORI    80h,A8
199e0: 0528                      ZEXT   A8,0
199f0: c001                      JR     19A10h
19a00: 4508                      SUB    A8,A8
19a10: 0bee ff9f                 SUBI   60h,A14
19a30: 97ed                      MOVE   *SP+,A13,1
19a40: 0960                      RETS   

_cp_one_zero_freeze:
19a50: a3af                      MOVE   A13,-*SP,1
19a60: 4dcd                      MOVE   A14,A13
19a70: 100e                      ADDK   20h,A14
19a80: 1968                      MOVK   Bh,A8
19a90: 0788 ef00 0002            MOVE   A8,@2EF00h,1
19ac0: 19e8                      MOVK   Fh,A8
19ad0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
19b00: 1b68                      MOVK   1Bh,A8
19b10: 0788 ef40 0002            MOVE   A8,@2EF40h,1
19b40: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19b60: 8f08                      MOVB   *A8,A8
19b70: 05e8 ef60 0002            MOVB   A8,@2EF60h
19ba0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19bc0: af08 0008                 MOVB   *A8(8h),A8
19be0: 05e8 ef68 0002            MOVB   A8,@2EF68h
19c10: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19c30: af08 0010                 MOVB   *A8(10h),A8
19c50: 05e8 ef70 0002            MOVB   A8,@2EF70h
19c80: a3cf                      MOVE   A14,-*SP,1
19c90: 09e8 ef00 0002            MOVI   2EF00h,A8
19cc0: 930e                      MOVE   A8,*A14+,1
19cd0: 19a8                      MOVK   Dh,A8
19ce0: 930e                      MOVE   A8,*A14+,1
19cf0: 0d5f 0000 0000            CALLA  0h
19d20: 830d                      MOVE   A8,*A13,1
19d30: 4d08                      MOVE   A8,A8
19d40: ca14                      JREQ   19E90h
19d50: 1828                      MOVK   1h,A8
19d60: 0788 cb00 0003            MOVE   A8,@3CB00h,1
19d90: 09c8 005b                 MOVI   5Bh,A8
19db0: 05e8 cb20 0003            MOVB   A8,@3CB20h
19de0: a3cf                      MOVE   A14,-*SP,1
19df0: 09e8 cb00 0003            MOVI   3CB00h,A8
19e20: 930e                      MOVE   A8,*A14+,1
19e30: 19e8                      MOVK   Fh,A8
19e40: 930e                      MOVE   A8,*A14+,1
19e50: 0d5f 0000 0000            CALLA  0h
19e80: 830d                      MOVE   A8,*A13,1
19e90: b7ee 0040                 MOVE   *SP(40h),A14,1
19eb0: 97ed                      MOVE   *SP+,A13,1
19ec0: 0962                      RETS   2h

_cp_control_xray:
19ed0: a3af                      MOVE   A13,-*SP,1
19ee0: 4dcd                      MOVE   A14,A13
19ef0: 100e                      ADDK   20h,A14
19f00: 19a8                      MOVK   Dh,A8
19f10: 0788 ef00 0002            MOVE   A8,@2EF00h,1
19f40: 19e8                      MOVK   Fh,A8
19f50: 0788 ef20 0002            MOVE   A8,@2EF20h,1
19f80: 1b48                      MOVK   1Ah,A8
19f90: 0788 ef40 0002            MOVE   A8,@2EF40h,1
19fc0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
19fe0: 05e8 ef60 0002            MOVB   A8,@2EF60h
1a010: afa8 ffc0                 MOVB   *A13(FFC0h),A8
1a030: 05e8 ef68 0002            MOVB   A8,@2EF68h
1a060: afa8 ffa0                 MOVB   *A13(FFA0h),A8
1a080: 05e8 ef70 0002            MOVB   A8,@2EF70h
1a0b0: 0570                      SETF   10h,1,0
1a0c0: b5a8 ff80                 MOVE   *A13(FF80h),A8,0
1a0e0: 0588 ef78 0002            MOVE   A8,@2EF78h,0
1a110: a3cf                      MOVE   A14,-*SP,1
1a120: 09e8 ef00 0002            MOVI   2EF00h,A8
1a150: 930e                      MOVE   A8,*A14+,1
1a160: 19a8                      MOVK   Dh,A8
1a170: 930e                      MOVE   A8,*A14+,1
1a180: 0d5f 0000 0000            CALLA  0h
1a1b0: 830d                      MOVE   A8,*A13,1
1a1c0: b7ee 0040                 MOVE   *SP(40h),A14,1
1a1e0: 97ed                      MOVE   *SP+,A13,1
1a1f0: 0962                      RETS   2h

_cp_spot_data:
1a200: a3af                      MOVE   A13,-*SP,1
1a210: 4dcd                      MOVE   A14,A13
1a220: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1a240: 05e8 55c0 0002            MOVB   A8,@255C0h
1a270: b7ee 0040                 MOVE   *SP(40h),A14,1
1a290: 97ed                      MOVE   *SP+,A13,1
1a2a0: 0962                      RETS   2h

_cp_ext_spot_control:
1a2b0: a3af                      MOVE   A13,-*SP,1
1a2c0: 4dcd                      MOVE   A14,A13
1a2d0: 100e                      ADDK   20h,A14
1a2e0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1a300: cb04                      JRNE   1A350h
1a310: 0d5f 0000 0000            CALLA  0h
1a340: c017                      JR     1A4C0h
1a350: 1908                      MOVK   8h,A8
1a360: 0788 ef00 0002            MOVE   A8,@2EF00h,1
1a390: 19e8                      MOVK   Fh,A8
1a3a0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
1a3d0: 1b88                      MOVK   1Ch,A8
1a3e0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
1a410: a3cf                      MOVE   A14,-*SP,1
1a420: 09e8 ef00 0002            MOVI   2EF00h,A8
1a450: 930e                      MOVE   A8,*A14+,1
1a460: 19a8                      MOVK   Dh,A8
1a470: 930e                      MOVE   A8,*A14+,1
1a480: 0d5f 0000 0000            CALLA  0h
1a4b0: 830d                      MOVE   A8,*A13,1
1a4c0: b7ee 0040                 MOVE   *SP(40h),A14,1
1a4e0: 97ed                      MOVE   *SP+,A13,1
1a4f0: 0962                      RETS   2h

_cp_spotdata_control:
1a500: a3af                      MOVE   A13,-*SP,1
1a510: 4dcd                      MOVE   A14,A13
1a520: 0b0e 0080                 ADDI   80h,A14
1a540: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1a560: cb12                      JRNE   1A690h
1a570: 1868                      MOVK   3h,A8
1a580: 05e8 5620 0002            MOVB   A8,@25620h
1a5b0: 07a8 5580 0002            MOVE   @25580h,A8,1
1a5e0: 0ba8 0010 0000            ORI    10h,A8
1a610: 0788 5580 0002            MOVE   A8,@25580h,1
1a640: 0d5f 0000 0000            CALLA  0h
1a670: c000 0086                 JR     1AEF0h
1a690: 1828                      MOVK   1h,A8
1a6a0: 05e8 5620 0002            MOVB   A8,@25620h
1a6d0: 07a8 5580 0002            MOVE   @25580h,A8,1
1a700: 0ba8 0010 0000            ORI    10h,A8
1a730: 0788 5580 0002            MOVE   A8,@25580h,1
1a760: a3cf                      MOVE   A14,-*SP,1
1a770: 09c8 0400                 MOVI   400h,A8
1a790: 930e                      MOVE   A8,*A14+,1
1a7a0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
1a7c0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1a7e0: 0d5f bde0 0001            CALLA  1BDE0h
1a810: 930e                      MOVE   A8,*A14+,1
1a820: 4da8                      MOVE   A13,A8
1a830: 0b08 0040                 ADDI   40h,A8
1a850: 930e                      MOVE   A8,*A14+,1
1a860: 0d5f 0450 0002            CALLA  20450h
1a890: b7a8 0060                 MOVE   *A13(60h),A8,1
1a8b0: cb08                      JRNE   1A940h
1a8c0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
1a8e0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1a900: 0d5f bde0 0001            CALLA  1BDE0h
1a930: c009                      JR     1A9D0h
1a940: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
1a960: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1a980: 0d5f bde0 0001            CALLA  1BDE0h
1a9b0: 0b08 0400                 ADDI   400h,A8
1a9d0: b30d 0020                 MOVE   A8,*A13(20h),1
1a9f0: a3cf                      MOVE   A14,-*SP,1
1aa00: 930e                      MOVE   A8,*A14+,1
1aa10: 0d5f 0000 0000            CALLA  0h
1aa40: 0788 5600 0002            MOVE   A8,@25600h,1
1aa70: 4d08                      MOVE   A8,A8
1aa80: ca46                      JREQ   1AEF0h
1aa90: 1a88                      MOVK   14h,A8
1aaa0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
1aad0: 19e8                      MOVK   Fh,A8
1aae0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
1ab10: 1ba8                      MOVK   1Dh,A8
1ab20: 0788 ef40 0002            MOVE   A8,@2EF40h,1
1ab50: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
1ab70: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1ab90: 0d5f bde0 0001            CALLA  1BDE0h
1abc0: 0788 ef60 0002            MOVE   A8,@2EF60h,1
1abf0: d3ae ff60                 MOVE   *A13(FF60h),*A14+,1
1ac10: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
1ac30: 0d5f bde0 0001            CALLA  1BDE0h
1ac60: 0788 ef80 0002            MOVE   A8,@2EF80h,1
1ac90: 07c0 5600 0002 efa0 0002  MOVE   @25600h,@2EFA0h,1
1ace0: a3cf                      MOVE   A14,-*SP,1
1acf0: 09e8 ef00 0002            MOVI   2EF00h,A8
1ad20: 930e                      MOVE   A8,*A14+,1
1ad30: 19a8                      MOVK   Dh,A8
1ad40: 930e                      MOVE   A8,*A14+,1
1ad50: 0d5f 0000 0000            CALLA  0h
1ad80: 830d                      MOVE   A8,*A13,1
1ad90: 4d08                      MOVE   A8,A8
1ada0: ca14                      JREQ   1AEF0h
1adb0: 1828                      MOVK   1h,A8
1adc0: 0788 cb00 0003            MOVE   A8,@3CB00h,1
1adf0: 09c8 005d                 MOVI   5Dh,A8
1ae10: 05e8 cb20 0003            MOVB   A8,@3CB20h
1ae40: a3cf                      MOVE   A14,-*SP,1
1ae50: 09e8 cb00 0003            MOVI   3CB00h,A8
1ae80: 930e                      MOVE   A8,*A14+,1
1ae90: 19e8                      MOVK   Fh,A8
1aea0: 930e                      MOVE   A8,*A14+,1
1aeb0: 0d5f 0000 0000            CALLA  0h
1aee0: 830d                      MOVE   A8,*A13,1
1aef0: b7ee 0040                 MOVE   *SP(40h),A14,1
1af10: 97ed                      MOVE   *SP+,A13,1
1af20: 0962                      RETS   2h

_cp_free_spotdata_buf:
1af30: a3af                      MOVE   A13,-*SP,1
1af40: 4dcd                      MOVE   A14,A13
1af50: 100e                      ADDK   20h,A14
1af60: 1908                      MOVK   8h,A8
1af70: 0788 ef00 0002            MOVE   A8,@2EF00h,1
1afa0: 19e8                      MOVK   Fh,A8
1afb0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
1afe0: 1bc8                      MOVK   1Eh,A8
1aff0: 0788 ef40 0002            MOVE   A8,@2EF40h,1
1b020: a3cf                      MOVE   A14,-*SP,1
1b030: 09e8 ef00 0002            MOVI   2EF00h,A8
1b060: 930e                      MOVE   A8,*A14+,1
1b070: 19a8                      MOVK   Dh,A8
1b080: 930e                      MOVE   A8,*A14+,1
1b090: 0d5f 0000 0000            CALLA  0h
1b0c0: 830d                      MOVE   A8,*A13,1
1b0d0: 4d08                      MOVE   A8,A8
1b0e0: ca14                      JREQ   1B230h
1b0f0: 1828                      MOVK   1h,A8
1b100: 0788 cb00 0003            MOVE   A8,@3CB00h,1
1b130: 09c8 005e                 MOVI   5Eh,A8
1b150: 05e8 cb20 0003            MOVB   A8,@3CB20h
1b180: a3cf                      MOVE   A14,-*SP,1
1b190: 09e8 cb00 0003            MOVI   3CB00h,A8
1b1c0: 930e                      MOVE   A8,*A14+,1
1b1d0: 19e8                      MOVK   Fh,A8
1b1e0: 930e                      MOVE   A8,*A14+,1
1b1f0: 0d5f 0000 0000            CALLA  0h
1b220: 830d                      MOVE   A8,*A13,1
1b230: 140e                      SUBK   20h,A14
1b240: 97ed                      MOVE   *SP+,A13,1
1b250: 0960                      RETS   

_cp_set_spotdata_ready:
1b260: a3af                      MOVE   A13,-*SP,1
1b270: 4dcd                      MOVE   A14,A13
1b280: 100e                      ADDK   20h,A14
1b290: 1908                      MOVK   8h,A8
1b2a0: 0788 ef00 0002            MOVE   A8,@2EF00h,1
1b2d0: 19e8                      MOVK   Fh,A8
1b2e0: 0788 ef20 0002            MOVE   A8,@2EF20h,1
1b310: 1be8                      MOVK   1Fh,A8
1b320: 0788 ef40 0002            MOVE   A8,@2EF40h,1
1b350: a3cf                      MOVE   A14,-*SP,1
1b360: 09e8 ef00 0002            MOVI   2EF00h,A8
1b390: 930e                      MOVE   A8,*A14+,1
1b3a0: 19a8                      MOVK   Dh,A8
1b3b0: 930e                      MOVE   A8,*A14+,1
1b3c0: 0d5f 0000 0000            CALLA  0h
1b3f0: 830d                      MOVE   A8,*A13,1
1b400: 4d08                      MOVE   A8,A8
1b410: ca14                      JREQ   1B560h
1b420: 1828                      MOVK   1h,A8
1b430: 0788 cb00 0003            MOVE   A8,@3CB00h,1
1b460: 09c8 005f                 MOVI   5Fh,A8
1b480: 05e8 cb20 0003            MOVB   A8,@3CB20h
1b4b0: a3cf                      MOVE   A14,-*SP,1
1b4c0: 09e8 cb00 0003            MOVI   3CB00h,A8
1b4f0: 930e                      MOVE   A8,*A14+,1
1b500: 19e8                      MOVK   Fh,A8
1b510: 930e                      MOVE   A8,*A14+,1
1b520: 0d5f 0000 0000            CALLA  0h
1b550: 830d                      MOVE   A8,*A13,1
1b560: 140e                      SUBK   20h,A14
1b570: 97ed                      MOVE   *SP+,A13,1
1b580: 0960                      RETS   

_draw_window_bits:
1b590: 098f ff80                 MMTM   SP,A0-A8
1b5b0: 099f f140                 MMTM   SP,B0-B3,B7,B9
1b5d0: 0bee ff7f                 SUBI   80h,A14
1b5f0: 09ae 000f                 MMFM   A14,A0-A3
1b610: 0550                      SETF   10h,0,0
1b620: 05a5 00b0 c000            MOVE   @C00000B0h,A5,0
1b650: 05a8 00b0 c000            MOVE   @C00000B0h,A8,0
1b680: 0b88 7c20 0000            ANDI   FFFF83DFh,A8
1b6b0: 0588 00b0 c000            MOVE   A8,@C00000B0h,0
1b6e0: 05a6 0150 c000            MOVE   @C0000150h,A6,0
1b710: 09c8 0001                 MOVI   1h,A8
1b730: 0588 0150 c000            MOVE   A8,@C0000150h,0
1b760: 0540                      SETF   20h,0,0
1b770: 05a7 0160 c000            MOVE   @C0000160h,A7,0
1b7a0: 5708                      CLR    A8
1b7b0: 0588 0160 c000            MOVE   A8,@C0000160h,0
1b7e0: 4e02                      MOVE   A0,B2
1b7f0: 4e27                      MOVE   A1,B7
1b800: 4e49                      MOVE   A2,B9
1b810: 4e63                      MOVE   A3,B3
1b820: 0fc0                      FILL   L
1b830: 0550                      SETF   10h,0,0
1b840: 0585 00b0 c000            MOVE   A5,@C00000B0h,0
1b870: 0586 0150 c000            MOVE   A6,@C0000150h,0
1b8a0: 0540                      SETF   20h,0,0
1b8b0: 0587 0160 c000            MOVE   A7,@C0000160h,0
1b8e0: 09bf 028f                 MMFM   SP,B0-B3,B7,B9
1b900: 09af 01ff                 MMFM   SP,A0-A8
1b920: b7ee 0020                 MOVE   *SP(20h),A14,1
1b940: 0962                      RETS   2h

FD$DTOF:
1b950: 07a8 0000 0000            MOVE   @0h,A8,1
1b980: ca0e                      JREQ   1BA70h
1b990: 4dc8                      MOVE   A14,A8
1b9a0: 0be8 ffbf                 SUBI   40h,A8
1b9c0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1b9f0: 0bee ffbf                 SUBI   40h,A14
1ba10: d83f 0080                 CEXEC  1,00101F,0
1ba30: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
1ba60: 0960                      RETS   
1ba70: 098f 9000                 MMTM   SP,A0,A3
1ba90: a7c3                      MOVE   -*A14,A3,1
1baa0: 2d83                      SRL    14h,A3
1bab0: a7c0                      MOVE   -*A14,A0,1
1bac0: 4c08                      MOVE   A0,A8
1bad0: 2588                      SLL    Ch,A8
1bae0: 5503                      OR     A8,A3
1baf0: 2420                      SLL    1h,A0
1bb00: 4708                      SUBB   A8,A8
1bb10: 27e8                      SLL    1Fh,A8
1bb20: 2d60                      SRL    15h,A0
1bb30: ca18                      JREQ   1BCC0h
1bb40: 0b40 f800                 CMPI   7FFh,A0
1bb60: ca20                      JREQ   1BD70h
1bb70: 2ee3                      SRL    9h,A3
1bb80: c908                      JRNC   1BC10h
1bb90: 1023                      INC    A3
1bba0: 1d03                      BTST   17h,A3
1bbb0: ca05                      JREQ   1BC10h
1bbc0: 0b83 0000 ff80            ANDI   7FFFFFh,A3
1bbf0: 2fe3                      SRL    1h,A3
1bc00: 1020                      INC    A0
1bc10: 0be0 fc7f                 SUBI   380h,A0
1bc30: c702                      JRGT   1BC60h
1bc40: 5600                      CLR    A0
1bc50: c006                      JR     1BCC0h
1bc60: 0b40 ff00                 CMPI   FFh,A0
1bc80: c507                      JRGE   1BD00h
1bc90: 26e0                      SLL    17h,A0
1bca0: 5460                      OR     A3,A0
1bcb0: 5500                      OR     A8,A0
1bcc0: 920e                      MOVE   A0,*A14+,1
1bcd0: 09af 0009                 MMFM   SP,A0,A3
1bcf0: 0960                      RETS   
1bd00: 4d03                      MOVE   A8,A3
1bd10: 1840                      MOVK   2h,A0
1bd20: a3cf                      MOVE   A14,-*SP,1
1bd30: 920e                      MOVE   A0,*A14+,1
1bd40: 0d5f 05f0 0002            CALLA  205F0h
1bd70: 0ba3 0000 7f80            ORI    7F800000h,A3
1bda0: 926e                      MOVE   A3,*A14+,1
1bdb0: 09af 0009                 MMFM   SP,A0,A3
1bdd0: 0960                      RETS   

FD$DTOI:
1bde0: 07a8 0000 0000            MOVE   @0h,A8,1
1be10: ca1a                      JREQ   1BFC0h
1be20: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
1be50: a30f                      MOVE   A8,-*SP,1
1be60: 09c8 0029                 MOVI   29h,A8
1be80: 0628 4c00 000d            CMOVGC A8,000D4C,0
1beb0: 4dc8                      MOVE   A14,A8
1bec0: 0be8 ffbf                 SUBI   40h,A8
1bee0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1bf10: 0bee ffbf                 SUBI   40h,A14
1bf30: d83f 00a0                 CEXEC  1,00141F,0
1bf50: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
1bf80: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
1bfb0: 0960                      RETS   
1bfc0: 098f 9000                 MMTM   SP,A0,A3
1bfe0: a7c8                      MOVE   -*A14,A8,1
1bff0: 2d88                      SRL    14h,A8
1c000: a7c0                      MOVE   -*A14,A0,1
1c010: 4c03                      MOVE   A0,A3
1c020: 2583                      SLL    Ch,A3
1c030: 5468                      OR     A3,A8
1c040: 2420                      SLL    1h,A0
1c050: 4663                      SUBB   A3,A3
1c060: 2d60                      SRL    15h,A0
1c070: 2fc8                      SRL    2h,A8
1c080: 0ba8 0000 4000            ORI    40000000h,A8
1c0b0: 1020                      INC    A0
1c0c0: 0be0 fc00                 SUBI   3FFh,A0
1c0e0: c60a                      JRLE   1C190h
1c0f0: 17e0                      SUBK   1Fh,A0
1c100: c70c                      JRGT   1C1D0h
1c110: 6608                      SRL    A0,A8
1c120: 4c63                      MOVE   A3,A3
1c130: ca01                      JREQ   1C150h
1c140: 03a8                      NEG    A8
1c150: 09af 0009                 MMFM   SP,A0,A3
1c170: 4d08                      MOVE   A8,A8
1c180: 0960                      RETS   
1c190: 09af 0009                 MMFM   SP,A0,A3
1c1b0: 4508                      SUB    A8,A8
1c1c0: 0960                      RETS   
1c1d0: 1820                      MOVK   1h,A0
1c1e0: a3cf                      MOVE   A14,-*SP,1
1c1f0: 920e                      MOVE   A0,*A14+,1
1c200: 0d5f 05f0 0002            CALLA  205F0h
1c230: 0bc3 ffff 7fff            XORI   7FFFFFFFh,A3
1c260: 4c68                      MOVE   A3,A8
1c270: 09af 0009                 MMFM   SP,A0,A3
1c290: 0960                      RETS   
1c2a0: 2d60                      SRL    15h,A0
1c2b0: 2fc8                      SRL    2h,A8
1c2c0: 0ba8 0000 4000            ORI    40000000h,A8
1c2f0: 1020                      INC    A0
1c300: 0be0 fc00                 SUBI   3FFh,A0
1c320: c625                      JRLE   1C580h
1c330: 17e0                      SUBK   1Fh,A0
1c340: c727                      JRGT   1C5C0h
1c350: 6608                      SRL    A0,A8
1c360: 4c63                      MOVE   A3,A3
1c370: ca01                      JREQ   1C390h
1c380: 03a8                      NEG    A8
1c390: 09af 0009                 MMFM   SP,A0,A3
1c3b0: 4d08                      MOVE   A8,A8
1c3c0: 0960                      RETS   

FD$DTOU:
1c3d0: 098f 9000                 MMTM   SP,A0,A3
1c3f0: a7c8                      MOVE   -*A14,A8,1
1c400: 2d88                      SRL    14h,A8
1c410: a7c0                      MOVE   -*A14,A0,1
1c420: 4c03                      MOVE   A0,A3
1c430: 2583                      SLL    Ch,A3
1c440: 5468                      OR     A3,A8
1c450: 2420                      SLL    1h,A0
1c460: 4663                      SUBB   A3,A3
1c470: cbe2                      JRNE   1C2A0h
1c480: 2d60                      SRL    15h,A0
1c490: 2fe8                      SRL    1h,A8
1c4a0: 0ba8 0000 8000            ORI    80000000h,A8
1c4d0: 1020                      INC    A0
1c4e0: 0be0 fc00                 SUBI   3FFh,A0
1c500: c607                      JRLE   1C580h
1c510: 1400                      SUBK   20h,A0
1c520: c709                      JRGT   1C5C0h
1c530: 6608                      SRL    A0,A8
1c540: 09af 0009                 MMFM   SP,A0,A3
1c560: 4d08                      MOVE   A8,A8
1c570: 0960                      RETS   
1c580: 09af 0009                 MMFM   SP,A0,A3
1c5a0: 4508                      SUB    A8,A8
1c5b0: 0960                      RETS   
1c5c0: 1820                      MOVK   1h,A0
1c5d0: a3cf                      MOVE   A14,-*SP,1
1c5e0: 920e                      MOVE   A0,*A14+,1
1c5f0: 0d5f 05f0 0002            CALLA  205F0h
1c620: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
1c650: 4c68                      MOVE   A3,A8
1c660: 09af 0009                 MMFM   SP,A0,A3
1c680: 0960                      RETS   

FD$FTOD:
1c690: 07a8 0000 0000            MOVE   @0h,A8,1
1c6c0: ca09                      JREQ   1C760h
1c6d0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
1c700: d83e 0080                 CEXEC  0,00101F,0
1c720: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1c750: 0960                      RETS   
1c760: 098f c000                 MMTM   SP,A0,A1
1c780: a7c8                      MOVE   -*A14,A8,1
1c790: 4d01                      MOVE   A8,A1
1c7a0: 2421                      SLL    1h,A1
1c7b0: 4600                      SUBB   A0,A0
1c7c0: 2d01                      SRL    18h,A1
1c7d0: ca14                      JREQ   1C920h
1c7e0: 27e0                      SLL    1Fh,A0
1c7f0: 0b41 ff00                 CMPI   FFh,A1
1c810: cb02                      JRNE   1C840h
1c820: 09c1 047f                 MOVI   47Fh,A1
1c840: 0b01 0380                 ADDI   380h,A1
1c860: 2681                      SLL    14h,A1
1c870: 5420                      OR     A1,A0
1c880: 4d01                      MOVE   A8,A1
1c890: 27a1                      SLL    1Dh,A1
1c8a0: 2528                      SLL    9h,A8
1c8b0: 2e88                      SRL    Ch,A8
1c8c0: 5500                      OR     A8,A0
1c8d0: 920e                      MOVE   A0,*A14+,1
1c8e0: 922e                      MOVE   A1,*A14+,1
1c8f0: 09af 0003                 MMFM   SP,A0,A1
1c910: 0960                      RETS   
1c920: 922e                      MOVE   A1,*A14+,1
1c930: 922e                      MOVE   A1,*A14+,1
1c940: 09af 0003                 MMFM   SP,A0,A1
1c960: 0960                      RETS   

FD$FTOI:
1c970: 07a8 0000 0000            MOVE   @0h,A8,1
1c9a0: ca15                      JREQ   1CB00h
1c9b0: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
1c9e0: a30f                      MOVE   A8,-*SP,1
1c9f0: 09c8 0029                 MOVI   29h,A8
1ca10: 0628 4c00 000d            CMOVGC A8,000D4C,0
1ca40: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
1ca70: d83e 00a0                 CEXEC  0,00141F,0
1ca90: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
1cac0: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
1caf0: 0960                      RETS   
1cb00: 098f 9000                 MMTM   SP,A0,A3
1cb20: a7c0                      MOVE   -*A14,A0,1
1cb30: 4c08                      MOVE   A0,A8
1cb40: 2420                      SLL    1h,A0
1cb50: 4663                      SUBB   A3,A3
1cb60: 2d00                      SRL    18h,A0
1cb70: 2528                      SLL    9h,A8
1cb80: 2fc8                      SRL    2h,A8
1cb90: 0ba8 0000 4000            ORI    40000000h,A8
1cbc0: 1020                      INC    A0
1cbd0: 0be0 ff80                 SUBI   7Fh,A0
1cbf0: c60a                      JRLE   1CCA0h
1cc00: 17e0                      SUBK   1Fh,A0
1cc10: c70c                      JRGT   1CCE0h
1cc20: 6608                      SRL    A0,A8
1cc30: 4c63                      MOVE   A3,A3
1cc40: ca01                      JREQ   1CC60h
1cc50: 03a8                      NEG    A8
1cc60: 09af 0009                 MMFM   SP,A0,A3
1cc80: 4d08                      MOVE   A8,A8
1cc90: 0960                      RETS   
1cca0: 09af 0009                 MMFM   SP,A0,A3
1ccc0: 4508                      SUB    A8,A8
1ccd0: 0960                      RETS   
1cce0: 1860                      MOVK   3h,A0
1ccf0: a3cf                      MOVE   A14,-*SP,1
1cd00: 920e                      MOVE   A0,*A14+,1
1cd10: 0d5f 05f0 0002            CALLA  205F0h
1cd40: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
1cd70: 4c68                      MOVE   A3,A8
1cd80: 09af 0009                 MMFM   SP,A0,A3
1cda0: 0960                      RETS   

FD$ITOD:
1cdb0: a38f                      MOVE   A12,-*SP,1
1cdc0: 07ac 0000 0000            MOVE   @0h,A12,1
1cdf0: ca0a                      JREQ   1CEA0h
1ce00: 0628 4c00 0000            CMOVGC A8,00004C,0
1ce30: d83f 00c0                 CEXEC  1,00181F,0
1ce50: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1ce80: 97ec                      MOVE   *SP+,A12,1
1ce90: 0960                      RETS   
1cea0: 098f c000                 MMTM   SP,A0,A1
1cec0: 5600                      CLR    A0
1ced0: 0388                      ABS    A8
1cee0: ca1a                      JREQ   1D090h
1cef0: c402                      JRLT   1CF20h
1cf00: 1820                      MOVK   1h,A0
1cf10: 27e0                      SLL    1Fh,A0
1cf20: 6b01                      LMO    A8,A1
1cf30: 1021                      INC    A1
1cf40: 0b41 ffdf                 CMPI   20h,A1
1cf60: cb02                      JRNE   1CF90h
1cf70: 5708                      CLR    A8
1cf80: c001                      JR     1CFA0h
1cf90: 6228                      SLL    A1,A8
1cfa0: 03a1                      NEG    A1
1cfb0: 0b01 041f                 ADDI   41Fh,A1
1cfd0: 2681                      SLL    14h,A1
1cfe0: 5420                      OR     A1,A0
1cff0: 4d01                      MOVE   A8,A1
1d000: 2681                      SLL    14h,A1
1d010: 2e88                      SRL    Ch,A8
1d020: 5500                      OR     A8,A0
1d030: 920e                      MOVE   A0,*A14+,1
1d040: 922e                      MOVE   A1,*A14+,1
1d050: 09af 0003                 MMFM   SP,A0,A1
1d070: 97ec                      MOVE   *SP+,A12,1
1d080: 0960                      RETS   
1d090: 5600                      CLR    A0
1d0a0: 920e                      MOVE   A0,*A14+,1
1d0b0: 920e                      MOVE   A0,*A14+,1
1d0c0: 09af 0003                 MMFM   SP,A0,A1
1d0e0: 97ec                      MOVE   *SP+,A12,1
1d0f0: 0960                      RETS   
1d100: 0000                      DW     0000h
1d110: 41f0                      ADD    SP,B0
1d120: 0000                      DW     0000h
1d130: 0000                      DW     0000h

FD$UTOD:
1d140: a38f                      MOVE   A12,-*SP,1
1d150: 07ac 0000 0000            MOVE   @0h,A12,1
1d180: ca1a                      JREQ   1D330h
1d190: 0628 4c00 0000            CMOVGC A8,00004C,0
1d1c0: d83f 00c0                 CEXEC  1,00181F,0
1d1e0: d807 1bb0                 CEXEC  1,037603,0
1d200: d80b 0000                 CEXEC  1,000005,0
1d220: 0660 4e01 000c            CMOVCS ,000C4E,0
1d250: cf08                      JRNN   1D2E0h
1d260: 09ec d100 0001            MOVI   1D100h,A12
1d290: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
1d2c0: d803 0000                 CEXEC  1,000001,0
1d2e0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1d310: 97ec                      MOVE   *SP+,A12,1
1d320: 0960                      RETS   
1d330: 098f c000                 MMTM   SP,A0,A1
1d350: 5600                      CLR    A0
1d360: 4d08                      MOVE   A8,A8
1d370: ca17                      JREQ   1D4F0h
1d380: 6b01                      LMO    A8,A1
1d390: 1021                      INC    A1
1d3a0: 0b41 ffdf                 CMPI   20h,A1
1d3c0: cb02                      JRNE   1D3F0h
1d3d0: 5708                      CLR    A8
1d3e0: c001                      JR     1D400h
1d3f0: 6228                      SLL    A1,A8
1d400: 03a1                      NEG    A1
1d410: 0b01 041f                 ADDI   41Fh,A1
1d430: 2681                      SLL    14h,A1
1d440: 5420                      OR     A1,A0
1d450: 4d01                      MOVE   A8,A1
1d460: 2681                      SLL    14h,A1
1d470: 2e88                      SRL    Ch,A8
1d480: 5500                      OR     A8,A0
1d490: 920e                      MOVE   A0,*A14+,1
1d4a0: 922e                      MOVE   A1,*A14+,1
1d4b0: 09af 0003                 MMFM   SP,A0,A1
1d4d0: 97ec                      MOVE   *SP+,A12,1
1d4e0: 0960                      RETS   
1d4f0: 5600                      CLR    A0
1d500: 920e                      MOVE   A0,*A14+,1
1d510: 920e                      MOVE   A0,*A14+,1
1d520: 09af 0003                 MMFM   SP,A0,A1
1d540: 97ec                      MOVE   *SP+,A12,1
1d550: 0960                      RETS   
1d560: 0000                      DW     0000h
1d570: 4f80                      MOVE   A12,B0

FD$UTOF:
1d580: a38f                      MOVE   A12,-*SP,1
1d590: 07ac 0000 0000            MOVE   @0h,A12,1
1d5c0: ca1a                      JREQ   1D770h
1d5d0: 0628 4c00 0000            CMOVGC A8,00004C,0
1d600: d83e 00c0                 CEXEC  0,00181F,0
1d620: d806 1bb0                 CEXEC  0,037603,0
1d640: d80a 0000                 CEXEC  0,000005,0
1d660: 0660 4e01 000c            CMOVCS ,000C4E,0
1d690: cf08                      JRNN   1D720h
1d6a0: 09ec d560 0001            MOVI   1D560h,A12
1d6d0: 0681 8d0c 0010            CMOVMC *A12+,1,0,00108D,0
1d700: d802 0000                 CEXEC  0,000001,0
1d720: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
1d750: 97ec                      MOVE   *SP+,A12,1
1d760: 0960                      RETS   
1d770: 098f c000                 MMTM   SP,A0,A1
1d790: 5600                      CLR    A0
1d7a0: 4d08                      MOVE   A8,A8
1d7b0: ca15                      JREQ   1D910h
1d7c0: 6b01                      LMO    A8,A1
1d7d0: 1021                      INC    A1
1d7e0: 0b41 ffdf                 CMPI   20h,A1
1d800: cb02                      JRNE   1D830h
1d810: 5708                      CLR    A8
1d820: c001                      JR     1D840h
1d830: 6228                      SLL    A1,A8
1d840: 03a1                      NEG    A1
1d850: 2ee8                      SRL    9h,A8
1d860: c905                      JRNC   1D8C0h
1d870: 1028                      INC    A8
1d880: 1d08                      BTST   17h,A8
1d890: ca02                      JREQ   1D8C0h
1d8a0: 1021                      INC    A1
1d8b0: 2fe8                      SRL    1h,A8
1d8c0: 0b01 009f                 ADDI   9Fh,A1
1d8e0: 26e1                      SLL    17h,A1
1d8f0: 5420                      OR     A1,A0
1d900: 5500                      OR     A8,A0
1d910: 920e                      MOVE   A0,*A14+,1
1d920: 09af 0003                 MMFM   SP,A0,A1
1d940: 97ec                      MOVE   *SP+,A12,1
1d950: 0960                      RETS   

FD$SUB_R:
1d960: 07a8 0000 0000            MOVE   @0h,A8,1
1d990: ca3f                      JREQ   1DD90h
1d9a0: 4dc8                      MOVE   A14,A8
1d9b0: 0be8 ff7f                 SUBI   80h,A8
1d9d0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1da00: d83f 0060                 CEXEC  1,000C1F,0
1da20: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
1da50: 0bee ff7f                 SUBI   80h,A14
1da70: d803 0000                 CEXEC  1,000001,0
1da90: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1dac0: 0960                      RETS   

FD$SUB:
1dad0: 07a8 0000 0000            MOVE   @0h,A8,1
1db00: ca32                      JREQ   1DE30h
1db10: 4dc8                      MOVE   A14,A8
1db20: 0be8 ff7f                 SUBI   80h,A8
1db40: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
1db70: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1dba0: d83f 0060                 CEXEC  1,000C1F,0
1dbc0: 0bee ff7f                 SUBI   80h,A14
1dbe0: d803 0000                 CEXEC  1,000001,0
1dc00: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1dc30: 0960                      RETS   

FD$ADD:
1dc40: 07a8 0000 0000            MOVE   @0h,A8,1
1dc70: ca23                      JREQ   1DEB0h
1dc80: 4dc8                      MOVE   A14,A8
1dc90: 0be8 ff7f                 SUBI   80h,A8
1dcb0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
1dce0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
1dd10: 0bee ff7f                 SUBI   80h,A14
1dd30: d803 0000                 CEXEC  1,000001,0
1dd50: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1dd80: 0960                      RETS   
1dd90: 098f ff00                 MMTM   SP,A0-A7
1ddb0: a7c4                      MOVE   -*A14,A4,1
1ddc0: a7c3                      MOVE   -*A14,A3,1
1ddd0: a7c6                      MOVE   -*A14,A6,1
1dde0: a7c5                      MOVE   -*A14,A5,1
1ddf0: 0bc5 0000 8000            XORI   80000000h,A5
1de20: c00e                      JR     1DF10h
1de30: 098f ff00                 MMTM   SP,A0-A7
1de50: a7c6                      MOVE   -*A14,A6,1
1de60: a7c5                      MOVE   -*A14,A5,1
1de70: 0bc5 0000 8000            XORI   80000000h,A5
1dea0: c004                      JR     1DEF0h
1deb0: 098f ff00                 MMTM   SP,A0-A7
1ded0: a7c6                      MOVE   -*A14,A6,1
1dee0: a7c5                      MOVE   -*A14,A5,1
1def0: a7c4                      MOVE   -*A14,A4,1
1df00: a7c3                      MOVE   -*A14,A3,1
1df10: 4c61                      MOVE   A3,A1
1df20: 2421                      SLL    1h,A1
1df30: ca00 00a8                 JREQ   1E9D0h
1df50: 4ca2                      MOVE   A5,A2
1df60: 2422                      SLL    1h,A2
1df70: ca00 009c                 JREQ   1E950h
1df90: 4c61                      MOVE   A3,A1
1dfa0: 4ca2                      MOVE   A5,A2
1dfb0: 2583                      SLL    Ch,A3
1dfc0: 2fa3                      SRL    3h,A3
1dfd0: 0ba3 0000 2000            ORI    20000000h,A3
1e000: 4c88                      MOVE   A4,A8
1e010: ca03                      JREQ   1E050h
1e020: 2d28                      SRL    17h,A8
1e030: 5503                      OR     A8,A3
1e040: 2524                      SLL    9h,A4
1e050: 2585                      SLL    Ch,A5
1e060: 2fa5                      SRL    3h,A5
1e070: 0ba5 0000 2000            ORI    20000000h,A5
1e0a0: 4cc8                      MOVE   A6,A8
1e0b0: ca03                      JREQ   1E0F0h
1e0c0: 2d28                      SRL    17h,A8
1e0d0: 5505                      OR     A8,A5
1e0e0: 2526                      SLL    9h,A6
1e0f0: 2421                      SLL    1h,A1
1e100: 4600                      SUBB   A0,A0
1e110: 2422                      SLL    1h,A2
1e120: 4708                      SUBB   A8,A8
1e130: 2d61                      SRL    15h,A1
1e140: 2d62                      SRL    15h,A2
1e150: 09c7 07ff                 MOVI   7FFh,A7
1e170: 48e1                      CMP    A7,A1
1e180: ca00 0086                 JREQ   1EA00h
1e1a0: 48e2                      CMP    A7,A2
1e1b0: ca00 0088                 JREQ   1EA50h
1e1d0: 4441                      SUB    A2,A1
1e1e0: ca03                      JREQ   1E220h
1e1f0: c608                      JRLE   1E280h
1e200: 4022                      ADD    A1,A2
1e210: c010                      JR     1E320h
1e220: 4865                      CMP    A3,A5
1e230: c40e                      JRLT   1E320h
1e240: c704                      JRGT   1E290h
1e250: 4886                      CMP    A4,A6
1e260: c20b                      JRLS   1E320h
1e270: c004                      JR     1E2C0h
1e280: 03a1                      NEG    A1
1e290: 4c67                      MOVE   A3,A7
1e2a0: 4ca3                      MOVE   A5,A3
1e2b0: 4ce5                      MOVE   A7,A5
1e2c0: 4c87                      MOVE   A4,A7
1e2d0: 4cc4                      MOVE   A6,A4
1e2e0: 4ce6                      MOVE   A7,A6
1e2f0: 4c07                      MOVE   A0,A7
1e300: 4d00                      MOVE   A8,A0
1e310: 4ce8                      MOVE   A7,A8
1e320: 4c21                      MOVE   A1,A1
1e330: ca18                      JREQ   1E4C0h
1e340: 0b41 ffe1                 CMPI   1Eh,A1
1e360: c40e                      JRLT   1E450h
1e370: 0b41 ffc2                 CMPI   3Dh,A1
1e390: c708                      JRGT   1E420h
1e3a0: 17c1                      SUBK   1Eh,A1
1e3b0: 2445                      SLL    2h,A5
1e3c0: 2c46                      SRL    1Eh,A6
1e3d0: 54a6                      OR     A5,A6
1e3e0: 56a5                      CLR    A5
1e3f0: 03a1                      NEG    A1
1e400: 6626                      SRL    A1,A6
1e410: c00a                      JR     1E4C0h
1e420: 56a5                      CLR    A5
1e430: 56c6                      CLR    A6
1e440: c007                      JR     1E4C0h
1e450: 4ca7                      MOVE   A5,A7
1e460: 03a1                      NEG    A1
1e470: 6625                      SRL    A1,A5
1e480: 6626                      SRL    A1,A6
1e490: 1001                      ADDK   20h,A1
1e4a0: 6227                      SLL    A1,A7
1e4b0: 54e6                      OR     A7,A6
1e4c0: 4808                      CMP    A0,A8
1e4d0: ca27                      JREQ   1E750h
1e4e0: 44c4                      SUB    A6,A4
1e4f0: 46a3                      SUBB   A5,A3
1e500: 6a67                      LMO    A3,A7
1e510: ca0a                      JREQ   1E5C0h
1e520: 1447                      SUBK   2h,A7
1e530: ca10                      JREQ   1E640h
1e540: 44e2                      SUB    A7,A2
1e550: 62e3                      SLL    A7,A3
1e560: 4c81                      MOVE   A4,A1
1e570: 62e4                      SLL    A7,A4
1e580: 1407                      SUBK   20h,A7
1e590: 66e1                      SRL    A7,A1
1e5a0: 5423                      OR     A1,A3
1e5b0: c008                      JR     1E640h
1e5c0: 6a87                      LMO    A4,A7
1e5d0: ca3c                      JREQ   1E9A0h
1e5e0: 17c2                      SUBK   1Eh,A2
1e5f0: 68e4                      RL     A7,A4
1e600: 4c83                      MOVE   A4,A3
1e610: 2fc3                      SRL    2h,A3
1e620: 27c4                      SLL    1Eh,A4
1e630: 44e2                      SUB    A7,A2
1e640: 56e7                      CLR    A7
1e650: 1ee4                      BTST   8h,A4
1e660: ca07                      JREQ   1E6E0h
1e670: 0b04 0100                 ADDI   100h,A4
1e690: 42e3                      ADDC   A7,A3
1e6a0: 1c23                      BTST   1Eh,A3
1e6b0: ca02                      JREQ   1E6E0h
1e6c0: 1022                      INC    A2
1e6d0: c003                      JR     1E710h
1e6e0: 2423                      SLL    1h,A3
1e6f0: 2424                      SLL    1h,A4
1e700: 42e3                      ADDC   A7,A3
1e710: 0b83 0000 c000            ANDI   3FFFFFFFh,A3
1e740: c00c                      JR     1E810h
1e750: 40c4                      ADD    A6,A4
1e760: 42a3                      ADDC   A5,A3
1e770: 1c23                      BTST   1Eh,A3
1e780: caeb                      JREQ   1E640h
1e790: 1022                      INC    A2
1e7a0: 2fe4                      SRL    1h,A4
1e7b0: 2fe3                      SRL    1h,A3
1e7c0: c9e7                      JRNC   1E640h
1e7d0: 0ba4 0000 8000            ORI    80000000h,A4
1e800: c0e3                      JR     1E640h
1e810: 4c42                      MOVE   A2,A2
1e820: c437                      JRLT   1EBA0h
1e830: cb05                      JRNE   1E890h
1e840: 4c63                      MOVE   A3,A3
1e850: cb34                      JRNE   1EBA0h
1e860: 4c84                      MOVE   A4,A4
1e870: cb32                      JRNE   1EBA0h
1e880: c011                      JR     1E9A0h
1e890: 0b42 f800                 CMPI   7FFh,A2
1e8b0: c527                      JRGE   1EB30h
1e8c0: 4c68                      MOVE   A3,A8
1e8d0: 2ec3                      SRL    Ah,A3
1e8e0: 2ec4                      SRL    Ah,A4
1e8f0: 26c8                      SLL    16h,A8
1e900: 5504                      OR     A8,A4
1e910: 27e0                      SLL    1Fh,A0
1e920: 2682                      SLL    14h,A2
1e930: 5443                      OR     A2,A3
1e940: 5403                      OR     A0,A3
1e950: 926e                      MOVE   A3,*A14+,1
1e960: 928e                      MOVE   A4,*A14+,1
1e970: 09af 00ff                 MMFM   SP,A0-A7
1e990: 0960                      RETS   
1e9a0: 5663                      CLR    A3
1e9b0: 5684                      CLR    A4
1e9c0: c0f8                      JR     1E950h
1e9d0: 4ca3                      MOVE   A5,A3
1e9e0: 4cc4                      MOVE   A6,A4
1e9f0: c0f5                      JR     1E950h
1ea00: 48e2                      CMP    A7,A2
1ea10: cb04                      JRNE   1EA60h
1ea20: 4808                      CMP    A0,A8
1ea30: cb0c                      JRNE   1EB00h
1ea40: c001                      JR     1EA60h
1ea50: 4d00                      MOVE   A8,A0
1ea60: 5621                      CLR    A1
1ea70: 27e0                      SLL    1Fh,A0
1ea80: 0ba0 0000 7ff0            ORI    7FF00000h,A0
1eab0: 920e                      MOVE   A0,*A14+,1
1eac0: 922e                      MOVE   A1,*A14+,1
1ead0: 09af 00ff                 MMFM   SP,A0-A7
1eaf0: 0960                      RETS   
1eb00: 5663                      CLR    A3
1eb10: 1880                      MOVK   4h,A0
1eb20: c009                      JR     1EBC0h
1eb30: 4c03                      MOVE   A0,A3
1eb40: 27e3                      SLL    1Fh,A3
1eb50: 0ba3 0000 7ff0            ORI    7FF00000h,A3
1eb80: 18a0                      MOVK   5h,A0
1eb90: c002                      JR     1EBC0h
1eba0: 1980                      MOVK   Ch,A0
1ebb0: 5663                      CLR    A3
1ebc0: a3cf                      MOVE   A14,-*SP,1
1ebd0: 920e                      MOVE   A0,*A14+,1
1ebe0: 0d5f 05f0 0002            CALLA  205F0h
1ec10: 5621                      CLR    A1
1ec20: 926e                      MOVE   A3,*A14+,1
1ec30: 922e                      MOVE   A1,*A14+,1
1ec40: 09af 00ff                 MMFM   SP,A0-A7
1ec60: 0960                      RETS   

FD$DIV_R:
1ec70: 07a8 0000 0000            MOVE   @0h,A8,1
1eca0: ca2a                      JREQ   1EF50h
1ecb0: a38f                      MOVE   A12,-*SP,1
1ecc0: 4dcc                      MOVE   A14,A12
1ecd0: 0bec ff7f                 SUBI   80h,A12
1ecf0: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
1ed20: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
1ed50: 0bee ff7f                 SUBI   80h,A14
1ed70: d827 0000                 CEXEC  1,000013,0
1ed90: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1edc0: 97ec                      MOVE   *SP+,A12,1
1edd0: 0960                      RETS   

FD$DIV:
1ede0: 07a8 0000 0000            MOVE   @0h,A8,1
1ee10: ca1a                      JREQ   1EFC0h
1ee20: a38f                      MOVE   A12,-*SP,1
1ee30: 4dcc                      MOVE   A14,A12
1ee40: 0bec ff7f                 SUBI   80h,A12
1ee60: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
1ee90: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
1eec0: 0bee ff7f                 SUBI   80h,A14
1eee0: d827 0000                 CEXEC  1,000013,0
1ef00: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1ef30: 97ec                      MOVE   *SP+,A12,1
1ef40: 0960                      RETS   
1ef50: 098f ff40                 MMTM   SP,A0-A7,A9
1ef70: a7c1                      MOVE   -*A14,A1,1
1ef80: a7c4                      MOVE   -*A14,A4,1
1ef90: a7c3                      MOVE   -*A14,A3,1
1efa0: a7c5                      MOVE   -*A14,A5,1
1efb0: c006                      JR     1F020h
1efc0: 098f ff40                 MMTM   SP,A0-A7,A9
1efe0: a7c3                      MOVE   -*A14,A3,1
1eff0: a7c5                      MOVE   -*A14,A5,1
1f000: a7c1                      MOVE   -*A14,A1,1
1f010: a7c4                      MOVE   -*A14,A4,1
1f020: 4c28                      MOVE   A1,A8
1f030: 24e1                      SLL    7h,A1
1f040: 2ce8                      SRL    19h,A8
1f050: 4c80                      MOVE   A4,A0
1f060: 2580                      SLL    Ch,A0
1f070: 2f60                      SRL    5h,A0
1f080: 0ba0 0000 0800            ORI    8000000h,A0
1f0b0: 5500                      OR     A8,A0
1f0c0: 4c68                      MOVE   A3,A8
1f0d0: 2563                      SLL    Bh,A3
1f0e0: 2d68                      SRL    15h,A8
1f0f0: 4ca2                      MOVE   A5,A2
1f100: 2582                      SLL    Ch,A2
1f110: 2fe2                      SRL    1h,A2
1f120: 0ba2 0000 8000            ORI    80000000h,A2
1f150: 5502                      OR     A8,A2
1f160: 2424                      SLL    1h,A4
1f170: 4729                      SUBB   A9,A9
1f180: 2425                      SLL    1h,A5
1f190: 4708                      SUBB   A8,A8
1f1a0: 5709                      XOR    A8,A9
1f1b0: 27e9                      SLL    1Fh,A9
1f1c0: 2d64                      SRL    15h,A4
1f1d0: 2d65                      SRL    15h,A5
1f1e0: ca56                      JREQ   1F750h
1f1f0: 0b45 f800                 CMPI   7FFh,A5
1f210: cb03                      JRNE   1F250h
1f220: 48a4                      CMP    A5,A4
1f230: ca56                      JREQ   1F7A0h
1f240: c042                      JR     1F670h
1f250: 0b44 f800                 CMPI   7FFh,A4
1f270: ca32                      JREQ   1F5A0h
1f280: 4c84                      MOVE   A4,A4
1f290: ca3d                      JREQ   1F670h
1f2a0: 5708                      CLR    A8
1f2b0: 5a40                      DIVU   A2,A0
1f2c0: 4c26                      MOVE   A1,A6
1f2d0: 56e7                      CLR    A7
1f2e0: 5a46                      DIVU   A2,A6
1f2f0: 4cc1                      MOVE   A6,A1
1f300: 4c06                      MOVE   A0,A6
1f310: 5e66                      MPYU   A3,A6
1f320: 5a46                      DIVU   A2,A6
1f330: 44c1                      SUB    A6,A1
1f340: 4700                      SUBB   A8,A0
1f350: 1c60                      BTST   1Ch,A0
1f360: ca07                      JREQ   1F3E0h
1f370: 1425                      DEC    A5
1f380: 2fe1                      SRL    1h,A1
1f390: 2fe0                      SRL    1h,A0
1f3a0: c903                      JRNC   1F3E0h
1f3b0: 0ba1 0000 8000            ORI    80000000h,A1
1f3e0: 1f21                      BTST   6h,A1
1f3f0: ca07                      JREQ   1F470h
1f400: 0b01 0040                 ADDI   40h,A1
1f420: 4300                      ADDC   A8,A0
1f430: 1c60                      BTST   1Ch,A0
1f440: ca02                      JREQ   1F470h
1f450: 1425                      DEC    A5
1f460: c004                      JR     1F4B0h
1f470: 1025                      INC    A5
1f480: 2420                      SLL    1h,A0
1f490: 2421                      SLL    1h,A1
1f4a0: 4300                      ADDC   A8,A0
1f4b0: 0b80 0000 f000            ANDI   FFFFFFFh,A0
1f4e0: 4c86                      MOVE   A4,A6
1f4f0: 44a4                      SUB    A5,A4
1f500: 0b04 03ff                 ADDI   3FFh,A4
1f520: c61f                      JRLE   1F720h
1f530: 0b44 f800                 CMPI   7FFh,A4
1f550: c404                      JRLT   1F5A0h
1f560: 09c4 07ff                 MOVI   7FFh,A4
1f580: 48c4                      CMP    A6,A4
1f590: cb13                      JRNE   1F6D0h
1f5a0: 4c08                      MOVE   A0,A8
1f5b0: 2f00                      SRL    8h,A0
1f5c0: 2f01                      SRL    8h,A1
1f5d0: 2708                      SLL    18h,A8
1f5e0: 5501                      OR     A8,A1
1f5f0: 2684                      SLL    14h,A4
1f600: 5524                      OR     A9,A4
1f610: 5480                      OR     A4,A0
1f620: 920e                      MOVE   A0,*A14+,1
1f630: 922e                      MOVE   A1,*A14+,1
1f640: 09af 02ff                 MMFM   SP,A0-A7,A9
1f660: 0960                      RETS   
1f670: 56c6                      CLR    A6
1f680: 92ce                      MOVE   A6,*A14+,1
1f690: 92ce                      MOVE   A6,*A14+,1
1f6a0: 09af 02ff                 MMFM   SP,A0-A7,A9
1f6c0: 0960                      RETS   
1f6d0: 0ba9 0000 7ff0            ORI    7FF00000h,A9
1f700: 18e0                      MOVK   7h,A0
1f710: c00c                      JR     1F7E0h
1f720: 5729                      CLR    A9
1f730: 19c0                      MOVK   Eh,A0
1f740: c009                      JR     1F7E0h
1f750: 0ba9 0000 7ff0            ORI    7FF00000h,A9
1f780: 19e0                      MOVK   Fh,A0
1f790: c004                      JR     1F7E0h
1f7a0: 0ba9 0000 3ff0            ORI    3FF00000h,A9
1f7d0: 1a00                      MOVK   10h,A0
1f7e0: a3cf                      MOVE   A14,-*SP,1
1f7f0: 920e                      MOVE   A0,*A14+,1
1f800: 0d5f 05f0 0002            CALLA  205F0h
1f830: 56a5                      CLR    A5
1f840: 932e                      MOVE   A9,*A14+,1
1f850: 92ae                      MOVE   A5,*A14+,1
1f860: 09af 02ff                 MMFM   SP,A0-A7,A9
1f880: 0960                      RETS   

FD$MUL:
1f890: 07a8 0000 0000            MOVE   @0h,A8,1
1f8c0: ca13                      JREQ   1FA00h
1f8d0: a38f                      MOVE   A12,-*SP,1
1f8e0: 4dcc                      MOVE   A14,A12
1f8f0: 0bec ff7f                 SUBI   80h,A12
1f910: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
1f940: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
1f970: 0bee ff7f                 SUBI   80h,A14
1f990: d823 0000                 CEXEC  1,000011,0
1f9b0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
1f9e0: 97ec                      MOVE   *SP+,A12,1
1f9f0: 0960                      RETS   
1fa00: 098f ff70                 MMTM   SP,A0-A7,A9-A11
1fa20: a7c1                      MOVE   -*A14,A1,1
1fa30: a7c0                      MOVE   -*A14,A0,1
1fa40: a7c3                      MOVE   -*A14,A3,1
1fa50: a7c2                      MOVE   -*A14,A2,1
1fa60: 56a5                      CLR    A5
1fa70: 4c00                      MOVE   A0,A0
1fa80: ca5f                      JREQ   20080h
1fa90: 4c42                      MOVE   A2,A2
1faa0: ca5d                      JREQ   20080h
1fab0: 4c08                      MOVE   A0,A8
1fac0: 4c4b                      MOVE   A2,A11
1fad0: 242b                      SLL    1h,A11
1fae0: 474a                      SUBB   A10,A10
1faf0: 2428                      SLL    1h,A8
1fb00: 46a5                      SUBB   A5,A5
1fb10: 56aa                      XOR    A5,A10
1fb20: 27ea                      SLL    1Fh,A10
1fb30: 2d68                      SRL    15h,A8
1fb40: 2d6b                      SRL    15h,A11
1fb50: 0b4b f800                 CMPI   7FFh,A11
1fb70: ca56                      JREQ   200E0h
1fb80: 0b48 f800                 CMPI   7FFh,A8
1fba0: ca52                      JREQ   200D0h
1fbb0: 410b                      ADD    A8,A11
1fbc0: 0beb fc00                 SUBI   3FFh,A11
1fbe0: 4c68                      MOVE   A3,A8
1fbf0: 2563                      SLL    Bh,A3
1fc00: 2562                      SLL    Bh,A2
1fc10: 0ba2 0000 8000            ORI    80000000h,A2
1fc40: 2d68                      SRL    15h,A8
1fc50: 5502                      OR     A8,A2
1fc60: 4c28                      MOVE   A1,A8
1fc70: 2560                      SLL    Bh,A0
1fc80: 2561                      SLL    Bh,A1
1fc90: 0ba0 0000 8000            ORI    80000000h,A0
1fcc0: 2d68                      SRL    15h,A8
1fcd0: 5500                      OR     A8,A0
1fce0: 4c08                      MOVE   A0,A8
1fcf0: 4c26                      MOVE   A1,A6
1fd00: 4c24                      MOVE   A1,A4
1fd10: 5e40                      MPYU   A2,A0
1fd20: 5e68                      MPYU   A3,A8
1fd30: 5e46                      MPYU   A2,A6
1fd40: 5e64                      MPYU   A3,A4
1fd50: 56a5                      CLR    A5
1fd60: 4d22                      MOVE   A9,A2
1fd70: 4101                      ADD    A8,A1
1fd80: 42a0                      ADDC   A5,A0
1fd90: 40e2                      ADD    A7,A2
1fda0: 42c1                      ADDC   A6,A1
1fdb0: 42a0                      ADDC   A5,A0
1fdc0: 4082                      ADD    A4,A2
1fdd0: 42a1                      ADDC   A5,A1
1fde0: 42a0                      ADDC   A5,A0
1fdf0: ca28                      JREQ   20080h
1fe00: 102b                      INC    A11
1fe10: 1c00                      BTST   1Fh,A0
1fe20: cb04                      JRNE   1FE70h
1fe30: 142b                      DEC    A11
1fe40: 2420                      SLL    1h,A0
1fe50: 2421                      SLL    1h,A1
1fe60: 42a0                      ADDC   A5,A0
1fe70: 1ea1                      BTST   Ah,A1
1fe80: ca06                      JREQ   1FEF0h
1fe90: 0b01 0400                 ADDI   400h,A1
1feb0: 42a0                      ADDC   A5,A0
1fec0: c902                      JRNC   1FEF0h
1fed0: 102b                      INC    A11
1fee0: c003                      JR     1FF20h
1fef0: 2420                      SLL    1h,A0
1ff00: 2421                      SLL    1h,A1
1ff10: 42a0                      ADDC   A5,A0
1ff20: 4d6b                      MOVE   A11,A11
1ff30: c42a                      JRLT   201E0h
1ff40: ca10                      JREQ   20050h
1ff50: 0b4b f800                 CMPI   7FFh,A11
1ff70: c51d                      JRGE   20150h
1ff80: 4c05                      MOVE   A0,A5
1ff90: 2685                      SLL    14h,A5
1ffa0: 2e81                      SRL    Ch,A1
1ffb0: 2e80                      SRL    Ch,A0
1ffc0: 54a1                      OR     A5,A1
1ffd0: 268b                      SLL    14h,A11
1ffe0: 5560                      OR     A11,A0
1fff0: 5540                      OR     A10,A0
20000: 920e                      MOVE   A0,*A14+,1
20010: 922e                      MOVE   A1,*A14+,1
20020: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
20040: 0960                      RETS   
20050: 4c00                      MOVE   A0,A0
20060: cb17                      JRNE   201E0h
20070: c0f0                      JR     1FF80h
20080: 92ae                      MOVE   A5,*A14+,1
20090: 92ae                      MOVE   A5,*A14+,1
200a0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
200c0: 0960                      RETS   
200d0: 4d68                      MOVE   A11,A8
200e0: 4d08                      MOVE   A8,A8
200f0: ca0b                      JREQ   201B0h
20100: 09e0 0000 7ff0            MOVI   7FF00000h,A0
20130: 5621                      CLR    A1
20140: c0ea                      JR     1FFF0h
20150: 09e3 0000 7ff0            MOVI   7FF00000h,A3
20180: 5543                      OR     A10,A3
20190: 18c0                      MOVK   6h,A0
201a0: c005                      JR     20200h
201b0: 5663                      CLR    A3
201c0: 1960                      MOVK   Bh,A0
201d0: c002                      JR     20200h
201e0: 5663                      CLR    A3
201f0: 19a0                      MOVK   Dh,A0
20200: a3cf                      MOVE   A14,-*SP,1
20210: 920e                      MOVE   A0,*A14+,1
20220: 0d5f 05f0 0002            CALLA  205F0h
20250: 5600                      CLR    A0
20260: 926e                      MOVE   A3,*A14+,1
20270: 920e                      MOVE   A0,*A14+,1
20280: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
202a0: 0960                      RETS   

_div:
202b0: 098f 003c                 MMTM   SP,A10-A13
202d0: 4dcd                      MOVE   A14,A13
202e0: 0b0e 0040                 ADDI   40h,A14
20300: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
20320: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
20340: 4d8b                      MOVE   A12,A11
20350: 594b                      DIVS   A10,A11
20360: 836d                      MOVE   A11,*A13,1
20370: 6d4c                      MODS   A10,A12
20380: b38d 0020                 MOVE   A12,*A13(20h),1
203a0: 4da8                      MOVE   A13,A8
203b0: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
203d0: ca02                      JREQ   20400h
203e0: 9b0d                      MOVE   *A8+,*A13+,1
203f0: 8b0d                      MOVE   *A8,*A13,1
20400: b7ee 00a0                 MOVE   *SP(A0h),A14,1
20420: 09af 3c00                 MMFM   SP,A10-A13
20440: 0962                      RETS   2h

_ldiv:
20450: 098f 003c                 MMTM   SP,A10-A13
20470: 4dcd                      MOVE   A14,A13
20480: 0b0e 0040                 ADDI   40h,A14
204a0: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
204c0: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
204e0: 4d8b                      MOVE   A12,A11
204f0: 594b                      DIVS   A10,A11
20500: 836d                      MOVE   A11,*A13,1
20510: 6d4c                      MODS   A10,A12
20520: b38d 0020                 MOVE   A12,*A13(20h),1
20540: 4da8                      MOVE   A13,A8
20550: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
20570: ca02                      JREQ   205A0h
20580: 9b0d                      MOVE   *A8+,*A13+,1
20590: 8b0d                      MOVE   *A8,*A13,1
205a0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
205c0: 09af 3c00                 MMFM   SP,A10-A13
205e0: 0962                      RETS   2h

_fp_error:
205f0: a3af                      MOVE   A13,-*SP,1
20600: 4dcd                      MOVE   A14,A13
20610: b7ee 0040                 MOVE   *SP(40h),A14,1
20630: 97ed                      MOVE   *SP+,A13,1
20640: 0962                      RETS   2h

_pow:
20650: 098f 000c                 MMTM   SP,A12,A13
20670: 4dcd                      MOVE   A14,A13
20680: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
206a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
206c0: 4508                      SUB    A8,A8
206d0: 930e                      MOVE   A8,*A14+,1
206e0: 930e                      MOVE   A8,*A14+,1
206f0: 0d5f 2ec0 0002            CALLA  22EC0h
20720: cb19                      JRNE   208C0h
20730: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
20750: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20770: 4508                      SUB    A8,A8
20780: 930e                      MOVE   A8,*A14+,1
20790: 930e                      MOVE   A8,*A14+,1
207a0: 0d5f 2ec0 0002            CALLA  22EC0h
207d0: cb0e                      JRNE   208C0h
207e0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
20800: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20820: 4508                      SUB    A8,A8
20830: 09ec 0000 3ff0            MOVI   3FF00000h,A12
20860: 938e                      MOVE   A12,*A14+,1
20870: 930e                      MOVE   A8,*A14+,1
20880: 0d5f 2ec0 0002            CALLA  22EC0h
208b0: ca45                      JREQ   20D10h
208c0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
208e0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20900: 458c                      SUB    A12,A12
20910: 09e8 0000 3ff0            MOVI   3FF00000h,A8
20940: 930e                      MOVE   A8,*A14+,1
20950: 938e                      MOVE   A12,*A14+,1
20960: 0d5f 3000 0002            CALLA  23000h
20990: ca32                      JREQ   20CC0h
209a0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
209c0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
209e0: 938e                      MOVE   A12,*A14+,1
209f0: 938e                      MOVE   A12,*A14+,1
20a00: 0d5f 2ec0 0002            CALLA  22EC0h
20a30: ca12                      JREQ   20B60h
20a40: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
20a60: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20a80: 938e                      MOVE   A12,*A14+,1
20a90: 938e                      MOVE   A12,*A14+,1
20aa0: 0d5f 2920 0002            CALLA  22920h
20ad0: ca08                      JREQ   20B60h
20ae0: 1828                      MOVK   1h,A8
20af0: 0788 cda0 0003            MOVE   A8,@3CDA0h,1
20b20: 938e                      MOVE   A12,*A14+,1
20b30: 938e                      MOVE   A12,*A14+,1
20b40: c000 0082                 JR     21380h
20b60: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
20b80: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20ba0: 938e                      MOVE   A12,*A14+,1
20bb0: 938e                      MOVE   A12,*A14+,1
20bc0: 0d5f 2ec0 0002            CALLA  22EC0h
20bf0: ca06                      JREQ   20C60h
20c00: 09e8 4e40 0002            MOVI   24E40h,A8
20c30: 9b0e                      MOVE   *A8+,*A14+,1
20c40: 9b0e                      MOVE   *A8+,*A14+,1
20c50: c072                      JR     21380h
20c60: 09e8 4e80 0002            MOVI   24E80h,A8
20c90: 9b0e                      MOVE   *A8+,*A14+,1
20ca0: 9b0e                      MOVE   *A8+,*A14+,1
20cb0: c06c                      JR     21380h
20cc0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
20ce0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
20d00: c067                      JR     21380h
20d10: 458c                      SUB    A12,A12
20d20: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
20d40: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
20d60: 938e                      MOVE   A12,*A14+,1
20d70: 938e                      MOVE   A12,*A14+,1
20d80: 0d5f 2940 0002            CALLA  22940h
20db0: ca29                      JREQ   21050h
20dc0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
20de0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20e00: 0d5f bde0 0001            CALLA  1BDE0h
20e30: 4d0c                      MOVE   A8,A12
20e40: 4d88                      MOVE   A12,A8
20e50: 0d5f cdb0 0001            CALLA  1CDB0h
20e80: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
20ea0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
20ec0: 0d5f d960 0001            CALLA  1D960h
20ef0: 4508                      SUB    A8,A8
20f00: 930e                      MOVE   A8,*A14+,1
20f10: 930e                      MOVE   A8,*A14+,1
20f20: 0d5f 2ec0 0002            CALLA  22EC0h
20f50: ca3b                      JREQ   21310h
20f60: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
20f80: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
20fa0: 0d5f 3130 0002            CALLA  23130h
20fd0: a7c8                      MOVE   -*A14,A8,1
20fe0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
21000: a7c8                      MOVE   -*A14,A8,1
21010: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
21030: 1828                      MOVK   1h,A8
21040: 510c                      AND    A8,A12
21050: 0b0e 0040                 ADDI   40h,A14
21070: a3cf                      MOVE   A14,-*SP,1
21080: 0b0e 0040                 ADDI   40h,A14
210a0: a3cf                      MOVE   A14,-*SP,1
210b0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
210d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
210f0: 0d5f 1450 0002            CALLA  21450h
21120: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
21140: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
21160: 0d5f f890 0001            CALLA  1F890h
21190: 0d5f 31c0 0002            CALLA  231C0h
211c0: a7c8                      MOVE   -*A14,A8,1
211d0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
211f0: a7c8                      MOVE   -*A14,A8,1
21200: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
21220: 4d88                      MOVE   A12,A8
21230: ca08                      JREQ   212C0h
21240: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
21260: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
21280: 0d5f 3130 0002            CALLA  23130h
212b0: c00c                      JR     21380h
212c0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
212e0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
21300: c007                      JR     21380h
21310: 182c                      MOVK   1h,A12
21320: 078c cda0 0003            MOVE   A12,@3CDA0h,1
21350: 4508                      SUB    A8,A8
21360: 930e                      MOVE   A8,*A14+,1
21370: 930e                      MOVE   A8,*A14+,1
21380: b7ed 0060                 MOVE   *SP(60h),A13,1
213a0: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
213d0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
21400: b7ee 0060                 MOVE   *SP(60h),A14,1
21420: 09af 3000                 MMFM   SP,A12,A13
21440: 0962                      RETS   2h

__log:
21450: 098f 000c                 MMTM   SP,A12,A13
21470: 4dcd                      MOVE   A14,A13
21480: 0b0e 0120                 ADDI   120h,A14
214a0: 0b0e 0040                 ADDI   40h,A14
214c0: a3cf                      MOVE   A14,-*SP,1
214d0: 93ae                      MOVE   A13,*A14+,1
214e0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
21500: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
21520: 0d5f 4320 0002            CALLA  24320h
21550: a7c8                      MOVE   -*A14,A8,1
21560: b30d 0080                 MOVE   A8,*A13(80h),1
21580: a7c8                      MOVE   -*A14,A8,1
21590: b30d 0060                 MOVE   A8,*A13(60h),1
215b0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
215d0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
215f0: 09e8 4ec0 0002            MOVI   24EC0h,A8
21620: 9b0e                      MOVE   *A8+,*A14+,1
21630: 9b0e                      MOVE   *A8+,*A14+,1
21640: 0d5f 2980 0002            CALLA  22980h
21670: ca37                      JREQ   219F0h
21680: d3ae 0060                 MOVE   *A13(60h),*A14+,1
216a0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
216c0: 4508                      SUB    A8,A8
216d0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
21700: 938e                      MOVE   A12,*A14+,1
21710: 930e                      MOVE   A8,*A14+,1
21720: 0d5f dad0 0001            CALLA  1DAD0h
21750: 4508                      SUB    A8,A8
21760: 938e                      MOVE   A12,*A14+,1
21770: 930e                      MOVE   A8,*A14+,1
21780: 0d5f dad0 0001            CALLA  1DAD0h
217b0: a7c8                      MOVE   -*A14,A8,1
217c0: b30d 0040                 MOVE   A8,*A13(40h),1
217e0: a7c8                      MOVE   -*A14,A8,1
217f0: b30d 0020                 MOVE   A8,*A13(20h),1
21810: d3ae 0060                 MOVE   *A13(60h),*A14+,1
21830: d3ae 0080                 MOVE   *A13(80h),*A14+,1
21850: 4508                      SUB    A8,A8
21860: 938e                      MOVE   A12,*A14+,1
21870: 930e                      MOVE   A8,*A14+,1
21880: 0d5f f890 0001            CALLA  1F890h
218b0: 4508                      SUB    A8,A8
218c0: 938e                      MOVE   A12,*A14+,1
218d0: 930e                      MOVE   A8,*A14+,1
218e0: 0d5f dc40 0001            CALLA  1DC40h
21910: d3ae 0020                 MOVE   *A13(20h),*A14+,1
21930: d3ae 0040                 MOVE   *A13(40h),*A14+,1
21950: 0d5f ec70 0001            CALLA  1EC70h
21980: a7c8                      MOVE   -*A14,A8,1
21990: b30d 0040                 MOVE   A8,*A13(40h),1
219b0: a7c8                      MOVE   -*A14,A8,1
219c0: b30d 0020                 MOVE   A8,*A13(20h),1
219e0: c033                      JR     21D20h
219f0: 87ac                      MOVE   *A13,A12,1
21a00: 142c                      DEC    A12
21a10: 838d                      MOVE   A12,*A13,1
21a20: d3ae 0060                 MOVE   *A13(60h),*A14+,1
21a40: d3ae 0080                 MOVE   *A13(80h),*A14+,1
21a60: 4508                      SUB    A8,A8
21a70: 09ec 0000 3fe0            MOVI   3FE00000h,A12
21aa0: 938e                      MOVE   A12,*A14+,1
21ab0: 930e                      MOVE   A8,*A14+,1
21ac0: 0d5f dad0 0001            CALLA  1DAD0h
21af0: a7c8                      MOVE   -*A14,A8,1
21b00: b30d 0040                 MOVE   A8,*A13(40h),1
21b20: a7c8                      MOVE   -*A14,A8,1
21b30: b30d 0020                 MOVE   A8,*A13(20h),1
21b50: d3ae 0020                 MOVE   *A13(20h),*A14+,1
21b70: d3ae 0040                 MOVE   *A13(40h),*A14+,1
21b90: 4508                      SUB    A8,A8
21ba0: 938e                      MOVE   A12,*A14+,1
21bb0: 930e                      MOVE   A8,*A14+,1
21bc0: 0d5f f890 0001            CALLA  1F890h
21bf0: 4508                      SUB    A8,A8
21c00: 938e                      MOVE   A12,*A14+,1
21c10: 930e                      MOVE   A8,*A14+,1
21c20: 0d5f dc40 0001            CALLA  1DC40h
21c50: d3ae 0020                 MOVE   *A13(20h),*A14+,1
21c70: d3ae 0040                 MOVE   *A13(40h),*A14+,1
21c90: 0d5f ec70 0001            CALLA  1EC70h
21cc0: a7c8                      MOVE   -*A14,A8,1
21cd0: b30d 0040                 MOVE   A8,*A13(40h),1
21cf0: a7c8                      MOVE   -*A14,A8,1
21d00: b30d 0020                 MOVE   A8,*A13(20h),1
21d20: d3ae 0020                 MOVE   *A13(20h),*A14+,1
21d40: d3ae 0040                 MOVE   *A13(40h),*A14+,1
21d60: d3ae 0020                 MOVE   *A13(20h),*A14+,1
21d80: d3ae 0040                 MOVE   *A13(40h),*A14+,1
21da0: 0d5f f890 0001            CALLA  1F890h
21dd0: a7c8                      MOVE   -*A14,A8,1
21de0: b30d 0080                 MOVE   A8,*A13(80h),1
21e00: a7c8                      MOVE   -*A14,A8,1
21e10: b30d 0060                 MOVE   A8,*A13(60h),1
21e30: d3ae 0060                 MOVE   *A13(60h),*A14+,1
21e50: d3ae 0080                 MOVE   *A13(80h),*A14+,1
21e70: 09e8 4f00 0002            MOVI   24F00h,A8
21ea0: 9b0e                      MOVE   *A8+,*A14+,1
21eb0: 9b0e                      MOVE   *A8+,*A14+,1
21ec0: 0d5f f890 0001            CALLA  1F890h
21ef0: 09e8 4f40 0002            MOVI   24F40h,A8
21f20: 9b0e                      MOVE   *A8+,*A14+,1
21f30: 9b0e                      MOVE   *A8+,*A14+,1
21f40: 0d5f dc40 0001            CALLA  1DC40h
21f70: d3ae 0060                 MOVE   *A13(60h),*A14+,1
21f90: d3ae 0080                 MOVE   *A13(80h),*A14+,1
21fb0: 0d5f f890 0001            CALLA  1F890h
21fe0: 09e8 4f80 0002            MOVI   24F80h,A8
22010: 9b0e                      MOVE   *A8+,*A14+,1
22020: 9b0e                      MOVE   *A8+,*A14+,1
22030: 0d5f dc40 0001            CALLA  1DC40h
22060: a7c8                      MOVE   -*A14,A8,1
22070: b30d 0100                 MOVE   A8,*A13(100h),1
22090: a7c8                      MOVE   -*A14,A8,1
220a0: b30d 00e0                 MOVE   A8,*A13(E0h),1
220c0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
220e0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
22100: 09e8 4fc0 0002            MOVI   24FC0h,A8
22130: 9b0e                      MOVE   *A8+,*A14+,1
22140: 9b0e                      MOVE   *A8+,*A14+,1
22150: 0d5f dc40 0001            CALLA  1DC40h
22180: d3ae 0060                 MOVE   *A13(60h),*A14+,1
221a0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
221c0: 0d5f f890 0001            CALLA  1F890h
221f0: 09e8 5000 0002            MOVI   25000h,A8
22220: 9b0e                      MOVE   *A8+,*A14+,1
22230: 9b0e                      MOVE   *A8+,*A14+,1
22240: 0d5f dc40 0001            CALLA  1DC40h
22270: d3ae 0060                 MOVE   *A13(60h),*A14+,1
22290: d3ae 0080                 MOVE   *A13(80h),*A14+,1
222b0: 0d5f f890 0001            CALLA  1F890h
222e0: 09e8 5040 0002            MOVI   25040h,A8
22310: 9b0e                      MOVE   *A8+,*A14+,1
22320: 9b0e                      MOVE   *A8+,*A14+,1
22330: 0d5f dc40 0001            CALLA  1DC40h
22360: a7c8                      MOVE   -*A14,A8,1
22370: b30d 00c0                 MOVE   A8,*A13(C0h),1
22390: a7c8                      MOVE   -*A14,A8,1
223a0: b30d 00a0                 MOVE   A8,*A13(A0h),1
223c0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
223e0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
22400: d3ae 0060                 MOVE   *A13(60h),*A14+,1
22420: d3ae 0080                 MOVE   *A13(80h),*A14+,1
22440: 0d5f f890 0001            CALLA  1F890h
22470: d3ae 00e0                 MOVE   *A13(E0h),*A14+,1
22490: d3ae 0100                 MOVE   *A13(100h),*A14+,1
224b0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
224d0: d3ae 00c0                 MOVE   *A13(C0h),*A14+,1
224f0: 0d5f ede0 0001            CALLA  1EDE0h
22520: 0d5f f890 0001            CALLA  1F890h
22550: d3ae 0020                 MOVE   *A13(20h),*A14+,1
22570: d3ae 0040                 MOVE   *A13(40h),*A14+,1
22590: 0d5f dc40 0001            CALLA  1DC40h
225c0: a7c8                      MOVE   -*A14,A8,1
225d0: b30d 0040                 MOVE   A8,*A13(40h),1
225f0: a7c8                      MOVE   -*A14,A8,1
22600: b30d 0020                 MOVE   A8,*A13(20h),1
22620: 87a8                      MOVE   *A13,A8,1
22630: 0d5f cdb0 0001            CALLA  1CDB0h
22660: 09e8 5080 0002            MOVI   25080h,A8
22690: 9b0e                      MOVE   *A8+,*A14+,1
226a0: 9b0e                      MOVE   *A8+,*A14+,1
226b0: 0d5f f890 0001            CALLA  1F890h
226e0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
22700: d3ae 0040                 MOVE   *A13(40h),*A14+,1
22720: 0d5f dc40 0001            CALLA  1DC40h
22750: 87a8                      MOVE   *A13,A8,1
22760: 0d5f cdb0 0001            CALLA  1CDB0h
22790: 4508                      SUB    A8,A8
227a0: 09ec 3000 3fe6            MOVI   3FE63000h,A12
227d0: 938e                      MOVE   A12,*A14+,1
227e0: 930e                      MOVE   A8,*A14+,1
227f0: 0d5f f890 0001            CALLA  1F890h
22820: 0d5f dc40 0001            CALLA  1DC40h
22850: b7ed 0060                 MOVE   *SP(60h),A13,1
22870: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
228a0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
228d0: b7ee 0060                 MOVE   *SP(60h),A14,1
228f0: 09af 3000                 MMFM   SP,A12,A13
22910: 0962                      RETS   2h

FD$LE:
22920: 1828                      MOVK   1h,A8
22930: c005                      JR     22990h

FD$LT:
22940: 1848                      MOVK   2h,A8
22950: c003                      JR     22990h

FD$GE:
22960: 1868                      MOVK   3h,A8
22970: c001                      JR     22990h

FD$GT:
22980: 1888                      MOVK   4h,A8
22990: a38f                      MOVE   A12,-*SP,1
229a0: 07ac 0000 0000            MOVE   @0h,A12,1
229d0: ca20                      JREQ   22BE0h
229e0: 098f 6000                 MMTM   SP,A1,A2
22a00: 4dc1                      MOVE   A14,A1
22a10: 0be1 ff7f                 SUBI   80h,A1
22a30: 0682 8d81 0000            CMOVMC *A1+,2,1,00008D,0
22a60: 0682 8d81 0010            CMOVMC *A1+,2,1,00108D,0
22a90: 0bee ff7f                 SUBI   80h,A14
22ab0: d80b 0000                 CEXEC  1,000005,0
22ad0: 0660 4e01 000c            CMOVCS ,000C4E,0
22b00: 18a2                      MOVK   5h,A2
22b10: ca03                      JREQ   22B50h
22b20: 1862                      MOVK   3h,A2
22b30: ce01                      JRN    22B50h
22b40: 1982                      MOVK   Ch,A2
22b50: 03a8                      NEG    A8
22b60: 6702                      SRL    A8,A2
22b70: 4708                      SUBB   A8,A8
22b80: 2c28                      SRL    1Fh,A8
22b90: 09af 0006                 MMFM   SP,A1,A2
22bb0: 97ec                      MOVE   *SP+,A12,1
22bc0: 4d08                      MOVE   A8,A8
22bd0: 0960                      RETS   
22be0: 098f b800                 MMTM   SP,A0,A2-A4
22c00: a7c2                      MOVE   -*A14,A2,1
22c10: a7c0                      MOVE   -*A14,A0,1
22c20: a7c3                      MOVE   -*A14,A3,1
22c30: a7c4                      MOVE   -*A14,A4,1
22c40: 4804                      CMP    A0,A4
22c50: ca14                      JREQ   22DA0h
22c60: 1862                      MOVK   3h,A2
22c70: c401                      JRLT   22C90h
22c80: 1982                      MOVK   Ch,A2
22c90: 2420                      SLL    1h,A0
22ca0: c906                      JRNC   22D10h
22cb0: 2424                      SLL    1h,A4
22cc0: c904                      JRNC   22D10h
22cd0: 4804                      CMP    A0,A4
22ce0: 1862                      MOVK   3h,A2
22cf0: c301                      JRHI   22D10h
22d00: 1982                      MOVK   Ch,A2
22d10: 03a8                      NEG    A8
22d20: 6702                      SRL    A8,A2
22d30: 4708                      SUBB   A8,A8
22d40: 2c28                      SRL    1Fh,A8
22d50: 09af 001d                 MMFM   SP,A0,A2-A4
22d70: 97ec                      MOVE   *SP+,A12,1
22d80: 4d08                      MOVE   A8,A8
22d90: 0960                      RETS   
22da0: 4843                      CMP    A2,A3
22db0: 18a2                      MOVK   5h,A2
22dc0: ca06                      JREQ   22E30h
22dd0: 1862                      MOVK   3h,A2
22de0: c801                      JRC    22E00h
22df0: 1982                      MOVK   Ch,A2
22e00: 2420                      SLL    1h,A0
22e10: c901                      JRNC   22E30h
22e20: 03e2                      NOT    A2
22e30: 03a8                      NEG    A8
22e40: 6702                      SRL    A8,A2
22e50: 4708                      SUBB   A8,A8
22e60: 2c28                      SRL    1Fh,A8
22e70: 09af 001d                 MMFM   SP,A0,A2-A4
22e90: 97ec                      MOVE   *SP+,A12,1
22ea0: 4d08                      MOVE   A8,A8
22eb0: 0960                      RETS   

FD$EQ:
22ec0: 098f e000                 MMTM   SP,A0-A2
22ee0: a7c0                      MOVE   -*A14,A0,1
22ef0: a7c8                      MOVE   -*A14,A8,1
22f00: a7c1                      MOVE   -*A14,A1,1
22f10: a7c2                      MOVE   -*A14,A2,1
22f20: 4902                      CMP    A8,A2
22f30: cb08                      JRNE   22FC0h
22f40: 5708                      CLR    A8
22f50: 4801                      CMP    A0,A1
22f60: cb01                      JRNE   22F80h
22f70: 1028                      INC    A8
22f80: 4d08                      MOVE   A8,A8
22f90: 09af 0007                 MMFM   SP,A0-A2
22fb0: 0960                      RETS   
22fc0: 5708                      CLR    A8
22fd0: 09af 0007                 MMFM   SP,A0-A2
22ff0: 0960                      RETS   

FD$NE:
23000: 098f b800                 MMTM   SP,A0,A2-A4
23020: a7c2                      MOVE   -*A14,A2,1
23030: a7c0                      MOVE   -*A14,A0,1
23040: a7c3                      MOVE   -*A14,A3,1
23050: a7c4                      MOVE   -*A14,A4,1
23060: 5708                      CLR    A8
23070: 4804                      CMP    A0,A4
23080: cb06                      JRNE   230F0h
23090: 4843                      CMP    A2,A3
230a0: ca01                      JREQ   230C0h
230b0: 1028                      INC    A8
230c0: 09af 001d                 MMFM   SP,A0,A2-A4
230e0: 0960                      RETS   
230f0: 1028                      INC    A8
23100: 09af 001d                 MMFM   SP,A0,A2-A4
23120: 0960                      RETS   

FD$NEG:
23130: b7c8 ffc0                 MOVE   *A14(FFC0h),A8,1
23150: ca03                      JREQ   23190h
23160: 0bc8 0000 8000            XORI   80000000h,A8
23190: b30e ffc0                 MOVE   A8,*A14(FFC0h),1
231b0: 0960                      RETS   

_exp:
231c0: 098f 002c                 MMTM   SP,A10,A12,A13
231e0: 4dcd                      MOVE   A14,A13
231f0: 0b0e 0080                 ADDI   80h,A14
23210: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
23230: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
23250: 09e8 50c0 0002            MOVI   250C0h,A8
23280: 9b0e                      MOVE   *A8+,*A14+,1
23290: 9b0e                      MOVE   *A8+,*A14+,1
232a0: 0d5f 2920 0002            CALLA  22920h
232d0: ca00 00ed                 JREQ   241C0h
232f0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
23310: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
23330: 4508                      SUB    A8,A8
23340: 930e                      MOVE   A8,*A14+,1
23350: 930e                      MOVE   A8,*A14+,1
23360: 0d5f 2940 0002            CALLA  22940h
23390: ca1a                      JREQ   23540h
233a0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
233c0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
233e0: 09e8 5100 0002            MOVI   25100h,A8
23410: 9b0e                      MOVE   *A8+,*A14+,1
23420: 9b0e                      MOVE   *A8+,*A14+,1
23430: 0d5f f890 0001            CALLA  1F890h
23460: 4508                      SUB    A8,A8
23470: 09ea 0000 3fe0            MOVI   3FE00000h,A10
234a0: 934e                      MOVE   A10,*A14+,1
234b0: 930e                      MOVE   A8,*A14+,1
234c0: 0d5f dad0 0001            CALLA  1DAD0h
234f0: 0d5f bde0 0001            CALLA  1BDE0h
23520: 4d0c                      MOVE   A8,A12
23530: c019                      JR     236D0h
23540: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
23560: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
23580: 09ea 5100 0002            MOVI   25100h,A10
235b0: 9b4e                      MOVE   *A10+,*A14+,1
235c0: 9b4e                      MOVE   *A10+,*A14+,1
235d0: 0d5f f890 0001            CALLA  1F890h
23600: 454a                      SUB    A10,A10
23610: 09e8 0000 3fe0            MOVI   3FE00000h,A8
23640: 930e                      MOVE   A8,*A14+,1
23650: 934e                      MOVE   A10,*A14+,1
23660: 0d5f dc40 0001            CALLA  1DC40h
23690: 0d5f bde0 0001            CALLA  1BDE0h
236c0: 4d0c                      MOVE   A8,A12
236d0: 4d88                      MOVE   A12,A8
236e0: 0d5f cdb0 0001            CALLA  1CDB0h
23710: 454a                      SUB    A10,A10
23720: 09e8 3000 3fe6            MOVI   3FE63000h,A8
23750: 930e                      MOVE   A8,*A14+,1
23760: 934e                      MOVE   A10,*A14+,1
23770: 0d5f f890 0001            CALLA  1F890h
237a0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
237c0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
237e0: 0d5f d960 0001            CALLA  1D960h
23810: 4d88                      MOVE   A12,A8
23820: 0d5f cdb0 0001            CALLA  1CDB0h
23850: 09e8 5140 0002            MOVI   25140h,A8
23880: 9b0e                      MOVE   *A8+,*A14+,1
23890: 9b0e                      MOVE   *A8+,*A14+,1
238a0: 0d5f f890 0001            CALLA  1F890h
238d0: 0d5f dad0 0001            CALLA  1DAD0h
23900: a7c8                      MOVE   -*A14,A8,1
23910: b30d 0020                 MOVE   A8,*A13(20h),1
23930: a7c8                      MOVE   -*A14,A8,1
23940: 830d                      MOVE   A8,*A13,1
23950: d3ae 0000                 MOVE   *A13(0h),*A14+,1
23970: d3ae 0020                 MOVE   *A13(20h),*A14+,1
23990: d3ae 0000                 MOVE   *A13(0h),*A14+,1
239b0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
239d0: 0d5f f890 0001            CALLA  1F890h
23a00: a7c8                      MOVE   -*A14,A8,1
23a10: b30d 0060                 MOVE   A8,*A13(60h),1
23a30: a7c8                      MOVE   -*A14,A8,1
23a40: b30d 0040                 MOVE   A8,*A13(40h),1
23a60: d3ae 0040                 MOVE   *A13(40h),*A14+,1
23a80: d3ae 0060                 MOVE   *A13(60h),*A14+,1
23aa0: 09e8 5180 0002            MOVI   25180h,A8
23ad0: 9b0e                      MOVE   *A8+,*A14+,1
23ae0: 9b0e                      MOVE   *A8+,*A14+,1
23af0: 0d5f f890 0001            CALLA  1F890h
23b20: 09e8 51c0 0002            MOVI   251C0h,A8
23b50: 9b0e                      MOVE   *A8+,*A14+,1
23b60: 9b0e                      MOVE   *A8+,*A14+,1
23b70: 0d5f dc40 0001            CALLA  1DC40h
23ba0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
23bc0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
23be0: 0d5f f890 0001            CALLA  1F890h
23c10: 09e8 0000 3fd0            MOVI   3FD00000h,A8
23c40: 930e                      MOVE   A8,*A14+,1
23c50: 934e                      MOVE   A10,*A14+,1
23c60: 0d5f dc40 0001            CALLA  1DC40h
23c90: 9bae                      MOVE   *A13+,*A14+,1
23ca0: 9bae                      MOVE   *A13+,*A14+,1
23cb0: 0d5f f890 0001            CALLA  1F890h
23ce0: abcd                      MOVE   -*A14,-*A13,1
23cf0: abcd                      MOVE   -*A14,-*A13,1
23d00: d3ae 0040                 MOVE   *A13(40h),*A14+,1
23d20: d3ae 0060                 MOVE   *A13(60h),*A14+,1
23d40: 09e8 5200 0002            MOVI   25200h,A8
23d70: 9b0e                      MOVE   *A8+,*A14+,1
23d80: 9b0e                      MOVE   *A8+,*A14+,1
23d90: 0d5f f890 0001            CALLA  1F890h
23dc0: 09e8 5240 0002            MOVI   25240h,A8
23df0: 9b0e                      MOVE   *A8+,*A14+,1
23e00: 9b0e                      MOVE   *A8+,*A14+,1
23e10: 0d5f dc40 0001            CALLA  1DC40h
23e40: d3ae 0040                 MOVE   *A13(40h),*A14+,1
23e60: d3ae 0060                 MOVE   *A13(60h),*A14+,1
23e80: 0d5f f890 0001            CALLA  1F890h
23eb0: 09e8 0000 3fe0            MOVI   3FE00000h,A8
23ee0: 930e                      MOVE   A8,*A14+,1
23ef0: 934e                      MOVE   A10,*A14+,1
23f00: 0d5f dc40 0001            CALLA  1DC40h
23f30: a7c8                      MOVE   -*A14,A8,1
23f40: b30d 0060                 MOVE   A8,*A13(60h),1
23f60: a7c8                      MOVE   -*A14,A8,1
23f70: b30d 0040                 MOVE   A8,*A13(40h),1
23f90: 0b0e 0040                 ADDI   40h,A14
23fb0: a3cf                      MOVE   A14,-*SP,1
23fc0: 102c                      INC    A12
23fd0: 938e                      MOVE   A12,*A14+,1
23fe0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
24000: d3ae 0060                 MOVE   *A13(60h),*A14+,1
24020: d3ae 0000                 MOVE   *A13(0h),*A14+,1
24040: d3ae 0020                 MOVE   *A13(20h),*A14+,1
24060: 0d5f dad0 0001            CALLA  1DAD0h
24090: d3ae 0000                 MOVE   *A13(0h),*A14+,1
240b0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
240d0: 0d5f ec70 0001            CALLA  1EC70h
24100: 09ec 0000 3fe0            MOVI   3FE00000h,A12
24130: 938e                      MOVE   A12,*A14+,1
24140: 934e                      MOVE   A10,*A14+,1
24150: 0d5f dc40 0001            CALLA  1DC40h
24180: 0d5f 46b0 0002            CALLA  246B0h
241b0: c009                      JR     24250h
241c0: 184c                      MOVK   2h,A12
241d0: 078c cda0 0003            MOVE   A12,@3CDA0h,1
24200: 09ea 5280 0002            MOVI   25280h,A10
24230: 9b4e                      MOVE   *A10+,*A14+,1
24240: 9b4e                      MOVE   *A10+,*A14+,1
24250: b7ed 0080                 MOVE   *SP(80h),A13,1
24270: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
242a0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
242d0: b7ee 0080                 MOVE   *SP(80h),A14,1
242f0: 09af 3400                 MMFM   SP,A10,A12,A13
24310: 0962                      RETS   2h

_frexp:
24320: 098f 002c                 MMTM   SP,A10,A12,A13
24340: 4dcd                      MOVE   A14,A13
24350: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
24370: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
24390: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
243b0: 4508                      SUB    A8,A8
243c0: 930e                      MOVE   A8,*A14+,1
243d0: 930e                      MOVE   A8,*A14+,1
243e0: 0d5f 3000 0002            CALLA  23000h
24410: ca16                      JREQ   24580h
24420: 4dac                      MOVE   A13,A12
24430: 0bec ffbf                 SUBI   40h,A12
24450: 8788                      MOVE   *A12,A8,1
24460: 2988                      SRA    14h,A8
24470: 0b88 f800 ffff            ANDI   7FFh,A8
244a0: 0be8 fc01                 SUBI   3FEh,A8
244c0: 830a                      MOVE   A8,*A10,1
244d0: 8788                      MOVE   *A12,A8,1
244e0: 0b88 0000 7ff0            ANDI   800FFFFFh,A8
24510: 0b28 0000 3fe0            ADDI   3FE00000h,A8
24540: 830c                      MOVE   A8,*A12,1
24550: 9b8e                      MOVE   *A12+,*A14+,1
24560: 9b8e                      MOVE   *A12+,*A14+,1
24570: c006                      JR     245E0h
24580: 458c                      SUB    A12,A12
24590: 838a                      MOVE   A12,*A10,1
245a0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
245c0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
245e0: b7ed 0080                 MOVE   *SP(80h),A13,1
24600: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
24630: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
24660: b7ee 0080                 MOVE   *SP(80h),A14,1
24680: 09af 3400                 MMFM   SP,A10,A12,A13
246a0: 0962                      RETS   2h

_ldexp:
246b0: 098f 002c                 MMTM   SP,A10,A12,A13
246d0: 4dcd                      MOVE   A14,A13
246e0: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
24700: 4daa                      MOVE   A13,A10
24710: 0bea ffbf                 SUBI   40h,A10
24730: 8748                      MOVE   *A10,A8,1
24740: 2988                      SRA    14h,A8
24750: 0b88 f800 ffff            ANDI   7FFh,A8
24780: 410c                      ADD    A8,A12
24790: c613                      JRLE   248D0h
247a0: 0b4c f800                 CMPI   7FFh,A12
247c0: c70a                      JRGT   24870h
247d0: 8748                      MOVE   *A10,A8,1
247e0: 0b88 0000 7ff0            ANDI   800FFFFFh,A8
24810: 268c                      SLL    14h,A12
24820: 5588                      OR     A12,A8
24830: 830a                      MOVE   A8,*A10,1
24840: 9b4e                      MOVE   *A10+,*A14+,1
24850: 9b4e                      MOVE   *A10+,*A14+,1
24860: c009                      JR     24900h
24870: 09ec 52c0 0002            MOVI   252C0h,A12
248a0: 9b8e                      MOVE   *A12+,*A14+,1
248b0: 9b8e                      MOVE   *A12+,*A14+,1
248c0: c003                      JR     24900h
248d0: 458c                      SUB    A12,A12
248e0: 938e                      MOVE   A12,*A14+,1
248f0: 938e                      MOVE   A12,*A14+,1
24900: b7ed 0080                 MOVE   *SP(80h),A13,1
24920: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
24950: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
24980: b7ee 0080                 MOVE   *SP(80h),A14,1
249a0: 09af 3400                 MMFM   SP,A10,A12,A13
249c0: 0962                      RETS   2h
