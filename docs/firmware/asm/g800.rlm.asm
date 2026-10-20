; g800.rlm .text, 15718 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_ImageExportProcess:
00000: a3af                      MOVE   A13,-*SP,1
00010: 4dcd                      MOVE   A14,A13
00020: 100e                      ADDK   20h,A14
00030: a3cf                      MOVE   A14,-*SP,1
00040: 09c8 00a0                 MOVI   A0h,A8
00060: 930e                      MOVE   A8,*A14+,1
00070: 09e8 0c40 0004            MOVI   40C40h,A8
000a0: 930e                      MOVE   A8,*A14+,1
000b0: 09e8 4149 5846            MOVI   58464149h,A8
000e0: 930e                      MOVE   A8,*A14+,1
000f0: 1b88                      MOVK   1Ch,A8
00100: 930e                      MOVE   A8,*A14+,1
00110: 0d5f 0000 0000            CALLA  0h
00140: 830d                      MOVE   A8,*A13,1
00150: a3cf                      MOVE   A14,-*SP,1
00160: 18e8                      MOVK   7h,A8
00170: 930e                      MOVE   A8,*A14+,1
00180: 09e8 3340 0004            MOVI   43340h,A8
001b0: 930e                      MOVE   A8,*A14+,1
001c0: 09e8 4149 5846            MOVI   58464149h,A8
001f0: 930e                      MOVE   A8,*A14+,1
00200: 1ba8                      MOVK   1Dh,A8
00210: 930e                      MOVE   A8,*A14+,1
00220: 0d5f 0000 0000            CALLA  0h
00250: 830d                      MOVE   A8,*A13,1
00260: a3cf                      MOVE   A14,-*SP,1
00270: 4508                      SUB    A8,A8
00280: 930e                      MOVE   A8,*A14+,1
00290: 09e8 56a0 000e            MOVI   E56A0h,A8
002c0: 930e                      MOVE   A8,*A14+,1
002d0: 1b88                      MOVK   1Ch,A8
002e0: 930e                      MOVE   A8,*A14+,1
002f0: 0d5f 0000 0000            CALLA  0h
00320: 830d                      MOVE   A8,*A13,1
00330: 4d08                      MOVE   A8,A8
00340: cbf1                      JRNE   260h
00350: c000 00d6                 JR     10D0h
00370: a3cf                      MOVE   A14,-*SP,1
00380: 07e8 5700 000e            MOVE   @E5700h,A8
003b0: 930e                      MOVE   A8,*A14+,1
003c0: 0d5f 4c90 0000            CALLA  4C90h
003f0: c0e6                      JR     260h
00400: 0d5f ae10 0000            CALLA  AE10h
00430: a3cf                      MOVE   A14,-*SP,1
00440: 07e8 5700 000e            MOVE   @E5700h,A8
00470: 930e                      MOVE   A8,*A14+,1
00480: 0d5f 1190 0000            CALLA  1190h
004b0: 0d5f b1f0 0000            CALLA  B1F0h
004e0: c0d7                      JR     260h
004f0: 0d5f ae10 0000            CALLA  AE10h
00520: a3cf                      MOVE   A14,-*SP,1
00530: 07e8 5700 000e            MOVE   @E5700h,A8
00560: 930e                      MOVE   A8,*A14+,1
00570: 0d5f 16d0 0000            CALLA  16D0h
005a0: 0d5f b1f0 0000            CALLA  B1F0h
005d0: c0c8                      JR     260h
005e0: 0d5f ae10 0000            CALLA  AE10h
00610: a3cf                      MOVE   A14,-*SP,1
00620: 07e8 5700 000e            MOVE   @E5700h,A8
00650: 930e                      MOVE   A8,*A14+,1
00660: 0d5f 1d60 0000            CALLA  1D60h
00690: 0d5f b1f0 0000            CALLA  B1F0h
006c0: c0b9                      JR     260h
006d0: a3cf                      MOVE   A14,-*SP,1
006e0: d60e 5700 000e            MOVE   @E5700h,*A14+,1
00710: 0d5f 22c0 0000            CALLA  22C0h
00740: c0b1                      JR     260h
00750: 0340 5700 000e de30 0003  MOVB   @E5700h,@3DE30h
007a0: c0ab                      JR     260h
007b0: 0340 5700 000e de40 0003  MOVB   @E5700h,@3DE40h
00800: c0a5                      JR     260h
00810: 07c0 5700 000e de80 0003  MOVE   @E5700h,@3DE80h,1
00860: c09f                      JR     260h
00870: 07c0 5700 000e de60 0003  MOVE   @E5700h,@3DE60h,1
008c0: c099                      JR     260h
008d0: a3cf                      MOVE   A14,-*SP,1
008e0: 4508                      SUB    A8,A8
008f0: 930e                      MOVE   A8,*A14+,1
00900: 0548                      SETF   8h,0,0
00910: 05a8 5700 000e            MOVE   @E5700h,A8,0
00940: 930e                      MOVE   A8,*A14+,1
00950: 0d5f 7690 0000            CALLA  7690h
00980: c08d                      JR     260h
00990: a3cf                      MOVE   A14,-*SP,1
009a0: 0548                      SETF   8h,0,0
009b0: 05a8 5700 000e            MOVE   @E5700h,A8,0
009e0: 930e                      MOVE   A8,*A14+,1
009f0: 0d5f 6e80 0000            CALLA  6E80h
00a20: c083                      JR     260h
00a30: a3cf                      MOVE   A14,-*SP,1
00a40: 0548                      SETF   8h,0,0
00a50: 05a8 5700 000e            MOVE   @E5700h,A8,0
00a80: 930e                      MOVE   A8,*A14+,1
00a90: 0d5f 5e20 0000            CALLA  5E20h
00ac0: c000 ff78                 JR     260h
00ae0: a3cf                      MOVE   A14,-*SP,1
00af0: 0548                      SETF   8h,0,0
00b00: 05a8 5700 000e            MOVE   @E5700h,A8,0
00b30: 930e                      MOVE   A8,*A14+,1
00b40: 0d5f 6650 0000            CALLA  6650h
00b70: c000 ff6d                 JR     260h
00b90: a3cf                      MOVE   A14,-*SP,1
00ba0: 0548                      SETF   8h,0,0
00bb0: 05a8 5700 000e            MOVE   @E5700h,A8,0
00be0: 930e                      MOVE   A8,*A14+,1
00bf0: 0d5f 55f0 0000            CALLA  55F0h
00c20: c000 ff62                 JR     260h
00c40: 0d5f 8760 0000            CALLA  8760h
00c70: 0d5f a920 0000            CALLA  A920h
00ca0: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
00cd0: 0ba8 0010 0000            ORI    10h,A8
00d00: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
00d30: c000 ff51                 JR     260h
00d50: 0548                      SETF   8h,0,0
00d60: 05a8 5700 000e            MOVE   @E5700h,A8,0
00d90: 3908                      DSJS   A8,E20h
00da0: 0d5f 8760 0000            CALLA  8760h
00dd0: 0d5f a920 0000            CALLA  A920h
00e00: c000 ff44                 JR     260h
00e20: 0d5f 86c0 0000            CALLA  86C0h
00e50: c000 ff3f                 JR     260h
00e70: a3cf                      MOVE   A14,-*SP,1
00e80: 07e8 5700 000e            MOVE   @E5700h,A8
00eb0: 930e                      MOVE   A8,*A14+,1
00ec0: 0d5f 9090 0000            CALLA  9090h
00ef0: c000 ff35                 JR     260h
00f10: 0d5f b3f0 0000            CALLA  B3F0h
00f40: c000 ff30                 JR     260h
00f60: 1828                      MOVK   1h,A8
00f70: 0788 11a0 0004            MOVE   A8,@411A0h,1
00fa0: 0340 56e0 000e 11c0 0004  MOVB   @E56E0h,@411C0h
00ff0: a3cf                      MOVE   A14,-*SP,1
01000: 09e8 11a0 0004            MOVI   411A0h,A8
01030: 930e                      MOVE   A8,*A14+,1
01040: d60e 56c0 000e            MOVE   @E56C0h,*A14+,1
01070: 0d5f 0000 0000            CALLA  0h
010a0: 830d                      MOVE   A8,*A13,1
010b0: c000 ff19                 JR     260h
010d0: 07a8 56e0 000e            MOVE   @E56E0h,A8,1
01100: 1428                      DEC    A8
01110: 36a8                      CMPK   15h,A8
01120: c3e3                      JRHI   F60h
01130: 24a8                      SLL    5h,A8
01140: 0b28 d660 0003            ADDI   3D660h,A8
01170: 8708                      MOVE   *A8,A8,1
01180: 0168                      JUMP   A8

_take_left_stored_photo:
01190: a3af                      MOVE   A13,-*SP,1
011a0: 4dcd                      MOVE   A14,A13
011b0: 1bc8                      MOVK   1Eh,A8
011c0: 0788 4560 000e            MOVE   A8,@E4560h,1
011f0: 1ba8                      MOVK   1Dh,A8
01200: 0788 4580 000e            MOVE   A8,@E4580h,1
01230: 1148                      ADDK   Ah,A8
01240: 0788 45a0 000e            MOVE   A8,@E45A0h,1
01270: 09c8 0400                 MOVI   400h,A8
01290: 0550                      SETF   10h,0,0
012a0: 0588 45c0 000e            MOVE   A8,@E45C0h,0
012d0: 09c8 0300                 MOVI   300h,A8
012f0: 0588 45d0 000e            MOVE   A8,@E45D0h,0
01320: 0588 45e0 000e            MOVE   A8,@E45E0h,0
01350: 4508                      SUB    A8,A8
01360: 0588 45f0 000e            MOVE   A8,@E45F0h,0
01390: 0588 4600 000e            MOVE   A8,@E4600h,0
013c0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
013e0: 05e8 4610 000e            MOVB   A8,@E4610h
01410: 1828                      MOVK   1h,A8
01420: 05e8 4618 000e            MOVB   A8,@E4618h
01450: 05e8 4620 000e            MOVB   A8,@E4620h
01480: 4508                      SUB    A8,A8
01490: 05e8 4628 000e            MOVB   A8,@E4628h
014c0: 1828                      MOVK   1h,A8
014d0: 05e8 4630 000e            MOVB   A8,@E4630h
01500: 05e8 4638 000e            MOVB   A8,@E4638h
01530: 0340 f380 0003 4640 000e  MOVB   @3F380h,@E4640h
01580: 09e8 3d60 000c            MOVI   C3D60h,A8
015b0: 0788 4648 000e            MOVE   A8,@E4648h,1
015e0: 4508                      SUB    A8,A8
015f0: 05e8 4668 000e            MOVB   A8,@E4668h
01620: 1828                      MOVK   1h,A8
01630: 05e8 de20 0003            MOVB   A8,@3DE20h
01660: 0d5f 8aa0 0000            CALLA  8AA0h
01690: b7ee 0040                 MOVE   *SP(40h),A14,1
016b0: 97ed                      MOVE   *SP+,A13,1
016c0: 0962                      RETS   2h

_take_calib_stored_photo:
016d0: a3af                      MOVE   A13,-*SP,1
016e0: 4dcd                      MOVE   A14,A13
016f0: 1bc8                      MOVK   1Eh,A8
01700: 0788 4560 000e            MOVE   A8,@E4560h,1
01730: 1ba8                      MOVK   1Dh,A8
01740: 0788 4580 000e            MOVE   A8,@E4580h,1
01770: 1148                      ADDK   Ah,A8
01780: 0788 45a0 000e            MOVE   A8,@E45A0h,1
017b0: 09c8 0400                 MOVI   400h,A8
017d0: 0550                      SETF   10h,0,0
017e0: 0588 45c0 000e            MOVE   A8,@E45C0h,0
01810: 09c8 0300                 MOVI   300h,A8
01830: 0588 45d0 000e            MOVE   A8,@E45D0h,0
01860: 0588 45e0 000e            MOVE   A8,@E45E0h,0
01890: afa8 ffe0                 MOVB   *A13(FFE0h),A8
018b0: 05e8 4610 000e            MOVB   A8,@E4610h
018e0: 1828                      MOVK   1h,A8
018f0: 05e8 4618 000e            MOVB   A8,@E4618h
01920: 05e8 4620 000e            MOVB   A8,@E4620h
01950: 4508                      SUB    A8,A8
01960: 05e8 4628 000e            MOVB   A8,@E4628h
01990: 1828                      MOVK   1h,A8
019a0: 05e8 4630 000e            MOVB   A8,@E4630h
019d0: 05e8 4638 000e            MOVB   A8,@E4638h
01a00: 0340 f380 0003 4640 000e  MOVB   @3F380h,@E4640h
01a50: 09e8 3d60 000c            MOVI   C3D60h,A8
01a80: 0788 4648 000e            MOVE   A8,@E4648h,1
01ab0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
01ad0: 39e8                      DSJS   A8,1BD0h
01ae0: 1828                      MOVK   1h,A8
01af0: 05e8 4668 000e            MOVB   A8,@E4668h
01b20: 05c0 1180 0004 45f0 000e  MOVE   @41180h,@E45F0h,0
01b70: 05c0 5680 000e 4600 000e  MOVE   @E5680h,@E4600h,0
01bc0: c00e                      JR     1CB0h
01bd0: 1848                      MOVK   2h,A8
01be0: 05e8 4668 000e            MOVB   A8,@E4668h
01c10: 05c0 6f20 000e 45f0 000e  MOVE   @E6F20h,@E45F0h,0
01c60: 05c0 11d0 0004 4600 000e  MOVE   @411D0h,@E4600h,0
01cb0: 1828                      MOVK   1h,A8
01cc0: 05e8 de20 0003            MOVB   A8,@3DE20h
01cf0: 0d5f 8aa0 0000            CALLA  8AA0h
01d20: b7ee 0040                 MOVE   *SP(40h),A14,1
01d40: 97ed                      MOVE   *SP+,A13,1
01d50: 0962                      RETS   2h

_take_live_photo:
01d60: a3af                      MOVE   A13,-*SP,1
01d70: 4dcd                      MOVE   A14,A13
01d80: 1bc8                      MOVK   1Eh,A8
01d90: 0788 4560 000e            MOVE   A8,@E4560h,1
01dc0: 1ba8                      MOVK   1Dh,A8
01dd0: 0788 4580 000e            MOVE   A8,@E4580h,1
01e00: 1148                      ADDK   Ah,A8
01e10: 0788 45a0 000e            MOVE   A8,@E45A0h,1
01e40: 09c8 0c00                 MOVI   C00h,A8
01e60: 0550                      SETF   10h,0,0
01e70: 0588 45c0 000e            MOVE   A8,@E45C0h,0
01ea0: 09c8 0900                 MOVI   900h,A8
01ec0: 0588 45d0 000e            MOVE   A8,@E45D0h,0
01ef0: 09c8 0300                 MOVI   300h,A8
01f10: 0588 45e0 000e            MOVE   A8,@E45E0h,0
01f40: 4508                      SUB    A8,A8
01f50: 0588 45f0 000e            MOVE   A8,@E45F0h,0
01f80: 0588 4600 000e            MOVE   A8,@E4600h,0
01fb0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
01fd0: 05e8 4610 000e            MOVB   A8,@E4610h
02000: 4508                      SUB    A8,A8
02010: 05e8 4618 000e            MOVB   A8,@E4618h
02040: 05e8 4620 000e            MOVB   A8,@E4620h
02070: 1848                      MOVK   2h,A8
02080: 05e8 4628 000e            MOVB   A8,@E4628h
020b0: 1828                      MOVK   1h,A8
020c0: 05e8 4630 000e            MOVB   A8,@E4630h
020f0: 05e8 4638 000e            MOVB   A8,@E4638h
02120: 0340 f380 0003 4640 000e  MOVB   @3F380h,@E4640h
02170: 09e8 3d60 000c            MOVI   C3D60h,A8
021a0: 0788 4648 000e            MOVE   A8,@E4648h,1
021d0: 4508                      SUB    A8,A8
021e0: 05e8 4668 000e            MOVB   A8,@E4668h
02210: 1828                      MOVK   1h,A8
02220: 05e8 de20 0003            MOVB   A8,@3DE20h
02250: 0d5f 8aa0 0000            CALLA  8AA0h
02280: b7ee 0040                 MOVE   *SP(40h),A14,1
022a0: 97ed                      MOVE   *SP+,A13,1
022b0: 0962                      RETS   2h

_gamma_hrru_lut:
022c0: a3af                      MOVE   A13,-*SP,1
022d0: 4dcd                      MOVE   A14,A13
022e0: b7ee 0040                 MOVE   *SP(40h),A14,1
02300: 97ed                      MOVE   *SP+,A13,1
02310: 0962                      RETS   2h

_set_film_speed:
02320: a3af                      MOVE   A13,-*SP,1
02330: 4dcd                      MOVE   A14,A13
02340: 100e                      ADDK   20h,A14
02350: a3cf                      MOVE   A14,-*SP,1
02360: 4508                      SUB    A8,A8
02370: 930e                      MOVE   A8,*A14+,1
02380: 09c8 002a                 MOVI   2Ah,A8
023a0: 930e                      MOVE   A8,*A14+,1
023b0: 0d5f 4620 0000            CALLA  4620h
023e0: a3cf                      MOVE   A14,-*SP,1
023f0: 09e8 ffff 0000            MOVI   FFFFh,A8
02420: 930e                      MOVE   A8,*A14+,1
02430: 09c8 0054                 MOVI   54h,A8
02450: 930e                      MOVE   A8,*A14+,1
02460: 0d5f 4620 0000            CALLA  4620h
02490: b7ee 0040                 MOVE   *SP(40h),A14,1
024b0: 97ed                      MOVE   *SP+,A13,1
024c0: 0962                      RETS   2h

_set_corrections:
024d0: a3cf                      MOVE   A14,-*SP,1
024e0: 0550                      SETF   10h,0,0
024f0: 05a8 1a10 0004            MOVE   @41A10h,A8,0
02520: 930e                      MOVE   A8,*A14+,1
02530: 09c8 0034                 MOVI   34h,A8
02550: 930e                      MOVE   A8,*A14+,1
02560: 0d5f 4620 0000            CALLA  4620h
02590: a3cf                      MOVE   A14,-*SP,1
025a0: 0550                      SETF   10h,0,0
025b0: 05a8 1a20 0004            MOVE   @41A20h,A8,0
025e0: 930e                      MOVE   A8,*A14+,1
025f0: 09c8 0035                 MOVI   35h,A8
02610: 930e                      MOVE   A8,*A14+,1
02620: 0d5f 4620 0000            CALLA  4620h
02650: a3cf                      MOVE   A14,-*SP,1
02660: 0550                      SETF   10h,0,0
02670: 05a8 1a30 0004            MOVE   @41A30h,A8,0
026a0: 930e                      MOVE   A8,*A14+,1
026b0: 09c8 0036                 MOVI   36h,A8
026d0: 930e                      MOVE   A8,*A14+,1
026e0: 0d5f 4620 0000            CALLA  4620h
02710: a3cf                      MOVE   A14,-*SP,1
02720: 0550                      SETF   10h,0,0
02730: 05a8 1a40 0004            MOVE   @41A40h,A8,0
02760: 930e                      MOVE   A8,*A14+,1
02770: 09c8 0037                 MOVI   37h,A8
02790: 930e                      MOVE   A8,*A14+,1
027a0: 0d5f 4620 0000            CALLA  4620h
027d0: a3cf                      MOVE   A14,-*SP,1
027e0: 0550                      SETF   10h,0,0
027f0: 05a8 1a50 0004            MOVE   @41A50h,A8,0
02820: 930e                      MOVE   A8,*A14+,1
02830: 09c8 0038                 MOVI   38h,A8
02850: 930e                      MOVE   A8,*A14+,1
02860: 0d5f 4620 0000            CALLA  4620h
02890: a3cf                      MOVE   A14,-*SP,1
028a0: 0550                      SETF   10h,0,0
028b0: 05a8 1a60 0004            MOVE   @41A60h,A8,0
028e0: 930e                      MOVE   A8,*A14+,1
028f0: 09c8 0039                 MOVI   39h,A8
02910: 930e                      MOVE   A8,*A14+,1
02920: 0d5f 4620 0000            CALLA  4620h
02950: a3cf                      MOVE   A14,-*SP,1
02960: 0550                      SETF   10h,0,0
02970: 05a8 1a70 0004            MOVE   @41A70h,A8,0
029a0: 930e                      MOVE   A8,*A14+,1
029b0: 09c8 003a                 MOVI   3Ah,A8
029d0: 930e                      MOVE   A8,*A14+,1
029e0: 0d5f 4620 0000            CALLA  4620h
02a10: a3cf                      MOVE   A14,-*SP,1
02a20: 0550                      SETF   10h,0,0
02a30: 05a8 1a80 0004            MOVE   @41A80h,A8,0
02a60: 930e                      MOVE   A8,*A14+,1
02a70: 09c8 003b                 MOVI   3Bh,A8
02a90: 930e                      MOVE   A8,*A14+,1
02aa0: 0d5f 4620 0000            CALLA  4620h
02ad0: a3cf                      MOVE   A14,-*SP,1
02ae0: 0550                      SETF   10h,0,0
02af0: 05a8 19f0 0004            MOVE   @419F0h,A8,0
02b20: 2be8                      SRA    1h,A8
02b30: 0528                      ZEXT   A8,0
02b40: 930e                      MOVE   A8,*A14+,1
02b50: 09c8 0051                 MOVI   51h,A8
02b70: 930e                      MOVE   A8,*A14+,1
02b80: 0d5f 4620 0000            CALLA  4620h
02bb0: a3cf                      MOVE   A14,-*SP,1
02bc0: 0550                      SETF   10h,0,0
02bd0: 05a8 1a00 0004            MOVE   @41A00h,A8,0
02c00: 2be8                      SRA    1h,A8
02c10: 0528                      ZEXT   A8,0
02c20: 930e                      MOVE   A8,*A14+,1
02c30: 09c8 0052                 MOVI   52h,A8
02c50: 930e                      MOVE   A8,*A14+,1
02c60: 0d5f 4620 0000            CALLA  4620h
02c90: a3cf                      MOVE   A14,-*SP,1
02ca0: 0550                      SETF   10h,0,0
02cb0: 05a8 1a90 0004            MOVE   @41A90h,A8,0
02ce0: 930e                      MOVE   A8,*A14+,1
02cf0: 09c8 0070                 MOVI   70h,A8
02d10: 930e                      MOVE   A8,*A14+,1
02d20: 0d5f 4620 0000            CALLA  4620h
02d50: a3cf                      MOVE   A14,-*SP,1
02d60: 0550                      SETF   10h,0,0
02d70: 05a8 1ae0 0004            MOVE   @41AE0h,A8,0
02da0: 930e                      MOVE   A8,*A14+,1
02db0: 09c8 0071                 MOVI   71h,A8
02dd0: 930e                      MOVE   A8,*A14+,1
02de0: 0d5f 4620 0000            CALLA  4620h
02e10: a3cf                      MOVE   A14,-*SP,1
02e20: 0550                      SETF   10h,0,0
02e30: 05a8 19e0 0004            MOVE   @419E0h,A8,0
02e60: 930e                      MOVE   A8,*A14+,1
02e70: 09c8 0072                 MOVI   72h,A8
02e90: 930e                      MOVE   A8,*A14+,1
02ea0: 0d5f 4620 0000            CALLA  4620h
02ed0: 0960                      RETS   

_set_hrru_brightness:
02ee0: 098f 001c                 MMTM   SP,A11-A13
02f00: 4dcd                      MOVE   A14,A13
02f10: 100e                      ADDK   20h,A14
02f20: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
02f40: 0d5f 86a0 0003            CALLA  386A0h
02f70: 4508                      SUB    A8,A8
02f80: 09ec 0000 4059            MOVI   40590000h,A12
02fb0: 938e                      MOVE   A12,*A14+,1
02fc0: 930e                      MOVE   A8,*A14+,1
02fd0: 0d5f 9d00 0003            CALLA  39D00h
03000: 0d5f 7e20 0003            CALLA  37E20h
03030: a7c8                      MOVE   -*A14,A8,1
03040: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03060: 930e                      MOVE   A8,*A14+,1
03070: 0d5f 86a0 0003            CALLA  386A0h
030a0: 4508                      SUB    A8,A8
030b0: 938e                      MOVE   A12,*A14+,1
030c0: 930e                      MOVE   A8,*A14+,1
030d0: 0d5f b070 0003            CALLA  3B070h
03100: ca06                      JREQ   3170h
03110: 09e8 0000 42c8            MOVI   42C80000h,A8
03140: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03160: c00f                      JR     3260h
03170: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03190: 0d5f 86a0 0003            CALLA  386A0h
031c0: 4508                      SUB    A8,A8
031d0: 930e                      MOVE   A8,*A14+,1
031e0: 930e                      MOVE   A8,*A14+,1
031f0: 0d5f b030 0003            CALLA  3B030h
03220: ca03                      JREQ   3260h
03230: 4508                      SUB    A8,A8
03240: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03260: d60e f3c0 0003            MOVE   @3F3C0h,*A14+,1
03290: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
032b0: 0d5f c1d0 0003            CALLA  3C1D0h
032e0: a7c8                      MOVE   -*A14,A8,1
032f0: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03310: 0550                      SETF   10h,0,0
03320: 05a8 1ad0 0004            MOVE   @41AD0h,A8,0
03350: 05ac 1ac0 0004            MOVE   @41AC0h,A12,0
03380: 4588                      SUB    A12,A8
03390: 0d5f 9190 0003            CALLA  39190h
033c0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
033e0: 0d5f ced0 0003            CALLA  3CED0h
03410: a7c8                      MOVE   -*A14,A8,1
03420: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03440: 4508                      SUB    A8,A8
03450: 09ec 0000 4059            MOVI   40590000h,A12
03480: 938e                      MOVE   A12,*A14+,1
03490: 930e                      MOVE   A8,*A14+,1
034a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
034c0: 0d5f 86a0 0003            CALLA  386A0h
034f0: 0d5f b5b0 0003            CALLA  3B5B0h
03520: 0d5f 7e20 0003            CALLA  37E20h
03550: a7c8                      MOVE   -*A14,A8,1
03560: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03580: 05a8 1ac0 0004            MOVE   @41AC0h,A8,0
035b0: 0d5f 9920 0003            CALLA  39920h
035e0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03600: 0d5f c410 0003            CALLA  3C410h
03630: a7c8                      MOVE   -*A14,A8,1
03640: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03660: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03680: 0d5f 8f00 0003            CALLA  38F00h
036b0: 0528                      ZEXT   A8,0
036c0: b10d 0010                 MOVE   A8,*A13(10h),0
036e0: 0b48 f000                 CMPI   FFFh,A8
03700: c604                      JRLE   3750h
03710: 09cc 0fff                 MOVI   FFFh,A12
03730: b18d 0010                 MOVE   A12,*A13(10h),0
03750: a3cf                      MOVE   A14,-*SP,1
03760: b5ac 0010                 MOVE   *A13(10h),A12,0
03780: 938e                      MOVE   A12,*A14+,1
03790: 09c8 0053                 MOVI   53h,A8
037b0: 930e                      MOVE   A8,*A14+,1
037c0: 0d5f 4620 0000            CALLA  4620h
037f0: 0550                      SETF   10h,0,0
03800: 058c 1180 0004            MOVE   A12,@41180h,0
03830: 1828                      MOVK   1h,A8
03840: 0588 5680 000e            MOVE   A8,@E5680h,0
03870: 05a8 1ad0 0004            MOVE   @41AD0h,A8,0
038a0: 05ac 1ac0 0004            MOVE   @41AC0h,A12,0
038d0: 4588                      SUB    A12,A8
038e0: 05ac 5680 000e            MOVE   @E5680h,A12,0
03910: 4d8b                      MOVE   A12,A11
03920: 5f0b                      MPYU   A8,A11
03930: 058b 5680 000e            MOVE   A11,@E5680h,0
03960: 458c                      SUB    A12,A12
03970: 09e8 0000 4059            MOVI   40590000h,A8
039a0: 930e                      MOVE   A8,*A14+,1
039b0: 938e                      MOVE   A12,*A14+,1
039c0: 05a8 5680 000e            MOVE   @E5680h,A8,0
039f0: 0d5f 94e0 0003            CALLA  394E0h
03a20: 0d5f b5b0 0003            CALLA  3B5B0h
03a50: 0d5f 83e0 0003            CALLA  383E0h
03a80: 0588 5680 000e            MOVE   A8,@E5680h,0
03ab0: b7ee 0080                 MOVE   *SP(80h),A14,1
03ad0: 09af 3800                 MMFM   SP,A11-A13
03af0: 0962                      RETS   2h

_set_hrru_contrast:
03b00: 098f 001c                 MMTM   SP,A11-A13
03b20: 4dcd                      MOVE   A14,A13
03b30: 100e                      ADDK   20h,A14
03b40: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03b60: 0d5f 86a0 0003            CALLA  386A0h
03b90: 4508                      SUB    A8,A8
03ba0: 09ec 0000 4059            MOVI   40590000h,A12
03bd0: 938e                      MOVE   A12,*A14+,1
03be0: 930e                      MOVE   A8,*A14+,1
03bf0: 0d5f b070 0003            CALLA  3B070h
03c20: ca06                      JREQ   3C90h
03c30: 09e8 0000 42c8            MOVI   42C80000h,A8
03c60: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03c80: c00f                      JR     3D80h
03c90: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03cb0: 0d5f 86a0 0003            CALLA  386A0h
03ce0: 4508                      SUB    A8,A8
03cf0: 930e                      MOVE   A8,*A14+,1
03d00: 930e                      MOVE   A8,*A14+,1
03d10: 0d5f b030 0003            CALLA  3B030h
03d40: ca03                      JREQ   3D80h
03d50: 4508                      SUB    A8,A8
03d60: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03d80: d60e f3e0 0003            MOVE   @3F3E0h,*A14+,1
03db0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03dd0: 0d5f c410 0003            CALLA  3C410h
03e00: a7c8                      MOVE   -*A14,A8,1
03e10: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03e30: 0550                      SETF   10h,0,0
03e40: 05a8 1ab0 0004            MOVE   @41AB0h,A8,0
03e70: 05ac 1aa0 0004            MOVE   @41AA0h,A12,0
03ea0: 4588                      SUB    A12,A8
03eb0: 0d5f 9190 0003            CALLA  39190h
03ee0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03f00: 0d5f ced0 0003            CALLA  3CED0h
03f30: a7c8                      MOVE   -*A14,A8,1
03f40: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
03f60: 4508                      SUB    A8,A8
03f70: 09ec 0000 4059            MOVI   40590000h,A12
03fa0: 938e                      MOVE   A12,*A14+,1
03fb0: 930e                      MOVE   A8,*A14+,1
03fc0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
03fe0: 0d5f 86a0 0003            CALLA  386A0h
04010: 0d5f b5b0 0003            CALLA  3B5B0h
04040: 0d5f 7e20 0003            CALLA  37E20h
04070: a7c8                      MOVE   -*A14,A8,1
04080: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
040a0: 05a8 1aa0 0004            MOVE   @41AA0h,A8,0
040d0: 0d5f 9920 0003            CALLA  39920h
04100: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
04120: 0d5f c410 0003            CALLA  3C410h
04150: a7c8                      MOVE   -*A14,A8,1
04160: b30d ffe0                 MOVE   A8,*A13(FFE0h),1
04180: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
041a0: 0d5f 8f00 0003            CALLA  38F00h
041d0: 0528                      ZEXT   A8,0
041e0: b10d 0010                 MOVE   A8,*A13(10h),0
04200: 0b48 f000                 CMPI   FFFh,A8
04220: c604                      JRLE   4270h
04230: 09cc 0fff                 MOVI   FFFh,A12
04250: b18d 0010                 MOVE   A12,*A13(10h),0
04270: a3cf                      MOVE   A14,-*SP,1
04280: b5ac 0010                 MOVE   *A13(10h),A12,0
042a0: 938e                      MOVE   A12,*A14+,1
042b0: 09c8 0050                 MOVI   50h,A8
042d0: 930e                      MOVE   A8,*A14+,1
042e0: 0d5f 4620 0000            CALLA  4620h
04310: 0550                      SETF   10h,0,0
04320: 058c 6f20 000e            MOVE   A12,@E6F20h,0
04350: 1908                      MOVK   8h,A8
04360: 0588 11d0 0004            MOVE   A8,@411D0h,0
04390: 05a8 1ab0 0004            MOVE   @41AB0h,A8,0
043c0: 05ac 1aa0 0004            MOVE   @41AA0h,A12,0
043f0: 4588                      SUB    A12,A8
04400: 05ac 11d0 0004            MOVE   @411D0h,A12,0
04430: 4d8b                      MOVE   A12,A11
04440: 5f0b                      MPYU   A8,A11
04450: 058b 11d0 0004            MOVE   A11,@411D0h,0
04480: 458c                      SUB    A12,A12
04490: 09e8 0000 4059            MOVI   40590000h,A8
044c0: 930e                      MOVE   A8,*A14+,1
044d0: 938e                      MOVE   A12,*A14+,1
044e0: 05a8 11d0 0004            MOVE   @411D0h,A8,0
04510: 0d5f 94e0 0003            CALLA  394E0h
04540: 0d5f b5b0 0003            CALLA  3B5B0h
04570: 0d5f 83e0 0003            CALLA  383E0h
045a0: 0588 11d0 0004            MOVE   A8,@411D0h,0
045d0: b7ee 0080                 MOVE   *SP(80h),A14,1
045f0: 09af 3800                 MMFM   SP,A11-A13
04610: 0962                      RETS   2h

_write_hrru_data:
04620: a3af                      MOVE   A13,-*SP,1
04630: 4dcd                      MOVE   A14,A13
04640: 1988                      MOVK   Ch,A8
04650: 0788 4560 000e            MOVE   A8,@E4560h,1
04680: 1ba8                      MOVK   1Dh,A8
04690: 0788 4580 000e            MOVE   A8,@E4580h,1
046c0: 09c8 0040                 MOVI   40h,A8
046e0: 0788 45a0 000e            MOVE   A8,@E45A0h,1
04710: 0550                      SETF   10h,0,0
04720: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
04740: 0588 45c0 000e            MOVE   A8,@E45C0h,0
04770: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
04790: 0588 45d0 000e            MOVE   A8,@E45D0h,0
047c0: 0d5f 8aa0 0000            CALLA  8AA0h
047f0: b7ee 0040                 MOVE   *SP(40h),A14,1
04810: 97ed                      MOVE   *SP+,A13,1
04820: 0962                      RETS   2h

_read_hrru_data:
04830: a3af                      MOVE   A13,-*SP,1
04840: 4dcd                      MOVE   A14,A13
04850: 1928                      MOVK   9h,A8
04860: 0788 4560 000e            MOVE   A8,@E4560h,1
04890: 1ba8                      MOVK   1Dh,A8
048a0: 0788 4580 000e            MOVE   A8,@E4580h,1
048d0: 09c8 003f                 MOVI   3Fh,A8
048f0: 0788 45a0 000e            MOVE   A8,@E45A0h,1
04920: 0550                      SETF   10h,0,0
04930: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
04950: 0588 45c0 000e            MOVE   A8,@E45C0h,0
04980: 0d5f 8aa0 0000            CALLA  8AA0h
049b0: 0550                      SETF   10h,0,0
049c0: 05a8 1168 0004            MOVE   @41168h,A8,0
049f0: b7ee 0040                 MOVE   *SP(40h),A14,1
04a10: 97ed                      MOVE   *SP+,A13,1
04a20: 0962                      RETS   2h

_write_hrru_file:
04a30: a3af                      MOVE   A13,-*SP,1
04a40: 4dcd                      MOVE   A14,A13
04a50: 1a08                      MOVK   10h,A8
04a60: 0788 4560 000e            MOVE   A8,@E4560h,1
04a90: 1ba8                      MOVK   1Dh,A8
04aa0: 0788 4580 000e            MOVE   A8,@E4580h,1
04ad0: 1168                      ADDK   Bh,A8
04ae0: 0788 45a0 000e            MOVE   A8,@E45A0h,1
04b10: 0550                      SETF   10h,0,0
04b20: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
04b40: 0588 45c0 000e            MOVE   A8,@E45C0h,0
04b70: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
04b90: 0588 45d0 000e            MOVE   A8,@E45D0h,0
04bc0: 09e8 4560 000c            MOVI   C4560h,A8
04bf0: 0788 45e0 000e            MOVE   A8,@E45E0h,1
04c20: 0d5f 8aa0 0000            CALLA  8AA0h
04c50: b7ee 0040                 MOVE   *SP(40h),A14,1
04c70: 97ed                      MOVE   *SP+,A13,1
04c80: 0962                      RETS   2h

_hrru_fitted:
04c90: 098f 000c                 MMTM   SP,A12,A13
04cb0: 4dcd                      MOVE   A14,A13
04cc0: 100e                      ADDK   20h,A14
04cd0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
04cf0: ca00 0086                 JREQ   5570h
04d10: 4508                      SUB    A8,A8
04d20: 0550                      SETF   10h,0,0
04d30: 810d                      MOVE   A8,*A13,0
04d40: 4508                      SUB    A8,A8
04d50: b10d 0010                 MOVE   A8,*A13(10h),0
04d70: a3cf                      MOVE   A14,-*SP,1
04d80: b5a8 0010                 MOVE   *A13(10h),A8,0
04da0: 2488                      SLL    4h,A8
04db0: 0b28 f2e0 0003            ADDI   3F2E0h,A8
04de0: 8508                      MOVE   *A8,A8,0
04df0: 930e                      MOVE   A8,*A14+,1
04e00: 85a8                      MOVE   *A13,A8,0
04e10: 2468                      SLL    3h,A8
04e20: 0b28 f280 0003            ADDI   3F280h,A8
04e50: 0548                      SETF   8h,0,0
04e60: 8508                      MOVE   *A8,A8,0
04e70: 930e                      MOVE   A8,*A14+,1
04e80: 0d5f 4620 0000            CALLA  4620h
04eb0: a3cf                      MOVE   A14,-*SP,1
04ec0: 0550                      SETF   10h,0,0
04ed0: 85a8                      MOVE   *A13,A8,0
04ee0: 2468                      SLL    3h,A8
04ef0: 0b28 f280 0003            ADDI   3F280h,A8
04f20: 0548                      SETF   8h,0,0
04f30: 8508                      MOVE   *A8,A8,0
04f40: 930e                      MOVE   A8,*A14+,1
04f50: 0d5f 4830 0000            CALLA  4830h
04f80: 0550                      SETF   10h,0,0
04f90: b5ac 0010                 MOVE   *A13(10h),A12,0
04fb0: 248c                      SLL    4h,A12
04fc0: 0b2c f2e0 0003            ADDI   3F2E0h,A12
04ff0: 858c                      MOVE   *A12,A12,0
05000: 4988                      CMP    A12,A8
05010: ca0a                      JREQ   50C0h
05020: 07ac dea0 0003            MOVE   @3DEA0h,A12,1
05050: 0bac 0080 0000            ORI    80h,A12
05080: 078c dea0 0003            MOVE   A12,@3DEA0h,1
050b0: c04e                      JR     55A0h
050c0: b5ac 0010                 MOVE   *A13(10h),A12,0
050e0: 102c                      INC    A12
050f0: b18d 0010                 MOVE   A12,*A13(10h),0
05110: 148c                      SUBK   4h,A12
05120: c4c4                      JRLT   4D70h
05130: 85ac                      MOVE   *A13,A12,0
05140: 102c                      INC    A12
05150: 818d                      MOVE   A12,*A13,0
05160: 158c                      SUBK   Ch,A12
05170: c4bc                      JRLT   4D40h
05180: 180c                      MOVK   20h,A12
05190: 818d                      MOVE   A12,*A13,0
051a0: a3cf                      MOVE   A14,-*SP,1
051b0: 458c                      SUB    A12,A12
051c0: 938e                      MOVE   A12,*A14+,1
051d0: 85a8                      MOVE   *A13,A8,0
051e0: 930e                      MOVE   A8,*A14+,1
051f0: 0d5f 4620 0000            CALLA  4620h
05220: 0550                      SETF   10h,0,0
05230: 85a8                      MOVE   *A13,A8,0
05240: 1028                      INC    A8
05250: 810d                      MOVE   A8,*A13,0
05260: 0b48 ffd2                 CMPI   2Dh,A8
05280: c6f1                      JRLE   51A0h
05290: 09cc 0040                 MOVI   40h,A12
052b0: 818d                      MOVE   A12,*A13,0
052c0: a3cf                      MOVE   A14,-*SP,1
052d0: 458c                      SUB    A12,A12
052e0: 938e                      MOVE   A12,*A14+,1
052f0: 85a8                      MOVE   *A13,A8,0
05300: 930e                      MOVE   A8,*A14+,1
05310: 0d5f 4620 0000            CALLA  4620h
05340: 0550                      SETF   10h,0,0
05350: 85a8                      MOVE   *A13,A8,0
05360: 1028                      INC    A8
05370: 810d                      MOVE   A8,*A13,0
05380: 0b48 ffb2                 CMPI   4Dh,A8
053a0: c6f1                      JRLE   52C0h
053b0: 09cc 0060                 MOVI   60h,A12
053d0: 818d                      MOVE   A12,*A13,0
053e0: a3cf                      MOVE   A14,-*SP,1
053f0: 458c                      SUB    A12,A12
05400: 938e                      MOVE   A12,*A14+,1
05410: 85a8                      MOVE   *A13,A8,0
05420: 930e                      MOVE   A8,*A14+,1
05430: 0d5f 4620 0000            CALLA  4620h
05460: 0550                      SETF   10h,0,0
05470: 85a8                      MOVE   *A13,A8,0
05480: 1028                      INC    A8
05490: 810d                      MOVE   A8,*A13,0
054a0: 0b48 ff92                 CMPI   6Dh,A8
054c0: c6f1                      JRLE   53E0h
054d0: 07ac dea0 0003            MOVE   @3DEA0h,A12,1
05500: 0bac 0010 0000            ORI    10h,A12
05530: 078c dea0 0003            MOVE   A12,@3DEA0h,1
05560: c003                      JR     55A0h
05570: 0d5f 86c0 0000            CALLA  86C0h
055a0: b7ee 0060                 MOVE   *SP(60h),A14,1
055c0: 09af 3000                 MMFM   SP,A12,A13
055e0: 0962                      RETS   2h

_set_fhigh_data:
055f0: a3af                      MOVE   A13,-*SP,1
05600: 4dcd                      MOVE   A14,A13
05610: a3cf                      MOVE   A14,-*SP,1
05620: 1888                      MOVK   4h,A8
05630: 930e                      MOVE   A8,*A14+,1
05640: 09c8 006c                 MOVI   6Ch,A8
05660: 930e                      MOVE   A8,*A14+,1
05670: 0d5f 4620 0000            CALLA  4620h
056a0: a3cf                      MOVE   A14,-*SP,1
056b0: 09c8 0062                 MOVI   62h,A8
056d0: 930e                      MOVE   A8,*A14+,1
056e0: 1128                      ADDK   9h,A8
056f0: 930e                      MOVE   A8,*A14+,1
05700: 0d5f 4620 0000            CALLA  4620h
05730: a3cf                      MOVE   A14,-*SP,1
05740: 4508                      SUB    A8,A8
05750: 930e                      MOVE   A8,*A14+,1
05760: 09c8 002b                 MOVI   2Bh,A8
05780: 930e                      MOVE   A8,*A14+,1
05790: 0d5f 4620 0000            CALLA  4620h
057c0: a3cf                      MOVE   A14,-*SP,1
057d0: 4508                      SUB    A8,A8
057e0: 930e                      MOVE   A8,*A14+,1
057f0: 09c8 006a                 MOVI   6Ah,A8
05810: 930e                      MOVE   A8,*A14+,1
05820: 0d5f 4620 0000            CALLA  4620h
05850: a3cf                      MOVE   A14,-*SP,1
05860: 09e8 8000 0000            MOVI   8000h,A8
05890: 930e                      MOVE   A8,*A14+,1
058a0: 09c8 0060                 MOVI   60h,A8
058c0: 930e                      MOVE   A8,*A14+,1
058d0: 0d5f 4620 0000            CALLA  4620h
05900: a3cf                      MOVE   A14,-*SP,1
05910: 1908                      MOVK   8h,A8
05920: 930e                      MOVE   A8,*A14+,1
05930: 09c8 0061                 MOVI   61h,A8
05950: 930e                      MOVE   A8,*A14+,1
05960: 0d5f 4620 0000            CALLA  4620h
05990: a3cf                      MOVE   A14,-*SP,1
059a0: 1908                      MOVK   8h,A8
059b0: 930e                      MOVE   A8,*A14+,1
059c0: 09c8 0062                 MOVI   62h,A8
059e0: 930e                      MOVE   A8,*A14+,1
059f0: 0d5f 4620 0000            CALLA  4620h
05a20: a3cf                      MOVE   A14,-*SP,1
05a30: 1828                      MOVK   1h,A8
05a40: 930e                      MOVE   A8,*A14+,1
05a50: 09c8 0067                 MOVI   67h,A8
05a70: 930e                      MOVE   A8,*A14+,1
05a80: 0d5f 4620 0000            CALLA  4620h
05ab0: a3cf                      MOVE   A14,-*SP,1
05ac0: 09c8 0fff                 MOVI   FFFh,A8
05ae0: 930e                      MOVE   A8,*A14+,1
05af0: 09c8 0068                 MOVI   68h,A8
05b10: 930e                      MOVE   A8,*A14+,1
05b20: 0d5f 4620 0000            CALLA  4620h
05b50: a3cf                      MOVE   A14,-*SP,1
05b60: 09c8 0fff                 MOVI   FFFh,A8
05b80: 930e                      MOVE   A8,*A14+,1
05b90: 09c8 0069                 MOVI   69h,A8
05bb0: 930e                      MOVE   A8,*A14+,1
05bc0: 0d5f 4620 0000            CALLA  4620h
05bf0: a3cf                      MOVE   A14,-*SP,1
05c00: 09e8 c060 0000            MOVI   C060h,A8
05c30: 930e                      MOVE   A8,*A14+,1
05c40: 09c8 006b                 MOVI   6Bh,A8
05c60: 930e                      MOVE   A8,*A14+,1
05c70: 0d5f 4620 0000            CALLA  4620h
05ca0: a3cf                      MOVE   A14,-*SP,1
05cb0: 09c8 1000                 MOVI   1000h,A8
05cd0: 930e                      MOVE   A8,*A14+,1
05ce0: 0550                      SETF   10h,0,0
05cf0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
05d10: 930e                      MOVE   A8,*A14+,1
05d20: 0d5f 4a30 0000            CALLA  4A30h
05d50: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
05d80: 0ba8 0010 0000            ORI    10h,A8
05db0: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
05de0: b7ee 0040                 MOVE   *SP(40h),A14,1
05e00: 97ed                      MOVE   *SP+,A13,1
05e10: 0962                      RETS   2h

_set_high_data:
05e20: a3af                      MOVE   A13,-*SP,1
05e30: 4dcd                      MOVE   A14,A13
05e40: a3cf                      MOVE   A14,-*SP,1
05e50: 18a8                      MOVK   5h,A8
05e60: 930e                      MOVE   A8,*A14+,1
05e70: 09c8 004c                 MOVI   4Ch,A8
05e90: 930e                      MOVE   A8,*A14+,1
05ea0: 0d5f 4620 0000            CALLA  4620h
05ed0: a3cf                      MOVE   A14,-*SP,1
05ee0: 09c8 0062                 MOVI   62h,A8
05f00: 930e                      MOVE   A8,*A14+,1
05f10: 16e8                      SUBK   17h,A8
05f20: 930e                      MOVE   A8,*A14+,1
05f30: 0d5f 4620 0000            CALLA  4620h
05f60: a3cf                      MOVE   A14,-*SP,1
05f70: 4508                      SUB    A8,A8
05f80: 930e                      MOVE   A8,*A14+,1
05f90: 09c8 002b                 MOVI   2Bh,A8
05fb0: 930e                      MOVE   A8,*A14+,1
05fc0: 0d5f 4620 0000            CALLA  4620h
05ff0: a3cf                      MOVE   A14,-*SP,1
06000: 4508                      SUB    A8,A8
06010: 930e                      MOVE   A8,*A14+,1
06020: 09c8 004a                 MOVI   4Ah,A8
06040: 930e                      MOVE   A8,*A14+,1
06050: 0d5f 4620 0000            CALLA  4620h
06080: a3cf                      MOVE   A14,-*SP,1
06090: 09e8 8000 0000            MOVI   8000h,A8
060c0: 930e                      MOVE   A8,*A14+,1
060d0: 09c8 0040                 MOVI   40h,A8
060f0: 930e                      MOVE   A8,*A14+,1
06100: 0d5f 4620 0000            CALLA  4620h
06130: a3cf                      MOVE   A14,-*SP,1
06140: 4508                      SUB    A8,A8
06150: 930e                      MOVE   A8,*A14+,1
06160: 09c8 0041                 MOVI   41h,A8
06180: 930e                      MOVE   A8,*A14+,1
06190: 0d5f 4620 0000            CALLA  4620h
061c0: a3cf                      MOVE   A14,-*SP,1
061d0: 1908                      MOVK   8h,A8
061e0: 930e                      MOVE   A8,*A14+,1
061f0: 09c8 0042                 MOVI   42h,A8
06210: 930e                      MOVE   A8,*A14+,1
06220: 0d5f 4620 0000            CALLA  4620h
06250: a3cf                      MOVE   A14,-*SP,1
06260: 1828                      MOVK   1h,A8
06270: 930e                      MOVE   A8,*A14+,1
06280: 09c8 0047                 MOVI   47h,A8
062a0: 930e                      MOVE   A8,*A14+,1
062b0: 0d5f 4620 0000            CALLA  4620h
062e0: a3cf                      MOVE   A14,-*SP,1
062f0: 09c8 1fff                 MOVI   1FFFh,A8
06310: 930e                      MOVE   A8,*A14+,1
06320: 09c8 0048                 MOVI   48h,A8
06340: 930e                      MOVE   A8,*A14+,1
06350: 0d5f 4620 0000            CALLA  4620h
06380: a3cf                      MOVE   A14,-*SP,1
06390: 09c8 0fff                 MOVI   FFFh,A8
063b0: 930e                      MOVE   A8,*A14+,1
063c0: 09c8 0049                 MOVI   49h,A8
063e0: 930e                      MOVE   A8,*A14+,1
063f0: 0d5f 4620 0000            CALLA  4620h
06420: a3cf                      MOVE   A14,-*SP,1
06430: 09e8 8060 0000            MOVI   8060h,A8
06460: 930e                      MOVE   A8,*A14+,1
06470: 09c8 004b                 MOVI   4Bh,A8
06490: 930e                      MOVE   A8,*A14+,1
064a0: 0d5f 4620 0000            CALLA  4620h
064d0: a3cf                      MOVE   A14,-*SP,1
064e0: 09c8 1000                 MOVI   1000h,A8
06500: 930e                      MOVE   A8,*A14+,1
06510: 0550                      SETF   10h,0,0
06520: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
06540: 930e                      MOVE   A8,*A14+,1
06550: 0d5f 4a30 0000            CALLA  4A30h
06580: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
065b0: 0ba8 0010 0000            ORI    10h,A8
065e0: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
06610: b7ee 0040                 MOVE   *SP(40h),A14,1
06630: 97ed                      MOVE   *SP+,A13,1
06640: 0962                      RETS   2h

_set_flow_data:
06650: a3af                      MOVE   A13,-*SP,1
06660: 4dcd                      MOVE   A14,A13
06670: a3cf                      MOVE   A14,-*SP,1
06680: 1888                      MOVK   4h,A8
06690: 930e                      MOVE   A8,*A14+,1
066a0: 09c8 006c                 MOVI   6Ch,A8
066c0: 930e                      MOVE   A8,*A14+,1
066d0: 0d5f 4620 0000            CALLA  4620h
06700: a3cf                      MOVE   A14,-*SP,1
06710: 09c8 0062                 MOVI   62h,A8
06730: 930e                      MOVE   A8,*A14+,1
06740: 1128                      ADDK   9h,A8
06750: 930e                      MOVE   A8,*A14+,1
06760: 0d5f 4620 0000            CALLA  4620h
06790: a3cf                      MOVE   A14,-*SP,1
067a0: 4508                      SUB    A8,A8
067b0: 930e                      MOVE   A8,*A14+,1
067c0: 09c8 002b                 MOVI   2Bh,A8
067e0: 930e                      MOVE   A8,*A14+,1
067f0: 0d5f 4620 0000            CALLA  4620h
06820: a3cf                      MOVE   A14,-*SP,1
06830: 4508                      SUB    A8,A8
06840: 930e                      MOVE   A8,*A14+,1
06850: 09c8 006a                 MOVI   6Ah,A8
06870: 930e                      MOVE   A8,*A14+,1
06880: 0d5f 4620 0000            CALLA  4620h
068b0: a3cf                      MOVE   A14,-*SP,1
068c0: 09e8 ffff 0000            MOVI   FFFFh,A8
068f0: 930e                      MOVE   A8,*A14+,1
06900: 09c8 0060                 MOVI   60h,A8
06920: 930e                      MOVE   A8,*A14+,1
06930: 0d5f 4620 0000            CALLA  4620h
06960: a3cf                      MOVE   A14,-*SP,1
06970: 1908                      MOVK   8h,A8
06980: 930e                      MOVE   A8,*A14+,1
06990: 09c8 0061                 MOVI   61h,A8
069b0: 930e                      MOVE   A8,*A14+,1
069c0: 0d5f 4620 0000            CALLA  4620h
069f0: a3cf                      MOVE   A14,-*SP,1
06a00: 1908                      MOVK   8h,A8
06a10: 930e                      MOVE   A8,*A14+,1
06a20: 09c8 0062                 MOVI   62h,A8
06a40: 930e                      MOVE   A8,*A14+,1
06a50: 0d5f 4620 0000            CALLA  4620h
06a80: a3cf                      MOVE   A14,-*SP,1
06a90: 1828                      MOVK   1h,A8
06aa0: 930e                      MOVE   A8,*A14+,1
06ab0: 09c8 0067                 MOVI   67h,A8
06ad0: 930e                      MOVE   A8,*A14+,1
06ae0: 0d5f 4620 0000            CALLA  4620h
06b10: a3cf                      MOVE   A14,-*SP,1
06b20: 09c8 0fff                 MOVI   FFFh,A8
06b40: 930e                      MOVE   A8,*A14+,1
06b50: 09c8 0068                 MOVI   68h,A8
06b70: 930e                      MOVE   A8,*A14+,1
06b80: 0d5f 4620 0000            CALLA  4620h
06bb0: a3cf                      MOVE   A14,-*SP,1
06bc0: 09c8 0fff                 MOVI   FFFh,A8
06be0: 930e                      MOVE   A8,*A14+,1
06bf0: 09c8 0069                 MOVI   69h,A8
06c10: 930e                      MOVE   A8,*A14+,1
06c20: 0d5f 4620 0000            CALLA  4620h
06c50: a3cf                      MOVE   A14,-*SP,1
06c60: 09e8 c060 0000            MOVI   C060h,A8
06c90: 930e                      MOVE   A8,*A14+,1
06ca0: 09c8 006b                 MOVI   6Bh,A8
06cc0: 930e                      MOVE   A8,*A14+,1
06cd0: 0d5f 4620 0000            CALLA  4620h
06d00: a3cf                      MOVE   A14,-*SP,1
06d10: 09c8 1000                 MOVI   1000h,A8
06d30: 930e                      MOVE   A8,*A14+,1
06d40: 0550                      SETF   10h,0,0
06d50: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
06d70: 930e                      MOVE   A8,*A14+,1
06d80: 0d5f 4a30 0000            CALLA  4A30h
06db0: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
06de0: 0ba8 0010 0000            ORI    10h,A8
06e10: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
06e40: b7ee 0040                 MOVE   *SP(40h),A14,1
06e60: 97ed                      MOVE   *SP+,A13,1
06e70: 0962                      RETS   2h

_set_low_data:
06e80: a3af                      MOVE   A13,-*SP,1
06e90: 4dcd                      MOVE   A14,A13
06ea0: a3cf                      MOVE   A14,-*SP,1
06eb0: 18a8                      MOVK   5h,A8
06ec0: 930e                      MOVE   A8,*A14+,1
06ed0: 09c8 004c                 MOVI   4Ch,A8
06ef0: 930e                      MOVE   A8,*A14+,1
06f00: 0d5f 4620 0000            CALLA  4620h
06f30: a3cf                      MOVE   A14,-*SP,1
06f40: 09c8 0062                 MOVI   62h,A8
06f60: 930e                      MOVE   A8,*A14+,1
06f70: 16e8                      SUBK   17h,A8
06f80: 930e                      MOVE   A8,*A14+,1
06f90: 0d5f 4620 0000            CALLA  4620h
06fc0: a3cf                      MOVE   A14,-*SP,1
06fd0: 4508                      SUB    A8,A8
06fe0: 930e                      MOVE   A8,*A14+,1
06ff0: 09c8 002b                 MOVI   2Bh,A8
07010: 930e                      MOVE   A8,*A14+,1
07020: 0d5f 4620 0000            CALLA  4620h
07050: a3cf                      MOVE   A14,-*SP,1
07060: 4508                      SUB    A8,A8
07070: 930e                      MOVE   A8,*A14+,1
07080: 09c8 004a                 MOVI   4Ah,A8
070a0: 930e                      MOVE   A8,*A14+,1
070b0: 0d5f 4620 0000            CALLA  4620h
070e0: a3cf                      MOVE   A14,-*SP,1
070f0: 4508                      SUB    A8,A8
07100: 930e                      MOVE   A8,*A14+,1
07110: 09c8 0040                 MOVI   40h,A8
07130: 930e                      MOVE   A8,*A14+,1
07140: 0d5f 4620 0000            CALLA  4620h
07170: a3cf                      MOVE   A14,-*SP,1
07180: 4508                      SUB    A8,A8
07190: 930e                      MOVE   A8,*A14+,1
071a0: 09c8 0041                 MOVI   41h,A8
071c0: 930e                      MOVE   A8,*A14+,1
071d0: 0d5f 4620 0000            CALLA  4620h
07200: a3cf                      MOVE   A14,-*SP,1
07210: 1908                      MOVK   8h,A8
07220: 930e                      MOVE   A8,*A14+,1
07230: 09c8 0042                 MOVI   42h,A8
07250: 930e                      MOVE   A8,*A14+,1
07260: 0d5f 4620 0000            CALLA  4620h
07290: a3cf                      MOVE   A14,-*SP,1
072a0: 1828                      MOVK   1h,A8
072b0: 930e                      MOVE   A8,*A14+,1
072c0: 09c8 0047                 MOVI   47h,A8
072e0: 930e                      MOVE   A8,*A14+,1
072f0: 0d5f 4620 0000            CALLA  4620h
07320: a3cf                      MOVE   A14,-*SP,1
07330: 09c8 0fff                 MOVI   FFFh,A8
07350: 930e                      MOVE   A8,*A14+,1
07360: 09c8 0048                 MOVI   48h,A8
07380: 930e                      MOVE   A8,*A14+,1
07390: 0d5f 4620 0000            CALLA  4620h
073c0: a3cf                      MOVE   A14,-*SP,1
073d0: 09c8 0fff                 MOVI   FFFh,A8
073f0: 930e                      MOVE   A8,*A14+,1
07400: 09c8 0049                 MOVI   49h,A8
07420: 930e                      MOVE   A8,*A14+,1
07430: 0d5f 4620 0000            CALLA  4620h
07460: a3cf                      MOVE   A14,-*SP,1
07470: 09e8 8060 0000            MOVI   8060h,A8
074a0: 930e                      MOVE   A8,*A14+,1
074b0: 09c8 004b                 MOVI   4Bh,A8
074d0: 930e                      MOVE   A8,*A14+,1
074e0: 0d5f 4620 0000            CALLA  4620h
07510: a3cf                      MOVE   A14,-*SP,1
07520: 09c8 1000                 MOVI   1000h,A8
07540: 930e                      MOVE   A8,*A14+,1
07550: 0550                      SETF   10h,0,0
07560: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
07580: 930e                      MOVE   A8,*A14+,1
07590: 0d5f 4a30 0000            CALLA  4A30h
075c0: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
075f0: 0ba8 0010 0000            ORI    10h,A8
07620: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
07650: b7ee 0040                 MOVE   *SP(40h),A14,1
07670: 97ed                      MOVE   *SP+,A13,1
07680: 0962                      RETS   2h

_set_gamma_data:
07690: a3af                      MOVE   A13,-*SP,1
076a0: 4dcd                      MOVE   A14,A13
076b0: a3cf                      MOVE   A14,-*SP,1
076c0: 4508                      SUB    A8,A8
076d0: 930e                      MOVE   A8,*A14+,1
076e0: 09c8 002c                 MOVI   2Ch,A8
07700: 930e                      MOVE   A8,*A14+,1
07710: 0d5f 4620 0000            CALLA  4620h
07740: a3cf                      MOVE   A14,-*SP,1
07750: 4508                      SUB    A8,A8
07760: 930e                      MOVE   A8,*A14+,1
07770: 09c8 004c                 MOVI   4Ch,A8
07790: 930e                      MOVE   A8,*A14+,1
077a0: 0d5f 4620 0000            CALLA  4620h
077d0: a3cf                      MOVE   A14,-*SP,1
077e0: 4508                      SUB    A8,A8
077f0: 930e                      MOVE   A8,*A14+,1
07800: 09c8 006c                 MOVI   6Ch,A8
07820: 930e                      MOVE   A8,*A14+,1
07830: 0d5f 4620 0000            CALLA  4620h
07860: a3cf                      MOVE   A14,-*SP,1
07870: 1828                      MOVK   1h,A8
07880: 930e                      MOVE   A8,*A14+,1
07890: 09c8 002d                 MOVI   2Dh,A8
078b0: 930e                      MOVE   A8,*A14+,1
078c0: 0d5f 4620 0000            CALLA  4620h
078f0: a3cf                      MOVE   A14,-*SP,1
07900: 4508                      SUB    A8,A8
07910: 930e                      MOVE   A8,*A14+,1
07920: 09c8 0054                 MOVI   54h,A8
07940: 930e                      MOVE   A8,*A14+,1
07950: 0d5f 4620 0000            CALLA  4620h
07980: a3cf                      MOVE   A14,-*SP,1
07990: 18a8                      MOVK   5h,A8
079a0: 930e                      MOVE   A8,*A14+,1
079b0: 09c8 004c                 MOVI   4Ch,A8
079d0: 930e                      MOVE   A8,*A14+,1
079e0: 0d5f 4620 0000            CALLA  4620h
07a10: a3cf                      MOVE   A14,-*SP,1
07a20: 09c8 0062                 MOVI   62h,A8
07a40: 930e                      MOVE   A8,*A14+,1
07a50: 16e8                      SUBK   17h,A8
07a60: 930e                      MOVE   A8,*A14+,1
07a70: 0d5f 4620 0000            CALLA  4620h
07aa0: a3cf                      MOVE   A14,-*SP,1
07ab0: 4508                      SUB    A8,A8
07ac0: 930e                      MOVE   A8,*A14+,1
07ad0: 09c8 002b                 MOVI   2Bh,A8
07af0: 930e                      MOVE   A8,*A14+,1
07b00: 0d5f 4620 0000            CALLA  4620h
07b30: a3cf                      MOVE   A14,-*SP,1
07b40: 4508                      SUB    A8,A8
07b50: 930e                      MOVE   A8,*A14+,1
07b60: 09c8 006b                 MOVI   6Bh,A8
07b80: 930e                      MOVE   A8,*A14+,1
07b90: 0d5f 4620 0000            CALLA  4620h
07bc0: a3cf                      MOVE   A14,-*SP,1
07bd0: 4508                      SUB    A8,A8
07be0: 930e                      MOVE   A8,*A14+,1
07bf0: 09c8 0060                 MOVI   60h,A8
07c10: 930e                      MOVE   A8,*A14+,1
07c20: 0d5f 4620 0000            CALLA  4620h
07c50: a3cf                      MOVE   A14,-*SP,1
07c60: 1828                      MOVK   1h,A8
07c70: 930e                      MOVE   A8,*A14+,1
07c80: 09c8 0061                 MOVI   61h,A8
07ca0: 930e                      MOVE   A8,*A14+,1
07cb0: 0d5f 4620 0000            CALLA  4620h
07ce0: a3cf                      MOVE   A14,-*SP,1
07cf0: 1828                      MOVK   1h,A8
07d00: 930e                      MOVE   A8,*A14+,1
07d10: 09c8 0062                 MOVI   62h,A8
07d30: 930e                      MOVE   A8,*A14+,1
07d40: 0d5f 4620 0000            CALLA  4620h
07d70: a3cf                      MOVE   A14,-*SP,1
07d80: 4508                      SUB    A8,A8
07d90: 930e                      MOVE   A8,*A14+,1
07da0: 09c8 0067                 MOVI   67h,A8
07dc0: 930e                      MOVE   A8,*A14+,1
07dd0: 0d5f 4620 0000            CALLA  4620h
07e00: a3cf                      MOVE   A14,-*SP,1
07e10: 4508                      SUB    A8,A8
07e20: 930e                      MOVE   A8,*A14+,1
07e30: 09c8 0068                 MOVI   68h,A8
07e50: 930e                      MOVE   A8,*A14+,1
07e60: 0d5f 4620 0000            CALLA  4620h
07e90: a3cf                      MOVE   A14,-*SP,1
07ea0: 4508                      SUB    A8,A8
07eb0: 930e                      MOVE   A8,*A14+,1
07ec0: 09c8 0069                 MOVI   69h,A8
07ee0: 930e                      MOVE   A8,*A14+,1
07ef0: 0d5f 4620 0000            CALLA  4620h
07f20: a3cf                      MOVE   A14,-*SP,1
07f30: 4508                      SUB    A8,A8
07f40: 930e                      MOVE   A8,*A14+,1
07f50: 09c8 006a                 MOVI   6Ah,A8
07f70: 930e                      MOVE   A8,*A14+,1
07f80: 0d5f 4620 0000            CALLA  4620h
07fb0: a3cf                      MOVE   A14,-*SP,1
07fc0: 09e8 8033 0000            MOVI   8033h,A8
07ff0: 930e                      MOVE   A8,*A14+,1
08000: 09c8 006b                 MOVI   6Bh,A8
08020: 930e                      MOVE   A8,*A14+,1
08030: 0d5f 4620 0000            CALLA  4620h
08060: a3cf                      MOVE   A14,-*SP,1
08070: 4508                      SUB    A8,A8
08080: 930e                      MOVE   A8,*A14+,1
08090: 09c8 004a                 MOVI   4Ah,A8
080b0: 930e                      MOVE   A8,*A14+,1
080c0: 0d5f 4620 0000            CALLA  4620h
080f0: a3cf                      MOVE   A14,-*SP,1
08100: 0550                      SETF   10h,0,0
08110: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
08130: 930e                      MOVE   A8,*A14+,1
08140: 09c8 0040                 MOVI   40h,A8
08160: 930e                      MOVE   A8,*A14+,1
08170: 0d5f 4620 0000            CALLA  4620h
081a0: a3cf                      MOVE   A14,-*SP,1
081b0: 1908                      MOVK   8h,A8
081c0: 930e                      MOVE   A8,*A14+,1
081d0: 09c8 0041                 MOVI   41h,A8
081f0: 930e                      MOVE   A8,*A14+,1
08200: 0d5f 4620 0000            CALLA  4620h
08230: a3cf                      MOVE   A14,-*SP,1
08240: 1908                      MOVK   8h,A8
08250: 930e                      MOVE   A8,*A14+,1
08260: 09c8 0042                 MOVI   42h,A8
08280: 930e                      MOVE   A8,*A14+,1
08290: 0d5f 4620 0000            CALLA  4620h
082c0: a3cf                      MOVE   A14,-*SP,1
082d0: 4508                      SUB    A8,A8
082e0: 930e                      MOVE   A8,*A14+,1
082f0: 09c8 0047                 MOVI   47h,A8
08310: 930e                      MOVE   A8,*A14+,1
08320: 0d5f 4620 0000            CALLA  4620h
08350: a3cf                      MOVE   A14,-*SP,1
08360: 09c8 07ff                 MOVI   7FFh,A8
08380: 930e                      MOVE   A8,*A14+,1
08390: 09c8 0048                 MOVI   48h,A8
083b0: 930e                      MOVE   A8,*A14+,1
083c0: 0d5f 4620 0000            CALLA  4620h
083f0: a3cf                      MOVE   A14,-*SP,1
08400: 09c8 07ff                 MOVI   7FFh,A8
08420: 930e                      MOVE   A8,*A14+,1
08430: 09c8 0049                 MOVI   49h,A8
08450: 930e                      MOVE   A8,*A14+,1
08460: 0d5f 4620 0000            CALLA  4620h
08490: a3cf                      MOVE   A14,-*SP,1
084a0: 09e8 8063 0000            MOVI   8063h,A8
084d0: 930e                      MOVE   A8,*A14+,1
084e0: 09c8 004b                 MOVI   4Bh,A8
08500: 930e                      MOVE   A8,*A14+,1
08510: 0d5f 4620 0000            CALLA  4620h
08540: a3cf                      MOVE   A14,-*SP,1
08550: 09c8 2000                 MOVI   2000h,A8
08570: 930e                      MOVE   A8,*A14+,1
08580: 0550                      SETF   10h,0,0
08590: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
085b0: 930e                      MOVE   A8,*A14+,1
085c0: 0d5f 4a30 0000            CALLA  4A30h
085f0: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
08620: 0ba8 0010 0000            ORI    10h,A8
08650: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
08680: b7ee 0040                 MOVE   *SP(40h),A14,1
086a0: 97ed                      MOVE   *SP+,A13,1
086b0: 0962                      RETS   2h

_tube_off:
086c0: a3cf                      MOVE   A14,-*SP,1
086d0: 4508                      SUB    A8,A8
086e0: 930e                      MOVE   A8,*A14+,1
086f0: 09c8 004d                 MOVI   4Dh,A8
08710: 930e                      MOVE   A8,*A14+,1
08720: 0d5f 4620 0000            CALLA  4620h
08750: 0960                      RETS   

_tube_on:
08760: a3cf                      MOVE   A14,-*SP,1
08770: 1848                      MOVK   2h,A8
08780: 930e                      MOVE   A8,*A14+,1
08790: 09c8 004d                 MOVI   4Dh,A8
087b0: 930e                      MOVE   A8,*A14+,1
087c0: 0d5f 4620 0000            CALLA  4620h
087f0: 0960                      RETS   

_stop_ramps:
08800: a3cf                      MOVE   A14,-*SP,1
08810: 09c8 0022                 MOVI   22h,A8
08830: 930e                      MOVE   A8,*A14+,1
08840: 09c8 004b                 MOVI   4Bh,A8
08860: 930e                      MOVE   A8,*A14+,1
08870: 0d5f 4620 0000            CALLA  4620h
088a0: a3cf                      MOVE   A14,-*SP,1
088b0: 1a48                      MOVK   12h,A8
088c0: 930e                      MOVE   A8,*A14+,1
088d0: 09c8 006b                 MOVI   6Bh,A8
088f0: 930e                      MOVE   A8,*A14+,1
08900: 0d5f 4620 0000            CALLA  4620h
08930: 0960                      RETS   

_stop_pixel:
08940: a3cf                      MOVE   A14,-*SP,1
08950: 1868                      MOVK   3h,A8
08960: 930e                      MOVE   A8,*A14+,1
08970: 09c8 002b                 MOVI   2Bh,A8
08990: 930e                      MOVE   A8,*A14+,1
089a0: 0d5f 4620 0000            CALLA  4620h
089d0: 0960                      RETS   

_start_pixel:
089e0: a3cf                      MOVE   A14,-*SP,1
089f0: 09e8 8003 0000            MOVI   8003h,A8
08a20: 930e                      MOVE   A8,*A14+,1
08a30: 09c8 002b                 MOVI   2Bh,A8
08a50: 930e                      MOVE   A8,*A14+,1
08a60: 0d5f 4620 0000            CALLA  4620h
08a90: 0960                      RETS   

_DSP_send_message:
08aa0: 098f 000c                 MMTM   SP,A12,A13
08ac0: 4dcd                      MOVE   A14,A13
08ad0: 0b0e 0040                 ADDI   40h,A14
08af0: 1948                      MOVK   Ah,A8
08b00: 0570                      SETF   10h,1,0
08b10: b10d 0020                 MOVE   A8,*A13(20h),0
08b30: 1428                      DEC    A8
08b40: b10d 0020                 MOVE   A8,*A13(20h),0
08b60: 1028                      INC    A8
08b70: ca29                      JREQ   8E10h
08b80: a3cf                      MOVE   A14,-*SP,1
08b90: 09e8 4560 000e            MOVI   E4560h,A8
08bc0: 930e                      MOVE   A8,*A14+,1
08bd0: 1868                      MOVK   3h,A8
08be0: 930e                      MOVE   A8,*A14+,1
08bf0: 0d5f 0000 0000            CALLA  0h
08c20: 830d                      MOVE   A8,*A13,1
08c30: 4d08                      MOVE   A8,A8
08c40: cb14                      JRNE   8D90h
08c50: a3cf                      MOVE   A14,-*SP,1
08c60: 4508                      SUB    A8,A8
08c70: 930e                      MOVE   A8,*A14+,1
08c80: 09e8 1140 0004            MOVI   41140h,A8
08cb0: 930e                      MOVE   A8,*A14+,1
08cc0: 1ba8                      MOVK   1Dh,A8
08cd0: 930e                      MOVE   A8,*A14+,1
08ce0: 0d5f 0000 0000            CALLA  0h
08d10: 830d                      MOVE   A8,*A13,1
08d20: 4d08                      MOVE   A8,A8
08d30: cb05                      JRNE   8D90h
08d40: 07e8 1160 0004            MOVE   @41160h,A8
08d70: 1488                      SUBK   4h,A8
08d80: cb08                      JRNE   8E10h
08d90: 0570                      SETF   10h,1,0
08da0: b5a8 0020                 MOVE   *A13(20h),A8,0
08dc0: 1428                      DEC    A8
08dd0: b10d 0020                 MOVE   A8,*A13(20h),0
08df0: 1028                      INC    A8
08e00: cbd7                      JRNE   8B80h
08e10: 07a8 45a0 000e            MOVE   @E45A0h,A8,1
08e40: 0b48 ffd8                 CMPI   27h,A8
08e60: cb1d                      JRNE   9040h
08e70: 4508                      SUB    A8,A8
08e80: 05e8 de20 0003            MOVB   A8,@3DE20h
08eb0: 07e8 1160 0004            MOVE   @41160h,A8
08ee0: 3928                      DSJS   A8,8F80h
08ef0: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
08f20: 0ba8 0020 0000            ORI    20h,A8
08f50: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
08f80: 07e8 1160 0004            MOVE   @41160h,A8
08fb0: cb08                      JRNE   9040h
08fc0: 1908                      MOVK   8h,A8
08fd0: 07ac dea0 0003            MOVE   @3DEA0h,A12,1
09000: 5588                      OR     A12,A8
09010: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
09040: 0bee ffbf                 SUBI   40h,A14
09060: 09af 3000                 MMFM   SP,A12,A13
09080: 0960                      RETS   

_load_hrru_config:
09090: a3af                      MOVE   A13,-*SP,1
090a0: 4dcd                      MOVE   A14,A13
090b0: 0550                      SETF   10h,0,0
090c0: 05c0 4560 000c 19e0 0004  MOVE   @C4560h,@419E0h,0
09110: 05c0 4570 000c 19f0 0004  MOVE   @C4570h,@419F0h,0
09160: 05c0 4580 000c 1a00 0004  MOVE   @C4580h,@41A00h,0
091b0: 05c0 4590 000c 1a10 0004  MOVE   @C4590h,@41A10h,0
09200: 05c0 45a0 000c 1a20 0004  MOVE   @C45A0h,@41A20h,0
09250: 05c0 45b0 000c 1a30 0004  MOVE   @C45B0h,@41A30h,0
092a0: 05c0 45c0 000c 1a40 0004  MOVE   @C45C0h,@41A40h,0
092f0: 05c0 45d0 000c 1a50 0004  MOVE   @C45D0h,@41A50h,0
09340: 05c0 45e0 000c 1a60 0004  MOVE   @C45E0h,@41A60h,0
09390: 05c0 45f0 000c 1a70 0004  MOVE   @C45F0h,@41A70h,0
093e0: 05c0 4600 000c 1a80 0004  MOVE   @C4600h,@41A80h,0
09430: 05c0 4610 000c 1a90 0004  MOVE   @C4610h,@41A90h,0
09480: 05c0 4620 000c 1aa0 0004  MOVE   @C4620h,@41AA0h,0
094d0: 05c0 4630 000c 1ab0 0004  MOVE   @C4630h,@41AB0h,0
09520: 05c0 4640 000c 1ac0 0004  MOVE   @C4640h,@41AC0h,0
09570: 05c0 4650 000c 1ad0 0004  MOVE   @C4650h,@41AD0h,0
095c0: 05c0 4660 000c 1ae0 0004  MOVE   @C4660h,@41AE0h,0
09610: 0d5f 8800 0000            CALLA  8800h
09640: 0d5f 8940 0000            CALLA  8940h
09670: 0d5f 98b0 0000            CALLA  98B0h
096a0: 0d5f 24d0 0000            CALLA  24D0h
096d0: a3cf                      MOVE   A14,-*SP,1
096e0: 07e8 de30 0003            MOVE   @3DE30h,A8
09710: 930e                      MOVE   A8,*A14+,1
09720: 0d5f 2320 0000            CALLA  2320h
09750: 0d5f 89e0 0000            CALLA  89E0h
09780: 0d5f aae0 0000            CALLA  AAE0h
097b0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
097d0: ca09                      JREQ   9870h
097e0: 07a8 dea0 0003            MOVE   @3DEA0h,A8,1
09810: 0ba8 0010 0000            ORI    10h,A8
09840: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
09870: b7ee 0040                 MOVE   *SP(40h),A14,1
09890: 97ed                      MOVE   *SP+,A13,1
098a0: 0962                      RETS   2h

_setup_ramps:
098b0: a3cf                      MOVE   A14,-*SP,1
098c0: 4508                      SUB    A8,A8
098d0: 930e                      MOVE   A8,*A14+,1
098e0: 1808                      MOVK   20h,A8
098f0: 930e                      MOVE   A8,*A14+,1
09900: 0d5f 4620 0000            CALLA  4620h
09930: a3cf                      MOVE   A14,-*SP,1
09940: 09c8 0080                 MOVI   80h,A8
09960: 930e                      MOVE   A8,*A14+,1
09970: 09c8 0021                 MOVI   21h,A8
09990: 930e                      MOVE   A8,*A14+,1
099a0: 0d5f 4620 0000            CALLA  4620h
099d0: a3cf                      MOVE   A14,-*SP,1
099e0: 1828                      MOVK   1h,A8
099f0: 930e                      MOVE   A8,*A14+,1
09a00: 09c8 0022                 MOVI   22h,A8
09a20: 930e                      MOVE   A8,*A14+,1
09a30: 0d5f 4620 0000            CALLA  4620h
09a60: a3cf                      MOVE   A14,-*SP,1
09a70: 4508                      SUB    A8,A8
09a80: 930e                      MOVE   A8,*A14+,1
09a90: 09c8 0027                 MOVI   27h,A8
09ab0: 930e                      MOVE   A8,*A14+,1
09ac0: 0d5f 4620 0000            CALLA  4620h
09af0: a3cf                      MOVE   A14,-*SP,1
09b00: 09c8 0080                 MOVI   80h,A8
09b20: 930e                      MOVE   A8,*A14+,1
09b30: 09c8 0028                 MOVI   28h,A8
09b50: 930e                      MOVE   A8,*A14+,1
09b60: 0d5f 4620 0000            CALLA  4620h
09b90: a3cf                      MOVE   A14,-*SP,1
09ba0: 1828                      MOVK   1h,A8
09bb0: 930e                      MOVE   A8,*A14+,1
09bc0: 09c8 0029                 MOVI   29h,A8
09be0: 930e                      MOVE   A8,*A14+,1
09bf0: 0d5f 4620 0000            CALLA  4620h
09c20: a3cf                      MOVE   A14,-*SP,1
09c30: 4508                      SUB    A8,A8
09c40: 930e                      MOVE   A8,*A14+,1
09c50: 09c8 002a                 MOVI   2Ah,A8
09c70: 930e                      MOVE   A8,*A14+,1
09c80: 0d5f 4620 0000            CALLA  4620h
09cb0: a3cf                      MOVE   A14,-*SP,1
09cc0: 19e8                      MOVK   Fh,A8
09cd0: 930e                      MOVE   A8,*A14+,1
09ce0: 13a8                      ADDK   1Dh,A8
09cf0: 930e                      MOVE   A8,*A14+,1
09d00: 0d5f 4620 0000            CALLA  4620h
09d30: a3cf                      MOVE   A14,-*SP,1
09d40: 1b88                      MOVK   1Ch,A8
09d50: 930e                      MOVE   A8,*A14+,1
09d60: 1228                      ADDK   11h,A8
09d70: 930e                      MOVE   A8,*A14+,1
09d80: 0d5f 4620 0000            CALLA  4620h
09db0: a3cf                      MOVE   A14,-*SP,1
09dc0: 09c8 7de0                 MOVI   7DE0h,A8
09de0: 930e                      MOVE   A8,*A14+,1
09df0: 09c8 0040                 MOVI   40h,A8
09e10: 930e                      MOVE   A8,*A14+,1
09e20: 0d5f 4620 0000            CALLA  4620h
09e50: a3cf                      MOVE   A14,-*SP,1
09e60: 1888                      MOVK   4h,A8
09e70: 930e                      MOVE   A8,*A14+,1
09e80: 09c8 0041                 MOVI   41h,A8
09ea0: 930e                      MOVE   A8,*A14+,1
09eb0: 0d5f 4620 0000            CALLA  4620h
09ee0: a3cf                      MOVE   A14,-*SP,1
09ef0: 1828                      MOVK   1h,A8
09f00: 930e                      MOVE   A8,*A14+,1
09f10: 09c8 0042                 MOVI   42h,A8
09f30: 930e                      MOVE   A8,*A14+,1
09f40: 0d5f 4620 0000            CALLA  4620h
09f70: a3cf                      MOVE   A14,-*SP,1
09f80: 1828                      MOVK   1h,A8
09f90: 930e                      MOVE   A8,*A14+,1
09fa0: 09c8 0047                 MOVI   47h,A8
09fc0: 930e                      MOVE   A8,*A14+,1
09fd0: 0d5f 4620 0000            CALLA  4620h
0a000: a3cf                      MOVE   A14,-*SP,1
0a010: 09c8 0440                 MOVI   440h,A8
0a030: 930e                      MOVE   A8,*A14+,1
0a040: 09c8 0048                 MOVI   48h,A8
0a060: 930e                      MOVE   A8,*A14+,1
0a070: 0d5f 4620 0000            CALLA  4620h
0a0a0: a3cf                      MOVE   A14,-*SP,1
0a0b0: 09c8 0100                 MOVI   100h,A8
0a0d0: 930e                      MOVE   A8,*A14+,1
0a0e0: 09c8 0049                 MOVI   49h,A8
0a100: 930e                      MOVE   A8,*A14+,1
0a110: 0d5f 4620 0000            CALLA  4620h
0a140: a3cf                      MOVE   A14,-*SP,1
0a150: 1828                      MOVK   1h,A8
0a160: 930e                      MOVE   A8,*A14+,1
0a170: 09c8 004a                 MOVI   4Ah,A8
0a190: 930e                      MOVE   A8,*A14+,1
0a1a0: 0d5f 4620 0000            CALLA  4620h
0a1d0: a3cf                      MOVE   A14,-*SP,1
0a1e0: 18a8                      MOVK   5h,A8
0a1f0: 930e                      MOVE   A8,*A14+,1
0a200: 09c8 004c                 MOVI   4Ch,A8
0a220: 930e                      MOVE   A8,*A14+,1
0a230: 0d5f 4620 0000            CALLA  4620h
0a260: a3cf                      MOVE   A14,-*SP,1
0a270: 09c8 1e7f                 MOVI   1E7Fh,A8
0a290: 930e                      MOVE   A8,*A14+,1
0a2a0: 09c8 0060                 MOVI   60h,A8
0a2c0: 930e                      MOVE   A8,*A14+,1
0a2d0: 0d5f 4620 0000            CALLA  4620h
0a300: a3cf                      MOVE   A14,-*SP,1
0a310: 09c8 00b4                 MOVI   B4h,A8
0a330: 930e                      MOVE   A8,*A14+,1
0a340: 09c8 0061                 MOVI   61h,A8
0a360: 930e                      MOVE   A8,*A14+,1
0a370: 0d5f 4620 0000            CALLA  4620h
0a3a0: a3cf                      MOVE   A14,-*SP,1
0a3b0: 1bc8                      MOVK   1Eh,A8
0a3c0: 930e                      MOVE   A8,*A14+,1
0a3d0: 09c8 0062                 MOVI   62h,A8
0a3f0: 930e                      MOVE   A8,*A14+,1
0a400: 0d5f 4620 0000            CALLA  4620h
0a430: a3cf                      MOVE   A14,-*SP,1
0a440: 1828                      MOVK   1h,A8
0a450: 930e                      MOVE   A8,*A14+,1
0a460: 09c8 0067                 MOVI   67h,A8
0a480: 930e                      MOVE   A8,*A14+,1
0a490: 0d5f 4620 0000            CALLA  4620h
0a4c0: a3cf                      MOVE   A14,-*SP,1
0a4d0: 09c8 0680                 MOVI   680h,A8
0a4f0: 930e                      MOVE   A8,*A14+,1
0a500: 09c8 0068                 MOVI   68h,A8
0a520: 930e                      MOVE   A8,*A14+,1
0a530: 0d5f 4620 0000            CALLA  4620h
0a560: a3cf                      MOVE   A14,-*SP,1
0a570: 09c8 0100                 MOVI   100h,A8
0a590: 930e                      MOVE   A8,*A14+,1
0a5a0: 09c8 0069                 MOVI   69h,A8
0a5c0: 930e                      MOVE   A8,*A14+,1
0a5d0: 0d5f 4620 0000            CALLA  4620h
0a600: a3cf                      MOVE   A14,-*SP,1
0a610: 4508                      SUB    A8,A8
0a620: 930e                      MOVE   A8,*A14+,1
0a630: 09c8 006a                 MOVI   6Ah,A8
0a650: 930e                      MOVE   A8,*A14+,1
0a660: 0d5f 4620 0000            CALLA  4620h
0a690: a3cf                      MOVE   A14,-*SP,1
0a6a0: 1888                      MOVK   4h,A8
0a6b0: 930e                      MOVE   A8,*A14+,1
0a6c0: 09c8 006c                 MOVI   6Ch,A8
0a6e0: 930e                      MOVE   A8,*A14+,1
0a6f0: 0d5f 4620 0000            CALLA  4620h
0a720: a3cf                      MOVE   A14,-*SP,1
0a730: 09c8 0fff                 MOVI   FFFh,A8
0a750: 930e                      MOVE   A8,*A14+,1
0a760: 09c8 0073                 MOVI   73h,A8
0a780: 930e                      MOVE   A8,*A14+,1
0a790: 0d5f 4620 0000            CALLA  4620h
0a7c0: a3cf                      MOVE   A14,-*SP,1
0a7d0: 09e8 8000 0000            MOVI   8000h,A8
0a800: 930e                      MOVE   A8,*A14+,1
0a810: 09c8 0074                 MOVI   74h,A8
0a830: 930e                      MOVE   A8,*A14+,1
0a840: 0d5f 4620 0000            CALLA  4620h
0a870: a3cf                      MOVE   A14,-*SP,1
0a880: 09c8 00ff                 MOVI   FFh,A8
0a8a0: 930e                      MOVE   A8,*A14+,1
0a8b0: 09c8 0075                 MOVI   75h,A8
0a8d0: 930e                      MOVE   A8,*A14+,1
0a8e0: 0d5f 4620 0000            CALLA  4620h
0a910: 0960                      RETS   

_blank_beam:
0a920: 0d5f 8800 0000            CALLA  8800h
0a950: a3cf                      MOVE   A14,-*SP,1
0a960: 09c8 0e65                 MOVI   E65h,A8
0a980: 930e                      MOVE   A8,*A14+,1
0a990: 09c8 0053                 MOVI   53h,A8
0a9b0: 930e                      MOVE   A8,*A14+,1
0a9c0: 0d5f 4620 0000            CALLA  4620h
0a9f0: a3cf                      MOVE   A14,-*SP,1
0aa00: 09e8 8000 0000            MOVI   8000h,A8
0aa30: 930e                      MOVE   A8,*A14+,1
0aa40: 09c8 0074                 MOVI   74h,A8
0aa60: 930e                      MOVE   A8,*A14+,1
0aa70: 0d5f 4620 0000            CALLA  4620h
0aaa0: 0d5f aae0 0000            CALLA  AAE0h
0aad0: 0960                      RETS   

_start_ramps:
0aae0: a3cf                      MOVE   A14,-*SP,1
0aaf0: 09e8 8022 0000            MOVI   8022h,A8
0ab20: 930e                      MOVE   A8,*A14+,1
0ab30: 09c8 004b                 MOVI   4Bh,A8
0ab50: 930e                      MOVE   A8,*A14+,1
0ab60: 0d5f 4620 0000            CALLA  4620h
0ab90: a3cf                      MOVE   A14,-*SP,1
0aba0: 09e8 8012 0000            MOVI   8012h,A8
0abd0: 930e                      MOVE   A8,*A14+,1
0abe0: 09c8 006b                 MOVI   6Bh,A8
0ac00: 930e                      MOVE   A8,*A14+,1
0ac10: 0d5f 4620 0000            CALLA  4620h
0ac40: 0960                      RETS   

_open_shutter:
0ac50: 07e8 de40 0003            MOVE   @3DE40h,A8
0ac80: 3928                      DSJS   A8,AD20h
0ac90: a3cf                      MOVE   A14,-*SP,1
0aca0: 1828                      MOVK   1h,A8
0acb0: 930e                      MOVE   A8,*A14+,1
0acc0: 09c8 006d                 MOVI   6Dh,A8
0ace0: 930e                      MOVE   A8,*A14+,1
0acf0: 0d5f 4620 0000            CALLA  4620h
0ad20: 0960                      RETS   

_close_shutter:
0ad30: 07e8 de40 0003            MOVE   @3DE40h,A8
0ad60: 3928                      DSJS   A8,AE00h
0ad70: a3cf                      MOVE   A14,-*SP,1
0ad80: 4508                      SUB    A8,A8
0ad90: 930e                      MOVE   A8,*A14+,1
0ada0: 09c8 006d                 MOVI   6Dh,A8
0adc0: 930e                      MOVE   A8,*A14+,1
0add0: 0d5f 4620 0000            CALLA  4620h
0ae00: 0960                      RETS   

_start_photo:
0ae10: 0d5f 8800 0000            CALLA  8800h
0ae40: a3cf                      MOVE   A14,-*SP,1
0ae50: 4508                      SUB    A8,A8
0ae60: 930e                      MOVE   A8,*A14+,1
0ae70: 09c8 0074                 MOVI   74h,A8
0ae90: 930e                      MOVE   A8,*A14+,1
0aea0: 0d5f 4620 0000            CALLA  4620h
0aed0: a3cf                      MOVE   A14,-*SP,1
0aee0: 07e8 de30 0003            MOVE   @3DE30h,A8
0af10: 930e                      MOVE   A8,*A14+,1
0af20: 0d5f 2320 0000            CALLA  2320h
0af50: a3cf                      MOVE   A14,-*SP,1
0af60: d60e de80 0003            MOVE   @3DE80h,*A14+,1
0af90: 0d5f 2ee0 0000            CALLA  2EE0h
0afc0: a3cf                      MOVE   A14,-*SP,1
0afd0: d60e de60 0003            MOVE   @3DE60h,*A14+,1
0b000: 0d5f 3b00 0000            CALLA  3B00h
0b030: a3cf                      MOVE   A14,-*SP,1
0b040: 0550                      SETF   10h,0,0
0b050: 05a8 19f0 0004            MOVE   @419F0h,A8,0
0b080: 930e                      MOVE   A8,*A14+,1
0b090: 09c8 0051                 MOVI   51h,A8
0b0b0: 930e                      MOVE   A8,*A14+,1
0b0c0: 0d5f 4620 0000            CALLA  4620h
0b0f0: a3cf                      MOVE   A14,-*SP,1
0b100: 0550                      SETF   10h,0,0
0b110: 05a8 1a00 0004            MOVE   @41A00h,A8,0
0b140: 930e                      MOVE   A8,*A14+,1
0b150: 09c8 0052                 MOVI   52h,A8
0b170: 930e                      MOVE   A8,*A14+,1
0b180: 0d5f 4620 0000            CALLA  4620h
0b1b0: 0d5f ac50 0000            CALLA  AC50h
0b1e0: 0960                      RETS   

_stop_photo:
0b1f0: 0d5f ad30 0000            CALLA  AD30h
0b220: a3cf                      MOVE   A14,-*SP,1
0b230: 0550                      SETF   10h,0,0
0b240: 05a8 19f0 0004            MOVE   @419F0h,A8,0
0b270: 2be8                      SRA    1h,A8
0b280: 0528                      ZEXT   A8,0
0b290: 930e                      MOVE   A8,*A14+,1
0b2a0: 09c8 0051                 MOVI   51h,A8
0b2c0: 930e                      MOVE   A8,*A14+,1
0b2d0: 0d5f 4620 0000            CALLA  4620h
0b300: a3cf                      MOVE   A14,-*SP,1
0b310: 0550                      SETF   10h,0,0
0b320: 05a8 1a00 0004            MOVE   @41A00h,A8,0
0b350: 2be8                      SRA    1h,A8
0b360: 0528                      ZEXT   A8,0
0b370: 930e                      MOVE   A8,*A14+,1
0b380: 09c8 0052                 MOVI   52h,A8
0b3a0: 930e                      MOVE   A8,*A14+,1
0b3b0: 0d5f 4620 0000            CALLA  4620h
0b3e0: 0960                      RETS   

_cine_start:
0b3f0: 098f 0014                 MMTM   SP,A11,A13
0b410: 4dcd                      MOVE   A14,A13
0b420: 0b0e 0060                 ADDI   60h,A14
0b440: c00c                      JR     B510h
0b450: 1848                      MOVK   2h,A8
0b460: b30d 0020                 MOVE   A8,*A13(20h),1
0b480: c011                      JR     B5A0h
0b490: 1888                      MOVK   4h,A8
0b4a0: b30d 0020                 MOVE   A8,*A13(20h),1
0b4c0: c00d                      JR     B5A0h
0b4d0: 1908                      MOVK   8h,A8
0b4e0: b30d 0020                 MOVE   A8,*A13(20h),1
0b500: c009                      JR     B5A0h
0b510: 0550                      SETF   10h,0,0
0b520: 05a8 f420 0003            MOVE   @3F420h,A8,0
0b550: caef                      JREQ   B450h
0b560: 1428                      DEC    A8
0b570: caf1                      JREQ   B490h
0b580: 3d88                      DSJS   A8,B4D0h
0b590: c0f3                      JR     B4D0h
0b5a0: d60e f400 0003            MOVE   @3F400h,*A14+,1
0b5d0: 0d5f 8980 0003            CALLA  38980h
0b600: 09cb 0038                 MOVI   38h,A11
0b620: 5d0b                      MPYS   A8,A11
0b630: b36d 0040                 MOVE   A11,*A13(40h),1
0b650: 4508                      SUB    A8,A8
0b660: 830d                      MOVE   A8,*A13,1
0b670: b7ab 0020                 MOVE   *A13(20h),A11,1
0b690: 5d6b                      MPYS   A11,A11
0b6a0: 4968                      CMP    A11,A8
0b6b0: c51d                      JRGE   B890h
0b6c0: 0550                      SETF   10h,0,0
0b6d0: 05a8 f430 0003            MOVE   @3F430h,A8,0
0b700: cb18                      JRNE   B890h
0b710: b7ab 0040                 MOVE   *A13(40h),A11,1
0b730: ca05                      JREQ   B790h
0b740: a3cf                      MOVE   A14,-*SP,1
0b750: 936e                      MOVE   A11,*A14+,1
0b760: 0d5f 0000 0000            CALLA  0h
0b790: a3cf                      MOVE   A14,-*SP,1
0b7a0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0b7c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0b7e0: 0d5f 6600 0003            CALLA  36600h
0b810: 87a8                      MOVE   *A13,A8,1
0b820: 1028                      INC    A8
0b830: 830d                      MOVE   A8,*A13,1
0b840: b7ab 0020                 MOVE   *A13(20h),A11,1
0b860: 5d6b                      MPYS   A11,A11
0b870: 4968                      CMP    A11,A8
0b880: c4e3                      JRLT   B6C0h
0b890: 4508                      SUB    A8,A8
0b8a0: 0550                      SETF   10h,0,0
0b8b0: 0588 f430 0003            MOVE   A8,@3F430h,0
0b8e0: 07ab dea0 0003            MOVE   @3DEA0h,A11,1
0b910: 0bab 0100 0000            ORI    100h,A11
0b940: 078b dea0 0003            MOVE   A11,@3DEA0h,1
0b970: 0bee ff9f                 SUBI   60h,A14
0b990: 09af 2800                 MMFM   SP,A11,A13
0b9b0: 0960                      RETS   

_cp_imx_init:
0b9c0: a3af                      MOVE   A13,-*SP,1
0b9d0: 4dcd                      MOVE   A14,A13
0b9e0: 100e                      ADDK   20h,A14
0b9f0: a3cf                      MOVE   A14,-*SP,1
0ba00: 09e8 0000 0000            MOVI   0h,A8
0ba30: 930e                      MOVE   A8,*A14+,1
0ba40: 4508                      SUB    A8,A8
0ba50: 930e                      MOVE   A8,*A14+,1
0ba60: 09c8 0400                 MOVI   400h,A8
0ba80: 930e                      MOVE   A8,*A14+,1
0ba90: 09e8 4149 5846            MOVI   58464149h,A8
0bac0: 930e                      MOVE   A8,*A14+,1
0bad0: 1848                      MOVK   2h,A8
0bae0: 930e                      MOVE   A8,*A14+,1
0baf0: 0d5f 0000 0000            CALLA  0h
0bb20: 830d                      MOVE   A8,*A13,1
0bb30: 4d08                      MOVE   A8,A8
0bb40: cb07                      JRNE   BBC0h
0bb50: a3cf                      MOVE   A14,-*SP,1
0bb60: 1848                      MOVK   2h,A8
0bb70: 930e                      MOVE   A8,*A14+,1
0bb80: 0d5f 0000 0000            CALLA  0h
0bbb0: 830d                      MOVE   A8,*A13,1
0bbc0: a3cf                      MOVE   A14,-*SP,1
0bbd0: 09c8 0032                 MOVI   32h,A8
0bbf0: 930e                      MOVE   A8,*A14+,1
0bc00: 09e8 33a0 0004            MOVI   433A0h,A8
0bc30: 930e                      MOVE   A8,*A14+,1
0bc40: 09e8 4149 5846            MOVI   58464149h,A8
0bc70: 930e                      MOVE   A8,*A14+,1
0bc80: 1bc8                      MOVK   1Eh,A8
0bc90: 930e                      MOVE   A8,*A14+,1
0bca0: 0d5f 0000 0000            CALLA  0h
0bcd0: 830d                      MOVE   A8,*A13,1
0bce0: 0d5f 0000 0000            CALLA  0h
0bd10: 1508                      SUBK   8h,A8
0bd20: cb1d                      JRNE   BF00h
0bd30: 1828                      MOVK   1h,A8
0bd40: 05e8 f380 0003            MOVB   A8,@3F380h
0bd70: 1908                      MOVK   8h,A8
0bd80: 0788 f320 0003            MOVE   A8,@3F320h,1
0bdb0: 0788 f340 0003            MOVE   A8,@3F340h,1
0bde0: 1868                      MOVK   3h,A8
0bdf0: 05e8 f360 0003            MOVB   A8,@3F360h
0be20: 4508                      SUB    A8,A8
0be30: 05e8 f370 0003            MOVB   A8,@3F370h
0be60: 09c8 0100                 MOVI   100h,A8
0be80: 0550                      SETF   10h,0,0
0be90: 0588 f390 0003            MOVE   A8,@3F390h,0
0bec0: 0588 f3a0 0003            MOVE   A8,@3F3A0h,0
0bef0: c01b                      JR     C0B0h
0bf00: 4508                      SUB    A8,A8
0bf10: 05e8 f380 0003            MOVB   A8,@3F380h
0bf40: 1888                      MOVK   4h,A8
0bf50: 0788 f320 0003            MOVE   A8,@3F320h,1
0bf80: 0788 f340 0003            MOVE   A8,@3F340h,1
0bfb0: 1868                      MOVK   3h,A8
0bfc0: 05e8 f360 0003            MOVB   A8,@3F360h
0bff0: 4508                      SUB    A8,A8
0c000: 05e8 f370 0003            MOVB   A8,@3F370h
0c030: 1a08                      MOVK   10h,A8
0c040: 0550                      SETF   10h,0,0
0c050: 0588 f390 0003            MOVE   A8,@3F390h,0
0c080: 0588 f3a0 0003            MOVE   A8,@3F3A0h,0
0c0b0: 87a8                      MOVE   *A13,A8,1
0c0c0: 140e                      SUBK   20h,A14
0c0d0: 97ed                      MOVE   *SP+,A13,1
0c0e0: 0960                      RETS   

_cp_imx_status:
0c0f0: 098f 000c                 MMTM   SP,A12,A13
0c110: 4dcd                      MOVE   A14,A13
0c120: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0c140: 07ac dea0 0003            MOVE   @3DEA0h,A12,1
0c170: b388 0060                 MOVE   A12,*A8(60h),1
0c190: 4508                      SUB    A8,A8
0c1a0: 0788 dea0 0003            MOVE   A8,@3DEA0h,1
0c1d0: 07ec de20 0003            MOVE   @3DE20h,A12
0c200: 394c                      DSJS   A12,C2B0h
0c210: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0c230: 0d5f 0000 0000            CALLA  0h
0c260: 0d5f 9190 0003            CALLA  39190h
0c290: a7c8                      MOVE   -*A14,A8,1
0c2a0: 830c                      MOVE   A8,*A12,1
0c2b0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0c2d0: 0d5f 2440 0001            CALLA  12440h
0c300: ad0c 0080                 MOVB   A8,*A12(80h)
0c320: b7ee 0060                 MOVE   *SP(60h),A14,1
0c340: 09af 3000                 MMFM   SP,A12,A13
0c360: 0962                      RETS   2h

_cp_imx_hrru_fitted:
0c370: a3af                      MOVE   A13,-*SP,1
0c380: 4dcd                      MOVE   A14,A13
0c390: 100e                      ADDK   20h,A14
0c3a0: 1928                      MOVK   9h,A8
0c3b0: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0c3e0: 1bc8                      MOVK   1Eh,A8
0c3f0: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0c420: 1828                      MOVK   1h,A8
0c430: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0c460: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0c480: 05e8 6fa0 000e            MOVB   A8,@E6FA0h
0c4b0: a3cf                      MOVE   A14,-*SP,1
0c4c0: 09e8 6f40 000e            MOVI   E6F40h,A8
0c4f0: 930e                      MOVE   A8,*A14+,1
0c500: 1b88                      MOVK   1Ch,A8
0c510: 930e                      MOVE   A8,*A14+,1
0c520: 0d5f 0000 0000            CALLA  0h
0c550: 830d                      MOVE   A8,*A13,1
0c560: 4d08                      MOVE   A8,A8
0c570: ca14                      JREQ   C6C0h
0c580: 1828                      MOVK   1h,A8
0c590: 0788 1b00 0004            MOVE   A8,@41B00h,1
0c5c0: 09c8 0041                 MOVI   41h,A8
0c5e0: 05e8 1b20 0004            MOVB   A8,@41B20h
0c610: a3cf                      MOVE   A14,-*SP,1
0c620: 09e8 1b00 0004            MOVI   41B00h,A8
0c650: 930e                      MOVE   A8,*A14+,1
0c660: 1bc8                      MOVK   1Eh,A8
0c670: 930e                      MOVE   A8,*A14+,1
0c680: 0d5f 0000 0000            CALLA  0h
0c6b0: 830d                      MOVE   A8,*A13,1
0c6c0: b7ee 0040                 MOVE   *SP(40h),A14,1
0c6e0: 97ed                      MOVE   *SP+,A13,1
0c6f0: 0962                      RETS   2h

_cp_imx_left_photo:
0c700: a3af                      MOVE   A13,-*SP,1
0c710: 4dcd                      MOVE   A14,A13
0c720: 100e                      ADDK   20h,A14
0c730: 1928                      MOVK   9h,A8
0c740: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0c770: 1bc8                      MOVK   1Eh,A8
0c780: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0c7b0: 1848                      MOVK   2h,A8
0c7c0: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0c7f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0c810: 05e8 6fa0 000e            MOVB   A8,@E6FA0h
0c840: a3cf                      MOVE   A14,-*SP,1
0c850: 09e8 6f40 000e            MOVI   E6F40h,A8
0c880: 930e                      MOVE   A8,*A14+,1
0c890: 1b88                      MOVK   1Ch,A8
0c8a0: 930e                      MOVE   A8,*A14+,1
0c8b0: 0d5f 0000 0000            CALLA  0h
0c8e0: 830d                      MOVE   A8,*A13,1
0c8f0: 4d08                      MOVE   A8,A8
0c900: ca14                      JREQ   CA50h
0c910: 1828                      MOVK   1h,A8
0c920: 0788 1b00 0004            MOVE   A8,@41B00h,1
0c950: 09c8 0042                 MOVI   42h,A8
0c970: 05e8 1b20 0004            MOVB   A8,@41B20h
0c9a0: a3cf                      MOVE   A14,-*SP,1
0c9b0: 09e8 1b00 0004            MOVI   41B00h,A8
0c9e0: 930e                      MOVE   A8,*A14+,1
0c9f0: 1bc8                      MOVK   1Eh,A8
0ca00: 930e                      MOVE   A8,*A14+,1
0ca10: 0d5f 0000 0000            CALLA  0h
0ca40: 830d                      MOVE   A8,*A13,1
0ca50: b7ee 0040                 MOVE   *SP(40h),A14,1
0ca70: 97ed                      MOVE   *SP+,A13,1
0ca80: 0962                      RETS   2h

_cp_imx_right_photo:
0ca90: a3af                      MOVE   A13,-*SP,1
0caa0: 4dcd                      MOVE   A14,A13
0cab0: 100e                      ADDK   20h,A14
0cac0: 1928                      MOVK   9h,A8
0cad0: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0cb00: 1bc8                      MOVK   1Eh,A8
0cb10: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0cb40: 1868                      MOVK   3h,A8
0cb50: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0cb80: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0cba0: 05e8 6fa0 000e            MOVB   A8,@E6FA0h
0cbd0: a3cf                      MOVE   A14,-*SP,1
0cbe0: 09e8 6f40 000e            MOVI   E6F40h,A8
0cc10: 930e                      MOVE   A8,*A14+,1
0cc20: 1b88                      MOVK   1Ch,A8
0cc30: 930e                      MOVE   A8,*A14+,1
0cc40: 0d5f 0000 0000            CALLA  0h
0cc70: 830d                      MOVE   A8,*A13,1
0cc80: 4d08                      MOVE   A8,A8
0cc90: ca14                      JREQ   CDE0h
0cca0: 1828                      MOVK   1h,A8
0ccb0: 0788 1b00 0004            MOVE   A8,@41B00h,1
0cce0: 09c8 0043                 MOVI   43h,A8
0cd00: 05e8 1b20 0004            MOVB   A8,@41B20h
0cd30: a3cf                      MOVE   A14,-*SP,1
0cd40: 09e8 1b00 0004            MOVI   41B00h,A8
0cd70: 930e                      MOVE   A8,*A14+,1
0cd80: 1bc8                      MOVK   1Eh,A8
0cd90: 930e                      MOVE   A8,*A14+,1
0cda0: 0d5f 0000 0000            CALLA  0h
0cdd0: 830d                      MOVE   A8,*A13,1
0cde0: b7ee 0040                 MOVE   *SP(40h),A14,1
0ce00: 97ed                      MOVE   *SP+,A13,1
0ce10: 0962                      RETS   2h

_cp_imx_live_photo:
0ce20: a3af                      MOVE   A13,-*SP,1
0ce30: 4dcd                      MOVE   A14,A13
0ce40: 100e                      ADDK   20h,A14
0ce50: 1928                      MOVK   9h,A8
0ce60: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0ce90: 1bc8                      MOVK   1Eh,A8
0cea0: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0ced0: 1888                      MOVK   4h,A8
0cee0: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0cf10: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0cf30: 05e8 6fa0 000e            MOVB   A8,@E6FA0h
0cf60: a3cf                      MOVE   A14,-*SP,1
0cf70: 09e8 6f40 000e            MOVI   E6F40h,A8
0cfa0: 930e                      MOVE   A8,*A14+,1
0cfb0: 1b88                      MOVK   1Ch,A8
0cfc0: 930e                      MOVE   A8,*A14+,1
0cfd0: 0d5f 0000 0000            CALLA  0h
0d000: 830d                      MOVE   A8,*A13,1
0d010: 4d08                      MOVE   A8,A8
0d020: ca14                      JREQ   D170h
0d030: 1828                      MOVK   1h,A8
0d040: 0788 1b00 0004            MOVE   A8,@41B00h,1
0d070: 09c8 0044                 MOVI   44h,A8
0d090: 05e8 1b20 0004            MOVB   A8,@41B20h
0d0c0: a3cf                      MOVE   A14,-*SP,1
0d0d0: 09e8 1b00 0004            MOVI   41B00h,A8
0d100: 930e                      MOVE   A8,*A14+,1
0d110: 1bc8                      MOVK   1Eh,A8
0d120: 930e                      MOVE   A8,*A14+,1
0d130: 0d5f 0000 0000            CALLA  0h
0d160: 830d                      MOVE   A8,*A13,1
0d170: b7ee 0040                 MOVE   *SP(40h),A14,1
0d190: 97ed                      MOVE   *SP+,A13,1
0d1a0: 0962                      RETS   2h

_cp_imx_contrast_comp:
0d1b0: a3af                      MOVE   A13,-*SP,1
0d1c0: 4dcd                      MOVE   A14,A13
0d1d0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0d1f0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0d210: 0d5f 7e20 0003            CALLA  37E20h
0d240: a7c8                      MOVE   -*A14,A8,1
0d250: 0788 f3e0 0003            MOVE   A8,@3F3E0h,1
0d280: b7ee 0040                 MOVE   *SP(40h),A14,1
0d2a0: 97ed                      MOVE   *SP+,A13,1
0d2b0: 0962                      RETS   2h

_cp_imx_gamma:
0d2c0: a3af                      MOVE   A13,-*SP,1
0d2d0: 4dcd                      MOVE   A14,A13
0d2e0: 100e                      ADDK   20h,A14
0d2f0: 1988                      MOVK   Ch,A8
0d300: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0d330: 1bc8                      MOVK   1Eh,A8
0d340: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0d370: 18c8                      MOVK   6h,A8
0d380: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0d3b0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0d3d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0d3f0: 0d5f 7e20 0003            CALLA  37E20h
0d420: a7c8                      MOVE   -*A14,A8,1
0d430: 0788 6fa0 000e            MOVE   A8,@E6FA0h,1
0d460: a3cf                      MOVE   A14,-*SP,1
0d470: 09e8 6f40 000e            MOVI   E6F40h,A8
0d4a0: 930e                      MOVE   A8,*A14+,1
0d4b0: 1b88                      MOVK   1Ch,A8
0d4c0: 930e                      MOVE   A8,*A14+,1
0d4d0: 0d5f 0000 0000            CALLA  0h
0d500: 830d                      MOVE   A8,*A13,1
0d510: 4d08                      MOVE   A8,A8
0d520: ca14                      JREQ   D670h
0d530: 1828                      MOVK   1h,A8
0d540: 0788 1b00 0004            MOVE   A8,@41B00h,1
0d570: 09c8 0046                 MOVI   46h,A8
0d590: 05e8 1b20 0004            MOVB   A8,@41B20h
0d5c0: a3cf                      MOVE   A14,-*SP,1
0d5d0: 09e8 1b00 0004            MOVI   41B00h,A8
0d600: 930e                      MOVE   A8,*A14+,1
0d610: 1bc8                      MOVK   1Eh,A8
0d620: 930e                      MOVE   A8,*A14+,1
0d630: 0d5f 0000 0000            CALLA  0h
0d660: 830d                      MOVE   A8,*A13,1
0d670: b7ee 0040                 MOVE   *SP(40h),A14,1
0d690: 97ed                      MOVE   *SP+,A13,1
0d6a0: 0962                      RETS   2h

_cp_imx_film_speed:
0d6b0: a3af                      MOVE   A13,-*SP,1
0d6c0: 4dcd                      MOVE   A14,A13
0d6d0: 100e                      ADDK   20h,A14
0d6e0: 1928                      MOVK   9h,A8
0d6f0: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0d720: 1bc8                      MOVK   1Eh,A8
0d730: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0d760: 18e8                      MOVK   7h,A8
0d770: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0d7a0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0d7c0: 05e8 6fa0 000e            MOVB   A8,@E6FA0h
0d7f0: a3cf                      MOVE   A14,-*SP,1
0d800: 09e8 6f40 000e            MOVI   E6F40h,A8
0d830: 930e                      MOVE   A8,*A14+,1
0d840: 1b88                      MOVK   1Ch,A8
0d850: 930e                      MOVE   A8,*A14+,1
0d860: 0d5f 0000 0000            CALLA  0h
0d890: 830d                      MOVE   A8,*A13,1
0d8a0: 4d08                      MOVE   A8,A8
0d8b0: ca14                      JREQ   DA00h
0d8c0: 1828                      MOVK   1h,A8
0d8d0: 0788 1b00 0004            MOVE   A8,@41B00h,1
0d900: 09c8 0047                 MOVI   47h,A8
0d920: 05e8 1b20 0004            MOVB   A8,@41B20h
0d950: a3cf                      MOVE   A14,-*SP,1
0d960: 09e8 1b00 0004            MOVI   41B00h,A8
0d990: 930e                      MOVE   A8,*A14+,1
0d9a0: 1bc8                      MOVK   1Eh,A8
0d9b0: 930e                      MOVE   A8,*A14+,1
0d9c0: 0d5f 0000 0000            CALLA  0h
0d9f0: 830d                      MOVE   A8,*A13,1
0da00: b7ee 0040                 MOVE   *SP(40h),A14,1
0da20: 97ed                      MOVE   *SP+,A13,1
0da30: 0962                      RETS   2h

_cp_imx_image_trans:
0da40: 098f 000c                 MMTM   SP,A12,A13
0da60: 4dcd                      MOVE   A14,A13
0da70: 100e                      ADDK   20h,A14
0da80: a3cf                      MOVE   A14,-*SP,1
0da90: 09e8 f440 0003            MOVI   3F440h,A8
0dac0: 930e                      MOVE   A8,*A14+,1
0dad0: 09c8 0100                 MOVI   100h,A8
0daf0: 930e                      MOVE   A8,*A14+,1
0db00: 4508                      SUB    A8,A8
0db10: 930e                      MOVE   A8,*A14+,1
0db20: 1828                      MOVK   1h,A8
0db30: 930e                      MOVE   A8,*A14+,1
0db40: 0d5f 0000 0000            CALLA  0h
0db70: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0db90: ca4a                      JREQ   E040h
0dba0: 4508                      SUB    A8,A8
0dbb0: 0570                      SETF   10h,1,0
0dbc0: 810d                      MOVE   A8,*A13,0
0dbd0: 85a8                      MOVE   *A13,A8,0
0dbe0: 1fe8                      BTST   0h,A8
0dbf0: ca0e                      JREQ   DCE0h
0dc00: 4d0c                      MOVE   A8,A12
0dc10: 2488                      SLL    4h,A8
0dc20: 246c                      SLL    3h,A12
0dc30: 4188                      ADD    A12,A8
0dc40: 0b28 f440 0003            ADDI   3F440h,A8
0dc70: 85ac                      MOVE   *A13,A12,0
0dc80: 246c                      SLL    3h,A12
0dc90: 0b2c 3d60 000c            ADDI   C3D60h,A12
0dcc0: 9d0c                      MOVB   *A8,*A12
0dcd0: c02f                      JR     DFD0h
0dce0: a3cf                      MOVE   A14,-*SP,1
0dcf0: 4d0c                      MOVE   A8,A12
0dd00: 2488                      SLL    4h,A8
0dd10: 246c                      SLL    3h,A12
0dd20: 4188                      ADD    A12,A8
0dd30: 0b28 f440 0003            ADDI   3F440h,A8
0dd60: 0548                      SETF   8h,0,0
0dd70: b50c 0010                 MOVE   *A8(10h),A12,0
0dd90: 938e                      MOVE   A12,*A14+,1
0dda0: 0570                      SETF   10h,1,0
0ddb0: 85ac                      MOVE   *A13,A12,0
0ddc0: 4d88                      MOVE   A12,A8
0ddd0: 248c                      SLL    4h,A12
0dde0: 2468                      SLL    3h,A8
0ddf0: 410c                      ADD    A8,A12
0de00: 0b2c f440 0003            ADDI   3F440h,A12
0de30: 0548                      SETF   8h,0,0
0de40: b58c 0008                 MOVE   *A12(8h),A12,0
0de60: 938e                      MOVE   A12,*A14+,1
0de70: 0570                      SETF   10h,1,0
0de80: 85ac                      MOVE   *A13,A12,0
0de90: 4d88                      MOVE   A12,A8
0dea0: 248c                      SLL    4h,A12
0deb0: 2468                      SLL    3h,A8
0dec0: 410c                      ADD    A8,A12
0ded0: 0b2c f440 0003            ADDI   3F440h,A12
0df00: 0548                      SETF   8h,0,0
0df10: 858c                      MOVE   *A12,A12,0
0df20: 938e                      MOVE   A12,*A14+,1
0df30: 0d5f ccb0 0002            CALLA  2CCB0h
0df60: 0570                      SETF   10h,1,0
0df70: 85ac                      MOVE   *A13,A12,0
0df80: 246c                      SLL    3h,A12
0df90: 0b2c 3d60 000c            ADDI   C3D60h,A12
0dfc0: 8d0c                      MOVB   A8,*A12
0dfd0: 85ac                      MOVE   *A13,A12,0
0dfe0: 102c                      INC    A12
0dff0: 818d                      MOVE   A12,*A13,0
0e000: 0b4c feff                 CMPI   100h,A12
0e020: c4ba                      JRLT   DBD0h
0e030: c017                      JR     E1B0h
0e040: 458c                      SUB    A12,A12
0e050: 0570                      SETF   10h,1,0
0e060: 818d                      MOVE   A12,*A13,0
0e070: 85ac                      MOVE   *A13,A12,0
0e080: 4d88                      MOVE   A12,A8
0e090: 248c                      SLL    4h,A12
0e0a0: 2468                      SLL    3h,A8
0e0b0: 410c                      ADD    A8,A12
0e0c0: 0b2c f440 0003            ADDI   3F440h,A12
0e0f0: 85a8                      MOVE   *A13,A8,0
0e100: 2468                      SLL    3h,A8
0e110: 0b28 3d60 000c            ADDI   C3D60h,A8
0e140: 9d88                      MOVB   *A12,*A8
0e150: 85ac                      MOVE   *A13,A12,0
0e160: 102c                      INC    A12
0e170: 818d                      MOVE   A12,*A13,0
0e180: 0b4c feff                 CMPI   100h,A12
0e1a0: c4ec                      JRLT   E070h
0e1b0: b7ee 0060                 MOVE   *SP(60h),A14,1
0e1d0: 09af 3000                 MMFM   SP,A12,A13
0e1f0: 0962                      RETS   2h

_cp_imx_camera_type:
0e200: a3af                      MOVE   A13,-*SP,1
0e210: 4dcd                      MOVE   A14,A13
0e220: 100e                      ADDK   20h,A14
0e230: 1928                      MOVK   9h,A8
0e240: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0e270: 1bc8                      MOVK   1Eh,A8
0e280: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0e2b0: 1928                      MOVK   9h,A8
0e2c0: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0e2f0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
0e310: 05e8 6fa0 000e            MOVB   A8,@E6FA0h
0e340: a3cf                      MOVE   A14,-*SP,1
0e350: 09e8 6f40 000e            MOVI   E6F40h,A8
0e380: 930e                      MOVE   A8,*A14+,1
0e390: 1b88                      MOVK   1Ch,A8
0e3a0: 930e                      MOVE   A8,*A14+,1
0e3b0: 0d5f 0000 0000            CALLA  0h
0e3e0: 830d                      MOVE   A8,*A13,1
0e3f0: 4d08                      MOVE   A8,A8
0e400: ca14                      JREQ   E550h
0e410: 1828                      MOVK   1h,A8
0e420: 0788 1b00 0004            MOVE   A8,@41B00h,1
0e450: 09c8 0049                 MOVI   49h,A8
0e470: 05e8 1b20 0004            MOVB   A8,@41B20h
0e4a0: a3cf                      MOVE   A14,-*SP,1
0e4b0: 09e8 1b00 0004            MOVI   41B00h,A8
0e4e0: 930e                      MOVE   A8,*A14+,1
0e4f0: 1bc8                      MOVK   1Eh,A8
0e500: 930e                      MOVE   A8,*A14+,1
0e510: 0d5f 0000 0000            CALLA  0h
0e540: 830d                      MOVE   A8,*A13,1
0e550: b7ee 0040                 MOVE   *SP(40h),A14,1
0e570: 97ed                      MOVE   *SP+,A13,1
0e580: 0962                      RETS   2h

_cp_imx_bright_comp:
0e590: a3af                      MOVE   A13,-*SP,1
0e5a0: 4dcd                      MOVE   A14,A13
0e5b0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0e5d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0e5f0: 0d5f 7e20 0003            CALLA  37E20h
0e620: a7c8                      MOVE   -*A14,A8,1
0e630: 0788 f3c0 0003            MOVE   A8,@3F3C0h,1
0e660: b7ee 0040                 MOVE   *SP(40h),A14,1
0e680: 97ed                      MOVE   *SP+,A13,1
0e690: 0962                      RETS   2h

_cp_imx_hrru_brightness:
0e6a0: a3af                      MOVE   A13,-*SP,1
0e6b0: 4dcd                      MOVE   A14,A13
0e6c0: 100e                      ADDK   20h,A14
0e6d0: 1988                      MOVK   Ch,A8
0e6e0: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0e710: 1bc8                      MOVK   1Eh,A8
0e720: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0e750: 1968                      MOVK   Bh,A8
0e760: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0e790: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0e7b0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0e7d0: 0d5f 7e20 0003            CALLA  37E20h
0e800: a7c8                      MOVE   -*A14,A8,1
0e810: 0788 6fa0 000e            MOVE   A8,@E6FA0h,1
0e840: a3cf                      MOVE   A14,-*SP,1
0e850: 09e8 6f40 000e            MOVI   E6F40h,A8
0e880: 930e                      MOVE   A8,*A14+,1
0e890: 1b88                      MOVK   1Ch,A8
0e8a0: 930e                      MOVE   A8,*A14+,1
0e8b0: 0d5f 0000 0000            CALLA  0h
0e8e0: 830d                      MOVE   A8,*A13,1
0e8f0: 4d08                      MOVE   A8,A8
0e900: ca14                      JREQ   EA50h
0e910: 1828                      MOVK   1h,A8
0e920: 0788 1b00 0004            MOVE   A8,@41B00h,1
0e950: 09c8 004b                 MOVI   4Bh,A8
0e970: 05e8 1b20 0004            MOVB   A8,@41B20h
0e9a0: a3cf                      MOVE   A14,-*SP,1
0e9b0: 09e8 1b00 0004            MOVI   41B00h,A8
0e9e0: 930e                      MOVE   A8,*A14+,1
0e9f0: 1bc8                      MOVK   1Eh,A8
0ea00: 930e                      MOVE   A8,*A14+,1
0ea10: 0d5f 0000 0000            CALLA  0h
0ea40: 830d                      MOVE   A8,*A13,1
0ea50: b7ee 0040                 MOVE   *SP(40h),A14,1
0ea70: 97ed                      MOVE   *SP+,A13,1
0ea80: 0962                      RETS   2h

_cp_imx_hrru_contrast:
0ea90: a3af                      MOVE   A13,-*SP,1
0eaa0: 4dcd                      MOVE   A14,A13
0eab0: 100e                      ADDK   20h,A14
0eac0: 1988                      MOVK   Ch,A8
0ead0: 0788 6f40 000e            MOVE   A8,@E6F40h,1
0eb00: 1bc8                      MOVK   1Eh,A8
0eb10: 0788 6f60 000e            MOVE   A8,@E6F60h,1
0eb40: 1988                      MOVK   Ch,A8
0eb50: 0788 6f80 000e            MOVE   A8,@E6F80h,1
0eb80: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0eba0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0ebc0: 0d5f 7e20 0003            CALLA  37E20h
0ebf0: a7c8                      MOVE   -*A14,A8,1
0ec00: 0788 6fa0 000e            MOVE   A8,@E6FA0h,1
0ec30: a3cf                      MOVE   A14,-*SP,1
0ec40: 09e8 6f40 000e            MOVI   E6F40h,A8
0ec70: 930e                      MOVE   A8,*A14+,1
0ec80: 1b88                      MOVK   1Ch,A8
0ec90: 930e                      MOVE   A8,*A14+,1
0eca0: 0d5f 0000 0000            CALLA  0h
0ecd0: 830d                      MOVE   A8,*A13,1
0ece0: 4d08                      MOVE   A8,A8
0ecf0: ca14                      JREQ   EE40h
0ed00: 1828                      MOVK   1h,A8
0ed10: 0788 1b00 0004            MOVE   A8,@41B00h,1
0ed40: 09c8 004c                 MOVI   4Ch,A8
0ed60: 05e8 1b20 0004            MOVB   A8,@41B20h
0ed90: a3cf                      MOVE   A14,-*SP,1
0eda0: 09e8 1b00 0004            MOVI   41B00h,A8
0edd0: 930e                      MOVE   A8,*A14+,1
0ede0: 1bc8                      MOVK   1Eh,A8
0edf0: 930e                      MOVE   A8,*A14+,1
0ee00: 0d5f 0000 0000            CALLA  0h
0ee30: 830d                      MOVE   A8,*A13,1
0ee40: b7ee 0040                 MOVE   *SP(40h),A14,1
0ee60: 97ed                      MOVE   *SP+,A13,1
0ee70: 0962                      RETS   2h

_cp_imx_cine_sleep:
0ee80: a3af                      MOVE   A13,-*SP,1
0ee90: 4dcd                      MOVE   A14,A13
0eea0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0eec0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0eee0: 4508                      SUB    A8,A8
0eef0: 930e                      MOVE   A8,*A14+,1
0ef00: 930e                      MOVE   A8,*A14+,1
0ef10: 0d5f b070 0003            CALLA  3B070h
0ef40: ca0c                      JREQ   F010h
0ef50: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
0ef70: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
0ef90: 0d5f 7e20 0003            CALLA  37E20h
0efc0: a7c8                      MOVE   -*A14,A8,1
0efd0: 0788 f400 0003            MOVE   A8,@3F400h,1
0f000: c005                      JR     F060h
0f010: 1828                      MOVK   1h,A8
0f020: 0550                      SETF   10h,0,0
0f030: 0588 f430 0003            MOVE   A8,@3F430h,0
0f060: b7ee 0040                 MOVE   *SP(40h),A14,1
0f080: 97ed                      MOVE   *SP+,A13,1
0f090: 0962                      RETS   2h

_cp_imx_cine_mode:
0f0a0: a3af                      MOVE   A13,-*SP,1
0f0b0: 4dcd                      MOVE   A14,A13
0f0c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0f0e0: 0550                      SETF   10h,0,0
0f0f0: 0588 f420 0003            MOVE   A8,@3F420h,0
0f120: b7ee 0040                 MOVE   *SP(40h),A14,1
0f140: 97ed                      MOVE   *SP+,A13,1
0f150: 0962                      RETS   2h

_cp_trans_image_data:
0f160: 098f 002c                 MMTM   SP,A10,A12,A13
0f180: 4dcd                      MOVE   A14,A13
0f190: 0b0e 0080                 ADDI   80h,A14
0f1b0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
0f1e0: 87a8                      MOVE   *A13,A8,1
0f1f0: 0548                      SETF   8h,0,0
0f200: b508 0070                 MOVE   *A8(70h),A8,0
0f220: cb00 0121                 JRNE   10450h
0f240: c000 0112                 JR     10380h
0f260: 87a8                      MOVE   *A13,A8,1
0f270: b508 0058                 MOVE   *A8(58h),A8,0
0f290: 1468                      SUBK   3h,A8
0f2a0: ca06                      JREQ   F310h
0f2b0: a3cf                      MOVE   A14,-*SP,1
0f2c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0f2e0: 0d5f 2a50 0001            CALLA  12A50h
0f310: 87a8                      MOVE   *A13,A8,1
0f320: 0548                      SETF   8h,0,0
0f330: b508 0060                 MOVE   *A8(60h),A8,0
0f350: 1468                      SUBK   3h,A8
0f360: ca00 010d                 JREQ   10450h
0f380: 87a8                      MOVE   *A13,A8,1
0f390: b508 0098                 MOVE   *A8(98h),A8,0
0f3b0: 3908                      DSJS   A8,F440h
0f3c0: a3cf                      MOVE   A14,-*SP,1
0f3d0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0f3f0: 0d5f 41a0 0001            CALLA  141A0h
0f420: c000 0101                 JR     10450h
0f440: a3cf                      MOVE   A14,-*SP,1
0f450: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0f470: 0d5f 3870 0001            CALLA  13870h
0f4a0: c000 00f9                 JR     10450h
0f4c0: 87a8                      MOVE   *A13,A8,1
0f4d0: b508 0058                 MOVE   *A8(58h),A8,0
0f4f0: 1468                      SUBK   3h,A8
0f500: ca06                      JREQ   F570h
0f510: a3cf                      MOVE   A14,-*SP,1
0f520: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0f540: 0d5f 2a50 0001            CALLA  12A50h
0f570: 87a8                      MOVE   *A13,A8,1
0f580: 0548                      SETF   8h,0,0
0f590: b508 0060                 MOVE   *A8(60h),A8,0
0f5b0: 1468                      SUBK   3h,A8
0f5c0: ca06                      JREQ   F630h
0f5d0: a3cf                      MOVE   A14,-*SP,1
0f5e0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0f600: 0d5f 3870 0001            CALLA  13870h
0f630: a3cf                      MOVE   A14,-*SP,1
0f640: 09e8 0000 0001            MOVI   10000h,A8
0f670: 930e                      MOVE   A8,*A14+,1
0f680: 0d5f 0000 0000            CALLA  0h
0f6b0: b30d 0020                 MOVE   A8,*A13(20h),1
0f6d0: 4d08                      MOVE   A8,A8
0f6e0: ca37                      JREQ   FA60h
0f6f0: 0788 3540 0004            MOVE   A8,@43540h,1
0f720: 458c                      SUB    A12,A12
0f730: 8d88                      MOVB   A12,*A8
0f740: a3cf                      MOVE   A14,-*SP,1
0f750: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0f770: 0d5f 5a90 0002            CALLA  25A90h
0f7a0: b7a8 0020                 MOVE   *A13(20h),A8,1
0f7c0: 0788 3540 0004            MOVE   A8,@43540h,1
0f7f0: 0550                      SETF   10h,0,0
0f800: b18d 0040                 MOVE   A12,*A13(40h),0
0f820: 87a8                      MOVE   *A13,A8,1
0f830: 8508                      MOVE   *A8,A8,0
0f840: c619                      JRLE   F9E0h
0f850: b5ac 0040                 MOVE   *A13(40h),A12,0
0f870: 246c                      SLL    3h,A12
0f880: 0b2c 3560 0004            ADDI   43560h,A12
0f8b0: 07a8 3540 0004            MOVE   @43540h,A8,1
0f8e0: 0548                      SETF   8h,0,0
0f8f0: 950a                      MOVE   *A8+,A10,0
0f900: 0788 3540 0004            MOVE   A8,@43540h,1
0f930: 8d4c                      MOVB   A10,*A12
0f940: 0550                      SETF   10h,0,0
0f950: b5ac 0040                 MOVE   *A13(40h),A12,0
0f970: 102c                      INC    A12
0f980: b18d 0040                 MOVE   A12,*A13(40h),0
0f9a0: 87aa                      MOVE   *A13,A10,1
0f9b0: 854a                      MOVE   *A10,A10,0
0f9c0: 494c                      CMP    A10,A12
0f9d0: c4e7                      JRLT   F850h
0f9e0: a3cf                      MOVE   A14,-*SP,1
0f9f0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0fa10: 0d5f 0000 0000            CALLA  0h
0fa40: c000 009f                 JR     10450h
0fa60: 87ac                      MOVE   *A13,A12,1
0fa70: 454a                      SUB    A10,A10
0fa80: 0550                      SETF   10h,0,0
0fa90: 814c                      MOVE   A10,*A12,0
0faa0: c000 0099                 JR     10450h
0fac0: 87ac                      MOVE   *A13,A12,1
0fad0: b58a 0058                 MOVE   *A12(58h),A10,0
0faf0: 146a                      SUBK   3h,A10
0fb00: ca1a                      JREQ   FCB0h
0fb10: 0570                      SETF   10h,1,0
0fb20: 05aa dee0 0003            MOVE   @3DEE0h,A10,0
0fb50: 3a0a                      DSJS   A10,FC60h
0fb60: 0548                      SETF   8h,0,0
0fb70: b58a 0098                 MOVE   *A12(98h),A10,0
0fb90: 38ca                      DSJS   A10,FC00h
0fba0: a3cf                      MOVE   A14,-*SP,1
0fbb0: 938e                      MOVE   A12,*A14+,1
0fbc0: 0d5f de50 0001            CALLA  1DE50h
0fbf0: c00b                      JR     FCB0h
0fc00: a3cf                      MOVE   A14,-*SP,1
0fc10: 938e                      MOVE   A12,*A14+,1
0fc20: 0d5f d060 0001            CALLA  1D060h
0fc50: c005                      JR     FCB0h
0fc60: a3cf                      MOVE   A14,-*SP,1
0fc70: 938e                      MOVE   A12,*A14+,1
0fc80: 0d5f 4bd0 0001            CALLA  14BD0h
0fcb0: 0548                      SETF   8h,0,0
0fcc0: b58a 0060                 MOVE   *A12(60h),A10,0
0fce0: 146a                      SUBK   3h,A10
0fcf0: ca0e                      JREQ   FDE0h
0fd00: b58a 0098                 MOVE   *A12(98h),A10,0
0fd20: 38ca                      DSJS   A10,FD90h
0fd30: a3cf                      MOVE   A14,-*SP,1
0fd40: 938e                      MOVE   A12,*A14+,1
0fd50: 0d5f 5e40 0001            CALLA  15E40h
0fd80: c005                      JR     FDE0h
0fd90: a3cf                      MOVE   A14,-*SP,1
0fda0: 938e                      MOVE   A12,*A14+,1
0fdb0: 0d5f 5600 0001            CALLA  15600h
0fde0: 0548                      SETF   8h,0,0
0fdf0: b58a 0050                 MOVE   *A12(50h),A10,0
0fe10: 146a                      SUBK   3h,A10
0fe20: ca62                      JREQ   10450h
0fe30: b58a 0098                 MOVE   *A12(98h),A10,0
0fe50: 38ca                      DSJS   A10,FEC0h
0fe60: a3cf                      MOVE   A14,-*SP,1
0fe70: 938e                      MOVE   A12,*A14+,1
0fe80: 0d5f 70c0 0001            CALLA  170C0h
0feb0: c059                      JR     10450h
0fec0: a3cf                      MOVE   A14,-*SP,1
0fed0: 938e                      MOVE   A12,*A14+,1
0fee0: 0d5f 67d0 0001            CALLA  167D0h
0ff10: c053                      JR     10450h
0ff20: 87ac                      MOVE   *A13,A12,1
0ff30: b58a 0058                 MOVE   *A12(58h),A10,0
0ff50: 146a                      SUBK   3h,A10
0ff60: ca1a                      JREQ   10110h
0ff70: 0570                      SETF   10h,1,0
0ff80: 05aa dee0 0003            MOVE   @3DEE0h,A10,0
0ffb0: 3a0a                      DSJS   A10,100C0h
0ffc0: 0548                      SETF   8h,0,0
0ffd0: b58a 0098                 MOVE   *A12(98h),A10,0
0fff0: 38ca                      DSJS   A10,10060h
10000: a3cf                      MOVE   A14,-*SP,1
10010: 938e                      MOVE   A12,*A14+,1
10020: 0d5f fd50 0001            CALLA  1FD50h
10050: c00b                      JR     10110h
10060: a3cf                      MOVE   A14,-*SP,1
10070: 938e                      MOVE   A12,*A14+,1
10080: 0d5f ece0 0001            CALLA  1ECE0h
100b0: c005                      JR     10110h
100c0: a3cf                      MOVE   A14,-*SP,1
100d0: 938e                      MOVE   A12,*A14+,1
100e0: 0d5f 7ae0 0001            CALLA  17AE0h
10110: 0548                      SETF   8h,0,0
10120: b58a 0060                 MOVE   *A12(60h),A10,0
10140: 146a                      SUBK   3h,A10
10150: ca0e                      JREQ   10240h
10160: b58a 0098                 MOVE   *A12(98h),A10,0
10180: 38ca                      DSJS   A10,101F0h
10190: a3cf                      MOVE   A14,-*SP,1
101a0: 938e                      MOVE   A12,*A14+,1
101b0: 0d5f 9470 0001            CALLA  19470h
101e0: c005                      JR     10240h
101f0: a3cf                      MOVE   A14,-*SP,1
10200: 938e                      MOVE   A12,*A14+,1
10210: 0d5f 8aa0 0001            CALLA  18AA0h
10240: 0548                      SETF   8h,0,0
10250: b58a 0050                 MOVE   *A12(50h),A10,0
10270: 146a                      SUBK   3h,A10
10280: ca1c                      JREQ   10450h
10290: b58a 0098                 MOVE   *A12(98h),A10,0
102b0: 38ca                      DSJS   A10,10320h
102c0: a3cf                      MOVE   A14,-*SP,1
102d0: 938e                      MOVE   A12,*A14+,1
102e0: 0d5f aba0 0001            CALLA  1ABA0h
10310: c013                      JR     10450h
10320: a3cf                      MOVE   A14,-*SP,1
10330: 938e                      MOVE   A12,*A14+,1
10340: 0d5f a140 0001            CALLA  1A140h
10370: c00d                      JR     10450h
10380: 87ac                      MOVE   *A13,A12,1
10390: b58a 0068                 MOVE   *A12(68h),A10,0
103b0: ca00 ff6f                 JREQ   FAC0h
103d0: 142a                      DEC    A10
103e0: cab3                      JREQ   FF20h
103f0: 142a                      DEC    A10
10400: ca00 fee4                 JREQ   F260h
10420: 144a                      SUBK   2h,A10
10430: ca00 ff07                 JREQ   F4C0h
10450: 87ac                      MOVE   *A13,A12,1
10460: 0548                      SETF   8h,0,0
10470: b58a 0070                 MOVE   *A12(70h),A10,0
10490: 3baa                      DSJS   A10,10670h
104a0: c015                      JR     10600h
104b0: a3cf                      MOVE   A14,-*SP,1
104c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
104e0: 0d5f b900 0001            CALLA  1B900h
10510: c015                      JR     10670h
10520: a3cf                      MOVE   A14,-*SP,1
10530: d3ae 0000                 MOVE   *A13(0h),*A14+,1
10550: 0d5f 6730 0002            CALLA  26730h
10580: c00e                      JR     10670h
10590: a3cf                      MOVE   A14,-*SP,1
105a0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
105c0: 0d5f c5d0 0001            CALLA  1C5D0h
105f0: c007                      JR     10670h
10600: b58a 0068                 MOVE   *A12(68h),A10,0
10620: caf6                      JREQ   10590h
10630: 144a                      SUBK   2h,A10
10640: cae6                      JREQ   104B0h
10650: 144a                      SUBK   2h,A10
10660: caeb                      JREQ   10520h
10670: 87ac                      MOVE   *A13,A12,1
10680: 0548                      SETF   8h,0,0
10690: b58a 0070                 MOVE   *A12(70h),A10,0
106b0: 144a                      SUBK   2h,A10
106c0: cb54                      JRNE   10C10h
106d0: 192a                      MOVK   9h,A10
106e0: 078a 6f40 000e            MOVE   A10,@E6F40h,1
10710: 1bc8                      MOVK   1Eh,A8
10720: 0788 6f60 000e            MOVE   A8,@E6F60h,1
10750: b58c 0058                 MOVE   *A12(58h),A12,0
10770: 05ec 6fa0 000e            MOVB   A12,@E6FA0h
107a0: c028                      JR     10A30h
107b0: 19cc                      MOVK   Eh,A12
107c0: 078c 6f80 000e            MOVE   A12,@E6F80h,1
107f0: c035                      JR     10B50h
10800: 19ec                      MOVK   Fh,A12
10810: 078c 6f80 000e            MOVE   A12,@E6F80h,1
10840: c030                      JR     10B50h
10850: 1a0c                      MOVK   10h,A12
10860: 078c 6f80 000e            MOVE   A12,@E6F80h,1
10890: c02b                      JR     10B50h
108a0: 1a2c                      MOVK   11h,A12
108b0: 078c 6f80 000e            MOVE   A12,@E6F80h,1
108e0: c026                      JR     10B50h
108f0: 1a4c                      MOVK   12h,A12
10900: 078c 6f80 000e            MOVE   A12,@E6F80h,1
10930: c021                      JR     10B50h
10940: 1a6c                      MOVK   13h,A12
10950: 078c 6f80 000e            MOVE   A12,@E6F80h,1
10980: c01c                      JR     10B50h
10990: 1a8c                      MOVK   14h,A12
109a0: 078c 6f80 000e            MOVE   A12,@E6F80h,1
109d0: c017                      JR     10B50h
109e0: 1aac                      MOVK   15h,A12
109f0: 078c 6f80 000e            MOVE   A12,@E6F80h,1
10a20: c012                      JR     10B50h
10a30: 87ac                      MOVE   *A13,A12,1
10a40: b58c 0068                 MOVE   *A12(68h),A12,0
10a60: cad4                      JREQ   107B0h
10a70: 142c                      DEC    A12
10a80: cad7                      JREQ   10800h
10a90: 142c                      DEC    A12
10aa0: cada                      JREQ   10850h
10ab0: 142c                      DEC    A12
10ac0: cadd                      JREQ   108A0h
10ad0: 142c                      DEC    A12
10ae0: cae0                      JREQ   108F0h
10af0: 142c                      DEC    A12
10b00: cae3                      JREQ   10940h
10b10: 142c                      DEC    A12
10b20: cae6                      JREQ   10990h
10b30: 142c                      DEC    A12
10b40: cae9                      JREQ   109E0h
10b50: a3cf                      MOVE   A14,-*SP,1
10b60: 09ec 6f40 000e            MOVI   E6F40h,A12
10b90: 938e                      MOVE   A12,*A14+,1
10ba0: 1b8a                      MOVK   1Ch,A10
10bb0: 934e                      MOVE   A10,*A14+,1
10bc0: 0d5f 0000 0000            CALLA  0h
10bf0: b30d 0060                 MOVE   A8,*A13(60h),1
10c10: 87ac                      MOVE   *A13,A12,1
10c20: 0548                      SETF   8h,0,0
10c30: b58a 0070                 MOVE   *A12(70h),A10,0
10c50: 148a                      SUBK   4h,A10
10c60: cb00 00dd                 JRNE   11A50h
10c80: c000 00d1                 JR     119B0h
10ca0: a3cf                      MOVE   A14,-*SP,1
10cb0: 458c                      SUB    A12,A12
10cc0: 938e                      MOVE   A12,*A14+,1
10cd0: 09ea 0000 2060            MOVI   20600000h,A10
10d00: 934e                      MOVE   A10,*A14+,1
10d10: 09e8 0000 2000            MOVI   20000000h,A8
10d40: 930e                      MOVE   A8,*A14+,1
10d50: 0d5f d1f0 0002            CALLA  2D1F0h
10d80: c000 00cb                 JR     11A50h
10da0: a3cf                      MOVE   A14,-*SP,1
10db0: 458c                      SUB    A12,A12
10dc0: 938e                      MOVE   A12,*A14+,1
10dd0: 09ea 0000 2000            MOVI   20000000h,A10
10e00: 934e                      MOVE   A10,*A14+,1
10e10: 09e8 0000 2060            MOVI   20600000h,A8
10e40: 930e                      MOVE   A8,*A14+,1
10e50: 0d5f d1f0 0002            CALLA  2D1F0h
10e80: c000 00bb                 JR     11A50h
10ea0: a3cf                      MOVE   A14,-*SP,1
10eb0: 1a2c                      MOVK   11h,A12
10ec0: 938e                      MOVE   A12,*A14+,1
10ed0: 09ea 0000 2000            MOVI   20000000h,A10
10f00: 934e                      MOVE   A10,*A14+,1
10f10: 09e8 0000 2060            MOVI   20600000h,A8
10f40: 930e                      MOVE   A8,*A14+,1
10f50: 0d5f d1f0 0002            CALLA  2D1F0h
10f80: c000 00ab                 JR     11A50h
10fa0: a3cf                      MOVE   A14,-*SP,1
10fb0: 1aac                      MOVK   15h,A12
10fc0: 938e                      MOVE   A12,*A14+,1
10fd0: 09ea 0000 2000            MOVI   20000000h,A10
11000: 934e                      MOVE   A10,*A14+,1
11010: 09e8 0000 2060            MOVI   20600000h,A8
11040: 930e                      MOVE   A8,*A14+,1
11050: 0d5f d1f0 0002            CALLA  2D1F0h
11080: c000 009b                 JR     11A50h
110a0: a3cf                      MOVE   A14,-*SP,1
110b0: 1a8c                      MOVK   14h,A12
110c0: 938e                      MOVE   A12,*A14+,1
110d0: 09ea 0000 2000            MOVI   20000000h,A10
11100: 934e                      MOVE   A10,*A14+,1
11110: 09e8 0000 2060            MOVI   20600000h,A8
11140: 930e                      MOVE   A8,*A14+,1
11150: 0d5f d1f0 0002            CALLA  2D1F0h
11180: c000 008b                 JR     11A50h
111a0: a3cf                      MOVE   A14,-*SP,1
111b0: 1a6c                      MOVK   13h,A12
111c0: 938e                      MOVE   A12,*A14+,1
111d0: 09ea 0000 2000            MOVI   20000000h,A10
11200: 934e                      MOVE   A10,*A14+,1
11210: 09e8 0000 2060            MOVI   20600000h,A8
11240: 930e                      MOVE   A8,*A14+,1
11250: 0d5f d1f0 0002            CALLA  2D1F0h
11280: c07c                      JR     11A50h
11290: a3cf                      MOVE   A14,-*SP,1
112a0: 1a6c                      MOVK   13h,A12
112b0: 938e                      MOVE   A12,*A14+,1
112c0: 09ea 0000 2060            MOVI   20600000h,A10
112f0: 934e                      MOVE   A10,*A14+,1
11300: 09e8 0000 2000            MOVI   20000000h,A8
11330: 930e                      MOVE   A8,*A14+,1
11340: 0d5f d1f0 0002            CALLA  2D1F0h
11370: a3cf                      MOVE   A14,-*SP,1
11380: 4508                      SUB    A8,A8
11390: 930e                      MOVE   A8,*A14+,1
113a0: 09e8 0000 2000            MOVI   20000000h,A8
113d0: 930e                      MOVE   A8,*A14+,1
113e0: 934e                      MOVE   A10,*A14+,1
113f0: 0d5f d1f0 0002            CALLA  2D1F0h
11420: c062                      JR     11A50h
11430: a3cf                      MOVE   A14,-*SP,1
11440: 87ac                      MOVE   *A13,A12,1
11450: af8a 0078                 MOVB   *A12(78h),A10
11470: 934e                      MOVE   A10,*A14+,1
11480: 0d5f d7e0 0002            CALLA  2D7E0h
114b0: c059                      JR     11A50h
114c0: a3cf                      MOVE   A14,-*SP,1
114d0: 87ac                      MOVE   *A13,A12,1
114e0: af8a 0078                 MOVB   *A12(78h),A10
11500: 934e                      MOVE   A10,*A14+,1
11510: 0d5f 2440 0003            CALLA  32440h
11540: c050                      JR     11A50h
11550: a3cf                      MOVE   A14,-*SP,1
11560: 87ac                      MOVE   *A13,A12,1
11570: b58a 0078                 MOVE   *A12(78h),A10,0
11590: 934e                      MOVE   A10,*A14+,1
115a0: 0d5f 3240 0003            CALLA  33240h
115d0: c047                      JR     11A50h
115e0: a3cf                      MOVE   A14,-*SP,1
115f0: 87ac                      MOVE   *A13,A12,1
11600: b58a 0088                 MOVE   *A12(88h),A10,0
11620: 934e                      MOVE   A10,*A14+,1
11630: 0d5f 3570 0003            CALLA  33570h
11660: c03e                      JR     11A50h
11670: a3cf                      MOVE   A14,-*SP,1
11680: 87ac                      MOVE   *A13,A12,1
11690: b58a 0088                 MOVE   *A12(88h),A10,0
116b0: 934e                      MOVE   A10,*A14+,1
116c0: b58a 0078                 MOVE   *A12(78h),A10,0
116e0: 934e                      MOVE   A10,*A14+,1
116f0: 0d5f 38a0 0003            CALLA  338A0h
11720: c032                      JR     11A50h
11730: 87ac                      MOVE   *A13,A12,1
11740: a3cf                      MOVE   A14,-*SP,1
11750: b58a 0078                 MOVE   *A12(78h),A10,0
11770: 934e                      MOVE   A10,*A14+,1
11780: 0d5f 3c10 0003            CALLA  33C10h
117b0: 0550                      SETF   10h,0,0
117c0: 810c                      MOVE   A8,*A12,0
117d0: c027                      JR     11A50h
117e0: 87ac                      MOVE   *A13,A12,1
117f0: a3cf                      MOVE   A14,-*SP,1
11800: b58a 0088                 MOVE   *A12(88h),A10,0
11820: 934e                      MOVE   A10,*A14+,1
11830: 0d5f 3e90 0003            CALLA  33E90h
11860: 0550                      SETF   10h,0,0
11870: 810c                      MOVE   A8,*A12,0
11880: c01c                      JR     11A50h
11890: 87ac                      MOVE   *A13,A12,1
118a0: a3cf                      MOVE   A14,-*SP,1
118b0: b58a 0088                 MOVE   *A12(88h),A10,0
118d0: 934e                      MOVE   A10,*A14+,1
118e0: b58a 0078                 MOVE   *A12(78h),A10,0
11900: 934e                      MOVE   A10,*A14+,1
11910: 0d5f 4110 0003            CALLA  34110h
11940: 0550                      SETF   10h,0,0
11950: 810c                      MOVE   A8,*A12,0
11960: c00e                      JR     11A50h
11970: 0d5f 57d0 0003            CALLA  357D0h
119a0: c00a                      JR     11A50h
119b0: b58a 0068                 MOVE   *A12(68h),A10,0
119d0: 364a                      CMPK   12h,A10
119e0: c306                      JRHI   11A50h
119f0: 24aa                      SLL    5h,A10
11a00: 0b2a d920 0003            ADDI   3D920h,A10
11a30: 874a                      MOVE   *A10,A10,1
11a40: 016a                      JUMP   A10
11a50: 87ac                      MOVE   *A13,A12,1
11a60: 0548                      SETF   8h,0,0
11a70: b58a 0070                 MOVE   *A12(70h),A10,0
11a90: 14aa                      SUBK   5h,A10
11aa0: cb14                      JRNE   11BF0h
11ab0: c00c                      JR     11B80h
11ac0: 0d5f 43e0 0003            CALLA  343E0h
11af0: c00f                      JR     11BF0h
11b00: 0d5f 6b90 0003            CALLA  36B90h
11b30: c00b                      JR     11BF0h
11b40: 0d5f 6f90 0003            CALLA  36F90h
11b70: c007                      JR     11BF0h
11b80: b58a 0068                 MOVE   *A12(68h),A10,0
11ba0: caf1                      JREQ   11AC0h
11bb0: 142a                      DEC    A10
11bc0: caf3                      JREQ   11B00h
11bd0: 382a                      DSJS   A10,11BF0h
11be0: c0f5                      JR     11B40h
11bf0: 87ac                      MOVE   *A13,A12,1
11c00: 0548                      SETF   8h,0,0
11c10: b58a 0070                 MOVE   *A12(70h),A10,0
11c30: 162a                      SUBK   11h,A10
11c40: cb0d                      JRNE   11D20h
11c50: a3cf                      MOVE   A14,-*SP,1
11c60: b58a 00a0                 MOVE   *A12(A0h),A10,0
11c80: 934e                      MOVE   A10,*A14+,1
11c90: b58a 00a8                 MOVE   *A12(A8h),A10,0
11cb0: 934e                      MOVE   A10,*A14+,1
11cc0: b58a 0068                 MOVE   *A12(68h),A10,0
11ce0: 934e                      MOVE   A10,*A14+,1
11cf0: 0d5f 4780 0003            CALLA  34780h
11d20: b7ee 0080                 MOVE   *SP(80h),A14,1
11d40: 09af 3400                 MMFM   SP,A10,A12,A13
11d60: 0962                      RETS   2h

_cp_read_data_location:
11d70: 098f 000c                 MMTM   SP,A12,A13
11d90: 4dcd                      MOVE   A14,A13
11da0: 100e                      ADDK   20h,A14
11db0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
11de0: 87a8                      MOVE   *A13,A8,1
11df0: 0548                      SETF   8h,0,0
11e00: b508 0038                 MOVE   *A8(38h),A8,0
11e20: 1448                      SUBK   2h,A8
11e30: cb06                      JRNE   11EA0h
11e40: 87a8                      MOVE   *A13,A8,1
11e50: 09ec 4560 000c            MOVI   C4560h,A12
11e80: 8388                      MOVE   A12,*A8,1
11e90: c02d                      JR     12170h
11ea0: 87ac                      MOVE   *A13,A12,1
11eb0: 09e8 3560 0004            MOVI   43560h,A8
11ee0: 830c                      MOVE   A8,*A12,1
11ef0: b588 0038                 MOVE   *A12(38h),A8,0
11f10: cb25                      JRNE   12170h
11f20: a3cf                      MOVE   A14,-*SP,1
11f30: b588 0020                 MOVE   *A12(20h),A8,0
11f50: 930e                      MOVE   A8,*A14+,1
11f60: b588 0030                 MOVE   *A12(30h),A8,0
11f80: 930e                      MOVE   A8,*A14+,1
11f90: b588 0028                 MOVE   *A12(28h),A8,0
11fb0: 930e                      MOVE   A8,*A14+,1
11fc0: 0d5f 9680 0002            CALLA  29680h
11ff0: a3cf                      MOVE   A14,-*SP,1
12000: 09e8 ded0 0003            MOVI   3DED0h,A8
12030: 930e                      MOVE   A8,*A14+,1
12040: 09e8 dec0 0003            MOVI   3DEC0h,A8
12070: 930e                      MOVE   A8,*A14+,1
12080: 09e8 dee0 0003            MOVI   3DEE0h,A8
120b0: 930e                      MOVE   A8,*A14+,1
120c0: 0d5f 0000 0000            CALLA  0h
120f0: a3cf                      MOVE   A14,-*SP,1
12100: 0548                      SETF   8h,0,0
12110: b588 0040                 MOVE   *A12(40h),A8,0
12130: 930e                      MOVE   A8,*A14+,1
12140: 0d5f aca0 0002            CALLA  2ACA0h
12170: b7ee 0060                 MOVE   *SP(60h),A14,1
12190: 09af 3000                 MMFM   SP,A12,A13
121b0: 0962                      RETS   2h

_cp_imx_suspend:
121c0: a3af                      MOVE   A13,-*SP,1
121d0: 4dcd                      MOVE   A14,A13
121e0: 0b0e 0040                 ADDI   40h,A14
12200: 1828                      MOVK   1h,A8
12210: ad0d 0020                 MOVB   A8,*A13(20h)
12230: a3cf                      MOVE   A14,-*SP,1
12240: 1848                      MOVK   2h,A8
12250: 930e                      MOVE   A8,*A14+,1
12260: 0d5f 0000 0000            CALLA  0h
12290: 830d                      MOVE   A8,*A13,1
122a0: 4d08                      MOVE   A8,A8
122b0: cb0c                      JRNE   12380h
122c0: a3cf                      MOVE   A14,-*SP,1
122d0: 1848                      MOVK   2h,A8
122e0: 930e                      MOVE   A8,*A14+,1
122f0: 0d5f 0000 0000            CALLA  0h
12320: 830d                      MOVE   A8,*A13,1
12330: 4d08                      MOVE   A8,A8
12340: cb03                      JRNE   12380h
12350: 4508                      SUB    A8,A8
12360: ad0d 0020                 MOVB   A8,*A13(20h)
12380: afa8 0020                 MOVB   *A13(20h),A8
123a0: cbe8                      JRNE   12230h
123b0: 4508                      SUB    A8,A8
123c0: 0788 1e00 0000            MOVE   A8,@1E00h,1
123f0: 87a8                      MOVE   *A13,A8,1
12400: 0bee ffbf                 SUBI   40h,A14
12420: 97ed                      MOVE   *SP+,A13,1
12430: 0960                      RETS   

_get_imx_errors:
12440: a3af                      MOVE   A13,-*SP,1
12450: 4dcd                      MOVE   A14,A13
12460: 0b0e 0060                 ADDI   60h,A14
12480: a3cf                      MOVE   A14,-*SP,1
12490: 93ae                      MOVE   A13,*A14+,1
124a0: 1bc8                      MOVK   1Eh,A8
124b0: 930e                      MOVE   A8,*A14+,1
124c0: 0d5f 0000 0000            CALLA  0h
124f0: b30d 0040                 MOVE   A8,*A13(40h),1
12510: 15e8                      SUBK   Fh,A8
12520: cb02                      JRNE   12550h
12530: 4508                      SUB    A8,A8
12540: c019                      JR     126E0h
12550: b7a8 0040                 MOVE   *A13(40h),A8,1
12570: cb15                      JRNE   126D0h
12580: a3cf                      MOVE   A14,-*SP,1
12590: 4508                      SUB    A8,A8
125a0: 930e                      MOVE   A8,*A14+,1
125b0: 93ae                      MOVE   A13,*A14+,1
125c0: 1bc8                      MOVK   1Eh,A8
125d0: 930e                      MOVE   A8,*A14+,1
125e0: 0d5f 0000 0000            CALLA  0h
12610: b30d 0040                 MOVE   A8,*A13(40h),1
12630: 4d08                      MOVE   A8,A8
12640: cb08                      JRNE   126D0h
12650: 0548                      SETF   8h,0,0
12660: b5a8 0020                 MOVE   *A13(20h),A8,0
12680: 0ba8 0080 0000            ORI    80h,A8
126b0: 0528                      ZEXT   A8,0
126c0: c001                      JR     126E0h
126d0: 4508                      SUB    A8,A8
126e0: 0bee ff9f                 SUBI   60h,A14
12700: 97ed                      MOVE   *SP+,A13,1
12710: 0960                      RETS   

_cp_imx_cine_start:
12720: a3af                      MOVE   A13,-*SP,1
12730: 4dcd                      MOVE   A14,A13
12740: 100e                      ADDK   20h,A14
12750: 1908                      MOVK   8h,A8
12760: 0788 6f40 000e            MOVE   A8,@E6F40h,1
12790: 1bc8                      MOVK   1Eh,A8
127a0: 0788 6f60 000e            MOVE   A8,@E6F60h,1
127d0: 1ac8                      MOVK   16h,A8
127e0: 0788 6f80 000e            MOVE   A8,@E6F80h,1
12810: a3cf                      MOVE   A14,-*SP,1
12820: 09e8 6f40 000e            MOVI   E6F40h,A8
12850: 930e                      MOVE   A8,*A14+,1
12860: 1b88                      MOVK   1Ch,A8
12870: 930e                      MOVE   A8,*A14+,1
12880: 0d5f 0000 0000            CALLA  0h
128b0: 830d                      MOVE   A8,*A13,1
128c0: 4d08                      MOVE   A8,A8
128d0: ca14                      JREQ   12A20h
128e0: 1828                      MOVK   1h,A8
128f0: 0788 1b00 0004            MOVE   A8,@41B00h,1
12920: 09c8 0056                 MOVI   56h,A8
12940: 05e8 1b20 0004            MOVB   A8,@41B20h
12970: a3cf                      MOVE   A14,-*SP,1
12980: 09e8 1b00 0004            MOVI   41B00h,A8
129b0: 930e                      MOVE   A8,*A14+,1
129c0: 1bc8                      MOVK   1Eh,A8
129d0: 930e                      MOVE   A8,*A14+,1
129e0: 0d5f 0000 0000            CALLA  0h
12a10: 830d                      MOVE   A8,*A13,1
12a20: 140e                      SUBK   20h,A14
12a30: 97ed                      MOVE   *SP+,A13,1
12a40: 0960                      RETS   

_read_binary_image:
12a50: 098f 827c                 MMTM   SP,A0,A6,A9-A13
12a70: 4dcd                      MOVE   A14,A13
12a80: 0b0e 0080                 ADDI   80h,A14
12aa0: 09e9 3560 0004            MOVI   43560h,A9
12ad0: 4d2a                      MOVE   A9,A10
12ae0: 09c0 0080                 MOVI   80h,A0
12b00: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12b20: 0548                      SETF   8h,0,0
12b30: b508 0058                 MOVE   *A8(58h),A8,0
12b50: cb06                      JRNE   12BC0h
12b60: 09e8 0000 2000            MOVI   20000000h,A8
12b90: b30d 0060                 MOVE   A8,*A13(60h),1
12bb0: c005                      JR     12C10h
12bc0: 09e8 0000 4000            MOVI   40000000h,A8
12bf0: b30d 0060                 MOVE   A8,*A13(60h),1
12c10: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12c30: b508 0098                 MOVE   *A8(98h),A8,0
12c50: 38c8                      DSJS   A8,12CC0h
12c60: 09c8 4000                 MOVI   4000h,A8
12c80: 0550                      SETF   10h,0,0
12c90: b10d 0050                 MOVE   A8,*A13(50h),0
12cb0: c005                      JR     12D10h
12cc0: 09c8 2000                 MOVI   2000h,A8
12ce0: 0550                      SETF   10h,0,0
12cf0: b10d 0050                 MOVE   A8,*A13(50h),0
12d10: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12d30: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
12d60: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
12d90: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
12dc0: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
12df0: 85a8                      MOVE   *A13,A8,0
12e00: 2468                      SLL    3h,A8
12e10: b10d 0040                 MOVE   A8,*A13(40h),0
12e30: a3cf                      MOVE   A14,-*SP,1
12e40: 1908                      MOVK   8h,A8
12e50: 930e                      MOVE   A8,*A14+,1
12e60: b5a8 0010                 MOVE   *A13(10h),A8,0
12e80: 930e                      MOVE   A8,*A14+,1
12e90: 85a8                      MOVE   *A13,A8,0
12ea0: 930e                      MOVE   A8,*A14+,1
12eb0: b5a8 0050                 MOVE   *A13(50h),A8,0
12ed0: 930e                      MOVE   A8,*A14+,1
12ee0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
12f00: 0d5f 0000 0000            CALLA  0h
12f30: a3cf                      MOVE   A14,-*SP,1
12f40: 1908                      MOVK   8h,A8
12f50: 930e                      MOVE   A8,*A14+,1
12f60: 0550                      SETF   10h,0,0
12f70: b5a8 0010                 MOVE   *A13(10h),A8,0
12f90: 930e                      MOVE   A8,*A14+,1
12fa0: 85a8                      MOVE   *A13,A8,0
12fb0: 930e                      MOVE   A8,*A14+,1
12fc0: b5a8 0040                 MOVE   *A13(40h),A8,0
12fe0: 930e                      MOVE   A8,*A14+,1
12ff0: 932e                      MOVE   A9,*A14+,1
13000: 0d5f 0000 0000            CALLA  0h
13030: a3cf                      MOVE   A14,-*SP,1
13040: 4508                      SUB    A8,A8
13050: 930e                      MOVE   A8,*A14+,1
13060: 930e                      MOVE   A8,*A14+,1
13070: 0550                      SETF   10h,0,0
13080: b5a8 0030                 MOVE   *A13(30h),A8,0
130a0: 930e                      MOVE   A8,*A14+,1
130b0: b5a8 0020                 MOVE   *A13(20h),A8,0
130d0: 930e                      MOVE   A8,*A14+,1
130e0: b5a8 0010                 MOVE   *A13(10h),A8,0
13100: 930e                      MOVE   A8,*A14+,1
13110: 85a8                      MOVE   *A13,A8,0
13120: 930e                      MOVE   A8,*A14+,1
13130: 0d5f 0000 0000            CALLA  0h
13160: a3cf                      MOVE   A14,-*SP,1
13170: 4508                      SUB    A8,A8
13180: 930e                      MOVE   A8,*A14+,1
13190: 930e                      MOVE   A8,*A14+,1
131a0: 930e                      MOVE   A8,*A14+,1
131b0: 930e                      MOVE   A8,*A14+,1
131c0: 930e                      MOVE   A8,*A14+,1
131d0: 0d5f 0000 0000            CALLA  0h
13200: a3cf                      MOVE   A14,-*SP,1
13210: 4508                      SUB    A8,A8
13220: 930e                      MOVE   A8,*A14+,1
13230: 930e                      MOVE   A8,*A14+,1
13240: 930e                      MOVE   A8,*A14+,1
13250: 930e                      MOVE   A8,*A14+,1
13260: 930e                      MOVE   A8,*A14+,1
13270: 0d5f 0000 0000            CALLA  0h
132a0: 456b                      SUB    A11,A11
132b0: 0550                      SETF   10h,0,0
132c0: b5a8 0010                 MOVE   *A13(10h),A8,0
132e0: c653                      JRLE   13820h
132f0: 458c                      SUB    A12,A12
13300: 85a8                      MOVE   *A13,A8,0
13310: c644                      JRLE   13760h
13320: 0548                      SETF   8h,0,0
13330: 8528                      MOVE   *A9,A8,0
13340: 4d06                      MOVE   A8,A6
13350: 2488                      SLL    4h,A8
13360: 2466                      SLL    3h,A6
13370: 40c8                      ADD    A6,A8
13380: 0b28 f440 0003            ADDI   3F440h,A8
133b0: 8506                      MOVE   *A8,A6,0
133c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
133e0: b508 00a0                 MOVE   *A8(A0h),A8,0
13400: 4906                      CMP    A8,A6
13410: cb24                      JRNE   13660h
13420: 8526                      MOVE   *A9,A6,0
13430: 4cc8                      MOVE   A6,A8
13440: 2486                      SLL    4h,A6
13450: 2468                      SLL    3h,A8
13460: 4106                      ADD    A8,A6
13470: 0b26 f440 0003            ADDI   3F440h,A6
134a0: b4c6 0008                 MOVE   *A6(8h),A6,0
134c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
134e0: b508 00a8                 MOVE   *A8(A8h),A8,0
13500: 4906                      CMP    A8,A6
13510: cb14                      JRNE   13660h
13520: 8526                      MOVE   *A9,A6,0
13530: 4cc8                      MOVE   A6,A8
13540: 2486                      SLL    4h,A6
13550: 2468                      SLL    3h,A8
13560: 4106                      ADD    A8,A6
13570: 0b26 f440 0003            ADDI   3F440h,A6
135a0: b4c6 0010                 MOVE   *A6(10h),A6,0
135c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
135e0: b508 00b0                 MOVE   *A8(B0h),A8,0
13600: 4906                      CMP    A8,A6
13610: cb04                      JRNE   13660h
13620: 8546                      MOVE   *A10,A6,0
13630: 5406                      OR     A0,A6
13640: 8cca                      MOVB   A6,*A10
13650: c003                      JR     13690h
13660: 8546                      MOVE   *A10,A6,0
13670: 5206                      ANDN   A0,A6
13680: 8cca                      MOVB   A6,*A10
13690: 2fe0                      SRL    1h,A0
136a0: cb03                      JRNE   136E0h
136b0: 09c0 0080                 MOVI   80h,A0
136d0: 110a                      ADDK   8h,A10
136e0: 1109                      ADDK   8h,A9
136f0: 102c                      INC    A12
13700: 260c                      SLL    10h,A12
13710: 2e0c                      SRL    10h,A12
13720: 0550                      SETF   10h,0,0
13730: 85a6                      MOVE   *A13,A6,0
13740: 48cc                      CMP    A6,A12
13750: c4bc                      JRLT   13320h
13760: 0b40 ff7f                 CMPI   80h,A0
13780: ca03                      JREQ   137C0h
13790: 09c0 0080                 MOVI   80h,A0
137b0: 110a                      ADDK   8h,A10
137c0: 102b                      INC    A11
137d0: 052b                      ZEXT   A11,0
137e0: b5a6 0010                 MOVE   *A13(10h),A6,0
13800: 48cb                      CMP    A6,A11
13810: c4ad                      JRLT   132F0h
13820: b7ee 0100                 MOVE   *SP(100h),A14,1
13840: 09af 3e41                 MMFM   SP,A0,A6,A9-A13
13860: 0962                      RETS   2h

_read_binary_overlay:
13870: 098f eb7c                 MMTM   SP,A0-A2,A4,A6,A7,A9-A13
13890: 4dcd                      MOVE   A14,A13
138a0: 0b0e 0060                 ADDI   60h,A14
138c0: 4508                      SUB    A8,A8
138d0: 0550                      SETF   10h,0,0
138e0: b10d 0040                 MOVE   A8,*A13(40h),0
13900: 0548                      SETF   8h,0,0
13910: 05aa f370 0003            MOVE   @3F370h,A10,0
13940: 05ab f380 0003            MOVE   @3F380h,A11,0
13970: 4d0c                      MOVE   A8,A12
13980: 09e6 3560 0004            MOVI   43560h,A6
139b0: 09c1 0080                 MOVI   80h,A1
139d0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
139f0: b508 0058                 MOVE   *A8(58h),A8,0
13a10: ca05                      JREQ   13A70h
13a20: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13a40: b508 0058                 MOVE   *A8(58h),A8,0
13a60: 3828                      DSJS   A8,13A80h
13a70: 182c                      MOVK   1h,A12
13a80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13aa0: b508 0060                 MOVE   *A8(60h),A8,0
13ac0: cb06                      JRNE   13B30h
13ad0: 09e8 0000 1000            MOVI   10000000h,A8
13b00: b30d 0020                 MOVE   A8,*A13(20h),1
13b20: c005                      JR     13B80h
13b30: 09e8 0000 1040            MOVI   10400000h,A8
13b60: b30d 0020                 MOVE   A8,*A13(20h),1
13b80: 4400                      SUB    A0,A0
13b90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13bb0: 0550                      SETF   10h,0,0
13bc0: b508 0040                 MOVE   *A8(40h),A8,0
13be0: c656                      JRLE   14150h
13bf0: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
13c20: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13c40: b508 0020                 MOVE   *A8(20h),A8,0
13c60: 4008                      ADD    A0,A8
13c70: 2548                      SLL    Ah,A8
13c80: 07a7 f320 0003            MOVE   @3F320h,A7,1
13cb0: 5f07                      MPYU   A8,A7
13cc0: 87a8                      MOVE   *A13,A8,1
13cd0: 4107                      ADD    A8,A7
13ce0: 82ed                      MOVE   A7,*A13,1
13cf0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13d10: b508 0010                 MOVE   *A8(10h),A8,0
13d30: 07a7 f320 0003            MOVE   @3F320h,A7,1
13d60: 5f07                      MPYU   A8,A7
13d70: 87a8                      MOVE   *A13,A8,1
13d80: 4107                      ADD    A8,A7
13d90: 82ed                      MOVE   A7,*A13,1
13da0: 4ce4                      MOVE   A7,A4
13db0: 4442                      SUB    A2,A2
13dc0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13de0: b507 0030                 MOVE   *A8(30h),A7,0
13e00: c625                      JRLE   14060h
13e10: 0544                      SETF   4h,0,0
13e20: 8489                      MOVE   *A4,A9,0
13e30: 4d67                      MOVE   A11,A7
13e40: ca04                      JREQ   13E90h
13e50: 1084                      ADDK   4h,A4
13e60: 8488                      MOVE   *A4,A8,0
13e70: 2488                      SLL    4h,A8
13e80: 4109                      ADD    A8,A9
13e90: 4949                      CMP    A10,A9
13ea0: cb07                      JRNE   13F20h
13eb0: 4d87                      MOVE   A12,A7
13ec0: cb09                      JRNE   13F60h
13ed0: 0548                      SETF   8h,0,0
13ee0: 84c8                      MOVE   *A6,A8,0
13ef0: 5228                      ANDN   A1,A8
13f00: 8d06                      MOVB   A8,*A6
13f10: c004                      JR     13F60h
13f20: 0548                      SETF   8h,0,0
13f30: 84c8                      MOVE   *A6,A8,0
13f40: 5428                      OR     A1,A8
13f50: 8d06                      MOVB   A8,*A6
13f60: 1084                      ADDK   4h,A4
13f70: 2fe1                      SRL    1h,A1
13f80: cb03                      JRNE   13FC0h
13f90: 09c1 0080                 MOVI   80h,A1
13fb0: 1106                      ADDK   8h,A6
13fc0: 1022                      INC    A2
13fd0: 2602                      SLL    10h,A2
13fe0: 2e02                      SRL    10h,A2
13ff0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14010: 0550                      SETF   10h,0,0
14020: b507 0030                 MOVE   *A8(30h),A7,0
14040: 48e2                      CMP    A7,A2
14050: c4db                      JRLT   13E10h
14060: 0b41 ff7f                 CMPI   80h,A1
14080: ca06                      JREQ   140F0h
14090: 44e7                      SUB    A7,A7
140a0: b0ed 0040                 MOVE   A7,*A13(40h),0
140c0: 09c1 0080                 MOVI   80h,A1
140e0: 1106                      ADDK   8h,A6
140f0: 1020                      INC    A0
14100: 0520                      ZEXT   A0,0
14110: b507 0040                 MOVE   *A8(40h),A7,0
14130: 48e0                      CMP    A7,A0
14140: c4aa                      JRLT   13BF0h
14150: b7ee 0180                 MOVE   *SP(180h),A14,1
14170: 09af 3ed7                 MMFM   SP,A0-A2,A4,A6,A7,A9-A13
14190: 0962                      RETS   2h

_hi_read_binary_overlay:
141a0: 098f eb7c                 MMTM   SP,A0-A2,A4,A6,A7,A9-A13
141c0: 4dcd                      MOVE   A14,A13
141d0: 0b0e 0060                 ADDI   60h,A14
141f0: 4508                      SUB    A8,A8
14200: 0550                      SETF   10h,0,0
14210: b10d 0040                 MOVE   A8,*A13(40h),0
14230: 0548                      SETF   8h,0,0
14240: 05aa f370 0003            MOVE   @3F370h,A10,0
14270: 05ab f380 0003            MOVE   @3F380h,A11,0
142a0: 4d0c                      MOVE   A8,A12
142b0: 09e6 3560 0004            MOVI   43560h,A6
142e0: 09c1 0080                 MOVI   80h,A1
14300: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14320: b508 0058                 MOVE   *A8(58h),A8,0
14340: ca05                      JREQ   143A0h
14350: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14370: b508 0058                 MOVE   *A8(58h),A8,0
14390: 3828                      DSJS   A8,143B0h
143a0: 182c                      MOVK   1h,A12
143b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
143d0: b508 0060                 MOVE   *A8(60h),A8,0
143f0: cb06                      JRNE   14460h
14400: 09e8 0000 1000            MOVI   10000000h,A8
14430: b30d 0020                 MOVE   A8,*A13(20h),1
14450: c005                      JR     144B0h
14460: 09e8 0000 1040            MOVI   10400000h,A8
14490: b30d 0020                 MOVE   A8,*A13(20h),1
144b0: 4400                      SUB    A0,A0
144c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
144e0: 0550                      SETF   10h,0,0
144f0: b508 0040                 MOVE   *A8(40h),A8,0
14510: c666                      JRLE   14B80h
14520: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
14550: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14570: b508 0020                 MOVE   *A8(20h),A8,0
14590: 4008                      ADD    A0,A8
145a0: 2be8                      SRA    1h,A8
145b0: 2548                      SLL    Ah,A8
145c0: 07a7 f320 0003            MOVE   @3F320h,A7,1
145f0: 5f07                      MPYU   A8,A7
14600: 87a8                      MOVE   *A13,A8,1
14610: 4107                      ADD    A8,A7
14620: 82ed                      MOVE   A7,*A13,1
14630: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14650: b507 0010                 MOVE   *A8(10h),A7,0
14670: 2be7                      SRA    1h,A7
14680: 07a8 f320 0003            MOVE   @3F320h,A8,1
146b0: 5f07                      MPYU   A8,A7
146c0: 87a8                      MOVE   *A13,A8,1
146d0: 4107                      ADD    A8,A7
146e0: 82ed                      MOVE   A7,*A13,1
146f0: 4ce4                      MOVE   A7,A4
14700: b7a2 ffe0                 MOVE   *A13(FFE0h),A2,1
14720: b442 0010                 MOVE   *A2(10h),A2,0
14740: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14760: b507 0010                 MOVE   *A8(10h),A7,0
14780: b508 0030                 MOVE   *A8(30h),A8,0
147a0: 4107                      ADD    A8,A7
147b0: 48e2                      CMP    A7,A2
147c0: c52a                      JRGE   14A70h
147d0: 0544                      SETF   4h,0,0
147e0: 8489                      MOVE   *A4,A9,0
147f0: 4d67                      MOVE   A11,A7
14800: ca04                      JREQ   14850h
14810: 1084                      ADDK   4h,A4
14820: 8488                      MOVE   *A4,A8,0
14830: 2488                      SLL    4h,A8
14840: 4109                      ADD    A8,A9
14850: 4949                      CMP    A10,A9
14860: cb07                      JRNE   148E0h
14870: 4d87                      MOVE   A12,A7
14880: cb09                      JRNE   14920h
14890: 0548                      SETF   8h,0,0
148a0: 84c8                      MOVE   *A6,A8,0
148b0: 5228                      ANDN   A1,A8
148c0: 8d06                      MOVB   A8,*A6
148d0: c004                      JR     14920h
148e0: 0548                      SETF   8h,0,0
148f0: 84c8                      MOVE   *A6,A8,0
14900: 5428                      OR     A1,A8
14910: 8d06                      MOVB   A8,*A6
14920: 1fe2                      BTST   0h,A2
14930: ca01                      JREQ   14950h
14940: 1084                      ADDK   4h,A4
14950: 2fe1                      SRL    1h,A1
14960: cb03                      JRNE   149A0h
14970: 09c1 0080                 MOVI   80h,A1
14990: 1106                      ADDK   8h,A6
149a0: 1022                      INC    A2
149b0: 2602                      SLL    10h,A2
149c0: 2e02                      SRL    10h,A2
149d0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
149f0: 0550                      SETF   10h,0,0
14a00: b507 0010                 MOVE   *A8(10h),A7,0
14a20: b508 0030                 MOVE   *A8(30h),A8,0
14a40: 4107                      ADD    A8,A7
14a50: 48e2                      CMP    A7,A2
14a60: c4d6                      JRLT   147D0h
14a70: 0b41 ff7f                 CMPI   80h,A1
14a90: ca06                      JREQ   14B00h
14aa0: 4508                      SUB    A8,A8
14ab0: b10d 0040                 MOVE   A8,*A13(40h),0
14ad0: 09c1 0080                 MOVI   80h,A1
14af0: 1106                      ADDK   8h,A6
14b00: 1020                      INC    A0
14b10: 0520                      ZEXT   A0,0
14b20: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14b40: b507 0040                 MOVE   *A8(40h),A7,0
14b60: 48e0                      CMP    A7,A0
14b70: c49a                      JRLT   14520h
14b80: b7ee 0180                 MOVE   *SP(180h),A14,1
14ba0: 09af 3ed7                 MMFM   SP,A0-A2,A4,A6,A7,A9-A13
14bc0: 0962                      RETS   2h

_read_grey_image:
14bd0: 098f 007c                 MMTM   SP,A9-A13
14bf0: 4dcd                      MOVE   A14,A13
14c00: 0b0e 0080                 ADDI   80h,A14
14c20: 09e9 3560 0004            MOVI   43560h,A9
14c50: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14c70: 0548                      SETF   8h,0,0
14c80: b508 0058                 MOVE   *A8(58h),A8,0
14ca0: cb06                      JRNE   14D10h
14cb0: 09e8 0000 2000            MOVI   20000000h,A8
14ce0: b30d 0060                 MOVE   A8,*A13(60h),1
14d00: c005                      JR     14D60h
14d10: 09e8 0000 4000            MOVI   40000000h,A8
14d40: b30d 0060                 MOVE   A8,*A13(60h),1
14d60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14d80: b508 0098                 MOVE   *A8(98h),A8,0
14da0: 38c8                      DSJS   A8,14E10h
14db0: 09c8 4000                 MOVI   4000h,A8
14dd0: 0550                      SETF   10h,0,0
14de0: b10d 0050                 MOVE   A8,*A13(50h),0
14e00: c005                      JR     14E60h
14e10: 09c8 2000                 MOVI   2000h,A8
14e30: 0550                      SETF   10h,0,0
14e40: b10d 0050                 MOVE   A8,*A13(50h),0
14e60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
14e80: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
14eb0: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
14ee0: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
14f10: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
14f40: 85a8                      MOVE   *A13,A8,0
14f50: 2468                      SLL    3h,A8
14f60: b10d 0040                 MOVE   A8,*A13(40h),0
14f80: a3cf                      MOVE   A14,-*SP,1
14f90: 1908                      MOVK   8h,A8
14fa0: 930e                      MOVE   A8,*A14+,1
14fb0: b5a8 0010                 MOVE   *A13(10h),A8,0
14fd0: 930e                      MOVE   A8,*A14+,1
14fe0: 85a8                      MOVE   *A13,A8,0
14ff0: 930e                      MOVE   A8,*A14+,1
15000: b5a8 0050                 MOVE   *A13(50h),A8,0
15020: 930e                      MOVE   A8,*A14+,1
15030: d3ae 0060                 MOVE   *A13(60h),*A14+,1
15050: 0d5f 0000 0000            CALLA  0h
15080: a3cf                      MOVE   A14,-*SP,1
15090: 1908                      MOVK   8h,A8
150a0: 930e                      MOVE   A8,*A14+,1
150b0: 0550                      SETF   10h,0,0
150c0: b5a8 0010                 MOVE   *A13(10h),A8,0
150e0: 930e                      MOVE   A8,*A14+,1
150f0: 85a8                      MOVE   *A13,A8,0
15100: 930e                      MOVE   A8,*A14+,1
15110: b5a8 0040                 MOVE   *A13(40h),A8,0
15130: 930e                      MOVE   A8,*A14+,1
15140: 932e                      MOVE   A9,*A14+,1
15150: 0d5f 0000 0000            CALLA  0h
15180: a3cf                      MOVE   A14,-*SP,1
15190: 4508                      SUB    A8,A8
151a0: 930e                      MOVE   A8,*A14+,1
151b0: 930e                      MOVE   A8,*A14+,1
151c0: 0550                      SETF   10h,0,0
151d0: b5a8 0030                 MOVE   *A13(30h),A8,0
151f0: 930e                      MOVE   A8,*A14+,1
15200: b5a8 0020                 MOVE   *A13(20h),A8,0
15220: 930e                      MOVE   A8,*A14+,1
15230: b5a8 0010                 MOVE   *A13(10h),A8,0
15250: 930e                      MOVE   A8,*A14+,1
15260: 85a8                      MOVE   *A13,A8,0
15270: 930e                      MOVE   A8,*A14+,1
15280: 0d5f 0000 0000            CALLA  0h
152b0: a3cf                      MOVE   A14,-*SP,1
152c0: 4508                      SUB    A8,A8
152d0: 930e                      MOVE   A8,*A14+,1
152e0: 930e                      MOVE   A8,*A14+,1
152f0: 930e                      MOVE   A8,*A14+,1
15300: 930e                      MOVE   A8,*A14+,1
15310: 930e                      MOVE   A8,*A14+,1
15320: 0d5f 0000 0000            CALLA  0h
15350: a3cf                      MOVE   A14,-*SP,1
15360: 4508                      SUB    A8,A8
15370: 930e                      MOVE   A8,*A14+,1
15380: 930e                      MOVE   A8,*A14+,1
15390: 930e                      MOVE   A8,*A14+,1
153a0: 930e                      MOVE   A8,*A14+,1
153b0: 930e                      MOVE   A8,*A14+,1
153c0: 0d5f 0000 0000            CALLA  0h
153f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15410: 0548                      SETF   8h,0,0
15420: b508 0078                 MOVE   *A8(78h),A8,0
15440: ca16                      JREQ   155B0h
15450: 0550                      SETF   10h,0,0
15460: b5a8 0010                 MOVE   *A13(10h),A8,0
15480: 85ab                      MOVE   *A13,A11,0
15490: 5f0b                      MPYU   A8,A11
154a0: 454a                      SUB    A10,A10
154b0: 496a                      CMP    A11,A10
154c0: c90e                      JRNC   155B0h
154d0: 0548                      SETF   8h,0,0
154e0: 8528                      MOVE   *A9,A8,0
154f0: 4d0c                      MOVE   A8,A12
15500: 2488                      SLL    4h,A8
15510: 246c                      SLL    3h,A12
15520: 4188                      ADD    A12,A8
15530: 0b28 f440 0003            ADDI   3F440h,A8
15560: 9d09                      MOVB   *A8,*A9
15570: 1109                      ADDK   8h,A9
15580: 102a                      INC    A10
15590: 496a                      CMP    A11,A10
155a0: c8f3                      JRC    154E0h
155b0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
155d0: 09af 3e00                 MMFM   SP,A9-A13
155f0: 0962                      RETS   2h

_read_grey_overlay:
15600: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
15620: 4dcd                      MOVE   A14,A13
15630: 0b0e 0040                 ADDI   40h,A14
15650: 0548                      SETF   8h,0,0
15660: 05aa f370 0003            MOVE   @3F370h,A10,0
15690: 05ab f380 0003            MOVE   @3F380h,A11,0
156c0: 458c                      SUB    A12,A12
156d0: 09e6 3560 0004            MOVI   43560h,A6
15700: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15720: b508 0058                 MOVE   *A8(58h),A8,0
15740: ca05                      JREQ   157A0h
15750: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15770: b508 0058                 MOVE   *A8(58h),A8,0
15790: 3828                      DSJS   A8,157B0h
157a0: 182c                      MOVK   1h,A12
157b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
157d0: b508 0060                 MOVE   *A8(60h),A8,0
157f0: cb06                      JRNE   15860h
15800: 09e8 0000 1000            MOVI   10000000h,A8
15830: b30d 0020                 MOVE   A8,*A13(20h),1
15850: c005                      JR     158B0h
15860: 09e8 0000 1040            MOVI   10400000h,A8
15890: b30d 0020                 MOVE   A8,*A13(20h),1
158b0: 4400                      SUB    A0,A0
158c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
158e0: 0550                      SETF   10h,0,0
158f0: b508 0040                 MOVE   *A8(40h),A8,0
15910: c64d                      JRLE   15DF0h
15920: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
15950: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15970: b508 0020                 MOVE   *A8(20h),A8,0
15990: 4008                      ADD    A0,A8
159a0: 2548                      SLL    Ah,A8
159b0: 07a7 f320 0003            MOVE   @3F320h,A7,1
159e0: 5f07                      MPYU   A8,A7
159f0: 87a8                      MOVE   *A13,A8,1
15a00: 4107                      ADD    A8,A7
15a10: 82ed                      MOVE   A7,*A13,1
15a20: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15a40: b508 0010                 MOVE   *A8(10h),A8,0
15a60: 07a7 f320 0003            MOVE   @3F320h,A7,1
15a90: 5f07                      MPYU   A8,A7
15aa0: 87a8                      MOVE   *A13,A8,1
15ab0: 4107                      ADD    A8,A7
15ac0: 82ed                      MOVE   A7,*A13,1
15ad0: 4ce4                      MOVE   A7,A4
15ae0: 4442                      SUB    A2,A2
15af0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15b10: b507 0030                 MOVE   *A8(30h),A7,0
15b30: c625                      JRLE   15D90h
15b40: 0544                      SETF   4h,0,0
15b50: 8489                      MOVE   *A4,A9,0
15b60: 4d67                      MOVE   A11,A7
15b70: ca04                      JREQ   15BC0h
15b80: 1084                      ADDK   4h,A4
15b90: 8488                      MOVE   *A4,A8,0
15ba0: 2488                      SLL    4h,A8
15bb0: 4109                      ADD    A8,A9
15bc0: 4949                      CMP    A10,A9
15bd0: cb08                      JRNE   15C60h
15be0: 4d87                      MOVE   A12,A7
15bf0: ca02                      JREQ   15C20h
15c00: 1106                      ADDK   8h,A6
15c10: c00c                      JR     15CE0h
15c20: 4508                      SUB    A8,A8
15c30: 0548                      SETF   8h,0,0
15c40: 9106                      MOVE   A8,*A6+,0
15c50: c008                      JR     15CE0h
15c60: 4d28                      MOVE   A9,A8
15c70: 2468                      SLL    3h,A8
15c80: 0b28 11e0 0004            ADDI   411E0h,A8
15cb0: 0548                      SETF   8h,0,0
15cc0: d106 0000                 MOVE   *A8(0h),*A6+,0
15ce0: 1084                      ADDK   4h,A4
15cf0: 1022                      INC    A2
15d00: 2602                      SLL    10h,A2
15d10: 2e02                      SRL    10h,A2
15d20: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15d40: 0550                      SETF   10h,0,0
15d50: b507 0030                 MOVE   *A8(30h),A7,0
15d70: 48e2                      CMP    A7,A2
15d80: c4db                      JRLT   15B40h
15d90: 1020                      INC    A0
15da0: 0520                      ZEXT   A0,0
15db0: b507 0040                 MOVE   *A8(40h),A7,0
15dd0: 48e0                      CMP    A7,A0
15de0: c4b3                      JRLT   15920h
15df0: b7ee 0160                 MOVE   *SP(160h),A14,1
15e10: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
15e30: 0962                      RETS   2h

_hi_read_grey_overlay:
15e40: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
15e60: 4dcd                      MOVE   A14,A13
15e70: 0b0e 0040                 ADDI   40h,A14
15e90: 0548                      SETF   8h,0,0
15ea0: 05aa f370 0003            MOVE   @3F370h,A10,0
15ed0: 05ab f380 0003            MOVE   @3F380h,A11,0
15f00: 458c                      SUB    A12,A12
15f10: 09e6 3560 0004            MOVI   43560h,A6
15f40: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15f60: b508 0058                 MOVE   *A8(58h),A8,0
15f80: ca05                      JREQ   15FE0h
15f90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
15fb0: b508 0058                 MOVE   *A8(58h),A8,0
15fd0: 3828                      DSJS   A8,15FF0h
15fe0: 182c                      MOVK   1h,A12
15ff0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16010: b508 0060                 MOVE   *A8(60h),A8,0
16030: cb06                      JRNE   160A0h
16040: 09e8 0000 1000            MOVI   10000000h,A8
16070: b30d 0020                 MOVE   A8,*A13(20h),1
16090: c005                      JR     160F0h
160a0: 09e8 0000 1040            MOVI   10400000h,A8
160d0: b30d 0020                 MOVE   A8,*A13(20h),1
160f0: 4400                      SUB    A0,A0
16100: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16120: 0550                      SETF   10h,0,0
16130: b508 0040                 MOVE   *A8(40h),A8,0
16150: c662                      JRLE   16780h
16160: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
16190: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
161b0: b508 0020                 MOVE   *A8(20h),A8,0
161d0: 4008                      ADD    A0,A8
161e0: 2be8                      SRA    1h,A8
161f0: 2548                      SLL    Ah,A8
16200: 07a7 f320 0003            MOVE   @3F320h,A7,1
16230: 5f07                      MPYU   A8,A7
16240: 87a8                      MOVE   *A13,A8,1
16250: 4107                      ADD    A8,A7
16260: 82ed                      MOVE   A7,*A13,1
16270: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16290: b507 0010                 MOVE   *A8(10h),A7,0
162b0: 2be7                      SRA    1h,A7
162c0: 07a8 f320 0003            MOVE   @3F320h,A8,1
162f0: 5f07                      MPYU   A8,A7
16300: 87a8                      MOVE   *A13,A8,1
16310: 4107                      ADD    A8,A7
16320: 82ed                      MOVE   A7,*A13,1
16330: 4ce4                      MOVE   A7,A4
16340: b7a2 ffe0                 MOVE   *A13(FFE0h),A2,1
16360: b442 0010                 MOVE   *A2(10h),A2,0
16380: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
163a0: b507 0010                 MOVE   *A8(10h),A7,0
163c0: b508 0030                 MOVE   *A8(30h),A8,0
163e0: 4107                      ADD    A8,A7
163f0: 48e2                      CMP    A7,A2
16400: c52f                      JRGE   16700h
16410: 0544                      SETF   4h,0,0
16420: 8489                      MOVE   *A4,A9,0
16430: 4d67                      MOVE   A11,A7
16440: ca04                      JREQ   16490h
16450: 1084                      ADDK   4h,A4
16460: 8488                      MOVE   *A4,A8,0
16470: 2488                      SLL    4h,A8
16480: 4109                      ADD    A8,A9
16490: 4949                      CMP    A10,A9
164a0: cb0a                      JRNE   16550h
164b0: 4d87                      MOVE   A12,A7
164c0: ca03                      JREQ   16500h
164d0: 1106                      ADDK   8h,A6
164e0: 1106                      ADDK   8h,A6
164f0: c014                      JR     16640h
16500: 4508                      SUB    A8,A8
16510: 0548                      SETF   8h,0,0
16520: 9106                      MOVE   A8,*A6+,0
16530: 9106                      MOVE   A8,*A6+,0
16540: c00f                      JR     16640h
16550: 4d28                      MOVE   A9,A8
16560: 2468                      SLL    3h,A8
16570: 0b28 11e0 0004            ADDI   411E0h,A8
165a0: 0548                      SETF   8h,0,0
165b0: d106 0000                 MOVE   *A8(0h),*A6+,0
165d0: 4d28                      MOVE   A9,A8
165e0: 2468                      SLL    3h,A8
165f0: 0b28 11e0 0004            ADDI   411E0h,A8
16620: d106 0000                 MOVE   *A8(0h),*A6+,0
16640: 1084                      ADDK   4h,A4
16650: 1042                      ADDK   2h,A2
16660: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16680: 0550                      SETF   10h,0,0
16690: b507 0010                 MOVE   *A8(10h),A7,0
166b0: b508 0030                 MOVE   *A8(30h),A8,0
166d0: 4107                      ADD    A8,A7
166e0: 48e2                      CMP    A7,A2
166f0: c4d1                      JRLT   16410h
16700: 1020                      INC    A0
16710: 0520                      ZEXT   A0,0
16720: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16740: b507 0040                 MOVE   *A8(40h),A7,0
16760: 48e0                      CMP    A7,A0
16770: c49e                      JRLT   16160h
16780: b7ee 0160                 MOVE   *SP(160h),A14,1
167a0: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
167c0: 0962                      RETS   2h

_read_grey_pc:
167d0: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
167f0: 4dcd                      MOVE   A14,A13
16800: 0b0e 0040                 ADDI   40h,A14
16820: 0548                      SETF   8h,0,0
16830: 05aa f360 0003            MOVE   @3F360h,A10,0
16860: 05ab f380 0003            MOVE   @3F380h,A11,0
16890: 458c                      SUB    A12,A12
168a0: 09e6 3560 0004            MOVI   43560h,A6
168d0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
168f0: b508 0058                 MOVE   *A8(58h),A8,0
16910: ca05                      JREQ   16970h
16920: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16940: b508 0058                 MOVE   *A8(58h),A8,0
16960: 3828                      DSJS   A8,16980h
16970: 182c                      MOVK   1h,A12
16980: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
169a0: b508 0060                 MOVE   *A8(60h),A8,0
169c0: ca05                      JREQ   16A20h
169d0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
169f0: b508 0060                 MOVE   *A8(60h),A8,0
16a10: 3828                      DSJS   A8,16A30h
16a20: 182c                      MOVK   1h,A12
16a30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16a50: b508 0050                 MOVE   *A8(50h),A8,0
16a70: cb03                      JRNE   16AB0h
16a80: 4508                      SUB    A8,A8
16a90: 830d                      MOVE   A8,*A13,1
16aa0: c004                      JR     16AF0h
16ab0: 09e8 0000 0040            MOVI   400000h,A8
16ae0: 830d                      MOVE   A8,*A13,1
16af0: 4400                      SUB    A0,A0
16b00: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16b20: 0550                      SETF   10h,0,0
16b30: b508 0040                 MOVE   *A8(40h),A8,0
16b50: c651                      JRLE   17070h
16b60: bbad 0000 0020            MOVE   *A13(0h),*A13(20h),1
16b90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16bb0: b508 0020                 MOVE   *A8(20h),A8,0
16bd0: 4008                      ADD    A0,A8
16be0: 2548                      SLL    Ah,A8
16bf0: 07a7 f340 0003            MOVE   @3F340h,A7,1
16c20: 5f07                      MPYU   A8,A7
16c30: b7a8 0020                 MOVE   *A13(20h),A8,1
16c50: 4107                      ADD    A8,A7
16c60: b2ed 0020                 MOVE   A7,*A13(20h),1
16c80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16ca0: b508 0010                 MOVE   *A8(10h),A8,0
16cc0: 07a7 f340 0003            MOVE   @3F340h,A7,1
16cf0: 5f07                      MPYU   A8,A7
16d00: b7a8 0020                 MOVE   *A13(20h),A8,1
16d20: 4107                      ADD    A8,A7
16d30: b2ed 0020                 MOVE   A7,*A13(20h),1
16d50: 4ce4                      MOVE   A7,A4
16d60: 4442                      SUB    A2,A2
16d70: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16d90: b507 0030                 MOVE   *A8(30h),A7,0
16db0: c625                      JRLE   17010h
16dc0: 0544                      SETF   4h,0,0
16dd0: 8489                      MOVE   *A4,A9,0
16de0: 4d67                      MOVE   A11,A7
16df0: ca04                      JREQ   16E40h
16e00: 1084                      ADDK   4h,A4
16e10: 8488                      MOVE   *A4,A8,0
16e20: 2488                      SLL    4h,A8
16e30: 4109                      ADD    A8,A9
16e40: 4949                      CMP    A10,A9
16e50: cb08                      JRNE   16EE0h
16e60: 4d87                      MOVE   A12,A7
16e70: ca02                      JREQ   16EA0h
16e80: 1106                      ADDK   8h,A6
16e90: c00c                      JR     16F60h
16ea0: 4508                      SUB    A8,A8
16eb0: 0548                      SETF   8h,0,0
16ec0: 9106                      MOVE   A8,*A6+,0
16ed0: c008                      JR     16F60h
16ee0: 4d28                      MOVE   A9,A8
16ef0: 2468                      SLL    3h,A8
16f00: 0b28 3560 000c            ADDI   C3560h,A8
16f30: 0548                      SETF   8h,0,0
16f40: d106 0000                 MOVE   *A8(0h),*A6+,0
16f60: 1084                      ADDK   4h,A4
16f70: 1022                      INC    A2
16f80: 2602                      SLL    10h,A2
16f90: 2e02                      SRL    10h,A2
16fa0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
16fc0: 0550                      SETF   10h,0,0
16fd0: b507 0030                 MOVE   *A8(30h),A7,0
16ff0: 48e2                      CMP    A7,A2
17000: c4db                      JRLT   16DC0h
17010: 1020                      INC    A0
17020: 0520                      ZEXT   A0,0
17030: b507 0040                 MOVE   *A8(40h),A7,0
17050: 48e0                      CMP    A7,A0
17060: c4af                      JRLT   16B60h
17070: b7ee 0160                 MOVE   *SP(160h),A14,1
17090: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
170b0: 0962                      RETS   2h

_hi_read_grey_pc:
170c0: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
170e0: 4dcd                      MOVE   A14,A13
170f0: 0b0e 0040                 ADDI   40h,A14
17110: 0548                      SETF   8h,0,0
17120: 05aa f360 0003            MOVE   @3F360h,A10,0
17150: 05ab f380 0003            MOVE   @3F380h,A11,0
17180: 458c                      SUB    A12,A12
17190: 09e6 3560 0004            MOVI   43560h,A6
171c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
171e0: b508 0058                 MOVE   *A8(58h),A8,0
17200: ca05                      JREQ   17260h
17210: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17230: b508 0058                 MOVE   *A8(58h),A8,0
17250: 3828                      DSJS   A8,17270h
17260: 182c                      MOVK   1h,A12
17270: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17290: b508 0060                 MOVE   *A8(60h),A8,0
172b0: ca05                      JREQ   17310h
172c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
172e0: b508 0060                 MOVE   *A8(60h),A8,0
17300: 3828                      DSJS   A8,17320h
17310: 182c                      MOVK   1h,A12
17320: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17340: b508 0050                 MOVE   *A8(50h),A8,0
17360: cb04                      JRNE   173B0h
17370: 4508                      SUB    A8,A8
17380: b30d 0020                 MOVE   A8,*A13(20h),1
173a0: c005                      JR     17400h
173b0: 09e8 0000 0040            MOVI   400000h,A8
173e0: b30d 0020                 MOVE   A8,*A13(20h),1
17400: 4400                      SUB    A0,A0
17410: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17430: 0550                      SETF   10h,0,0
17440: b508 0040                 MOVE   *A8(40h),A8,0
17460: c662                      JRLE   17A90h
17470: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
174a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
174c0: b508 0020                 MOVE   *A8(20h),A8,0
174e0: 4008                      ADD    A0,A8
174f0: 2be8                      SRA    1h,A8
17500: 2548                      SLL    Ah,A8
17510: 07a7 f340 0003            MOVE   @3F340h,A7,1
17540: 5f07                      MPYU   A8,A7
17550: 87a8                      MOVE   *A13,A8,1
17560: 4107                      ADD    A8,A7
17570: 82ed                      MOVE   A7,*A13,1
17580: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
175a0: b507 0010                 MOVE   *A8(10h),A7,0
175c0: 2be7                      SRA    1h,A7
175d0: 07a8 f340 0003            MOVE   @3F340h,A8,1
17600: 5f07                      MPYU   A8,A7
17610: 87a8                      MOVE   *A13,A8,1
17620: 4107                      ADD    A8,A7
17630: 82ed                      MOVE   A7,*A13,1
17640: 4ce4                      MOVE   A7,A4
17650: b7a2 ffe0                 MOVE   *A13(FFE0h),A2,1
17670: b442 0010                 MOVE   *A2(10h),A2,0
17690: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
176b0: b507 0010                 MOVE   *A8(10h),A7,0
176d0: b508 0030                 MOVE   *A8(30h),A8,0
176f0: 4107                      ADD    A8,A7
17700: 48e2                      CMP    A7,A2
17710: c52f                      JRGE   17A10h
17720: 0544                      SETF   4h,0,0
17730: 8489                      MOVE   *A4,A9,0
17740: 4d67                      MOVE   A11,A7
17750: ca04                      JREQ   177A0h
17760: 1084                      ADDK   4h,A4
17770: 8488                      MOVE   *A4,A8,0
17780: 2488                      SLL    4h,A8
17790: 4109                      ADD    A8,A9
177a0: 4949                      CMP    A10,A9
177b0: cb0a                      JRNE   17860h
177c0: 4d87                      MOVE   A12,A7
177d0: ca03                      JREQ   17810h
177e0: 1106                      ADDK   8h,A6
177f0: 1106                      ADDK   8h,A6
17800: c014                      JR     17950h
17810: 4508                      SUB    A8,A8
17820: 0548                      SETF   8h,0,0
17830: 9106                      MOVE   A8,*A6+,0
17840: 9106                      MOVE   A8,*A6+,0
17850: c00f                      JR     17950h
17860: 4d28                      MOVE   A9,A8
17870: 2468                      SLL    3h,A8
17880: 0b28 3560 000c            ADDI   C3560h,A8
178b0: 0548                      SETF   8h,0,0
178c0: d106 0000                 MOVE   *A8(0h),*A6+,0
178e0: 4d28                      MOVE   A9,A8
178f0: 2468                      SLL    3h,A8
17900: 0b28 3560 000c            ADDI   C3560h,A8
17930: d106 0000                 MOVE   *A8(0h),*A6+,0
17950: 1084                      ADDK   4h,A4
17960: 1042                      ADDK   2h,A2
17970: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17990: 0550                      SETF   10h,0,0
179a0: b507 0010                 MOVE   *A8(10h),A7,0
179c0: b508 0030                 MOVE   *A8(30h),A8,0
179e0: 4107                      ADD    A8,A7
179f0: 48e2                      CMP    A7,A2
17a00: c4d1                      JRLT   17720h
17a10: 1020                      INC    A0
17a20: 0520                      ZEXT   A0,0
17a30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17a50: b507 0040                 MOVE   *A8(40h),A7,0
17a70: 48e0                      CMP    A7,A0
17a80: c49e                      JRLT   17470h
17a90: b7ee 0160                 MOVE   *SP(160h),A14,1
17ab0: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
17ad0: 0962                      RETS   2h

_read_colour_image:
17ae0: 098f a17c                 MMTM   SP,A0,A2,A7,A9-A13
17b00: 4dcd                      MOVE   A14,A13
17b10: 0b0e 0080                 ADDI   80h,A14
17b30: 09e9 3560 0004            MOVI   43560h,A9
17b60: 4d2a                      MOVE   A9,A10
17b70: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17b90: 0548                      SETF   8h,0,0
17ba0: b508 0058                 MOVE   *A8(58h),A8,0
17bc0: cb06                      JRNE   17C30h
17bd0: 09e8 0000 2000            MOVI   20000000h,A8
17c00: b30d 0060                 MOVE   A8,*A13(60h),1
17c20: c005                      JR     17C80h
17c30: 09e8 0000 4000            MOVI   40000000h,A8
17c60: b30d 0060                 MOVE   A8,*A13(60h),1
17c80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17ca0: b508 0098                 MOVE   *A8(98h),A8,0
17cc0: 38c8                      DSJS   A8,17D30h
17cd0: 09c8 4000                 MOVI   4000h,A8
17cf0: 0550                      SETF   10h,0,0
17d00: b10d 0050                 MOVE   A8,*A13(50h),0
17d20: c005                      JR     17D80h
17d30: 09c8 2000                 MOVI   2000h,A8
17d50: 0550                      SETF   10h,0,0
17d60: b10d 0050                 MOVE   A8,*A13(50h),0
17d80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
17da0: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
17dd0: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
17e00: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
17e30: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
17e60: 85a8                      MOVE   *A13,A8,0
17e70: 2468                      SLL    3h,A8
17e80: b10d 0040                 MOVE   A8,*A13(40h),0
17ea0: a3cf                      MOVE   A14,-*SP,1
17eb0: 1908                      MOVK   8h,A8
17ec0: 930e                      MOVE   A8,*A14+,1
17ed0: b5a8 0010                 MOVE   *A13(10h),A8,0
17ef0: 930e                      MOVE   A8,*A14+,1
17f00: 85a8                      MOVE   *A13,A8,0
17f10: 930e                      MOVE   A8,*A14+,1
17f20: b5a8 0050                 MOVE   *A13(50h),A8,0
17f40: 930e                      MOVE   A8,*A14+,1
17f50: d3ae 0060                 MOVE   *A13(60h),*A14+,1
17f70: 0d5f 0000 0000            CALLA  0h
17fa0: a3cf                      MOVE   A14,-*SP,1
17fb0: 1908                      MOVK   8h,A8
17fc0: 930e                      MOVE   A8,*A14+,1
17fd0: 0550                      SETF   10h,0,0
17fe0: b5a8 0010                 MOVE   *A13(10h),A8,0
18000: 930e                      MOVE   A8,*A14+,1
18010: 85a8                      MOVE   *A13,A8,0
18020: 930e                      MOVE   A8,*A14+,1
18030: b5a8 0040                 MOVE   *A13(40h),A8,0
18050: 930e                      MOVE   A8,*A14+,1
18060: 932e                      MOVE   A9,*A14+,1
18070: 0d5f 0000 0000            CALLA  0h
180a0: a3cf                      MOVE   A14,-*SP,1
180b0: 4508                      SUB    A8,A8
180c0: 930e                      MOVE   A8,*A14+,1
180d0: 930e                      MOVE   A8,*A14+,1
180e0: 0550                      SETF   10h,0,0
180f0: b5a8 0030                 MOVE   *A13(30h),A8,0
18110: 930e                      MOVE   A8,*A14+,1
18120: b5a8 0020                 MOVE   *A13(20h),A8,0
18140: 930e                      MOVE   A8,*A14+,1
18150: b5a8 0010                 MOVE   *A13(10h),A8,0
18170: 930e                      MOVE   A8,*A14+,1
18180: 85a8                      MOVE   *A13,A8,0
18190: 930e                      MOVE   A8,*A14+,1
181a0: 0d5f 0000 0000            CALLA  0h
181d0: a3cf                      MOVE   A14,-*SP,1
181e0: 4508                      SUB    A8,A8
181f0: 930e                      MOVE   A8,*A14+,1
18200: 930e                      MOVE   A8,*A14+,1
18210: 930e                      MOVE   A8,*A14+,1
18220: 930e                      MOVE   A8,*A14+,1
18230: 930e                      MOVE   A8,*A14+,1
18240: 0d5f 0000 0000            CALLA  0h
18270: a3cf                      MOVE   A14,-*SP,1
18280: 4508                      SUB    A8,A8
18290: 930e                      MOVE   A8,*A14+,1
182a0: 930e                      MOVE   A8,*A14+,1
182b0: 930e                      MOVE   A8,*A14+,1
182c0: 930e                      MOVE   A8,*A14+,1
182d0: 930e                      MOVE   A8,*A14+,1
182e0: 0d5f 0000 0000            CALLA  0h
18310: 0550                      SETF   10h,0,0
18320: b5a8 0010                 MOVE   *A13(10h),A8,0
18340: 85a2                      MOVE   *A13,A2,0
18350: 4c47                      MOVE   A2,A7
18360: 5f07                      MPYU   A8,A7
18370: 4ce2                      MOVE   A7,A2
18380: 4c47                      MOVE   A2,A7
18390: 1427                      DEC    A7
183a0: 2467                      SLL    3h,A7
183b0: 40e9                      ADD    A7,A9
183c0: 4c47                      MOVE   A2,A7
183d0: 2427                      SLL    1h,A7
183e0: 4047                      ADD    A2,A7
183f0: 1427                      DEC    A7
18400: 2467                      SLL    3h,A7
18410: 40ea                      ADD    A7,A10
18420: 456b                      SUB    A11,A11
18430: 484b                      CMP    A2,A11
18440: c927                      JRNC   186C0h
18450: 0548                      SETF   8h,0,0
18460: 8527                      MOVE   *A9,A7,0
18470: 4ce8                      MOVE   A7,A8
18480: 2487                      SLL    4h,A7
18490: 2468                      SLL    3h,A8
184a0: 4107                      ADD    A8,A7
184b0: 0b27 f440 0003            ADDI   3F440h,A7
184e0: bcea 0010 0000            MOVB   *A7(10h),*A10(0h)
18510: 150a                      SUBK   8h,A10
18520: 8527                      MOVE   *A9,A7,0
18530: 4ce8                      MOVE   A7,A8
18540: 2487                      SLL    4h,A7
18550: 2468                      SLL    3h,A8
18560: 4107                      ADD    A8,A7
18570: 0b27 f440 0003            ADDI   3F440h,A7
185a0: bcea 0008 0000            MOVB   *A7(8h),*A10(0h)
185d0: 150a                      SUBK   8h,A10
185e0: 8527                      MOVE   *A9,A7,0
185f0: 4ce8                      MOVE   A7,A8
18600: 2487                      SLL    4h,A7
18610: 2468                      SLL    3h,A8
18620: 4107                      ADD    A8,A7
18630: 0b27 f440 0003            ADDI   3F440h,A7
18660: 9cea                      MOVB   *A7,*A10
18670: 150a                      SUBK   8h,A10
18680: 1509                      SUBK   8h,A9
18690: 102b                      INC    A11
186a0: 484b                      CMP    A2,A11
186b0: c8da                      JRC    18460h
186c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
186e0: 0548                      SETF   8h,0,0
186f0: b507 0078                 MOVE   *A8(78h),A7,0
18710: 0d87 0032                 DSJ    A7,18A50h
18730: 458c                      SUB    A12,A12
18740: 0550                      SETF   10h,0,0
18750: b5a7 0010                 MOVE   *A13(10h),A7,0
18770: 48ec                      CMP    A7,A12
18780: c92c                      JRNC   18A50h
18790: 09e9 3560 0004            MOVI   43560h,A9
187c0: 4d87                      MOVE   A12,A7
187d0: 2427                      SLL    1h,A7
187e0: 4187                      ADD    A12,A7
187f0: 85a8                      MOVE   *A13,A8,0
18800: 5f07                      MPYU   A8,A7
18810: 2467                      SLL    3h,A7
18820: 40e9                      ADD    A7,A9
18830: 456b                      SUB    A11,A11
18840: 1428                      DEC    A8
18850: 490b                      CMP    A8,A11
18860: c919                      JRNC   18A00h
18870: 4400                      SUB    A0,A0
18880: 0548                      SETF   8h,0,0
18890: 8528                      MOVE   *A9,A8,0
188a0: ca04                      JREQ   188F0h
188b0: bd29 0000 0018            MOVB   *A9(0h),*A9(18h)
188e0: c006                      JR     18950h
188f0: b528 0018                 MOVE   *A9(18h),A8,0
18910: ca03                      JREQ   18950h
18920: bd29 0018 0000            MOVB   *A9(18h),*A9(0h)
18950: 1109                      ADDK   8h,A9
18960: 1020                      INC    A0
18970: 3460                      CMPK   3h,A0
18980: c8f0                      JRC    18890h
18990: 1309                      ADDK   18h,A9
189a0: 104b                      ADDK   2h,A11
189b0: 0550                      SETF   10h,0,0
189c0: 85a8                      MOVE   *A13,A8,0
189d0: 1428                      DEC    A8
189e0: 490b                      CMP    A8,A11
189f0: c8e7                      JRC    18870h
18a00: 102c                      INC    A12
18a10: b5a8 0010                 MOVE   *A13(10h),A8,0
18a30: 490c                      CMP    A8,A12
18a40: c8d4                      JRC    18790h
18a50: b7ee 0120                 MOVE   *SP(120h),A14,1
18a70: 09af 3e85                 MMFM   SP,A0,A2,A7,A9-A13
18a90: 0962                      RETS   2h

_read_colour_overlay:
18aa0: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
18ac0: 4dcd                      MOVE   A14,A13
18ad0: 0b0e 0040                 ADDI   40h,A14
18af0: 0548                      SETF   8h,0,0
18b00: 05aa f370 0003            MOVE   @3F370h,A10,0
18b30: 05ab f380 0003            MOVE   @3F380h,A11,0
18b60: 458c                      SUB    A12,A12
18b70: 09e6 3560 0004            MOVI   43560h,A6
18ba0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18bc0: b508 0058                 MOVE   *A8(58h),A8,0
18be0: ca05                      JREQ   18C40h
18bf0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18c10: b508 0058                 MOVE   *A8(58h),A8,0
18c30: 3828                      DSJS   A8,18C50h
18c40: 182c                      MOVK   1h,A12
18c50: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18c70: b508 0060                 MOVE   *A8(60h),A8,0
18c90: cb06                      JRNE   18D00h
18ca0: 09e8 0000 1000            MOVI   10000000h,A8
18cd0: b30d 0020                 MOVE   A8,*A13(20h),1
18cf0: c005                      JR     18D50h
18d00: 09e8 0000 1040            MOVI   10400000h,A8
18d30: b30d 0020                 MOVE   A8,*A13(20h),1
18d50: 4400                      SUB    A0,A0
18d60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18d80: 0550                      SETF   10h,0,0
18d90: b508 0040                 MOVE   *A8(40h),A8,0
18db0: c666                      JRLE   19420h
18dc0: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
18df0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18e10: b508 0020                 MOVE   *A8(20h),A8,0
18e30: 4008                      ADD    A0,A8
18e40: 2548                      SLL    Ah,A8
18e50: 07a7 f320 0003            MOVE   @3F320h,A7,1
18e80: 5f07                      MPYU   A8,A7
18e90: 87a8                      MOVE   *A13,A8,1
18ea0: 4107                      ADD    A8,A7
18eb0: 82ed                      MOVE   A7,*A13,1
18ec0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18ee0: b508 0010                 MOVE   *A8(10h),A8,0
18f00: 07a7 f320 0003            MOVE   @3F320h,A7,1
18f30: 5f07                      MPYU   A8,A7
18f40: 87a8                      MOVE   *A13,A8,1
18f50: 4107                      ADD    A8,A7
18f60: 82ed                      MOVE   A7,*A13,1
18f70: 4ce4                      MOVE   A7,A4
18f80: 4442                      SUB    A2,A2
18f90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
18fb0: b507 0030                 MOVE   *A8(30h),A7,0
18fd0: c63e                      JRLE   193C0h
18fe0: 0544                      SETF   4h,0,0
18ff0: 8489                      MOVE   *A4,A9,0
19000: 4d67                      MOVE   A11,A7
19010: ca04                      JREQ   19060h
19020: 1084                      ADDK   4h,A4
19030: 8488                      MOVE   *A4,A8,0
19040: 2488                      SLL    4h,A8
19050: 4109                      ADD    A8,A9
19060: 4949                      CMP    A10,A9
19070: cb0a                      JRNE   19120h
19080: 4d87                      MOVE   A12,A7
19090: ca02                      JREQ   190C0h
190a0: 1306                      ADDK   18h,A6
190b0: c025                      JR     19310h
190c0: 4508                      SUB    A8,A8
190d0: 0548                      SETF   8h,0,0
190e0: 9106                      MOVE   A8,*A6+,0
190f0: 9106                      MOVE   A8,*A6+,0
19100: 9106                      MOVE   A8,*A6+,0
19110: c01f                      JR     19310h
19120: 4d28                      MOVE   A9,A8
19130: 4d07                      MOVE   A8,A7
19140: 2488                      SLL    4h,A8
19150: 2467                      SLL    3h,A7
19160: 40e8                      ADD    A7,A8
19170: 0b28 1b40 0004            ADDI   41B40h,A8
191a0: 0548                      SETF   8h,0,0
191b0: d106 0000                 MOVE   *A8(0h),*A6+,0
191d0: 4d28                      MOVE   A9,A8
191e0: 4d07                      MOVE   A8,A7
191f0: 2488                      SLL    4h,A8
19200: 2467                      SLL    3h,A7
19210: 40e8                      ADD    A7,A8
19220: 0b28 1b40 0004            ADDI   41B40h,A8
19250: d106 0008                 MOVE   *A8(8h),*A6+,0
19270: 4d28                      MOVE   A9,A8
19280: 4d07                      MOVE   A8,A7
19290: 2488                      SLL    4h,A8
192a0: 2467                      SLL    3h,A7
192b0: 40e8                      ADD    A7,A8
192c0: 0b28 1b40 0004            ADDI   41B40h,A8
192f0: d106 0010                 MOVE   *A8(10h),*A6+,0
19310: 1084                      ADDK   4h,A4
19320: 1022                      INC    A2
19330: 2602                      SLL    10h,A2
19340: 2e02                      SRL    10h,A2
19350: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19370: 0550                      SETF   10h,0,0
19380: b507 0030                 MOVE   *A8(30h),A7,0
193a0: 48e2                      CMP    A7,A2
193b0: c4c2                      JRLT   18FE0h
193c0: 1020                      INC    A0
193d0: 0520                      ZEXT   A0,0
193e0: b507 0040                 MOVE   *A8(40h),A7,0
19400: 48e0                      CMP    A7,A0
19410: c49a                      JRLT   18DC0h
19420: b7ee 0160                 MOVE   *SP(160h),A14,1
19440: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
19460: 0962                      RETS   2h

_hi_read_colour_overlay:
19470: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
19490: 4dcd                      MOVE   A14,A13
194a0: 0b0e 0040                 ADDI   40h,A14
194c0: 0548                      SETF   8h,0,0
194d0: 05aa f370 0003            MOVE   @3F370h,A10,0
19500: 05ab f380 0003            MOVE   @3F380h,A11,0
19530: 458c                      SUB    A12,A12
19540: 09e6 3560 0004            MOVI   43560h,A6
19570: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19590: b508 0058                 MOVE   *A8(58h),A8,0
195b0: ca05                      JREQ   19610h
195c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
195e0: b508 0058                 MOVE   *A8(58h),A8,0
19600: 3828                      DSJS   A8,19620h
19610: 182c                      MOVK   1h,A12
19620: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19640: b508 0060                 MOVE   *A8(60h),A8,0
19660: cb06                      JRNE   196D0h
19670: 09e8 0000 1000            MOVI   10000000h,A8
196a0: b30d 0020                 MOVE   A8,*A13(20h),1
196c0: c005                      JR     19720h
196d0: 09e8 0000 1040            MOVI   10400000h,A8
19700: b30d 0020                 MOVE   A8,*A13(20h),1
19720: 4400                      SUB    A0,A0
19730: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19750: 0550                      SETF   10h,0,0
19760: b508 0040                 MOVE   *A8(40h),A8,0
19780: c600 0095                 JRLE   1A0F0h
197a0: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
197d0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
197f0: b508 0020                 MOVE   *A8(20h),A8,0
19810: 4008                      ADD    A0,A8
19820: 2be8                      SRA    1h,A8
19830: 2548                      SLL    Ah,A8
19840: 07a7 f320 0003            MOVE   @3F320h,A7,1
19870: 5f07                      MPYU   A8,A7
19880: 87a8                      MOVE   *A13,A8,1
19890: 4107                      ADD    A8,A7
198a0: 82ed                      MOVE   A7,*A13,1
198b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
198d0: b507 0010                 MOVE   *A8(10h),A7,0
198f0: 2be7                      SRA    1h,A7
19900: 07a8 f320 0003            MOVE   @3F320h,A8,1
19930: 5f07                      MPYU   A8,A7
19940: 87a8                      MOVE   *A13,A8,1
19950: 4107                      ADD    A8,A7
19960: 82ed                      MOVE   A7,*A13,1
19970: 4ce4                      MOVE   A7,A4
19980: b7a2 ffe0                 MOVE   *A13(FFE0h),A2,1
199a0: b442 0010                 MOVE   *A2(10h),A2,0
199c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
199e0: b507 0010                 MOVE   *A8(10h),A7,0
19a00: b508 0030                 MOVE   *A8(30h),A8,0
19a20: 4107                      ADD    A8,A7
19a30: 48e2                      CMP    A7,A2
19a40: c561                      JRGE   1A060h
19a50: 0544                      SETF   4h,0,0
19a60: 8489                      MOVE   *A4,A9,0
19a70: 4d67                      MOVE   A11,A7
19a80: ca04                      JREQ   19AD0h
19a90: 1084                      ADDK   4h,A4
19aa0: 8488                      MOVE   *A4,A8,0
19ab0: 2488                      SLL    4h,A8
19ac0: 4109                      ADD    A8,A9
19ad0: 4949                      CMP    A10,A9
19ae0: cb0e                      JRNE   19BD0h
19af0: 4d87                      MOVE   A12,A7
19b00: ca03                      JREQ   19B40h
19b10: 1306                      ADDK   18h,A6
19b20: 1306                      ADDK   18h,A6
19b30: c046                      JR     19FA0h
19b40: 4508                      SUB    A8,A8
19b50: 0548                      SETF   8h,0,0
19b60: 9106                      MOVE   A8,*A6+,0
19b70: 9106                      MOVE   A8,*A6+,0
19b80: 9106                      MOVE   A8,*A6+,0
19b90: 9106                      MOVE   A8,*A6+,0
19ba0: 9106                      MOVE   A8,*A6+,0
19bb0: 9106                      MOVE   A8,*A6+,0
19bc0: c03d                      JR     19FA0h
19bd0: 4d28                      MOVE   A9,A8
19be0: 4d07                      MOVE   A8,A7
19bf0: 2488                      SLL    4h,A8
19c00: 2467                      SLL    3h,A7
19c10: 40e8                      ADD    A7,A8
19c20: 0b28 1b40 0004            ADDI   41B40h,A8
19c50: 0548                      SETF   8h,0,0
19c60: d106 0000                 MOVE   *A8(0h),*A6+,0
19c80: 4d28                      MOVE   A9,A8
19c90: 4d07                      MOVE   A8,A7
19ca0: 2488                      SLL    4h,A8
19cb0: 2467                      SLL    3h,A7
19cc0: 40e8                      ADD    A7,A8
19cd0: 0b28 1b40 0004            ADDI   41B40h,A8
19d00: d106 0008                 MOVE   *A8(8h),*A6+,0
19d20: 4d28                      MOVE   A9,A8
19d30: 4d07                      MOVE   A8,A7
19d40: 2488                      SLL    4h,A8
19d50: 2467                      SLL    3h,A7
19d60: 40e8                      ADD    A7,A8
19d70: 0b28 1b40 0004            ADDI   41B40h,A8
19da0: d106 0010                 MOVE   *A8(10h),*A6+,0
19dc0: 4d28                      MOVE   A9,A8
19dd0: 4d07                      MOVE   A8,A7
19de0: 2488                      SLL    4h,A8
19df0: 2467                      SLL    3h,A7
19e00: 40e8                      ADD    A7,A8
19e10: 0b28 1b40 0004            ADDI   41B40h,A8
19e40: d106 0000                 MOVE   *A8(0h),*A6+,0
19e60: 4d28                      MOVE   A9,A8
19e70: 4d07                      MOVE   A8,A7
19e80: 2488                      SLL    4h,A8
19e90: 2467                      SLL    3h,A7
19ea0: 40e8                      ADD    A7,A8
19eb0: 0b28 1b40 0004            ADDI   41B40h,A8
19ee0: d106 0008                 MOVE   *A8(8h),*A6+,0
19f00: 4d28                      MOVE   A9,A8
19f10: 4d07                      MOVE   A8,A7
19f20: 2488                      SLL    4h,A8
19f30: 2467                      SLL    3h,A7
19f40: 40e8                      ADD    A7,A8
19f50: 0b28 1b40 0004            ADDI   41B40h,A8
19f80: d106 0010                 MOVE   *A8(10h),*A6+,0
19fa0: 1084                      ADDK   4h,A4
19fb0: 1042                      ADDK   2h,A2
19fc0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
19fe0: 0550                      SETF   10h,0,0
19ff0: b507 0010                 MOVE   *A8(10h),A7,0
1a010: b508 0030                 MOVE   *A8(30h),A8,0
1a030: 4107                      ADD    A8,A7
1a040: 48e2                      CMP    A7,A2
1a050: c49f                      JRLT   19A50h
1a060: 1020                      INC    A0
1a070: 0520                      ZEXT   A0,0
1a080: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a0a0: b507 0040                 MOVE   *A8(40h),A7,0
1a0c0: 48e0                      CMP    A7,A0
1a0d0: c400 ff6b                 JRLT   197A0h
1a0f0: b7ee 0160                 MOVE   *SP(160h),A14,1
1a110: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
1a130: 0962                      RETS   2h

_read_colour_pc:
1a140: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
1a160: 4dcd                      MOVE   A14,A13
1a170: 0b0e 0040                 ADDI   40h,A14
1a190: 0548                      SETF   8h,0,0
1a1a0: 05aa f360 0003            MOVE   @3F360h,A10,0
1a1d0: 05ab f380 0003            MOVE   @3F380h,A11,0
1a200: 458c                      SUB    A12,A12
1a210: 09e6 3560 0004            MOVI   43560h,A6
1a240: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a260: b508 0058                 MOVE   *A8(58h),A8,0
1a280: ca05                      JREQ   1A2E0h
1a290: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a2b0: b508 0058                 MOVE   *A8(58h),A8,0
1a2d0: 3828                      DSJS   A8,1A2F0h
1a2e0: 182c                      MOVK   1h,A12
1a2f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a310: b508 0060                 MOVE   *A8(60h),A8,0
1a330: ca05                      JREQ   1A390h
1a340: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a360: b508 0060                 MOVE   *A8(60h),A8,0
1a380: 3828                      DSJS   A8,1A3A0h
1a390: 182c                      MOVK   1h,A12
1a3a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a3c0: b508 0050                 MOVE   *A8(50h),A8,0
1a3e0: cb04                      JRNE   1A430h
1a3f0: 4508                      SUB    A8,A8
1a400: b30d 0020                 MOVE   A8,*A13(20h),1
1a420: c005                      JR     1A480h
1a430: 09e8 0000 0040            MOVI   400000h,A8
1a460: b30d 0020                 MOVE   A8,*A13(20h),1
1a480: 4400                      SUB    A0,A0
1a490: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a4b0: 0550                      SETF   10h,0,0
1a4c0: b508 0040                 MOVE   *A8(40h),A8,0
1a4e0: c666                      JRLE   1AB50h
1a4f0: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
1a520: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a540: b508 0020                 MOVE   *A8(20h),A8,0
1a560: 4008                      ADD    A0,A8
1a570: 2548                      SLL    Ah,A8
1a580: 07a7 f340 0003            MOVE   @3F340h,A7,1
1a5b0: 5f07                      MPYU   A8,A7
1a5c0: 87a8                      MOVE   *A13,A8,1
1a5d0: 4107                      ADD    A8,A7
1a5e0: 82ed                      MOVE   A7,*A13,1
1a5f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a610: b508 0010                 MOVE   *A8(10h),A8,0
1a630: 07a7 f340 0003            MOVE   @3F340h,A7,1
1a660: 5f07                      MPYU   A8,A7
1a670: 87a8                      MOVE   *A13,A8,1
1a680: 4107                      ADD    A8,A7
1a690: 82ed                      MOVE   A7,*A13,1
1a6a0: 4ce4                      MOVE   A7,A4
1a6b0: 4442                      SUB    A2,A2
1a6c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1a6e0: b507 0030                 MOVE   *A8(30h),A7,0
1a700: c63e                      JRLE   1AAF0h
1a710: 0544                      SETF   4h,0,0
1a720: 8489                      MOVE   *A4,A9,0
1a730: 4d67                      MOVE   A11,A7
1a740: ca04                      JREQ   1A790h
1a750: 1084                      ADDK   4h,A4
1a760: 8488                      MOVE   *A4,A8,0
1a770: 2488                      SLL    4h,A8
1a780: 4109                      ADD    A8,A9
1a790: 4949                      CMP    A10,A9
1a7a0: cb0a                      JRNE   1A850h
1a7b0: 4d87                      MOVE   A12,A7
1a7c0: ca02                      JREQ   1A7F0h
1a7d0: 1306                      ADDK   18h,A6
1a7e0: c025                      JR     1AA40h
1a7f0: 4508                      SUB    A8,A8
1a800: 0548                      SETF   8h,0,0
1a810: 9106                      MOVE   A8,*A6+,0
1a820: 9106                      MOVE   A8,*A6+,0
1a830: 9106                      MOVE   A8,*A6+,0
1a840: c01f                      JR     1AA40h
1a850: 4d28                      MOVE   A9,A8
1a860: 4d07                      MOVE   A8,A7
1a870: 2488                      SLL    4h,A8
1a880: 2467                      SLL    3h,A7
1a890: 40e8                      ADD    A7,A8
1a8a0: 0b28 5720 000e            ADDI   E5720h,A8
1a8d0: 0548                      SETF   8h,0,0
1a8e0: d106 0000                 MOVE   *A8(0h),*A6+,0
1a900: 4d28                      MOVE   A9,A8
1a910: 4d07                      MOVE   A8,A7
1a920: 2488                      SLL    4h,A8
1a930: 2467                      SLL    3h,A7
1a940: 40e8                      ADD    A7,A8
1a950: 0b28 5720 000e            ADDI   E5720h,A8
1a980: d106 0008                 MOVE   *A8(8h),*A6+,0
1a9a0: 4d28                      MOVE   A9,A8
1a9b0: 4d07                      MOVE   A8,A7
1a9c0: 2488                      SLL    4h,A8
1a9d0: 2467                      SLL    3h,A7
1a9e0: 40e8                      ADD    A7,A8
1a9f0: 0b28 5720 000e            ADDI   E5720h,A8
1aa20: d106 0010                 MOVE   *A8(10h),*A6+,0
1aa40: 1084                      ADDK   4h,A4
1aa50: 1022                      INC    A2
1aa60: 2602                      SLL    10h,A2
1aa70: 2e02                      SRL    10h,A2
1aa80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1aaa0: 0550                      SETF   10h,0,0
1aab0: b507 0030                 MOVE   *A8(30h),A7,0
1aad0: 48e2                      CMP    A7,A2
1aae0: c4c2                      JRLT   1A710h
1aaf0: 1020                      INC    A0
1ab00: 0520                      ZEXT   A0,0
1ab10: b507 0040                 MOVE   *A8(40h),A7,0
1ab30: 48e0                      CMP    A7,A0
1ab40: c49a                      JRLT   1A4F0h
1ab50: b7ee 0160                 MOVE   *SP(160h),A14,1
1ab70: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
1ab90: 0962                      RETS   2h

_hi_read_colour_pc:
1aba0: 098f ab7c                 MMTM   SP,A0,A2,A4,A6,A7,A9-A13
1abc0: 4dcd                      MOVE   A14,A13
1abd0: 0b0e 0040                 ADDI   40h,A14
1abf0: 0548                      SETF   8h,0,0
1ac00: 05aa f360 0003            MOVE   @3F360h,A10,0
1ac30: 05ab f380 0003            MOVE   @3F380h,A11,0
1ac60: 458c                      SUB    A12,A12
1ac70: 09e6 3560 0004            MOVI   43560h,A6
1aca0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1acc0: b508 0058                 MOVE   *A8(58h),A8,0
1ace0: ca05                      JREQ   1AD40h
1acf0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1ad10: b508 0058                 MOVE   *A8(58h),A8,0
1ad30: 3828                      DSJS   A8,1AD50h
1ad40: 182c                      MOVK   1h,A12
1ad50: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1ad70: b508 0060                 MOVE   *A8(60h),A8,0
1ad90: ca05                      JREQ   1ADF0h
1ada0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1adc0: b508 0060                 MOVE   *A8(60h),A8,0
1ade0: 3828                      DSJS   A8,1AE00h
1adf0: 182c                      MOVK   1h,A12
1ae00: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1ae20: b508 0050                 MOVE   *A8(50h),A8,0
1ae40: cb04                      JRNE   1AE90h
1ae50: 4508                      SUB    A8,A8
1ae60: b30d 0020                 MOVE   A8,*A13(20h),1
1ae80: c005                      JR     1AEE0h
1ae90: 09e8 0000 0040            MOVI   400000h,A8
1aec0: b30d 0020                 MOVE   A8,*A13(20h),1
1aee0: 4400                      SUB    A0,A0
1aef0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1af10: 0550                      SETF   10h,0,0
1af20: b508 0040                 MOVE   *A8(40h),A8,0
1af40: c600 0095                 JRLE   1B8B0h
1af60: bbad 0020 0000            MOVE   *A13(20h),*A13(0h),1
1af90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1afb0: b508 0020                 MOVE   *A8(20h),A8,0
1afd0: 4008                      ADD    A0,A8
1afe0: 2be8                      SRA    1h,A8
1aff0: 2548                      SLL    Ah,A8
1b000: 07a7 f340 0003            MOVE   @3F340h,A7,1
1b030: 5f07                      MPYU   A8,A7
1b040: 87a8                      MOVE   *A13,A8,1
1b050: 4107                      ADD    A8,A7
1b060: 82ed                      MOVE   A7,*A13,1
1b070: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1b090: b507 0010                 MOVE   *A8(10h),A7,0
1b0b0: 2be7                      SRA    1h,A7
1b0c0: 07a8 f340 0003            MOVE   @3F340h,A8,1
1b0f0: 5f07                      MPYU   A8,A7
1b100: 87a8                      MOVE   *A13,A8,1
1b110: 4107                      ADD    A8,A7
1b120: 82ed                      MOVE   A7,*A13,1
1b130: 4ce4                      MOVE   A7,A4
1b140: b7a2 ffe0                 MOVE   *A13(FFE0h),A2,1
1b160: b442 0010                 MOVE   *A2(10h),A2,0
1b180: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1b1a0: b507 0010                 MOVE   *A8(10h),A7,0
1b1c0: b508 0030                 MOVE   *A8(30h),A8,0
1b1e0: 4107                      ADD    A8,A7
1b1f0: 48e2                      CMP    A7,A2
1b200: c561                      JRGE   1B820h
1b210: 0544                      SETF   4h,0,0
1b220: 8489                      MOVE   *A4,A9,0
1b230: 4d67                      MOVE   A11,A7
1b240: ca04                      JREQ   1B290h
1b250: 1084                      ADDK   4h,A4
1b260: 8488                      MOVE   *A4,A8,0
1b270: 2488                      SLL    4h,A8
1b280: 4109                      ADD    A8,A9
1b290: 4949                      CMP    A10,A9
1b2a0: cb0e                      JRNE   1B390h
1b2b0: 4d87                      MOVE   A12,A7
1b2c0: ca03                      JREQ   1B300h
1b2d0: 1306                      ADDK   18h,A6
1b2e0: 1306                      ADDK   18h,A6
1b2f0: c046                      JR     1B760h
1b300: 4508                      SUB    A8,A8
1b310: 0548                      SETF   8h,0,0
1b320: 9106                      MOVE   A8,*A6+,0
1b330: 9106                      MOVE   A8,*A6+,0
1b340: 9106                      MOVE   A8,*A6+,0
1b350: 9106                      MOVE   A8,*A6+,0
1b360: 9106                      MOVE   A8,*A6+,0
1b370: 9106                      MOVE   A8,*A6+,0
1b380: c03d                      JR     1B760h
1b390: 4d28                      MOVE   A9,A8
1b3a0: 4d07                      MOVE   A8,A7
1b3b0: 2488                      SLL    4h,A8
1b3c0: 2467                      SLL    3h,A7
1b3d0: 40e8                      ADD    A7,A8
1b3e0: 0b28 5720 000e            ADDI   E5720h,A8
1b410: 0548                      SETF   8h,0,0
1b420: d106 0000                 MOVE   *A8(0h),*A6+,0
1b440: 4d28                      MOVE   A9,A8
1b450: 4d07                      MOVE   A8,A7
1b460: 2488                      SLL    4h,A8
1b470: 2467                      SLL    3h,A7
1b480: 40e8                      ADD    A7,A8
1b490: 0b28 5720 000e            ADDI   E5720h,A8
1b4c0: d106 0008                 MOVE   *A8(8h),*A6+,0
1b4e0: 4d28                      MOVE   A9,A8
1b4f0: 4d07                      MOVE   A8,A7
1b500: 2488                      SLL    4h,A8
1b510: 2467                      SLL    3h,A7
1b520: 40e8                      ADD    A7,A8
1b530: 0b28 5720 000e            ADDI   E5720h,A8
1b560: d106 0010                 MOVE   *A8(10h),*A6+,0
1b580: 4d28                      MOVE   A9,A8
1b590: 4d07                      MOVE   A8,A7
1b5a0: 2488                      SLL    4h,A8
1b5b0: 2467                      SLL    3h,A7
1b5c0: 40e8                      ADD    A7,A8
1b5d0: 0b28 5720 000e            ADDI   E5720h,A8
1b600: d106 0000                 MOVE   *A8(0h),*A6+,0
1b620: 4d28                      MOVE   A9,A8
1b630: 4d07                      MOVE   A8,A7
1b640: 2488                      SLL    4h,A8
1b650: 2467                      SLL    3h,A7
1b660: 40e8                      ADD    A7,A8
1b670: 0b28 5720 000e            ADDI   E5720h,A8
1b6a0: d106 0008                 MOVE   *A8(8h),*A6+,0
1b6c0: 4d28                      MOVE   A9,A8
1b6d0: 4d07                      MOVE   A8,A7
1b6e0: 2488                      SLL    4h,A8
1b6f0: 2467                      SLL    3h,A7
1b700: 40e8                      ADD    A7,A8
1b710: 0b28 5720 000e            ADDI   E5720h,A8
1b740: d106 0010                 MOVE   *A8(10h),*A6+,0
1b760: 1084                      ADDK   4h,A4
1b770: 1042                      ADDK   2h,A2
1b780: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1b7a0: 0550                      SETF   10h,0,0
1b7b0: b507 0010                 MOVE   *A8(10h),A7,0
1b7d0: b508 0030                 MOVE   *A8(30h),A8,0
1b7f0: 4107                      ADD    A8,A7
1b800: 48e2                      CMP    A7,A2
1b810: c49f                      JRLT   1B210h
1b820: 1020                      INC    A0
1b830: 0520                      ZEXT   A0,0
1b840: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1b860: b507 0040                 MOVE   *A8(40h),A7,0
1b880: 48e0                      CMP    A7,A0
1b890: c400 ff6b                 JRLT   1AF60h
1b8b0: b7ee 0160                 MOVE   *SP(160h),A14,1
1b8d0: 09af 3ed5                 MMFM   SP,A0,A2,A4,A6,A7,A9-A13
1b8f0: 0962                      RETS   2h

_write_binary_image:
1b900: 098f 837c                 MMTM   SP,A0,A6,A7,A9-A13
1b920: 4dcd                      MOVE   A14,A13
1b930: 0b0e 00a0                 ADDI   A0h,A14
1b950: 09c9 0080                 MOVI   80h,A9
1b970: 09ea 3560 0004            MOVI   43560h,A10
1b9a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1b9c0: 0548                      SETF   8h,0,0
1b9d0: b508 0058                 MOVE   *A8(58h),A8,0
1b9f0: cb05                      JRNE   1BA50h
1ba00: 09e8 0000 2000            MOVI   20000000h,A8
1ba30: 830d                      MOVE   A8,*A13,1
1ba40: c004                      JR     1BA90h
1ba50: 09e8 0000 4000            MOVI   40000000h,A8
1ba80: 830d                      MOVE   A8,*A13,1
1ba90: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1bab0: 0550                      SETF   10h,0,0
1bac0: b90d 0030 0090            MOVE   *A8(30h),*A13(90h),0
1baf0: b90d 0040 0080            MOVE   *A8(40h),*A13(80h),0
1bb20: b90d 0010 0060            MOVE   *A8(10h),*A13(60h),0
1bb50: b90d 0020 0070            MOVE   *A8(20h),*A13(70h),0
1bb80: 0548                      SETF   8h,0,0
1bb90: b508 0098                 MOVE   *A8(98h),A8,0
1bbb0: 38a8                      DSJS   A8,1BC10h
1bbc0: 09c8 4000                 MOVI   4000h,A8
1bbe0: b30d 0040                 MOVE   A8,*A13(40h),1
1bc00: c004                      JR     1BC50h
1bc10: 09c8 2000                 MOVI   2000h,A8
1bc30: b30d 0040                 MOVE   A8,*A13(40h),1
1bc50: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1bc70: b508 0098                 MOVE   *A8(98h),A8,0
1bc90: 3a28                      DSJS   A8,1BDB0h
1bca0: 0550                      SETF   10h,0,0
1bcb0: b5a8 0060                 MOVE   *A13(60h),A8,0
1bcd0: b5a6 0090                 MOVE   *A13(90h),A6,0
1bcf0: 40c8                      ADD    A6,A8
1bd00: 0b48 f7ff                 CMPI   800h,A8
1bd20: c618                      JRLE   1BEB0h
1bd30: b5a8 0060                 MOVE   *A13(60h),A8,0
1bd50: 03a8                      NEG    A8
1bd60: 0b08 0800                 ADDI   800h,A8
1bd80: b10d 0090                 MOVE   A8,*A13(90h),0
1bda0: c010                      JR     1BEB0h
1bdb0: 0550                      SETF   10h,0,0
1bdc0: b5a6 0060                 MOVE   *A13(60h),A6,0
1bde0: b5a8 0090                 MOVE   *A13(90h),A8,0
1be00: 4106                      ADD    A8,A6
1be10: 0b46 fbff                 CMPI   400h,A6
1be30: c607                      JRLE   1BEB0h
1be40: b5a6 0060                 MOVE   *A13(60h),A6,0
1be60: 03a6                      NEG    A6
1be70: 0b06 0400                 ADDI   400h,A6
1be90: b0cd 0090                 MOVE   A6,*A13(90h),0
1beb0: 458c                      SUB    A12,A12
1bec0: b5a6 0080                 MOVE   *A13(80h),A6,0
1bee0: c669                      JRLE   1C580h
1bef0: bbad 0000 0020            MOVE   *A13(0h),*A13(20h),1
1bf20: b5a6 0070                 MOVE   *A13(70h),A6,0
1bf40: 4186                      ADD    A12,A6
1bf50: b7a7 0040                 MOVE   *A13(40h),A7,1
1bf70: 5ec7                      MPYU   A6,A7
1bf80: b7a6 0020                 MOVE   *A13(20h),A6,1
1bfa0: 40c7                      ADD    A6,A7
1bfb0: b2ed 0020                 MOVE   A7,*A13(20h),1
1bfd0: b5a6 0060                 MOVE   *A13(60h),A6,0
1bff0: 2466                      SLL    3h,A6
1c000: 40e6                      ADD    A7,A6
1c010: b2cd 0020                 MOVE   A6,*A13(20h),1
1c030: 4ccb                      MOVE   A6,A11
1c040: 4400                      SUB    A0,A0
1c050: b5a8 0090                 MOVE   *A13(90h),A8,0
1c070: c644                      JRLE   1C4C0h
1c080: c02b                      JR     1C340h
1c090: 8546                      MOVE   *A10,A6,0
1c0a0: 5126                      AND    A9,A6
1c0b0: ca06                      JREQ   1C120h
1c0c0: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1c0e0: bccb 0090 0000            MOVB   *A6(90h),*A11(0h)
1c110: c02c                      JR     1C3E0h
1c120: 44c6                      SUB    A6,A6
1c130: 8ccb                      MOVB   A6,*A11
1c140: c029                      JR     1C3E0h
1c150: 8546                      MOVE   *A10,A6,0
1c160: 5126                      AND    A9,A6
1c170: ca26                      JREQ   1C3E0h
1c180: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1c1a0: b4c8 0090                 MOVE   *A6(90h),A8,0
1c1c0: 8567                      MOVE   *A11,A7,0
1c1d0: 5507                      OR     A8,A7
1c1e0: 8ceb                      MOVB   A7,*A11
1c1f0: c01e                      JR     1C3E0h
1c200: 8546                      MOVE   *A10,A6,0
1c210: 5126                      AND    A9,A6
1c220: ca1b                      JREQ   1C3E0h
1c230: 8566                      MOVE   *A11,A6,0
1c240: 1fe6                      BTST   0h,A6
1c250: ca06                      JREQ   1C2C0h
1c260: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1c280: bccb 0090 0000            MOVB   *A6(90h),*A11(0h)
1c2b0: c012                      JR     1C3E0h
1c2c0: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1c2e0: b4c8 0090                 MOVE   *A6(90h),A8,0
1c300: 8567                      MOVE   *A11,A7,0
1c310: 5507                      OR     A8,A7
1c320: 8ceb                      MOVB   A7,*A11
1c330: c00a                      JR     1C3E0h
1c340: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1c360: 0548                      SETF   8h,0,0
1c370: b4c8 0088                 MOVE   *A6(88h),A8,0
1c390: cae6                      JREQ   1C200h
1c3a0: 1428                      DEC    A8
1c3b0: cacd                      JREQ   1C090h
1c3c0: 1428                      DEC    A8
1c3d0: cad7                      JREQ   1C150h
1c3e0: 110b                      ADDK   8h,A11
1c3f0: 2fe9                      SRL    1h,A9
1c400: cb03                      JRNE   1C440h
1c410: 110a                      ADDK   8h,A10
1c420: 09c9 0080                 MOVI   80h,A9
1c440: 1020                      INC    A0
1c450: 2600                      SLL    10h,A0
1c460: 2e00                      SRL    10h,A0
1c470: 0550                      SETF   10h,0,0
1c480: b5a6 0090                 MOVE   *A13(90h),A6,0
1c4a0: 48c0                      CMP    A6,A0
1c4b0: c4e8                      JRLT   1C340h
1c4c0: 0b49 ff7f                 CMPI   80h,A9
1c4e0: ca03                      JREQ   1C520h
1c4f0: 110a                      ADDK   8h,A10
1c500: 09c9 0080                 MOVI   80h,A9
1c520: 102c                      INC    A12
1c530: 052c                      ZEXT   A12,0
1c540: b5a6 0080                 MOVE   *A13(80h),A6,0
1c560: 48cc                      CMP    A6,A12
1c570: c497                      JRLT   1BEF0h
1c580: b7ee 0120                 MOVE   *SP(120h),A14,1
1c5a0: 09af 3ec1                 MMFM   SP,A0,A6,A7,A9-A13
1c5c0: 0962                      RETS   2h

_write_grey_image:
1c5d0: 098f 000c                 MMTM   SP,A12,A13
1c5f0: 4dcd                      MOVE   A14,A13
1c600: 0b0e 0080                 ADDI   80h,A14
1c620: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1c640: 0548                      SETF   8h,0,0
1c650: b508 0058                 MOVE   *A8(58h),A8,0
1c670: cb06                      JRNE   1C6E0h
1c680: 09e8 0000 2000            MOVI   20000000h,A8
1c6b0: b30d 0060                 MOVE   A8,*A13(60h),1
1c6d0: c005                      JR     1C730h
1c6e0: 09e8 0000 4000            MOVI   40000000h,A8
1c710: b30d 0060                 MOVE   A8,*A13(60h),1
1c730: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1c750: b508 0098                 MOVE   *A8(98h),A8,0
1c770: 38c8                      DSJS   A8,1C7E0h
1c780: 09c8 4000                 MOVI   4000h,A8
1c7a0: 0550                      SETF   10h,0,0
1c7b0: b10d 0040                 MOVE   A8,*A13(40h),0
1c7d0: c005                      JR     1C830h
1c7e0: 09c8 2000                 MOVI   2000h,A8
1c800: 0550                      SETF   10h,0,0
1c810: b10d 0040                 MOVE   A8,*A13(40h),0
1c830: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1c850: b508 0030                 MOVE   *A8(30h),A8,0
1c870: 2468                      SLL    3h,A8
1c880: b10d 0050                 MOVE   A8,*A13(50h),0
1c8a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1c8c0: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
1c8f0: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
1c920: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
1c950: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
1c980: 0548                      SETF   8h,0,0
1c990: b508 0098                 MOVE   *A8(98h),A8,0
1c9b0: 39e8                      DSJS   A8,1CAB0h
1c9c0: 0550                      SETF   10h,0,0
1c9d0: b5a8 0020                 MOVE   *A13(20h),A8,0
1c9f0: 85ac                      MOVE   *A13,A12,0
1ca00: 4188                      ADD    A12,A8
1ca10: 0b48 f7ff                 CMPI   800h,A8
1ca30: c615                      JRLE   1CB90h
1ca40: b5a8 0020                 MOVE   *A13(20h),A8,0
1ca60: 03a8                      NEG    A8
1ca70: 0b08 0800                 ADDI   800h,A8
1ca90: 810d                      MOVE   A8,*A13,0
1caa0: c00e                      JR     1CB90h
1cab0: 0550                      SETF   10h,0,0
1cac0: b5ac 0020                 MOVE   *A13(20h),A12,0
1cae0: 85a8                      MOVE   *A13,A8,0
1caf0: 410c                      ADD    A8,A12
1cb00: 0b4c fbff                 CMPI   400h,A12
1cb20: c606                      JRLE   1CB90h
1cb30: b5ac 0020                 MOVE   *A13(20h),A12,0
1cb50: 03ac                      NEG    A12
1cb60: 0b0c 0400                 ADDI   400h,A12
1cb80: 818d                      MOVE   A12,*A13,0
1cb90: a3cf                      MOVE   A14,-*SP,1
1cba0: 190c                      MOVK   8h,A12
1cbb0: 938e                      MOVE   A12,*A14+,1
1cbc0: b5a8 0010                 MOVE   *A13(10h),A8,0
1cbe0: 930e                      MOVE   A8,*A14+,1
1cbf0: 85ac                      MOVE   *A13,A12,0
1cc00: 938e                      MOVE   A12,*A14+,1
1cc10: b5a8 0050                 MOVE   *A13(50h),A8,0
1cc30: 930e                      MOVE   A8,*A14+,1
1cc40: 09e8 3560 0004            MOVI   43560h,A8
1cc70: 930e                      MOVE   A8,*A14+,1
1cc80: 0d5f 0000 0000            CALLA  0h
1ccb0: a3cf                      MOVE   A14,-*SP,1
1ccc0: 1908                      MOVK   8h,A8
1ccd0: 930e                      MOVE   A8,*A14+,1
1cce0: 0550                      SETF   10h,0,0
1ccf0: b5a8 0010                 MOVE   *A13(10h),A8,0
1cd10: 930e                      MOVE   A8,*A14+,1
1cd20: 938e                      MOVE   A12,*A14+,1
1cd30: b5a8 0040                 MOVE   *A13(40h),A8,0
1cd50: 930e                      MOVE   A8,*A14+,1
1cd60: d3ae 0060                 MOVE   *A13(60h),*A14+,1
1cd80: 0d5f 0000 0000            CALLA  0h
1cdb0: a3cf                      MOVE   A14,-*SP,1
1cdc0: 0550                      SETF   10h,0,0
1cdd0: b5a8 0030                 MOVE   *A13(30h),A8,0
1cdf0: 930e                      MOVE   A8,*A14+,1
1ce00: b5a8 0020                 MOVE   *A13(20h),A8,0
1ce20: 930e                      MOVE   A8,*A14+,1
1ce30: 4508                      SUB    A8,A8
1ce40: 930e                      MOVE   A8,*A14+,1
1ce50: 930e                      MOVE   A8,*A14+,1
1ce60: b5a8 0010                 MOVE   *A13(10h),A8,0
1ce80: 930e                      MOVE   A8,*A14+,1
1ce90: 938e                      MOVE   A12,*A14+,1
1cea0: 0d5f 0000 0000            CALLA  0h
1ced0: a3cf                      MOVE   A14,-*SP,1
1cee0: 4508                      SUB    A8,A8
1cef0: 930e                      MOVE   A8,*A14+,1
1cf00: 930e                      MOVE   A8,*A14+,1
1cf10: 930e                      MOVE   A8,*A14+,1
1cf20: 930e                      MOVE   A8,*A14+,1
1cf30: 930e                      MOVE   A8,*A14+,1
1cf40: 0d5f 0000 0000            CALLA  0h
1cf70: a3cf                      MOVE   A14,-*SP,1
1cf80: 4508                      SUB    A8,A8
1cf90: 930e                      MOVE   A8,*A14+,1
1cfa0: 930e                      MOVE   A8,*A14+,1
1cfb0: 930e                      MOVE   A8,*A14+,1
1cfc0: 930e                      MOVE   A8,*A14+,1
1cfd0: 930e                      MOVE   A8,*A14+,1
1cfe0: 0d5f 0000 0000            CALLA  0h
1d010: b7ee 0060                 MOVE   *SP(60h),A14,1
1d030: 09af 3000                 MMFM   SP,A12,A13
1d050: 0962                      RETS   2h

_read_grey_reduced:
1d060: 098f aa7c                 MMTM   SP,A0,A2,A4,A6,A9-A13
1d080: 4dcd                      MOVE   A14,A13
1d090: 0b0e 00a0                 ADDI   A0h,A14
1d0b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1d0d0: 0550                      SETF   10h,0,0
1d0e0: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
1d110: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
1d140: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
1d170: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
1d1a0: 0570                      SETF   10h,1,0
1d1b0: 05a8 dec0 0003            MOVE   @3DEC0h,A8,0
1d1e0: b10d 0040                 MOVE   A8,*A13(40h),0
1d200: 05a8 ded0 0003            MOVE   @3DED0h,A8,0
1d230: b10d 0050                 MOVE   A8,*A13(50h),0
1d250: 09e0 3560 0004            MOVI   43560h,A0
1d280: 0550                      SETF   10h,0,0
1d290: b5a8 0030                 MOVE   *A13(30h),A8,0
1d2b0: b5a6 0010                 MOVE   *A13(10h),A6,0
1d2d0: 40c8                      ADD    A6,A8
1d2e0: b5a6 0050                 MOVE   *A13(50h),A6,0
1d300: 48c8                      CMP    A6,A8
1d310: c614                      JRLE   1D460h
1d320: b5a8 0030                 MOVE   *A13(30h),A8,0
1d340: 0be8 fe7f                 SUBI   180h,A8
1d360: 48c8                      CMP    A6,A8
1d370: c50e                      JRGE   1D460h
1d380: b5a8 0020                 MOVE   *A13(20h),A8,0
1d3a0: 85a6                      MOVE   *A13,A6,0
1d3b0: 40c8                      ADD    A6,A8
1d3c0: b5a6 0040                 MOVE   *A13(40h),A6,0
1d3e0: 48c8                      CMP    A6,A8
1d3f0: c606                      JRLE   1D460h
1d400: b5a8 0020                 MOVE   *A13(20h),A8,0
1d420: 0be8 fdff                 SUBI   200h,A8
1d440: 48c8                      CMP    A6,A8
1d450: c419                      JRLT   1D5F0h
1d460: b5a6 0010                 MOVE   *A13(10h),A6,0
1d480: 85ab                      MOVE   *A13,A11,0
1d490: 5ccb                      MPYS   A6,A11
1d4a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1d4c0: 0548                      SETF   8h,0,0
1d4d0: b508 0050                 MOVE   *A8(50h),A8,0
1d4f0: 1468                      SUBK   3h,A8
1d500: cb00 008e                 JRNE   1DE00h
1d520: 458c                      SUB    A12,A12
1d530: 4d68                      MOVE   A11,A8
1d540: c600 008a                 JRLE   1DE00h
1d560: 44c6                      SUB    A6,A6
1d570: 90c0                      MOVE   A6,*A0+,0
1d580: 102c                      INC    A12
1d590: 260c                      SLL    10h,A12
1d5a0: 2e0c                      SRL    10h,A12
1d5b0: 496c                      CMP    A11,A12
1d5c0: c4f9                      JRLT   1D560h
1d5d0: c000 0081                 JR     1DE00h
1d5f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1d610: 0548                      SETF   8h,0,0
1d620: b508 0058                 MOVE   *A8(58h),A8,0
1d640: cb06                      JRNE   1D6B0h
1d650: 09e8 0000 2000            MOVI   20000000h,A8
1d680: b30d 0060                 MOVE   A8,*A13(60h),1
1d6a0: c005                      JR     1D700h
1d6b0: 09e8 0000 4000            MOVI   40000000h,A8
1d6e0: b30d 0060                 MOVE   A8,*A13(60h),1
1d700: 0550                      SETF   10h,0,0
1d710: b5a9 0030                 MOVE   *A13(30h),A9,0
1d730: b5a8 0010                 MOVE   *A13(10h),A8,0
1d750: 4128                      ADD    A9,A8
1d760: 4909                      CMP    A8,A9
1d770: c568                      JRGE   1DE00h
1d780: b5a6 0050                 MOVE   *A13(50h),A6,0
1d7a0: 48c9                      CMP    A6,A9
1d7b0: c441                      JRLT   1DBD0h
1d7c0: 0b06 0180                 ADDI   180h,A6
1d7e0: 48c9                      CMP    A6,A9
1d7f0: c53d                      JRGE   1DBD0h
1d800: 4484                      SUB    A4,A4
1d810: b5aa 0020                 MOVE   *A13(20h),A10,0
1d830: 85a6                      MOVE   *A13,A6,0
1d840: 4146                      ADD    A10,A6
1d850: 48ca                      CMP    A6,A10
1d860: c550                      JRGE   1DD70h
1d870: b5a6 0040                 MOVE   *A13(40h),A6,0
1d890: 48ca                      CMP    A6,A10
1d8a0: c423                      JRLT   1DAE0h
1d8b0: 0b06 0200                 ADDI   200h,A6
1d8d0: 48ca                      CMP    A6,A10
1d8e0: c51f                      JRGE   1DAE0h
1d8f0: 4c86                      MOVE   A4,A6
1d900: cb19                      JRNE   1DAA0h
1d910: bbad 0060 0080            MOVE   *A13(60h),*A13(80h),1
1d940: b5a6 0050                 MOVE   *A13(50h),A6,0
1d960: 4d28                      MOVE   A9,A8
1d970: 44c8                      SUB    A6,A8
1d980: 25c8                      SLL    Eh,A8
1d990: b7a6 0080                 MOVE   *A13(80h),A6,1
1d9b0: 40c8                      ADD    A6,A8
1d9c0: b30d 0080                 MOVE   A8,*A13(80h),1
1d9e0: b5a6 0040                 MOVE   *A13(40h),A6,0
1da00: 4d48                      MOVE   A10,A8
1da10: 44c8                      SUB    A6,A8
1da20: 2488                      SLL    4h,A8
1da30: b7a6 0080                 MOVE   *A13(80h),A6,1
1da50: 40c8                      ADD    A6,A8
1da60: b30d 0080                 MOVE   A8,*A13(80h),1
1da80: 4d02                      MOVE   A8,A2
1da90: 1824                      MOVK   1h,A4
1daa0: 9c40                      MOVB   *A2,*A0
1dab0: 1100                      ADDK   8h,A0
1dac0: 1202                      ADDK   10h,A2
1dad0: c004                      JR     1DB20h
1dae0: 44c6                      SUB    A6,A6
1daf0: 0548                      SETF   8h,0,0
1db00: 90c0                      MOVE   A6,*A0+,0
1db10: 4cc4                      MOVE   A6,A4
1db20: 102a                      INC    A10
1db30: 260a                      SLL    10h,A10
1db40: 2e0a                      SRL    10h,A10
1db50: 0550                      SETF   10h,0,0
1db60: b5a6 0020                 MOVE   *A13(20h),A6,0
1db80: 85a8                      MOVE   *A13,A8,0
1db90: 4106                      ADD    A8,A6
1dba0: 48ca                      CMP    A6,A10
1dbb0: c4cb                      JRLT   1D870h
1dbc0: c01a                      JR     1DD70h
1dbd0: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1dbf0: 0548                      SETF   8h,0,0
1dc00: b4c8 0050                 MOVE   *A6(50h),A8,0
1dc20: 1468                      SUBK   3h,A8
1dc30: cb0f                      JRNE   1DD30h
1dc40: 454a                      SUB    A10,A10
1dc50: 0550                      SETF   10h,0,0
1dc60: 85a8                      MOVE   *A13,A8,0
1dc70: c60f                      JRLE   1DD70h
1dc80: 44c6                      SUB    A6,A6
1dc90: 0548                      SETF   8h,0,0
1dca0: 90c0                      MOVE   A6,*A0+,0
1dcb0: 102a                      INC    A10
1dcc0: 260a                      SLL    10h,A10
1dcd0: 2e0a                      SRL    10h,A10
1dce0: 0550                      SETF   10h,0,0
1dcf0: 85a8                      MOVE   *A13,A8,0
1dd00: 490a                      CMP    A8,A10
1dd10: c4f6                      JRLT   1DC80h
1dd20: c004                      JR     1DD70h
1dd30: 0550                      SETF   10h,0,0
1dd40: 85a8                      MOVE   *A13,A8,0
1dd50: 2468                      SLL    3h,A8
1dd60: 4100                      ADD    A8,A0
1dd70: 1029                      INC    A9
1dd80: 0529                      ZEXT   A9,0
1dd90: b5a6 0030                 MOVE   *A13(30h),A6,0
1ddb0: b5a8 0010                 MOVE   *A13(10h),A8,0
1ddd0: 4106                      ADD    A8,A6
1dde0: 48c9                      CMP    A6,A9
1ddf0: c498                      JRLT   1D780h
1de00: b7ee 0140                 MOVE   *SP(140h),A14,1
1de20: 09af 3e55                 MMFM   SP,A0,A2,A4,A6,A9-A13
1de40: 0962                      RETS   2h

_hi_read_grey_reduced:
1de50: 098f aa7c                 MMTM   SP,A0,A2,A4,A6,A9-A13
1de70: 4dcd                      MOVE   A14,A13
1de80: 0b0e 00a0                 ADDI   A0h,A14
1dea0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1dec0: 0550                      SETF   10h,0,0
1ded0: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
1df00: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
1df30: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
1df60: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
1df90: 0570                      SETF   10h,1,0
1dfa0: 05a8 dec0 0003            MOVE   @3DEC0h,A8,0
1dfd0: b10d 0040                 MOVE   A8,*A13(40h),0
1dff0: 05a8 ded0 0003            MOVE   @3DED0h,A8,0
1e020: b10d 0050                 MOVE   A8,*A13(50h),0
1e040: 09e0 3560 0004            MOVI   43560h,A0
1e070: 0550                      SETF   10h,0,0
1e080: b5a8 0040                 MOVE   *A13(40h),A8,0
1e0a0: 4108                      ADD    A8,A8
1e0b0: b10d 0040                 MOVE   A8,*A13(40h),0
1e0d0: b5a8 0050                 MOVE   *A13(50h),A8,0
1e0f0: 4108                      ADD    A8,A8
1e100: b10d 0050                 MOVE   A8,*A13(50h),0
1e120: b5a8 0030                 MOVE   *A13(30h),A8,0
1e140: b5a6 0010                 MOVE   *A13(10h),A6,0
1e160: 40c8                      ADD    A6,A8
1e170: b5a6 0050                 MOVE   *A13(50h),A6,0
1e190: 48c8                      CMP    A6,A8
1e1a0: c614                      JRLE   1E2F0h
1e1b0: b5a8 0030                 MOVE   *A13(30h),A8,0
1e1d0: 0be8 fcff                 SUBI   300h,A8
1e1f0: 48c8                      CMP    A6,A8
1e200: c50e                      JRGE   1E2F0h
1e210: b5a8 0020                 MOVE   *A13(20h),A8,0
1e230: 85a6                      MOVE   *A13,A6,0
1e240: 40c8                      ADD    A6,A8
1e250: b5a6 0040                 MOVE   *A13(40h),A6,0
1e270: 48c8                      CMP    A6,A8
1e280: c606                      JRLE   1E2F0h
1e290: b5a8 0020                 MOVE   *A13(20h),A8,0
1e2b0: 0be8 fbff                 SUBI   400h,A8
1e2d0: 48c8                      CMP    A6,A8
1e2e0: c419                      JRLT   1E480h
1e2f0: b5a6 0010                 MOVE   *A13(10h),A6,0
1e310: 85ab                      MOVE   *A13,A11,0
1e320: 5ccb                      MPYS   A6,A11
1e330: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1e350: 0548                      SETF   8h,0,0
1e360: b508 0050                 MOVE   *A8(50h),A8,0
1e380: 1468                      SUBK   3h,A8
1e390: cb00 008e                 JRNE   1EC90h
1e3b0: 458c                      SUB    A12,A12
1e3c0: 4d68                      MOVE   A11,A8
1e3d0: c600 008a                 JRLE   1EC90h
1e3f0: 44c6                      SUB    A6,A6
1e400: 90c0                      MOVE   A6,*A0+,0
1e410: 102c                      INC    A12
1e420: 260c                      SLL    10h,A12
1e430: 2e0c                      SRL    10h,A12
1e440: 496c                      CMP    A11,A12
1e450: c4f9                      JRLT   1E3F0h
1e460: c000 0081                 JR     1EC90h
1e480: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1e4a0: 0548                      SETF   8h,0,0
1e4b0: b508 0058                 MOVE   *A8(58h),A8,0
1e4d0: cb06                      JRNE   1E540h
1e4e0: 09e8 0000 2000            MOVI   20000000h,A8
1e510: b30d 0060                 MOVE   A8,*A13(60h),1
1e530: c005                      JR     1E590h
1e540: 09e8 0000 4000            MOVI   40000000h,A8
1e570: b30d 0060                 MOVE   A8,*A13(60h),1
1e590: 0550                      SETF   10h,0,0
1e5a0: b5a9 0030                 MOVE   *A13(30h),A9,0
1e5c0: b5a8 0010                 MOVE   *A13(10h),A8,0
1e5e0: 4128                      ADD    A9,A8
1e5f0: 4909                      CMP    A8,A9
1e600: c568                      JRGE   1EC90h
1e610: b5a6 0050                 MOVE   *A13(50h),A6,0
1e630: 48c9                      CMP    A6,A9
1e640: c441                      JRLT   1EA60h
1e650: 0b06 0300                 ADDI   300h,A6
1e670: 48c9                      CMP    A6,A9
1e680: c53d                      JRGE   1EA60h
1e690: 4484                      SUB    A4,A4
1e6a0: b5aa 0020                 MOVE   *A13(20h),A10,0
1e6c0: 85a6                      MOVE   *A13,A6,0
1e6d0: 4146                      ADD    A10,A6
1e6e0: 48ca                      CMP    A6,A10
1e6f0: c550                      JRGE   1EC00h
1e700: b5a6 0040                 MOVE   *A13(40h),A6,0
1e720: 48ca                      CMP    A6,A10
1e730: c423                      JRLT   1E970h
1e740: 0b06 0400                 ADDI   400h,A6
1e760: 48ca                      CMP    A6,A10
1e770: c51f                      JRGE   1E970h
1e780: 4c86                      MOVE   A4,A6
1e790: cb19                      JRNE   1E930h
1e7a0: bbad 0060 0080            MOVE   *A13(60h),*A13(80h),1
1e7d0: b5a6 0050                 MOVE   *A13(50h),A6,0
1e7f0: 4d28                      MOVE   A9,A8
1e800: 44c8                      SUB    A6,A8
1e810: 25e8                      SLL    Fh,A8
1e820: b7a6 0080                 MOVE   *A13(80h),A6,1
1e840: 40c8                      ADD    A6,A8
1e850: b30d 0080                 MOVE   A8,*A13(80h),1
1e870: b5a6 0040                 MOVE   *A13(40h),A6,0
1e890: 4d48                      MOVE   A10,A8
1e8a0: 44c8                      SUB    A6,A8
1e8b0: 2488                      SLL    4h,A8
1e8c0: b7a6 0080                 MOVE   *A13(80h),A6,1
1e8e0: 40c8                      ADD    A6,A8
1e8f0: b30d 0080                 MOVE   A8,*A13(80h),1
1e910: 4d02                      MOVE   A8,A2
1e920: 1824                      MOVK   1h,A4
1e930: 9c40                      MOVB   *A2,*A0
1e940: 1100                      ADDK   8h,A0
1e950: 1202                      ADDK   10h,A2
1e960: c004                      JR     1E9B0h
1e970: 44c6                      SUB    A6,A6
1e980: 0548                      SETF   8h,0,0
1e990: 90c0                      MOVE   A6,*A0+,0
1e9a0: 4cc4                      MOVE   A6,A4
1e9b0: 102a                      INC    A10
1e9c0: 260a                      SLL    10h,A10
1e9d0: 2e0a                      SRL    10h,A10
1e9e0: 0550                      SETF   10h,0,0
1e9f0: b5a6 0020                 MOVE   *A13(20h),A6,0
1ea10: 85a8                      MOVE   *A13,A8,0
1ea20: 4106                      ADD    A8,A6
1ea30: 48ca                      CMP    A6,A10
1ea40: c4cb                      JRLT   1E700h
1ea50: c01a                      JR     1EC00h
1ea60: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1ea80: 0548                      SETF   8h,0,0
1ea90: b4c8 0050                 MOVE   *A6(50h),A8,0
1eab0: 1468                      SUBK   3h,A8
1eac0: cb0f                      JRNE   1EBC0h
1ead0: 454a                      SUB    A10,A10
1eae0: 0550                      SETF   10h,0,0
1eaf0: 85a8                      MOVE   *A13,A8,0
1eb00: c60f                      JRLE   1EC00h
1eb10: 44c6                      SUB    A6,A6
1eb20: 0548                      SETF   8h,0,0
1eb30: 90c0                      MOVE   A6,*A0+,0
1eb40: 102a                      INC    A10
1eb50: 260a                      SLL    10h,A10
1eb60: 2e0a                      SRL    10h,A10
1eb70: 0550                      SETF   10h,0,0
1eb80: 85a8                      MOVE   *A13,A8,0
1eb90: 490a                      CMP    A8,A10
1eba0: c4f6                      JRLT   1EB10h
1ebb0: c004                      JR     1EC00h
1ebc0: 0550                      SETF   10h,0,0
1ebd0: 85a8                      MOVE   *A13,A8,0
1ebe0: 2468                      SLL    3h,A8
1ebf0: 4100                      ADD    A8,A0
1ec00: 1029                      INC    A9
1ec10: 0529                      ZEXT   A9,0
1ec20: b5a6 0030                 MOVE   *A13(30h),A6,0
1ec40: b5a8 0010                 MOVE   *A13(10h),A8,0
1ec60: 4106                      ADD    A8,A6
1ec70: 48c9                      CMP    A6,A9
1ec80: c498                      JRLT   1E610h
1ec90: b7ee 0140                 MOVE   *SP(140h),A14,1
1ecb0: 09af 3e55                 MMFM   SP,A0,A2,A4,A6,A9-A13
1ecd0: 0962                      RETS   2h

_read_colour_reduced:
1ece0: 098f aa7c                 MMTM   SP,A0,A2,A4,A6,A9-A13
1ed00: 4dcd                      MOVE   A14,A13
1ed10: 0b0e 00a0                 ADDI   A0h,A14
1ed30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1ed50: 0550                      SETF   10h,0,0
1ed60: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
1ed90: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
1edc0: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
1edf0: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
1ee20: 0570                      SETF   10h,1,0
1ee30: 05a8 dec0 0003            MOVE   @3DEC0h,A8,0
1ee60: b10d 0040                 MOVE   A8,*A13(40h),0
1ee80: 05a8 ded0 0003            MOVE   @3DED0h,A8,0
1eeb0: b10d 0050                 MOVE   A8,*A13(50h),0
1eed0: 09e0 3560 0004            MOVI   43560h,A0
1ef00: 0550                      SETF   10h,0,0
1ef10: b5a8 0030                 MOVE   *A13(30h),A8,0
1ef30: b5a6 0010                 MOVE   *A13(10h),A6,0
1ef50: 40c8                      ADD    A6,A8
1ef60: b5a6 0050                 MOVE   *A13(50h),A6,0
1ef80: 48c8                      CMP    A6,A8
1ef90: c614                      JRLE   1F0E0h
1efa0: b5a8 0030                 MOVE   *A13(30h),A8,0
1efc0: 0be8 fe7f                 SUBI   180h,A8
1efe0: 48c8                      CMP    A6,A8
1eff0: c50e                      JRGE   1F0E0h
1f000: b5a8 0020                 MOVE   *A13(20h),A8,0
1f020: 85a6                      MOVE   *A13,A6,0
1f030: 40c8                      ADD    A6,A8
1f040: b5a6 0040                 MOVE   *A13(40h),A6,0
1f060: 48c8                      CMP    A6,A8
1f070: c606                      JRLE   1F0E0h
1f080: b5a8 0020                 MOVE   *A13(20h),A8,0
1f0a0: 0be8 fdff                 SUBI   200h,A8
1f0c0: 48c8                      CMP    A6,A8
1f0d0: c41b                      JRLT   1F290h
1f0e0: b5a6 0010                 MOVE   *A13(10h),A6,0
1f100: 85ab                      MOVE   *A13,A11,0
1f110: 5ccb                      MPYS   A6,A11
1f120: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1f140: 0548                      SETF   8h,0,0
1f150: b508 0050                 MOVE   *A8(50h),A8,0
1f170: 1468                      SUBK   3h,A8
1f180: cb00 00b6                 JRNE   1FD00h
1f1a0: 458c                      SUB    A12,A12
1f1b0: 4d68                      MOVE   A11,A8
1f1c0: c600 00b2                 JRLE   1FD00h
1f1e0: 44c6                      SUB    A6,A6
1f1f0: 90c0                      MOVE   A6,*A0+,0
1f200: 90c0                      MOVE   A6,*A0+,0
1f210: 90c0                      MOVE   A6,*A0+,0
1f220: 102c                      INC    A12
1f230: 260c                      SLL    10h,A12
1f240: 2e0c                      SRL    10h,A12
1f250: 496c                      CMP    A11,A12
1f260: c4f7                      JRLT   1F1E0h
1f270: c000 00a7                 JR     1FD00h
1f290: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1f2b0: 0548                      SETF   8h,0,0
1f2c0: b508 0058                 MOVE   *A8(58h),A8,0
1f2e0: cb06                      JRNE   1F350h
1f2f0: 09e8 0000 2000            MOVI   20000000h,A8
1f320: b30d 0060                 MOVE   A8,*A13(60h),1
1f340: c005                      JR     1F3A0h
1f350: 09e8 0000 4000            MOVI   40000000h,A8
1f380: b30d 0060                 MOVE   A8,*A13(60h),1
1f3a0: 0550                      SETF   10h,0,0
1f3b0: b5a9 0030                 MOVE   *A13(30h),A9,0
1f3d0: b5a8 0010                 MOVE   *A13(10h),A8,0
1f3f0: 4128                      ADD    A9,A8
1f400: 4909                      CMP    A8,A9
1f410: c500 008d                 JRGE   1FD00h
1f430: b5a6 0050                 MOVE   *A13(50h),A6,0
1f450: 48c9                      CMP    A6,A9
1f460: c460                      JRLT   1FA70h
1f470: 0b06 0180                 ADDI   180h,A6
1f490: 48c9                      CMP    A6,A9
1f4a0: c55c                      JRGE   1FA70h
1f4b0: 4484                      SUB    A4,A4
1f4c0: b5aa 0020                 MOVE   *A13(20h),A10,0
1f4e0: 85a6                      MOVE   *A13,A6,0
1f4f0: 4146                      ADD    A10,A6
1f500: 48ca                      CMP    A6,A10
1f510: c574                      JRGE   1FC60h
1f520: b5a6 0040                 MOVE   *A13(40h),A6,0
1f540: 48ca                      CMP    A6,A10
1f550: c440                      JRLT   1F960h
1f560: 0b06 0200                 ADDI   200h,A6
1f580: 48ca                      CMP    A6,A10
1f590: c53c                      JRGE   1F960h
1f5a0: 4c86                      MOVE   A4,A6
1f5b0: cb19                      JRNE   1F750h
1f5c0: bbad 0060 0080            MOVE   *A13(60h),*A13(80h),1
1f5f0: b5a6 0050                 MOVE   *A13(50h),A6,0
1f610: 4d28                      MOVE   A9,A8
1f620: 44c8                      SUB    A6,A8
1f630: 25c8                      SLL    Eh,A8
1f640: b7a6 0080                 MOVE   *A13(80h),A6,1
1f660: 40c8                      ADD    A6,A8
1f670: b30d 0080                 MOVE   A8,*A13(80h),1
1f690: b5a6 0040                 MOVE   *A13(40h),A6,0
1f6b0: 4d48                      MOVE   A10,A8
1f6c0: 44c8                      SUB    A6,A8
1f6d0: 2488                      SLL    4h,A8
1f6e0: b7a6 0080                 MOVE   *A13(80h),A6,1
1f700: 40c8                      ADD    A6,A8
1f710: b30d 0080                 MOVE   A8,*A13(80h),1
1f730: 4d02                      MOVE   A8,A2
1f740: 1824                      MOVK   1h,A4
1f750: 0548                      SETF   8h,0,0
1f760: 8446                      MOVE   *A2,A6,0
1f770: 4cc8                      MOVE   A6,A8
1f780: 2486                      SLL    4h,A6
1f790: 2468                      SLL    3h,A8
1f7a0: 4106                      ADD    A8,A6
1f7b0: 0b26 f440 0003            ADDI   3F440h,A6
1f7e0: d0c0 0000                 MOVE   *A6(0h),*A0+,0
1f800: 8446                      MOVE   *A2,A6,0
1f810: 4cc8                      MOVE   A6,A8
1f820: 2486                      SLL    4h,A6
1f830: 2468                      SLL    3h,A8
1f840: 4106                      ADD    A8,A6
1f850: 0b26 f440 0003            ADDI   3F440h,A6
1f880: d0c0 0008                 MOVE   *A6(8h),*A0+,0
1f8a0: 8446                      MOVE   *A2,A6,0
1f8b0: 4cc8                      MOVE   A6,A8
1f8c0: 2486                      SLL    4h,A6
1f8d0: 2468                      SLL    3h,A8
1f8e0: 4106                      ADD    A8,A6
1f8f0: 0b26 f440 0003            ADDI   3F440h,A6
1f920: d0c0 0010                 MOVE   *A6(10h),*A0+,0
1f940: 1202                      ADDK   10h,A2
1f950: c006                      JR     1F9C0h
1f960: 44c6                      SUB    A6,A6
1f970: 0548                      SETF   8h,0,0
1f980: 90c0                      MOVE   A6,*A0+,0
1f990: 90c0                      MOVE   A6,*A0+,0
1f9a0: 90c0                      MOVE   A6,*A0+,0
1f9b0: 4cc4                      MOVE   A6,A4
1f9c0: 102a                      INC    A10
1f9d0: 260a                      SLL    10h,A10
1f9e0: 2e0a                      SRL    10h,A10
1f9f0: 0550                      SETF   10h,0,0
1fa00: b5a6 0020                 MOVE   *A13(20h),A6,0
1fa20: 85a8                      MOVE   *A13,A8,0
1fa30: 4106                      ADD    A8,A6
1fa40: 48ca                      CMP    A6,A10
1fa50: c4ac                      JRLT   1F520h
1fa60: c01f                      JR     1FC60h
1fa70: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
1fa90: 0548                      SETF   8h,0,0
1faa0: b4c8 0050                 MOVE   *A6(50h),A8,0
1fac0: 1468                      SUBK   3h,A8
1fad0: cb11                      JRNE   1FBF0h
1fae0: 454a                      SUB    A10,A10
1faf0: 0550                      SETF   10h,0,0
1fb00: 85a8                      MOVE   *A13,A8,0
1fb10: c614                      JRLE   1FC60h
1fb20: 44c6                      SUB    A6,A6
1fb30: 0548                      SETF   8h,0,0
1fb40: 90c0                      MOVE   A6,*A0+,0
1fb50: 90c0                      MOVE   A6,*A0+,0
1fb60: 90c0                      MOVE   A6,*A0+,0
1fb70: 102a                      INC    A10
1fb80: 260a                      SLL    10h,A10
1fb90: 2e0a                      SRL    10h,A10
1fba0: 0550                      SETF   10h,0,0
1fbb0: 85a8                      MOVE   *A13,A8,0
1fbc0: 490a                      CMP    A8,A10
1fbd0: c4f4                      JRLT   1FB20h
1fbe0: c007                      JR     1FC60h
1fbf0: 0550                      SETF   10h,0,0
1fc00: 85a8                      MOVE   *A13,A8,0
1fc10: 4d06                      MOVE   A8,A6
1fc20: 2426                      SLL    1h,A6
1fc30: 4106                      ADD    A8,A6
1fc40: 2466                      SLL    3h,A6
1fc50: 40c0                      ADD    A6,A0
1fc60: 1029                      INC    A9
1fc70: 0529                      ZEXT   A9,0
1fc80: b5a6 0030                 MOVE   *A13(30h),A6,0
1fca0: b5a8 0010                 MOVE   *A13(10h),A8,0
1fcc0: 4106                      ADD    A8,A6
1fcd0: 48c9                      CMP    A6,A9
1fce0: c400 ff73                 JRLT   1F430h
1fd00: b7ee 0140                 MOVE   *SP(140h),A14,1
1fd20: 09af 3e55                 MMFM   SP,A0,A2,A4,A6,A9-A13
1fd40: 0962                      RETS   2h

_hi_read_colour_reduced:
1fd50: 098f aa7c                 MMTM   SP,A0,A2,A4,A6,A9-A13
1fd70: 4dcd                      MOVE   A14,A13
1fd80: 0b0e 00a0                 ADDI   A0h,A14
1fda0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1fdc0: 0550                      SETF   10h,0,0
1fdd0: b90d 0030 0000            MOVE   *A8(30h),*A13(0h),0
1fe00: b90d 0040 0010            MOVE   *A8(40h),*A13(10h),0
1fe30: b90d 0010 0020            MOVE   *A8(10h),*A13(20h),0
1fe60: b90d 0020 0030            MOVE   *A8(20h),*A13(30h),0
1fe90: 0570                      SETF   10h,1,0
1fea0: 05a8 dec0 0003            MOVE   @3DEC0h,A8,0
1fed0: b10d 0040                 MOVE   A8,*A13(40h),0
1fef0: 05a8 ded0 0003            MOVE   @3DED0h,A8,0
1ff20: b10d 0050                 MOVE   A8,*A13(50h),0
1ff40: 09e0 3560 0004            MOVI   43560h,A0
1ff70: 0550                      SETF   10h,0,0
1ff80: b5a8 0040                 MOVE   *A13(40h),A8,0
1ffa0: 4108                      ADD    A8,A8
1ffb0: b10d 0040                 MOVE   A8,*A13(40h),0
1ffd0: b5a8 0050                 MOVE   *A13(50h),A8,0
1fff0: 4108                      ADD    A8,A8
20000: b10d 0050                 MOVE   A8,*A13(50h),0
20020: b5a8 0030                 MOVE   *A13(30h),A8,0
20040: b5a6 0010                 MOVE   *A13(10h),A6,0
20060: 40c8                      ADD    A6,A8
20070: b5a6 0050                 MOVE   *A13(50h),A6,0
20090: 48c8                      CMP    A6,A8
200a0: c614                      JRLE   201F0h
200b0: b5a8 0030                 MOVE   *A13(30h),A8,0
200d0: 0be8 fcff                 SUBI   300h,A8
200f0: 48c8                      CMP    A6,A8
20100: c50e                      JRGE   201F0h
20110: b5a8 0020                 MOVE   *A13(20h),A8,0
20130: 85a6                      MOVE   *A13,A6,0
20140: 40c8                      ADD    A6,A8
20150: b5a6 0040                 MOVE   *A13(40h),A6,0
20170: 48c8                      CMP    A6,A8
20180: c606                      JRLE   201F0h
20190: b5a8 0020                 MOVE   *A13(20h),A8,0
201b0: 0be8 fbff                 SUBI   400h,A8
201d0: 48c8                      CMP    A6,A8
201e0: c41b                      JRLT   203A0h
201f0: b5a6 0010                 MOVE   *A13(10h),A6,0
20210: 85ab                      MOVE   *A13,A11,0
20220: 5ccb                      MPYS   A6,A11
20230: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
20250: 0548                      SETF   8h,0,0
20260: b508 0050                 MOVE   *A8(50h),A8,0
20280: 1468                      SUBK   3h,A8
20290: cb00 00b6                 JRNE   20E10h
202b0: 458c                      SUB    A12,A12
202c0: 4d68                      MOVE   A11,A8
202d0: c600 00b2                 JRLE   20E10h
202f0: 44c6                      SUB    A6,A6
20300: 90c0                      MOVE   A6,*A0+,0
20310: 90c0                      MOVE   A6,*A0+,0
20320: 90c0                      MOVE   A6,*A0+,0
20330: 102c                      INC    A12
20340: 260c                      SLL    10h,A12
20350: 2e0c                      SRL    10h,A12
20360: 496c                      CMP    A11,A12
20370: c4f7                      JRLT   202F0h
20380: c000 00a7                 JR     20E10h
203a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
203c0: 0548                      SETF   8h,0,0
203d0: b508 0058                 MOVE   *A8(58h),A8,0
203f0: cb06                      JRNE   20460h
20400: 09e8 0000 2000            MOVI   20000000h,A8
20430: b30d 0060                 MOVE   A8,*A13(60h),1
20450: c005                      JR     204B0h
20460: 09e8 0000 4000            MOVI   40000000h,A8
20490: b30d 0060                 MOVE   A8,*A13(60h),1
204b0: 0550                      SETF   10h,0,0
204c0: b5a9 0030                 MOVE   *A13(30h),A9,0
204e0: b5a8 0010                 MOVE   *A13(10h),A8,0
20500: 4128                      ADD    A9,A8
20510: 4909                      CMP    A8,A9
20520: c500 008d                 JRGE   20E10h
20540: b5a6 0050                 MOVE   *A13(50h),A6,0
20560: 48c9                      CMP    A6,A9
20570: c460                      JRLT   20B80h
20580: 0b06 0300                 ADDI   300h,A6
205a0: 48c9                      CMP    A6,A9
205b0: c55c                      JRGE   20B80h
205c0: 4484                      SUB    A4,A4
205d0: b5aa 0020                 MOVE   *A13(20h),A10,0
205f0: 85a6                      MOVE   *A13,A6,0
20600: 4146                      ADD    A10,A6
20610: 48ca                      CMP    A6,A10
20620: c574                      JRGE   20D70h
20630: b5a6 0040                 MOVE   *A13(40h),A6,0
20650: 48ca                      CMP    A6,A10
20660: c440                      JRLT   20A70h
20670: 0b06 0400                 ADDI   400h,A6
20690: 48ca                      CMP    A6,A10
206a0: c53c                      JRGE   20A70h
206b0: 4c86                      MOVE   A4,A6
206c0: cb19                      JRNE   20860h
206d0: bbad 0060 0080            MOVE   *A13(60h),*A13(80h),1
20700: b5a6 0050                 MOVE   *A13(50h),A6,0
20720: 4d28                      MOVE   A9,A8
20730: 44c8                      SUB    A6,A8
20740: 25e8                      SLL    Fh,A8
20750: b7a6 0080                 MOVE   *A13(80h),A6,1
20770: 40c8                      ADD    A6,A8
20780: b30d 0080                 MOVE   A8,*A13(80h),1
207a0: b5a6 0040                 MOVE   *A13(40h),A6,0
207c0: 4d48                      MOVE   A10,A8
207d0: 44c8                      SUB    A6,A8
207e0: 2488                      SLL    4h,A8
207f0: b7a6 0080                 MOVE   *A13(80h),A6,1
20810: 40c8                      ADD    A6,A8
20820: b30d 0080                 MOVE   A8,*A13(80h),1
20840: 4d02                      MOVE   A8,A2
20850: 1824                      MOVK   1h,A4
20860: 0548                      SETF   8h,0,0
20870: 8446                      MOVE   *A2,A6,0
20880: 4cc8                      MOVE   A6,A8
20890: 2486                      SLL    4h,A6
208a0: 2468                      SLL    3h,A8
208b0: 4106                      ADD    A8,A6
208c0: 0b26 f440 0003            ADDI   3F440h,A6
208f0: d0c0 0000                 MOVE   *A6(0h),*A0+,0
20910: 8446                      MOVE   *A2,A6,0
20920: 4cc8                      MOVE   A6,A8
20930: 2486                      SLL    4h,A6
20940: 2468                      SLL    3h,A8
20950: 4106                      ADD    A8,A6
20960: 0b26 f440 0003            ADDI   3F440h,A6
20990: d0c0 0008                 MOVE   *A6(8h),*A0+,0
209b0: 8446                      MOVE   *A2,A6,0
209c0: 4cc8                      MOVE   A6,A8
209d0: 2486                      SLL    4h,A6
209e0: 2468                      SLL    3h,A8
209f0: 4106                      ADD    A8,A6
20a00: 0b26 f440 0003            ADDI   3F440h,A6
20a30: d0c0 0010                 MOVE   *A6(10h),*A0+,0
20a50: 1202                      ADDK   10h,A2
20a60: c006                      JR     20AD0h
20a70: 44c6                      SUB    A6,A6
20a80: 0548                      SETF   8h,0,0
20a90: 90c0                      MOVE   A6,*A0+,0
20aa0: 90c0                      MOVE   A6,*A0+,0
20ab0: 90c0                      MOVE   A6,*A0+,0
20ac0: 4cc4                      MOVE   A6,A4
20ad0: 102a                      INC    A10
20ae0: 260a                      SLL    10h,A10
20af0: 2e0a                      SRL    10h,A10
20b00: 0550                      SETF   10h,0,0
20b10: b5a6 0020                 MOVE   *A13(20h),A6,0
20b30: 85a8                      MOVE   *A13,A8,0
20b40: 4106                      ADD    A8,A6
20b50: 48ca                      CMP    A6,A10
20b60: c4ac                      JRLT   20630h
20b70: c01f                      JR     20D70h
20b80: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
20ba0: 0548                      SETF   8h,0,0
20bb0: b4c8 0050                 MOVE   *A6(50h),A8,0
20bd0: 1468                      SUBK   3h,A8
20be0: cb11                      JRNE   20D00h
20bf0: 454a                      SUB    A10,A10
20c00: 0550                      SETF   10h,0,0
20c10: 85a8                      MOVE   *A13,A8,0
20c20: c614                      JRLE   20D70h
20c30: 44c6                      SUB    A6,A6
20c40: 0548                      SETF   8h,0,0
20c50: 90c0                      MOVE   A6,*A0+,0
20c60: 90c0                      MOVE   A6,*A0+,0
20c70: 90c0                      MOVE   A6,*A0+,0
20c80: 102a                      INC    A10
20c90: 260a                      SLL    10h,A10
20ca0: 2e0a                      SRL    10h,A10
20cb0: 0550                      SETF   10h,0,0
20cc0: 85a8                      MOVE   *A13,A8,0
20cd0: 490a                      CMP    A8,A10
20ce0: c4f4                      JRLT   20C30h
20cf0: c007                      JR     20D70h
20d00: 0550                      SETF   10h,0,0
20d10: 85a8                      MOVE   *A13,A8,0
20d20: 4d06                      MOVE   A8,A6
20d30: 2426                      SLL    1h,A6
20d40: 4106                      ADD    A8,A6
20d50: 2466                      SLL    3h,A6
20d60: 40c0                      ADD    A6,A0
20d70: 1029                      INC    A9
20d80: 0529                      ZEXT   A9,0
20d90: b5a6 0030                 MOVE   *A13(30h),A6,0
20db0: b5a8 0010                 MOVE   *A13(10h),A8,0
20dd0: 4106                      ADD    A8,A6
20de0: 48c9                      CMP    A6,A9
20df0: c400 ff73                 JRLT   20540h
20e10: b7ee 0140                 MOVE   *SP(140h),A14,1
20e30: 09af 3e55                 MMFM   SP,A0,A2,A4,A6,A9-A13
20e50: 0962                      RETS   2h

_add_compression:
20e60: 098f 002c                 MMTM   SP,A10,A12,A13
20e80: 4dcd                      MOVE   A14,A13
20e90: 0b0e 00a0                 ADDI   A0h,A14
20eb0: 4508                      SUB    A8,A8
20ec0: 0550                      SETF   10h,0,0
20ed0: 810d                      MOVE   A8,*A13,0
20ee0: afa8 ffc0                 MOVB   *A13(FFC0h),A8
20f00: cb31                      JRNE   21220h
20f10: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
20f30: c40d                      JRLT   21010h
20f40: 0b48 ffc0                 CMPI   3Fh,A8
20f60: c70a                      JRGT   21010h
20f70: 4d0c                      MOVE   A8,A12
20f80: 2488                      SLL    4h,A8
20f90: 246c                      SLL    3h,A12
20fa0: 4188                      ADD    A12,A8
20fb0: 0b28 e500 0003            ADDI   3E500h,A8
20fe0: b30d 0060                 MOVE   A8,*A13(60h),1
21000: c051                      JR     21520h
21010: 0b48 ffbf                 CMPI   40h,A8
21030: c44e                      JRLT   21520h
21040: 0b48 f5c0                 CMPI   A3Fh,A8
21060: c74b                      JRGT   21520h
21070: 2b48                      SRA    6h,A8
21080: 1428                      DEC    A8
21090: 4d0c                      MOVE   A8,A12
210a0: 2488                      SLL    4h,A8
210b0: 246c                      SLL    3h,A12
210c0: 4188                      ADD    A12,A8
210d0: 0b28 eec0 0003            ADDI   3EEC0h,A8
21100: b30d 0080                 MOVE   A8,*A13(80h),1
21120: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
21140: 4d88                      MOVE   A12,A8
21150: 2b48                      SRA    6h,A8
21160: 24c8                      SLL    6h,A8
21170: 450c                      SUB    A8,A12
21180: 4d88                      MOVE   A12,A8
21190: 248c                      SLL    4h,A12
211a0: 2468                      SLL    3h,A8
211b0: 410c                      ADD    A8,A12
211c0: 0b2c e500 0003            ADDI   3E500h,A12
211f0: b38d 0060                 MOVE   A12,*A13(60h),1
21210: c030                      JR     21520h
21220: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
21240: c40d                      JRLT   21320h
21250: 0b4c ffc0                 CMPI   3Fh,A12
21270: c70a                      JRGT   21320h
21280: 4d88                      MOVE   A12,A8
21290: 248c                      SLL    4h,A12
212a0: 2468                      SLL    3h,A8
212b0: 410c                      ADD    A8,A12
212c0: 0b2c df00 0003            ADDI   3DF00h,A12
212f0: b38d 0060                 MOVE   A12,*A13(60h),1
21310: c020                      JR     21520h
21320: 0b4c ffbf                 CMPI   40h,A12
21340: c41d                      JRLT   21520h
21350: 0b4c f5c0                 CMPI   A3Fh,A12
21370: c71a                      JRGT   21520h
21380: 2b4c                      SRA    6h,A12
21390: 142c                      DEC    A12
213a0: 4d88                      MOVE   A12,A8
213b0: 248c                      SLL    4h,A12
213c0: 2468                      SLL    3h,A8
213d0: 410c                      ADD    A8,A12
213e0: 0b2c eb00 0003            ADDI   3EB00h,A12
21410: b38d 0080                 MOVE   A12,*A13(80h),1
21430: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
21450: 4d0c                      MOVE   A8,A12
21460: 2b4c                      SRA    6h,A12
21470: 24cc                      SLL    6h,A12
21480: 4588                      SUB    A12,A8
21490: 4d0c                      MOVE   A8,A12
214a0: 2488                      SLL    4h,A8
214b0: 246c                      SLL    3h,A12
214c0: 4188                      ADD    A12,A8
214d0: 0b28 df00 0003            ADDI   3DF00h,A8
21500: b30d 0060                 MOVE   A8,*A13(60h),1
21520: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
21540: 0b4c ffbf                 CMPI   40h,A12
21560: c400 009f                 JRLT   21F70h
21580: 0b4c f5c0                 CMPI   A3Fh,A12
215a0: c700 009b                 JRGT   21F70h
215c0: b7a8 0080                 MOVE   *A13(80h),A8,1
215e0: b90d 0000 0010            MOVE   *A8(0h),*A13(10h),0
21610: bd0d 0010 0020            MOVB   *A8(10h),*A13(20h)
21640: 0548                      SETF   8h,0,0
21650: b5a8 0020                 MOVE   *A13(20h),A8,0
21670: 05ac 3380 0004            MOVE   @43380h,A12,0
216a0: 4988                      CMP    A12,A8
216b0: c65a                      JRLE   21C60h
216c0: 05ac 3380 0004            MOVE   @43380h,A12,0
216f0: b5a8 0020                 MOVE   *A13(20h),A8,0
21710: 450c                      SUB    A8,A12
21720: 0550                      SETF   10h,0,0
21730: b5a8 0010                 MOVE   *A13(10h),A8,0
21750: 6788                      SRL    A12,A8
21760: b10d 0010                 MOVE   A8,*A13(10h),0
21780: 07ac 3540 0004            MOVE   @43540h,A12,1
217b0: b5a8 0010                 MOVE   *A13(10h),A8,0
217d0: 0548                      SETF   8h,0,0
217e0: 858a                      MOVE   *A12,A10,0
217f0: 550a                      OR     A8,A10
21800: 8d4c                      MOVB   A10,*A12
21810: 05aa 3380 0004            MOVE   @43380h,A10,0
21840: b5a8 0020                 MOVE   *A13(20h),A8,0
21860: 4548                      SUB    A10,A8
21870: ad0d 0020                 MOVB   A8,*A13(20h)
21890: 110c                      ADDK   8h,A12
218a0: 078c 3540 0004            MOVE   A12,@43540h,1
218d0: 0550                      SETF   10h,0,0
218e0: 85a8                      MOVE   *A13,A8,0
218f0: 1028                      INC    A8
21900: 810d                      MOVE   A8,*A13,0
21910: 4508                      SUB    A8,A8
21920: 8d0c                      MOVB   A8,*A12
21930: 1908                      MOVK   8h,A8
21940: 05e8 3380 0004            MOVB   A8,@43380h
21970: 454a                      SUB    A10,A10
21980: ad4d 0040                 MOVB   A10,*A13(40h)
219a0: ad4d 0030                 MOVB   A10,*A13(30h)
219c0: 0548                      SETF   8h,0,0
219d0: b5ac 0020                 MOVE   *A13(20h),A12,0
219f0: c613                      JRLE   21B30h
21a00: b5ac 0040                 MOVE   *A13(40h),A12,0
21a20: 242c                      SLL    1h,A12
21a30: ad8d 0040                 MOVB   A12,*A13(40h)
21a50: b5ac 0040                 MOVE   *A13(40h),A12,0
21a70: 102c                      INC    A12
21a80: ad8d 0040                 MOVB   A12,*A13(40h)
21aa0: b5ac 0030                 MOVE   *A13(30h),A12,0
21ac0: 102c                      INC    A12
21ad0: ad8d 0030                 MOVB   A12,*A13(30h)
21af0: b5aa 0020                 MOVE   *A13(20h),A10,0
21b10: 494c                      CMP    A10,A12
21b20: c4ed                      JRLT   21A00h
21b30: b7ac 0080                 MOVE   *A13(80h),A12,1
21b50: 0550                      SETF   10h,0,0
21b60: 858a                      MOVE   *A12,A10,0
21b70: 0548                      SETF   8h,0,0
21b80: b5a8 0040                 MOVE   *A13(40h),A8,0
21ba0: 510a                      AND    A8,A10
21bb0: 0550                      SETF   10h,0,0
21bc0: b14d 0010                 MOVE   A10,*A13(10h),0
21be0: 0548                      SETF   8h,0,0
21bf0: b5aa 0020                 MOVE   *A13(20h),A10,0
21c10: 05a8 3380 0004            MOVE   @43380h,A8,0
21c40: 490a                      CMP    A8,A10
21c50: c7a6                      JRGT   216C0h
21c60: b5ac 0020                 MOVE   *A13(20h),A12,0
21c80: c62e                      JRLE   21F70h
21c90: 05aa 3380 0004            MOVE   @43380h,A10,0
21cc0: 458a                      SUB    A12,A10
21cd0: 0550                      SETF   10h,0,0
21ce0: b5a8 0010                 MOVE   *A13(10h),A8,0
21d00: 6348                      SLL    A10,A8
21d10: b10d 0010                 MOVE   A8,*A13(10h),0
21d30: 07aa 3540 0004            MOVE   @43540h,A10,1
21d60: b5a8 0010                 MOVE   *A13(10h),A8,0
21d80: 0548                      SETF   8h,0,0
21d90: 854c                      MOVE   *A10,A12,0
21da0: 550c                      OR     A8,A12
21db0: 8d8a                      MOVB   A12,*A10
21dc0: b5ac 0020                 MOVE   *A13(20h),A12,0
21de0: 05a8 3380 0004            MOVE   @43380h,A8,0
21e10: 4588                      SUB    A12,A8
21e20: 05e8 3380 0004            MOVB   A8,@43380h
21e50: 05a8 3380 0004            MOVE   @43380h,A8,0
21e80: cb0e                      JRNE   21F70h
21e90: 110a                      ADDK   8h,A10
21ea0: 078a 3540 0004            MOVE   A10,@43540h,1
21ed0: 0550                      SETF   10h,0,0
21ee0: 85ac                      MOVE   *A13,A12,0
21ef0: 102c                      INC    A12
21f00: 818d                      MOVE   A12,*A13,0
21f10: 458c                      SUB    A12,A12
21f20: 8d8a                      MOVB   A12,*A10
21f30: 190c                      MOVK   8h,A12
21f40: 05ec 3380 0004            MOVB   A12,@43380h
21f70: b7ac 0060                 MOVE   *A13(60h),A12,1
21f90: 0550                      SETF   10h,0,0
21fa0: b98d 0000 0010            MOVE   *A12(0h),*A13(10h),0
21fd0: bd8d 0010 0020            MOVB   *A12(10h),*A13(20h)
22000: 0548                      SETF   8h,0,0
22010: b5aa 0020                 MOVE   *A13(20h),A10,0
22030: 05a8 3380 0004            MOVE   @43380h,A8,0
22060: 490a                      CMP    A8,A10
22070: c65a                      JRLE   22620h
22080: 05ac 3380 0004            MOVE   @43380h,A12,0
220b0: b5aa 0020                 MOVE   *A13(20h),A10,0
220d0: 454c                      SUB    A10,A12
220e0: 0550                      SETF   10h,0,0
220f0: b5a8 0010                 MOVE   *A13(10h),A8,0
22110: 6788                      SRL    A12,A8
22120: b10d 0010                 MOVE   A8,*A13(10h),0
22140: 07ac 3540 0004            MOVE   @43540h,A12,1
22170: b5a8 0010                 MOVE   *A13(10h),A8,0
22190: 0548                      SETF   8h,0,0
221a0: 858a                      MOVE   *A12,A10,0
221b0: 550a                      OR     A8,A10
221c0: 8d4c                      MOVB   A10,*A12
221d0: 05aa 3380 0004            MOVE   @43380h,A10,0
22200: b5a8 0020                 MOVE   *A13(20h),A8,0
22220: 4548                      SUB    A10,A8
22230: ad0d 0020                 MOVB   A8,*A13(20h)
22250: 110c                      ADDK   8h,A12
22260: 078c 3540 0004            MOVE   A12,@43540h,1
22290: 0550                      SETF   10h,0,0
222a0: 85a8                      MOVE   *A13,A8,0
222b0: 1028                      INC    A8
222c0: 810d                      MOVE   A8,*A13,0
222d0: 4508                      SUB    A8,A8
222e0: 8d0c                      MOVB   A8,*A12
222f0: 1908                      MOVK   8h,A8
22300: 05e8 3380 0004            MOVB   A8,@43380h
22330: 454a                      SUB    A10,A10
22340: ad4d 0040                 MOVB   A10,*A13(40h)
22360: ad4d 0030                 MOVB   A10,*A13(30h)
22380: 0548                      SETF   8h,0,0
22390: b5ac 0020                 MOVE   *A13(20h),A12,0
223b0: c613                      JRLE   224F0h
223c0: b5ac 0040                 MOVE   *A13(40h),A12,0
223e0: 242c                      SLL    1h,A12
223f0: ad8d 0040                 MOVB   A12,*A13(40h)
22410: b5ac 0040                 MOVE   *A13(40h),A12,0
22430: 102c                      INC    A12
22440: ad8d 0040                 MOVB   A12,*A13(40h)
22460: b5ac 0030                 MOVE   *A13(30h),A12,0
22480: 102c                      INC    A12
22490: ad8d 0030                 MOVB   A12,*A13(30h)
224b0: b5aa 0020                 MOVE   *A13(20h),A10,0
224d0: 494c                      CMP    A10,A12
224e0: c4ed                      JRLT   223C0h
224f0: b7ac 0060                 MOVE   *A13(60h),A12,1
22510: 0550                      SETF   10h,0,0
22520: 858a                      MOVE   *A12,A10,0
22530: 0548                      SETF   8h,0,0
22540: b5a8 0040                 MOVE   *A13(40h),A8,0
22560: 510a                      AND    A8,A10
22570: 0550                      SETF   10h,0,0
22580: b14d 0010                 MOVE   A10,*A13(10h),0
225a0: 0548                      SETF   8h,0,0
225b0: b5aa 0020                 MOVE   *A13(20h),A10,0
225d0: 05a8 3380 0004            MOVE   @43380h,A8,0
22600: 490a                      CMP    A8,A10
22610: c7a6                      JRGT   22080h
22620: 4d4a                      MOVE   A10,A10
22630: c63d                      JRLE   22A10h
22640: 4548                      SUB    A10,A8
22650: 0550                      SETF   10h,0,0
22660: b5aa 0010                 MOVE   *A13(10h),A10,0
22680: 630a                      SLL    A8,A10
22690: b14d 0010                 MOVE   A10,*A13(10h),0
226b0: 07aa 3540 0004            MOVE   @43540h,A10,1
226e0: b5a8 0010                 MOVE   *A13(10h),A8,0
22700: 0548                      SETF   8h,0,0
22710: 854c                      MOVE   *A10,A12,0
22720: 550c                      OR     A8,A12
22730: 8d8a                      MOVB   A12,*A10
22740: b5ac 0020                 MOVE   *A13(20h),A12,0
22760: 05a8 3380 0004            MOVE   @43380h,A8,0
22790: 4588                      SUB    A12,A8
227a0: 05e8 3380 0004            MOVB   A8,@43380h
227d0: 05a8 3380 0004            MOVE   @43380h,A8,0
22800: cb0f                      JRNE   22900h
22810: 110a                      ADDK   8h,A10
22820: 078a 3540 0004            MOVE   A10,@43540h,1
22850: 0550                      SETF   10h,0,0
22860: 85ac                      MOVE   *A13,A12,0
22870: 102c                      INC    A12
22880: 818d                      MOVE   A12,*A13,0
22890: 458c                      SUB    A12,A12
228a0: 8d8a                      MOVB   A12,*A10
228b0: 190c                      MOVK   8h,A12
228c0: 05ec 3380 0004            MOVB   A12,@43380h
228f0: c011                      JR     22A10h
22900: afac ffa0                 MOVB   *A13(FFA0h),A12
22920: 39cc                      DSJS   A12,22A10h
22930: 110a                      ADDK   8h,A10
22940: 078a 3540 0004            MOVE   A10,@43540h,1
22970: 0550                      SETF   10h,0,0
22980: 85ac                      MOVE   *A13,A12,0
22990: 102c                      INC    A12
229a0: 818d                      MOVE   A12,*A13,0
229b0: 458c                      SUB    A12,A12
229c0: 8d8a                      MOVB   A12,*A10
229d0: 190c                      MOVK   8h,A12
229e0: 05ec 3380 0004            MOVB   A12,@43380h
22a10: 0550                      SETF   10h,0,0
22a20: 85a8                      MOVE   *A13,A8,0
22a30: b7ee 0080                 MOVE   *SP(80h),A14,1
22a50: 09af 3400                 MMFM   SP,A10,A12,A13
22a70: 0962                      RETS   2h

_black_term_code:
22a80: 098f 000c                 MMTM   SP,A12,A13
22aa0: 4dcd                      MOVE   A14,A13
22ab0: 100e                      ADDK   20h,A14
22ac0: c000 0171                 JR     241F0h
22ae0: 1848                      MOVK   2h,A8
22af0: 810d                      MOVE   A8,*A13,0
22b00: 85a8                      MOVE   *A13,A8,0
22b10: 4d0c                      MOVE   A8,A12
22b20: 2488                      SLL    4h,A8
22b30: 246c                      SLL    3h,A12
22b40: 4188                      ADD    A12,A8
22b50: 0b28 e500 0003            ADDI   3E500h,A8
22b80: 850c                      MOVE   *A8,A12,0
22b90: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
22bb0: 490c                      CMP    A8,A12
22bc0: cb04                      JRNE   22C10h
22bd0: 0570                      SETF   10h,1,0
22be0: 85a8                      MOVE   *A13,A8,0
22bf0: c000 016c                 JR     242D0h
22c10: 85ac                      MOVE   *A13,A12,0
22c20: 102c                      INC    A12
22c30: 818d                      MOVE   A12,*A13,0
22c40: 146c                      SUBK   3h,A12
22c50: c6ea                      JRLE   22B00h
22c60: c000 0163                 JR     242B0h
22c80: 05ac e518 0003            MOVE   @3E518h,A12,0
22cb0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
22cd0: 490c                      CMP    A8,A12
22ce0: cb03                      JRNE   22D20h
22cf0: 1828                      MOVK   1h,A8
22d00: c000 015b                 JR     242D0h
22d20: 05a8 e560 0003            MOVE   @3E560h,A8,0
22d50: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
22d70: 4988                      CMP    A12,A8
22d80: cb00 0151                 JRNE   242B0h
22da0: 1888                      MOVK   4h,A8
22db0: c000 0150                 JR     242D0h
22dd0: 18ac                      MOVK   5h,A12
22de0: 818d                      MOVE   A12,*A13,0
22df0: 85ac                      MOVE   *A13,A12,0
22e00: 4d88                      MOVE   A12,A8
22e10: 248c                      SLL    4h,A12
22e20: 2468                      SLL    3h,A8
22e30: 410c                      ADD    A8,A12
22e40: 0b2c e500 0003            ADDI   3E500h,A12
22e70: 858c                      MOVE   *A12,A12,0
22e80: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
22ea0: 490c                      CMP    A8,A12
22eb0: cb04                      JRNE   22F00h
22ec0: 0570                      SETF   10h,1,0
22ed0: 85a8                      MOVE   *A13,A8,0
22ee0: c000 013d                 JR     242D0h
22f00: 85ac                      MOVE   *A13,A12,0
22f10: 102c                      INC    A12
22f20: 818d                      MOVE   A12,*A13,0
22f30: 14cc                      SUBK   6h,A12
22f40: c6ea                      JRLE   22DF0h
22f50: c000 0134                 JR     242B0h
22f70: 05ac e5a8 0003            MOVE   @3E5A8h,A12,0
22fa0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
22fc0: 490c                      CMP    A8,A12
22fd0: cb00 012c                 JRNE   242B0h
22ff0: 18e8                      MOVK   7h,A8
23000: c000 012b                 JR     242D0h
23020: 190c                      MOVK   8h,A12
23030: 818d                      MOVE   A12,*A13,0
23040: 85ac                      MOVE   *A13,A12,0
23050: 4d88                      MOVE   A12,A8
23060: 248c                      SLL    4h,A12
23070: 2468                      SLL    3h,A8
23080: 410c                      ADD    A8,A12
23090: 0b2c e500 0003            ADDI   3E500h,A12
230c0: 858c                      MOVE   *A12,A12,0
230d0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
230f0: 490c                      CMP    A8,A12
23100: cb04                      JRNE   23150h
23110: 0570                      SETF   10h,1,0
23120: 85a8                      MOVE   *A13,A8,0
23130: c000 0118                 JR     242D0h
23150: 85ac                      MOVE   *A13,A12,0
23160: 102c                      INC    A12
23170: 818d                      MOVE   A12,*A13,0
23180: 152c                      SUBK   9h,A12
23190: c6ea                      JRLE   23040h
231a0: c000 010f                 JR     242B0h
231c0: 194c                      MOVK   Ah,A12
231d0: 818d                      MOVE   A12,*A13,0
231e0: 85ac                      MOVE   *A13,A12,0
231f0: 4d88                      MOVE   A12,A8
23200: 248c                      SLL    4h,A12
23210: 2468                      SLL    3h,A8
23220: 410c                      ADD    A8,A12
23230: 0b2c e500 0003            ADDI   3E500h,A12
23260: 858c                      MOVE   *A12,A12,0
23270: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23290: 490c                      CMP    A8,A12
232a0: cb04                      JRNE   232F0h
232b0: 0570                      SETF   10h,1,0
232c0: 85a8                      MOVE   *A13,A8,0
232d0: c000 00fe                 JR     242D0h
232f0: 85ac                      MOVE   *A13,A12,0
23300: 102c                      INC    A12
23310: 818d                      MOVE   A12,*A13,0
23320: 158c                      SUBK   Ch,A12
23330: c6ea                      JRLE   231E0h
23340: c000 00f5                 JR     242B0h
23360: 19ac                      MOVK   Dh,A12
23370: 818d                      MOVE   A12,*A13,0
23380: 85ac                      MOVE   *A13,A12,0
23390: 4d88                      MOVE   A12,A8
233a0: 248c                      SLL    4h,A12
233b0: 2468                      SLL    3h,A8
233c0: 410c                      ADD    A8,A12
233d0: 0b2c e500 0003            ADDI   3E500h,A12
23400: 858c                      MOVE   *A12,A12,0
23410: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23430: 490c                      CMP    A8,A12
23440: cb04                      JRNE   23490h
23450: 0570                      SETF   10h,1,0
23460: 85a8                      MOVE   *A13,A8,0
23470: c000 00e4                 JR     242D0h
23490: 85ac                      MOVE   *A13,A12,0
234a0: 102c                      INC    A12
234b0: 818d                      MOVE   A12,*A13,0
234c0: 15cc                      SUBK   Eh,A12
234d0: c6ea                      JRLE   23380h
234e0: c000 00db                 JR     242B0h
23500: 05ac e668 0003            MOVE   @3E668h,A12,0
23530: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23550: 490c                      CMP    A8,A12
23560: cb00 00d3                 JRNE   242B0h
23580: 19e8                      MOVK   Fh,A8
23590: c000 00d2                 JR     242D0h
235b0: 05ac e500 0003            MOVE   @3E500h,A12,0
235e0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23600: 490c                      CMP    A8,A12
23610: cb03                      JRNE   23650h
23620: 4508                      SUB    A8,A8
23630: c000 00c8                 JR     242D0h
23650: 1a08                      MOVK   10h,A8
23660: 810d                      MOVE   A8,*A13,0
23670: 85ac                      MOVE   *A13,A12,0
23680: 4d88                      MOVE   A12,A8
23690: 248c                      SLL    4h,A12
236a0: 2468                      SLL    3h,A8
236b0: 410c                      ADD    A8,A12
236c0: 0b2c e500 0003            ADDI   3E500h,A12
236f0: 858c                      MOVE   *A12,A12,0
23700: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23720: 490c                      CMP    A8,A12
23730: cb04                      JRNE   23780h
23740: 0570                      SETF   10h,1,0
23750: 85a8                      MOVE   *A13,A8,0
23760: c000 00b5                 JR     242D0h
23780: 85ac                      MOVE   *A13,A12,0
23790: 102c                      INC    A12
237a0: 818d                      MOVE   A12,*A13,0
237b0: 164c                      SUBK   12h,A12
237c0: c6ea                      JRLE   23670h
237d0: 05ac eec0 0003            MOVE   @3EEC0h,A12,0
23800: 490c                      CMP    A8,A12
23810: cb00 00a8                 JRNE   242B0h
23830: 09c8 0040                 MOVI   40h,A8
23850: c000 00a6                 JR     242D0h
23870: 1a6c                      MOVK   13h,A12
23880: 818d                      MOVE   A12,*A13,0
23890: 85ac                      MOVE   *A13,A12,0
238a0: 4d88                      MOVE   A12,A8
238b0: 248c                      SLL    4h,A12
238c0: 2468                      SLL    3h,A8
238d0: 410c                      ADD    A8,A12
238e0: 0b2c e500 0003            ADDI   3E500h,A12
23910: 858c                      MOVE   *A12,A12,0
23920: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23940: 490c                      CMP    A8,A12
23950: cb04                      JRNE   239A0h
23960: 0570                      SETF   10h,1,0
23970: 85a8                      MOVE   *A13,A8,0
23980: c000 0093                 JR     242D0h
239a0: 85ac                      MOVE   *A13,A12,0
239b0: 102c                      INC    A12
239c0: 818d                      MOVE   A12,*A13,0
239d0: 172c                      SUBK   19h,A12
239e0: c6ea                      JRLE   23890h
239f0: 1b6c                      MOVK   1Bh,A12
23a00: 818d                      MOVE   A12,*A13,0
23a10: 85ac                      MOVE   *A13,A12,0
23a20: 4d88                      MOVE   A12,A8
23a30: 248c                      SLL    4h,A12
23a40: 2468                      SLL    3h,A8
23a50: 410c                      ADD    A8,A12
23a60: 0b2c eec0 0003            ADDI   3EEC0h,A12
23a90: 858c                      MOVE   *A12,A12,0
23aa0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23ac0: 490c                      CMP    A8,A12
23ad0: cb05                      JRNE   23B30h
23ae0: 85a8                      MOVE   *A13,A8,0
23af0: 1028                      INC    A8
23b00: 24c8                      SLL    6h,A8
23b10: 0508                      SEXT   A8,0
23b20: c07a                      JR     242D0h
23b30: 85ac                      MOVE   *A13,A12,0
23b40: 102c                      INC    A12
23b50: 818d                      MOVE   A12,*A13,0
23b60: 17ac                      SUBK   1Dh,A12
23b70: c6e9                      JRLE   23A10h
23b80: c072                      JR     242B0h
23b90: 1b4c                      MOVK   1Ah,A12
23ba0: 818d                      MOVE   A12,*A13,0
23bb0: 85ac                      MOVE   *A13,A12,0
23bc0: 4d88                      MOVE   A12,A8
23bd0: 248c                      SLL    4h,A12
23be0: 2468                      SLL    3h,A8
23bf0: 410c                      ADD    A8,A12
23c00: 0b2c e500 0003            ADDI   3E500h,A12
23c30: 858c                      MOVE   *A12,A12,0
23c40: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23c60: 490c                      CMP    A8,A12
23c70: cb03                      JRNE   23CB0h
23c80: 0570                      SETF   10h,1,0
23c90: 85a8                      MOVE   *A13,A8,0
23ca0: c062                      JR     242D0h
23cb0: 85ac                      MOVE   *A13,A12,0
23cc0: 102c                      INC    A12
23cd0: 818d                      MOVE   A12,*A13,0
23ce0: 0b4c ffc0                 CMPI   3Fh,A12
23d00: c6ea                      JRLE   23BB0h
23d10: 1828                      MOVK   1h,A8
23d20: 810d                      MOVE   A8,*A13,0
23d30: 85ac                      MOVE   *A13,A12,0
23d40: 4d88                      MOVE   A12,A8
23d50: 248c                      SLL    4h,A12
23d60: 2468                      SLL    3h,A8
23d70: 410c                      ADD    A8,A12
23d80: 0b2c eec0 0003            ADDI   3EEC0h,A12
23db0: 858c                      MOVE   *A12,A12,0
23dc0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23de0: 490c                      CMP    A8,A12
23df0: cb05                      JRNE   23E50h
23e00: 85a8                      MOVE   *A13,A8,0
23e10: 1028                      INC    A8
23e20: 24c8                      SLL    6h,A8
23e30: 0508                      SEXT   A8,0
23e40: c048                      JR     242D0h
23e50: 85ac                      MOVE   *A13,A12,0
23e60: 102c                      INC    A12
23e70: 818d                      MOVE   A12,*A13,0
23e80: 14cc                      SUBK   6h,A12
23e90: c6e9                      JRLE   23D30h
23ea0: 1bcc                      MOVK   1Eh,A12
23eb0: 818d                      MOVE   A12,*A13,0
23ec0: 85ac                      MOVE   *A13,A12,0
23ed0: 4d88                      MOVE   A12,A8
23ee0: 248c                      SLL    4h,A12
23ef0: 2468                      SLL    3h,A8
23f00: 410c                      ADD    A8,A12
23f10: 0b2c eec0 0003            ADDI   3EEC0h,A12
23f40: 858c                      MOVE   *A12,A12,0
23f50: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
23f70: 490c                      CMP    A8,A12
23f80: cb05                      JRNE   23FE0h
23f90: 85a8                      MOVE   *A13,A8,0
23fa0: 1028                      INC    A8
23fb0: 24c8                      SLL    6h,A8
23fc0: 0508                      SEXT   A8,0
23fd0: c02f                      JR     242D0h
23fe0: 85ac                      MOVE   *A13,A12,0
23ff0: 102c                      INC    A12
24000: 818d                      MOVE   A12,*A13,0
24010: 0b4c ffd8                 CMPI   27h,A12
24030: c6e8                      JRLE   23EC0h
24040: c026                      JR     242B0h
24050: 18ec                      MOVK   7h,A12
24060: 818d                      MOVE   A12,*A13,0
24070: 85ac                      MOVE   *A13,A12,0
24080: 4d88                      MOVE   A12,A8
24090: 248c                      SLL    4h,A12
240a0: 2468                      SLL    3h,A8
240b0: 410c                      ADD    A8,A12
240c0: 0b2c eec0 0003            ADDI   3EEC0h,A12
240f0: 858c                      MOVE   *A12,A12,0
24100: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24120: 490c                      CMP    A8,A12
24130: cb05                      JRNE   24190h
24140: 85a8                      MOVE   *A13,A8,0
24150: 1028                      INC    A8
24160: 24c8                      SLL    6h,A8
24170: 0508                      SEXT   A8,0
24180: c014                      JR     242D0h
24190: 85ac                      MOVE   *A13,A12,0
241a0: 102c                      INC    A12
241b0: 818d                      MOVE   A12,*A13,0
241c0: 174c                      SUBK   1Ah,A12
241d0: c6e9                      JRLE   24070h
241e0: c00c                      JR     242B0h
241f0: 0550                      SETF   10h,0,0
24200: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
24220: 144c                      SUBK   2h,A12
24230: 356c                      CMPK   Bh,A12
24240: c306                      JRHI   242B0h
24250: 24ac                      SLL    5h,A12
24260: 0b2c db80 0003            ADDI   3DB80h,A12
24290: 878c                      MOVE   *A12,A12,1
242a0: 016c                      JUMP   A12
242b0: 09c8 ffff                 MOVI   FFFFh,A8
242d0: b7ee 0060                 MOVE   *SP(60h),A14,1
242f0: 09af 3000                 MMFM   SP,A12,A13
24310: 0962                      RETS   2h

_white_term_code:
24320: 098f 000c                 MMTM   SP,A12,A13
24340: 4dcd                      MOVE   A14,A13
24350: 100e                      ADDK   20h,A14
24360: c000 015e                 JR     25960h
24380: 1848                      MOVK   2h,A8
24390: 0570                      SETF   10h,1,0
243a0: 810d                      MOVE   A8,*A13,0
243b0: 85a8                      MOVE   *A13,A8,0
243c0: 4d0c                      MOVE   A8,A12
243d0: 2488                      SLL    4h,A8
243e0: 246c                      SLL    3h,A12
243f0: 4188                      ADD    A12,A8
24400: 0b28 df00 0003            ADDI   3DF00h,A8
24430: 0550                      SETF   10h,0,0
24440: 850c                      MOVE   *A8,A12,0
24450: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24470: 490c                      CMP    A8,A12
24480: cb04                      JRNE   244D0h
24490: 0570                      SETF   10h,1,0
244a0: 85a8                      MOVE   *A13,A8,0
244b0: c000 0157                 JR     25A40h
244d0: 0570                      SETF   10h,1,0
244e0: 85ac                      MOVE   *A13,A12,0
244f0: 102c                      INC    A12
24500: 818d                      MOVE   A12,*A13,0
24510: 14ec                      SUBK   7h,A12
24520: c6e8                      JRLE   243B0h
24530: c000 014d                 JR     25A20h
24550: 190c                      MOVK   8h,A12
24560: 0570                      SETF   10h,1,0
24570: 818d                      MOVE   A12,*A13,0
24580: 85ac                      MOVE   *A13,A12,0
24590: 4d88                      MOVE   A12,A8
245a0: 248c                      SLL    4h,A12
245b0: 2468                      SLL    3h,A8
245c0: 410c                      ADD    A8,A12
245d0: 0b2c df00 0003            ADDI   3DF00h,A12
24600: 0550                      SETF   10h,0,0
24610: 858c                      MOVE   *A12,A12,0
24620: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24640: 490c                      CMP    A8,A12
24650: cb04                      JRNE   246A0h
24660: 0570                      SETF   10h,1,0
24670: 85a8                      MOVE   *A13,A8,0
24680: c000 013a                 JR     25A40h
246a0: 0570                      SETF   10h,1,0
246b0: 85ac                      MOVE   *A13,A12,0
246c0: 102c                      INC    A12
246d0: 818d                      MOVE   A12,*A13,0
246e0: 156c                      SUBK   Bh,A12
246f0: c6e8                      JRLE   24580h
24700: 458c                      SUB    A12,A12
24710: 818d                      MOVE   A12,*A13,0
24720: 85ac                      MOVE   *A13,A12,0
24730: 4d88                      MOVE   A12,A8
24740: 248c                      SLL    4h,A12
24750: 2468                      SLL    3h,A8
24760: 410c                      ADD    A8,A12
24770: 0b2c eb00 0003            ADDI   3EB00h,A12
247a0: 0550                      SETF   10h,0,0
247b0: 858c                      MOVE   *A12,A12,0
247c0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
247e0: 490c                      CMP    A8,A12
247f0: cb07                      JRNE   24870h
24800: 0570                      SETF   10h,1,0
24810: 85a8                      MOVE   *A13,A8,0
24820: 1028                      INC    A8
24830: 24c8                      SLL    6h,A8
24840: 0508                      SEXT   A8,0
24850: c000 011d                 JR     25A40h
24870: 0570                      SETF   10h,1,0
24880: 85ac                      MOVE   *A13,A12,0
24890: 102c                      INC    A12
248a0: 818d                      MOVE   A12,*A13,0
248b0: 142c                      DEC    A12
248c0: c6e5                      JRLE   24720h
248d0: c000 0113                 JR     25A20h
248f0: 05ac df18 0003            MOVE   @3DF18h,A12,0
24920: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24940: 490c                      CMP    A8,A12
24950: cb03                      JRNE   24990h
24960: 1828                      MOVK   1h,A8
24970: c000 010b                 JR     25A40h
24990: 1988                      MOVK   Ch,A8
249a0: 810d                      MOVE   A8,*A13,0
249b0: 0570                      SETF   10h,1,0
249c0: 85ac                      MOVE   *A13,A12,0
249d0: 4d88                      MOVE   A12,A8
249e0: 248c                      SLL    4h,A12
249f0: 2468                      SLL    3h,A8
24a00: 410c                      ADD    A8,A12
24a10: 0b2c df00 0003            ADDI   3DF00h,A12
24a40: 0550                      SETF   10h,0,0
24a50: 858c                      MOVE   *A12,A12,0
24a60: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24a80: 490c                      CMP    A8,A12
24a90: cb04                      JRNE   24AE0h
24aa0: 0570                      SETF   10h,1,0
24ab0: 85a8                      MOVE   *A13,A8,0
24ac0: c000 00f6                 JR     25A40h
24ae0: 0570                      SETF   10h,1,0
24af0: 85ac                      MOVE   *A13,A12,0
24b00: 102c                      INC    A12
24b10: 818d                      MOVE   A12,*A13,0
24b20: 162c                      SUBK   11h,A12
24b30: c6e8                      JRLE   249C0h
24b40: 0550                      SETF   10h,0,0
24b50: 05ac eb30 0003            MOVE   @3EB30h,A12,0
24b80: 490c                      CMP    A8,A12
24b90: cb04                      JRNE   24BE0h
24ba0: 09c8 00c0                 MOVI   C0h,A8
24bc0: c000 00e6                 JR     25A40h
24be0: 05a8 ed58 0003            MOVE   @3ED58h,A8,0
24c10: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
24c30: 4988                      CMP    A12,A8
24c40: cb00 00dc                 JRNE   25A20h
24c60: 09c8 0680                 MOVI   680h,A8
24c80: c000 00da                 JR     25A40h
24ca0: 1a4c                      MOVK   12h,A12
24cb0: 0570                      SETF   10h,1,0
24cc0: 818d                      MOVE   A12,*A13,0
24cd0: 85ac                      MOVE   *A13,A12,0
24ce0: 4d88                      MOVE   A12,A8
24cf0: 248c                      SLL    4h,A12
24d00: 2468                      SLL    3h,A8
24d10: 410c                      ADD    A8,A12
24d20: 0b2c df00 0003            ADDI   3DF00h,A12
24d50: 0550                      SETF   10h,0,0
24d60: 858c                      MOVE   *A12,A12,0
24d70: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24d90: 490c                      CMP    A8,A12
24da0: cb04                      JRNE   24DF0h
24db0: 0570                      SETF   10h,1,0
24dc0: 85a8                      MOVE   *A13,A8,0
24dd0: c000 00c5                 JR     25A40h
24df0: 0570                      SETF   10h,1,0
24e00: 85ac                      MOVE   *A13,A12,0
24e10: 102c                      INC    A12
24e20: 818d                      MOVE   A12,*A13,0
24e30: 178c                      SUBK   1Ch,A12
24e40: c6e8                      JRLE   24CD0h
24e50: 0550                      SETF   10h,0,0
24e60: 05ac eb48 0003            MOVE   @3EB48h,A12,0
24e90: 490c                      CMP    A8,A12
24ea0: cb00 00b6                 JRNE   25A20h
24ec0: 09c8 0100                 MOVI   100h,A8
24ee0: c000 00b4                 JR     25A40h
24f00: 05ac df00 0003            MOVE   @3DF00h,A12,0
24f30: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
24f50: 490c                      CMP    A8,A12
24f60: cb03                      JRNE   24FA0h
24f70: 4508                      SUB    A8,A8
24f80: c000 00aa                 JR     25A40h
24fa0: 1ba8                      MOVK   1Dh,A8
24fb0: 810d                      MOVE   A8,*A13,0
24fc0: 0570                      SETF   10h,1,0
24fd0: 85ac                      MOVE   *A13,A12,0
24fe0: 4d88                      MOVE   A12,A8
24ff0: 248c                      SLL    4h,A12
25000: 2468                      SLL    3h,A8
25010: 410c                      ADD    A8,A12
25020: 0b2c df00 0003            ADDI   3DF00h,A12
25050: 0550                      SETF   10h,0,0
25060: 858c                      MOVE   *A12,A12,0
25070: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
25090: 490c                      CMP    A8,A12
250a0: cb04                      JRNE   250F0h
250b0: 0570                      SETF   10h,1,0
250c0: 85a8                      MOVE   *A13,A8,0
250d0: c000 0095                 JR     25A40h
250f0: 0570                      SETF   10h,1,0
25100: 85ac                      MOVE   *A13,A12,0
25110: 102c                      INC    A12
25120: 818d                      MOVE   A12,*A13,0
25130: 0b4c ffc0                 CMPI   3Fh,A12
25150: c6e7                      JRLE   24FD0h
25160: 1888                      MOVK   4h,A8
25170: 810d                      MOVE   A8,*A13,0
25180: 85ac                      MOVE   *A13,A12,0
25190: 4d88                      MOVE   A12,A8
251a0: 248c                      SLL    4h,A12
251b0: 2468                      SLL    3h,A8
251c0: 410c                      ADD    A8,A12
251d0: 0b2c eb00 0003            ADDI   3EB00h,A12
25200: 0550                      SETF   10h,0,0
25210: 858c                      MOVE   *A12,A12,0
25220: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
25240: 490c                      CMP    A8,A12
25250: cb06                      JRNE   252C0h
25260: 0570                      SETF   10h,1,0
25270: 85a8                      MOVE   *A13,A8,0
25280: 1028                      INC    A8
25290: 24c8                      SLL    6h,A8
252a0: 0508                      SEXT   A8,0
252b0: c078                      JR     25A40h
252c0: 0570                      SETF   10h,1,0
252d0: 85ac                      MOVE   *A13,A12,0
252e0: 102c                      INC    A12
252f0: 818d                      MOVE   A12,*A13,0
25300: 152c                      SUBK   9h,A12
25310: c6e6                      JRLE   25180h
25320: c06f                      JR     25A20h
25330: 194c                      MOVK   Ah,A12
25340: 0570                      SETF   10h,1,0
25350: 818d                      MOVE   A12,*A13,0
25360: 85ac                      MOVE   *A13,A12,0
25370: 4d88                      MOVE   A12,A8
25380: 248c                      SLL    4h,A12
25390: 2468                      SLL    3h,A8
253a0: 410c                      ADD    A8,A12
253b0: 0b2c eb00 0003            ADDI   3EB00h,A12
253e0: 0550                      SETF   10h,0,0
253f0: 858c                      MOVE   *A12,A12,0
25400: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
25420: 490c                      CMP    A8,A12
25430: cb06                      JRNE   254A0h
25440: 0570                      SETF   10h,1,0
25450: 85a8                      MOVE   *A13,A8,0
25460: 1028                      INC    A8
25470: 24c8                      SLL    6h,A8
25480: 0508                      SEXT   A8,0
25490: c05a                      JR     25A40h
254a0: 0570                      SETF   10h,1,0
254b0: 85ac                      MOVE   *A13,A12,0
254c0: 102c                      INC    A12
254d0: 818d                      MOVE   A12,*A13,0
254e0: 170c                      SUBK   18h,A12
254f0: c6e6                      JRLE   25360h
25500: 0550                      SETF   10h,0,0
25510: 05ac ed70 0003            MOVE   @3ED70h,A12,0
25540: 490c                      CMP    A8,A12
25550: cb4c                      JRNE   25A20h
25560: 09c8 06c0                 MOVI   6C0h,A8
25580: c04b                      JR     25A40h
25590: 1b6c                      MOVK   1Bh,A12
255a0: 0570                      SETF   10h,1,0
255b0: 818d                      MOVE   A12,*A13,0
255c0: 85ac                      MOVE   *A13,A12,0
255d0: 4d88                      MOVE   A12,A8
255e0: 248c                      SLL    4h,A12
255f0: 2468                      SLL    3h,A8
25600: 410c                      ADD    A8,A12
25610: 0b2c eb00 0003            ADDI   3EB00h,A12
25640: 0550                      SETF   10h,0,0
25650: 858c                      MOVE   *A12,A12,0
25660: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
25680: 490c                      CMP    A8,A12
25690: cb06                      JRNE   25700h
256a0: 0570                      SETF   10h,1,0
256b0: 85a8                      MOVE   *A13,A8,0
256c0: 1028                      INC    A8
256d0: 24c8                      SLL    6h,A8
256e0: 0508                      SEXT   A8,0
256f0: c034                      JR     25A40h
25700: 0570                      SETF   10h,1,0
25710: 85ac                      MOVE   *A13,A12,0
25720: 102c                      INC    A12
25730: 818d                      MOVE   A12,*A13,0
25740: 17ac                      SUBK   1Dh,A12
25750: c6e6                      JRLE   255C0h
25760: c02b                      JR     25A20h
25770: 1bcc                      MOVK   1Eh,A12
25780: 0570                      SETF   10h,1,0
25790: 818d                      MOVE   A12,*A13,0
257a0: 85ac                      MOVE   *A13,A12,0
257b0: 4d88                      MOVE   A12,A8
257c0: 248c                      SLL    4h,A12
257d0: 2468                      SLL    3h,A8
257e0: 410c                      ADD    A8,A12
257f0: 0b2c eb00 0003            ADDI   3EB00h,A12
25820: 0550                      SETF   10h,0,0
25830: 858c                      MOVE   *A12,A12,0
25840: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
25860: 490c                      CMP    A8,A12
25870: cb06                      JRNE   258E0h
25880: 0570                      SETF   10h,1,0
25890: 85a8                      MOVE   *A13,A8,0
258a0: 1028                      INC    A8
258b0: 24c8                      SLL    6h,A8
258c0: 0508                      SEXT   A8,0
258d0: c016                      JR     25A40h
258e0: 0570                      SETF   10h,1,0
258f0: 85ac                      MOVE   *A13,A12,0
25900: 102c                      INC    A12
25910: 818d                      MOVE   A12,*A13,0
25920: 0b4c ffd8                 CMPI   27h,A12
25940: c6e5                      JRLE   257A0h
25950: c00c                      JR     25A20h
25960: 0550                      SETF   10h,0,0
25970: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
25990: 148c                      SUBK   4h,A12
259a0: 350c                      CMPK   8h,A12
259b0: c306                      JRHI   25A20h
259c0: 24ac                      SLL    5h,A12
259d0: 0b2c dd00 0003            ADDI   3DD00h,A12
25a00: 878c                      MOVE   *A12,A12,1
25a10: 016c                      JUMP   A12
25a20: 09c8 ffff                 MOVI   FFFFh,A8
25a40: b7ee 0060                 MOVE   *SP(60h),A14,1
25a60: 09af 3000                 MMFM   SP,A12,A13
25a80: 0962                      RETS   2h

_compress_binary_image:
25a90: 098f 000c                 MMTM   SP,A12,A13
25ab0: 4dcd                      MOVE   A14,A13
25ac0: 0b0e 00a0                 ADDI   A0h,A14
25ae0: 09c8 0080                 MOVI   80h,A8
25b00: 8d0d                      MOVB   A8,*A13
25b10: 1828                      MOVK   1h,A8
25b20: ad0d 0010                 MOVB   A8,*A13(10h)
25b40: 4508                      SUB    A8,A8
25b50: ad0d 0020                 MOVB   A8,*A13(20h)
25b70: 1828                      MOVK   1h,A8
25b80: 0550                      SETF   10h,0,0
25b90: b10d 0030                 MOVE   A8,*A13(30h),0
25bb0: b10d 0040                 MOVE   A8,*A13(40h),0
25bd0: 4508                      SUB    A8,A8
25be0: b10d 0050                 MOVE   A8,*A13(50h),0
25c00: b10d 0060                 MOVE   A8,*A13(60h),0
25c20: 09e8 3560 0004            MOVI   43560h,A8
25c50: b30d 0080                 MOVE   A8,*A13(80h),1
25c70: 1908                      MOVK   8h,A8
25c80: 05e8 3380 0004            MOVB   A8,@43380h
25cb0: b7a8 0080                 MOVE   *A13(80h),A8,1
25cd0: 0548                      SETF   8h,0,0
25ce0: 8508                      MOVE   *A8,A8,0
25cf0: 85ac                      MOVE   *A13,A12,0
25d00: 5188                      AND    A12,A8
25d10: ad0d 0020                 MOVB   A8,*A13(20h)
25d30: b5a8 0010                 MOVE   *A13(10h),A8,0
25d50: 0d88 0023                 DSJ    A8,25FA0h
25d70: b5a8 0020                 MOVE   *A13(20h),A8,0
25d90: ca07                      JREQ   25E10h
25da0: 0550                      SETF   10h,0,0
25db0: b5a8 0050                 MOVE   *A13(50h),A8,0
25dd0: 1028                      INC    A8
25de0: b10d 0050                 MOVE   A8,*A13(50h),0
25e00: c039                      JR     261A0h
25e10: a3cf                      MOVE   A14,-*SP,1
25e20: 4508                      SUB    A8,A8
25e30: 930e                      MOVE   A8,*A14+,1
25e40: 1828                      MOVK   1h,A8
25e50: 930e                      MOVE   A8,*A14+,1
25e60: 0550                      SETF   10h,0,0
25e70: b5a8 0050                 MOVE   *A13(50h),A8,0
25e90: 930e                      MOVE   A8,*A14+,1
25ea0: 0d5f 0e60 0002            CALLA  20E60h
25ed0: 0550                      SETF   10h,0,0
25ee0: b5ac 0060                 MOVE   *A13(60h),A12,0
25f00: 4188                      ADD    A12,A8
25f10: b10d 0060                 MOVE   A8,*A13(60h),0
25f30: 458c                      SUB    A12,A12
25f40: ad8d 0010                 MOVB   A12,*A13(10h)
25f60: 1828                      MOVK   1h,A8
25f70: b10d 0050                 MOVE   A8,*A13(50h),0
25f90: c020                      JR     261A0h
25fa0: b5a8 0020                 MOVE   *A13(20h),A8,0
25fc0: ca17                      JREQ   26140h
25fd0: a3cf                      MOVE   A14,-*SP,1
25fe0: 4508                      SUB    A8,A8
25ff0: 930e                      MOVE   A8,*A14+,1
26000: 930e                      MOVE   A8,*A14+,1
26010: 0550                      SETF   10h,0,0
26020: b5a8 0050                 MOVE   *A13(50h),A8,0
26040: 930e                      MOVE   A8,*A14+,1
26050: 0d5f 0e60 0002            CALLA  20E60h
26080: 0550                      SETF   10h,0,0
26090: b5ac 0060                 MOVE   *A13(60h),A12,0
260b0: 4188                      ADD    A12,A8
260c0: b10d 0060                 MOVE   A8,*A13(60h),0
260e0: 182c                      MOVK   1h,A12
260f0: ad8d 0010                 MOVB   A12,*A13(10h)
26110: b18d 0050                 MOVE   A12,*A13(50h),0
26130: c006                      JR     261A0h
26140: 0550                      SETF   10h,0,0
26150: b5a8 0050                 MOVE   *A13(50h),A8,0
26170: 1028                      INC    A8
26180: b10d 0050                 MOVE   A8,*A13(50h),0
261a0: b5ac 0030                 MOVE   *A13(30h),A12,0
261c0: 102c                      INC    A12
261d0: b18d 0030                 MOVE   A12,*A13(30h),0
261f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
26210: b508 0030                 MOVE   *A8(30h),A8,0
26230: 490c                      CMP    A8,A12
26240: c638                      JRLE   265D0h
26250: a3cf                      MOVE   A14,-*SP,1
26260: 1828                      MOVK   1h,A8
26270: 930e                      MOVE   A8,*A14+,1
26280: afa8 0010                 MOVB   *A13(10h),A8
262a0: 930e                      MOVE   A8,*A14+,1
262b0: b5a8 0050                 MOVE   *A13(50h),A8,0
262d0: 930e                      MOVE   A8,*A14+,1
262e0: 0d5f 0e60 0002            CALLA  20E60h
26310: 0550                      SETF   10h,0,0
26320: b5ac 0060                 MOVE   *A13(60h),A12,0
26340: 4188                      ADD    A12,A8
26350: b10d 0060                 MOVE   A8,*A13(60h),0
26370: b7ac 0080                 MOVE   *A13(80h),A12,1
26390: 110c                      ADDK   8h,A12
263a0: b38d 0080                 MOVE   A12,*A13(80h),1
263c0: 09c8 0080                 MOVI   80h,A8
263e0: 8d0d                      MOVB   A8,*A13
263f0: 182c                      MOVK   1h,A12
26400: b18d 0030                 MOVE   A12,*A13(30h),0
26420: b5ac 0040                 MOVE   *A13(40h),A12,0
26440: 102c                      INC    A12
26450: b18d 0040                 MOVE   A12,*A13(40h),0
26470: b5ac 0040                 MOVE   *A13(40h),A12,0
26490: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
264b0: b508 0040                 MOVE   *A8(40h),A8,0
264d0: 490c                      CMP    A8,A12
264e0: c606                      JRLE   26550h
264f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
26510: b9a8 0060 0000            MOVE   *A13(60h),*A8(0h),0
26540: c019                      JR     266E0h
26550: 4508                      SUB    A8,A8
26560: b10d 0050                 MOVE   A8,*A13(50h),0
26580: 182c                      MOVK   1h,A12
26590: ad8d 0010                 MOVB   A12,*A13(10h)
265b0: c000 ff6e                 JR     25CB0h
265d0: 0548                      SETF   8h,0,0
265e0: 85a8                      MOVE   *A13,A8,0
265f0: 2fe8                      SRL    1h,A8
26600: 8d0d                      MOVB   A8,*A13
26610: 85a8                      MOVE   *A13,A8,0
26620: cb00 ff67                 JRNE   25CB0h
26640: 09c8 0080                 MOVI   80h,A8
26660: 8d0d                      MOVB   A8,*A13
26670: b7ac 0080                 MOVE   *A13(80h),A12,1
26690: 110c                      ADDK   8h,A12
266a0: b38d 0080                 MOVE   A12,*A13(80h),1
266c0: c000 ff5d                 JR     25CB0h
266e0: b7ee 0060                 MOVE   *SP(60h),A14,1
26700: 09af 3000                 MMFM   SP,A12,A13
26720: 0962                      RETS   2h

_write_comp_binary_image:
26730: 098f 001c                 MMTM   SP,A11-A13
26750: 4dcd                      MOVE   A14,A13
26760: 0b0e 0100                 ADDI   100h,A14
26780: 09e8 3560 0004            MOVI   43560h,A8
267b0: b30d 0020                 MOVE   A8,*A13(20h),1
267d0: 4508                      SUB    A8,A8
267e0: 0550                      SETF   10h,0,0
267f0: b10d 0040                 MOVE   A8,*A13(40h),0
26810: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
26830: b90d 0010 0070            MOVE   *A8(10h),*A13(70h),0
26860: b90d 0020 0080            MOVE   *A8(20h),*A13(80h),0
26890: 0548                      SETF   8h,0,0
268a0: b508 0058                 MOVE   *A8(58h),A8,0
268c0: cb06                      JRNE   26930h
268d0: 09e8 0000 2000            MOVI   20000000h,A8
26900: b30d 00a0                 MOVE   A8,*A13(A0h),1
26920: c005                      JR     26980h
26930: 09e8 0000 4000            MOVI   40000000h,A8
26960: b30d 00a0                 MOVE   A8,*A13(A0h),1
26980: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
269a0: b508 0098                 MOVE   *A8(98h),A8,0
269c0: 38a8                      DSJS   A8,26A20h
269d0: 09c8 4000                 MOVI   4000h,A8
269f0: b30d 00e0                 MOVE   A8,*A13(E0h),1
26a10: c004                      JR     26A60h
26a20: 09c8 2000                 MOVI   2000h,A8
26a40: b30d 00e0                 MOVE   A8,*A13(E0h),1
26a60: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
26a80: b508 0080                 MOVE   *A8(80h),A8,0
26aa0: 0d88 0031                 DSJ    A8,26DD0h
26ac0: 4508                      SUB    A8,A8
26ad0: 0550                      SETF   10h,0,0
26ae0: 0588 7020 000e            MOVE   A8,@E7020h,0
26b10: 0588 6fc0 000e            MOVE   A8,@E6FC0h,0
26b40: 0588 7040 000e            MOVE   A8,@E7040h,0
26b70: 09c8 0080                 MOVI   80h,A8
26b90: 05e8 7050 000e            MOVB   A8,@E7050h
26bc0: 19e8                      MOVK   Fh,A8
26bd0: 05e8 7010 000e            MOVB   A8,@E7010h
26c00: 4508                      SUB    A8,A8
26c10: 05e8 7030 000e            MOVB   A8,@E7030h
26c40: 05e8 7000 000e            MOVB   A8,@E7000h
26c70: bbad 00a0 00c0            MOVE   *A13(A0h),*A13(C0h),1
26ca0: b5a8 0080                 MOVE   *A13(80h),A8,0
26cc0: b7ab 00e0                 MOVE   *A13(E0h),A11,1
26ce0: 5f0b                      MPYU   A8,A11
26cf0: b7a8 00c0                 MOVE   *A13(C0h),A8,1
26d10: 410b                      ADD    A8,A11
26d20: b36d 00c0                 MOVE   A11,*A13(C0h),1
26d40: b5a8 0070                 MOVE   *A13(70h),A8,0
26d60: 2468                      SLL    3h,A8
26d70: 4168                      ADD    A11,A8
26d80: b30d 00c0                 MOVE   A8,*A13(C0h),1
26da0: 0788 6fe0 000e            MOVE   A8,@E6FE0h,1
26dd0: 0550                      SETF   10h,0,0
26de0: 05a8 6fc0 000e            MOVE   @E6FC0h,A8,0
26e10: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
26e30: b56b 0040                 MOVE   *A11(40h),A11,0
26e50: 4968                      CMP    A11,A8
26e60: c500 0276                 JRGE   295E0h
26e80: 0548                      SETF   8h,0,0
26e90: 05a8 7030 000e            MOVE   @E7030h,A8,0
26ec0: 2428                      SLL    1h,A8
26ed0: 05e8 7030 000e            MOVB   A8,@E7030h
26f00: b7a8 0020                 MOVE   *A13(20h),A8,1
26f20: 850b                      MOVE   *A8,A11,0
26f30: 05a8 7050 000e            MOVE   @E7050h,A8,0
26f60: 510b                      AND    A8,A11
26f70: ca02                      JREQ   26FA0h
26f80: 182b                      MOVK   1h,A11
26f90: c001                      JR     26FB0h
26fa0: 456b                      SUB    A11,A11
26fb0: 05a8 7030 000e            MOVE   @E7030h,A8,0
26fe0: 410b                      ADD    A8,A11
26ff0: 05eb 7030 000e            MOVB   A11,@E7030h
27020: 05a8 7000 000e            MOVE   @E7000h,A8,0
27050: 1028                      INC    A8
27060: 05e8 7000 000e            MOVB   A8,@E7000h
27090: 05a8 7010 000e            MOVE   @E7010h,A8,0
270c0: 15e8                      SUBK   Fh,A8
270d0: cb10                      JRNE   271E0h
270e0: a3cf                      MOVE   A14,-*SP,1
270f0: 05a8 7030 000e            MOVE   @E7030h,A8,0
27120: 930e                      MOVE   A8,*A14+,1
27130: 05ab 7000 000e            MOVE   @E7000h,A11,0
27160: 936e                      MOVE   A11,*A14+,1
27170: 0d5f 4320 0002            CALLA  24320h
271a0: 0570                      SETF   10h,1,0
271b0: b10d 0050                 MOVE   A8,*A13(50h),0
271d0: c00f                      JR     272D0h
271e0: a3cf                      MOVE   A14,-*SP,1
271f0: 05a8 7030 000e            MOVE   @E7030h,A8,0
27220: 930e                      MOVE   A8,*A14+,1
27230: 05ab 7000 000e            MOVE   @E7000h,A11,0
27260: 936e                      MOVE   A11,*A14+,1
27270: 0d5f 2a80 0002            CALLA  22A80h
272a0: 0570                      SETF   10h,1,0
272b0: b10d 0050                 MOVE   A8,*A13(50h),0
272d0: b5a8 0050                 MOVE   *A13(50h),A8,0
272f0: 1028                      INC    A8
27300: ca00 0178                 JREQ   28AA0h
27320: b5a8 0050                 MOVE   *A13(50h),A8,0
27340: 0b48 ffc0                 CMPI   3Fh,A8
27360: c60c                      JRLE   27430h
27370: 0588 7020 000e            MOVE   A8,@E7020h,0
273a0: 456b                      SUB    A11,A11
273b0: 05eb 7030 000e            MOVB   A11,@E7030h
273e0: 05eb 7000 000e            MOVB   A11,@E7000h
27410: c000 0167                 JR     28AA0h
27430: 0550                      SETF   10h,0,0
27440: 05ab 7020 000e            MOVE   @E7020h,A11,0
27470: 4168                      ADD    A11,A8
27480: b10d 0050                 MOVE   A8,*A13(50h),0
274a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
274c0: 0548                      SETF   8h,0,0
274d0: b508 0098                 MOVE   *A8(98h),A8,0
274f0: 0d88 0048                 DSJ    A8,27990h
27510: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
27530: 0550                      SETF   10h,0,0
27540: b508 0010                 MOVE   *A8(10h),A8,0
27560: 05ab 7040 000e            MOVE   @E7040h,A11,0
27590: 4168                      ADD    A11,A8
275a0: 0b48 f7ff                 CMPI   800h,A8
275c0: c60c                      JRLE   27690h
275d0: 0570                      SETF   10h,1,0
275e0: b5a8 0050                 MOVE   *A13(50h),A8,0
27600: 4168                      ADD    A11,A8
27610: 0588 7040 000e            MOVE   A8,@E7040h,0
27640: 4508                      SUB    A8,A8
27650: b10d 0050                 MOVE   A8,*A13(50h),0
27670: c000 0121                 JR     288A0h
27690: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
276b0: b508 0010                 MOVE   *A8(10h),A8,0
276d0: 4168                      ADD    A11,A8
276e0: 0570                      SETF   10h,1,0
276f0: b5ab 0050                 MOVE   *A13(50h),A11,0
27710: 4168                      ADD    A11,A8
27720: 0b48 f7ff                 CMPI   800h,A8
27740: c61a                      JRLE   278F0h
27750: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
27770: 0550                      SETF   10h,0,0
27780: b50b 0010                 MOVE   *A8(10h),A11,0
277a0: 03ab                      NEG    A11
277b0: 05a8 7040 000e            MOVE   @E7040h,A8,0
277e0: 450b                      SUB    A8,A11
277f0: 0b0b 0800                 ADDI   800h,A11
27810: b16d 0060                 MOVE   A11,*A13(60h),0
27830: 0570                      SETF   10h,1,0
27840: b5ab 0050                 MOVE   *A13(50h),A11,0
27860: 410b                      ADD    A8,A11
27870: 058b 7040 000e            MOVE   A11,@E7040h,0
278a0: b9ad 0060 0050            MOVE   *A13(60h),*A13(50h),0
278d0: c000 00fb                 JR     288A0h
278f0: 0550                      SETF   10h,0,0
27900: 05a8 7040 000e            MOVE   @E7040h,A8,0
27930: 410b                      ADD    A8,A11
27940: 058b 7040 000e            MOVE   A11,@E7040h,0
27970: c000 00f1                 JR     288A0h
27990: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
279b0: 0550                      SETF   10h,0,0
279c0: b508 0010                 MOVE   *A8(10h),A8,0
279e0: 05ab 7040 000e            MOVE   @E7040h,A11,0
27a10: 4168                      ADD    A11,A8
27a20: 0b48 fbff                 CMPI   400h,A8
27a40: c60c                      JRLE   27B10h
27a50: 0570                      SETF   10h,1,0
27a60: b5a8 0050                 MOVE   *A13(50h),A8,0
27a80: 4168                      ADD    A11,A8
27a90: 0588 7040 000e            MOVE   A8,@E7040h,0
27ac0: 4508                      SUB    A8,A8
27ad0: b10d 0050                 MOVE   A8,*A13(50h),0
27af0: c000 00d9                 JR     288A0h
27b10: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
27b30: b508 0010                 MOVE   *A8(10h),A8,0
27b50: 4168                      ADD    A11,A8
27b60: 0570                      SETF   10h,1,0
27b70: b5ab 0050                 MOVE   *A13(50h),A11,0
27b90: 4168                      ADD    A11,A8
27ba0: 0b48 fbff                 CMPI   400h,A8
27bc0: c61a                      JRLE   27D70h
27bd0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
27bf0: 0550                      SETF   10h,0,0
27c00: b50b 0010                 MOVE   *A8(10h),A11,0
27c20: 03ab                      NEG    A11
27c30: 05a8 7040 000e            MOVE   @E7040h,A8,0
27c60: 450b                      SUB    A8,A11
27c70: 0b0b 0400                 ADDI   400h,A11
27c90: b16d 0060                 MOVE   A11,*A13(60h),0
27cb0: 0570                      SETF   10h,1,0
27cc0: b5ab 0050                 MOVE   *A13(50h),A11,0
27ce0: 410b                      ADD    A8,A11
27cf0: 058b 7040 000e            MOVE   A11,@E7040h,0
27d20: b9ad 0060 0050            MOVE   *A13(60h),*A13(50h),0
27d50: c000 00b3                 JR     288A0h
27d70: 0550                      SETF   10h,0,0
27d80: 05a8 7040 000e            MOVE   @E7040h,A8,0
27db0: 410b                      ADD    A8,A11
27dc0: 058b 7040 000e            MOVE   A11,@E7040h,0
27df0: c000 00a9                 JR     288A0h
27e10: 05a8 7010 000e            MOVE   @E7010h,A8,0
27e40: 15e8                      SUBK   Fh,A8
27e50: cb1e                      JRNE   28040h
27e60: 4508                      SUB    A8,A8
27e70: 0550                      SETF   10h,0,0
27e80: 810d                      MOVE   A8,*A13,0
27e90: 0570                      SETF   10h,1,0
27ea0: b5ab 0050                 MOVE   *A13(50h),A11,0
27ec0: c600 00a7                 JRLE   28950h
27ee0: 07ab 6fe0 000e            MOVE   @E6FE0h,A11,1
27f10: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
27f30: 0548                      SETF   8h,0,0
27f40: d10b 0090                 MOVE   *A8(90h),*A11+,0
27f60: 078b 6fe0 000e            MOVE   A11,@E6FE0h,1
27f90: 0550                      SETF   10h,0,0
27fa0: 85a8                      MOVE   *A13,A8,0
27fb0: 1028                      INC    A8
27fc0: 810d                      MOVE   A8,*A13,0
27fd0: 0570                      SETF   10h,1,0
27fe0: b5ab 0050                 MOVE   *A13(50h),A11,0
28000: 4968                      CMP    A11,A8
28010: c4ec                      JRLT   27EE0h
28020: c000 0091                 JR     28950h
28040: 4508                      SUB    A8,A8
28050: 0550                      SETF   10h,0,0
28060: 810d                      MOVE   A8,*A13,0
28070: 0570                      SETF   10h,1,0
28080: b5ab 0050                 MOVE   *A13(50h),A11,0
280a0: c600 0089                 JRLE   28950h
280c0: 07ab 6fe0 000e            MOVE   @E6FE0h,A11,1
280f0: 4508                      SUB    A8,A8
28100: 0548                      SETF   8h,0,0
28110: 910b                      MOVE   A8,*A11+,0
28120: 078b 6fe0 000e            MOVE   A11,@E6FE0h,1
28150: 0550                      SETF   10h,0,0
28160: 85a8                      MOVE   *A13,A8,0
28170: 1028                      INC    A8
28180: 810d                      MOVE   A8,*A13,0
28190: 0570                      SETF   10h,1,0
281a0: b5ab 0050                 MOVE   *A13(50h),A11,0
281c0: 4968                      CMP    A11,A8
281d0: c4ee                      JRLT   280C0h
281e0: c076                      JR     28950h
281f0: 05a8 7010 000e            MOVE   @E7010h,A8,0
28220: 15e8                      SUBK   Fh,A8
28230: cb1f                      JRNE   28430h
28240: 4508                      SUB    A8,A8
28250: 0550                      SETF   10h,0,0
28260: 810d                      MOVE   A8,*A13,0
28270: 0570                      SETF   10h,1,0
28280: b5ab 0050                 MOVE   *A13(50h),A11,0
282a0: c66a                      JRLE   28950h
282b0: 07ab 6fe0 000e            MOVE   @E6FE0h,A11,1
282e0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
28300: 0548                      SETF   8h,0,0
28310: b508 0090                 MOVE   *A8(90h),A8,0
28330: 856c                      MOVE   *A11,A12,0
28340: 550c                      OR     A8,A12
28350: 918b                      MOVE   A12,*A11+,0
28360: 078b 6fe0 000e            MOVE   A11,@E6FE0h,1
28390: 0550                      SETF   10h,0,0
283a0: 85ac                      MOVE   *A13,A12,0
283b0: 102c                      INC    A12
283c0: 818d                      MOVE   A12,*A13,0
283d0: 0570                      SETF   10h,1,0
283e0: b5a8 0050                 MOVE   *A13(50h),A8,0
28400: 490c                      CMP    A8,A12
28410: c4e9                      JRLT   282B0h
28420: c052                      JR     28950h
28430: 0570                      SETF   10h,1,0
28440: b5ac 0050                 MOVE   *A13(50h),A12,0
28460: 246c                      SLL    3h,A12
28470: 07a8 6fe0 000e            MOVE   @E6FE0h,A8,1
284a0: 410c                      ADD    A8,A12
284b0: 078c 6fe0 000e            MOVE   A12,@E6FE0h,1
284e0: c046                      JR     28950h
284f0: 05ac 7010 000e            MOVE   @E7010h,A12,0
28520: 15ec                      SUBK   Fh,A12
28530: cb2a                      JRNE   287E0h
28540: 458c                      SUB    A12,A12
28550: 0550                      SETF   10h,0,0
28560: 818d                      MOVE   A12,*A13,0
28570: 0570                      SETF   10h,1,0
28580: b5a8 0050                 MOVE   *A13(50h),A8,0
285a0: c63a                      JRLE   28950h
285b0: 07ac 6fe0 000e            MOVE   @E6FE0h,A12,1
285e0: 0548                      SETF   8h,0,0
285f0: 8588                      MOVE   *A12,A8,0
28600: 1fe8                      BTST   0h,A8
28610: ca08                      JREQ   286A0h
28620: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
28640: d10c 0090                 MOVE   *A8(90h),*A12+,0
28660: 078c 6fe0 000e            MOVE   A12,@E6FE0h,1
28690: c00a                      JR     28740h
286a0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
286c0: b50b 0090                 MOVE   *A8(90h),A11,0
286e0: 8588                      MOVE   *A12,A8,0
286f0: 5568                      OR     A11,A8
28700: 910c                      MOVE   A8,*A12+,0
28710: 078c 6fe0 000e            MOVE   A12,@E6FE0h,1
28740: 0550                      SETF   10h,0,0
28750: 85a8                      MOVE   *A13,A8,0
28760: 1028                      INC    A8
28770: 810d                      MOVE   A8,*A13,0
28780: 0570                      SETF   10h,1,0
28790: b5ab 0050                 MOVE   *A13(50h),A11,0
287b0: 4968                      CMP    A11,A8
287c0: c4de                      JRLT   285B0h
287d0: c017                      JR     28950h
287e0: 0570                      SETF   10h,1,0
287f0: b5ac 0050                 MOVE   *A13(50h),A12,0
28810: 246c                      SLL    3h,A12
28820: 07a8 6fe0 000e            MOVE   @E6FE0h,A8,1
28850: 410c                      ADD    A8,A12
28860: 078c 6fe0 000e            MOVE   A12,@E6FE0h,1
28890: c00b                      JR     28950h
288a0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
288c0: 0548                      SETF   8h,0,0
288d0: b588 0088                 MOVE   *A12(88h),A8,0
288f0: cabf                      JREQ   284F0h
28900: 1428                      DEC    A8
28910: ca00 ff4e                 JREQ   27E10h
28930: 1428                      DEC    A8
28940: ca8a                      JREQ   281F0h
28950: 458c                      SUB    A12,A12
28960: 0550                      SETF   10h,0,0
28970: 058c 7020 000e            MOVE   A12,@E7020h,0
289a0: 05ec 7030 000e            MOVB   A12,@E7030h
289d0: 05ec 7000 000e            MOVB   A12,@E7000h
28a00: 0548                      SETF   8h,0,0
28a10: 05a8 7010 000e            MOVE   @E7010h,A8,0
28a40: 15e8                      SUBK   Fh,A8
28a50: ca01                      JREQ   28A70h
28a60: 19ec                      MOVK   Fh,A12
28a70: 05ec 7010 000e            MOVB   A12,@E7010h
28aa0: 0550                      SETF   10h,0,0
28ab0: 05ac 7040 000e            MOVE   @E7040h,A12,0
28ae0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
28b00: b50b 0030                 MOVE   *A8(30h),A11,0
28b20: 496c                      CMP    A11,A12
28b30: c478                      JRLT   292C0h
28b40: 19eb                      MOVK   Fh,A11
28b50: 05eb 7010 000e            MOVB   A11,@E7010h
28b80: 4508                      SUB    A8,A8
28b90: 0588 7040 000e            MOVE   A8,@E7040h,0
28bc0: 09cc 0080                 MOVI   80h,A12
28be0: 05ec 7050 000e            MOVB   A12,@E7050h
28c10: 05ab 6fc0 000e            MOVE   @E6FC0h,A11,0
28c40: 102b                      INC    A11
28c50: 058b 6fc0 000e            MOVE   A11,@E6FC0h,0
28c80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
28ca0: b508 0040                 MOVE   *A8(40h),A8,0
28cc0: 490b                      CMP    A8,A11
28cd0: cb07                      JRNE   28D50h
28ce0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
28d00: 456b                      SUB    A11,A11
28d10: ad68 00b8                 MOVB   A11,*A8(B8h)
28d30: c000 008e                 JR     29630h
28d50: b7a8 0020                 MOVE   *A13(20h),A8,1
28d70: 1108                      ADDK   8h,A8
28d80: b30d 0020                 MOVE   A8,*A13(20h),1
28da0: b5a8 0040                 MOVE   *A13(40h),A8,0
28dc0: 1028                      INC    A8
28dd0: b10d 0040                 MOVE   A8,*A13(40h),0
28df0: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
28e10: 856b                      MOVE   *A11,A11,0
28e20: 4968                      CMP    A11,A8
28e30: cb06                      JRNE   28EA0h
28e40: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
28e60: 1828                      MOVK   1h,A8
28e70: ad0b 00b8                 MOVB   A8,*A11(B8h)
28e90: c079                      JR     29630h
28ea0: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
28ec0: 0548                      SETF   8h,0,0
28ed0: b56b 0098                 MOVE   *A11(98h),A11,0
28ef0: 3a4b                      DSJS   A11,29020h
28f00: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
28f20: 0550                      SETF   10h,0,0
28f30: b56b 0020                 MOVE   *A11(20h),A11,0
28f50: 05a8 6fc0 000e            MOVE   @E6FC0h,A8,0
28f80: 410b                      ADD    A8,A11
28f90: 0b4b f9ff                 CMPI   600h,A11
28fb0: c618                      JRLE   29140h
28fc0: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
28fe0: 4508                      SUB    A8,A8
28ff0: ad0b 00b8                 MOVB   A8,*A11(B8h)
29010: c061                      JR     29630h
29020: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
29040: 0550                      SETF   10h,0,0
29050: b56b 0020                 MOVE   *A11(20h),A11,0
29070: 05a8 6fc0 000e            MOVE   @E6FC0h,A8,0
290a0: 410b                      ADD    A8,A11
290b0: 0b4b fcff                 CMPI   300h,A11
290d0: c606                      JRLE   29140h
290e0: b7ab ffe0                 MOVE   *A13(FFE0h),A11,1
29100: 4508                      SUB    A8,A8
29110: ad0b 00b8                 MOVB   A8,*A11(B8h)
29130: c04f                      JR     29630h
29140: bbad 00a0 00c0            MOVE   *A13(A0h),*A13(C0h),1
29170: b5ab 0080                 MOVE   *A13(80h),A11,0
29190: 410b                      ADD    A8,A11
291a0: b7a8 00e0                 MOVE   *A13(E0h),A8,1
291c0: 5f0b                      MPYU   A8,A11
291d0: b7a8 00c0                 MOVE   *A13(C0h),A8,1
291f0: 410b                      ADD    A8,A11
29200: b36d 00c0                 MOVE   A11,*A13(C0h),1
29220: b5a8 0070                 MOVE   *A13(70h),A8,0
29240: 2468                      SLL    3h,A8
29250: 4168                      ADD    A11,A8
29260: b30d 00c0                 MOVE   A8,*A13(C0h),1
29280: 0788 6fe0 000e            MOVE   A8,@E6FE0h,1
292b0: c027                      JR     29530h
292c0: 0548                      SETF   8h,0,0
292d0: 05ab 7050 000e            MOVE   @E7050h,A11,0
29300: 2feb                      SRL    1h,A11
29310: 05eb 7050 000e            MOVB   A11,@E7050h
29340: 05ab 7050 000e            MOVE   @E7050h,A11,0
29370: cb1b                      JRNE   29530h
29380: 09c8 0080                 MOVI   80h,A8
293a0: 05e8 7050 000e            MOVB   A8,@E7050h
293d0: b7ab 0020                 MOVE   *A13(20h),A11,1
293f0: 110b                      ADDK   8h,A11
29400: b36d 0020                 MOVE   A11,*A13(20h),1
29420: 0550                      SETF   10h,0,0
29430: b5ab 0040                 MOVE   *A13(40h),A11,0
29450: 102b                      INC    A11
29460: b16d 0040                 MOVE   A11,*A13(40h),0
29480: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
294a0: 858c                      MOVE   *A12,A12,0
294b0: 498b                      CMP    A12,A11
294c0: cb06                      JRNE   29530h
294d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
294f0: 182b                      MOVK   1h,A11
29500: ad6c 00b8                 MOVB   A11,*A12(B8h)
29520: c010                      JR     29630h
29530: 0550                      SETF   10h,0,0
29540: 05ac 6fc0 000e            MOVE   @E6FC0h,A12,0
29570: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
29590: b50b 0040                 MOVE   *A8(40h),A11,0
295b0: 496c                      CMP    A11,A12
295c0: c400 fd8a                 JRLT   26E80h
295e0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
29600: 4508                      SUB    A8,A8
29610: ad0c 00b8                 MOVB   A8,*A12(B8h)
29630: b7ee 0080                 MOVE   *SP(80h),A14,1
29650: 09af 3800                 MMFM   SP,A11-A13
29670: 0962                      RETS   2h

_set_up_luts:
29680: 098f 000c                 MMTM   SP,A12,A13
296a0: 4dcd                      MOVE   A14,A13
296b0: 100e                      ADDK   20h,A14
296c0: 0548                      SETF   8h,0,0
296d0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
296f0: cb0f                      JRNE   297F0h
29700: a3cf                      MOVE   A14,-*SP,1
29710: 09e8 f440 0003            MOVI   3F440h,A8
29740: 930e                      MOVE   A8,*A14+,1
29750: 09c8 0100                 MOVI   100h,A8
29770: 930e                      MOVE   A8,*A14+,1
29780: 4508                      SUB    A8,A8
29790: 930e                      MOVE   A8,*A14+,1
297a0: 1828                      MOVK   1h,A8
297b0: 930e                      MOVE   A8,*A14+,1
297c0: 0d5f 0000 0000            CALLA  0h
297f0: 0548                      SETF   8h,0,0
29800: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
29820: 39e8                      DSJS   A8,29920h
29830: a3cf                      MOVE   A14,-*SP,1
29840: 09e8 f440 0003            MOVI   3F440h,A8
29870: 930e                      MOVE   A8,*A14+,1
29880: 09c8 0100                 MOVI   100h,A8
298a0: 930e                      MOVE   A8,*A14+,1
298b0: 4508                      SUB    A8,A8
298c0: 930e                      MOVE   A8,*A14+,1
298d0: 1848                      MOVK   2h,A8
298e0: 930e                      MOVE   A8,*A14+,1
298f0: 0d5f 0000 0000            CALLA  0h
29920: 0548                      SETF   8h,0,0
29930: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
29950: 0dc8 0067                 DSJNE  A8,29FE0h
29970: 4508                      SUB    A8,A8
29980: 0570                      SETF   10h,1,0
29990: 810d                      MOVE   A8,*A13,0
299a0: 0550                      SETF   10h,0,0
299b0: 05a8 f390 0003            MOVE   @3F390h,A8,0
299e0: c638                      JRLE   29D70h
299f0: 0570                      SETF   10h,1,0
29a00: 85a8                      MOVE   *A13,A8,0
29a10: 4d0c                      MOVE   A8,A12
29a20: 2488                      SLL    4h,A8
29a30: 246c                      SLL    3h,A12
29a40: 4188                      ADD    A12,A8
29a50: 0b28 1b40 0004            ADDI   41B40h,A8
29a80: 85ac                      MOVE   *A13,A12,0
29a90: 24ac                      SLL    5h,A12
29aa0: 0b2c 0000 0000            ADDI   0h,A12
29ad0: 9d88                      MOVB   *A12,*A8
29ae0: 85ac                      MOVE   *A13,A12,0
29af0: 4d88                      MOVE   A12,A8
29b00: 248c                      SLL    4h,A12
29b10: 2468                      SLL    3h,A8
29b20: 410c                      ADD    A8,A12
29b30: 0b2c 1b40 0004            ADDI   41B40h,A12
29b60: 85a8                      MOVE   *A13,A8,0
29b70: 24a8                      SLL    5h,A8
29b80: 0b28 0000 0000            ADDI   0h,A8
29bb0: bd0c 0008 0008            MOVB   *A8(8h),*A12(8h)
29be0: 85ac                      MOVE   *A13,A12,0
29bf0: 4d88                      MOVE   A12,A8
29c00: 248c                      SLL    4h,A12
29c10: 2468                      SLL    3h,A8
29c20: 410c                      ADD    A8,A12
29c30: 0b2c 1b40 0004            ADDI   41B40h,A12
29c60: 85a8                      MOVE   *A13,A8,0
29c70: 24a8                      SLL    5h,A8
29c80: 0b28 0000 0000            ADDI   0h,A8
29cb0: bd0c 0010 0010            MOVB   *A8(10h),*A12(10h)
29ce0: 85ac                      MOVE   *A13,A12,0
29cf0: 102c                      INC    A12
29d00: 818d                      MOVE   A12,*A13,0
29d10: 0550                      SETF   10h,0,0
29d20: 05a8 f390 0003            MOVE   @3F390h,A8,0
29d50: 490c                      CMP    A8,A12
29d60: c4c8                      JRLT   299F0h
29d70: 0548                      SETF   8h,0,0
29d80: 05ac f360 0003            MOVE   @3F360h,A12,0
29db0: 4d88                      MOVE   A12,A8
29dc0: 248c                      SLL    4h,A12
29dd0: 2468                      SLL    3h,A8
29de0: 410c                      ADD    A8,A12
29df0: 0b2c 1b40 0004            ADDI   41B40h,A12
29e20: 4508                      SUB    A8,A8
29e30: 8d0c                      MOVB   A8,*A12
29e40: 05ac f360 0003            MOVE   @3F360h,A12,0
29e70: 4d88                      MOVE   A12,A8
29e80: 248c                      SLL    4h,A12
29e90: 2468                      SLL    3h,A8
29ea0: 410c                      ADD    A8,A12
29eb0: 0b2c 1b40 0004            ADDI   41B40h,A12
29ee0: 4508                      SUB    A8,A8
29ef0: ad0c 0008                 MOVB   A8,*A12(8h)
29f10: 05ac f360 0003            MOVE   @3F360h,A12,0
29f40: 4d88                      MOVE   A12,A8
29f50: 248c                      SLL    4h,A12
29f60: 2468                      SLL    3h,A8
29f70: 410c                      ADD    A8,A12
29f80: 0b2c 1b40 0004            ADDI   41B40h,A12
29fb0: 4508                      SUB    A8,A8
29fc0: ad0c 0010                 MOVB   A8,*A12(10h)
29fe0: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
2a000: 0dcc 0040                 DSJNE  A12,2A420h
2a020: 458c                      SUB    A12,A12
2a030: 0570                      SETF   10h,1,0
2a040: 818d                      MOVE   A12,*A13,0
2a050: 0550                      SETF   10h,0,0
2a060: 05a8 f3a0 0003            MOVE   @3F3A0h,A8,0
2a090: c638                      JRLE   2A420h
2a0a0: 0570                      SETF   10h,1,0
2a0b0: 85ac                      MOVE   *A13,A12,0
2a0c0: 4d88                      MOVE   A12,A8
2a0d0: 248c                      SLL    4h,A12
2a0e0: 2468                      SLL    3h,A8
2a0f0: 410c                      ADD    A8,A12
2a100: 0b2c 5720 000e            ADDI   E5720h,A12
2a130: 85a8                      MOVE   *A13,A8,0
2a140: 24a8                      SLL    5h,A8
2a150: 0b28 0000 0000            ADDI   0h,A8
2a180: 9d0c                      MOVB   *A8,*A12
2a190: 85ac                      MOVE   *A13,A12,0
2a1a0: 4d88                      MOVE   A12,A8
2a1b0: 248c                      SLL    4h,A12
2a1c0: 2468                      SLL    3h,A8
2a1d0: 410c                      ADD    A8,A12
2a1e0: 0b2c 5720 000e            ADDI   E5720h,A12
2a210: 85a8                      MOVE   *A13,A8,0
2a220: 24a8                      SLL    5h,A8
2a230: 0b28 0000 0000            ADDI   0h,A8
2a260: bd0c 0008 0008            MOVB   *A8(8h),*A12(8h)
2a290: 85ac                      MOVE   *A13,A12,0
2a2a0: 4d88                      MOVE   A12,A8
2a2b0: 248c                      SLL    4h,A12
2a2c0: 2468                      SLL    3h,A8
2a2d0: 410c                      ADD    A8,A12
2a2e0: 0b2c 5720 000e            ADDI   E5720h,A12
2a310: 85a8                      MOVE   *A13,A8,0
2a320: 24a8                      SLL    5h,A8
2a330: 0b28 0000 0000            ADDI   0h,A8
2a360: bd0c 0010 0010            MOVB   *A8(10h),*A12(10h)
2a390: 85ac                      MOVE   *A13,A12,0
2a3a0: 102c                      INC    A12
2a3b0: 818d                      MOVE   A12,*A13,0
2a3c0: 0550                      SETF   10h,0,0
2a3d0: 05a8 f3a0 0003            MOVE   @3F3A0h,A8,0
2a400: 490c                      CMP    A8,A12
2a410: c4c8                      JRLT   2A0A0h
2a420: 0548                      SETF   8h,0,0
2a430: 05ac f380 0003            MOVE   @3F380h,A12,0
2a460: ca4c                      JREQ   2A930h
2a470: 4508                      SUB    A8,A8
2a480: 0570                      SETF   10h,1,0
2a490: 810d                      MOVE   A8,*A13,0
2a4a0: 85ac                      MOVE   *A13,A12,0
2a4b0: 246c                      SLL    3h,A12
2a4c0: 0b2c 11e0 0004            ADDI   411E0h,A12
2a4f0: 4508                      SUB    A8,A8
2a500: 8d0c                      MOVB   A8,*A12
2a510: 85ac                      MOVE   *A13,A12,0
2a520: 246c                      SLL    3h,A12
2a530: 0b2c 3560 000c            ADDI   C3560h,A12
2a560: 85a8                      MOVE   *A13,A8,0
2a570: 2488                      SLL    4h,A8
2a580: 8d0c                      MOVB   A8,*A12
2a590: 85ac                      MOVE   *A13,A12,0
2a5a0: 102c                      INC    A12
2a5b0: 818d                      MOVE   A12,*A13,0
2a5c0: 150c                      SUBK   8h,A12
2a5d0: c4ec                      JRLT   2A4A0h
2a5e0: 09cc 00f8                 MOVI   F8h,A12
2a600: 818d                      MOVE   A12,*A13,0
2a610: 85ac                      MOVE   *A13,A12,0
2a620: 246c                      SLL    3h,A12
2a630: 0b2c 11e0 0004            ADDI   411E0h,A12
2a660: 09c8 00ff                 MOVI   FFh,A8
2a680: 8d0c                      MOVB   A8,*A12
2a690: 85ac                      MOVE   *A13,A12,0
2a6a0: 246c                      SLL    3h,A12
2a6b0: 0b2c 3560 000c            ADDI   C3560h,A12
2a6e0: 85a8                      MOVE   *A13,A8,0
2a6f0: 0be8 ff0f                 SUBI   F0h,A8
2a710: 2488                      SLL    4h,A8
2a720: 8d0c                      MOVB   A8,*A12
2a730: 85ac                      MOVE   *A13,A12,0
2a740: 102c                      INC    A12
2a750: 818d                      MOVE   A12,*A13,0
2a760: 0b4c feff                 CMPI   100h,A12
2a780: c4e8                      JRLT   2A610h
2a790: 09c8 00ff                 MOVI   FFh,A8
2a7b0: 05e8 3d58 000c            MOVB   A8,@C3D58h
2a7e0: 190c                      MOVK   8h,A12
2a7f0: 818d                      MOVE   A12,*A13,0
2a800: 85ac                      MOVE   *A13,A12,0
2a810: 246c                      SLL    3h,A12
2a820: 0b2c 11e0 0004            ADDI   411E0h,A12
2a850: 9dac                      MOVB   *A13,*A12
2a860: 85ac                      MOVE   *A13,A12,0
2a870: 246c                      SLL    3h,A12
2a880: 0b2c 3560 000c            ADDI   C3560h,A12
2a8b0: 9dac                      MOVB   *A13,*A12
2a8c0: 85ac                      MOVE   *A13,A12,0
2a8d0: 102c                      INC    A12
2a8e0: 818d                      MOVE   A12,*A13,0
2a8f0: 0b4c ff07                 CMPI   F8h,A12
2a910: c4ee                      JRLT   2A800h
2a920: c032                      JR     2AC50h
2a930: 4508                      SUB    A8,A8
2a940: 0570                      SETF   10h,1,0
2a950: 810d                      MOVE   A8,*A13,0
2a960: 85ac                      MOVE   *A13,A12,0
2a970: 246c                      SLL    3h,A12
2a980: 0b2c 11e0 0004            ADDI   411E0h,A12
2a9b0: 4508                      SUB    A8,A8
2a9c0: 8d0c                      MOVB   A8,*A12
2a9d0: 85ac                      MOVE   *A13,A12,0
2a9e0: 102c                      INC    A12
2a9f0: 818d                      MOVE   A12,*A13,0
2aa00: 150c                      SUBK   8h,A12
2aa10: c4f4                      JRLT   2A960h
2aa20: 190c                      MOVK   8h,A12
2aa30: 818d                      MOVE   A12,*A13,0
2aa40: 85ac                      MOVE   *A13,A12,0
2aa50: 246c                      SLL    3h,A12
2aa60: 0b2c 11e0 0004            ADDI   411E0h,A12
2aa90: 09c8 00ff                 MOVI   FFh,A8
2aab0: 8d0c                      MOVB   A8,*A12
2aac0: 85ac                      MOVE   *A13,A12,0
2aad0: 102c                      INC    A12
2aae0: 818d                      MOVE   A12,*A13,0
2aaf0: 160c                      SUBK   10h,A12
2ab00: c4f3                      JRLT   2AA40h
2ab10: 458c                      SUB    A12,A12
2ab20: 818d                      MOVE   A12,*A13,0
2ab30: 85ac                      MOVE   *A13,A12,0
2ab40: 246c                      SLL    3h,A12
2ab50: 0b2c 3560 000c            ADDI   C3560h,A12
2ab80: 85a8                      MOVE   *A13,A8,0
2ab90: 2488                      SLL    4h,A8
2aba0: 8d0c                      MOVB   A8,*A12
2abb0: 85ac                      MOVE   *A13,A12,0
2abc0: 102c                      INC    A12
2abd0: 818d                      MOVE   A12,*A13,0
2abe0: 15ec                      SUBK   Fh,A12
2abf0: c4f3                      JRLT   2AB30h
2ac00: 09cc 00ff                 MOVI   FFh,A12
2ac20: 05ec 35d8 000c            MOVB   A12,@C35D8h
2ac50: b7ee 0060                 MOVE   *SP(60h),A14,1
2ac70: 09af 3000                 MMFM   SP,A12,A13
2ac90: 0962                      RETS   2h

_set_up_planes:
2aca0: 098f 002c                 MMTM   SP,A10,A12,A13
2acc0: 4dcd                      MOVE   A14,A13
2acd0: 100e                      ADDK   20h,A14
2ace0: c000 01e9                 JR     2CB90h
2ad00: 05a8 f380 0003            MOVE   @3F380h,A8,0
2ad30: ca4b                      JREQ   2B1F0h
2ad40: 4508                      SUB    A8,A8
2ad50: 0570                      SETF   10h,1,0
2ad60: 810d                      MOVE   A8,*A13,0
2ad70: 85a8                      MOVE   *A13,A8,0
2ad80: 4d0c                      MOVE   A8,A12
2ad90: 2488                      SLL    4h,A8
2ada0: 246c                      SLL    3h,A12
2adb0: 4188                      ADD    A12,A8
2adc0: 0b28 1b40 0004            ADDI   41B40h,A8
2adf0: 85ac                      MOVE   *A13,A12,0
2ae00: 246c                      SLL    3h,A12
2ae10: 0b2c 11e0 0004            ADDI   411E0h,A12
2ae40: 9d0c                      MOVB   *A8,*A12
2ae50: 85ac                      MOVE   *A13,A12,0
2ae60: 4d88                      MOVE   A12,A8
2ae70: 248c                      SLL    4h,A12
2ae80: 2468                      SLL    3h,A8
2ae90: 410c                      ADD    A8,A12
2aea0: 0b2c 5720 000e            ADDI   E5720h,A12
2aed0: 85a8                      MOVE   *A13,A8,0
2aee0: 2468                      SLL    3h,A8
2aef0: 0b28 3560 000c            ADDI   C3560h,A8
2af20: 9d88                      MOVB   *A12,*A8
2af30: 85ac                      MOVE   *A13,A12,0
2af40: 102c                      INC    A12
2af50: 818d                      MOVE   A12,*A13,0
2af60: 150c                      SUBK   8h,A12
2af70: c4df                      JRLT   2AD70h
2af80: 09cc 00f8                 MOVI   F8h,A12
2afa0: 818d                      MOVE   A12,*A13,0
2afb0: 85ac                      MOVE   *A13,A12,0
2afc0: 4d88                      MOVE   A12,A8
2afd0: 248c                      SLL    4h,A12
2afe0: 2468                      SLL    3h,A8
2aff0: 410c                      ADD    A8,A12
2b000: 0b2c 1b40 0004            ADDI   41B40h,A12
2b030: 85a8                      MOVE   *A13,A8,0
2b040: 2468                      SLL    3h,A8
2b050: 0b28 11e0 0004            ADDI   411E0h,A8
2b080: 9d88                      MOVB   *A12,*A8
2b090: 85ac                      MOVE   *A13,A12,0
2b0a0: 4d88                      MOVE   A12,A8
2b0b0: 248c                      SLL    4h,A12
2b0c0: 2468                      SLL    3h,A8
2b0d0: 410c                      ADD    A8,A12
2b0e0: 0b2c 5720 000e            ADDI   E5720h,A12
2b110: 85a8                      MOVE   *A13,A8,0
2b120: 2468                      SLL    3h,A8
2b130: 0b28 3560 000c            ADDI   C3560h,A8
2b160: 9d88                      MOVB   *A12,*A8
2b170: 85ac                      MOVE   *A13,A12,0
2b180: 102c                      INC    A12
2b190: 818d                      MOVE   A12,*A13,0
2b1a0: 0b4c feff                 CMPI   100h,A12
2b1c0: c4de                      JRLT   2AFB0h
2b1d0: c000 01a7                 JR     2CC60h
2b1f0: 458c                      SUB    A12,A12
2b200: 0570                      SETF   10h,1,0
2b210: 818d                      MOVE   A12,*A13,0
2b220: 85ac                      MOVE   *A13,A12,0
2b230: 4d88                      MOVE   A12,A8
2b240: 248c                      SLL    4h,A12
2b250: 2468                      SLL    3h,A8
2b260: 410c                      ADD    A8,A12
2b270: 0b2c 1b40 0004            ADDI   41B40h,A12
2b2a0: 85a8                      MOVE   *A13,A8,0
2b2b0: 2468                      SLL    3h,A8
2b2c0: 0b28 11e0 0004            ADDI   411E0h,A8
2b2f0: 9d88                      MOVB   *A12,*A8
2b300: 85ac                      MOVE   *A13,A12,0
2b310: 4d88                      MOVE   A12,A8
2b320: 248c                      SLL    4h,A12
2b330: 2468                      SLL    3h,A8
2b340: 410c                      ADD    A8,A12
2b350: 0b2c 5720 000e            ADDI   E5720h,A12
2b380: 85a8                      MOVE   *A13,A8,0
2b390: 2468                      SLL    3h,A8
2b3a0: 0b28 3560 000c            ADDI   C3560h,A8
2b3d0: 9d88                      MOVB   *A12,*A8
2b3e0: 85ac                      MOVE   *A13,A12,0
2b3f0: 102c                      INC    A12
2b400: 818d                      MOVE   A12,*A13,0
2b410: 160c                      SUBK   10h,A12
2b420: c4df                      JRLT   2B220h
2b430: c000 0181                 JR     2CC60h
2b450: 05ac f380 0003            MOVE   @3F380h,A12,0
2b480: ca52                      JREQ   2B9B0h
2b490: 4508                      SUB    A8,A8
2b4a0: 0570                      SETF   10h,1,0
2b4b0: 810d                      MOVE   A8,*A13,0
2b4c0: 85ac                      MOVE   *A13,A12,0
2b4d0: 4d88                      MOVE   A12,A8
2b4e0: 248c                      SLL    4h,A12
2b4f0: 2468                      SLL    3h,A8
2b500: 410c                      ADD    A8,A12
2b510: 0b2c 1b40 0004            ADDI   41B40h,A12
2b540: 85a8                      MOVE   *A13,A8,0
2b550: 2468                      SLL    3h,A8
2b560: 0b28 11e0 0004            ADDI   411E0h,A8
2b590: bd88 0008 0000            MOVB   *A12(8h),*A8(0h)
2b5c0: 85ac                      MOVE   *A13,A12,0
2b5d0: 4d88                      MOVE   A12,A8
2b5e0: 248c                      SLL    4h,A12
2b5f0: 2468                      SLL    3h,A8
2b600: 410c                      ADD    A8,A12
2b610: 0b2c 5720 000e            ADDI   E5720h,A12
2b640: 85a8                      MOVE   *A13,A8,0
2b650: 2468                      SLL    3h,A8
2b660: 0b28 3560 000c            ADDI   C3560h,A8
2b690: bd88 0008 0000            MOVB   *A12(8h),*A8(0h)
2b6c0: 85ac                      MOVE   *A13,A12,0
2b6d0: 102c                      INC    A12
2b6e0: 818d                      MOVE   A12,*A13,0
2b6f0: 150c                      SUBK   8h,A12
2b700: c4db                      JRLT   2B4C0h
2b710: 09cc 00f8                 MOVI   F8h,A12
2b730: 818d                      MOVE   A12,*A13,0
2b740: 85ac                      MOVE   *A13,A12,0
2b750: 4d88                      MOVE   A12,A8
2b760: 248c                      SLL    4h,A12
2b770: 2468                      SLL    3h,A8
2b780: 410c                      ADD    A8,A12
2b790: 0b2c 1b40 0004            ADDI   41B40h,A12
2b7c0: 85a8                      MOVE   *A13,A8,0
2b7d0: 2468                      SLL    3h,A8
2b7e0: 0b28 11e0 0004            ADDI   411E0h,A8
2b810: bd88 0008 0000            MOVB   *A12(8h),*A8(0h)
2b840: 85ac                      MOVE   *A13,A12,0
2b850: 4d88                      MOVE   A12,A8
2b860: 248c                      SLL    4h,A12
2b870: 2468                      SLL    3h,A8
2b880: 410c                      ADD    A8,A12
2b890: 0b2c 5720 000e            ADDI   E5720h,A12
2b8c0: 85a8                      MOVE   *A13,A8,0
2b8d0: 2468                      SLL    3h,A8
2b8e0: 0b28 3560 000c            ADDI   C3560h,A8
2b910: bd88 0008 0000            MOVB   *A12(8h),*A8(0h)
2b940: 85ac                      MOVE   *A13,A12,0
2b950: 102c                      INC    A12
2b960: 818d                      MOVE   A12,*A13,0
2b970: 0b4c feff                 CMPI   100h,A12
2b990: c4da                      JRLT   2B740h
2b9a0: c028                      JR     2BC30h
2b9b0: 4508                      SUB    A8,A8
2b9c0: 0570                      SETF   10h,1,0
2b9d0: 810d                      MOVE   A8,*A13,0
2b9e0: 85ac                      MOVE   *A13,A12,0
2b9f0: 4d88                      MOVE   A12,A8
2ba00: 248c                      SLL    4h,A12
2ba10: 2468                      SLL    3h,A8
2ba20: 410c                      ADD    A8,A12
2ba30: 0b2c 1b40 0004            ADDI   41B40h,A12
2ba60: 85a8                      MOVE   *A13,A8,0
2ba70: 2468                      SLL    3h,A8
2ba80: 0b28 11e0 0004            ADDI   411E0h,A8
2bab0: bd88 0008 0000            MOVB   *A12(8h),*A8(0h)
2bae0: 85ac                      MOVE   *A13,A12,0
2baf0: 4d88                      MOVE   A12,A8
2bb00: 248c                      SLL    4h,A12
2bb10: 2468                      SLL    3h,A8
2bb20: 410c                      ADD    A8,A12
2bb30: 0b2c 5720 000e            ADDI   E5720h,A12
2bb60: 85a8                      MOVE   *A13,A8,0
2bb70: 2468                      SLL    3h,A8
2bb80: 0b28 3560 000c            ADDI   C3560h,A8
2bbb0: bd88 0008 0000            MOVB   *A12(8h),*A8(0h)
2bbe0: 85ac                      MOVE   *A13,A12,0
2bbf0: 102c                      INC    A12
2bc00: 818d                      MOVE   A12,*A13,0
2bc10: 160c                      SUBK   10h,A12
2bc20: c4db                      JRLT   2B9E0h
2bc30: 458c                      SUB    A12,A12
2bc40: 818d                      MOVE   A12,*A13,0
2bc50: 85ac                      MOVE   *A13,A12,0
2bc60: 4d88                      MOVE   A12,A8
2bc70: 248c                      SLL    4h,A12
2bc80: 2468                      SLL    3h,A8
2bc90: 410c                      ADD    A8,A12
2bca0: 0b2c f440 0003            ADDI   3F440h,A12
2bcd0: 85a8                      MOVE   *A13,A8,0
2bce0: 4d0a                      MOVE   A8,A10
2bcf0: 2488                      SLL    4h,A8
2bd00: 246a                      SLL    3h,A10
2bd10: 4148                      ADD    A10,A8
2bd20: 0b28 f440 0003            ADDI   3F440h,A8
2bd50: bd0c 0008 0000            MOVB   *A8(8h),*A12(0h)
2bd80: 85ac                      MOVE   *A13,A12,0
2bd90: 102c                      INC    A12
2bda0: 818d                      MOVE   A12,*A13,0
2bdb0: 0b4c feff                 CMPI   100h,A12
2bdd0: c4e7                      JRLT   2BC50h
2bde0: c000 00e6                 JR     2CC60h
2be00: 05ac f380 0003            MOVE   @3F380h,A12,0
2be30: ca52                      JREQ   2C360h
2be40: 454a                      SUB    A10,A10
2be50: 0570                      SETF   10h,1,0
2be60: 814d                      MOVE   A10,*A13,0
2be70: 85ac                      MOVE   *A13,A12,0
2be80: 4d8a                      MOVE   A12,A10
2be90: 248c                      SLL    4h,A12
2bea0: 246a                      SLL    3h,A10
2beb0: 414c                      ADD    A10,A12
2bec0: 0b2c 1b40 0004            ADDI   41B40h,A12
2bef0: 85aa                      MOVE   *A13,A10,0
2bf00: 246a                      SLL    3h,A10
2bf10: 0b2a 11e0 0004            ADDI   411E0h,A10
2bf40: bd8a 0010 0000            MOVB   *A12(10h),*A10(0h)
2bf70: 85ac                      MOVE   *A13,A12,0
2bf80: 4d8a                      MOVE   A12,A10
2bf90: 248c                      SLL    4h,A12
2bfa0: 246a                      SLL    3h,A10
2bfb0: 414c                      ADD    A10,A12
2bfc0: 0b2c 5720 000e            ADDI   E5720h,A12
2bff0: 85aa                      MOVE   *A13,A10,0
2c000: 246a                      SLL    3h,A10
2c010: 0b2a 3560 000c            ADDI   C3560h,A10
2c040: bd8a 0010 0000            MOVB   *A12(10h),*A10(0h)
2c070: 85ac                      MOVE   *A13,A12,0
2c080: 102c                      INC    A12
2c090: 818d                      MOVE   A12,*A13,0
2c0a0: 150c                      SUBK   8h,A12
2c0b0: c4db                      JRLT   2BE70h
2c0c0: 09cc 00f8                 MOVI   F8h,A12
2c0e0: 818d                      MOVE   A12,*A13,0
2c0f0: 85ac                      MOVE   *A13,A12,0
2c100: 4d8a                      MOVE   A12,A10
2c110: 248c                      SLL    4h,A12
2c120: 246a                      SLL    3h,A10
2c130: 414c                      ADD    A10,A12
2c140: 0b2c 1b40 0004            ADDI   41B40h,A12
2c170: 85aa                      MOVE   *A13,A10,0
2c180: 246a                      SLL    3h,A10
2c190: 0b2a 11e0 0004            ADDI   411E0h,A10
2c1c0: bd8a 0010 0000            MOVB   *A12(10h),*A10(0h)
2c1f0: 85ac                      MOVE   *A13,A12,0
2c200: 4d8a                      MOVE   A12,A10
2c210: 248c                      SLL    4h,A12
2c220: 246a                      SLL    3h,A10
2c230: 414c                      ADD    A10,A12
2c240: 0b2c 5720 000e            ADDI   E5720h,A12
2c270: 85aa                      MOVE   *A13,A10,0
2c280: 246a                      SLL    3h,A10
2c290: 0b2a 3560 000c            ADDI   C3560h,A10
2c2c0: bd8a 0010 0000            MOVB   *A12(10h),*A10(0h)
2c2f0: 85ac                      MOVE   *A13,A12,0
2c300: 102c                      INC    A12
2c310: 818d                      MOVE   A12,*A13,0
2c320: 0b4c feff                 CMPI   100h,A12
2c340: c4da                      JRLT   2C0F0h
2c350: c028                      JR     2C5E0h
2c360: 454a                      SUB    A10,A10
2c370: 0570                      SETF   10h,1,0
2c380: 814d                      MOVE   A10,*A13,0
2c390: 85ac                      MOVE   *A13,A12,0
2c3a0: 4d8a                      MOVE   A12,A10
2c3b0: 248c                      SLL    4h,A12
2c3c0: 246a                      SLL    3h,A10
2c3d0: 414c                      ADD    A10,A12
2c3e0: 0b2c 1b40 0004            ADDI   41B40h,A12
2c410: 85aa                      MOVE   *A13,A10,0
2c420: 246a                      SLL    3h,A10
2c430: 0b2a 11e0 0004            ADDI   411E0h,A10
2c460: bd8a 0010 0000            MOVB   *A12(10h),*A10(0h)
2c490: 85ac                      MOVE   *A13,A12,0
2c4a0: 4d8a                      MOVE   A12,A10
2c4b0: 248c                      SLL    4h,A12
2c4c0: 246a                      SLL    3h,A10
2c4d0: 414c                      ADD    A10,A12
2c4e0: 0b2c 5720 000e            ADDI   E5720h,A12
2c510: 85aa                      MOVE   *A13,A10,0
2c520: 246a                      SLL    3h,A10
2c530: 0b2a 3560 000c            ADDI   C3560h,A10
2c560: bd8a 0010 0000            MOVB   *A12(10h),*A10(0h)
2c590: 85ac                      MOVE   *A13,A12,0
2c5a0: 102c                      INC    A12
2c5b0: 818d                      MOVE   A12,*A13,0
2c5c0: 160c                      SUBK   10h,A12
2c5d0: c4db                      JRLT   2C390h
2c5e0: 458c                      SUB    A12,A12
2c5f0: 818d                      MOVE   A12,*A13,0
2c600: 85ac                      MOVE   *A13,A12,0
2c610: 4d8a                      MOVE   A12,A10
2c620: 248c                      SLL    4h,A12
2c630: 246a                      SLL    3h,A10
2c640: 414c                      ADD    A10,A12
2c650: 0b2c f440 0003            ADDI   3F440h,A12
2c680: 85aa                      MOVE   *A13,A10,0
2c690: 4d48                      MOVE   A10,A8
2c6a0: 248a                      SLL    4h,A10
2c6b0: 2468                      SLL    3h,A8
2c6c0: 410a                      ADD    A8,A10
2c6d0: 0b2a f440 0003            ADDI   3F440h,A10
2c700: bd4c 0010 0000            MOVB   *A10(10h),*A12(0h)
2c730: 85ac                      MOVE   *A13,A12,0
2c740: 102c                      INC    A12
2c750: 818d                      MOVE   A12,*A13,0
2c760: 0b4c feff                 CMPI   100h,A12
2c780: c4e7                      JRLT   2C600h
2c790: c04c                      JR     2CC60h
2c7a0: 458c                      SUB    A12,A12
2c7b0: 0570                      SETF   10h,1,0
2c7c0: 818d                      MOVE   A12,*A13,0
2c7d0: 85ac                      MOVE   *A13,A12,0
2c7e0: 1fec                      BTST   0h,A12
2c7f0: cb31                      JRNE   2CB10h
2c800: 4d8a                      MOVE   A12,A10
2c810: 248c                      SLL    4h,A12
2c820: 246a                      SLL    3h,A10
2c830: 414c                      ADD    A10,A12
2c840: 0b2c f440 0003            ADDI   3F440h,A12
2c870: a3cf                      MOVE   A14,-*SP,1
2c880: 85aa                      MOVE   *A13,A10,0
2c890: 4d48                      MOVE   A10,A8
2c8a0: 248a                      SLL    4h,A10
2c8b0: 2468                      SLL    3h,A8
2c8c0: 410a                      ADD    A8,A10
2c8d0: 0b2a f440 0003            ADDI   3F440h,A10
2c900: 0548                      SETF   8h,0,0
2c910: b54a 0010                 MOVE   *A10(10h),A10,0
2c930: 934e                      MOVE   A10,*A14+,1
2c940: 0570                      SETF   10h,1,0
2c950: 85aa                      MOVE   *A13,A10,0
2c960: 4d48                      MOVE   A10,A8
2c970: 248a                      SLL    4h,A10
2c980: 2468                      SLL    3h,A8
2c990: 410a                      ADD    A8,A10
2c9a0: 0b2a f440 0003            ADDI   3F440h,A10
2c9d0: 0548                      SETF   8h,0,0
2c9e0: b54a 0008                 MOVE   *A10(8h),A10,0
2ca00: 934e                      MOVE   A10,*A14+,1
2ca10: 0570                      SETF   10h,1,0
2ca20: 85aa                      MOVE   *A13,A10,0
2ca30: 4d48                      MOVE   A10,A8
2ca40: 248a                      SLL    4h,A10
2ca50: 2468                      SLL    3h,A8
2ca60: 410a                      ADD    A8,A10
2ca70: 0b2a f440 0003            ADDI   3F440h,A10
2caa0: 0548                      SETF   8h,0,0
2cab0: 854a                      MOVE   *A10,A10,0
2cac0: 934e                      MOVE   A10,*A14+,1
2cad0: 0d5f ccb0 0002            CALLA  2CCB0h
2cb00: 8d0c                      MOVB   A8,*A12
2cb10: 0570                      SETF   10h,1,0
2cb20: 85ac                      MOVE   *A13,A12,0
2cb30: 102c                      INC    A12
2cb40: 818d                      MOVE   A12,*A13,0
2cb50: 0b4c feff                 CMPI   100h,A12
2cb70: c4c5                      JRLT   2C7D0h
2cb80: c00d                      JR     2CC60h
2cb90: 0548                      SETF   8h,0,0
2cba0: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
2cbc0: ca00 fe12                 JREQ   2AD00h
2cbe0: 142c                      DEC    A12
2cbf0: ca00 fe84                 JREQ   2B450h
2cc10: 142c                      DEC    A12
2cc20: ca00 ff1c                 JREQ   2BE00h
2cc40: 144c                      SUBK   2h,A12
2cc50: cab4                      JREQ   2C7A0h
2cc60: b7ee 0080                 MOVE   *SP(80h),A14,1
2cc80: 09af 3400                 MMFM   SP,A10,A12,A13
2cca0: 0962                      RETS   2h

_calc_grey:
2ccb0: a3af                      MOVE   A13,-*SP,1
2ccc0: 4dcd                      MOVE   A14,A13
2ccd0: 100e                      ADDK   20h,A14
2cce0: 4508                      SUB    A8,A8
2ccf0: 8d0d                      MOVB   A8,*A13
2cd00: 0548                      SETF   8h,0,0
2cd10: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2cd30: 2f68                      SRL    5h,A8
2cd40: ad0d ffe0                 MOVB   A8,*A13(FFE0h)
2cd60: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
2cd80: 2f68                      SRL    5h,A8
2cd90: ad0d ffc0                 MOVB   A8,*A13(FFC0h)
2cdb0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
2cdd0: 2f48                      SRL    6h,A8
2cde0: ad0d ffa0                 MOVB   A8,*A13(FFA0h)
2ce00: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2ce20: 1fa8                      BTST   2h,A8
2ce30: ca04                      JREQ   2CE80h
2ce40: 85a8                      MOVE   *A13,A8,0
2ce50: 0b08 0080                 ADDI   80h,A8
2ce70: 8d0d                      MOVB   A8,*A13
2ce80: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2cea0: 1fc8                      BTST   1h,A8
2ceb0: ca03                      JREQ   2CEF0h
2cec0: 85a8                      MOVE   *A13,A8,0
2ced0: 1208                      ADDK   10h,A8
2cee0: 8d0d                      MOVB   A8,*A13
2cef0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2cf10: 1fe8                      BTST   0h,A8
2cf20: ca03                      JREQ   2CF60h
2cf30: 85a8                      MOVE   *A13,A8,0
2cf40: 1048                      ADDK   2h,A8
2cf50: 8d0d                      MOVB   A8,*A13
2cf60: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
2cf80: 1fa8                      BTST   2h,A8
2cf90: ca04                      JREQ   2CFE0h
2cfa0: 85a8                      MOVE   *A13,A8,0
2cfb0: 0b08 0040                 ADDI   40h,A8
2cfd0: 8d0d                      MOVB   A8,*A13
2cfe0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
2d000: 1fc8                      BTST   1h,A8
2d010: ca03                      JREQ   2D050h
2d020: 85a8                      MOVE   *A13,A8,0
2d030: 1108                      ADDK   8h,A8
2d040: 8d0d                      MOVB   A8,*A13
2d050: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
2d070: 1fe8                      BTST   0h,A8
2d080: ca03                      JREQ   2D0C0h
2d090: 85a8                      MOVE   *A13,A8,0
2d0a0: 1028                      INC    A8
2d0b0: 8d0d                      MOVB   A8,*A13
2d0c0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
2d0e0: 1fc8                      BTST   1h,A8
2d0f0: ca03                      JREQ   2D130h
2d100: 85a8                      MOVE   *A13,A8,0
2d110: 1008                      ADDK   20h,A8
2d120: 8d0d                      MOVB   A8,*A13
2d130: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
2d150: 1fe8                      BTST   0h,A8
2d160: ca03                      JREQ   2D1A0h
2d170: 85a8                      MOVE   *A13,A8,0
2d180: 1088                      ADDK   4h,A8
2d190: 8d0d                      MOVB   A8,*A13
2d1a0: 85a8                      MOVE   *A13,A8,0
2d1b0: b7ee 0040                 MOVE   *SP(40h),A14,1
2d1d0: 97ed                      MOVE   *SP+,A13,1
2d1e0: 0962                      RETS   2h

_image_maths:
2d1f0: a3af                      MOVE   A13,-*SP,1
2d200: 4dcd                      MOVE   A14,A13
2d210: 100e                      ADDK   20h,A14
2d220: 0d5f 0000 0000            CALLA  0h
2d250: 0550                      SETF   10h,0,0
2d260: 810d                      MOVE   A8,*A13,0
2d270: a3cf                      MOVE   A14,-*SP,1
2d280: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
2d2a0: 930e                      MOVE   A8,*A14+,1
2d2b0: 0d5f 0000 0000            CALLA  0h
2d2e0: a3cf                      MOVE   A14,-*SP,1
2d2f0: 1908                      MOVK   8h,A8
2d300: 930e                      MOVE   A8,*A14+,1
2d310: 09c8 0300                 MOVI   300h,A8
2d330: 930e                      MOVE   A8,*A14+,1
2d340: 09c8 0400                 MOVI   400h,A8
2d360: 930e                      MOVE   A8,*A14+,1
2d370: 09c8 2000                 MOVI   2000h,A8
2d390: 930e                      MOVE   A8,*A14+,1
2d3a0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2d3c0: 0d5f 0000 0000            CALLA  0h
2d3f0: a3cf                      MOVE   A14,-*SP,1
2d400: 1908                      MOVK   8h,A8
2d410: 930e                      MOVE   A8,*A14+,1
2d420: 09c8 0300                 MOVI   300h,A8
2d440: 930e                      MOVE   A8,*A14+,1
2d450: 09c8 0400                 MOVI   400h,A8
2d470: 930e                      MOVE   A8,*A14+,1
2d480: 09c8 2000                 MOVI   2000h,A8
2d4a0: 930e                      MOVE   A8,*A14+,1
2d4b0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2d4d0: 0d5f 0000 0000            CALLA  0h
2d500: a3cf                      MOVE   A14,-*SP,1
2d510: 4508                      SUB    A8,A8
2d520: 930e                      MOVE   A8,*A14+,1
2d530: 930e                      MOVE   A8,*A14+,1
2d540: 930e                      MOVE   A8,*A14+,1
2d550: 930e                      MOVE   A8,*A14+,1
2d560: 09c8 0300                 MOVI   300h,A8
2d580: 930e                      MOVE   A8,*A14+,1
2d590: 09c8 0400                 MOVI   400h,A8
2d5b0: 930e                      MOVE   A8,*A14+,1
2d5c0: 0d5f 0000 0000            CALLA  0h
2d5f0: a3cf                      MOVE   A14,-*SP,1
2d600: 0550                      SETF   10h,0,0
2d610: 85a8                      MOVE   *A13,A8,0
2d620: 930e                      MOVE   A8,*A14+,1
2d630: 0d5f 0000 0000            CALLA  0h
2d660: a3cf                      MOVE   A14,-*SP,1
2d670: 4508                      SUB    A8,A8
2d680: 930e                      MOVE   A8,*A14+,1
2d690: 930e                      MOVE   A8,*A14+,1
2d6a0: 930e                      MOVE   A8,*A14+,1
2d6b0: 930e                      MOVE   A8,*A14+,1
2d6c0: 930e                      MOVE   A8,*A14+,1
2d6d0: 0d5f 0000 0000            CALLA  0h
2d700: a3cf                      MOVE   A14,-*SP,1
2d710: 4508                      SUB    A8,A8
2d720: 930e                      MOVE   A8,*A14+,1
2d730: 930e                      MOVE   A8,*A14+,1
2d740: 930e                      MOVE   A8,*A14+,1
2d750: 930e                      MOVE   A8,*A14+,1
2d760: 930e                      MOVE   A8,*A14+,1
2d770: 0d5f 0000 0000            CALLA  0h
2d7a0: b7ee 0040                 MOVE   *SP(40h),A14,1
2d7c0: 97ed                      MOVE   *SP+,A13,1
2d7d0: 0962                      RETS   2h

_image_filter:
2d7e0: a3af                      MOVE   A13,-*SP,1
2d7f0: 4dcd                      MOVE   A14,A13
2d800: 100e                      ADDK   20h,A14
2d810: a3cf                      MOVE   A14,-*SP,1
2d820: 1908                      MOVK   8h,A8
2d830: 930e                      MOVE   A8,*A14+,1
2d840: 09c8 0300                 MOVI   300h,A8
2d860: 930e                      MOVE   A8,*A14+,1
2d870: 09c8 0400                 MOVI   400h,A8
2d890: 930e                      MOVE   A8,*A14+,1
2d8a0: 09c8 2000                 MOVI   2000h,A8
2d8c0: 930e                      MOVE   A8,*A14+,1
2d8d0: 09e8 0000 2000            MOVI   20000000h,A8
2d900: 930e                      MOVE   A8,*A14+,1
2d910: 0d5f 0000 0000            CALLA  0h
2d940: a3cf                      MOVE   A14,-*SP,1
2d950: 1908                      MOVK   8h,A8
2d960: 930e                      MOVE   A8,*A14+,1
2d970: 09c8 0300                 MOVI   300h,A8
2d990: 930e                      MOVE   A8,*A14+,1
2d9a0: 09c8 0400                 MOVI   400h,A8
2d9c0: 930e                      MOVE   A8,*A14+,1
2d9d0: 09c8 2000                 MOVI   2000h,A8
2d9f0: 930e                      MOVE   A8,*A14+,1
2da00: 09e8 3560 0004            MOVI   43560h,A8
2da30: 930e                      MOVE   A8,*A14+,1
2da40: 0d5f 0000 0000            CALLA  0h
2da70: a3cf                      MOVE   A14,-*SP,1
2da80: 4508                      SUB    A8,A8
2da90: 930e                      MOVE   A8,*A14+,1
2daa0: 930e                      MOVE   A8,*A14+,1
2dab0: 930e                      MOVE   A8,*A14+,1
2dac0: 930e                      MOVE   A8,*A14+,1
2dad0: 1868                      MOVK   3h,A8
2dae0: 930e                      MOVE   A8,*A14+,1
2daf0: 09c8 0400                 MOVI   400h,A8
2db10: 930e                      MOVE   A8,*A14+,1
2db20: 0d5f 0000 0000            CALLA  0h
2db50: 1868                      MOVK   3h,A8
2db60: 0570                      SETF   10h,1,0
2db70: 810d                      MOVE   A8,*A13,0
2db80: c064                      JR     2E1D0h
2db90: a3cf                      MOVE   A14,-*SP,1
2dba0: 0570                      SETF   10h,1,0
2dbb0: 85a8                      MOVE   *A13,A8,0
2dbc0: 1448                      SUBK   2h,A8
2dbd0: 0508                      SEXT   A8,0
2dbe0: 930e                      MOVE   A8,*A14+,1
2dbf0: 0d5f ed10 0002            CALLA  2ED10h
2dc20: c06f                      JR     2E320h
2dc30: a3cf                      MOVE   A14,-*SP,1
2dc40: 0570                      SETF   10h,1,0
2dc50: 85a8                      MOVE   *A13,A8,0
2dc60: 1448                      SUBK   2h,A8
2dc70: 0508                      SEXT   A8,0
2dc80: 930e                      MOVE   A8,*A14+,1
2dc90: 0d5f f150 0002            CALLA  2F150h
2dcc0: c065                      JR     2E320h
2dcd0: a3cf                      MOVE   A14,-*SP,1
2dce0: 0570                      SETF   10h,1,0
2dcf0: 85a8                      MOVE   *A13,A8,0
2dd00: 1448                      SUBK   2h,A8
2dd10: 0508                      SEXT   A8,0
2dd20: 930e                      MOVE   A8,*A14+,1
2dd30: 0d5f f910 0002            CALLA  2F910h
2dd60: c05b                      JR     2E320h
2dd70: a3cf                      MOVE   A14,-*SP,1
2dd80: 0570                      SETF   10h,1,0
2dd90: 85a8                      MOVE   *A13,A8,0
2dda0: 1448                      SUBK   2h,A8
2ddb0: 0508                      SEXT   A8,0
2ddc0: 930e                      MOVE   A8,*A14+,1
2ddd0: 0d5f fda0 0002            CALLA  2FDA0h
2de00: c051                      JR     2E320h
2de10: a3cf                      MOVE   A14,-*SP,1
2de20: 0570                      SETF   10h,1,0
2de30: 85a8                      MOVE   *A13,A8,0
2de40: 1448                      SUBK   2h,A8
2de50: 0508                      SEXT   A8,0
2de60: 930e                      MOVE   A8,*A14+,1
2de70: 0d5f 0240 0003            CALLA  30240h
2dea0: c047                      JR     2E320h
2deb0: a3cf                      MOVE   A14,-*SP,1
2dec0: 0570                      SETF   10h,1,0
2ded0: 85a8                      MOVE   *A13,A8,0
2dee0: 1448                      SUBK   2h,A8
2def0: 0508                      SEXT   A8,0
2df00: 930e                      MOVE   A8,*A14+,1
2df10: 0d5f 0660 0003            CALLA  30660h
2df40: c03d                      JR     2E320h
2df50: a3cf                      MOVE   A14,-*SP,1
2df60: 0570                      SETF   10h,1,0
2df70: 85a8                      MOVE   *A13,A8,0
2df80: 1448                      SUBK   2h,A8
2df90: 0508                      SEXT   A8,0
2dfa0: 930e                      MOVE   A8,*A14+,1
2dfb0: 0d5f 0de0 0003            CALLA  30DE0h
2dfe0: c033                      JR     2E320h
2dff0: a3cf                      MOVE   A14,-*SP,1
2e000: 0570                      SETF   10h,1,0
2e010: 85a8                      MOVE   *A13,A8,0
2e020: 1448                      SUBK   2h,A8
2e030: 0508                      SEXT   A8,0
2e040: 930e                      MOVE   A8,*A14+,1
2e050: 0d5f 1280 0003            CALLA  31280h
2e080: c029                      JR     2E320h
2e090: a3cf                      MOVE   A14,-*SP,1
2e0a0: 0570                      SETF   10h,1,0
2e0b0: 85a8                      MOVE   *A13,A8,0
2e0c0: 1448                      SUBK   2h,A8
2e0d0: 0508                      SEXT   A8,0
2e0e0: 930e                      MOVE   A8,*A14+,1
2e0f0: 0d5f 16e0 0003            CALLA  316E0h
2e120: c01f                      JR     2E320h
2e130: a3cf                      MOVE   A14,-*SP,1
2e140: 0570                      SETF   10h,1,0
2e150: 85a8                      MOVE   *A13,A8,0
2e160: 1448                      SUBK   2h,A8
2e170: 0508                      SEXT   A8,0
2e180: 930e                      MOVE   A8,*A14+,1
2e190: 0d5f 1d70 0003            CALLA  31D70h
2e1c0: c015                      JR     2E320h
2e1d0: afa8 ffe0                 MOVB   *A13(FFE0h),A8
2e1f0: ca99                      JREQ   2DB90h
2e200: 1428                      DEC    A8
2e210: caa1                      JREQ   2DC30h
2e220: 1428                      DEC    A8
2e230: caa9                      JREQ   2DCD0h
2e240: 1428                      DEC    A8
2e250: cab1                      JREQ   2DD70h
2e260: 1428                      DEC    A8
2e270: cab9                      JREQ   2DE10h
2e280: 1428                      DEC    A8
2e290: cac1                      JREQ   2DEB0h
2e2a0: 1428                      DEC    A8
2e2b0: cac9                      JREQ   2DF50h
2e2c0: 1428                      DEC    A8
2e2d0: cad1                      JREQ   2DFF0h
2e2e0: 1428                      DEC    A8
2e2f0: cad9                      JREQ   2E090h
2e300: 1428                      DEC    A8
2e310: cae1                      JREQ   2E130h
2e320: a3cf                      MOVE   A14,-*SP,1
2e330: 1908                      MOVK   8h,A8
2e340: 930e                      MOVE   A8,*A14+,1
2e350: 09c8 0300                 MOVI   300h,A8
2e370: 930e                      MOVE   A8,*A14+,1
2e380: 09c8 0400                 MOVI   400h,A8
2e3a0: 930e                      MOVE   A8,*A14+,1
2e3b0: 09c8 2000                 MOVI   2000h,A8
2e3d0: 930e                      MOVE   A8,*A14+,1
2e3e0: 09e8 3560 0004            MOVI   43560h,A8
2e410: 930e                      MOVE   A8,*A14+,1
2e420: 0d5f 0000 0000            CALLA  0h
2e450: a3cf                      MOVE   A14,-*SP,1
2e460: 1908                      MOVK   8h,A8
2e470: 930e                      MOVE   A8,*A14+,1
2e480: 09c8 0300                 MOVI   300h,A8
2e4a0: 930e                      MOVE   A8,*A14+,1
2e4b0: 09c8 0400                 MOVI   400h,A8
2e4d0: 930e                      MOVE   A8,*A14+,1
2e4e0: 09c8 2000                 MOVI   2000h,A8
2e500: 930e                      MOVE   A8,*A14+,1
2e510: 09e8 3560 0004            MOVI   43560h,A8
2e540: 930e                      MOVE   A8,*A14+,1
2e550: 0d5f 0000 0000            CALLA  0h
2e580: a3cf                      MOVE   A14,-*SP,1
2e590: 4508                      SUB    A8,A8
2e5a0: 930e                      MOVE   A8,*A14+,1
2e5b0: 930e                      MOVE   A8,*A14+,1
2e5c0: 1828                      MOVK   1h,A8
2e5d0: 930e                      MOVE   A8,*A14+,1
2e5e0: 4508                      SUB    A8,A8
2e5f0: 930e                      MOVE   A8,*A14+,1
2e600: 1828                      MOVK   1h,A8
2e610: 930e                      MOVE   A8,*A14+,1
2e620: 09c8 0400                 MOVI   400h,A8
2e640: 930e                      MOVE   A8,*A14+,1
2e650: 0d5f 0000 0000            CALLA  0h
2e680: a3cf                      MOVE   A14,-*SP,1
2e690: 1828                      MOVK   1h,A8
2e6a0: 930e                      MOVE   A8,*A14+,1
2e6b0: 4508                      SUB    A8,A8
2e6c0: 930e                      MOVE   A8,*A14+,1
2e6d0: 1848                      MOVK   2h,A8
2e6e0: 930e                      MOVE   A8,*A14+,1
2e6f0: 4508                      SUB    A8,A8
2e700: 930e                      MOVE   A8,*A14+,1
2e710: 1828                      MOVK   1h,A8
2e720: 930e                      MOVE   A8,*A14+,1
2e730: 09c8 0400                 MOVI   400h,A8
2e750: 930e                      MOVE   A8,*A14+,1
2e760: 0d5f 0000 0000            CALLA  0h
2e790: a3cf                      MOVE   A14,-*SP,1
2e7a0: 1908                      MOVK   8h,A8
2e7b0: 930e                      MOVE   A8,*A14+,1
2e7c0: 09c8 0300                 MOVI   300h,A8
2e7e0: 930e                      MOVE   A8,*A14+,1
2e7f0: 09c8 0400                 MOVI   400h,A8
2e810: 930e                      MOVE   A8,*A14+,1
2e820: 09c8 2000                 MOVI   2000h,A8
2e840: 930e                      MOVE   A8,*A14+,1
2e850: 09e8 0000 2000            MOVI   20000000h,A8
2e880: 930e                      MOVE   A8,*A14+,1
2e890: 0d5f 0000 0000            CALLA  0h
2e8c0: a3cf                      MOVE   A14,-*SP,1
2e8d0: 1908                      MOVK   8h,A8
2e8e0: 930e                      MOVE   A8,*A14+,1
2e8f0: 09c8 0300                 MOVI   300h,A8
2e910: 930e                      MOVE   A8,*A14+,1
2e920: 09c8 0400                 MOVI   400h,A8
2e940: 930e                      MOVE   A8,*A14+,1
2e950: 09c8 2000                 MOVI   2000h,A8
2e970: 930e                      MOVE   A8,*A14+,1
2e980: 09e8 3560 0004            MOVI   43560h,A8
2e9b0: 930e                      MOVE   A8,*A14+,1
2e9c0: 0d5f 0000 0000            CALLA  0h
2e9f0: a3cf                      MOVE   A14,-*SP,1
2ea00: 1848                      MOVK   2h,A8
2ea10: 930e                      MOVE   A8,*A14+,1
2ea20: 4508                      SUB    A8,A8
2ea30: 930e                      MOVE   A8,*A14+,1
2ea40: 0570                      SETF   10h,1,0
2ea50: 85a8                      MOVE   *A13,A8,0
2ea60: 930e                      MOVE   A8,*A14+,1
2ea70: 4508                      SUB    A8,A8
2ea80: 930e                      MOVE   A8,*A14+,1
2ea90: 1828                      MOVK   1h,A8
2eaa0: 930e                      MOVE   A8,*A14+,1
2eab0: 09c8 0400                 MOVI   400h,A8
2ead0: 930e                      MOVE   A8,*A14+,1
2eae0: 0d5f 0000 0000            CALLA  0h
2eb10: 0570                      SETF   10h,1,0
2eb20: 85a8                      MOVE   *A13,A8,0
2eb30: 1028                      INC    A8
2eb40: 810d                      MOVE   A8,*A13,0
2eb50: 0b48 fcff                 CMPI   300h,A8
2eb70: c400 ff64                 JRLT   2E1D0h
2eb90: a3cf                      MOVE   A14,-*SP,1
2eba0: 4508                      SUB    A8,A8
2ebb0: 930e                      MOVE   A8,*A14+,1
2ebc0: 930e                      MOVE   A8,*A14+,1
2ebd0: 930e                      MOVE   A8,*A14+,1
2ebe0: 930e                      MOVE   A8,*A14+,1
2ebf0: 930e                      MOVE   A8,*A14+,1
2ec00: 0d5f 0000 0000            CALLA  0h
2ec30: a3cf                      MOVE   A14,-*SP,1
2ec40: 4508                      SUB    A8,A8
2ec50: 930e                      MOVE   A8,*A14+,1
2ec60: 930e                      MOVE   A8,*A14+,1
2ec70: 930e                      MOVE   A8,*A14+,1
2ec80: 930e                      MOVE   A8,*A14+,1
2ec90: 930e                      MOVE   A8,*A14+,1
2eca0: 0d5f 0000 0000            CALLA  0h
2ecd0: b7ee 0040                 MOVE   *SP(40h),A14,1
2ecf0: 97ed                      MOVE   *SP+,A13,1
2ed00: 0962                      RETS   2h

_do_filter1:
2ed10: 098f aa7c                 MMTM   SP,A0,A2,A4,A6,A9-A13
2ed30: 4dcd                      MOVE   A14,A13
2ed40: 09e9 3560 0004            MOVI   43560h,A9
2ed70: 4d2a                      MOVE   A9,A10
2ed80: 4d2b                      MOVE   A9,A11
2ed90: 4d2c                      MOVE   A9,A12
2eda0: 4d20                      MOVE   A9,A0
2edb0: 1109                      ADDK   8h,A9
2edc0: 0b0a 2000                 ADDI   2000h,A10
2ede0: 0b0b 2008                 ADDI   2008h,A11
2ee00: 0b0c 2010                 ADDI   2010h,A12
2ee20: 0b00 4008                 ADDI   4008h,A0
2ee40: 09e2 0000 2000            MOVI   20000000h,A2
2ee70: 0570                      SETF   10h,1,0
2ee80: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2eea0: 25a8                      SLL    Dh,A8
2eeb0: 4102                      ADD    A8,A2
2eec0: 1102                      ADDK   8h,A2
2eed0: 44c6                      SUB    A6,A6
2eee0: 0548                      SETF   8h,0,0
2eef0: 4484                      SUB    A4,A4
2ef00: 9528                      MOVE   *A9+,A8,0
2ef10: 4504                      SUB    A8,A4
2ef20: 9548                      MOVE   *A10+,A8,0
2ef30: 4504                      SUB    A8,A4
2ef40: 8568                      MOVE   *A11,A8,0
2ef50: 2448                      SLL    2h,A8
2ef60: 4104                      ADD    A8,A4
2ef70: 9568                      MOVE   *A11+,A8,0
2ef80: 4104                      ADD    A8,A4
2ef90: 9588                      MOVE   *A12+,A8,0
2efa0: 4504                      SUB    A8,A4
2efb0: 9408                      MOVE   *A0+,A8,0
2efc0: 4504                      SUB    A8,A4
2efd0: 0b44 ff00                 CMPI   FFh,A4
2eff0: c604                      JRLE   2F040h
2f000: 09c8 00ff                 MOVI   FFh,A8
2f020: 9102                      MOVE   A8,*A2+,0
2f030: c006                      JR     2F0A0h
2f040: 4c88                      MOVE   A4,A8
2f050: c503                      JRGE   2F090h
2f060: 4508                      SUB    A8,A8
2f070: 9102                      MOVE   A8,*A2+,0
2f080: c001                      JR     2F0A0h
2f090: 9082                      MOVE   A4,*A2+,0
2f0a0: 1026                      INC    A6
2f0b0: 2606                      SLL    10h,A6
2f0c0: 2a06                      SRA    10h,A6
2f0d0: 0b46 fc01                 CMPI   3FEh,A6
2f0f0: c4df                      JRLT   2EEF0h
2f100: b7ee 0140                 MOVE   *SP(140h),A14,1
2f120: 09af 3e55                 MMFM   SP,A0,A2,A4,A6,A9-A13
2f140: 0962                      RETS   2h

_do_filter2:
2f150: 098f ee7c                 MMTM   SP,A0-A2,A4-A6,A9-A13
2f170: 4dcd                      MOVE   A14,A13
2f180: 0b0e 0060                 ADDI   60h,A14
2f1a0: 09e9 3560 0004            MOVI   43560h,A9
2f1d0: 4d2a                      MOVE   A9,A10
2f1e0: 4d2b                      MOVE   A9,A11
2f1f0: 4d2c                      MOVE   A9,A12
2f200: 4d20                      MOVE   A9,A0
2f210: 4c02                      MOVE   A0,A2
2f220: 4c04                      MOVE   A0,A4
2f230: 4c06                      MOVE   A0,A6
2f240: 4c01                      MOVE   A0,A1
2f250: 110a                      ADDK   8h,A10
2f260: 120b                      ADDK   10h,A11
2f270: 0b0c 2000                 ADDI   2000h,A12
2f290: 0b00 2008                 ADDI   2008h,A0
2f2b0: 0b02 2010                 ADDI   2010h,A2
2f2d0: 0b04 4000                 ADDI   4000h,A4
2f2f0: 0b06 4008                 ADDI   4008h,A6
2f310: 0b01 4010                 ADDI   4010h,A1
2f330: 09e8 0000 2000            MOVI   20000000h,A8
2f360: 830d                      MOVE   A8,*A13,1
2f370: 0570                      SETF   10h,1,0
2f380: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2f3a0: 25a8                      SLL    Dh,A8
2f3b0: 87a5                      MOVE   *A13,A5,1
2f3c0: 40a8                      ADD    A5,A8
2f3d0: 830d                      MOVE   A8,*A13,1
2f3e0: 1108                      ADDK   8h,A8
2f3f0: 830d                      MOVE   A8,*A13,1
2f400: 44a5                      SUB    A5,A5
2f410: b0ad 0040                 MOVE   A5,*A13(40h),0
2f430: 4508                      SUB    A8,A8
2f440: b30d 0020                 MOVE   A8,*A13(20h),1
2f460: 0548                      SETF   8h,0,0
2f470: 9525                      MOVE   *A9+,A5,0
2f480: 44a8                      SUB    A5,A8
2f490: b30d 0020                 MOVE   A8,*A13(20h),1
2f4b0: 9545                      MOVE   *A10+,A5,0
2f4c0: 44a8                      SUB    A5,A8
2f4d0: b30d 0020                 MOVE   A8,*A13(20h),1
2f4f0: 9565                      MOVE   *A11+,A5,0
2f500: 44a8                      SUB    A5,A8
2f510: b30d 0020                 MOVE   A8,*A13(20h),1
2f530: 9585                      MOVE   *A12+,A5,0
2f540: 44a8                      SUB    A5,A8
2f550: b30d 0020                 MOVE   A8,*A13(20h),1
2f570: 8405                      MOVE   *A0,A5,0
2f580: 2465                      SLL    3h,A5
2f590: 4105                      ADD    A8,A5
2f5a0: b2ad 0020                 MOVE   A5,*A13(20h),1
2f5c0: 9408                      MOVE   *A0+,A8,0
2f5d0: 40a8                      ADD    A5,A8
2f5e0: b30d 0020                 MOVE   A8,*A13(20h),1
2f600: 9445                      MOVE   *A2+,A5,0
2f610: 44a8                      SUB    A5,A8
2f620: b30d 0020                 MOVE   A8,*A13(20h),1
2f640: 9485                      MOVE   *A4+,A5,0
2f650: 44a8                      SUB    A5,A8
2f660: b30d 0020                 MOVE   A8,*A13(20h),1
2f680: 94c5                      MOVE   *A6+,A5,0
2f690: 44a8                      SUB    A5,A8
2f6a0: b30d 0020                 MOVE   A8,*A13(20h),1
2f6c0: 9425                      MOVE   *A1+,A5,0
2f6d0: 44a8                      SUB    A5,A8
2f6e0: b30d 0020                 MOVE   A8,*A13(20h),1
2f700: 0b48 ff00                 CMPI   FFh,A8
2f720: c606                      JRLE   2F790h
2f730: 87a5                      MOVE   *A13,A5,1
2f740: 09c8 00ff                 MOVI   FFh,A8
2f760: 9105                      MOVE   A8,*A5+,0
2f770: 82ad                      MOVE   A5,*A13,1
2f780: c00a                      JR     2F830h
2f790: 4d05                      MOVE   A8,A5
2f7a0: c505                      JRGE   2F800h
2f7b0: 87a8                      MOVE   *A13,A8,1
2f7c0: 44a5                      SUB    A5,A5
2f7d0: 90a8                      MOVE   A5,*A8+,0
2f7e0: 830d                      MOVE   A8,*A13,1
2f7f0: c003                      JR     2F830h
2f800: 87a8                      MOVE   *A13,A8,1
2f810: 90a8                      MOVE   A5,*A8+,0
2f820: 830d                      MOVE   A8,*A13,1
2f830: 0570                      SETF   10h,1,0
2f840: b5a8 0040                 MOVE   *A13(40h),A8,0
2f860: 1028                      INC    A8
2f870: b10d 0040                 MOVE   A8,*A13(40h),0
2f890: 0b48 fc01                 CMPI   3FEh,A8
2f8b0: c4b7                      JRLT   2F430h
2f8c0: b7ee 0180                 MOVE   *SP(180h),A14,1
2f8e0: 09af 3e77                 MMFM   SP,A0-A2,A4-A6,A9-A13
2f900: 0962                      RETS   2h

_do_filter3:
2f910: 098f ea7c                 MMTM   SP,A0-A2,A4,A6,A9-A13
2f930: 4dcd                      MOVE   A14,A13
2f940: 09e9 3560 0004            MOVI   43560h,A9
2f970: 4d2a                      MOVE   A9,A10
2f980: 4d2b                      MOVE   A9,A11
2f990: 4d2c                      MOVE   A9,A12
2f9a0: 4d20                      MOVE   A9,A0
2f9b0: 4c02                      MOVE   A0,A2
2f9c0: 110a                      ADDK   8h,A10
2f9d0: 120b                      ADDK   10h,A11
2f9e0: 0b0c 4000                 ADDI   4000h,A12
2fa00: 0b00 4008                 ADDI   4008h,A0
2fa20: 0b02 4010                 ADDI   4010h,A2
2fa40: 09e4 0000 2000            MOVI   20000000h,A4
2fa70: 0570                      SETF   10h,1,0
2fa80: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2faa0: 25a8                      SLL    Dh,A8
2fab0: 4104                      ADD    A8,A4
2fac0: 1104                      ADDK   8h,A4
2fad0: 4421                      SUB    A1,A1
2fae0: 0548                      SETF   8h,0,0
2faf0: 44c6                      SUB    A6,A6
2fb00: 9528                      MOVE   *A9+,A8,0
2fb10: 2428                      SLL    1h,A8
2fb20: 4506                      SUB    A8,A6
2fb30: 9548                      MOVE   *A10+,A8,0
2fb40: 2428                      SLL    1h,A8
2fb50: 4506                      SUB    A8,A6
2fb60: 9568                      MOVE   *A11+,A8,0
2fb70: 2428                      SLL    1h,A8
2fb80: 4506                      SUB    A8,A6
2fb90: 9588                      MOVE   *A12+,A8,0
2fba0: 2428                      SLL    1h,A8
2fbb0: 4106                      ADD    A8,A6
2fbc0: 9408                      MOVE   *A0+,A8,0
2fbd0: 2428                      SLL    1h,A8
2fbe0: 4106                      ADD    A8,A6
2fbf0: 9448                      MOVE   *A2+,A8,0
2fc00: 2428                      SLL    1h,A8
2fc10: 4106                      ADD    A8,A6
2fc20: 0b46 ff00                 CMPI   FFh,A6
2fc40: c604                      JRLE   2FC90h
2fc50: 09c8 00ff                 MOVI   FFh,A8
2fc70: 9104                      MOVE   A8,*A4+,0
2fc80: c006                      JR     2FCF0h
2fc90: 4cc8                      MOVE   A6,A8
2fca0: c503                      JRGE   2FCE0h
2fcb0: 4508                      SUB    A8,A8
2fcc0: 9104                      MOVE   A8,*A4+,0
2fcd0: c001                      JR     2FCF0h
2fce0: 90c4                      MOVE   A6,*A4+,0
2fcf0: 1021                      INC    A1
2fd00: 2601                      SLL    10h,A1
2fd10: 2a01                      SRA    10h,A1
2fd20: 0b41 fc01                 CMPI   3FEh,A1
2fd40: c4da                      JRLT   2FAF0h
2fd50: b7ee 0160                 MOVE   *SP(160h),A14,1
2fd70: 09af 3e57                 MMFM   SP,A0-A2,A4,A6,A9-A13
2fd90: 0962                      RETS   2h

_do_filter4:
2fda0: 098f ea7c                 MMTM   SP,A0-A2,A4,A6,A9-A13
2fdc0: 4dcd                      MOVE   A14,A13
2fdd0: 09e9 3560 0004            MOVI   43560h,A9
2fe00: 4d2a                      MOVE   A9,A10
2fe10: 4d2b                      MOVE   A9,A11
2fe20: 4d2c                      MOVE   A9,A12
2fe30: 4d20                      MOVE   A9,A0
2fe40: 4c02                      MOVE   A0,A2
2fe50: 120a                      ADDK   10h,A10
2fe60: 0b0b 2000                 ADDI   2000h,A11
2fe80: 0b0c 2010                 ADDI   2010h,A12
2fea0: 0b00 4000                 ADDI   4000h,A0
2fec0: 0b02 4010                 ADDI   4010h,A2
2fee0: 09e4 0000 2000            MOVI   20000000h,A4
2ff10: 0570                      SETF   10h,1,0
2ff20: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
2ff40: 25a8                      SLL    Dh,A8
2ff50: 4104                      ADD    A8,A4
2ff60: 1104                      ADDK   8h,A4
2ff70: 4421                      SUB    A1,A1
2ff80: 0548                      SETF   8h,0,0
2ff90: 44c6                      SUB    A6,A6
2ffa0: 9528                      MOVE   *A9+,A8,0
2ffb0: 2428                      SLL    1h,A8
2ffc0: 4506                      SUB    A8,A6
2ffd0: 9568                      MOVE   *A11+,A8,0
2ffe0: 2428                      SLL    1h,A8
2fff0: 4506                      SUB    A8,A6
30000: 9408                      MOVE   *A0+,A8,0
30010: 2428                      SLL    1h,A8
30020: 4506                      SUB    A8,A6
30030: 9548                      MOVE   *A10+,A8,0
30040: 2428                      SLL    1h,A8
30050: 4106                      ADD    A8,A6
30060: 9588                      MOVE   *A12+,A8,0
30070: 2428                      SLL    1h,A8
30080: 4106                      ADD    A8,A6
30090: 9448                      MOVE   *A2+,A8,0
300a0: 2428                      SLL    1h,A8
300b0: 4106                      ADD    A8,A6
300c0: 0b46 ff00                 CMPI   FFh,A6
300e0: c604                      JRLE   30130h
300f0: 09c8 00ff                 MOVI   FFh,A8
30110: 9104                      MOVE   A8,*A4+,0
30120: c006                      JR     30190h
30130: 4cc8                      MOVE   A6,A8
30140: c503                      JRGE   30180h
30150: 4508                      SUB    A8,A8
30160: 9104                      MOVE   A8,*A4+,0
30170: c001                      JR     30190h
30180: 90c4                      MOVE   A6,*A4+,0
30190: 1021                      INC    A1
301a0: 2601                      SLL    10h,A1
301b0: 2a01                      SRA    10h,A1
301c0: 0b41 fc01                 CMPI   3FEh,A1
301e0: c4da                      JRLT   2FF90h
301f0: b7ee 0160                 MOVE   *SP(160h),A14,1
30210: 09af 3e57                 MMFM   SP,A0-A2,A4,A6,A9-A13
30230: 0962                      RETS   2h

_do_filter5:
30240: 098f aa7c                 MMTM   SP,A0,A2,A4,A6,A9-A13
30260: 4dcd                      MOVE   A14,A13
30270: 09e9 3560 0004            MOVI   43560h,A9
302a0: 4d2a                      MOVE   A9,A10
302b0: 4d2b                      MOVE   A9,A11
302c0: 4d2c                      MOVE   A9,A12
302d0: 4d20                      MOVE   A9,A0
302e0: 1109                      ADDK   8h,A9
302f0: 0b0a 2000                 ADDI   2000h,A10
30310: 0b0b 2008                 ADDI   2008h,A11
30330: 0b0c 2010                 ADDI   2010h,A12
30350: 0b00 4008                 ADDI   4008h,A0
30370: 09e2 0000 2000            MOVI   20000000h,A2
303a0: 0570                      SETF   10h,1,0
303b0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
303d0: 25a8                      SLL    Dh,A8
303e0: 4102                      ADD    A8,A2
303f0: 1102                      ADDK   8h,A2
30400: 44c6                      SUB    A6,A6
30410: 0548                      SETF   8h,0,0
30420: 4484                      SUB    A4,A4
30430: 9528                      MOVE   *A9+,A8,0
30440: 4504                      SUB    A8,A4
30450: 9548                      MOVE   *A10+,A8,0
30460: 4504                      SUB    A8,A4
30470: 9568                      MOVE   *A11+,A8,0
30480: 2448                      SLL    2h,A8
30490: 4104                      ADD    A8,A4
304a0: 9588                      MOVE   *A12+,A8,0
304b0: 4504                      SUB    A8,A4
304c0: 9408                      MOVE   *A0+,A8,0
304d0: 4504                      SUB    A8,A4
304e0: 0b44 ff00                 CMPI   FFh,A4
30500: c604                      JRLE   30550h
30510: 09c8 00ff                 MOVI   FFh,A8
30530: 9102                      MOVE   A8,*A2+,0
30540: c006                      JR     305B0h
30550: 4c88                      MOVE   A4,A8
30560: c503                      JRGE   305A0h
30570: 4508                      SUB    A8,A8
30580: 9102                      MOVE   A8,*A2+,0
30590: c001                      JR     305B0h
305a0: 9082                      MOVE   A4,*A2+,0
305b0: 1026                      INC    A6
305c0: 2606                      SLL    10h,A6
305d0: 2a06                      SRA    10h,A6
305e0: 0b46 fc01                 CMPI   3FEh,A6
30600: c4e1                      JRLT   30420h
30610: b7ee 0140                 MOVE   *SP(140h),A14,1
30630: 09af 3e55                 MMFM   SP,A0,A2,A4,A6,A9-A13
30650: 0962                      RETS   2h

_do_filter6:
30660: 098f ee7c                 MMTM   SP,A0-A2,A4-A6,A9-A13
30680: 4dcd                      MOVE   A14,A13
30690: 0b0e 0060                 ADDI   60h,A14
306b0: 09e9 3560 0004            MOVI   43560h,A9
306e0: 4d2a                      MOVE   A9,A10
306f0: 4d2b                      MOVE   A9,A11
30700: 4d2c                      MOVE   A9,A12
30710: 4d20                      MOVE   A9,A0
30720: 4c02                      MOVE   A0,A2
30730: 4c04                      MOVE   A0,A4
30740: 4c06                      MOVE   A0,A6
30750: 4c01                      MOVE   A0,A1
30760: 110a                      ADDK   8h,A10
30770: 120b                      ADDK   10h,A11
30780: 0b0c 2000                 ADDI   2000h,A12
307a0: 0b00 2008                 ADDI   2008h,A0
307c0: 0b02 2010                 ADDI   2010h,A2
307e0: 0b04 4000                 ADDI   4000h,A4
30800: 0b06 4008                 ADDI   4008h,A6
30820: 0b01 4010                 ADDI   4010h,A1
30840: 09e8 0000 2000            MOVI   20000000h,A8
30870: 830d                      MOVE   A8,*A13,1
30880: 0570                      SETF   10h,1,0
30890: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
308b0: 25a8                      SLL    Dh,A8
308c0: 87a5                      MOVE   *A13,A5,1
308d0: 40a8                      ADD    A5,A8
308e0: 830d                      MOVE   A8,*A13,1
308f0: 1108                      ADDK   8h,A8
30900: 830d                      MOVE   A8,*A13,1
30910: 44a5                      SUB    A5,A5
30920: b0ad 0040                 MOVE   A5,*A13(40h),0
30940: 4508                      SUB    A8,A8
30950: b30d 0020                 MOVE   A8,*A13(20h),1
30970: 0548                      SETF   8h,0,0
30980: 9525                      MOVE   *A9+,A5,0
30990: 44a8                      SUB    A5,A8
309a0: b30d 0020                 MOVE   A8,*A13(20h),1
309c0: 9545                      MOVE   *A10+,A5,0
309d0: 44a8                      SUB    A5,A8
309e0: b30d 0020                 MOVE   A8,*A13(20h),1
30a00: 9565                      MOVE   *A11+,A5,0
30a10: 44a8                      SUB    A5,A8
30a20: b30d 0020                 MOVE   A8,*A13(20h),1
30a40: 9585                      MOVE   *A12+,A5,0
30a50: 44a8                      SUB    A5,A8
30a60: b30d 0020                 MOVE   A8,*A13(20h),1
30a80: 9405                      MOVE   *A0+,A5,0
30a90: 2465                      SLL    3h,A5
30aa0: 4105                      ADD    A8,A5
30ab0: b2ad 0020                 MOVE   A5,*A13(20h),1
30ad0: 9448                      MOVE   *A2+,A8,0
30ae0: 4505                      SUB    A8,A5
30af0: b2ad 0020                 MOVE   A5,*A13(20h),1
30b10: 9488                      MOVE   *A4+,A8,0
30b20: 4505                      SUB    A8,A5
30b30: b2ad 0020                 MOVE   A5,*A13(20h),1
30b50: 94c8                      MOVE   *A6+,A8,0
30b60: 4505                      SUB    A8,A5
30b70: b2ad 0020                 MOVE   A5,*A13(20h),1
30b90: 9428                      MOVE   *A1+,A8,0
30ba0: 4505                      SUB    A8,A5
30bb0: b2ad 0020                 MOVE   A5,*A13(20h),1
30bd0: 0b45 ff00                 CMPI   FFh,A5
30bf0: c606                      JRLE   30C60h
30c00: 87a8                      MOVE   *A13,A8,1
30c10: 09c5 00ff                 MOVI   FFh,A5
30c30: 90a8                      MOVE   A5,*A8+,0
30c40: 830d                      MOVE   A8,*A13,1
30c50: c00a                      JR     30D00h
30c60: 4ca8                      MOVE   A5,A8
30c70: c505                      JRGE   30CD0h
30c80: 87a8                      MOVE   *A13,A8,1
30c90: 44a5                      SUB    A5,A5
30ca0: 90a8                      MOVE   A5,*A8+,0
30cb0: 830d                      MOVE   A8,*A13,1
30cc0: c003                      JR     30D00h
30cd0: 87a8                      MOVE   *A13,A8,1
30ce0: 90a8                      MOVE   A5,*A8+,0
30cf0: 830d                      MOVE   A8,*A13,1
30d00: 0570                      SETF   10h,1,0
30d10: b5a5 0040                 MOVE   *A13(40h),A5,0
30d30: 1025                      INC    A5
30d40: b0ad 0040                 MOVE   A5,*A13(40h),0
30d60: 0b45 fc01                 CMPI   3FEh,A5
30d80: c4bb                      JRLT   30940h
30d90: b7ee 0180                 MOVE   *SP(180h),A14,1
30db0: 09af 3e77                 MMFM   SP,A0-A2,A4-A6,A9-A13
30dd0: 0962                      RETS   2h

_do_filter7:
30de0: 098f ea7c                 MMTM   SP,A0-A2,A4,A6,A9-A13
30e00: 4dcd                      MOVE   A14,A13
30e10: 09e9 3560 0004            MOVI   43560h,A9
30e40: 4d2a                      MOVE   A9,A10
30e50: 4d2b                      MOVE   A9,A11
30e60: 4d2c                      MOVE   A9,A12
30e70: 4d20                      MOVE   A9,A0
30e80: 4c02                      MOVE   A0,A2
30e90: 120a                      ADDK   10h,A10
30ea0: 0b0b 2000                 ADDI   2000h,A11
30ec0: 0b0c 2010                 ADDI   2010h,A12
30ee0: 0b00 4000                 ADDI   4000h,A0
30f00: 0b02 4010                 ADDI   4010h,A2
30f20: 09e4 0000 2000            MOVI   20000000h,A4
30f50: 0570                      SETF   10h,1,0
30f60: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
30f80: 25a8                      SLL    Dh,A8
30f90: 4104                      ADD    A8,A4
30fa0: 1104                      ADDK   8h,A4
30fb0: 4421                      SUB    A1,A1
30fc0: 0548                      SETF   8h,0,0
30fd0: 44c6                      SUB    A6,A6
30fe0: 9528                      MOVE   *A9+,A8,0
30ff0: 2428                      SLL    1h,A8
31000: 4106                      ADD    A8,A6
31010: 9568                      MOVE   *A11+,A8,0
31020: 2428                      SLL    1h,A8
31030: 4106                      ADD    A8,A6
31040: 9408                      MOVE   *A0+,A8,0
31050: 2428                      SLL    1h,A8
31060: 4106                      ADD    A8,A6
31070: 9548                      MOVE   *A10+,A8,0
31080: 2428                      SLL    1h,A8
31090: 4506                      SUB    A8,A6
310a0: 9588                      MOVE   *A12+,A8,0
310b0: 2428                      SLL    1h,A8
310c0: 4506                      SUB    A8,A6
310d0: 9448                      MOVE   *A2+,A8,0
310e0: 2428                      SLL    1h,A8
310f0: 4506                      SUB    A8,A6
31100: 0b46 ff00                 CMPI   FFh,A6
31120: c604                      JRLE   31170h
31130: 09c8 00ff                 MOVI   FFh,A8
31150: 9104                      MOVE   A8,*A4+,0
31160: c006                      JR     311D0h
31170: 4cc8                      MOVE   A6,A8
31180: c503                      JRGE   311C0h
31190: 4508                      SUB    A8,A8
311a0: 9104                      MOVE   A8,*A4+,0
311b0: c001                      JR     311D0h
311c0: 90c4                      MOVE   A6,*A4+,0
311d0: 1021                      INC    A1
311e0: 2601                      SLL    10h,A1
311f0: 2a01                      SRA    10h,A1
31200: 0b41 fc01                 CMPI   3FEh,A1
31220: c4da                      JRLT   30FD0h
31230: b7ee 0160                 MOVE   *SP(160h),A14,1
31250: 09af 3e57                 MMFM   SP,A0-A2,A4,A6,A9-A13
31270: 0962                      RETS   2h

_do_filter8:
31280: 098f ea7c                 MMTM   SP,A0-A2,A4,A6,A9-A13
312a0: 4dcd                      MOVE   A14,A13
312b0: 09e9 3560 0004            MOVI   43560h,A9
312e0: 4d2a                      MOVE   A9,A10
312f0: 4d2b                      MOVE   A9,A11
31300: 4d2c                      MOVE   A9,A12
31310: 4d20                      MOVE   A9,A0
31320: 4c02                      MOVE   A0,A2
31330: 120a                      ADDK   10h,A10
31340: 0b0b 2000                 ADDI   2000h,A11
31360: 0b0c 2010                 ADDI   2010h,A12
31380: 0b00 4000                 ADDI   4000h,A0
313a0: 0b02 4010                 ADDI   4010h,A2
313c0: 09e4 0000 2000            MOVI   20000000h,A4
313f0: 0570                      SETF   10h,1,0
31400: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
31420: 25a8                      SLL    Dh,A8
31430: 4104                      ADD    A8,A4
31440: 1104                      ADDK   8h,A4
31450: 4421                      SUB    A1,A1
31460: 0548                      SETF   8h,0,0
31470: 44c6                      SUB    A6,A6
31480: 9528                      MOVE   *A9+,A8,0
31490: 4106                      ADD    A8,A6
314a0: 9568                      MOVE   *A11+,A8,0
314b0: 2428                      SLL    1h,A8
314c0: 4106                      ADD    A8,A6
314d0: 9408                      MOVE   *A0+,A8,0
314e0: 4106                      ADD    A8,A6
314f0: 9548                      MOVE   *A10+,A8,0
31500: 4506                      SUB    A8,A6
31510: 9588                      MOVE   *A12+,A8,0
31520: 2428                      SLL    1h,A8
31530: 4506                      SUB    A8,A6
31540: 9448                      MOVE   *A2+,A8,0
31550: 4506                      SUB    A8,A6
31560: 0b46 ff00                 CMPI   FFh,A6
31580: c604                      JRLE   315D0h
31590: 09c8 00ff                 MOVI   FFh,A8
315b0: 9104                      MOVE   A8,*A4+,0
315c0: c006                      JR     31630h
315d0: 4cc8                      MOVE   A6,A8
315e0: c503                      JRGE   31620h
315f0: 4508                      SUB    A8,A8
31600: 9104                      MOVE   A8,*A4+,0
31610: c001                      JR     31630h
31620: 90c4                      MOVE   A6,*A4+,0
31630: 1021                      INC    A1
31640: 2601                      SLL    10h,A1
31650: 2a01                      SRA    10h,A1
31660: 0b41 fc01                 CMPI   3FEh,A1
31680: c4de                      JRLT   31470h
31690: b7ee 0160                 MOVE   *SP(160h),A14,1
316b0: 09af 3e57                 MMFM   SP,A0-A2,A4,A6,A9-A13
316d0: 0962                      RETS   2h

_do_filter9:
316e0: 098f ee7c                 MMTM   SP,A0-A2,A4-A6,A9-A13
31700: 4dcd                      MOVE   A14,A13
31710: 0b0e 0060                 ADDI   60h,A14
31730: 09e9 3560 0004            MOVI   43560h,A9
31760: 4d2a                      MOVE   A9,A10
31770: 4d2b                      MOVE   A9,A11
31780: 4d2c                      MOVE   A9,A12
31790: 4d20                      MOVE   A9,A0
317a0: 4c02                      MOVE   A0,A2
317b0: 4c04                      MOVE   A0,A4
317c0: 4c06                      MOVE   A0,A6
317d0: 4c01                      MOVE   A0,A1
317e0: 110a                      ADDK   8h,A10
317f0: 120b                      ADDK   10h,A11
31800: 0b0c 2000                 ADDI   2000h,A12
31820: 0b00 2008                 ADDI   2008h,A0
31840: 0b02 2010                 ADDI   2010h,A2
31860: 0b04 4000                 ADDI   4000h,A4
31880: 0b06 4008                 ADDI   4008h,A6
318a0: 0b01 4010                 ADDI   4010h,A1
318c0: 09e8 0000 2000            MOVI   20000000h,A8
318f0: 830d                      MOVE   A8,*A13,1
31900: 0570                      SETF   10h,1,0
31910: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
31930: 25a8                      SLL    Dh,A8
31940: 87a5                      MOVE   *A13,A5,1
31950: 40a8                      ADD    A5,A8
31960: 830d                      MOVE   A8,*A13,1
31970: 1108                      ADDK   8h,A8
31980: 830d                      MOVE   A8,*A13,1
31990: 44a5                      SUB    A5,A5
319a0: b0ad 0040                 MOVE   A5,*A13(40h),0
319c0: 4508                      SUB    A8,A8
319d0: b30d 0020                 MOVE   A8,*A13(20h),1
319f0: 0548                      SETF   8h,0,0
31a00: 9525                      MOVE   *A9+,A5,0
31a10: 4105                      ADD    A8,A5
31a20: b2ad 0020                 MOVE   A5,*A13(20h),1
31a40: 9548                      MOVE   *A10+,A8,0
31a50: 40a8                      ADD    A5,A8
31a60: b30d 0020                 MOVE   A8,*A13(20h),1
31a80: 9565                      MOVE   *A11+,A5,0
31a90: 4105                      ADD    A8,A5
31aa0: b2ad 0020                 MOVE   A5,*A13(20h),1
31ac0: 9588                      MOVE   *A12+,A8,0
31ad0: 40a8                      ADD    A5,A8
31ae0: b30d 0020                 MOVE   A8,*A13(20h),1
31b00: 9405                      MOVE   *A0+,A5,0
31b10: 4105                      ADD    A8,A5
31b20: b2ad 0020                 MOVE   A5,*A13(20h),1
31b40: 9448                      MOVE   *A2+,A8,0
31b50: 40a8                      ADD    A5,A8
31b60: b30d 0020                 MOVE   A8,*A13(20h),1
31b80: 9485                      MOVE   *A4+,A5,0
31b90: 4105                      ADD    A8,A5
31ba0: b2ad 0020                 MOVE   A5,*A13(20h),1
31bc0: 94c8                      MOVE   *A6+,A8,0
31bd0: 40a8                      ADD    A5,A8
31be0: b30d 0020                 MOVE   A8,*A13(20h),1
31c00: 9425                      MOVE   *A1+,A5,0
31c10: 4105                      ADD    A8,A5
31c20: b2ad 0020                 MOVE   A5,*A13(20h),1
31c40: 1928                      MOVK   9h,A8
31c50: 5905                      DIVS   A8,A5
31c60: 87a8                      MOVE   *A13,A8,1
31c70: 90a8                      MOVE   A5,*A8+,0
31c80: 830d                      MOVE   A8,*A13,1
31c90: 0570                      SETF   10h,1,0
31ca0: b5a5 0040                 MOVE   *A13(40h),A5,0
31cc0: 1025                      INC    A5
31cd0: b0ad 0040                 MOVE   A5,*A13(40h),0
31cf0: 0b45 fc01                 CMPI   3FEh,A5
31d10: c4ca                      JRLT   319C0h
31d20: b7ee 0180                 MOVE   *SP(180h),A14,1
31d40: 09af 3e77                 MMFM   SP,A0-A2,A4-A6,A9-A13
31d60: 0962                      RETS   2h

_do_filter10:
31d70: 098f ee7c                 MMTM   SP,A0-A2,A4-A6,A9-A13
31d90: 4dcd                      MOVE   A14,A13
31da0: 0b0e 0060                 ADDI   60h,A14
31dc0: 09e9 3560 0004            MOVI   43560h,A9
31df0: 4d2a                      MOVE   A9,A10
31e00: 4d2b                      MOVE   A9,A11
31e10: 4d2c                      MOVE   A9,A12
31e20: 4d20                      MOVE   A9,A0
31e30: 4c02                      MOVE   A0,A2
31e40: 4c04                      MOVE   A0,A4
31e50: 4c06                      MOVE   A0,A6
31e60: 4c01                      MOVE   A0,A1
31e70: 110a                      ADDK   8h,A10
31e80: 120b                      ADDK   10h,A11
31e90: 0b0c 2000                 ADDI   2000h,A12
31eb0: 0b00 2008                 ADDI   2008h,A0
31ed0: 0b02 2010                 ADDI   2010h,A2
31ef0: 0b04 4000                 ADDI   4000h,A4
31f10: 0b06 4008                 ADDI   4008h,A6
31f30: 0b01 4010                 ADDI   4010h,A1
31f50: 09e8 0000 2000            MOVI   20000000h,A8
31f80: 830d                      MOVE   A8,*A13,1
31f90: 0570                      SETF   10h,1,0
31fa0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
31fc0: 25a8                      SLL    Dh,A8
31fd0: 87a5                      MOVE   *A13,A5,1
31fe0: 40a8                      ADD    A5,A8
31ff0: 830d                      MOVE   A8,*A13,1
32000: 1108                      ADDK   8h,A8
32010: 830d                      MOVE   A8,*A13,1
32020: 44a5                      SUB    A5,A5
32030: b0ad 0040                 MOVE   A5,*A13(40h),0
32050: 4508                      SUB    A8,A8
32060: b30d 0020                 MOVE   A8,*A13(20h),1
32080: 0548                      SETF   8h,0,0
32090: 9525                      MOVE   *A9+,A5,0
320a0: 4105                      ADD    A8,A5
320b0: b2ad 0020                 MOVE   A5,*A13(20h),1
320d0: 9548                      MOVE   *A10+,A8,0
320e0: 2428                      SLL    1h,A8
320f0: 40a8                      ADD    A5,A8
32100: b30d 0020                 MOVE   A8,*A13(20h),1
32120: 9565                      MOVE   *A11+,A5,0
32130: 4105                      ADD    A8,A5
32140: b2ad 0020                 MOVE   A5,*A13(20h),1
32160: 9588                      MOVE   *A12+,A8,0
32170: 2428                      SLL    1h,A8
32180: 40a8                      ADD    A5,A8
32190: b30d 0020                 MOVE   A8,*A13(20h),1
321b0: 9405                      MOVE   *A0+,A5,0
321c0: 2445                      SLL    2h,A5
321d0: 4105                      ADD    A8,A5
321e0: b2ad 0020                 MOVE   A5,*A13(20h),1
32200: 9448                      MOVE   *A2+,A8,0
32210: 2428                      SLL    1h,A8
32220: 40a8                      ADD    A5,A8
32230: b30d 0020                 MOVE   A8,*A13(20h),1
32250: 9485                      MOVE   *A4+,A5,0
32260: 4105                      ADD    A8,A5
32270: b2ad 0020                 MOVE   A5,*A13(20h),1
32290: 94c8                      MOVE   *A6+,A8,0
322a0: 2428                      SLL    1h,A8
322b0: 40a8                      ADD    A5,A8
322c0: b30d 0020                 MOVE   A8,*A13(20h),1
322e0: 9425                      MOVE   *A1+,A5,0
322f0: 4105                      ADD    A8,A5
32300: b2ad 0020                 MOVE   A5,*A13(20h),1
32320: 87a8                      MOVE   *A13,A8,1
32330: 2b85                      SRA    4h,A5
32340: 90a8                      MOVE   A5,*A8+,0
32350: 830d                      MOVE   A8,*A13,1
32360: 0570                      SETF   10h,1,0
32370: b5a5 0040                 MOVE   *A13(40h),A5,0
32390: 1025                      INC    A5
323a0: b0ad 0040                 MOVE   A5,*A13(40h),0
323c0: 0b45 fc01                 CMPI   3FEh,A5
323e0: c4c6                      JRLT   32050h
323f0: b7ee 0180                 MOVE   *SP(180h),A14,1
32410: 09af 3e77                 MMFM   SP,A0-A2,A4-A6,A9-A13
32430: 0962                      RETS   2h

_image_histo_equal:
32440: 098f 007c                 MMTM   SP,A9-A13
32460: 4dcd                      MOVE   A14,A13
32470: 0b0e 0040                 ADDI   40h,A14
32490: 4508                      SUB    A8,A8
324a0: 0570                      SETF   10h,1,0
324b0: 810d                      MOVE   A8,*A13,0
324c0: 85a8                      MOVE   *A13,A8,0
324d0: 24a8                      SLL    5h,A8
324e0: 0b28 8860 000e            ADDI   E8860h,A8
32510: 458c                      SUB    A12,A12
32520: 8388                      MOVE   A12,*A8,1
32530: 85a8                      MOVE   *A13,A8,0
32540: 1028                      INC    A8
32550: 810d                      MOVE   A8,*A13,0
32560: 0b48 feff                 CMPI   100h,A8
32580: c4f3                      JRLT   324C0h
32590: 09e9 0000 2000            MOVI   20000000h,A9
325c0: 4d8a                      MOVE   A12,A10
325d0: 0548                      SETF   8h,0,0
325e0: 952c                      MOVE   *A9+,A12,0
325f0: 24ac                      SLL    5h,A12
32600: 0b2c 8860 000e            ADDI   E8860h,A12
32630: 8788                      MOVE   *A12,A8,1
32640: 1028                      INC    A8
32650: 830c                      MOVE   A8,*A12,1
32660: 102a                      INC    A10
32670: 0b6a ffff fff3            CMPI   C0000h,A10
326a0: c8f3                      JRC    325E0h
326b0: 07c0 8860 000e a860 000e  MOVE   @E8860h,@EA860h,1
32700: 182c                      MOVK   1h,A12
32710: 0570                      SETF   10h,1,0
32720: 818d                      MOVE   A12,*A13,0
32730: 85ac                      MOVE   *A13,A12,0
32740: 142c                      DEC    A12
32750: 24ac                      SLL    5h,A12
32760: 0b2c a860 000e            ADDI   EA860h,A12
32790: 85a8                      MOVE   *A13,A8,0
327a0: 24a8                      SLL    5h,A8
327b0: 0b28 8860 000e            ADDI   E8860h,A8
327e0: 878c                      MOVE   *A12,A12,1
327f0: 8708                      MOVE   *A8,A8,1
32800: 410c                      ADD    A8,A12
32810: 85a8                      MOVE   *A13,A8,0
32820: 24a8                      SLL    5h,A8
32830: 0b28 a860 000e            ADDI   EA860h,A8
32860: 8388                      MOVE   A12,*A8,1
32870: 85ac                      MOVE   *A13,A12,0
32880: 102c                      INC    A12
32890: 818d                      MOVE   A12,*A13,0
328a0: 0b4c feff                 CMPI   100h,A12
328c0: c4e6                      JRLT   32730h
328d0: 07a8 c840 000e            MOVE   @EC840h,A8,1
32900: b30d 0020                 MOVE   A8,*A13(20h),1
32920: cb03                      JRNE   32960h
32930: 182c                      MOVK   1h,A12
32940: b38d 0020                 MOVE   A12,*A13(20h),1
32960: 458c                      SUB    A12,A12
32970: 818d                      MOVE   A12,*A13,0
32980: 85ac                      MOVE   *A13,A12,0
32990: 24ac                      SLL    5h,A12
329a0: 0b2c a860 000e            ADDI   EA860h,A12
329d0: 878b                      MOVE   *A12,A11,1
329e0: 09cc 00ff                 MOVI   FFh,A12
32a00: 5f8b                      MPYU   A12,A11
32a10: b7a8 0020                 MOVE   *A13(20h),A8,1
32a30: 5b0b                      DIVU   A8,A11
32a40: 85ac                      MOVE   *A13,A12,0
32a50: 24ac                      SLL    5h,A12
32a60: 0b2c a860 000e            ADDI   EA860h,A12
32a90: 836c                      MOVE   A11,*A12,1
32aa0: 85ac                      MOVE   *A13,A12,0
32ab0: 102c                      INC    A12
32ac0: 818d                      MOVE   A12,*A13,0
32ad0: 0b4c feff                 CMPI   100h,A12
32af0: c4e8                      JRLT   32980h
32b00: c067                      JR     33180h
32b10: 458c                      SUB    A12,A12
32b20: 818d                      MOVE   A12,*A13,0
32b30: 85ab                      MOVE   *A13,A11,0
32b40: 4d6c                      MOVE   A11,A12
32b50: 248b                      SLL    4h,A11
32b60: 246c                      SLL    3h,A12
32b70: 418b                      ADD    A12,A11
32b80: 0b2b 7060 000e            ADDI   E7060h,A11
32bb0: 89ab                      MOVE   *A13,*A11,0
32bc0: 85ab                      MOVE   *A13,A11,0
32bd0: 4d6c                      MOVE   A11,A12
32be0: 248b                      SLL    4h,A11
32bf0: 246c                      SLL    3h,A12
32c00: 418b                      ADD    A12,A11
32c10: 0b2b 7060 000e            ADDI   E7060h,A11
32c40: 85ac                      MOVE   *A13,A12,0
32c50: 24ac                      SLL    5h,A12
32c60: 0b2c a860 000e            ADDI   EA860h,A12
32c90: bd8b 0000 0010            MOVB   *A12(0h),*A11(10h)
32cc0: 85ac                      MOVE   *A13,A12,0
32cd0: 102c                      INC    A12
32ce0: 818d                      MOVE   A12,*A13,0
32cf0: 0b4c feff                 CMPI   100h,A12
32d10: c4e1                      JRLT   32B30h
32d20: a3cf                      MOVE   A14,-*SP,1
32d30: 09e8 7060 000e            MOVI   E7060h,A8
32d60: 930e                      MOVE   A8,*A14+,1
32d70: 09cb 0100                 MOVI   100h,A11
32d90: 936e                      MOVE   A11,*A14+,1
32da0: 456b                      SUB    A11,A11
32db0: 936e                      MOVE   A11,*A14+,1
32dc0: 0d5f 0000 0000            CALLA  0h
32df0: c03f                      JR     331F0h
32e00: 458c                      SUB    A12,A12
32e10: 818d                      MOVE   A12,*A13,0
32e20: a3cf                      MOVE   A14,-*SP,1
32e30: 85ac                      MOVE   *A13,A12,0
32e40: 24ac                      SLL    5h,A12
32e50: 0b2c a860 000e            ADDI   EA860h,A12
32e80: 858c                      MOVE   *A12,A12,0
32e90: 938e                      MOVE   A12,*A14+,1
32ea0: 85ac                      MOVE   *A13,A12,0
32eb0: 24ac                      SLL    5h,A12
32ec0: 0b2c a860 000e            ADDI   EA860h,A12
32ef0: 858c                      MOVE   *A12,A12,0
32f00: 938e                      MOVE   A12,*A14+,1
32f10: 85ac                      MOVE   *A13,A12,0
32f20: 24ac                      SLL    5h,A12
32f30: 0b2c a860 000e            ADDI   EA860h,A12
32f60: 858c                      MOVE   *A12,A12,0
32f70: 938e                      MOVE   A12,*A14+,1
32f80: 85ac                      MOVE   *A13,A12,0
32f90: 938e                      MOVE   A12,*A14+,1
32fa0: 1828                      MOVK   1h,A8
32fb0: 930e                      MOVE   A8,*A14+,1
32fc0: 0d5f 0000 0000            CALLA  0h
32ff0: 102c                      INC    A12
33000: 0570                      SETF   10h,1,0
33010: 818d                      MOVE   A12,*A13,0
33020: 0b4c feff                 CMPI   100h,A12
33040: c4dd                      JRLT   32E20h
33050: c019                      JR     331F0h
33060: 09e9 0000 2000            MOVI   20000000h,A9
33090: 454a                      SUB    A10,A10
330a0: 0548                      SETF   8h,0,0
330b0: 852c                      MOVE   *A9,A12,0
330c0: 24ac                      SLL    5h,A12
330d0: 0b2c a860 000e            ADDI   EA860h,A12
33100: d189 0000                 MOVE   *A12(0h),*A9+,0
33120: 102a                      INC    A10
33130: 0b6a ffff fff3            CMPI   C0000h,A10
33160: c8f4                      JRC    330B0h
33170: c007                      JR     331F0h
33180: afab ffe0                 MOVB   *A13(FFE0h),A11
331a0: ca96                      JREQ   32B10h
331b0: 142b                      DEC    A11
331c0: cac3                      JREQ   32E00h
331d0: 142b                      DEC    A11
331e0: cae7                      JREQ   33060h
331f0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
33210: 09af 3e00                 MMFM   SP,A9-A13
33230: 0962                      RETS   2h

_image_black_detect:
33240: 098f 000c                 MMTM   SP,A12,A13
33260: 4dcd                      MOVE   A14,A13
33270: 100e                      ADDK   20h,A14
33280: 4508                      SUB    A8,A8
33290: 0570                      SETF   10h,1,0
332a0: 810d                      MOVE   A8,*A13,0
332b0: 85a8                      MOVE   *A13,A8,0
332c0: 0548                      SETF   8h,0,0
332d0: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
332f0: 4988                      CMP    A12,A8
33300: c710                      JRGT   33410h
33310: a3cf                      MOVE   A14,-*SP,1
33320: 4508                      SUB    A8,A8
33330: 930e                      MOVE   A8,*A14+,1
33340: 930e                      MOVE   A8,*A14+,1
33350: 09c8 00ff                 MOVI   FFh,A8
33370: 930e                      MOVE   A8,*A14+,1
33380: 0570                      SETF   10h,1,0
33390: 85a8                      MOVE   *A13,A8,0
333a0: 930e                      MOVE   A8,*A14+,1
333b0: 1828                      MOVK   1h,A8
333c0: 930e                      MOVE   A8,*A14+,1
333d0: 0d5f 0000 0000            CALLA  0h
33400: c00a                      JR     334B0h
33410: a3cf                      MOVE   A14,-*SP,1
33420: 930e                      MOVE   A8,*A14+,1
33430: 930e                      MOVE   A8,*A14+,1
33440: 930e                      MOVE   A8,*A14+,1
33450: 930e                      MOVE   A8,*A14+,1
33460: 1828                      MOVK   1h,A8
33470: 930e                      MOVE   A8,*A14+,1
33480: 0d5f 0000 0000            CALLA  0h
334b0: 0570                      SETF   10h,1,0
334c0: 85a8                      MOVE   *A13,A8,0
334d0: 1028                      INC    A8
334e0: 810d                      MOVE   A8,*A13,0
334f0: 0b48 feff                 CMPI   100h,A8
33510: c4d9                      JRLT   332B0h
33520: b7ee 0060                 MOVE   *SP(60h),A14,1
33540: 09af 3000                 MMFM   SP,A12,A13
33560: 0962                      RETS   2h

_image_white_detect:
33570: 098f 000c                 MMTM   SP,A12,A13
33590: 4dcd                      MOVE   A14,A13
335a0: 100e                      ADDK   20h,A14
335b0: 4508                      SUB    A8,A8
335c0: 0570                      SETF   10h,1,0
335d0: 810d                      MOVE   A8,*A13,0
335e0: 85a8                      MOVE   *A13,A8,0
335f0: 0548                      SETF   8h,0,0
33600: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
33620: 4988                      CMP    A12,A8
33630: c410                      JRLT   33740h
33640: a3cf                      MOVE   A14,-*SP,1
33650: 4508                      SUB    A8,A8
33660: 930e                      MOVE   A8,*A14+,1
33670: 930e                      MOVE   A8,*A14+,1
33680: 09c8 00ff                 MOVI   FFh,A8
336a0: 930e                      MOVE   A8,*A14+,1
336b0: 0570                      SETF   10h,1,0
336c0: 85a8                      MOVE   *A13,A8,0
336d0: 930e                      MOVE   A8,*A14+,1
336e0: 1828                      MOVK   1h,A8
336f0: 930e                      MOVE   A8,*A14+,1
33700: 0d5f 0000 0000            CALLA  0h
33730: c00a                      JR     337E0h
33740: a3cf                      MOVE   A14,-*SP,1
33750: 930e                      MOVE   A8,*A14+,1
33760: 930e                      MOVE   A8,*A14+,1
33770: 930e                      MOVE   A8,*A14+,1
33780: 930e                      MOVE   A8,*A14+,1
33790: 1828                      MOVK   1h,A8
337a0: 930e                      MOVE   A8,*A14+,1
337b0: 0d5f 0000 0000            CALLA  0h
337e0: 0570                      SETF   10h,1,0
337f0: 85a8                      MOVE   *A13,A8,0
33800: 1028                      INC    A8
33810: 810d                      MOVE   A8,*A13,0
33820: 0b48 feff                 CMPI   100h,A8
33840: c4d9                      JRLT   335E0h
33850: b7ee 0060                 MOVE   *SP(60h),A14,1
33870: 09af 3000                 MMFM   SP,A12,A13
33890: 0962                      RETS   2h

_image_grey_detect:
338a0: 098f 000c                 MMTM   SP,A12,A13
338c0: 4dcd                      MOVE   A14,A13
338d0: 100e                      ADDK   20h,A14
338e0: 4508                      SUB    A8,A8
338f0: 0570                      SETF   10h,1,0
33900: 810d                      MOVE   A8,*A13,0
33910: 85a8                      MOVE   *A13,A8,0
33920: 0548                      SETF   8h,0,0
33930: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
33950: 4988                      CMP    A12,A8
33960: c614                      JRLE   33AB0h
33970: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
33990: 4988                      CMP    A12,A8
339a0: c510                      JRGE   33AB0h
339b0: a3cf                      MOVE   A14,-*SP,1
339c0: 4508                      SUB    A8,A8
339d0: 930e                      MOVE   A8,*A14+,1
339e0: 930e                      MOVE   A8,*A14+,1
339f0: 09c8 00ff                 MOVI   FFh,A8
33a10: 930e                      MOVE   A8,*A14+,1
33a20: 0570                      SETF   10h,1,0
33a30: 85a8                      MOVE   *A13,A8,0
33a40: 930e                      MOVE   A8,*A14+,1
33a50: 1828                      MOVK   1h,A8
33a60: 930e                      MOVE   A8,*A14+,1
33a70: 0d5f 0000 0000            CALLA  0h
33aa0: c00a                      JR     33B50h
33ab0: a3cf                      MOVE   A14,-*SP,1
33ac0: 930e                      MOVE   A8,*A14+,1
33ad0: 930e                      MOVE   A8,*A14+,1
33ae0: 930e                      MOVE   A8,*A14+,1
33af0: 930e                      MOVE   A8,*A14+,1
33b00: 182c                      MOVK   1h,A12
33b10: 938e                      MOVE   A12,*A14+,1
33b20: 0d5f 0000 0000            CALLA  0h
33b50: 0570                      SETF   10h,1,0
33b60: 85ac                      MOVE   *A13,A12,0
33b70: 102c                      INC    A12
33b80: 818d                      MOVE   A12,*A13,0
33b90: 0b4c feff                 CMPI   100h,A12
33bb0: c4d5                      JRLT   33910h
33bc0: b7ee 0060                 MOVE   *SP(60h),A14,1
33be0: 09af 3000                 MMFM   SP,A12,A13
33c00: 0962                      RETS   2h

_image_black_area:
33c10: 098f 057c                 MMTM   SP,A5,A7,A9-A13
33c30: 4dcd                      MOVE   A14,A13
33c40: 454a                      SUB    A10,A10
33c50: 0548                      SETF   8h,0,0
33c60: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
33c80: 09e9 0000 2000            MOVI   20000000h,A9
33cb0: 4d4b                      MOVE   A10,A11
33cc0: 8528                      MOVE   *A9,A8,0
33cd0: 4988                      CMP    A12,A8
33ce0: c701                      JRGT   33D00h
33cf0: 102a                      INC    A10
33d00: 1109                      ADDK   8h,A9
33d10: 102b                      INC    A11
33d20: 0b6b ffff fff3            CMPI   C0000h,A11
33d50: c8f6                      JRC    33CC0h
33d60: 09c8 03e8                 MOVI   3E8h,A8
33d80: 4d07                      MOVE   A8,A7
33d90: 5f47                      MPYU   A10,A7
33da0: 4cea                      MOVE   A7,A10
33db0: 09e7 0000 000c            MOVI   C0000h,A7
33de0: 4d45                      MOVE   A10,A5
33df0: 5ae5                      DIVU   A7,A5
33e00: 4caa                      MOVE   A5,A10
33e10: 4d48                      MOVE   A10,A8
33e20: 0550                      SETF   10h,0,0
33e30: 0528                      ZEXT   A8,0
33e40: b7ee 0100                 MOVE   *SP(100h),A14,1
33e60: 09af 3ea0                 MMFM   SP,A5,A7,A9-A13
33e80: 0962                      RETS   2h

_image_white_area:
33e90: 098f 057c                 MMTM   SP,A5,A7,A9-A13
33eb0: 4dcd                      MOVE   A14,A13
33ec0: 454a                      SUB    A10,A10
33ed0: 0548                      SETF   8h,0,0
33ee0: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
33f00: 09e9 0000 2000            MOVI   20000000h,A9
33f30: 4d4b                      MOVE   A10,A11
33f40: 8528                      MOVE   *A9,A8,0
33f50: 4988                      CMP    A12,A8
33f60: c401                      JRLT   33F80h
33f70: 102a                      INC    A10
33f80: 1109                      ADDK   8h,A9
33f90: 102b                      INC    A11
33fa0: 0b6b ffff fff3            CMPI   C0000h,A11
33fd0: c8f6                      JRC    33F40h
33fe0: 09c8 03e8                 MOVI   3E8h,A8
34000: 4d07                      MOVE   A8,A7
34010: 5f47                      MPYU   A10,A7
34020: 4cea                      MOVE   A7,A10
34030: 09e7 0000 000c            MOVI   C0000h,A7
34060: 4d45                      MOVE   A10,A5
34070: 5ae5                      DIVU   A7,A5
34080: 4caa                      MOVE   A5,A10
34090: 4d48                      MOVE   A10,A8
340a0: 0550                      SETF   10h,0,0
340b0: 0528                      ZEXT   A8,0
340c0: b7ee 0100                 MOVE   *SP(100h),A14,1
340e0: 09af 3ea0                 MMFM   SP,A5,A7,A9-A13
34100: 0962                      RETS   2h

_image_grey_area:
34110: 098f 857c                 MMTM   SP,A0,A5,A7,A9-A13
34130: 4dcd                      MOVE   A14,A13
34140: 454a                      SUB    A10,A10
34150: 0548                      SETF   8h,0,0
34160: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
34180: b5a0 ffc0                 MOVE   *A13(FFC0h),A0,0
341a0: 09e9 0000 2000            MOVI   20000000h,A9
341d0: 4d4b                      MOVE   A10,A11
341e0: 8528                      MOVE   *A9,A8,0
341f0: 4988                      CMP    A12,A8
34200: c604                      JRLE   34250h
34210: 8528                      MOVE   *A9,A8,0
34220: 4808                      CMP    A0,A8
34230: c501                      JRGE   34250h
34240: 102a                      INC    A10
34250: 1109                      ADDK   8h,A9
34260: 102b                      INC    A11
34270: 0b6b ffff fff3            CMPI   C0000h,A11
342a0: c8f3                      JRC    341E0h
342b0: 09c8 03e8                 MOVI   3E8h,A8
342d0: 4d07                      MOVE   A8,A7
342e0: 5f47                      MPYU   A10,A7
342f0: 4cea                      MOVE   A7,A10
34300: 09e7 0000 000c            MOVI   C0000h,A7
34330: 4d45                      MOVE   A10,A5
34340: 5ae5                      DIVU   A7,A5
34350: 4caa                      MOVE   A5,A10
34360: 4d48                      MOVE   A10,A8
34370: 0550                      SETF   10h,0,0
34380: 0528                      ZEXT   A8,0
34390: b7ee 0120                 MOVE   *SP(120h),A14,1
343b0: 09af 3ea1                 MMFM   SP,A0,A5,A7,A9-A13
343d0: 0962                      RETS   2h

_static_stereo:
343e0: 098f 0278                 MMTM   SP,A6,A9-A12
34400: 09e9 0000 2000            MOVI   20000000h,A9
34430: 09ea 0000 2060            MOVI   20600000h,A10
34460: 456b                      SUB    A11,A11
34470: 458c                      SUB    A12,A12
34480: 0548                      SETF   8h,0,0
34490: 8548                      MOVE   *A10,A8,0
344a0: 1826                      MOVK   1h,A6
344b0: 54c8                      OR     A6,A8
344c0: 8d09                      MOVB   A8,*A9
344d0: 1109                      ADDK   8h,A9
344e0: 8528                      MOVE   *A9,A8,0
344f0: 0b88 ff01 ffff            ANDI   FEh,A8
34520: 8d09                      MOVB   A8,*A9
34530: 1109                      ADDK   8h,A9
34540: 120a                      ADDK   10h,A10
34550: 104c                      ADDK   2h,A12
34560: 0b4c fbff                 CMPI   400h,A12
34580: c4f0                      JRLT   34490h
34590: 110a                      ADDK   8h,A10
345a0: 458c                      SUB    A12,A12
345b0: 8526                      MOVE   *A9,A6,0
345c0: 0b86 ff01 ffff            ANDI   FEh,A6
345f0: 8cc9                      MOVB   A6,*A9
34600: 1109                      ADDK   8h,A9
34610: 8546                      MOVE   *A10,A6,0
34620: 1828                      MOVK   1h,A8
34630: 5506                      OR     A8,A6
34640: 8cc9                      MOVB   A6,*A9
34650: 1109                      ADDK   8h,A9
34660: 120a                      ADDK   10h,A10
34670: 104c                      ADDK   2h,A12
34680: 0b4c fbff                 CMPI   400h,A12
346a0: c4f0                      JRLT   345B0h
346b0: 150a                      SUBK   8h,A10
346c0: 104b                      ADDK   2h,A11
346d0: 0b4b fcff                 CMPI   300h,A11
346f0: c4d7                      JRLT   34470h
34700: a3cf                      MOVE   A14,-*SP,1
34710: 930e                      MOVE   A8,*A14+,1
34720: 0d5f 0000 0000            CALLA  0h
34750: 09af 1e40                 MMFM   SP,A6,A9-A12
34770: 0960                      RETS   

_copy_zone:
34780: 098f 000c                 MMTM   SP,A12,A13
347a0: 4dcd                      MOVE   A14,A13
347b0: 0b0e 0080                 ADDI   80h,A14
347d0: 0548                      SETF   8h,0,0
347e0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
34800: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
34820: 4988                      CMP    A12,A8
34830: cb00 008a                 JRNE   350F0h
34850: c000 00f1                 JR     35780h
34870: 09cc 0200                 MOVI   200h,A12
34890: 0550                      SETF   10h,0,0
348a0: b18d 0060                 MOVE   A12,*A13(60h),0
348c0: 09c8 0300                 MOVI   300h,A8
348e0: b10d 0050                 MOVE   A8,*A13(50h),0
34900: 0548                      SETF   8h,0,0
34910: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
34930: cb0b                      JRNE   349F0h
34940: 4508                      SUB    A8,A8
34950: 0550                      SETF   10h,0,0
34960: b10d 0030                 MOVE   A8,*A13(30h),0
34980: b10d 0040                 MOVE   A8,*A13(40h),0
349a0: b18d 0010                 MOVE   A12,*A13(10h),0
349c0: b10d 0020                 MOVE   A8,*A13(20h),0
349e0: c078                      JR     35170h
349f0: 0550                      SETF   10h,0,0
34a00: b18d 0030                 MOVE   A12,*A13(30h),0
34a20: 4508                      SUB    A8,A8
34a30: b10d 0040                 MOVE   A8,*A13(40h),0
34a50: b10d 0010                 MOVE   A8,*A13(10h),0
34a70: b10d 0020                 MOVE   A8,*A13(20h),0
34a90: c06d                      JR     35170h
34aa0: 09cc 0200                 MOVI   200h,A12
34ac0: 0550                      SETF   10h,0,0
34ad0: b18d 0060                 MOVE   A12,*A13(60h),0
34af0: 09c8 0180                 MOVI   180h,A8
34b10: b10d 0050                 MOVE   A8,*A13(50h),0
34b30: c023                      JR     34D70h
34b40: 458c                      SUB    A12,A12
34b50: 0550                      SETF   10h,0,0
34b60: b18d 0030                 MOVE   A12,*A13(30h),0
34b80: b18d 0040                 MOVE   A12,*A13(40h),0
34ba0: c04a                      JR     35050h
34bb0: 09cc 0200                 MOVI   200h,A12
34bd0: 0550                      SETF   10h,0,0
34be0: b18d 0030                 MOVE   A12,*A13(30h),0
34c00: 4508                      SUB    A8,A8
34c10: b10d 0040                 MOVE   A8,*A13(40h),0
34c30: c041                      JR     35050h
34c40: 458c                      SUB    A12,A12
34c50: 0550                      SETF   10h,0,0
34c60: b18d 0030                 MOVE   A12,*A13(30h),0
34c80: 09c8 0180                 MOVI   180h,A8
34ca0: b10d 0040                 MOVE   A8,*A13(40h),0
34cc0: c038                      JR     35050h
34cd0: 09cc 0200                 MOVI   200h,A12
34cf0: 0550                      SETF   10h,0,0
34d00: b18d 0030                 MOVE   A12,*A13(30h),0
34d20: 09c8 0180                 MOVI   180h,A8
34d40: b10d 0040                 MOVE   A8,*A13(40h),0
34d60: c02e                      JR     35050h
34d70: 0548                      SETF   8h,0,0
34d80: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
34da0: cad9                      JREQ   34B40h
34db0: 1428                      DEC    A8
34dc0: cade                      JREQ   34BB0h
34dd0: 1428                      DEC    A8
34de0: cae5                      JREQ   34C40h
34df0: 0d88 0024                 DSJ    A8,35050h
34e10: c0eb                      JR     34CD0h
34e20: 458c                      SUB    A12,A12
34e30: 0550                      SETF   10h,0,0
34e40: b18d 0010                 MOVE   A12,*A13(10h),0
34e60: b18d 0020                 MOVE   A12,*A13(20h),0
34e80: c02e                      JR     35170h
34e90: 09cc 0200                 MOVI   200h,A12
34eb0: 0550                      SETF   10h,0,0
34ec0: b18d 0010                 MOVE   A12,*A13(10h),0
34ee0: 4508                      SUB    A8,A8
34ef0: b10d 0020                 MOVE   A8,*A13(20h),0
34f10: c025                      JR     35170h
34f20: 458c                      SUB    A12,A12
34f30: 0550                      SETF   10h,0,0
34f40: b18d 0010                 MOVE   A12,*A13(10h),0
34f60: 09c8 0180                 MOVI   180h,A8
34f80: b10d 0020                 MOVE   A8,*A13(20h),0
34fa0: c01c                      JR     35170h
34fb0: 09cc 0200                 MOVI   200h,A12
34fd0: 0550                      SETF   10h,0,0
34fe0: b18d 0010                 MOVE   A12,*A13(10h),0
35000: 09c8 0180                 MOVI   180h,A8
35020: b10d 0020                 MOVE   A8,*A13(20h),0
35040: c012                      JR     35170h
35050: 0548                      SETF   8h,0,0
35060: b5ac ffa0                 MOVE   *A13(FFA0h),A12,0
35080: cad9                      JREQ   34E20h
35090: 142c                      DEC    A12
350a0: cade                      JREQ   34E90h
350b0: 142c                      DEC    A12
350c0: cae5                      JREQ   34F20h
350d0: 392c                      DSJS   A12,35170h
350e0: c0ec                      JR     34FB0h
350f0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
35110: 1428                      DEC    A8
35120: ca00 ff73                 JREQ   34870h
35140: 0d88 0062                 DSJ    A8,35780h
35160: c093                      JR     34AA0h
35170: 0d5f 0000 0000            CALLA  0h
351a0: 0550                      SETF   10h,0,0
351b0: 810d                      MOVE   A8,*A13,0
351c0: a3cf                      MOVE   A14,-*SP,1
351d0: 458c                      SUB    A12,A12
351e0: 938e                      MOVE   A12,*A14+,1
351f0: 0d5f 0000 0000            CALLA  0h
35220: a3cf                      MOVE   A14,-*SP,1
35230: 1908                      MOVK   8h,A8
35240: 930e                      MOVE   A8,*A14+,1
35250: 09c8 0300                 MOVI   300h,A8
35270: 930e                      MOVE   A8,*A14+,1
35280: 09cc 0400                 MOVI   400h,A12
352a0: 938e                      MOVE   A12,*A14+,1
352b0: 09c8 2000                 MOVI   2000h,A8
352d0: 930e                      MOVE   A8,*A14+,1
352e0: 09e8 0000 2000            MOVI   20000000h,A8
35310: 930e                      MOVE   A8,*A14+,1
35320: 0d5f 0000 0000            CALLA  0h
35350: a3cf                      MOVE   A14,-*SP,1
35360: 1908                      MOVK   8h,A8
35370: 930e                      MOVE   A8,*A14+,1
35380: 09c8 0300                 MOVI   300h,A8
353a0: 930e                      MOVE   A8,*A14+,1
353b0: 938e                      MOVE   A12,*A14+,1
353c0: 09c8 2000                 MOVI   2000h,A8
353e0: 930e                      MOVE   A8,*A14+,1
353f0: 09e8 0000 2000            MOVI   20000000h,A8
35420: 930e                      MOVE   A8,*A14+,1
35430: 0d5f 0000 0000            CALLA  0h
35460: a3cf                      MOVE   A14,-*SP,1
35470: 0550                      SETF   10h,0,0
35480: b5a8 0020                 MOVE   *A13(20h),A8,0
354a0: 930e                      MOVE   A8,*A14+,1
354b0: b5ac 0010                 MOVE   *A13(10h),A12,0
354d0: 938e                      MOVE   A12,*A14+,1
354e0: b5a8 0040                 MOVE   *A13(40h),A8,0
35500: 930e                      MOVE   A8,*A14+,1
35510: b5a8 0030                 MOVE   *A13(30h),A8,0
35530: 930e                      MOVE   A8,*A14+,1
35540: b5a8 0050                 MOVE   *A13(50h),A8,0
35560: 930e                      MOVE   A8,*A14+,1
35570: b5a8 0060                 MOVE   *A13(60h),A8,0
35590: 930e                      MOVE   A8,*A14+,1
355a0: 0d5f 0000 0000            CALLA  0h
355d0: a3cf                      MOVE   A14,-*SP,1
355e0: 0550                      SETF   10h,0,0
355f0: 85a8                      MOVE   *A13,A8,0
35600: 930e                      MOVE   A8,*A14+,1
35610: 0d5f 0000 0000            CALLA  0h
35640: a3cf                      MOVE   A14,-*SP,1
35650: 4508                      SUB    A8,A8
35660: 930e                      MOVE   A8,*A14+,1
35670: 930e                      MOVE   A8,*A14+,1
35680: 930e                      MOVE   A8,*A14+,1
35690: 930e                      MOVE   A8,*A14+,1
356a0: 930e                      MOVE   A8,*A14+,1
356b0: 0d5f 0000 0000            CALLA  0h
356e0: a3cf                      MOVE   A14,-*SP,1
356f0: 4508                      SUB    A8,A8
35700: 930e                      MOVE   A8,*A14+,1
35710: 930e                      MOVE   A8,*A14+,1
35720: 930e                      MOVE   A8,*A14+,1
35730: 930e                      MOVE   A8,*A14+,1
35740: 930e                      MOVE   A8,*A14+,1
35750: 0d5f 0000 0000            CALLA  0h
35780: b7ee 0060                 MOVE   *SP(60h),A14,1
357a0: 09af 3000                 MMFM   SP,A12,A13
357c0: 0962                      RETS   2h

_image_exchange:
357d0: a3af                      MOVE   A13,-*SP,1
357e0: 4dcd                      MOVE   A14,A13
357f0: 100e                      ADDK   20h,A14
35800: 0d5f 0000 0000            CALLA  0h
35830: 0550                      SETF   10h,0,0
35840: b10d 0010                 MOVE   A8,*A13(10h),0
35860: a3cf                      MOVE   A14,-*SP,1
35870: 4508                      SUB    A8,A8
35880: 930e                      MOVE   A8,*A14+,1
35890: 0d5f 0000 0000            CALLA  0h
358c0: 4508                      SUB    A8,A8
358d0: 0550                      SETF   10h,0,0
358e0: 810d                      MOVE   A8,*A13,0
358f0: a3cf                      MOVE   A14,-*SP,1
35900: 1908                      MOVK   8h,A8
35910: 930e                      MOVE   A8,*A14+,1
35920: 09c8 0300                 MOVI   300h,A8
35940: 930e                      MOVE   A8,*A14+,1
35950: 09c8 0400                 MOVI   400h,A8
35970: 930e                      MOVE   A8,*A14+,1
35980: 09c8 2000                 MOVI   2000h,A8
359a0: 930e                      MOVE   A8,*A14+,1
359b0: 09e8 0000 2000            MOVI   20000000h,A8
359e0: 930e                      MOVE   A8,*A14+,1
359f0: 0d5f 0000 0000            CALLA  0h
35a20: a3cf                      MOVE   A14,-*SP,1
35a30: 1908                      MOVK   8h,A8
35a40: 930e                      MOVE   A8,*A14+,1
35a50: 09c8 0040                 MOVI   40h,A8
35a70: 930e                      MOVE   A8,*A14+,1
35a80: 09c8 0400                 MOVI   400h,A8
35aa0: 930e                      MOVE   A8,*A14+,1
35ab0: 09c8 2000                 MOVI   2000h,A8
35ad0: 930e                      MOVE   A8,*A14+,1
35ae0: 09e8 3560 0004            MOVI   43560h,A8
35b10: 930e                      MOVE   A8,*A14+,1
35b20: 0d5f 0000 0000            CALLA  0h
35b50: a3cf                      MOVE   A14,-*SP,1
35b60: 4508                      SUB    A8,A8
35b70: 930e                      MOVE   A8,*A14+,1
35b80: 930e                      MOVE   A8,*A14+,1
35b90: 0550                      SETF   10h,0,0
35ba0: 85a8                      MOVE   *A13,A8,0
35bb0: 24c8                      SLL    6h,A8
35bc0: 930e                      MOVE   A8,*A14+,1
35bd0: 4508                      SUB    A8,A8
35be0: 930e                      MOVE   A8,*A14+,1
35bf0: 09c8 0040                 MOVI   40h,A8
35c10: 930e                      MOVE   A8,*A14+,1
35c20: 09c8 0400                 MOVI   400h,A8
35c40: 930e                      MOVE   A8,*A14+,1
35c50: 0d5f 0000 0000            CALLA  0h
35c80: a3cf                      MOVE   A14,-*SP,1
35c90: 1908                      MOVK   8h,A8
35ca0: 930e                      MOVE   A8,*A14+,1
35cb0: 09c8 0300                 MOVI   300h,A8
35cd0: 930e                      MOVE   A8,*A14+,1
35ce0: 09c8 0400                 MOVI   400h,A8
35d00: 930e                      MOVE   A8,*A14+,1
35d10: 09c8 2000                 MOVI   2000h,A8
35d30: 930e                      MOVE   A8,*A14+,1
35d40: 09e8 0000 2060            MOVI   20600000h,A8
35d70: 930e                      MOVE   A8,*A14+,1
35d80: 0d5f 0000 0000            CALLA  0h
35db0: a3cf                      MOVE   A14,-*SP,1
35dc0: 1908                      MOVK   8h,A8
35dd0: 930e                      MOVE   A8,*A14+,1
35de0: 09c8 0300                 MOVI   300h,A8
35e00: 930e                      MOVE   A8,*A14+,1
35e10: 09c8 0400                 MOVI   400h,A8
35e30: 930e                      MOVE   A8,*A14+,1
35e40: 09c8 2000                 MOVI   2000h,A8
35e60: 930e                      MOVE   A8,*A14+,1
35e70: 09e8 0000 2000            MOVI   20000000h,A8
35ea0: 930e                      MOVE   A8,*A14+,1
35eb0: 0d5f 0000 0000            CALLA  0h
35ee0: a3cf                      MOVE   A14,-*SP,1
35ef0: 0550                      SETF   10h,0,0
35f00: 85a8                      MOVE   *A13,A8,0
35f10: 24c8                      SLL    6h,A8
35f20: 930e                      MOVE   A8,*A14+,1
35f30: 4508                      SUB    A8,A8
35f40: 930e                      MOVE   A8,*A14+,1
35f50: 85a8                      MOVE   *A13,A8,0
35f60: 24c8                      SLL    6h,A8
35f70: 930e                      MOVE   A8,*A14+,1
35f80: 4508                      SUB    A8,A8
35f90: 930e                      MOVE   A8,*A14+,1
35fa0: 09c8 0040                 MOVI   40h,A8
35fc0: 930e                      MOVE   A8,*A14+,1
35fd0: 09c8 0400                 MOVI   400h,A8
35ff0: 930e                      MOVE   A8,*A14+,1
36000: 0d5f 0000 0000            CALLA  0h
36030: a3cf                      MOVE   A14,-*SP,1
36040: 1908                      MOVK   8h,A8
36050: 930e                      MOVE   A8,*A14+,1
36060: 09c8 0040                 MOVI   40h,A8
36080: 930e                      MOVE   A8,*A14+,1
36090: 09c8 0400                 MOVI   400h,A8
360b0: 930e                      MOVE   A8,*A14+,1
360c0: 09c8 2000                 MOVI   2000h,A8
360e0: 930e                      MOVE   A8,*A14+,1
360f0: 09e8 3560 0004            MOVI   43560h,A8
36120: 930e                      MOVE   A8,*A14+,1
36130: 0d5f 0000 0000            CALLA  0h
36160: a3cf                      MOVE   A14,-*SP,1
36170: 1908                      MOVK   8h,A8
36180: 930e                      MOVE   A8,*A14+,1
36190: 09c8 0300                 MOVI   300h,A8
361b0: 930e                      MOVE   A8,*A14+,1
361c0: 09c8 0400                 MOVI   400h,A8
361e0: 930e                      MOVE   A8,*A14+,1
361f0: 09c8 2000                 MOVI   2000h,A8
36210: 930e                      MOVE   A8,*A14+,1
36220: 09e8 0000 2060            MOVI   20600000h,A8
36250: 930e                      MOVE   A8,*A14+,1
36260: 0d5f 0000 0000            CALLA  0h
36290: a3cf                      MOVE   A14,-*SP,1
362a0: 0550                      SETF   10h,0,0
362b0: 85a8                      MOVE   *A13,A8,0
362c0: 24c8                      SLL    6h,A8
362d0: 930e                      MOVE   A8,*A14+,1
362e0: 4508                      SUB    A8,A8
362f0: 930e                      MOVE   A8,*A14+,1
36300: 930e                      MOVE   A8,*A14+,1
36310: 930e                      MOVE   A8,*A14+,1
36320: 09c8 0040                 MOVI   40h,A8
36340: 930e                      MOVE   A8,*A14+,1
36350: 09c8 0400                 MOVI   400h,A8
36370: 930e                      MOVE   A8,*A14+,1
36380: 0d5f 0000 0000            CALLA  0h
363b0: 0550                      SETF   10h,0,0
363c0: 85a8                      MOVE   *A13,A8,0
363d0: 1028                      INC    A8
363e0: 810d                      MOVE   A8,*A13,0
363f0: 1588                      SUBK   Ch,A8
36400: c400 ff4d                 JRLT   358F0h
36420: a3cf                      MOVE   A14,-*SP,1
36430: b5a8 0010                 MOVE   *A13(10h),A8,0
36450: 930e                      MOVE   A8,*A14+,1
36460: 0d5f 0000 0000            CALLA  0h
36490: a3cf                      MOVE   A14,-*SP,1
364a0: 4508                      SUB    A8,A8
364b0: 930e                      MOVE   A8,*A14+,1
364c0: 930e                      MOVE   A8,*A14+,1
364d0: 930e                      MOVE   A8,*A14+,1
364e0: 930e                      MOVE   A8,*A14+,1
364f0: 930e                      MOVE   A8,*A14+,1
36500: 0d5f 0000 0000            CALLA  0h
36530: a3cf                      MOVE   A14,-*SP,1
36540: 4508                      SUB    A8,A8
36550: 930e                      MOVE   A8,*A14+,1
36560: 930e                      MOVE   A8,*A14+,1
36570: 930e                      MOVE   A8,*A14+,1
36580: 930e                      MOVE   A8,*A14+,1
36590: 930e                      MOVE   A8,*A14+,1
365a0: 0d5f 0000 0000            CALLA  0h
365d0: 140e                      SUBK   20h,A14
365e0: 97ed                      MOVE   *SP+,A13,1
365f0: 0960                      RETS   

_grab_reduced:
36600: 098f 017c                 MMTM   SP,A7,A9-A13
36620: 4dcd                      MOVE   A14,A13
36630: 0b0e 0080                 ADDI   80h,A14
36650: b7a7 ffe0                 MOVE   *A13(FFE0h),A7,1
36670: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
36690: 5907                      DIVS   A8,A7
366a0: b2ed 0060                 MOVE   A7,*A13(60h),1
366c0: 4ce8                      MOVE   A7,A8
366d0: 2527                      SLL    9h,A7
366e0: 2508                      SLL    8h,A8
366f0: 4107                      ADD    A8,A7
36700: b2ed 0060                 MOVE   A7,*A13(60h),1
36720: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
36740: 5b07                      DIVU   A8,A7
36750: b2ed 0060                 MOVE   A7,*A13(60h),1
36770: b7a7 ffe0                 MOVE   *A13(FFE0h),A7,1
36790: 6d07                      MODS   A8,A7
367a0: b2ed 0040                 MOVE   A7,*A13(40h),1
367c0: 2547                      SLL    Ah,A7
367d0: b2ed 0040                 MOVE   A7,*A13(40h),1
367f0: 5b07                      DIVU   A8,A7
36800: b2ed 0040                 MOVE   A7,*A13(40h),1
36820: 4529                      SUB    A9,A9
36830: 09e8 0000 2000            MOVI   20000000h,A8
36860: 830d                      MOVE   A8,*A13,1
36870: 4d27                      MOVE   A9,A7
36880: 25a7                      SLL    Dh,A7
36890: 4107                      ADD    A8,A7
368a0: 82ed                      MOVE   A7,*A13,1
368b0: 4cec                      MOVE   A7,A12
368c0: 09e8 0000 2060            MOVI   20600000h,A8
368f0: b30d 0020                 MOVE   A8,*A13(20h),1
36910: b7a7 0060                 MOVE   *A13(60h),A7,1
36930: 25a7                      SLL    Dh,A7
36940: 4107                      ADD    A8,A7
36950: b2ed 0020                 MOVE   A7,*A13(20h),1
36970: b7a8 0040                 MOVE   *A13(40h),A8,1
36990: 2468                      SLL    3h,A8
369a0: 40e8                      ADD    A7,A8
369b0: b30d 0020                 MOVE   A8,*A13(20h),1
369d0: 4d0b                      MOVE   A8,A11
369e0: 454a                      SUB    A10,A10
369f0: 9d8b                      MOVB   *A12,*A11
36a00: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
36a20: 2468                      SLL    3h,A8
36a30: 410c                      ADD    A8,A12
36a40: 110b                      ADDK   8h,A11
36a50: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
36a70: 410a                      ADD    A8,A10
36a80: 0b4a fbff                 CMPI   400h,A10
36aa0: c4f4                      JRLT   369F0h
36ab0: b7a7 0060                 MOVE   *A13(60h),A7,1
36ad0: 1027                      INC    A7
36ae0: b2ed 0060                 MOVE   A7,*A13(60h),1
36b00: 4109                      ADD    A8,A9
36b10: 0b49 fcff                 CMPI   300h,A9
36b30: c4cf                      JRLT   36830h
36b40: b7ee 00e0                 MOVE   *SP(E0h),A14,1
36b60: 09af 3e80                 MMFM   SP,A7,A9-A13
36b80: 0962                      RETS   2h

_stereo_split:
36b90: 098f 0078                 MMTM   SP,A9-A12
36bb0: 09e9 0000 2000            MOVI   20000000h,A9
36be0: 09ea 0000 2060            MOVI   20600000h,A10
36c10: 456b                      SUB    A11,A11
36c20: 458c                      SUB    A12,A12
36c30: 9d2a                      MOVB   *A9,*A10
36c40: 110a                      ADDK   8h,A10
36c50: 9d2a                      MOVB   *A9,*A10
36c60: 110a                      ADDK   8h,A10
36c70: 1209                      ADDK   10h,A9
36c80: 104c                      ADDK   2h,A12
36c90: 0b4c fbff                 CMPI   400h,A12
36cb0: c4f7                      JRLT   36C30h
36cc0: 1109                      ADDK   8h,A9
36cd0: 458c                      SUB    A12,A12
36ce0: 9d2a                      MOVB   *A9,*A10
36cf0: 110a                      ADDK   8h,A10
36d00: 9d2a                      MOVB   *A9,*A10
36d10: 110a                      ADDK   8h,A10
36d20: 1209                      ADDK   10h,A9
36d30: 104c                      ADDK   2h,A12
36d40: 0b4c fbff                 CMPI   400h,A12
36d60: c4f7                      JRLT   36CE0h
36d70: 1509                      SUBK   8h,A9
36d80: 104b                      ADDK   2h,A11
36d90: 0b4b fcff                 CMPI   300h,A11
36db0: c4e6                      JRLT   36C20h
36dc0: 09e9 0000 2000            MOVI   20000000h,A9
36df0: 4d2a                      MOVE   A9,A10
36e00: 110a                      ADDK   8h,A10
36e10: 456b                      SUB    A11,A11
36e20: 458c                      SUB    A12,A12
36e30: 9d49                      MOVB   *A10,*A9
36e40: 1209                      ADDK   10h,A9
36e50: 120a                      ADDK   10h,A10
36e60: 104c                      ADDK   2h,A12
36e70: 0b4c fbff                 CMPI   400h,A12
36e90: c4f9                      JRLT   36E30h
36ea0: 458c                      SUB    A12,A12
36eb0: 9d2a                      MOVB   *A9,*A10
36ec0: 1209                      ADDK   10h,A9
36ed0: 120a                      ADDK   10h,A10
36ee0: 104c                      ADDK   2h,A12
36ef0: 0b4c fbff                 CMPI   400h,A12
36f10: c4f9                      JRLT   36EB0h
36f20: 104b                      ADDK   2h,A11
36f30: 0b4b fcff                 CMPI   300h,A11
36f50: c4ec                      JRLT   36E20h
36f60: 09af 1e00                 MMFM   SP,A9-A12
36f80: 0960                      RETS   

_stereo_pair:
36f90: a3af                      MOVE   A13,-*SP,1
36fa0: 4dcd                      MOVE   A14,A13
36fb0: 0b0e 0040                 ADDI   40h,A14
36fd0: 09e8 0000 2000            MOVI   20000000h,A8
37000: b30d 0020                 MOVE   A8,*A13(20h),1
37020: 0b28 0000 0018            ADDI   180000h,A8
37050: b30d 0020                 MOVE   A8,*A13(20h),1
37070: 0b08 1000                 ADDI   1000h,A8
37090: b30d 0020                 MOVE   A8,*A13(20h),1
370b0: a3cf                      MOVE   A14,-*SP,1
370c0: 09e8 0000 2000            MOVI   20000000h,A8
370f0: 930e                      MOVE   A8,*A14+,1
37100: 930e                      MOVE   A8,*A14+,1
37110: 0d5f 7b90 0003            CALLA  37B90h
37140: a3cf                      MOVE   A14,-*SP,1
37150: d3ae 0020                 MOVE   *A13(20h),*A14+,1
37170: 09e8 0000 2060            MOVI   20600000h,A8
371a0: 930e                      MOVE   A8,*A14+,1
371b0: 0d5f 7b90 0003            CALLA  37B90h
371e0: 0d5f 0000 0000            CALLA  0h
37210: 0550                      SETF   10h,0,0
37220: 810d                      MOVE   A8,*A13,0
37230: a3cf                      MOVE   A14,-*SP,1
37240: 4508                      SUB    A8,A8
37250: 930e                      MOVE   A8,*A14+,1
37260: 0d5f 0000 0000            CALLA  0h
37290: a3cf                      MOVE   A14,-*SP,1
372a0: 1908                      MOVK   8h,A8
372b0: 930e                      MOVE   A8,*A14+,1
372c0: 09c8 0300                 MOVI   300h,A8
372e0: 930e                      MOVE   A8,*A14+,1
372f0: 09c8 0400                 MOVI   400h,A8
37310: 930e                      MOVE   A8,*A14+,1
37320: 09c8 2000                 MOVI   2000h,A8
37340: 930e                      MOVE   A8,*A14+,1
37350: 09e8 0000 2000            MOVI   20000000h,A8
37380: 930e                      MOVE   A8,*A14+,1
37390: 0d5f 0000 0000            CALLA  0h
373c0: a3cf                      MOVE   A14,-*SP,1
373d0: 1908                      MOVK   8h,A8
373e0: 930e                      MOVE   A8,*A14+,1
373f0: 09c8 0300                 MOVI   300h,A8
37410: 930e                      MOVE   A8,*A14+,1
37420: 09c8 0400                 MOVI   400h,A8
37440: 930e                      MOVE   A8,*A14+,1
37450: 09c8 2000                 MOVI   2000h,A8
37470: 930e                      MOVE   A8,*A14+,1
37480: 09e8 0000 2000            MOVI   20000000h,A8
374b0: 930e                      MOVE   A8,*A14+,1
374c0: 0d5f 0000 0000            CALLA  0h
374f0: a3cf                      MOVE   A14,-*SP,1
37500: 09c8 0180                 MOVI   180h,A8
37520: 930e                      MOVE   A8,*A14+,1
37530: 4508                      SUB    A8,A8
37540: 930e                      MOVE   A8,*A14+,1
37550: 09c8 00c0                 MOVI   C0h,A8
37570: 930e                      MOVE   A8,*A14+,1
37580: 4508                      SUB    A8,A8
37590: 930e                      MOVE   A8,*A14+,1
375a0: 09c8 00c0                 MOVI   C0h,A8
375c0: 930e                      MOVE   A8,*A14+,1
375d0: 09c8 0200                 MOVI   200h,A8
375f0: 930e                      MOVE   A8,*A14+,1
37600: 0d5f 0000 0000            CALLA  0h
37630: a3cf                      MOVE   A14,-*SP,1
37640: 09c8 00c0                 MOVI   C0h,A8
37660: 930e                      MOVE   A8,*A14+,1
37670: 4508                      SUB    A8,A8
37680: 930e                      MOVE   A8,*A14+,1
37690: 930e                      MOVE   A8,*A14+,1
376a0: 930e                      MOVE   A8,*A14+,1
376b0: 09c8 00c0                 MOVI   C0h,A8
376d0: 930e                      MOVE   A8,*A14+,1
376e0: 09c8 0200                 MOVI   200h,A8
37700: 930e                      MOVE   A8,*A14+,1
37710: 0d5f 0000 0000            CALLA  0h
37740: a3cf                      MOVE   A14,-*SP,1
37750: 1868                      MOVK   3h,A8
37760: 930e                      MOVE   A8,*A14+,1
37770: 0d5f 0000 0000            CALLA  0h
377a0: a3cf                      MOVE   A14,-*SP,1
377b0: 4508                      SUB    A8,A8
377c0: 930e                      MOVE   A8,*A14+,1
377d0: 930e                      MOVE   A8,*A14+,1
377e0: 930e                      MOVE   A8,*A14+,1
377f0: 930e                      MOVE   A8,*A14+,1
37800: 09c8 00c0                 MOVI   C0h,A8
37820: 930e                      MOVE   A8,*A14+,1
37830: 09c8 0400                 MOVI   400h,A8
37850: 930e                      MOVE   A8,*A14+,1
37860: 0d5f 0000 0000            CALLA  0h
37890: a3cf                      MOVE   A14,-*SP,1
378a0: 09c8 0240                 MOVI   240h,A8
378c0: 930e                      MOVE   A8,*A14+,1
378d0: 4508                      SUB    A8,A8
378e0: 930e                      MOVE   A8,*A14+,1
378f0: 930e                      MOVE   A8,*A14+,1
37900: 930e                      MOVE   A8,*A14+,1
37910: 09c8 00c0                 MOVI   C0h,A8
37930: 930e                      MOVE   A8,*A14+,1
37940: 09c8 0400                 MOVI   400h,A8
37960: 930e                      MOVE   A8,*A14+,1
37970: 0d5f 0000 0000            CALLA  0h
379a0: a3cf                      MOVE   A14,-*SP,1
379b0: 0550                      SETF   10h,0,0
379c0: 85a8                      MOVE   *A13,A8,0
379d0: 930e                      MOVE   A8,*A14+,1
379e0: 0d5f 0000 0000            CALLA  0h
37a10: a3cf                      MOVE   A14,-*SP,1
37a20: 4508                      SUB    A8,A8
37a30: 930e                      MOVE   A8,*A14+,1
37a40: 930e                      MOVE   A8,*A14+,1
37a50: 930e                      MOVE   A8,*A14+,1
37a60: 930e                      MOVE   A8,*A14+,1
37a70: 930e                      MOVE   A8,*A14+,1
37a80: 0d5f 0000 0000            CALLA  0h
37ab0: a3cf                      MOVE   A14,-*SP,1
37ac0: 4508                      SUB    A8,A8
37ad0: 930e                      MOVE   A8,*A14+,1
37ae0: 930e                      MOVE   A8,*A14+,1
37af0: 930e                      MOVE   A8,*A14+,1
37b00: 930e                      MOVE   A8,*A14+,1
37b10: 930e                      MOVE   A8,*A14+,1
37b20: 0d5f 0000 0000            CALLA  0h
37b50: 0bee ffbf                 SUBI   40h,A14
37b70: 97ed                      MOVE   *SP+,A13,1
37b80: 0960                      RETS   

_reduce_image:
37b90: 098f 027c                 MMTM   SP,A6,A9-A13
37bb0: 4dcd                      MOVE   A14,A13
37bc0: 100e                      ADDK   20h,A14
37bd0: 456b                      SUB    A11,A11
37be0: bbad ffe0 0000            MOVE   *A13(FFE0h),*A13(0h),1
37c10: 4d68                      MOVE   A11,A8
37c20: 25a8                      SLL    Dh,A8
37c30: 87a6                      MOVE   *A13,A6,1
37c40: 40c8                      ADD    A6,A8
37c50: 830d                      MOVE   A8,*A13,1
37c60: 4d09                      MOVE   A8,A9
37c70: bbad ffc0 0000            MOVE   *A13(FFC0h),*A13(0h),1
37ca0: 4d66                      MOVE   A11,A6
37cb0: 2be6                      SRA    1h,A6
37cc0: 25a6                      SLL    Dh,A6
37cd0: 87a8                      MOVE   *A13,A8,1
37ce0: 4106                      ADD    A8,A6
37cf0: 82cd                      MOVE   A6,*A13,1
37d00: 4cca                      MOVE   A6,A10
37d10: 458c                      SUB    A12,A12
37d20: 9d2a                      MOVB   *A9,*A10
37d30: 110a                      ADDK   8h,A10
37d40: 1209                      ADDK   10h,A9
37d50: 104c                      ADDK   2h,A12
37d60: 0b4c fbff                 CMPI   400h,A12
37d80: c4f9                      JRLT   37D20h
37d90: 104b                      ADDK   2h,A11
37da0: 0b4b fcff                 CMPI   300h,A11
37dc0: c4e1                      JRLT   37BE0h
37dd0: b7ee 00e0                 MOVE   *SP(E0h),A14,1
37df0: 09af 3e40                 MMFM   SP,A6,A9-A13
37e10: 0962                      RETS   2h

FD$DTOF:
37e20: 07a8 0000 0000            MOVE   @0h,A8,1
37e50: ca0e                      JREQ   37F40h
37e60: 4dc8                      MOVE   A14,A8
37e70: 0be8 ffbf                 SUBI   40h,A8
37e90: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
37ec0: 0bee ffbf                 SUBI   40h,A14
37ee0: d83f 0080                 CEXEC  1,00101F,0
37f00: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
37f30: 0960                      RETS   
37f40: 098f 9000                 MMTM   SP,A0,A3
37f60: a7c3                      MOVE   -*A14,A3,1
37f70: 2d83                      SRL    14h,A3
37f80: a7c0                      MOVE   -*A14,A0,1
37f90: 4c08                      MOVE   A0,A8
37fa0: 2588                      SLL    Ch,A8
37fb0: 5503                      OR     A8,A3
37fc0: 2420                      SLL    1h,A0
37fd0: 4708                      SUBB   A8,A8
37fe0: 27e8                      SLL    1Fh,A8
37ff0: 2d60                      SRL    15h,A0
38000: ca18                      JREQ   38190h
38010: 0b40 f800                 CMPI   7FFh,A0
38030: ca20                      JREQ   38240h
38040: 2ee3                      SRL    9h,A3
38050: c908                      JRNC   380E0h
38060: 1023                      INC    A3
38070: 1d03                      BTST   17h,A3
38080: ca05                      JREQ   380E0h
38090: 0b83 0000 ff80            ANDI   7FFFFFh,A3
380c0: 2fe3                      SRL    1h,A3
380d0: 1020                      INC    A0
380e0: 0be0 fc7f                 SUBI   380h,A0
38100: c702                      JRGT   38130h
38110: 5600                      CLR    A0
38120: c006                      JR     38190h
38130: 0b40 ff00                 CMPI   FFh,A0
38150: c507                      JRGE   381D0h
38160: 26e0                      SLL    17h,A0
38170: 5460                      OR     A3,A0
38180: 5500                      OR     A8,A0
38190: 920e                      MOVE   A0,*A14+,1
381a0: 09af 0009                 MMFM   SP,A0,A3
381c0: 0960                      RETS   
381d0: 4d03                      MOVE   A8,A3
381e0: 1840                      MOVK   2h,A0
381f0: a3cf                      MOVE   A14,-*SP,1
38200: 920e                      MOVE   A0,*A14+,1
38210: 0d5f d600 0003            CALLA  3D600h
38240: 0ba3 0000 7f80            ORI    7F800000h,A3
38270: 926e                      MOVE   A3,*A14+,1
38280: 09af 0009                 MMFM   SP,A0,A3
382a0: 0960                      RETS   
382b0: 2d60                      SRL    15h,A0
382c0: 2fc8                      SRL    2h,A8
382d0: 0ba8 0000 4000            ORI    40000000h,A8
38300: 1020                      INC    A0
38310: 0be0 fc00                 SUBI   3FFh,A0
38330: c625                      JRLE   38590h
38340: 17e0                      SUBK   1Fh,A0
38350: c727                      JRGT   385D0h
38360: 6608                      SRL    A0,A8
38370: 4c63                      MOVE   A3,A3
38380: ca01                      JREQ   383A0h
38390: 03a8                      NEG    A8
383a0: 09af 0009                 MMFM   SP,A0,A3
383c0: 4d08                      MOVE   A8,A8
383d0: 0960                      RETS   

FD$DTOU:
383e0: 098f 9000                 MMTM   SP,A0,A3
38400: a7c8                      MOVE   -*A14,A8,1
38410: 2d88                      SRL    14h,A8
38420: a7c0                      MOVE   -*A14,A0,1
38430: 4c03                      MOVE   A0,A3
38440: 2583                      SLL    Ch,A3
38450: 5468                      OR     A3,A8
38460: 2420                      SLL    1h,A0
38470: 4663                      SUBB   A3,A3
38480: cbe2                      JRNE   382B0h
38490: 2d60                      SRL    15h,A0
384a0: 2fe8                      SRL    1h,A8
384b0: 0ba8 0000 8000            ORI    80000000h,A8
384e0: 1020                      INC    A0
384f0: 0be0 fc00                 SUBI   3FFh,A0
38510: c607                      JRLE   38590h
38520: 1400                      SUBK   20h,A0
38530: c709                      JRGT   385D0h
38540: 6608                      SRL    A0,A8
38550: 09af 0009                 MMFM   SP,A0,A3
38570: 4d08                      MOVE   A8,A8
38580: 0960                      RETS   
38590: 09af 0009                 MMFM   SP,A0,A3
385b0: 4508                      SUB    A8,A8
385c0: 0960                      RETS   
385d0: 1820                      MOVK   1h,A0
385e0: a3cf                      MOVE   A14,-*SP,1
385f0: 920e                      MOVE   A0,*A14+,1
38600: 0d5f d600 0003            CALLA  3D600h
38630: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
38660: 4c68                      MOVE   A3,A8
38670: 09af 0009                 MMFM   SP,A0,A3
38690: 0960                      RETS   

FD$FTOD:
386a0: 07a8 0000 0000            MOVE   @0h,A8,1
386d0: ca09                      JREQ   38770h
386e0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
38710: d83e 0080                 CEXEC  0,00101F,0
38730: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
38760: 0960                      RETS   
38770: 098f c000                 MMTM   SP,A0,A1
38790: a7c8                      MOVE   -*A14,A8,1
387a0: 4d01                      MOVE   A8,A1
387b0: 2421                      SLL    1h,A1
387c0: 4600                      SUBB   A0,A0
387d0: 2d01                      SRL    18h,A1
387e0: ca14                      JREQ   38930h
387f0: 27e0                      SLL    1Fh,A0
38800: 0b41 ff00                 CMPI   FFh,A1
38820: cb02                      JRNE   38850h
38830: 09c1 047f                 MOVI   47Fh,A1
38850: 0b01 0380                 ADDI   380h,A1
38870: 2681                      SLL    14h,A1
38880: 5420                      OR     A1,A0
38890: 4d01                      MOVE   A8,A1
388a0: 27a1                      SLL    1Dh,A1
388b0: 2528                      SLL    9h,A8
388c0: 2e88                      SRL    Ch,A8
388d0: 5500                      OR     A8,A0
388e0: 920e                      MOVE   A0,*A14+,1
388f0: 922e                      MOVE   A1,*A14+,1
38900: 09af 0003                 MMFM   SP,A0,A1
38920: 0960                      RETS   
38930: 922e                      MOVE   A1,*A14+,1
38940: 922e                      MOVE   A1,*A14+,1
38950: 09af 0003                 MMFM   SP,A0,A1
38970: 0960                      RETS   

FD$FTOI:
38980: 07a8 0000 0000            MOVE   @0h,A8,1
389b0: ca15                      JREQ   38B10h
389c0: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
389f0: a30f                      MOVE   A8,-*SP,1
38a00: 09c8 0029                 MOVI   29h,A8
38a20: 0628 4c00 000d            CMOVGC A8,000D4C,0
38a50: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
38a80: d83e 00a0                 CEXEC  0,00141F,0
38aa0: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
38ad0: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
38b00: 0960                      RETS   
38b10: 098f 9000                 MMTM   SP,A0,A3
38b30: a7c0                      MOVE   -*A14,A0,1
38b40: 4c08                      MOVE   A0,A8
38b50: 2420                      SLL    1h,A0
38b60: 4663                      SUBB   A3,A3
38b70: 2d00                      SRL    18h,A0
38b80: 2528                      SLL    9h,A8
38b90: 2fc8                      SRL    2h,A8
38ba0: 0ba8 0000 4000            ORI    40000000h,A8
38bd0: 1020                      INC    A0
38be0: 0be0 ff80                 SUBI   7Fh,A0
38c00: c60a                      JRLE   38CB0h
38c10: 17e0                      SUBK   1Fh,A0
38c20: c70c                      JRGT   38CF0h
38c30: 6608                      SRL    A0,A8
38c40: 4c63                      MOVE   A3,A3
38c50: ca01                      JREQ   38C70h
38c60: 03a8                      NEG    A8
38c70: 09af 0009                 MMFM   SP,A0,A3
38c90: 4d08                      MOVE   A8,A8
38ca0: 0960                      RETS   
38cb0: 09af 0009                 MMFM   SP,A0,A3
38cd0: 4508                      SUB    A8,A8
38ce0: 0960                      RETS   
38cf0: 1860                      MOVK   3h,A0
38d00: a3cf                      MOVE   A14,-*SP,1
38d10: 920e                      MOVE   A0,*A14+,1
38d20: 0d5f d600 0003            CALLA  3D600h
38d50: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
38d80: 4c68                      MOVE   A3,A8
38d90: 09af 0009                 MMFM   SP,A0,A3
38db0: 0960                      RETS   
38dc0: 2d00                      SRL    18h,A0
38dd0: 2528                      SLL    9h,A8
38de0: 2fc8                      SRL    2h,A8
38df0: 0ba8 0000 4000            ORI    40000000h,A8
38e20: 1020                      INC    A0
38e30: 0be0 ff80                 SUBI   7Fh,A0
38e50: c622                      JRLE   39080h
38e60: 17e0                      SUBK   1Fh,A0
38e70: c724                      JRGT   390C0h
38e80: 6608                      SRL    A0,A8
38e90: 4c63                      MOVE   A3,A3
38ea0: ca01                      JREQ   38EC0h
38eb0: 03a8                      NEG    A8
38ec0: 09af 0009                 MMFM   SP,A0,A3
38ee0: 4d08                      MOVE   A8,A8
38ef0: 0960                      RETS   

FD$FTOU:
38f00: 098f 9000                 MMTM   SP,A0,A3
38f20: a7c0                      MOVE   -*A14,A0,1
38f30: 4c08                      MOVE   A0,A8
38f40: 2420                      SLL    1h,A0
38f50: 4663                      SUBB   A3,A3
38f60: cbe5                      JRNE   38DC0h
38f70: 2d00                      SRL    18h,A0
38f80: 2528                      SLL    9h,A8
38f90: 2fe8                      SRL    1h,A8
38fa0: 0ba8 0000 8000            ORI    80000000h,A8
38fd0: 1020                      INC    A0
38fe0: 0be0 ff80                 SUBI   7Fh,A0
39000: c607                      JRLE   39080h
39010: 1400                      SUBK   20h,A0
39020: c709                      JRGT   390C0h
39030: 6608                      SRL    A0,A8
39040: 09af 0009                 MMFM   SP,A0,A3
39060: 4d08                      MOVE   A8,A8
39070: 0960                      RETS   
39080: 09af 0009                 MMFM   SP,A0,A3
390a0: 4508                      SUB    A8,A8
390b0: 0960                      RETS   
390c0: 1860                      MOVK   3h,A0
390d0: a3cf                      MOVE   A14,-*SP,1
390e0: 920e                      MOVE   A0,*A14+,1
390f0: 0d5f d600 0003            CALLA  3D600h
39120: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
39150: 4c68                      MOVE   A3,A8
39160: 09af 0009                 MMFM   SP,A0,A3
39180: 0960                      RETS   

FD$ITOF:
39190: a38f                      MOVE   A12,-*SP,1
391a0: 07ac 0000 0000            MOVE   @0h,A12,1
391d0: ca0a                      JREQ   39280h
391e0: 0628 4c00 0000            CMOVGC A8,00004C,0
39210: d83e 00c0                 CEXEC  0,00181F,0
39230: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
39260: 97ec                      MOVE   *SP+,A12,1
39270: 0960                      RETS   
39280: 098f c000                 MMTM   SP,A0,A1
392a0: 5600                      CLR    A0
392b0: 0388                      ABS    A8
392c0: ca18                      JREQ   39450h
392d0: c402                      JRLT   39300h
392e0: 1820                      MOVK   1h,A0
392f0: 27e0                      SLL    1Fh,A0
39300: 6b01                      LMO    A8,A1
39310: 1021                      INC    A1
39320: 0b41 ffdf                 CMPI   20h,A1
39340: cb02                      JRNE   39370h
39350: 5708                      CLR    A8
39360: c001                      JR     39380h
39370: 6228                      SLL    A1,A8
39380: 03a1                      NEG    A1
39390: 2ee8                      SRL    9h,A8
393a0: c905                      JRNC   39400h
393b0: 1028                      INC    A8
393c0: 1d08                      BTST   17h,A8
393d0: ca02                      JREQ   39400h
393e0: 1021                      INC    A1
393f0: 2fe8                      SRL    1h,A8
39400: 0b01 009f                 ADDI   9Fh,A1
39420: 26e1                      SLL    17h,A1
39430: 5420                      OR     A1,A0
39440: 5500                      OR     A8,A0
39450: 920e                      MOVE   A0,*A14+,1
39460: 09af 0003                 MMFM   SP,A0,A1
39480: 97ec                      MOVE   *SP+,A12,1
39490: 0960                      RETS   
394a0: 0000                      DW     0000h
394b0: 41f0                      ADD    SP,B0
394c0: 0000                      DW     0000h
394d0: 0000                      DW     0000h

FD$UTOD:
394e0: a38f                      MOVE   A12,-*SP,1
394f0: 07ac 0000 0000            MOVE   @0h,A12,1
39520: ca1a                      JREQ   396D0h
39530: 0628 4c00 0000            CMOVGC A8,00004C,0
39560: d83f 00c0                 CEXEC  1,00181F,0
39580: d807 1bb0                 CEXEC  1,037603,0
395a0: d80b 0000                 CEXEC  1,000005,0
395c0: 0660 4e01 000c            CMOVCS ,000C4E,0
395f0: cf08                      JRNN   39680h
39600: 09ec 94a0 0003            MOVI   394A0h,A12
39630: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
39660: d803 0000                 CEXEC  1,000001,0
39680: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
396b0: 97ec                      MOVE   *SP+,A12,1
396c0: 0960                      RETS   
396d0: 098f c000                 MMTM   SP,A0,A1
396f0: 5600                      CLR    A0
39700: 4d08                      MOVE   A8,A8
39710: ca17                      JREQ   39890h
39720: 6b01                      LMO    A8,A1
39730: 1021                      INC    A1
39740: 0b41 ffdf                 CMPI   20h,A1
39760: cb02                      JRNE   39790h
39770: 5708                      CLR    A8
39780: c001                      JR     397A0h
39790: 6228                      SLL    A1,A8
397a0: 03a1                      NEG    A1
397b0: 0b01 041f                 ADDI   41Fh,A1
397d0: 2681                      SLL    14h,A1
397e0: 5420                      OR     A1,A0
397f0: 4d01                      MOVE   A8,A1
39800: 2681                      SLL    14h,A1
39810: 2e88                      SRL    Ch,A8
39820: 5500                      OR     A8,A0
39830: 920e                      MOVE   A0,*A14+,1
39840: 922e                      MOVE   A1,*A14+,1
39850: 09af 0003                 MMFM   SP,A0,A1
39870: 97ec                      MOVE   *SP+,A12,1
39880: 0960                      RETS   
39890: 5600                      CLR    A0
398a0: 920e                      MOVE   A0,*A14+,1
398b0: 920e                      MOVE   A0,*A14+,1
398c0: 09af 0003                 MMFM   SP,A0,A1
398e0: 97ec                      MOVE   *SP+,A12,1
398f0: 0960                      RETS   
39900: 0000                      DW     0000h
39910: 4f80                      MOVE   A12,B0

FD$UTOF:
39920: a38f                      MOVE   A12,-*SP,1
39930: 07ac 0000 0000            MOVE   @0h,A12,1
39960: ca1a                      JREQ   39B10h
39970: 0628 4c00 0000            CMOVGC A8,00004C,0
399a0: d83e 00c0                 CEXEC  0,00181F,0
399c0: d806 1bb0                 CEXEC  0,037603,0
399e0: d80a 0000                 CEXEC  0,000005,0
39a00: 0660 4e01 000c            CMOVCS ,000C4E,0
39a30: cf08                      JRNN   39AC0h
39a40: 09ec 9900 0003            MOVI   39900h,A12
39a70: 0681 8d0c 0010            CMOVMC *A12+,1,0,00108D,0
39aa0: d802 0000                 CEXEC  0,000001,0
39ac0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
39af0: 97ec                      MOVE   *SP+,A12,1
39b00: 0960                      RETS   
39b10: 098f c000                 MMTM   SP,A0,A1
39b30: 5600                      CLR    A0
39b40: 4d08                      MOVE   A8,A8
39b50: ca15                      JREQ   39CB0h
39b60: 6b01                      LMO    A8,A1
39b70: 1021                      INC    A1
39b80: 0b41 ffdf                 CMPI   20h,A1
39ba0: cb02                      JRNE   39BD0h
39bb0: 5708                      CLR    A8
39bc0: c001                      JR     39BE0h
39bd0: 6228                      SLL    A1,A8
39be0: 03a1                      NEG    A1
39bf0: 2ee8                      SRL    9h,A8
39c00: c905                      JRNC   39C60h
39c10: 1028                      INC    A8
39c20: 1d08                      BTST   17h,A8
39c30: ca02                      JREQ   39C60h
39c40: 1021                      INC    A1
39c50: 2fe8                      SRL    1h,A8
39c60: 0b01 009f                 ADDI   9Fh,A1
39c80: 26e1                      SLL    17h,A1
39c90: 5420                      OR     A1,A0
39ca0: 5500                      OR     A8,A0
39cb0: 920e                      MOVE   A0,*A14+,1
39cc0: 09af 0003                 MMFM   SP,A0,A1
39ce0: 97ec                      MOVE   *SP+,A12,1
39cf0: 0960                      RETS   

FD$SUB_R:
39d00: 07a8 0000 0000            MOVE   @0h,A8,1
39d30: ca3f                      JREQ   3A130h
39d40: 4dc8                      MOVE   A14,A8
39d50: 0be8 ff7f                 SUBI   80h,A8
39d70: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
39da0: d83f 0060                 CEXEC  1,000C1F,0
39dc0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
39df0: 0bee ff7f                 SUBI   80h,A14
39e10: d803 0000                 CEXEC  1,000001,0
39e30: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
39e60: 0960                      RETS   

FD$SUB:
39e70: 07a8 0000 0000            MOVE   @0h,A8,1
39ea0: ca32                      JREQ   3A1D0h
39eb0: 4dc8                      MOVE   A14,A8
39ec0: 0be8 ff7f                 SUBI   80h,A8
39ee0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
39f10: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
39f40: d83f 0060                 CEXEC  1,000C1F,0
39f60: 0bee ff7f                 SUBI   80h,A14
39f80: d803 0000                 CEXEC  1,000001,0
39fa0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
39fd0: 0960                      RETS   

FD$ADD:
39fe0: 07a8 0000 0000            MOVE   @0h,A8,1
3a010: ca23                      JREQ   3A250h
3a020: 4dc8                      MOVE   A14,A8
3a030: 0be8 ff7f                 SUBI   80h,A8
3a050: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
3a080: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
3a0b0: 0bee ff7f                 SUBI   80h,A14
3a0d0: d803 0000                 CEXEC  1,000001,0
3a0f0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
3a120: 0960                      RETS   
3a130: 098f ff00                 MMTM   SP,A0-A7
3a150: a7c4                      MOVE   -*A14,A4,1
3a160: a7c3                      MOVE   -*A14,A3,1
3a170: a7c6                      MOVE   -*A14,A6,1
3a180: a7c5                      MOVE   -*A14,A5,1
3a190: 0bc5 0000 8000            XORI   80000000h,A5
3a1c0: c00e                      JR     3A2B0h
3a1d0: 098f ff00                 MMTM   SP,A0-A7
3a1f0: a7c6                      MOVE   -*A14,A6,1
3a200: a7c5                      MOVE   -*A14,A5,1
3a210: 0bc5 0000 8000            XORI   80000000h,A5
3a240: c004                      JR     3A290h
3a250: 098f ff00                 MMTM   SP,A0-A7
3a270: a7c6                      MOVE   -*A14,A6,1
3a280: a7c5                      MOVE   -*A14,A5,1
3a290: a7c4                      MOVE   -*A14,A4,1
3a2a0: a7c3                      MOVE   -*A14,A3,1
3a2b0: 4c61                      MOVE   A3,A1
3a2c0: 2421                      SLL    1h,A1
3a2d0: ca00 00a8                 JREQ   3AD70h
3a2f0: 4ca2                      MOVE   A5,A2
3a300: 2422                      SLL    1h,A2
3a310: ca00 009c                 JREQ   3ACF0h
3a330: 4c61                      MOVE   A3,A1
3a340: 4ca2                      MOVE   A5,A2
3a350: 2583                      SLL    Ch,A3
3a360: 2fa3                      SRL    3h,A3
3a370: 0ba3 0000 2000            ORI    20000000h,A3
3a3a0: 4c88                      MOVE   A4,A8
3a3b0: ca03                      JREQ   3A3F0h
3a3c0: 2d28                      SRL    17h,A8
3a3d0: 5503                      OR     A8,A3
3a3e0: 2524                      SLL    9h,A4
3a3f0: 2585                      SLL    Ch,A5
3a400: 2fa5                      SRL    3h,A5
3a410: 0ba5 0000 2000            ORI    20000000h,A5
3a440: 4cc8                      MOVE   A6,A8
3a450: ca03                      JREQ   3A490h
3a460: 2d28                      SRL    17h,A8
3a470: 5505                      OR     A8,A5
3a480: 2526                      SLL    9h,A6
3a490: 2421                      SLL    1h,A1
3a4a0: 4600                      SUBB   A0,A0
3a4b0: 2422                      SLL    1h,A2
3a4c0: 4708                      SUBB   A8,A8
3a4d0: 2d61                      SRL    15h,A1
3a4e0: 2d62                      SRL    15h,A2
3a4f0: 09c7 07ff                 MOVI   7FFh,A7
3a510: 48e1                      CMP    A7,A1
3a520: ca00 0086                 JREQ   3ADA0h
3a540: 48e2                      CMP    A7,A2
3a550: ca00 0088                 JREQ   3ADF0h
3a570: 4441                      SUB    A2,A1
3a580: ca03                      JREQ   3A5C0h
3a590: c608                      JRLE   3A620h
3a5a0: 4022                      ADD    A1,A2
3a5b0: c010                      JR     3A6C0h
3a5c0: 4865                      CMP    A3,A5
3a5d0: c40e                      JRLT   3A6C0h
3a5e0: c704                      JRGT   3A630h
3a5f0: 4886                      CMP    A4,A6
3a600: c20b                      JRLS   3A6C0h
3a610: c004                      JR     3A660h
3a620: 03a1                      NEG    A1
3a630: 4c67                      MOVE   A3,A7
3a640: 4ca3                      MOVE   A5,A3
3a650: 4ce5                      MOVE   A7,A5
3a660: 4c87                      MOVE   A4,A7
3a670: 4cc4                      MOVE   A6,A4
3a680: 4ce6                      MOVE   A7,A6
3a690: 4c07                      MOVE   A0,A7
3a6a0: 4d00                      MOVE   A8,A0
3a6b0: 4ce8                      MOVE   A7,A8
3a6c0: 4c21                      MOVE   A1,A1
3a6d0: ca18                      JREQ   3A860h
3a6e0: 0b41 ffe1                 CMPI   1Eh,A1
3a700: c40e                      JRLT   3A7F0h
3a710: 0b41 ffc2                 CMPI   3Dh,A1
3a730: c708                      JRGT   3A7C0h
3a740: 17c1                      SUBK   1Eh,A1
3a750: 2445                      SLL    2h,A5
3a760: 2c46                      SRL    1Eh,A6
3a770: 54a6                      OR     A5,A6
3a780: 56a5                      CLR    A5
3a790: 03a1                      NEG    A1
3a7a0: 6626                      SRL    A1,A6
3a7b0: c00a                      JR     3A860h
3a7c0: 56a5                      CLR    A5
3a7d0: 56c6                      CLR    A6
3a7e0: c007                      JR     3A860h
3a7f0: 4ca7                      MOVE   A5,A7
3a800: 03a1                      NEG    A1
3a810: 6625                      SRL    A1,A5
3a820: 6626                      SRL    A1,A6
3a830: 1001                      ADDK   20h,A1
3a840: 6227                      SLL    A1,A7
3a850: 54e6                      OR     A7,A6
3a860: 4808                      CMP    A0,A8
3a870: ca27                      JREQ   3AAF0h
3a880: 44c4                      SUB    A6,A4
3a890: 46a3                      SUBB   A5,A3
3a8a0: 6a67                      LMO    A3,A7
3a8b0: ca0a                      JREQ   3A960h
3a8c0: 1447                      SUBK   2h,A7
3a8d0: ca10                      JREQ   3A9E0h
3a8e0: 44e2                      SUB    A7,A2
3a8f0: 62e3                      SLL    A7,A3
3a900: 4c81                      MOVE   A4,A1
3a910: 62e4                      SLL    A7,A4
3a920: 1407                      SUBK   20h,A7
3a930: 66e1                      SRL    A7,A1
3a940: 5423                      OR     A1,A3
3a950: c008                      JR     3A9E0h
3a960: 6a87                      LMO    A4,A7
3a970: ca3c                      JREQ   3AD40h
3a980: 17c2                      SUBK   1Eh,A2
3a990: 68e4                      RL     A7,A4
3a9a0: 4c83                      MOVE   A4,A3
3a9b0: 2fc3                      SRL    2h,A3
3a9c0: 27c4                      SLL    1Eh,A4
3a9d0: 44e2                      SUB    A7,A2
3a9e0: 56e7                      CLR    A7
3a9f0: 1ee4                      BTST   8h,A4
3aa00: ca07                      JREQ   3AA80h
3aa10: 0b04 0100                 ADDI   100h,A4
3aa30: 42e3                      ADDC   A7,A3
3aa40: 1c23                      BTST   1Eh,A3
3aa50: ca02                      JREQ   3AA80h
3aa60: 1022                      INC    A2
3aa70: c003                      JR     3AAB0h
3aa80: 2423                      SLL    1h,A3
3aa90: 2424                      SLL    1h,A4
3aaa0: 42e3                      ADDC   A7,A3
3aab0: 0b83 0000 c000            ANDI   3FFFFFFFh,A3
3aae0: c00c                      JR     3ABB0h
3aaf0: 40c4                      ADD    A6,A4
3ab00: 42a3                      ADDC   A5,A3
3ab10: 1c23                      BTST   1Eh,A3
3ab20: caeb                      JREQ   3A9E0h
3ab30: 1022                      INC    A2
3ab40: 2fe4                      SRL    1h,A4
3ab50: 2fe3                      SRL    1h,A3
3ab60: c9e7                      JRNC   3A9E0h
3ab70: 0ba4 0000 8000            ORI    80000000h,A4
3aba0: c0e3                      JR     3A9E0h
3abb0: 4c42                      MOVE   A2,A2
3abc0: c437                      JRLT   3AF40h
3abd0: cb05                      JRNE   3AC30h
3abe0: 4c63                      MOVE   A3,A3
3abf0: cb34                      JRNE   3AF40h
3ac00: 4c84                      MOVE   A4,A4
3ac10: cb32                      JRNE   3AF40h
3ac20: c011                      JR     3AD40h
3ac30: 0b42 f800                 CMPI   7FFh,A2
3ac50: c527                      JRGE   3AED0h
3ac60: 4c68                      MOVE   A3,A8
3ac70: 2ec3                      SRL    Ah,A3
3ac80: 2ec4                      SRL    Ah,A4
3ac90: 26c8                      SLL    16h,A8
3aca0: 5504                      OR     A8,A4
3acb0: 27e0                      SLL    1Fh,A0
3acc0: 2682                      SLL    14h,A2
3acd0: 5443                      OR     A2,A3
3ace0: 5403                      OR     A0,A3
3acf0: 926e                      MOVE   A3,*A14+,1
3ad00: 928e                      MOVE   A4,*A14+,1
3ad10: 09af 00ff                 MMFM   SP,A0-A7
3ad30: 0960                      RETS   
3ad40: 5663                      CLR    A3
3ad50: 5684                      CLR    A4
3ad60: c0f8                      JR     3ACF0h
3ad70: 4ca3                      MOVE   A5,A3
3ad80: 4cc4                      MOVE   A6,A4
3ad90: c0f5                      JR     3ACF0h
3ada0: 48e2                      CMP    A7,A2
3adb0: cb04                      JRNE   3AE00h
3adc0: 4808                      CMP    A0,A8
3add0: cb0c                      JRNE   3AEA0h
3ade0: c001                      JR     3AE00h
3adf0: 4d00                      MOVE   A8,A0
3ae00: 5621                      CLR    A1
3ae10: 27e0                      SLL    1Fh,A0
3ae20: 0ba0 0000 7ff0            ORI    7FF00000h,A0
3ae50: 920e                      MOVE   A0,*A14+,1
3ae60: 922e                      MOVE   A1,*A14+,1
3ae70: 09af 00ff                 MMFM   SP,A0-A7
3ae90: 0960                      RETS   
3aea0: 5663                      CLR    A3
3aeb0: 1880                      MOVK   4h,A0
3aec0: c009                      JR     3AF60h
3aed0: 4c03                      MOVE   A0,A3
3aee0: 27e3                      SLL    1Fh,A3
3aef0: 0ba3 0000 7ff0            ORI    7FF00000h,A3
3af20: 18a0                      MOVK   5h,A0
3af30: c002                      JR     3AF60h
3af40: 1980                      MOVK   Ch,A0
3af50: 5663                      CLR    A3
3af60: a3cf                      MOVE   A14,-*SP,1
3af70: 920e                      MOVE   A0,*A14+,1
3af80: 0d5f d600 0003            CALLA  3D600h
3afb0: 5621                      CLR    A1
3afc0: 926e                      MOVE   A3,*A14+,1
3afd0: 922e                      MOVE   A1,*A14+,1
3afe0: 09af 00ff                 MMFM   SP,A0-A7
3b000: 0960                      RETS   

FD$LE:
3b010: 1828                      MOVK   1h,A8
3b020: c005                      JR     3B080h

FD$LT:
3b030: 1848                      MOVK   2h,A8
3b040: c003                      JR     3B080h

FD$GE:
3b050: 1868                      MOVK   3h,A8
3b060: c001                      JR     3B080h

FD$GT:
3b070: 1888                      MOVK   4h,A8
3b080: a38f                      MOVE   A12,-*SP,1
3b090: 07ac 0000 0000            MOVE   @0h,A12,1
3b0c0: ca20                      JREQ   3B2D0h
3b0d0: 098f 6000                 MMTM   SP,A1,A2
3b0f0: 4dc1                      MOVE   A14,A1
3b100: 0be1 ff7f                 SUBI   80h,A1
3b120: 0682 8d81 0000            CMOVMC *A1+,2,1,00008D,0
3b150: 0682 8d81 0010            CMOVMC *A1+,2,1,00108D,0
3b180: 0bee ff7f                 SUBI   80h,A14
3b1a0: d80b 0000                 CEXEC  1,000005,0
3b1c0: 0660 4e01 000c            CMOVCS ,000C4E,0
3b1f0: 18a2                      MOVK   5h,A2
3b200: ca03                      JREQ   3B240h
3b210: 1862                      MOVK   3h,A2
3b220: ce01                      JRN    3B240h
3b230: 1982                      MOVK   Ch,A2
3b240: 03a8                      NEG    A8
3b250: 6702                      SRL    A8,A2
3b260: 4708                      SUBB   A8,A8
3b270: 2c28                      SRL    1Fh,A8
3b280: 09af 0006                 MMFM   SP,A1,A2
3b2a0: 97ec                      MOVE   *SP+,A12,1
3b2b0: 4d08                      MOVE   A8,A8
3b2c0: 0960                      RETS   
3b2d0: 098f b800                 MMTM   SP,A0,A2-A4
3b2f0: a7c2                      MOVE   -*A14,A2,1
3b300: a7c0                      MOVE   -*A14,A0,1
3b310: a7c3                      MOVE   -*A14,A3,1
3b320: a7c4                      MOVE   -*A14,A4,1
3b330: 4804                      CMP    A0,A4
3b340: ca14                      JREQ   3B490h
3b350: 1862                      MOVK   3h,A2
3b360: c401                      JRLT   3B380h
3b370: 1982                      MOVK   Ch,A2
3b380: 2420                      SLL    1h,A0
3b390: c906                      JRNC   3B400h
3b3a0: 2424                      SLL    1h,A4
3b3b0: c904                      JRNC   3B400h
3b3c0: 4804                      CMP    A0,A4
3b3d0: 1862                      MOVK   3h,A2
3b3e0: c301                      JRHI   3B400h
3b3f0: 1982                      MOVK   Ch,A2
3b400: 03a8                      NEG    A8
3b410: 6702                      SRL    A8,A2
3b420: 4708                      SUBB   A8,A8
3b430: 2c28                      SRL    1Fh,A8
3b440: 09af 001d                 MMFM   SP,A0,A2-A4
3b460: 97ec                      MOVE   *SP+,A12,1
3b470: 4d08                      MOVE   A8,A8
3b480: 0960                      RETS   
3b490: 4843                      CMP    A2,A3
3b4a0: 18a2                      MOVK   5h,A2
3b4b0: ca06                      JREQ   3B520h
3b4c0: 1862                      MOVK   3h,A2
3b4d0: c801                      JRC    3B4F0h
3b4e0: 1982                      MOVK   Ch,A2
3b4f0: 2420                      SLL    1h,A0
3b500: c901                      JRNC   3B520h
3b510: 03e2                      NOT    A2
3b520: 03a8                      NEG    A8
3b530: 6702                      SRL    A8,A2
3b540: 4708                      SUBB   A8,A8
3b550: 2c28                      SRL    1Fh,A8
3b560: 09af 001d                 MMFM   SP,A0,A2-A4
3b580: 97ec                      MOVE   *SP+,A12,1
3b590: 4d08                      MOVE   A8,A8
3b5a0: 0960                      RETS   

FD$DIV_R:
3b5b0: 07a8 0000 0000            MOVE   @0h,A8,1
3b5e0: ca2a                      JREQ   3B890h
3b5f0: a38f                      MOVE   A12,-*SP,1
3b600: 4dcc                      MOVE   A14,A12
3b610: 0bec ff7f                 SUBI   80h,A12
3b630: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
3b660: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
3b690: 0bee ff7f                 SUBI   80h,A14
3b6b0: d827 0000                 CEXEC  1,000013,0
3b6d0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
3b700: 97ec                      MOVE   *SP+,A12,1
3b710: 0960                      RETS   

FD$DIV:
3b720: 07a8 0000 0000            MOVE   @0h,A8,1
3b750: ca1a                      JREQ   3B900h
3b760: a38f                      MOVE   A12,-*SP,1
3b770: 4dcc                      MOVE   A14,A12
3b780: 0bec ff7f                 SUBI   80h,A12
3b7a0: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
3b7d0: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
3b800: 0bee ff7f                 SUBI   80h,A14
3b820: d827 0000                 CEXEC  1,000013,0
3b840: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
3b870: 97ec                      MOVE   *SP+,A12,1
3b880: 0960                      RETS   
3b890: 098f ff40                 MMTM   SP,A0-A7,A9
3b8b0: a7c1                      MOVE   -*A14,A1,1
3b8c0: a7c4                      MOVE   -*A14,A4,1
3b8d0: a7c3                      MOVE   -*A14,A3,1
3b8e0: a7c5                      MOVE   -*A14,A5,1
3b8f0: c006                      JR     3B960h
3b900: 098f ff40                 MMTM   SP,A0-A7,A9
3b920: a7c3                      MOVE   -*A14,A3,1
3b930: a7c5                      MOVE   -*A14,A5,1
3b940: a7c1                      MOVE   -*A14,A1,1
3b950: a7c4                      MOVE   -*A14,A4,1
3b960: 4c28                      MOVE   A1,A8
3b970: 24e1                      SLL    7h,A1
3b980: 2ce8                      SRL    19h,A8
3b990: 4c80                      MOVE   A4,A0
3b9a0: 2580                      SLL    Ch,A0
3b9b0: 2f60                      SRL    5h,A0
3b9c0: 0ba0 0000 0800            ORI    8000000h,A0
3b9f0: 5500                      OR     A8,A0
3ba00: 4c68                      MOVE   A3,A8
3ba10: 2563                      SLL    Bh,A3
3ba20: 2d68                      SRL    15h,A8
3ba30: 4ca2                      MOVE   A5,A2
3ba40: 2582                      SLL    Ch,A2
3ba50: 2fe2                      SRL    1h,A2
3ba60: 0ba2 0000 8000            ORI    80000000h,A2
3ba90: 5502                      OR     A8,A2
3baa0: 2424                      SLL    1h,A4
3bab0: 4729                      SUBB   A9,A9
3bac0: 2425                      SLL    1h,A5
3bad0: 4708                      SUBB   A8,A8
3bae0: 5709                      XOR    A8,A9
3baf0: 27e9                      SLL    1Fh,A9
3bb00: 2d64                      SRL    15h,A4
3bb10: 2d65                      SRL    15h,A5
3bb20: ca56                      JREQ   3C090h
3bb30: 0b45 f800                 CMPI   7FFh,A5
3bb50: cb03                      JRNE   3BB90h
3bb60: 48a4                      CMP    A5,A4
3bb70: ca56                      JREQ   3C0E0h
3bb80: c042                      JR     3BFB0h
3bb90: 0b44 f800                 CMPI   7FFh,A4
3bbb0: ca32                      JREQ   3BEE0h
3bbc0: 4c84                      MOVE   A4,A4
3bbd0: ca3d                      JREQ   3BFB0h
3bbe0: 5708                      CLR    A8
3bbf0: 5a40                      DIVU   A2,A0
3bc00: 4c26                      MOVE   A1,A6
3bc10: 56e7                      CLR    A7
3bc20: 5a46                      DIVU   A2,A6
3bc30: 4cc1                      MOVE   A6,A1
3bc40: 4c06                      MOVE   A0,A6
3bc50: 5e66                      MPYU   A3,A6
3bc60: 5a46                      DIVU   A2,A6
3bc70: 44c1                      SUB    A6,A1
3bc80: 4700                      SUBB   A8,A0
3bc90: 1c60                      BTST   1Ch,A0
3bca0: ca07                      JREQ   3BD20h
3bcb0: 1425                      DEC    A5
3bcc0: 2fe1                      SRL    1h,A1
3bcd0: 2fe0                      SRL    1h,A0
3bce0: c903                      JRNC   3BD20h
3bcf0: 0ba1 0000 8000            ORI    80000000h,A1
3bd20: 1f21                      BTST   6h,A1
3bd30: ca07                      JREQ   3BDB0h
3bd40: 0b01 0040                 ADDI   40h,A1
3bd60: 4300                      ADDC   A8,A0
3bd70: 1c60                      BTST   1Ch,A0
3bd80: ca02                      JREQ   3BDB0h
3bd90: 1425                      DEC    A5
3bda0: c004                      JR     3BDF0h
3bdb0: 1025                      INC    A5
3bdc0: 2420                      SLL    1h,A0
3bdd0: 2421                      SLL    1h,A1
3bde0: 4300                      ADDC   A8,A0
3bdf0: 0b80 0000 f000            ANDI   FFFFFFFh,A0
3be20: 4c86                      MOVE   A4,A6
3be30: 44a4                      SUB    A5,A4
3be40: 0b04 03ff                 ADDI   3FFh,A4
3be60: c61f                      JRLE   3C060h
3be70: 0b44 f800                 CMPI   7FFh,A4
3be90: c404                      JRLT   3BEE0h
3bea0: 09c4 07ff                 MOVI   7FFh,A4
3bec0: 48c4                      CMP    A6,A4
3bed0: cb13                      JRNE   3C010h
3bee0: 4c08                      MOVE   A0,A8
3bef0: 2f00                      SRL    8h,A0
3bf00: 2f01                      SRL    8h,A1
3bf10: 2708                      SLL    18h,A8
3bf20: 5501                      OR     A8,A1
3bf30: 2684                      SLL    14h,A4
3bf40: 5524                      OR     A9,A4
3bf50: 5480                      OR     A4,A0
3bf60: 920e                      MOVE   A0,*A14+,1
3bf70: 922e                      MOVE   A1,*A14+,1
3bf80: 09af 02ff                 MMFM   SP,A0-A7,A9
3bfa0: 0960                      RETS   
3bfb0: 56c6                      CLR    A6
3bfc0: 92ce                      MOVE   A6,*A14+,1
3bfd0: 92ce                      MOVE   A6,*A14+,1
3bfe0: 09af 02ff                 MMFM   SP,A0-A7,A9
3c000: 0960                      RETS   
3c010: 0ba9 0000 7ff0            ORI    7FF00000h,A9
3c040: 18e0                      MOVK   7h,A0
3c050: c00c                      JR     3C120h
3c060: 5729                      CLR    A9
3c070: 19c0                      MOVK   Eh,A0
3c080: c009                      JR     3C120h
3c090: 0ba9 0000 7ff0            ORI    7FF00000h,A9
3c0c0: 19e0                      MOVK   Fh,A0
3c0d0: c004                      JR     3C120h
3c0e0: 0ba9 0000 3ff0            ORI    3FF00000h,A9
3c110: 1a00                      MOVK   10h,A0
3c120: a3cf                      MOVE   A14,-*SP,1
3c130: 920e                      MOVE   A0,*A14+,1
3c140: 0d5f d600 0003            CALLA  3D600h
3c170: 56a5                      CLR    A5
3c180: 932e                      MOVE   A9,*A14+,1
3c190: 92ae                      MOVE   A5,*A14+,1
3c1a0: 09af 02ff                 MMFM   SP,A0-A7,A9
3c1c0: 0960                      RETS   

FS$SUB_R:
3c1d0: 07a8 0000 0000            MOVE   @0h,A8,1
3c200: ca30                      JREQ   3C510h
3c210: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
3c240: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
3c270: d83e 0060                 CEXEC  0,000C1F,0
3c290: d802 0000                 CEXEC  0,000001,0
3c2b0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
3c2e0: 0960                      RETS   

FS$SUB:
3c2f0: 07a8 0000 0000            MOVE   @0h,A8,1
3c320: ca26                      JREQ   3C590h
3c330: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
3c360: d83e 0060                 CEXEC  0,000C1F,0
3c380: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
3c3b0: d802 0000                 CEXEC  0,000001,0
3c3d0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
3c400: 0960                      RETS   

FS$ADD:
3c410: 07a8 0000 0000            MOVE   @0h,A8,1
3c440: ca1b                      JREQ   3C600h
3c450: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
3c480: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
3c4b0: d802 0000                 CEXEC  0,000001,0
3c4d0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
3c500: 0960                      RETS   
3c510: 098f fa00                 MMTM   SP,A0-A4,A6
3c530: a7c6                      MOVE   -*A14,A6,1
3c540: a7c8                      MOVE   -*A14,A8,1
3c550: 0bc8 0000 8000            XORI   80000000h,A8
3c580: c00b                      JR     3C640h
3c590: 098f fa00                 MMTM   SP,A0-A4,A6
3c5b0: a7c8                      MOVE   -*A14,A8,1
3c5c0: 0bc8 0000 8000            XORI   80000000h,A8
3c5f0: c003                      JR     3C630h
3c600: 098f fa00                 MMTM   SP,A0-A4,A6
3c620: a7c8                      MOVE   -*A14,A8,1
3c630: a7c6                      MOVE   -*A14,A6,1
3c640: 4cc3                      MOVE   A6,A3
3c650: 2423                      SLL    1h,A3
3c660: ca59                      JREQ   3CC00h
3c670: 4d02                      MOVE   A8,A2
3c680: 2422                      SLL    1h,A2
3c690: ca5a                      JREQ   3CC40h
3c6a0: 2428                      SLL    1h,A8
3c6b0: 4600                      SUBB   A0,A0
3c6c0: 27e0                      SLL    1Fh,A0
3c6d0: 2426                      SLL    1h,A6
3c6e0: 4621                      SUBB   A1,A1
3c6f0: 27e1                      SLL    1Fh,A1
3c700: 2d02                      SRL    18h,A2
3c710: 2d03                      SRL    18h,A3
3c720: 2508                      SLL    8h,A8
3c730: 2fa8                      SRL    3h,A8
3c740: 0ba8 0000 2000            ORI    20000000h,A8
3c770: 2506                      SLL    8h,A6
3c780: 2fa6                      SRL    3h,A6
3c790: 0ba6 0000 2000            ORI    20000000h,A6
3c7c0: 0b42 ff00                 CMPI   FFh,A2
3c7e0: ca4b                      JREQ   3CCA0h
3c7f0: 0b43 ff00                 CMPI   FFh,A3
3c810: ca4e                      JREQ   3CD00h
3c820: 4462                      SUB    A3,A2
3c830: ca03                      JREQ   3C870h
3c840: c605                      JRLE   3C8A0h
3c850: 4043                      ADD    A2,A3
3c860: c00c                      JR     3C930h
3c870: 4906                      CMP    A8,A6
3c880: c208                      JRLS   3C910h
3c890: c001                      JR     3C8B0h
3c8a0: 03a2                      NEG    A2
3c8b0: 56c8                      XOR    A6,A8
3c8c0: 5706                      XOR    A8,A6
3c8d0: 56c8                      XOR    A6,A8
3c8e0: 5601                      XOR    A0,A1
3c8f0: 5620                      XOR    A1,A0
3c900: 5601                      XOR    A0,A1
3c910: 4c42                      MOVE   A2,A2
3c920: ca07                      JREQ   3C9A0h
3c930: 0b42 ffe1                 CMPI   1Eh,A2
3c950: c402                      JRLT   3C980h
3c960: 56c6                      CLR    A6
3c970: c002                      JR     3C9A0h
3c980: 03a2                      NEG    A2
3c990: 6646                      SRL    A2,A6
3c9a0: 4801                      CMP    A0,A1
3c9b0: ca08                      JREQ   3CA40h
3c9c0: 44c8                      SUB    A6,A8
3c9d0: 6b06                      LMO    A8,A6
3c9e0: ca27                      JREQ   3CC60h
3c9f0: 1446                      SUBK   2h,A6
3ca00: ca08                      JREQ   3CA90h
3ca10: 44c3                      SUB    A6,A3
3ca20: 62c8                      SLL    A6,A8
3ca30: c005                      JR     3CA90h
3ca40: 40c8                      ADD    A6,A8
3ca50: 1c28                      BTST   1Eh,A8
3ca60: ca02                      JREQ   3CA90h
3ca70: 1023                      INC    A3
3ca80: 2fe8                      SRL    1h,A8
3ca90: 0b08 0020                 ADDI   20h,A8
3cab0: 1c28                      BTST   1Eh,A8
3cac0: ca02                      JREQ   3CAF0h
3cad0: 1023                      INC    A3
3cae0: c001                      JR     3CB00h
3caf0: 2428                      SLL    1h,A8
3cb00: 0b88 0000 c000            ANDI   3FFFFFFFh,A8
3cb30: 4c63                      MOVE   A3,A3
3cb40: c42d                      JRLT   3CE20h
3cb50: cb03                      JRNE   3CB90h
3cb60: 2f28                      SRL    7h,A8
3cb70: cb2a                      JRNE   3CE20h
3cb80: c00d                      JR     3CC60h
3cb90: 0b43 ff00                 CMPI   FFh,A3
3cbb0: c520                      JRGE   3CDC0h
3cbc0: 2f28                      SRL    7h,A8
3cbd0: 26e3                      SLL    17h,A3
3cbe0: 5468                      OR     A3,A8
3cbf0: 5408                      OR     A0,A8
3cc00: 930e                      MOVE   A8,*A14+,1
3cc10: 09af 005f                 MMFM   SP,A0-A4,A6
3cc30: 0960                      RETS   
3cc40: 4cc8                      MOVE   A6,A8
3cc50: c0fa                      JR     3CC00h
3cc60: 930e                      MOVE   A8,*A14+,1
3cc70: 09af 005f                 MMFM   SP,A0-A4,A6
3cc90: 0960                      RETS   
3cca0: 0b43 ff00                 CMPI   FFh,A3
3ccc0: cb04                      JRNE   3CD10h
3ccd0: 4801                      CMP    A0,A1
3cce0: cb0a                      JRNE   3CD90h
3ccf0: c001                      JR     3CD10h
3cd00: 4c20                      MOVE   A1,A0
3cd10: 09e8 0000 7f80            MOVI   7F800000h,A8
3cd40: 5408                      OR     A0,A8
3cd50: 930e                      MOVE   A8,*A14+,1
3cd60: 09af 005f                 MMFM   SP,A0-A4,A6
3cd80: 0960                      RETS   
3cd90: 1880                      MOVK   4h,A0
3cda0: 5663                      CLR    A3
3cdb0: c008                      JR     3CE40h
3cdc0: 4c03                      MOVE   A0,A3
3cdd0: 0ba3 0000 7f80            ORI    7F800000h,A3
3ce00: 18a0                      MOVK   5h,A0
3ce10: c002                      JR     3CE40h
3ce20: 1980                      MOVK   Ch,A0
3ce30: 5663                      CLR    A3
3ce40: a3cf                      MOVE   A14,-*SP,1
3ce50: 920e                      MOVE   A0,*A14+,1
3ce60: 0d5f d600 0003            CALLA  3D600h
3ce90: 926e                      MOVE   A3,*A14+,1
3cea0: 09af 005f                 MMFM   SP,A0-A4,A6
3cec0: 0960                      RETS   

FS$MUL:
3ced0: 07a8 0000 0000            MOVE   @0h,A8,1
3cf00: ca0c                      JREQ   3CFD0h
3cf10: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
3cf40: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
3cf70: d822 0000                 CEXEC  0,000011,0
3cf90: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
3cfc0: 0960                      RETS   
3cfd0: 098f a840                 MMTM   SP,A0,A2,A4,A9
3cff0: a7c8                      MOVE   -*A14,A8,1
3d000: a7c9                      MOVE   -*A14,A9,1
3d010: 4d08                      MOVE   A8,A8
3d020: ca3d                      JREQ   3D400h
3d030: 4d29                      MOVE   A9,A9
3d040: ca3b                      JREQ   3D400h
3d050: 2428                      SLL    1h,A8
3d060: 4684                      SUBB   A4,A4
3d070: 2429                      SLL    1h,A9
3d080: 4600                      SUBB   A0,A0
3d090: 5604                      XOR    A0,A4
3d0a0: 27e4                      SLL    1Fh,A4
3d0b0: 4d00                      MOVE   A8,A0
3d0c0: 4d22                      MOVE   A9,A2
3d0d0: 2d00                      SRL    18h,A0
3d0e0: 2d02                      SRL    18h,A2
3d0f0: 0b42 ff00                 CMPI   FFh,A2
3d110: ca34                      JREQ   3D460h
3d120: 0b40 ff00                 CMPI   FFh,A0
3d140: ca30                      JREQ   3D450h
3d150: 4002                      ADD    A0,A2
3d160: 0be2 ff80                 SUBI   7Fh,A2
3d180: 2508                      SLL    8h,A8
3d190: 2fe8                      SRL    1h,A8
3d1a0: 0ba8 0000 8000            ORI    80000000h,A8
3d1d0: 2509                      SLL    8h,A9
3d1e0: 2fe9                      SRL    1h,A9
3d1f0: 0ba9 0000 8000            ORI    80000000h,A9
3d220: 5f28                      MPYU   A9,A8
3d230: ca1c                      JREQ   3D400h
3d240: 1022                      INC    A2
3d250: 1c08                      BTST   1Fh,A8
3d260: cb02                      JRNE   3D290h
3d270: 1422                      DEC    A2
3d280: 2428                      SLL    1h,A8
3d290: 0b08 0080                 ADDI   80h,A8
3d2b0: c902                      JRNC   3D2E0h
3d2c0: 1022                      INC    A2
3d2d0: c001                      JR     3D2F0h
3d2e0: 2428                      SLL    1h,A8
3d2f0: 4c42                      MOVE   A2,A2
3d300: c424                      JRLT   3D550h
3d310: ca0b                      JREQ   3D3D0h
3d320: 0b42 ff00                 CMPI   FFh,A2
3d340: c517                      JRGE   3D4C0h
3d350: 2ee8                      SRL    9h,A8
3d360: 26e2                      SLL    17h,A2
3d370: 5448                      OR     A2,A8
3d380: 5488                      OR     A4,A8
3d390: 930e                      MOVE   A8,*A14+,1
3d3a0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
3d3c0: 0960                      RETS   
3d3d0: 4d08                      MOVE   A8,A8
3d3e0: cb16                      JRNE   3D550h
3d3f0: c0f5                      JR     3D350h
3d400: 5708                      CLR    A8
3d410: 930e                      MOVE   A8,*A14+,1
3d420: 09af 0215                 MMFM   SP,A0,A2,A4,A9
3d440: 0960                      RETS   
3d450: 4c40                      MOVE   A2,A0
3d460: 4c00                      MOVE   A0,A0
3d470: ca0a                      JREQ   3D520h
3d480: 09e8 0000 7ff0            MOVI   7FF00000h,A8
3d4b0: c0ec                      JR     3D380h
3d4c0: 09e9 0000 7ff0            MOVI   7FF00000h,A9
3d4f0: 5489                      OR     A4,A9
3d500: 18c0                      MOVK   6h,A0
3d510: c005                      JR     3D570h
3d520: 5729                      CLR    A9
3d530: 1960                      MOVK   Bh,A0
3d540: c002                      JR     3D570h
3d550: 5729                      CLR    A9
3d560: 19a0                      MOVK   Dh,A0
3d570: a3cf                      MOVE   A14,-*SP,1
3d580: 920e                      MOVE   A0,*A14+,1
3d590: 0d5f d600 0003            CALLA  3D600h
3d5c0: 932e                      MOVE   A9,*A14+,1
3d5d0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
3d5f0: 0960                      RETS   

_fp_error:
3d600: a3af                      MOVE   A13,-*SP,1
3d610: 4dcd                      MOVE   A14,A13
3d620: b7ee 0040                 MOVE   *SP(40h),A14,1
3d640: 97ed                      MOVE   *SP+,A13,1
3d650: 0962                      RETS   2h
