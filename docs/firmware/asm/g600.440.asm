; g600.440 .text, 11815 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_MonitorVacuum:
00000: a3af                      MOVE   A13,-*SP,1
00010: 4dcd                      MOVE   A14,A13
00020: 0b0e 0060                 ADDI   60h,A14
00040: 4508                      SUB    A8,A8
00050: ad0d 0030                 MOVB   A8,*A13(30h)
00070: ad0d 0040                 MOVB   A8,*A13(40h)
00090: a3cf                      MOVE   A14,-*SP,1
000a0: 09c8 0140                 MOVI   140h,A8
000c0: 930e                      MOVE   A8,*A14+,1
000d0: 09e8 0c60 0003            MOVI   30C60h,A8
00100: 930e                      MOVE   A8,*A14+,1
00110: 09e8 4155 4d43            MOVI   4D434155h,A8
00140: 930e                      MOVE   A8,*A14+,1
00150: 1888                      MOVK   4h,A8
00160: 930e                      MOVE   A8,*A14+,1
00170: 0d5f 0000 0000            CALLA  0h
001a0: 830d                      MOVE   A8,*A13,1
001b0: a3cf                      MOVE   A14,-*SP,1
001c0: 09c8 0088                 MOVI   88h,A8
001e0: 930e                      MOVE   A8,*A14+,1
001f0: 09e8 44e0 0003            MOVI   344E0h,A8
00220: 930e                      MOVE   A8,*A14+,1
00230: 09e8 4155 4d43            MOVI   4D434155h,A8
00260: 930e                      MOVE   A8,*A14+,1
00270: 18a8                      MOVK   5h,A8
00280: 930e                      MOVE   A8,*A14+,1
00290: 0d5f 0000 0000            CALLA  0h
002c0: 830d                      MOVE   A8,*A13,1
002d0: 0d5f dc40 0000            CALLA  DC40h
00300: 0d5f d290 0000            CALLA  D290h
00330: 0d5f 2640 0001            CALLA  12640h
00360: 0d5f 5ff0 0001            CALLA  15FF0h
00390: a3cf                      MOVE   A14,-*SP,1
003a0: 09c8 0038                 MOVI   38h,A8
003c0: 930e                      MOVE   A8,*A14+,1
003d0: 09e8 4f80 0003            MOVI   34F80h,A8
00400: 930e                      MOVE   A8,*A14+,1
00410: 1888                      MOVK   4h,A8
00420: 930e                      MOVE   A8,*A14+,1
00430: 0d5f 0000 0000            CALLA  0h
00460: 830d                      MOVE   A8,*A13,1
00470: 4d08                      MOVE   A8,A8
00480: cb00 0165                 JRNE   1AF0h
004a0: 4508                      SUB    A8,A8
004b0: 05e8 f900 0002            MOVB   A8,@2F900h
004e0: c000 011f                 JR     16F0h
00500: a3cf                      MOVE   A14,-*SP,1
00510: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00540: 930e                      MOVE   A8,*A14+,1
00550: 0d5f 2460 0000            CALLA  2460h
00580: ad0d 0020                 MOVB   A8,*A13(20h)
005a0: c000 011f                 JR     17B0h
005c0: a3cf                      MOVE   A14,-*SP,1
005d0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00600: 930e                      MOVE   A8,*A14+,1
00610: 0d5f 2770 0000            CALLA  2770h
00640: ad0d 0020                 MOVB   A8,*A13(20h)
00660: c000 0113                 JR     17B0h
00680: a3cf                      MOVE   A14,-*SP,1
00690: 07e8 4fe0 0003            MOVE   @34FE0h,A8
006c0: 930e                      MOVE   A8,*A14+,1
006d0: 0d5f 2a80 0000            CALLA  2A80h
00700: ad0d 0020                 MOVB   A8,*A13(20h)
00720: afa8 0020                 MOVB   *A13(20h),A8
00740: 0d88 0105                 DSJ    A8,17B0h
00760: 0548                      SETF   8h,0,0
00770: 05a8 f900 0002            MOVE   @2F900h,A8,0
007a0: 14c8                      SUBK   6h,A8
007b0: cb00 00fe                 JRNE   17B0h
007d0: 0d5f 2640 0001            CALLA  12640h
00800: c000 00f9                 JR     17B0h
00820: a3cf                      MOVE   A14,-*SP,1
00830: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00860: 930e                      MOVE   A8,*A14+,1
00870: 0d5f 2f20 0000            CALLA  2F20h
008a0: ad0d 0020                 MOVB   A8,*A13(20h)
008c0: c000 00ed                 JR     17B0h
008e0: a3cf                      MOVE   A14,-*SP,1
008f0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00920: 930e                      MOVE   A8,*A14+,1
00930: 0d5f 32d0 0000            CALLA  32D0h
00960: ad0d 0020                 MOVB   A8,*A13(20h)
00980: c000 00e1                 JR     17B0h
009a0: a3cf                      MOVE   A14,-*SP,1
009b0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
009e0: 930e                      MOVE   A8,*A14+,1
009f0: 0d5f 3a80 0000            CALLA  3A80h
00a20: ad0d 0020                 MOVB   A8,*A13(20h)
00a40: c000 00d5                 JR     17B0h
00a60: a3cf                      MOVE   A14,-*SP,1
00a70: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00aa0: 930e                      MOVE   A8,*A14+,1
00ab0: 0d5f 3d90 0000            CALLA  3D90h
00ae0: ad0d 0020                 MOVB   A8,*A13(20h)
00b00: c000 00c9                 JR     17B0h
00b20: a3cf                      MOVE   A14,-*SP,1
00b30: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00b60: 930e                      MOVE   A8,*A14+,1
00b70: 0d5f 40a0 0000            CALLA  40A0h
00ba0: ad0d 0020                 MOVB   A8,*A13(20h)
00bc0: c000 00bd                 JR     17B0h
00be0: a3cf                      MOVE   A14,-*SP,1
00bf0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00c20: 930e                      MOVE   A8,*A14+,1
00c30: 0d5f 4540 0000            CALLA  4540h
00c60: ad0d 0020                 MOVB   A8,*A13(20h)
00c80: c000 00b1                 JR     17B0h
00ca0: a3cf                      MOVE   A14,-*SP,1
00cb0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00ce0: 930e                      MOVE   A8,*A14+,1
00cf0: 0d5f 48f0 0000            CALLA  48F0h
00d20: ad0d 0020                 MOVB   A8,*A13(20h)
00d40: c000 00a5                 JR     17B0h
00d60: a3cf                      MOVE   A14,-*SP,1
00d70: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00da0: 930e                      MOVE   A8,*A14+,1
00db0: 0d5f 4ca0 0000            CALLA  4CA0h
00de0: ad0d 0020                 MOVB   A8,*A13(20h)
00e00: c000 0099                 JR     17B0h
00e20: a3cf                      MOVE   A14,-*SP,1
00e30: d60e 4fe0 0003            MOVE   @34FE0h,*A14+,1
00e60: 0d5f 7b80 0000            CALLA  7B80h
00e90: ad0d 0020                 MOVB   A8,*A13(20h)
00eb0: c000 008e                 JR     17B0h
00ed0: a3cf                      MOVE   A14,-*SP,1
00ee0: 07e8 4fe8 0003            MOVE   @34FE8h,A8
00f10: 930e                      MOVE   A8,*A14+,1
00f20: 07e8 4fe0 0003            MOVE   @34FE0h,A8
00f50: 930e                      MOVE   A8,*A14+,1
00f60: 0d5f 9350 0000            CALLA  9350h
00f90: ad0d 0020                 MOVB   A8,*A13(20h)
00fb0: c07f                      JR     17B0h
00fc0: a3cf                      MOVE   A14,-*SP,1
00fd0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
01000: 930e                      MOVE   A8,*A14+,1
01010: 0d5f 9c30 0000            CALLA  9C30h
01040: ad0d 0020                 MOVB   A8,*A13(20h)
01060: c074                      JR     17B0h
01070: a3cf                      MOVE   A14,-*SP,1
01080: 07e8 4fe0 0003            MOVE   @34FE0h,A8
010b0: 930e                      MOVE   A8,*A14+,1
010c0: 0d5f 9f40 0000            CALLA  9F40h
010f0: ad0d 0020                 MOVB   A8,*A13(20h)
01110: c069                      JR     17B0h
01120: a3cf                      MOVE   A14,-*SP,1
01130: 07e8 4fe0 0003            MOVE   @34FE0h,A8
01160: 930e                      MOVE   A8,*A14+,1
01170: 0d5f a600 0000            CALLA  A600h
011a0: ad0d 0020                 MOVB   A8,*A13(20h)
011c0: c05e                      JR     17B0h
011d0: a3cf                      MOVE   A14,-*SP,1
011e0: 07e8 4fe0 0003            MOVE   @34FE0h,A8
01210: 930e                      MOVE   A8,*A14+,1
01220: 0d5f a9d0 0000            CALLA  A9D0h
01250: ad0d 0020                 MOVB   A8,*A13(20h)
01270: c053                      JR     17B0h
01280: 0d5f ac40 0000            CALLA  AC40h
012b0: ad0d 0020                 MOVB   A8,*A13(20h)
012d0: c04d                      JR     17B0h
012e0: 0d5f c250 0000            CALLA  C250h
01310: ad0d 0020                 MOVB   A8,*A13(20h)
01330: afa8 0020                 MOVB   *A13(20h),A8
01350: cb05                      JRNE   13B0h
01360: 1868                      MOVK   3h,A8
01370: 05e8 f870 0002            MOVB   A8,@2F870h
013a0: c040                      JR     17B0h
013b0: 1888                      MOVK   4h,A8
013c0: 05e8 f870 0002            MOVB   A8,@2F870h
013f0: c03b                      JR     17B0h
01400: 0d5f cbe0 0000            CALLA  CBE0h
01430: ad0d 0020                 MOVB   A8,*A13(20h)
01450: c035                      JR     17B0h
01460: a3cf                      MOVE   A14,-*SP,1
01470: 07e8 4fe0 0003            MOVE   @34FE0h,A8
014a0: 930e                      MOVE   A8,*A14+,1
014b0: 0d5f e5f0 0000            CALLA  E5F0h
014e0: ad0d 0020                 MOVB   A8,*A13(20h)
01500: c02a                      JR     17B0h
01510: 0d5f e9a0 0000            CALLA  E9A0h
01540: ad0d 0020                 MOVB   A8,*A13(20h)
01560: c024                      JR     17B0h
01570: 0d5f 1090 0001            CALLA  11090h
015a0: ad0d 0020                 MOVB   A8,*A13(20h)
015c0: c01e                      JR     17B0h
015d0: 0d5f b460 0000            CALLA  B460h
01600: ad0d 0020                 MOVB   A8,*A13(20h)
01620: c018                      JR     17B0h
01630: 0548                      SETF   8h,0,0
01640: 05a8 4fe0 0003            MOVE   @34FE0h,A8,0
01670: 0788 f380 0002            MOVE   A8,@2F380h,1
016a0: c010                      JR     17B0h
016b0: 1828                      MOVK   1h,A8
016c0: ad0d 0020                 MOVB   A8,*A13(20h)
016e0: c00c                      JR     17B0h
016f0: 07a8 4fc0 0003            MOVE   @34FC0h,A8,1
01720: 1428                      DEC    A8
01730: 3748                      CMPK   1Ah,A8
01740: c3f6                      JRHI   16B0h
01750: 24a8                      SLL    5h,A8
01760: 0b28 e280 0002            ADDI   2E280h,A8
01790: 8708                      MOVE   *A8,A8,1
017a0: 0168                      JUMP   A8
017b0: afa8 0020                 MOVB   *A13(20h),A8
017d0: ca00 feba                 JREQ   390h
017f0: 1828                      MOVK   1h,A8
01800: 0788 0c20 0003            MOVE   A8,@30C20h,1
01830: 0340 4fc0 0003 0c40 0003  MOVB   @34FC0h,@30C40h
01880: a3cf                      MOVE   A14,-*SP,1
01890: 09e8 0c20 0003            MOVI   30C20h,A8
018c0: 930e                      MOVE   A8,*A14+,1
018d0: d60e 4fa0 0003            MOVE   @34FA0h,*A14+,1
01900: 0d5f 0000 0000            CALLA  0h
01930: 830d                      MOVE   A8,*A13,1
01940: 1828                      MOVK   1h,A8
01950: 0788 0c20 0003            MOVE   A8,@30C20h,1
01980: 0548                      SETF   8h,0,0
01990: 05a8 f900 0002            MOVE   @2F900h,A8,0
019c0: 0ba8 0020 0000            ORI    20h,A8
019f0: 05e8 0c40 0003            MOVB   A8,@30C40h
01a20: a3cf                      MOVE   A14,-*SP,1
01a30: 09e8 0c20 0003            MOVI   30C20h,A8
01a60: 930e                      MOVE   A8,*A14+,1
01a70: 18e8                      MOVK   7h,A8
01a80: 930e                      MOVE   A8,*A14+,1
01a90: 0d5f 0000 0000            CALLA  0h
01ac0: 830d                      MOVE   A8,*A13,1
01ad0: c000 fe8a                 JR     390h
01af0: 1628                      SUBK   11h,A8
01b00: cb00 fe87                 JRNE   390h
01b20: 07a8 fae0 0002            MOVE   @2FAE0h,A8,1
01b50: ca00 fe82                 JREQ   390h
01b70: 0548                      SETF   8h,0,0
01b80: 05a8 f860 0002            MOVE   @2F860h,A8,0
01bb0: 0d88 003e                 DSJ    A8,1FB0h
01bd0: 4508                      SUB    A8,A8
01be0: 05e8 f900 0002            MOVB   A8,@2F900h
01c10: 0d5f b460 0000            CALLA  B460h
01c40: 4d08                      MOVE   A8,A8
01c50: ca32                      JREQ   1F80h
01c60: afa8 0030                 MOVB   *A13(30h),A8
01c80: cb32                      JRNE   1FB0h
01c90: 1828                      MOVK   1h,A8
01ca0: 0788 0c20 0003            MOVE   A8,@30C20h,1
01cd0: 1b28                      MOVK   19h,A8
01ce0: 05e8 0c40 0003            MOVB   A8,@30C40h
01d10: a3cf                      MOVE   A14,-*SP,1
01d20: 09e8 0c20 0003            MOVI   30C20h,A8
01d50: 930e                      MOVE   A8,*A14+,1
01d60: 18e8                      MOVK   7h,A8
01d70: 930e                      MOVE   A8,*A14+,1
01d80: 0d5f 0000 0000            CALLA  0h
01db0: 830d                      MOVE   A8,*A13,1
01dc0: 1828                      MOVK   1h,A8
01dd0: ad0d 0030                 MOVB   A8,*A13(30h)
01df0: 0788 0c20 0003            MOVE   A8,@30C20h,1
01e20: 0548                      SETF   8h,0,0
01e30: 05a8 f900 0002            MOVE   @2F900h,A8,0
01e60: 0ba8 0020 0000            ORI    20h,A8
01e90: 05e8 0c40 0003            MOVB   A8,@30C40h
01ec0: a3cf                      MOVE   A14,-*SP,1
01ed0: 09e8 0c20 0003            MOVI   30C20h,A8
01f00: 930e                      MOVE   A8,*A14+,1
01f10: 18e8                      MOVK   7h,A8
01f20: 930e                      MOVE   A8,*A14+,1
01f30: 0d5f 0000 0000            CALLA  0h
01f60: 830d                      MOVE   A8,*A13,1
01f70: c003                      JR     1FB0h
01f80: 4508                      SUB    A8,A8
01f90: ad0d 0030                 MOVB   A8,*A13(30h)
01fb0: afa8 0040                 MOVB   *A13(40h),A8
01fd0: 1028                      INC    A8
01fe0: ad0d 0040                 MOVB   A8,*A13(40h)
02000: 0d88 fe37                 DSJ    A8,390h
02020: 4508                      SUB    A8,A8
02030: ad0d 0040                 MOVB   A8,*A13(40h)
02050: 05e8 f900 0002            MOVB   A8,@2F900h
02080: 0d5f ac40 0000            CALLA  AC40h
020b0: 4d08                      MOVE   A8,A8
020c0: ca34                      JREQ   2410h
020d0: afa8 0030                 MOVB   *A13(30h),A8
020f0: cb00 fe28                 JRNE   390h
02110: 1828                      MOVK   1h,A8
02120: 0788 0c20 0003            MOVE   A8,@30C20h,1
02150: 1a08                      MOVK   10h,A8
02160: 05e8 0c40 0003            MOVB   A8,@30C40h
02190: a3cf                      MOVE   A14,-*SP,1
021a0: 09e8 0c20 0003            MOVI   30C20h,A8
021d0: 930e                      MOVE   A8,*A14+,1
021e0: 18e8                      MOVK   7h,A8
021f0: 930e                      MOVE   A8,*A14+,1
02200: 0d5f 0000 0000            CALLA  0h
02230: 830d                      MOVE   A8,*A13,1
02240: 1828                      MOVK   1h,A8
02250: ad0d 0030                 MOVB   A8,*A13(30h)
02270: 0788 0c20 0003            MOVE   A8,@30C20h,1
022a0: 0548                      SETF   8h,0,0
022b0: 05a8 f900 0002            MOVE   @2F900h,A8,0
022e0: 0ba8 0020 0000            ORI    20h,A8
02310: 05e8 0c40 0003            MOVB   A8,@30C40h
02340: a3cf                      MOVE   A14,-*SP,1
02350: 09e8 0c20 0003            MOVI   30C20h,A8
02380: 930e                      MOVE   A8,*A14+,1
02390: 18e8                      MOVK   7h,A8
023a0: 930e                      MOVE   A8,*A14+,1
023b0: 0d5f 0000 0000            CALLA  0h
023e0: 830d                      MOVE   A8,*A13,1
023f0: c000 fdf8                 JR     390h
02410: 4508                      SUB    A8,A8
02420: ad0d 0030                 MOVB   A8,*A13(30h)
02440: c000 fdf3                 JR     390h

_configure_front_panel_tiga:
02460: a3af                      MOVE   A13,-*SP,1
02470: 4dcd                      MOVE   A14,A13
02480: a3cf                      MOVE   A14,-*SP,1
02490: 09e8 e5e0 0002            MOVI   2E5E0h,A8
024c0: 930e                      MOVE   A8,*A14+,1
024d0: 09e8 49a0 0003            MOVI   349A0h,A8
02500: 930e                      MOVE   A8,*A14+,1
02510: 0d5f 97c0 0002            CALLA  297C0h
02540: afa8 ffe0                 MOVB   *A13(FFE0h),A8
02560: 39a8                      DSJS   A8,2640h
02570: a3cf                      MOVE   A14,-*SP,1
02580: 09e8 e608 0002            MOVI   2E608h,A8
025b0: 930e                      MOVE   A8,*A14+,1
025c0: 09e8 49a0 0003            MOVI   349A0h,A8
025f0: 930e                      MOVE   A8,*A14+,1
02600: 0d5f 9510 0002            CALLA  29510h
02630: c00c                      JR     2700h
02640: a3cf                      MOVE   A14,-*SP,1
02650: 09e8 e618 0002            MOVI   2E618h,A8
02680: 930e                      MOVE   A8,*A14+,1
02690: 09e8 49a0 0003            MOVI   349A0h,A8
026c0: 930e                      MOVE   A8,*A14+,1
026d0: 0d5f 9510 0002            CALLA  29510h
02700: 0d5f 37a0 0001            CALLA  137A0h
02730: b7ee 0040                 MOVE   *SP(40h),A14,1
02750: 97ed                      MOVE   *SP+,A13,1
02760: 0962                      RETS   2h

_configure_viewing_window_tiga:
02770: a3af                      MOVE   A13,-*SP,1
02780: 4dcd                      MOVE   A14,A13
02790: a3cf                      MOVE   A14,-*SP,1
027a0: 09e8 e628 0002            MOVI   2E628h,A8
027d0: 930e                      MOVE   A8,*A14+,1
027e0: 09e8 49a0 0003            MOVI   349A0h,A8
02810: 930e                      MOVE   A8,*A14+,1
02820: 0d5f 97c0 0002            CALLA  297C0h
02850: afa8 ffe0                 MOVB   *A13(FFE0h),A8
02870: 39a8                      DSJS   A8,2950h
02880: a3cf                      MOVE   A14,-*SP,1
02890: 09e8 e608 0002            MOVI   2E608h,A8
028c0: 930e                      MOVE   A8,*A14+,1
028d0: 09e8 49a0 0003            MOVI   349A0h,A8
02900: 930e                      MOVE   A8,*A14+,1
02910: 0d5f 9510 0002            CALLA  29510h
02940: c00c                      JR     2A10h
02950: a3cf                      MOVE   A14,-*SP,1
02960: 09e8 e618 0002            MOVI   2E618h,A8
02990: 930e                      MOVE   A8,*A14+,1
029a0: 09e8 49a0 0003            MOVI   349A0h,A8
029d0: 930e                      MOVE   A8,*A14+,1
029e0: 0d5f 9510 0002            CALLA  29510h
02a10: 0d5f 37a0 0001            CALLA  137A0h
02a40: b7ee 0040                 MOVE   *SP(40h),A14,1
02a60: 97ed                      MOVE   *SP+,A13,1
02a70: 0962                      RETS   2h

_system_pumping_tiga:
02a80: a3af                      MOVE   A13,-*SP,1
02a90: 4dcd                      MOVE   A14,A13
02aa0: a3cf                      MOVE   A14,-*SP,1
02ab0: 09e8 e650 0002            MOVI   2E650h,A8
02ae0: 930e                      MOVE   A8,*A14+,1
02af0: 09e8 49a0 0003            MOVI   349A0h,A8
02b20: 930e                      MOVE   A8,*A14+,1
02b30: 0d5f 97c0 0002            CALLA  297C0h
02b60: c02d                      JR     2E40h
02b70: a3cf                      MOVE   A14,-*SP,1
02b80: 09e8 e608 0002            MOVI   2E608h,A8
02bb0: 930e                      MOVE   A8,*A14+,1
02bc0: 09e8 49a0 0003            MOVI   349A0h,A8
02bf0: 930e                      MOVE   A8,*A14+,1
02c00: 0d5f 9510 0002            CALLA  29510h
02c30: c027                      JR     2EB0h
02c40: a3cf                      MOVE   A14,-*SP,1
02c50: 09e8 e678 0002            MOVI   2E678h,A8
02c80: 930e                      MOVE   A8,*A14+,1
02c90: 09e8 49a0 0003            MOVI   349A0h,A8
02cc0: 930e                      MOVE   A8,*A14+,1
02cd0: 0d5f 9510 0002            CALLA  29510h
02d00: c01a                      JR     2EB0h
02d10: a3cf                      MOVE   A14,-*SP,1
02d20: 09e8 e688 0002            MOVI   2E688h,A8
02d50: 930e                      MOVE   A8,*A14+,1
02d60: 09e8 49a0 0003            MOVI   349A0h,A8
02d90: 930e                      MOVE   A8,*A14+,1
02da0: 0d5f 9510 0002            CALLA  29510h
02dd0: c00d                      JR     2EB0h
02de0: 1948                      MOVK   Ah,A8
02df0: 05e8 f900 0002            MOVB   A8,@2F900h
02e20: 1828                      MOVK   1h,A8
02e30: c00a                      JR     2EE0h
02e40: afa8 ffe0                 MOVB   *A13(FFE0h),A8
02e60: cad0                      JREQ   2B70h
02e70: 1428                      DEC    A8
02e80: cadb                      JREQ   2C40h
02e90: 3d88                      DSJS   A8,2DE0h
02ea0: c0e6                      JR     2D10h
02eb0: 0d5f 37a0 0001            CALLA  137A0h
02ee0: b7ee 0040                 MOVE   *SP(40h),A14,1
02f00: 97ed                      MOVE   *SP+,A13,1
02f10: 0962                      RETS   2h

_configure_column_pumping_tiga:
02f20: a3af                      MOVE   A13,-*SP,1
02f30: 4dcd                      MOVE   A14,A13
02f40: a3cf                      MOVE   A14,-*SP,1
02f50: 09e8 e698 0002            MOVI   2E698h,A8
02f80: 930e                      MOVE   A8,*A14+,1
02f90: 09e8 49a0 0003            MOVI   349A0h,A8
02fc0: 930e                      MOVE   A8,*A14+,1
02fd0: 0d5f 97c0 0002            CALLA  297C0h
03000: c020                      JR     3210h
03010: a3cf                      MOVE   A14,-*SP,1
03020: 09e8 e6c0 0002            MOVI   2E6C0h,A8
03050: 930e                      MOVE   A8,*A14+,1
03060: 09e8 49a0 0003            MOVI   349A0h,A8
03090: 930e                      MOVE   A8,*A14+,1
030a0: 0d5f 9510 0002            CALLA  29510h
030d0: c018                      JR     3260h
030e0: a3cf                      MOVE   A14,-*SP,1
030f0: 09e8 e618 0002            MOVI   2E618h,A8
03120: 930e                      MOVE   A8,*A14+,1
03130: 09e8 49a0 0003            MOVI   349A0h,A8
03160: 930e                      MOVE   A8,*A14+,1
03170: 0d5f 9510 0002            CALLA  29510h
031a0: c00b                      JR     3260h
031b0: 1948                      MOVK   Ah,A8
031c0: 05e8 f900 0002            MOVB   A8,@2F900h
031f0: 1828                      MOVK   1h,A8
03200: c008                      JR     3290h
03210: afa8 ffe0                 MOVB   *A13(FFE0h),A8
03230: caea                      JREQ   30E0h
03240: 3d48                      DSJS   A8,31B0h
03250: c0db                      JR     3010h
03260: 0d5f 37a0 0001            CALLA  137A0h
03290: b7ee 0040                 MOVE   *SP(40h),A14,1
032b0: 97ed                      MOVE   *SP+,A13,1
032c0: 0962                      RETS   2h

_column_pumping_tiga:
032d0: a3af                      MOVE   A13,-*SP,1
032e0: 4dcd                      MOVE   A14,A13
032f0: a3cf                      MOVE   A14,-*SP,1
03300: 09e8 e6d0 0002            MOVI   2E6D0h,A8
03330: 930e                      MOVE   A8,*A14+,1
03340: 09e8 49a0 0003            MOVI   349A0h,A8
03370: 930e                      MOVE   A8,*A14+,1
03380: 0d5f 97c0 0002            CALLA  297C0h
033b0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
033d0: cb0d                      JRNE   34B0h
033e0: a3cf                      MOVE   A14,-*SP,1
033f0: 09e8 e608 0002            MOVI   2E608h,A8
03420: 930e                      MOVE   A8,*A14+,1
03430: 09e8 49a0 0003            MOVI   349A0h,A8
03460: 930e                      MOVE   A8,*A14+,1
03470: 0d5f 9510 0002            CALLA  29510h
034a0: c00c                      JR     3570h
034b0: a3cf                      MOVE   A14,-*SP,1
034c0: 09e8 e678 0002            MOVI   2E678h,A8
034f0: 930e                      MOVE   A8,*A14+,1
03500: 09e8 49a0 0003            MOVI   349A0h,A8
03530: 930e                      MOVE   A8,*A14+,1
03540: 0d5f 9510 0002            CALLA  29510h
03570: 0d5f 37a0 0001            CALLA  137A0h
035a0: b7ee 0040                 MOVE   *SP(40h),A14,1
035c0: 97ed                      MOVE   *SP+,A13,1
035d0: 0962                      RETS   2h

_operate_isolation_valve_tiga:
035e0: a3af                      MOVE   A13,-*SP,1
035f0: 4dcd                      MOVE   A14,A13
03600: a3cf                      MOVE   A14,-*SP,1
03610: 09e8 e6f8 0002            MOVI   2E6F8h,A8
03640: 930e                      MOVE   A8,*A14+,1
03650: 09e8 49a0 0003            MOVI   349A0h,A8
03680: 930e                      MOVE   A8,*A14+,1
03690: 0d5f 97c0 0002            CALLA  297C0h
036c0: c02d                      JR     39A0h
036d0: a3cf                      MOVE   A14,-*SP,1
036e0: 09e8 e720 0002            MOVI   2E720h,A8
03710: 930e                      MOVE   A8,*A14+,1
03720: 09e8 49a0 0003            MOVI   349A0h,A8
03750: 930e                      MOVE   A8,*A14+,1
03760: 0d5f 9510 0002            CALLA  29510h
03790: c027                      JR     3A10h
037a0: a3cf                      MOVE   A14,-*SP,1
037b0: 09e8 e730 0002            MOVI   2E730h,A8
037e0: 930e                      MOVE   A8,*A14+,1
037f0: 09e8 49a0 0003            MOVI   349A0h,A8
03820: 930e                      MOVE   A8,*A14+,1
03830: 0d5f 9510 0002            CALLA  29510h
03860: c01a                      JR     3A10h
03870: a3cf                      MOVE   A14,-*SP,1
03880: 09e8 e688 0002            MOVI   2E688h,A8
038b0: 930e                      MOVE   A8,*A14+,1
038c0: 09e8 49a0 0003            MOVI   349A0h,A8
038f0: 930e                      MOVE   A8,*A14+,1
03900: 0d5f 9510 0002            CALLA  29510h
03930: c00d                      JR     3A10h
03940: 1948                      MOVK   Ah,A8
03950: 05e8 f900 0002            MOVB   A8,@2F900h
03980: 1828                      MOVK   1h,A8
03990: c00a                      JR     3A40h
039a0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
039c0: cadd                      JREQ   37A0h
039d0: 1428                      DEC    A8
039e0: cace                      JREQ   36D0h
039f0: 3d88                      DSJS   A8,3940h
03a00: c0e6                      JR     3870h
03a10: 0d5f 37a0 0001            CALLA  137A0h
03a40: b7ee 0040                 MOVE   *SP(40h),A14,1
03a60: 97ed                      MOVE   *SP+,A13,1
03a70: 0962                      RETS   2h

_column_isolation_tiga:
03a80: a3af                      MOVE   A13,-*SP,1
03a90: 4dcd                      MOVE   A14,A13
03aa0: a3cf                      MOVE   A14,-*SP,1
03ab0: 09e8 e740 0002            MOVI   2E740h,A8
03ae0: 930e                      MOVE   A8,*A14+,1
03af0: 09e8 49a0 0003            MOVI   349A0h,A8
03b20: 930e                      MOVE   A8,*A14+,1
03b30: 0d5f 97c0 0002            CALLA  297C0h
03b60: afa8 ffe0                 MOVB   *A13(FFE0h),A8
03b80: 39a8                      DSJS   A8,3C60h
03b90: a3cf                      MOVE   A14,-*SP,1
03ba0: 09e8 e768 0002            MOVI   2E768h,A8
03bd0: 930e                      MOVE   A8,*A14+,1
03be0: 09e8 49a0 0003            MOVI   349A0h,A8
03c10: 930e                      MOVE   A8,*A14+,1
03c20: 0d5f 9510 0002            CALLA  29510h
03c50: c00c                      JR     3D20h
03c60: a3cf                      MOVE   A14,-*SP,1
03c70: 09e8 e730 0002            MOVI   2E730h,A8
03ca0: 930e                      MOVE   A8,*A14+,1
03cb0: 09e8 49a0 0003            MOVI   349A0h,A8
03ce0: 930e                      MOVE   A8,*A14+,1
03cf0: 0d5f 9510 0002            CALLA  29510h
03d20: 0d5f 37a0 0001            CALLA  137A0h
03d50: b7ee 0040                 MOVE   *SP(40h),A14,1
03d70: 97ed                      MOVE   *SP+,A13,1
03d80: 0962                      RETS   2h

_configure_edx_tiga:
03d90: a3af                      MOVE   A13,-*SP,1
03da0: 4dcd                      MOVE   A14,A13
03db0: a3cf                      MOVE   A14,-*SP,1
03dc0: 09e8 e778 0002            MOVI   2E778h,A8
03df0: 930e                      MOVE   A8,*A14+,1
03e00: 09e8 49a0 0003            MOVI   349A0h,A8
03e30: 930e                      MOVE   A8,*A14+,1
03e40: 0d5f 97c0 0002            CALLA  297C0h
03e70: afa8 ffe0                 MOVB   *A13(FFE0h),A8
03e90: 39a8                      DSJS   A8,3F70h
03ea0: a3cf                      MOVE   A14,-*SP,1
03eb0: 09e8 e608 0002            MOVI   2E608h,A8
03ee0: 930e                      MOVE   A8,*A14+,1
03ef0: 09e8 49a0 0003            MOVI   349A0h,A8
03f20: 930e                      MOVE   A8,*A14+,1
03f30: 0d5f 9510 0002            CALLA  29510h
03f60: c00c                      JR     4030h
03f70: a3cf                      MOVE   A14,-*SP,1
03f80: 09e8 e618 0002            MOVI   2E618h,A8
03fb0: 930e                      MOVE   A8,*A14+,1
03fc0: 09e8 49a0 0003            MOVI   349A0h,A8
03ff0: 930e                      MOVE   A8,*A14+,1
04000: 0d5f 9510 0002            CALLA  29510h
04030: 0d5f 37a0 0001            CALLA  137A0h
04060: b7ee 0040                 MOVE   *SP(40h),A14,1
04080: 97ed                      MOVE   *SP+,A13,1
04090: 0962                      RETS   2h

_configure_wdx_tiga:
040a0: a3af                      MOVE   A13,-*SP,1
040b0: 4dcd                      MOVE   A14,A13
040c0: a3cf                      MOVE   A14,-*SP,1
040d0: 09e8 e7a0 0002            MOVI   2E7A0h,A8
04100: 930e                      MOVE   A8,*A14+,1
04110: 09e8 49a0 0003            MOVI   349A0h,A8
04140: 930e                      MOVE   A8,*A14+,1
04150: 0d5f 97c0 0002            CALLA  297C0h
04180: c02d                      JR     4460h
04190: a3cf                      MOVE   A14,-*SP,1
041a0: 09e8 e6c0 0002            MOVI   2E6C0h,A8
041d0: 930e                      MOVE   A8,*A14+,1
041e0: 09e8 49a0 0003            MOVI   349A0h,A8
04210: 930e                      MOVE   A8,*A14+,1
04220: 0d5f 9510 0002            CALLA  29510h
04250: c027                      JR     44D0h
04260: a3cf                      MOVE   A14,-*SP,1
04270: 09e8 e618 0002            MOVI   2E618h,A8
042a0: 930e                      MOVE   A8,*A14+,1
042b0: 09e8 49a0 0003            MOVI   349A0h,A8
042e0: 930e                      MOVE   A8,*A14+,1
042f0: 0d5f 9510 0002            CALLA  29510h
04320: c01a                      JR     44D0h
04330: a3cf                      MOVE   A14,-*SP,1
04340: 09e8 e688 0002            MOVI   2E688h,A8
04370: 930e                      MOVE   A8,*A14+,1
04380: 09e8 49a0 0003            MOVI   349A0h,A8
043b0: 930e                      MOVE   A8,*A14+,1
043c0: 0d5f 9510 0002            CALLA  29510h
043f0: c00d                      JR     44D0h
04400: 1948                      MOVK   Ah,A8
04410: 05e8 f900 0002            MOVB   A8,@2F900h
04440: 1828                      MOVK   1h,A8
04450: c00a                      JR     4500h
04460: afa8 ffe0                 MOVB   *A13(FFE0h),A8
04480: cadd                      JREQ   4260h
04490: 1428                      DEC    A8
044a0: cace                      JREQ   4190h
044b0: 3d88                      DSJS   A8,4400h
044c0: c0e6                      JR     4330h
044d0: 0d5f 37a0 0001            CALLA  137A0h
04500: b7ee 0040                 MOVE   *SP(40h),A14,1
04520: 97ed                      MOVE   *SP+,A13,1
04530: 0962                      RETS   2h

_operate_wdx_gate_valve_tiga:
04540: a3af                      MOVE   A13,-*SP,1
04550: 4dcd                      MOVE   A14,A13
04560: a3cf                      MOVE   A14,-*SP,1
04570: 09e8 e7c8 0002            MOVI   2E7C8h,A8
045a0: 930e                      MOVE   A8,*A14+,1
045b0: 09e8 49a0 0003            MOVI   349A0h,A8
045e0: 930e                      MOVE   A8,*A14+,1
045f0: 0d5f 97c0 0002            CALLA  297C0h
04620: c020                      JR     4830h
04630: a3cf                      MOVE   A14,-*SP,1
04640: 09e8 e720 0002            MOVI   2E720h,A8
04670: 930e                      MOVE   A8,*A14+,1
04680: 09e8 49a0 0003            MOVI   349A0h,A8
046b0: 930e                      MOVE   A8,*A14+,1
046c0: 0d5f 9510 0002            CALLA  29510h
046f0: c018                      JR     4880h
04700: a3cf                      MOVE   A14,-*SP,1
04710: 09e8 e730 0002            MOVI   2E730h,A8
04740: 930e                      MOVE   A8,*A14+,1
04750: 09e8 49a0 0003            MOVI   349A0h,A8
04780: 930e                      MOVE   A8,*A14+,1
04790: 0d5f 9510 0002            CALLA  29510h
047c0: c00b                      JR     4880h
047d0: 1948                      MOVK   Ah,A8
047e0: 05e8 f900 0002            MOVB   A8,@2F900h
04810: 1828                      MOVK   1h,A8
04820: c008                      JR     48B0h
04830: afa8 ffe0                 MOVB   *A13(FFE0h),A8
04850: caea                      JREQ   4700h
04860: 3d48                      DSJS   A8,47D0h
04870: c0db                      JR     4630h
04880: 0d5f 37a0 0001            CALLA  137A0h
048b0: b7ee 0040                 MOVE   *SP(40h),A14,1
048d0: 97ed                      MOVE   *SP+,A13,1
048e0: 0962                      RETS   2h

_configure_airlock_tiga:
048f0: a3af                      MOVE   A13,-*SP,1
04900: 4dcd                      MOVE   A14,A13
04910: a3cf                      MOVE   A14,-*SP,1
04920: 09e8 e7f0 0002            MOVI   2E7F0h,A8
04950: 930e                      MOVE   A8,*A14+,1
04960: 09e8 49a0 0003            MOVI   349A0h,A8
04990: 930e                      MOVE   A8,*A14+,1
049a0: 0d5f 97c0 0002            CALLA  297C0h
049d0: c020                      JR     4BE0h
049e0: a3cf                      MOVE   A14,-*SP,1
049f0: 09e8 e618 0002            MOVI   2E618h,A8
04a20: 930e                      MOVE   A8,*A14+,1
04a30: 09e8 49a0 0003            MOVI   349A0h,A8
04a60: 930e                      MOVE   A8,*A14+,1
04a70: 0d5f 9510 0002            CALLA  29510h
04aa0: c018                      JR     4C30h
04ab0: a3cf                      MOVE   A14,-*SP,1
04ac0: 09e8 e720 0002            MOVI   2E720h,A8
04af0: 930e                      MOVE   A8,*A14+,1
04b00: 09e8 49a0 0003            MOVI   349A0h,A8
04b30: 930e                      MOVE   A8,*A14+,1
04b40: 0d5f 9510 0002            CALLA  29510h
04b70: c00b                      JR     4C30h
04b80: 1948                      MOVK   Ah,A8
04b90: 05e8 f900 0002            MOVB   A8,@2F900h
04bc0: 1828                      MOVK   1h,A8
04bd0: c008                      JR     4C60h
04be0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
04c00: cadd                      JREQ   49E0h
04c10: 3d48                      DSJS   A8,4B80h
04c20: c0e8                      JR     4AB0h
04c30: 0d5f 37a0 0001            CALLA  137A0h
04c60: b7ee 0040                 MOVE   *SP(40h),A14,1
04c80: 97ed                      MOVE   *SP+,A13,1
04c90: 0962                      RETS   2h

_set_threshold_values_tiga:
04ca0: a3af                      MOVE   A13,-*SP,1
04cb0: 4dcd                      MOVE   A14,A13
04cc0: c000 00d1                 JR     59F0h
04ce0: a3cf                      MOVE   A14,-*SP,1
04cf0: d60e f500 0002            MOVE   @2F500h,*A14+,1
04d20: 0d5f 7e60 0000            CALLA  7E60h
04d50: 1428                      DEC    A8
04d60: ca00 00d2                 JREQ   5AA0h
04d80: a3cf                      MOVE   A14,-*SP,1
04d90: d60e f580 0002            MOVE   @2F580h,*A14+,1
04dc0: 0d5f 8140 0000            CALLA  8140h
04df0: 1428                      DEC    A8
04e00: ca00 00c8                 JREQ   5AA0h
04e20: a3cf                      MOVE   A14,-*SP,1
04e30: d60e f600 0002            MOVE   @2F600h,*A14+,1
04e60: 0d5f 8650 0000            CALLA  8650h
04e90: 1428                      DEC    A8
04ea0: ca00 00be                 JREQ   5AA0h
04ec0: a3cf                      MOVE   A14,-*SP,1
04ed0: d60e f700 0002            MOVE   @2F700h,*A14+,1
04f00: d60e f680 0002            MOVE   @2F680h,*A14+,1
04f30: 0d5f 8930 0000            CALLA  8930h
04f60: 1428                      DEC    A8
04f70: ca00 00b1                 JREQ   5AA0h
04f90: a3cf                      MOVE   A14,-*SP,1
04fa0: d60e f780 0002            MOVE   @2F780h,*A14+,1
04fd0: 0d5f 8e40 0000            CALLA  8E40h
05000: 1428                      DEC    A8
05010: ca00 00a7                 JREQ   5AA0h
05030: 4508                      SUB    A8,A8
05040: c000 00a5                 JR     5AB0h
05060: a3cf                      MOVE   A14,-*SP,1
05070: d60e f520 0002            MOVE   @2F520h,*A14+,1
050a0: 0d5f 7e60 0000            CALLA  7E60h
050d0: 1428                      DEC    A8
050e0: ca00 009a                 JREQ   5AA0h
05100: a3cf                      MOVE   A14,-*SP,1
05110: d60e f5a0 0002            MOVE   @2F5A0h,*A14+,1
05140: 0d5f 8140 0000            CALLA  8140h
05170: 1428                      DEC    A8
05180: ca00 0090                 JREQ   5AA0h
051a0: a3cf                      MOVE   A14,-*SP,1
051b0: d60e f620 0002            MOVE   @2F620h,*A14+,1
051e0: 0d5f 8650 0000            CALLA  8650h
05210: 1428                      DEC    A8
05220: ca00 0086                 JREQ   5AA0h
05240: a3cf                      MOVE   A14,-*SP,1
05250: d60e f720 0002            MOVE   @2F720h,*A14+,1
05280: d60e f6a0 0002            MOVE   @2F6A0h,*A14+,1
052b0: 0d5f 8930 0000            CALLA  8930h
052e0: 1428                      DEC    A8
052f0: ca7a                      JREQ   5AA0h
05300: a3cf                      MOVE   A14,-*SP,1
05310: d60e f7a0 0002            MOVE   @2F7A0h,*A14+,1
05340: 0d5f 8e40 0000            CALLA  8E40h
05370: 1428                      DEC    A8
05380: ca71                      JREQ   5AA0h
05390: 4508                      SUB    A8,A8
053a0: c070                      JR     5AB0h
053b0: a3cf                      MOVE   A14,-*SP,1
053c0: d60e f540 0002            MOVE   @2F540h,*A14+,1
053f0: 0d5f 7e60 0000            CALLA  7E60h
05420: 1428                      DEC    A8
05430: ca66                      JREQ   5AA0h
05440: a3cf                      MOVE   A14,-*SP,1
05450: d60e f5c0 0002            MOVE   @2F5C0h,*A14+,1
05480: 0d5f 8140 0000            CALLA  8140h
054b0: 1428                      DEC    A8
054c0: ca5d                      JREQ   5AA0h
054d0: a3cf                      MOVE   A14,-*SP,1
054e0: d60e f640 0002            MOVE   @2F640h,*A14+,1
05510: 0d5f 8650 0000            CALLA  8650h
05540: 1428                      DEC    A8
05550: ca54                      JREQ   5AA0h
05560: a3cf                      MOVE   A14,-*SP,1
05570: d60e f740 0002            MOVE   @2F740h,*A14+,1
055a0: d60e f6c0 0002            MOVE   @2F6C0h,*A14+,1
055d0: 0d5f 8930 0000            CALLA  8930h
05600: 1428                      DEC    A8
05610: ca48                      JREQ   5AA0h
05620: a3cf                      MOVE   A14,-*SP,1
05630: d60e f7c0 0002            MOVE   @2F7C0h,*A14+,1
05660: 0d5f 8e40 0000            CALLA  8E40h
05690: 1428                      DEC    A8
056a0: ca3f                      JREQ   5AA0h
056b0: 4508                      SUB    A8,A8
056c0: c03e                      JR     5AB0h
056d0: a3cf                      MOVE   A14,-*SP,1
056e0: d60e f560 0002            MOVE   @2F560h,*A14+,1
05710: 0d5f 7e60 0000            CALLA  7E60h
05740: 1428                      DEC    A8
05750: ca34                      JREQ   5AA0h
05760: a3cf                      MOVE   A14,-*SP,1
05770: d60e f5e0 0002            MOVE   @2F5E0h,*A14+,1
057a0: 0d5f 8140 0000            CALLA  8140h
057d0: 1428                      DEC    A8
057e0: ca2b                      JREQ   5AA0h
057f0: a3cf                      MOVE   A14,-*SP,1
05800: d60e f660 0002            MOVE   @2F660h,*A14+,1
05830: 0d5f 8650 0000            CALLA  8650h
05860: 1428                      DEC    A8
05870: ca22                      JREQ   5AA0h
05880: a3cf                      MOVE   A14,-*SP,1
05890: d60e f760 0002            MOVE   @2F760h,*A14+,1
058c0: d60e f6e0 0002            MOVE   @2F6E0h,*A14+,1
058f0: 0d5f 8930 0000            CALLA  8930h
05920: 1428                      DEC    A8
05930: ca16                      JREQ   5AA0h
05940: a3cf                      MOVE   A14,-*SP,1
05950: d60e f7e0 0002            MOVE   @2F7E0h,*A14+,1
05980: 0d5f 8e40 0000            CALLA  8E40h
059b0: 1428                      DEC    A8
059c0: ca0d                      JREQ   5AA0h
059d0: 4508                      SUB    A8,A8
059e0: c00c                      JR     5AB0h
059f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
05a10: ca00 ff2b                 JREQ   4CE0h
05a30: 1428                      DEC    A8
05a40: ca00 ff60                 JREQ   5060h
05a60: 1428                      DEC    A8
05a70: ca93                      JREQ   53B0h
05a80: 1428                      DEC    A8
05a90: cac3                      JREQ   56D0h
05aa0: 1828                      MOVK   1h,A8
05ab0: b7ee 0040                 MOVE   *SP(40h),A14,1
05ad0: 97ed                      MOVE   *SP+,A13,1
05ae0: 0962                      RETS   2h

_calculate_threshold:
05af0: 098f 000c                 MMTM   SP,A12,A13
05b10: 4dcd                      MOVE   A14,A13
05b20: 0b0e 0040                 ADDI   40h,A14
05b40: 09e8 0000 447a            MOVI   447A0000h,A8
05b70: 930e                      MOVE   A8,*A14+,1
05b80: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
05ba0: 0d5f 7680 0002            CALLA  27680h
05bd0: a7c8                      MOVE   -*A14,A8,1
05be0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
05c00: 09e8 ec80 0002            MOVI   2EC80h,A8
05c30: 9b0e                      MOVE   *A8+,*A14+,1
05c40: 9b0e                      MOVE   *A8+,*A14+,1
05c50: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
05c70: 0d5f 46d0 0002            CALLA  246D0h
05ca0: 0d5f 56a0 0002            CALLA  256A0h
05cd0: 0d5f 3d80 0002            CALLA  23D80h
05d00: a7c8                      MOVE   -*A14,A8,1
05d10: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
05d30: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
05d50: 0d5f 46d0 0002            CALLA  246D0h
05d80: 4508                      SUB    A8,A8
05d90: 930e                      MOVE   A8,*A14+,1
05da0: 930e                      MOVE   A8,*A14+,1
05db0: 0d5f 62c0 0002            CALLA  262C0h
05de0: ca00 0107                 JREQ   6E70h
05e00: 09e8 e6ff 2edb            MOVI   2EDBE6FFh,A8
05e30: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
05e50: c000 0100                 JR     6E70h
05e70: 0b0e 0040                 ADDI   40h,A14
05e90: a3cf                      MOVE   A14,-*SP,1
05ea0: 09e8 ecc0 0002            MOVI   2ECC0h,A8
05ed0: 9b0e                      MOVE   *A8+,*A14+,1
05ee0: 9b0e                      MOVE   *A8+,*A14+,1
05ef0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
05f10: 0d5f 46d0 0002            CALLA  246D0h
05f40: 4508                      SUB    A8,A8
05f50: 09ec 0000 404e            MOVI   404E0000h,A12
05f80: 938e                      MOVE   A12,*A14+,1
05f90: 930e                      MOVE   A8,*A14+,1
05fa0: 0d5f 6400 0002            CALLA  26400h
05fd0: 4508                      SUB    A8,A8
05fe0: 09ec 0000 3ff0            MOVI   3FF00000h,A12
06010: 938e                      MOVE   A12,*A14+,1
06020: 930e                      MOVE   A8,*A14+,1
06030: 0d5f 56a0 0002            CALLA  256A0h
06060: 0d5f 8710 0002            CALLA  28710h
06090: a7c8                      MOVE   -*A14,A8,1
060a0: b30d 0020                 MOVE   A8,*A13(20h),1
060c0: a7c8                      MOVE   -*A14,A8,1
060d0: 830d                      MOVE   A8,*A13,1
060e0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
06100: d3ae 0020                 MOVE   *A13(20h),*A14+,1
06120: 4508                      SUB    A8,A8
06130: 09ec 0000 4049            MOVI   40490000h,A12
06160: 938e                      MOVE   A12,*A14+,1
06170: 930e                      MOVE   A8,*A14+,1
06180: 0d5f 5120 0002            CALLA  25120h
061b0: ca04                      JREQ   6200h
061c0: 4508                      SUB    A8,A8
061d0: 838d                      MOVE   A12,*A13,1
061e0: b30d 0020                 MOVE   A8,*A13(20h),1
06200: d3ae 0000                 MOVE   *A13(0h),*A14+,1
06220: d3ae 0020                 MOVE   *A13(20h),*A14+,1
06240: 0d5f 4210 0002            CALLA  24210h
06270: c000 00c7                 JR     6F00h
06290: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
062b0: 0d5f 46d0 0002            CALLA  246D0h
062e0: 0b0e 0040                 ADDI   40h,A14
06300: a3cf                      MOVE   A14,-*SP,1
06310: 09ec ed00 0002            MOVI   2ED00h,A12
06340: 9b8e                      MOVE   *A12+,*A14+,1
06350: 9b8e                      MOVE   *A12+,*A14+,1
06360: 09ec ed40 0002            MOVI   2ED40h,A12
06390: 9b8e                      MOVE   *A12+,*A14+,1
063a0: 9b8e                      MOVE   *A12+,*A14+,1
063b0: 0d5f 8710 0002            CALLA  28710h
063e0: 0d5f 5810 0002            CALLA  25810h
06410: 0d5f 3d80 0002            CALLA  23D80h
06440: a7cc                      MOVE   -*A14,A12,1
06450: b38d ffc0                 MOVE   A12,*A13(FFC0h),1
06470: 0b0e 0040                 ADDI   40h,A14
06490: a3cf                      MOVE   A14,-*SP,1
064a0: 09e8 ed80 0002            MOVI   2ED80h,A8
064d0: 9b0e                      MOVE   *A8+,*A14+,1
064e0: 9b0e                      MOVE   *A8+,*A14+,1
064f0: 938e                      MOVE   A12,*A14+,1
06500: 0d5f 46d0 0002            CALLA  246D0h
06530: 0d5f 8710 0002            CALLA  28710h
06560: 0d5f 3d80 0002            CALLA  23D80h
06590: a7c8                      MOVE   -*A14,A8,1
065a0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
065c0: 930e                      MOVE   A8,*A14+,1
065d0: 0d5f 46d0 0002            CALLA  246D0h
06600: 458c                      SUB    A12,A12
06610: 09e8 4000 407f            MOVI   407F4000h,A8
06640: 930e                      MOVE   A8,*A14+,1
06650: 938e                      MOVE   A12,*A14+,1
06660: 0d5f 6400 0002            CALLA  26400h
06690: a7c8                      MOVE   -*A14,A8,1
066a0: b30d 0020                 MOVE   A8,*A13(20h),1
066c0: a7c8                      MOVE   -*A14,A8,1
066d0: 830d                      MOVE   A8,*A13,1
066e0: 09e8 edc0 0002            MOVI   2EDC0h,A8
06710: 9b0e                      MOVE   *A8+,*A14+,1
06720: 9b0e                      MOVE   *A8+,*A14+,1
06730: 9bae                      MOVE   *A13+,*A14+,1
06740: 9bae                      MOVE   *A13+,*A14+,1
06750: 0d5f 56a0 0002            CALLA  256A0h
06780: abcd                      MOVE   -*A14,-*A13,1
06790: abcd                      MOVE   -*A14,-*A13,1
067a0: 09e8 0000 3ff0            MOVI   3FF00000h,A8
067d0: 930e                      MOVE   A8,*A14+,1
067e0: 938e                      MOVE   A12,*A14+,1
067f0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
06810: d3ae 0020                 MOVE   *A13(20h),*A14+,1
06830: 0d5f 5810 0002            CALLA  25810h
06860: a7c8                      MOVE   -*A14,A8,1
06870: b30d 0020                 MOVE   A8,*A13(20h),1
06890: a7c8                      MOVE   -*A14,A8,1
068a0: 830d                      MOVE   A8,*A13,1
068b0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
068d0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
068f0: 09e8 0000 4049            MOVI   40490000h,A8
06920: 930e                      MOVE   A8,*A14+,1
06930: 938e                      MOVE   A12,*A14+,1
06940: 0d5f 5120 0002            CALLA  25120h
06970: ca06                      JREQ   69E0h
06980: 09e8 0000 4049            MOVI   40490000h,A8
069b0: 830d                      MOVE   A8,*A13,1
069c0: b38d 0020                 MOVE   A12,*A13(20h),1
069e0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
06a00: d3ae 0020                 MOVE   *A13(20h),*A14+,1
06a20: 0d5f 4210 0002            CALLA  24210h
06a50: c04a                      JR     6F00h
06a60: 0b0e 0040                 ADDI   40h,A14
06a80: a3cf                      MOVE   A14,-*SP,1
06a90: 09ec ecc0 0002            MOVI   2ECC0h,A12
06ac0: 9b8e                      MOVE   *A12+,*A14+,1
06ad0: 9b8e                      MOVE   *A12+,*A14+,1
06ae0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
06b00: 0d5f 46d0 0002            CALLA  246D0h
06b30: 458c                      SUB    A12,A12
06b40: 09e8 0000 404e            MOVI   404E0000h,A8
06b70: 930e                      MOVE   A8,*A14+,1
06b80: 938e                      MOVE   A12,*A14+,1
06b90: 0d5f 6400 0002            CALLA  26400h
06bc0: 09e8 0000 3ff0            MOVI   3FF00000h,A8
06bf0: 930e                      MOVE   A8,*A14+,1
06c00: 938e                      MOVE   A12,*A14+,1
06c10: 0d5f 56a0 0002            CALLA  256A0h
06c40: 0d5f 8710 0002            CALLA  28710h
06c70: a7c8                      MOVE   -*A14,A8,1
06c80: b30d 0020                 MOVE   A8,*A13(20h),1
06ca0: a7c8                      MOVE   -*A14,A8,1
06cb0: 830d                      MOVE   A8,*A13,1
06cc0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
06ce0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
06d00: 09e8 0000 4049            MOVI   40490000h,A8
06d30: 930e                      MOVE   A8,*A14+,1
06d40: 938e                      MOVE   A12,*A14+,1
06d50: 0d5f 5120 0002            CALLA  25120h
06d80: ca06                      JREQ   6DF0h
06d90: 09e8 0000 4049            MOVI   40490000h,A8
06dc0: 830d                      MOVE   A8,*A13,1
06dd0: b38d 0020                 MOVE   A12,*A13(20h),1
06df0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
06e10: d3ae 0020                 MOVE   *A13(20h),*A14+,1
06e30: 0d5f 4210 0002            CALLA  24210h
06e60: c009                      JR     6F00h
06e70: afac ffe0                 MOVB   *A13(FFE0h),A12
06e90: ca00 fefc                 JREQ   5E70h
06eb0: 142c                      DEC    A12
06ec0: ca00 ff3b                 JREQ   6290h
06ee0: 142c                      DEC    A12
06ef0: cab6                      JREQ   6A60h
06f00: b7ee 0060                 MOVE   *SP(60h),A14,1
06f20: 09af 3000                 MMFM   SP,A12,A13
06f40: 0962                      RETS   2h

_calculate_pressure:
06f50: 098f 000c                 MMTM   SP,A12,A13
06f70: 4dcd                      MOVE   A14,A13
06f80: 0b0e 0040                 ADDI   40h,A14
06fa0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
06fc0: cb03                      JRNE   7000h
06fd0: 1828                      MOVK   1h,A8
06fe0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
07000: afa8 ffe0                 MOVB   *A13(FFE0h),A8
07020: cb35                      JRNE   7380h
07030: 0b0e 0040                 ADDI   40h,A14
07050: a3cf                      MOVE   A14,-*SP,1
07060: 09e8 ee00 0002            MOVI   2EE00h,A8
07090: 9b0e                      MOVE   *A8+,*A14+,1
070a0: 9b0e                      MOVE   *A8+,*A14+,1
070b0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
070d0: 0d5f 49b0 0002            CALLA  249B0h
07100: 0d5f 8710 0002            CALLA  28710h
07130: a7c8                      MOVE   -*A14,A8,1
07140: b30d 0020                 MOVE   A8,*A13(20h),1
07160: a7c8                      MOVE   -*A14,A8,1
07170: 830d                      MOVE   A8,*A13,1
07180: 4508                      SUB    A8,A8
07190: 09ec 0000 404e            MOVI   404E0000h,A12
071c0: 938e                      MOVE   A12,*A14+,1
071d0: 930e                      MOVE   A8,*A14+,1
071e0: 9bae                      MOVE   *A13+,*A14+,1
071f0: 9bae                      MOVE   *A13+,*A14+,1
07200: 0d5f 6400 0002            CALLA  26400h
07230: abcd                      MOVE   -*A14,-*A13,1
07240: abcd                      MOVE   -*A14,-*A13,1
07250: 4508                      SUB    A8,A8
07260: 09ec 0000 3ff0            MOVI   3FF00000h,A12
07290: 938e                      MOVE   A12,*A14+,1
072a0: 930e                      MOVE   A8,*A14+,1
072b0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
072d0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
072f0: 0d5f 5810 0002            CALLA  25810h
07320: a7c8                      MOVE   -*A14,A8,1
07330: b30d 0020                 MOVE   A8,*A13(20h),1
07350: a7c8                      MOVE   -*A14,A8,1
07360: 830d                      MOVE   A8,*A13,1
07370: c056                      JR     78E0h
07380: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
073a0: 0d5f 49b0 0002            CALLA  249B0h
073d0: 458c                      SUB    A12,A12
073e0: 09e8 0000 3ff0            MOVI   3FF00000h,A8
07410: 930e                      MOVE   A8,*A14+,1
07420: 938e                      MOVE   A12,*A14+,1
07430: 0d5f 56a0 0002            CALLA  256A0h
07460: a7c8                      MOVE   -*A14,A8,1
07470: b30d 0020                 MOVE   A8,*A13(20h),1
07490: a7c8                      MOVE   -*A14,A8,1
074a0: 830d                      MOVE   A8,*A13,1
074b0: 09e8 edc0 0002            MOVI   2EDC0h,A8
074e0: 9b0e                      MOVE   *A8+,*A14+,1
074f0: 9b0e                      MOVE   *A8+,*A14+,1
07500: 9bae                      MOVE   *A13+,*A14+,1
07510: 9bae                      MOVE   *A13+,*A14+,1
07520: 0d5f 6400 0002            CALLA  26400h
07550: abcd                      MOVE   -*A14,-*A13,1
07560: abcd                      MOVE   -*A14,-*A13,1
07570: 09e8 4000 407f            MOVI   407F4000h,A8
075a0: 930e                      MOVE   A8,*A14+,1
075b0: 938e                      MOVE   A12,*A14+,1
075c0: 9bae                      MOVE   *A13+,*A14+,1
075d0: 9bae                      MOVE   *A13+,*A14+,1
075e0: 0d5f 56a0 0002            CALLA  256A0h
07610: abcd                      MOVE   -*A14,-*A13,1
07620: abcd                      MOVE   -*A14,-*A13,1
07630: d3ae 0000                 MOVE   *A13(0h),*A14+,1
07650: d3ae 0020                 MOVE   *A13(20h),*A14+,1
07670: 09e8 ed40 0002            MOVI   2ED40h,A8
076a0: 9b0e                      MOVE   *A8+,*A14+,1
076b0: 9b0e                      MOVE   *A8+,*A14+,1
076c0: 0d5f 5140 0002            CALLA  25140h
076f0: ca1e                      JREQ   78E0h
07700: 0b0e 0040                 ADDI   40h,A14
07720: a3cf                      MOVE   A14,-*SP,1
07730: 09e8 ed00 0002            MOVI   2ED00h,A8
07760: 9b0e                      MOVE   *A8+,*A14+,1
07770: 9b0e                      MOVE   *A8+,*A14+,1
07780: d3ae 0000                 MOVE   *A13(0h),*A14+,1
077a0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
077c0: 09e8 ed40 0002            MOVI   2ED40h,A8
077f0: 9b0e                      MOVE   *A8+,*A14+,1
07800: 9b0e                      MOVE   *A8+,*A14+,1
07810: 0d5f 5810 0002            CALLA  25810h
07840: 0d5f 8710 0002            CALLA  28710h
07870: 9bae                      MOVE   *A13+,*A14+,1
07880: 9bae                      MOVE   *A13+,*A14+,1
07890: 0d5f 56a0 0002            CALLA  256A0h
078c0: abcd                      MOVE   -*A14,-*A13,1
078d0: abcd                      MOVE   -*A14,-*A13,1
078e0: 09ec ec80 0002            MOVI   2EC80h,A12
07910: 9b8e                      MOVE   *A12+,*A14+,1
07920: 9b8e                      MOVE   *A12+,*A14+,1
07930: 9bae                      MOVE   *A13+,*A14+,1
07940: 9bae                      MOVE   *A13+,*A14+,1
07950: 0d5f 6400 0002            CALLA  26400h
07980: abcd                      MOVE   -*A14,-*A13,1
07990: abcd                      MOVE   -*A14,-*A13,1
079a0: 458c                      SUB    A12,A12
079b0: 09e8 4000 408f            MOVI   408F4000h,A8
079e0: 930e                      MOVE   A8,*A14+,1
079f0: 938e                      MOVE   A12,*A14+,1
07a00: 9bae                      MOVE   *A13+,*A14+,1
07a10: 9bae                      MOVE   *A13+,*A14+,1
07a20: 0d5f 56a0 0002            CALLA  256A0h
07a50: abcd                      MOVE   -*A14,-*A13,1
07a60: abcd                      MOVE   -*A14,-*A13,1
07a70: d3ae 0000                 MOVE   *A13(0h),*A14+,1
07a90: d3ae 0020                 MOVE   *A13(20h),*A14+,1
07ab0: 0d5f 3d80 0002            CALLA  23D80h
07ae0: b7ed 0060                 MOVE   *SP(60h),A13,1
07b00: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
07b30: b7ee 0060                 MOVE   *SP(60h),A14,1
07b50: 09af 3000                 MMFM   SP,A12,A13
07b70: 0962                      RETS   2h

_set_edx_threshold_tiga:
07b80: a3af                      MOVE   A13,-*SP,1
07b90: 4dcd                      MOVE   A14,A13
07ba0: 0b0e 0060                 ADDI   60h,A14
07bc0: a3cf                      MOVE   A14,-*SP,1
07bd0: 09e8 e818 0002            MOVI   2E818h,A8
07c00: 930e                      MOVE   A8,*A14+,1
07c10: 09e8 49a0 0003            MOVI   349A0h,A8
07c40: 930e                      MOVE   A8,*A14+,1
07c50: 0d5f 97c0 0002            CALLA  297C0h
07c80: a3cf                      MOVE   A14,-*SP,1
07c90: 93ae                      MOVE   A13,*A14+,1
07ca0: a3cf                      MOVE   A14,-*SP,1
07cb0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
07cd0: 4508                      SUB    A8,A8
07ce0: 930e                      MOVE   A8,*A14+,1
07cf0: 0d5f 5af0 0000            CALLA  5AF0h
07d20: 930e                      MOVE   A8,*A14+,1
07d30: 0d5f 7f70 0002            CALLA  27F70h
07d60: a3cf                      MOVE   A14,-*SP,1
07d70: 93ae                      MOVE   A13,*A14+,1
07d80: 09e8 49a0 0003            MOVI   349A0h,A8
07db0: 930e                      MOVE   A8,*A14+,1
07dc0: 0d5f 9510 0002            CALLA  29510h
07df0: 0d5f 37a0 0001            CALLA  137A0h
07e20: b7ee 0040                 MOVE   *SP(40h),A14,1
07e40: 97ed                      MOVE   *SP+,A13,1
07e50: 0962                      RETS   2h

_set_scint_threshold:
07e60: a3af                      MOVE   A13,-*SP,1
07e70: 4dcd                      MOVE   A14,A13
07e80: 0b0e 0060                 ADDI   60h,A14
07ea0: a3cf                      MOVE   A14,-*SP,1
07eb0: 09e8 e840 0002            MOVI   2E840h,A8
07ee0: 930e                      MOVE   A8,*A14+,1
07ef0: 09e8 49a0 0003            MOVI   349A0h,A8
07f20: 930e                      MOVE   A8,*A14+,1
07f30: 0d5f 97c0 0002            CALLA  297C0h
07f60: a3cf                      MOVE   A14,-*SP,1
07f70: 93ae                      MOVE   A13,*A14+,1
07f80: a3cf                      MOVE   A14,-*SP,1
07f90: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
07fb0: 4508                      SUB    A8,A8
07fc0: 930e                      MOVE   A8,*A14+,1
07fd0: 0d5f 5af0 0000            CALLA  5AF0h
08000: 930e                      MOVE   A8,*A14+,1
08010: 0d5f 7f70 0002            CALLA  27F70h
08040: a3cf                      MOVE   A14,-*SP,1
08050: 93ae                      MOVE   A13,*A14+,1
08060: 09e8 49a0 0003            MOVI   349A0h,A8
08090: 930e                      MOVE   A8,*A14+,1
080a0: 0d5f 9510 0002            CALLA  29510h
080d0: 0d5f 37a0 0001            CALLA  137A0h
08100: b7ee 0040                 MOVE   *SP(40h),A14,1
08120: 97ed                      MOVE   *SP+,A13,1
08130: 0962                      RETS   2h

_set_acc_threshold:
08140: a3af                      MOVE   A13,-*SP,1
08150: 4dcd                      MOVE   A14,A13
08160: 0b0e 0060                 ADDI   60h,A14
08180: a3cf                      MOVE   A14,-*SP,1
08190: 09e8 e868 0002            MOVI   2E868h,A8
081c0: 930e                      MOVE   A8,*A14+,1
081d0: 09e8 49a0 0003            MOVI   349A0h,A8
08200: 930e                      MOVE   A8,*A14+,1
08210: 0d5f 97c0 0002            CALLA  297C0h
08240: a3cf                      MOVE   A14,-*SP,1
08250: 93ae                      MOVE   A13,*A14+,1
08260: a3cf                      MOVE   A14,-*SP,1
08270: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
08290: 4508                      SUB    A8,A8
082a0: 930e                      MOVE   A8,*A14+,1
082b0: 0d5f 5af0 0000            CALLA  5AF0h
082e0: 930e                      MOVE   A8,*A14+,1
082f0: 0d5f 7f70 0002            CALLA  27F70h
08320: a3cf                      MOVE   A14,-*SP,1
08330: 93ae                      MOVE   A13,*A14+,1
08340: 09e8 49a0 0003            MOVI   349A0h,A8
08370: 930e                      MOVE   A8,*A14+,1
08380: 0d5f 9510 0002            CALLA  29510h
083b0: a3cf                      MOVE   A14,-*SP,1
083c0: 09e8 e890 0002            MOVI   2E890h,A8
083f0: 930e                      MOVE   A8,*A14+,1
08400: 09e8 49a0 0003            MOVI   349A0h,A8
08430: 930e                      MOVE   A8,*A14+,1
08440: 0d5f 9510 0002            CALLA  29510h
08470: a3cf                      MOVE   A14,-*SP,1
08480: 93ae                      MOVE   A13,*A14+,1
08490: a3cf                      MOVE   A14,-*SP,1
084a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
084c0: 1828                      MOVK   1h,A8
084d0: 930e                      MOVE   A8,*A14+,1
084e0: 0d5f 5af0 0000            CALLA  5AF0h
08510: 930e                      MOVE   A8,*A14+,1
08520: 0d5f 7f70 0002            CALLA  27F70h
08550: a3cf                      MOVE   A14,-*SP,1
08560: 93ae                      MOVE   A13,*A14+,1
08570: 09e8 49a0 0003            MOVI   349A0h,A8
085a0: 930e                      MOVE   A8,*A14+,1
085b0: 0d5f 9510 0002            CALLA  29510h
085e0: 0d5f 37a0 0001            CALLA  137A0h
08610: b7ee 0040                 MOVE   *SP(40h),A14,1
08630: 97ed                      MOVE   *SP+,A13,1
08640: 0962                      RETS   2h

_set_pm_threshold:
08650: a3af                      MOVE   A13,-*SP,1
08660: 4dcd                      MOVE   A14,A13
08670: 0b0e 0060                 ADDI   60h,A14
08690: a3cf                      MOVE   A14,-*SP,1
086a0: 09e8 e8a0 0002            MOVI   2E8A0h,A8
086d0: 930e                      MOVE   A8,*A14+,1
086e0: 09e8 49a0 0003            MOVI   349A0h,A8
08710: 930e                      MOVE   A8,*A14+,1
08720: 0d5f 97c0 0002            CALLA  297C0h
08750: a3cf                      MOVE   A14,-*SP,1
08760: 93ae                      MOVE   A13,*A14+,1
08770: a3cf                      MOVE   A14,-*SP,1
08780: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
087a0: 4508                      SUB    A8,A8
087b0: 930e                      MOVE   A8,*A14+,1
087c0: 0d5f 5af0 0000            CALLA  5AF0h
087f0: 930e                      MOVE   A8,*A14+,1
08800: 0d5f 7f70 0002            CALLA  27F70h
08830: a3cf                      MOVE   A14,-*SP,1
08840: 93ae                      MOVE   A13,*A14+,1
08850: 09e8 49a0 0003            MOVI   349A0h,A8
08880: 930e                      MOVE   A8,*A14+,1
08890: 0d5f 9510 0002            CALLA  29510h
088c0: 0d5f 37a0 0001            CALLA  137A0h
088f0: b7ee 0040                 MOVE   *SP(40h),A14,1
08910: 97ed                      MOVE   *SP+,A13,1
08920: 0962                      RETS   2h

_ion_pump_threshold:
08930: a3af                      MOVE   A13,-*SP,1
08940: 4dcd                      MOVE   A14,A13
08950: 0b0e 0060                 ADDI   60h,A14
08970: a3cf                      MOVE   A14,-*SP,1
08980: 09e8 e8c8 0002            MOVI   2E8C8h,A8
089b0: 930e                      MOVE   A8,*A14+,1
089c0: 09e8 49a0 0003            MOVI   349A0h,A8
089f0: 930e                      MOVE   A8,*A14+,1
08a00: 0d5f 97c0 0002            CALLA  297C0h
08a30: a3cf                      MOVE   A14,-*SP,1
08a40: 93ae                      MOVE   A13,*A14+,1
08a50: a3cf                      MOVE   A14,-*SP,1
08a60: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
08a80: 4508                      SUB    A8,A8
08a90: 930e                      MOVE   A8,*A14+,1
08aa0: 0d5f 5af0 0000            CALLA  5AF0h
08ad0: 930e                      MOVE   A8,*A14+,1
08ae0: 0d5f 7f70 0002            CALLA  27F70h
08b10: a3cf                      MOVE   A14,-*SP,1
08b20: 93ae                      MOVE   A13,*A14+,1
08b30: 09e8 49a0 0003            MOVI   349A0h,A8
08b60: 930e                      MOVE   A8,*A14+,1
08b70: 0d5f 9510 0002            CALLA  29510h
08ba0: a3cf                      MOVE   A14,-*SP,1
08bb0: 09e8 e890 0002            MOVI   2E890h,A8
08be0: 930e                      MOVE   A8,*A14+,1
08bf0: 09e8 49a0 0003            MOVI   349A0h,A8
08c20: 930e                      MOVE   A8,*A14+,1
08c30: 0d5f 9510 0002            CALLA  29510h
08c60: a3cf                      MOVE   A14,-*SP,1
08c70: 93ae                      MOVE   A13,*A14+,1
08c80: a3cf                      MOVE   A14,-*SP,1
08c90: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
08cb0: 1828                      MOVK   1h,A8
08cc0: 930e                      MOVE   A8,*A14+,1
08cd0: 0d5f 5af0 0000            CALLA  5AF0h
08d00: 930e                      MOVE   A8,*A14+,1
08d10: 0d5f 7f70 0002            CALLA  27F70h
08d40: a3cf                      MOVE   A14,-*SP,1
08d50: 93ae                      MOVE   A13,*A14+,1
08d60: 09e8 49a0 0003            MOVI   349A0h,A8
08d90: 930e                      MOVE   A8,*A14+,1
08da0: 0d5f 9510 0002            CALLA  29510h
08dd0: 0d5f 37a0 0001            CALLA  137A0h
08e00: b7ee 0040                 MOVE   *SP(40h),A14,1
08e20: 97ed                      MOVE   *SP+,A13,1
08e30: 0962                      RETS   2h

_set_fil_threshold:
08e40: a3af                      MOVE   A13,-*SP,1
08e50: 4dcd                      MOVE   A14,A13
08e60: 0b0e 0060                 ADDI   60h,A14
08e80: a3cf                      MOVE   A14,-*SP,1
08e90: 09e8 e8f0 0002            MOVI   2E8F0h,A8
08ec0: 930e                      MOVE   A8,*A14+,1
08ed0: 09e8 49a0 0003            MOVI   349A0h,A8
08f00: 930e                      MOVE   A8,*A14+,1
08f10: 0d5f 97c0 0002            CALLA  297C0h
08f40: a3cf                      MOVE   A14,-*SP,1
08f50: 93ae                      MOVE   A13,*A14+,1
08f60: a3cf                      MOVE   A14,-*SP,1
08f70: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
08f90: 4508                      SUB    A8,A8
08fa0: 930e                      MOVE   A8,*A14+,1
08fb0: 0d5f 5af0 0000            CALLA  5AF0h
08fe0: 930e                      MOVE   A8,*A14+,1
08ff0: 0d5f 7f70 0002            CALLA  27F70h
09020: a3cf                      MOVE   A14,-*SP,1
09030: 93ae                      MOVE   A13,*A14+,1
09040: 09e8 49a0 0003            MOVI   349A0h,A8
09070: 930e                      MOVE   A8,*A14+,1
09080: 0d5f 9510 0002            CALLA  29510h
090b0: a3cf                      MOVE   A14,-*SP,1
090c0: 09e8 e890 0002            MOVI   2E890h,A8
090f0: 930e                      MOVE   A8,*A14+,1
09100: 09e8 49a0 0003            MOVI   349A0h,A8
09130: 930e                      MOVE   A8,*A14+,1
09140: 0d5f 9510 0002            CALLA  29510h
09170: a3cf                      MOVE   A14,-*SP,1
09180: 93ae                      MOVE   A13,*A14+,1
09190: a3cf                      MOVE   A14,-*SP,1
091a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
091c0: 1828                      MOVK   1h,A8
091d0: 930e                      MOVE   A8,*A14+,1
091e0: 0d5f 5af0 0000            CALLA  5AF0h
09210: 930e                      MOVE   A8,*A14+,1
09220: 0d5f 7f70 0002            CALLA  27F70h
09250: a3cf                      MOVE   A14,-*SP,1
09260: 93ae                      MOVE   A13,*A14+,1
09270: 09e8 49a0 0003            MOVI   349A0h,A8
092a0: 930e                      MOVE   A8,*A14+,1
092b0: 0d5f 9510 0002            CALLA  29510h
092e0: 0d5f 37a0 0001            CALLA  137A0h
09310: b7ee 0040                 MOVE   *SP(40h),A14,1
09330: 97ed                      MOVE   *SP+,A13,1
09340: 0962                      RETS   2h

_set_qbsd_control_tiga_request:
09350: a3af                      MOVE   A13,-*SP,1
09360: 4dcd                      MOVE   A14,A13
09370: a3cf                      MOVE   A14,-*SP,1
09380: 09e8 e918 0002            MOVI   2E918h,A8
093b0: 930e                      MOVE   A8,*A14+,1
093c0: 09e8 49a0 0003            MOVI   349A0h,A8
093f0: 930e                      MOVE   A8,*A14+,1
09400: 0d5f 97c0 0002            CALLA  297C0h
09430: c03a                      JR     97E0h
09440: a3cf                      MOVE   A14,-*SP,1
09450: 09e8 e940 0002            MOVI   2E940h,A8
09480: 930e                      MOVE   A8,*A14+,1
09490: 09e8 49a0 0003            MOVI   349A0h,A8
094c0: 930e                      MOVE   A8,*A14+,1
094d0: 0d5f 9510 0002            CALLA  29510h
09500: c064                      JR     9B50h
09510: a3cf                      MOVE   A14,-*SP,1
09520: 09e8 e958 0002            MOVI   2E958h,A8
09550: 930e                      MOVE   A8,*A14+,1
09560: 09e8 49a0 0003            MOVI   349A0h,A8
09590: 930e                      MOVE   A8,*A14+,1
095a0: 0d5f 9510 0002            CALLA  29510h
095d0: c057                      JR     9B50h
095e0: a3cf                      MOVE   A14,-*SP,1
095f0: 09e8 e970 0002            MOVI   2E970h,A8
09620: 930e                      MOVE   A8,*A14+,1
09630: 09e8 49a0 0003            MOVI   349A0h,A8
09660: 930e                      MOVE   A8,*A14+,1
09670: 0d5f 9510 0002            CALLA  29510h
096a0: c04a                      JR     9B50h
096b0: a3cf                      MOVE   A14,-*SP,1
096c0: 09e8 e988 0002            MOVI   2E988h,A8
096f0: 930e                      MOVE   A8,*A14+,1
09700: 09e8 49a0 0003            MOVI   349A0h,A8
09730: 930e                      MOVE   A8,*A14+,1
09740: 0d5f 9510 0002            CALLA  29510h
09770: c03d                      JR     9B50h
09780: 1948                      MOVK   Ah,A8
09790: 05e8 f900 0002            MOVB   A8,@2F900h
097c0: 1828                      MOVK   1h,A8
097d0: c041                      JR     9BF0h
097e0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
09800: 1488                      SUBK   4h,A8
09810: cac2                      JREQ   9440h
09820: 1428                      DEC    A8
09830: cacd                      JREQ   9510h
09840: 1428                      DEC    A8
09850: cad8                      JREQ   95E0h
09860: 3de8                      DSJS   A8,9780h
09870: c0e3                      JR     96B0h
09880: a3cf                      MOVE   A14,-*SP,1
09890: 09e8 e768 0002            MOVI   2E768h,A8
098c0: 930e                      MOVE   A8,*A14+,1
098d0: 09e8 49a0 0003            MOVI   349A0h,A8
09900: 930e                      MOVE   A8,*A14+,1
09910: 0d5f 9510 0002            CALLA  29510h
09940: c027                      JR     9BC0h
09950: a3cf                      MOVE   A14,-*SP,1
09960: 09e8 e618 0002            MOVI   2E618h,A8
09990: 930e                      MOVE   A8,*A14+,1
099a0: 09e8 49a0 0003            MOVI   349A0h,A8
099d0: 930e                      MOVE   A8,*A14+,1
099e0: 0d5f 9510 0002            CALLA  29510h
09a10: c01a                      JR     9BC0h
09a20: a3cf                      MOVE   A14,-*SP,1
09a30: 09e8 e720 0002            MOVI   2E720h,A8
09a60: 930e                      MOVE   A8,*A14+,1
09a70: 09e8 49a0 0003            MOVI   349A0h,A8
09aa0: 930e                      MOVE   A8,*A14+,1
09ab0: 0d5f 9510 0002            CALLA  29510h
09ae0: c00d                      JR     9BC0h
09af0: 1948                      MOVK   Ah,A8
09b00: 05e8 f900 0002            MOVB   A8,@2F900h
09b30: 1828                      MOVK   1h,A8
09b40: c00a                      JR     9BF0h
09b50: afa8 ffc0                 MOVB   *A13(FFC0h),A8
09b70: caea                      JREQ   9A20h
09b80: 1428                      DEC    A8
09b90: cadb                      JREQ   9950h
09ba0: 3d88                      DSJS   A8,9AF0h
09bb0: c0cc                      JR     9880h
09bc0: 0d5f 37a0 0001            CALLA  137A0h
09bf0: b7ee 0040                 MOVE   *SP(40h),A14,1
09c10: 97ed                      MOVE   *SP+,A13,1
09c20: 0962                      RETS   2h

_set_qbsd_visible_tiga_request:
09c30: a3af                      MOVE   A13,-*SP,1
09c40: 4dcd                      MOVE   A14,A13
09c50: a3cf                      MOVE   A14,-*SP,1
09c60: 09e8 e9a0 0002            MOVI   2E9A0h,A8
09c90: 930e                      MOVE   A8,*A14+,1
09ca0: 09e8 49a0 0003            MOVI   349A0h,A8
09cd0: 930e                      MOVE   A8,*A14+,1
09ce0: 0d5f 97c0 0002            CALLA  297C0h
09d10: afa8 ffe0                 MOVB   *A13(FFE0h),A8
09d30: 39a8                      DSJS   A8,9E10h
09d40: a3cf                      MOVE   A14,-*SP,1
09d50: 09e8 e678 0002            MOVI   2E678h,A8
09d80: 930e                      MOVE   A8,*A14+,1
09d90: 09e8 49a0 0003            MOVI   349A0h,A8
09dc0: 930e                      MOVE   A8,*A14+,1
09dd0: 0d5f 9510 0002            CALLA  29510h
09e00: c00c                      JR     9ED0h
09e10: a3cf                      MOVE   A14,-*SP,1
09e20: 09e8 e768 0002            MOVI   2E768h,A8
09e50: 930e                      MOVE   A8,*A14+,1
09e60: 09e8 49a0 0003            MOVI   349A0h,A8
09e90: 930e                      MOVE   A8,*A14+,1
09ea0: 0d5f 9510 0002            CALLA  29510h
09ed0: 0d5f 37a0 0001            CALLA  137A0h
09f00: b7ee 0040                 MOVE   *SP(40h),A14,1
09f20: 97ed                      MOVE   *SP+,A13,1
09f30: 0962                      RETS   2h

_set_qbsd_gain_tiga_request:
09f40: a3af                      MOVE   A13,-*SP,1
09f50: 4dcd                      MOVE   A14,A13
09f60: a3cf                      MOVE   A14,-*SP,1
09f70: 09e8 e9c8 0002            MOVI   2E9C8h,A8
09fa0: 930e                      MOVE   A8,*A14+,1
09fb0: 09e8 49a0 0003            MOVI   349A0h,A8
09fe0: 930e                      MOVE   A8,*A14+,1
09ff0: 0d5f 97c0 0002            CALLA  297C0h
0a020: c03a                      JR     A3D0h
0a030: a3cf                      MOVE   A14,-*SP,1
0a040: 09e8 e678 0002            MOVI   2E678h,A8
0a070: 930e                      MOVE   A8,*A14+,1
0a080: 09e8 49a0 0003            MOVI   349A0h,A8
0a0b0: 930e                      MOVE   A8,*A14+,1
0a0c0: 0d5f 9510 0002            CALLA  29510h
0a0f0: c036                      JR     A460h
0a100: a3cf                      MOVE   A14,-*SP,1
0a110: 09e8 e9f0 0002            MOVI   2E9F0h,A8
0a140: 930e                      MOVE   A8,*A14+,1
0a150: 09e8 49a0 0003            MOVI   349A0h,A8
0a180: 930e                      MOVE   A8,*A14+,1
0a190: 0d5f 9510 0002            CALLA  29510h
0a1c0: c029                      JR     A460h
0a1d0: a3cf                      MOVE   A14,-*SP,1
0a1e0: 09e8 e6c0 0002            MOVI   2E6C0h,A8
0a210: 930e                      MOVE   A8,*A14+,1
0a220: 09e8 49a0 0003            MOVI   349A0h,A8
0a250: 930e                      MOVE   A8,*A14+,1
0a260: 0d5f 9510 0002            CALLA  29510h
0a290: c01c                      JR     A460h
0a2a0: a3cf                      MOVE   A14,-*SP,1
0a2b0: 09e8 ea00 0002            MOVI   2EA00h,A8
0a2e0: 930e                      MOVE   A8,*A14+,1
0a2f0: 09e8 49a0 0003            MOVI   349A0h,A8
0a320: 930e                      MOVE   A8,*A14+,1
0a330: 0d5f 9510 0002            CALLA  29510h
0a360: c00f                      JR     A460h
0a370: 1948                      MOVK   Ah,A8
0a380: 05e8 f900 0002            MOVB   A8,@2F900h
0a3b0: 1828                      MOVK   1h,A8
0a3c0: c01f                      JR     A5C0h
0a3d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0a3f0: caea                      JREQ   A2A0h
0a400: 1428                      DEC    A8
0a410: cadb                      JREQ   A1D0h
0a420: 1428                      DEC    A8
0a430: cacc                      JREQ   A100h
0a440: 3dc8                      DSJS   A8,A370h
0a450: c0bd                      JR     A030h
0a460: 0d5f 37a0 0001            CALLA  137A0h
0a490: 4d08                      MOVE   A8,A8
0a4a0: cb10                      JRNE   A5B0h
0a4b0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0a4d0: 05e8 f4e0 0002            MOVB   A8,@2F4E0h
0a500: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
0a530: 0ba8 0010 0000            ORI    10h,A8
0a560: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
0a590: 4508                      SUB    A8,A8
0a5a0: c001                      JR     A5C0h
0a5b0: 1828                      MOVK   1h,A8
0a5c0: b7ee 0040                 MOVE   *SP(40h),A14,1
0a5e0: 97ed                      MOVE   *SP+,A13,1
0a5f0: 0962                      RETS   2h

_set_scm_range_tiga_request:
0a600: a3af                      MOVE   A13,-*SP,1
0a610: 4dcd                      MOVE   A14,A13
0a620: 0b0e 0060                 ADDI   60h,A14
0a640: a3cf                      MOVE   A14,-*SP,1
0a650: 09e8 ea10 0002            MOVI   2EA10h,A8
0a680: 930e                      MOVE   A8,*A14+,1
0a690: 09e8 49a0 0003            MOVI   349A0h,A8
0a6c0: 930e                      MOVE   A8,*A14+,1
0a6d0: 0d5f 97c0 0002            CALLA  297C0h
0a700: a3cf                      MOVE   A14,-*SP,1
0a710: 1948                      MOVK   Ah,A8
0a720: 930e                      MOVE   A8,*A14+,1
0a730: 93ae                      MOVE   A13,*A14+,1
0a740: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0a760: 930e                      MOVE   A8,*A14+,1
0a770: 0d5f 7f70 0002            CALLA  27F70h
0a7a0: a3cf                      MOVE   A14,-*SP,1
0a7b0: 93ae                      MOVE   A13,*A14+,1
0a7c0: 09e8 49a0 0003            MOVI   349A0h,A8
0a7f0: 930e                      MOVE   A8,*A14+,1
0a800: 0d5f 9510 0002            CALLA  29510h
0a830: 0d5f 37a0 0001            CALLA  137A0h
0a860: 4d08                      MOVE   A8,A8
0a870: cb10                      JRNE   A980h
0a880: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0a8a0: 05e8 f4d8 0002            MOVB   A8,@2F4D8h
0a8d0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
0a900: 0ba8 0020 0000            ORI    20h,A8
0a930: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
0a960: 4508                      SUB    A8,A8
0a970: c001                      JR     A990h
0a980: 1828                      MOVK   1h,A8
0a990: b7ee 0040                 MOVE   *SP(40h),A14,1
0a9b0: 97ed                      MOVE   *SP+,A13,1
0a9c0: 0962                      RETS   2h

_scm_readings_reqd_tiga_request:
0a9d0: a3af                      MOVE   A13,-*SP,1
0a9e0: 4dcd                      MOVE   A14,A13
0a9f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0aa10: 05e8 f860 0002            MOVB   A8,@2F860h
0aa40: 0548                      SETF   8h,0,0
0aa50: 05a8 f860 0002            MOVE   @2F860h,A8,0
0aa80: 39a8                      DSJS   A8,AB60h
0aa90: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
0aac0: cb09                      JRNE   AB60h
0aad0: a3cf                      MOVE   A14,-*SP,1
0aae0: 1828                      MOVK   1h,A8
0aaf0: 930e                      MOVE   A8,*A14+,1
0ab00: 0d5f a600 0000            CALLA  A600h
0ab30: 3848                      DSJS   A8,AB60h
0ab40: 1828                      MOVK   1h,A8
0ab50: c00a                      JR     AC00h
0ab60: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
0ab90: 0ba8 0020 0000            ORI    20h,A8
0abc0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
0abf0: 4508                      SUB    A8,A8
0ac00: b7ee 0040                 MOVE   *SP(40h),A14,1
0ac20: 97ed                      MOVE   *SP+,A13,1
0ac30: 0962                      RETS   2h

_read_vacuum_status:
0ac40: a3af                      MOVE   A13,-*SP,1
0ac50: 4dcd                      MOVE   A14,A13
0ac60: 0b0e 0060                 ADDI   60h,A14
0ac80: 1848                      MOVK   2h,A8
0ac90: ad0d 0040                 MOVB   A8,*A13(40h)
0acb0: a3cf                      MOVE   A14,-*SP,1
0acc0: 09e8 ea38 0002            MOVI   2EA38h,A8
0acf0: 930e                      MOVE   A8,*A14+,1
0ad00: 09e8 49a0 0003            MOVI   349A0h,A8
0ad30: 930e                      MOVE   A8,*A14+,1
0ad40: 0d5f 97c0 0002            CALLA  297C0h
0ad70: a3cf                      MOVE   A14,-*SP,1
0ad80: 09e8 ea58 0002            MOVI   2EA58h,A8
0adb0: 930e                      MOVE   A8,*A14+,1
0adc0: 09e8 49a0 0003            MOVI   349A0h,A8
0adf0: 930e                      MOVE   A8,*A14+,1
0ae00: 0d5f 9510 0002            CALLA  29510h
0ae30: 18a8                      MOVK   5h,A8
0ae40: 0788 4980 0003            MOVE   A8,@34980h,1
0ae70: a3cf                      MOVE   A14,-*SP,1
0ae80: 09e8 49a0 0003            MOVI   349A0h,A8
0aeb0: 930e                      MOVE   A8,*A14+,1
0aec0: 0d5f 98e0 0002            CALLA  298E0h
0aef0: 1088                      ADDK   4h,A8
0af00: 0788 4960 0003            MOVE   A8,@34960h,1
0af30: afa8 0040                 MOVB   *A13(40h),A8
0af50: 1428                      DEC    A8
0af60: ad0d 0040                 MOVB   A8,*A13(40h)
0af80: 1028                      INC    A8
0af90: ca45                      JREQ   B3F0h
0afa0: 0d5f 2d60 0001            CALLA  12D60h
0afd0: 4d08                      MOVE   A8,A8
0afe0: cb39                      JRNE   B380h
0aff0: 09e8 07a0 0003            MOVI   307A0h,A8
0b020: b30d 0020                 MOVE   A8,*A13(20h),1
0b040: 4508                      SUB    A8,A8
0b050: 8d0d                      MOVB   A8,*A13
0b060: a3cf                      MOVE   A14,-*SP,1
0b070: 1808                      MOVK   20h,A8
0b080: 930e                      MOVE   A8,*A14+,1
0b090: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0b0b0: 0d5f 9660 0002            CALLA  29660h
0b0e0: b30d 0020                 MOVE   A8,*A13(20h),1
0b100: 4d08                      MOVE   A8,A8
0b110: ca0d                      JREQ   B1F0h
0b120: 1108                      ADDK   8h,A8
0b130: b30d 0020                 MOVE   A8,*A13(20h),1
0b150: a3cf                      MOVE   A14,-*SP,1
0b160: 8fa8                      MOVB   *A13,A8
0b170: 930e                      MOVE   A8,*A14+,1
0b180: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0b1a0: 0d5f 3b00 0001            CALLA  13B00h
0b1d0: 39c8                      DSJS   A8,B2C0h
0b1e0: c012                      JR     B310h
0b1f0: 1968                      MOVK   Bh,A8
0b200: 05e8 f900 0002            MOVB   A8,@2F900h
0b230: a3cf                      MOVE   A14,-*SP,1
0b240: 09e8 07a0 0003            MOVI   307A0h,A8
0b270: 930e                      MOVE   A8,*A14+,1
0b280: 0d5f 3170 0001            CALLA  13170h
0b2b0: c005                      JR     B310h
0b2c0: 8fa8                      MOVB   *A13,A8
0b2d0: 1028                      INC    A8
0b2e0: 8d0d                      MOVB   A8,*A13
0b2f0: 1528                      SUBK   9h,A8
0b300: c4d5                      JRLT   B060h
0b310: 0548                      SETF   8h,0,0
0b320: 05a8 f900 0002            MOVE   @2F900h,A8,0
0b350: cb02                      JRNE   B380h
0b360: 4508                      SUB    A8,A8
0b370: c008                      JR     B400h
0b380: afa8 0040                 MOVB   *A13(40h),A8
0b3a0: 1428                      DEC    A8
0b3b0: ad0d 0040                 MOVB   A8,*A13(40h)
0b3d0: 1028                      INC    A8
0b3e0: cbbb                      JRNE   AFA0h
0b3f0: 1828                      MOVK   1h,A8
0b400: 0bee ff9f                 SUBI   60h,A14
0b420: 97ed                      MOVE   *SP+,A13,1
0b430: 0960                      RETS   

_read_fevac_status:
0b440: 4508                      SUB    A8,A8
0b450: 0960                      RETS   

_auto_range_scm_reading:
0b460: a3af                      MOVE   A13,-*SP,1
0b470: 4dcd                      MOVE   A14,A13
0b480: 100e                      ADDK   20h,A14
0b490: 0d5f bb50 0000            CALLA  BB50h
0b4c0: 3848                      DSJS   A8,B4F0h
0b4d0: 1828                      MOVK   1h,A8
0b4e0: c063                      JR     BB20h
0b4f0: d60e f840 0002            MOVE   @2F840h,*A14+,1
0b520: 0d5f 46d0 0002            CALLA  246D0h
0b550: 0548                      SETF   8h,0,0
0b560: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
0b590: 1428                      DEC    A8
0b5a0: 24a8                      SLL    5h,A8
0b5b0: 0b28 f940 0002            ADDI   2F940h,A8
0b5e0: 9b0e                      MOVE   *A8+,*A14+,1
0b5f0: 0d5f 46d0 0002            CALLA  246D0h
0b620: 09e8 ee00 0002            MOVI   2EE00h,A8
0b650: 9b0e                      MOVE   *A8+,*A14+,1
0b660: 9b0e                      MOVE   *A8+,*A14+,1
0b670: 0d5f 6400 0002            CALLA  26400h
0b6a0: 0d5f 5120 0002            CALLA  25120h
0b6d0: ca1c                      JREQ   B8A0h
0b6e0: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
0b710: 1428                      DEC    A8
0b720: c615                      JRLE   B880h
0b730: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
0b760: 1428                      DEC    A8
0b770: 8d0d                      MOVB   A8,*A13
0b780: a3cf                      MOVE   A14,-*SP,1
0b790: 8fa8                      MOVB   *A13,A8
0b7a0: 930e                      MOVE   A8,*A14+,1
0b7b0: 0d5f a600 0000            CALLA  A600h
0b7e0: 3848                      DSJS   A8,B810h
0b7f0: 1828                      MOVK   1h,A8
0b800: c031                      JR     BB20h
0b810: a3cf                      MOVE   A14,-*SP,1
0b820: 18c8                      MOVK   6h,A8
0b830: 930e                      MOVE   A8,*A14+,1
0b840: 0d5f 0000 0000            CALLA  0h
0b870: c0c1                      JR     B490h
0b880: 4508                      SUB    A8,A8
0b890: c028                      JR     BB20h
0b8a0: 0550                      SETF   10h,0,0
0b8b0: 05a8 f910 0002            MOVE   @2F910h,A8,0
0b8e0: 0b68 0000 ffff            CMPI   FFFFh,A8
0b910: c502                      JRGE   B940h
0b920: 4d08                      MOVE   A8,A8
0b930: c71d                      JRGT   BB10h
0b940: 0548                      SETF   8h,0,0
0b950: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
0b980: 1588                      SUBK   Ch,A8
0b990: c515                      JRGE   BAF0h
0b9a0: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
0b9d0: 1028                      INC    A8
0b9e0: 8d0d                      MOVB   A8,*A13
0b9f0: a3cf                      MOVE   A14,-*SP,1
0ba00: 8fa8                      MOVB   *A13,A8
0ba10: 930e                      MOVE   A8,*A14+,1
0ba20: 0d5f a600 0000            CALLA  A600h
0ba50: 3848                      DSJS   A8,BA80h
0ba60: 1828                      MOVK   1h,A8
0ba70: c00a                      JR     BB20h
0ba80: a3cf                      MOVE   A14,-*SP,1
0ba90: 18c8                      MOVK   6h,A8
0baa0: 930e                      MOVE   A8,*A14+,1
0bab0: 0d5f 0000 0000            CALLA  0h
0bae0: c09a                      JR     B490h
0baf0: 4508                      SUB    A8,A8
0bb00: c001                      JR     BB20h
0bb10: 4508                      SUB    A8,A8
0bb20: 140e                      SUBK   20h,A14
0bb30: 97ed                      MOVE   *SP+,A13,1
0bb40: 0960                      RETS   

_take_scm_reading:
0bb50: a3af                      MOVE   A13,-*SP,1
0bb60: 4dcd                      MOVE   A14,A13
0bb70: 0b0e 0040                 ADDI   40h,A14
0bb90: 1848                      MOVK   2h,A8
0bba0: ad0d 0020                 MOVB   A8,*A13(20h)
0bbc0: a3cf                      MOVE   A14,-*SP,1
0bbd0: 09e8 ea70 0002            MOVI   2EA70h,A8
0bc00: 930e                      MOVE   A8,*A14+,1
0bc10: 09e8 49a0 0003            MOVI   349A0h,A8
0bc40: 930e                      MOVE   A8,*A14+,1
0bc50: 0d5f 97c0 0002            CALLA  297C0h
0bc80: a3cf                      MOVE   A14,-*SP,1
0bc90: 09e8 ea58 0002            MOVI   2EA58h,A8
0bcc0: 930e                      MOVE   A8,*A14+,1
0bcd0: 09e8 49a0 0003            MOVI   349A0h,A8
0bd00: 930e                      MOVE   A8,*A14+,1
0bd10: 0d5f 9510 0002            CALLA  29510h
0bd40: 18a8                      MOVK   5h,A8
0bd50: 0788 4980 0003            MOVE   A8,@34980h,1
0bd80: a3cf                      MOVE   A14,-*SP,1
0bd90: 09e8 49a0 0003            MOVI   349A0h,A8
0bdc0: 930e                      MOVE   A8,*A14+,1
0bdd0: 0d5f 98e0 0002            CALLA  298E0h
0be00: 1088                      ADDK   4h,A8
0be10: 0788 4960 0003            MOVE   A8,@34960h,1
0be40: afa8 0020                 MOVB   *A13(20h),A8
0be60: 1428                      DEC    A8
0be70: ad0d 0020                 MOVB   A8,*A13(20h)
0be90: 1028                      INC    A8
0bea0: ca35                      JREQ   C200h
0beb0: 0d5f 2d60 0001            CALLA  12D60h
0bee0: 4d08                      MOVE   A8,A8
0bef0: cb29                      JRNE   C190h
0bf00: a3cf                      MOVE   A14,-*SP,1
0bf10: 1808                      MOVK   20h,A8
0bf20: 930e                      MOVE   A8,*A14+,1
0bf30: 09e8 07a0 0003            MOVI   307A0h,A8
0bf60: 930e                      MOVE   A8,*A14+,1
0bf70: 0d5f 9660 0002            CALLA  29660h
0bfa0: 830d                      MOVE   A8,*A13,1
0bfb0: 4d08                      MOVE   A8,A8
0bfc0: ca10                      JREQ   C0D0h
0bfd0: 1108                      ADDK   8h,A8
0bfe0: 830d                      MOVE   A8,*A13,1
0bff0: a3cf                      MOVE   A14,-*SP,1
0c000: 930e                      MOVE   A8,*A14+,1
0c010: 0d5f 7e50 0002            CALLA  27E50h
0c040: 0550                      SETF   10h,0,0
0c050: 0588 f910 0002            MOVE   A8,@2F910h,0
0c080: 0d5f 0cf0 0001            CALLA  10CF0h
0c0b0: 4508                      SUB    A8,A8
0c0c0: c014                      JR     C210h
0c0d0: 1968                      MOVK   Bh,A8
0c0e0: 05e8 f900 0002            MOVB   A8,@2F900h
0c110: a3cf                      MOVE   A14,-*SP,1
0c120: 09e8 07a0 0003            MOVI   307A0h,A8
0c150: 930e                      MOVE   A8,*A14+,1
0c160: 0d5f 3170 0001            CALLA  13170h
0c190: afa8 0020                 MOVB   *A13(20h),A8
0c1b0: 1428                      DEC    A8
0c1c0: ad0d 0020                 MOVB   A8,*A13(20h)
0c1e0: 1028                      INC    A8
0c1f0: cbcb                      JRNE   BEB0h
0c200: 1828                      MOVK   1h,A8
0c210: 0bee ffbf                 SUBI   40h,A14
0c230: 97ed                      MOVE   *SP+,A13,1
0c240: 0960                      RETS   

_get_system_config_data:
0c250: 098f 000c                 MMTM   SP,A12,A13
0c270: 4dcd                      MOVE   A14,A13
0c280: 0b0e 00c0                 ADDI   C0h,A14
0c2a0: 4508                      SUB    A8,A8
0c2b0: 0550                      SETF   10h,0,0
0c2c0: 810d                      MOVE   A8,*A13,0
0c2d0: a3cf                      MOVE   A14,-*SP,1
0c2e0: 09e8 ea90 0002            MOVI   2EA90h,A8
0c310: 930e                      MOVE   A8,*A14+,1
0c320: 09e8 49a0 0003            MOVI   349A0h,A8
0c350: 930e                      MOVE   A8,*A14+,1
0c360: 0d5f 97c0 0002            CALLA  297C0h
0c390: a3cf                      MOVE   A14,-*SP,1
0c3a0: 4da8                      MOVE   A13,A8
0c3b0: 1008                      ADDK   20h,A8
0c3c0: 930e                      MOVE   A8,*A14+,1
0c3d0: 0550                      SETF   10h,0,0
0c3e0: 85a8                      MOVE   *A13,A8,0
0c3f0: 0b08 3000                 ADDI   3000h,A8
0c410: 930e                      MOVE   A8,*A14+,1
0c420: 0d5f 06a0 0001            CALLA  106A0h
0c450: a3cf                      MOVE   A14,-*SP,1
0c460: 4da8                      MOVE   A13,A8
0c470: 1008                      ADDK   20h,A8
0c480: 930e                      MOVE   A8,*A14+,1
0c490: 09e8 49a0 0003            MOVI   349A0h,A8
0c4c0: 930e                      MOVE   A8,*A14+,1
0c4d0: 0d5f 9510 0002            CALLA  29510h
0c500: a3cf                      MOVE   A14,-*SP,1
0c510: 09e8 ea58 0002            MOVI   2EA58h,A8
0c540: 930e                      MOVE   A8,*A14+,1
0c550: 09e8 49a0 0003            MOVI   349A0h,A8
0c580: 930e                      MOVE   A8,*A14+,1
0c590: 0d5f 9510 0002            CALLA  29510h
0c5c0: 18a8                      MOVK   5h,A8
0c5d0: 0788 4980 0003            MOVE   A8,@34980h,1
0c600: a3cf                      MOVE   A14,-*SP,1
0c610: 09e8 49a0 0003            MOVI   349A0h,A8
0c640: 930e                      MOVE   A8,*A14+,1
0c650: 0d5f 98e0 0002            CALLA  298E0h
0c680: 1088                      ADDK   4h,A8
0c690: 0788 4960 0003            MOVE   A8,@34960h,1
0c6c0: 1848                      MOVK   2h,A8
0c6d0: ad0d 00a0                 MOVB   A8,*A13(A0h)
0c6f0: 1428                      DEC    A8
0c700: ad0d 00a0                 MOVB   A8,*A13(A0h)
0c720: 1028                      INC    A8
0c730: ca35                      JREQ   CA90h
0c740: 0d5f 2d60 0001            CALLA  12D60h
0c770: 4d08                      MOVE   A8,A8
0c780: cb29                      JRNE   CA20h
0c790: a3cf                      MOVE   A14,-*SP,1
0c7a0: 1808                      MOVK   20h,A8
0c7b0: 930e                      MOVE   A8,*A14+,1
0c7c0: 09e8 07a0 0003            MOVI   307A0h,A8
0c7f0: 930e                      MOVE   A8,*A14+,1
0c800: 0d5f 9660 0002            CALLA  29660h
0c830: b30d 0080                 MOVE   A8,*A13(80h),1
0c850: 4d08                      MOVE   A8,A8
0c860: ca0f                      JREQ   C960h
0c870: 0550                      SETF   10h,0,0
0c880: 85a8                      MOVE   *A13,A8,0
0c890: 2468                      SLL    3h,A8
0c8a0: 0b28 17a0 0003            ADDI   317A0h,A8
0c8d0: a3cf                      MOVE   A14,-*SP,1
0c8e0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
0c900: 4d0c                      MOVE   A8,A12
0c910: 0d5f 0090 0001            CALLA  10090h
0c940: 8d0c                      MOVB   A8,*A12
0c950: c013                      JR     CA90h
0c960: 196c                      MOVK   Bh,A12
0c970: 05ec f900 0002            MOVB   A12,@2F900h
0c9a0: a3cf                      MOVE   A14,-*SP,1
0c9b0: 09e8 07a0 0003            MOVI   307A0h,A8
0c9e0: 930e                      MOVE   A8,*A14+,1
0c9f0: 0d5f 3170 0001            CALLA  13170h
0ca20: afac 00a0                 MOVB   *A13(A0h),A12
0ca40: 142c                      DEC    A12
0ca50: ad8d 00a0                 MOVB   A12,*A13(A0h)
0ca70: 102c                      INC    A12
0ca80: cbcb                      JRNE   C740h
0ca90: 0548                      SETF   8h,0,0
0caa0: 05ac f900 0002            MOVE   @2F900h,A12,0
0cad0: ca02                      JREQ   CB00h
0cae0: 1828                      MOVK   1h,A8
0caf0: c009                      JR     CB90h
0cb00: 0550                      SETF   10h,0,0
0cb10: 85a8                      MOVE   *A13,A8,0
0cb20: 1028                      INC    A8
0cb30: 810d                      MOVE   A8,*A13,0
0cb40: 0b48 fb70                 CMPI   48Fh,A8
0cb60: c400 ff75                 JRLT   C2D0h
0cb80: 4508                      SUB    A8,A8
0cb90: 0bee ff3f                 SUBI   C0h,A14
0cbb0: 09af 3000                 MMFM   SP,A12,A13
0cbd0: 0960                      RETS   

_save_system_config_data:
0cbe0: a3af                      MOVE   A13,-*SP,1
0cbf0: 4dcd                      MOVE   A14,A13
0cc00: 0b0e 0080                 ADDI   80h,A14
0cc20: 4508                      SUB    A8,A8
0cc30: 0550                      SETF   10h,0,0
0cc40: 810d                      MOVE   A8,*A13,0
0cc50: a3cf                      MOVE   A14,-*SP,1
0cc60: 09e8 eab8 0002            MOVI   2EAB8h,A8
0cc90: 930e                      MOVE   A8,*A14+,1
0cca0: 09e8 49a0 0003            MOVI   349A0h,A8
0ccd0: 930e                      MOVE   A8,*A14+,1
0cce0: 0d5f 97c0 0002            CALLA  297C0h
0cd10: a3cf                      MOVE   A14,-*SP,1
0cd20: 4da8                      MOVE   A13,A8
0cd30: 1008                      ADDK   20h,A8
0cd40: 930e                      MOVE   A8,*A14+,1
0cd50: 0550                      SETF   10h,0,0
0cd60: 85a8                      MOVE   *A13,A8,0
0cd70: 0b08 3000                 ADDI   3000h,A8
0cd90: 930e                      MOVE   A8,*A14+,1
0cda0: 0d5f 06a0 0001            CALLA  106A0h
0cdd0: a3cf                      MOVE   A14,-*SP,1
0cde0: 4da8                      MOVE   A13,A8
0cdf0: 1008                      ADDK   20h,A8
0ce00: 930e                      MOVE   A8,*A14+,1
0ce10: 09e8 49a0 0003            MOVI   349A0h,A8
0ce40: 930e                      MOVE   A8,*A14+,1
0ce50: 0d5f 9510 0002            CALLA  29510h
0ce80: a3cf                      MOVE   A14,-*SP,1
0ce90: 09e8 e890 0002            MOVI   2E890h,A8
0cec0: 930e                      MOVE   A8,*A14+,1
0ced0: 09e8 49a0 0003            MOVI   349A0h,A8
0cf00: 930e                      MOVE   A8,*A14+,1
0cf10: 0d5f 9510 0002            CALLA  29510h
0cf40: a3cf                      MOVE   A14,-*SP,1
0cf50: 4da8                      MOVE   A13,A8
0cf60: 1008                      ADDK   20h,A8
0cf70: 930e                      MOVE   A8,*A14+,1
0cf80: 0550                      SETF   10h,0,0
0cf90: 85a8                      MOVE   *A13,A8,0
0cfa0: 2468                      SLL    3h,A8
0cfb0: 0b28 17a0 0003            ADDI   317A0h,A8
0cfe0: 0548                      SETF   8h,0,0
0cff0: 8508                      MOVE   *A8,A8,0
0d000: 930e                      MOVE   A8,*A14+,1
0d010: 0d5f 06a0 0001            CALLA  106A0h
0d040: a3cf                      MOVE   A14,-*SP,1
0d050: 4da8                      MOVE   A13,A8
0d060: 1008                      ADDK   20h,A8
0d070: 930e                      MOVE   A8,*A14+,1
0d080: 09e8 49a0 0003            MOVI   349A0h,A8
0d0b0: 930e                      MOVE   A8,*A14+,1
0d0c0: 0d5f 9510 0002            CALLA  29510h
0d0f0: 0d5f 37a0 0001            CALLA  137A0h
0d120: 38c8                      DSJS   A8,D190h
0d130: 1888                      MOVK   4h,A8
0d140: 05e8 f870 0002            MOVB   A8,@2F870h
0d170: 1828                      MOVK   1h,A8
0d180: c00c                      JR     D250h
0d190: 0550                      SETF   10h,0,0
0d1a0: 85a8                      MOVE   *A13,A8,0
0d1b0: 1028                      INC    A8
0d1c0: 810d                      MOVE   A8,*A13,0
0d1d0: 0b48 fb70                 CMPI   48Fh,A8
0d1f0: c4a5                      JRLT   CC50h
0d200: 1828                      MOVK   1h,A8
0d210: 05e8 f870 0002            MOVB   A8,@2F870h
0d240: 4508                      SUB    A8,A8
0d250: 0bee ff7f                 SUBI   80h,A14
0d270: 97ed                      MOVE   *SP+,A13,1
0d280: 0960                      RETS   

_read_vacuum_software:
0d290: 098f 000c                 MMTM   SP,A12,A13
0d2b0: 4dcd                      MOVE   A14,A13
0d2c0: 0b0e 00c0                 ADDI   C0h,A14
0d2e0: 4508                      SUB    A8,A8
0d2f0: 0550                      SETF   10h,0,0
0d300: 810d                      MOVE   A8,*A13,0
0d310: a3cf                      MOVE   A14,-*SP,1
0d320: 09e8 ea90 0002            MOVI   2EA90h,A8
0d350: 930e                      MOVE   A8,*A14+,1
0d360: 09e8 49a0 0003            MOVI   349A0h,A8
0d390: 930e                      MOVE   A8,*A14+,1
0d3a0: 0d5f 97c0 0002            CALLA  297C0h
0d3d0: a3cf                      MOVE   A14,-*SP,1
0d3e0: 4da8                      MOVE   A13,A8
0d3f0: 1008                      ADDK   20h,A8
0d400: 930e                      MOVE   A8,*A14+,1
0d410: 0550                      SETF   10h,0,0
0d420: 85a8                      MOVE   *A13,A8,0
0d430: 0b08 0080                 ADDI   80h,A8
0d450: 930e                      MOVE   A8,*A14+,1
0d460: 0d5f 06a0 0001            CALLA  106A0h
0d490: a3cf                      MOVE   A14,-*SP,1
0d4a0: 4da8                      MOVE   A13,A8
0d4b0: 1008                      ADDK   20h,A8
0d4c0: 930e                      MOVE   A8,*A14+,1
0d4d0: 09e8 49a0 0003            MOVI   349A0h,A8
0d500: 930e                      MOVE   A8,*A14+,1
0d510: 0d5f 9510 0002            CALLA  29510h
0d540: a3cf                      MOVE   A14,-*SP,1
0d550: 09e8 ea58 0002            MOVI   2EA58h,A8
0d580: 930e                      MOVE   A8,*A14+,1
0d590: 09e8 49a0 0003            MOVI   349A0h,A8
0d5c0: 930e                      MOVE   A8,*A14+,1
0d5d0: 0d5f 9510 0002            CALLA  29510h
0d600: 18a8                      MOVK   5h,A8
0d610: 0788 4980 0003            MOVE   A8,@34980h,1
0d640: a3cf                      MOVE   A14,-*SP,1
0d650: 09e8 49a0 0003            MOVI   349A0h,A8
0d680: 930e                      MOVE   A8,*A14+,1
0d690: 0d5f 98e0 0002            CALLA  298E0h
0d6c0: 1088                      ADDK   4h,A8
0d6d0: 0788 4960 0003            MOVE   A8,@34960h,1
0d700: 1848                      MOVK   2h,A8
0d710: ad0d 00a0                 MOVB   A8,*A13(A0h)
0d730: 1428                      DEC    A8
0d740: ad0d 00a0                 MOVB   A8,*A13(A0h)
0d760: 1028                      INC    A8
0d770: ca35                      JREQ   DAD0h
0d780: 0d5f 2d60 0001            CALLA  12D60h
0d7b0: 4d08                      MOVE   A8,A8
0d7c0: cb29                      JRNE   DA60h
0d7d0: a3cf                      MOVE   A14,-*SP,1
0d7e0: 1808                      MOVK   20h,A8
0d7f0: 930e                      MOVE   A8,*A14+,1
0d800: 09e8 07a0 0003            MOVI   307A0h,A8
0d830: 930e                      MOVE   A8,*A14+,1
0d840: 0d5f 9660 0002            CALLA  29660h
0d870: b30d 0080                 MOVE   A8,*A13(80h),1
0d890: 4d08                      MOVE   A8,A8
0d8a0: ca0f                      JREQ   D9A0h
0d8b0: 0550                      SETF   10h,0,0
0d8c0: 85a8                      MOVE   *A13,A8,0
0d8d0: 2468                      SLL    3h,A8
0d8e0: 0b28 f880 0002            ADDI   2F880h,A8
0d910: a3cf                      MOVE   A14,-*SP,1
0d920: d3ae 0080                 MOVE   *A13(80h),*A14+,1
0d940: 4d0c                      MOVE   A8,A12
0d950: 0d5f 0090 0001            CALLA  10090h
0d980: 8d0c                      MOVB   A8,*A12
0d990: c013                      JR     DAD0h
0d9a0: 196c                      MOVK   Bh,A12
0d9b0: 05ec f900 0002            MOVB   A12,@2F900h
0d9e0: a3cf                      MOVE   A14,-*SP,1
0d9f0: 09e8 07a0 0003            MOVI   307A0h,A8
0da20: 930e                      MOVE   A8,*A14+,1
0da30: 0d5f 3170 0001            CALLA  13170h
0da60: afac 00a0                 MOVB   *A13(A0h),A12
0da80: 142c                      DEC    A12
0da90: ad8d 00a0                 MOVB   A12,*A13(A0h)
0dab0: 102c                      INC    A12
0dac0: cbcb                      JRNE   D780h
0dad0: 0548                      SETF   8h,0,0
0dae0: 05ac f900 0002            MOVE   @2F900h,A12,0
0db10: ca02                      JREQ   DB40h
0db20: 1828                      MOVK   1h,A8
0db30: c00b                      JR     DBF0h
0db40: 0550                      SETF   10h,0,0
0db50: 85a8                      MOVE   *A13,A8,0
0db60: 1028                      INC    A8
0db70: 810d                      MOVE   A8,*A13,0
0db80: 14e8                      SUBK   7h,A8
0db90: c400 ff76                 JRLT   D310h
0dbb0: 4508                      SUB    A8,A8
0dbc0: 05e8 f8b8 0002            MOVB   A8,@2F8B8h
0dbf0: 0bee ff3f                 SUBI   C0h,A14
0dc10: 09af 3000                 MMFM   SP,A12,A13
0dc30: 0960                      RETS   

_read_comms_software:
0dc40: 098f 000c                 MMTM   SP,A12,A13
0dc60: 4dcd                      MOVE   A14,A13
0dc70: 0b0e 00c0                 ADDI   C0h,A14
0dc90: 4508                      SUB    A8,A8
0dca0: 0550                      SETF   10h,0,0
0dcb0: 810d                      MOVE   A8,*A13,0
0dcc0: a3cf                      MOVE   A14,-*SP,1
0dcd0: 09e8 eae0 0002            MOVI   2EAE0h,A8
0dd00: 930e                      MOVE   A8,*A14+,1
0dd10: 09e8 49a0 0003            MOVI   349A0h,A8
0dd40: 930e                      MOVE   A8,*A14+,1
0dd50: 0d5f 97c0 0002            CALLA  297C0h
0dd80: a3cf                      MOVE   A14,-*SP,1
0dd90: 4da8                      MOVE   A13,A8
0dda0: 1008                      ADDK   20h,A8
0ddb0: 930e                      MOVE   A8,*A14+,1
0ddc0: 0550                      SETF   10h,0,0
0ddd0: 85a8                      MOVE   *A13,A8,0
0dde0: 0b08 0080                 ADDI   80h,A8
0de00: 930e                      MOVE   A8,*A14+,1
0de10: 0d5f 06a0 0001            CALLA  106A0h
0de40: a3cf                      MOVE   A14,-*SP,1
0de50: 4da8                      MOVE   A13,A8
0de60: 1008                      ADDK   20h,A8
0de70: 930e                      MOVE   A8,*A14+,1
0de80: 09e8 49a0 0003            MOVI   349A0h,A8
0deb0: 930e                      MOVE   A8,*A14+,1
0dec0: 0d5f 9510 0002            CALLA  29510h
0def0: a3cf                      MOVE   A14,-*SP,1
0df00: 09e8 ea58 0002            MOVI   2EA58h,A8
0df30: 930e                      MOVE   A8,*A14+,1
0df40: 09e8 49a0 0003            MOVI   349A0h,A8
0df70: 930e                      MOVE   A8,*A14+,1
0df80: 0d5f 9510 0002            CALLA  29510h
0dfb0: 18a8                      MOVK   5h,A8
0dfc0: 0788 4980 0003            MOVE   A8,@34980h,1
0dff0: a3cf                      MOVE   A14,-*SP,1
0e000: 09e8 49a0 0003            MOVI   349A0h,A8
0e030: 930e                      MOVE   A8,*A14+,1
0e040: 0d5f 98e0 0002            CALLA  298E0h
0e070: 1088                      ADDK   4h,A8
0e080: 0788 4960 0003            MOVE   A8,@34960h,1
0e0b0: 1848                      MOVK   2h,A8
0e0c0: ad0d 00a0                 MOVB   A8,*A13(A0h)
0e0e0: 1428                      DEC    A8
0e0f0: ad0d 00a0                 MOVB   A8,*A13(A0h)
0e110: 1028                      INC    A8
0e120: ca35                      JREQ   E480h
0e130: 0d5f 2d60 0001            CALLA  12D60h
0e160: 4d08                      MOVE   A8,A8
0e170: cb29                      JRNE   E410h
0e180: a3cf                      MOVE   A14,-*SP,1
0e190: 1808                      MOVK   20h,A8
0e1a0: 930e                      MOVE   A8,*A14+,1
0e1b0: 09e8 07a0 0003            MOVI   307A0h,A8
0e1e0: 930e                      MOVE   A8,*A14+,1
0e1f0: 0d5f 9660 0002            CALLA  29660h
0e220: b30d 0080                 MOVE   A8,*A13(80h),1
0e240: 4d08                      MOVE   A8,A8
0e250: ca0f                      JREQ   E350h
0e260: 0550                      SETF   10h,0,0
0e270: 85a8                      MOVE   *A13,A8,0
0e280: 2468                      SLL    3h,A8
0e290: 0b28 f8c0 0002            ADDI   2F8C0h,A8
0e2c0: a3cf                      MOVE   A14,-*SP,1
0e2d0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
0e2f0: 4d0c                      MOVE   A8,A12
0e300: 0d5f 0090 0001            CALLA  10090h
0e330: 8d0c                      MOVB   A8,*A12
0e340: c013                      JR     E480h
0e350: 196c                      MOVK   Bh,A12
0e360: 05ec f900 0002            MOVB   A12,@2F900h
0e390: a3cf                      MOVE   A14,-*SP,1
0e3a0: 09e8 07a0 0003            MOVI   307A0h,A8
0e3d0: 930e                      MOVE   A8,*A14+,1
0e3e0: 0d5f 3170 0001            CALLA  13170h
0e410: afac 00a0                 MOVB   *A13(A0h),A12
0e430: 142c                      DEC    A12
0e440: ad8d 00a0                 MOVB   A12,*A13(A0h)
0e460: 102c                      INC    A12
0e470: cbcb                      JRNE   E130h
0e480: 0548                      SETF   8h,0,0
0e490: 05ac f900 0002            MOVE   @2F900h,A12,0
0e4c0: ca02                      JREQ   E4F0h
0e4d0: 1828                      MOVK   1h,A8
0e4e0: c00b                      JR     E5A0h
0e4f0: 0550                      SETF   10h,0,0
0e500: 85a8                      MOVE   *A13,A8,0
0e510: 1028                      INC    A8
0e520: 810d                      MOVE   A8,*A13,0
0e530: 14e8                      SUBK   7h,A8
0e540: c400 ff76                 JRLT   DCC0h
0e560: 4508                      SUB    A8,A8
0e570: 05e8 f8f8 0002            MOVB   A8,@2F8F8h
0e5a0: 0bee ff3f                 SUBI   C0h,A14
0e5c0: 09af 3000                 MMFM   SP,A12,A13
0e5e0: 0960                      RETS   

_config_vac_tilt0_tiga_request:
0e5f0: a3af                      MOVE   A13,-*SP,1
0e600: 4dcd                      MOVE   A14,A13
0e610: a3cf                      MOVE   A14,-*SP,1
0e620: 09e8 eb08 0002            MOVI   2EB08h,A8
0e650: 930e                      MOVE   A8,*A14+,1
0e660: 09e8 49a0 0003            MOVI   349A0h,A8
0e690: 930e                      MOVE   A8,*A14+,1
0e6a0: 0d5f 97c0 0002            CALLA  297C0h
0e6d0: c020                      JR     E8E0h
0e6e0: a3cf                      MOVE   A14,-*SP,1
0e6f0: 09e8 e608 0002            MOVI   2E608h,A8
0e720: 930e                      MOVE   A8,*A14+,1
0e730: 09e8 49a0 0003            MOVI   349A0h,A8
0e760: 930e                      MOVE   A8,*A14+,1
0e770: 0d5f 9510 0002            CALLA  29510h
0e7a0: c018                      JR     E930h
0e7b0: a3cf                      MOVE   A14,-*SP,1
0e7c0: 09e8 e618 0002            MOVI   2E618h,A8
0e7f0: 930e                      MOVE   A8,*A14+,1
0e800: 09e8 49a0 0003            MOVI   349A0h,A8
0e830: 930e                      MOVE   A8,*A14+,1
0e840: 0d5f 9510 0002            CALLA  29510h
0e870: c00b                      JR     E930h
0e880: 1948                      MOVK   Ah,A8
0e890: 05e8 f900 0002            MOVB   A8,@2F900h
0e8c0: 1828                      MOVK   1h,A8
0e8d0: c008                      JR     E960h
0e8e0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0e900: caea                      JREQ   E7B0h
0e910: 3d48                      DSJS   A8,E880h
0e920: c0db                      JR     E6E0h
0e930: 0d5f 37a0 0001            CALLA  137A0h
0e960: b7ee 0040                 MOVE   *SP(40h),A14,1
0e980: 97ed                      MOVE   *SP+,A13,1
0e990: 0962                      RETS   2h

_touch_alarm_off:
0e9a0: a3af                      MOVE   A13,-*SP,1
0e9b0: 4dcd                      MOVE   A14,A13
0e9c0: 0b0e 00a0                 ADDI   A0h,A14
0e9e0: a3cf                      MOVE   A14,-*SP,1
0e9f0: 09e8 eb30 0002            MOVI   2EB30h,A8
0ea20: 930e                      MOVE   A8,*A14+,1
0ea30: 09e8 49a0 0003            MOVI   349A0h,A8
0ea60: 930e                      MOVE   A8,*A14+,1
0ea70: 0d5f 97c0 0002            CALLA  297C0h
0eaa0: a3cf                      MOVE   A14,-*SP,1
0eab0: 09e8 ea58 0002            MOVI   2EA58h,A8
0eae0: 930e                      MOVE   A8,*A14+,1
0eaf0: 09e8 49a0 0003            MOVI   349A0h,A8
0eb20: 930e                      MOVE   A8,*A14+,1
0eb30: 0d5f 9510 0002            CALLA  29510h
0eb60: 18a8                      MOVK   5h,A8
0eb70: 0788 4980 0003            MOVE   A8,@34980h,1
0eba0: a3cf                      MOVE   A14,-*SP,1
0ebb0: 09e8 49a0 0003            MOVI   349A0h,A8
0ebe0: 930e                      MOVE   A8,*A14+,1
0ebf0: 0d5f 98e0 0002            CALLA  298E0h
0ec20: 1088                      ADDK   4h,A8
0ec30: 0788 4960 0003            MOVE   A8,@34960h,1
0ec60: 1848                      MOVK   2h,A8
0ec70: ad0d 0090                 MOVB   A8,*A13(90h)
0ec90: 1428                      DEC    A8
0eca0: ad0d 0090                 MOVB   A8,*A13(90h)
0ecc0: 1028                      INC    A8
0ecd0: ca4e                      JREQ   F1C0h
0ece0: 0d5f 2d60 0001            CALLA  12D60h
0ed10: 4d08                      MOVE   A8,A8
0ed20: cb42                      JRNE   F150h
0ed30: a3cf                      MOVE   A14,-*SP,1
0ed40: 1808                      MOVK   20h,A8
0ed50: 930e                      MOVE   A8,*A14+,1
0ed60: 09e8 07a0 0003            MOVI   307A0h,A8
0ed90: 930e                      MOVE   A8,*A14+,1
0eda0: 0d5f 9660 0002            CALLA  29660h
0edd0: b30d 0060                 MOVE   A8,*A13(60h),1
0edf0: 4d08                      MOVE   A8,A8
0ee00: ca34                      JREQ   F150h
0ee10: 1108                      ADDK   8h,A8
0ee20: b30d 0060                 MOVE   A8,*A13(60h),1
0ee40: a3cf                      MOVE   A14,-*SP,1
0ee50: 930e                      MOVE   A8,*A14+,1
0ee60: 0d5f 0090 0001            CALLA  10090h
0ee90: ad0d 0080                 MOVB   A8,*A13(80h)
0eeb0: 0548                      SETF   8h,0,0
0eec0: b5a8 0080                 MOVE   *A13(80h),A8,0
0eee0: 0b88 0040 0000            ANDI   FFFFFFBFh,A8
0ef10: ad0d 0080                 MOVB   A8,*A13(80h)
0ef30: a3cf                      MOVE   A14,-*SP,1
0ef40: 09e8 eb68 0002            MOVI   2EB68h,A8
0ef70: 930e                      MOVE   A8,*A14+,1
0ef80: 09e8 49a0 0003            MOVI   349A0h,A8
0efb0: 930e                      MOVE   A8,*A14+,1
0efc0: 0d5f 97c0 0002            CALLA  297C0h
0eff0: a3cf                      MOVE   A14,-*SP,1
0f000: 93ae                      MOVE   A13,*A14+,1
0f010: 0548                      SETF   8h,0,0
0f020: b5a8 0080                 MOVE   *A13(80h),A8,0
0f040: 930e                      MOVE   A8,*A14+,1
0f050: 0d5f 06a0 0001            CALLA  106A0h
0f080: a3cf                      MOVE   A14,-*SP,1
0f090: 93ae                      MOVE   A13,*A14+,1
0f0a0: 09e8 49a0 0003            MOVI   349A0h,A8
0f0d0: 930e                      MOVE   A8,*A14+,1
0f0e0: 0d5f 9510 0002            CALLA  29510h
0f110: 0d5f 37a0 0001            CALLA  137A0h
0f140: c008                      JR     F1D0h
0f150: afa8 0090                 MOVB   *A13(90h),A8
0f170: 1428                      DEC    A8
0f180: ad0d 0090                 MOVB   A8,*A13(90h)
0f1a0: 1028                      INC    A8
0f1b0: cbb2                      JRNE   ECE0h
0f1c0: 1828                      MOVK   1h,A8
0f1d0: 0bee ff5f                 SUBI   A0h,A14
0f1f0: 97ed                      MOVE   *SP+,A13,1
0f200: 0960                      RETS   

_check_valve_state:
0f210: 098f 000c                 MMTM   SP,A12,A13
0f230: 4dcd                      MOVE   A14,A13
0f240: c01b                      JR     F400h
0f250: 1868                      MOVK   3h,A8
0f260: c026                      JR     F4D0h
0f270: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f290: 182c                      MOVK   1h,A12
0f2a0: 8d88                      MOVB   A12,*A8
0f2b0: 4508                      SUB    A8,A8
0f2c0: c020                      JR     F4D0h
0f2d0: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
0f2f0: 1848                      MOVK   2h,A8
0f300: 8d0c                      MOVB   A8,*A12
0f310: 4508                      SUB    A8,A8
0f320: c01a                      JR     F4D0h
0f330: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
0f350: 4508                      SUB    A8,A8
0f360: 8d0c                      MOVB   A8,*A12
0f370: c015                      JR     F4D0h
0f380: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
0f3a0: 1868                      MOVK   3h,A8
0f3b0: 8d0c                      MOVB   A8,*A12
0f3c0: 4508                      SUB    A8,A8
0f3d0: c00f                      JR     F4D0h
0f3e0: 1828                      MOVK   1h,A8
0f3f0: c00d                      JR     F4D0h
0f400: afac ffe0                 MOVB   *A13(FFE0h),A12
0f420: 0bec ffbc                 SUBI   43h,A12
0f440: caee                      JREQ   F330h
0f450: 144c                      SUBK   2h,A12
0f460: caf1                      JREQ   F380h
0f470: 150c                      SUBK   8h,A12
0f480: cae4                      JREQ   F2D0h
0f490: 142c                      DEC    A12
0f4a0: cada                      JREQ   F250h
0f4b0: 3dcc                      DSJS   A12,F3E0h
0f4c0: c0da                      JR     F270h
0f4d0: b7ee 0060                 MOVE   *SP(60h),A14,1
0f4f0: 09af 3000                 MMFM   SP,A12,A13
0f510: 0962                      RETS   2h

_check_column_state:
0f520: 098f 000c                 MMTM   SP,A12,A13
0f540: 4dcd                      MOVE   A14,A13
0f550: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0f570: 8f08                      MOVB   *A8,A8
0f580: 0b48 ffb1                 CMPI   4Eh,A8
0f5a0: cb06                      JRNE   F610h
0f5b0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f5d0: 458c                      SUB    A12,A12
0f5e0: 8d88                      MOVB   A12,*A8
0f5f0: 4d88                      MOVE   A12,A8
0f600: c02e                      JR     F8F0h
0f610: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0f630: 8f88                      MOVB   *A12,A8
0f640: 0b48 ffbc                 CMPI   43h,A8
0f660: cb27                      JRNE   F8E0h
0f670: 110c                      ADDK   8h,A12
0f680: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0f6a0: 8f88                      MOVB   *A12,A8
0f6b0: 0b48 ffaf                 CMPI   50h,A8
0f6d0: cb20                      JRNE   F8E0h
0f6e0: 110c                      ADDK   8h,A12
0f6f0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0f710: 8f88                      MOVB   *A12,A8
0f720: 0b48 ffad                 CMPI   52h,A8
0f740: cb06                      JRNE   F7B0h
0f750: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f770: 188c                      MOVK   4h,A12
0f780: 8d88                      MOVB   A12,*A8
0f790: 4508                      SUB    A8,A8
0f7a0: c014                      JR     F8F0h
0f7b0: 8f88                      MOVB   *A12,A8
0f7c0: 0b48 ffa9                 CMPI   56h,A8
0f7e0: cb06                      JRNE   F850h
0f7f0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f810: 182c                      MOVK   1h,A12
0f820: 8d88                      MOVB   A12,*A8
0f830: 4508                      SUB    A8,A8
0f840: c00a                      JR     F8F0h
0f850: 8f88                      MOVB   *A12,A8
0f860: 1408                      SUBK   20h,A8
0f870: cb06                      JRNE   F8E0h
0f880: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f8a0: 184c                      MOVK   2h,A12
0f8b0: 8d88                      MOVB   A12,*A8
0f8c0: 4508                      SUB    A8,A8
0f8d0: c001                      JR     F8F0h
0f8e0: 1828                      MOVK   1h,A8
0f8f0: b7ee 0060                 MOVE   *SP(60h),A14,1
0f910: 09af 3000                 MMFM   SP,A12,A13
0f930: 0962                      RETS   2h

_check_system_state:
0f940: 098f 000c                 MMTM   SP,A12,A13
0f960: 4dcd                      MOVE   A14,A13
0f970: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0f990: 8f08                      MOVB   *A8,A8
0f9a0: 0b48 ffb1                 CMPI   4Eh,A8
0f9c0: cb06                      JRNE   FA30h
0f9d0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0f9f0: 458c                      SUB    A12,A12
0fa00: 8d88                      MOVB   A12,*A8
0fa10: 4d88                      MOVE   A12,A8
0fa20: c061                      JR     10040h
0fa30: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0fa50: 8f88                      MOVB   *A12,A8
0fa60: 0b48 ffa8                 CMPI   57h,A8
0fa80: cb23                      JRNE   FCC0h
0fa90: 110c                      ADDK   8h,A12
0faa0: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0fac0: 8f88                      MOVB   *A12,A8
0fad0: 0b48 ffab                 CMPI   54h,A8
0faf0: cb06                      JRNE   FB60h
0fb00: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0fb20: 188c                      MOVK   4h,A12
0fb30: 8d88                      MOVB   A12,*A8
0fb40: 4508                      SUB    A8,A8
0fb50: c04e                      JR     10040h
0fb60: 8f88                      MOVB   *A12,A8
0fb70: 0b48 ffaf                 CMPI   50h,A8
0fb90: cb06                      JRNE   FC00h
0fba0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0fbc0: 18ac                      MOVK   5h,A12
0fbd0: 8d88                      MOVB   A12,*A8
0fbe0: 4508                      SUB    A8,A8
0fbf0: c044                      JR     10040h
0fc00: 8f88                      MOVB   *A12,A8
0fc10: 0b48 ffa9                 CMPI   56h,A8
0fc30: cb06                      JRNE   FCA0h
0fc40: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0fc60: 18cc                      MOVK   6h,A12
0fc70: 8d88                      MOVB   A12,*A8
0fc80: 4508                      SUB    A8,A8
0fc90: c03a                      JR     10040h
0fca0: 1828                      MOVK   1h,A8
0fcb0: c038                      JR     10040h
0fcc0: 8f88                      MOVB   *A12,A8
0fcd0: 0b48 ffac                 CMPI   53h,A8
0fcf0: cb29                      JRNE   FF90h
0fd00: 110c                      ADDK   8h,A12
0fd10: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0fd30: 8f88                      MOVB   *A12,A8
0fd40: 0b48 ffaf                 CMPI   50h,A8
0fd60: cb20                      JRNE   FF70h
0fd70: 110c                      ADDK   8h,A12
0fd80: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
0fda0: 8f88                      MOVB   *A12,A8
0fdb0: 0b48 ffa9                 CMPI   56h,A8
0fdd0: cb06                      JRNE   FE40h
0fde0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0fe00: 182c                      MOVK   1h,A12
0fe10: 8d88                      MOVB   A12,*A8
0fe20: 4508                      SUB    A8,A8
0fe30: c020                      JR     10040h
0fe40: 8f88                      MOVB   *A12,A8
0fe50: 0b48 ffba                 CMPI   45h,A8
0fe70: cb06                      JRNE   FEE0h
0fe80: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0fea0: 186c                      MOVK   3h,A12
0feb0: 8d88                      MOVB   A12,*A8
0fec0: 4508                      SUB    A8,A8
0fed0: c016                      JR     10040h
0fee0: 8f88                      MOVB   *A12,A8
0fef0: 1408                      SUBK   20h,A8
0ff00: cb06                      JRNE   FF70h
0ff10: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0ff30: 184c                      MOVK   2h,A12
0ff40: 8d88                      MOVB   A12,*A8
0ff50: 4508                      SUB    A8,A8
0ff60: c00d                      JR     10040h
0ff70: 1828                      MOVK   1h,A8
0ff80: c00b                      JR     10040h
0ff90: 8f88                      MOVB   *A12,A8
0ffa0: 0b48 ffa9                 CMPI   56h,A8
0ffc0: cb06                      JRNE   10030h
0ffd0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0fff0: 18ec                      MOVK   7h,A12
10000: 8d88                      MOVB   A12,*A8
10010: 4508                      SUB    A8,A8
10020: c001                      JR     10040h
10030: 1828                      MOVK   1h,A8
10040: b7ee 0060                 MOVE   *SP(60h),A14,1
10060: 09af 3000                 MMFM   SP,A12,A13
10080: 0962                      RETS   2h

_hextoc:
10090: 098f 000c                 MMTM   SP,A12,A13
100b0: 4dcd                      MOVE   A14,A13
100c0: 100e                      ADDK   20h,A14
100d0: 4508                      SUB    A8,A8
100e0: 830d                      MOVE   A8,*A13,1
100f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10110: 8f08                      MOVB   *A8,A8
10120: 1408                      SUBK   20h,A8
10130: cb08                      JRNE   101C0h
10140: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10160: 1108                      ADDK   8h,A8
10170: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
10190: 8f08                      MOVB   *A8,A8
101a0: 1408                      SUBK   20h,A8
101b0: caf8                      JREQ   10140h
101c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
101e0: 8f08                      MOVB   *A8,A8
101f0: ca44                      JREQ   10640h
10200: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10220: 8f08                      MOVB   *A8,A8
10230: 0b48 ffcf                 CMPI   30h,A8
10250: c412                      JRLT   10380h
10260: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10280: 8f08                      MOVB   *A8,A8
10290: 0b48 ffc6                 CMPI   39h,A8
102b0: c70c                      JRGT   10380h
102c0: 87a8                      MOVE   *A13,A8,1
102d0: 2488                      SLL    4h,A8
102e0: 830d                      MOVE   A8,*A13,1
102f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10310: 8f08                      MOVB   *A8,A8
10320: 0be8 ffcf                 SUBI   30h,A8
10340: 87ac                      MOVE   *A13,A12,1
10350: 4188                      ADD    A12,A8
10360: 830d                      MOVE   A8,*A13,1
10370: c025                      JR     105D0h
10380: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
103a0: 8f88                      MOVB   *A12,A8
103b0: 0b48 ffbe                 CMPI   41h,A8
103d0: c40e                      JRLT   104C0h
103e0: 8f88                      MOVB   *A12,A8
103f0: 0b48 ffb9                 CMPI   46h,A8
10410: c70a                      JRGT   104C0h
10420: 87a8                      MOVE   *A13,A8,1
10430: 2488                      SLL    4h,A8
10440: 830d                      MOVE   A8,*A13,1
10450: 8f88                      MOVB   *A12,A8
10460: 0be8 ffc8                 SUBI   37h,A8
10480: 87ac                      MOVE   *A13,A12,1
10490: 4188                      ADD    A12,A8
104a0: 830d                      MOVE   A8,*A13,1
104b0: c011                      JR     105D0h
104c0: 8f88                      MOVB   *A12,A8
104d0: 0b48 ff9e                 CMPI   61h,A8
104f0: c414                      JRLT   10640h
10500: 8f88                      MOVB   *A12,A8
10510: 0b48 ff99                 CMPI   66h,A8
10530: c710                      JRGT   10640h
10540: 87a8                      MOVE   *A13,A8,1
10550: 2488                      SLL    4h,A8
10560: 830d                      MOVE   A8,*A13,1
10570: 8f88                      MOVB   *A12,A8
10580: 0be8 ffa8                 SUBI   57h,A8
105a0: 87ac                      MOVE   *A13,A12,1
105b0: 4188                      ADD    A12,A8
105c0: 830d                      MOVE   A8,*A13,1
105d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
105f0: 110c                      ADDK   8h,A12
10600: b38d ffe0                 MOVE   A12,*A13(FFE0h),1
10620: 8f88                      MOVB   *A12,A8
10630: cbbc                      JRNE   10200h
10640: 8fa8                      MOVB   *A13,A8
10650: b7ee 0060                 MOVE   *SP(60h),A14,1
10670: 09af 3000                 MMFM   SP,A12,A13
10690: 0962                      RETS   2h

_hexstr:
106a0: 098f 000c                 MMTM   SP,A12,A13
106c0: 4dcd                      MOVE   A14,A13
106d0: 0b0e 0040                 ADDI   40h,A14
106f0: 4508                      SUB    A8,A8
10700: 0570                      SETF   10h,1,0
10710: 810d                      MOVE   A8,*A13,0
10720: bbad ffe0 0020            MOVE   *A13(FFE0h),*A13(20h),1
10750: b7a8 0020                 MOVE   *A13(20h),A8,1
10770: cb09                      JRNE   10810h
10780: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
107a0: 09cc 0030                 MOVI   30h,A12
107c0: 8d88                      MOVB   A12,*A8
107d0: 1108                      ADDK   8h,A8
107e0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
10800: c045                      JR     10C60h
10810: ca0a                      JREQ   108C0h
10820: b7ac 0020                 MOVE   *A13(20h),A12,1
10840: 2b8c                      SRA    4h,A12
10850: b38d 0020                 MOVE   A12,*A13(20h),1
10870: 85a8                      MOVE   *A13,A8,0
10880: 1028                      INC    A8
10890: 810d                      MOVE   A8,*A13,0
108a0: 4d8c                      MOVE   A12,A12
108b0: cbf6                      JRNE   10820h
108c0: 458c                      SUB    A12,A12
108d0: b18d 0010                 MOVE   A12,*A13(10h),0
108f0: 85a8                      MOVE   *A13,A8,0
10900: c635                      JRLE   10C60h
10910: 85ac                      MOVE   *A13,A12,0
10920: b5a8 0010                 MOVE   *A13(10h),A8,0
10940: 450c                      SUB    A8,A12
10950: 142c                      DEC    A12
10960: 244c                      SLL    2h,A12
10970: 03ac                      NEG    A12
10980: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
109a0: 6588                      SRA    A12,A8
109b0: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
109d0: 8d0c                      MOVB   A8,*A12
109e0: 8f88                      MOVB   *A12,A8
109f0: c408                      JRLT   10A80h
10a00: 8f88                      MOVB   *A12,A8
10a10: 1528                      SUBK   9h,A8
10a20: c705                      JRGT   10A80h
10a30: 8f88                      MOVB   *A12,A8
10a40: 0b08 0030                 ADDI   30h,A8
10a60: 8d0c                      MOVB   A8,*A12
10a70: c004                      JR     10AC0h
10a80: 8f88                      MOVB   *A12,A8
10a90: 0b08 0037                 ADDI   37h,A8
10ab0: 8d0c                      MOVB   A8,*A12
10ac0: 85a8                      MOVE   *A13,A8,0
10ad0: b5ac 0010                 MOVE   *A13(10h),A12,0
10af0: 4588                      SUB    A12,A8
10b00: 1428                      DEC    A8
10b10: 2448                      SLL    2h,A8
10b20: 182c                      MOVK   1h,A12
10b30: 630c                      SLL    A8,A12
10b40: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10b60: 6d88                      MODS   A12,A8
10b70: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
10b90: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
10bb0: 110c                      ADDK   8h,A12
10bc0: b38d ffc0                 MOVE   A12,*A13(FFC0h),1
10be0: b5a8 0010                 MOVE   *A13(10h),A8,0
10c00: 1028                      INC    A8
10c10: b10d 0010                 MOVE   A8,*A13(10h),0
10c30: 85ac                      MOVE   *A13,A12,0
10c40: 4988                      CMP    A12,A8
10c50: c4cb                      JRLT   10910h
10c60: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
10c80: 4508                      SUB    A8,A8
10c90: 8d0c                      MOVB   A8,*A12
10ca0: b7ee 0060                 MOVE   *SP(60h),A14,1
10cc0: 09af 3000                 MMFM   SP,A12,A13
10ce0: 0962                      RETS   2h

_convert_scm_reading:
10cf0: a3af                      MOVE   A13,-*SP,1
10d00: 4dcd                      MOVE   A14,A13
10d10: 0b0e 0040                 ADDI   40h,A14
10d30: 0550                      SETF   10h,0,0
10d40: 05a8 f910 0002            MOVE   @2F910h,A8,0
10d70: 0b68 7fff ffff            CMPI   8000h,A8
10da0: c506                      JRGE   10E10h
10db0: 03a8                      NEG    A8
10dc0: 0b28 8000 0000            ADDI   8000h,A8
10df0: 810d                      MOVE   A8,*A13,0
10e00: c004                      JR     10E50h
10e10: 0d08 7fff ffff            SUBI   8000h,A8
10e40: 810d                      MOVE   A8,*A13,0
10e50: 85a8                      MOVE   *A13,A8,0
10e60: 0d5f 4d20 0002            CALLA  24D20h
10e90: 09e8 0000 4700            MOVI   47000000h,A8
10ec0: 930e                      MOVE   A8,*A14+,1
10ed0: 0d5f 6f20 0002            CALLA  26F20h
10f00: a7c8                      MOVE   -*A14,A8,1
10f10: b30d 0020                 MOVE   A8,*A13(20h),1
10f30: 0548                      SETF   8h,0,0
10f40: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
10f70: 24a8                      SLL    5h,A8
10f80: 0b28 f940 0002            ADDI   2F940h,A8
10fb0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
10fd0: 9b0e                      MOVE   *A8+,*A14+,1
10fe0: 0d5f 7680 0002            CALLA  27680h
11010: a7c8                      MOVE   -*A14,A8,1
11020: 0788 f840 0002            MOVE   A8,@2F840h,1
11050: 0bee ffbf                 SUBI   40h,A14
11070: 97ed                      MOVE   *SP+,A13,1
11080: 0960                      RETS   

_get_comms_psu:
11090: 098f 000c                 MMTM   SP,A12,A13
110b0: 4dcd                      MOVE   A14,A13
110c0: 0b0e 0040                 ADDI   40h,A14
110e0: a3cf                      MOVE   A14,-*SP,1
110f0: 09e8 eba8 0002            MOVI   2EBA8h,A8
11120: 930e                      MOVE   A8,*A14+,1
11130: 09e8 49a0 0003            MOVI   349A0h,A8
11160: 930e                      MOVE   A8,*A14+,1
11170: 0d5f 97c0 0002            CALLA  297C0h
111a0: a3cf                      MOVE   A14,-*SP,1
111b0: 09e8 ea58 0002            MOVI   2EA58h,A8
111e0: 930e                      MOVE   A8,*A14+,1
111f0: 09e8 49a0 0003            MOVI   349A0h,A8
11220: 930e                      MOVE   A8,*A14+,1
11230: 0d5f 9510 0002            CALLA  29510h
11260: 18a8                      MOVK   5h,A8
11270: 0788 4980 0003            MOVE   A8,@34980h,1
112a0: a3cf                      MOVE   A14,-*SP,1
112b0: 09e8 49a0 0003            MOVI   349A0h,A8
112e0: 930e                      MOVE   A8,*A14+,1
112f0: 0d5f 98e0 0002            CALLA  298E0h
11320: 1088                      ADDK   4h,A8
11330: 0788 4960 0003            MOVE   A8,@34960h,1
11360: 1848                      MOVK   2h,A8
11370: ad0d 0020                 MOVB   A8,*A13(20h)
11390: 1428                      DEC    A8
113a0: ad0d 0020                 MOVB   A8,*A13(20h)
113c0: 1028                      INC    A8
113d0: ca00 00a6                 JREQ   11E50h
113f0: 0d5f 2d60 0001            CALLA  12D60h
11420: 4d08                      MOVE   A8,A8
11430: cb00 0089                 JRNE   11CE0h
11450: a3cf                      MOVE   A14,-*SP,1
11460: 1808                      MOVK   20h,A8
11470: 930e                      MOVE   A8,*A14+,1
11480: 09e8 07a0 0003            MOVI   307A0h,A8
114b0: 930e                      MOVE   A8,*A14+,1
114c0: 0d5f 9660 0002            CALLA  29660h
114f0: 830d                      MOVE   A8,*A13,1
11500: 4d08                      MOVE   A8,A8
11510: cb0d                      JRNE   115F0h
11520: 1968                      MOVK   Bh,A8
11530: 05e8 f900 0002            MOVB   A8,@2F900h
11560: a3cf                      MOVE   A14,-*SP,1
11570: 09e8 07a0 0003            MOVI   307A0h,A8
115a0: 930e                      MOVE   A8,*A14+,1
115b0: 0d5f 3170 0001            CALLA  13170h
115e0: c06f                      JR     11CE0h
115f0: 1108                      ADDK   8h,A8
11600: 830d                      MOVE   A8,*A13,1
11610: c01c                      JR     117E0h
11620: 4508                      SUB    A8,A8
11630: 05e8 f4c8 0002            MOVB   A8,@2F4C8h
11660: c021                      JR     11880h
11670: 1828                      MOVK   1h,A8
11680: 05e8 f4c8 0002            MOVB   A8,@2F4C8h
116b0: c01c                      JR     11880h
116c0: 1848                      MOVK   2h,A8
116d0: 05e8 f4c8 0002            MOVB   A8,@2F4C8h
11700: c017                      JR     11880h
11710: 1988                      MOVK   Ch,A8
11720: 05e8 f900 0002            MOVB   A8,@2F900h
11750: a3cf                      MOVE   A14,-*SP,1
11760: 09e8 07a0 0003            MOVI   307A0h,A8
11790: 930e                      MOVE   A8,*A14+,1
117a0: 0d5f 3170 0001            CALLA  13170h
117d0: c00a                      JR     11880h
117e0: 8f08                      MOVB   *A8,A8
117f0: 0be8 ffd4                 SUBI   2Bh,A8
11810: caea                      JREQ   116C0h
11820: 1448                      SUBK   2h,A8
11830: cae3                      JREQ   11670h
11840: 0be8 ffdd                 SUBI   22h,A8
11860: cbea                      JRNE   11710h
11870: c0da                      JR     11620h
11880: 0548                      SETF   8h,0,0
11890: 05a8 f900 0002            MOVE   @2F900h,A8,0
118c0: cb41                      JRNE   11CE0h
118d0: a3cf                      MOVE   A14,-*SP,1
118e0: 1808                      MOVK   20h,A8
118f0: 930e                      MOVE   A8,*A14+,1
11900: d3ae 0000                 MOVE   *A13(0h),*A14+,1
11920: 0d5f 9660 0002            CALLA  29660h
11950: 830d                      MOVE   A8,*A13,1
11960: 4d08                      MOVE   A8,A8
11970: cb0d                      JRNE   11A50h
11980: 1968                      MOVK   Bh,A8
11990: 05e8 f900 0002            MOVB   A8,@2F900h
119c0: a3cf                      MOVE   A14,-*SP,1
119d0: 09e8 07a0 0003            MOVI   307A0h,A8
11a00: 930e                      MOVE   A8,*A14+,1
11a10: 0d5f 3170 0001            CALLA  13170h
11a40: c029                      JR     11CE0h
11a50: 1108                      ADDK   8h,A8
11a60: 830d                      MOVE   A8,*A13,1
11a70: c01c                      JR     11C40h
11a80: 4508                      SUB    A8,A8
11a90: 05e8 f4d0 0002            MOVB   A8,@2F4D0h
11ac0: c021                      JR     11CE0h
11ad0: 1828                      MOVK   1h,A8
11ae0: 05e8 f4d0 0002            MOVB   A8,@2F4D0h
11b10: c01c                      JR     11CE0h
11b20: 1848                      MOVK   2h,A8
11b30: 05e8 f4d0 0002            MOVB   A8,@2F4D0h
11b60: c017                      JR     11CE0h
11b70: 1988                      MOVK   Ch,A8
11b80: 05e8 f900 0002            MOVB   A8,@2F900h
11bb0: a3cf                      MOVE   A14,-*SP,1
11bc0: 09e8 07a0 0003            MOVI   307A0h,A8
11bf0: 930e                      MOVE   A8,*A14+,1
11c00: 0d5f 3170 0001            CALLA  13170h
11c30: c00a                      JR     11CE0h
11c40: 8f08                      MOVB   *A8,A8
11c50: 0be8 ffd4                 SUBI   2Bh,A8
11c70: caea                      JREQ   11B20h
11c80: 1448                      SUBK   2h,A8
11c90: cae3                      JREQ   11AD0h
11ca0: 0be8 ffdd                 SUBI   22h,A8
11cc0: cbea                      JRNE   11B70h
11cd0: c0da                      JR     11A80h
11ce0: 0548                      SETF   8h,0,0
11cf0: 05a8 f900 0002            MOVE   @2F900h,A8,0
11d20: cb0a                      JRNE   11DD0h
11d30: 1908                      MOVK   8h,A8
11d40: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
11d70: 5588                      OR     A12,A8
11d80: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
11db0: 4508                      SUB    A8,A8
11dc0: c009                      JR     11E60h
11dd0: afac 0020                 MOVB   *A13(20h),A12
11df0: 142c                      DEC    A12
11e00: ad8d 0020                 MOVB   A12,*A13(20h)
11e20: 102c                      INC    A12
11e30: cb00 ff5a                 JRNE   113F0h
11e50: 1828                      MOVK   1h,A8
11e60: 0bee ffbf                 SUBI   40h,A14
11e80: 09af 3000                 MMFM   SP,A12,A13
11ea0: 0960                      RETS   

_error_check:
11eb0: a3cf                      MOVE   A14,-*SP,1
11ec0: 09e8 07a0 0003            MOVI   307A0h,A8
11ef0: 930e                      MOVE   A8,*A14+,1
11f00: 0d5f 3170 0001            CALLA  13170h
11f30: 07e8 07a8 0003            MOVE   @307A8h,A8
11f60: 0b48 ffab                 CMPI   54h,A8
11f80: cb0b                      JRNE   12040h
11f90: 07e8 07b0 0003            MOVE   @307B0h,A8
11fc0: 0b48 ffb0                 CMPI   4Fh,A8
11fe0: cb05                      JRNE   12040h
11ff0: 1828                      MOVK   1h,A8
12000: 05e8 f900 0002            MOVB   A8,@2F900h
12030: 0960                      RETS   
12040: 07e8 07a8 0003            MOVE   @307A8h,A8
12070: 0b48 ffb0                 CMPI   4Fh,A8
12090: cb0c                      JRNE   12160h
120a0: 07e8 07b0 0003            MOVE   @307B0h,A8
120d0: 0b48 ffad                 CMPI   52h,A8
120f0: cb06                      JRNE   12160h
12100: 1848                      MOVK   2h,A8
12110: 05e8 f900 0002            MOVB   A8,@2F900h
12140: 1828                      MOVK   1h,A8
12150: 0960                      RETS   
12160: 07e8 07a8 0003            MOVE   @307A8h,A8
12190: 0b48 ffcf                 CMPI   30h,A8
121b0: cb0c                      JRNE   12280h
121c0: 07e8 07b0 0003            MOVE   @307B0h,A8
121f0: 0b48 ffce                 CMPI   31h,A8
12210: cb06                      JRNE   12280h
12220: 1868                      MOVK   3h,A8
12230: 05e8 f900 0002            MOVB   A8,@2F900h
12260: 1828                      MOVK   1h,A8
12270: 0960                      RETS   
12280: 07e8 07a8 0003            MOVE   @307A8h,A8
122b0: 0b48 ffcf                 CMPI   30h,A8
122d0: cb0c                      JRNE   123A0h
122e0: 07e8 07b0 0003            MOVE   @307B0h,A8
12310: 0b48 ffcd                 CMPI   32h,A8
12330: cb06                      JRNE   123A0h
12340: 1888                      MOVK   4h,A8
12350: 05e8 f900 0002            MOVB   A8,@2F900h
12380: 1828                      MOVK   1h,A8
12390: 0960                      RETS   
123a0: 07e8 07a8 0003            MOVE   @307A8h,A8
123d0: 0b48 ffcf                 CMPI   30h,A8
123f0: cb0c                      JRNE   124C0h
12400: 07e8 07b0 0003            MOVE   @307B0h,A8
12430: 0b48 ffcb                 CMPI   34h,A8
12450: cb06                      JRNE   124C0h
12460: 18a8                      MOVK   5h,A8
12470: 05e8 f900 0002            MOVB   A8,@2F900h
124a0: 1828                      MOVK   1h,A8
124b0: 0960                      RETS   
124c0: 07e8 07a8 0003            MOVE   @307A8h,A8
124f0: 0b48 ffcf                 CMPI   30h,A8
12510: cb0c                      JRNE   125E0h
12520: 07e8 07b0 0003            MOVE   @307B0h,A8
12550: 0b48 ffc7                 CMPI   38h,A8
12570: cb06                      JRNE   125E0h
12580: 18c8                      MOVK   6h,A8
12590: 05e8 f900 0002            MOVB   A8,@2F900h
125c0: 1828                      MOVK   1h,A8
125d0: 0960                      RETS   
125e0: 18e8                      MOVK   7h,A8
125f0: 05e8 f900 0002            MOVB   A8,@2F900h
12620: 1828                      MOVK   1h,A8
12630: 0960                      RETS   

_check_vac_board:
12640: a3af                      MOVE   A13,-*SP,1
12650: 4dcd                      MOVE   A14,A13
12660: 0b0e 0060                 ADDI   60h,A14
12680: a3cf                      MOVE   A14,-*SP,1
12690: 09e8 ebc8 0002            MOVI   2EBC8h,A8
126c0: 930e                      MOVE   A8,*A14+,1
126d0: 09e8 49a0 0003            MOVI   349A0h,A8
12700: 930e                      MOVE   A8,*A14+,1
12710: 0d5f 97c0 0002            CALLA  297C0h
12740: a3cf                      MOVE   A14,-*SP,1
12750: 09e8 ea58 0002            MOVI   2EA58h,A8
12780: 930e                      MOVE   A8,*A14+,1
12790: 09e8 49a0 0003            MOVI   349A0h,A8
127c0: 930e                      MOVE   A8,*A14+,1
127d0: 0d5f 9510 0002            CALLA  29510h
12800: 18a8                      MOVK   5h,A8
12810: 0788 4980 0003            MOVE   A8,@34980h,1
12840: a3cf                      MOVE   A14,-*SP,1
12850: 09e8 49a0 0003            MOVI   349A0h,A8
12880: 930e                      MOVE   A8,*A14+,1
12890: 0d5f 98e0 0002            CALLA  298E0h
128c0: 1088                      ADDK   4h,A8
128d0: 0788 4960 0003            MOVE   A8,@34960h,1
12900: 1848                      MOVK   2h,A8
12910: ad0d 0040                 MOVB   A8,*A13(40h)
12930: 1428                      DEC    A8
12940: ad0d 0040                 MOVB   A8,*A13(40h)
12960: 1028                      INC    A8
12970: ca39                      JREQ   12D10h
12980: 0d5f 2d60 0001            CALLA  12D60h
129b0: 4d08                      MOVE   A8,A8
129c0: cb2d                      JRNE   12CA0h
129d0: a3cf                      MOVE   A14,-*SP,1
129e0: 1808                      MOVK   20h,A8
129f0: 930e                      MOVE   A8,*A14+,1
12a00: 09e8 07a0 0003            MOVI   307A0h,A8
12a30: 930e                      MOVE   A8,*A14+,1
12a40: 0d5f 9660 0002            CALLA  29660h
12a70: b30d 0020                 MOVE   A8,*A13(20h),1
12a90: 4d08                      MOVE   A8,A8
12aa0: ca1f                      JREQ   12CA0h
12ab0: a3cf                      MOVE   A14,-*SP,1
12ac0: 930e                      MOVE   A8,*A14+,1
12ad0: 0d5f 0090 0001            CALLA  10090h
12b00: 8d0d                      MOVB   A8,*A13
12b10: 0548                      SETF   8h,0,0
12b20: 85a8                      MOVE   *A13,A8,0
12b30: 1f48                      BTST   5h,A8
12b40: cb13                      JRNE   12C80h
12b50: 1828                      MOVK   1h,A8
12b60: 0788 0c20 0003            MOVE   A8,@30C20h,1
12b90: 09c8 007f                 MOVI   7Fh,A8
12bb0: 05e8 0c40 0003            MOVB   A8,@30C40h
12be0: a3cf                      MOVE   A14,-*SP,1
12bf0: 09e8 0c20 0003            MOVI   30C20h,A8
12c20: 930e                      MOVE   A8,*A14+,1
12c30: 18e8                      MOVK   7h,A8
12c40: 930e                      MOVE   A8,*A14+,1
12c50: 0d5f 0000 0000            CALLA  0h
12c80: 4508                      SUB    A8,A8
12c90: c008                      JR     12D20h
12ca0: afa8 0040                 MOVB   *A13(40h),A8
12cc0: 1428                      DEC    A8
12cd0: ad0d 0040                 MOVB   A8,*A13(40h)
12cf0: 1028                      INC    A8
12d00: cbc7                      JRNE   12980h
12d10: 1828                      MOVK   1h,A8
12d20: 0bee ff9f                 SUBI   60h,A14
12d40: 97ed                      MOVE   *SP+,A13,1
12d50: 0960                      RETS   

_send_vac_command:
12d60: a3af                      MOVE   A13,-*SP,1
12d70: 4dcd                      MOVE   A14,A13
12d80: 100e                      ADDK   20h,A14
12d90: a3cf                      MOVE   A14,-*SP,1
12da0: 09e8 4960 0003            MOVI   34960h,A8
12dd0: 930e                      MOVE   A8,*A14+,1
12de0: 1848                      MOVK   2h,A8
12df0: 930e                      MOVE   A8,*A14+,1
12e00: 0d5f 0000 0000            CALLA  0h
12e30: 830d                      MOVE   A8,*A13,1
12e40: 4d08                      MOVE   A8,A8
12e50: cb29                      JRNE   130F0h
12e60: a3cf                      MOVE   A14,-*SP,1
12e70: 4508                      SUB    A8,A8
12e80: 930e                      MOVE   A8,*A14+,1
12e90: 09e8 0760 0003            MOVI   30760h,A8
12ec0: 930e                      MOVE   A8,*A14+,1
12ed0: 18a8                      MOVK   5h,A8
12ee0: 930e                      MOVE   A8,*A14+,1
12ef0: 0d5f 0000 0000            CALLA  0h
12f20: 830d                      MOVE   A8,*A13,1
12f30: 4d08                      MOVE   A8,A8
12f40: cb15                      JRNE   130A0h
12f50: 07e8 07a8 0003            MOVE   @307A8h,A8
12f80: 0b48 ffcf                 CMPI   30h,A8
12fa0: cb0b                      JRNE   13060h
12fb0: 07e8 07b0 0003            MOVE   @307B0h,A8
12fe0: 0b48 ffcf                 CMPI   30h,A8
13000: cb05                      JRNE   13060h
13010: 4508                      SUB    A8,A8
13020: 05e8 f900 0002            MOVB   A8,@2F900h
13050: c00e                      JR     13140h
13060: 0d5f 1eb0 0001            CALLA  11EB0h
13090: c009                      JR     13130h
130a0: 1928                      MOVK   9h,A8
130b0: 05e8 f900 0002            MOVB   A8,@2F900h
130e0: c004                      JR     13130h
130f0: 1908                      MOVK   8h,A8
13100: 05e8 f900 0002            MOVB   A8,@2F900h
13130: 1828                      MOVK   1h,A8
13140: 140e                      SUBK   20h,A14
13150: 97ed                      MOVE   *SP+,A13,1
13160: 0960                      RETS   

_log_error:
13170: 098f 002c                 MMTM   SP,A10,A12,A13
13190: 4dcd                      MOVE   A14,A13
131a0: 0b0e 0060                 ADDI   60h,A14
131c0: bbad ffe0 0040            MOVE   *A13(FFE0h),*A13(40h),1
131f0: 4508                      SUB    A8,A8
13200: 830d                      MOVE   A8,*A13,1
13210: 0568                      SETF   8h,1,0
13220: b7a8 0040                 MOVE   *A13(40h),A8,1
13240: 950c                      MOVE   *A8+,A12,0
13250: b30d 0040                 MOVE   A8,*A13(40h),1
13270: 154c                      SUBK   Ah,A12
13280: ca06                      JREQ   132F0h
13290: 87ac                      MOVE   *A13,A12,1
132a0: 102c                      INC    A12
132b0: 838d                      MOVE   A12,*A13,1
132c0: 0b4c ff7f                 CMPI   80h,A12
132e0: c4f3                      JRLT   13220h
132f0: bbad ffe0 0040            MOVE   *A13(FFE0h),*A13(40h),1
13320: 458c                      SUB    A12,A12
13330: b38d 0020                 MOVE   A12,*A13(20h),1
13350: 87a8                      MOVE   *A13,A8,1
13360: 490c                      CMP    A8,A12
13370: c526                      JRGE   135E0h
13380: 0550                      SETF   10h,0,0
13390: 05ac f920 0002            MOVE   @2F920h,A12,0
133c0: 246c                      SLL    3h,A12
133d0: 0b2c 5000 0003            ADDI   35000h,A12
13400: b7a8 0040                 MOVE   *A13(40h),A8,1
13420: 0568                      SETF   8h,1,0
13430: 950a                      MOVE   *A8+,A10,0
13440: b30d 0040                 MOVE   A8,*A13(40h),1
13460: 8d4c                      MOVB   A10,*A12
13470: 0550                      SETF   10h,0,0
13480: 05ac f920 0002            MOVE   @2F920h,A12,0
134b0: 102c                      INC    A12
134c0: 058c f920 0002            MOVE   A12,@2F920h,0
134f0: 0b4c efff                 CMPI   1000h,A12
13510: cb04                      JRNE   13560h
13520: 454a                      SUB    A10,A10
13530: 058a f920 0002            MOVE   A10,@2F920h,0
13560: b7ac 0020                 MOVE   *A13(20h),A12,1
13580: 102c                      INC    A12
13590: b38d 0020                 MOVE   A12,*A13(20h),1
135b0: 87aa                      MOVE   *A13,A10,1
135c0: 494c                      CMP    A10,A12
135d0: c4db                      JRLT   13390h
135e0: 0550                      SETF   10h,0,0
135f0: 05aa f920 0002            MOVE   @2F920h,A10,0
13620: 246a                      SLL    3h,A10
13630: 0b2a 5000 0003            ADDI   35000h,A10
13660: 4508                      SUB    A8,A8
13670: 8d0a                      MOVB   A8,*A10
13680: 05aa f920 0002            MOVE   @2F920h,A10,0
136b0: 102a                      INC    A10
136c0: 058a f920 0002            MOVE   A10,@2F920h,0
136f0: 0b4a efff                 CMPI   1000h,A10
13710: cb03                      JRNE   13750h
13720: 0588 f920 0002            MOVE   A8,@2F920h,0
13750: b7ee 0080                 MOVE   *SP(80h),A14,1
13770: 09af 3400                 MMFM   SP,A10,A12,A13
13790: 0962                      RETS   2h

_retry_vac_command:
137a0: a3af                      MOVE   A13,-*SP,1
137b0: 4dcd                      MOVE   A14,A13
137c0: 100e                      ADDK   20h,A14
137d0: 1848                      MOVK   2h,A8
137e0: 8d0d                      MOVB   A8,*A13
137f0: a3cf                      MOVE   A14,-*SP,1
13800: 09e8 ea58 0002            MOVI   2EA58h,A8
13830: 930e                      MOVE   A8,*A14+,1
13840: 09e8 49a0 0003            MOVI   349A0h,A8
13870: 930e                      MOVE   A8,*A14+,1
13880: 0d5f 9510 0002            CALLA  29510h
138b0: 18a8                      MOVK   5h,A8
138c0: 0788 4980 0003            MOVE   A8,@34980h,1
138f0: a3cf                      MOVE   A14,-*SP,1
13900: 09e8 49a0 0003            MOVI   349A0h,A8
13930: 930e                      MOVE   A8,*A14+,1
13940: 0d5f 98e0 0002            CALLA  298E0h
13970: 1088                      ADDK   4h,A8
13980: 0788 4960 0003            MOVE   A8,@34960h,1
139b0: 8fa8                      MOVB   *A13,A8
139c0: 1428                      DEC    A8
139d0: 8d0d                      MOVB   A8,*A13
139e0: 1028                      INC    A8
139f0: ca0c                      JREQ   13AC0h
13a00: 0d5f 2d60 0001            CALLA  12D60h
13a30: 4d08                      MOVE   A8,A8
13a40: cb02                      JRNE   13A70h
13a50: 4508                      SUB    A8,A8
13a60: c006                      JR     13AD0h
13a70: 8fa8                      MOVB   *A13,A8
13a80: 1428                      DEC    A8
13a90: 8d0d                      MOVB   A8,*A13
13aa0: 1028                      INC    A8
13ab0: cbf4                      JRNE   13A00h
13ac0: 1828                      MOVK   1h,A8
13ad0: 140e                      SUBK   20h,A14
13ae0: 97ed                      MOVE   *SP+,A13,1
13af0: 0960                      RETS   

_decode_vac_status:
13b00: 098f 000c                 MMTM   SP,A12,A13
13b20: 4dcd                      MOVE   A14,A13
13b30: 0b0e 0060                 ADDI   60h,A14
13b50: c000 01e0                 JR     15970h
13b70: 0548                      SETF   8h,0,0
13b80: 05a8 f3e8 0002            MOVE   @2F3E8h,A8,0
13bb0: 8fac                      MOVB   *A13,A12
13bc0: 4988                      CMP    A12,A8
13bd0: ca00 01f2                 JREQ   15B10h
13bf0: 05ec f3e8 0002            MOVB   A12,@2F3E8h
13c20: 1828                      MOVK   1h,A8
13c30: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
13c60: 5588                      OR     A12,A8
13c70: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
13ca0: c000 01e5                 JR     15B10h
13cc0: 198c                      MOVK   Ch,A12
13cd0: 05ec f900 0002            MOVB   A12,@2F900h
13d00: a3cf                      MOVE   A14,-*SP,1
13d10: 09e8 07a0 0003            MOVI   307A0h,A8
13d40: 930e                      MOVE   A8,*A14+,1
13d50: 0d5f 3170 0001            CALLA  13170h
13d80: 1828                      MOVK   1h,A8
13d90: c000 01d7                 JR     15B20h
13db0: a3cf                      MOVE   A14,-*SP,1
13dc0: 93ae                      MOVE   A13,*A14+,1
13dd0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
13df0: 0d5f f520 0000            CALLA  F520h
13e20: 4d08                      MOVE   A8,A8
13e30: cad3                      JREQ   13B70h
13e40: 0d88 01cb                 DSJ    A8,15B10h
13e60: c0e5                      JR     13CC0h
13e70: a3cf                      MOVE   A14,-*SP,1
13e80: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
13ea0: 0d5f 7e50 0002            CALLA  27E50h
13ed0: b30d 0020                 MOVE   A8,*A13(20h),1
13ef0: 100e                      ADDK   20h,A14
13f00: a3cf                      MOVE   A14,-*SP,1
13f10: 930e                      MOVE   A8,*A14+,1
13f20: 182c                      MOVK   1h,A12
13f30: 938e                      MOVE   A12,*A14+,1
13f40: 0d5f 6f50 0000            CALLA  6F50h
13f70: a7c8                      MOVE   -*A14,A8,1
13f80: b30d 0040                 MOVE   A8,*A13(40h),1
13fa0: d60e f3c0 0002            MOVE   @2F3C0h,*A14+,1
13fd0: 930e                      MOVE   A8,*A14+,1
13fe0: 0d5f 7db0 0002            CALLA  27DB0h
14010: ca00 01ae                 JREQ   15B10h
14030: b7a8 0040                 MOVE   *A13(40h),A8,1
14050: 0788 f3c0 0002            MOVE   A8,@2F3C0h,1
14080: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
140b0: 550c                      OR     A8,A12
140c0: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
140f0: c000 01a0                 JR     15B10h
14110: 0548                      SETF   8h,0,0
14120: 05ac f410 0002            MOVE   @2F410h,A12,0
14150: 8fa8                      MOVB   *A13,A8
14160: 490c                      CMP    A8,A12
14170: ca00 0198                 JREQ   15B10h
14190: 05e8 f410 0002            MOVB   A8,@2F410h
141c0: 182c                      MOVK   1h,A12
141d0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
14200: 550c                      OR     A8,A12
14210: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
14240: c000 018b                 JR     15B10h
14260: 198c                      MOVK   Ch,A12
14270: 05ec f900 0002            MOVB   A12,@2F900h
142a0: a3cf                      MOVE   A14,-*SP,1
142b0: 09e8 07a0 0003            MOVI   307A0h,A8
142e0: 930e                      MOVE   A8,*A14+,1
142f0: 0d5f 3170 0001            CALLA  13170h
14320: 1828                      MOVK   1h,A8
14330: c000 017d                 JR     15B20h
14350: a3cf                      MOVE   A14,-*SP,1
14360: 93ae                      MOVE   A13,*A14+,1
14370: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
14390: 8f88                      MOVB   *A12,A8
143a0: 930e                      MOVE   A8,*A14+,1
143b0: 0d5f f210 0000            CALLA  F210h
143e0: 4d08                      MOVE   A8,A8
143f0: cad1                      JREQ   14110h
14400: 0d88 016f                 DSJ    A8,15B10h
14420: c0e3                      JR     14260h
14430: 0548                      SETF   8h,0,0
14440: 05ac f400 0002            MOVE   @2F400h,A12,0
14470: 8fa8                      MOVB   *A13,A8
14480: 490c                      CMP    A8,A12
14490: ca00 0166                 JREQ   15B10h
144b0: 05e8 f400 0002            MOVB   A8,@2F400h
144e0: 182c                      MOVK   1h,A12
144f0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
14520: 550c                      OR     A8,A12
14530: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
14560: c000 0159                 JR     15B10h
14580: 198c                      MOVK   Ch,A12
14590: 05ec f900 0002            MOVB   A12,@2F900h
145c0: a3cf                      MOVE   A14,-*SP,1
145d0: 09e8 07a0 0003            MOVI   307A0h,A8
14600: 930e                      MOVE   A8,*A14+,1
14610: 0d5f 3170 0001            CALLA  13170h
14640: 1828                      MOVK   1h,A8
14650: c000 014b                 JR     15B20h
14670: a3cf                      MOVE   A14,-*SP,1
14680: 93ae                      MOVE   A13,*A14+,1
14690: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
146b0: 8f88                      MOVB   *A12,A8
146c0: 930e                      MOVE   A8,*A14+,1
146d0: 0d5f f210 0000            CALLA  F210h
14700: 4d08                      MOVE   A8,A8
14710: cad1                      JREQ   14430h
14720: 0d88 013d                 DSJ    A8,15B10h
14740: c0e3                      JR     14580h
14750: 0548                      SETF   8h,0,0
14760: 05ac f408 0002            MOVE   @2F408h,A12,0
14790: 8fa8                      MOVB   *A13,A8
147a0: 490c                      CMP    A8,A12
147b0: ca00 0134                 JREQ   15B10h
147d0: 05e8 f408 0002            MOVB   A8,@2F408h
14800: 182c                      MOVK   1h,A12
14810: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
14840: 550c                      OR     A8,A12
14850: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
14880: c000 0127                 JR     15B10h
148a0: 198c                      MOVK   Ch,A12
148b0: 05ec f900 0002            MOVB   A12,@2F900h
148e0: a3cf                      MOVE   A14,-*SP,1
148f0: 09e8 07a0 0003            MOVI   307A0h,A8
14920: 930e                      MOVE   A8,*A14+,1
14930: 0d5f 3170 0001            CALLA  13170h
14960: 1828                      MOVK   1h,A8
14970: c000 0119                 JR     15B20h
14990: a3cf                      MOVE   A14,-*SP,1
149a0: 93ae                      MOVE   A13,*A14+,1
149b0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
149d0: 8f88                      MOVB   *A12,A8
149e0: 930e                      MOVE   A8,*A14+,1
149f0: 0d5f f210 0000            CALLA  F210h
14a20: 4d08                      MOVE   A8,A8
14a30: cad1                      JREQ   14750h
14a40: 0d88 010b                 DSJ    A8,15B10h
14a60: c0e3                      JR     148A0h
14a70: 0548                      SETF   8h,0,0
14a80: 05ac f3e0 0002            MOVE   @2F3E0h,A12,0
14ab0: 8fa8                      MOVB   *A13,A8
14ac0: 490c                      CMP    A8,A12
14ad0: ca0b                      JREQ   14B90h
14ae0: 05e8 f3e0 0002            MOVB   A8,@2F3E0h
14b10: 182c                      MOVK   1h,A12
14b20: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
14b50: 550c                      OR     A8,A12
14b60: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
14b90: 05ac fb00 0002            MOVE   @2FB00h,A12,0
14bc0: 8fa8                      MOVB   *A13,A8
14bd0: 490c                      CMP    A8,A12
14be0: ca24                      JREQ   14E30h
14bf0: 0d5f 5ce0 0001            CALLA  15CE0h
14c20: 4d0c                      MOVE   A8,A12
14c30: cb1f                      JRNE   14E30h
14c40: 8fac                      MOVB   *A13,A12
14c50: 05ec fb00 0002            MOVB   A12,@2FB00h
14c80: c01a                      JR     14E30h
14c90: 198c                      MOVK   Ch,A12
14ca0: 05ec f900 0002            MOVB   A12,@2F900h
14cd0: a3cf                      MOVE   A14,-*SP,1
14ce0: 09e8 07a0 0003            MOVI   307A0h,A8
14d10: 930e                      MOVE   A8,*A14+,1
14d20: 0d5f 3170 0001            CALLA  13170h
14d50: 1828                      MOVK   1h,A8
14d60: c000 00da                 JR     15B20h
14d80: a3cf                      MOVE   A14,-*SP,1
14d90: 93ae                      MOVE   A13,*A14+,1
14da0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
14dc0: 0d5f f940 0000            CALLA  F940h
14df0: 4d08                      MOVE   A8,A8
14e00: cac6                      JREQ   14A70h
14e10: 1428                      DEC    A8
14e20: cae6                      JREQ   14C90h
14e30: 0548                      SETF   8h,0,0
14e40: 05ac f3e0 0002            MOVE   @2F3E0h,A12,0
14e70: 14ec                      SUBK   7h,A12
14e80: cb14                      JRNE   14FD0h
14e90: 05ac f448 0002            MOVE   @2F448h,A12,0
14ec0: 142c                      DEC    A12
14ed0: ca00 00c2                 JREQ   15B10h
14ef0: 182c                      MOVK   1h,A12
14f00: 05ec f448 0002            MOVB   A12,@2F448h
14f30: 1848                      MOVK   2h,A8
14f40: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
14f70: 5588                      OR     A12,A8
14f80: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
14fb0: c000 00b4                 JR     15B10h
14fd0: 05ac f448 0002            MOVE   @2F448h,A12,0
15000: ca00 00af                 JREQ   15B10h
15020: 4508                      SUB    A8,A8
15030: 05e8 f448 0002            MOVB   A8,@2F448h
15060: 184c                      MOVK   2h,A12
15070: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
150a0: 550c                      OR     A8,A12
150b0: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
150e0: c000 00a1                 JR     15B10h
15100: a3cf                      MOVE   A14,-*SP,1
15110: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
15130: 0d5f 7e50 0002            CALLA  27E50h
15160: b30d 0020                 MOVE   A8,*A13(20h),1
15180: 100e                      ADDK   20h,A14
15190: a3cf                      MOVE   A14,-*SP,1
151a0: 930e                      MOVE   A8,*A14+,1
151b0: 458c                      SUB    A12,A12
151c0: 938e                      MOVE   A12,*A14+,1
151d0: 0d5f 6f50 0000            CALLA  6F50h
15200: a7c8                      MOVE   -*A14,A8,1
15210: b30d 0040                 MOVE   A8,*A13(40h),1
15230: d60e f3a0 0002            MOVE   @2F3A0h,*A14+,1
15260: 930e                      MOVE   A8,*A14+,1
15270: 0d5f 7db0 0002            CALLA  27DB0h
152a0: ca00 0085                 JREQ   15B10h
152c0: b7a8 0040                 MOVE   *A13(40h),A8,1
152e0: 0788 f3a0 0002            MOVE   A8,@2F3A0h,1
15310: 182c                      MOVK   1h,A12
15320: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
15350: 550c                      OR     A8,A12
15360: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
15390: c077                      JR     15B10h
153a0: 0548                      SETF   8h,0,0
153b0: 05ac f3f0 0002            MOVE   @2F3F0h,A12,0
153e0: 8fa8                      MOVB   *A13,A8
153f0: 490c                      CMP    A8,A12
15400: ca70                      JREQ   15B10h
15410: 05e8 f3f0 0002            MOVB   A8,@2F3F0h
15440: 182c                      MOVK   1h,A12
15450: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
15480: 550c                      OR     A8,A12
15490: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
154c0: c064                      JR     15B10h
154d0: 198c                      MOVK   Ch,A12
154e0: 05ec f900 0002            MOVB   A12,@2F900h
15510: a3cf                      MOVE   A14,-*SP,1
15520: 09e8 07a0 0003            MOVI   307A0h,A8
15550: 930e                      MOVE   A8,*A14+,1
15560: 0d5f 3170 0001            CALLA  13170h
15590: 1828                      MOVK   1h,A8
155a0: c057                      JR     15B20h
155b0: a3cf                      MOVE   A14,-*SP,1
155c0: 93ae                      MOVE   A13,*A14+,1
155d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
155f0: 8f88                      MOVB   *A12,A8
15600: 930e                      MOVE   A8,*A14+,1
15610: 0d5f f210 0000            CALLA  F210h
15640: 4d08                      MOVE   A8,A8
15650: cad4                      JREQ   153A0h
15660: 0d88 0049                 DSJ    A8,15B10h
15680: c0e4                      JR     154D0h
15690: 0548                      SETF   8h,0,0
156a0: 05ac f3f8 0002            MOVE   @2F3F8h,A12,0
156d0: 8fa8                      MOVB   *A13,A8
156e0: 490c                      CMP    A8,A12
156f0: ca41                      JREQ   15B10h
15700: 05e8 f3f8 0002            MOVB   A8,@2F3F8h
15730: 182c                      MOVK   1h,A12
15740: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
15770: 550c                      OR     A8,A12
15780: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
157b0: c035                      JR     15B10h
157c0: 198c                      MOVK   Ch,A12
157d0: 05ec f900 0002            MOVB   A12,@2F900h
15800: a3cf                      MOVE   A14,-*SP,1
15810: 09e8 07a0 0003            MOVI   307A0h,A8
15840: 930e                      MOVE   A8,*A14+,1
15850: 0d5f 3170 0001            CALLA  13170h
15880: 1828                      MOVK   1h,A8
15890: c028                      JR     15B20h
158a0: a3cf                      MOVE   A14,-*SP,1
158b0: 93ae                      MOVE   A13,*A14+,1
158c0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
158e0: 8f88                      MOVB   *A12,A8
158f0: 930e                      MOVE   A8,*A14+,1
15900: 0d5f f210 0000            CALLA  F210h
15930: 4d08                      MOVE   A8,A8
15940: cad4                      JREQ   15690h
15950: 3b68                      DSJS   A8,15B10h
15960: c0e5                      JR     157C0h
15970: afac ffc0                 MOVB   *A13(FFC0h),A12
15990: ca00 fe40                 JREQ   13DB0h
159b0: 142c                      DEC    A12
159c0: ca00 fe49                 JREQ   13E70h
159e0: 142c                      DEC    A12
159f0: ca00 fe94                 JREQ   14350h
15a10: 142c                      DEC    A12
15a20: ca00 fec3                 JREQ   14670h
15a40: 142c                      DEC    A12
15a50: ca00 fef2                 JREQ   14990h
15a70: 142c                      DEC    A12
15a80: ca00 ff2e                 JREQ   14D80h
15aa0: 142c                      DEC    A12
15ab0: ca00 ff63                 JREQ   15100h
15ad0: 142c                      DEC    A12
15ae0: caac                      JREQ   155B0h
15af0: 142c                      DEC    A12
15b00: cad9                      JREQ   158A0h
15b10: 4508                      SUB    A8,A8
15b20: b7ee 0060                 MOVE   *SP(60h),A14,1
15b40: 09af 3000                 MMFM   SP,A12,A13
15b60: 0962                      RETS   2h

_decode_fevac_status:
15b70: a3af                      MOVE   A13,-*SP,1
15b80: 4dcd                      MOVE   A14,A13
15b90: 4508                      SUB    A8,A8
15ba0: b7ee 0040                 MOVE   *SP(40h),A14,1
15bc0: 97ed                      MOVE   *SP+,A13,1
15bd0: 0962                      RETS   2h

_stop_vac_timer:
15be0: 4508                      SUB    A8,A8
15bf0: 0788 fae0 0002            MOVE   A8,@2FAE0h,1
15c20: 0960                      RETS   

_start_vac_timer:
15c30: 1828                      MOVK   1h,A8
15c40: 0788 fae0 0002            MOVE   A8,@2FAE0h,1
15c70: 0960                      RETS   

_send_eht_vac_state:
15c80: a3af                      MOVE   A13,-*SP,1
15c90: 4dcd                      MOVE   A14,A13
15ca0: b7ee 0040                 MOVE   *SP(40h),A14,1
15cc0: 97ed                      MOVE   *SP+,A13,1
15cd0: 0962                      RETS   2h

_send_eo_vac_state:
15ce0: a3af                      MOVE   A13,-*SP,1
15cf0: 4dcd                      MOVE   A14,A13
15d00: 100e                      ADDK   20h,A14
15d10: 1a08                      MOVK   10h,A8
15d20: 0788 1660 0003            MOVE   A8,@31660h,1
15d50: 18a8                      MOVK   5h,A8
15d60: 0788 1680 0003            MOVE   A8,@31680h,1
15d90: 09c8 0091                 MOVI   91h,A8
15db0: 0788 16a0 0003            MOVE   A8,@316A0h,1
15de0: 0548                      SETF   8h,0,0
15df0: 05a8 f3e0 0002            MOVE   @2F3E0h,A8,0
15e20: cb05                      JRNE   15E80h
15e30: 4508                      SUB    A8,A8
15e40: 05e8 16c0 0003            MOVB   A8,@316C0h
15e70: c004                      JR     15EC0h
15e80: 1828                      MOVK   1h,A8
15e90: 05e8 16c0 0003            MOVB   A8,@316C0h
15ec0: a3cf                      MOVE   A14,-*SP,1
15ed0: 09e8 1660 0003            MOVI   31660h,A8
15f00: 930e                      MOVE   A8,*A14+,1
15f10: 1b08                      MOVK   18h,A8
15f20: 930e                      MOVE   A8,*A14+,1
15f30: 0d5f 0000 0000            CALLA  0h
15f60: 830d                      MOVE   A8,*A13,1
15f70: 4d08                      MOVE   A8,A8
15f80: cb02                      JRNE   15FB0h
15f90: 4508                      SUB    A8,A8
15fa0: c001                      JR     15FC0h
15fb0: 1828                      MOVK   1h,A8
15fc0: 140e                      SUBK   20h,A14
15fd0: 97ed                      MOVE   *SP+,A13,1
15fe0: 0960                      RETS   

_calibrate_scm:
15ff0: 098f 000c                 MMTM   SP,A12,A13
16010: 4dcd                      MOVE   A14,A13
16020: 0b0e 00a0                 ADDI   A0h,A14
16040: a3cf                      MOVE   A14,-*SP,1
16050: 09e8 ec00 0002            MOVI   2EC00h,A8
16080: 930e                      MOVE   A8,*A14+,1
16090: 09e8 49a0 0003            MOVI   349A0h,A8
160c0: 930e                      MOVE   A8,*A14+,1
160d0: 0d5f 97c0 0002            CALLA  297C0h
16100: a3cf                      MOVE   A14,-*SP,1
16110: 09e8 ea58 0002            MOVI   2EA58h,A8
16140: 930e                      MOVE   A8,*A14+,1
16150: 09e8 49a0 0003            MOVI   349A0h,A8
16180: 930e                      MOVE   A8,*A14+,1
16190: 0d5f 9510 0002            CALLA  29510h
161c0: 18a8                      MOVK   5h,A8
161d0: 0788 4980 0003            MOVE   A8,@34980h,1
16200: a3cf                      MOVE   A14,-*SP,1
16210: 09e8 49a0 0003            MOVI   349A0h,A8
16240: 930e                      MOVE   A8,*A14+,1
16250: 0d5f 98e0 0002            CALLA  298E0h
16280: 1088                      ADDK   4h,A8
16290: 0788 4960 0003            MOVE   A8,@34960h,1
162c0: 0d5f 2d60 0001            CALLA  12D60h
162f0: 4d08                      MOVE   A8,A8
16300: cb00 0088                 JRNE   16BA0h
16320: a3cf                      MOVE   A14,-*SP,1
16330: 1808                      MOVK   20h,A8
16340: 930e                      MOVE   A8,*A14+,1
16350: 09e8 07a0 0003            MOVI   307A0h,A8
16380: 930e                      MOVE   A8,*A14+,1
16390: 0d5f 9660 0002            CALLA  29660h
163c0: b30d 0060                 MOVE   A8,*A13(60h),1
163e0: 4d08                      MOVE   A8,A8
163f0: ca7a                      JREQ   16BA0h
16400: 1108                      ADDK   8h,A8
16410: b30d 0060                 MOVE   A8,*A13(60h),1
16430: a3cf                      MOVE   A14,-*SP,1
16440: 930e                      MOVE   A8,*A14+,1
16450: 0d5f 0090 0001            CALLA  10090h
16480: ad0d 0080                 MOVB   A8,*A13(80h)
164a0: 1888                      MOVK   4h,A8
164b0: 0548                      SETF   8h,0,0
164c0: b5ac 0080                 MOVE   *A13(80h),A12,0
164e0: 5588                      OR     A12,A8
164f0: ad0d 0080                 MOVB   A8,*A13(80h)
16510: a3cf                      MOVE   A14,-*SP,1
16520: 09ec ec38 0002            MOVI   2EC38h,A12
16550: 938e                      MOVE   A12,*A14+,1
16560: 09ec 49a0 0003            MOVI   349A0h,A12
16590: 938e                      MOVE   A12,*A14+,1
165a0: 0d5f 97c0 0002            CALLA  297C0h
165d0: a3cf                      MOVE   A14,-*SP,1
165e0: 93ae                      MOVE   A13,*A14+,1
165f0: 0548                      SETF   8h,0,0
16600: b5a8 0080                 MOVE   *A13(80h),A8,0
16620: 930e                      MOVE   A8,*A14+,1
16630: 0d5f 06a0 0001            CALLA  106A0h
16660: a3cf                      MOVE   A14,-*SP,1
16670: 93ae                      MOVE   A13,*A14+,1
16680: 938e                      MOVE   A12,*A14+,1
16690: 0d5f 9510 0002            CALLA  29510h
166c0: a3cf                      MOVE   A14,-*SP,1
166d0: 09e8 ea58 0002            MOVI   2EA58h,A8
16700: 930e                      MOVE   A8,*A14+,1
16710: 938e                      MOVE   A12,*A14+,1
16720: 0d5f 9510 0002            CALLA  29510h
16750: a3cf                      MOVE   A14,-*SP,1
16760: 938e                      MOVE   A12,*A14+,1
16770: 0d5f 98e0 0002            CALLA  298E0h
167a0: 1088                      ADDK   4h,A8
167b0: 0788 4960 0003            MOVE   A8,@34960h,1
167e0: 0d5f 2d60 0001            CALLA  12D60h
16810: 4d08                      MOVE   A8,A8
16820: 1888                      MOVK   4h,A8
16830: 0548                      SETF   8h,0,0
16840: b5ac 0080                 MOVE   *A13(80h),A12,0
16860: 530c                      ANDN   A8,A12
16870: ad8d 0080                 MOVB   A12,*A13(80h)
16890: a3cf                      MOVE   A14,-*SP,1
168a0: 09ec ec38 0002            MOVI   2EC38h,A12
168d0: 938e                      MOVE   A12,*A14+,1
168e0: 09ec 49a0 0003            MOVI   349A0h,A12
16910: 938e                      MOVE   A12,*A14+,1
16920: 0d5f 97c0 0002            CALLA  297C0h
16950: a3cf                      MOVE   A14,-*SP,1
16960: 93ae                      MOVE   A13,*A14+,1
16970: 0548                      SETF   8h,0,0
16980: b5a8 0080                 MOVE   *A13(80h),A8,0
169a0: 930e                      MOVE   A8,*A14+,1
169b0: 0d5f 06a0 0001            CALLA  106A0h
169e0: a3cf                      MOVE   A14,-*SP,1
169f0: 93ae                      MOVE   A13,*A14+,1
16a00: 938e                      MOVE   A12,*A14+,1
16a10: 0d5f 9510 0002            CALLA  29510h
16a40: a3cf                      MOVE   A14,-*SP,1
16a50: 09e8 ea58 0002            MOVI   2EA58h,A8
16a80: 930e                      MOVE   A8,*A14+,1
16a90: 938e                      MOVE   A12,*A14+,1
16aa0: 0d5f 9510 0002            CALLA  29510h
16ad0: a3cf                      MOVE   A14,-*SP,1
16ae0: 938e                      MOVE   A12,*A14+,1
16af0: 0d5f 98e0 0002            CALLA  298E0h
16b20: 1088                      ADDK   4h,A8
16b30: 0788 4960 0003            MOVE   A8,@34960h,1
16b60: 0d5f 2d60 0001            CALLA  12D60h
16b90: 4d08                      MOVE   A8,A8
16ba0: 0bee ff5f                 SUBI   A0h,A14
16bc0: 09af 3000                 MMFM   SP,A12,A13
16be0: 0960                      RETS   

_cp_vac_init:
16bf0: 098f 002c                 MMTM   SP,A10,A12,A13
16c10: 4dcd                      MOVE   A14,A13
16c20: 0b0e 0040                 ADDI   40h,A14
16c40: 09e8 ee40 0002            MOVI   2EE40h,A8
16c70: 4daa                      MOVE   A13,A10
16c80: 9b0a                      MOVE   *A8+,*A10+,1
16c90: 0550                      SETF   10h,0,0
16ca0: 890a                      MOVE   *A8,*A10,0
16cb0: a3cf                      MOVE   A14,-*SP,1
16cc0: 93ae                      MOVE   A13,*A14+,1
16cd0: 182a                      MOVK   1h,A10
16ce0: 934e                      MOVE   A10,*A14+,1
16cf0: 0d5f 0000 0000            CALLA  0h
16d20: 4d0c                      MOVE   A8,A12
16d30: 39e8                      DSJS   A8,16E30h
16d40: a3cf                      MOVE   A14,-*SP,1
16d50: 4508                      SUB    A8,A8
16d60: 930e                      MOVE   A8,*A14+,1
16d70: 934e                      MOVE   A10,*A14+,1
16d80: 930e                      MOVE   A8,*A14+,1
16d90: 1848                      MOVK   2h,A8
16da0: 930e                      MOVE   A8,*A14+,1
16db0: 0d5f 0000 0000            CALLA  0h
16de0: 4d0c                      MOVE   A8,A12
16df0: 3868                      DSJS   A8,16E30h
16e00: 0d5f 30f0 0002            CALLA  230F0h
16e30: a3cf                      MOVE   A14,-*SP,1
16e40: 09e8 db40 0001            MOVI   1DB40h,A8
16e70: 930e                      MOVE   A8,*A14+,1
16e80: 454a                      SUB    A10,A10
16e90: 934e                      MOVE   A10,*A14+,1
16ea0: 09ca 0400                 MOVI   400h,A10
16ec0: 934e                      MOVE   A10,*A14+,1
16ed0: 09e8 4155 4443            MOVI   44434155h,A8
16f00: 930e                      MOVE   A8,*A14+,1
16f10: 19c8                      MOVK   Eh,A8
16f20: 930e                      MOVE   A8,*A14+,1
16f30: 0d5f 0000 0000            CALLA  0h
16f60: 4d0c                      MOVE   A8,A12
16f70: cb50                      JRNE   17480h
16f80: a3cf                      MOVE   A14,-*SP,1
16f90: 19c8                      MOVK   Eh,A8
16fa0: 930e                      MOVE   A8,*A14+,1
16fb0: 0d5f 0000 0000            CALLA  0h
16fe0: 4d0c                      MOVE   A8,A12
16ff0: cb48                      JRNE   17480h
17000: a3cf                      MOVE   A14,-*SP,1
17010: 09e8 f070 0001            MOVI   1F070h,A8
17040: 930e                      MOVE   A8,*A14+,1
17050: 4508                      SUB    A8,A8
17060: 930e                      MOVE   A8,*A14+,1
17070: 934e                      MOVE   A10,*A14+,1
17080: 09e8 4155 4643            MOVI   46434155h,A8
170b0: 930e                      MOVE   A8,*A14+,1
170c0: 1948                      MOVK   Ah,A8
170d0: 930e                      MOVE   A8,*A14+,1
170e0: 0d5f 0000 0000            CALLA  0h
17110: 4d0c                      MOVE   A8,A12
17120: cb35                      JRNE   17480h
17130: a3cf                      MOVE   A14,-*SP,1
17140: 1948                      MOVK   Ah,A8
17150: 930e                      MOVE   A8,*A14+,1
17160: 0d5f 0000 0000            CALLA  0h
17190: 4d0c                      MOVE   A8,A12
171a0: cb2d                      JRNE   17480h
171b0: a3cf                      MOVE   A14,-*SP,1
171c0: 09e8 0000 0000            MOVI   0h,A8
171f0: 930e                      MOVE   A8,*A14+,1
17200: 4508                      SUB    A8,A8
17210: 930e                      MOVE   A8,*A14+,1
17220: 934e                      MOVE   A10,*A14+,1
17230: 09e8 4155 4d43            MOVI   4D434155h,A8
17260: 930e                      MOVE   A8,*A14+,1
17270: 1868                      MOVK   3h,A8
17280: 930e                      MOVE   A8,*A14+,1
17290: 0d5f 0000 0000            CALLA  0h
172c0: 4d0c                      MOVE   A8,A12
172d0: cb1a                      JRNE   17480h
172e0: a3cf                      MOVE   A14,-*SP,1
172f0: 1868                      MOVK   3h,A8
17300: 930e                      MOVE   A8,*A14+,1
17310: 0d5f 0000 0000            CALLA  0h
17340: 4d0c                      MOVE   A8,A12
17350: cb12                      JRNE   17480h
17360: a3cf                      MOVE   A14,-*SP,1
17370: 09c8 0032                 MOVI   32h,A8
17390: 930e                      MOVE   A8,*A14+,1
173a0: 09e8 4da0 0003            MOVI   34DA0h,A8
173d0: 930e                      MOVE   A8,*A14+,1
173e0: 09e8 4155 4d43            MOVI   4D434155h,A8
17410: 930e                      MOVE   A8,*A14+,1
17420: 18e8                      MOVK   7h,A8
17430: 930e                      MOVE   A8,*A14+,1
17440: 0d5f 0000 0000            CALLA  0h
17470: 4d0c                      MOVE   A8,A12
17480: 4d88                      MOVE   A12,A8
17490: 0bee ffbf                 SUBI   40h,A14
174b0: 09af 3400                 MMFM   SP,A10,A12,A13
174d0: 0960                      RETS   

_cp_v_status:
174e0: 098f 000c                 MMTM   SP,A12,A13
17500: 4dcd                      MOVE   A14,A13
17510: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
17530: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
17560: b30c 0100                 MOVE   A8,*A12(100h),1
17580: 4508                      SUB    A8,A8
17590: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
175c0: b788 0100                 MOVE   *A12(100h),A8,1
175e0: 1fe8                      BTST   0h,A8
175f0: ca2d                      JREQ   178D0h
17600: 0548                      SETF   8h,0,0
17610: 05a8 f3e0 0002            MOVE   @2F3E0h,A8,0
17640: ad0c 0040                 MOVB   A8,*A12(40h)
17660: 07a8 f3a0 0002            MOVE   @2F3A0h,A8,1
17690: 830c                      MOVE   A8,*A12,1
176a0: 05a8 f3e8 0002            MOVE   @2F3E8h,A8,0
176d0: ad0c 0048                 MOVB   A8,*A12(48h)
176f0: 07a8 f3c0 0002            MOVE   @2F3C0h,A8,1
17720: b30c 0020                 MOVE   A8,*A12(20h),1
17740: 05a8 f3f0 0002            MOVE   @2F3F0h,A8,0
17770: ad0c 0050                 MOVB   A8,*A12(50h)
17790: 05a8 f3f8 0002            MOVE   @2F3F8h,A8,0
177c0: ad0c 0058                 MOVB   A8,*A12(58h)
177e0: 05a8 f400 0002            MOVE   @2F400h,A8,0
17810: ad0c 0060                 MOVB   A8,*A12(60h)
17830: 05a8 f408 0002            MOVE   @2F408h,A8,0
17860: ad0c 0068                 MOVB   A8,*A12(68h)
17880: 05a8 f410 0002            MOVE   @2F410h,A8,0
178b0: ad0c 0070                 MOVB   A8,*A12(70h)
178d0: b788 0100                 MOVE   *A12(100h),A8,1
178f0: 1fc8                      BTST   1h,A8
17900: ca3d                      JREQ   17CE0h
17910: 0548                      SETF   8h,0,0
17920: 05a8 f420 0002            MOVE   @2F420h,A8,0
17950: ad0c 0080                 MOVB   A8,*A12(80h)
17970: 05a8 f428 0002            MOVE   @2F428h,A8,0
179a0: ad0c 0088                 MOVB   A8,*A12(88h)
179c0: 05a8 f430 0002            MOVE   @2F430h,A8,0
179f0: ad0c 0090                 MOVB   A8,*A12(90h)
17a10: 05a8 f438 0002            MOVE   @2F438h,A8,0
17a40: ad0c 0098                 MOVB   A8,*A12(98h)
17a60: 05a8 f440 0002            MOVE   @2F440h,A8,0
17a90: ad0c 00a0                 MOVB   A8,*A12(A0h)
17ab0: 05a8 f448 0002            MOVE   @2F448h,A8,0
17ae0: ad0c 00a8                 MOVB   A8,*A12(A8h)
17b00: 05a8 f450 0002            MOVE   @2F450h,A8,0
17b30: ad0c 00b0                 MOVB   A8,*A12(B0h)
17b50: 05a8 f458 0002            MOVE   @2F458h,A8,0
17b80: ad0c 00b8                 MOVB   A8,*A12(B8h)
17ba0: 05a8 f460 0002            MOVE   @2F460h,A8,0
17bd0: ad0c 00c0                 MOVB   A8,*A12(C0h)
17bf0: 05a8 f468 0002            MOVE   @2F468h,A8,0
17c20: ad0c 00c8                 MOVB   A8,*A12(C8h)
17c40: 05a8 f470 0002            MOVE   @2F470h,A8,0
17c70: ad0c 00d0                 MOVB   A8,*A12(D0h)
17c90: 05a8 f478 0002            MOVE   @2F478h,A8,0
17cc0: ad0c 00d8                 MOVB   A8,*A12(D8h)
17ce0: b788 0100                 MOVE   *A12(100h),A8,1
17d00: 1fa8                      BTST   2h,A8
17d10: ca15                      JREQ   17E70h
17d20: 0548                      SETF   8h,0,0
17d30: 05a8 f480 0002            MOVE   @2F480h,A8,0
17d60: ad0c 00e0                 MOVB   A8,*A12(E0h)
17d80: 05a8 f488 0002            MOVE   @2F488h,A8,0
17db0: ad0c 00e8                 MOVB   A8,*A12(E8h)
17dd0: 05a8 f490 0002            MOVE   @2F490h,A8,0
17e00: ad0c 00f0                 MOVB   A8,*A12(F0h)
17e20: 05a8 f498 0002            MOVE   @2F498h,A8,0
17e50: ad0c 00f8                 MOVB   A8,*A12(F8h)
17e70: b788 0100                 MOVE   *A12(100h),A8,1
17e90: 1f88                      BTST   3h,A8
17ea0: ca0b                      JREQ   17F60h
17eb0: 0548                      SETF   8h,0,0
17ec0: 05a8 f4c8 0002            MOVE   @2F4C8h,A8,0
17ef0: ad0c 0128                 MOVB   A8,*A12(128h)
17f10: 05a8 f4d0 0002            MOVE   @2F4D0h,A8,0
17f40: ad0c 0130                 MOVB   A8,*A12(130h)
17f60: b788 0100                 MOVE   *A12(100h),A8,1
17f80: 1f48                      BTST   5h,A8
17f90: ca23                      JREQ   181D0h
17fa0: 0548                      SETF   8h,0,0
17fb0: 05a8 f860 0002            MOVE   @2F860h,A8,0
17fe0: 1428                      DEC    A8
17ff0: ca0a                      JREQ   180A0h
18000: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
18030: ad0c 0138                 MOVB   A8,*A12(138h)
18050: b788 0100                 MOVE   *A12(100h),A8,1
18070: 1f68                      BTST   4h,A8
18080: cb18                      JRNE   18210h
18090: c01d                      JR     18270h
180a0: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
180d0: 1548                      SUBK   Ah,A8
180e0: c608                      JRLE   18170h
180f0: 1988                      MOVK   Ch,A8
18100: ad0c 0138                 MOVB   A8,*A12(138h)
18120: b788 0100                 MOVE   *A12(100h),A8,1
18140: 1f68                      BTST   4h,A8
18150: cb0b                      JRNE   18210h
18160: c010                      JR     18270h
18170: 05a8 f4d8 0002            MOVE   @2F4D8h,A8,0
181a0: 1048                      ADDK   2h,A8
181b0: ad0c 0138                 MOVB   A8,*A12(138h)
181d0: b788 0100                 MOVE   *A12(100h),A8,1
181f0: 1f68                      BTST   4h,A8
18200: ca06                      JREQ   18270h
18210: 0548                      SETF   8h,0,0
18220: 05a8 f4e0 0002            MOVE   @2F4E0h,A8,0
18250: ad0c 0140                 MOVB   A8,*A12(140h)
18270: 0d5f cfe0 0001            CALLA  1CFE0h
182a0: ad0c 0120                 MOVB   A8,*A12(120h)
182c0: b7ee 0060                 MOVE   *SP(60h),A14,1
182e0: 09af 3000                 MMFM   SP,A12,A13
18300: 0962                      RETS   2h

_cp_fe_v_status:
18310: a3af                      MOVE   A13,-*SP,1
18320: 4dcd                      MOVE   A14,A13
18330: b7ee 0040                 MOVE   *SP(40h),A14,1
18350: 97ed                      MOVE   *SP+,A13,1
18360: 0962                      RETS   2h

_cp_v_fp_conf:
18370: a3af                      MOVE   A13,-*SP,1
18380: 4dcd                      MOVE   A14,A13
18390: 100e                      ADDK   20h,A14
183a0: 1928                      MOVK   9h,A8
183b0: 0788 1720 0003            MOVE   A8,@31720h,1
183e0: 18e8                      MOVK   7h,A8
183f0: 0788 1740 0003            MOVE   A8,@31740h,1
18420: 1828                      MOVK   1h,A8
18430: 0788 1760 0003            MOVE   A8,@31760h,1
18460: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18480: 05e8 1780 0003            MOVB   A8,@31780h
184b0: a3cf                      MOVE   A14,-*SP,1
184c0: 09e8 1720 0003            MOVI   31720h,A8
184f0: 930e                      MOVE   A8,*A14+,1
18500: 1888                      MOVK   4h,A8
18510: 930e                      MOVE   A8,*A14+,1
18520: 0d5f 0000 0000            CALLA  0h
18550: 830d                      MOVE   A8,*A13,1
18560: 4d08                      MOVE   A8,A8
18570: ca13                      JREQ   186B0h
18580: 1828                      MOVK   1h,A8
18590: 0788 4920 0003            MOVE   A8,@34920h,1
185c0: 09c8 0041                 MOVI   41h,A8
185e0: 05e8 4940 0003            MOVB   A8,@34940h
18610: a3cf                      MOVE   A14,-*SP,1
18620: 09e8 4920 0003            MOVI   34920h,A8
18650: 930e                      MOVE   A8,*A14+,1
18660: 18e8                      MOVK   7h,A8
18670: 930e                      MOVE   A8,*A14+,1
18680: 0d5f 0000 0000            CALLA  0h
186b0: b7ee 0040                 MOVE   *SP(40h),A14,1
186d0: 97ed                      MOVE   *SP+,A13,1
186e0: 0962                      RETS   2h

_cp_v_vw_conf:
186f0: a3af                      MOVE   A13,-*SP,1
18700: 4dcd                      MOVE   A14,A13
18710: 100e                      ADDK   20h,A14
18720: 1928                      MOVK   9h,A8
18730: 0788 1720 0003            MOVE   A8,@31720h,1
18760: 18e8                      MOVK   7h,A8
18770: 0788 1740 0003            MOVE   A8,@31740h,1
187a0: 1868                      MOVK   3h,A8
187b0: 0788 1760 0003            MOVE   A8,@31760h,1
187e0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18800: 05e8 1780 0003            MOVB   A8,@31780h
18830: a3cf                      MOVE   A14,-*SP,1
18840: 09e8 1720 0003            MOVI   31720h,A8
18870: 930e                      MOVE   A8,*A14+,1
18880: 1888                      MOVK   4h,A8
18890: 930e                      MOVE   A8,*A14+,1
188a0: 0d5f 0000 0000            CALLA  0h
188d0: 830d                      MOVE   A8,*A13,1
188e0: 4d08                      MOVE   A8,A8
188f0: ca13                      JREQ   18A30h
18900: 1828                      MOVK   1h,A8
18910: 0788 4920 0003            MOVE   A8,@34920h,1
18940: 09c8 0043                 MOVI   43h,A8
18960: 05e8 4940 0003            MOVB   A8,@34940h
18990: a3cf                      MOVE   A14,-*SP,1
189a0: 09e8 4920 0003            MOVI   34920h,A8
189d0: 930e                      MOVE   A8,*A14+,1
189e0: 18e8                      MOVK   7h,A8
189f0: 930e                      MOVE   A8,*A14+,1
18a00: 0d5f 0000 0000            CALLA  0h
18a30: b7ee 0040                 MOVE   *SP(40h),A14,1
18a50: 97ed                      MOVE   *SP+,A13,1
18a60: 0962                      RETS   2h

_cp_v_sp_state:
18a70: a3af                      MOVE   A13,-*SP,1
18a80: 4dcd                      MOVE   A14,A13
18a90: 100e                      ADDK   20h,A14
18aa0: 1928                      MOVK   9h,A8
18ab0: 0788 1720 0003            MOVE   A8,@31720h,1
18ae0: 18e8                      MOVK   7h,A8
18af0: 0788 1740 0003            MOVE   A8,@31740h,1
18b20: 1848                      MOVK   2h,A8
18b30: 0788 1760 0003            MOVE   A8,@31760h,1
18b60: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18b80: 05e8 1780 0003            MOVB   A8,@31780h
18bb0: a3cf                      MOVE   A14,-*SP,1
18bc0: 09e8 1720 0003            MOVI   31720h,A8
18bf0: 930e                      MOVE   A8,*A14+,1
18c00: 1888                      MOVK   4h,A8
18c10: 930e                      MOVE   A8,*A14+,1
18c20: 0d5f 0000 0000            CALLA  0h
18c50: 830d                      MOVE   A8,*A13,1
18c60: 4d08                      MOVE   A8,A8
18c70: ca13                      JREQ   18DB0h
18c80: 1828                      MOVK   1h,A8
18c90: 0788 4920 0003            MOVE   A8,@34920h,1
18cc0: 09c8 0042                 MOVI   42h,A8
18ce0: 05e8 4940 0003            MOVB   A8,@34940h
18d10: a3cf                      MOVE   A14,-*SP,1
18d20: 09e8 4920 0003            MOVI   34920h,A8
18d50: 930e                      MOVE   A8,*A14+,1
18d60: 18e8                      MOVK   7h,A8
18d70: 930e                      MOVE   A8,*A14+,1
18d80: 0d5f 0000 0000            CALLA  0h
18db0: b7ee 0040                 MOVE   *SP(40h),A14,1
18dd0: 97ed                      MOVE   *SP+,A13,1
18de0: 0962                      RETS   2h

_cp_v_cp_conf:
18df0: a3af                      MOVE   A13,-*SP,1
18e00: 4dcd                      MOVE   A14,A13
18e10: 100e                      ADDK   20h,A14
18e20: 1928                      MOVK   9h,A8
18e30: 0788 1720 0003            MOVE   A8,@31720h,1
18e60: 18e8                      MOVK   7h,A8
18e70: 0788 1740 0003            MOVE   A8,@31740h,1
18ea0: 1888                      MOVK   4h,A8
18eb0: 0788 1760 0003            MOVE   A8,@31760h,1
18ee0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
18f00: 05e8 1780 0003            MOVB   A8,@31780h
18f30: a3cf                      MOVE   A14,-*SP,1
18f40: 09e8 1720 0003            MOVI   31720h,A8
18f70: 930e                      MOVE   A8,*A14+,1
18f80: 1888                      MOVK   4h,A8
18f90: 930e                      MOVE   A8,*A14+,1
18fa0: 0d5f 0000 0000            CALLA  0h
18fd0: 830d                      MOVE   A8,*A13,1
18fe0: 4d08                      MOVE   A8,A8
18ff0: ca13                      JREQ   19130h
19000: 1828                      MOVK   1h,A8
19010: 0788 4920 0003            MOVE   A8,@34920h,1
19040: 09c8 0044                 MOVI   44h,A8
19060: 05e8 4940 0003            MOVB   A8,@34940h
19090: a3cf                      MOVE   A14,-*SP,1
190a0: 09e8 4920 0003            MOVI   34920h,A8
190d0: 930e                      MOVE   A8,*A14+,1
190e0: 18e8                      MOVK   7h,A8
190f0: 930e                      MOVE   A8,*A14+,1
19100: 0d5f 0000 0000            CALLA  0h
19130: b7ee 0040                 MOVE   *SP(40h),A14,1
19150: 97ed                      MOVE   *SP+,A13,1
19160: 0962                      RETS   2h

_cp_v_cp_state:
19170: a3af                      MOVE   A13,-*SP,1
19180: 4dcd                      MOVE   A14,A13
19190: 100e                      ADDK   20h,A14
191a0: 1928                      MOVK   9h,A8
191b0: 0788 1720 0003            MOVE   A8,@31720h,1
191e0: 18e8                      MOVK   7h,A8
191f0: 0788 1740 0003            MOVE   A8,@31740h,1
19220: 18a8                      MOVK   5h,A8
19230: 0788 1760 0003            MOVE   A8,@31760h,1
19260: afa8 ffe0                 MOVB   *A13(FFE0h),A8
19280: 05e8 1780 0003            MOVB   A8,@31780h
192b0: a3cf                      MOVE   A14,-*SP,1
192c0: 09e8 1720 0003            MOVI   31720h,A8
192f0: 930e                      MOVE   A8,*A14+,1
19300: 1888                      MOVK   4h,A8
19310: 930e                      MOVE   A8,*A14+,1
19320: 0d5f 0000 0000            CALLA  0h
19350: 830d                      MOVE   A8,*A13,1
19360: 4d08                      MOVE   A8,A8
19370: ca13                      JREQ   194B0h
19380: 1828                      MOVK   1h,A8
19390: 0788 4920 0003            MOVE   A8,@34920h,1
193c0: 09c8 0045                 MOVI   45h,A8
193e0: 05e8 4940 0003            MOVB   A8,@34940h
19410: a3cf                      MOVE   A14,-*SP,1
19420: 09e8 4920 0003            MOVI   34920h,A8
19450: 930e                      MOVE   A8,*A14+,1
19460: 18e8                      MOVK   7h,A8
19470: 930e                      MOVE   A8,*A14+,1
19480: 0d5f 0000 0000            CALLA  0h
194b0: b7ee 0040                 MOVE   *SP(40h),A14,1
194d0: 97ed                      MOVE   *SP+,A13,1
194e0: 0962                      RETS   2h

_cp_v_ci_conf:
194f0: a3af                      MOVE   A13,-*SP,1
19500: 4dcd                      MOVE   A14,A13
19510: 100e                      ADDK   20h,A14
19520: 1928                      MOVK   9h,A8
19530: 0788 1720 0003            MOVE   A8,@31720h,1
19560: 18e8                      MOVK   7h,A8
19570: 0788 1740 0003            MOVE   A8,@31740h,1
195a0: 18c8                      MOVK   6h,A8
195b0: 0788 1760 0003            MOVE   A8,@31760h,1
195e0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
19600: 05e8 1780 0003            MOVB   A8,@31780h
19630: a3cf                      MOVE   A14,-*SP,1
19640: 09e8 1720 0003            MOVI   31720h,A8
19670: 930e                      MOVE   A8,*A14+,1
19680: 1888                      MOVK   4h,A8
19690: 930e                      MOVE   A8,*A14+,1
196a0: 0d5f 0000 0000            CALLA  0h
196d0: 830d                      MOVE   A8,*A13,1
196e0: 4d08                      MOVE   A8,A8
196f0: ca13                      JREQ   19830h
19700: 1828                      MOVK   1h,A8
19710: 0788 4920 0003            MOVE   A8,@34920h,1
19740: 09c8 0046                 MOVI   46h,A8
19760: 05e8 4940 0003            MOVB   A8,@34940h
19790: a3cf                      MOVE   A14,-*SP,1
197a0: 09e8 4920 0003            MOVI   34920h,A8
197d0: 930e                      MOVE   A8,*A14+,1
197e0: 18e8                      MOVK   7h,A8
197f0: 930e                      MOVE   A8,*A14+,1
19800: 0d5f 0000 0000            CALLA  0h
19830: b7ee 0040                 MOVE   *SP(40h),A14,1
19850: 97ed                      MOVE   *SP+,A13,1
19860: 0962                      RETS   2h

_cp_v_edx_conf:
19870: a3af                      MOVE   A13,-*SP,1
19880: 4dcd                      MOVE   A14,A13
19890: 100e                      ADDK   20h,A14
198a0: 1928                      MOVK   9h,A8
198b0: 0788 1720 0003            MOVE   A8,@31720h,1
198e0: 18e8                      MOVK   7h,A8
198f0: 0788 1740 0003            MOVE   A8,@31740h,1
19920: 0788 1760 0003            MOVE   A8,@31760h,1
19950: afa8 ffe0                 MOVB   *A13(FFE0h),A8
19970: 05e8 1780 0003            MOVB   A8,@31780h
199a0: a3cf                      MOVE   A14,-*SP,1
199b0: 09e8 1720 0003            MOVI   31720h,A8
199e0: 930e                      MOVE   A8,*A14+,1
199f0: 1888                      MOVK   4h,A8
19a00: 930e                      MOVE   A8,*A14+,1
19a10: 0d5f 0000 0000            CALLA  0h
19a40: 830d                      MOVE   A8,*A13,1
19a50: 4d08                      MOVE   A8,A8
19a60: ca13                      JREQ   19BA0h
19a70: 1828                      MOVK   1h,A8
19a80: 0788 4920 0003            MOVE   A8,@34920h,1
19ab0: 09c8 0047                 MOVI   47h,A8
19ad0: 05e8 4940 0003            MOVB   A8,@34940h
19b00: a3cf                      MOVE   A14,-*SP,1
19b10: 09e8 4920 0003            MOVI   34920h,A8
19b40: 930e                      MOVE   A8,*A14+,1
19b50: 18e8                      MOVK   7h,A8
19b60: 930e                      MOVE   A8,*A14+,1
19b70: 0d5f 0000 0000            CALLA  0h
19ba0: b7ee 0040                 MOVE   *SP(40h),A14,1
19bc0: 97ed                      MOVE   *SP+,A13,1
19bd0: 0962                      RETS   2h

_cp_v_wdx_conf:
19be0: a3af                      MOVE   A13,-*SP,1
19bf0: 4dcd                      MOVE   A14,A13
19c00: 100e                      ADDK   20h,A14
19c10: 1928                      MOVK   9h,A8
19c20: 0788 1720 0003            MOVE   A8,@31720h,1
19c50: 18e8                      MOVK   7h,A8
19c60: 0788 1740 0003            MOVE   A8,@31740h,1
19c90: 1908                      MOVK   8h,A8
19ca0: 0788 1760 0003            MOVE   A8,@31760h,1
19cd0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
19cf0: 05e8 1780 0003            MOVB   A8,@31780h
19d20: a3cf                      MOVE   A14,-*SP,1
19d30: 09e8 1720 0003            MOVI   31720h,A8
19d60: 930e                      MOVE   A8,*A14+,1
19d70: 1888                      MOVK   4h,A8
19d80: 930e                      MOVE   A8,*A14+,1
19d90: 0d5f 0000 0000            CALLA  0h
19dc0: 830d                      MOVE   A8,*A13,1
19dd0: 4d08                      MOVE   A8,A8
19de0: ca13                      JREQ   19F20h
19df0: 1828                      MOVK   1h,A8
19e00: 0788 4920 0003            MOVE   A8,@34920h,1
19e30: 09c8 0048                 MOVI   48h,A8
19e50: 05e8 4940 0003            MOVB   A8,@34940h
19e80: a3cf                      MOVE   A14,-*SP,1
19e90: 09e8 4920 0003            MOVI   34920h,A8
19ec0: 930e                      MOVE   A8,*A14+,1
19ed0: 18e8                      MOVK   7h,A8
19ee0: 930e                      MOVE   A8,*A14+,1
19ef0: 0d5f 0000 0000            CALLA  0h
19f20: b7ee 0040                 MOVE   *SP(40h),A14,1
19f40: 97ed                      MOVE   *SP+,A13,1
19f50: 0962                      RETS   2h

_cp_v_wdx_state:
19f60: a3af                      MOVE   A13,-*SP,1
19f70: 4dcd                      MOVE   A14,A13
19f80: 100e                      ADDK   20h,A14
19f90: 1928                      MOVK   9h,A8
19fa0: 0788 1720 0003            MOVE   A8,@31720h,1
19fd0: 18e8                      MOVK   7h,A8
19fe0: 0788 1740 0003            MOVE   A8,@31740h,1
1a010: 1a68                      MOVK   13h,A8
1a020: 0788 1760 0003            MOVE   A8,@31760h,1
1a050: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1a070: 05e8 1780 0003            MOVB   A8,@31780h
1a0a0: a3cf                      MOVE   A14,-*SP,1
1a0b0: 09e8 1720 0003            MOVI   31720h,A8
1a0e0: 930e                      MOVE   A8,*A14+,1
1a0f0: 1888                      MOVK   4h,A8
1a100: 930e                      MOVE   A8,*A14+,1
1a110: 0d5f 0000 0000            CALLA  0h
1a140: 830d                      MOVE   A8,*A13,1
1a150: 4d08                      MOVE   A8,A8
1a160: ca13                      JREQ   1A2A0h
1a170: 1828                      MOVK   1h,A8
1a180: 0788 4920 0003            MOVE   A8,@34920h,1
1a1b0: 09c8 0053                 MOVI   53h,A8
1a1d0: 05e8 4940 0003            MOVB   A8,@34940h
1a200: a3cf                      MOVE   A14,-*SP,1
1a210: 09e8 4920 0003            MOVI   34920h,A8
1a240: 930e                      MOVE   A8,*A14+,1
1a250: 18e8                      MOVK   7h,A8
1a260: 930e                      MOVE   A8,*A14+,1
1a270: 0d5f 0000 0000            CALLA  0h
1a2a0: b7ee 0040                 MOVE   *SP(40h),A14,1
1a2c0: 97ed                      MOVE   *SP+,A13,1
1a2d0: 0962                      RETS   2h

_cp_v_air_conf:
1a2e0: a3af                      MOVE   A13,-*SP,1
1a2f0: 4dcd                      MOVE   A14,A13
1a300: 100e                      ADDK   20h,A14
1a310: 1928                      MOVK   9h,A8
1a320: 0788 1720 0003            MOVE   A8,@31720h,1
1a350: 18e8                      MOVK   7h,A8
1a360: 0788 1740 0003            MOVE   A8,@31740h,1
1a390: 1a88                      MOVK   14h,A8
1a3a0: 0788 1760 0003            MOVE   A8,@31760h,1
1a3d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1a3f0: 05e8 1780 0003            MOVB   A8,@31780h
1a420: a3cf                      MOVE   A14,-*SP,1
1a430: 09e8 1720 0003            MOVI   31720h,A8
1a460: 930e                      MOVE   A8,*A14+,1
1a470: 1888                      MOVK   4h,A8
1a480: 930e                      MOVE   A8,*A14+,1
1a490: 0d5f 0000 0000            CALLA  0h
1a4c0: 830d                      MOVE   A8,*A13,1
1a4d0: 4d08                      MOVE   A8,A8
1a4e0: ca13                      JREQ   1A620h
1a4f0: 1828                      MOVK   1h,A8
1a500: 0788 4920 0003            MOVE   A8,@34920h,1
1a530: 09c8 0054                 MOVI   54h,A8
1a550: 05e8 4940 0003            MOVB   A8,@34940h
1a580: a3cf                      MOVE   A14,-*SP,1
1a590: 09e8 4920 0003            MOVI   34920h,A8
1a5c0: 930e                      MOVE   A8,*A14+,1
1a5d0: 18e8                      MOVK   7h,A8
1a5e0: 930e                      MOVE   A8,*A14+,1
1a5f0: 0d5f 0000 0000            CALLA  0h
1a620: b7ee 0040                 MOVE   *SP(40h),A14,1
1a640: 97ed                      MOVE   *SP+,A13,1
1a650: 0962                      RETS   2h

_cp_v_edx_thresh:
1a660: a3af                      MOVE   A13,-*SP,1
1a670: 4dcd                      MOVE   A14,A13
1a680: 100e                      ADDK   20h,A14
1a690: 1988                      MOVK   Ch,A8
1a6a0: 0788 1720 0003            MOVE   A8,@31720h,1
1a6d0: 18e8                      MOVK   7h,A8
1a6e0: 0788 1740 0003            MOVE   A8,@31740h,1
1a710: 1948                      MOVK   Ah,A8
1a720: 0788 1760 0003            MOVE   A8,@31760h,1
1a750: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1a770: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
1a790: 0d5f 3d80 0002            CALLA  23D80h
1a7c0: a7c8                      MOVE   -*A14,A8,1
1a7d0: 0788 1780 0003            MOVE   A8,@31780h,1
1a800: a3cf                      MOVE   A14,-*SP,1
1a810: 09e8 1720 0003            MOVI   31720h,A8
1a840: 930e                      MOVE   A8,*A14+,1
1a850: 1888                      MOVK   4h,A8
1a860: 930e                      MOVE   A8,*A14+,1
1a870: 0d5f 0000 0000            CALLA  0h
1a8a0: 830d                      MOVE   A8,*A13,1
1a8b0: 4d08                      MOVE   A8,A8
1a8c0: ca13                      JREQ   1AA00h
1a8d0: 1828                      MOVK   1h,A8
1a8e0: 0788 4920 0003            MOVE   A8,@34920h,1
1a910: 09c8 004a                 MOVI   4Ah,A8
1a930: 05e8 4940 0003            MOVB   A8,@34940h
1a960: a3cf                      MOVE   A14,-*SP,1
1a970: 09e8 4920 0003            MOVI   34920h,A8
1a9a0: 930e                      MOVE   A8,*A14+,1
1a9b0: 18e8                      MOVK   7h,A8
1a9c0: 930e                      MOVE   A8,*A14+,1
1a9d0: 0d5f 0000 0000            CALLA  0h
1aa00: b7ee 0040                 MOVE   *SP(40h),A14,1
1aa20: 97ed                      MOVE   *SP+,A13,1
1aa30: 0962                      RETS   2h

_cp_v_qbsd_quad:
1aa40: a3af                      MOVE   A13,-*SP,1
1aa50: 4dcd                      MOVE   A14,A13
1aa60: 100e                      ADDK   20h,A14
1aa70: 1948                      MOVK   Ah,A8
1aa80: 0788 1720 0003            MOVE   A8,@31720h,1
1aab0: 18e8                      MOVK   7h,A8
1aac0: 0788 1740 0003            MOVE   A8,@31740h,1
1aaf0: 1968                      MOVK   Bh,A8
1ab00: 0788 1760 0003            MOVE   A8,@31760h,1
1ab30: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1ab50: 05e8 1780 0003            MOVB   A8,@31780h
1ab80: afa8 ffc0                 MOVB   *A13(FFC0h),A8
1aba0: 05e8 1788 0003            MOVB   A8,@31788h
1abd0: a3cf                      MOVE   A14,-*SP,1
1abe0: 09e8 1720 0003            MOVI   31720h,A8
1ac10: 930e                      MOVE   A8,*A14+,1
1ac20: 1888                      MOVK   4h,A8
1ac30: 930e                      MOVE   A8,*A14+,1
1ac40: 0d5f 0000 0000            CALLA  0h
1ac70: 830d                      MOVE   A8,*A13,1
1ac80: 4d08                      MOVE   A8,A8
1ac90: ca13                      JREQ   1ADD0h
1aca0: 1828                      MOVK   1h,A8
1acb0: 0788 4920 0003            MOVE   A8,@34920h,1
1ace0: 09c8 004b                 MOVI   4Bh,A8
1ad00: 05e8 4940 0003            MOVB   A8,@34940h
1ad30: a3cf                      MOVE   A14,-*SP,1
1ad40: 09e8 4920 0003            MOVI   34920h,A8
1ad70: 930e                      MOVE   A8,*A14+,1
1ad80: 18e8                      MOVK   7h,A8
1ad90: 930e                      MOVE   A8,*A14+,1
1ada0: 0d5f 0000 0000            CALLA  0h
1add0: b7ee 0040                 MOVE   *SP(40h),A14,1
1adf0: 97ed                      MOVE   *SP+,A13,1
1ae00: 0962                      RETS   2h

_cp_v_qbsd_vis:
1ae10: a3af                      MOVE   A13,-*SP,1
1ae20: 4dcd                      MOVE   A14,A13
1ae30: 100e                      ADDK   20h,A14
1ae40: 1928                      MOVK   9h,A8
1ae50: 0788 1720 0003            MOVE   A8,@31720h,1
1ae80: 18e8                      MOVK   7h,A8
1ae90: 0788 1740 0003            MOVE   A8,@31740h,1
1aec0: 1988                      MOVK   Ch,A8
1aed0: 0788 1760 0003            MOVE   A8,@31760h,1
1af00: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1af20: 05e8 1780 0003            MOVB   A8,@31780h
1af50: a3cf                      MOVE   A14,-*SP,1
1af60: 09e8 1720 0003            MOVI   31720h,A8
1af90: 930e                      MOVE   A8,*A14+,1
1afa0: 1888                      MOVK   4h,A8
1afb0: 930e                      MOVE   A8,*A14+,1
1afc0: 0d5f 0000 0000            CALLA  0h
1aff0: 830d                      MOVE   A8,*A13,1
1b000: 4d08                      MOVE   A8,A8
1b010: ca13                      JREQ   1B150h
1b020: 1828                      MOVK   1h,A8
1b030: 0788 4920 0003            MOVE   A8,@34920h,1
1b060: 09c8 004c                 MOVI   4Ch,A8
1b080: 05e8 4940 0003            MOVB   A8,@34940h
1b0b0: a3cf                      MOVE   A14,-*SP,1
1b0c0: 09e8 4920 0003            MOVI   34920h,A8
1b0f0: 930e                      MOVE   A8,*A14+,1
1b100: 18e8                      MOVK   7h,A8
1b110: 930e                      MOVE   A8,*A14+,1
1b120: 0d5f 0000 0000            CALLA  0h
1b150: b7ee 0040                 MOVE   *SP(40h),A14,1
1b170: 97ed                      MOVE   *SP+,A13,1
1b180: 0962                      RETS   2h

_cp_v_qbsd_gain:
1b190: a3af                      MOVE   A13,-*SP,1
1b1a0: 4dcd                      MOVE   A14,A13
1b1b0: 100e                      ADDK   20h,A14
1b1c0: 1928                      MOVK   9h,A8
1b1d0: 0788 1720 0003            MOVE   A8,@31720h,1
1b200: 18e8                      MOVK   7h,A8
1b210: 0788 1740 0003            MOVE   A8,@31740h,1
1b240: 19a8                      MOVK   Dh,A8
1b250: 0788 1760 0003            MOVE   A8,@31760h,1
1b280: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1b2a0: 05e8 1780 0003            MOVB   A8,@31780h
1b2d0: a3cf                      MOVE   A14,-*SP,1
1b2e0: 09e8 1720 0003            MOVI   31720h,A8
1b310: 930e                      MOVE   A8,*A14+,1
1b320: 1888                      MOVK   4h,A8
1b330: 930e                      MOVE   A8,*A14+,1
1b340: 0d5f 0000 0000            CALLA  0h
1b370: 830d                      MOVE   A8,*A13,1
1b380: 4d08                      MOVE   A8,A8
1b390: ca13                      JREQ   1B4D0h
1b3a0: 1828                      MOVK   1h,A8
1b3b0: 0788 4920 0003            MOVE   A8,@34920h,1
1b3e0: 09c8 004d                 MOVI   4Dh,A8
1b400: 05e8 4940 0003            MOVB   A8,@34940h
1b430: a3cf                      MOVE   A14,-*SP,1
1b440: 09e8 4920 0003            MOVI   34920h,A8
1b470: 930e                      MOVE   A8,*A14+,1
1b480: 18e8                      MOVK   7h,A8
1b490: 930e                      MOVE   A8,*A14+,1
1b4a0: 0d5f 0000 0000            CALLA  0h
1b4d0: b7ee 0040                 MOVE   *SP(40h),A14,1
1b4f0: 97ed                      MOVE   *SP+,A13,1
1b500: 0962                      RETS   2h

_cp_v_scm_range:
1b510: a3af                      MOVE   A13,-*SP,1
1b520: 4dcd                      MOVE   A14,A13
1b530: 100e                      ADDK   20h,A14
1b540: 1928                      MOVK   9h,A8
1b550: 0788 1720 0003            MOVE   A8,@31720h,1
1b580: 18e8                      MOVK   7h,A8
1b590: 0788 1740 0003            MOVE   A8,@31740h,1
1b5c0: 19c8                      MOVK   Eh,A8
1b5d0: 0788 1760 0003            MOVE   A8,@31760h,1
1b600: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1b620: 05e8 1780 0003            MOVB   A8,@31780h
1b650: a3cf                      MOVE   A14,-*SP,1
1b660: 09e8 1720 0003            MOVI   31720h,A8
1b690: 930e                      MOVE   A8,*A14+,1
1b6a0: 1888                      MOVK   4h,A8
1b6b0: 930e                      MOVE   A8,*A14+,1
1b6c0: 0d5f 0000 0000            CALLA  0h
1b6f0: 830d                      MOVE   A8,*A13,1
1b700: 4d08                      MOVE   A8,A8
1b710: ca13                      JREQ   1B850h
1b720: 1828                      MOVK   1h,A8
1b730: 0788 4920 0003            MOVE   A8,@34920h,1
1b760: 09c8 004e                 MOVI   4Eh,A8
1b780: 05e8 4940 0003            MOVB   A8,@34940h
1b7b0: a3cf                      MOVE   A14,-*SP,1
1b7c0: 09e8 4920 0003            MOVI   34920h,A8
1b7f0: 930e                      MOVE   A8,*A14+,1
1b800: 18e8                      MOVK   7h,A8
1b810: 930e                      MOVE   A8,*A14+,1
1b820: 0d5f 0000 0000            CALLA  0h
1b850: b7ee 0040                 MOVE   *SP(40h),A14,1
1b870: 97ed                      MOVE   *SP+,A13,1
1b880: 0962                      RETS   2h

_cp_v_scm_req:
1b890: a3af                      MOVE   A13,-*SP,1
1b8a0: 4dcd                      MOVE   A14,A13
1b8b0: 100e                      ADDK   20h,A14
1b8c0: 1928                      MOVK   9h,A8
1b8d0: 0788 1720 0003            MOVE   A8,@31720h,1
1b900: 18e8                      MOVK   7h,A8
1b910: 0788 1740 0003            MOVE   A8,@31740h,1
1b940: 19e8                      MOVK   Fh,A8
1b950: 0788 1760 0003            MOVE   A8,@31760h,1
1b980: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1b9a0: 05e8 1780 0003            MOVB   A8,@31780h
1b9d0: a3cf                      MOVE   A14,-*SP,1
1b9e0: 09e8 1720 0003            MOVI   31720h,A8
1ba10: 930e                      MOVE   A8,*A14+,1
1ba20: 1888                      MOVK   4h,A8
1ba30: 930e                      MOVE   A8,*A14+,1
1ba40: 0d5f 0000 0000            CALLA  0h
1ba70: 830d                      MOVE   A8,*A13,1
1ba80: 4d08                      MOVE   A8,A8
1ba90: ca13                      JREQ   1BBD0h
1baa0: 1828                      MOVK   1h,A8
1bab0: 0788 4920 0003            MOVE   A8,@34920h,1
1bae0: 09c8 004f                 MOVI   4Fh,A8
1bb00: 05e8 4940 0003            MOVB   A8,@34940h
1bb30: a3cf                      MOVE   A14,-*SP,1
1bb40: 09e8 4920 0003            MOVI   34920h,A8
1bb70: 930e                      MOVE   A8,*A14+,1
1bb80: 18e8                      MOVK   7h,A8
1bb90: 930e                      MOVE   A8,*A14+,1
1bba0: 0d5f 0000 0000            CALLA  0h
1bbd0: b7ee 0040                 MOVE   *SP(40h),A14,1
1bbf0: 97ed                      MOVE   *SP+,A13,1
1bc00: 0962                      RETS   2h

_cp_v_data_req:
1bc10: a3af                      MOVE   A13,-*SP,1
1bc20: 4dcd                      MOVE   A14,A13
1bc30: 100e                      ADDK   20h,A14
1bc40: 1908                      MOVK   8h,A8
1bc50: 0788 1720 0003            MOVE   A8,@31720h,1
1bc80: 18e8                      MOVK   7h,A8
1bc90: 0788 1740 0003            MOVE   A8,@31740h,1
1bcc0: 1a48                      MOVK   12h,A8
1bcd0: 0788 1760 0003            MOVE   A8,@31760h,1
1bd00: a3cf                      MOVE   A14,-*SP,1
1bd10: 09e8 1720 0003            MOVI   31720h,A8
1bd40: 930e                      MOVE   A8,*A14+,1
1bd50: 1888                      MOVK   4h,A8
1bd60: 930e                      MOVE   A8,*A14+,1
1bd70: 0d5f 0000 0000            CALLA  0h
1bda0: 830d                      MOVE   A8,*A13,1
1bdb0: 4d08                      MOVE   A8,A8
1bdc0: cb05                      JRNE   1BE20h
1bdd0: 1848                      MOVK   2h,A8
1bde0: 05e8 f870 0002            MOVB   A8,@2F870h
1be10: c017                      JR     1BF90h
1be20: 1828                      MOVK   1h,A8
1be30: 0788 4920 0003            MOVE   A8,@34920h,1
1be60: 09c8 0052                 MOVI   52h,A8
1be80: 05e8 4940 0003            MOVB   A8,@34940h
1beb0: a3cf                      MOVE   A14,-*SP,1
1bec0: 09e8 4920 0003            MOVI   34920h,A8
1bef0: 930e                      MOVE   A8,*A14+,1
1bf00: 18e8                      MOVK   7h,A8
1bf10: 930e                      MOVE   A8,*A14+,1
1bf20: 0d5f 0000 0000            CALLA  0h
1bf50: 1888                      MOVK   4h,A8
1bf60: 05e8 f870 0002            MOVB   A8,@2F870h
1bf90: 140e                      SUBK   20h,A14
1bfa0: 97ed                      MOVE   *SP+,A13,1
1bfb0: 0960                      RETS   

_cp_v_data_status:
1bfc0: 07e8 f870 0002            MOVE   @2F870h,A8
1bff0: 0960                      RETS   

_cp_v_data_read:
1c000: 098f 002c                 MMTM   SP,A10,A12,A13
1c020: 4dcd                      MOVE   A14,A13
1c030: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1c050: 454a                      SUB    A10,A10
1c060: 4d48                      MOVE   A10,A8
1c070: 2468                      SLL    3h,A8
1c080: 0b28 17a0 0003            ADDI   317A0h,A8
1c0b0: 9d0c                      MOVB   *A8,*A12
1c0c0: 110c                      ADDK   8h,A12
1c0d0: 102a                      INC    A10
1c0e0: 260a                      SLL    10h,A10
1c0f0: 2a0a                      SRA    10h,A10
1c100: 0b4a fb70                 CMPI   48Fh,A10
1c120: c4f3                      JRLT   1C060h
1c130: b7ee 0080                 MOVE   *SP(80h),A14,1
1c150: 09af 3400                 MMFM   SP,A10,A12,A13
1c170: 0962                      RETS   2h

_cp_v_data_write:
1c180: 098f 002c                 MMTM   SP,A10,A12,A13
1c1a0: 4dcd                      MOVE   A14,A13
1c1b0: 100e                      ADDK   20h,A14
1c1c0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1c1e0: 454a                      SUB    A10,A10
1c1f0: 4d48                      MOVE   A10,A8
1c200: 2468                      SLL    3h,A8
1c210: 0b28 17a0 0003            ADDI   317A0h,A8
1c240: 9d88                      MOVB   *A12,*A8
1c250: 110c                      ADDK   8h,A12
1c260: 102a                      INC    A10
1c270: 260a                      SLL    10h,A10
1c280: 2a0a                      SRA    10h,A10
1c290: 0b4a fb70                 CMPI   48Fh,A10
1c2b0: c4f3                      JRLT   1C1F0h
1c2c0: 190c                      MOVK   8h,A12
1c2d0: 078c 1720 0003            MOVE   A12,@31720h,1
1c300: 18ea                      MOVK   7h,A10
1c310: 078a 1740 0003            MOVE   A10,@31740h,1
1c340: 1a28                      MOVK   11h,A8
1c350: 0788 1760 0003            MOVE   A8,@31760h,1
1c380: a3cf                      MOVE   A14,-*SP,1
1c390: 09ea 1720 0003            MOVI   31720h,A10
1c3c0: 934e                      MOVE   A10,*A14+,1
1c3d0: 188c                      MOVK   4h,A12
1c3e0: 938e                      MOVE   A12,*A14+,1
1c3f0: 0d5f 0000 0000            CALLA  0h
1c420: 830d                      MOVE   A8,*A13,1
1c430: 4d08                      MOVE   A8,A8
1c440: cb05                      JRNE   1C4A0h
1c450: 458c                      SUB    A12,A12
1c460: 05ec f870 0002            MOVB   A12,@2F870h
1c490: c017                      JR     1C610h
1c4a0: 182c                      MOVK   1h,A12
1c4b0: 078c 4920 0003            MOVE   A12,@34920h,1
1c4e0: 09ca 0051                 MOVI   51h,A10
1c500: 05ea 4940 0003            MOVB   A10,@34940h
1c530: a3cf                      MOVE   A14,-*SP,1
1c540: 09ec 4920 0003            MOVI   34920h,A12
1c570: 938e                      MOVE   A12,*A14+,1
1c580: 18ea                      MOVK   7h,A10
1c590: 934e                      MOVE   A10,*A14+,1
1c5a0: 0d5f 0000 0000            CALLA  0h
1c5d0: 1888                      MOVK   4h,A8
1c5e0: 05e8 f870 0002            MOVB   A8,@2F870h
1c610: b7ee 0080                 MOVE   *SP(80h),A14,1
1c630: 09af 3400                 MMFM   SP,A10,A12,A13
1c650: 0962                      RETS   2h

_cp_v_vac_id:
1c660: a3af                      MOVE   A13,-*SP,1
1c670: 4dcd                      MOVE   A14,A13
1c680: a3cf                      MOVE   A14,-*SP,1
1c690: 09e8 f880 0002            MOVI   2F880h,A8
1c6c0: 930e                      MOVE   A8,*A14+,1
1c6d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
1c6f0: 0d5f 97c0 0002            CALLA  297C0h
1c720: b7ee 0040                 MOVE   *SP(40h),A14,1
1c740: 97ed                      MOVE   *SP+,A13,1
1c750: 0962                      RETS   2h

_cp_v_comms_id:
1c760: a3af                      MOVE   A13,-*SP,1
1c770: 4dcd                      MOVE   A14,A13
1c780: a3cf                      MOVE   A14,-*SP,1
1c790: 09e8 f8c0 0002            MOVI   2F8C0h,A8
1c7c0: 930e                      MOVE   A8,*A14+,1
1c7d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
1c7f0: 0d5f 97c0 0002            CALLA  297C0h
1c820: b7ee 0040                 MOVE   *SP(40h),A14,1
1c840: 97ed                      MOVE   *SP+,A13,1
1c850: 0962                      RETS   2h

_cp_v_tilt0_conf:
1c860: a3af                      MOVE   A13,-*SP,1
1c870: 4dcd                      MOVE   A14,A13
1c880: 100e                      ADDK   20h,A14
1c890: 1928                      MOVK   9h,A8
1c8a0: 0788 1720 0003            MOVE   A8,@31720h,1
1c8d0: 18e8                      MOVK   7h,A8
1c8e0: 0788 1740 0003            MOVE   A8,@31740h,1
1c910: 1aa8                      MOVK   15h,A8
1c920: 0788 1760 0003            MOVE   A8,@31760h,1
1c950: afa8 ffe0                 MOVB   *A13(FFE0h),A8
1c970: 05e8 1780 0003            MOVB   A8,@31780h
1c9a0: a3cf                      MOVE   A14,-*SP,1
1c9b0: 09e8 1720 0003            MOVI   31720h,A8
1c9e0: 930e                      MOVE   A8,*A14+,1
1c9f0: 1888                      MOVK   4h,A8
1ca00: 930e                      MOVE   A8,*A14+,1
1ca10: 0d5f 0000 0000            CALLA  0h
1ca40: 830d                      MOVE   A8,*A13,1
1ca50: 4d08                      MOVE   A8,A8
1ca60: ca13                      JREQ   1CBA0h
1ca70: 1828                      MOVK   1h,A8
1ca80: 0788 4920 0003            MOVE   A8,@34920h,1
1cab0: 09c8 0055                 MOVI   55h,A8
1cad0: 05e8 4940 0003            MOVB   A8,@34940h
1cb00: a3cf                      MOVE   A14,-*SP,1
1cb10: 09e8 4920 0003            MOVI   34920h,A8
1cb40: 930e                      MOVE   A8,*A14+,1
1cb50: 18e8                      MOVK   7h,A8
1cb60: 930e                      MOVE   A8,*A14+,1
1cb70: 0d5f 0000 0000            CALLA  0h
1cba0: b7ee 0040                 MOVE   *SP(40h),A14,1
1cbc0: 97ed                      MOVE   *SP+,A13,1
1cbd0: 0962                      RETS   2h

_cp_v_touch_off:
1cbe0: a3af                      MOVE   A13,-*SP,1
1cbf0: 4dcd                      MOVE   A14,A13
1cc00: 100e                      ADDK   20h,A14
1cc10: 1908                      MOVK   8h,A8
1cc20: 0788 1720 0003            MOVE   A8,@31720h,1
1cc50: 18e8                      MOVK   7h,A8
1cc60: 0788 1740 0003            MOVE   A8,@31740h,1
1cc90: 1ac8                      MOVK   16h,A8
1cca0: 0788 1760 0003            MOVE   A8,@31760h,1
1ccd0: a3cf                      MOVE   A14,-*SP,1
1cce0: 09e8 1720 0003            MOVI   31720h,A8
1cd10: 930e                      MOVE   A8,*A14+,1
1cd20: 1888                      MOVK   4h,A8
1cd30: 930e                      MOVE   A8,*A14+,1
1cd40: 0d5f 0000 0000            CALLA  0h
1cd70: 830d                      MOVE   A8,*A13,1
1cd80: 4d08                      MOVE   A8,A8
1cd90: ca13                      JREQ   1CED0h
1cda0: 1828                      MOVK   1h,A8
1cdb0: 0788 4920 0003            MOVE   A8,@34920h,1
1cde0: 09c8 0056                 MOVI   56h,A8
1ce00: 05e8 4940 0003            MOVB   A8,@34940h
1ce30: a3cf                      MOVE   A14,-*SP,1
1ce40: 09e8 4920 0003            MOVI   34920h,A8
1ce70: 930e                      MOVE   A8,*A14+,1
1ce80: 18e8                      MOVK   7h,A8
1ce90: 930e                      MOVE   A8,*A14+,1
1cea0: 0d5f 0000 0000            CALLA  0h
1ced0: 140e                      SUBK   20h,A14
1cee0: 97ed                      MOVE   *SP+,A13,1
1cef0: 0960                      RETS   

_cp_v_scm_reading:
1cf00: 098f 000c                 MMTM   SP,A12,A13
1cf20: 4dcd                      MOVE   A14,A13
1cf30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1cf50: 07ac f840 0002            MOVE   @2F840h,A12,1
1cf80: 8388                      MOVE   A12,*A8,1
1cf90: b7ee 0060                 MOVE   *SP(60h),A14,1
1cfb0: 09af 3000                 MMFM   SP,A12,A13
1cfd0: 0962                      RETS   2h

_get_vacuum_errors:
1cfe0: a3af                      MOVE   A13,-*SP,1
1cff0: 4dcd                      MOVE   A14,A13
1d000: 0b0e 0040                 ADDI   40h,A14
1d020: a3cf                      MOVE   A14,-*SP,1
1d030: 93ae                      MOVE   A13,*A14+,1
1d040: 18e8                      MOVK   7h,A8
1d050: 930e                      MOVE   A8,*A14+,1
1d060: 0d5f 0000 0000            CALLA  0h
1d090: 4f0e                      MOVE   A8,B14
1d0a0: 15e8                      SUBK   Fh,A8
1d0b0: cb02                      JRNE   1D0E0h
1d0c0: 4508                      SUB    A8,A8
1d0d0: c016                      JR     1D240h
1d0e0: 4fd8                      MOVE   B14,A8
1d0f0: cb0b                      JRNE   1D1B0h
1d100: a3cf                      MOVE   A14,-*SP,1
1d110: 4508                      SUB    A8,A8
1d120: 930e                      MOVE   A8,*A14+,1
1d130: 93ae                      MOVE   A13,*A14+,1
1d140: 18e8                      MOVK   7h,A8
1d150: 930e                      MOVE   A8,*A14+,1
1d160: 0d5f 0000 0000            CALLA  0h
1d190: 4f0e                      MOVE   A8,B14
1d1a0: ca02                      JREQ   1D1D0h
1d1b0: 4508                      SUB    A8,A8
1d1c0: c007                      JR     1D240h
1d1d0: 0548                      SETF   8h,0,0
1d1e0: b5a8 0020                 MOVE   *A13(20h),A8,0
1d200: 0ba8 0080 0000            ORI    80h,A8
1d230: 0528                      ZEXT   A8,0
1d240: 0bee ffbf                 SUBI   40h,A14
1d260: 97ed                      MOVE   *SP+,A13,1
1d270: 0960                      RETS   

_cp_v_comms_psu:
1d280: a3af                      MOVE   A13,-*SP,1
1d290: 4dcd                      MOVE   A14,A13
1d2a0: 100e                      ADDK   20h,A14
1d2b0: 1908                      MOVK   8h,A8
1d2c0: 0788 1720 0003            MOVE   A8,@31720h,1
1d2f0: 18e8                      MOVK   7h,A8
1d300: 0788 1740 0003            MOVE   A8,@31740h,1
1d330: 1b08                      MOVK   18h,A8
1d340: 0788 1760 0003            MOVE   A8,@31760h,1
1d370: a3cf                      MOVE   A14,-*SP,1
1d380: 09e8 1720 0003            MOVI   31720h,A8
1d3b0: 930e                      MOVE   A8,*A14+,1
1d3c0: 1888                      MOVK   4h,A8
1d3d0: 930e                      MOVE   A8,*A14+,1
1d3e0: 0d5f 0000 0000            CALLA  0h
1d410: 830d                      MOVE   A8,*A13,1
1d420: 4d08                      MOVE   A8,A8
1d430: ca13                      JREQ   1D570h
1d440: 1828                      MOVK   1h,A8
1d450: 0788 4920 0003            MOVE   A8,@34920h,1
1d480: 09c8 0058                 MOVI   58h,A8
1d4a0: 05e8 4940 0003            MOVB   A8,@34940h
1d4d0: a3cf                      MOVE   A14,-*SP,1
1d4e0: 09e8 4920 0003            MOVI   34920h,A8
1d510: 930e                      MOVE   A8,*A14+,1
1d520: 18e8                      MOVK   7h,A8
1d530: 930e                      MOVE   A8,*A14+,1
1d540: 0d5f 0000 0000            CALLA  0h
1d570: 140e                      SUBK   20h,A14
1d580: 97ed                      MOVE   *SP+,A13,1
1d590: 0960                      RETS   

_cp_vac_suspend:
1d5a0: 098f 0028                 MMTM   SP,A10,A12
1d5c0: 0d5f 3c40 0002            CALLA  23C40h
1d5f0: a3cf                      MOVE   A14,-*SP,1
1d600: 4508                      SUB    A8,A8
1d610: 930e                      MOVE   A8,*A14+,1
1d620: 930e                      MOVE   A8,*A14+,1
1d630: 930e                      MOVE   A8,*A14+,1
1d640: 1848                      MOVK   2h,A8
1d650: 930e                      MOVE   A8,*A14+,1
1d660: 0d5f 0000 0000            CALLA  0h
1d690: 4d0c                      MOVE   A8,A12
1d6a0: a3cf                      MOVE   A14,-*SP,1
1d6b0: 184c                      MOVK   2h,A12
1d6c0: 938e                      MOVE   A12,*A14+,1
1d6d0: 0d5f 0000 0000            CALLA  0h
1d700: 182a                      MOVK   1h,A10
1d710: a3cf                      MOVE   A14,-*SP,1
1d720: 19c8                      MOVK   Eh,A8
1d730: 930e                      MOVE   A8,*A14+,1
1d740: 0d5f 0000 0000            CALLA  0h
1d770: 4d0c                      MOVE   A8,A12
1d780: cb09                      JRNE   1D820h
1d790: a3cf                      MOVE   A14,-*SP,1
1d7a0: 19c8                      MOVK   Eh,A8
1d7b0: 930e                      MOVE   A8,*A14+,1
1d7c0: 0d5f 0000 0000            CALLA  0h
1d7f0: 4d0c                      MOVE   A8,A12
1d800: cb01                      JRNE   1D820h
1d810: 454a                      SUB    A10,A10
1d820: 4d48                      MOVE   A10,A8
1d830: cbed                      JRNE   1D710h
1d840: 182a                      MOVK   1h,A10
1d850: a3cf                      MOVE   A14,-*SP,1
1d860: 1948                      MOVK   Ah,A8
1d870: 930e                      MOVE   A8,*A14+,1
1d880: 0d5f 0000 0000            CALLA  0h
1d8b0: 4d0c                      MOVE   A8,A12
1d8c0: cb09                      JRNE   1D960h
1d8d0: a3cf                      MOVE   A14,-*SP,1
1d8e0: 1948                      MOVK   Ah,A8
1d8f0: 930e                      MOVE   A8,*A14+,1
1d900: 0d5f 0000 0000            CALLA  0h
1d930: 4d0c                      MOVE   A8,A12
1d940: cb01                      JRNE   1D960h
1d950: 454a                      SUB    A10,A10
1d960: 4d48                      MOVE   A10,A8
1d970: cbed                      JRNE   1D850h
1d980: 182a                      MOVK   1h,A10
1d990: a3cf                      MOVE   A14,-*SP,1
1d9a0: 1868                      MOVK   3h,A8
1d9b0: 930e                      MOVE   A8,*A14+,1
1d9c0: 0d5f 0000 0000            CALLA  0h
1d9f0: 4d0c                      MOVE   A8,A12
1da00: cb09                      JRNE   1DAA0h
1da10: a3cf                      MOVE   A14,-*SP,1
1da20: 1868                      MOVK   3h,A8
1da30: 930e                      MOVE   A8,*A14+,1
1da40: 0d5f 0000 0000            CALLA  0h
1da70: 4d0c                      MOVE   A8,A12
1da80: cb01                      JRNE   1DAA0h
1da90: 454a                      SUB    A10,A10
1daa0: 4d48                      MOVE   A10,A8
1dab0: cbed                      JRNE   1D990h
1dac0: 454a                      SUB    A10,A10
1dad0: 078a 0700 0000            MOVE   A10,@700h,1
1db00: 4d88                      MOVE   A12,A8
1db10: 09af 1400                 MMFM   SP,A10,A12
1db30: 0960                      RETS   

_ProcStgVacCmds:
1db40: 098f 002c                 MMTM   SP,A10,A12,A13
1db60: 4dcd                      MOVE   A14,A13
1db70: 0b0e 0440                 ADDI   440h,A14
1db90: a3cf                      MOVE   A14,-*SP,1
1dba0: 09c8 0080                 MOVI   80h,A8
1dbc0: 930e                      MOVE   A8,*A14+,1
1dbd0: 09e8 ff20 0002            MOVI   2FF20h,A8
1dc00: 930e                      MOVE   A8,*A14+,1
1dc10: 09e8 5453 5144            MOVI   51445453h,A8
1dc40: 930e                      MOVE   A8,*A14+,1
1dc50: 1848                      MOVK   2h,A8
1dc60: 930e                      MOVE   A8,*A14+,1
1dc70: 0d5f 0000 0000            CALLA  0h
1dca0: c000 008b                 JR     1E570h
1dcc0: 07e8 1700 0003            MOVE   @31700h,A8
1dcf0: cb00 00cd                 JRNE   1E9E0h
1dd10: 07a8 f380 0002            MOVE   @2F380h,A8,1
1dd40: 3b28                      DSJS   A8,1DEE0h
1dd50: a3cf                      MOVE   A14,-*SP,1
1dd60: 1868                      MOVK   3h,A8
1dd70: 930e                      MOVE   A8,*A14+,1
1dd80: 09e8 ee70 0002            MOVI   2EE70h,A8
1ddb0: 930e                      MOVE   A8,*A14+,1
1ddc0: 4da8                      MOVE   A13,A8
1ddd0: 0b08 0040                 ADDI   40h,A8
1ddf0: 930e                      MOVE   A8,*A14+,1
1de00: 0d5f 99f0 0002            CALLA  299F0h
1de30: 4d08                      MOVE   A8,A8
1de40: cb09                      JRNE   1DEE0h
1de50: 07e8 fb28 0002            MOVE   @2FB28h,A8
1de80: 0b88 ff04 ffff            ANDI   FBh,A8
1deb0: 05e8 fb28 0002            MOVB   A8,@2FB28h
1dee0: 07ec fb28 0002            MOVE   @2FB28h,A12
1df10: 0b4c ffcd                 CMPI   32h,A12
1df30: ca15                      JREQ   1E090h
1df40: 0b4c ffc9                 CMPI   36h,A12
1df60: ca12                      JREQ   1E090h
1df70: 07e8 d030 0003            MOVE   @3D030h,A8
1dfa0: ca06                      JREQ   1E010h
1dfb0: a3cf                      MOVE   A14,-*SP,1
1dfc0: 1908                      MOVK   8h,A8
1dfd0: 930e                      MOVE   A8,*A14+,1
1dfe0: 0d5f 0000 0000            CALLA  0h
1e010: 4508                      SUB    A8,A8
1e020: 05e8 d030 0003            MOVB   A8,@3D030h
1e050: 0b4c ffcb                 CMPI   34h,A12
1e070: cb0e                      JRNE   1E160h
1e080: c01f                      JR     1E280h
1e090: a3cf                      MOVE   A14,-*SP,1
1e0a0: 1908                      MOVK   8h,A8
1e0b0: 930e                      MOVE   A8,*A14+,1
1e0c0: 0d5f 0000 0000            CALLA  0h
1e0f0: 1828                      MOVK   1h,A8
1e100: 05e8 d030 0003            MOVB   A8,@3D030h
1e130: 0b4c ffcb                 CMPI   34h,A12
1e150: ca12                      JREQ   1E280h
1e160: 0b4c ffc9                 CMPI   36h,A12
1e180: ca0f                      JREQ   1E280h
1e190: 07ec d020 0003            MOVE   @3D020h,A12
1e1c0: ca06                      JREQ   1E230h
1e1d0: a3cf                      MOVE   A14,-*SP,1
1e1e0: 1a08                      MOVK   10h,A8
1e1f0: 930e                      MOVE   A8,*A14+,1
1e200: 0d5f 0000 0000            CALLA  0h
1e230: 458c                      SUB    A12,A12
1e240: 05ec d020 0003            MOVB   A12,@3D020h
1e270: c00a                      JR     1E320h
1e280: a3cf                      MOVE   A14,-*SP,1
1e290: 1a0c                      MOVK   10h,A12
1e2a0: 938e                      MOVE   A12,*A14+,1
1e2b0: 0d5f 0000 0000            CALLA  0h
1e2e0: 1828                      MOVK   1h,A8
1e2f0: 05e8 d020 0003            MOVB   A8,@3D020h
1e320: 09c8 0030                 MOVI   30h,A8
1e340: 05e8 fb28 0002            MOVB   A8,@2FB28h
1e370: 458c                      SUB    A12,A12
1e380: 4d88                      MOVE   A12,A8
1e390: 2468                      SLL    3h,A8
1e3a0: 41a8                      ADD    A13,A8
1e3b0: 4d8a                      MOVE   A12,A10
1e3c0: 246a                      SLL    3h,A10
1e3d0: 0b2a fb20 0002            ADDI   2FB20h,A10
1e400: bd48 0000 0040            MOVB   *A10(0h),*A8(40h)
1e430: 4d8a                      MOVE   A12,A10
1e440: 246a                      SLL    3h,A10
1e450: 41aa                      ADD    A13,A10
1e460: af4a 0040                 MOVB   *A10(40h),A10
1e480: 154a                      SUBK   Ah,A10
1e490: ca04                      JREQ   1E4E0h
1e4a0: 102c                      INC    A12
1e4b0: 0b4c ff7f                 CMPI   80h,A12
1e4d0: c4ea                      JRLT   1E380h
1e4e0: 10ac                      ADDK   5h,A12
1e4f0: 838d                      MOVE   A12,*A13,1
1e500: a3cf                      MOVE   A14,-*SP,1
1e510: 93ae                      MOVE   A13,*A14+,1
1e520: d3ae 0020                 MOVE   *A13(20h),*A14+,1
1e540: 0d5f 0000 0000            CALLA  0h
1e570: a3cf                      MOVE   A14,-*SP,1
1e580: 458c                      SUB    A12,A12
1e590: 938e                      MOVE   A12,*A14+,1
1e5a0: 93ae                      MOVE   A13,*A14+,1
1e5b0: 184a                      MOVK   2h,A10
1e5c0: 934e                      MOVE   A10,*A14+,1
1e5d0: 0d5f 0000 0000            CALLA  0h
1e600: 4f0e                      MOVE   A8,B14
1e610: cbf5                      JRNE   1E570h
1e620: 186c                      MOVK   3h,A12
1e630: 4daa                      MOVE   A13,A10
1e640: 0b0a 0040                 ADDI   40h,A10
1e660: 078a d000 0003            MOVE   A10,@3D000h,1
1e690: 09e8 fb20 0002            MOVI   2FB20h,A8
1e6c0: 0788 16e0 0003            MOVE   A8,@316E0h,1
1e6f0: 4508                      SUB    A8,A8
1e700: 05e8 1700 0003            MOVB   A8,@31700h
1e730: 0d5f 3a60 0002            CALLA  23A60h
1e760: a3cf                      MOVE   A14,-*SP,1
1e770: 09c8 0230                 MOVI   230h,A8
1e790: 930e                      MOVE   A8,*A14+,1
1e7a0: 1808                      MOVK   20h,A8
1e7b0: 930e                      MOVE   A8,*A14+,1
1e7c0: 0d5f 0000 0000            CALLA  0h
1e7f0: 4f0e                      MOVE   A8,B14
1e800: 07e8 1700 0003            MOVE   @31700h,A8
1e830: ca04                      JREQ   1E880h
1e840: 142c                      DEC    A12
1e850: 270c                      SLL    18h,A12
1e860: 290c                      SRA    18h,A12
1e870: cbdb                      JRNE   1E630h
1e880: 16fe                      SUBK   17h,B14
1e890: ca00 ff41                 JREQ   1DCC0h
1e8b0: 4d0c                      MOVE   A8,A12
1e8c0: cb11                      JRNE   1E9E0h
1e8d0: 09ca 003d                 MOVI   3Dh,A10
1e8f0: ad4d 0040                 MOVB   A10,*A13(40h)
1e910: 12ea                      ADDK   17h,A10
1e920: ad4d 0048                 MOVB   A10,*A13(48h)
1e940: 14aa                      SUBK   5h,A10
1e950: ad4d 0050                 MOVB   A10,*A13(50h)
1e970: 19aa                      MOVK   Dh,A10
1e980: ad4d 0058                 MOVB   A10,*A13(58h)
1e9a0: 1948                      MOVK   Ah,A8
1e9b0: ad0d 0060                 MOVB   A8,*A13(60h)
1e9d0: c010                      JR     1EAE0h
1e9e0: 09cc 003d                 MOVI   3Dh,A12
1ea00: ad8d 0040                 MOVB   A12,*A13(40h)
1ea20: 124c                      ADDK   12h,A12
1ea30: ad8d 0048                 MOVB   A12,*A13(48h)
1ea50: 106c                      ADDK   3h,A12
1ea60: ad8d 0050                 MOVB   A12,*A13(50h)
1ea80: 19aa                      MOVK   Dh,A10
1ea90: ad4d 0058                 MOVB   A10,*A13(58h)
1eab0: 194c                      MOVK   Ah,A12
1eac0: ad8d 0060                 MOVB   A12,*A13(60h)
1eae0: 192c                      MOVK   9h,A12
1eaf0: 838d                      MOVE   A12,*A13,1
1eb00: a3cf                      MOVE   A14,-*SP,1
1eb10: 93ae                      MOVE   A13,*A14+,1
1eb20: d3ae 0020                 MOVE   *A13(20h),*A14+,1
1eb40: 0d5f 0000 0000            CALLA  0h
1eb70: c09f                      JR     1E570h

_get_vac_error_data:
1eb80: 098f 002c                 MMTM   SP,A10,A12,A13
1eba0: 4dcd                      MOVE   A14,A13
1ebb0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1ebd0: 0550                      SETF   10h,0,0
1ebe0: 05a8 f920 0002            MOVE   @2F920h,A8,0
1ec10: 05aa f930 0002            MOVE   @2F930h,A10,0
1ec40: 4948                      CMP    A10,A8
1ec50: cb03                      JRNE   1EC90h
1ec60: 4508                      SUB    A8,A8
1ec70: 8d0c                      MOVB   A8,*A12
1ec80: c039                      JR     1F020h
1ec90: 246a                      SLL    3h,A10
1eca0: 0b2a 5000 0003            ADDI   35000h,A10
1ecd0: 8f4a                      MOVB   *A10,A10
1ece0: ca23                      JREQ   1EF20h
1ecf0: 05aa f930 0002            MOVE   @2F930h,A10,0
1ed20: 246a                      SLL    3h,A10
1ed30: 0b2a 5000 0003            ADDI   35000h,A10
1ed60: 0568                      SETF   8h,1,0
1ed70: d14c 0000                 MOVE   *A10(0h),*A12+,0
1ed90: 0550                      SETF   10h,0,0
1eda0: 05aa f930 0002            MOVE   @2F930h,A10,0
1edd0: 102a                      INC    A10
1ede0: 058a f930 0002            MOVE   A10,@2F930h,0
1ee10: 052a                      ZEXT   A10,0
1ee20: 0b4a efff                 CMPI   1000h,A10
1ee40: cb04                      JRNE   1EE90h
1ee50: 4508                      SUB    A8,A8
1ee60: 0588 f930 0002            MOVE   A8,@2F930h,0
1ee90: 05aa f930 0002            MOVE   @2F930h,A10,0
1eec0: 246a                      SLL    3h,A10
1eed0: 0b2a 5000 0003            ADDI   35000h,A10
1ef00: 8f4a                      MOVB   *A10,A10
1ef10: cbdd                      JRNE   1ECF0h
1ef20: 454a                      SUB    A10,A10
1ef30: 8d4c                      MOVB   A10,*A12
1ef40: 05ac f930 0002            MOVE   @2F930h,A12,0
1ef70: 102c                      INC    A12
1ef80: 058c f930 0002            MOVE   A12,@2F930h,0
1efb0: 052c                      ZEXT   A12,0
1efc0: 0b4c efff                 CMPI   1000h,A12
1efe0: cb03                      JRNE   1F020h
1eff0: 058a f930 0002            MOVE   A10,@2F930h,0
1f020: b7ee 0080                 MOVE   *SP(80h),A14,1
1f040: 09af 3400                 MMFM   SP,A10,A12,A13
1f060: 0962                      RETS   2h

_FaultVacuum:
1f070: a3cf                      MOVE   A14,-*SP,1
1f080: 09c8 0088                 MOVI   88h,A8
1f0a0: 930e                      MOVE   A8,*A14+,1
1f0b0: 09e8 40a0 0003            MOVI   340A0h,A8
1f0e0: 930e                      MOVE   A8,*A14+,1
1f0f0: 09e8 4155 4643            MOVI   46434155h,A8
1f120: 930e                      MOVE   A8,*A14+,1
1f130: 1908                      MOVK   8h,A8
1f140: 930e                      MOVE   A8,*A14+,1
1f150: 0d5f 0000 0000            CALLA  0h
1f180: 0d5f f500 0001            CALLA  1F500h
1f1b0: 4f0e                      MOVE   A8,B14
1f1c0: ca2a                      JREQ   1F470h
1f1d0: 1828                      MOVK   1h,A8
1f1e0: 0788 4060 0003            MOVE   A8,@34060h,1
1f210: 1ae8                      MOVK   17h,A8
1f220: 05e8 4080 0003            MOVB   A8,@34080h
1f250: a3cf                      MOVE   A14,-*SP,1
1f260: 09e8 4060 0003            MOVI   34060h,A8
1f290: 930e                      MOVE   A8,*A14+,1
1f2a0: 18e8                      MOVK   7h,A8
1f2b0: 930e                      MOVE   A8,*A14+,1
1f2c0: 0d5f 0000 0000            CALLA  0h
1f2f0: 1828                      MOVK   1h,A8
1f300: 0788 4060 0003            MOVE   A8,@34060h,1
1f330: 0548                      SETF   8h,0,0
1f340: 05a8 f900 0002            MOVE   @2F900h,A8,0
1f370: 0ba8 0020 0000            ORI    20h,A8
1f3a0: 05e8 4080 0003            MOVB   A8,@34080h
1f3d0: a3cf                      MOVE   A14,-*SP,1
1f3e0: 09e8 4060 0003            MOVI   34060h,A8
1f410: 930e                      MOVE   A8,*A14+,1
1f420: 18e8                      MOVK   7h,A8
1f430: 930e                      MOVE   A8,*A14+,1
1f440: 0d5f 0000 0000            CALLA  0h
1f470: a3cf                      MOVE   A14,-*SP,1
1f480: 4508                      SUB    A8,A8
1f490: 930e                      MOVE   A8,*A14+,1
1f4a0: 1908                      MOVK   8h,A8
1f4b0: 930e                      MOVE   A8,*A14+,1
1f4c0: 0d5f 0000 0000            CALLA  0h
1f4f0: c0c8                      JR     1F180h

_vacuum_fault_routine:
1f500: 098f 0a28                 MMTM   SP,A4,A6,A10,A12
1f520: 1844                      MOVK   2h,A4
1f530: 1908                      MOVK   8h,A8
1f540: 0788 0340 0003            MOVE   A8,@30340h,1
1f570: a3cf                      MOVE   A14,-*SP,1
1f580: 09e8 ee90 0002            MOVI   2EE90h,A8
1f5b0: 930e                      MOVE   A8,*A14+,1
1f5c0: 09e8 0360 0003            MOVI   30360h,A8
1f5f0: 930e                      MOVE   A8,*A14+,1
1f600: 0d5f 97c0 0002            CALLA  297C0h
1f630: a3cf                      MOVE   A14,-*SP,1
1f640: 09e8 0360 0003            MOVI   30360h,A8
1f670: 930e                      MOVE   A8,*A14+,1
1f680: 0d5f 98e0 0002            CALLA  298E0h
1f6b0: 1088                      ADDK   4h,A8
1f6c0: 0788 0320 0003            MOVE   A8,@30320h,1
1f6f0: 4c88                      MOVE   A4,A8
1f700: 1424                      DEC    A4
1f710: 2704                      SLL    18h,A4
1f720: 2904                      SRA    18h,A4
1f730: a3cf                      MOVE   A14,-*SP,1
1f740: 09e8 0320 0003            MOVI   30320h,A8
1f770: 930e                      MOVE   A8,*A14+,1
1f780: 1848                      MOVK   2h,A8
1f790: 930e                      MOVE   A8,*A14+,1
1f7a0: 0d5f 0000 0000            CALLA  0h
1f7d0: 4f0e                      MOVE   A8,B14
1f7e0: cb00 008b                 JRNE   200B0h
1f800: a3cf                      MOVE   A14,-*SP,1
1f810: 4508                      SUB    A8,A8
1f820: 930e                      MOVE   A8,*A14+,1
1f830: 09e8 3c20 0003            MOVI   33C20h,A8
1f860: 930e                      MOVE   A8,*A14+,1
1f870: 1908                      MOVK   8h,A8
1f880: 930e                      MOVE   A8,*A14+,1
1f890: 0d5f 0000 0000            CALLA  0h
1f8c0: 4f0e                      MOVE   A8,B14
1f8d0: cb78                      JRNE   20060h
1f8e0: 07e8 3c68 0003            MOVE   @33C68h,A8
1f910: 0b48 ffcf                 CMPI   30h,A8
1f930: cb6e                      JRNE   20020h
1f940: 07e8 3c70 0003            MOVE   @33C70h,A8
1f970: 0b48 ffcf                 CMPI   30h,A8
1f990: cb68                      JRNE   20020h
1f9a0: 09ea 3c60 0003            MOVI   33C60h,A10
1f9d0: 44c6                      SUB    A6,A6
1f9e0: c043                      JR     1FE20h
1f9f0: a3cf                      MOVE   A14,-*SP,1
1fa00: 110a                      ADDK   8h,A10
1fa10: 934e                      MOVE   A10,*A14+,1
1fa20: 0d5f 0090 0001            CALLA  10090h
1fa50: 4d0c                      MOVE   A8,A12
1fa60: 4cc8                      MOVE   A6,A8
1fa70: ca30                      JREQ   1FD80h
1fa80: 1428                      DEC    A8
1fa90: ca28                      JREQ   1FD20h
1faa0: 1428                      DEC    A8
1fab0: ca20                      JREQ   1FCC0h
1fac0: 1428                      DEC    A8
1fad0: ca18                      JREQ   1FC60h
1fae0: 1428                      DEC    A8
1faf0: ca10                      JREQ   1FC00h
1fb00: 1428                      DEC    A8
1fb10: ca08                      JREQ   1FBA0h
1fb20: 0d88 0029                 DSJ    A8,1FDD0h
1fb40: a3cf                      MOVE   A14,-*SP,1
1fb50: 938e                      MOVE   A12,*A14+,1
1fb60: 0d5f 2720 0002            CALLA  22720h
1fb90: c023                      JR     1FDD0h
1fba0: a3cf                      MOVE   A14,-*SP,1
1fbb0: 938e                      MOVE   A12,*A14+,1
1fbc0: 0d5f 2420 0002            CALLA  22420h
1fbf0: c01d                      JR     1FDD0h
1fc00: a3cf                      MOVE   A14,-*SP,1
1fc10: 938e                      MOVE   A12,*A14+,1
1fc20: 0d5f 1eb0 0002            CALLA  21EB0h
1fc50: c017                      JR     1FDD0h
1fc60: a3cf                      MOVE   A14,-*SP,1
1fc70: 938e                      MOVE   A12,*A14+,1
1fc80: 0d5f 1bb0 0002            CALLA  21BB0h
1fcb0: c011                      JR     1FDD0h
1fcc0: a3cf                      MOVE   A14,-*SP,1
1fcd0: 938e                      MOVE   A12,*A14+,1
1fce0: 0d5f 1180 0002            CALLA  21180h
1fd10: c00b                      JR     1FDD0h
1fd20: a3cf                      MOVE   A14,-*SP,1
1fd30: 938e                      MOVE   A12,*A14+,1
1fd40: 0d5f 0c10 0002            CALLA  20C10h
1fd70: c005                      JR     1FDD0h
1fd80: a3cf                      MOVE   A14,-*SP,1
1fd90: 938e                      MOVE   A12,*A14+,1
1fda0: 0d5f 01e0 0002            CALLA  201E0h
1fdd0: 1026                      INC    A6
1fde0: 2606                      SLL    10h,A6
1fdf0: 2a06                      SRA    10h,A6
1fe00: 3506                      CMPK   8h,A6
1fe10: c51b                      JRGE   1FFD0h
1fe20: a3cf                      MOVE   A14,-*SP,1
1fe30: 180c                      MOVK   20h,A12
1fe40: 938e                      MOVE   A12,*A14+,1
1fe50: 934e                      MOVE   A10,*A14+,1
1fe60: 0d5f 9660 0002            CALLA  29660h
1fe90: 4d0a                      MOVE   A8,A10
1fea0: cbb4                      JRNE   1F9F0h
1feb0: 196a                      MOVK   Bh,A10
1fec0: 05ea f900 0002            MOVB   A10,@2F900h
1fef0: a3cf                      MOVE   A14,-*SP,1
1ff00: 09e6 3c60 0003            MOVI   33C60h,A6
1ff30: 92ce                      MOVE   A6,*A14+,1
1ff40: 0d5f 3170 0001            CALLA  13170h
1ff70: 0548                      SETF   8h,0,0
1ff80: 05a8 f900 0002            MOVE   @2F900h,A8,0
1ffb0: cb06                      JRNE   20020h
1ffc0: c01d                      JR     201A0h
1ffd0: 0548                      SETF   8h,0,0
1ffe0: 05ac f900 0002            MOVE   @2F900h,A12,0
20010: ca18                      JREQ   201A0h
20020: 0d5f 2a20 0002            CALLA  22A20h
20050: c009                      JR     200F0h
20060: 192c                      MOVK   9h,A12
20070: 05ec f900 0002            MOVB   A12,@2F900h
200a0: c004                      JR     200F0h
200b0: 190c                      MOVK   8h,A12
200c0: 05ec f900 0002            MOVB   A12,@2F900h
200f0: 4c8c                      MOVE   A4,A12
20100: 1424                      DEC    A4
20110: 2704                      SLL    18h,A4
20120: 2904                      SRA    18h,A4
20130: 4d86                      MOVE   A12,A6
20140: cb00 ff5d                 JRNE   1F730h
20160: 1828                      MOVK   1h,A8
20170: 09af 1450                 MMFM   SP,A4,A6,A10,A12
20190: 0960                      RETS   
201a0: 4508                      SUB    A8,A8
201b0: 09af 1450                 MMFM   SP,A4,A6,A10,A12
201d0: 0960                      RETS   

_check_inhibits:
201e0: 098f 000c                 MMTM   SP,A12,A13
20200: 4dcd                      MOVE   A14,A13
20210: afa8 ffe0                 MOVB   *A13(FFE0h),A8
20230: 4f0e                      MOVE   A8,B14
20240: 1ffe                      BTST   0h,B14
20250: cb14                      JRNE   203A0h
20260: 0548                      SETF   8h,0,0
20270: 05a8 f480 0002            MOVE   @2F480h,A8,0
202a0: ca21                      JREQ   204C0h
202b0: 4508                      SUB    A8,A8
202c0: 05e8 f480 0002            MOVB   A8,@2F480h
202f0: 1888                      MOVK   4h,A8
20300: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20330: 5588                      OR     A12,A8
20340: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
20370: 1fde                      BTST   1h,B14
20380: cb28                      JRNE   20610h
20390: c014                      JR     204E0h
203a0: 0548                      SETF   8h,0,0
203b0: 05ac f480 0002            MOVE   @2F480h,A12,0
203e0: 142c                      DEC    A12
203f0: ca0c                      JREQ   204C0h
20400: 182c                      MOVK   1h,A12
20410: 05ec f480 0002            MOVB   A12,@2F480h
20440: 1888                      MOVK   4h,A8
20450: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20480: 5588                      OR     A12,A8
20490: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
204c0: 1fde                      BTST   1h,B14
204d0: cb13                      JRNE   20610h
204e0: 05ac f498 0002            MOVE   @2F498h,A12,0
20510: ca20                      JREQ   20720h
20520: 4508                      SUB    A8,A8
20530: 05e8 f498 0002            MOVB   A8,@2F498h
20560: 188c                      MOVK   4h,A12
20570: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
205a0: 550c                      OR     A8,A12
205b0: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
205e0: 1fbe                      BTST   2h,B14
205f0: cb27                      JRNE   20870h
20600: c013                      JR     20740h
20610: 05ac f498 0002            MOVE   @2F498h,A12,0
20640: 142c                      DEC    A12
20650: ca0c                      JREQ   20720h
20660: 182c                      MOVK   1h,A12
20670: 05ec f498 0002            MOVB   A12,@2F498h
206a0: 1888                      MOVK   4h,A8
206b0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
206e0: 5588                      OR     A12,A8
206f0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
20720: 1fbe                      BTST   2h,B14
20730: cb13                      JRNE   20870h
20740: 05ac f488 0002            MOVE   @2F488h,A12,0
20770: ca20                      JREQ   20980h
20780: 4508                      SUB    A8,A8
20790: 05e8 f488 0002            MOVB   A8,@2F488h
207c0: 188c                      MOVK   4h,A12
207d0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
20800: 550c                      OR     A8,A12
20810: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
20840: 1f9e                      BTST   3h,B14
20850: cb25                      JRNE   20AB0h
20860: c013                      JR     209A0h
20870: 05ac f488 0002            MOVE   @2F488h,A12,0
208a0: 142c                      DEC    A12
208b0: ca0c                      JREQ   20980h
208c0: 182c                      MOVK   1h,A12
208d0: 05ec f488 0002            MOVB   A12,@2F488h
20900: 1888                      MOVK   4h,A8
20910: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20940: 5588                      OR     A12,A8
20950: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
20980: 1f9e                      BTST   3h,B14
20990: cb11                      JRNE   20AB0h
209a0: 05ac f490 0002            MOVE   @2F490h,A12,0
209d0: ca1e                      JREQ   20BC0h
209e0: 4508                      SUB    A8,A8
209f0: 05e8 f490 0002            MOVB   A8,@2F490h
20a20: 188c                      MOVK   4h,A12
20a30: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
20a60: 550c                      OR     A8,A12
20a70: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
20aa0: c011                      JR     20BC0h
20ab0: 05ac f490 0002            MOVE   @2F490h,A12,0
20ae0: 142c                      DEC    A12
20af0: ca0c                      JREQ   20BC0h
20b00: 182c                      MOVK   1h,A12
20b10: 05ec f490 0002            MOVB   A12,@2F490h
20b40: 1888                      MOVK   4h,A8
20b50: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20b80: 5588                      OR     A12,A8
20b90: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
20bc0: b7ee 0060                 MOVE   *SP(60h),A14,1
20be0: 09af 3000                 MMFM   SP,A12,A13
20c00: 0962                      RETS   2h

_check_edx_errors:
20c10: 098f 000c                 MMTM   SP,A12,A13
20c30: 4dcd                      MOVE   A14,A13
20c40: afa8 ffe0                 MOVB   *A13(FFE0h),A8
20c60: 4f0e                      MOVE   A8,B14
20c70: 1ffe                      BTST   0h,B14
20c80: cb14                      JRNE   20DD0h
20c90: 0548                      SETF   8h,0,0
20ca0: 05a8 f460 0002            MOVE   @2F460h,A8,0
20cd0: ca21                      JREQ   20EF0h
20ce0: 4508                      SUB    A8,A8
20cf0: 05e8 f460 0002            MOVB   A8,@2F460h
20d20: 1848                      MOVK   2h,A8
20d30: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20d60: 5588                      OR     A12,A8
20d70: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
20da0: 1fde                      BTST   1h,B14
20db0: cb27                      JRNE   21030h
20dc0: c014                      JR     20F10h
20dd0: 0548                      SETF   8h,0,0
20de0: 05ac f460 0002            MOVE   @2F460h,A12,0
20e10: 142c                      DEC    A12
20e20: ca0c                      JREQ   20EF0h
20e30: 182c                      MOVK   1h,A12
20e40: 05ec f460 0002            MOVB   A12,@2F460h
20e70: 1848                      MOVK   2h,A8
20e80: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20eb0: 5588                      OR     A12,A8
20ec0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
20ef0: 1fde                      BTST   1h,B14
20f00: cb12                      JRNE   21030h
20f10: 05ac f428 0002            MOVE   @2F428h,A12,0
20f40: 142c                      DEC    A12
20f50: ca1d                      JREQ   21130h
20f60: 182c                      MOVK   1h,A12
20f70: 05ec f428 0002            MOVB   A12,@2F428h
20fa0: 1848                      MOVK   2h,A8
20fb0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
20fe0: 5588                      OR     A12,A8
20ff0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
21020: c010                      JR     21130h
21030: 05ac f428 0002            MOVE   @2F428h,A12,0
21060: ca0c                      JREQ   21130h
21070: 4508                      SUB    A8,A8
21080: 05e8 f428 0002            MOVB   A8,@2F428h
210b0: 184c                      MOVK   2h,A12
210c0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
210f0: 550c                      OR     A8,A12
21100: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
21130: b7ee 0060                 MOVE   *SP(60h),A14,1
21150: 09af 3000                 MMFM   SP,A12,A13
21170: 0962                      RETS   2h

_check_system_errors:
21180: 098f 000c                 MMTM   SP,A12,A13
211a0: 4dcd                      MOVE   A14,A13
211b0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
211d0: 4f0e                      MOVE   A8,B14
211e0: 1ffe                      BTST   0h,B14
211f0: cb14                      JRNE   21340h
21200: 0548                      SETF   8h,0,0
21210: 05a8 f438 0002            MOVE   @2F438h,A8,0
21240: ca21                      JREQ   21460h
21250: 4508                      SUB    A8,A8
21260: 05e8 f438 0002            MOVB   A8,@2F438h
21290: 1848                      MOVK   2h,A8
212a0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
212d0: 5588                      OR     A12,A8
212e0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
21310: 1fde                      BTST   1h,B14
21320: cb28                      JRNE   215B0h
21330: c014                      JR     21480h
21340: 0548                      SETF   8h,0,0
21350: 05ac f438 0002            MOVE   @2F438h,A12,0
21380: 142c                      DEC    A12
21390: ca0c                      JREQ   21460h
213a0: 182c                      MOVK   1h,A12
213b0: 05ec f438 0002            MOVB   A12,@2F438h
213e0: 1848                      MOVK   2h,A8
213f0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
21420: 5588                      OR     A12,A8
21430: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
21460: 1fde                      BTST   1h,B14
21470: cb13                      JRNE   215B0h
21480: 05ac f430 0002            MOVE   @2F430h,A12,0
214b0: ca20                      JREQ   216C0h
214c0: 4508                      SUB    A8,A8
214d0: 05e8 f430 0002            MOVB   A8,@2F430h
21500: 184c                      MOVK   2h,A12
21510: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
21540: 550c                      OR     A8,A12
21550: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
21580: 1fbe                      BTST   2h,B14
21590: cb28                      JRNE   21820h
215a0: c013                      JR     216E0h
215b0: 05ac f430 0002            MOVE   @2F430h,A12,0
215e0: 142c                      DEC    A12
215f0: ca0c                      JREQ   216C0h
21600: 182c                      MOVK   1h,A12
21610: 05ec f430 0002            MOVB   A12,@2F430h
21640: 1848                      MOVK   2h,A8
21650: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
21680: 5588                      OR     A12,A8
21690: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
216c0: 1fbe                      BTST   2h,B14
216d0: cb14                      JRNE   21820h
216e0: 05ac f440 0002            MOVE   @2F440h,A12,0
21710: 142c                      DEC    A12
21720: ca1f                      JREQ   21920h
21730: 182c                      MOVK   1h,A12
21740: 05ec f440 0002            MOVB   A12,@2F440h
21770: 1848                      MOVK   2h,A8
21780: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
217b0: 5588                      OR     A12,A8
217c0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
217f0: 1f9e                      BTST   3h,B14
21800: cb24                      JRNE   21A50h
21810: c012                      JR     21940h
21820: 05ac f440 0002            MOVE   @2F440h,A12,0
21850: ca0c                      JREQ   21920h
21860: 4508                      SUB    A8,A8
21870: 05e8 f440 0002            MOVB   A8,@2F440h
218a0: 184c                      MOVK   2h,A12
218b0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
218e0: 550c                      OR     A8,A12
218f0: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
21920: 1f9e                      BTST   3h,B14
21930: cb11                      JRNE   21A50h
21940: 05ac f478 0002            MOVE   @2F478h,A12,0
21970: ca1e                      JREQ   21B60h
21980: 4508                      SUB    A8,A8
21990: 05e8 f478 0002            MOVB   A8,@2F478h
219c0: 184c                      MOVK   2h,A12
219d0: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
21a00: 550c                      OR     A8,A12
21a10: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
21a40: c011                      JR     21B60h
21a50: 05ac f478 0002            MOVE   @2F478h,A12,0
21a80: 142c                      DEC    A12
21a90: ca0c                      JREQ   21B60h
21aa0: 182c                      MOVK   1h,A12
21ab0: 05ec f478 0002            MOVB   A12,@2F478h
21ae0: 1848                      MOVK   2h,A8
21af0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
21b20: 5588                      OR     A12,A8
21b30: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
21b60: b7ee 0060                 MOVE   *SP(60h),A14,1
21b80: 09af 3000                 MMFM   SP,A12,A13
21ba0: 0962                      RETS   2h

_check_gun_errors:
21bb0: 098f 000c                 MMTM   SP,A12,A13
21bd0: 4dcd                      MOVE   A14,A13
21be0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
21c00: 1fc8                      BTST   1h,A8
21c10: cb12                      JRNE   21D40h
21c20: 0548                      SETF   8h,0,0
21c30: 05a8 f450 0002            MOVE   @2F450h,A8,0
21c60: ca1f                      JREQ   21E60h
21c70: 4508                      SUB    A8,A8
21c80: 05e8 f450 0002            MOVB   A8,@2F450h
21cb0: 1848                      MOVK   2h,A8
21cc0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
21cf0: 5588                      OR     A12,A8
21d00: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
21d30: c012                      JR     21E60h
21d40: 0548                      SETF   8h,0,0
21d50: 05ac f450 0002            MOVE   @2F450h,A12,0
21d80: 142c                      DEC    A12
21d90: ca0c                      JREQ   21E60h
21da0: 182c                      MOVK   1h,A12
21db0: 05ec f450 0002            MOVB   A12,@2F450h
21de0: 1848                      MOVK   2h,A8
21df0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
21e20: 5588                      OR     A12,A8
21e30: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
21e60: b7ee 0060                 MOVE   *SP(60h),A14,1
21e80: 09af 3000                 MMFM   SP,A12,A13
21ea0: 0962                      RETS   2h

_check_column_errors:
21eb0: 098f 000c                 MMTM   SP,A12,A13
21ed0: 4dcd                      MOVE   A14,A13
21ee0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
21f00: 4f0e                      MOVE   A8,B14
21f10: 1fde                      BTST   1h,B14
21f20: cb14                      JRNE   22070h
21f30: 0548                      SETF   8h,0,0
21f40: 05a8 f458 0002            MOVE   @2F458h,A8,0
21f70: ca21                      JREQ   22190h
21f80: 4508                      SUB    A8,A8
21f90: 05e8 f458 0002            MOVB   A8,@2F458h
21fc0: 1848                      MOVK   2h,A8
21fd0: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22000: 5588                      OR     A12,A8
22010: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
22040: 1f9e                      BTST   3h,B14
22050: cb26                      JRNE   222C0h
22060: c014                      JR     221B0h
22070: 0548                      SETF   8h,0,0
22080: 05ac f458 0002            MOVE   @2F458h,A12,0
220b0: 142c                      DEC    A12
220c0: ca0c                      JREQ   22190h
220d0: 182c                      MOVK   1h,A12
220e0: 05ec f458 0002            MOVB   A12,@2F458h
22110: 1848                      MOVK   2h,A8
22120: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22150: 5588                      OR     A12,A8
22160: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
22190: 1f9e                      BTST   3h,B14
221a0: cb11                      JRNE   222C0h
221b0: 05ac f420 0002            MOVE   @2F420h,A12,0
221e0: ca1e                      JREQ   223D0h
221f0: 4508                      SUB    A8,A8
22200: 05e8 f420 0002            MOVB   A8,@2F420h
22230: 184c                      MOVK   2h,A12
22240: 07a8 f4a0 0002            MOVE   @2F4A0h,A8,1
22270: 550c                      OR     A8,A12
22280: 078c f4a0 0002            MOVE   A12,@2F4A0h,1
222b0: c011                      JR     223D0h
222c0: 05ac f420 0002            MOVE   @2F420h,A12,0
222f0: 142c                      DEC    A12
22300: ca0c                      JREQ   223D0h
22310: 182c                      MOVK   1h,A12
22320: 05ec f420 0002            MOVB   A12,@2F420h
22350: 1848                      MOVK   2h,A8
22360: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22390: 5588                      OR     A12,A8
223a0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
223d0: b7ee 0060                 MOVE   *SP(60h),A14,1
223f0: 09af 3000                 MMFM   SP,A12,A13
22410: 0962                      RETS   2h

_check_wdx_errors:
22420: 098f 000c                 MMTM   SP,A12,A13
22440: 4dcd                      MOVE   A14,A13
22450: afa8 ffe0                 MOVB   *A13(FFE0h),A8
22470: 1fc8                      BTST   1h,A8
22480: cb12                      JRNE   225B0h
22490: 0548                      SETF   8h,0,0
224a0: 05a8 f468 0002            MOVE   @2F468h,A8,0
224d0: ca1f                      JREQ   226D0h
224e0: 4508                      SUB    A8,A8
224f0: 05e8 f468 0002            MOVB   A8,@2F468h
22520: 1848                      MOVK   2h,A8
22530: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22560: 5588                      OR     A12,A8
22570: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
225a0: c012                      JR     226D0h
225b0: 0548                      SETF   8h,0,0
225c0: 05ac f468 0002            MOVE   @2F468h,A12,0
225f0: 142c                      DEC    A12
22600: ca0c                      JREQ   226D0h
22610: 182c                      MOVK   1h,A12
22620: 05ec f468 0002            MOVB   A12,@2F468h
22650: 1848                      MOVK   2h,A8
22660: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22690: 5588                      OR     A12,A8
226a0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
226d0: b7ee 0060                 MOVE   *SP(60h),A14,1
226f0: 09af 3000                 MMFM   SP,A12,A13
22710: 0962                      RETS   2h

_check_airlock_errors:
22720: 098f 000c                 MMTM   SP,A12,A13
22740: 4dcd                      MOVE   A14,A13
22750: afa8 ffe0                 MOVB   *A13(FFE0h),A8
22770: 1fc8                      BTST   1h,A8
22780: cb12                      JRNE   228B0h
22790: 0548                      SETF   8h,0,0
227a0: 05a8 f470 0002            MOVE   @2F470h,A8,0
227d0: ca1f                      JREQ   229D0h
227e0: 4508                      SUB    A8,A8
227f0: 05e8 f470 0002            MOVB   A8,@2F470h
22820: 1848                      MOVK   2h,A8
22830: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22860: 5588                      OR     A12,A8
22870: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
228a0: c012                      JR     229D0h
228b0: 0548                      SETF   8h,0,0
228c0: 05ac f470 0002            MOVE   @2F470h,A12,0
228f0: 142c                      DEC    A12
22900: ca0c                      JREQ   229D0h
22910: 182c                      MOVK   1h,A12
22920: 05ec f470 0002            MOVB   A12,@2F470h
22950: 1848                      MOVK   2h,A8
22960: 07ac f4a0 0002            MOVE   @2F4A0h,A12,1
22990: 5588                      OR     A12,A8
229a0: 0788 f4a0 0002            MOVE   A8,@2F4A0h,1
229d0: b7ee 0060                 MOVE   *SP(60h),A14,1
229f0: 09af 3000                 MMFM   SP,A12,A13
22a10: 0962                      RETS   2h

_fault_error_check:
22a20: a3cf                      MOVE   A14,-*SP,1
22a30: 09e8 3c60 0003            MOVI   33C60h,A8
22a60: 930e                      MOVE   A8,*A14+,1
22a70: 0d5f 3170 0001            CALLA  13170h
22aa0: 07e8 3c68 0003            MOVE   @33C68h,A8
22ad0: 0b48 ffab                 CMPI   54h,A8
22af0: cb0a                      JRNE   22BA0h
22b00: 07e8 3c70 0003            MOVE   @33C70h,A8
22b30: 0b48 ffb0                 CMPI   4Fh,A8
22b50: cb04                      JRNE   22BA0h
22b60: 1828                      MOVK   1h,A8
22b70: 05e8 f900 0002            MOVB   A8,@2F900h
22ba0: 07e8 3c68 0003            MOVE   @33C68h,A8
22bd0: 0b48 ffb0                 CMPI   4Fh,A8
22bf0: cb0a                      JRNE   22CA0h
22c00: 07e8 3c70 0003            MOVE   @33C70h,A8
22c30: 0b48 ffad                 CMPI   52h,A8
22c50: cb04                      JRNE   22CA0h
22c60: 1848                      MOVK   2h,A8
22c70: 05e8 f900 0002            MOVB   A8,@2F900h
22ca0: 07e8 3c68 0003            MOVE   @33C68h,A8
22cd0: 0b48 ffcf                 CMPI   30h,A8
22cf0: cb3a                      JRNE   230A0h
22d00: 07e8 3c70 0003            MOVE   @33C70h,A8
22d30: 0b48 ffce                 CMPI   31h,A8
22d50: cb04                      JRNE   22DA0h
22d60: 1868                      MOVK   3h,A8
22d70: 05e8 f900 0002            MOVB   A8,@2F900h
22da0: 07e8 3c68 0003            MOVE   @33C68h,A8
22dd0: 0b48 ffcf                 CMPI   30h,A8
22df0: cb2a                      JRNE   230A0h
22e00: 07e8 3c70 0003            MOVE   @33C70h,A8
22e30: 0b48 ffcd                 CMPI   32h,A8
22e50: cb04                      JRNE   22EA0h
22e60: 1888                      MOVK   4h,A8
22e70: 05e8 f900 0002            MOVB   A8,@2F900h
22ea0: 07e8 3c68 0003            MOVE   @33C68h,A8
22ed0: 0b48 ffcf                 CMPI   30h,A8
22ef0: cb1a                      JRNE   230A0h
22f00: 07e8 3c70 0003            MOVE   @33C70h,A8
22f30: 0b48 ffcb                 CMPI   34h,A8
22f50: cb04                      JRNE   22FA0h
22f60: 18a8                      MOVK   5h,A8
22f70: 05e8 f900 0002            MOVB   A8,@2F900h
22fa0: 07e8 3c68 0003            MOVE   @33C68h,A8
22fd0: 0b48 ffcf                 CMPI   30h,A8
22ff0: cb0a                      JRNE   230A0h
23000: 07e8 3c70 0003            MOVE   @33C70h,A8
23030: 0b48 ffc7                 CMPI   38h,A8
23050: cb04                      JRNE   230A0h
23060: 18c8                      MOVK   6h,A8
23070: 05e8 f900 0002            MOVB   A8,@2F900h
230a0: 18e8                      MOVK   7h,A8
230b0: 05e8 f900 0002            MOVB   A8,@2F900h
230e0: 0960                      RETS   

_InitStgVacUART:
230f0: 098f c000                 MMTM   SP,A0,A1
23110: 09e0 0000 6038            MOVI   60380000h,A0
23140: 09c1 0080                 MOVI   80h,A1
23160: ac20 0060                 MOVB   A1,*A0(60h)
23180: 0080                      MWAIT  
23190: 09e1 000c 0000            MOVI   Ch,A1
231c0: ac20 0000                 MOVB   A1,*A0(0h)
231e0: 0080                      MWAIT  
231f0: 2f01                      SRL    8h,A1
23200: ac20 0020                 MOVB   A1,*A0(20h)
23220: 0080                      MWAIT  
23230: 09c1 0003                 MOVI   3h,A1
23250: ac20 0060                 MOVB   A1,*A0(60h)
23270: 0080                      MWAIT  
23280: 09e1 0005 0000            MOVI   5h,A1
232b0: ac20 0020                 MOVB   A1,*A0(20h)
232d0: 0080                      MWAIT  
232e0: 09e1 000a 0000            MOVI   Ah,A1
23310: ac20 0080                 MOVB   A1,*A0(80h)
23330: 0080                      MWAIT  
23340: 09af 0003                 MMFM   SP,A0,A1
23360: 0960                      RETS   

_SVISR:
23370: 098f f082                 MMTM   SP,A0-A3,A8,A14
23390: 09e0 0000 6038            MOVI   60380000h,A0
233c0: ae01 0040                 MOVB   *A0(40h),A1
233e0: 2fe1                      SRL    1h,A1
233f0: c83f                      JRC    237F0h
23400: 3461                      CMPK   3h,A1
23410: cb0d                      JRNE   234F0h
23420: ae02 00a0                 MOVB   *A0(A0h),A2
23440: 0b82 ffe1 ffff            ANDI   1Eh,A2
23470: ca07                      JREQ   234F0h
23480: ae02 0000                 MOVB   *A0(0h),A2
234a0: 1822                      MOVK   1h,A2
234b0: 05e2 1700 0003            MOVB   A2,@31700h
234e0: c030                      JR     237F0h
234f0: 3441                      CMPK   2h,A1
23500: cb1a                      JRNE   236B0h
23510: ae02 0000                 MOVB   *A0(0h),A2
23530: 0d3f 003b                 CALLR  23900h
23550: 3542                      CMPK   Ah,A2
23560: cb02                      JRNE   23590h
23570: 0d3f 0045                 CALLR  239E0h
23590: ae02 00a0                 MOVB   *A0(A0h),A2
235b0: 0b82 ffe1 ffff            ANDI   1Eh,A2
235e0: ca07                      JREQ   23660h
235f0: ae02 0000                 MOVB   *A0(0h),A2
23610: 1822                      MOVK   1h,A2
23620: 05e2 1700 0003            MOVB   A2,@31700h
23650: c019                      JR     237F0h
23660: 0b82 fffe ffff            ANDI   1h,A2
23690: cbe7                      JRNE   23510h
236a0: c014                      JR     237F0h
236b0: 3421                      CMPK   1h,A1
236c0: cb10                      JRNE   237D0h
236d0: 0d3f 0013                 CALLR  23820h
236f0: b040 0000                 MOVE   A2,*A0(0h),0
23710: 0080                      MWAIT  
23720: 3542                      CMPK   Ah,A2
23730: cb09                      JRNE   237D0h
23740: ae02 0020                 MOVB   *A0(20h),A2
23760: 0b82 0002 0000            ANDI   FFFFFFFDh,A2
23790: ac40 0020                 MOVB   A2,*A0(20h)
237b0: 0080                      MWAIT  
237c0: c002                      JR     237F0h
237d0: ae02 00c0                 MOVB   *A0(C0h),A2
237f0: 09af 410f                 MMFM   SP,A0-A3,A8,A14
23810: 0960                      RETS   
23820: 098f 1000                 MMTM   SP,A3
23840: 07a3 d000 0003            MOVE   @3D000h,A3,1
23870: 0548                      SETF   8h,0,0
23880: 9462                      MOVE   *A3+,A2,0
23890: 0550                      SETF   10h,0,0
238a0: 0783 d000 0003            MOVE   A3,@3D000h,1
238d0: 09af 0008                 MMFM   SP,A3
238f0: 0960                      RETS   
23900: 098f 1000                 MMTM   SP,A3
23920: 07a3 16e0 0003            MOVE   @316E0h,A3,1
23950: 0548                      SETF   8h,0,0
23960: 9043                      MOVE   A2,*A3+,0
23970: 0550                      SETF   10h,0,0
23980: 0783 16e0 0003            MOVE   A3,@316E0h,1
239b0: 09af 0008                 MMFM   SP,A3
239d0: 0960                      RETS   
239e0: 098f c000                 MMTM   SP,A0,A1
23a00: 1801                      MOVK   20h,A1
23a10: 1900                      MOVK   8h,A0
23a20: 0910                      TRAP   10h
23a30: 09af 0003                 MMFM   SP,A0,A1
23a50: 0960                      RETS   

_TxEnable:
23a60: 098f c000                 MMTM   SP,A0,A1
23a80: 09e1 0000 6038            MOVI   60380000h,A1
23ab0: ae20 0020                 MOVB   *A1(20h),A0
23ad0: 0ba0 0002 0000            ORI    2h,A0
23b00: ac01 0020                 MOVB   A0,*A1(20h)
23b20: 09af 0003                 MMFM   SP,A0,A1
23b40: 0960                      RETS   
23b50: 098f c000                 MMTM   SP,A0,A1
23b70: 09e1 0000 6038            MOVI   60380000h,A1
23ba0: ae20 0020                 MOVB   *A1(20h),A0
23bc0: 0b80 0002 0000            ANDI   FFFFFFFDh,A0
23bf0: ac01 0020                 MOVB   A0,*A1(20h)
23c10: 09af 0003                 MMFM   SP,A0,A1
23c30: 0960                      RETS   

_StopStgVacUART:
23c40: 098f c000                 MMTM   SP,A0,A1
23c60: 09e0 0000 6038            MOVI   60380000h,A0
23c90: 09e1 0000 0000            MOVI   0h,A1
23cc0: ac20 0020                 MOVB   A1,*A0(20h)
23ce0: 0080                      MWAIT  
23cf0: 09e1 0002 0000            MOVI   2h,A1
23d20: ac20 0080                 MOVB   A1,*A0(80h)
23d40: 0080                      MWAIT  
23d50: 09af 0003                 MMFM   SP,A0,A1
23d70: 0960                      RETS   

FD$DTOF:
23d80: 07a8 0000 0000            MOVE   @0h,A8,1
23db0: ca0e                      JREQ   23EA0h
23dc0: 4dc8                      MOVE   A14,A8
23dd0: 0be8 ffbf                 SUBI   40h,A8
23df0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
23e20: 0bee ffbf                 SUBI   40h,A14
23e40: d83f 0080                 CEXEC  1,00101F,0
23e60: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
23e90: 0960                      RETS   
23ea0: 098f 9000                 MMTM   SP,A0,A3
23ec0: a7c3                      MOVE   -*A14,A3,1
23ed0: 2d83                      SRL    14h,A3
23ee0: a7c0                      MOVE   -*A14,A0,1
23ef0: 4c08                      MOVE   A0,A8
23f00: 2588                      SLL    Ch,A8
23f10: 5503                      OR     A8,A3
23f20: 2420                      SLL    1h,A0
23f30: 4708                      SUBB   A8,A8
23f40: 27e8                      SLL    1Fh,A8
23f50: 2d60                      SRL    15h,A0
23f60: ca18                      JREQ   240F0h
23f70: 0b40 f800                 CMPI   7FFh,A0
23f90: ca20                      JREQ   241A0h
23fa0: 2ee3                      SRL    9h,A3
23fb0: c908                      JRNC   24040h
23fc0: 1023                      INC    A3
23fd0: 1d03                      BTST   17h,A3
23fe0: ca05                      JREQ   24040h
23ff0: 0b83 0000 ff80            ANDI   7FFFFFh,A3
24020: 2fe3                      SRL    1h,A3
24030: 1020                      INC    A0
24040: 0be0 fc7f                 SUBI   380h,A0
24060: c702                      JRGT   24090h
24070: 5600                      CLR    A0
24080: c006                      JR     240F0h
24090: 0b40 ff00                 CMPI   FFh,A0
240b0: c507                      JRGE   24130h
240c0: 26e0                      SLL    17h,A0
240d0: 5460                      OR     A3,A0
240e0: 5500                      OR     A8,A0
240f0: 920e                      MOVE   A0,*A14+,1
24100: 09af 0009                 MMFM   SP,A0,A3
24120: 0960                      RETS   
24130: 4d03                      MOVE   A8,A3
24140: 1840                      MOVK   2h,A0
24150: a3cf                      MOVE   A14,-*SP,1
24160: 920e                      MOVE   A0,*A14+,1
24170: 0d5f 7f10 0002            CALLA  27F10h
241a0: 0ba3 0000 7f80            ORI    7F800000h,A3
241d0: 926e                      MOVE   A3,*A14+,1
241e0: 09af 0009                 MMFM   SP,A0,A3
24200: 0960                      RETS   

FD$DTOI:
24210: 07a8 0000 0000            MOVE   @0h,A8,1
24240: ca1a                      JREQ   243F0h
24250: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
24280: a30f                      MOVE   A8,-*SP,1
24290: 09c8 0029                 MOVI   29h,A8
242b0: 0628 4c00 000d            CMOVGC A8,000D4C,0
242e0: 4dc8                      MOVE   A14,A8
242f0: 0be8 ffbf                 SUBI   40h,A8
24310: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
24340: 0bee ffbf                 SUBI   40h,A14
24360: d83f 00a0                 CEXEC  1,00141F,0
24380: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
243b0: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
243e0: 0960                      RETS   
243f0: 098f 9000                 MMTM   SP,A0,A3
24410: a7c8                      MOVE   -*A14,A8,1
24420: 2d88                      SRL    14h,A8
24430: a7c0                      MOVE   -*A14,A0,1
24440: 4c03                      MOVE   A0,A3
24450: 2583                      SLL    Ch,A3
24460: 5468                      OR     A3,A8
24470: 2420                      SLL    1h,A0
24480: 4663                      SUBB   A3,A3
24490: 2d60                      SRL    15h,A0
244a0: 2fc8                      SRL    2h,A8
244b0: 0ba8 0000 4000            ORI    40000000h,A8
244e0: 1020                      INC    A0
244f0: 0be0 fc00                 SUBI   3FFh,A0
24510: c60a                      JRLE   245C0h
24520: 17e0                      SUBK   1Fh,A0
24530: c70c                      JRGT   24600h
24540: 6608                      SRL    A0,A8
24550: 4c63                      MOVE   A3,A3
24560: ca01                      JREQ   24580h
24570: 03a8                      NEG    A8
24580: 09af 0009                 MMFM   SP,A0,A3
245a0: 4d08                      MOVE   A8,A8
245b0: 0960                      RETS   
245c0: 09af 0009                 MMFM   SP,A0,A3
245e0: 4508                      SUB    A8,A8
245f0: 0960                      RETS   
24600: 1820                      MOVK   1h,A0
24610: a3cf                      MOVE   A14,-*SP,1
24620: 920e                      MOVE   A0,*A14+,1
24630: 0d5f 7f10 0002            CALLA  27F10h
24660: 0bc3 ffff 7fff            XORI   7FFFFFFFh,A3
24690: 4c68                      MOVE   A3,A8
246a0: 09af 0009                 MMFM   SP,A0,A3
246c0: 0960                      RETS   

FD$FTOD:
246d0: 07a8 0000 0000            MOVE   @0h,A8,1
24700: ca09                      JREQ   247A0h
24710: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
24740: d83e 0080                 CEXEC  0,00101F,0
24760: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
24790: 0960                      RETS   
247a0: 098f c000                 MMTM   SP,A0,A1
247c0: a7c8                      MOVE   -*A14,A8,1
247d0: 4d01                      MOVE   A8,A1
247e0: 2421                      SLL    1h,A1
247f0: 4600                      SUBB   A0,A0
24800: 2d01                      SRL    18h,A1
24810: ca14                      JREQ   24960h
24820: 27e0                      SLL    1Fh,A0
24830: 0b41 ff00                 CMPI   FFh,A1
24850: cb02                      JRNE   24880h
24860: 09c1 047f                 MOVI   47Fh,A1
24880: 0b01 0380                 ADDI   380h,A1
248a0: 2681                      SLL    14h,A1
248b0: 5420                      OR     A1,A0
248c0: 4d01                      MOVE   A8,A1
248d0: 27a1                      SLL    1Dh,A1
248e0: 2528                      SLL    9h,A8
248f0: 2e88                      SRL    Ch,A8
24900: 5500                      OR     A8,A0
24910: 920e                      MOVE   A0,*A14+,1
24920: 922e                      MOVE   A1,*A14+,1
24930: 09af 0003                 MMFM   SP,A0,A1
24950: 0960                      RETS   
24960: 922e                      MOVE   A1,*A14+,1
24970: 922e                      MOVE   A1,*A14+,1
24980: 09af 0003                 MMFM   SP,A0,A1
249a0: 0960                      RETS   

FD$ITOD:
249b0: a38f                      MOVE   A12,-*SP,1
249c0: 07ac 0000 0000            MOVE   @0h,A12,1
249f0: ca0a                      JREQ   24AA0h
24a00: 0628 4c00 0000            CMOVGC A8,00004C,0
24a30: d83f 00c0                 CEXEC  1,00181F,0
24a50: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
24a80: 97ec                      MOVE   *SP+,A12,1
24a90: 0960                      RETS   
24aa0: 098f c000                 MMTM   SP,A0,A1
24ac0: 5600                      CLR    A0
24ad0: 0388                      ABS    A8
24ae0: ca1a                      JREQ   24C90h
24af0: c402                      JRLT   24B20h
24b00: 1820                      MOVK   1h,A0
24b10: 27e0                      SLL    1Fh,A0
24b20: 6b01                      LMO    A8,A1
24b30: 1021                      INC    A1
24b40: 0b41 ffdf                 CMPI   20h,A1
24b60: cb02                      JRNE   24B90h
24b70: 5708                      CLR    A8
24b80: c001                      JR     24BA0h
24b90: 6228                      SLL    A1,A8
24ba0: 03a1                      NEG    A1
24bb0: 0b01 041f                 ADDI   41Fh,A1
24bd0: 2681                      SLL    14h,A1
24be0: 5420                      OR     A1,A0
24bf0: 4d01                      MOVE   A8,A1
24c00: 2681                      SLL    14h,A1
24c10: 2e88                      SRL    Ch,A8
24c20: 5500                      OR     A8,A0
24c30: 920e                      MOVE   A0,*A14+,1
24c40: 922e                      MOVE   A1,*A14+,1
24c50: 09af 0003                 MMFM   SP,A0,A1
24c70: 97ec                      MOVE   *SP+,A12,1
24c80: 0960                      RETS   
24c90: 5600                      CLR    A0
24ca0: 920e                      MOVE   A0,*A14+,1
24cb0: 920e                      MOVE   A0,*A14+,1
24cc0: 09af 0003                 MMFM   SP,A0,A1
24ce0: 97ec                      MOVE   *SP+,A12,1
24cf0: 0960                      RETS   
24d00: 0000                      DW     0000h
24d10: 4f80                      MOVE   A12,B0

FD$UTOF:
24d20: a38f                      MOVE   A12,-*SP,1
24d30: 07ac 0000 0000            MOVE   @0h,A12,1
24d60: ca1a                      JREQ   24F10h
24d70: 0628 4c00 0000            CMOVGC A8,00004C,0
24da0: d83e 00c0                 CEXEC  0,00181F,0
24dc0: d806 1bb0                 CEXEC  0,037603,0
24de0: d80a 0000                 CEXEC  0,000005,0
24e00: 0660 4e01 000c            CMOVCS ,000C4E,0
24e30: cf08                      JRNN   24EC0h
24e40: 09ec 4d00 0002            MOVI   24D00h,A12
24e70: 0681 8d0c 0010            CMOVMC *A12+,1,0,00108D,0
24ea0: d802 0000                 CEXEC  0,000001,0
24ec0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
24ef0: 97ec                      MOVE   *SP+,A12,1
24f00: 0960                      RETS   
24f10: 098f c000                 MMTM   SP,A0,A1
24f30: 5600                      CLR    A0
24f40: 4d08                      MOVE   A8,A8
24f50: ca15                      JREQ   250B0h
24f60: 6b01                      LMO    A8,A1
24f70: 1021                      INC    A1
24f80: 0b41 ffdf                 CMPI   20h,A1
24fa0: cb02                      JRNE   24FD0h
24fb0: 5708                      CLR    A8
24fc0: c001                      JR     24FE0h
24fd0: 6228                      SLL    A1,A8
24fe0: 03a1                      NEG    A1
24ff0: 2ee8                      SRL    9h,A8
25000: c905                      JRNC   25060h
25010: 1028                      INC    A8
25020: 1d08                      BTST   17h,A8
25030: ca02                      JREQ   25060h
25040: 1021                      INC    A1
25050: 2fe8                      SRL    1h,A8
25060: 0b01 009f                 ADDI   9Fh,A1
25080: 26e1                      SLL    17h,A1
25090: 5420                      OR     A1,A0
250a0: 5500                      OR     A8,A0
250b0: 920e                      MOVE   A0,*A14+,1
250c0: 09af 0003                 MMFM   SP,A0,A1
250e0: 97ec                      MOVE   *SP+,A12,1
250f0: 0960                      RETS   

FD$LE:
25100: 1828                      MOVK   1h,A8
25110: c005                      JR     25170h

FD$LT:
25120: 1848                      MOVK   2h,A8
25130: c003                      JR     25170h

FD$GE:
25140: 1868                      MOVK   3h,A8
25150: c001                      JR     25170h

FD$GT:
25160: 1888                      MOVK   4h,A8
25170: a38f                      MOVE   A12,-*SP,1
25180: 07ac 0000 0000            MOVE   @0h,A12,1
251b0: ca20                      JREQ   253C0h
251c0: 098f 6000                 MMTM   SP,A1,A2
251e0: 4dc1                      MOVE   A14,A1
251f0: 0be1 ff7f                 SUBI   80h,A1
25210: 0682 8d81 0000            CMOVMC *A1+,2,1,00008D,0
25240: 0682 8d81 0010            CMOVMC *A1+,2,1,00108D,0
25270: 0bee ff7f                 SUBI   80h,A14
25290: d80b 0000                 CEXEC  1,000005,0
252b0: 0660 4e01 000c            CMOVCS ,000C4E,0
252e0: 18a2                      MOVK   5h,A2
252f0: ca03                      JREQ   25330h
25300: 1862                      MOVK   3h,A2
25310: ce01                      JRN    25330h
25320: 1982                      MOVK   Ch,A2
25330: 03a8                      NEG    A8
25340: 6702                      SRL    A8,A2
25350: 4708                      SUBB   A8,A8
25360: 2c28                      SRL    1Fh,A8
25370: 09af 0006                 MMFM   SP,A1,A2
25390: 97ec                      MOVE   *SP+,A12,1
253a0: 4d08                      MOVE   A8,A8
253b0: 0960                      RETS   
253c0: 098f b800                 MMTM   SP,A0,A2-A4
253e0: a7c2                      MOVE   -*A14,A2,1
253f0: a7c0                      MOVE   -*A14,A0,1
25400: a7c3                      MOVE   -*A14,A3,1
25410: a7c4                      MOVE   -*A14,A4,1
25420: 4804                      CMP    A0,A4
25430: ca14                      JREQ   25580h
25440: 1862                      MOVK   3h,A2
25450: c401                      JRLT   25470h
25460: 1982                      MOVK   Ch,A2
25470: 2420                      SLL    1h,A0
25480: c906                      JRNC   254F0h
25490: 2424                      SLL    1h,A4
254a0: c904                      JRNC   254F0h
254b0: 4804                      CMP    A0,A4
254c0: 1862                      MOVK   3h,A2
254d0: c301                      JRHI   254F0h
254e0: 1982                      MOVK   Ch,A2
254f0: 03a8                      NEG    A8
25500: 6702                      SRL    A8,A2
25510: 4708                      SUBB   A8,A8
25520: 2c28                      SRL    1Fh,A8
25530: 09af 001d                 MMFM   SP,A0,A2-A4
25550: 97ec                      MOVE   *SP+,A12,1
25560: 4d08                      MOVE   A8,A8
25570: 0960                      RETS   
25580: 4843                      CMP    A2,A3
25590: 18a2                      MOVK   5h,A2
255a0: ca06                      JREQ   25610h
255b0: 1862                      MOVK   3h,A2
255c0: c801                      JRC    255E0h
255d0: 1982                      MOVK   Ch,A2
255e0: 2420                      SLL    1h,A0
255f0: c901                      JRNC   25610h
25600: 03e2                      NOT    A2
25610: 03a8                      NEG    A8
25620: 6702                      SRL    A8,A2
25630: 4708                      SUBB   A8,A8
25640: 2c28                      SRL    1Fh,A8
25650: 09af 001d                 MMFM   SP,A0,A2-A4
25670: 97ec                      MOVE   *SP+,A12,1
25680: 4d08                      MOVE   A8,A8
25690: 0960                      RETS   

FD$DIV_R:
256a0: 07a8 0000 0000            MOVE   @0h,A8,1
256d0: ca2a                      JREQ   25980h
256e0: a38f                      MOVE   A12,-*SP,1
256f0: 4dcc                      MOVE   A14,A12
25700: 0bec ff7f                 SUBI   80h,A12
25720: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
25750: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
25780: 0bee ff7f                 SUBI   80h,A14
257a0: d827 0000                 CEXEC  1,000013,0
257c0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
257f0: 97ec                      MOVE   *SP+,A12,1
25800: 0960                      RETS   

FD$DIV:
25810: 07a8 0000 0000            MOVE   @0h,A8,1
25840: ca1a                      JREQ   259F0h
25850: a38f                      MOVE   A12,-*SP,1
25860: 4dcc                      MOVE   A14,A12
25870: 0bec ff7f                 SUBI   80h,A12
25890: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
258c0: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
258f0: 0bee ff7f                 SUBI   80h,A14
25910: d827 0000                 CEXEC  1,000013,0
25930: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
25960: 97ec                      MOVE   *SP+,A12,1
25970: 0960                      RETS   
25980: 098f ff40                 MMTM   SP,A0-A7,A9
259a0: a7c1                      MOVE   -*A14,A1,1
259b0: a7c4                      MOVE   -*A14,A4,1
259c0: a7c3                      MOVE   -*A14,A3,1
259d0: a7c5                      MOVE   -*A14,A5,1
259e0: c006                      JR     25A50h
259f0: 098f ff40                 MMTM   SP,A0-A7,A9
25a10: a7c3                      MOVE   -*A14,A3,1
25a20: a7c5                      MOVE   -*A14,A5,1
25a30: a7c1                      MOVE   -*A14,A1,1
25a40: a7c4                      MOVE   -*A14,A4,1
25a50: 4c28                      MOVE   A1,A8
25a60: 24e1                      SLL    7h,A1
25a70: 2ce8                      SRL    19h,A8
25a80: 4c80                      MOVE   A4,A0
25a90: 2580                      SLL    Ch,A0
25aa0: 2f60                      SRL    5h,A0
25ab0: 0ba0 0000 0800            ORI    8000000h,A0
25ae0: 5500                      OR     A8,A0
25af0: 4c68                      MOVE   A3,A8
25b00: 2563                      SLL    Bh,A3
25b10: 2d68                      SRL    15h,A8
25b20: 4ca2                      MOVE   A5,A2
25b30: 2582                      SLL    Ch,A2
25b40: 2fe2                      SRL    1h,A2
25b50: 0ba2 0000 8000            ORI    80000000h,A2
25b80: 5502                      OR     A8,A2
25b90: 2424                      SLL    1h,A4
25ba0: 4729                      SUBB   A9,A9
25bb0: 2425                      SLL    1h,A5
25bc0: 4708                      SUBB   A8,A8
25bd0: 5709                      XOR    A8,A9
25be0: 27e9                      SLL    1Fh,A9
25bf0: 2d64                      SRL    15h,A4
25c00: 2d65                      SRL    15h,A5
25c10: ca56                      JREQ   26180h
25c20: 0b45 f800                 CMPI   7FFh,A5
25c40: cb03                      JRNE   25C80h
25c50: 48a4                      CMP    A5,A4
25c60: ca56                      JREQ   261D0h
25c70: c042                      JR     260A0h
25c80: 0b44 f800                 CMPI   7FFh,A4
25ca0: ca32                      JREQ   25FD0h
25cb0: 4c84                      MOVE   A4,A4
25cc0: ca3d                      JREQ   260A0h
25cd0: 5708                      CLR    A8
25ce0: 5a40                      DIVU   A2,A0
25cf0: 4c26                      MOVE   A1,A6
25d00: 56e7                      CLR    A7
25d10: 5a46                      DIVU   A2,A6
25d20: 4cc1                      MOVE   A6,A1
25d30: 4c06                      MOVE   A0,A6
25d40: 5e66                      MPYU   A3,A6
25d50: 5a46                      DIVU   A2,A6
25d60: 44c1                      SUB    A6,A1
25d70: 4700                      SUBB   A8,A0
25d80: 1c60                      BTST   1Ch,A0
25d90: ca07                      JREQ   25E10h
25da0: 1425                      DEC    A5
25db0: 2fe1                      SRL    1h,A1
25dc0: 2fe0                      SRL    1h,A0
25dd0: c903                      JRNC   25E10h
25de0: 0ba1 0000 8000            ORI    80000000h,A1
25e10: 1f21                      BTST   6h,A1
25e20: ca07                      JREQ   25EA0h
25e30: 0b01 0040                 ADDI   40h,A1
25e50: 4300                      ADDC   A8,A0
25e60: 1c60                      BTST   1Ch,A0
25e70: ca02                      JREQ   25EA0h
25e80: 1425                      DEC    A5
25e90: c004                      JR     25EE0h
25ea0: 1025                      INC    A5
25eb0: 2420                      SLL    1h,A0
25ec0: 2421                      SLL    1h,A1
25ed0: 4300                      ADDC   A8,A0
25ee0: 0b80 0000 f000            ANDI   FFFFFFFh,A0
25f10: 4c86                      MOVE   A4,A6
25f20: 44a4                      SUB    A5,A4
25f30: 0b04 03ff                 ADDI   3FFh,A4
25f50: c61f                      JRLE   26150h
25f60: 0b44 f800                 CMPI   7FFh,A4
25f80: c404                      JRLT   25FD0h
25f90: 09c4 07ff                 MOVI   7FFh,A4
25fb0: 48c4                      CMP    A6,A4
25fc0: cb13                      JRNE   26100h
25fd0: 4c08                      MOVE   A0,A8
25fe0: 2f00                      SRL    8h,A0
25ff0: 2f01                      SRL    8h,A1
26000: 2708                      SLL    18h,A8
26010: 5501                      OR     A8,A1
26020: 2684                      SLL    14h,A4
26030: 5524                      OR     A9,A4
26040: 5480                      OR     A4,A0
26050: 920e                      MOVE   A0,*A14+,1
26060: 922e                      MOVE   A1,*A14+,1
26070: 09af 02ff                 MMFM   SP,A0-A7,A9
26090: 0960                      RETS   
260a0: 56c6                      CLR    A6
260b0: 92ce                      MOVE   A6,*A14+,1
260c0: 92ce                      MOVE   A6,*A14+,1
260d0: 09af 02ff                 MMFM   SP,A0-A7,A9
260f0: 0960                      RETS   
26100: 0ba9 0000 7ff0            ORI    7FF00000h,A9
26130: 18e0                      MOVK   7h,A0
26140: c00c                      JR     26210h
26150: 5729                      CLR    A9
26160: 19c0                      MOVK   Eh,A0
26170: c009                      JR     26210h
26180: 0ba9 0000 7ff0            ORI    7FF00000h,A9
261b0: 19e0                      MOVK   Fh,A0
261c0: c004                      JR     26210h
261d0: 0ba9 0000 3ff0            ORI    3FF00000h,A9
26200: 1a00                      MOVK   10h,A0
26210: a3cf                      MOVE   A14,-*SP,1
26220: 920e                      MOVE   A0,*A14+,1
26230: 0d5f 7f10 0002            CALLA  27F10h
26260: 56a5                      CLR    A5
26270: 932e                      MOVE   A9,*A14+,1
26280: 92ae                      MOVE   A5,*A14+,1
26290: 09af 02ff                 MMFM   SP,A0-A7,A9
262b0: 0960                      RETS   

FD$EQ:
262c0: 098f e000                 MMTM   SP,A0-A2
262e0: a7c0                      MOVE   -*A14,A0,1
262f0: a7c8                      MOVE   -*A14,A8,1
26300: a7c1                      MOVE   -*A14,A1,1
26310: a7c2                      MOVE   -*A14,A2,1
26320: 4902                      CMP    A8,A2
26330: cb08                      JRNE   263C0h
26340: 5708                      CLR    A8
26350: 4801                      CMP    A0,A1
26360: cb01                      JRNE   26380h
26370: 1028                      INC    A8
26380: 4d08                      MOVE   A8,A8
26390: 09af 0007                 MMFM   SP,A0-A2
263b0: 0960                      RETS   
263c0: 5708                      CLR    A8
263d0: 09af 0007                 MMFM   SP,A0-A2
263f0: 0960                      RETS   

FD$MUL:
26400: 07a8 0000 0000            MOVE   @0h,A8,1
26430: ca13                      JREQ   26570h
26440: a38f                      MOVE   A12,-*SP,1
26450: 4dcc                      MOVE   A14,A12
26460: 0bec ff7f                 SUBI   80h,A12
26480: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
264b0: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
264e0: 0bee ff7f                 SUBI   80h,A14
26500: d823 0000                 CEXEC  1,000011,0
26520: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
26550: 97ec                      MOVE   *SP+,A12,1
26560: 0960                      RETS   
26570: 098f ff70                 MMTM   SP,A0-A7,A9-A11
26590: a7c1                      MOVE   -*A14,A1,1
265a0: a7c0                      MOVE   -*A14,A0,1
265b0: a7c3                      MOVE   -*A14,A3,1
265c0: a7c2                      MOVE   -*A14,A2,1
265d0: 56a5                      CLR    A5
265e0: 4c00                      MOVE   A0,A0
265f0: ca5f                      JREQ   26BF0h
26600: 4c42                      MOVE   A2,A2
26610: ca5d                      JREQ   26BF0h
26620: 4c08                      MOVE   A0,A8
26630: 4c4b                      MOVE   A2,A11
26640: 242b                      SLL    1h,A11
26650: 474a                      SUBB   A10,A10
26660: 2428                      SLL    1h,A8
26670: 46a5                      SUBB   A5,A5
26680: 56aa                      XOR    A5,A10
26690: 27ea                      SLL    1Fh,A10
266a0: 2d68                      SRL    15h,A8
266b0: 2d6b                      SRL    15h,A11
266c0: 0b4b f800                 CMPI   7FFh,A11
266e0: ca56                      JREQ   26C50h
266f0: 0b48 f800                 CMPI   7FFh,A8
26710: ca52                      JREQ   26C40h
26720: 410b                      ADD    A8,A11
26730: 0beb fc00                 SUBI   3FFh,A11
26750: 4c68                      MOVE   A3,A8
26760: 2563                      SLL    Bh,A3
26770: 2562                      SLL    Bh,A2
26780: 0ba2 0000 8000            ORI    80000000h,A2
267b0: 2d68                      SRL    15h,A8
267c0: 5502                      OR     A8,A2
267d0: 4c28                      MOVE   A1,A8
267e0: 2560                      SLL    Bh,A0
267f0: 2561                      SLL    Bh,A1
26800: 0ba0 0000 8000            ORI    80000000h,A0
26830: 2d68                      SRL    15h,A8
26840: 5500                      OR     A8,A0
26850: 4c08                      MOVE   A0,A8
26860: 4c26                      MOVE   A1,A6
26870: 4c24                      MOVE   A1,A4
26880: 5e40                      MPYU   A2,A0
26890: 5e68                      MPYU   A3,A8
268a0: 5e46                      MPYU   A2,A6
268b0: 5e64                      MPYU   A3,A4
268c0: 56a5                      CLR    A5
268d0: 4d22                      MOVE   A9,A2
268e0: 4101                      ADD    A8,A1
268f0: 42a0                      ADDC   A5,A0
26900: 40e2                      ADD    A7,A2
26910: 42c1                      ADDC   A6,A1
26920: 42a0                      ADDC   A5,A0
26930: 4082                      ADD    A4,A2
26940: 42a1                      ADDC   A5,A1
26950: 42a0                      ADDC   A5,A0
26960: ca28                      JREQ   26BF0h
26970: 102b                      INC    A11
26980: 1c00                      BTST   1Fh,A0
26990: cb04                      JRNE   269E0h
269a0: 142b                      DEC    A11
269b0: 2420                      SLL    1h,A0
269c0: 2421                      SLL    1h,A1
269d0: 42a0                      ADDC   A5,A0
269e0: 1ea1                      BTST   Ah,A1
269f0: ca06                      JREQ   26A60h
26a00: 0b01 0400                 ADDI   400h,A1
26a20: 42a0                      ADDC   A5,A0
26a30: c902                      JRNC   26A60h
26a40: 102b                      INC    A11
26a50: c003                      JR     26A90h
26a60: 2420                      SLL    1h,A0
26a70: 2421                      SLL    1h,A1
26a80: 42a0                      ADDC   A5,A0
26a90: 4d6b                      MOVE   A11,A11
26aa0: c42a                      JRLT   26D50h
26ab0: ca10                      JREQ   26BC0h
26ac0: 0b4b f800                 CMPI   7FFh,A11
26ae0: c51d                      JRGE   26CC0h
26af0: 4c05                      MOVE   A0,A5
26b00: 2685                      SLL    14h,A5
26b10: 2e81                      SRL    Ch,A1
26b20: 2e80                      SRL    Ch,A0
26b30: 54a1                      OR     A5,A1
26b40: 268b                      SLL    14h,A11
26b50: 5560                      OR     A11,A0
26b60: 5540                      OR     A10,A0
26b70: 920e                      MOVE   A0,*A14+,1
26b80: 922e                      MOVE   A1,*A14+,1
26b90: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
26bb0: 0960                      RETS   
26bc0: 4c00                      MOVE   A0,A0
26bd0: cb17                      JRNE   26D50h
26be0: c0f0                      JR     26AF0h
26bf0: 92ae                      MOVE   A5,*A14+,1
26c00: 92ae                      MOVE   A5,*A14+,1
26c10: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
26c30: 0960                      RETS   
26c40: 4d68                      MOVE   A11,A8
26c50: 4d08                      MOVE   A8,A8
26c60: ca0b                      JREQ   26D20h
26c70: 09e0 0000 7ff0            MOVI   7FF00000h,A0
26ca0: 5621                      CLR    A1
26cb0: c0ea                      JR     26B60h
26cc0: 09e3 0000 7ff0            MOVI   7FF00000h,A3
26cf0: 5543                      OR     A10,A3
26d00: 18c0                      MOVK   6h,A0
26d10: c005                      JR     26D70h
26d20: 5663                      CLR    A3
26d30: 1960                      MOVK   Bh,A0
26d40: c002                      JR     26D70h
26d50: 5663                      CLR    A3
26d60: 19a0                      MOVK   Dh,A0
26d70: a3cf                      MOVE   A14,-*SP,1
26d80: 920e                      MOVE   A0,*A14+,1
26d90: 0d5f 7f10 0002            CALLA  27F10h
26dc0: 5600                      CLR    A0
26dd0: 926e                      MOVE   A3,*A14+,1
26de0: 920e                      MOVE   A0,*A14+,1
26df0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
26e10: 0960                      RETS   

FS$DIV_R:
26e20: 07a8 0000 0000            MOVE   @0h,A8,1
26e50: ca1c                      JREQ   27020h
26e60: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
26e90: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
26ec0: d826 0000                 CEXEC  0,000013,0
26ee0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
26f10: 0960                      RETS   

FS$DIV:
26f20: 07a8 0000 0000            MOVE   @0h,A8,1
26f50: ca11                      JREQ   27070h
26f60: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
26f90: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
26fc0: d826 0000                 CEXEC  0,000013,0
26fe0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
27010: 0960                      RETS   
27020: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
27040: a7c2                      MOVE   -*A14,A2,1
27050: a7c4                      MOVE   -*A14,A4,1
27060: c004                      JR     270B0h
27070: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
27090: a7c4                      MOVE   -*A14,A4,1
270a0: a7c2                      MOVE   -*A14,A2,1
270b0: 4c48                      MOVE   A2,A8
270c0: 2528                      SLL    9h,A8
270d0: 2f68                      SRL    5h,A8
270e0: 0ba8 0000 0800            ORI    8000000h,A8
27110: 4c80                      MOVE   A4,A0
27120: 2520                      SLL    9h,A0
27130: 2fe0                      SRL    1h,A0
27140: 0ba0 0000 8000            ORI    80000000h,A0
27170: 2422                      SLL    1h,A2
27180: 4729                      SUBB   A9,A9
27190: 2424                      SLL    1h,A4
271a0: 46c6                      SUBB   A6,A6
271b0: 5726                      XOR    A9,A6
271c0: 27e6                      SLL    1Fh,A6
271d0: 2d02                      SRL    18h,A2
271e0: 2d04                      SRL    18h,A4
271f0: ca36                      JREQ   27560h
27200: 0b44 ff00                 CMPI   FFh,A4
27220: ca24                      JREQ   27470h
27230: 0b42 ff00                 CMPI   FFh,A2
27250: ca19                      JREQ   273F0h
27260: 4c42                      MOVE   A2,A2
27270: ca21                      JREQ   27490h
27280: 4482                      SUB    A4,A2
27290: 5729                      CLR    A9
272a0: 5a08                      DIVU   A0,A8
272b0: 1c68                      BTST   1Ch,A8
272c0: ca02                      JREQ   272F0h
272d0: 1022                      INC    A2
272e0: 2fe8                      SRL    1h,A8
272f0: 1108                      ADDK   8h,A8
27300: 1c68                      BTST   1Ch,A8
27310: ca02                      JREQ   27340h
27320: 1022                      INC    A2
27330: c002                      JR     27360h
27340: 1422                      DEC    A2
27350: 2428                      SLL    1h,A8
27360: 0b88 0000 f000            ANDI   FFFFFFFh,A8
27390: 0b02 007f                 ADDI   7Fh,A2
273b0: c617                      JRLE   27530h
273c0: 0b42 ff00                 CMPI   FFh,A2
273e0: c50f                      JRGE   274E0h
273f0: 2f68                      SRL    5h,A8
27400: 26e2                      SLL    17h,A2
27410: 54c2                      OR     A6,A2
27420: 5448                      OR     A2,A8
27430: 930e                      MOVE   A8,*A14+,1
27440: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
27460: 0960                      RETS   
27470: 4882                      CMP    A4,A2
27480: ca12                      JREQ   275B0h
27490: 5708                      CLR    A8
274a0: 930e                      MOVE   A8,*A14+,1
274b0: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
274d0: 0960                      RETS   
274e0: 0ba6 0000 7f80            ORI    7F800000h,A6
27510: 18e0                      MOVK   7h,A0
27520: c00c                      JR     275F0h
27530: 56c6                      CLR    A6
27540: 19c0                      MOVK   Eh,A0
27550: c009                      JR     275F0h
27560: 0ba6 0000 7f80            ORI    7F800000h,A6
27590: 19e0                      MOVK   Fh,A0
275a0: c004                      JR     275F0h
275b0: 0ba6 0000 3f80            ORI    3F800000h,A6
275e0: 1a00                      MOVK   10h,A0
275f0: a3cf                      MOVE   A14,-*SP,1
27600: 920e                      MOVE   A0,*A14+,1
27610: 0d5f 7f10 0002            CALLA  27F10h
27640: 92ce                      MOVE   A6,*A14+,1
27650: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
27670: 0960                      RETS   

FS$MUL:
27680: 07a8 0000 0000            MOVE   @0h,A8,1
276b0: ca0c                      JREQ   27780h
276c0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
276f0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
27720: d822 0000                 CEXEC  0,000011,0
27740: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
27770: 0960                      RETS   
27780: 098f a840                 MMTM   SP,A0,A2,A4,A9
277a0: a7c8                      MOVE   -*A14,A8,1
277b0: a7c9                      MOVE   -*A14,A9,1
277c0: 4d08                      MOVE   A8,A8
277d0: ca3d                      JREQ   27BB0h
277e0: 4d29                      MOVE   A9,A9
277f0: ca3b                      JREQ   27BB0h
27800: 2428                      SLL    1h,A8
27810: 4684                      SUBB   A4,A4
27820: 2429                      SLL    1h,A9
27830: 4600                      SUBB   A0,A0
27840: 5604                      XOR    A0,A4
27850: 27e4                      SLL    1Fh,A4
27860: 4d00                      MOVE   A8,A0
27870: 4d22                      MOVE   A9,A2
27880: 2d00                      SRL    18h,A0
27890: 2d02                      SRL    18h,A2
278a0: 0b42 ff00                 CMPI   FFh,A2
278c0: ca34                      JREQ   27C10h
278d0: 0b40 ff00                 CMPI   FFh,A0
278f0: ca30                      JREQ   27C00h
27900: 4002                      ADD    A0,A2
27910: 0be2 ff80                 SUBI   7Fh,A2
27930: 2508                      SLL    8h,A8
27940: 2fe8                      SRL    1h,A8
27950: 0ba8 0000 8000            ORI    80000000h,A8
27980: 2509                      SLL    8h,A9
27990: 2fe9                      SRL    1h,A9
279a0: 0ba9 0000 8000            ORI    80000000h,A9
279d0: 5f28                      MPYU   A9,A8
279e0: ca1c                      JREQ   27BB0h
279f0: 1022                      INC    A2
27a00: 1c08                      BTST   1Fh,A8
27a10: cb02                      JRNE   27A40h
27a20: 1422                      DEC    A2
27a30: 2428                      SLL    1h,A8
27a40: 0b08 0080                 ADDI   80h,A8
27a60: c902                      JRNC   27A90h
27a70: 1022                      INC    A2
27a80: c001                      JR     27AA0h
27a90: 2428                      SLL    1h,A8
27aa0: 4c42                      MOVE   A2,A2
27ab0: c424                      JRLT   27D00h
27ac0: ca0b                      JREQ   27B80h
27ad0: 0b42 ff00                 CMPI   FFh,A2
27af0: c517                      JRGE   27C70h
27b00: 2ee8                      SRL    9h,A8
27b10: 26e2                      SLL    17h,A2
27b20: 5448                      OR     A2,A8
27b30: 5488                      OR     A4,A8
27b40: 930e                      MOVE   A8,*A14+,1
27b50: 09af 0215                 MMFM   SP,A0,A2,A4,A9
27b70: 0960                      RETS   
27b80: 4d08                      MOVE   A8,A8
27b90: cb16                      JRNE   27D00h
27ba0: c0f5                      JR     27B00h
27bb0: 5708                      CLR    A8
27bc0: 930e                      MOVE   A8,*A14+,1
27bd0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
27bf0: 0960                      RETS   
27c00: 4c40                      MOVE   A2,A0
27c10: 4c00                      MOVE   A0,A0
27c20: ca0a                      JREQ   27CD0h
27c30: 09e8 0000 7ff0            MOVI   7FF00000h,A8
27c60: c0ec                      JR     27B30h
27c70: 09e9 0000 7ff0            MOVI   7FF00000h,A9
27ca0: 5489                      OR     A4,A9
27cb0: 18c0                      MOVK   6h,A0
27cc0: c005                      JR     27D20h
27cd0: 5729                      CLR    A9
27ce0: 1960                      MOVK   Bh,A0
27cf0: c002                      JR     27D20h
27d00: 5729                      CLR    A9
27d10: 19a0                      MOVK   Dh,A0
27d20: a3cf                      MOVE   A14,-*SP,1
27d30: 920e                      MOVE   A0,*A14+,1
27d40: 0d5f 7f10 0002            CALLA  27F10h
27d70: 932e                      MOVE   A9,*A14+,1
27d80: 09af 0215                 MMFM   SP,A0,A2,A4,A9
27da0: 0960                      RETS   

FS$NE:
27db0: a20f                      MOVE   A0,-*SP,1
27dc0: a7c0                      MOVE   -*A14,A0,1
27dd0: a7c8                      MOVE   -*A14,A8,1
27de0: 4808                      CMP    A0,A8
27df0: 1828                      MOVK   1h,A8
27e00: cb01                      JRNE   27E20h
27e10: 5708                      CLR    A8
27e20: 97e0                      MOVE   *SP+,A0,1
27e30: 4d08                      MOVE   A8,A8
27e40: 0960                      RETS   

_atol:
27e50: a3af                      MOVE   A13,-*SP,1
27e60: 4dcd                      MOVE   A14,A13
27e70: a3cf                      MOVE   A14,-*SP,1
27e80: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
27ea0: 0d5f c560 0002            CALLA  2C560h
27ed0: b7ee 0040                 MOVE   *SP(40h),A14,1
27ef0: 97ed                      MOVE   *SP+,A13,1
27f00: 0962                      RETS   2h

_fp_error:
27f10: a3af                      MOVE   A13,-*SP,1
27f20: 4dcd                      MOVE   A14,A13
27f30: b7ee 0040                 MOVE   *SP(40h),A14,1
27f50: 97ed                      MOVE   *SP+,A13,1
27f60: 0962                      RETS   2h

_ltoa:
27f70: 098f 402c                 MMTM   SP,A1,A10,A12,A13
27f90: 4dcd                      MOVE   A14,A13
27fa0: 0b0e 00a0                 ADDI   A0h,A14
27fc0: b7a1 ffe0                 MOVE   *A13(FFE0h),A1,1
27fe0: 4e2e                      MOVE   A1,B14
27ff0: 2c3e                      SRL    1Fh,B14
28000: ca01                      JREQ   28020h
28010: 03a1                      NEG    A1
28020: 4dac                      MOVE   A13,A12
28030: 0b0c 0098                 ADDI   98h,A12
28050: 4508                      SUB    A8,A8
28060: 8d0c                      MOVB   A8,*A12
28070: 0568                      SETF   8h,1,0
28080: 1948                      MOVK   Ah,A8
28090: 4c2a                      MOVE   A1,A10
280a0: 6d0a                      MODS   A8,A10
280b0: 0b0a 0030                 ADDI   30h,A10
280d0: a14c                      MOVE   A10,-*A12,0
280e0: 5901                      DIVS   A8,A1
280f0: cbf8                      JRNE   28080h
28100: 4fd1                      MOVE   B14,A1
28110: ca03                      JREQ   28150h
28120: 09ca 002d                 MOVI   2Dh,A10
28140: a14c                      MOVE   A10,-*A12,0
28150: a3cf                      MOVE   A14,-*SP,1
28160: 4daa                      MOVE   A13,A10
28170: 458a                      SUB    A12,A10
28180: 4d41                      MOVE   A10,A1
28190: 0b01 00a0                 ADDI   A0h,A1
281b0: 2ba1                      SRA    3h,A1
281c0: 922e                      MOVE   A1,*A14+,1
281d0: 938e                      MOVE   A12,*A14+,1
281e0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
28200: 0d5f 82a0 0002            CALLA  282A0h
28230: 4c28                      MOVE   A1,A8
28240: 1428                      DEC    A8
28250: b7ee 00a0                 MOVE   *SP(A0h),A14,1
28270: 09af 3402                 MMFM   SP,A1,A10,A12,A13
28290: 0962                      RETS   2h

_memcpy:
282a0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
282c0: 4dcd                      MOVE   A14,A13
282d0: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
282f0: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
28310: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
28330: 4d44                      MOVE   A10,A4
28340: 142c                      DEC    A12
28350: 0b4c 0000                 CMPI   FFFFh,A12
28370: ca06                      JREQ   283E0h
28380: 0568                      SETF   8h,1,0
28390: 98ca                      MOVE   *A6+,*A10+,0
283a0: 142c                      DEC    A12
283b0: 0b4c 0000                 CMPI   FFFFh,A12
283d0: cbfb                      JRNE   28390h
283e0: 4c88                      MOVE   A4,A8
283f0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
28410: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
28430: 0962                      RETS   2h

_memmove:
28440: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
28460: 4dcd                      MOVE   A14,A13
28470: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
28490: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
284b0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
284d0: 4d44                      MOVE   A10,A4
284e0: 4946                      CMP    A10,A6
284f0: c311                      JRHI   28610h
28500: 4d88                      MOVE   A12,A8
28510: 2468                      SLL    3h,A8
28520: 4106                      ADD    A8,A6
28530: 4d88                      MOVE   A12,A8
28540: 2468                      SLL    3h,A8
28550: 410a                      ADD    A8,A10
28560: 142c                      DEC    A12
28570: 0b4c 0000                 CMPI   FFFFh,A12
28590: ca11                      JREQ   286B0h
285a0: 0568                      SETF   8h,1,0
285b0: a8ca                      MOVE   -*A6,-*A10,0
285c0: 142c                      DEC    A12
285d0: 0b4c 0000                 CMPI   FFFFh,A12
285f0: cbfb                      JRNE   285B0h
28600: c00a                      JR     286B0h
28610: 142c                      DEC    A12
28620: 0b4c 0000                 CMPI   FFFFh,A12
28640: ca06                      JREQ   286B0h
28650: 0568                      SETF   8h,1,0
28660: 98ca                      MOVE   *A6+,*A10+,0
28670: 142c                      DEC    A12
28680: 0b4c 0000                 CMPI   FFFFh,A12
286a0: cbfb                      JRNE   28660h
286b0: 4c88                      MOVE   A4,A8
286c0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
286e0: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
28700: 0962                      RETS   2h

_pow:
28710: 098f 000c                 MMTM   SP,A12,A13
28730: 4dcd                      MOVE   A14,A13
28740: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
28760: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
28780: 4508                      SUB    A8,A8
28790: 930e                      MOVE   A8,*A14+,1
287a0: 930e                      MOVE   A8,*A14+,1
287b0: 0d5f 62c0 0002            CALLA  262C0h
287e0: cb19                      JRNE   28980h
287f0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
28810: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
28830: 4508                      SUB    A8,A8
28840: 930e                      MOVE   A8,*A14+,1
28850: 930e                      MOVE   A8,*A14+,1
28860: 0d5f 62c0 0002            CALLA  262C0h
28890: cb0e                      JRNE   28980h
288a0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
288c0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
288e0: 4508                      SUB    A8,A8
288f0: 09ec 0000 3ff0            MOVI   3FF00000h,A12
28920: 938e                      MOVE   A12,*A14+,1
28930: 930e                      MOVE   A8,*A14+,1
28940: 0d5f 62c0 0002            CALLA  262C0h
28970: ca45                      JREQ   28DD0h
28980: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
289a0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
289c0: 458c                      SUB    A12,A12
289d0: 09e8 0000 3ff0            MOVI   3FF00000h,A8
28a00: 930e                      MOVE   A8,*A14+,1
28a10: 938e                      MOVE   A12,*A14+,1
28a20: 0d5f c3a0 0002            CALLA  2C3A0h
28a50: ca32                      JREQ   28D80h
28a60: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
28a80: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
28aa0: 938e                      MOVE   A12,*A14+,1
28ab0: 938e                      MOVE   A12,*A14+,1
28ac0: 0d5f 62c0 0002            CALLA  262C0h
28af0: ca12                      JREQ   28C20h
28b00: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
28b20: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
28b40: 938e                      MOVE   A12,*A14+,1
28b50: 938e                      MOVE   A12,*A14+,1
28b60: 0d5f 5100 0002            CALLA  25100h
28b90: ca08                      JREQ   28C20h
28ba0: 1828                      MOVK   1h,A8
28bb0: 0788 d860 0003            MOVE   A8,@3D860h,1
28be0: 938e                      MOVE   A12,*A14+,1
28bf0: 938e                      MOVE   A12,*A14+,1
28c00: c000 0082                 JR     29440h
28c20: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
28c40: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
28c60: 938e                      MOVE   A12,*A14+,1
28c70: 938e                      MOVE   A12,*A14+,1
28c80: 0d5f 62c0 0002            CALLA  262C0h
28cb0: ca06                      JREQ   28D20h
28cc0: 09e8 eec0 0002            MOVI   2EEC0h,A8
28cf0: 9b0e                      MOVE   *A8+,*A14+,1
28d00: 9b0e                      MOVE   *A8+,*A14+,1
28d10: c072                      JR     29440h
28d20: 09e8 ef00 0002            MOVI   2EF00h,A8
28d50: 9b0e                      MOVE   *A8+,*A14+,1
28d60: 9b0e                      MOVE   *A8+,*A14+,1
28d70: c06c                      JR     29440h
28d80: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
28da0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
28dc0: c067                      JR     29440h
28dd0: 458c                      SUB    A12,A12
28de0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
28e00: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
28e20: 938e                      MOVE   A12,*A14+,1
28e30: 938e                      MOVE   A12,*A14+,1
28e40: 0d5f 5120 0002            CALLA  25120h
28e70: ca29                      JREQ   29110h
28e80: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
28ea0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
28ec0: 0d5f 4210 0002            CALLA  24210h
28ef0: 4d0c                      MOVE   A8,A12
28f00: 4d88                      MOVE   A12,A8
28f10: 0d5f 49b0 0002            CALLA  249B0h
28f40: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
28f60: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
28f80: 0d5f b090 0002            CALLA  2B090h
28fb0: 4508                      SUB    A8,A8
28fc0: 930e                      MOVE   A8,*A14+,1
28fd0: 930e                      MOVE   A8,*A14+,1
28fe0: 0d5f 62c0 0002            CALLA  262C0h
29010: ca3b                      JREQ   293D0h
29020: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
29040: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
29060: 0d5f c4d0 0002            CALLA  2C4D0h
29090: a7c8                      MOVE   -*A14,A8,1
290a0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
290c0: a7c8                      MOVE   -*A14,A8,1
290d0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
290f0: 1828                      MOVK   1h,A8
29100: 510c                      AND    A8,A12
29110: 0b0e 0040                 ADDI   40h,A14
29130: a3cf                      MOVE   A14,-*SP,1
29140: 0b0e 0040                 ADDI   40h,A14
29160: a3cf                      MOVE   A14,-*SP,1
29170: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
29190: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
291b0: 0d5f 9bc0 0002            CALLA  29BC0h
291e0: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
29200: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
29220: 0d5f 6400 0002            CALLA  26400h
29250: 0d5f ca60 0002            CALLA  2CA60h
29280: a7c8                      MOVE   -*A14,A8,1
29290: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
292b0: a7c8                      MOVE   -*A14,A8,1
292c0: b30d ffc0                 MOVE   A8,*A13(FFC0h),1
292e0: 4d88                      MOVE   A12,A8
292f0: ca08                      JREQ   29380h
29300: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
29320: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
29340: 0d5f c4d0 0002            CALLA  2C4D0h
29370: c00c                      JR     29440h
29380: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
293a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
293c0: c007                      JR     29440h
293d0: 182c                      MOVK   1h,A12
293e0: 078c d860 0003            MOVE   A12,@3D860h,1
29410: 4508                      SUB    A8,A8
29420: 930e                      MOVE   A8,*A14+,1
29430: 930e                      MOVE   A8,*A14+,1
29440: b7ed 0060                 MOVE   *SP(60h),A13,1
29460: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
29490: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
294c0: b7ee 0060                 MOVE   *SP(60h),A14,1
294e0: 09af 3000                 MMFM   SP,A12,A13
29500: 0962                      RETS   2h

_strcat:
29510: 098f 022c                 MMTM   SP,A6,A10,A12,A13
29530: 4dcd                      MOVE   A14,A13
29540: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
29560: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
29580: 4d86                      MOVE   A12,A6
29590: 0568                      SETF   8h,1,0
295a0: 9588                      MOVE   *A12+,A8,0
295b0: cbfe                      JRNE   295A0h
295c0: 150c                      SUBK   8h,A12
295d0: 9548                      MOVE   *A10+,A8,0
295e0: 910c                      MOVE   A8,*A12+,0
295f0: cbfd                      JRNE   295D0h
29600: 4cc8                      MOVE   A6,A8
29610: b7ee 00a0                 MOVE   *SP(A0h),A14,1
29630: 09af 3440                 MMFM   SP,A6,A10,A12,A13
29650: 0962                      RETS   2h

_strchr:
29660: 098f 022c                 MMTM   SP,A6,A10,A12,A13
29680: 4dcd                      MOVE   A14,A13
29690: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
296b0: afa6 ffc0                 MOVB   *A13(FFC0h),A6
296d0: 0568                      SETF   8h,1,0
296e0: 954c                      MOVE   *A10+,A12,0
296f0: 48cc                      CMP    A6,A12
29700: ca04                      JREQ   29750h
29710: 4d8c                      MOVE   A12,A12
29720: cbfb                      JRNE   296E0h
29730: 4508                      SUB    A8,A8
29740: c002                      JR     29770h
29750: 4d48                      MOVE   A10,A8
29760: 1508                      SUBK   8h,A8
29770: b7ee 00a0                 MOVE   *SP(A0h),A14,1
29790: 09af 3440                 MMFM   SP,A6,A10,A12,A13
297b0: 0962                      RETS   2h

_strcpy:
297c0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
297e0: 4dcd                      MOVE   A14,A13
297f0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
29810: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
29830: 4d86                      MOVE   A12,A6
29840: 0568                      SETF   8h,1,0
29850: 9548                      MOVE   *A10+,A8,0
29860: 910c                      MOVE   A8,*A12+,0
29870: cbfd                      JRNE   29850h
29880: 4cc8                      MOVE   A6,A8
29890: b7ee 00a0                 MOVE   *SP(A0h),A14,1
298b0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
298d0: 0962                      RETS   2h

_strlen:
298e0: 098f 002c                 MMTM   SP,A10,A12,A13
29900: 4dcd                      MOVE   A14,A13
29910: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
29930: 09cc ffff                 MOVI   FFFFh,A12
29950: 0568                      SETF   8h,1,0
29960: 102c                      INC    A12
29970: 9548                      MOVE   *A10+,A8,0
29980: cbfd                      JRNE   29960h
29990: 4d88                      MOVE   A12,A8
299a0: b7ee 0080                 MOVE   *SP(80h),A14,1
299c0: 09af 3400                 MMFM   SP,A10,A12,A13
299e0: 0962                      RETS   2h

_strncmp:
299f0: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
29a10: 4dcd                      MOVE   A14,A13
29a20: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
29a40: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
29a60: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
29a80: 4d8c                      MOVE   A12,A12
29a90: ca0c                      JREQ   29B60h
29aa0: 0568                      SETF   8h,1,0
29ab0: 9544                      MOVE   *A10+,A4,0
29ac0: 94c2                      MOVE   *A6+,A2,0
29ad0: 4482                      SUB    A4,A2
29ae0: cb05                      JRNE   29B40h
29af0: 4c82                      MOVE   A4,A2
29b00: 0dcc fff9                 DSJNE  A12,29AB0h
29b20: 4508                      SUB    A8,A8
29b30: c003                      JR     29B70h
29b40: 4c48                      MOVE   A2,A8
29b50: c001                      JR     29B70h
29b60: 4508                      SUB    A8,A8
29b70: b7ee 00e0                 MOVE   *SP(E0h),A14,1
29b90: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
29bb0: 0962                      RETS   2h

__log:
29bc0: 098f 000c                 MMTM   SP,A12,A13
29be0: 4dcd                      MOVE   A14,A13
29bf0: 0b0e 0120                 ADDI   120h,A14
29c10: 0b0e 0040                 ADDI   40h,A14
29c30: a3cf                      MOVE   A14,-*SP,1
29c40: 93ae                      MOVE   A13,*A14+,1
29c50: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
29c70: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
29c90: 0d5f dbc0 0002            CALLA  2DBC0h
29cc0: a7c8                      MOVE   -*A14,A8,1
29cd0: b30d 0080                 MOVE   A8,*A13(80h),1
29cf0: a7c8                      MOVE   -*A14,A8,1
29d00: b30d 0060                 MOVE   A8,*A13(60h),1
29d20: d3ae 0060                 MOVE   *A13(60h),*A14+,1
29d40: d3ae 0080                 MOVE   *A13(80h),*A14+,1
29d60: 09e8 ef40 0002            MOVI   2EF40h,A8
29d90: 9b0e                      MOVE   *A8+,*A14+,1
29da0: 9b0e                      MOVE   *A8+,*A14+,1
29db0: 0d5f 5160 0002            CALLA  25160h
29de0: ca37                      JREQ   2A160h
29df0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
29e10: d3ae 0080                 MOVE   *A13(80h),*A14+,1
29e30: 4508                      SUB    A8,A8
29e40: 09ec 0000 3fe0            MOVI   3FE00000h,A12
29e70: 938e                      MOVE   A12,*A14+,1
29e80: 930e                      MOVE   A8,*A14+,1
29e90: 0d5f b200 0002            CALLA  2B200h
29ec0: 4508                      SUB    A8,A8
29ed0: 938e                      MOVE   A12,*A14+,1
29ee0: 930e                      MOVE   A8,*A14+,1
29ef0: 0d5f b200 0002            CALLA  2B200h
29f20: a7c8                      MOVE   -*A14,A8,1
29f30: b30d 0040                 MOVE   A8,*A13(40h),1
29f50: a7c8                      MOVE   -*A14,A8,1
29f60: b30d 0020                 MOVE   A8,*A13(20h),1
29f80: d3ae 0060                 MOVE   *A13(60h),*A14+,1
29fa0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
29fc0: 4508                      SUB    A8,A8
29fd0: 938e                      MOVE   A12,*A14+,1
29fe0: 930e                      MOVE   A8,*A14+,1
29ff0: 0d5f 6400 0002            CALLA  26400h
2a020: 4508                      SUB    A8,A8
2a030: 938e                      MOVE   A12,*A14+,1
2a040: 930e                      MOVE   A8,*A14+,1
2a050: 0d5f b370 0002            CALLA  2B370h
2a080: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2a0a0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2a0c0: 0d5f 56a0 0002            CALLA  256A0h
2a0f0: a7c8                      MOVE   -*A14,A8,1
2a100: b30d 0040                 MOVE   A8,*A13(40h),1
2a120: a7c8                      MOVE   -*A14,A8,1
2a130: b30d 0020                 MOVE   A8,*A13(20h),1
2a150: c033                      JR     2A490h
2a160: 87ac                      MOVE   *A13,A12,1
2a170: 142c                      DEC    A12
2a180: 838d                      MOVE   A12,*A13,1
2a190: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2a1b0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2a1d0: 4508                      SUB    A8,A8
2a1e0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
2a210: 938e                      MOVE   A12,*A14+,1
2a220: 930e                      MOVE   A8,*A14+,1
2a230: 0d5f b200 0002            CALLA  2B200h
2a260: a7c8                      MOVE   -*A14,A8,1
2a270: b30d 0040                 MOVE   A8,*A13(40h),1
2a290: a7c8                      MOVE   -*A14,A8,1
2a2a0: b30d 0020                 MOVE   A8,*A13(20h),1
2a2c0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2a2e0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2a300: 4508                      SUB    A8,A8
2a310: 938e                      MOVE   A12,*A14+,1
2a320: 930e                      MOVE   A8,*A14+,1
2a330: 0d5f 6400 0002            CALLA  26400h
2a360: 4508                      SUB    A8,A8
2a370: 938e                      MOVE   A12,*A14+,1
2a380: 930e                      MOVE   A8,*A14+,1
2a390: 0d5f b370 0002            CALLA  2B370h
2a3c0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2a3e0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2a400: 0d5f 56a0 0002            CALLA  256A0h
2a430: a7c8                      MOVE   -*A14,A8,1
2a440: b30d 0040                 MOVE   A8,*A13(40h),1
2a460: a7c8                      MOVE   -*A14,A8,1
2a470: b30d 0020                 MOVE   A8,*A13(20h),1
2a490: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2a4b0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2a4d0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2a4f0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2a510: 0d5f 6400 0002            CALLA  26400h
2a540: a7c8                      MOVE   -*A14,A8,1
2a550: b30d 0080                 MOVE   A8,*A13(80h),1
2a570: a7c8                      MOVE   -*A14,A8,1
2a580: b30d 0060                 MOVE   A8,*A13(60h),1
2a5a0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2a5c0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2a5e0: 09e8 ef80 0002            MOVI   2EF80h,A8
2a610: 9b0e                      MOVE   *A8+,*A14+,1
2a620: 9b0e                      MOVE   *A8+,*A14+,1
2a630: 0d5f 6400 0002            CALLA  26400h
2a660: 09e8 efc0 0002            MOVI   2EFC0h,A8
2a690: 9b0e                      MOVE   *A8+,*A14+,1
2a6a0: 9b0e                      MOVE   *A8+,*A14+,1
2a6b0: 0d5f b370 0002            CALLA  2B370h
2a6e0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2a700: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2a720: 0d5f 6400 0002            CALLA  26400h
2a750: 09e8 f000 0002            MOVI   2F000h,A8
2a780: 9b0e                      MOVE   *A8+,*A14+,1
2a790: 9b0e                      MOVE   *A8+,*A14+,1
2a7a0: 0d5f b370 0002            CALLA  2B370h
2a7d0: a7c8                      MOVE   -*A14,A8,1
2a7e0: b30d 0100                 MOVE   A8,*A13(100h),1
2a800: a7c8                      MOVE   -*A14,A8,1
2a810: b30d 00e0                 MOVE   A8,*A13(E0h),1
2a830: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2a850: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2a870: 09e8 f040 0002            MOVI   2F040h,A8
2a8a0: 9b0e                      MOVE   *A8+,*A14+,1
2a8b0: 9b0e                      MOVE   *A8+,*A14+,1
2a8c0: 0d5f b370 0002            CALLA  2B370h
2a8f0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2a910: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2a930: 0d5f 6400 0002            CALLA  26400h
2a960: 09e8 f080 0002            MOVI   2F080h,A8
2a990: 9b0e                      MOVE   *A8+,*A14+,1
2a9a0: 9b0e                      MOVE   *A8+,*A14+,1
2a9b0: 0d5f b370 0002            CALLA  2B370h
2a9e0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2aa00: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2aa20: 0d5f 6400 0002            CALLA  26400h
2aa50: 09e8 f0c0 0002            MOVI   2F0C0h,A8
2aa80: 9b0e                      MOVE   *A8+,*A14+,1
2aa90: 9b0e                      MOVE   *A8+,*A14+,1
2aaa0: 0d5f b370 0002            CALLA  2B370h
2aad0: a7c8                      MOVE   -*A14,A8,1
2aae0: b30d 00c0                 MOVE   A8,*A13(C0h),1
2ab00: a7c8                      MOVE   -*A14,A8,1
2ab10: b30d 00a0                 MOVE   A8,*A13(A0h),1
2ab30: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2ab50: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2ab70: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2ab90: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2abb0: 0d5f 6400 0002            CALLA  26400h
2abe0: d3ae 00e0                 MOVE   *A13(E0h),*A14+,1
2ac00: d3ae 0100                 MOVE   *A13(100h),*A14+,1
2ac20: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
2ac40: d3ae 00c0                 MOVE   *A13(C0h),*A14+,1
2ac60: 0d5f 5810 0002            CALLA  25810h
2ac90: 0d5f 6400 0002            CALLA  26400h
2acc0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2ace0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2ad00: 0d5f b370 0002            CALLA  2B370h
2ad30: a7c8                      MOVE   -*A14,A8,1
2ad40: b30d 0040                 MOVE   A8,*A13(40h),1
2ad60: a7c8                      MOVE   -*A14,A8,1
2ad70: b30d 0020                 MOVE   A8,*A13(20h),1
2ad90: 87a8                      MOVE   *A13,A8,1
2ada0: 0d5f 49b0 0002            CALLA  249B0h
2add0: 09e8 f100 0002            MOVI   2F100h,A8
2ae00: 9b0e                      MOVE   *A8+,*A14+,1
2ae10: 9b0e                      MOVE   *A8+,*A14+,1
2ae20: 0d5f 6400 0002            CALLA  26400h
2ae50: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2ae70: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2ae90: 0d5f b370 0002            CALLA  2B370h
2aec0: 87a8                      MOVE   *A13,A8,1
2aed0: 0d5f 49b0 0002            CALLA  249B0h
2af00: 4508                      SUB    A8,A8
2af10: 09ec 3000 3fe6            MOVI   3FE63000h,A12
2af40: 938e                      MOVE   A12,*A14+,1
2af50: 930e                      MOVE   A8,*A14+,1
2af60: 0d5f 6400 0002            CALLA  26400h
2af90: 0d5f b370 0002            CALLA  2B370h
2afc0: b7ed 0060                 MOVE   *SP(60h),A13,1
2afe0: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2b010: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2b040: b7ee 0060                 MOVE   *SP(60h),A14,1
2b060: 09af 3000                 MMFM   SP,A12,A13
2b080: 0962                      RETS   2h

FD$SUB_R:
2b090: 07a8 0000 0000            MOVE   @0h,A8,1
2b0c0: ca3f                      JREQ   2B4C0h
2b0d0: 4dc8                      MOVE   A14,A8
2b0e0: 0be8 ff7f                 SUBI   80h,A8
2b100: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
2b130: d83f 0060                 CEXEC  1,000C1F,0
2b150: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
2b180: 0bee ff7f                 SUBI   80h,A14
2b1a0: d803 0000                 CEXEC  1,000001,0
2b1c0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
2b1f0: 0960                      RETS   

FD$SUB:
2b200: 07a8 0000 0000            MOVE   @0h,A8,1
2b230: ca32                      JREQ   2B560h
2b240: 4dc8                      MOVE   A14,A8
2b250: 0be8 ff7f                 SUBI   80h,A8
2b270: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
2b2a0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
2b2d0: d83f 0060                 CEXEC  1,000C1F,0
2b2f0: 0bee ff7f                 SUBI   80h,A14
2b310: d803 0000                 CEXEC  1,000001,0
2b330: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
2b360: 0960                      RETS   

FD$ADD:
2b370: 07a8 0000 0000            MOVE   @0h,A8,1
2b3a0: ca23                      JREQ   2B5E0h
2b3b0: 4dc8                      MOVE   A14,A8
2b3c0: 0be8 ff7f                 SUBI   80h,A8
2b3e0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
2b410: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
2b440: 0bee ff7f                 SUBI   80h,A14
2b460: d803 0000                 CEXEC  1,000001,0
2b480: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
2b4b0: 0960                      RETS   
2b4c0: 098f ff00                 MMTM   SP,A0-A7
2b4e0: a7c4                      MOVE   -*A14,A4,1
2b4f0: a7c3                      MOVE   -*A14,A3,1
2b500: a7c6                      MOVE   -*A14,A6,1
2b510: a7c5                      MOVE   -*A14,A5,1
2b520: 0bc5 0000 8000            XORI   80000000h,A5
2b550: c00e                      JR     2B640h
2b560: 098f ff00                 MMTM   SP,A0-A7
2b580: a7c6                      MOVE   -*A14,A6,1
2b590: a7c5                      MOVE   -*A14,A5,1
2b5a0: 0bc5 0000 8000            XORI   80000000h,A5
2b5d0: c004                      JR     2B620h
2b5e0: 098f ff00                 MMTM   SP,A0-A7
2b600: a7c6                      MOVE   -*A14,A6,1
2b610: a7c5                      MOVE   -*A14,A5,1
2b620: a7c4                      MOVE   -*A14,A4,1
2b630: a7c3                      MOVE   -*A14,A3,1
2b640: 4c61                      MOVE   A3,A1
2b650: 2421                      SLL    1h,A1
2b660: ca00 00a8                 JREQ   2C100h
2b680: 4ca2                      MOVE   A5,A2
2b690: 2422                      SLL    1h,A2
2b6a0: ca00 009c                 JREQ   2C080h
2b6c0: 4c61                      MOVE   A3,A1
2b6d0: 4ca2                      MOVE   A5,A2
2b6e0: 2583                      SLL    Ch,A3
2b6f0: 2fa3                      SRL    3h,A3
2b700: 0ba3 0000 2000            ORI    20000000h,A3
2b730: 4c88                      MOVE   A4,A8
2b740: ca03                      JREQ   2B780h
2b750: 2d28                      SRL    17h,A8
2b760: 5503                      OR     A8,A3
2b770: 2524                      SLL    9h,A4
2b780: 2585                      SLL    Ch,A5
2b790: 2fa5                      SRL    3h,A5
2b7a0: 0ba5 0000 2000            ORI    20000000h,A5
2b7d0: 4cc8                      MOVE   A6,A8
2b7e0: ca03                      JREQ   2B820h
2b7f0: 2d28                      SRL    17h,A8
2b800: 5505                      OR     A8,A5
2b810: 2526                      SLL    9h,A6
2b820: 2421                      SLL    1h,A1
2b830: 4600                      SUBB   A0,A0
2b840: 2422                      SLL    1h,A2
2b850: 4708                      SUBB   A8,A8
2b860: 2d61                      SRL    15h,A1
2b870: 2d62                      SRL    15h,A2
2b880: 09c7 07ff                 MOVI   7FFh,A7
2b8a0: 48e1                      CMP    A7,A1
2b8b0: ca00 0086                 JREQ   2C130h
2b8d0: 48e2                      CMP    A7,A2
2b8e0: ca00 0088                 JREQ   2C180h
2b900: 4441                      SUB    A2,A1
2b910: ca03                      JREQ   2B950h
2b920: c608                      JRLE   2B9B0h
2b930: 4022                      ADD    A1,A2
2b940: c010                      JR     2BA50h
2b950: 4865                      CMP    A3,A5
2b960: c40e                      JRLT   2BA50h
2b970: c704                      JRGT   2B9C0h
2b980: 4886                      CMP    A4,A6
2b990: c20b                      JRLS   2BA50h
2b9a0: c004                      JR     2B9F0h
2b9b0: 03a1                      NEG    A1
2b9c0: 4c67                      MOVE   A3,A7
2b9d0: 4ca3                      MOVE   A5,A3
2b9e0: 4ce5                      MOVE   A7,A5
2b9f0: 4c87                      MOVE   A4,A7
2ba00: 4cc4                      MOVE   A6,A4
2ba10: 4ce6                      MOVE   A7,A6
2ba20: 4c07                      MOVE   A0,A7
2ba30: 4d00                      MOVE   A8,A0
2ba40: 4ce8                      MOVE   A7,A8
2ba50: 4c21                      MOVE   A1,A1
2ba60: ca18                      JREQ   2BBF0h
2ba70: 0b41 ffe1                 CMPI   1Eh,A1
2ba90: c40e                      JRLT   2BB80h
2baa0: 0b41 ffc2                 CMPI   3Dh,A1
2bac0: c708                      JRGT   2BB50h
2bad0: 17c1                      SUBK   1Eh,A1
2bae0: 2445                      SLL    2h,A5
2baf0: 2c46                      SRL    1Eh,A6
2bb00: 54a6                      OR     A5,A6
2bb10: 56a5                      CLR    A5
2bb20: 03a1                      NEG    A1
2bb30: 6626                      SRL    A1,A6
2bb40: c00a                      JR     2BBF0h
2bb50: 56a5                      CLR    A5
2bb60: 56c6                      CLR    A6
2bb70: c007                      JR     2BBF0h
2bb80: 4ca7                      MOVE   A5,A7
2bb90: 03a1                      NEG    A1
2bba0: 6625                      SRL    A1,A5
2bbb0: 6626                      SRL    A1,A6
2bbc0: 1001                      ADDK   20h,A1
2bbd0: 6227                      SLL    A1,A7
2bbe0: 54e6                      OR     A7,A6
2bbf0: 4808                      CMP    A0,A8
2bc00: ca27                      JREQ   2BE80h
2bc10: 44c4                      SUB    A6,A4
2bc20: 46a3                      SUBB   A5,A3
2bc30: 6a67                      LMO    A3,A7
2bc40: ca0a                      JREQ   2BCF0h
2bc50: 1447                      SUBK   2h,A7
2bc60: ca10                      JREQ   2BD70h
2bc70: 44e2                      SUB    A7,A2
2bc80: 62e3                      SLL    A7,A3
2bc90: 4c81                      MOVE   A4,A1
2bca0: 62e4                      SLL    A7,A4
2bcb0: 1407                      SUBK   20h,A7
2bcc0: 66e1                      SRL    A7,A1
2bcd0: 5423                      OR     A1,A3
2bce0: c008                      JR     2BD70h
2bcf0: 6a87                      LMO    A4,A7
2bd00: ca3c                      JREQ   2C0D0h
2bd10: 17c2                      SUBK   1Eh,A2
2bd20: 68e4                      RL     A7,A4
2bd30: 4c83                      MOVE   A4,A3
2bd40: 2fc3                      SRL    2h,A3
2bd50: 27c4                      SLL    1Eh,A4
2bd60: 44e2                      SUB    A7,A2
2bd70: 56e7                      CLR    A7
2bd80: 1ee4                      BTST   8h,A4
2bd90: ca07                      JREQ   2BE10h
2bda0: 0b04 0100                 ADDI   100h,A4
2bdc0: 42e3                      ADDC   A7,A3
2bdd0: 1c23                      BTST   1Eh,A3
2bde0: ca02                      JREQ   2BE10h
2bdf0: 1022                      INC    A2
2be00: c003                      JR     2BE40h
2be10: 2423                      SLL    1h,A3
2be20: 2424                      SLL    1h,A4
2be30: 42e3                      ADDC   A7,A3
2be40: 0b83 0000 c000            ANDI   3FFFFFFFh,A3
2be70: c00c                      JR     2BF40h
2be80: 40c4                      ADD    A6,A4
2be90: 42a3                      ADDC   A5,A3
2bea0: 1c23                      BTST   1Eh,A3
2beb0: caeb                      JREQ   2BD70h
2bec0: 1022                      INC    A2
2bed0: 2fe4                      SRL    1h,A4
2bee0: 2fe3                      SRL    1h,A3
2bef0: c9e7                      JRNC   2BD70h
2bf00: 0ba4 0000 8000            ORI    80000000h,A4
2bf30: c0e3                      JR     2BD70h
2bf40: 4c42                      MOVE   A2,A2
2bf50: c437                      JRLT   2C2D0h
2bf60: cb05                      JRNE   2BFC0h
2bf70: 4c63                      MOVE   A3,A3
2bf80: cb34                      JRNE   2C2D0h
2bf90: 4c84                      MOVE   A4,A4
2bfa0: cb32                      JRNE   2C2D0h
2bfb0: c011                      JR     2C0D0h
2bfc0: 0b42 f800                 CMPI   7FFh,A2
2bfe0: c527                      JRGE   2C260h
2bff0: 4c68                      MOVE   A3,A8
2c000: 2ec3                      SRL    Ah,A3
2c010: 2ec4                      SRL    Ah,A4
2c020: 26c8                      SLL    16h,A8
2c030: 5504                      OR     A8,A4
2c040: 27e0                      SLL    1Fh,A0
2c050: 2682                      SLL    14h,A2
2c060: 5443                      OR     A2,A3
2c070: 5403                      OR     A0,A3
2c080: 926e                      MOVE   A3,*A14+,1
2c090: 928e                      MOVE   A4,*A14+,1
2c0a0: 09af 00ff                 MMFM   SP,A0-A7
2c0c0: 0960                      RETS   
2c0d0: 5663                      CLR    A3
2c0e0: 5684                      CLR    A4
2c0f0: c0f8                      JR     2C080h
2c100: 4ca3                      MOVE   A5,A3
2c110: 4cc4                      MOVE   A6,A4
2c120: c0f5                      JR     2C080h
2c130: 48e2                      CMP    A7,A2
2c140: cb04                      JRNE   2C190h
2c150: 4808                      CMP    A0,A8
2c160: cb0c                      JRNE   2C230h
2c170: c001                      JR     2C190h
2c180: 4d00                      MOVE   A8,A0
2c190: 5621                      CLR    A1
2c1a0: 27e0                      SLL    1Fh,A0
2c1b0: 0ba0 0000 7ff0            ORI    7FF00000h,A0
2c1e0: 920e                      MOVE   A0,*A14+,1
2c1f0: 922e                      MOVE   A1,*A14+,1
2c200: 09af 00ff                 MMFM   SP,A0-A7
2c220: 0960                      RETS   
2c230: 5663                      CLR    A3
2c240: 1880                      MOVK   4h,A0
2c250: c009                      JR     2C2F0h
2c260: 4c03                      MOVE   A0,A3
2c270: 27e3                      SLL    1Fh,A3
2c280: 0ba3 0000 7ff0            ORI    7FF00000h,A3
2c2b0: 18a0                      MOVK   5h,A0
2c2c0: c002                      JR     2C2F0h
2c2d0: 1980                      MOVK   Ch,A0
2c2e0: 5663                      CLR    A3
2c2f0: a3cf                      MOVE   A14,-*SP,1
2c300: 920e                      MOVE   A0,*A14+,1
2c310: 0d5f 7f10 0002            CALLA  27F10h
2c340: 5621                      CLR    A1
2c350: 926e                      MOVE   A3,*A14+,1
2c360: 922e                      MOVE   A1,*A14+,1
2c370: 09af 00ff                 MMFM   SP,A0-A7
2c390: 0960                      RETS   

FD$NE:
2c3a0: 098f b800                 MMTM   SP,A0,A2-A4
2c3c0: a7c2                      MOVE   -*A14,A2,1
2c3d0: a7c0                      MOVE   -*A14,A0,1
2c3e0: a7c3                      MOVE   -*A14,A3,1
2c3f0: a7c4                      MOVE   -*A14,A4,1
2c400: 5708                      CLR    A8
2c410: 4804                      CMP    A0,A4
2c420: cb06                      JRNE   2C490h
2c430: 4843                      CMP    A2,A3
2c440: ca01                      JREQ   2C460h
2c450: 1028                      INC    A8
2c460: 09af 001d                 MMFM   SP,A0,A2-A4
2c480: 0960                      RETS   
2c490: 1028                      INC    A8
2c4a0: 09af 001d                 MMFM   SP,A0,A2-A4
2c4c0: 0960                      RETS   

FD$NEG:
2c4d0: b7c8 ffc0                 MOVE   *A14(FFC0h),A8,1
2c4f0: ca03                      JREQ   2C530h
2c500: 0bc8 0000 8000            XORI   80000000h,A8
2c530: b30e ffc0                 MOVE   A8,*A14(FFC0h),1
2c550: 0960                      RETS   

_atoi:
2c560: 098f 402c                 MMTM   SP,A1,A10,A12,A13
2c580: 4dcd                      MOVE   A14,A13
2c590: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
2c5b0: 4421                      SUB    A1,A1
2c5c0: 8f88                      MOVB   *A12,A8
2c5d0: 2468                      SLL    3h,A8
2c5e0: 0b28 d048 0003            ADDI   3D048h,A8
2c610: 0548                      SETF   8h,0,0
2c620: 8508                      MOVE   *A8,A8,0
2c630: 1f88                      BTST   3h,A8
2c640: ca09                      JREQ   2C6E0h
2c650: 110c                      ADDK   8h,A12
2c660: 8f88                      MOVB   *A12,A8
2c670: 2468                      SLL    3h,A8
2c680: 0b28 d048 0003            ADDI   3D048h,A8
2c6b0: 8508                      MOVE   *A8,A8,0
2c6c0: 1f88                      BTST   3h,A8
2c6d0: cbf7                      JRNE   2C650h
2c6e0: 8f8a                      MOVB   *A12,A10
2c6f0: 0b4a ffd2                 CMPI   2Dh,A10
2c710: ca0f                      JREQ   2C810h
2c720: 45de                      SUB    B14,B14
2c730: 0b4a ffd4                 CMPI   2Bh,A10
2c750: cb0e                      JRNE   2C840h
2c760: 110c                      ADDK   8h,A12
2c770: 8f8a                      MOVB   *A12,A10
2c780: 4d48                      MOVE   A10,A8
2c790: 2468                      SLL    3h,A8
2c7a0: 0b28 d048 0003            ADDI   3D048h,A8
2c7d0: 8508                      MOVE   *A8,A8,0
2c7e0: 1fa8                      BTST   2h,A8
2c7f0: cb0c                      JRNE   2C8C0h
2c800: c01c                      JR     2C9D0h
2c810: 183e                      MOVK   1h,B14
2c820: 110c                      ADDK   8h,A12
2c830: 8f8a                      MOVB   *A12,A10
2c840: 4d48                      MOVE   A10,A8
2c850: 2468                      SLL    3h,A8
2c860: 0b28 d048 0003            ADDI   3D048h,A8
2c890: 8508                      MOVE   *A8,A8,0
2c8a0: 1fa8                      BTST   2h,A8
2c8b0: ca11                      JREQ   2C9D0h
2c8c0: 4c28                      MOVE   A1,A8
2c8d0: 2461                      SLL    3h,A1
2c8e0: 2428                      SLL    1h,A8
2c8f0: 4101                      ADD    A8,A1
2c900: 4141                      ADD    A10,A1
2c910: 0be1 ffcf                 SUBI   30h,A1
2c930: 110c                      ADDK   8h,A12
2c940: 8f8a                      MOVB   *A12,A10
2c950: 4d48                      MOVE   A10,A8
2c960: 2468                      SLL    3h,A8
2c970: 0b28 d048 0003            ADDI   3D048h,A8
2c9a0: 8508                      MOVE   *A8,A8,0
2c9b0: 1fa8                      BTST   2h,A8
2c9c0: cbef                      JRNE   2C8C0h
2c9d0: 4fd8                      MOVE   B14,A8
2c9e0: ca01                      JREQ   2CA00h
2c9f0: 03a1                      NEG    A1
2ca00: 4c28                      MOVE   A1,A8
2ca10: b7ee 00a0                 MOVE   *SP(A0h),A14,1
2ca30: 09af 3402                 MMFM   SP,A1,A10,A12,A13
2ca50: 0962                      RETS   2h

_exp:
2ca60: 098f 002c                 MMTM   SP,A10,A12,A13
2ca80: 4dcd                      MOVE   A14,A13
2ca90: 0b0e 0080                 ADDI   80h,A14
2cab0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2cad0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2caf0: 09e8 f140 0002            MOVI   2F140h,A8
2cb20: 9b0e                      MOVE   *A8+,*A14+,1
2cb30: 9b0e                      MOVE   *A8+,*A14+,1
2cb40: 0d5f 5100 0002            CALLA  25100h
2cb70: ca00 00ed                 JREQ   2DA60h
2cb90: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2cbb0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2cbd0: 4508                      SUB    A8,A8
2cbe0: 930e                      MOVE   A8,*A14+,1
2cbf0: 930e                      MOVE   A8,*A14+,1
2cc00: 0d5f 5120 0002            CALLA  25120h
2cc30: ca1a                      JREQ   2CDE0h
2cc40: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2cc60: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2cc80: 09e8 f180 0002            MOVI   2F180h,A8
2ccb0: 9b0e                      MOVE   *A8+,*A14+,1
2ccc0: 9b0e                      MOVE   *A8+,*A14+,1
2ccd0: 0d5f 6400 0002            CALLA  26400h
2cd00: 4508                      SUB    A8,A8
2cd10: 09ea 0000 3fe0            MOVI   3FE00000h,A10
2cd40: 934e                      MOVE   A10,*A14+,1
2cd50: 930e                      MOVE   A8,*A14+,1
2cd60: 0d5f b200 0002            CALLA  2B200h
2cd90: 0d5f 4210 0002            CALLA  24210h
2cdc0: 4d0c                      MOVE   A8,A12
2cdd0: c019                      JR     2CF70h
2cde0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2ce00: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2ce20: 09ea f180 0002            MOVI   2F180h,A10
2ce50: 9b4e                      MOVE   *A10+,*A14+,1
2ce60: 9b4e                      MOVE   *A10+,*A14+,1
2ce70: 0d5f 6400 0002            CALLA  26400h
2cea0: 454a                      SUB    A10,A10
2ceb0: 09e8 0000 3fe0            MOVI   3FE00000h,A8
2cee0: 930e                      MOVE   A8,*A14+,1
2cef0: 934e                      MOVE   A10,*A14+,1
2cf00: 0d5f b370 0002            CALLA  2B370h
2cf30: 0d5f 4210 0002            CALLA  24210h
2cf60: 4d0c                      MOVE   A8,A12
2cf70: 4d88                      MOVE   A12,A8
2cf80: 0d5f 49b0 0002            CALLA  249B0h
2cfb0: 454a                      SUB    A10,A10
2cfc0: 09e8 3000 3fe6            MOVI   3FE63000h,A8
2cff0: 930e                      MOVE   A8,*A14+,1
2d000: 934e                      MOVE   A10,*A14+,1
2d010: 0d5f 6400 0002            CALLA  26400h
2d040: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2d060: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2d080: 0d5f b090 0002            CALLA  2B090h
2d0b0: 4d88                      MOVE   A12,A8
2d0c0: 0d5f 49b0 0002            CALLA  249B0h
2d0f0: 09e8 f1c0 0002            MOVI   2F1C0h,A8
2d120: 9b0e                      MOVE   *A8+,*A14+,1
2d130: 9b0e                      MOVE   *A8+,*A14+,1
2d140: 0d5f 6400 0002            CALLA  26400h
2d170: 0d5f b200 0002            CALLA  2B200h
2d1a0: a7c8                      MOVE   -*A14,A8,1
2d1b0: b30d 0020                 MOVE   A8,*A13(20h),1
2d1d0: a7c8                      MOVE   -*A14,A8,1
2d1e0: 830d                      MOVE   A8,*A13,1
2d1f0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2d210: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d230: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2d250: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d270: 0d5f 6400 0002            CALLA  26400h
2d2a0: a7c8                      MOVE   -*A14,A8,1
2d2b0: b30d 0060                 MOVE   A8,*A13(60h),1
2d2d0: a7c8                      MOVE   -*A14,A8,1
2d2e0: b30d 0040                 MOVE   A8,*A13(40h),1
2d300: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d320: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d340: 09e8 f200 0002            MOVI   2F200h,A8
2d370: 9b0e                      MOVE   *A8+,*A14+,1
2d380: 9b0e                      MOVE   *A8+,*A14+,1
2d390: 0d5f 6400 0002            CALLA  26400h
2d3c0: 09e8 f240 0002            MOVI   2F240h,A8
2d3f0: 9b0e                      MOVE   *A8+,*A14+,1
2d400: 9b0e                      MOVE   *A8+,*A14+,1
2d410: 0d5f b370 0002            CALLA  2B370h
2d440: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d460: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d480: 0d5f 6400 0002            CALLA  26400h
2d4b0: 09e8 0000 3fd0            MOVI   3FD00000h,A8
2d4e0: 930e                      MOVE   A8,*A14+,1
2d4f0: 934e                      MOVE   A10,*A14+,1
2d500: 0d5f b370 0002            CALLA  2B370h
2d530: 9bae                      MOVE   *A13+,*A14+,1
2d540: 9bae                      MOVE   *A13+,*A14+,1
2d550: 0d5f 6400 0002            CALLA  26400h
2d580: abcd                      MOVE   -*A14,-*A13,1
2d590: abcd                      MOVE   -*A14,-*A13,1
2d5a0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d5c0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d5e0: 09e8 f280 0002            MOVI   2F280h,A8
2d610: 9b0e                      MOVE   *A8+,*A14+,1
2d620: 9b0e                      MOVE   *A8+,*A14+,1
2d630: 0d5f 6400 0002            CALLA  26400h
2d660: 09e8 f2c0 0002            MOVI   2F2C0h,A8
2d690: 9b0e                      MOVE   *A8+,*A14+,1
2d6a0: 9b0e                      MOVE   *A8+,*A14+,1
2d6b0: 0d5f b370 0002            CALLA  2B370h
2d6e0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d700: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d720: 0d5f 6400 0002            CALLA  26400h
2d750: 09e8 0000 3fe0            MOVI   3FE00000h,A8
2d780: 930e                      MOVE   A8,*A14+,1
2d790: 934e                      MOVE   A10,*A14+,1
2d7a0: 0d5f b370 0002            CALLA  2B370h
2d7d0: a7c8                      MOVE   -*A14,A8,1
2d7e0: b30d 0060                 MOVE   A8,*A13(60h),1
2d800: a7c8                      MOVE   -*A14,A8,1
2d810: b30d 0040                 MOVE   A8,*A13(40h),1
2d830: 0b0e 0040                 ADDI   40h,A14
2d850: a3cf                      MOVE   A14,-*SP,1
2d860: 102c                      INC    A12
2d870: 938e                      MOVE   A12,*A14+,1
2d880: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d8a0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d8c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2d8e0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d900: 0d5f b200 0002            CALLA  2B200h
2d930: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2d950: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d970: 0d5f 56a0 0002            CALLA  256A0h
2d9a0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
2d9d0: 938e                      MOVE   A12,*A14+,1
2d9e0: 934e                      MOVE   A10,*A14+,1
2d9f0: 0d5f b370 0002            CALLA  2B370h
2da20: 0d5f df50 0002            CALLA  2DF50h
2da50: c009                      JR     2DAF0h
2da60: 184c                      MOVK   2h,A12
2da70: 078c d860 0003            MOVE   A12,@3D860h,1
2daa0: 09ea f300 0002            MOVI   2F300h,A10
2dad0: 9b4e                      MOVE   *A10+,*A14+,1
2dae0: 9b4e                      MOVE   *A10+,*A14+,1
2daf0: b7ed 0080                 MOVE   *SP(80h),A13,1
2db10: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2db40: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2db70: b7ee 0080                 MOVE   *SP(80h),A14,1
2db90: 09af 3400                 MMFM   SP,A10,A12,A13
2dbb0: 0962                      RETS   2h

_frexp:
2dbc0: 098f 002c                 MMTM   SP,A10,A12,A13
2dbe0: 4dcd                      MOVE   A14,A13
2dbf0: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
2dc10: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2dc30: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2dc50: 4508                      SUB    A8,A8
2dc60: 930e                      MOVE   A8,*A14+,1
2dc70: 930e                      MOVE   A8,*A14+,1
2dc80: 0d5f c3a0 0002            CALLA  2C3A0h
2dcb0: ca16                      JREQ   2DE20h
2dcc0: 4dac                      MOVE   A13,A12
2dcd0: 0bec ffbf                 SUBI   40h,A12
2dcf0: 8788                      MOVE   *A12,A8,1
2dd00: 2988                      SRA    14h,A8
2dd10: 0b88 f800 ffff            ANDI   7FFh,A8
2dd40: 0be8 fc01                 SUBI   3FEh,A8
2dd60: 830a                      MOVE   A8,*A10,1
2dd70: 8788                      MOVE   *A12,A8,1
2dd80: 0b88 0000 7ff0            ANDI   800FFFFFh,A8
2ddb0: 0b28 0000 3fe0            ADDI   3FE00000h,A8
2dde0: 830c                      MOVE   A8,*A12,1
2ddf0: 9b8e                      MOVE   *A12+,*A14+,1
2de00: 9b8e                      MOVE   *A12+,*A14+,1
2de10: c006                      JR     2DE80h
2de20: 458c                      SUB    A12,A12
2de30: 838a                      MOVE   A12,*A10,1
2de40: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2de60: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2de80: b7ed 0080                 MOVE   *SP(80h),A13,1
2dea0: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2ded0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2df00: b7ee 0080                 MOVE   *SP(80h),A14,1
2df20: 09af 3400                 MMFM   SP,A10,A12,A13
2df40: 0962                      RETS   2h

_ldexp:
2df50: 098f 002c                 MMTM   SP,A10,A12,A13
2df70: 4dcd                      MOVE   A14,A13
2df80: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
2dfa0: 4daa                      MOVE   A13,A10
2dfb0: 0bea ffbf                 SUBI   40h,A10
2dfd0: 8748                      MOVE   *A10,A8,1
2dfe0: 2988                      SRA    14h,A8
2dff0: 0b88 f800 ffff            ANDI   7FFh,A8
2e020: 410c                      ADD    A8,A12
2e030: c613                      JRLE   2E170h
2e040: 0b4c f800                 CMPI   7FFh,A12
2e060: c70a                      JRGT   2E110h
2e070: 8748                      MOVE   *A10,A8,1
2e080: 0b88 0000 7ff0            ANDI   800FFFFFh,A8
2e0b0: 268c                      SLL    14h,A12
2e0c0: 5588                      OR     A12,A8
2e0d0: 830a                      MOVE   A8,*A10,1
2e0e0: 9b4e                      MOVE   *A10+,*A14+,1
2e0f0: 9b4e                      MOVE   *A10+,*A14+,1
2e100: c009                      JR     2E1A0h
2e110: 09ec f340 0002            MOVI   2F340h,A12
2e140: 9b8e                      MOVE   *A12+,*A14+,1
2e150: 9b8e                      MOVE   *A12+,*A14+,1
2e160: c003                      JR     2E1A0h
2e170: 458c                      SUB    A12,A12
2e180: 938e                      MOVE   A12,*A14+,1
2e190: 938e                      MOVE   A12,*A14+,1
2e1a0: b7ed 0080                 MOVE   *SP(80h),A13,1
2e1c0: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2e1f0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2e220: b7ee 0080                 MOVE   *SP(80h),A14,1
2e240: 09af 3400                 MMFM   SP,A10,A12,A13
2e260: 0962                      RETS   2h
