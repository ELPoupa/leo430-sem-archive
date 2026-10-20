; extprims.rlm .text, 9917 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_arc_draw:
00000: 0570                      SETF   10h,1,0
00010: 098f ff7e                 MMTM   SP,A0-A7,A9-A14
00030: a7ce                      MOVE   -*A14,A14,1
00040: 95c0                      MOVE   *A14+,A0,0
00050: 95c1                      MOVE   *A14+,A1,0
00060: 95c2                      MOVE   *A14+,A2,0
00070: 95c3                      MOVE   *A14+,A3,0
00080: 4c05                      MOVE   A0,A5
00090: 0770                      SETF   10h,1,1
000a0: 5ca5                      MPYS   A5,A5
000b0: 4ca4                      MOVE   A5,A4
000c0: 4c25                      MOVE   A1,A5
000d0: 5ca5                      MPYS   A5,A5
000e0: 4c47                      MOVE   A2,A7
000f0: 40e7                      ADD    A7,A7
00100: 4407                      SUB    A0,A7
00110: 4cea                      MOVE   A7,A10
00120: 1027                      INC    A7
00130: 5c27                      MPYS   A1,A7
00140: 4c69                      MOVE   A3,A9
00150: 4129                      ADD    A9,A9
00160: 4429                      SUB    A1,A9
00170: 4d2c                      MOVE   A9,A12
00180: 1449                      SUBK   2h,A9
00190: 5c09                      MPYS   A0,A9
001a0: 4d28                      MOVE   A9,A8
001b0: 0740                      SETF   20h,0,1
001c0: 5d08                      MPYS   A8,A8
001d0: 4ce6                      MOVE   A7,A6
001e0: 5cc6                      MPYS   A6,A6
001f0: 4127                      ADD    A9,A7
00200: 4306                      ADDC   A8,A6
00210: 4c88                      MOVE   A4,A8
00220: 5ca8                      MPYS   A5,A8
00230: 4527                      SUB    A9,A7
00240: 4706                      SUBB   A8,A6
00250: 414a                      ADD    A10,A10
00260: 5caa                      MPYS   A5,A10
00270: 03ac                      NEG    A12
00280: 102c                      INC    A12
00290: 418c                      ADD    A12,A12
002a0: 5c8c                      MPYS   A4,A12
002b0: 4d88                      MOVE   A12,A8
002c0: 4da9                      MOVE   A13,A9
002d0: 4569                      SUB    A11,A9
002e0: 4748                      SUBB   A10,A8
002f0: 4ca3                      MOVE   A5,A3
00300: 4083                      ADD    A4,A3
00310: 2444                      SLL    2h,A4
00320: 2445                      SLL    2h,A5
00330: 44a3                      SUB    A5,A3
00340: 4642                      SUBB   A2,A2
00350: 4069                      ADD    A3,A9
00360: 4248                      ADDC   A2,A8
00370: 416b                      ADD    A11,A11
00380: 434a                      ADDC   A10,A10
00390: 41ad                      ADD    A13,A13
003a0: 438c                      ADDC   A12,A12
003b0: 4801                      CMP    A0,A1
003c0: c406                      JRLT   430h
003d0: 4c02                      MOVE   A0,A2
003e0: 2442                      SLL    2h,A2
003f0: 5ca2                      MPYS   A5,A2
00400: 6a42                      LMO    A2,A2
00410: ca14                      JREQ   560h
00420: c005                      JR     480h
00430: 4c22                      MOVE   A1,A2
00440: 2442                      SLL    2h,A2
00450: 5c82                      MPYS   A4,A2
00460: 6a42                      LMO    A2,A2
00470: ca0e                      JREQ   560h
00480: 6246                      SLL    A2,A6
00490: 6647                      SRL    A2,A7
004a0: 54c7                      OR     A6,A7
004b0: 6248                      SLL    A2,A8
004c0: 6649                      SRL    A2,A9
004d0: 5509                      OR     A8,A9
004e0: 624a                      SLL    A2,A10
004f0: 664b                      SRL    A2,A11
00500: 554b                      OR     A10,A11
00510: 624c                      SLL    A2,A12
00520: 664d                      SRL    A2,A13
00530: 558d                      OR     A12,A13
00540: 6644                      SRL    A2,A4
00550: 6645                      SRL    A2,A5
00560: 4c8a                      MOVE   A4,A10
00570: 414a                      ADD    A10,A10
00580: 4cac                      MOVE   A5,A12
00590: 418c                      ADD    A12,A12
005a0: 95c6                      MOVE   *A14+,A6,0
005b0: 0386                      ABS    A6
005c0: 95c8                      MOVE   *A14+,A8,0
005d0: 0388                      ABS    A8
005e0: 97c0                      MOVE   *A14+,A0,1
005f0: 07a1 0000 0000            MOVE   @0h,A1,1
00620: e020                      ADDXY  A1,A0
00630: 97c2                      MOVE   *A14+,A2,1
00640: 5621                      CLR    A1
00650: ec41                      MOVX   A2,A1
00660: 5663                      CLR    A3
00670: ee43                      MOVY   A2,A3
00680: 4927                      CMP    A9,A7
00690: c507                      JRGE   710h
006a0: 1426                      DEC    A6
006b0: c41a                      JRLT   860h
006c0: f620                      DRAV   A1,A0
006d0: 44a9                      SUB    A5,A9
006e0: 418b                      ADD    A12,A11
006f0: 4167                      ADD    A11,A7
00700: c0f7                      JR     680h
00710: 4d29                      MOVE   A9,A9
00720: c719                      JRGT   8C0h
00730: 1428                      DEC    A8
00740: c417                      JRLT   8C0h
00750: 4ce7                      MOVE   A7,A7
00760: c50a                      JRGE   810h
00770: 1426                      DEC    A6
00780: c40f                      JRLT   880h
00790: f640                      DRAV   A2,A0
007a0: 4089                      ADD    A4,A9
007b0: 44a9                      SUB    A5,A9
007c0: 418b                      ADD    A12,A11
007d0: 414d                      ADD    A10,A13
007e0: 4167                      ADD    A11,A7
007f0: 41a7                      ADD    A13,A7
00800: c0e7                      JR     680h
00810: f660                      DRAV   A3,A0
00820: 4089                      ADD    A4,A9
00830: 414d                      ADD    A10,A13
00840: 41a7                      ADD    A13,A7
00850: c0e2                      JR     680h
00860: 1428                      DEC    A8
00870: c404                      JRLT   8C0h
00880: 1028                      INC    A8
00890: f660                      DRAV   A3,A0
008a0: 3c48                      DSJS   A8,890h
008b0: c004                      JR     900h
008c0: 1026                      INC    A6
008d0: c602                      JRLE   900h
008e0: f620                      DRAV   A1,A0
008f0: 3c46                      DSJS   A6,8E0h
00900: 09af 7eff                 MMFM   SP,A0-A7,A9-A14
00920: 140e                      SUBK   20h,A14
00930: 0962                      RETS   2h

_arc_fill:
00940: 0570                      SETF   10h,1,0
00950: 098f ff7e                 MMTM   SP,A0-A7,A9-A14
00970: 099f 213e                 MMTM   SP,B2,B7,B10-B14
00990: a7ce                      MOVE   -*A14,A14,1
009a0: 95c0                      MOVE   *A14+,A0,0
009b0: 95c1                      MOVE   *A14+,A1,0
009c0: 95c2                      MOVE   *A14+,A2,0
009d0: 95c3                      MOVE   *A14+,A3,0
009e0: 4c05                      MOVE   A0,A5
009f0: 0750                      SETF   10h,0,1
00a00: 5ca5                      MPYS   A5,A5
00a10: 4ca4                      MOVE   A5,A4
00a20: 4c25                      MOVE   A1,A5
00a30: 5ca5                      MPYS   A5,A5
00a40: 4c47                      MOVE   A2,A7
00a50: 40e7                      ADD    A7,A7
00a60: 4407                      SUB    A0,A7
00a70: 4cea                      MOVE   A7,A10
00a80: 1027                      INC    A7
00a90: 5c27                      MPYS   A1,A7
00aa0: 4c69                      MOVE   A3,A9
00ab0: 4129                      ADD    A9,A9
00ac0: 4429                      SUB    A1,A9
00ad0: 4d2c                      MOVE   A9,A12
00ae0: 1469                      SUBK   3h,A9
00af0: 5c09                      MPYS   A0,A9
00b00: 4d28                      MOVE   A9,A8
00b10: 0760                      SETF   20h,1,1
00b20: 5d08                      MPYS   A8,A8
00b30: 4ce6                      MOVE   A7,A6
00b40: 5cc6                      MPYS   A6,A6
00b50: 4127                      ADD    A9,A7
00b60: 4306                      ADDC   A8,A6
00b70: 4c88                      MOVE   A4,A8
00b80: 5ca8                      MPYS   A5,A8
00b90: 4527                      SUB    A9,A7
00ba0: 4706                      SUBB   A8,A6
00bb0: 244a                      SLL    2h,A10
00bc0: 5caa                      MPYS   A5,A10
00bd0: 03ac                      NEG    A12
00be0: 104c                      ADDK   2h,A12
00bf0: 244c                      SLL    2h,A12
00c00: 5c8c                      MPYS   A4,A12
00c10: 2464                      SLL    3h,A4
00c20: 2465                      SLL    3h,A5
00c30: 4801                      CMP    A0,A1
00c40: c406                      JRLT   CB0h
00c50: 4c02                      MOVE   A0,A2
00c60: 2442                      SLL    2h,A2
00c70: 5ca2                      MPYS   A5,A2
00c80: 6a42                      LMO    A2,A2
00c90: ca11                      JREQ   DB0h
00ca0: c005                      JR     D00h
00cb0: 4c22                      MOVE   A1,A2
00cc0: 2442                      SLL    2h,A2
00cd0: 5c82                      MPYS   A4,A2
00ce0: 6a42                      LMO    A2,A2
00cf0: ca0b                      JREQ   DB0h
00d00: 6246                      SLL    A2,A6
00d10: 6647                      SRL    A2,A7
00d20: 54c7                      OR     A6,A7
00d30: 624a                      SLL    A2,A10
00d40: 664b                      SRL    A2,A11
00d50: 554b                      OR     A10,A11
00d60: 624c                      SLL    A2,A12
00d70: 664d                      SRL    A2,A13
00d80: 558d                      OR     A12,A13
00d90: 6644                      SRL    A2,A4
00da0: 6645                      SRL    A2,A5
00db0: 95c6                      MOVE   *A14+,A6,0
00dc0: 0386                      ABS    A6
00dd0: 95c8                      MOVE   *A14+,A8,0
00de0: 0388                      ABS    A8
00df0: 97c0                      MOVE   *A14+,A0,1
00e00: 07a1 0000 0000            MOVE   @0h,A1,1
00e30: e020                      ADDXY  A1,A0
00e40: 97c2                      MOVE   *A14+,A2,1
00e50: 5621                      CLR    A1
00e60: ec41                      MOVX   A2,A1
00e70: 5663                      CLR    A3
00e80: ee43                      MOVY   A2,A3
00e90: 09f7 0000 0001            MOVI   10000h,B7
00ec0: 95c9                      MOVE   *A14+,A9,0
00ed0: ca03                      JREQ   F10h
00ee0: 07a9 0050 0000            MOVE   @50h,A9,1
00f10: 1428                      DEC    A8
00f20: ce30                      JRN    1230h
00f30: 49a7                      CMP    A13,A7
00f40: c507                      JRGE   FC0h
00f50: 1426                      DEC    A6
00f60: ce20                      JRN    1170h
00f70: e020                      ADDXY  A1,A0
00f80: 1037                      INC    B7
00f90: 40ab                      ADD    A5,A11
00fa0: 4167                      ADD    A11,A7
00fb0: c0f7                      JR     F30h
00fc0: 4ce7                      MOVE   A7,A7
00fd0: c50f                      JRGE   10D0h
00fe0: 1426                      DEC    A6
00ff0: ce17                      JRN    1170h
01000: 4e02                      MOVE   A0,B2
01010: 4d29                      MOVE   A9,A9
01020: ca02                      JREQ   1050h
01030: 0929                      CALL   A9
01040: c001                      JR     1060h
01050: 0fe0                      FILL   XY
01060: e040                      ADDXY  A2,A0
01070: 1037                      INC    B7
01080: 408d                      ADD    A4,A13
01090: 40ab                      ADD    A5,A11
010a0: 4167                      ADD    A11,A7
010b0: 41a7                      ADD    A13,A7
010c0: c0e4                      JR     F10h
010d0: 4e02                      MOVE   A0,B2
010e0: 4d29                      MOVE   A9,A9
010f0: ca02                      JREQ   1120h
01100: 0929                      CALL   A9
01110: c001                      JR     1130h
01120: 0fe0                      FILL   XY
01130: e060                      ADDXY  A3,A0
01140: 408d                      ADD    A4,A13
01150: 41a7                      ADD    A13,A7
01160: c0da                      JR     F10h
01170: 1028                      INC    A8
01180: 4d29                      MOVE   A9,A9
01190: ca05                      JREQ   11F0h
011a0: 4e02                      MOVE   A0,B2
011b0: 0929                      CALL   A9
011c0: e060                      ADDXY  A3,A0
011d0: 3c88                      DSJS   A8,11A0h
011e0: c004                      JR     1230h
011f0: 4e02                      MOVE   A0,B2
01200: 0fe0                      FILL   XY
01210: e060                      ADDXY  A3,A0
01220: 3c88                      DSJS   A8,11F0h
01230: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
01250: 09af 7eff                 MMFM   SP,A0-A7,A9-A14
01270: 140e                      SUBK   20h,A14
01280: 0962                      RETS   2h

_arc_pen:
01290: 0570                      SETF   10h,1,0
012a0: 098f ff7e                 MMTM   SP,A0-A7,A9-A14
012c0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
012e0: a7ce                      MOVE   -*A14,A14,1
012f0: 95c0                      MOVE   *A14+,A0,0
01300: 95c1                      MOVE   *A14+,A1,0
01310: 95c2                      MOVE   *A14+,A2,0
01320: 95c3                      MOVE   *A14+,A3,0
01330: 4c25                      MOVE   A1,A5
01340: 0750                      SETF   10h,0,1
01350: 5ca5                      MPYS   A5,A5
01360: 4ca4                      MOVE   A5,A4
01370: 4c05                      MOVE   A0,A5
01380: 5ca5                      MPYS   A5,A5
01390: 4c47                      MOVE   A2,A7
013a0: 40e7                      ADD    A7,A7
013b0: 4407                      SUB    A0,A7
013c0: 4ce8                      MOVE   A7,A8
013d0: 1027                      INC    A7
013e0: 5c27                      MPYS   A1,A7
013f0: 4c6d                      MOVE   A3,A13
01400: 41ad                      ADD    A13,A13
01410: 442d                      SUB    A1,A13
01420: 4daa                      MOVE   A13,A10
01430: 142d                      DEC    A13
01440: 5c0d                      MPYS   A0,A13
01450: 4dac                      MOVE   A13,A12
01460: 0740                      SETF   20h,0,1
01470: 5d8c                      MPYS   A12,A12
01480: 4ce6                      MOVE   A7,A6
01490: 5cc6                      MPYS   A6,A6
014a0: 41a7                      ADD    A13,A7
014b0: 4386                      ADDC   A12,A6
014c0: 4c8c                      MOVE   A4,A12
014d0: 5cac                      MPYS   A5,A12
014e0: 45a7                      SUB    A13,A7
014f0: 4786                      SUBB   A12,A6
01500: 2448                      SLL    2h,A8
01510: 5c88                      MPYS   A4,A8
01520: 03aa                      NEG    A10
01530: 244a                      SLL    2h,A10
01540: 5caa                      MPYS   A5,A10
01550: 2464                      SLL    3h,A4
01560: 2465                      SLL    3h,A5
01570: 4801                      CMP    A0,A1
01580: c406                      JRLT   15F0h
01590: 4c02                      MOVE   A0,A2
015a0: 2442                      SLL    2h,A2
015b0: 5c82                      MPYS   A4,A2
015c0: 6a42                      LMO    A2,A2
015d0: ca11                      JREQ   16F0h
015e0: c005                      JR     1640h
015f0: 4c22                      MOVE   A1,A2
01600: 2442                      SLL    2h,A2
01610: 5ca2                      MPYS   A5,A2
01620: 6a42                      LMO    A2,A2
01630: ca0b                      JREQ   16F0h
01640: 6246                      SLL    A2,A6
01650: 6647                      SRL    A2,A7
01660: 54c7                      OR     A6,A7
01670: 6248                      SLL    A2,A8
01680: 6649                      SRL    A2,A9
01690: 5509                      OR     A8,A9
016a0: 624a                      SLL    A2,A10
016b0: 664b                      SRL    A2,A11
016c0: 554b                      OR     A10,A11
016d0: 6644                      SRL    A2,A4
016e0: 6645                      SRL    A2,A5
016f0: 95cd                      MOVE   *A14+,A13,0
01700: 038d                      ABS    A13
01710: 4fa0                      MOVE   A13,B0
01720: 95c2                      MOVE   *A14+,A2,0
01730: 0382                      ABS    A2
01740: 4e41                      MOVE   A2,B1
01750: 97c0                      MOVE   *A14+,A0,1
01760: 07a1 0000 0000            MOVE   @0h,A1,1
01790: e020                      ADDXY  A1,A0
017a0: 95c1                      MOVE   *A14+,A1,0
017b0: 0521                      ZEXT   A1,0
017c0: 07ba 0020 0000            MOVE   @20h,B10,1
017f0: 2e1a                      SRL    10h,B10
01800: 95c3                      MOVE   *A14+,A3,0
01810: cf04                      JRNN   1860h
01820: 4f56                      MOVE   B10,A6
01830: 1426                      DEC    A6
01840: 2606                      SLL    10h,A6
01850: e0c0                      ADDXY  A6,A0
01860: 2603                      SLL    10h,A3
01870: 85c6                      MOVE   *A14,A6,0
01880: ca03                      JREQ   18C0h
01890: 07a6 0050 0000            MOVE   @50h,A6,1
018c0: 07b7 0020 0000            MOVE   @20h,B7,1
018f0: 2617                      SLL    10h,B7
01900: 2e17                      SRL    10h,B7
01910: 0bb7 0000 0001            ORI    10000h,B7
01940: 4f5e                      MOVE   B10,A14
01950: 4ce8                      MOVE   A7,A8
01960: 4d2a                      MOVE   A9,A10
01970: 4d6c                      MOVE   A11,A12
01980: 4951                      CMP    B10,B1
01990: ce2a                      JRN    1C40h
019a0: 4d51                      MOVE   B10,B1
019b0: 0d3f 005d                 CALLR  1FA0h
019d0: 4c31                      MOVE   B1,B1
019e0: c60b                      JRLE   1AA0h
019f0: 4cc6                      MOVE   A6,A6
01a00: cb05                      JRNE   1A60h
01a10: 4e02                      MOVE   A0,B2
01a20: 0fe0                      FILL   XY
01a30: e060                      ADDXY  A3,A0
01a40: 3c91                      DSJS   B1,1A10h
01a50: c004                      JR     1AA0h
01a60: 4e02                      MOVE   A0,B2
01a70: 0926                      CALL   A6
01a80: e060                      ADDXY  A3,A0
01a90: 3c91                      DSJS   B1,1A60h
01aa0: 4e41                      MOVE   A2,B1
01ab0: 4fca                      MOVE   A14,B10
01ac0: 4551                      SUB    B10,B1
01ad0: 1822                      MOVK   1h,A2
01ae0: e022                      ADDXY  A1,A2
01af0: 4c10                      MOVE   B0,B0
01b00: c607                      JRLE   1B80h
01b10: 0d3f 0061                 CALLR  2140h
01b30: 4c10                      MOVE   B0,B0
01b40: c603                      JRLE   1B80h
01b50: 4017                      ADD    B0,B7
01b60: e020                      ADDXY  A1,A0
01b70: 3c50                      DSJS   B0,1B60h
01b80: 07ba 0020 0000            MOVE   @20h,B10,1
01bb0: 261a                      SLL    10h,B10
01bc0: 2e1a                      SRL    10h,B10
01bd0: ecf0                      MOVX   B7,B0
01be0: 4550                      SUB    B10,B0
01bf0: 4fca                      MOVE   A14,B10
01c00: 4151                      ADD    B10,B1
01c10: 0d3f 0074                 CALLR  2370h
01c30: c031                      JR     1F50h
01c40: 4c31                      MOVE   B1,B1
01c50: cb12                      JRNE   1D80h
01c60: 4d51                      MOVE   B10,B1
01c70: e017                      ADDXY  B0,B7
01c80: 1e01                      BTST   Fh,A1
01c90: ca02                      JREQ   1CC0h
01ca0: 4e11                      MOVE   B0,A1
01cb0: e220                      SUBXY  A1,A0
01cc0: 4cc6                      MOVE   A6,A6
01cd0: cb05                      JRNE   1D30h
01ce0: 4e02                      MOVE   A0,B2
01cf0: 0fe0                      FILL   XY
01d00: e060                      ADDXY  A3,A0
01d10: 3c91                      DSJS   B1,1CE0h
01d20: c022                      JR     1F50h
01d30: 4e02                      MOVE   A0,B2
01d40: 0926                      CALL   A6
01d50: e060                      ADDXY  A3,A0
01d60: 3c91                      DSJS   B1,1D30h
01d70: c01d                      JR     1F50h
01d80: 0d3f 0020                 CALLR  1FA0h
01da0: 4c10                      MOVE   B0,B0
01db0: c603                      JRLE   1DF0h
01dc0: e017                      ADDXY  B0,B7
01dd0: e020                      ADDXY  A1,A0
01de0: 3c50                      DSJS   B0,1DD0h
01df0: 4fca                      MOVE   A14,B10
01e00: 4151                      ADD    B10,B1
01e10: 4e4a                      MOVE   A2,B10
01e20: 4551                      SUB    B10,B1
01e30: c60b                      JRLE   1EF0h
01e40: 4cc6                      MOVE   A6,A6
01e50: cb05                      JRNE   1EB0h
01e60: 4e02                      MOVE   A0,B2
01e70: 0fe0                      FILL   XY
01e80: e060                      ADDXY  A3,A0
01e90: 3c91                      DSJS   B1,1E60h
01ea0: c004                      JR     1EF0h
01eb0: 4e02                      MOVE   A0,B2
01ec0: 0926                      CALL   A6
01ed0: e060                      ADDXY  A3,A0
01ee0: 3c91                      DSJS   B1,1EB0h
01ef0: 4fa0                      MOVE   A13,B0
01f00: 4e41                      MOVE   A2,B1
01f10: 1822                      MOVK   1h,A2
01f20: e022                      ADDXY  A1,A2
01f30: 0d3f 0042                 CALLR  2370h
01f50: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
01f70: 09af 7eff                 MMFM   SP,A0-A7,A9-A14
01f90: 0962                      RETS   2h
01fa0: 4ce7                      MOVE   A7,A7
01fb0: cf07                      JRNN   2030h
01fc0: 1430                      DEC    B0
01fd0: ce12                      JRN    2100h
01fe0: e020                      ADDXY  A1,A0
01ff0: 1037                      INC    B7
02000: 4089                      ADD    A4,A9
02010: 4127                      ADD    A9,A7
02020: cef9                      JRN    1FC0h
02030: 1431                      DEC    B1
02040: ce0d                      JRN    2120h
02050: 4e02                      MOVE   A0,B2
02060: 4cc6                      MOVE   A6,A6
02070: ca02                      JREQ   20A0h
02080: 0926                      CALL   A6
02090: c001                      JR     20B0h
020a0: 0fe0                      FILL   XY
020b0: e060                      ADDXY  A3,A0
020c0: 40ab                      ADD    A5,A11
020d0: 4167                      ADD    A11,A7
020e0: ceed                      JRN    1FC0h
020f0: c0f3                      JR     2030h
02100: 5610                      CLR    B0
02110: 0960                      RETS   
02120: 5631                      CLR    B1
02130: 0960                      RETS   
02140: 4ce7                      MOVE   A7,A7
02150: cf07                      JRNN   21D0h
02160: 1430                      DEC    B0
02170: ce1b                      JRN    2330h
02180: e020                      ADDXY  A1,A0
02190: 1037                      INC    B7
021a0: 4089                      ADD    A4,A9
021b0: 4127                      ADD    A9,A7
021c0: cef9                      JRN    2160h
021d0: 1431                      DEC    B1
021e0: ce16                      JRN    2350h
021f0: 4d08                      MOVE   A8,A8
02200: cf05                      JRNN   2260h
02210: e040                      ADDXY  A2,A0
02220: 1437                      DEC    B7
02230: 408a                      ADD    A4,A10
02240: 4148                      ADD    A10,A8
02250: cefb                      JRN    2210h
02260: 4e02                      MOVE   A0,B2
02270: 4cc6                      MOVE   A6,A6
02280: ca02                      JREQ   22B0h
02290: 0926                      CALL   A6
022a0: c001                      JR     22C0h
022b0: 0fe0                      FILL   XY
022c0: e060                      ADDXY  A3,A0
022d0: 40ac                      ADD    A5,A12
022e0: 4188                      ADD    A12,A8
022f0: 40ab                      ADD    A5,A11
02300: 4167                      ADD    A11,A7
02310: cee4                      JRN    2160h
02320: c0ea                      JR     21D0h
02330: 5610                      CLR    B0
02340: 0960                      RETS   
02350: 5631                      CLR    B1
02360: 0960                      RETS   
02370: 1431                      DEC    B1
02380: ce20                      JRN    2590h
02390: 4d08                      MOVE   A8,A8
023a0: cf07                      JRNN   2420h
023b0: 1430                      DEC    B0
023c0: ce10                      JRN    24D0h
023d0: e040                      ADDXY  A2,A0
023e0: 1437                      DEC    B7
023f0: 408a                      ADD    A4,A10
02400: 4148                      ADD    A10,A8
02410: cef9                      JRN    23B0h
02420: 40ac                      ADD    A5,A12
02430: 4188                      ADD    A12,A8
02440: 4e02                      MOVE   A0,B2
02450: 4cc6                      MOVE   A6,A6
02460: ca03                      JREQ   24A0h
02470: 0926                      CALL   A6
02480: e060                      ADDXY  A3,A0
02490: c0ed                      JR     2370h
024a0: 0fe0                      FILL   XY
024b0: e060                      ADDXY  A3,A0
024c0: c0ea                      JR     2370h
024d0: 1031                      INC    B1
024e0: 4cc6                      MOVE   A6,A6
024f0: cb05                      JRNE   2550h
02500: 4e02                      MOVE   A0,B2
02510: 0fe0                      FILL   XY
02520: e060                      ADDXY  A3,A0
02530: 3c91                      DSJS   B1,2500h
02540: 0960                      RETS   
02550: 4e02                      MOVE   A0,B2
02560: 0926                      CALL   A6
02570: e060                      ADDXY  A3,A0
02580: 3c91                      DSJS   B1,2550h
02590: 0960                      RETS   

_dm_bitblt:
025a0: 098f ff78                 MMTM   SP,A0-A7,A9-A12
025c0: 099f f100                 MMTM   SP,B0-B3,B7
025e0: a7c8                      MOVE   -*A14,A8,1
025f0: 4f0a                      MOVE   A8,B10
02600: 9757                      MOVE   *B10+,B7,1
02610: 4f58                      MOVE   B10,A8
02620: 9702                      MOVE   *A8+,A2,1
02630: 8703                      MOVE   *A8,A3,1
02640: c012                      JR     2770h

_bitblt:
02650: 098f ff78                 MMTM   SP,A0-A7,A9-A12
02670: 099f f100                 MMTM   SP,B0-B3,B7
02690: 4fca                      MOVE   A14,B10
026a0: a757                      MOVE   -*B10,B7,1
026b0: a75b                      MOVE   -*B10,B11,1
026c0: 4f5e                      MOVE   B10,A14
026d0: 261b                      SLL    10h,B11
026e0: ef77                      MOVY   B11,B7
026f0: a7c2                      MOVE   -*A14,A2,1
02700: a7c8                      MOVE   -*A14,A8,1
02710: 2608                      SLL    10h,A8
02720: ef02                      MOVY   A8,A2
02730: a7c3                      MOVE   -*A14,A3,1
02740: a7c8                      MOVE   -*A14,A8,1
02750: 2608                      SLL    10h,A8
02760: ef03                      MOVY   A8,A3
02770: 0550                      SETF   10h,0,0
02780: 05a9 00b0 c000            MOVE   @C00000B0h,A9,0
027b0: 05aa 0150 c000            MOVE   @C0000150h,A10,0
027e0: 05a8 0130 c000            MOVE   @C0000130h,A8,0
02810: 2608                      SLL    10h,A8
02820: ef0a                      MOVY   A8,A10
02830: 05ab 0110 c000            MOVE   @C0000110h,A11,0
02860: 07ac 0060 0000            MOVE   @60h,A12,1
02890: cb25                      JRNE   2AF0h
028a0: 07a8 0000 0000            MOVE   @0h,A8,1
028d0: e103                      ADDXY  A8,A3
028e0: 4e62                      MOVE   A3,B2
028f0: 0542                      SETF   2h,0,0
02900: 05a8 00b6 c000            MOVE   @C00000B6h,A8,0
02930: ca1b                      JREQ   2AF0h
02940: 1828                      MOVK   1h,A8
02950: 0588 00b6 c000            MOVE   A8,@C00000B6h,0
02980: 0541                      SETF   1h,0,0
02990: 4508                      SUB    A8,A8
029a0: 0588 011b c000            MOVE   A8,@C000011Bh,0
029d0: 0550                      SETF   10h,0,0
029e0: 0fe0                      FILL   XY
029f0: cc00 00d2                 JRV    3730h
02a10: 4508                      SUB    A8,A8
02a20: 0588 012b c000            MOVE   A8,@C000012Bh,0
02a50: 058b 0110 c000            MOVE   A11,@C0000110h,0
02a80: 0589 00b0 c000            MOVE   A9,@C00000B0h,0
02ab0: 4e58                      MOVE   B2,A8
02ac0: e268                      SUBXY  A3,A8
02ad0: e102                      ADDXY  A8,A2
02ae0: 4e53                      MOVE   B2,A3
02af0: 0550                      SETF   10h,0,0
02b00: 07a0 0040 0000            MOVE   @40h,A0,1
02b30: cb0e                      JRNE   2C20h
02b40: 07a8 0000 0000            MOVE   @0h,A8,1
02b70: e102                      ADDXY  A8,A2
02b80: 4c48                      MOVE   A2,A8
02b90: 0508                      SEXT   A8,0
02ba0: cf07                      JRNN   2C20h
02bb0: 03a8                      NEG    A8
02bc0: e102                      ADDXY  A8,A2
02bd0: e103                      ADDXY  A8,A3
02be0: 4f0a                      MOVE   A8,B10
02bf0: e357                      SUBXY  B10,B7
02c00: c400 00b1                 JRLT   3730h
02c20: 4c00                      MOVE   A0,A0
02c30: ca12                      JREQ   2D60h
02c40: b404 0020                 MOVE   *A0(20h),A4,0
02c60: 4c41                      MOVE   A2,A1
02c70: 2e01                      SRL    10h,A1
02c80: 5e81                      MPYU   A4,A1
02c90: b406 0050                 MOVE   *A0(50h),A6,0
02cb0: 4cc8                      MOVE   A6,A8
02cc0: 0522                      ZEXT   A2,0
02cd0: 6b08                      LMO    A8,A8
02ce0: 17e8                      SUBK   1Fh,A8
02cf0: 03a8                      NEG    A8
02d00: 6302                      SLL    A8,A2
02d10: 4022                      ADD    A1,A2
02d20: b608 0000                 MOVE   *A0(0h),A8,1
02d40: 4102                      ADD    A8,A2
02d50: c006                      JR     2DC0h
02d60: 4e40                      MOVE   A2,B0
02d70: 05a6 0150 c000            MOVE   @C0000150h,A6,0
02da0: 4e74                      MOVE   B3,A4
02db0: e842                      CVXYL  A2,A2
02dc0: 4d8c                      MOVE   A12,A12
02dd0: ca12                      JREQ   2F00h
02de0: b585 0020                 MOVE   *A12(20h),A5,0
02e00: 4c61                      MOVE   A3,A1
02e10: 2e01                      SRL    10h,A1
02e20: 5ea1                      MPYU   A5,A1
02e30: 0523                      ZEXT   A3,0
02e40: b587 0050                 MOVE   *A12(50h),A7,0
02e60: 4ce8                      MOVE   A7,A8
02e70: 6b08                      LMO    A8,A8
02e80: 17e8                      SUBK   1Fh,A8
02e90: 03a8                      NEG    A8
02ea0: 6303                      SLL    A8,A3
02eb0: 4023                      ADD    A1,A3
02ec0: b788 0000                 MOVE   *A12(0h),A8,1
02ee0: 4103                      ADD    A8,A3
02ef0: c00a                      JR     2FA0h
02f00: 4e62                      MOVE   A3,B2
02f10: 05a7 0150 c000            MOVE   @C0000150h,A7,0
02f40: 4e75                      MOVE   B3,A5
02f50: e863                      CVXYL  A3,A3
02f60: 07a1 0040 0000            MOVE   @40h,A1,1
02f90: ca5e                      JREQ   3580h
02fa0: 48c7                      CMP    A6,A7
02fb0: ca18                      JREQ   3140h
02fc0: cf3c                      JRNN   3390h
02fd0: 4ef8                      MOVE   B7,A8
02fe0: 0537                      ZEXT   B7,0
02ff0: 4ef1                      MOVE   B7,A1
03000: 2e08                      SRL    10h,A8
03010: d706                      EXGF   A6,1
03020: 4d1a                      MOVE   B8,B10
03030: 073a                      ZEXT   B10,1
03040: 0541                      SETF   1h,0,0
03050: 4e40                      MOVE   A2,B0
03060: 4e62                      MOVE   A3,B2
03070: 4e27                      MOVE   A1,B7
03080: 961b                      MOVE   *B0+,B11,1
03090: 575b                      XOR    B10,B11
030a0: ca01                      JREQ   30C0h
030b0: 183b                      MOVK   1h,B11
030c0: 9172                      MOVE   B11,*B2+,0
030d0: 3cd7                      DSJS   B7,3080h
030e0: 4082                      ADD    A4,A2
030f0: 40a3                      ADD    A5,A3
03100: 3d88                      DSJS   A8,3050h
03110: d706                      EXGF   A6,1
03120: 0550                      SETF   10h,0,0
03130: c05f                      JR     3730h
03140: 0587 0150 c000            MOVE   A7,@C0000150h,0
03170: 4e81                      MOVE   A4,B1
03180: 4ea3                      MOVE   A5,B3
03190: 4e40                      MOVE   A2,B0
031a0: 4c88                      MOVE   A4,A8
031b0: 0b88 fff0 ffff            ANDI   Fh,A8
031e0: cb0c                      JRNE   32B0h
031f0: 4ca8                      MOVE   A5,A8
03200: 0b88 fff0 ffff            ANDI   Fh,A8
03230: cb07                      JRNE   32B0h
03240: 4d8c                      MOVE   A12,A12
03250: cb02                      JRNE   3280h
03260: 0f20                      PIXBLT L,XY
03270: c04b                      JR     3730h
03280: 4e62                      MOVE   A3,B2
03290: 0f00                      PIXBLT L,L
032a0: c048                      JR     3730h
032b0: 4e62                      MOVE   A3,B2
032c0: 4ef8                      MOVE   B7,A8
032d0: 0537                      ZEXT   B7,0
032e0: 0bb7 0000 0001            ORI    10000h,B7
03310: 2e08                      SRL    10h,A8
03320: 4e40                      MOVE   A2,B0
03330: 4e62                      MOVE   A3,B2
03340: 0f00                      PIXBLT L,L
03350: 4082                      ADD    A4,A2
03360: 40a3                      ADD    A5,A3
03370: 3cc8                      DSJS   A8,3320h
03380: c03a                      JR     3730h
03390: 0587 0150 c000            MOVE   A7,@C0000150h,0
033c0: 4e81                      MOVE   A4,B1
033d0: 4ea3                      MOVE   A5,B3
033e0: 4e40                      MOVE   A2,B0
033f0: 4ca8                      MOVE   A5,A8
03400: 0b88 fff0 ffff            ANDI   Fh,A8
03430: cb07                      JRNE   34B0h
03440: 4d8c                      MOVE   A12,A12
03450: cb02                      JRNE   3480h
03460: 0fa0                      PIXBLT B,XY
03470: c02b                      JR     3730h
03480: 4e62                      MOVE   A3,B2
03490: 0f80                      PIXBLT B,L
034a0: c028                      JR     3730h
034b0: 4ef8                      MOVE   B7,A8
034c0: 0537                      ZEXT   B7,0
034d0: 0bb7 0000 0001            ORI    10000h,B7
03500: 2e08                      SRL    10h,A8
03510: 4e40                      MOVE   A2,B0
03520: 4e62                      MOVE   A3,B2
03530: 0f80                      PIXBLT B,L
03540: 4082                      ADD    A4,A2
03550: 40a3                      ADD    A5,A3
03560: 3cc8                      DSJS   A8,3510h
03570: c01b                      JR     3730h
03580: 4c71                      MOVE   B3,B1
03590: 05c0 0140 c000 0130 c000  MOVE   @C0000140h,@C0000130h,0
035e0: 05a8 00b0 c000            MOVE   @C00000B0h,A8,0
03610: 0b88 0300 0000            ANDI   FFFFFCFFh,A8
03640: e412                      CMPXY  B0,B2
03650: c803                      JRC    3690h
03660: 0ba8 0200 0000            ORI    200h,A8
03690: e412                      CMPXY  B0,B2
036a0: cc03                      JRV    36E0h
036b0: 0ba8 0100 0000            ORI    100h,A8
036e0: 0588 00b0 c000            MOVE   A8,@C00000B0h,0
03710: 8508                      MOVE   *A8,A8,0
03720: 0f60                      PIXBLT XY,XY
03730: 0589 00b0 c000            MOVE   A9,@C00000B0h,0
03760: 058a 0150 c000            MOVE   A10,@C0000150h,0
03790: 2e0a                      SRL    10h,A10
037a0: 058a 0130 c000            MOVE   A10,@C0000130h,0
037d0: 058b 0110 c000            MOVE   A11,@C0000110h,0
03800: 09bf 008f                 MMFM   SP,B0-B3,B7
03820: 09af 1eff                 MMFM   SP,A0-A7,A9-A12
03840: 0962                      RETS   2h

_fill_convex:
03850: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
03870: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
03890: 5610                      CLR    B0
038a0: c007                      JR     3920h

_patnfill_convex:
038b0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
038d0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
038f0: 07b0 0050 0000            MOVE   @50h,B0,1
03920: a7c0                      MOVE   -*A14,A0,1
03930: a7cb                      MOVE   -*A14,A11,1
03940: c011                      JR     3A60h

_dm_fill_convex:
03950: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
03970: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
03990: 5610                      CLR    B0
039a0: c007                      JR     3A20h

_dm_patnfill_convex:
039b0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
039d0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
039f0: 07b0 0050 0000            MOVE   @50h,B0,1
03a20: 0550                      SETF   10h,0,0
03a30: a7cb                      MOVE   -*A14,A11,1
03a40: 9560                      MOVE   *A11+,A0,0
03a50: 2fc0                      SRL    2h,A0
03a60: 1868                      MOVK   3h,A8
03a70: 4900                      CMP    A8,A0
03a80: c400 00a4                 JRLT   44E0h
03aa0: 07a8 0060 0000            MOVE   @60h,A8,1
03ad0: cb00 009f                 JRNE   44E0h
03af0: 0570                      SETF   10h,1,0
03b00: 09f7 0000 0001            MOVI   10000h,B7
03b30: 07ac 0000 0000            MOVE   @0h,A12,1
03b60: 4c0d                      MOVE   A0,A13
03b70: 24ad                      SLL    5h,A13
03b80: 416d                      ADD    A11,A13
03b90: 4da9                      MOVE   A13,A9
03ba0: a526                      MOVE   -*A9,A6,0
03bb0: a525                      MOVE   -*A9,A5,0
03bc0: a522                      MOVE   -*A9,A2,0
03bd0: a521                      MOVE   -*A9,A1,0
03be0: 4d69                      MOVE   A11,A9
03bf0: 4c0a                      MOVE   A0,A10
03c00: 0770                      SETF   10h,1,1
03c10: 9527                      MOVE   *A9+,A7,0
03c20: 9528                      MOVE   *A9+,A8,0
03c30: 4c23                      MOVE   A1,A3
03c40: 4c44                      MOVE   A2,A4
03c50: 44e1                      SUB    A7,A1
03c60: 44c2                      SUB    A6,A2
03c70: 44a3                      SUB    A5,A3
03c80: 4504                      SUB    A8,A4
03c90: 5c41                      MPYS   A2,A1
03ca0: 5c83                      MPYS   A4,A3
03cb0: 4461                      SUB    A3,A1
03cc0: cb07                      JRNE   3D40h
03cd0: 4ca1                      MOVE   A5,A1
03ce0: 4cc2                      MOVE   A6,A2
03cf0: 4ce5                      MOVE   A7,A5
03d00: 4d06                      MOVE   A8,A6
03d10: 3e2a                      DSJS   A10,3C10h
03d20: 0740                      SETF   20h,0,1
03d30: c07a                      JR     44E0h
03d40: cffd                      JRNN   3D20h
03d50: 0740                      SETF   20h,0,1
03d60: 4d68                      MOVE   A11,A8
03d70: 1208                      ADDK   10h,A8
03d80: 09c7 3fff                 MOVI   3FFFh,A7
03da0: 4c0a                      MOVE   A0,A10
03db0: 8509                      MOVE   *A8,A9,0
03dc0: 4927                      CMP    A9,A7
03dd0: ca04                      JREQ   3E20h
03de0: ed46                      MOVX   A10,A6
03df0: c402                      JRLT   3E20h
03e00: 4d27                      MOVE   A9,A7
03e10: 4d04                      MOVE   A8,A4
03e20: 1008                      ADDK   20h,A8
03e30: 3d2a                      DSJS   A10,3DB0h
03e40: e406                      CMPXY  A0,A6
03e50: ce68                      JRN    44E0h
03e60: 1604                      SUBK   10h,A4
03e70: 4c89                      MOVE   A4,A9
03e80: 4c8a                      MOVE   A4,A10
03e90: 8687                      MOVE   *A4,A7,1
03ea0: e187                      ADDXY  A12,A7
03eb0: 4ce8                      MOVE   A7,A8
03ec0: eee0                      MOVY   A7,A0
03ed0: 2e00                      SRL    10h,A0
03ee0: 5684                      CLR    A4
03ef0: 56c6                      CLR    A6
03f00: 2600                      SLL    10h,A0
03f10: 4c84                      MOVE   A4,A4
03f20: cb16                      JRNE   4090h
03f30: 1009                      ADDK   20h,A9
03f40: 492d                      CMP    A9,A13
03f50: cb01                      JRNE   3F70h
03f60: 4d69                      MOVE   A11,A9
03f70: 4ce1                      MOVE   A7,A1
03f80: 8727                      MOVE   *A9,A7,1
03f90: e187                      ADDXY  A12,A7
03fa0: e407                      CMPXY  A0,A7
03fb0: caf7                      JREQ   3F30h
03fc0: 4ce4                      MOVE   A7,A4
03fd0: e224                      SUBXY  A1,A4
03fe0: c84f                      JRC    44E0h
03ff0: 4c83                      MOVE   A4,A3
04000: 2603                      SLL    10h,A3
04010: 2a04                      SRA    10h,A4
04020: 5883                      DIVS   A4,A3
04030: 2601                      SLL    10h,A1
04040: 0b01 7fff                 ADDI   7FFFh,A1
04060: 4c6e                      MOVE   A3,A14
04070: 2bee                      SRA    1h,A14
04080: 41c1                      ADD    A14,A1
04090: 4cc6                      MOVE   A6,A6
040a0: cb16                      JRNE   4210h
040b0: 494b                      CMP    A10,A11
040c0: cb01                      JRNE   40E0h
040d0: 4daa                      MOVE   A13,A10
040e0: 140a                      SUBK   20h,A10
040f0: 4d02                      MOVE   A8,A2
04100: 8748                      MOVE   *A10,A8,1
04110: e188                      ADDXY  A12,A8
04120: e408                      CMPXY  A0,A8
04130: caf7                      JREQ   40B0h
04140: 4d06                      MOVE   A8,A6
04150: e246                      SUBXY  A2,A6
04160: c837                      JRC    44E0h
04170: 4cc5                      MOVE   A6,A5
04180: 2605                      SLL    10h,A5
04190: 2a06                      SRA    10h,A6
041a0: 58c5                      DIVS   A6,A5
041b0: 2602                      SLL    10h,A2
041c0: 0b02 7fff                 ADDI   7FFFh,A2
041e0: 4cae                      MOVE   A5,A14
041f0: 2bee                      SRA    1h,A14
04200: 41c2                      ADD    A14,A2
04210: 4c8e                      MOVE   A4,A14
04220: 4886                      CMP    A4,A6
04230: cf01                      JRNN   4250h
04240: 4cce                      MOVE   A6,A14
04250: 4dce                      MOVE   A14,A14
04260: cf01                      JRNN   4280h
04270: c026                      JR     44E0h
04280: 45c4                      SUB    A14,A4
04290: 45c6                      SUB    A14,A6
042a0: 4fcc                      MOVE   A14,B12
042b0: 2e00                      SRL    10h,A0
042c0: 4c10                      MOVE   B0,B0
042d0: cb10                      JRNE   43E0h
042e0: 4e40                      MOVE   A2,B0
042f0: 4ea1                      MOVE   A5,B1
04300: 4e27                      MOVE   A1,B7
04310: 4e6a                      MOVE   A3,B10
04320: 4e0b                      MOVE   A0,B11
04330: 261b                      SLL    10h,B11
04340: 4817                      CMP    B0,B7
04350: c418                      JRLT   44E0h
04360: 0efa                      TFILL  XY
04370: 3c9c                      DSJS   B12,4340h
04380: 4e12                      MOVE   B0,A2
04390: 4ef1                      MOVE   B7,A1
043a0: 4f70                      MOVE   B11,A0
043b0: 2e00                      SRL    10h,A0
043c0: 5610                      CLR    B0
043d0: c0b2                      JR     3F00h
043e0: 4d91                      MOVE   B12,B1
043f0: ee2e                      MOVY   A1,A14
04400: e24e                      SUBXY  A2,A14
04410: c80c                      JRC    44E0h
04420: 2e0e                      SRL    10h,A14
04430: 4fce                      MOVE   A14,B14
04440: edd7                      MOVX   B14,B7
04450: ee40                      MOVY   A2,A0
04460: 4e02                      MOVE   A0,B2
04470: 3212                      RL     10h,B2
04480: 0930                      CALL   B0
04490: 4061                      ADD    A3,A1
044a0: 40a2                      ADD    A5,A2
044b0: 1020                      INC    A0
044c0: 3dd1                      DSJS   B1,43F0h
044d0: c0a2                      JR     3F00h
044e0: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
04500: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
04520: b7ee 0020                 MOVE   *SP(20h),A14,1
04540: 0962                      RETS   2h

_decode_rect:
04550: 098f ff60                 MMTM   SP,A0-A7,A9,A10
04570: 099f 0044                 MMTM   SP,B9,B13
04590: 07a8 0060 0000            MOVE   @60h,A8,1
045c0: cb79                      JRNE   4D60h
045d0: 0550                      SETF   10h,0,0
045e0: a7c2                      MOVE   -*A14,A2,1
045f0: a7c8                      MOVE   -*A14,A8,1
04600: 2608                      SLL    10h,A8
04610: ef02                      MOVY   A8,A2
04620: a7c3                      MOVE   -*A14,A3,1
04630: b468 0000                 MOVE   *A3(0h),A8,0
04650: 0b68 7efe ffff            CMPI   8101h,A8
04680: cb6d                      JRNE   4D60h
04690: b460 0040                 MOVE   *A3(40h),A0,0
046b0: b461 0050                 MOVE   *A3(50h),A1,0
046d0: b466 0060                 MOVE   *A3(60h),A6,0
046f0: 05a8 0150 c000            MOVE   @C0000150h,A8,0
04720: 4906                      CMP    A8,A6
04730: cb62                      JRNE   4D60h
04740: b664 0010                 MOVE   *A3(10h),A4,1
04760: b468 0030                 MOVE   *A3(30h),A8,0
04780: cb5d                      JRNE   4D60h
04790: 07a8 0000 0000            MOVE   @0h,A8,1
047c0: e102                      ADDXY  A8,A2
047d0: b668 0080                 MOVE   *A3(80h),A8,1
047f0: e102                      ADDXY  A8,A2
04800: 0b03 00a0                 ADDI   A0h,A3
04820: 09f7 0000 0001            MOVI   10000h,B7
04850: 4cc8                      MOVE   A6,A8
04860: 6b08                      LMO    A8,A8
04870: 17e8                      SUBK   1Fh,A8
04880: 03a8                      NEG    A8
04890: 6300                      SLL    A8,A0
048a0: 4c47                      MOVE   A2,A7
048b0: 4c05                      MOVE   A0,A5
048c0: 0543                      SETF   3h,0,0
048d0: 9468                      MOVE   *A3+,A8,0
048e0: 182a                      MOVK   1h,A10
048f0: 630a                      SLL    A8,A10
04900: 0545                      SETF   5h,0,0
04910: 9468                      MOVE   *A3+,A8,0
04920: 0ba8 0020 0000            ORI    20h,A8
04950: d508                      EXGF   A8,0
04960: 4d48                      MOVE   A10,A8
04970: d708                      EXGF   A8,1
04980: 9469                      MOVE   *A3+,A9,0
04990: ce24                      JRN    4BE0h
049a0: 058a 0150 c000            MOVE   A10,@C0000150h,0
049d0: 4ee2                      MOVE   A7,B2
049e0: 4f2a                      MOVE   A9,B10
049f0: ed57                      MOVX   B10,B7
04a00: 4d48                      MOVE   A10,A8
04a10: 6b08                      LMO    A8,A8
04a20: 17e8                      SUBK   1Fh,A8
04a30: 03a8                      NEG    A8
04a40: 6309                      SLL    A8,A9
04a50: 9668                      MOVE   *A3+,A8,1
04a60: 4f09                      MOVE   A8,B9
04a70: 183c                      MOVK   1h,B12
04a80: e99c                      CVXYL  B12,B12
04a90: 449c                      SUB    B4,B12
04aa0: d51c                      EXGF   B12,0
04ab0: 0539                      ZEXT   B9,0
04ac0: d51c                      EXGF   B12,0
04ad0: 6b9d                      LMO    B12,B13
04ae0: 175d                      SUBK   1Ah,B13
04af0: ca05                      JREQ   4B50h
04b00: 4d3e                      MOVE   B9,B14
04b10: 6399                      SLL    B12,B9
04b20: 55d9                      OR     B14,B9
04b30: 243c                      SLL    1h,B12
04b40: 3cbd                      DSJS   B13,4B00h
04b50: 0fe0                      FILL   XY
04b60: 4f2a                      MOVE   A9,B10
04b70: 4ecb                      MOVE   A6,B11
04b80: 6b7b                      LMO    B11,B11
04b90: 17fb                      SUBK   1Fh,B11
04ba0: 677a                      SRL    B11,B10
04bb0: 4f58                      MOVE   B10,A8
04bc0: e107                      ADDXY  A8,A7
04bd0: c010                      JR     4CE0h
04be0: 4e60                      MOVE   A3,B0
04bf0: 4ee2                      MOVE   A7,B2
04c00: 0586 0150 c000            MOVE   A6,@C0000150h,0
04c30: 03a9                      NEG    A9
04c40: 4f2a                      MOVE   A9,B10
04c50: ed57                      MOVX   B10,B7
04c60: e127                      ADDXY  A9,A7
04c70: 4cc8                      MOVE   A6,A8
04c80: 6b08                      LMO    A8,A8
04c90: 17e8                      SUBK   1Fh,A8
04ca0: 03a8                      NEG    A8
04cb0: 6309                      SLL    A8,A9
04cc0: 4123                      ADD    A9,A3
04cd0: 0f20                      PIXBLT L,XY
04ce0: 4525                      SUB    A9,A5
04cf0: c7c8                      JRGT   4980h
04d00: 09e8 0000 0001            MOVI   10000h,A8
04d30: e102                      ADDXY  A8,A2
04d40: 0d81 ffb4                 DSJ    A1,48A0h
04d60: 0740                      SETF   20h,0,1
04d70: 09bf 2200                 MMFM   SP,B9,B13
04d90: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
04db0: 0962                      RETS   2h

_dm_draw_line:
04dc0: 098f c000                 MMTM   SP,A0,A1
04de0: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
04e00: a7c8                      MOVE   -*A14,A8,1
04e10: 9700                      MOVE   *A8+,A0,1
04e20: 8701                      MOVE   *A8,A1,1
04e30: c00c                      JR     4F00h

_draw_line:
04e40: 098f c000                 MMTM   SP,A0,A1
04e60: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
04e80: a7c0                      MOVE   -*A14,A0,1
04e90: a7c1                      MOVE   -*A14,A1,1
04ea0: 2601                      SLL    10h,A1
04eb0: ee20                      MOVY   A1,A0
04ec0: a7c1                      MOVE   -*A14,A1,1
04ed0: a7c8                      MOVE   -*A14,A8,1
04ee0: 2608                      SLL    10h,A8
04ef0: ef01                      MOVY   A8,A1
04f00: 07a8 0060 0000            MOVE   @60h,A8,1
04f30: cb2a                      JRNE   51E0h
04f40: 07a8 0000 0000            MOVE   @0h,A8,1
04f70: e100                      ADDXY  A8,A0
04f80: e101                      ADDXY  A8,A1
04f90: 4e02                      MOVE   A0,B2
04fa0: 4e27                      MOVE   A1,B7
04fb0: 09dd ffff                 MOVI   FFFFh,B13
04fd0: 0c57                      LINIT  
04fe0: c81f                      JRC    51E0h
04ff0: c10f                      JRP    50F0h
05000: e401                      CMPXY  A0,A1
05010: cc05                      JRV    5070h
05020: c804                      JRC    5070h
05030: 4e02                      MOVE   A0,B2
05040: e201                      SUBXY  A0,A1
05050: 4e27                      MOVE   A1,B7
05060: c003                      JR     50A0h
05070: 4e22                      MOVE   A1,B2
05080: e220                      SUBXY  A1,A0
05090: 4e07                      MOVE   A0,B7
050a0: 0b37 0001 0001            ADDI   10001h,B7
050d0: 0fe0                      FILL   XY
050e0: c00f                      JR     51E0h
050f0: cc07                      JRV    5170h
05100: 0a92                      CVDXYL B2
05110: 4d7b                      MOVE   B11,B11
05120: c402                      JRLT   5150h
05130: de1a                      FLINE   0
05140: c009                      JR     51E0h
05150: de9a                      FLINE   1
05160: c007                      JR     51E0h
05170: 09dd ffff                 MOVI   FFFFh,B13
05190: 4d7b                      MOVE   B11,B11
051a0: c402                      JRLT   51D0h
051b0: df1a                      LINE   0
051c0: c001                      JR     51E0h
051d0: df9a                      LINE   1
051e0: 09bf 7c85                 MMFM   SP,B0,B2,B7,B10-B14
05200: 09af 0003                 MMFM   SP,A0,A1
05220: 0962                      RETS   2h

_dm_draw_oval:
05230: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
05250: 099f e1be                 MMTM   SP,B0-B2,B7,B8,B10-B14
05270: a7c8                      MOVE   -*A14,A8,1
05280: 0550                      SETF   10h,0,0
05290: 9500                      MOVE   *A8+,A0,0
052a0: 9501                      MOVE   *A8+,A1,0
052b0: 8702                      MOVE   *A8,A2,1
052c0: c00a                      JR     5370h

_draw_oval:
052d0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
052f0: 099f e1be                 MMTM   SP,B0-B2,B7,B8,B10-B14
05310: a7c0                      MOVE   -*A14,A0,1
05320: a7c1                      MOVE   -*A14,A1,1
05330: a7c2                      MOVE   -*A14,A2,1
05340: a7c3                      MOVE   -*A14,A3,1
05350: 2603                      SLL    10h,A3
05360: ee62                      MOVY   A3,A2
05370: 07a8 0060 0000            MOVE   @60h,A8,1
053a0: cb00 00aa                 JRNE   5E60h
053c0: 07a3 0000 0000            MOVE   @0h,A3,1
053f0: e062                      ADDXY  A3,A2
05400: 1828                      MOVK   1h,A8
05410: 1826                      MOVK   1h,A6
05420: 2606                      SLL    10h,A6
05430: 4801                      CMP    A0,A1
05440: cf06                      JRNN   54B0h
05450: 3202                      RL     10h,A2
05460: 4c03                      MOVE   A0,A3
05470: 4c20                      MOVE   A1,A0
05480: 4c61                      MOVE   A3,A1
05490: 3208                      RL     10h,A8
054a0: 3206                      RL     10h,A6
054b0: 4c04                      MOVE   A0,A4
054c0: 2fe4                      SRL    1h,A4
054d0: 4c25                      MOVE   A1,A5
054e0: 2605                      SLL    10h,A5
054f0: 4c03                      MOVE   A0,A3
05500: e283                      SUBXY  A4,A3
05510: e043                      ADDXY  A2,A3
05520: e044                      ADDXY  A2,A4
05530: e045                      ADDXY  A2,A5
05540: ec85                      MOVX   A4,A5
05550: ec62                      MOVX   A3,A2
05560: eea2                      MOVY   A5,A2
05570: 1fe8                      BTST   0h,A8
05580: cb04                      JRNE   55D0h
05590: 3202                      RL     10h,A2
055a0: 3203                      RL     10h,A3
055b0: 3204                      RL     10h,A4
055c0: 3205                      RL     10h,A5
055d0: 4cc7                      MOVE   A6,A7
055e0: e107                      ADDXY  A8,A7
055f0: 4d09                      MOVE   A8,A9
05600: e2c9                      SUBXY  A6,A9
05610: 574a                      CLR    A10
05620: e2ca                      SUBXY  A6,A10
05630: 4d4b                      MOVE   A10,A11
05640: e30b                      SUBXY  A8,A11
05650: 578c                      CLR    A12
05660: e30c                      SUBXY  A8,A12
05670: 4d8d                      MOVE   A12,A13
05680: e0cd                      ADDXY  A6,A13
05690: 4e00                      MOVE   A0,B0
056a0: 4e22                      MOVE   A1,B2
056b0: 0770                      SETF   10h,1,1
056c0: 4c11                      MOVE   B0,B1
056d0: 5e31                      MPYU   B1,B1
056e0: 4c38                      MOVE   B1,B8
056f0: 2478                      SLL    3h,B8
05700: 4c57                      MOVE   B2,B7
05710: 5ef7                      MPYU   B7,B7
05720: 4cfe                      MOVE   B7,B14
05730: 247e                      SLL    3h,B14
05740: 0740                      SETF   20h,0,1
05750: 4c5a                      MOVE   B2,B10
05760: 245a                      SLL    2h,B10
05770: 5e3a                      MPYU   B1,B10
05780: 4c1c                      MOVE   B0,B12
05790: 249c                      SLL    4h,B12
057a0: 5efc                      MPYU   B7,B12
057b0: 6b9c                      LMO    B12,B12
057c0: ca07                      JREQ   5840h
057d0: 639a                      SLL    B12,B10
057e0: 679b                      SRL    B12,B11
057f0: 555b                      OR     B10,B11
05800: 6791                      SRL    B12,B1
05810: 6798                      SRL    B12,B8
05820: 6797                      SRL    B12,B7
05830: 679e                      SRL    B12,B14
05840: 4d1c                      MOVE   B8,B12
05850: 2ffc                      SRL    1h,B12
05860: 4ddd                      MOVE   B14,B13
05870: 2ffd                      SRL    1h,B13
05880: 4d92                      MOVE   B12,B2
05890: 4572                      SUB    B11,B2
058a0: 4d9a                      MOVE   B12,B10
058b0: 41ba                      ADD    B13,B10
058c0: 457a                      SUB    B11,B10
058d0: 4d90                      MOVE   B12,B0
058e0: 4430                      SUB    B1,B0
058f0: 45b0                      SUB    B13,B0
05900: 44f0                      SUB    B7,B0
05910: 2ffb                      SRL    1h,B11
05920: 4570                      SUB    B11,B0
05930: 4db1                      MOVE   B13,B1
05940: 1fe0                      BTST   0h,A0
05950: cb22                      JRNE   5B80h
05960: 40f0                      ADD    B7,B0
05970: 40f0                      ADD    B7,B0
05980: 5631                      CLR    B1
05990: 45ba                      SUB    B13,B10
059a0: 40fa                      ADD    B7,B10
059b0: c40a                      JRLT   5A60h
059c0: f742                      DRAV   A10,A2
059d0: f6c4                      DRAV   A6,A4
059e0: e145                      ADDXY  A10,A5
059f0: e0c3                      ADDXY  A6,A3
05a00: 1441                      SUBK   2h,A1
05a10: c63e                      JRLE   5E00h
05a20: 4190                      ADD    B12,B0
05a30: 4112                      ADD    B8,B2
05a40: 405a                      ADD    B2,B10
05a50: c7f6                      JRGT   59C0h
05a60: f702                      DRAV   A8,A2
05a70: e103                      ADDXY  A8,A3
05a80: f784                      DRAV   A12,A4
05a90: e185                      ADDXY  A12,A5
05aa0: 481a                      CMP    B0,B10
05ab0: c409                      JRLT   5B50h
05ac0: e142                      ADDXY  A10,A2
05ad0: e0c3                      ADDXY  A6,A3
05ae0: e0c4                      ADDXY  A6,A4
05af0: e145                      ADDXY  A10,A5
05b00: 1441                      SUBK   2h,A1
05b10: c631                      JRLE   5E30h
05b20: 4190                      ADD    B12,B0
05b30: 4112                      ADD    B8,B2
05b40: 405a                      ADD    B2,B10
05b50: 45b0                      SUB    B13,B0
05b60: 41d1                      ADD    B14,B1
05b70: 403a                      ADD    B1,B10
05b80: 481a                      CMP    B0,B10
05b90: c509                      JRGE   5C30h
05ba0: f702                      DRAV   A8,A2
05bb0: f703                      DRAV   A8,A3
05bc0: f784                      DRAV   A12,A4
05bd0: f785                      DRAV   A12,A5
05be0: 45b0                      SUB    B13,B0
05bf0: 41d1                      ADD    B14,B1
05c00: 403a                      ADD    B1,B10
05c10: 481a                      CMP    B0,B10
05c20: c4f7                      JRLT   5BA0h
05c30: 4d5a                      MOVE   B10,B10
05c40: c510                      JRGE   5D50h
05c50: f722                      DRAV   A9,A2
05c60: f6e3                      DRAV   A7,A3
05c70: f7a4                      DRAV   A13,A4
05c80: f765                      DRAV   A11,A5
05c90: 1441                      SUBK   2h,A1
05ca0: c618                      JRLE   5E30h
05cb0: 4190                      ADD    B12,B0
05cc0: 45b0                      SUB    B13,B0
05cd0: 41d1                      ADD    B14,B1
05ce0: 4112                      ADD    B8,B2
05cf0: 403a                      ADD    B1,B10
05d00: 405a                      ADD    B2,B10
05d10: 481a                      CMP    B0,B10
05d20: c4e7                      JRLT   5BA0h
05d30: 4d5a                      MOVE   B10,B10
05d40: c4f0                      JRLT   5C50h
05d50: f742                      DRAV   A10,A2
05d60: f6c3                      DRAV   A6,A3
05d70: f6c4                      DRAV   A6,A4
05d80: f745                      DRAV   A10,A5
05d90: 1441                      SUBK   2h,A1
05da0: c608                      JRLE   5E30h
05db0: 4190                      ADD    B12,B0
05dc0: 4112                      ADD    B8,B2
05dd0: 405a                      ADD    B2,B10
05de0: c4e6                      JRLT   5C50h
05df0: c0f5                      JR     5D50h
05e00: cb05                      JRNE   5E60h
05e10: f742                      DRAV   A10,A2
05e20: c003                      JR     5E60h
05e30: cb02                      JRNE   5E60h
05e40: f742                      DRAV   A10,A2
05e50: f6c4                      DRAV   A6,A4
05e60: 09bf 7d87                 MMFM   SP,B0-B2,B7,B8,B10-B14
05e80: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
05ea0: 0962                      RETS   2h

_draw_ovalarc:
05eb0: a3af                      MOVE   A13,-*SP,1
05ec0: 4dcd                      MOVE   A14,A13
05ed0: 4508                      SUB    A8,A8
05ee0: 0788 6d00 0002            MOVE   A8,@26D00h,1
05f10: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
05f30: 0788 6d80 0002            MOVE   A8,@26D80h,1
05f60: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
05f80: 0788 6d40 0002            MOVE   A8,@26D40h,1
05fb0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
05fd0: 0788 6ce0 0002            MOVE   A8,@26CE0h,1
06000: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
06020: 0788 6d20 0002            MOVE   A8,@26D20h,1
06050: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
06070: 0788 6cc0 0002            MOVE   A8,@26CC0h,1
060a0: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
060c0: 0788 6be0 0002            MOVE   A8,@26BE0h,1
060f0: 0d5f 6950 0000            CALLA  6950h
06120: b7ee 0040                 MOVE   *SP(40h),A14,1
06140: 97ed                      MOVE   *SP+,A13,1
06150: 0962                      RETS   2h

_dm_draw_ovalarc:
06160: 098f 000c                 MMTM   SP,A12,A13
06180: 4dcd                      MOVE   A14,A13
06190: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
061b0: 4508                      SUB    A8,A8
061c0: 0788 6d00 0002            MOVE   A8,@26D00h,1
061f0: 0570                      SETF   10h,1,0
06200: 9588                      MOVE   *A12+,A8,0
06210: 0788 6d80 0002            MOVE   A8,@26D80h,1
06240: 9588                      MOVE   *A12+,A8,0
06250: 0788 6d40 0002            MOVE   A8,@26D40h,1
06280: 9588                      MOVE   *A12+,A8,0
06290: 0788 6ce0 0002            MOVE   A8,@26CE0h,1
062c0: 9588                      MOVE   *A12+,A8,0
062d0: 0788 6d20 0002            MOVE   A8,@26D20h,1
06300: 9588                      MOVE   *A12+,A8,0
06310: 0788 6cc0 0002            MOVE   A8,@26CC0h,1
06340: 858c                      MOVE   *A12,A12,0
06350: 078c 6be0 0002            MOVE   A12,@26BE0h,1
06380: 0d5f 6950 0000            CALLA  6950h
063b0: b7ee 0060                 MOVE   *SP(60h),A14,1
063d0: 09af 3000                 MMFM   SP,A12,A13
063f0: 0962                      RETS   2h

_draw_piearc:
06400: a3af                      MOVE   A13,-*SP,1
06410: 4dcd                      MOVE   A14,A13
06420: 1828                      MOVK   1h,A8
06430: 0788 6d00 0002            MOVE   A8,@26D00h,1
06460: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
06480: 0788 6d80 0002            MOVE   A8,@26D80h,1
064b0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
064d0: 0788 6d40 0002            MOVE   A8,@26D40h,1
06500: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
06520: 0788 6ce0 0002            MOVE   A8,@26CE0h,1
06550: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
06570: 0788 6d20 0002            MOVE   A8,@26D20h,1
065a0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
065c0: 0788 6cc0 0002            MOVE   A8,@26CC0h,1
065f0: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
06610: 0788 6be0 0002            MOVE   A8,@26BE0h,1
06640: 0d5f 6950 0000            CALLA  6950h
06670: b7ee 0040                 MOVE   *SP(40h),A14,1
06690: 97ed                      MOVE   *SP+,A13,1
066a0: 0962                      RETS   2h

_dm_draw_piearc:
066b0: 098f 000c                 MMTM   SP,A12,A13
066d0: 4dcd                      MOVE   A14,A13
066e0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
06700: 1828                      MOVK   1h,A8
06710: 0788 6d00 0002            MOVE   A8,@26D00h,1
06740: 0570                      SETF   10h,1,0
06750: 9588                      MOVE   *A12+,A8,0
06760: 0788 6d80 0002            MOVE   A8,@26D80h,1
06790: 9588                      MOVE   *A12+,A8,0
067a0: 0788 6d40 0002            MOVE   A8,@26D40h,1
067d0: 9588                      MOVE   *A12+,A8,0
067e0: 0788 6ce0 0002            MOVE   A8,@26CE0h,1
06810: 9588                      MOVE   *A12+,A8,0
06820: 0788 6d20 0002            MOVE   A8,@26D20h,1
06850: 9588                      MOVE   *A12+,A8,0
06860: 0788 6cc0 0002            MOVE   A8,@26CC0h,1
06890: 858c                      MOVE   *A12,A12,0
068a0: 078c 6be0 0002            MOVE   A12,@26BE0h,1
068d0: 0d5f 6950 0000            CALLA  6950h
06900: b7ee 0060                 MOVE   *SP(60h),A14,1
06920: 09af 3000                 MMFM   SP,A12,A13
06940: 0962                      RETS   2h

_draw_eliparc:
06950: 098f 022c                 MMTM   SP,A6,A10,A12,A13
06970: 4dcd                      MOVE   A14,A13
06980: 0b0e 00c0                 ADDI   C0h,A14
069a0: 07a8 0060 0000            MOVE   @60h,A8,1
069d0: cb00 0234                 JRNE   8D30h
069f0: 07a8 6be0 0002            MOVE   @26BE0h,A8,1
06a20: 0b48 fe98                 CMPI   167h,A8
06a40: c700 021d                 JRGT   8C30h
06a60: 0b48 0166                 CMPI   FE99h,A8
06a80: c400 0219                 JRLT   8C30h
06aa0: 09e8 6c00 0002            MOVI   26C00h,A8
06ad0: 0788 6d60 0002            MOVE   A8,@26D60h,1
06b00: 07ac 6d80 0002            MOVE   @26D80h,A12,1
06b30: 0570                      SETF   10h,1,0
06b40: 8188                      MOVE   A12,*A8,0
06b50: 07ac 6d40 0002            MOVE   @26D40h,A12,1
06b80: b188 0010                 MOVE   A12,*A8(10h),0
06ba0: 07ac 6be0 0002            MOVE   @26BE0h,A12,1
06bd0: c534                      JRGE   6F20h
06be0: a3cf                      MOVE   A14,-*SP,1
06bf0: 4dac                      MOVE   A13,A12
06c00: 0b0c 00a0                 ADDI   A0h,A12
06c20: 938e                      MOVE   A12,*A14+,1
06c30: 4dac                      MOVE   A13,A12
06c40: 0b0c 0040                 ADDI   40h,A12
06c60: 938e                      MOVE   A12,*A14+,1
06c70: 4dac                      MOVE   A13,A12
06c80: 0b0c 0060                 ADDI   60h,A12
06ca0: 938e                      MOVE   A12,*A14+,1
06cb0: 07ac 6cc0 0002            MOVE   @26CC0h,A12,1
06ce0: 07a8 6be0 0002            MOVE   @26BE0h,A8,1
06d10: 410c                      ADD    A8,A12
06d20: 938e                      MOVE   A12,*A14+,1
06d30: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
06d60: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
06d90: 0d5f 07e0 0001            CALLA  107E0h
06dc0: a3cf                      MOVE   A14,-*SP,1
06dd0: 4dac                      MOVE   A13,A12
06de0: 0b0c 0080                 ADDI   80h,A12
06e00: 938e                      MOVE   A12,*A14+,1
06e10: 93ae                      MOVE   A13,*A14+,1
06e20: 4da8                      MOVE   A13,A8
06e30: 1008                      ADDK   20h,A8
06e40: 930e                      MOVE   A8,*A14+,1
06e50: d60e 6cc0 0002            MOVE   @26CC0h,*A14+,1
06e80: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
06eb0: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
06ee0: 0d5f 07e0 0001            CALLA  107E0h
06f10: c033                      JR     7250h
06f20: a3cf                      MOVE   A14,-*SP,1
06f30: 4dac                      MOVE   A13,A12
06f40: 0b0c 00a0                 ADDI   A0h,A12
06f60: 938e                      MOVE   A12,*A14+,1
06f70: 4dac                      MOVE   A13,A12
06f80: 0b0c 0040                 ADDI   40h,A12
06fa0: 938e                      MOVE   A12,*A14+,1
06fb0: 4dac                      MOVE   A13,A12
06fc0: 0b0c 0060                 ADDI   60h,A12
06fe0: 938e                      MOVE   A12,*A14+,1
06ff0: d60e 6cc0 0002            MOVE   @26CC0h,*A14+,1
07020: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
07050: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
07080: 0d5f 07e0 0001            CALLA  107E0h
070b0: a3cf                      MOVE   A14,-*SP,1
070c0: 4da8                      MOVE   A13,A8
070d0: 0b08 0080                 ADDI   80h,A8
070f0: 930e                      MOVE   A8,*A14+,1
07100: 93ae                      MOVE   A13,*A14+,1
07110: 4da8                      MOVE   A13,A8
07120: 1008                      ADDK   20h,A8
07130: 930e                      MOVE   A8,*A14+,1
07140: 07a8 6cc0 0002            MOVE   @26CC0h,A8,1
07170: 07ac 6be0 0002            MOVE   @26BE0h,A12,1
071a0: 4188                      ADD    A12,A8
071b0: 930e                      MOVE   A8,*A14+,1
071c0: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
071f0: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
07220: 0d5f 07e0 0001            CALLA  107E0h
07250: 07ac 6d80 0002            MOVE   @26D80h,A12,1
07280: 2bec                      SRA    1h,A12
07290: 078c 6da0 0002            MOVE   A12,@26DA0h,1
072c0: 07a8 6d40 0002            MOVE   @26D40h,A8,1
072f0: 2be8                      SRA    1h,A8
07300: 0788 6dc0 0002            MOVE   A8,@26DC0h,1
07330: 07a8 6d00 0002            MOVE   @26D00h,A8,1
07360: ca43                      JREQ   77A0h
07370: a3cf                      MOVE   A14,-*SP,1
07380: b7a8 0040                 MOVE   *A13(40h),A8,1
073a0: 07ac 6d20 0002            MOVE   @26D20h,A12,1
073d0: 4188                      ADD    A12,A8
073e0: 930e                      MOVE   A8,*A14+,1
073f0: b7a8 0060                 MOVE   *A13(60h),A8,1
07410: 07ac 6ce0 0002            MOVE   @26CE0h,A12,1
07440: 4188                      ADD    A12,A8
07450: 930e                      MOVE   A8,*A14+,1
07460: 07a8 6dc0 0002            MOVE   @26DC0h,A8,1
07490: 07ac 6d20 0002            MOVE   @26D20h,A12,1
074c0: 4188                      ADD    A12,A8
074d0: 930e                      MOVE   A8,*A14+,1
074e0: 07a8 6da0 0002            MOVE   @26DA0h,A8,1
07510: 07ac 6ce0 0002            MOVE   @26CE0h,A12,1
07540: 4188                      ADD    A12,A8
07550: 930e                      MOVE   A8,*A14+,1
07560: 0d5f 4e40 0000            CALLA  4E40h
07590: a3cf                      MOVE   A14,-*SP,1
075a0: 87ac                      MOVE   *A13,A12,1
075b0: 07a8 6d20 0002            MOVE   @26D20h,A8,1
075e0: 410c                      ADD    A8,A12
075f0: 938e                      MOVE   A12,*A14+,1
07600: b7ac 0020                 MOVE   *A13(20h),A12,1
07620: 07a8 6ce0 0002            MOVE   @26CE0h,A8,1
07650: 410c                      ADD    A8,A12
07660: 938e                      MOVE   A12,*A14+,1
07670: 07ac 6dc0 0002            MOVE   @26DC0h,A12,1
076a0: 07a8 6d20 0002            MOVE   @26D20h,A8,1
076d0: 410c                      ADD    A8,A12
076e0: 938e                      MOVE   A12,*A14+,1
076f0: 07ac 6da0 0002            MOVE   @26DA0h,A12,1
07720: 07a8 6ce0 0002            MOVE   @26CE0h,A8,1
07750: 410c                      ADD    A8,A12
07760: 938e                      MOVE   A12,*A14+,1
07770: 0d5f 4e40 0000            CALLA  4E40h
077a0: b7ac 00a0                 MOVE   *A13(A0h),A12,1
077c0: b7a8 0080                 MOVE   *A13(80h),A8,1
077e0: 490c                      CMP    A8,A12
077f0: cb29                      JRNE   7A90h
07800: 07a8 6be0 0002            MOVE   @26BE0h,A8,1
07830: 0b48 ff4b                 CMPI   B4h,A8
07850: c523                      JRGE   7A90h
07860: 0b48 00b3                 CMPI   FF4Ch,A8
07880: c620                      JRLE   7A90h
07890: 1fec                      BTST   0h,A12
078a0: cb0f                      JRNE   79A0h
078b0: a3cf                      MOVE   A14,-*SP,1
078c0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
078e0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
07900: d3ae 0000                 MOVE   *A13(0h),*A14+,1
07920: d3ae 0020                 MOVE   *A13(20h),*A14+,1
07940: 938e                      MOVE   A12,*A14+,1
07950: 0d5f 8d80 0000            CALLA  8D80h
07980: c000 0139                 JR     8D30h
079a0: a3cf                      MOVE   A14,-*SP,1
079b0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
079d0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
079f0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
07a10: d3ae 0060                 MOVE   *A13(60h),*A14+,1
07a30: 938e                      MOVE   A12,*A14+,1
07a40: 0d5f 8d80 0000            CALLA  8D80h
07a70: c000 012a                 JR     8D30h
07a90: 4d8c                      MOVE   A12,A12
07aa0: ca3c                      JREQ   7E70h
07ab0: 142c                      DEC    A12
07ac0: ca25                      JREQ   7D20h
07ad0: 142c                      DEC    A12
07ae0: ca13                      JREQ   7C20h
07af0: 0d8c 004b                 DSJ    A12,7FC0h
07b10: a3cf                      MOVE   A14,-*SP,1
07b20: d60e 6dc0 0002            MOVE   @26DC0h,*A14+,1
07b50: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
07b80: d3ae 0040                 MOVE   *A13(40h),*A14+,1
07ba0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
07bc0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
07be0: 0d5f 8d80 0000            CALLA  8D80h
07c10: c03a                      JR     7FC0h
07c20: a3cf                      MOVE   A14,-*SP,1
07c30: d3ae 0040                 MOVE   *A13(40h),*A14+,1
07c50: d3ae 0060                 MOVE   *A13(60h),*A14+,1
07c70: 458c                      SUB    A12,A12
07c80: 938e                      MOVE   A12,*A14+,1
07c90: d60e 6da0 0002            MOVE   @26DA0h,*A14+,1
07cc0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
07ce0: 0d5f 8d80 0000            CALLA  8D80h
07d10: c02a                      JR     7FC0h
07d20: a3cf                      MOVE   A14,-*SP,1
07d30: 07ac 6d40 0002            MOVE   @26D40h,A12,1
07d60: 07a8 6dc0 0002            MOVE   @26DC0h,A8,1
07d90: 450c                      SUB    A8,A12
07da0: 938e                      MOVE   A12,*A14+,1
07db0: 458c                      SUB    A12,A12
07dc0: 938e                      MOVE   A12,*A14+,1
07dd0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
07df0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
07e10: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
07e30: 0d5f 8d80 0000            CALLA  8D80h
07e60: c015                      JR     7FC0h
07e70: a3cf                      MOVE   A14,-*SP,1
07e80: d3ae 0040                 MOVE   *A13(40h),*A14+,1
07ea0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
07ec0: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
07ef0: 07a8 6d80 0002            MOVE   @26D80h,A8,1
07f20: 07ac 6da0 0002            MOVE   @26DA0h,A12,1
07f50: 4588                      SUB    A12,A8
07f60: 930e                      MOVE   A8,*A14+,1
07f70: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
07f90: 0d5f 8d80 0000            CALLA  8D80h
07fc0: b7ac 0080                 MOVE   *A13(80h),A12,1
07fe0: ca3c                      JREQ   83B0h
07ff0: 142c                      DEC    A12
08000: ca29                      JREQ   82A0h
08010: 142c                      DEC    A12
08020: ca17                      JREQ   81A0h
08030: 0d8c 004b                 DSJ    A12,8500h
08050: a3cf                      MOVE   A14,-*SP,1
08060: d3ae 0000                 MOVE   *A13(0h),*A14+,1
08080: d3ae 0020                 MOVE   *A13(20h),*A14+,1
080a0: 458c                      SUB    A12,A12
080b0: 938e                      MOVE   A12,*A14+,1
080c0: 07a8 6d80 0002            MOVE   @26D80h,A8,1
080f0: 07ac 6da0 0002            MOVE   @26DA0h,A12,1
08120: 4588                      SUB    A12,A8
08130: 930e                      MOVE   A8,*A14+,1
08140: d3ae 0080                 MOVE   *A13(80h),*A14+,1
08160: 0d5f 8d80 0000            CALLA  8D80h
08190: c036                      JR     8500h
081a0: a3cf                      MOVE   A14,-*SP,1
081b0: d60e 6dc0 0002            MOVE   @26DC0h,*A14+,1
081e0: 458c                      SUB    A12,A12
081f0: 938e                      MOVE   A12,*A14+,1
08200: d3ae 0000                 MOVE   *A13(0h),*A14+,1
08220: d3ae 0020                 MOVE   *A13(20h),*A14+,1
08240: d3ae 0080                 MOVE   *A13(80h),*A14+,1
08260: 0d5f 8d80 0000            CALLA  8D80h
08290: c026                      JR     8500h
082a0: a3cf                      MOVE   A14,-*SP,1
082b0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
082d0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
082f0: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
08320: d60e 6da0 0002            MOVE   @26DA0h,*A14+,1
08350: d3ae 0080                 MOVE   *A13(80h),*A14+,1
08370: 0d5f 8d80 0000            CALLA  8D80h
083a0: c015                      JR     8500h
083b0: a3cf                      MOVE   A14,-*SP,1
083c0: 07a8 6d40 0002            MOVE   @26D40h,A8,1
083f0: 07ac 6dc0 0002            MOVE   @26DC0h,A12,1
08420: 4588                      SUB    A12,A8
08430: 930e                      MOVE   A8,*A14+,1
08440: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
08470: d3ae 0000                 MOVE   *A13(0h),*A14+,1
08490: d3ae 0020                 MOVE   *A13(20h),*A14+,1
084b0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
084d0: 0d5f 8d80 0000            CALLA  8D80h
08500: b7ac 0080                 MOVE   *A13(80h),A12,1
08520: b7a8 00a0                 MOVE   *A13(A0h),A8,1
08540: 490c                      CMP    A8,A12
08550: c703                      JRGT   8590h
08560: 108c                      ADDK   4h,A12
08570: b38d 0080                 MOVE   A12,*A13(80h),1
08590: 4d0a                      MOVE   A8,A10
085a0: 102a                      INC    A10
085b0: 498a                      CMP    A12,A10
085c0: c576                      JRGE   8D30h
085d0: 186c                      MOVK   3h,A12
085e0: 514c                      AND    A10,A12
085f0: 4d88                      MOVE   A12,A8
08600: ca41                      JREQ   8A20h
08610: 1428                      DEC    A8
08620: ca29                      JREQ   88C0h
08630: 1428                      DEC    A8
08640: ca18                      JREQ   87D0h
08650: 0d88 0056                 DSJ    A8,8BD0h
08670: a3cf                      MOVE   A14,-*SP,1
08680: d60e 6dc0 0002            MOVE   @26DC0h,*A14+,1
086b0: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
086e0: 4508                      SUB    A8,A8
086f0: 930e                      MOVE   A8,*A14+,1
08700: 07a8 6d80 0002            MOVE   @26D80h,A8,1
08730: 07a6 6da0 0002            MOVE   @26DA0h,A6,1
08760: 44c8                      SUB    A6,A8
08770: 930e                      MOVE   A8,*A14+,1
08780: 938e                      MOVE   A12,*A14+,1
08790: 0d5f 8d80 0000            CALLA  8D80h
087c0: c040                      JR     8BD0h
087d0: a3cf                      MOVE   A14,-*SP,1
087e0: d60e 6dc0 0002            MOVE   @26DC0h,*A14+,1
08810: 44c6                      SUB    A6,A6
08820: 92ce                      MOVE   A6,*A14+,1
08830: 92ce                      MOVE   A6,*A14+,1
08840: d60e 6da0 0002            MOVE   @26DA0h,*A14+,1
08870: 938e                      MOVE   A12,*A14+,1
08880: 0d5f 8d80 0000            CALLA  8D80h
088b0: c031                      JR     8BD0h
088c0: a3cf                      MOVE   A14,-*SP,1
088d0: 07a6 6d40 0002            MOVE   @26D40h,A6,1
08900: 07a8 6dc0 0002            MOVE   @26DC0h,A8,1
08930: 4506                      SUB    A8,A6
08940: 92ce                      MOVE   A6,*A14+,1
08950: 44c6                      SUB    A6,A6
08960: 92ce                      MOVE   A6,*A14+,1
08970: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
089a0: d60e 6da0 0002            MOVE   @26DA0h,*A14+,1
089d0: 938e                      MOVE   A12,*A14+,1
089e0: 0d5f 8d80 0000            CALLA  8D80h
08a10: c01b                      JR     8BD0h
08a20: a3cf                      MOVE   A14,-*SP,1
08a30: 07a6 6d40 0002            MOVE   @26D40h,A6,1
08a60: 07a8 6dc0 0002            MOVE   @26DC0h,A8,1
08a90: 4506                      SUB    A8,A6
08aa0: 92ce                      MOVE   A6,*A14+,1
08ab0: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
08ae0: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
08b10: 07a6 6d80 0002            MOVE   @26D80h,A6,1
08b40: 07a8 6da0 0002            MOVE   @26DA0h,A8,1
08b70: 4506                      SUB    A8,A6
08b80: 92ce                      MOVE   A6,*A14+,1
08b90: 938e                      MOVE   A12,*A14+,1
08ba0: 0d5f 8d80 0000            CALLA  8D80h
08bd0: 102a                      INC    A10
08be0: b7ac 0080                 MOVE   *A13(80h),A12,1
08c00: 498a                      CMP    A12,A10
08c10: c49b                      JRLT   85D0h
08c20: c010                      JR     8D30h
08c30: a3cf                      MOVE   A14,-*SP,1
08c40: d60e 6d20 0002            MOVE   @26D20h,*A14+,1
08c70: d60e 6ce0 0002            MOVE   @26CE0h,*A14+,1
08ca0: d60e 6d40 0002            MOVE   @26D40h,*A14+,1
08cd0: d60e 6d80 0002            MOVE   @26D80h,*A14+,1
08d00: 0d5f 52d0 0000            CALLA  52D0h
08d30: 0bee ff3f                 SUBI   C0h,A14
08d50: 09af 3440                 MMFM   SP,A6,A10,A12,A13
08d70: 0960                      RETS   

_arc_quadrant:
08d80: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
08da0: 4dcd                      MOVE   A14,A13
08db0: b7a6 ffa0                 MOVE   *A13(FFA0h),A6,1
08dd0: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
08df0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
08e10: ca13                      JREQ   8F50h
08e20: 346a                      CMPK   3h,A10
08e30: ca11                      JREQ   8F50h
08e40: 07a8 6d60 0002            MOVE   @26D60h,A8,1
08e70: 09c4 ffff                 MOVI   FFFFh,A4
08e90: 0570                      SETF   10h,1,0
08ea0: b088 0080                 MOVE   A4,*A8(80h),0
08ec0: 07a4 6d80 0002            MOVE   @26D80h,A4,1
08ef0: 4584                      SUB    A12,A4
08f00: b088 0020                 MOVE   A4,*A8(20h),0
08f20: 144a                      SUBK   2h,A10
08f30: c50c                      JRGE   9000h
08f40: c018                      JR     90D0h
08f50: 07a4 6d60 0002            MOVE   @26D60h,A4,1
08f80: 1828                      MOVK   1h,A8
08f90: 0570                      SETF   10h,1,0
08fa0: b104 0080                 MOVE   A8,*A4(80h),0
08fc0: b184 0020                 MOVE   A12,*A4(20h),0
08fe0: 144a                      SUBK   2h,A10
08ff0: c40d                      JRLT   90D0h
09000: 07aa 6d60 0002            MOVE   @26D60h,A10,1
09030: 1824                      MOVK   1h,A4
09040: b08a 0090                 MOVE   A4,*A10(90h),0
09060: 07a8 6d40 0002            MOVE   @26D40h,A8,1
09090: 44c8                      SUB    A6,A8
090a0: b10a 0030                 MOVE   A8,*A10(30h),0
090c0: c009                      JR     9160h
090d0: 07aa 6d60 0002            MOVE   @26D60h,A10,1
09100: 09c4 ffff                 MOVI   FFFFh,A4
09120: b08a 0090                 MOVE   A4,*A10(90h),0
09140: b0ca 0030                 MOVE   A6,*A10(30h),0
09160: b7a4 ff80                 MOVE   *A13(FF80h),A4,1
09180: 4d88                      MOVE   A12,A8
09190: 4488                      SUB    A4,A8
091a0: b10a 0040                 MOVE   A8,*A10(40h),0
091c0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
091e0: 4cc4                      MOVE   A6,A4
091f0: 4504                      SUB    A8,A4
09200: b08a 0050                 MOVE   A4,*A10(50h),0
09220: 07a4 6ce0 0002            MOVE   @26CE0h,A4,1
09250: 408c                      ADD    A4,A12
09260: b18a 0060                 MOVE   A12,*A10(60h),0
09280: 07ac 6d20 0002            MOVE   @26D20h,A12,1
092b0: 4186                      ADD    A12,A6
092c0: b0ca 0070                 MOVE   A6,*A10(70h),0
092e0: a3cf                      MOVE   A14,-*SP,1
092f0: 934e                      MOVE   A10,*A14+,1
09300: 0d5f 0000 0000            CALLA  0h
09330: b7ee 00c0                 MOVE   *SP(C0h),A14,1
09350: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
09370: 0962                      RETS   2h

_dm_draw_point:
09380: a20f                      MOVE   A0,-*SP,1
09390: a7c8                      MOVE   -*A14,A8,1
093a0: 8700                      MOVE   *A8,A0,1
093b0: c005                      JR     9410h

_draw_point:
093c0: a20f                      MOVE   A0,-*SP,1
093d0: a7c0                      MOVE   -*A14,A0,1
093e0: a7c8                      MOVE   -*A14,A8,1
093f0: 2608                      SLL    10h,A8
09400: ef00                      MOVY   A8,A0
09410: 07a8 0060 0000            MOVE   @60h,A8,1
09440: cb05                      JRNE   94A0h
09450: 07a8 0000 0000            MOVE   @0h,A8,1
09480: e100                      ADDXY  A8,A0
09490: f700                      DRAV   A8,A0
094a0: 97e0                      MOVE   *SP+,A0,1
094b0: 0962                      RETS   2h

_dm_draw_rect:
094c0: 0550                      SETF   10h,0,0
094d0: 098f e000                 MMTM   SP,A0-A2
094f0: 099f 213e                 MMTM   SP,B2,B7,B10-B14
09510: a7c8                      MOVE   -*A14,A8,1
09520: 0550                      SETF   10h,0,0
09530: 9500                      MOVE   *A8+,A0,0
09540: 9501                      MOVE   *A8+,A1,0
09550: 9702                      MOVE   *A8+,A2,1
09560: c00b                      JR     9620h

_draw_rect:
09570: 0550                      SETF   10h,0,0
09580: 098f e000                 MMTM   SP,A0-A2
095a0: 099f 213e                 MMTM   SP,B2,B7,B10-B14
095c0: a7c0                      MOVE   -*A14,A0,1
095d0: a7c1                      MOVE   -*A14,A1,1
095e0: a7c2                      MOVE   -*A14,A2,1
095f0: a7c8                      MOVE   -*A14,A8,1
09600: 2608                      SLL    10h,A8
09610: ef02                      MOVY   A8,A2
09620: 07a8 0060 0000            MOVE   @60h,A8,1
09650: cb1f                      JRNE   9850h
09660: 07a8 0000 0000            MOVE   @0h,A8,1
09690: e102                      ADDXY  A8,A2
096a0: 09e8 0001 0001            MOVI   10001h,A8
096d0: 0520                      ZEXT   A0,0
096e0: ca1b                      JREQ   98A0h
096f0: 2601                      SLL    10h,A1
09700: ca1a                      JREQ   98B0h
09710: 4e42                      MOVE   A2,B2
09720: e008                      ADDXY  A0,A8
09730: 4f07                      MOVE   A8,B7
09740: 0fe0                      FILL   XY
09750: 4c28                      MOVE   A1,A8
09760: e048                      ADDXY  A2,A8
09770: 4f02                      MOVE   A8,B2
09780: 0fe0                      FILL   XY
09790: 0b21 0001 ffff            ADDI   FFFF0001h,A1
097c0: 4e27                      MOVE   A1,B7
097d0: 0b22 0000 0001            ADDI   10000h,A2
09800: 4e42                      MOVE   A2,B2
09810: 0fe0                      FILL   XY
09820: e002                      ADDXY  A0,A2
09830: 4e42                      MOVE   A2,B2
09840: 0fe0                      FILL   XY
09850: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
09870: 09af 0007                 MMFM   SP,A0-A2
09890: 0962                      RETS   2h
098a0: 2601                      SLL    10h,A1
098b0: ee20                      MOVY   A1,A0
098c0: e100                      ADDXY  A8,A0
098d0: 4e07                      MOVE   A0,B7
098e0: c0f4                      JR     9830h

_encode_rect:
098f0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
09910: 099f 01ba                 MMTM   SP,B7,B8,B10-B12,B14
09930: 0550                      SETF   10h,0,0
09940: a7c0                      MOVE   -*A14,A0,1
09950: a7c1                      MOVE   -*A14,A1,1
09960: a7c2                      MOVE   -*A14,A2,1
09970: a7c8                      MOVE   -*A14,A8,1
09980: 2608                      SLL    10h,A8
09990: ef02                      MOVY   A8,A2
099a0: a7c3                      MOVE   -*A14,A3,1
099b0: a7c4                      MOVE   -*A14,A4,1
099c0: 2464                      SLL    3h,A4
099d0: a7c9                      MOVE   -*A14,A9,1
099e0: 07a8 0060 0000            MOVE   @60h,A8,1
09a10: cb00 008d                 JRNE   A300h
09a30: 07a8 0000 0000            MOVE   @0h,A8,1
09a60: e102                      ADDXY  A8,A2
09a70: 4d29                      MOVE   A9,A9
09a80: cb00 0086                 JRNE   A300h
09aa0: 05a6 0150 c000            MOVE   @C0000150h,A6,0
09ad0: 6ac8                      LMO    A6,A8
09ae0: 03a8                      NEG    A8
09af0: 13e8                      ADDK   1Fh,A8
09b00: 4d0a                      MOVE   A8,A10
09b10: 4d05                      MOVE   A8,A5
09b20: 6a08                      LMO    A0,A8
09b30: 03a8                      NEG    A8
09b40: 0b08 0021                 ADDI   21h,A8
09b60: 4d09                      MOVE   A8,A9
09b70: 2469                      SLL    3h,A9
09b80: 5525                      OR     A9,A5
09b90: 40c8                      ADD    A6,A8
09ba0: 1428                      DEC    A8
09bb0: 4cc9                      MOVE   A6,A9
09bc0: 6b29                      LMO    A9,A9
09bd0: 17e9                      SUBK   1Fh,A9
09be0: 6728                      SRL    A9,A8
09bf0: 1028                      INC    A8
09c00: 4d0b                      MOVE   A8,A11
09c10: 5729                      CLR    A9
09c20: 4e42                      MOVE   A2,B2
09c30: 4e07                      MOVE   A0,B7
09c40: 4e2a                      MOVE   A1,B10
09c50: 261a                      SLL    10h,B10
09c60: ef57                      MOVY   B10,B7
09c70: 4c5a                      MOVE   B2,B10
09c80: e2ba                      SUBXY  B5,B10
09c90: c508                      JRGE   9D20h
09ca0: 053a                      ZEXT   B10,0
09cb0: e157                      ADDXY  B10,B7
09cc0: c463                      JRLT   A300h
09cd0: e352                      SUBXY  B10,B2
09ce0: 051a                      SEXT   B10,0
09cf0: 03ba                      NEG    B10
09d00: 4f59                      MOVE   B10,A9
09d10: 0529                      ZEXT   A9,0
09d20: 4c5a                      MOVE   B2,B10
09d30: e2ba                      SUBXY  B5,B10
09d40: c308                      JRHI   9DD0h
09d50: 2e1a                      SRL    10h,B10
09d60: 261a                      SLL    10h,B10
09d70: e157                      ADDXY  B10,B7
09d80: c257                      JRLS   A300h
09d90: e352                      SUBXY  B10,B2
09da0: 03ba                      NEG    B10
09db0: 4f58                      MOVE   B10,A8
09dc0: ef09                      MOVY   A8,A9
09dd0: 4c5a                      MOVE   B2,B10
09de0: e0fa                      ADDXY  B7,B10
09df0: 4cdb                      MOVE   B6,B11
09e00: 09fc 0001 0001            MOVI   10001h,B12
09e30: e19b                      ADDXY  B12,B11
09e40: e35b                      SUBXY  B10,B11
09e50: c503                      JRGE   9E90h
09e60: 053b                      ZEXT   B11,0
09e70: e177                      ADDXY  B11,B7
09e80: c447                      JRLT   A300h
09e90: 4c5a                      MOVE   B2,B10
09ea0: e0fa                      ADDXY  B7,B10
09eb0: 4cdb                      MOVE   B6,B11
09ec0: e19b                      ADDXY  B12,B11
09ed0: e35b                      SUBXY  B10,B11
09ee0: c304                      JRHI   9F30h
09ef0: 2e1b                      SRL    10h,B11
09f00: 261b                      SLL    10h,B11
09f10: e177                      ADDXY  B11,B7
09f20: c23d                      JRLS   A300h
09f30: 4ef0                      MOVE   B7,A0
09f40: 0520                      ZEXT   A0,0
09f50: 4ef1                      MOVE   B7,A1
09f60: 2e01                      SRL    10h,A1
09f70: 09cd 00a0                 MOVI   A0h,A13
09f90: 4e62                      MOVE   A3,B2
09fa0: 0b12 00a0                 ADDI   A0h,B2
09fc0: 49a4                      CMP    A13,A4
09fd0: ce02                      JRN    A000h
09fe0: b323 0080                 MOVE   A9,*A3(80h),1
0a000: e122                      ADDXY  A9,A2
0a010: a22f                      MOVE   A1,-*SP,1
0a020: 4cc8                      MOVE   A6,A8
0a030: d508                      EXGF   A8,0
0a040: 4ca8                      MOVE   A5,A8
0a050: 2fa8                      SRL    3h,A8
0a060: 0ba8 0020 0000            ORI    20h,A8
0a090: d708                      EXGF   A8,1
0a0a0: e842                      CVXYL  A2,A2
0a0b0: 4e40                      MOVE   A2,B0
0a0c0: 4e07                      MOVE   A0,B7
0a0d0: 0d3f 0029                 CALLR  A380h
0a0f0: 4e78                      MOVE   B3,A8
0a100: 4102                      ADD    A8,A2
0a110: 3ce1                      DSJS   A1,A0B0h
0a120: 0740                      SETF   20h,0,1
0a130: 0550                      SETF   10h,0,0
0a140: 97e1                      MOVE   *SP+,A1,1
0a150: 49a4                      CMP    A13,A4
0a160: ce15                      JRN    A2C0h
0a170: 09e8 8101 0000            MOVI   8101h,A8
0a1a0: b103 0000                 MOVE   A8,*A3(0h),0
0a1c0: 10ed                      ADDK   7h,A13
0a1d0: 2fad                      SRL    3h,A13
0a1e0: b3a3 0010                 MOVE   A13,*A3(10h),1
0a200: 5708                      CLR    A8
0a210: b103 0030                 MOVE   A8,*A3(30h),0
0a230: b003 0040                 MOVE   A0,*A3(40h),0
0a250: b023 0050                 MOVE   A1,*A3(50h),0
0a270: b0c3 0060                 MOVE   A6,*A3(60h),0
0a290: b103 0070                 MOVE   A8,*A3(70h),0
0a2b0: c002                      JR     A2E0h
0a2c0: 10ed                      ADDK   7h,A13
0a2d0: 2fad                      SRL    3h,A13
0a2e0: 4da8                      MOVE   A13,A8
0a2f0: c001                      JR     A310h
0a300: 5708                      CLR    A8
0a310: 09bf 5d80                 MMFM   SP,B7,B8,B10-B12,B14
0a330: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
0a350: b7ee 0020                 MOVE   *SP(20h),A14,1
0a370: 0962                      RETS   2h
0a380: 110d                      ADDK   8h,A13
0a390: 49a4                      CMP    A13,A4
0a3a0: ce05                      JRN    A400h
0a3b0: 1908                      MOVK   8h,A8
0a3c0: d508                      EXGF   A8,0
0a3d0: 4eae                      MOVE   A5,B14
0a3e0: 91d2                      MOVE   B14,*B2+,0
0a3f0: d508                      EXGF   A8,0
0a400: 578c                      CLR    A12
0a410: 4e17                      MOVE   B0,A7
0a420: 4cfb                      MOVE   B7,B11
0a430: 4c1a                      MOVE   B0,B10
0a440: 8558                      MOVE   *B10,B8,0
0a450: 955c                      MOVE   *B10+,B12,0
0a460: 571c                      XOR    B8,B12
0a470: 0dbb fffc                 DSJEQ  B11,A450h
0a490: 4cfc                      MOVE   B7,B12
0a4a0: 457c                      SUB    B11,B12
0a4b0: 4597                      SUB    B12,B7
0a4c0: 4f4e                      MOVE   A10,B14
0a4d0: 4d9a                      MOVE   B12,B10
0a4e0: 63da                      SLL    B14,B10
0a4f0: 4150                      ADD    B10,B0
0a500: 4f6e                      MOVE   A11,B14
0a510: 49dc                      CMP    B14,B12
0a520: c506                      JRGE   A590h
0a530: 4f8e                      MOVE   A12,B14
0a540: 419e                      ADD    B12,B14
0a550: 4fdc                      MOVE   B14,A12
0a560: 579c                      CLR    B12
0a570: 4cf7                      MOVE   B7,B7
0a580: c7e9                      JRGT   A420h
0a590: 4f8e                      MOVE   A12,B14
0a5a0: ca0d                      JREQ   A680h
0a5b0: 4ca8                      MOVE   A5,A8
0a5c0: 2fa8                      SRL    3h,A8
0a5d0: 410d                      ADD    A8,A13
0a5e0: 4d88                      MOVE   A12,A8
0a5f0: 6348                      SLL    A10,A8
0a600: 410d                      ADD    A8,A13
0a610: 49a4                      CMP    A13,A4
0a620: ce05                      JRN    A680h
0a630: 03be                      NEG    B14
0a640: 93d2                      MOVE   B14,*B2+,1
0a650: 4eee                      MOVE   A7,B14
0a660: 99d2                      MOVE   *B14+,*B2+,0
0a670: 3c4c                      DSJS   A12,A660h
0a680: 4d9c                      MOVE   B12,B12
0a690: ca08                      JREQ   A720h
0a6a0: 4ca8                      MOVE   A5,A8
0a6b0: 2fa8                      SRL    3h,A8
0a6c0: 410d                      ADD    A8,A13
0a6d0: 40cd                      ADD    A6,A13
0a6e0: 49a4                      CMP    A13,A4
0a6f0: ce02                      JRN    A720h
0a700: 9392                      MOVE   B12,*B2+,1
0a710: 9112                      MOVE   B8,*B2+,0
0a720: 578c                      CLR    A12
0a730: 4e17                      MOVE   B0,A7
0a740: 4cf7                      MOVE   B7,B7
0a750: c7cc                      JRGT   A420h
0a760: 0960                      RETS   

_dm_fill_oval:
0a770: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
0a790: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
0a7b0: 5610                      CLR    B0
0a7c0: c007                      JR     A840h

_dm_patnfill_oval:
0a7d0: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
0a7f0: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
0a810: 07b0 0050 0000            MOVE   @50h,B0,1
0a840: a7c8                      MOVE   -*A14,A8,1
0a850: 0550                      SETF   10h,0,0
0a860: 9500                      MOVE   *A8+,A0,0
0a870: 9501                      MOVE   *A8+,A1,0
0a880: 9502                      MOVE   *A8+,A2,0
0a890: 9503                      MOVE   *A8+,A3,0
0a8a0: c011                      JR     A9C0h

_fill_oval:
0a8b0: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
0a8d0: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
0a8f0: 5610                      CLR    B0
0a900: c007                      JR     A980h

_patnfill_oval:
0a910: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
0a930: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
0a950: 07b0 0050 0000            MOVE   @50h,B0,1
0a980: a7c0                      MOVE   -*A14,A0,1
0a990: a7c1                      MOVE   -*A14,A1,1
0a9a0: a7c2                      MOVE   -*A14,A2,1
0a9b0: a7c3                      MOVE   -*A14,A3,1
0a9c0: 07a8 0060 0000            MOVE   @60h,A8,1
0a9f0: cb6e                      JRNE   B0E0h
0aa00: 4042                      ADD    A2,A2
0aa10: 4002                      ADD    A0,A2
0aa20: 2fe2                      SRL    1h,A2
0aa30: 2603                      SLL    10h,A3
0aa40: ee62                      MOVY   A3,A2
0aa50: 4c23                      MOVE   A1,A3
0aa60: 1423                      DEC    A3
0aa70: 2603                      SLL    10h,A3
0aa80: e043                      ADDXY  A2,A3
0aa90: 07a8 0000 0000            MOVE   @0h,A8,1
0aac0: e102                      ADDXY  A8,A2
0aad0: e103                      ADDXY  A8,A3
0aae0: 0750                      SETF   10h,0,1
0aaf0: 4c25                      MOVE   A1,A5
0ab00: 5ea5                      MPYU   A5,A5
0ab10: 4ca4                      MOVE   A5,A4
0ab20: 2464                      SLL    3h,A4
0ab30: 4c05                      MOVE   A0,A5
0ab40: 5ea5                      MPYU   A5,A5
0ab50: 2465                      SLL    3h,A5
0ab60: 0740                      SETF   20h,0,1
0ab70: 4c26                      MOVE   A1,A6
0ab80: 2446                      SLL    2h,A6
0ab90: 5ea6                      MPYU   A5,A6
0aba0: 4820                      CMP    A1,A0
0abb0: c403                      JRLT   ABF0h
0abc0: 6ac8                      LMO    A6,A8
0abd0: ca0b                      JREQ   AC90h
0abe0: c005                      JR     AC40h
0abf0: 4c08                      MOVE   A0,A8
0ac00: 2448                      SLL    2h,A8
0ac10: 5e88                      MPYU   A4,A8
0ac20: 6b08                      LMO    A8,A8
0ac30: ca05                      JREQ   AC90h
0ac40: 6306                      SLL    A8,A6
0ac50: 6707                      SRL    A8,A7
0ac60: 54c7                      OR     A6,A7
0ac70: 6704                      SRL    A8,A4
0ac80: 6705                      SRL    A8,A5
0ac90: 576b                      CLR    A11
0aca0: 2fe7                      SRL    1h,A7
0acb0: 03a7                      NEG    A7
0acc0: 4ced                      MOVE   A7,A13
0acd0: 2bcd                      SRA    2h,A13
0ace0: 4087                      ADD    A4,A7
0acf0: 40a7                      ADD    A5,A7
0ad00: 1829                      MOVK   1h,A9
0ad10: 09ea 0000 0001            MOVI   10000h,A10
0ad40: 4f47                      MOVE   A10,B7
0ad50: 1fe0                      BTST   0h,A0
0ad60: ca04                      JREQ   ADB0h
0ad70: 4c8b                      MOVE   A4,A11
0ad80: 2feb                      SRL    1h,A11
0ad90: 4487                      SUB    A4,A7
0ada0: 1037                      INC    B7
0adb0: 2ba7                      SRA    3h,A7
0adc0: 4167                      ADD    A11,A7
0add0: 4c10                      MOVE   B0,B0
0ade0: cb18                      JRNE   AF70h
0adf0: 4ce7                      MOVE   A7,A7
0ae00: cf06                      JRNN   AE70h
0ae10: e322                      SUBXY  A9,A2
0ae20: e323                      SUBXY  A9,A3
0ae30: 1057                      ADDK   2h,B7
0ae40: 408b                      ADD    A4,A11
0ae50: 4167                      ADD    A11,A7
0ae60: c0f9                      JR     AE00h
0ae70: 1441                      SUBK   2h,A1
0ae80: ce09                      JRN    AF20h
0ae90: 4e42                      MOVE   A2,B2
0aea0: 0fe0                      FILL   XY
0aeb0: 4e62                      MOVE   A3,B2
0aec0: 0fe0                      FILL   XY
0aed0: e142                      ADDXY  A10,A2
0aee0: e343                      SUBXY  A10,A3
0aef0: 40ad                      ADD    A5,A13
0af00: 41a7                      ADD    A13,A7
0af10: c0ee                      JR     AE00h
0af20: 1fe1                      BTST   0h,A1
0af30: ca1a                      JREQ   B0E0h
0af40: 4e42                      MOVE   A2,B2
0af50: 0fe0                      FILL   XY
0af60: c017                      JR     B0E0h
0af70: 4ce7                      MOVE   A7,A7
0af80: cf06                      JRNN   AFF0h
0af90: e322                      SUBXY  A9,A2
0afa0: e323                      SUBXY  A9,A3
0afb0: 1057                      ADDK   2h,B7
0afc0: 408b                      ADD    A4,A11
0afd0: 4167                      ADD    A11,A7
0afe0: c0f9                      JR     AF80h
0aff0: 1441                      SUBK   2h,A1
0b000: ce09                      JRN    B0A0h
0b010: 4e42                      MOVE   A2,B2
0b020: 0930                      CALL   B0
0b030: 4e62                      MOVE   A3,B2
0b040: 0930                      CALL   B0
0b050: e142                      ADDXY  A10,A2
0b060: e343                      SUBXY  A10,A3
0b070: 40ad                      ADD    A5,A13
0b080: 41a7                      ADD    A13,A7
0b090: c0ee                      JR     AF80h
0b0a0: 1fe1                      BTST   0h,A1
0b0b0: ca02                      JREQ   B0E0h
0b0c0: 4e42                      MOVE   A2,B2
0b0d0: 0930                      CALL   B0
0b0e0: 09bf 7c85                 MMFM   SP,B0,B2,B7,B10-B14
0b100: 09af 2eff                 MMFM   SP,A0-A7,A9-A11,A13
0b120: 0962                      RETS   2h

_fill_piearc:
0b130: a3af                      MOVE   A13,-*SP,1
0b140: 4dcd                      MOVE   A14,A13
0b150: 4508                      SUB    A8,A8
0b160: 0788 7500 0002            MOVE   A8,@27500h,1
0b190: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0b1b0: 0788 7540 0002            MOVE   A8,@27540h,1
0b1e0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0b200: 0788 74e0 0002            MOVE   A8,@274E0h,1
0b230: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
0b250: 0788 74a0 0002            MOVE   A8,@274A0h,1
0b280: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
0b2a0: 0788 74c0 0002            MOVE   A8,@274C0h,1
0b2d0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
0b2f0: 0788 7480 0002            MOVE   A8,@27480h,1
0b320: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
0b340: 0788 73a0 0002            MOVE   A8,@273A0h,1
0b370: 0d5f bbd0 0000            CALLA  BBD0h
0b3a0: b7ee 0040                 MOVE   *SP(40h),A14,1
0b3c0: 97ed                      MOVE   *SP+,A13,1
0b3d0: 0962                      RETS   2h

_dm_fill_piearc:
0b3e0: 098f 000c                 MMTM   SP,A12,A13
0b400: 4dcd                      MOVE   A14,A13
0b410: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0b430: 4508                      SUB    A8,A8
0b440: 0788 7500 0002            MOVE   A8,@27500h,1
0b470: 0570                      SETF   10h,1,0
0b480: 9588                      MOVE   *A12+,A8,0
0b490: 0788 7540 0002            MOVE   A8,@27540h,1
0b4c0: 9588                      MOVE   *A12+,A8,0
0b4d0: 0788 74e0 0002            MOVE   A8,@274E0h,1
0b500: 9588                      MOVE   *A12+,A8,0
0b510: 0788 74a0 0002            MOVE   A8,@274A0h,1
0b540: 9588                      MOVE   *A12+,A8,0
0b550: 0788 74c0 0002            MOVE   A8,@274C0h,1
0b580: 9588                      MOVE   *A12+,A8,0
0b590: 0788 7480 0002            MOVE   A8,@27480h,1
0b5c0: 858c                      MOVE   *A12,A12,0
0b5d0: 078c 73a0 0002            MOVE   A12,@273A0h,1
0b600: 0d5f bbd0 0000            CALLA  BBD0h
0b630: b7ee 0060                 MOVE   *SP(60h),A14,1
0b650: 09af 3000                 MMFM   SP,A12,A13
0b670: 0962                      RETS   2h

_patnfill_piearc:
0b680: a3af                      MOVE   A13,-*SP,1
0b690: 4dcd                      MOVE   A14,A13
0b6a0: 1828                      MOVK   1h,A8
0b6b0: 0788 7500 0002            MOVE   A8,@27500h,1
0b6e0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
0b700: 0788 7540 0002            MOVE   A8,@27540h,1
0b730: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
0b750: 0788 74e0 0002            MOVE   A8,@274E0h,1
0b780: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
0b7a0: 0788 74a0 0002            MOVE   A8,@274A0h,1
0b7d0: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
0b7f0: 0788 74c0 0002            MOVE   A8,@274C0h,1
0b820: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
0b840: 0788 7480 0002            MOVE   A8,@27480h,1
0b870: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
0b890: 0788 73a0 0002            MOVE   A8,@273A0h,1
0b8c0: 0d5f bbd0 0000            CALLA  BBD0h
0b8f0: b7ee 0040                 MOVE   *SP(40h),A14,1
0b910: 97ed                      MOVE   *SP+,A13,1
0b920: 0962                      RETS   2h

_dm_patnfill_piearc:
0b930: 098f 000c                 MMTM   SP,A12,A13
0b950: 4dcd                      MOVE   A14,A13
0b960: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0b980: 1828                      MOVK   1h,A8
0b990: 0788 7500 0002            MOVE   A8,@27500h,1
0b9c0: 0570                      SETF   10h,1,0
0b9d0: 9588                      MOVE   *A12+,A8,0
0b9e0: 0788 7540 0002            MOVE   A8,@27540h,1
0ba10: 9588                      MOVE   *A12+,A8,0
0ba20: 0788 74e0 0002            MOVE   A8,@274E0h,1
0ba50: 9588                      MOVE   *A12+,A8,0
0ba60: 0788 74a0 0002            MOVE   A8,@274A0h,1
0ba90: 9588                      MOVE   *A12+,A8,0
0baa0: 0788 74c0 0002            MOVE   A8,@274C0h,1
0bad0: 9588                      MOVE   *A12+,A8,0
0bae0: 0788 7480 0002            MOVE   A8,@27480h,1
0bb10: 858c                      MOVE   *A12,A12,0
0bb20: 078c 73a0 0002            MOVE   A12,@273A0h,1
0bb50: 0d5f bbd0 0000            CALLA  BBD0h
0bb80: b7ee 0060                 MOVE   *SP(60h),A14,1
0bba0: 09af 3000                 MMFM   SP,A12,A13
0bbc0: 0962                      RETS   2h

_fill_eliparc:
0bbd0: 098f 002c                 MMTM   SP,A10,A12,A13
0bbf0: 4dcd                      MOVE   A14,A13
0bc00: 0b0e 00c0                 ADDI   C0h,A14
0bc20: 07a8 0060 0000            MOVE   @60h,A8,1
0bc50: cb00 01ae                 JRNE   D750h
0bc70: 09e8 73c0 0002            MOVI   273C0h,A8
0bca0: 0788 7520 0002            MOVE   A8,@27520h,1
0bcd0: 07ac 7540 0002            MOVE   @27540h,A12,1
0bd00: 0570                      SETF   10h,1,0
0bd10: 8188                      MOVE   A12,*A8,0
0bd20: 07ac 74e0 0002            MOVE   @274E0h,A12,1
0bd50: b188 0010                 MOVE   A12,*A8(10h),0
0bd70: 07ac 7500 0002            MOVE   @27500h,A12,1
0bda0: b188 00a0                 MOVE   A12,*A8(A0h),0
0bdc0: 07ac 73a0 0002            MOVE   @273A0h,A12,1
0bdf0: c534                      JRGE   C140h
0be00: a3cf                      MOVE   A14,-*SP,1
0be10: 4dac                      MOVE   A13,A12
0be20: 0b0c 00a0                 ADDI   A0h,A12
0be40: 938e                      MOVE   A12,*A14+,1
0be50: 4dac                      MOVE   A13,A12
0be60: 0b0c 0040                 ADDI   40h,A12
0be80: 938e                      MOVE   A12,*A14+,1
0be90: 4dac                      MOVE   A13,A12
0bea0: 0b0c 0060                 ADDI   60h,A12
0bec0: 938e                      MOVE   A12,*A14+,1
0bed0: 07ac 7480 0002            MOVE   @27480h,A12,1
0bf00: 07a8 73a0 0002            MOVE   @273A0h,A8,1
0bf30: 410c                      ADD    A8,A12
0bf40: 938e                      MOVE   A12,*A14+,1
0bf50: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0bf80: d60e 7540 0002            MOVE   @27540h,*A14+,1
0bfb0: 0d5f 07e0 0001            CALLA  107E0h
0bfe0: a3cf                      MOVE   A14,-*SP,1
0bff0: 4dac                      MOVE   A13,A12
0c000: 0b0c 0080                 ADDI   80h,A12
0c020: 938e                      MOVE   A12,*A14+,1
0c030: 93ae                      MOVE   A13,*A14+,1
0c040: 4da8                      MOVE   A13,A8
0c050: 1008                      ADDK   20h,A8
0c060: 930e                      MOVE   A8,*A14+,1
0c070: d60e 7480 0002            MOVE   @27480h,*A14+,1
0c0a0: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0c0d0: d60e 7540 0002            MOVE   @27540h,*A14+,1
0c100: 0d5f 07e0 0001            CALLA  107E0h
0c130: c033                      JR     C470h
0c140: a3cf                      MOVE   A14,-*SP,1
0c150: 4dac                      MOVE   A13,A12
0c160: 0b0c 00a0                 ADDI   A0h,A12
0c180: 938e                      MOVE   A12,*A14+,1
0c190: 4dac                      MOVE   A13,A12
0c1a0: 0b0c 0040                 ADDI   40h,A12
0c1c0: 938e                      MOVE   A12,*A14+,1
0c1d0: 4dac                      MOVE   A13,A12
0c1e0: 0b0c 0060                 ADDI   60h,A12
0c200: 938e                      MOVE   A12,*A14+,1
0c210: d60e 7480 0002            MOVE   @27480h,*A14+,1
0c240: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0c270: d60e 7540 0002            MOVE   @27540h,*A14+,1
0c2a0: 0d5f 07e0 0001            CALLA  107E0h
0c2d0: a3cf                      MOVE   A14,-*SP,1
0c2e0: 4da8                      MOVE   A13,A8
0c2f0: 0b08 0080                 ADDI   80h,A8
0c310: 930e                      MOVE   A8,*A14+,1
0c320: 93ae                      MOVE   A13,*A14+,1
0c330: 4da8                      MOVE   A13,A8
0c340: 1008                      ADDK   20h,A8
0c350: 930e                      MOVE   A8,*A14+,1
0c360: 07a8 7480 0002            MOVE   @27480h,A8,1
0c390: 07ac 73a0 0002            MOVE   @273A0h,A12,1
0c3c0: 4188                      ADD    A12,A8
0c3d0: 930e                      MOVE   A8,*A14+,1
0c3e0: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0c410: d60e 7540 0002            MOVE   @27540h,*A14+,1
0c440: 0d5f 07e0 0001            CALLA  107E0h
0c470: 07ac 7540 0002            MOVE   @27540h,A12,1
0c4a0: 2bec                      SRA    1h,A12
0c4b0: 078c 7560 0002            MOVE   A12,@27560h,1
0c4e0: 07a8 74e0 0002            MOVE   @274E0h,A8,1
0c510: 2be8                      SRA    1h,A8
0c520: 0788 7580 0002            MOVE   A8,@27580h,1
0c550: b7a8 00a0                 MOVE   *A13(A0h),A8,1
0c570: b7ac 0080                 MOVE   *A13(80h),A12,1
0c590: 4988                      CMP    A12,A8
0c5a0: cb2b                      JRNE   C860h
0c5b0: 07a8 73a0 0002            MOVE   @273A0h,A8,1
0c5e0: 0b48 ff4b                 CMPI   B4h,A8
0c600: c525                      JRGE   C860h
0c610: 0b48 00b3                 CMPI   FF4Ch,A8
0c630: c622                      JRLE   C860h
0c640: b7ac 00a0                 MOVE   *A13(A0h),A12,1
0c660: 1fec                      BTST   0h,A12
0c670: cb0f                      JRNE   C770h
0c680: a3cf                      MOVE   A14,-*SP,1
0c690: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0c6b0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0c6d0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0c6f0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0c710: 938e                      MOVE   A12,*A14+,1
0c720: 0d5f d7a0 0000            CALLA  D7A0h
0c750: c000 00fe                 JR     D750h
0c770: a3cf                      MOVE   A14,-*SP,1
0c780: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0c7a0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0c7c0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0c7e0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0c800: 938e                      MOVE   A12,*A14+,1
0c810: 0d5f d7a0 0000            CALLA  D7A0h
0c840: c000 00ef                 JR     D750h
0c860: b7a8 00a0                 MOVE   *A13(A0h),A8,1
0c880: ca37                      JREQ   CC00h
0c890: 1428                      DEC    A8
0c8a0: ca25                      JREQ   CB00h
0c8b0: 1428                      DEC    A8
0c8c0: ca13                      JREQ   CA00h
0c8d0: 0d88 0040                 DSJ    A8,CCF0h
0c8f0: a3cf                      MOVE   A14,-*SP,1
0c900: d60e 7580 0002            MOVE   @27580h,*A14+,1
0c930: d60e 7540 0002            MOVE   @27540h,*A14+,1
0c960: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0c980: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0c9a0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
0c9c0: 0d5f d7a0 0000            CALLA  D7A0h
0c9f0: c02f                      JR     CCF0h
0ca00: a3cf                      MOVE   A14,-*SP,1
0ca10: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0ca30: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0ca50: 4508                      SUB    A8,A8
0ca60: 930e                      MOVE   A8,*A14+,1
0ca70: d60e 7560 0002            MOVE   @27560h,*A14+,1
0caa0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
0cac0: 0d5f d7a0 0000            CALLA  D7A0h
0caf0: c01f                      JR     CCF0h
0cb00: a3cf                      MOVE   A14,-*SP,1
0cb10: d60e 7580 0002            MOVE   @27580h,*A14+,1
0cb40: 4508                      SUB    A8,A8
0cb50: 930e                      MOVE   A8,*A14+,1
0cb60: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0cb80: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0cba0: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
0cbc0: 0d5f d7a0 0000            CALLA  D7A0h
0cbf0: c00f                      JR     CCF0h
0cc00: a3cf                      MOVE   A14,-*SP,1
0cc10: d3ae 0040                 MOVE   *A13(40h),*A14+,1
0cc30: d3ae 0060                 MOVE   *A13(60h),*A14+,1
0cc50: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0cc80: d60e 7560 0002            MOVE   @27560h,*A14+,1
0ccb0: 930e                      MOVE   A8,*A14+,1
0ccc0: 0d5f d7a0 0000            CALLA  D7A0h
0ccf0: 4d8c                      MOVE   A12,A12
0cd00: ca37                      JREQ   D080h
0cd10: 142c                      DEC    A12
0cd20: ca24                      JREQ   CF70h
0cd30: 142c                      DEC    A12
0cd40: ca12                      JREQ   CE70h
0cd50: 0d8c 0040                 DSJ    A12,D170h
0cd70: a3cf                      MOVE   A14,-*SP,1
0cd80: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0cda0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0cdc0: 458c                      SUB    A12,A12
0cdd0: 938e                      MOVE   A12,*A14+,1
0cde0: d60e 7560 0002            MOVE   @27560h,*A14+,1
0ce10: d3ae 0080                 MOVE   *A13(80h),*A14+,1
0ce30: 0d5f d7a0 0000            CALLA  D7A0h
0ce60: c030                      JR     D170h
0ce70: a3cf                      MOVE   A14,-*SP,1
0ce80: d60e 7580 0002            MOVE   @27580h,*A14+,1
0ceb0: 458c                      SUB    A12,A12
0cec0: 938e                      MOVE   A12,*A14+,1
0ced0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0cef0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0cf10: d3ae 0080                 MOVE   *A13(80h),*A14+,1
0cf30: 0d5f d7a0 0000            CALLA  D7A0h
0cf60: c020                      JR     D170h
0cf70: a3cf                      MOVE   A14,-*SP,1
0cf80: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0cfa0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0cfc0: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0cff0: d60e 7560 0002            MOVE   @27560h,*A14+,1
0d020: d3ae 0080                 MOVE   *A13(80h),*A14+,1
0d040: 0d5f d7a0 0000            CALLA  D7A0h
0d070: c00f                      JR     D170h
0d080: a3cf                      MOVE   A14,-*SP,1
0d090: d60e 7580 0002            MOVE   @27580h,*A14+,1
0d0c0: d60e 7540 0002            MOVE   @27540h,*A14+,1
0d0f0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0d110: d3ae 0020                 MOVE   *A13(20h),*A14+,1
0d130: 938e                      MOVE   A12,*A14+,1
0d140: 0d5f d7a0 0000            CALLA  D7A0h
0d170: b7ac 0080                 MOVE   *A13(80h),A12,1
0d190: b7a8 00a0                 MOVE   *A13(A0h),A8,1
0d1b0: 490c                      CMP    A8,A12
0d1c0: c703                      JRGT   D200h
0d1d0: 108c                      ADDK   4h,A12
0d1e0: b38d 0080                 MOVE   A12,*A13(80h),1
0d200: 4d0a                      MOVE   A8,A10
0d210: 102a                      INC    A10
0d220: 498a                      CMP    A12,A10
0d230: c551                      JRGE   D750h
0d240: 186c                      MOVK   3h,A12
0d250: 514c                      AND    A10,A12
0d260: 4d88                      MOVE   A12,A8
0d270: ca37                      JREQ   D5F0h
0d280: 1428                      DEC    A8
0d290: ca24                      JREQ   D4E0h
0d2a0: 1428                      DEC    A8
0d2b0: ca13                      JREQ   D3F0h
0d2c0: 0d88 0042                 DSJ    A8,D700h
0d2e0: a3cf                      MOVE   A14,-*SP,1
0d2f0: d60e 7580 0002            MOVE   @27580h,*A14+,1
0d320: d60e 7540 0002            MOVE   @27540h,*A14+,1
0d350: 4508                      SUB    A8,A8
0d360: 930e                      MOVE   A8,*A14+,1
0d370: d60e 7560 0002            MOVE   @27560h,*A14+,1
0d3a0: 938e                      MOVE   A12,*A14+,1
0d3b0: 0d5f d7a0 0000            CALLA  D7A0h
0d3e0: c031                      JR     D700h
0d3f0: a3cf                      MOVE   A14,-*SP,1
0d400: d60e 7580 0002            MOVE   @27580h,*A14+,1
0d430: 4508                      SUB    A8,A8
0d440: 930e                      MOVE   A8,*A14+,1
0d450: 930e                      MOVE   A8,*A14+,1
0d460: d60e 7560 0002            MOVE   @27560h,*A14+,1
0d490: 938e                      MOVE   A12,*A14+,1
0d4a0: 0d5f d7a0 0000            CALLA  D7A0h
0d4d0: c022                      JR     D700h
0d4e0: a3cf                      MOVE   A14,-*SP,1
0d4f0: d60e 7580 0002            MOVE   @27580h,*A14+,1
0d520: 4508                      SUB    A8,A8
0d530: 930e                      MOVE   A8,*A14+,1
0d540: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0d570: d60e 7560 0002            MOVE   @27560h,*A14+,1
0d5a0: 938e                      MOVE   A12,*A14+,1
0d5b0: 0d5f d7a0 0000            CALLA  D7A0h
0d5e0: c011                      JR     D700h
0d5f0: a3cf                      MOVE   A14,-*SP,1
0d600: d60e 7580 0002            MOVE   @27580h,*A14+,1
0d630: d60e 7540 0002            MOVE   @27540h,*A14+,1
0d660: d60e 74e0 0002            MOVE   @274E0h,*A14+,1
0d690: d60e 7560 0002            MOVE   @27560h,*A14+,1
0d6c0: 938e                      MOVE   A12,*A14+,1
0d6d0: 0d5f d7a0 0000            CALLA  D7A0h
0d700: 102a                      INC    A10
0d710: b7ac 0080                 MOVE   *A13(80h),A12,1
0d730: 498a                      CMP    A12,A10
0d740: c4af                      JRLT   D240h
0d750: 0bee ff3f                 SUBI   C0h,A14
0d770: 09af 3400                 MMFM   SP,A10,A12,A13
0d790: 0960                      RETS   

_arc_slice:
0d7a0: 098f ea3c                 MMTM   SP,A0-A2,A4,A6,A10-A13
0d7c0: 4dcd                      MOVE   A14,A13
0d7d0: 0b0e 00a0                 ADDI   A0h,A14
0d7f0: b7a2 ff60                 MOVE   *A13(FF60h),A2,1
0d810: b7a4 ff80                 MOVE   *A13(FF80h),A4,1
0d830: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
0d850: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0d870: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
0d890: 4d8c                      MOVE   A12,A12
0d8a0: ca17                      JREQ   DA20h
0d8b0: 346c                      CMPK   3h,A12
0d8c0: ca15                      JREQ   DA20h
0d8d0: 07a8 7520 0002            MOVE   @27520h,A8,1
0d900: 09c0 ffff                 MOVI   FFFFh,A0
0d920: 0570                      SETF   10h,1,0
0d930: b008 0080                 MOVE   A0,*A8(80h),0
0d950: 4cc0                      MOVE   A6,A0
0d960: 4480                      SUB    A4,A0
0d970: b008 0040                 MOVE   A0,*A8(40h),0
0d990: 07a0 7540 0002            MOVE   @27540h,A0,1
0d9c0: 44c0                      SUB    A6,A0
0d9d0: b008 0020                 MOVE   A0,*A8(20h),0
0d9f0: 344c                      CMPK   2h,A12
0da00: c510                      JRGE   DB10h
0da10: c020                      JR     DC20h
0da20: 07a0 7520 0002            MOVE   @27520h,A0,1
0da50: 4508                      SUB    A8,A8
0da60: 0570                      SETF   10h,1,0
0da70: b100 0080                 MOVE   A8,*A0(80h),0
0da90: 4c88                      MOVE   A4,A8
0daa0: 44c8                      SUB    A6,A8
0dab0: b100 0040                 MOVE   A8,*A0(40h),0
0dad0: b0c0 0020                 MOVE   A6,*A0(20h),0
0daf0: 344c                      CMPK   2h,A12
0db00: c411                      JRLT   DC20h
0db10: 07a0 7520 0002            MOVE   @27520h,A0,1
0db40: 1828                      MOVK   1h,A8
0db50: b100 0090                 MOVE   A8,*A0(90h),0
0db70: 4c48                      MOVE   A2,A8
0db80: 4548                      SUB    A10,A8
0db90: b100 0050                 MOVE   A8,*A0(50h),0
0dbb0: 07a8 74e0 0002            MOVE   @274E0h,A8,1
0dbe0: 4548                      SUB    A10,A8
0dbf0: b100 0030                 MOVE   A8,*A0(30h),0
0dc10: c00d                      JR     DCF0h
0dc20: 07a0 7520 0002            MOVE   @27520h,A0,1
0dc50: 09c8 ffff                 MOVI   FFFFh,A8
0dc70: b100 0090                 MOVE   A8,*A0(90h),0
0dc90: 4d48                      MOVE   A10,A8
0dca0: 4448                      SUB    A2,A8
0dcb0: b100 0050                 MOVE   A8,*A0(50h),0
0dcd0: b140 0030                 MOVE   A10,*A0(30h),0
0dcf0: 07a8 74a0 0002            MOVE   @274A0h,A8,1
0dd20: 4106                      ADD    A8,A6
0dd30: b0c0 0060                 MOVE   A6,*A0(60h),0
0dd50: 07a6 74c0 0002            MOVE   @274C0h,A6,1
0dd80: 40ca                      ADD    A6,A10
0dd90: b140 0070                 MOVE   A10,*A0(70h),0
0ddb0: 1fec                      BTST   0h,A12
0ddc0: cb0a                      JRNE   DE70h
0ddd0: 4104                      ADD    A8,A4
0dde0: 4c8a                      MOVE   A4,A10
0ddf0: 4046                      ADD    A2,A6
0de00: b404 0060                 MOVE   *A0(60h),A4,0
0de20: b402 0070                 MOVE   *A0(70h),A2,0
0de40: 4c81                      MOVE   A4,A1
0de50: 4cc0                      MOVE   A6,A0
0de60: c00b                      JR     DF20h
0de70: b40a 0060                 MOVE   *A0(60h),A10,0
0de90: b406 0070                 MOVE   *A0(70h),A6,0
0deb0: 4104                      ADD    A8,A4
0dec0: 07a1 74c0 0002            MOVE   @274C0h,A1,1
0def0: 4022                      ADD    A1,A2
0df00: 4d41                      MOVE   A10,A1
0df10: 4c40                      MOVE   A2,A0
0df20: 07ab 7560 0002            MOVE   @27560h,A11,1
0df50: 410b                      ADD    A8,A11
0df60: 816d                      MOVE   A11,*A13,0
0df70: 07ab 7580 0002            MOVE   @27580h,A11,1
0dfa0: 07a8 74c0 0002            MOVE   @274C0h,A8,1
0dfd0: 410b                      ADD    A8,A11
0dfe0: b16d 0010                 MOVE   A11,*A13(10h),0
0e000: b14d 0020                 MOVE   A10,*A13(20h),0
0e020: b0cd 0030                 MOVE   A6,*A13(30h),0
0e040: b02d 0040                 MOVE   A1,*A13(40h),0
0e060: b00d 0050                 MOVE   A0,*A13(50h),0
0e080: b08d 0060                 MOVE   A4,*A13(60h),0
0e0a0: b04d 0070                 MOVE   A2,*A13(70h),0
0e0c0: b9ad 0000 0080            MOVE   *A13(0h),*A13(80h),0
0e0f0: b9ad 0010 0090            MOVE   *A13(10h),*A13(90h),0
0e120: 07aa 7500 0002            MOVE   @27500h,A10,1
0e150: cb13                      JRNE   E290h
0e160: a3cf                      MOVE   A14,-*SP,1
0e170: 93ae                      MOVE   A13,*A14+,1
0e180: 1866                      MOVK   3h,A6
0e190: 92ce                      MOVE   A6,*A14+,1
0e1a0: 0d5f 3850 0000            CALLA  3850h
0e1d0: a3cf                      MOVE   A14,-*SP,1
0e1e0: 4daa                      MOVE   A13,A10
0e1f0: 0b0a 0040                 ADDI   40h,A10
0e210: 934e                      MOVE   A10,*A14+,1
0e220: 92ce                      MOVE   A6,*A14+,1
0e230: 0d5f 3850 0000            CALLA  3850h
0e260: 144c                      SUBK   2h,A12
0e270: c413                      JRLT   E3B0h
0e280: c01b                      JR     E440h
0e290: a3cf                      MOVE   A14,-*SP,1
0e2a0: 93ae                      MOVE   A13,*A14+,1
0e2b0: 1866                      MOVK   3h,A6
0e2c0: 92ce                      MOVE   A6,*A14+,1
0e2d0: 0d5f 38b0 0000            CALLA  38B0h
0e300: a3cf                      MOVE   A14,-*SP,1
0e310: 4daa                      MOVE   A13,A10
0e320: 0b0a 0040                 ADDI   40h,A10
0e340: 934e                      MOVE   A10,*A14+,1
0e350: 92ce                      MOVE   A6,*A14+,1
0e360: 0d5f 38b0 0000            CALLA  38B0h
0e390: 144c                      SUBK   2h,A12
0e3a0: c509                      JRGE   E440h
0e3b0: 07ac 7520 0002            MOVE   @27520h,A12,1
0e3e0: 0570                      SETF   10h,1,0
0e3f0: b584 0070                 MOVE   *A12(70h),A4,0
0e410: 1424                      DEC    A4
0e420: b08c 0070                 MOVE   A4,*A12(70h),0
0e440: a3cf                      MOVE   A14,-*SP,1
0e450: d60e 7520 0002            MOVE   @27520h,*A14+,1
0e480: 0d5f 0940 0000            CALLA  940h
0e4b0: b7ee 0140                 MOVE   *SP(140h),A14,1
0e4d0: 09af 3c57                 MMFM   SP,A0-A2,A4,A6,A10-A13
0e4f0: 0962                      RETS   2h

_dm_fill_rect:
0e500: a20f                      MOVE   A0,-*SP,1
0e510: 099f 213e                 MMTM   SP,B2,B7,B10-B14
0e530: a7c8                      MOVE   -*A14,A8,1
0e540: 9700                      MOVE   *A8+,A0,1
0e550: 4e07                      MOVE   A0,B7
0e560: 8700                      MOVE   *A8,A0,1
0e570: c00c                      JR     E640h

_fill_rect:
0e580: a20f                      MOVE   A0,-*SP,1
0e590: 099f 213e                 MMTM   SP,B2,B7,B10-B14
0e5b0: a7c0                      MOVE   -*A14,A0,1
0e5c0: a7c8                      MOVE   -*A14,A8,1
0e5d0: 2608                      SLL    10h,A8
0e5e0: ef00                      MOVY   A8,A0
0e5f0: 4e07                      MOVE   A0,B7
0e600: a7c0                      MOVE   -*A14,A0,1
0e610: a7c8                      MOVE   -*A14,A8,1
0e620: 2608                      SLL    10h,A8
0e630: ef00                      MOVY   A8,A0
0e640: 07a8 0060 0000            MOVE   @60h,A8,1
0e670: cb1c                      JRNE   E840h
0e680: 07a8 0000 0000            MOVE   @0h,A8,1
0e6b0: e100                      ADDXY  A8,A0
0e6c0: 4e02                      MOVE   A0,B2
0e6d0: 0541                      SETF   1h,0,0
0e6e0: 05a8 02c0 0000            MOVE   @2C0h,A8,0
0e710: ca11                      JREQ   E830h
0e720: 054a                      SETF   Ah,0,0
0e730: 05a8 00b5 c000            MOVE   @C00000B5h,A8,0
0e760: 0b88 fc18 ffff            ANDI   3E7h,A8
0e790: 0b48 fff9                 CMPI   6h,A8
0e7b0: cb07                      JRNE   E830h
0e7c0: 0320                      CLRC   
0e7d0: 08f2                      CLIP   
0e7e0: ca05                      JREQ   E840h
0e7f0: 0a92                      CVDXYL B2
0e800: 0a00                      VLCOL  
0e810: 0a57                      VFILL  L
0e820: c001                      JR     E840h
0e830: 0fe0                      FILL   XY
0e840: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
0e860: 97e0                      MOVE   *SP+,A0,1
0e870: b7ee 0020                 MOVE   *SP(20h),A14,1
0e890: 0962                      RETS   2h

_frame_oval:
0e8a0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
0e8c0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
0e8e0: 5610                      CLR    B0
0e8f0: c007                      JR     E970h

_patnframe_oval:
0e900: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
0e920: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
0e940: 07b0 0050 0000            MOVE   @50h,B0,1
0e970: a7c0                      MOVE   -*A14,A0,1
0e980: a7c1                      MOVE   -*A14,A1,1
0e990: a7c2                      MOVE   -*A14,A2,1
0e9a0: a7c3                      MOVE   -*A14,A3,1
0e9b0: a7c4                      MOVE   -*A14,A4,1
0e9c0: a7c5                      MOVE   -*A14,A5,1
0e9d0: c015                      JR     EB30h

_dm_frame_oval:
0e9e0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
0ea00: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
0ea20: 5610                      CLR    B0
0ea30: c007                      JR     EAB0h

_dm_patnframe_oval:
0ea40: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
0ea60: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
0ea80: 07b0 0050 0000            MOVE   @50h,B0,1
0eab0: a7c8                      MOVE   -*A14,A8,1
0eac0: 0570                      SETF   10h,1,0
0ead0: 9500                      MOVE   *A8+,A0,0
0eae0: 9501                      MOVE   *A8+,A1,0
0eaf0: 9502                      MOVE   *A8+,A2,0
0eb00: 9503                      MOVE   *A8+,A3,0
0eb10: 9504                      MOVE   *A8+,A4,0
0eb20: 8505                      MOVE   *A8,A5,0
0eb30: 07a8 0060 0000            MOVE   @60h,A8,1
0eb60: cb00 0086                 JRNE   F3E0h
0eb80: a3cf                      MOVE   A14,-*SP,1
0eb90: 0570                      SETF   10h,1,0
0eba0: 4084                      ADD    A4,A4
0ebb0: 0524                      ZEXT   A4,0
0ebc0: 40a5                      ADD    A5,A5
0ebd0: 0525                      ZEXT   A5,0
0ebe0: 4ea1                      MOVE   A5,B1
0ebf0: 4c28                      MOVE   A1,A8
0ec00: 44a8                      SUB    A5,A8
0ec10: c701                      JRGT   EC30h
0ec20: 4e21                      MOVE   A1,B1
0ec30: 4c06                      MOVE   A0,A6
0ec40: 4486                      SUB    A4,A6
0ec50: c703                      JRGT   EC90h
0ec60: 4e21                      MOVE   A1,B1
0ec70: 2fe8                      SRL    1h,A8
0ec80: 4708                      SUBB   A8,A8
0ec90: 4042                      ADD    A2,A2
0eca0: 4002                      ADD    A0,A2
0ecb0: 2fe2                      SRL    1h,A2
0ecc0: 5684                      CLR    A4
0ecd0: 4244                      ADDC   A2,A4
0ece0: 2603                      SLL    10h,A3
0ecf0: ee62                      MOVY   A3,A2
0ed00: 4c23                      MOVE   A1,A3
0ed10: 1423                      DEC    A3
0ed20: 2603                      SLL    10h,A3
0ed30: e043                      ADDXY  A2,A3
0ed40: 07a5 0000 0000            MOVE   @0h,A5,1
0ed70: e0a2                      ADDXY  A5,A2
0ed80: e0a3                      ADDXY  A5,A3
0ed90: e0a4                      ADDXY  A5,A4
0eda0: 0d3f 00c4                 CALLR  FA00h
0edc0: 182e                      MOVK   1h,A14
0edd0: 09e1 0000 0001            MOVI   10000h,A1
0ee00: 4e27                      MOVE   A1,B7
0ee10: 1fe0                      BTST   0h,A0
0ee20: ca01                      JREQ   EE40h
0ee30: 1037                      INC    B7
0ee40: 4c10                      MOVE   B0,B0
0ee50: cb5d                      JRNE   F430h
0ee60: 4dad                      MOVE   A13,A13
0ee70: cf06                      JRNN   EEE0h
0ee80: e3c2                      SUBXY  A14,A2
0ee90: e3c3                      SUBXY  A14,A3
0eea0: 1057                      ADDK   2h,B7
0eeb0: 40a9                      ADD    A5,A9
0eec0: 412d                      ADD    A9,A13
0eed0: cefa                      JRN    EE80h
0eee0: 1451                      SUBK   2h,B1
0eef0: ce0a                      JRN    EFA0h
0ef00: 4e42                      MOVE   A2,B2
0ef10: 0fe0                      FILL   XY
0ef20: 4e62                      MOVE   A3,B2
0ef30: 0fe0                      FILL   XY
0ef40: e022                      ADDXY  A1,A2
0ef50: e223                      SUBXY  A1,A3
0ef60: 40eb                      ADD    A7,A11
0ef70: 416d                      ADD    A11,A13
0ef80: ceef                      JRN    EE80h
0ef90: c0f4                      JR     EEE0h
0efa0: 4d01                      MOVE   A8,A1
0efb0: c705                      JRGT   F010h
0efc0: 1fe1                      BTST   0h,A1
0efd0: ca40                      JREQ   F3E0h
0efe0: 4e42                      MOVE   A2,B2
0eff0: 0fe0                      FILL   XY
0f000: c03d                      JR     F3E0h
0f010: 4cc0                      MOVE   A6,A0
0f020: ec83                      MOVX   A4,A3
0f030: 4d28                      MOVE   A9,A8
0f040: 4ce6                      MOVE   A7,A6
0f050: 4ca4                      MOVE   A5,A4
0f060: 4f6a                      MOVE   A11,B10
0f070: 4fac                      MOVE   A13,B12
0f080: 0d3f 0096                 CALLR  FA00h
0f0a0: 4e21                      MOVE   A1,B1
0f0b0: 4f5a                      MOVE   B10,A10
0f0c0: 4f9c                      MOVE   B12,A12
0f0d0: 2ff7                      SRL    1h,B7
0f0e0: 0b37 8000 0000            ADDI   8000h,B7
0f110: 182e                      MOVK   1h,A14
0f120: 09e1 0000 0001            MOVI   10000h,A1
0f150: 4dad                      MOVE   A13,A13
0f160: cf05                      JRNN   F1C0h
0f170: e1c3                      ADDXY  A14,A3
0f180: 1437                      DEC    B7
0f190: 40a9                      ADD    A5,A9
0f1a0: 412d                      ADD    A9,A13
0f1b0: cefb                      JRN    F170h
0f1c0: 1451                      SUBK   2h,B1
0f1d0: ce1a                      JRN    F380h
0f1e0: 4e42                      MOVE   A2,B2
0f1f0: 0fe0                      FILL   XY
0f200: 4c40                      MOVE   A2,A0
0f210: ee60                      MOVY   A3,A0
0f220: 4e02                      MOVE   A0,B2
0f230: 0fe0                      FILL   XY
0f240: 4c40                      MOVE   A2,A0
0f250: ec60                      MOVX   A3,A0
0f260: 4e02                      MOVE   A0,B2
0f270: 0fe0                      FILL   XY
0f280: 4e62                      MOVE   A3,B2
0f290: 0fe0                      FILL   XY
0f2a0: e022                      ADDXY  A1,A2
0f2b0: e223                      SUBXY  A1,A3
0f2c0: 40ca                      ADD    A6,A10
0f2d0: 414c                      ADD    A10,A12
0f2e0: cf05                      JRNN   F340h
0f2f0: e3c2                      SUBXY  A14,A2
0f300: 1037                      INC    B7
0f310: 4088                      ADD    A4,A8
0f320: 410c                      ADD    A8,A12
0f330: cefb                      JRN    F2F0h
0f340: 40eb                      ADD    A7,A11
0f350: 416d                      ADD    A11,A13
0f360: cee0                      JRN    F170h
0f370: c0e4                      JR     F1C0h
0f380: 1ff1                      BTST   0h,B1
0f390: ca04                      JREQ   F3E0h
0f3a0: 4e42                      MOVE   A2,B2
0f3b0: 0fe0                      FILL   XY
0f3c0: 4e62                      MOVE   A3,B2
0f3d0: 0fe0                      FILL   XY
0f3e0: 09af 7eff                 MMFM   SP,A0-A7,A9-A14
0f400: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
0f420: 0962                      RETS   2h
0f430: 4dad                      MOVE   A13,A13
0f440: cf06                      JRNN   F4B0h
0f450: e3c2                      SUBXY  A14,A2
0f460: e3c3                      SUBXY  A14,A3
0f470: 1057                      ADDK   2h,B7
0f480: 40a9                      ADD    A5,A9
0f490: 412d                      ADD    A9,A13
0f4a0: cefa                      JRN    F450h
0f4b0: 1451                      SUBK   2h,B1
0f4c0: ce0a                      JRN    F570h
0f4d0: 4e42                      MOVE   A2,B2
0f4e0: 0930                      CALL   B0
0f4f0: 4e62                      MOVE   A3,B2
0f500: 0930                      CALL   B0
0f510: e022                      ADDXY  A1,A2
0f520: e223                      SUBXY  A1,A3
0f530: 40eb                      ADD    A7,A11
0f540: 416d                      ADD    A11,A13
0f550: ceef                      JRN    F450h
0f560: c0f4                      JR     F4B0h
0f570: 4d01                      MOVE   A8,A1
0f580: c705                      JRGT   F5E0h
0f590: 1fe1                      BTST   0h,A1
0f5a0: ca40                      JREQ   F9B0h
0f5b0: 4e42                      MOVE   A2,B2
0f5c0: 0930                      CALL   B0
0f5d0: c03d                      JR     F9B0h
0f5e0: 4cc0                      MOVE   A6,A0
0f5f0: ec83                      MOVX   A4,A3
0f600: 4d28                      MOVE   A9,A8
0f610: 4ce6                      MOVE   A7,A6
0f620: 4ca4                      MOVE   A5,A4
0f630: 4f6a                      MOVE   A11,B10
0f640: 4fac                      MOVE   A13,B12
0f650: 0d3f 0039                 CALLR  FA00h
0f670: 4e21                      MOVE   A1,B1
0f680: 4f5a                      MOVE   B10,A10
0f690: 4f9c                      MOVE   B12,A12
0f6a0: 2ff7                      SRL    1h,B7
0f6b0: 0b37 8000 0000            ADDI   8000h,B7
0f6e0: 182e                      MOVK   1h,A14
0f6f0: 09e1 0000 0001            MOVI   10000h,A1
0f720: 4dad                      MOVE   A13,A13
0f730: cf05                      JRNN   F790h
0f740: e1c3                      ADDXY  A14,A3
0f750: 1437                      DEC    B7
0f760: 40a9                      ADD    A5,A9
0f770: 412d                      ADD    A9,A13
0f780: cefb                      JRN    F740h
0f790: 1451                      SUBK   2h,B1
0f7a0: ce1a                      JRN    F950h
0f7b0: 4e42                      MOVE   A2,B2
0f7c0: 0930                      CALL   B0
0f7d0: 4c40                      MOVE   A2,A0
0f7e0: ee60                      MOVY   A3,A0
0f7f0: 4e02                      MOVE   A0,B2
0f800: 0930                      CALL   B0
0f810: 4c40                      MOVE   A2,A0
0f820: ec60                      MOVX   A3,A0
0f830: 4e02                      MOVE   A0,B2
0f840: 0930                      CALL   B0
0f850: 4e62                      MOVE   A3,B2
0f860: 0930                      CALL   B0
0f870: e022                      ADDXY  A1,A2
0f880: e223                      SUBXY  A1,A3
0f890: 40ca                      ADD    A6,A10
0f8a0: 414c                      ADD    A10,A12
0f8b0: cf05                      JRNN   F910h
0f8c0: e3c2                      SUBXY  A14,A2
0f8d0: 1037                      INC    B7
0f8e0: 4088                      ADD    A4,A8
0f8f0: 410c                      ADD    A8,A12
0f900: cefb                      JRN    F8C0h
0f910: 40eb                      ADD    A7,A11
0f920: 416d                      ADD    A11,A13
0f930: cee0                      JRN    F740h
0f940: c0e4                      JR     F790h
0f950: 1ff1                      BTST   0h,B1
0f960: ca04                      JREQ   F9B0h
0f970: 4e42                      MOVE   A2,B2
0f980: 0930                      CALL   B0
0f990: 4e62                      MOVE   A3,B2
0f9a0: 0930                      CALL   B0
0f9b0: 09af 7eff                 MMFM   SP,A0-A7,A9-A14
0f9d0: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
0f9f0: 0962                      RETS   2h
0fa00: 0750                      SETF   10h,0,1
0fa10: 4c25                      MOVE   A1,A5
0fa20: 5ea5                      MPYU   A5,A5
0fa30: 2465                      SLL    3h,A5
0fa40: 4c07                      MOVE   A0,A7
0fa50: 5ee7                      MPYU   A7,A7
0fa60: 2467                      SLL    3h,A7
0fa70: 0740                      SETF   20h,0,1
0fa80: 4c2a                      MOVE   A1,A10
0fa90: 244a                      SLL    2h,A10
0faa0: 5eea                      MPYU   A7,A10
0fab0: 4820                      CMP    A1,A0
0fac0: c403                      JRLT   FB00h
0fad0: 6b4e                      LMO    A10,A14
0fae0: ca0b                      JREQ   FBA0h
0faf0: c005                      JR     FB50h
0fb00: 4c0c                      MOVE   A0,A12
0fb10: 244c                      SLL    2h,A12
0fb20: 5eac                      MPYU   A5,A12
0fb30: 6b8e                      LMO    A12,A14
0fb40: ca05                      JREQ   FBA0h
0fb50: 63ca                      SLL    A14,A10
0fb60: 67cb                      SRL    A14,A11
0fb70: 554b                      OR     A10,A11
0fb80: 67c5                      SRL    A14,A5
0fb90: 67c7                      SRL    A14,A7
0fba0: 5729                      CLR    A9
0fbb0: 2feb                      SRL    1h,A11
0fbc0: 03ab                      NEG    A11
0fbd0: 4d6d                      MOVE   A11,A13
0fbe0: 2bcb                      SRA    2h,A11
0fbf0: 40ad                      ADD    A5,A13
0fc00: 40ed                      ADD    A7,A13
0fc10: 1fe0                      BTST   0h,A0
0fc20: ca03                      JREQ   FC60h
0fc30: 4ca9                      MOVE   A5,A9
0fc40: 2fe9                      SRL    1h,A9
0fc50: 44ad                      SUB    A5,A13
0fc60: 2bad                      SRA    3h,A13
0fc70: 412d                      ADD    A9,A13
0fc80: 0960                      RETS   

_frame_rect:
0fc90: 098f f800                 MMTM   SP,A0-A4
0fcb0: 099f 213e                 MMTM   SP,B2,B7,B10-B14
0fcd0: a7c0                      MOVE   -*A14,A0,1
0fce0: a7c1                      MOVE   -*A14,A1,1
0fcf0: 2601                      SLL    10h,A1
0fd00: ee20                      MOVY   A1,A0
0fd10: a7c2                      MOVE   -*A14,A2,1
0fd20: a7c3                      MOVE   -*A14,A3,1
0fd30: 2603                      SLL    10h,A3
0fd40: ee62                      MOVY   A3,A2
0fd50: a7c3                      MOVE   -*A14,A3,1
0fd60: a7c4                      MOVE   -*A14,A4,1
0fd70: 2604                      SLL    10h,A4
0fd80: ee83                      MOVY   A4,A3
0fd90: c00c                      JR     FE60h

_dm_frame_rect:
0fda0: 098f f800                 MMTM   SP,A0-A4
0fdc0: 099f 213e                 MMTM   SP,B2,B7,B10-B14
0fde0: a7c8                      MOVE   -*A14,A8,1
0fdf0: 9700                      MOVE   *A8+,A0,1
0fe00: 4421                      SUB    A1,A1
0fe10: ee01                      MOVY   A0,A1
0fe20: 9702                      MOVE   *A8+,A2,1
0fe30: 8703                      MOVE   *A8,A3,1
0fe40: 4484                      SUB    A4,A4
0fe50: ee64                      MOVY   A3,A4
0fe60: 07a8 0060 0000            MOVE   @60h,A8,1
0fe90: cb1a                      JRNE   10040h
0fea0: 07a8 0000 0000            MOVE   @0h,A8,1
0fed0: e102                      ADDXY  A8,A2
0fee0: 4c08                      MOVE   A0,A8
0fef0: e268                      SUBXY  A3,A8
0ff00: e268                      SUBXY  A3,A8
0ff10: c417                      JRLT   10090h
0ff20: c216                      JRLS   10090h
0ff30: ee60                      MOVY   A3,A0
0ff40: 4e07                      MOVE   A0,B7
0ff50: 4e42                      MOVE   A2,B2
0ff60: 0fe0                      FILL   XY
0ff70: e041                      ADDXY  A2,A1
0ff80: e281                      SUBXY  A4,A1
0ff90: 4e22                      MOVE   A1,B2
0ffa0: 0fe0                      FILL   XY
0ffb0: ec68                      MOVX   A3,A8
0ffc0: 4f07                      MOVE   A8,B7
0ffd0: e082                      ADDXY  A4,A2
0ffe0: 4e42                      MOVE   A2,B2
0fff0: 0fe0                      FILL   XY
10000: e260                      SUBXY  A3,A0
10010: e002                      ADDXY  A0,A2
10020: 4e42                      MOVE   A2,B2
10030: 0fe0                      FILL   XY
10040: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
10060: 09af 001f                 MMFM   SP,A0-A4
10080: 0962                      RETS   2h
10090: 4e07                      MOVE   A0,B7
100a0: 4e42                      MOVE   A2,B2
100b0: 0fe0                      FILL   XY
100c0: c0f7                      JR     10040h

_get_env:
100d0: a3af                      MOVE   A13,-*SP,1
100e0: 4dcd                      MOVE   A14,A13
100f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
10110: 4f02                      MOVE   A8,B2
10120: 09f0 0000 0000            MOVI   0h,B0
10150: 09d7 00b0                 MOVI   B0h,B7
10170: 00f3                      BLMOVE 1,1
10180: b7ee 0040                 MOVE   *SP(40h),A14,1
101a0: 97ed                      MOVE   *SP+,A13,1
101b0: 0962                      RETS   2h

_get_pixel:
101c0: a20f                      MOVE   A0,-*SP,1
101d0: a7c0                      MOVE   -*A14,A0,1
101e0: a7c8                      MOVE   -*A14,A8,1
101f0: 2608                      SLL    10h,A8
10200: ec08                      MOVX   A0,A8
10210: c003                      JR     10250h

_dm_get_pixel:
10220: a20f                      MOVE   A0,-*SP,1
10230: a7c8                      MOVE   -*A14,A8,1
10240: 8708                      MOVE   *A8,A8,1
10250: 07a0 0000 0000            MOVE   @0h,A0,1
10280: e008                      ADDXY  A0,A8
10290: e908                      CVXYL  A8,A8
102a0: fb08                      PIXT   *A8,A8
102b0: 97e0                      MOVE   *SP+,A0,1
102c0: 0962                      RETS   2h

_in_font:
102d0: 098f fc00                 MMTM   SP,A0-A5
102f0: 0550                      SETF   10h,0,0
10300: a7c0                      MOVE   -*A14,A0,1
10310: a7c1                      MOVE   -*A14,A1,1
10320: 4801                      CMP    A0,A1
10330: c503                      JRGE   10370h
10340: 5601                      XOR    A0,A1
10350: 5620                      XOR    A1,A0
10360: 5601                      XOR    A0,A1
10370: 07a8 0040 0000            MOVE   @40h,A8,1
103a0: b502 0130                 MOVE   *A8(130h),A2,0
103c0: b505 0140                 MOVE   *A8(140h),A5,0
103e0: b703 0230                 MOVE   *A8(230h),A3,1
10400: 4103                      ADD    A8,A3
10410: b504 0170                 MOVE   *A8(170h),A4,0
10430: 4840                      CMP    A2,A0
10440: c502                      JRGE   10470h
10450: 4c08                      MOVE   A0,A8
10460: c01a                      JR     10610h
10470: 4c84                      MOVE   A4,A4
10480: ca07                      JREQ   10500h
10490: 48a1                      CMP    A5,A1
104a0: c603                      JRLE   104E0h
104b0: 4ca8                      MOVE   A5,A8
104c0: 1028                      INC    A8
104d0: c013                      JR     10610h
104e0: 5708                      CLR    A8
104f0: c011                      JR     10610h
10500: 5708                      CLR    A8
10510: 4801                      CMP    A0,A1
10520: ce0e                      JRN    10610h
10530: 4c04                      MOVE   A0,A4
10540: 4c88                      MOVE   A4,A8
10550: 48a4                      CMP    A5,A4
10560: c70a                      JRGT   10610h
10570: 4444                      SUB    A2,A4
10580: 2484                      SLL    4h,A4
10590: 4064                      ADD    A3,A4
105a0: 8484                      MOVE   *A4,A4,0
105b0: 0504                      SEXT   A4,0
105c0: 0b44 0000                 CMPI   FFFFh,A4
105e0: ca02                      JREQ   10610h
105f0: 1020                      INC    A0
10600: c0ef                      JR     10500h
10610: 09af 003f                 MMFM   SP,A0-A5
10630: 0962                      RETS   2h

_move_pixel:
10640: a20f                      MOVE   A0,-*SP,1
10650: a7c8                      MOVE   -*A14,A8,1
10660: a7c0                      MOVE   -*A14,A0,1
10670: 2600                      SLL    10h,A0
10680: ee08                      MOVY   A0,A8
10690: a7c0                      MOVE   -*A14,A0,1
106a0: a7ce                      MOVE   -*A14,A14,1
106b0: 260e                      SLL    10h,A14
106c0: efc0                      MOVY   A14,A0
106d0: c004                      JR     10720h

_dm_move_pixel:
106e0: a20f                      MOVE   A0,-*SP,1
106f0: a7ce                      MOVE   -*A14,A14,1
10700: 97c8                      MOVE   *A14+,A8,1
10710: 97c0                      MOVE   *A14+,A0,1
10720: 07ae 0000 0000            MOVE   @0h,A14,1
10750: e1c0                      ADDXY  A14,A0
10760: e1c8                      ADDXY  A14,A8
10770: e908                      CVXYL  A8,A8
10780: fb08                      PIXT   *A8,A8
10790: f100                      PIXT   A8,*A0,XY
107a0: 97e0                      MOVE   *SP+,A0,1
107b0: b7ee 0020                 MOVE   *SP(20h),A14,1
107d0: 0962                      RETS   2h

_onarc:
107e0: 098f 2a3c                 MMTM   SP,A2,A4,A6,A10-A13
10800: 4dcd                      MOVE   A14,A13
10810: b7a2 ff40                 MOVE   *A13(FF40h),A2,1
10830: b7a4 ffc0                 MOVE   *A13(FFC0h),A4,1
10850: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
10870: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
10890: 09c8 0168                 MOVI   168h,A8
108b0: 6d0c                      MODS   A8,A12
108c0: c501                      JRGE   108E0h
108d0: 410c                      ADD    A8,A12
108e0: 0b4c ff4b                 CMPI   B4h,A12
10900: c44c                      JRLT   10DD0h
10910: 0b4c fef1                 CMPI   10Eh,A12
10930: c423                      JRLT   10B70h
10940: 4d8a                      MOVE   A12,A10
10950: 248a                      SLL    4h,A10
10960: 0b2a 5d00 0002            ADDI   25D00h,A10
10990: 0550                      SETF   10h,0,0
109a0: 854a                      MOVE   *A10,A10,0
109b0: 0b2a 0000 0001            ADDI   10000h,A10
109e0: 4ccb                      MOVE   A6,A11
109f0: 5d4b                      MPYS   A10,A11
10a00: 4d6a                      MOVE   A11,A10
10a10: 0b2a ffff 0000            ADDI   FFFFh,A10
10a40: 29ea                      SRA    11h,A10
10a50: 4588                      SUB    A12,A8
10a60: 2488                      SLL    4h,A8
10a70: 0b28 6de0 0002            ADDI   26DE0h,A8
10aa0: 8508                      MOVE   *A8,A8,0
10ab0: 09ec 0000 0001            MOVI   10000h,A12
10ae0: 450c                      SUB    A8,A12
10af0: 4c8b                      MOVE   A4,A11
10b00: 5d8b                      MPYS   A12,A11
10b10: 4d6c                      MOVE   A11,A12
10b20: 0b2c ffff 0000            ADDI   FFFFh,A12
10b50: 29ec                      SRA    11h,A12
10b60: c070                      JR     11270h
10b70: 09cb 010e                 MOVI   10Eh,A11
10b90: 458b                      SUB    A12,A11
10ba0: 248b                      SLL    4h,A11
10bb0: 0b2b 6de0 0002            ADDI   26DE0h,A11
10be0: 0550                      SETF   10h,0,0
10bf0: 856b                      MOVE   *A11,A11,0
10c00: 09ea 0000 0001            MOVI   10000h,A10
10c30: 456a                      SUB    A11,A10
10c40: 4ccb                      MOVE   A6,A11
10c50: 5d4b                      MPYS   A10,A11
10c60: 4d6a                      MOVE   A11,A10
10c70: 0b2a ffff 0000            ADDI   FFFFh,A10
10ca0: 29ea                      SRA    11h,A10
10cb0: 4d8b                      MOVE   A12,A11
10cc0: 248b                      SLL    4h,A11
10cd0: 0b2b 62a0 0002            ADDI   262A0h,A11
10d00: 856b                      MOVE   *A11,A11,0
10d10: 09ec 0000 0001            MOVI   10000h,A12
10d40: 456c                      SUB    A11,A12
10d50: 4c8b                      MOVE   A4,A11
10d60: 5d8b                      MPYS   A12,A11
10d70: 4d6c                      MOVE   A11,A12
10d80: 0b2c ffff 0000            ADDI   FFFFh,A12
10db0: 29ec                      SRA    11h,A12
10dc0: c04a                      JR     11270h
10dd0: 0b4c ffa5                 CMPI   5Ah,A12
10df0: c425                      JRLT   11050h
10e00: 4d8b                      MOVE   A12,A11
10e10: 248b                      SLL    4h,A11
10e20: 0b2b 6840 0002            ADDI   26840h,A11
10e50: 0550                      SETF   10h,0,0
10e60: 856b                      MOVE   *A11,A11,0
10e70: 09ea 0000 0001            MOVI   10000h,A10
10ea0: 456a                      SUB    A11,A10
10eb0: 4ccb                      MOVE   A6,A11
10ec0: 5d4b                      MPYS   A10,A11
10ed0: 4d6a                      MOVE   A11,A10
10ee0: 0b2a ffff 0000            ADDI   FFFFh,A10
10f10: 29ea                      SRA    11h,A10
10f20: 03ac                      NEG    A12
10f30: 0b0c 00b4                 ADDI   B4h,A12
10f50: 248c                      SLL    4h,A12
10f60: 0b2c 6de0 0002            ADDI   26DE0h,A12
10f90: 858c                      MOVE   *A12,A12,0
10fa0: 0b2c 0000 0001            ADDI   10000h,A12
10fd0: 4c8b                      MOVE   A4,A11
10fe0: 5d8b                      MPYS   A12,A11
10ff0: 4d6c                      MOVE   A11,A12
11000: 0b2c ffff 0000            ADDI   FFFFh,A12
11030: 29ec                      SRA    11h,A12
11040: c022                      JR     11270h
11050: 09ca 005a                 MOVI   5Ah,A10
11070: 458a                      SUB    A12,A10
11080: 248a                      SLL    4h,A10
11090: 0b2a 6de0 0002            ADDI   26DE0h,A10
110c0: 0550                      SETF   10h,0,0
110d0: 854a                      MOVE   *A10,A10,0
110e0: 0b2a 0000 0001            ADDI   10000h,A10
11110: 4ccb                      MOVE   A6,A11
11120: 5d4b                      MPYS   A10,A11
11130: 4d6a                      MOVE   A11,A10
11140: 0b2a ffff 0000            ADDI   FFFFh,A10
11170: 29ea                      SRA    11h,A10
11180: 248c                      SLL    4h,A12
11190: 0b2c 6de0 0002            ADDI   26DE0h,A12
111c0: 858c                      MOVE   *A12,A12,0
111d0: 0b2c 0000 0001            ADDI   10000h,A12
11200: 4c8b                      MOVE   A4,A11
11210: 5d8b                      MPYS   A12,A11
11220: 4d6c                      MOVE   A11,A12
11230: 0b2c ffff 0000            ADDI   FFFFh,A12
11260: 29ec                      SRA    11h,A12
11270: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
11290: 8348                      MOVE   A10,*A8,1
112a0: b7ab ff60                 MOVE   *A13(FF60h),A11,1
112c0: 838b                      MOVE   A12,*A11,1
112d0: 2be4                      SRA    1h,A4
112e0: 488c                      CMP    A4,A12
112f0: c607                      JRLE   11370h
11300: 4ccc                      MOVE   A6,A12
11310: 2bec                      SRA    1h,A12
11320: 498a                      CMP    A12,A10
11330: 182c                      MOVK   1h,A12
11340: c608                      JRLE   113D0h
11350: 458c                      SUB    A12,A12
11360: c006                      JR     113D0h
11370: 2be6                      SRA    1h,A6
11380: 48ca                      CMP    A6,A10
11390: c702                      JRGT   113C0h
113a0: 184c                      MOVK   2h,A12
113b0: c001                      JR     113D0h
113c0: 186c                      MOVK   3h,A12
113d0: 8382                      MOVE   A12,*A2,1
113e0: b7ee 0100                 MOVE   *SP(100h),A14,1
11400: 09af 3c54                 MMFM   SP,A2,A4,A6,A10-A13
11420: 0962                      RETS   2h

_patn_line:
11430: 0550                      SETF   10h,0,0
11440: 098f e000                 MMTM   SP,A0-A2
11460: 099f c100                 MMTM   SP,B0,B1,B7
11480: 07ba 0030 0000            MOVE   @30h,B10,1
114b0: 19fb                      MOVK   Fh,B11
114c0: 261b                      SLL    10h,B11
114d0: 505b                      AND    B2,B11
114e0: 2e9b                      SRL    Ch,B11
114f0: 417a                      ADD    B11,B10
11500: 855a                      MOVE   *B10,B10,0
11510: 4d5b                      MOVE   B10,B11
11520: 261b                      SLL    10h,B11
11530: ef7a                      MOVY   B11,B10
11540: e650                      CPW    B2,B0
11550: cd09                      JRNV   115F0h
11560: 0542                      SETF   2h,0,0
11570: 09e0 00b6 c000            MOVI   C00000B6h,A0
115a0: 1460                      SUBK   3h,A0
115b0: cb03                      JRNE   115F0h
115c0: 0320                      CLRC   
115d0: 08f2                      CLIP   
115e0: ca0c                      JREQ   116B0h
115f0: 02d0                      GETPS  B0
11600: 7a10                      RMO    B0,B0
11610: 03b0                      NEG    B0
11620: 1811                      MOVK   20h,B1
11630: 6611                      SRL    B0,B1
11640: 1431                      DEC    B1
11650: 4c5c                      MOVE   B2,B12
11660: 523c                      ANDN   B1,B12
11670: 03bc                      NEG    B12
11680: 699a                      RL     B12,B10
11690: 4d5d                      MOVE   B10,B13
116a0: 0a37                      PFILL  XY
116b0: 09bf 0083                 MMFM   SP,B0,B1,B7
116d0: 09af 0007                 MMFM   SP,A0-A2
116f0: 0960                      RETS   

_dm_patnfill_rect:
11700: 098f ff40                 MMTM   SP,A0-A7,A9
11720: 099f e73e                 MMTM   SP,B0-B2,B5-B7,B10-B14
11740: a7c8                      MOVE   -*A14,A8,1
11750: 4f0a                      MOVE   A8,B10
11760: 9757                      MOVE   *B10+,B7,1
11770: 8752                      MOVE   *B10,B2,1
11780: c00e                      JR     11870h

_patnfill_rect:
11790: 098f ff40                 MMTM   SP,A0-A7,A9
117b0: 099f e73e                 MMTM   SP,B0-B2,B5-B7,B10-B14
117d0: 4fce                      MOVE   A14,B14
117e0: a7d7                      MOVE   -*B14,B7,1
117f0: a7da                      MOVE   -*B14,B10,1
11800: a7d2                      MOVE   -*B14,B2,1
11810: a7db                      MOVE   -*B14,B11,1
11820: 4fde                      MOVE   B14,A14
11830: 261a                      SLL    10h,B10
11840: ef57                      MOVY   B10,B7
11850: 261b                      SLL    10h,B11
11860: ef72                      MOVY   B11,B2
11870: 07a8 0060 0000            MOVE   @60h,A8,1
118a0: cb33                      JRNE   11BE0h
118b0: 07ba 0000 0000            MOVE   @0h,B10,1
118e0: e152                      ADDXY  B10,B2
118f0: 0542                      SETF   2h,0,0
11900: 09e0 00b6 c000            MOVI   C00000B6h,A0
11930: 1460                      SUBK   3h,A0
11940: cb03                      JRNE   11980h
11950: 0320                      CLRC   
11960: 08f2                      CLIP   
11970: ca26                      JREQ   11BE0h
11980: 0550                      SETF   10h,0,0
11990: 4ef1                      MOVE   B7,A1
119a0: 4c22                      MOVE   A1,A2
119b0: 2e01                      SRL    10h,A1
119c0: 09e0 0000 0001            MOVI   10000h,A0
119f0: ee02                      MOVY   A0,A2
11a00: 4e47                      MOVE   A2,B7
11a10: 4e52                      MOVE   B2,A2
11a20: 02d0                      GETPS  B0
11a30: 7a10                      RMO    B0,B0
11a40: 03b0                      NEG    B0
11a50: 1811                      MOVK   20h,B1
11a60: 6611                      SRL    B0,B1
11a70: 1431                      DEC    B1
11a80: 4c50                      MOVE   B2,B0
11a90: 5230                      ANDN   B1,B0
11aa0: 03b0                      NEG    B0
11ab0: 07a9 0030 0000            MOVE   @30h,A9,1
11ae0: 4f2a                      MOVE   A9,B10
11af0: 19fb                      MOVK   Fh,B11
11b00: 261b                      SLL    10h,B11
11b10: 505b                      AND    B2,B11
11b20: 2e9b                      SRL    Ch,B11
11b30: 417a                      ADD    B11,B10
11b40: 855a                      MOVE   *B10,B10,0
11b50: 4d5b                      MOVE   B10,B11
11b60: 261b                      SLL    10h,B11
11b70: ef7a                      MOVY   B11,B10
11b80: 681a                      RL     B0,B10
11b90: 4d5d                      MOVE   B10,B13
11ba0: 0a37                      PFILL  XY
11bb0: e002                      ADDXY  A0,A2
11bc0: 4e42                      MOVE   A2,B2
11bd0: 3e01                      DSJS   A1,11AE0h
11be0: 09bf 7ce7                 MMFM   SP,B0-B2,B5-B7,B10-B14
11c00: 09af 02ff                 MMFM   SP,A0-A7,A9
11c20: 0962                      RETS   2h

_patnpen_line:
11c30: 098f ff60                 MMTM   SP,A0-A7,A9,A10
11c50: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
11c70: 09f0 2c90 0001            MOVI   12C90h,B0
11ca0: 07b1 0050 0000            MOVE   @50h,B1,1
11cd0: c012                      JR     11E00h

_dm_patnpen_line:
11ce0: 098f ff60                 MMTM   SP,A0-A7,A9,A10
11d00: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
11d20: 09f0 2c90 0001            MOVI   12C90h,B0
11d50: 07b1 0050 0000            MOVE   @50h,B1,1
11d80: c019                      JR     11F20h

_pen_line:
11d90: 098f ff60                 MMTM   SP,A0-A7,A9,A10
11db0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
11dd0: 09f0 2b70 0001            MOVI   12B70h,B0
11e00: a7c0                      MOVE   -*A14,A0,1
11e10: a7c1                      MOVE   -*A14,A1,1
11e20: 2601                      SLL    10h,A1
11e30: ee20                      MOVY   A1,A0
11e40: a7c1                      MOVE   -*A14,A1,1
11e50: a7c2                      MOVE   -*A14,A2,1
11e60: 2602                      SLL    10h,A2
11e70: ee41                      MOVY   A2,A1
11e80: 0d3f 0059                 CALLR  12430h
11ea0: c010                      JR     11FB0h

_dm_pen_line:
11eb0: 098f ff60                 MMTM   SP,A0-A7,A9,A10
11ed0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
11ef0: 09f0 2b70 0001            MOVI   12B70h,B0
11f20: a7c8                      MOVE   -*A14,A8,1
11f30: 9700                      MOVE   *A8+,A0,1
11f40: 8701                      MOVE   *A8,A1,1
11f50: 07a8 0060 0000            MOVE   @60h,A8,1
11f80: cb02                      JRNE   11FB0h
11f90: 0d3f 0048                 CALLR  12430h
11fb0: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
11fd0: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
11ff0: b7ee 0020                 MOVE   *SP(20h),A14,1
12010: 0962                      RETS   2h

_patnpen_polyline:
12020: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
12040: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
12060: 09f0 2c90 0001            MOVI   12C90h,B0
12090: 07b1 0050 0000            MOVE   @50h,B1,1
120c0: c012                      JR     121F0h

_dm_patnpen_polyline:
120d0: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
120f0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
12110: 09f0 2c90 0001            MOVI   12C90h,B0
12140: 07b1 0050 0000            MOVE   @50h,B1,1
12170: c015                      JR     122D0h

_pen_polyline:
12180: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
121a0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
121c0: 09f0 2b70 0001            MOVI   12B70h,B0
121f0: a7cb                      MOVE   -*A14,A11,1
12200: a7cd                      MOVE   -*A14,A13,1
12210: 07a8 0060 0000            MOVE   @60h,A8,1
12240: cb17                      JRNE   123C0h
12250: c00f                      JR     12350h

_dm_pen_polyline:
12260: 098f ff74                 MMTM   SP,A0-A7,A9-A11,A13
12280: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
122a0: 09f0 2b70 0001            MOVI   12B70h,B0
122d0: a7cd                      MOVE   -*A14,A13,1
122e0: 0550                      SETF   10h,0,0
122f0: 95ab                      MOVE   *A13+,A11,0
12300: 2fcb                      SRL    2h,A11
12310: 07a8 0060 0000            MOVE   @60h,A8,1
12340: cb07                      JRNE   123C0h
12350: 0550                      SETF   10h,0,0
12360: 142b                      DEC    A11
12370: 97a0                      MOVE   *A13+,A0,1
12380: 87a1                      MOVE   *A13,A1,1
12390: 0d3f 0008                 CALLR  12430h
123b0: 3cab                      DSJS   A11,12370h
123c0: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
123e0: 09af 2eff                 MMFM   SP,A0-A7,A9-A11,A13
12400: b7ee 0020                 MOVE   *SP(20h),A14,1
12420: 0962                      RETS   2h
12430: 182a                      MOVK   1h,A10
12440: 07a2 0000 0000            MOVE   @0h,A2,1
12470: e040                      ADDXY  A2,A0
12480: e041                      ADDXY  A2,A1
12490: 4c22                      MOVE   A1,A2
124a0: e202                      SUBXY  A0,A2
124b0: c906                      JRNC   12520h
124c0: 4c03                      MOVE   A0,A3
124d0: 4c20                      MOVE   A1,A0
124e0: 4c61                      MOVE   A3,A1
124f0: 4c43                      MOVE   A2,A3
12500: 5642                      CLR    A2
12510: e262                      SUBXY  A3,A2
12520: cb12                      JRNE   12650h
12530: cd02                      JRNV   12560h
12540: 03a2                      NEG    A2
12550: ec20                      MOVX   A1,A0
12560: 07a6 0020 0000            MOVE   @20h,A6,1
12590: eec9                      MOVY   A6,A9
125a0: 2e09                      SRL    10h,A9
125b0: e046                      ADDXY  A2,A6
125c0: 4c03                      MOVE   A0,A3
125d0: e066                      ADDXY  A3,A6
125e0: 2603                      SLL    10h,A3
125f0: 2606                      SLL    10h,A6
12600: 2e00                      SRL    10h,A0
12610: 56a5                      CLR    A5
12620: 5708                      CLR    A8
12630: 0130                      EXGPC  B0
12640: 0960                      RETS   
12650: 3200                      RL     10h,A0
12660: 09c3 7fff                 MOVI   7FFFh,A3
12680: ee03                      MOVY   A0,A3
12690: 4c45                      MOVE   A2,A5
126a0: 2e02                      SRL    10h,A2
126b0: 2605                      SLL    10h,A5
126c0: 5845                      DIVS   A2,A5
126d0: 4ca4                      MOVE   A5,A4
126e0: 2be4                      SRA    1h,A4
126f0: 07a1 0020 0000            MOVE   @20h,A1,1
12720: 4c26                      MOVE   A1,A6
12730: 2606                      SLL    10h,A6
12740: 4066                      ADD    A3,A6
12750: 2e01                      SRL    10h,A1
12760: 4c47                      MOVE   A2,A7
12770: 4427                      SUB    A1,A7
12780: c722                      JRGT   129B0h
12790: 0387                      ABS    A7
127a0: 4c49                      MOVE   A2,A9
127b0: 4c41                      MOVE   A2,A1
127c0: 4ca5                      MOVE   A5,A5
127d0: c60f                      JRLE   128D0h
127e0: 4ca8                      MOVE   A5,A8
127f0: 56a5                      CLR    A5
12800: 4086                      ADD    A4,A6
12810: 0130                      EXGPC  B0
12820: 4486                      SUB    A4,A6
12830: 4d04                      MOVE   A8,A4
12840: 5708                      CLR    A8
12850: 4ce9                      MOVE   A7,A9
12860: 0130                      EXGPC  B0
12870: 4c85                      MOVE   A4,A5
12880: 2be4                      SRA    1h,A4
12890: 4083                      ADD    A4,A3
128a0: 4c29                      MOVE   A1,A9
128b0: 0130                      EXGPC  B0
128c0: 0960                      RETS   
128d0: 5708                      CLR    A8
128e0: 4083                      ADD    A4,A3
128f0: 0130                      EXGPC  B0
12900: 4483                      SUB    A4,A3
12910: 4ca4                      MOVE   A5,A4
12920: 56a5                      CLR    A5
12930: 4ce9                      MOVE   A7,A9
12940: 0130                      EXGPC  B0
12950: 4c88                      MOVE   A4,A8
12960: 2be4                      SRA    1h,A4
12970: 4086                      ADD    A4,A6
12980: 4c29                      MOVE   A1,A9
12990: 0130                      EXGPC  B0
129a0: 0960                      RETS   
129b0: 4c29                      MOVE   A1,A9
129c0: 4ca5                      MOVE   A5,A5
129d0: c60d                      JRLE   12AB0h
129e0: 4ca8                      MOVE   A5,A8
129f0: 56a5                      CLR    A5
12a00: 4086                      ADD    A4,A6
12a10: 0130                      EXGPC  B0
12a20: 4d05                      MOVE   A8,A5
12a30: 4083                      ADD    A4,A3
12a40: 4ce9                      MOVE   A7,A9
12a50: 0130                      EXGPC  B0
12a60: 5708                      CLR    A8
12a70: 4486                      SUB    A4,A6
12a80: 4c29                      MOVE   A1,A9
12a90: 0130                      EXGPC  B0
12aa0: 0960                      RETS   
12ab0: 5708                      CLR    A8
12ac0: 4083                      ADD    A4,A3
12ad0: 0130                      EXGPC  B0
12ae0: 4ca8                      MOVE   A5,A8
12af0: 4086                      ADD    A4,A6
12b00: 4ce9                      MOVE   A7,A9
12b10: 0130                      EXGPC  B0
12b20: 56a5                      CLR    A5
12b30: 4483                      SUB    A4,A3
12b40: 4c29                      MOVE   A1,A9
12b50: 0130                      EXGPC  B0
12b60: 0960                      RETS   
12b70: 4d29                      MOVE   A9,A9
12b80: c60e                      JRLE   12C70h
12b90: 4e0b                      MOVE   A0,B11
12ba0: 261b                      SLL    10h,B11
12bb0: a21f                      MOVE   B0,-*SP,1
12bc0: 4e60                      MOVE   A3,B0
12bd0: 4ea1                      MOVE   A5,B1
12be0: 4ec7                      MOVE   A6,B7
12bf0: 4f0a                      MOVE   A8,B10
12c00: 0efa                      TFILL  XY
12c10: 3c49                      DSJS   A9,12C00h
12c20: 4e13                      MOVE   B0,A3
12c30: 4ef6                      MOVE   B7,A6
12c40: 4f70                      MOVE   B11,A0
12c50: 2e00                      SRL    10h,A0
12c60: 97f0                      MOVE   *SP+,B0,1
12c70: 0130                      EXGPC  B0
12c80: c0ee                      JR     12B70h
12c90: 4d29                      MOVE   A9,A9
12ca0: c60d                      JRLE   12D80h
12cb0: ee60                      MOVY   A3,A0
12cc0: 4e02                      MOVE   A0,B2
12cd0: 3212                      RL     10h,B2
12ce0: 1020                      INC    A0
12cf0: eec2                      MOVY   A6,A2
12d00: e262                      SUBXY  A3,A2
12d10: ed42                      MOVX   A10,A2
12d20: 3202                      RL     10h,A2
12d30: 4e47                      MOVE   A2,B7
12d40: 0931                      CALL   B1
12d50: 40a3                      ADD    A5,A3
12d60: 4106                      ADD    A8,A6
12d70: 3da9                      DSJS   A9,12CB0h
12d80: 0130                      EXGPC  B0
12d90: c0ef                      JR     12C90h

_pen_ovalarc:
12da0: a3af                      MOVE   A13,-*SP,1
12db0: 4dcd                      MOVE   A14,A13
12dc0: 4508                      SUB    A8,A8
12dd0: 0788 7600 0002            MOVE   A8,@27600h,1
12e00: 0788 7660 0002            MOVE   A8,@27660h,1
12e30: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
12e50: 0788 76a0 0002            MOVE   A8,@276A0h,1
12e80: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
12ea0: 0788 7640 0002            MOVE   A8,@27640h,1
12ed0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
12ef0: 0788 75e0 0002            MOVE   A8,@275E0h,1
12f20: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
12f40: 0788 7620 0002            MOVE   A8,@27620h,1
12f70: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
12f90: 0788 75c0 0002            MOVE   A8,@275C0h,1
12fc0: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
12fe0: 0788 75a0 0002            MOVE   A8,@275A0h,1
13010: 0d5f 44a0 0001            CALLA  144A0h
13040: b7ee 0040                 MOVE   *SP(40h),A14,1
13060: 97ed                      MOVE   *SP+,A13,1
13070: 0962                      RETS   2h

_dm_pen_ovalarc:
13080: 098f 000c                 MMTM   SP,A12,A13
130a0: 4dcd                      MOVE   A14,A13
130b0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
130d0: 4508                      SUB    A8,A8
130e0: 0788 7600 0002            MOVE   A8,@27600h,1
13110: 0788 7660 0002            MOVE   A8,@27660h,1
13140: 0570                      SETF   10h,1,0
13150: 9588                      MOVE   *A12+,A8,0
13160: 0788 76a0 0002            MOVE   A8,@276A0h,1
13190: 9588                      MOVE   *A12+,A8,0
131a0: 0788 7640 0002            MOVE   A8,@27640h,1
131d0: 9588                      MOVE   *A12+,A8,0
131e0: 0788 75e0 0002            MOVE   A8,@275E0h,1
13210: 9588                      MOVE   *A12+,A8,0
13220: 0788 7620 0002            MOVE   A8,@27620h,1
13250: 9588                      MOVE   *A12+,A8,0
13260: 0788 75c0 0002            MOVE   A8,@275C0h,1
13290: 858c                      MOVE   *A12,A12,0
132a0: 078c 75a0 0002            MOVE   A12,@275A0h,1
132d0: 0d5f 44a0 0001            CALLA  144A0h
13300: b7ee 0060                 MOVE   *SP(60h),A14,1
13320: 09af 3000                 MMFM   SP,A12,A13
13340: 0962                      RETS   2h

_pen_piearc:
13350: a3af                      MOVE   A13,-*SP,1
13360: 4dcd                      MOVE   A14,A13
13370: 1828                      MOVK   1h,A8
13380: 0788 7600 0002            MOVE   A8,@27600h,1
133b0: 4508                      SUB    A8,A8
133c0: 0788 7660 0002            MOVE   A8,@27660h,1
133f0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13410: 0788 76a0 0002            MOVE   A8,@276A0h,1
13440: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
13460: 0788 7640 0002            MOVE   A8,@27640h,1
13490: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
134b0: 0788 75e0 0002            MOVE   A8,@275E0h,1
134e0: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
13500: 0788 7620 0002            MOVE   A8,@27620h,1
13530: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
13550: 0788 75c0 0002            MOVE   A8,@275C0h,1
13580: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
135a0: 0788 75a0 0002            MOVE   A8,@275A0h,1
135d0: 0d5f 44a0 0001            CALLA  144A0h
13600: b7ee 0040                 MOVE   *SP(40h),A14,1
13620: 97ed                      MOVE   *SP+,A13,1
13630: 0962                      RETS   2h

_dm_pen_piearc:
13640: 098f 000c                 MMTM   SP,A12,A13
13660: 4dcd                      MOVE   A14,A13
13670: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
13690: 1828                      MOVK   1h,A8
136a0: 0788 7600 0002            MOVE   A8,@27600h,1
136d0: 4508                      SUB    A8,A8
136e0: 0788 7660 0002            MOVE   A8,@27660h,1
13710: 0570                      SETF   10h,1,0
13720: 9588                      MOVE   *A12+,A8,0
13730: 0788 76a0 0002            MOVE   A8,@276A0h,1
13760: 9588                      MOVE   *A12+,A8,0
13770: 0788 7640 0002            MOVE   A8,@27640h,1
137a0: 9588                      MOVE   *A12+,A8,0
137b0: 0788 75e0 0002            MOVE   A8,@275E0h,1
137e0: 9588                      MOVE   *A12+,A8,0
137f0: 0788 7620 0002            MOVE   A8,@27620h,1
13820: 9588                      MOVE   *A12+,A8,0
13830: 0788 75c0 0002            MOVE   A8,@275C0h,1
13860: 858c                      MOVE   *A12,A12,0
13870: 078c 75a0 0002            MOVE   A12,@275A0h,1
138a0: 0d5f 44a0 0001            CALLA  144A0h
138d0: b7ee 0060                 MOVE   *SP(60h),A14,1
138f0: 09af 3000                 MMFM   SP,A12,A13
13910: 0962                      RETS   2h

_patnpen_ovalarc:
13920: a3af                      MOVE   A13,-*SP,1
13930: 4dcd                      MOVE   A14,A13
13940: 4508                      SUB    A8,A8
13950: 0788 7600 0002            MOVE   A8,@27600h,1
13980: 1828                      MOVK   1h,A8
13990: 0788 7660 0002            MOVE   A8,@27660h,1
139c0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
139e0: 0788 76a0 0002            MOVE   A8,@276A0h,1
13a10: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
13a30: 0788 7640 0002            MOVE   A8,@27640h,1
13a60: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
13a80: 0788 75e0 0002            MOVE   A8,@275E0h,1
13ab0: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
13ad0: 0788 7620 0002            MOVE   A8,@27620h,1
13b00: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
13b20: 0788 75c0 0002            MOVE   A8,@275C0h,1
13b50: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
13b70: 0788 75a0 0002            MOVE   A8,@275A0h,1
13ba0: 0d5f 44a0 0001            CALLA  144A0h
13bd0: b7ee 0040                 MOVE   *SP(40h),A14,1
13bf0: 97ed                      MOVE   *SP+,A13,1
13c00: 0962                      RETS   2h

_dm_patnpen_ovalarc:
13c10: 098f 000c                 MMTM   SP,A12,A13
13c30: 4dcd                      MOVE   A14,A13
13c40: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
13c60: 4508                      SUB    A8,A8
13c70: 0788 7600 0002            MOVE   A8,@27600h,1
13ca0: 1828                      MOVK   1h,A8
13cb0: 0788 7660 0002            MOVE   A8,@27660h,1
13ce0: 0570                      SETF   10h,1,0
13cf0: 9588                      MOVE   *A12+,A8,0
13d00: 0788 76a0 0002            MOVE   A8,@276A0h,1
13d30: 9588                      MOVE   *A12+,A8,0
13d40: 0788 7640 0002            MOVE   A8,@27640h,1
13d70: 9588                      MOVE   *A12+,A8,0
13d80: 0788 75e0 0002            MOVE   A8,@275E0h,1
13db0: 9588                      MOVE   *A12+,A8,0
13dc0: 0788 7620 0002            MOVE   A8,@27620h,1
13df0: 9588                      MOVE   *A12+,A8,0
13e00: 0788 75c0 0002            MOVE   A8,@275C0h,1
13e30: 858c                      MOVE   *A12,A12,0
13e40: 078c 75a0 0002            MOVE   A12,@275A0h,1
13e70: 0d5f 44a0 0001            CALLA  144A0h
13ea0: b7ee 0060                 MOVE   *SP(60h),A14,1
13ec0: 09af 3000                 MMFM   SP,A12,A13
13ee0: 0962                      RETS   2h

_patnpen_piearc:
13ef0: a3af                      MOVE   A13,-*SP,1
13f00: 4dcd                      MOVE   A14,A13
13f10: 1828                      MOVK   1h,A8
13f20: 0788 7600 0002            MOVE   A8,@27600h,1
13f50: 0788 7660 0002            MOVE   A8,@27660h,1
13f80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
13fa0: 0788 76a0 0002            MOVE   A8,@276A0h,1
13fd0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
13ff0: 0788 7640 0002            MOVE   A8,@27640h,1
14020: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
14040: 0788 75e0 0002            MOVE   A8,@275E0h,1
14070: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
14090: 0788 7620 0002            MOVE   A8,@27620h,1
140c0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
140e0: 0788 75c0 0002            MOVE   A8,@275C0h,1
14110: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
14130: 0788 75a0 0002            MOVE   A8,@275A0h,1
14160: 0d5f 44a0 0001            CALLA  144A0h
14190: b7ee 0040                 MOVE   *SP(40h),A14,1
141b0: 97ed                      MOVE   *SP+,A13,1
141c0: 0962                      RETS   2h

_dm_patnpen_piearc:
141d0: 098f 000c                 MMTM   SP,A12,A13
141f0: 4dcd                      MOVE   A14,A13
14200: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
14220: 1828                      MOVK   1h,A8
14230: 0788 7600 0002            MOVE   A8,@27600h,1
14260: 0788 7660 0002            MOVE   A8,@27660h,1
14290: 0570                      SETF   10h,1,0
142a0: 9588                      MOVE   *A12+,A8,0
142b0: 0788 76a0 0002            MOVE   A8,@276A0h,1
142e0: 9588                      MOVE   *A12+,A8,0
142f0: 0788 7640 0002            MOVE   A8,@27640h,1
14320: 9588                      MOVE   *A12+,A8,0
14330: 0788 75e0 0002            MOVE   A8,@275E0h,1
14360: 9588                      MOVE   *A12+,A8,0
14370: 0788 7620 0002            MOVE   A8,@27620h,1
143a0: 9588                      MOVE   *A12+,A8,0
143b0: 0788 75c0 0002            MOVE   A8,@275C0h,1
143e0: 858c                      MOVE   *A12,A12,0
143f0: 078c 75a0 0002            MOVE   A12,@275A0h,1
14420: 0d5f 44a0 0001            CALLA  144A0h
14450: b7ee 0060                 MOVE   *SP(60h),A14,1
14470: 09af 3000                 MMFM   SP,A12,A13
14490: 0962                      RETS   2h

_pen_eliparc:
144a0: 098f 002c                 MMTM   SP,A10,A12,A13
144c0: 4dcd                      MOVE   A14,A13
144d0: 0b0e 00c0                 ADDI   C0h,A14
144f0: 07a8 0060 0000            MOVE   @60h,A8,1
14520: cb00 0292                 JRNE   16E60h
14540: 09e8 76c0 0002            MOVI   276C0h,A8
14570: 0788 7680 0002            MOVE   A8,@27680h,1
145a0: 07ac 76a0 0002            MOVE   @276A0h,A12,1
145d0: 0570                      SETF   10h,1,0
145e0: 8188                      MOVE   A12,*A8,0
145f0: 07ac 7640 0002            MOVE   @27640h,A12,1
14620: b188 0010                 MOVE   A12,*A8(10h),0
14640: 07ac 7660 0002            MOVE   @27660h,A12,1
14670: b188 00a0                 MOVE   A12,*A8(A0h),0
14690: 07ac 76a0 0002            MOVE   @276A0h,A12,1
146c0: 2bec                      SRA    1h,A12
146d0: 078c 7780 0002            MOVE   A12,@27780h,1
14700: 07ac 7640 0002            MOVE   @27640h,A12,1
14730: 2bec                      SRA    1h,A12
14740: 078c 77a0 0002            MOVE   A12,@277A0h,1
14770: 07ac 75a0 0002            MOVE   @275A0h,A12,1
147a0: 0b4c fe98                 CMPI   167h,A12
147c0: c700 0228                 JRGT   16A60h
147e0: 0b4c 0166                 CMPI   FE99h,A12
14800: c400 0224                 JRLT   16A60h
14820: 4d8c                      MOVE   A12,A12
14830: c539                      JRGE   14BD0h
14840: a3cf                      MOVE   A14,-*SP,1
14850: 4dac                      MOVE   A13,A12
14860: 0b0c 00a0                 ADDI   A0h,A12
14880: 938e                      MOVE   A12,*A14+,1
14890: 4dac                      MOVE   A13,A12
148a0: 0b0c 0040                 ADDI   40h,A12
148c0: 938e                      MOVE   A12,*A14+,1
148d0: 4dac                      MOVE   A13,A12
148e0: 0b0c 0060                 ADDI   60h,A12
14900: 938e                      MOVE   A12,*A14+,1
14910: 07ac 75c0 0002            MOVE   @275C0h,A12,1
14940: 07a8 75a0 0002            MOVE   @275A0h,A8,1
14970: 410c                      ADD    A8,A12
14980: 938e                      MOVE   A12,*A14+,1
14990: d60e 7640 0002            MOVE   @27640h,*A14+,1
149c0: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
149f0: 0d5f 07e0 0001            CALLA  107E0h
14a20: a3cf                      MOVE   A14,-*SP,1
14a30: 4dac                      MOVE   A13,A12
14a40: 0b0c 0080                 ADDI   80h,A12
14a60: 938e                      MOVE   A12,*A14+,1
14a70: 93ae                      MOVE   A13,*A14+,1
14a80: 4da8                      MOVE   A13,A8
14a90: 1008                      ADDK   20h,A8
14aa0: 930e                      MOVE   A8,*A14+,1
14ab0: d60e 75c0 0002            MOVE   @275C0h,*A14+,1
14ae0: d60e 7640 0002            MOVE   @27640h,*A14+,1
14b10: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
14b40: 0d5f 07e0 0001            CALLA  107E0h
14b70: 07a8 7600 0002            MOVE   @27600h,A8,1
14ba0: cb3a                      JRNE   14F50h
14bb0: c000 00c9                 JR     15860h
14bd0: a3cf                      MOVE   A14,-*SP,1
14be0: 4dac                      MOVE   A13,A12
14bf0: 0b0c 00a0                 ADDI   A0h,A12
14c10: 938e                      MOVE   A12,*A14+,1
14c20: 4dac                      MOVE   A13,A12
14c30: 0b0c 0040                 ADDI   40h,A12
14c50: 938e                      MOVE   A12,*A14+,1
14c60: 4dac                      MOVE   A13,A12
14c70: 0b0c 0060                 ADDI   60h,A12
14c90: 938e                      MOVE   A12,*A14+,1
14ca0: d60e 75c0 0002            MOVE   @275C0h,*A14+,1
14cd0: d60e 7640 0002            MOVE   @27640h,*A14+,1
14d00: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
14d30: 0d5f 07e0 0001            CALLA  107E0h
14d60: a3cf                      MOVE   A14,-*SP,1
14d70: 4da8                      MOVE   A13,A8
14d80: 0b08 0080                 ADDI   80h,A8
14da0: 930e                      MOVE   A8,*A14+,1
14db0: 93ae                      MOVE   A13,*A14+,1
14dc0: 4da8                      MOVE   A13,A8
14dd0: 1008                      ADDK   20h,A8
14de0: 930e                      MOVE   A8,*A14+,1
14df0: 07a8 75c0 0002            MOVE   @275C0h,A8,1
14e20: 07ac 75a0 0002            MOVE   @275A0h,A12,1
14e50: 4188                      ADD    A12,A8
14e60: 930e                      MOVE   A8,*A14+,1
14e70: d60e 7640 0002            MOVE   @27640h,*A14+,1
14ea0: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
14ed0: 0d5f 07e0 0001            CALLA  107E0h
14f00: 07ac 7600 0002            MOVE   @27600h,A12,1
14f30: ca00 0091                 JREQ   15860h
14f50: 07ac 7660 0002            MOVE   @27660h,A12,1
14f80: cb4a                      JRNE   15430h
14f90: a3cf                      MOVE   A14,-*SP,1
14fa0: b7a8 0040                 MOVE   *A13(40h),A8,1
14fc0: 07ac 7620 0002            MOVE   @27620h,A12,1
14ff0: 4188                      ADD    A12,A8
15000: 930e                      MOVE   A8,*A14+,1
15010: b7a8 0060                 MOVE   *A13(60h),A8,1
15030: 07ac 75e0 0002            MOVE   @275E0h,A12,1
15060: 4188                      ADD    A12,A8
15070: 930e                      MOVE   A8,*A14+,1
15080: 07a8 77a0 0002            MOVE   @277A0h,A8,1
150b0: 07ac 7620 0002            MOVE   @27620h,A12,1
150e0: 4188                      ADD    A12,A8
150f0: 930e                      MOVE   A8,*A14+,1
15100: 07a8 7780 0002            MOVE   @27780h,A8,1
15130: 07ac 75e0 0002            MOVE   @275E0h,A12,1
15160: 4188                      ADD    A12,A8
15170: 930e                      MOVE   A8,*A14+,1
15180: 0d5f 1d90 0001            CALLA  11D90h
151b0: a3cf                      MOVE   A14,-*SP,1
151c0: 87ac                      MOVE   *A13,A12,1
151d0: 07a8 7620 0002            MOVE   @27620h,A8,1
15200: 410c                      ADD    A8,A12
15210: 938e                      MOVE   A12,*A14+,1
15220: b7ac 0020                 MOVE   *A13(20h),A12,1
15240: 07a8 75e0 0002            MOVE   @275E0h,A8,1
15270: 410c                      ADD    A8,A12
15280: 938e                      MOVE   A12,*A14+,1
15290: 07ac 77a0 0002            MOVE   @277A0h,A12,1
152c0: 07a8 7620 0002            MOVE   @27620h,A8,1
152f0: 410c                      ADD    A8,A12
15300: 938e                      MOVE   A12,*A14+,1
15310: 07ac 7780 0002            MOVE   @27780h,A12,1
15340: 07a8 75e0 0002            MOVE   @275E0h,A8,1
15370: 410c                      ADD    A8,A12
15380: 938e                      MOVE   A12,*A14+,1
15390: 0d5f 1d90 0001            CALLA  11D90h
153c0: b7ac 00a0                 MOVE   *A13(A0h),A12,1
153e0: b7a8 0080                 MOVE   *A13(80h),A8,1
15400: 490c                      CMP    A8,A12
15410: cb73                      JRNE   15B50h
15420: c049                      JR     158C0h
15430: a3cf                      MOVE   A14,-*SP,1
15440: b7a8 0040                 MOVE   *A13(40h),A8,1
15460: 07ac 7620 0002            MOVE   @27620h,A12,1
15490: 4188                      ADD    A12,A8
154a0: 930e                      MOVE   A8,*A14+,1
154b0: b7a8 0060                 MOVE   *A13(60h),A8,1
154d0: 07ac 75e0 0002            MOVE   @275E0h,A12,1
15500: 4188                      ADD    A12,A8
15510: 930e                      MOVE   A8,*A14+,1
15520: 07a8 77a0 0002            MOVE   @277A0h,A8,1
15550: 07ac 7620 0002            MOVE   @27620h,A12,1
15580: 4188                      ADD    A12,A8
15590: 930e                      MOVE   A8,*A14+,1
155a0: 07a8 7780 0002            MOVE   @27780h,A8,1
155d0: 07ac 75e0 0002            MOVE   @275E0h,A12,1
15600: 4188                      ADD    A12,A8
15610: 930e                      MOVE   A8,*A14+,1
15620: 0d5f 1c30 0001            CALLA  11C30h
15650: a3cf                      MOVE   A14,-*SP,1
15660: 87ac                      MOVE   *A13,A12,1
15670: 07a8 7620 0002            MOVE   @27620h,A8,1
156a0: 410c                      ADD    A8,A12
156b0: 938e                      MOVE   A12,*A14+,1
156c0: b7ac 0020                 MOVE   *A13(20h),A12,1
156e0: 07a8 75e0 0002            MOVE   @275E0h,A8,1
15710: 410c                      ADD    A8,A12
15720: 938e                      MOVE   A12,*A14+,1
15730: 07ac 77a0 0002            MOVE   @277A0h,A12,1
15760: 07a8 7620 0002            MOVE   @27620h,A8,1
15790: 410c                      ADD    A8,A12
157a0: 938e                      MOVE   A12,*A14+,1
157b0: 07ac 7780 0002            MOVE   @27780h,A12,1
157e0: 07a8 75e0 0002            MOVE   @275E0h,A8,1
15810: 410c                      ADD    A8,A12
15820: 938e                      MOVE   A12,*A14+,1
15830: 0d5f 1c30 0001            CALLA  11C30h
15860: b7ac 00a0                 MOVE   *A13(A0h),A12,1
15880: b7a8 0080                 MOVE   *A13(80h),A8,1
158a0: 490c                      CMP    A8,A12
158b0: cb29                      JRNE   15B50h
158c0: 07a8 75a0 0002            MOVE   @275A0h,A8,1
158f0: 0b48 ff4b                 CMPI   B4h,A8
15910: c523                      JRGE   15B50h
15920: 0b48 00b3                 CMPI   FF4Ch,A8
15940: c620                      JRLE   15B50h
15950: 1fec                      BTST   0h,A12
15960: cb0f                      JRNE   15A60h
15970: a3cf                      MOVE   A14,-*SP,1
15980: d3ae 0040                 MOVE   *A13(40h),*A14+,1
159a0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
159c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
159e0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
15a00: 938e                      MOVE   A12,*A14+,1
15a10: 0d5f 6eb0 0001            CALLA  16EB0h
15a40: c000 0140                 JR     16E60h
15a60: a3cf                      MOVE   A14,-*SP,1
15a70: d3ae 0000                 MOVE   *A13(0h),*A14+,1
15a90: d3ae 0020                 MOVE   *A13(20h),*A14+,1
15ab0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
15ad0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
15af0: 938e                      MOVE   A12,*A14+,1
15b00: 0d5f 6eb0 0001            CALLA  16EB0h
15b30: c000 0131                 JR     16E60h
15b50: 4d8c                      MOVE   A12,A12
15b60: ca37                      JREQ   15EE0h
15b70: 142c                      DEC    A12
15b80: ca25                      JREQ   15DE0h
15b90: 142c                      DEC    A12
15ba0: ca13                      JREQ   15CE0h
15bb0: 0d8c 0040                 DSJ    A12,15FD0h
15bd0: a3cf                      MOVE   A14,-*SP,1
15be0: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
15c10: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
15c40: d3ae 0040                 MOVE   *A13(40h),*A14+,1
15c60: d3ae 0060                 MOVE   *A13(60h),*A14+,1
15c80: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
15ca0: 0d5f 6eb0 0001            CALLA  16EB0h
15cd0: c02f                      JR     15FD0h
15ce0: a3cf                      MOVE   A14,-*SP,1
15cf0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
15d10: d3ae 0060                 MOVE   *A13(60h),*A14+,1
15d30: 458c                      SUB    A12,A12
15d40: 938e                      MOVE   A12,*A14+,1
15d50: d60e 7780 0002            MOVE   @27780h,*A14+,1
15d80: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
15da0: 0d5f 6eb0 0001            CALLA  16EB0h
15dd0: c01f                      JR     15FD0h
15de0: a3cf                      MOVE   A14,-*SP,1
15df0: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
15e20: 458c                      SUB    A12,A12
15e30: 938e                      MOVE   A12,*A14+,1
15e40: d3ae 0040                 MOVE   *A13(40h),*A14+,1
15e60: d3ae 0060                 MOVE   *A13(60h),*A14+,1
15e80: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
15ea0: 0d5f 6eb0 0001            CALLA  16EB0h
15ed0: c00f                      JR     15FD0h
15ee0: a3cf                      MOVE   A14,-*SP,1
15ef0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
15f10: d3ae 0060                 MOVE   *A13(60h),*A14+,1
15f30: d60e 7640 0002            MOVE   @27640h,*A14+,1
15f60: d60e 7780 0002            MOVE   @27780h,*A14+,1
15f90: 938e                      MOVE   A12,*A14+,1
15fa0: 0d5f 6eb0 0001            CALLA  16EB0h
15fd0: b7ac 0080                 MOVE   *A13(80h),A12,1
15ff0: ca37                      JREQ   16370h
16000: 142c                      DEC    A12
16010: ca24                      JREQ   16260h
16020: 142c                      DEC    A12
16030: ca12                      JREQ   16160h
16040: 0d8c 0040                 DSJ    A12,16460h
16060: a3cf                      MOVE   A14,-*SP,1
16070: d3ae 0000                 MOVE   *A13(0h),*A14+,1
16090: d3ae 0020                 MOVE   *A13(20h),*A14+,1
160b0: 458c                      SUB    A12,A12
160c0: 938e                      MOVE   A12,*A14+,1
160d0: d60e 7780 0002            MOVE   @27780h,*A14+,1
16100: d3ae 0080                 MOVE   *A13(80h),*A14+,1
16120: 0d5f 6eb0 0001            CALLA  16EB0h
16150: c030                      JR     16460h
16160: a3cf                      MOVE   A14,-*SP,1
16170: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
161a0: 458c                      SUB    A12,A12
161b0: 938e                      MOVE   A12,*A14+,1
161c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
161e0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
16200: d3ae 0080                 MOVE   *A13(80h),*A14+,1
16220: 0d5f 6eb0 0001            CALLA  16EB0h
16250: c020                      JR     16460h
16260: a3cf                      MOVE   A14,-*SP,1
16270: d3ae 0000                 MOVE   *A13(0h),*A14+,1
16290: d3ae 0020                 MOVE   *A13(20h),*A14+,1
162b0: d60e 7640 0002            MOVE   @27640h,*A14+,1
162e0: d60e 7780 0002            MOVE   @27780h,*A14+,1
16310: d3ae 0080                 MOVE   *A13(80h),*A14+,1
16330: 0d5f 6eb0 0001            CALLA  16EB0h
16360: c00f                      JR     16460h
16370: a3cf                      MOVE   A14,-*SP,1
16380: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
163b0: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
163e0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
16400: d3ae 0020                 MOVE   *A13(20h),*A14+,1
16420: 938e                      MOVE   A12,*A14+,1
16430: 0d5f 6eb0 0001            CALLA  16EB0h
16460: b7ac 0080                 MOVE   *A13(80h),A12,1
16480: b7a8 00a0                 MOVE   *A13(A0h),A8,1
164a0: 490c                      CMP    A8,A12
164b0: c703                      JRGT   164F0h
164c0: 108c                      ADDK   4h,A12
164d0: b38d 0080                 MOVE   A12,*A13(80h),1
164f0: 4d0a                      MOVE   A8,A10
16500: 102a                      INC    A10
16510: 498a                      CMP    A12,A10
16520: c500 0092                 JRGE   16E60h
16540: 186c                      MOVK   3h,A12
16550: 514c                      AND    A10,A12
16560: 4d88                      MOVE   A12,A8
16570: ca37                      JREQ   168F0h
16580: 1428                      DEC    A8
16590: ca24                      JREQ   167E0h
165a0: 1428                      DEC    A8
165b0: ca13                      JREQ   166F0h
165c0: 0d88 0042                 DSJ    A8,16A00h
165e0: a3cf                      MOVE   A14,-*SP,1
165f0: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16620: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
16650: 4508                      SUB    A8,A8
16660: 930e                      MOVE   A8,*A14+,1
16670: d60e 7780 0002            MOVE   @27780h,*A14+,1
166a0: 938e                      MOVE   A12,*A14+,1
166b0: 0d5f 6eb0 0001            CALLA  16EB0h
166e0: c031                      JR     16A00h
166f0: a3cf                      MOVE   A14,-*SP,1
16700: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16730: 4508                      SUB    A8,A8
16740: 930e                      MOVE   A8,*A14+,1
16750: 930e                      MOVE   A8,*A14+,1
16760: d60e 7780 0002            MOVE   @27780h,*A14+,1
16790: 938e                      MOVE   A12,*A14+,1
167a0: 0d5f 6eb0 0001            CALLA  16EB0h
167d0: c022                      JR     16A00h
167e0: a3cf                      MOVE   A14,-*SP,1
167f0: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16820: 4508                      SUB    A8,A8
16830: 930e                      MOVE   A8,*A14+,1
16840: d60e 7640 0002            MOVE   @27640h,*A14+,1
16870: d60e 7780 0002            MOVE   @27780h,*A14+,1
168a0: 938e                      MOVE   A12,*A14+,1
168b0: 0d5f 6eb0 0001            CALLA  16EB0h
168e0: c011                      JR     16A00h
168f0: a3cf                      MOVE   A14,-*SP,1
16900: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16930: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
16960: d60e 7640 0002            MOVE   @27640h,*A14+,1
16990: d60e 7780 0002            MOVE   @27780h,*A14+,1
169c0: 938e                      MOVE   A12,*A14+,1
169d0: 0d5f 6eb0 0001            CALLA  16EB0h
16a00: 102a                      INC    A10
16a10: b7ac 0080                 MOVE   *A13(80h),A12,1
16a30: 498a                      CMP    A12,A10
16a40: c4af                      JRLT   16540h
16a50: c040                      JR     16E60h
16a60: a3cf                      MOVE   A14,-*SP,1
16a70: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16aa0: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
16ad0: d60e 7640 0002            MOVE   @27640h,*A14+,1
16b00: d60e 7780 0002            MOVE   @27780h,*A14+,1
16b30: 454a                      SUB    A10,A10
16b40: 934e                      MOVE   A10,*A14+,1
16b50: 0d5f 6eb0 0001            CALLA  16EB0h
16b80: a3cf                      MOVE   A14,-*SP,1
16b90: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16bc0: 934e                      MOVE   A10,*A14+,1
16bd0: d60e 7640 0002            MOVE   @27640h,*A14+,1
16c00: d60e 7780 0002            MOVE   @27780h,*A14+,1
16c30: 182c                      MOVK   1h,A12
16c40: 938e                      MOVE   A12,*A14+,1
16c50: 0d5f 6eb0 0001            CALLA  16EB0h
16c80: a3cf                      MOVE   A14,-*SP,1
16c90: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16cc0: 934e                      MOVE   A10,*A14+,1
16cd0: 934e                      MOVE   A10,*A14+,1
16ce0: d60e 7780 0002            MOVE   @27780h,*A14+,1
16d10: 1848                      MOVK   2h,A8
16d20: 930e                      MOVE   A8,*A14+,1
16d30: 0d5f 6eb0 0001            CALLA  16EB0h
16d60: a3cf                      MOVE   A14,-*SP,1
16d70: d60e 77a0 0002            MOVE   @277A0h,*A14+,1
16da0: d60e 76a0 0002            MOVE   @276A0h,*A14+,1
16dd0: 934e                      MOVE   A10,*A14+,1
16de0: d60e 7780 0002            MOVE   @27780h,*A14+,1
16e10: 1868                      MOVK   3h,A8
16e20: 930e                      MOVE   A8,*A14+,1
16e30: 0d5f 6eb0 0001            CALLA  16EB0h
16e60: 0bee ff3f                 SUBI   C0h,A14
16e80: 09af 3400                 MMFM   SP,A10,A12,A13
16ea0: 0960                      RETS   

_arc_quad:
16eb0: 098f aa2c                 MMTM   SP,A0,A2,A4,A6,A10,A12,A13
16ed0: 4dcd                      MOVE   A14,A13
16ee0: b7a2 ff60                 MOVE   *A13(FF60h),A2,1
16f00: b7a4 ff80                 MOVE   *A13(FF80h),A4,1
16f20: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
16f40: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
16f60: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
16f80: 4cc6                      MOVE   A6,A6
16f90: ca17                      JREQ   17110h
16fa0: 3466                      CMPK   3h,A6
16fb0: ca15                      JREQ   17110h
16fc0: 07a8 7680 0002            MOVE   @27680h,A8,1
16ff0: 09c0 ffff                 MOVI   FFFFh,A0
17010: 0570                      SETF   10h,1,0
17020: b008 0080                 MOVE   A0,*A8(80h),0
17040: 4d40                      MOVE   A10,A0
17050: 4480                      SUB    A4,A0
17060: b008 0040                 MOVE   A0,*A8(40h),0
17080: 07a0 76a0 0002            MOVE   @276A0h,A0,1
170b0: 4540                      SUB    A10,A0
170c0: b008 0020                 MOVE   A0,*A8(20h),0
170e0: 1446                      SUBK   2h,A6
170f0: c50f                      JRGE   171F0h
17100: c01e                      JR     172F0h
17110: 07a0 7680 0002            MOVE   @27680h,A0,1
17140: 4508                      SUB    A8,A8
17150: 0570                      SETF   10h,1,0
17160: b100 0080                 MOVE   A8,*A0(80h),0
17180: 4544                      SUB    A10,A4
17190: b080 0040                 MOVE   A4,*A0(40h),0
171b0: b140 0020                 MOVE   A10,*A0(20h),0
171d0: 1446                      SUBK   2h,A6
171e0: c410                      JRLT   172F0h
171f0: 07a6 7680 0002            MOVE   @27680h,A6,1
17220: 1824                      MOVK   1h,A4
17230: b086 0090                 MOVE   A4,*A6(90h),0
17250: 4582                      SUB    A12,A2
17260: b046 0050                 MOVE   A2,*A6(50h),0
17280: 07a2 7640 0002            MOVE   @27640h,A2,1
172b0: 4582                      SUB    A12,A2
172c0: b046 0030                 MOVE   A2,*A6(30h),0
172e0: c00d                      JR     173C0h
172f0: 07a6 7680 0002            MOVE   @27680h,A6,1
17320: 09c4 ffff                 MOVI   FFFFh,A4
17340: b086 0090                 MOVE   A4,*A6(90h),0
17360: 4d80                      MOVE   A12,A0
17370: 4440                      SUB    A2,A0
17380: b006 0050                 MOVE   A0,*A6(50h),0
173a0: b186 0030                 MOVE   A12,*A6(30h),0
173c0: 07a4 75e0 0002            MOVE   @275E0h,A4,1
173f0: 408a                      ADD    A4,A10
17400: b146 0060                 MOVE   A10,*A6(60h),0
17420: 07aa 7620 0002            MOVE   @27620h,A10,1
17450: 414c                      ADD    A10,A12
17460: b186 0070                 MOVE   A12,*A6(70h),0
17480: a3cf                      MOVE   A14,-*SP,1
17490: 92ce                      MOVE   A6,*A14+,1
174a0: 0d5f 1290 0000            CALLA  1290h
174d0: b7ee 0100                 MOVE   *SP(100h),A14,1
174f0: 09af 3455                 MMFM   SP,A0,A2,A4,A6,A10,A12,A13
17510: 0962                      RETS   2h

_pen_point:
17520: 099f 213e                 MMTM   SP,B2,B7,B10-B14
17540: 4fce                      MOVE   A14,B14
17550: a7d2                      MOVE   -*B14,B2,1
17560: a7d7                      MOVE   -*B14,B7,1
17570: 4fde                      MOVE   B14,A14
17580: 2617                      SLL    10h,B7
17590: eef2                      MOVY   B7,B2
175a0: c006                      JR     17610h

_dm_pen_point:
175b0: 099f 213e                 MMTM   SP,B2,B7,B10-B14
175d0: 4fce                      MOVE   A14,B14
175e0: a7d7                      MOVE   -*B14,B7,1
175f0: 86f2                      MOVE   *B7,B2,1
17600: 4fde                      MOVE   B14,A14
17610: 07b7 0060 0000            MOVE   @60h,B7,1
17640: cb08                      JRNE   176D0h
17650: 07b7 0000 0000            MOVE   @0h,B7,1
17680: e0f2                      ADDXY  B7,B2
17690: 07b7 0020 0000            MOVE   @20h,B7,1
176c0: 0fe0                      FILL   XY
176d0: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
176f0: 0962                      RETS   2h

_patnframe_rect:
17700: 098f ea3c                 MMTM   SP,A0-A2,A4,A6,A10-A13
17720: 4dcd                      MOVE   A14,A13
17730: b7a6 ff40                 MOVE   *A13(FF40h),A6,1
17750: b7a2 ff60                 MOVE   *A13(FF60h),A2,1
17770: b7a1 ff80                 MOVE   *A13(FF80h),A1,1
17790: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
177b0: b7ab ffc0                 MOVE   *A13(FFC0h),A11,1
177d0: b7a4 ffa0                 MOVE   *A13(FFA0h),A4,1
177f0: 07a8 0060 0000            MOVE   @60h,A8,1
17820: cb3b                      JRNE   17BE0h
17830: 4d48                      MOVE   A10,A8
17840: 4448                      SUB    A2,A8
17850: 4448                      SUB    A2,A8
17860: 4f0e                      MOVE   A8,B14
17870: 4d68                      MOVE   A11,A8
17880: 44c8                      SUB    A6,A8
17890: 44c8                      SUB    A6,A8
178a0: 4d0c                      MOVE   A8,A12
178b0: 4fd8                      MOVE   B14,A8
178c0: c629                      JRLE   17B60h
178d0: 4d88                      MOVE   A12,A8
178e0: c627                      JRLE   17B60h
178f0: 4c20                      MOVE   A1,A0
17900: 40c0                      ADD    A6,A0
17910: a3cf                      MOVE   A14,-*SP,1
17920: 922e                      MOVE   A1,*A14+,1
17930: 928e                      MOVE   A4,*A14+,1
17940: 92ce                      MOVE   A6,*A14+,1
17950: 934e                      MOVE   A10,*A14+,1
17960: 0d5f 1790 0001            CALLA  11790h
17990: a3cf                      MOVE   A14,-*SP,1
179a0: 4161                      ADD    A11,A1
179b0: 44c1                      SUB    A6,A1
179c0: 922e                      MOVE   A1,*A14+,1
179d0: 928e                      MOVE   A4,*A14+,1
179e0: 92ce                      MOVE   A6,*A14+,1
179f0: 934e                      MOVE   A10,*A14+,1
17a00: 0d5f 1790 0001            CALLA  11790h
17a30: a3cf                      MOVE   A14,-*SP,1
17a40: 920e                      MOVE   A0,*A14+,1
17a50: 928e                      MOVE   A4,*A14+,1
17a60: 938e                      MOVE   A12,*A14+,1
17a70: 924e                      MOVE   A2,*A14+,1
17a80: 0d5f 1790 0001            CALLA  11790h
17ab0: a3cf                      MOVE   A14,-*SP,1
17ac0: 920e                      MOVE   A0,*A14+,1
17ad0: 4144                      ADD    A10,A4
17ae0: 4444                      SUB    A2,A4
17af0: 928e                      MOVE   A4,*A14+,1
17b00: 938e                      MOVE   A12,*A14+,1
17b10: 924e                      MOVE   A2,*A14+,1
17b20: 0d5f 1790 0001            CALLA  11790h
17b50: c008                      JR     17BE0h
17b60: a3cf                      MOVE   A14,-*SP,1
17b70: 922e                      MOVE   A1,*A14+,1
17b80: 928e                      MOVE   A4,*A14+,1
17b90: 936e                      MOVE   A11,*A14+,1
17ba0: 934e                      MOVE   A10,*A14+,1
17bb0: 0d5f 1790 0001            CALLA  11790h
17be0: b7ee 0140                 MOVE   *SP(140h),A14,1
17c00: 09af 3c57                 MMFM   SP,A0-A2,A4,A6,A10-A13
17c20: 0962                      RETS   2h

_dm_patnframe_rect:
17c30: 098f 6a2c                 MMTM   SP,A1,A2,A4,A6,A10,A12,A13
17c50: 4dcd                      MOVE   A14,A13
17c60: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
17c80: 0570                      SETF   10h,1,0
17c90: 9581                      MOVE   *A12+,A1,0
17ca0: 9584                      MOVE   *A12+,A4,0
17cb0: 958a                      MOVE   *A12+,A10,0
17cc0: 9586                      MOVE   *A12+,A6,0
17cd0: 9582                      MOVE   *A12+,A2,0
17ce0: 858c                      MOVE   *A12,A12,0
17cf0: a3cf                      MOVE   A14,-*SP,1
17d00: 938e                      MOVE   A12,*A14+,1
17d10: 924e                      MOVE   A2,*A14+,1
17d20: 92ce                      MOVE   A6,*A14+,1
17d30: 934e                      MOVE   A10,*A14+,1
17d40: 928e                      MOVE   A4,*A14+,1
17d50: 922e                      MOVE   A1,*A14+,1
17d60: 0d5f 7700 0001            CALLA  17700h
17d90: b7ee 0100                 MOVE   *SP(100h),A14,1
17db0: 09af 3456                 MMFM   SP,A1,A2,A4,A6,A10,A12,A13
17dd0: 0962                      RETS   2h

_fill_polygon:
17de0: 098f ff6c                 MMTM   SP,A0-A7,A9,A10,A12,A13
17e00: 099f b13e                 MMTM   SP,B0,B2,B3,B7,B10-B14
17e20: 5610                      CLR    B0
17e30: c007                      JR     17EB0h

_patnfill_polygon:
17e40: 098f ff6c                 MMTM   SP,A0-A7,A9,A10,A12,A13
17e60: 099f b13e                 MMTM   SP,B0,B2,B3,B7,B10-B14
17e80: 07b0 0050 0000            MOVE   @50h,B0,1
17eb0: 0770                      SETF   10h,1,1
17ec0: 0540                      SETF   20h,0,0
17ed0: a5c3                      MOVE   -*A14,A3,0
17ee0: c600 00e6                 JRLE   18D60h
17f00: a5c2                      MOVE   -*A14,A2,0
17f10: c014                      JR     18060h

_dm_fill_polygon:
17f20: 098f ff6c                 MMTM   SP,A0-A7,A9,A10,A12,A13
17f40: 099f b13e                 MMTM   SP,B0,B2,B3,B7,B10-B14
17f60: 5610                      CLR    B0
17f70: c007                      JR     17FF0h

_dm_patnfill_polygon:
17f80: 098f ff6c                 MMTM   SP,A0-A7,A9,A10,A12,A13
17fa0: 099f b13e                 MMTM   SP,B0,B2,B3,B7,B10-B14
17fc0: 07b0 0050 0000            MOVE   @50h,B0,1
17ff0: 0770                      SETF   10h,1,1
18000: 0540                      SETF   20h,0,0
18010: a5c2                      MOVE   -*A14,A2,0
18020: 9643                      MOVE   *A2+,A3,1
18030: 2bc3                      SRA    2h,A3
18040: c600 00d0                 JRLE   18D60h
18060: 05ae 0000 0000            MOVE   @0h,A14,0
18090: 1837                      MOVK   1h,B7
180a0: 2617                      SLL    10h,B7
180b0: 09c0 0080                 MOVI   80h,A0
180d0: 09c8 7fff                 MOVI   7FFFh,A8
180f0: 4c69                      MOVE   A3,A9
18100: 24e9                      SLL    7h,A9
18110: 452f                      SUB    A9,SP
18120: 4de4                      MOVE   SP,A4
18130: a12f                      MOVE   A9,-*SP,0
18140: 5621                      CLR    A1
18150: 4c65                      MOVE   A3,A5
18160: 24a5                      SLL    5h,A5
18170: 4045                      ADD    A2,A5
18180: a4a5                      MOVE   -*A5,A5,0
18190: e1c5                      ADDXY  A14,A5
181a0: 9447                      MOVE   *A2+,A7,0
181b0: e1c7                      ADDXY  A14,A7
181c0: 4ce6                      MOVE   A7,A6
181d0: e4a6                      CMPXY  A5,A6
181e0: ca1b                      JREQ   183A0h
181f0: c902                      JRNC   18220h
18200: 4ca6                      MOVE   A5,A6
18210: 4ce5                      MOVE   A7,A5
18220: 4ccc                      MOVE   A6,A12
18230: e2ac                      SUBXY  A5,A12
18240: ed8d                      MOVX   A12,A13
18250: 260d                      SLL    10h,A13
18260: 2a0c                      SRA    10h,A12
18270: 598d                      DIVS   A12,A13
18280: b1a4 0040                 MOVE   A13,*A4(40h),0
182a0: ecac                      MOVX   A5,A12
182b0: 260c                      SLL    10h,A12
182c0: ed0c                      MOVX   A8,A12
182d0: 2bed                      SRA    1h,A13
182e0: 41ac                      ADD    A13,A12
182f0: b184 0020                 MOVE   A12,*A4(20h),0
18310: 2e05                      SRL    10h,A5
18320: b2a4 0000                 MOVE   A5,*A4(0h),1
18340: 2e06                      SRL    10h,A6
18350: b2c4 0010                 MOVE   A6,*A4(10h),1
18370: 0d3f 00cb                 CALLR  19040h
18390: 4004                      ADD    A0,A4
183a0: 4ce5                      MOVE   A7,A5
183b0: 0d83 ffdd                 DSJ    A3,181A0h
183d0: 5600                      CLR    A0
183e0: 4c21                      MOVE   A1,A1
183f0: ca00 0093                 JREQ   18D40h
18410: b62e 0000                 MOVE   *A1(0h),A14,1
18430: 4c21                      MOVE   A1,A1
18440: ca0a                      JREQ   184F0h
18450: b62c 0000                 MOVE   *A1(0h),A12,1
18470: 498e                      CMP    A12,A14
18480: cb06                      JRNE   184F0h
18490: 4c24                      MOVE   A1,A4
184a0: b481 0060                 MOVE   *A4(60h),A1,0
184c0: 0d3f 009b                 CALLR  18E90h
184e0: c0f4                      JR     18430h
184f0: 09ca 4000                 MOVI   4000h,A10
18510: 4c21                      MOVE   A1,A1
18520: ca02                      JREQ   18550h
18530: b62a 0000                 MOVE   *A1(0h),A10,1
18550: 4c00                      MOVE   A0,A0
18560: ca7a                      JREQ   18D10h
18570: 4c02                      MOVE   A0,A2
18580: b443 0060                 MOVE   *A2(60h),A3,0
185a0: b460 0060                 MOVE   *A3(60h),A0,0
185c0: b445 0020                 MOVE   *A2(20h),A5,0
185e0: b447 0040                 MOVE   *A2(40h),A7,0
18600: b466 0020                 MOVE   *A3(20h),A6,0
18620: b468 0040                 MOVE   *A3(40h),A8,0
18640: b64c 0010                 MOVE   *A2(10h),A12,1
18660: 494c                      CMP    A10,A12
18670: cf01                      JRNN   18690h
18680: 4d8a                      MOVE   A12,A10
18690: b66c 0010                 MOVE   *A3(10h),A12,1
186b0: 494c                      CMP    A10,A12
186c0: cf01                      JRNN   186E0h
186d0: 4d8a                      MOVE   A12,A10
186e0: 4c00                      MOVE   A0,A0
186f0: ca1e                      JREQ   188E0h
18700: 4c64                      MOVE   A3,A4
18710: 0d3f 006b                 CALLR  18DE0h
18730: 4da9                      MOVE   A13,A9
18740: 4c04                      MOVE   A0,A4
18750: ca18                      JREQ   188E0h
18760: b487 0040                 MOVE   *A4(40h),A7,0
18780: 4507                      SUB    A8,A7
18790: cf0f                      JRNN   18890h
187a0: 0d3f 0062                 CALLR  18DE0h
187c0: 492d                      CMP    A9,A13
187d0: cf0b                      JRNN   18890h
187e0: b48d 0020                 MOVE   *A4(20h),A13,0
18800: 44cd                      SUB    A6,A13
18810: 03a7                      NEG    A7
18820: 58ed                      DIVS   A7,A13
18830: 102d                      INC    A13
18840: 4dca                      MOVE   A14,A10
18850: 41aa                      ADD    A13,A10
18860: 4d09                      MOVE   A8,A9
18870: 5da9                      MPYS   A13,A9
18880: 40c9                      ADD    A6,A9
18890: b484 0060                 MOVE   *A4(60h),A4,0
188b0: cbea                      JRNE   18760h
188c0: b447 0040                 MOVE   *A2(40h),A7,0
188e0: 4d4d                      MOVE   A10,A13
188f0: 45cd                      SUB    A14,A13
18900: 4dca                      MOVE   A14,A10
18910: 4c10                      MOVE   B0,B0
18920: cb14                      JRNE   18A70h
18930: eecc                      MOVY   A6,A12
18940: e2ac                      SUBXY  A5,A12
18950: c822                      JRC    18B80h
18960: 4e1c                      MOVE   B0,A12
18970: 4ea0                      MOVE   A5,B0
18980: 4ee1                      MOVE   A7,B1
18990: 4ec7                      MOVE   A6,B7
189a0: 4f0a                      MOVE   A8,B10
189b0: 4f4b                      MOVE   A10,B11
189c0: 261b                      SLL    10h,B11
189d0: 4817                      CMP    B0,B7
189e0: c402                      JRLT   18A10h
189f0: 0efa                      TFILL  XY
18a00: 3c8d                      DSJS   A13,189D0h
18a10: 4e15                      MOVE   B0,A5
18a20: 4ef6                      MOVE   B7,A6
18a30: 4f7a                      MOVE   B11,A10
18a40: 2e0a                      SRL    10h,A10
18a50: 4f80                      MOVE   A12,B0
18a60: c011                      JR     18B80h
18a70: 0740                      SETF   20h,0,1
18a80: eecc                      MOVY   A6,A12
18a90: e2ac                      SUBXY  A5,A12
18aa0: c80b                      JRC    18B60h
18ab0: 2e0c                      SRL    10h,A12
18ac0: 4f8e                      MOVE   A12,B14
18ad0: edd7                      MOVX   B14,B7
18ae0: eeaa                      MOVY   A5,A10
18af0: 4f42                      MOVE   A10,B2
18b00: 3212                      RL     10h,B2
18b10: 0930                      CALL   B0
18b20: 40e5                      ADD    A7,A5
18b30: 4106                      ADD    A8,A6
18b40: 102a                      INC    A10
18b50: 3dcd                      DSJS   A13,18A80h
18b60: 0770                      SETF   10h,1,1
18b70: 0540                      SETF   20h,0,0
18b80: 070a                      SEXT   A10,1
18b90: b0a2 0020                 MOVE   A5,*A2(20h),0
18bb0: b342 0000                 MOVE   A10,*A2(0h),1
18bd0: b0c3 0020                 MOVE   A6,*A3(20h),0
18bf0: b343 0000                 MOVE   A10,*A3(0h),1
18c10: b64c 0010                 MOVE   *A2(10h),A12,1
18c30: 498a                      CMP    A12,A10
18c40: cf03                      JRNN   18C80h
18c50: 4c44                      MOVE   A2,A4
18c60: 0d3f 003c                 CALLR  19040h
18c80: b66c 0010                 MOVE   *A3(10h),A12,1
18ca0: 498a                      CMP    A12,A10
18cb0: cf03                      JRNN   18CF0h
18cc0: 4c64                      MOVE   A3,A4
18cd0: 0d3f 0035                 CALLR  19040h
18cf0: 4c00                      MOVE   A0,A0
18d00: cb86                      JRNE   18570h
18d10: 4c21                      MOVE   A1,A1
18d20: cb00 ff6d                 JRNE   18410h
18d40: 95e9                      MOVE   *SP+,A9,0
18d50: 412f                      ADD    A9,SP
18d60: 0740                      SETF   20h,0,1
18d70: 09bf 7c8d                 MMFM   SP,B0,B2,B3,B7,B10-B14
18d90: 09af 36ff                 MMFM   SP,A0-A7,A9,A10,A12,A13
18db0: b7ee 0020                 MOVE   *SP(20h),A14,1
18dd0: 0962                      RETS   2h
18de0: b68c 0000                 MOVE   *A4(0h),A12,1
18e00: 4d4d                      MOVE   A10,A13
18e10: 458d                      SUB    A12,A13
18e20: b48c 0040                 MOVE   *A4(40h),A12,0
18e40: 5dac                      MPYS   A13,A12
18e50: b48c 0020                 MOVE   *A4(20h),A12,0
18e70: 418d                      ADD    A12,A13
18e80: 0960                      RETS   
18e90: 4c00                      MOVE   A0,A0
18ea0: ca06                      JREQ   18F10h
18eb0: b48c 0020                 MOVE   *A4(20h),A12,0
18ed0: b40d 0020                 MOVE   *A0(20h),A13,0
18ef0: 498d                      CMP    A12,A13
18f00: ce04                      JRN    18F50h
18f10: b004 0060                 MOVE   A0,*A4(60h),0
18f30: 4c80                      MOVE   A4,A0
18f40: 0960                      RETS   
18f50: 4c05                      MOVE   A0,A5
18f60: b4a6 0060                 MOVE   *A5(60h),A6,0
18f80: ca06                      JREQ   18FF0h
18f90: b4cd 0020                 MOVE   *A6(20h),A13,0
18fb0: 498d                      CMP    A12,A13
18fc0: cf02                      JRNN   18FF0h
18fd0: 4cc5                      MOVE   A6,A5
18fe0: c0f7                      JR     18F60h
18ff0: b0c4 0060                 MOVE   A6,*A4(60h),0
19010: b085 0060                 MOVE   A4,*A5(60h),0
19030: 0960                      RETS   
19040: 4c21                      MOVE   A1,A1
19050: ca06                      JREQ   190C0h
19060: b68c 0000                 MOVE   *A4(0h),A12,1
19080: b62d 0000                 MOVE   *A1(0h),A13,1
190a0: 498d                      CMP    A12,A13
190b0: ce04                      JRN    19100h
190c0: b024 0060                 MOVE   A1,*A4(60h),0
190e0: 4c81                      MOVE   A4,A1
190f0: 0960                      RETS   
19100: 4c25                      MOVE   A1,A5
19110: b4a6 0060                 MOVE   *A5(60h),A6,0
19130: ca06                      JREQ   191A0h
19140: b6cd 0000                 MOVE   *A6(0h),A13,1
19160: 498d                      CMP    A12,A13
19170: cf02                      JRNN   191A0h
19180: 4cc5                      MOVE   A6,A5
19190: c0f7                      JR     19110h
191a0: b0c4 0060                 MOVE   A6,*A4(60h),0
191c0: b085 0060                 MOVE   A4,*A5(60h),0
191e0: 0960                      RETS   

_dm_draw_polyline:
191f0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
19210: 099f e1be                 MMTM   SP,B0-B2,B7,B8,B10-B14
19230: 4dcd                      MOVE   A14,A13
19240: a7cb                      MOVE   -*A14,A11,1
19250: 0550                      SETF   10h,0,0
19260: 956a                      MOVE   *A11+,A10,0
19270: 2fca                      SRL    2h,A10
19280: c007                      JR     19300h

_draw_polyline:
19290: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
192b0: 099f e1be                 MMTM   SP,B0-B2,B7,B8,B10-B14
192d0: 4dcd                      MOVE   A14,A13
192e0: a7ca                      MOVE   -*A14,A10,1
192f0: a7cb                      MOVE   -*A14,A11,1
19300: 07a8 0060 0000            MOVE   @60h,A8,1
19330: cb00 019f                 JRNE   1AD40h
19350: 1826                      MOVK   1h,A6
19360: 09e7 0000 0001            MOVI   10000h,A7
19390: 07ac 0000 0000            MOVE   @0h,A12,1
193c0: 09f8 0001 0001            MOVI   10001h,B8
193f0: 142a                      DEC    A10
19400: 0550                      SETF   10h,0,0
19410: 05a8 00b0 c000            MOVE   @C00000B0h,A8,0
19440: 810d                      MOVE   A8,*A13,0
19450: 05a8 0110 c000            MOVE   @C0000110h,A8,0
19480: b10d 0010                 MOVE   A8,*A13(10h),0
194a0: 09e9 00b6 c000            MOVI   C00000B6h,A9
194d0: 0542                      SETF   2h,0,0
194e0: 1868                      MOVK   3h,A8
194f0: 8109                      MOVE   A8,*A9,0
19500: 0541                      SETF   1h,0,0
19510: 5708                      CLR    A8
19520: 0588 011b c000            MOVE   A8,@C000011Bh,0
19550: 0541                      SETF   1h,0,0
19560: 80c9                      MOVE   A6,*A9,0
19570: 0550                      SETF   10h,0,0
19580: 9760                      MOVE   *A11+,A0,1
19590: e180                      ADDXY  A12,A0
195a0: 8761                      MOVE   *A11,A1,1
195b0: e181                      ADDXY  A12,A1
195c0: e602                      CPW    A0,A2
195d0: e623                      CPW    A1,A3
195e0: 5043                      AND    A2,A3
195f0: ca03                      JREQ   19630h
19600: 3d2a                      DSJS   A10,19580h
19610: c000 0162                 JR     1AC50h
19630: 4c24                      MOVE   A1,A4
19640: e204                      SUBXY  A0,A4
19650: c10e                      JRP    19740h
19660: cc04                      JRV    196B0h
19670: c803                      JRC    196B0h
19680: 4e02                      MOVE   A0,B2
19690: 4e87                      MOVE   A4,B7
196a0: c004                      JR     196F0h
196b0: 4e22                      MOVE   A1,B2
196c0: 56a5                      CLR    A5
196d0: e285                      SUBXY  A4,A5
196e0: 4ea7                      MOVE   A5,B7
196f0: 4117                      ADD    B8,B7
19700: 0fe0                      FILL   XY
19710: 3f4a                      DSJS   A10,19580h
19720: c000 0151                 JR     1AC50h
19740: 0541                      SETF   1h,0,0
19750: 80e9                      MOVE   A7,*A9,0
19760: 0550                      SETF   10h,0,0
19770: 4e02                      MOVE   A0,B2
19780: e602                      CPW    A0,A2
19790: cd05                      JRNV   197F0h
197a0: e622                      CPW    A1,A2
197b0: cc21                      JRV    199D0h
197c0: 4e22                      MOVE   A1,B2
197d0: 4e07                      MOVE   A0,B7
197e0: c001                      JR     19800h
197f0: 4e27                      MOVE   A1,B7
19800: 09dd ffff                 MOVI   FFFFh,B13
19820: 0c57                      LINIT  
19830: cc0d                      JRV    19910h
19840: 0a92                      CVDXYL B2
19850: 4d7b                      MOVE   B11,B11
19860: c405                      JRLT   198C0h
19870: de1a                      FLINE   0
19880: 0d8a ffcb                 DSJ    A10,19550h
198a0: c000 0139                 JR     1AC50h
198c0: de9a                      FLINE   1
198d0: 0d8a ffc6                 DSJ    A10,19550h
198f0: c000 0134                 JR     1AC50h
19910: 4d7b                      MOVE   B11,B11
19920: c405                      JRLT   19980h
19930: df1a                      LINE   0
19940: 0d8a ffbf                 DSJ    A10,19550h
19960: c000 012d                 JR     1AC50h
19980: df9a                      LINE   1
19990: 0d8a ffba                 DSJ    A10,19550h
199b0: c000 0128                 JR     1AC50h
199d0: 4c84                      MOVE   A4,A4
199e0: c103                      JRP    19A20h
199f0: 5601                      XOR    A0,A1
19a00: 5620                      XOR    A1,A0
19a10: 5601                      XOR    A0,A1
19a20: 579c                      CLR    B12
19a30: 4c24                      MOVE   A1,A4
19a40: e204                      SUBXY  A0,A4
19a50: cc02                      JRV    19A80h
19a60: 4d1b                      MOVE   B8,B11
19a70: c006                      JR     19AE0h
19a80: 09fb ffff 0001            MOVI   1FFFFh,B11
19ab0: 56a5                      CLR    A5
19ac0: e285                      SUBXY  A4,A5
19ad0: eca4                      MOVX   A5,A4
19ae0: 4e87                      MOVE   A4,B7
19af0: 4cfa                      MOVE   B7,B10
19b00: 321a                      RL     10h,B10
19b10: e4fa                      CMPXY  B7,B10
19b20: c80a                      JRC    19BD0h
19b30: 2e1a                      SRL    10h,B10
19b40: eefd                      MOVY   B7,B13
19b50: 2e1d                      SRL    10h,B13
19b60: 4d5e                      MOVE   B10,B14
19b70: 41de                      ADD    B14,B14
19b80: ed7c                      MOVX   B11,B12
19b90: 1e1b                      BTST   Fh,B11
19ba0: ca0c                      JREQ   19C70h
19bb0: c000 00ab                 JR     1A680h
19bd0: 3217                      RL     10h,B7
19be0: ef9a                      MOVY   B12,B10
19bf0: eefd                      MOVY   B7,B13
19c00: 2e1d                      SRL    10h,B13
19c10: 4d5e                      MOVE   B10,B14
19c20: 41de                      ADD    B14,B14
19c30: ef7c                      MOVY   B11,B12
19c40: 1e1b                      BTST   Fh,B11
19c50: ca39                      JREQ   19FF0h
19c60: c06f                      JR     1A360h
19c70: 4d50                      MOVE   B10,B0
19c80: 03b0                      NEG    B0
19c90: 4c11                      MOVE   B0,B1
19ca0: 4c12                      MOVE   B0,B2
19cb0: 4fd5                      MOVE   B14,A5
19cc0: 4c02                      MOVE   A0,A2
19cd0: e022                      ADDXY  A1,A2
19ce0: 4c08                      MOVE   A0,A8
19cf0: 2be2                      SRA    1h,A2
19d00: 1e02                      BTST   Fh,A2
19d10: ca01                      JREQ   19D30h
19d20: 4152                      ADD    B10,B2
19d30: 4028                      ADD    A1,A8
19d40: 0508                      SEXT   A8,0
19d50: 2be8                      SRA    1h,A8
19d60: c902                      JRNC   19D90h
19d70: 41b2                      ADD    B13,B2
19d80: 1028                      INC    A8
19d90: 4c52                      MOVE   B2,B2
19da0: c402                      JRLT   19DD0h
19db0: 45d2                      SUB    B14,B2
19dc0: 40e2                      ADD    A7,A2
19dd0: ed02                      MOVX   A8,A2
19de0: e643                      CPW    A2,A3
19df0: cd00 00ba                 JRNV   1A9B0h
19e10: e604                      CPW    A0,A4
19e20: 5064                      AND    A3,A4
19e30: ca11                      JREQ   19F50h
19e40: e624                      CPW    A1,A4
19e50: 5064                      AND    A3,A4
19e60: ca04                      JREQ   19EB0h
19e70: 0d8a ff6c                 DSJ    A10,19550h
19e90: c000 00da                 JR     1AC50h
19eb0: 4c40                      MOVE   A2,A0
19ec0: 4c50                      MOVE   B2,B0
19ed0: 4032                      ADD    B1,B2
19ee0: 2bf2                      SRA    1h,B2
19ef0: 2fe5                      SRL    1h,A5
19f00: cbdb                      JRNE   19CC0h
19f10: 0d8a ff62                 DSJ    A10,19550h
19f30: c000 00d0                 JR     1AC50h
19f50: 4c41                      MOVE   A2,A1
19f60: 4c51                      MOVE   B2,B1
19f70: 4012                      ADD    B0,B2
19f80: 2bf2                      SRA    1h,B2
19f90: 2fe5                      SRL    1h,A5
19fa0: cbd1                      JRNE   19CC0h
19fb0: 0d8a ff58                 DSJ    A10,19550h
19fd0: c000 00c6                 JR     1AC50h
19ff0: 4d50                      MOVE   B10,B0
1a000: 4c11                      MOVE   B0,B1
1a010: 4c12                      MOVE   B0,B2
1a020: 4fd5                      MOVE   B14,A5
1a030: 4c02                      MOVE   A0,A2
1a040: e022                      ADDXY  A1,A2
1a050: 4c08                      MOVE   A0,A8
1a060: 2be2                      SRA    1h,A2
1a070: 1e02                      BTST   Fh,A2
1a080: ca01                      JREQ   1A0A0h
1a090: 45b2                      SUB    B13,B2
1a0a0: 4028                      ADD    A1,A8
1a0b0: 0508                      SEXT   A8,0
1a0c0: 2be8                      SRA    1h,A8
1a0d0: c902                      JRNC   1A100h
1a0e0: 4552                      SUB    B10,B2
1a0f0: 1028                      INC    A8
1a100: 4c52                      MOVE   B2,B2
1a110: c502                      JRGE   1A140h
1a120: 41d2                      ADD    B14,B2
1a130: 1428                      DEC    A8
1a140: ed02                      MOVX   A8,A2
1a150: e643                      CPW    A2,A3
1a160: cd00 008a                 JRNV   1AA20h
1a180: e604                      CPW    A0,A4
1a190: 5064                      AND    A3,A4
1a1a0: ca11                      JREQ   1A2C0h
1a1b0: e624                      CPW    A1,A4
1a1c0: 5064                      AND    A3,A4
1a1d0: ca04                      JREQ   1A220h
1a1e0: 0d8a ff35                 DSJ    A10,19550h
1a200: c000 00a3                 JR     1AC50h
1a220: 4c40                      MOVE   A2,A0
1a230: 4c50                      MOVE   B2,B0
1a240: 4032                      ADD    B1,B2
1a250: 2bf2                      SRA    1h,B2
1a260: 2fe5                      SRL    1h,A5
1a270: cbdb                      JRNE   1A030h
1a280: 0d8a ff2b                 DSJ    A10,19550h
1a2a0: c000 0099                 JR     1AC50h
1a2c0: 4c41                      MOVE   A2,A1
1a2d0: 4c51                      MOVE   B2,B1
1a2e0: 4012                      ADD    B0,B2
1a2f0: 2bf2                      SRA    1h,B2
1a300: 2fe5                      SRL    1h,A5
1a310: cbd1                      JRNE   1A030h
1a320: 0d8a ff21                 DSJ    A10,19550h
1a340: c000 008f                 JR     1AC50h
1a360: 4d50                      MOVE   B10,B0
1a370: 4c11                      MOVE   B0,B1
1a380: 4c12                      MOVE   B0,B2
1a390: 4fd5                      MOVE   B14,A5
1a3a0: 4c02                      MOVE   A0,A2
1a3b0: e022                      ADDXY  A1,A2
1a3c0: 4c08                      MOVE   A0,A8
1a3d0: 2be2                      SRA    1h,A2
1a3e0: 1e02                      BTST   Fh,A2
1a3f0: ca01                      JREQ   1A410h
1a400: 45b2                      SUB    B13,B2
1a410: 4028                      ADD    A1,A8
1a420: 0508                      SEXT   A8,0
1a430: 2be8                      SRA    1h,A8
1a440: c901                      JRNC   1A460h
1a450: 4552                      SUB    B10,B2
1a460: 4c52                      MOVE   B2,B2
1a470: c502                      JRGE   1A4A0h
1a480: 41d2                      ADD    B14,B2
1a490: 1028                      INC    A8
1a4a0: ed02                      MOVX   A8,A2
1a4b0: e643                      CPW    A2,A3
1a4c0: cd55                      JRNV   1AA20h
1a4d0: e604                      CPW    A0,A4
1a4e0: 5064                      AND    A3,A4
1a4f0: ca0f                      JREQ   1A5F0h
1a500: e624                      CPW    A1,A4
1a510: 5064                      AND    A3,A4
1a520: ca03                      JREQ   1A560h
1a530: 0d8a ff00                 DSJ    A10,19550h
1a550: c06f                      JR     1AC50h
1a560: 4c40                      MOVE   A2,A0
1a570: 4c50                      MOVE   B2,B0
1a580: 4032                      ADD    B1,B2
1a590: 2bf2                      SRA    1h,B2
1a5a0: 2fe5                      SRL    1h,A5
1a5b0: cbde                      JRNE   1A3A0h
1a5c0: 0d8a fef7                 DSJ    A10,19550h
1a5e0: c066                      JR     1AC50h
1a5f0: 4c41                      MOVE   A2,A1
1a600: 4c51                      MOVE   B2,B1
1a610: 4012                      ADD    B0,B2
1a620: 2bf2                      SRA    1h,B2
1a630: 2fe5                      SRL    1h,A5
1a640: cbd5                      JRNE   1A3A0h
1a650: 0d8a feee                 DSJ    A10,19550h
1a670: c05d                      JR     1AC50h
1a680: 4d50                      MOVE   B10,B0
1a690: 03b0                      NEG    B0
1a6a0: 4c11                      MOVE   B0,B1
1a6b0: 4c12                      MOVE   B0,B2
1a6c0: 4fd5                      MOVE   B14,A5
1a6d0: 4c02                      MOVE   A0,A2
1a6e0: e022                      ADDXY  A1,A2
1a6f0: 4c08                      MOVE   A0,A8
1a700: 2be2                      SRA    1h,A2
1a710: 1e02                      BTST   Fh,A2
1a720: ca01                      JREQ   1A740h
1a730: 4152                      ADD    B10,B2
1a740: 4028                      ADD    A1,A8
1a750: 0508                      SEXT   A8,0
1a760: 2be8                      SRA    1h,A8
1a770: c901                      JRNC   1A790h
1a780: 41b2                      ADD    B13,B2
1a790: 4c52                      MOVE   B2,B2
1a7a0: c402                      JRLT   1A7D0h
1a7b0: 45d2                      SUB    B14,B2
1a7c0: e0e2                      ADDXY  A7,A2
1a7d0: ed02                      MOVX   A8,A2
1a7e0: e643                      CPW    A2,A3
1a7f0: cd1b                      JRNV   1A9B0h
1a800: e604                      CPW    A0,A4
1a810: 5064                      AND    A3,A4
1a820: ca0f                      JREQ   1A920h
1a830: e624                      CPW    A1,A4
1a840: 5064                      AND    A3,A4
1a850: ca03                      JREQ   1A890h
1a860: 0d8a fecd                 DSJ    A10,19550h
1a880: c03c                      JR     1AC50h
1a890: 4c40                      MOVE   A2,A0
1a8a0: 4c50                      MOVE   B2,B0
1a8b0: 4032                      ADD    B1,B2
1a8c0: 2bf2                      SRA    1h,B2
1a8d0: 2fe5                      SRL    1h,A5
1a8e0: cbde                      JRNE   1A6D0h
1a8f0: 0d8a fec4                 DSJ    A10,19550h
1a910: c033                      JR     1AC50h
1a920: 4c41                      MOVE   A2,A1
1a930: 4c51                      MOVE   B2,B1
1a940: 4012                      ADD    B0,B2
1a950: 2bf2                      SRA    1h,B2
1a960: 2fe5                      SRL    1h,A5
1a970: cbd5                      JRNE   1A6D0h
1a980: 0d8a febb                 DSJ    A10,19550h
1a9a0: c02a                      JR     1AC50h
1a9b0: 41bd                      ADD    B13,B13
1a9c0: 4db0                      MOVE   B13,B0
1a9d0: 4050                      ADD    B2,B0
1a9e0: 4db1                      MOVE   B13,B1
1a9f0: 45d1                      SUB    B14,B1
1aa00: 4451                      SUB    B2,B1
1aa10: c006                      JR     1AA80h
1aa20: 41bd                      ADD    B13,B13
1aa30: 4db0                      MOVE   B13,B0
1aa40: 45d0                      SUB    B14,B0
1aa50: 4050                      ADD    B2,B0
1aa60: 4db1                      MOVE   B13,B1
1aa70: 4451                      SUB    B2,B1
1aa80: 4e42                      MOVE   A2,B2
1aa90: 4c10                      MOVE   B0,B0
1aaa0: c503                      JRGE   1AAE0h
1aab0: e192                      ADDXY  B12,B2
1aac0: 41b0                      ADD    B13,B0
1aad0: c003                      JR     1AB10h
1aae0: e172                      ADDXY  B11,B2
1aaf0: 41b0                      ADD    B13,B0
1ab00: 45d0                      SUB    B14,B0
1ab10: 4fb8                      MOVE   B13,A8
1ab20: 09dd ffff                 MOVI   FFFFh,B13
1ab40: df1a                      LINE   0
1ab50: 4f0d                      MOVE   A8,B13
1ab60: 4e42                      MOVE   A2,B2
1ab70: 5610                      CLR    B0
1ab80: e370                      SUBXY  B11,B0
1ab90: 4c1b                      MOVE   B0,B11
1aba0: 5610                      CLR    B0
1abb0: e390                      SUBXY  B12,B0
1abc0: 4c1c                      MOVE   B0,B12
1abd0: 4c30                      MOVE   B1,B0
1abe0: 4fb8                      MOVE   B13,A8
1abf0: 09dd ffff                 MOVI   FFFFh,B13
1ac10: df9a                      LINE   1
1ac20: 4f0d                      MOVE   A8,B13
1ac30: 0d8a fe90                 DSJ    A10,19550h
1ac50: 0541                      SETF   1h,0,0
1ac60: 5708                      CLR    A8
1ac70: 0588 012b c000            MOVE   A8,@C000012Bh,0
1aca0: 0550                      SETF   10h,0,0
1acb0: 85a8                      MOVE   *A13,A8,0
1acc0: 0588 00b0 c000            MOVE   A8,@C00000B0h,0
1acf0: b5a8 0010                 MOVE   *A13(10h),A8,0
1ad10: 0588 0110 c000            MOVE   A8,@C0000110h,0
1ad40: 09bf 7d87                 MMFM   SP,B0-B2,B7,B8,B10-B14
1ad60: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
1ad80: b7ee 0020                 MOVE   *SP(20h),A14,1
1ada0: 0962                      RETS   2h

_dm_patnpen_point:
1adb0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
1add0: 4dcd                      MOVE   A14,A13
1ade0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1ae00: 0570                      SETF   10h,1,0
1ae10: 858a                      MOVE   *A12,A10,0
1ae20: b586 0010                 MOVE   *A12(10h),A6,0
1ae40: 07a8 0020 0000            MOVE   @20h,A8,1
1ae70: 0b88 0000 ffff            ANDI   FFFFh,A8
1aea0: 810c                      MOVE   A8,*A12,0
1aeb0: 07a8 0020 0000            MOVE   @20h,A8,1
1aee0: 2e08                      SRL    10h,A8
1aef0: b10c 0010                 MOVE   A8,*A12(10h),0
1af10: b14c 0020                 MOVE   A10,*A12(20h),0
1af30: b0cc 0030                 MOVE   A6,*A12(30h),0
1af50: a3cf                      MOVE   A14,-*SP,1
1af60: 938e                      MOVE   A12,*A14+,1
1af70: 0d5f 1700 0001            CALLA  11700h
1afa0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
1afc0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
1afe0: 0962                      RETS   2h

_patnpen_point:
1aff0: a3af                      MOVE   A13,-*SP,1
1b000: 4dcd                      MOVE   A14,A13
1b010: a3cf                      MOVE   A14,-*SP,1
1b020: 0570                      SETF   10h,1,0
1b030: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1b050: 930e                      MOVE   A8,*A14+,1
1b060: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
1b080: 930e                      MOVE   A8,*A14+,1
1b090: 07a8 0020 0000            MOVE   @20h,A8,1
1b0c0: 2e08                      SRL    10h,A8
1b0d0: 930e                      MOVE   A8,*A14+,1
1b0e0: 07a8 0020 0000            MOVE   @20h,A8,1
1b110: 0b88 0000 ffff            ANDI   FFFFh,A8
1b140: 930e                      MOVE   A8,*A14+,1
1b150: 0d5f 1790 0001            CALLA  11790h
1b180: b7ee 0040                 MOVE   *SP(40h),A14,1
1b1a0: 97ed                      MOVE   *SP+,A13,1
1b1b0: 0962                      RETS   2h

_put_pixel:
1b1c0: a20f                      MOVE   A0,-*SP,1
1b1d0: a7c8                      MOVE   -*A14,A8,1
1b1e0: a7c0                      MOVE   -*A14,A0,1
1b1f0: a7ce                      MOVE   -*A14,A14,1
1b200: 260e                      SLL    10h,A14
1b210: efc0                      MOVY   A14,A0
1b220: c004                      JR     1B270h

_dm_put_pixel:
1b230: a20f                      MOVE   A0,-*SP,1
1b240: a7ce                      MOVE   -*A14,A14,1
1b250: 97c8                      MOVE   *A14+,A8,1
1b260: 97c0                      MOVE   *A14+,A0,1
1b270: 07ae 0000 0000            MOVE   @0h,A14,1
1b2a0: e1c0                      ADDXY  A14,A0
1b2b0: f100                      PIXT   A8,*A0,XY
1b2c0: 97e0                      MOVE   *SP+,A0,1
1b2d0: b7ee 0020                 MOVE   *SP(20h),A14,1
1b2f0: 0962                      RETS   2h

_seed_fill:
1b300: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
1b320: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
1b340: 5610                      CLR    B0
1b350: c007                      JR     1B3D0h

_seed_patnfill:
1b360: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
1b380: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
1b3a0: 07b0 0050 0000            MOVE   @50h,B0,1
1b3d0: 0550                      SETF   10h,0,0
1b3e0: a7c8                      MOVE   -*A14,A8,1
1b3f0: a7c4                      MOVE   -*A14,A4,1
1b400: 2604                      SLL    10h,A4
1b410: ed04                      MOVX   A8,A4
1b420: a7c3                      MOVE   -*A14,A3,1
1b430: a7c7                      MOVE   -*A14,A7,1
1b440: c012                      JR     1B570h

_dm_seed_fill:
1b450: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
1b470: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
1b490: 5610                      CLR    B0
1b4a0: c007                      JR     1B520h

_dm_seed_patnfill:
1b4b0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
1b4d0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
1b4f0: 07b0 0050 0000            MOVE   @50h,B0,1
1b520: 0550                      SETF   10h,0,0
1b530: a7c8                      MOVE   -*A14,A8,1
1b540: 9704                      MOVE   *A8+,A4,1
1b550: 9703                      MOVE   *A8+,A3,1
1b560: 8507                      MOVE   *A8,A7,0
1b570: 07a8 0060 0000            MOVE   @60h,A8,1
1b5a0: cb00 008c                 JRNE   1BE80h
1b5c0: 07a8 0000 0000            MOVE   @0h,A8,1
1b5f0: e104                      ADDXY  A8,A4
1b600: 4dcd                      MOVE   A14,A13
1b610: 0b0e 0070                 ADDI   70h,A14
1b630: 4e11                      MOVE   B0,A1
1b640: b22d 0050                 MOVE   A1,*A13(50h),1
1b660: 5610                      CLR    B0
1b670: 05a1 0130 c000            MOVE   @C0000130h,A1,0
1b6a0: b02d 0040                 MOVE   A1,*A13(40h),0
1b6c0: 4c71                      MOVE   B3,B1
1b6d0: 05c0 0140 c000 0130 c000  MOVE   @C0000140h,@C0000130h,0
1b720: 8508                      MOVE   *A8,A8,0
1b730: f288                      PIXT   *A4,XY,A8
1b740: 05a2 0150 c000            MOVE   @C0000150h,A2,0
1b770: 09c1 ffff                 MOVI   FFFFh,A1
1b790: 6641                      SRL    A2,A1
1b7a0: 4f32                      MOVE   B9,A2
1b7b0: 5022                      AND    A1,A2
1b7c0: 5702                      XOR    A8,A2
1b7d0: ca62                      JREQ   1BE00h
1b7e0: b7a2 0050                 MOVE   *A13(50h),A2,1
1b800: ca04                      JREQ   1B850h
1b810: 4f12                      MOVE   B8,A2
1b820: 5022                      AND    A1,A2
1b830: 5702                      XOR    A8,A2
1b840: ca5b                      JREQ   1BE00h
1b850: e681                      CPW    A4,A1
1b860: cc59                      JRV    1BE00h
1b870: 4c86                      MOVE   A4,A6
1b880: 4c81                      MOVE   A4,A1
1b890: 4f12                      MOVE   B8,A2
1b8a0: 4e2b                      MOVE   A1,B11
1b8b0: e2bb                      SUBXY  B5,B11
1b8c0: 103b                      INC    B11
1b8d0: 053b                      ZEXT   B11,0
1b8e0: 03bb                      NEG    B11
1b8f0: 4e2a                      MOVE   A1,B10
1b900: e95a                      CVXYL  B10,B10
1b910: 4f08                      MOVE   A8,B8
1b920: 0298                      RPIX   B8
1b930: 0adb                      FPIXNE 
1b940: e0bb                      ADDXY  B5,B11
1b950: 4f71                      MOVE   B11,A1
1b960: ec26                      MOVX   A1,A6
1b970: 4e48                      MOVE   A2,B8
1b980: 4c85                      MOVE   A4,A5
1b990: 4c81                      MOVE   A4,A1
1b9a0: 1021                      INC    A1
1b9b0: 4f14                      MOVE   B8,A4
1b9c0: 4e2a                      MOVE   A1,B10
1b9d0: 4cdb                      MOVE   B6,B11
1b9e0: e35b                      SUBXY  B10,B11
1b9f0: 105b                      ADDK   2h,B11
1ba00: 053b                      ZEXT   B11,0
1ba10: 4e2a                      MOVE   A1,B10
1ba20: e95a                      CVXYL  B10,B10
1ba30: 4f08                      MOVE   A8,B8
1ba40: 0298                      RPIX   B8
1ba50: 0adb                      FPIXNE 
1ba60: 4cda                      MOVE   B6,B10
1ba70: e37a                      SUBXY  B11,B10
1ba80: 4f51                      MOVE   B10,A1
1ba90: ec25                      MOVX   A1,A5
1baa0: 4e88                      MOVE   A4,B8
1bab0: 4ec2                      MOVE   A6,B2
1bac0: 4ea7                      MOVE   A5,B7
1bad0: e257                      SUBXY  B2,B7
1bae0: 1037                      INC    B7
1baf0: 0537                      ZEXT   B7,0
1bb00: 0bb7 0000 0001            ORI    10000h,B7
1bb30: b7a1 0050                 MOVE   *A13(50h),A1,1
1bb50: cb02                      JRNE   1BB80h
1bb60: 0fe0                      FILL   XY
1bb70: c001                      JR     1BB90h
1bb80: 0921                      CALL   A1
1bb90: b2cd 0000                 MOVE   A6,*A13(0h),1
1bbb0: b2ad 0020                 MOVE   A5,*A13(20h),1
1bbd0: 4cc1                      MOVE   A6,A1
1bbe0: 09e2 0000 0001            MOVI   10000h,A2
1bc10: e241                      SUBXY  A2,A1
1bc20: 9223                      MOVE   A1,*A3+,1
1bc30: 90a3                      MOVE   A5,*A3+,0
1bc40: 90c3                      MOVE   A6,*A3+,0
1bc50: 90a3                      MOVE   A5,*A3+,0
1bc60: 1820                      MOVK   1h,A0
1bc70: 9003                      MOVE   A0,*A3+,0
1bc80: 1030                      INC    B0
1bc90: 0d3f 0026                 CALLR  1BF10h
1bcb0: b7a6 0000                 MOVE   *A13(0h),A6,1
1bcd0: b7a5 0020                 MOVE   *A13(20h),A5,1
1bcf0: 4cc1                      MOVE   A6,A1
1bd00: 09e2 0000 0001            MOVI   10000h,A2
1bd30: e041                      ADDXY  A2,A1
1bd40: 9223                      MOVE   A1,*A3+,1
1bd50: 90a3                      MOVE   A5,*A3+,0
1bd60: 90c3                      MOVE   A6,*A3+,0
1bd70: 90a3                      MOVE   A5,*A3+,0
1bd80: 09c0 ffff                 MOVI   FFFFh,A0
1bda0: 9003                      MOVE   A0,*A3+,0
1bdb0: 1030                      INC    B0
1bdc0: 0d3f 0013                 CALLR  1BF10h
1bde0: 1828                      MOVK   1h,A8
1bdf0: c001                      JR     1BE10h
1be00: 4508                      SUB    A8,A8
1be10: b5a1 0040                 MOVE   *A13(40h),A1,0
1be30: 0581 0130 c000            MOVE   A1,@C0000130h,0
1be60: 0bee ff8f                 SUBI   70h,A14
1be80: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
1bea0: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
1bec0: b7ee 0020                 MOVE   *SP(20h),A14,1
1bee0: 0962                      RETS   2h
1bef0: 100f                      ADDK   20h,SP
1bf00: c0ef                      JR     1BE00h
1bf10: a460                      MOVE   -*A3,A0,0
1bf20: 0500                      SEXT   A0,0
1bf30: a469                      MOVE   -*A3,A9,0
1bf40: a46a                      MOVE   -*A3,A10,0
1bf50: a465                      MOVE   -*A3,A5,0
1bf60: a666                      MOVE   -*A3,A6,1
1bf70: eec5                      MOVY   A6,A5
1bf80: eec9                      MOVY   A6,A9
1bf90: eeca                      MOVY   A6,A10
1bfa0: 1430                      DEC    B0
1bfb0: 1187                      ADDK   Ch,A7
1bfc0: 4ccc                      MOVE   A6,A12
1bfd0: f381                      PIXT   *A12,XY,A1
1bfe0: 5701                      XOR    A8,A1
1bff0: cb12                      JRNE   1C120h
1c000: 4d8b                      MOVE   A12,A11
1c010: 4d81                      MOVE   A12,A1
1c020: 4f14                      MOVE   B8,A4
1c030: 4e2b                      MOVE   A1,B11
1c040: e2bb                      SUBXY  B5,B11
1c050: 103b                      INC    B11
1c060: 053b                      ZEXT   B11,0
1c070: 03bb                      NEG    B11
1c080: 4e2a                      MOVE   A1,B10
1c090: e95a                      CVXYL  B10,B10
1c0a0: 4f08                      MOVE   A8,B8
1c0b0: 0298                      RPIX   B8
1c0c0: 0adb                      FPIXNE 
1c0d0: e0bb                      ADDXY  B5,B11
1c0e0: 4f71                      MOVE   B11,A1
1c0f0: ec2c                      MOVX   A1,A12
1c100: 4e88                      MOVE   A4,B8
1c110: c019                      JR     1C2B0h
1c120: 102c                      INC    A12
1c130: e4ac                      CMPXY  A5,A12
1c140: c515                      JRGE   1C2A0h
1c150: e782                      CPW    A12,A2
1c160: cc13                      JRV    1C2A0h
1c170: f382                      PIXT   *A12,XY,A2
1c180: 5702                      XOR    A8,A2
1c190: ca10                      JREQ   1C2A0h
1c1a0: 4f14                      MOVE   B8,A4
1c1b0: 4f8a                      MOVE   A12,B10
1c1c0: 4cdb                      MOVE   B6,B11
1c1d0: e35b                      SUBXY  B10,B11
1c1e0: 053b                      ZEXT   B11,0
1c1f0: 4f8a                      MOVE   A12,B10
1c200: e95a                      CVXYL  B10,B10
1c210: 4f08                      MOVE   A8,B8
1c220: 0298                      RPIX   B8
1c230: 0abb                      FPIXEQ 
1c240: 4cda                      MOVE   B6,B10
1c250: e37a                      SUBXY  B11,B10
1c260: 143a                      DEC    B10
1c270: 4f52                      MOVE   B10,A2
1c280: ec4c                      MOVX   A2,A12
1c290: 4e88                      MOVE   A4,B8
1c2a0: 4d8b                      MOVE   A12,A11
1c2b0: e4ac                      CMPXY  A5,A12
1c2c0: c561                      JRGE   1C8E0h
1c2d0: 4d61                      MOVE   A11,A1
1c2e0: 1021                      INC    A1
1c2f0: 4f14                      MOVE   B8,A4
1c300: 4f6a                      MOVE   A11,B10
1c310: 4cdb                      MOVE   B6,B11
1c320: e35b                      SUBXY  B10,B11
1c330: 105b                      ADDK   2h,B11
1c340: 053b                      ZEXT   B11,0
1c350: 4f6a                      MOVE   A11,B10
1c360: e95a                      CVXYL  B10,B10
1c370: 4f08                      MOVE   A8,B8
1c380: 0298                      RPIX   B8
1c390: 0adb                      FPIXNE 
1c3a0: 4cda                      MOVE   B6,B10
1c3b0: e37a                      SUBXY  B11,B10
1c3c0: 4f52                      MOVE   B10,A2
1c3d0: ec4b                      MOVX   A2,A11
1c3e0: 4e88                      MOVE   A4,B8
1c3f0: 4f82                      MOVE   A12,B2
1c400: 4f67                      MOVE   A11,B7
1c410: e257                      SUBXY  B2,B7
1c420: cc4b                      JRV    1C8E0h
1c430: 1037                      INC    B7
1c440: 0537                      ZEXT   B7,0
1c450: 0bb7 0000 0001            ORI    10000h,B7
1c480: b7a1 0050                 MOVE   *A13(50h),A1,1
1c4a0: cb02                      JRNE   1C4D0h
1c4b0: 0fe0                      FILL   XY
1c4c0: c001                      JR     1C4E0h
1c4d0: 0921                      CALL   A1
1c4e0: 4c01                      MOVE   A0,A1
1c4f0: 2601                      SLL    10h,A1
1c500: 4d82                      MOVE   A12,A2
1c510: e222                      SUBXY  A1,A2
1c520: e641                      CPW    A2,A1
1c530: cc3a                      JRV    1C8E0h
1c540: 9243                      MOVE   A2,*A3+,1
1c550: 9163                      MOVE   A11,*A3+,0
1c560: 9183                      MOVE   A12,*A3+,0
1c570: 9163                      MOVE   A11,*A3+,0
1c580: 9003                      MOVE   A0,*A3+,0
1c590: 1030                      INC    B0
1c5a0: 1587                      SUBK   Ch,A7
1c5b0: ce93                      JRN    1BEF0h
1c5c0: 1841                      MOVK   2h,A1
1c5d0: 4d42                      MOVE   A10,A2
1c5e0: e222                      SUBXY  A1,A2
1c5f0: e44c                      CMPXY  A2,A12
1c600: c513                      JRGE   1C740h
1c610: 4e4a                      MOVE   A2,B10
1c620: 4c01                      MOVE   A0,A1
1c630: 2601                      SLL    10h,A1
1c640: 4d82                      MOVE   A12,A2
1c650: e022                      ADDXY  A1,A2
1c660: e641                      CPW    A2,A1
1c670: cc26                      JRV    1C8E0h
1c680: 9243                      MOVE   A2,*A3+,1
1c690: 4f52                      MOVE   B10,A2
1c6a0: 9043                      MOVE   A2,*A3+,0
1c6b0: 9183                      MOVE   A12,*A3+,0
1c6c0: 9163                      MOVE   A11,*A3+,0
1c6d0: 4c01                      MOVE   A0,A1
1c6e0: 03a1                      NEG    A1
1c6f0: 9023                      MOVE   A1,*A3+,0
1c700: 1030                      INC    B0
1c710: 1587                      SUBK   Ch,A7
1c720: ce00 ff7b                 JRN    1BEF0h
1c740: 1841                      MOVK   2h,A1
1c750: 4d22                      MOVE   A9,A2
1c760: e022                      ADDXY  A1,A2
1c770: e562                      CMPXY  A11,A2
1c780: c510                      JRGE   1C890h
1c790: 4c01                      MOVE   A0,A1
1c7a0: 2601                      SLL    10h,A1
1c7b0: e022                      ADDXY  A1,A2
1c7c0: e641                      CPW    A2,A1
1c7d0: cc10                      JRV    1C8E0h
1c7e0: 9243                      MOVE   A2,*A3+,1
1c7f0: 9163                      MOVE   A11,*A3+,0
1c800: 9183                      MOVE   A12,*A3+,0
1c810: 9163                      MOVE   A11,*A3+,0
1c820: 4c01                      MOVE   A0,A1
1c830: 03a1                      NEG    A1
1c840: 9023                      MOVE   A1,*A3+,0
1c850: 1030                      INC    B0
1c860: 1587                      SUBK   Ch,A7
1c870: ce00 ff66                 JRN    1BEF0h
1c890: 4d6c                      MOVE   A11,A12
1c8a0: 104c                      ADDK   2h,A12
1c8b0: e4ac                      CMPXY  A5,A12
1c8c0: c400 ff6f                 JRLT   1BFD0h
1c8e0: 4c10                      MOVE   B0,B0
1c8f0: c700 ff60                 JRGT   1BF10h
1c910: 0960                      RETS   

_set_srcbm:
1c920: 098f 000c                 MMTM   SP,A12,A13
1c940: 4dcd                      MOVE   A14,A13
1c950: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1c970: cb05                      JRNE   1C9D0h
1c980: 4508                      SUB    A8,A8
1c990: 0788 0040 0000            MOVE   A8,@40h,1
1c9c0: c01e                      JR     1CBB0h
1c9d0: 09e8 77c0 0002            MOVI   277C0h,A8
1ca00: 0788 0040 0000            MOVE   A8,@40h,1
1ca30: 078c 77c0 0002            MOVE   A12,@277C0h,1
1ca60: 0550                      SETF   10h,0,0
1ca70: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1ca90: 0588 77e0 0002            MOVE   A8,@277E0h,0
1cac0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1cae0: 0588 77f0 0002            MOVE   A8,@277F0h,0
1cb10: b5a8 ff80                 MOVE   *A13(FF80h),A8,0
1cb30: 0588 7800 0002            MOVE   A8,@27800h,0
1cb60: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
1cb80: 0588 7810 0002            MOVE   A8,@27810h,0
1cbb0: b7ee 0060                 MOVE   *SP(60h),A14,1
1cbd0: 09af 3000                 MMFM   SP,A12,A13
1cbf0: 0962                      RETS   2h

_set_dstbm:
1cc00: 098f 000c                 MMTM   SP,A12,A13
1cc20: 4dcd                      MOVE   A14,A13
1cc30: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
1cc50: cb05                      JRNE   1CCB0h
1cc60: 4508                      SUB    A8,A8
1cc70: 0788 0060 0000            MOVE   A8,@60h,1
1cca0: c01e                      JR     1CE90h
1ccb0: 09e8 7820 0002            MOVI   27820h,A8
1cce0: 0788 0060 0000            MOVE   A8,@60h,1
1cd10: 078c 7820 0002            MOVE   A12,@27820h,1
1cd40: 0550                      SETF   10h,0,0
1cd50: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
1cd70: 0588 7840 0002            MOVE   A8,@27840h,0
1cda0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
1cdc0: 0588 7850 0002            MOVE   A8,@27850h,0
1cdf0: b5a8 ff80                 MOVE   *A13(FF80h),A8,0
1ce10: 0588 7860 0002            MOVE   A8,@27860h,0
1ce40: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
1ce60: 0588 7870 0002            MOVE   A8,@27870h,0
1ce90: b7ee 0060                 MOVE   *SP(60h),A14,1
1ceb0: 09af 3000                 MMFM   SP,A12,A13
1ced0: 0962                      RETS   2h

_swap_bm:
1cee0: 098f 000c                 MMTM   SP,A12,A13
1cf00: 4dcd                      MOVE   A14,A13
1cf10: 0b0e 0060                 ADDI   60h,A14
1cf30: 09e8 77c0 0002            MOVI   277C0h,A8
1cf60: 4dac                      MOVE   A13,A12
1cf70: 9b0c                      MOVE   *A8+,*A12+,1
1cf80: 9b0c                      MOVE   *A8+,*A12+,1
1cf90: 8b0c                      MOVE   *A8,*A12,1
1cfa0: 09ec 77c0 0002            MOVI   277C0h,A12
1cfd0: 09e8 7820 0002            MOVI   27820h,A8
1d000: 9b0c                      MOVE   *A8+,*A12+,1
1d010: 9b0c                      MOVE   *A8+,*A12+,1
1d020: 8b0c                      MOVE   *A8,*A12,1
1d030: 09ec 7820 0002            MOVI   27820h,A12
1d060: 4da8                      MOVE   A13,A8
1d070: 9b0c                      MOVE   *A8+,*A12+,1
1d080: 9b0c                      MOVE   *A8+,*A12+,1
1d090: 8b0c                      MOVE   *A8,*A12,1
1d0a0: 07ac 0040 0000            MOVE   @40h,A12,1
1d0d0: 1828                      MOVK   1h,A8
1d0e0: cb01                      JRNE   1D100h
1d0f0: 4508                      SUB    A8,A8
1d100: 07ac 0060 0000            MOVE   @60h,A12,1
1d130: ca03                      JREQ   1D170h
1d140: 0bc8 0001 0000            XORI   1h,A8
1d170: 4d08                      MOVE   A8,A8
1d180: ca19                      JREQ   1D320h
1d190: 07a8 0040 0000            MOVE   @40h,A8,1
1d1c0: cb0b                      JRNE   1D280h
1d1d0: 09e8 77c0 0002            MOVI   277C0h,A8
1d200: 0788 0040 0000            MOVE   A8,@40h,1
1d230: 458c                      SUB    A12,A12
1d240: 078c 0060 0000            MOVE   A12,@60h,1
1d270: c00a                      JR     1D320h
1d280: 09e8 7820 0002            MOVI   27820h,A8
1d2b0: 0788 0060 0000            MOVE   A8,@60h,1
1d2e0: 458c                      SUB    A12,A12
1d2f0: 078c 0040 0000            MOVE   A12,@40h,1
1d320: 0bee ff9f                 SUBI   60h,A14
1d340: 09af 3000                 MMFM   SP,A12,A13
1d360: 0960                      RETS   

_dm_set_draw_origin:
1d370: a20f                      MOVE   A0,-*SP,1
1d380: a7c8                      MOVE   -*A14,A8,1
1d390: 0570                      SETF   10h,1,0
1d3a0: 9500                      MOVE   *A8+,A0,0
1d3b0: 8508                      MOVE   *A8,A8,0
1d3c0: c004                      JR     1D410h

_set_draw_origin:
1d3d0: a20f                      MOVE   A0,-*SP,1
1d3e0: a7c0                      MOVE   -*A14,A0,1
1d3f0: a7c8                      MOVE   -*A14,A8,1
1d400: 0550                      SETF   10h,0,0
1d410: 2608                      SLL    10h,A8
1d420: ec08                      MOVX   A0,A8
1d430: 0788 0000 0000            MOVE   A8,@0h,1
1d460: 97e0                      MOVE   *SP+,A0,1
1d470: 0962                      RETS   2h

_dm_set_patn:
1d480: a20f                      MOVE   A0,-*SP,1
1d490: a22f                      MOVE   A1,-*SP,1
1d4a0: a7c8                      MOVE   -*A14,A8,1
1d4b0: 1208                      ADDK   10h,A8
1d4c0: 09e0 0000 0000            MOVI   0h,A0
1d4f0: 09c1 0050                 MOVI   50h,A1
1d510: 2fa1                      SRL    3h,A1
1d520: 0548                      SETF   8h,0,0
1d530: 9900                      MOVE   *A8+,*A0+,0
1d540: 3c41                      DSJS   A1,1D530h
1d550: 09e8 1430 0001            MOVI   11430h,A8
1d580: 0788 0050 0000            MOVE   A8,@50h,1
1d5b0: 5708                      CLR    A8
1d5c0: 0788 0070 0000            MOVE   A8,@70h,1
1d5f0: 97e1                      MOVE   *SP+,A1,1
1d600: 97e0                      MOVE   *SP+,A0,1
1d610: 0962                      RETS   2h

_set_patn:
1d620: a20f                      MOVE   A0,-*SP,1
1d630: a22f                      MOVE   A1,-*SP,1
1d640: a7c8                      MOVE   -*A14,A8,1
1d650: c0e6                      JR     1D4C0h

_dm_set_pensize:
1d660: a20f                      MOVE   A0,-*SP,1
1d670: a7c8                      MOVE   -*A14,A8,1
1d680: 0570                      SETF   10h,1,0
1d690: 9500                      MOVE   *A8+,A0,0
1d6a0: 8508                      MOVE   *A8,A8,0
1d6b0: c004                      JR     1D700h

_set_pensize:
1d6c0: a20f                      MOVE   A0,-*SP,1
1d6d0: a7c0                      MOVE   -*A14,A0,1
1d6e0: a7c8                      MOVE   -*A14,A8,1
1d6f0: 0550                      SETF   10h,0,0
1d700: 2608                      SLL    10h,A8
1d710: ec08                      MOVX   A0,A8
1d720: 0788 0020 0000            MOVE   A8,@20h,1
1d750: 97e0                      MOVE   *SP+,A0,1
1d760: 0962                      RETS   2h
1d770: 098f 003c                 MMTM   SP,A10-A13
1d790: 4dcd                      MOVE   A14,A13
1d7a0: 0b0e 0100                 ADDI   100h,A14
1d7c0: 07a8 7920 0002            MOVE   @27920h,A8,1
1d7f0: c600 013f                 JRLE   1EC00h
1d810: 07a8 78e0 0002            MOVE   @278E0h,A8,1
1d840: c600 013a                 JRLE   1EC00h
1d860: 07a8 78a0 0002            MOVE   @278A0h,A8,1
1d890: c507                      JRGE   1D910h
1d8a0: 07a8 7940 0002            MOVE   @27940h,A8,1
1d8d0: 1088                      ADDK   4h,A8
1d8e0: 0788 7940 0002            MOVE   A8,@27940h,1
1d910: a3cf                      MOVE   A14,-*SP,1
1d920: 93ae                      MOVE   A13,*A14+,1
1d930: d60e 7900 0002            MOVE   @27900h,*A14+,1
1d960: 0d5f 4780 0002            CALLA  24780h
1d990: b7a8 0020                 MOVE   *A13(20h),A8,1
1d9b0: 07ab 7920 0002            MOVE   @27920h,A11,1
1d9e0: 0b28 0000 0001            ADDI   10000h,A8
1da10: 5d0b                      MPYS   A8,A11
1da20: 0b2b 0000 0001            ADDI   10000h,A11
1da50: 29eb                      SRA    11h,A11
1da60: 0570                      SETF   10h,1,0
1da70: b16d 0080                 MOVE   A11,*A13(80h),0
1da90: 87a8                      MOVE   *A13,A8,1
1daa0: 07ab 78e0 0002            MOVE   @278E0h,A11,1
1dad0: 0b28 0000 0001            ADDI   10000h,A8
1db00: 5d0b                      MPYS   A8,A11
1db10: 0b2b 0000 0001            ADDI   10000h,A11
1db40: 29eb                      SRA    11h,A11
1db50: b16d 0090                 MOVE   A11,*A13(90h),0
1db70: 07ab 7920 0002            MOVE   @27920h,A11,1
1dba0: b7a8 0020                 MOVE   *A13(20h),A8,1
1dbc0: 5d0b                      MPYS   A8,A11
1dbd0: 0b2b 8000 0000            ADDI   8000h,A11
1dc00: 2a2b                      SRA    Fh,A11
1dc10: b16d 00c0                 MOVE   A11,*A13(C0h),0
1dc30: 07ab 78e0 0002            MOVE   @278E0h,A11,1
1dc60: 87a8                      MOVE   *A13,A8,1
1dc70: 5d0b                      MPYS   A8,A11
1dc80: 0b2b 8000 0000            ADDI   8000h,A11
1dcb0: 2a2b                      SRA    Fh,A11
1dcc0: b16d 00d0                 MOVE   A11,*A13(D0h),0
1dce0: 07ab 78a0 0002            MOVE   @278A0h,A11,1
1dd10: 038b                      ABS    A11
1dd20: 0b4b fe98                 CMPI   167h,A11
1dd40: c75f                      JRGT   1E340h
1dd50: a3cf                      MOVE   A14,-*SP,1
1dd60: 93ae                      MOVE   A13,*A14+,1
1dd70: 07a8 7900 0002            MOVE   @27900h,A8,1
1dda0: 07ab 78a0 0002            MOVE   @278A0h,A11,1
1ddd0: 4168                      ADD    A11,A8
1dde0: 930e                      MOVE   A8,*A14+,1
1ddf0: 0d5f 4780 0002            CALLA  24780h
1de20: b7a8 0020                 MOVE   *A13(20h),A8,1
1de40: 07ab 7920 0002            MOVE   @27920h,A11,1
1de70: 0b28 0000 0001            ADDI   10000h,A8
1dea0: 5d0b                      MPYS   A8,A11
1deb0: 0b2b 0000 0001            ADDI   10000h,A11
1dee0: 29eb                      SRA    11h,A11
1def0: 0570                      SETF   10h,1,0
1df00: b16d 00a0                 MOVE   A11,*A13(A0h),0
1df20: 87a8                      MOVE   *A13,A8,1
1df30: 07ab 78e0 0002            MOVE   @278E0h,A11,1
1df60: 0b28 0000 0001            ADDI   10000h,A8
1df90: 5d0b                      MPYS   A8,A11
1dfa0: 0b2b 0000 0001            ADDI   10000h,A11
1dfd0: 29eb                      SRA    11h,A11
1dfe0: b16d 00b0                 MOVE   A11,*A13(B0h),0
1e000: 07ab 7920 0002            MOVE   @27920h,A11,1
1e030: b7a8 0020                 MOVE   *A13(20h),A8,1
1e050: 5d0b                      MPYS   A8,A11
1e060: 0b2b 8000 0000            ADDI   8000h,A11
1e090: 2a2b                      SRA    Fh,A11
1e0a0: b16d 00e0                 MOVE   A11,*A13(E0h),0
1e0c0: 07ab 78e0 0002            MOVE   @278E0h,A11,1
1e0f0: 87a8                      MOVE   *A13,A8,1
1e100: 5d0b                      MPYS   A8,A11
1e110: 0b2b 8000 0000            ADDI   8000h,A11
1e140: 2a2b                      SRA    Fh,A11
1e150: b16d 00f0                 MOVE   A11,*A13(F0h),0
1e170: 07ab 78a0 0002            MOVE   @278A0h,A11,1
1e1a0: 038b                      ABS    A11
1e1b0: 0b4b ff4c                 CMPI   B3h,A11
1e1d0: c623                      JRLE   1E410h
1e1e0: b5ab 00e0                 MOVE   *A13(E0h),A11,0
1e200: b5a8 00c0                 MOVE   *A13(C0h),A8,0
1e220: 490b                      CMP    A8,A11
1e230: cb1d                      JRNE   1E410h
1e240: b5ab 00f0                 MOVE   *A13(F0h),A11,0
1e260: b5a8 00d0                 MOVE   *A13(D0h),A8,0
1e280: 490b                      CMP    A8,A11
1e290: cb17                      JRNE   1E410h
1e2a0: 07ab 7940 0002            MOVE   @27940h,A11,1
1e2d0: 110b                      ADDK   8h,A11
1e2e0: 078b 7940 0002            MOVE   A11,@27940h,1
1e310: 1f6b                      BTST   4h,A11
1e320: cb13                      JRNE   1E460h
1e330: c058                      JR     1E8C0h
1e340: 07ab 7940 0002            MOVE   @27940h,A11,1
1e370: 110b                      ADDK   8h,A11
1e380: 078b 7940 0002            MOVE   A11,@27940h,1
1e3b0: bbad 0080 00a0            MOVE   *A13(80h),*A13(A0h),1
1e3e0: bbad 00c0 00e0            MOVE   *A13(C0h),*A13(E0h),1
1e410: 07a8 7940 0002            MOVE   @27940h,A8,1
1e440: 1f68                      BTST   4h,A8
1e450: ca46                      JREQ   1E8C0h
1e460: 07a8 7940 0002            MOVE   @27940h,A8,1
1e490: 1f88                      BTST   3h,A8
1e4a0: cb41                      JRNE   1E8C0h
1e4b0: 07ac 7920 0002            MOVE   @27920h,A12,1
1e4e0: 2bec                      SRA    1h,A12
1e4f0: 07ab 7880 0002            MOVE   @27880h,A11,1
1e520: 416c                      ADD    A11,A12
1e530: 07aa 78e0 0002            MOVE   @278E0h,A10,1
1e560: 2bea                      SRA    1h,A10
1e570: 07ab 78c0 0002            MOVE   @278C0h,A11,1
1e5a0: 416a                      ADD    A11,A10
1e5b0: a3cf                      MOVE   A14,-*SP,1
1e5c0: 930e                      MOVE   A8,*A14+,1
1e5d0: 456b                      SUB    A11,A11
1e5e0: 936e                      MOVE   A11,*A14+,1
1e5f0: 934e                      MOVE   A10,*A14+,1
1e600: 938e                      MOVE   A12,*A14+,1
1e610: b5ab 00b0                 MOVE   *A13(B0h),A11,0
1e630: 07a8 78c0 0002            MOVE   @278C0h,A8,1
1e660: 410b                      ADD    A8,A11
1e670: 936e                      MOVE   A11,*A14+,1
1e680: b5ab 00a0                 MOVE   *A13(A0h),A11,0
1e6a0: 07a8 7880 0002            MOVE   @27880h,A8,1
1e6d0: 410b                      ADD    A8,A11
1e6e0: 936e                      MOVE   A11,*A14+,1
1e6f0: 0d5f fc50 0001            CALLA  1FC50h
1e720: a3cf                      MOVE   A14,-*SP,1
1e730: d60e 7940 0002            MOVE   @27940h,*A14+,1
1e760: 4508                      SUB    A8,A8
1e770: 930e                      MOVE   A8,*A14+,1
1e780: 0570                      SETF   10h,1,0
1e790: b5ab 0090                 MOVE   *A13(90h),A11,0
1e7b0: 07a8 78c0 0002            MOVE   @278C0h,A8,1
1e7e0: 410b                      ADD    A8,A11
1e7f0: 936e                      MOVE   A11,*A14+,1
1e800: b5ab 0080                 MOVE   *A13(80h),A11,0
1e820: 07a8 7880 0002            MOVE   @27880h,A8,1
1e850: 410b                      ADD    A8,A11
1e860: 936e                      MOVE   A11,*A14+,1
1e870: 934e                      MOVE   A10,*A14+,1
1e880: 938e                      MOVE   A12,*A14+,1
1e890: 0d5f fc50 0001            CALLA  1FC50h
1e8c0: 07ac 7920 0002            MOVE   @27920h,A12,1
1e8f0: 0570                      SETF   10h,1,0
1e900: b18d 0040                 MOVE   A12,*A13(40h),0
1e920: 07aa 78e0 0002            MOVE   @278E0h,A10,1
1e950: b14d 0050                 MOVE   A10,*A13(50h),0
1e970: 07a8 7880 0002            MOVE   @27880h,A8,1
1e9a0: b10d 0060                 MOVE   A8,*A13(60h),0
1e9c0: 07ab 78c0 0002            MOVE   @278C0h,A11,1
1e9f0: b16d 0070                 MOVE   A11,*A13(70h),0
1ea10: a3cf                      MOVE   A14,-*SP,1
1ea20: d60e 7940 0002            MOVE   @27940h,*A14+,1
1ea50: 4dab                      MOVE   A13,A11
1ea60: 0b0b 00e0                 ADDI   E0h,A11
1ea80: 9b6e                      MOVE   *A11+,*A14+,1
1ea90: 4dab                      MOVE   A13,A11
1eaa0: 0b0b 00c0                 ADDI   C0h,A11
1eac0: 9b6e                      MOVE   *A11+,*A14+,1
1ead0: 4dab                      MOVE   A13,A11
1eae0: 0b0b 00a0                 ADDI   A0h,A11
1eb00: 9b6e                      MOVE   *A11+,*A14+,1
1eb10: 4dab                      MOVE   A13,A11
1eb20: 0b0b 0080                 ADDI   80h,A11
1eb40: 9b6e                      MOVE   *A11+,*A14+,1
1eb50: 4dab                      MOVE   A13,A11
1eb60: 0b0b 0060                 ADDI   60h,A11
1eb80: 9b6e                      MOVE   *A11+,*A14+,1
1eb90: 4dab                      MOVE   A13,A11
1eba0: 0b0b 0040                 ADDI   40h,A11
1ebc0: 9b6e                      MOVE   *A11+,*A14+,1
1ebd0: 0d5f 0b20 0002            CALLA  20B20h
1ec00: 0bee feff                 SUBI   100h,A14
1ec20: 09af 3c00                 MMFM   SP,A10-A13
1ec40: 0960                      RETS   

_styled_ovalarc:
1ec50: 098f 000c                 MMTM   SP,A12,A13
1ec70: 4dcd                      MOVE   A14,A13
1ec80: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1eca0: 0788 7920 0002            MOVE   A8,@27920h,1
1ecd0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
1ecf0: 0788 78e0 0002            MOVE   A8,@278E0h,1
1ed20: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
1ed40: 0788 7880 0002            MOVE   A8,@27880h,1
1ed70: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
1ed90: 0788 78c0 0002            MOVE   A8,@278C0h,1
1edc0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
1ede0: 0788 7900 0002            MOVE   A8,@27900h,1
1ee10: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
1ee30: 0788 78a0 0002            MOVE   A8,@278A0h,1
1ee60: b7a8 ff00                 MOVE   *A13(FF00h),A8,1
1ee80: 186c                      MOVK   3h,A12
1ee90: 510c                      AND    A8,A12
1eea0: 078c 7940 0002            MOVE   A12,@27940h,1
1eed0: 1fcc                      BTST   1h,A12
1eee0: cb09                      JRNE   1EF80h
1eef0: b7a8 ff20                 MOVE   *A13(FF20h),A8,1
1ef10: 0788 0080 0000            MOVE   A8,@80h,1
1ef40: 104c                      ADDK   2h,A12
1ef50: 078c 7940 0002            MOVE   A12,@27940h,1
1ef80: 0d5f d770 0001            CALLA  1D770h
1efb0: b7ee 0060                 MOVE   *SP(60h),A14,1
1efd0: 09af 3000                 MMFM   SP,A12,A13
1eff0: 0962                      RETS   2h

_dm_styled_ovalarc:
1f000: 098f 000c                 MMTM   SP,A12,A13
1f020: 4dcd                      MOVE   A14,A13
1f030: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1f050: 4f0e                      MOVE   A8,B14
1f060: 0570                      SETF   10h,1,0
1f070: 85d0                      MOVE   *B14,B0,0
1f080: 0790 7920 0002            MOVE   B0,@27920h,1
1f0b0: b5d2 0010                 MOVE   *B14(10h),B2,0
1f0d0: 0792 78e0 0002            MOVE   B2,@278E0h,1
1f100: b5da 0020                 MOVE   *B14(20h),B10,0
1f120: 079a 7880 0002            MOVE   B10,@27880h,1
1f150: b5dc 0030                 MOVE   *B14(30h),B12,0
1f170: 079c 78c0 0002            MOVE   B12,@278C0h,1
1f1a0: b5d1 0040                 MOVE   *B14(40h),B1,0
1f1c0: 0791 7900 0002            MOVE   B1,@27900h,1
1f1f0: b5d7 0050                 MOVE   *B14(50h),B7,0
1f210: 0797 78a0 0002            MOVE   B7,@278A0h,1
1f240: b5db 0080                 MOVE   *B14(80h),B11,0
1f260: 1868                      MOVK   3h,A8
1f270: 4f7c                      MOVE   B11,A12
1f280: 510c                      AND    A8,A12
1f290: 078c 7940 0002            MOVE   A12,@27940h,1
1f2c0: 1fcc                      BTST   1h,A12
1f2d0: cb0e                      JRNE   1F3C0h
1f2e0: 4fdc                      MOVE   B14,A12
1f2f0: 0b0c 0060                 ADDI   60h,A12
1f310: 878c                      MOVE   *A12,A12,1
1f320: 078c 0080 0000            MOVE   A12,@80h,1
1f350: 07a8 7940 0002            MOVE   @27940h,A8,1
1f380: 1048                      ADDK   2h,A8
1f390: 0788 7940 0002            MOVE   A8,@27940h,1
1f3c0: 0d5f d770 0001            CALLA  1D770h
1f3f0: b7ee 0060                 MOVE   *SP(60h),A14,1
1f410: 09af 3000                 MMFM   SP,A12,A13
1f430: 0962                      RETS   2h

_styled_piearc:
1f440: 098f 000c                 MMTM   SP,A12,A13
1f460: 4dcd                      MOVE   A14,A13
1f470: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1f490: 0788 7920 0002            MOVE   A8,@27920h,1
1f4c0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
1f4e0: 0788 78e0 0002            MOVE   A8,@278E0h,1
1f510: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
1f530: 0788 7880 0002            MOVE   A8,@27880h,1
1f560: b7a8 ff80                 MOVE   *A13(FF80h),A8,1
1f580: 0788 78c0 0002            MOVE   A8,@278C0h,1
1f5b0: b7a8 ff60                 MOVE   *A13(FF60h),A8,1
1f5d0: 0788 7900 0002            MOVE   A8,@27900h,1
1f600: b7a8 ff40                 MOVE   *A13(FF40h),A8,1
1f620: 0788 78a0 0002            MOVE   A8,@278A0h,1
1f650: b7a8 ff00                 MOVE   *A13(FF00h),A8,1
1f670: 186c                      MOVK   3h,A12
1f680: 510c                      AND    A8,A12
1f690: 120c                      ADDK   10h,A12
1f6a0: 078c 7940 0002            MOVE   A12,@27940h,1
1f6d0: 1fcc                      BTST   1h,A12
1f6e0: cb09                      JRNE   1F780h
1f6f0: b7a8 ff20                 MOVE   *A13(FF20h),A8,1
1f710: 0788 0080 0000            MOVE   A8,@80h,1
1f740: 104c                      ADDK   2h,A12
1f750: 078c 7940 0002            MOVE   A12,@27940h,1
1f780: 0d5f d770 0001            CALLA  1D770h
1f7b0: b7ee 0060                 MOVE   *SP(60h),A14,1
1f7d0: 09af 3000                 MMFM   SP,A12,A13
1f7f0: 0962                      RETS   2h

_dm_styled_piearc:
1f800: 098f 000c                 MMTM   SP,A12,A13
1f820: 4dcd                      MOVE   A14,A13
1f830: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
1f850: 4f0e                      MOVE   A8,B14
1f860: 0570                      SETF   10h,1,0
1f870: 85d0                      MOVE   *B14,B0,0
1f880: 0790 7920 0002            MOVE   B0,@27920h,1
1f8b0: b5d2 0010                 MOVE   *B14(10h),B2,0
1f8d0: 0792 78e0 0002            MOVE   B2,@278E0h,1
1f900: b5da 0020                 MOVE   *B14(20h),B10,0
1f920: 079a 7880 0002            MOVE   B10,@27880h,1
1f950: b5dc 0030                 MOVE   *B14(30h),B12,0
1f970: 079c 78c0 0002            MOVE   B12,@278C0h,1
1f9a0: b5d1 0040                 MOVE   *B14(40h),B1,0
1f9c0: 0791 7900 0002            MOVE   B1,@27900h,1
1f9f0: b5d7 0050                 MOVE   *B14(50h),B7,0
1fa10: 0797 78a0 0002            MOVE   B7,@278A0h,1
1fa40: b5db 0080                 MOVE   *B14(80h),B11,0
1fa60: 1868                      MOVK   3h,A8
1fa70: 4f7c                      MOVE   B11,A12
1fa80: 510c                      AND    A8,A12
1fa90: 120c                      ADDK   10h,A12
1faa0: 078c 7940 0002            MOVE   A12,@27940h,1
1fad0: 1fcc                      BTST   1h,A12
1fae0: cb0e                      JRNE   1FBD0h
1faf0: 4fdc                      MOVE   B14,A12
1fb00: 0b0c 0060                 ADDI   60h,A12
1fb20: 878c                      MOVE   *A12,A12,1
1fb30: 078c 0080 0000            MOVE   A12,@80h,1
1fb60: 07a8 7940 0002            MOVE   @27940h,A8,1
1fb90: 1048                      ADDK   2h,A8
1fba0: 0788 7940 0002            MOVE   A8,@27940h,1
1fbd0: 0d5f d770 0001            CALLA  1D770h
1fc00: b7ee 0060                 MOVE   *SP(60h),A14,1
1fc20: 09af 3000                 MMFM   SP,A12,A13
1fc40: 0962                      RETS   2h

_styled_line:
1fc50: 07a8 0060 0000            MOVE   @60h,A8,1
1fc80: cb68                      JRNE   20310h
1fc90: 099f e17e                 MMTM   SP,B0-B2,B7,B9-B14
1fcb0: 4f38                      MOVE   B9,A8
1fcc0: 4fce                      MOVE   A14,B14
1fcd0: a7d2                      MOVE   -*B14,B2,1
1fce0: a7d0                      MOVE   -*B14,B0,1
1fcf0: 2610                      SLL    10h,B0
1fd00: ee12                      MOVY   B0,B2
1fd10: a7d7                      MOVE   -*B14,B7,1
1fd20: a7d0                      MOVE   -*B14,B0,1
1fd30: 2610                      SLL    10h,B0
1fd40: ee17                      MOVY   B0,B7
1fd50: a7dd                      MOVE   -*B14,B13,1
1fd60: a7d1                      MOVE   -*B14,B1,1
1fd70: 1fd1                      BTST   1h,B1
1fd80: ca03                      JREQ   1FDC0h
1fd90: 07bd 0080 0000            MOVE   @80h,B13,1
1fdc0: 07b0 0000 0000            MOVE   @0h,B0,1
1fdf0: e012                      ADDXY  B0,B2
1fe00: e017                      ADDXY  B0,B7
1fe10: 1ff1                      BTST   0h,B1
1fe20: ca08                      JREQ   1FEB0h
1fe30: 0c57                      LINIT  
1fe40: c843                      JRC    20280h
1fe50: cc03                      JRV    1FE90h
1fe60: 0a92                      CVDXYL B2
1fe70: de1a                      FLINE   0
1fe80: c041                      JR     202A0h
1fe90: df1a                      LINE   0
1fea0: c03f                      JR     202A0h
1feb0: 0c57                      LINIT  
1fec0: c83b                      JRC    20280h
1fed0: 4919                      CMP    B8,B9
1fee0: ca10                      JREQ   1FFF0h
1fef0: 0566                      SETF   6h,1,0
1ff00: 05b1 00b0 c000            MOVE   @C00000B0h,B1,0
1ff30: ce0b                      JRN    1FFF0h
1ff40: 09de 0021                 MOVI   21h,B14
1ff60: 059e 00b0 c000            MOVE   B14,@C00000B0h,0
1ff90: 0080                      MWAIT  
1ffa0: df1a                      LINE   0
1ffb0: 0591 00b0 c000            MOVE   B1,@C00000B0h,0
1ffe0: c02b                      JR     202A0h
1fff0: 57de                      CLR    B14
20000: ecfe                      MOVX   B7,B14
20010: 4c17                      MOVE   B0,B7
20020: 45d7                      SUB    B14,B7
20030: 401e                      ADD    B0,B14
20040: 1ffd                      BTST   0h,B13
20050: cb03                      JRNE   20090h
20060: 4c10                      MOVE   B0,B0
20070: c50b                      JRGE   20130h
20080: c003                      JR     200C0h
20090: 4c10                      MOVE   B0,B0
200a0: c516                      JRGE   20210h
200b0: c00e                      JR     201A0h
200c0: e192                      ADDXY  B12,B2
200d0: 33fd                      RL     1Fh,B13
200e0: c80e                      JRC    201D0h
200f0: 41d0                      ADD    B14,B0
20100: c507                      JRGE   20180h
20110: 3cda                      DSJS   B10,200C0h
20120: c017                      JR     202A0h
20130: e172                      ADDXY  B11,B2
20140: 33fd                      RL     1Fh,B13
20150: c80e                      JRC    20240h
20160: 40f0                      ADD    B7,B0
20170: c4f9                      JRLT   20110h
20180: 3cda                      DSJS   B10,20130h
20190: c010                      JR     202A0h
201a0: f792                      DRAV   B12,B2
201b0: 33fd                      RL     1Fh,B13
201c0: c9f2                      JRNC   200F0h
201d0: 41d0                      ADD    B14,B0
201e0: c507                      JRGE   20260h
201f0: 3cda                      DSJS   B10,201A0h
20200: c009                      JR     202A0h
20210: f772                      DRAV   B11,B2
20220: 33fd                      RL     1Fh,B13
20230: c9f2                      JRNC   20160h
20240: 40f0                      ADD    B7,B0
20250: c4f9                      JRLT   201F0h
20260: 3cda                      DSJS   B10,20210h
20270: c002                      JR     202A0h
20280: 03ba                      NEG    B10
20290: 695d                      RL     B10,B13
202a0: 4f09                      MOVE   A8,B9
202b0: 303d                      RL     1h,B13
202c0: 079d 0080 0000            MOVE   B13,@80h,1
202f0: 09bf 7e87                 MMFM   SP,B0-B2,B7,B9-B14
20310: b7ee 0020                 MOVE   *SP(20h),A14,1
20330: 0962                      RETS   2h

_dm_styled_oval:
20340: 07a8 0060 0000            MOVE   @60h,A8,1
20370: cb77                      JRNE   20AF0h
20380: 098f ff4c                 MMTM   SP,A0-A7,A9,A12,A13
203a0: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
203c0: 0550                      SETF   10h,0,0
203d0: a7c8                      MOVE   -*A14,A8,1
203e0: 9502                      MOVE   *A8+,A2,0
203f0: ca68                      JREQ   20A80h
20400: 9500                      MOVE   *A8+,A0,0
20410: ca66                      JREQ   20A80h
20420: 970c                      MOVE   *A8+,A12,1
20430: 07ad 0000 0000            MOVE   @0h,A13,1
20460: e1ac                      ADDXY  A13,A12
20470: 4f81                      MOVE   A12,B1
20480: 970c                      MOVE   *A8+,A12,1
20490: 4f8d                      MOVE   A12,B13
204a0: 950e                      MOVE   *A8+,A14,0
204b0: 186c                      MOVK   3h,A12
204c0: 518e                      AND    A12,A14
204d0: c01a                      JR     20680h

_styled_oval:
204e0: 07a8 0060 0000            MOVE   @60h,A8,1
20510: cb5d                      JRNE   20AF0h
20520: 098f ff4c                 MMTM   SP,A0-A7,A9,A12,A13
20540: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
20560: a7c2                      MOVE   -*A14,A2,1
20570: ca50                      JREQ   20A80h
20580: a7c0                      MOVE   -*A14,A0,1
20590: ca4e                      JREQ   20A80h
205a0: a7cc                      MOVE   -*A14,A12,1
205b0: a7cd                      MOVE   -*A14,A13,1
205c0: 260d                      SLL    10h,A13
205d0: efac                      MOVY   A13,A12
205e0: 07ad 0000 0000            MOVE   @0h,A13,1
20610: e1ac                      ADDXY  A13,A12
20620: 4f81                      MOVE   A12,B1
20630: a7cc                      MOVE   -*A14,A12,1
20640: 4f8d                      MOVE   A12,B13
20650: a7ce                      MOVE   -*A14,A14,1
20660: 186c                      MOVK   3h,A12
20670: 518e                      AND    A12,A14
20680: 1fce                      BTST   1h,A14
20690: ca03                      JREQ   206D0h
206a0: 07bd 0080 0000            MOVE   @80h,B13,1
206d0: 191a                      MOVK   8h,B10
206e0: 110e                      ADDK   8h,A14
206f0: 4c0d                      MOVE   A0,A13
20700: 260d                      SLL    10h,A13
20710: ec4d                      MOVX   A2,A13
20720: 0570                      SETF   10h,1,0
20730: 0750                      SETF   10h,0,1
20740: 4000                      ADD    A0,A0
20750: 5e00                      MPYU   A0,A0
20760: 4042                      ADD    A2,A2
20770: 5e42                      MPYU   A2,A2
20780: 4823                      CMP    A1,A3
20790: cf15                      JRNN   208F0h
207a0: 187e                      MOVK   3h,B14
207b0: 182c                      MOVK   1h,A12
207c0: 260c                      SLL    10h,A12
207d0: e1ac                      ADDXY  A13,A12
207e0: 2fec                      SRL    1h,A12
207f0: edac                      MOVX   A13,A12
20800: 4f82                      MOVE   A12,B2
20810: e032                      ADDXY  B1,B2
20820: 4c50                      MOVE   B2,B0
20830: 4c24                      MOVE   A1,A4
20840: 5fa4                      MPYU   A13,A4
20850: 56c6                      CLR    A6
20860: 56e7                      CLR    A7
20870: 5708                      CLR    A8
20880: 5729                      CLR    A9
20890: 1ded                      BTST   10h,A13
208a0: ca1a                      JREQ   20A50h
208b0: 4c67                      MOVE   A3,A7
208c0: 4c69                      MOVE   A3,A9
208d0: 2fc9                      SRL    2h,A9
208e0: c016                      JR     20A50h
208f0: 18be                      MOVK   5h,B14
20900: 578c                      CLR    A12
20910: edac                      MOVX   A13,A12
20920: 2fec                      SRL    1h,A12
20930: efac                      MOVY   A13,A12
20940: 4f82                      MOVE   A12,B2
20950: e032                      ADDXY  B1,B2
20960: 4c50                      MOVE   B2,B0
20970: 4c66                      MOVE   A3,A6
20980: 320d                      RL     10h,A13
20990: 5fa6                      MPYU   A13,A6
209a0: 5684                      CLR    A4
209b0: 56a5                      CLR    A5
209c0: 5708                      CLR    A8
209d0: 5729                      CLR    A9
209e0: 1ded                      BTST   10h,A13
209f0: ca05                      JREQ   20A50h
20a00: 4c25                      MOVE   A1,A5
20a10: 03a5                      NEG    A5
20a20: 03e4                      NOT    A4
20a30: 4c29                      MOVE   A1,A9
20a40: 2fc9                      SRL    2h,A9
20a50: 0740                      SETF   20h,0,1
20a60: 0d3f 0099                 CALLR  21410h
20a80: 079d 0080 0000            MOVE   B13,@80h,1
20ab0: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
20ad0: 09af 32ff                 MMFM   SP,A0-A7,A9,A12,A13
20af0: b7ee 0020                 MOVE   *SP(20h),A14,1
20b10: 0962                      RETS   2h

_arcstyle:
20b20: 07a8 0060 0000            MOVE   @60h,A8,1
20b50: cb71                      JRNE   21270h
20b60: 098f ff4c                 MMTM   SP,A0-A7,A9,A12,A13
20b80: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
20ba0: a7cd                      MOVE   -*A14,A13,1
20bb0: a7cc                      MOVE   -*A14,A12,1
20bc0: 07a8 0000 0000            MOVE   @0h,A8,1
20bf0: e10c                      ADDXY  A8,A12
20c00: 4f81                      MOVE   A12,B1
20c10: a7c8                      MOVE   -*A14,A8,1
20c20: 4f02                      MOVE   A8,B2
20c30: e032                      ADDXY  B1,B2
20c40: e108                      ADDXY  A8,A8
20c50: e3a8                      SUBXY  A13,A8
20c60: a7cc                      MOVE   -*A14,A12,1
20c70: 4f80                      MOVE   A12,B0
20c80: e030                      ADDXY  B1,B0
20c90: a7c0                      MOVE   -*A14,A0,1
20ca0: a7c2                      MOVE   -*A14,A2,1
20cb0: a7ce                      MOVE   -*A14,A14,1
20cc0: 07bd 0080 0000            MOVE   @80h,B13,1
20cf0: 0570                      SETF   10h,1,0
20d00: 0770                      SETF   10h,1,1
20d10: eda3                      MOVX   A13,A3
20d20: 0523                      ZEXT   A3,0
20d30: 5e63                      MPYU   A3,A3
20d40: efa1                      MOVY   A13,A1
20d50: 2e01                      SRL    10h,A1
20d60: 5e21                      MPYU   A1,A1
20d70: 4c09                      MOVE   A0,A9
20d80: 1fae                      BTST   2h,A14
20d90: ca02                      JREQ   20DC0h
20da0: 5729                      CLR    A9
20db0: e209                      SUBXY  A0,A9
20dc0: 0d3f 004c                 CALLR  212A0h
20de0: 191a                      MOVK   8h,B10
20df0: 1f8e                      BTST   3h,A14
20e00: cb23                      JRNE   21040h
20e10: 4802                      CMP    A0,A2
20e20: ca3c                      JREQ   211F0h
20e30: 4dda                      MOVE   B14,B10
20e40: 4c49                      MOVE   A2,A9
20e50: 1fae                      BTST   2h,A14
20e60: ca02                      JREQ   20E90h
20e70: 5729                      CLR    A9
20e80: e249                      SUBXY  A2,A9
20e90: 0d3f 003f                 CALLR  212A0h
20eb0: 45da                      SUB    B14,B10
20ec0: ca08                      JREQ   20F50h
20ed0: 415e                      ADD    B10,B14
20ee0: 1fae                      BTST   2h,A14
20ef0: cb01                      JRNE   20F10h
20f00: 03ba                      NEG    B10
20f10: 4d5a                      MOVE   B10,B10
20f20: cf11                      JRNN   21040h
20f30: 111a                      ADDK   8h,B10
20f40: c00f                      JR     21040h
20f50: ee45                      MOVY   A2,A5
20f60: 2a05                      SRA    10h,A5
20f70: 5c05                      MPYS   A0,A5
20f80: ee07                      MOVY   A0,A7
20f90: 2a07                      SRA    10h,A7
20fa0: 5c47                      MPYS   A2,A7
20fb0: 1fae                      BTST   2h,A14
20fc0: cb04                      JRNE   21010h
20fd0: 44a7                      SUB    A5,A7
20fe0: ce05                      JRN    21040h
20ff0: 191a                      MOVK   8h,B10
21000: c003                      JR     21040h
21010: 44e5                      SUB    A7,A5
21020: ce01                      JRN    21040h
21030: 191a                      MOVK   8h,B10
21040: 4d0c                      MOVE   A8,A12
21050: e18c                      ADDXY  A12,A12
21060: e18c                      ADDXY  A12,A12
21070: 4c24                      MOVE   A1,A4
21080: 5d84                      MPYS   A12,A4
21090: 4c66                      MOVE   A3,A6
210a0: 320c                      RL     10h,A12
210b0: 5d86                      MPYS   A12,A6
210c0: ef0d                      MOVY   A8,A13
210d0: 0508                      SEXT   A8,0
210e0: 5d08                      MPYS   A8,A8
210f0: 2a0d                      SRA    10h,A13
21100: 5dad                      MPYS   A13,A13
21110: 0740                      SETF   20h,0,1
21120: 4d28                      MOVE   A9,A8
21130: 5e28                      MPYU   A1,A8
21140: 442d                      SUB    A1,A13
21150: 4dac                      MOVE   A13,A12
21160: 5c6c                      MPYS   A3,A12
21170: 41a9                      ADD    A13,A9
21180: 4388                      ADDC   A12,A8
21190: 2441                      SLL    2h,A1
211a0: 5600                      CLR    A0
211b0: 2443                      SLL    2h,A3
211c0: 5642                      CLR    A2
211d0: 0d3f 0022                 CALLR  21410h
211f0: 079d 0080 0000            MOVE   B13,@80h,1
21220: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
21240: 09af 32ff                 MMFM   SP,A0-A7,A9,A12,A13
21260: 0740                      SETF   20h,0,1
21270: b7ee 0020                 MOVE   *SP(20h),A14,1
21290: 0962                      RETS   2h
212a0: 09fe 6578 3421            MOVI   34216578h,B14
212d0: ed2c                      MOVX   A9,A12
212e0: 050c                      SEXT   A12,0
212f0: cf02                      JRNN   21320h
21300: 038c                      ABS    A12
21310: 261e                      SLL    10h,B14
21320: 4c24                      MOVE   A1,A4
21330: 5f84                      MPYU   A12,A4
21340: ef2c                      MOVY   A9,A12
21350: 2a0c                      SRA    10h,A12
21360: cf02                      JRNN   21390h
21370: 038c                      ABS    A12
21380: 251e                      SLL    8h,B14
21390: 4c66                      MOVE   A3,A6
213a0: 5f86                      MPYU   A12,A6
213b0: 44e5                      SUB    A7,A5
213c0: 46c4                      SUBB   A6,A4
213d0: cf01                      JRNN   213F0h
213e0: 249e                      SLL    4h,B14
213f0: 2c9e                      SRL    1Ch,B14
21400: 0960                      RETS   
21410: 09dc ffff                 MOVI   FFFFh,B12
21430: 577b                      CLR    B11
21440: e39b                      SUBXY  B12,B11
21450: 103e                      INC    B14
21460: 1fbe                      BTST   2h,B14
21470: ca03                      JREQ   214B0h
21480: 03a5                      NEG    A5
21490: 03c4                      NEGB   A4
214a0: ed9b                      MOVX   B12,B11
214b0: 145e                      SUBK   2h,B14
214c0: 1fbe                      BTST   2h,B14
214d0: ca03                      JREQ   21510h
214e0: 03a7                      NEG    A7
214f0: 03c6                      NEGB   A6
21500: ef9b                      MOVY   B12,B11
21510: 579c                      CLR    B12
21520: ed7c                      MOVX   B11,B12
21530: 103e                      INC    B14
21540: 1fde                      BTST   1h,B14
21550: ca0e                      JREQ   21640h
21560: 4c2c                      MOVE   A1,A12
21570: 4c61                      MOVE   A3,A1
21580: 4d83                      MOVE   A12,A3
21590: 4c0c                      MOVE   A0,A12
215a0: 4c40                      MOVE   A2,A0
215b0: 4d82                      MOVE   A12,A2
215c0: 4cac                      MOVE   A5,A12
215d0: 4ce5                      MOVE   A7,A5
215e0: 4d87                      MOVE   A12,A7
215f0: 4c8c                      MOVE   A4,A12
21600: 4cc4                      MOVE   A6,A4
21610: 4d86                      MOVE   A12,A6
21620: 579c                      CLR    B12
21630: ef7c                      MOVY   B11,B12
21640: 4025                      ADD    A1,A5
21650: 4204                      ADDC   A0,A4
21660: 40a5                      ADD    A5,A5
21670: 4284                      ADDC   A4,A4
21680: 40a5                      ADD    A5,A5
21690: 4284                      ADDC   A4,A4
216a0: 4129                      ADD    A9,A9
216b0: 4308                      ADDC   A8,A8
216c0: 40e9                      ADD    A7,A9
216d0: 42c8                      ADDC   A6,A8
216e0: 4129                      ADD    A9,A9
216f0: 4308                      ADDC   A8,A8
21700: 40a9                      ADD    A5,A9
21710: 4288                      ADDC   A4,A8
21720: 4069                      ADD    A3,A9
21730: 4248                      ADDC   A2,A8
21740: 40e7                      ADD    A7,A7
21750: 42c6                      ADDC   A6,A6
21760: 40e7                      ADD    A7,A7
21770: 42c6                      ADDC   A6,A6
21780: 40a7                      ADD    A5,A7
21790: 4286                      ADDC   A4,A6
217a0: 4c2c                      MOVE   A1,A12
217b0: 2461                      SLL    3h,A1
217c0: 2c6c                      SRL    1Dh,A12
217d0: 2460                      SLL    3h,A0
217e0: 5580                      OR     A12,A0
217f0: 4c6c                      MOVE   A3,A12
21800: 2463                      SLL    3h,A3
21810: 2c6c                      SRL    1Dh,A12
21820: 2462                      SLL    3h,A2
21830: 5582                      OR     A12,A2
21840: 4023                      ADD    A1,A3
21850: 4202                      ADDC   A0,A2
21860: 1fae                      BTST   2h,A14
21870: cb01                      JRNE   21890h
21880: 03fe                      NOT    B14
21890: 1ffe                      BTST   0h,B14
218a0: ca0a                      JREQ   21950h
218b0: 03a9                      NEG    A9
218c0: 03c8                      NEGB   A8
218d0: 03a5                      NEG    A5
218e0: 03c4                      NEGB   A4
218f0: 03a7                      NEG    A7
21900: 03c6                      NEGB   A6
21910: 03a1                      NEG    A1
21920: 03c0                      NEGB   A0
21930: 03a3                      NEG    A3
21940: 03c2                      NEGB   A2
21950: 303d                      RL     1h,B13
21960: 09d7 ffff                 MOVI   FFFFh,B7
21980: 4d5a                      MOVE   B10,B10
21990: ca00 00a1                 JREQ   223C0h
219b0: 1ffe                      BTST   0h,B14
219c0: ca04                      JREQ   21A10h
219d0: 4c84                      MOVE   A4,A4
219e0: cf04                      JRNN   21A30h
219f0: c000 0080                 JR     22210h
21a10: 4cc6                      MOVE   A6,A6
21a20: cf3d                      JRNN   21E00h
21a30: 33fd                      RL     1Fh,B13
21a40: c804                      JRC    21A90h
21a50: 1fee                      BTST   0h,A14
21a60: ca03                      JREQ   21AA0h
21a70: f112                      PIXT   B8,*B2,XY
21a80: c001                      JR     21AA0h
21a90: f132                      PIXT   B9,*B2,XY
21aa0: 4d08                      MOVE   A8,A8
21ab0: c51b                      JRGE   21C70h
21ac0: e192                      ADDXY  B12,B2
21ad0: 4025                      ADD    A1,A5
21ae0: 4204                      ADDC   A0,A4
21af0: ce08                      JRN    21B80h
21b00: 40a9                      ADD    A5,A9
21b10: 4288                      ADDC   A4,A8
21b20: 4027                      ADD    A1,A7
21b30: 4206                      ADDC   A0,A6
21b40: cf0d                      JRNN   21C20h
21b50: 3e77                      DSJS   B7,21A30h
21b60: c000 0091                 JR     22490h
21b80: 1ffe                      BTST   0h,B14
21b90: caf6                      JREQ   21B00h
21ba0: 40a9                      ADD    A5,A9
21bb0: 4288                      ADDC   A4,A8
21bc0: 4027                      ADD    A1,A7
21bd0: 4206                      ADDC   A0,A6
21be0: 0d97 0061                 DSJ    B7,22210h
21c00: c000 0087                 JR     22490h
21c20: 1ffe                      BTST   0h,B14
21c30: cbf1                      JRNE   21B50h
21c40: 3b77                      DSJS   B7,21E00h
21c50: c000 0082                 JR     22490h
21c70: e172                      ADDXY  B11,B2
21c80: 4067                      ADD    A3,A7
21c90: 4246                      ADDC   A2,A6
21ca0: cf08                      JRNN   21D30h
21cb0: 40e9                      ADD    A7,A9
21cc0: 42c8                      ADDC   A6,A8
21cd0: 4025                      ADD    A1,A5
21ce0: 4204                      ADDC   A0,A4
21cf0: ce0b                      JRN    21DB0h
21d00: 0d97 ffd1                 DSJ    B7,21A30h
21d20: c076                      JR     22490h
21d30: 1ffe                      BTST   0h,B14
21d40: cbf6                      JRNE   21CB0h
21d50: 40e9                      ADD    A7,A9
21d60: 42c8                      ADDC   A6,A8
21d70: 4025                      ADD    A1,A5
21d80: 4204                      ADDC   A0,A4
21d90: 38d7                      DSJS   B7,21E00h
21da0: c06e                      JR     22490h
21db0: 1ffe                      BTST   0h,B14
21dc0: caf3                      JREQ   21D00h
21dd0: 0d97 0042                 DSJ    B7,22210h
21df0: c069                      JR     22490h
21e00: 143e                      DEC    B14
21e10: 03a9                      NEG    A9
21e20: 03c8                      NEGB   A8
21e30: 40a9                      ADD    A5,A9
21e40: 4288                      ADDC   A4,A8
21e50: 4129                      ADD    A9,A9
21e60: 4308                      ADDC   A8,A8
21e70: 44e9                      SUB    A7,A9
21e80: 46c8                      SUBB   A6,A8
21e90: 4029                      ADD    A1,A9
21ea0: 4208                      ADDC   A0,A8
21eb0: 4469                      SUB    A3,A9
21ec0: 4648                      SUBB   A2,A8
21ed0: 4129                      ADD    A9,A9
21ee0: 4308                      ADDC   A8,A8
21ef0: 4129                      ADD    A9,A9
21f00: 4308                      ADDC   A8,A8
21f10: 4069                      ADD    A3,A9
21f20: 4248                      ADDC   A2,A8
21f30: 4d0c                      MOVE   A8,A12
21f40: 27ac                      SLL    1Dh,A12
21f50: 2fa9                      SRL    3h,A9
21f60: 5589                      OR     A12,A9
21f70: 2ba8                      SRA    3h,A8
21f80: 44e5                      SUB    A7,A5
21f90: 46c4                      SUBB   A6,A4
21fa0: 40a5                      ADD    A5,A5
21fb0: 4284                      ADDC   A4,A4
21fc0: 4025                      ADD    A1,A5
21fd0: 4204                      ADDC   A0,A4
21fe0: 4465                      SUB    A3,A5
21ff0: 4644                      SUBB   A2,A4
22000: 2fe5                      SRL    1h,A5
22010: 2be4                      SRA    1h,A4
22020: 42a5                      ADDC   A5,A5
22030: 33e5                      RL     1Fh,A5
22040: 03a7                      NEG    A7
22050: 03c6                      NEGB   A6
22060: 4027                      ADD    A1,A7
22070: 4206                      ADDC   A0,A6
22080: 40e7                      ADD    A7,A7
22090: 42c6                      ADDC   A6,A6
220a0: 4467                      SUB    A3,A7
220b0: 4646                      SUBB   A2,A6
220c0: 2fe7                      SRL    1h,A7
220d0: 2be6                      SRA    1h,A6
220e0: 42e7                      ADDC   A7,A7
220f0: 33e7                      RL     1Fh,A7
22100: 4461                      SUB    A3,A1
22110: 4640                      SUBB   A2,A0
22120: 03a3                      NEG    A3
22130: 03c2                      NEGB   A2
22140: 321c                      RL     10h,B12
22150: 5631                      CLR    B1
22160: e391                      SUBXY  B12,B1
22170: 1fae                      BTST   2h,A14
22180: cb04                      JRNE   221D0h
22190: ec3c                      MOVX   B1,B12
221a0: 0d9a ff7f                 DSJ    B10,219B0h
221c0: c01f                      JR     223C0h
221d0: ee3c                      MOVY   B1,B12
221e0: 0d9a ff7b                 DSJ    B10,219B0h
22200: c01b                      JR     223C0h
22210: 143e                      DEC    B14
22220: 44a7                      SUB    A5,A7
22230: 4686                      SUBB   A4,A6
22240: 03a9                      NEG    A9
22250: 03c8                      NEGB   A8
22260: 40e9                      ADD    A7,A9
22270: 42c8                      ADDC   A6,A8
22280: 44a7                      SUB    A5,A7
22290: 4686                      SUBB   A4,A6
222a0: 03a5                      NEG    A5
222b0: 03c4                      NEGB   A4
222c0: 03a1                      NEG    A1
222d0: 03c0                      NEGB   A0
222e0: 03a3                      NEG    A3
222f0: 03c2                      NEGB   A2
22300: 321b                      RL     10h,B11
22310: 5631                      CLR    B1
22320: e371                      SUBXY  B11,B1
22330: 1fae                      BTST   2h,A14
22340: cb04                      JRNE   22390h
22350: ec3b                      MOVX   B1,B11
22360: 0d9a ff63                 DSJ    B10,219B0h
22380: c003                      JR     223C0h
22390: ee3b                      MOVY   B1,B11
223a0: 0d9a ff5f                 DSJ    B10,219B0h
223c0: 4c17                      MOVE   B0,B7
223d0: e257                      SUBXY  B2,B7
223e0: 4fdc                      MOVE   B14,A12
223f0: 1fae                      BTST   2h,A14
22400: cb01                      JRNE   22420h
22410: 03ec                      NOT    A12
22420: 1fcc                      BTST   1h,A12
22430: ca01                      JREQ   22450h
22440: 2a17                      SRA    10h,B7
22450: 0517                      SEXT   B7,0
22460: 0397                      ABS    B7
22470: cb00 ff52                 JRNE   219B0h
22490: 0960                      RETS   

_install_font:
224a0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
224c0: 4dcd                      MOVE   A14,A13
224d0: b7a6 ffe0                 MOVE   *A13(FFE0h),A6,1
224f0: 09ca ffff                 MOVI   FFFFh,A10
22510: 0550                      SETF   10h,0,0
22520: 84c8                      MOVE   *A6,A8,0
22530: 0b68 7fbf ffff            CMPI   8040h,A8
22560: cb7f                      JRNE   22D60h
22570: c05a                      JR     22B20h
22580: 1948                      MOVK   Ah,A8
22590: 0570                      SETF   10h,1,0
225a0: 0588 0010 0000            MOVE   A8,@10h,0
225d0: 458c                      SUB    A12,A12
225e0: 4d88                      MOVE   A12,A8
225f0: 24a8                      SLL    5h,A8
22600: 07a4 0020 0000            MOVE   @20h,A4,1
22630: 4088                      ADD    A4,A8
22640: 4484                      SUB    A4,A4
22650: 8288                      MOVE   A4,*A8,1
22660: 102c                      INC    A12
22670: 354c                      CMPK   Ah,A12
22680: c4f5                      JRLT   225E0h
22690: 458c                      SUB    A12,A12
226a0: 0570                      SETF   10h,1,0
226b0: 05a4 0010 0000            MOVE   @10h,A4,0
226e0: 488c                      CMP    A4,A12
226f0: c514                      JRGE   22840h
22700: 4d48                      MOVE   A10,A8
22710: c53e                      JRGE   22B00h
22720: 4d84                      MOVE   A12,A4
22730: 24a4                      SLL    5h,A4
22740: 07a8 0020 0000            MOVE   @20h,A8,1
22770: 4104                      ADD    A8,A4
22780: 8684                      MOVE   *A4,A4,1
22790: cb01                      JRNE   227B0h
227a0: 4d8a                      MOVE   A12,A10
227b0: 102c                      INC    A12
227c0: 0570                      SETF   10h,1,0
227d0: 05a4 0010 0000            MOVE   @10h,A4,0
22800: 488c                      CMP    A4,A12
22810: c502                      JRGE   22840h
22820: 4d4a                      MOVE   A10,A10
22830: c4ee                      JRLT   22720h
22840: 4d48                      MOVE   A10,A8
22850: c52a                      JRGE   22B00h
22860: 4c8c                      MOVE   A4,A12
22870: 114c                      ADDK   Ah,A12
22880: 244c                      SLL    2h,A12
22890: a3cf                      MOVE   A14,-*SP,1
228a0: 938e                      MOVE   A12,*A14+,1
228b0: d60e 0020 0000            MOVE   @20h,*A14+,1
228e0: 0d5f 0000 0000            CALLA  0h
22910: 4d0c                      MOVE   A8,A12
22920: ca2f                      JREQ   22C20h
22930: 078c 0020 0000            MOVE   A12,@20h,1
22960: 0570                      SETF   10h,1,0
22970: 05ac 0010 0000            MOVE   @10h,A12,0
229a0: 4d84                      MOVE   A12,A4
229b0: 24a4                      SLL    5h,A4
229c0: 07a8 0020 0000            MOVE   @20h,A8,1
229f0: 4104                      ADD    A8,A4
22a00: 4508                      SUB    A8,A8
22a10: 8304                      MOVE   A8,*A4,1
22a20: 102c                      INC    A12
22a30: 05a4 0010 0000            MOVE   @10h,A4,0
22a60: 1144                      ADDK   Ah,A4
22a70: 488c                      CMP    A4,A12
22a80: c4f1                      JRLT   229A0h
22a90: 05ac 0010 0000            MOVE   @10h,A12,0
22ac0: 114c                      ADDK   Ah,A12
22ad0: 058c 0010 0000            MOVE   A12,@10h,0
22b00: 4d44                      MOVE   A10,A4
22b10: c510                      JRGE   22C20h
22b20: 07ac 0020 0000            MOVE   @20h,A12,1
22b50: cbb3                      JRNE   22690h
22b60: a3cf                      MOVE   A14,-*SP,1
22b70: 09c4 0028                 MOVI   28h,A4
22b90: 928e                      MOVE   A4,*A14+,1
22ba0: 0d5f 0000 0000            CALLA  0h
22bd0: 0788 0020 0000            MOVE   A8,@20h,1
22c00: 4d0c                      MOVE   A8,A12
22c10: cb96                      JRNE   22580h
22c20: 4d44                      MOVE   A10,A4
22c30: c412                      JRLT   22D60h
22c40: 4d4c                      MOVE   A10,A12
22c50: 24ac                      SLL    5h,A12
22c60: 07a4 0020 0000            MOVE   @20h,A4,1
22c90: 408c                      ADD    A4,A12
22ca0: 82cc                      MOVE   A6,*A12,1
22cb0: 0570                      SETF   10h,1,0
22cc0: 05ac 0000 0000            MOVE   @0h,A12,0
22cf0: 102c                      INC    A12
22d00: 058c 0000 0000            MOVE   A12,@0h,0
22d30: 4d48                      MOVE   A10,A8
22d40: 1028                      INC    A8
22d50: c001                      JR     22D70h
22d60: 4508                      SUB    A8,A8
22d70: b7ee 00c0                 MOVE   *SP(C0h),A14,1
22d90: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
22db0: 0962                      RETS   2h

_select_font:
22dc0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
22de0: 4dcd                      MOVE   A14,A13
22df0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
22e10: 454a                      SUB    A10,A10
22e20: 4d8c                      MOVE   A12,A12
22e30: ca19                      JREQ   22FD0h
22e40: 142c                      DEC    A12
22e50: c415                      JRLT   22FB0h
22e60: 0570                      SETF   10h,1,0
22e70: 05a8 0010 0000            MOVE   @10h,A8,0
22ea0: 490c                      CMP    A8,A12
22eb0: c50f                      JRGE   22FB0h
22ec0: 4d88                      MOVE   A12,A8
22ed0: 24a8                      SLL    5h,A8
22ee0: 07a6 0020 0000            MOVE   @20h,A6,1
22f10: 40c8                      ADD    A6,A8
22f20: 8708                      MOVE   *A8,A8,1
22f30: ca07                      JREQ   22FB0h
22f40: 24ac                      SLL    5h,A12
22f50: 40cc                      ADD    A6,A12
22f60: 878c                      MOVE   *A12,A12,1
22f70: 078c 0040 0000            MOVE   A12,@40h,1
22fa0: 182a                      MOVK   1h,A10
22fb0: 4d48                      MOVE   A10,A8
22fc0: c007                      JR     23040h
22fd0: 07c0 0000 0000 0040 0000  MOVE   @0h,@40h,1
23020: 182a                      MOVK   1h,A10
23030: 4d48                      MOVE   A10,A8
23040: b7ee 00a0                 MOVE   *SP(A0h),A14,1
23060: 09af 3440                 MMFM   SP,A6,A10,A12,A13
23080: 0962                      RETS   2h

_delete_font:
23090: 098f 022c                 MMTM   SP,A6,A10,A12,A13
230b0: 4dcd                      MOVE   A14,A13
230c0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
230e0: 454a                      SUB    A10,A10
230f0: 142c                      DEC    A12
23100: c421                      JRLT   23320h
23110: 0570                      SETF   10h,1,0
23120: 05a8 0010 0000            MOVE   @10h,A8,0
23150: 490c                      CMP    A8,A12
23160: c51b                      JRGE   23320h
23170: 4d88                      MOVE   A12,A8
23180: 24a8                      SLL    5h,A8
23190: 07a6 0020 0000            MOVE   @20h,A6,1
231c0: 40c8                      ADD    A6,A8
231d0: 8708                      MOVE   *A8,A8,1
231e0: ca13                      JREQ   23320h
231f0: 4d88                      MOVE   A12,A8
23200: 24a8                      SLL    5h,A8
23210: 40c8                      ADD    A6,A8
23220: 8708                      MOVE   *A8,A8,1
23230: 07aa 0040 0000            MOVE   @40h,A10,1
23260: 4948                      CMP    A10,A8
23270: cb05                      JRNE   232D0h
23280: 07c0 0000 0000 0040 0000  MOVE   @0h,@40h,1
232d0: 24ac                      SLL    5h,A12
232e0: 40cc                      ADD    A6,A12
232f0: 454a                      SUB    A10,A10
23300: 834c                      MOVE   A10,*A12,1
23310: 182a                      MOVK   1h,A10
23320: 4d48                      MOVE   A10,A8
23330: b7ee 00a0                 MOVE   *SP(A0h),A14,1
23350: 09af 3440                 MMFM   SP,A6,A10,A12,A13
23370: 0962                      RETS   2h

_set_textattr:
23380: 098f 6a2c                 MMTM   SP,A1,A2,A4,A6,A10,A12,A13
233a0: 4dcd                      MOVE   A14,A13
233b0: b7a4 ffa0                 MOVE   *A13(FFA0h),A4,1
233d0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
233f0: 454a                      SUB    A10,A10
23400: 0548                      SETF   8h,0,0
23410: 8588                      MOVE   *A12,A8,0
23420: cb77                      JRNE   23BA0h
23430: c07d                      JR     23C10h
23440: 8588                      MOVE   *A12,A8,0
23450: 0b48 ffda                 CMPI   25h,A8
23470: cb76                      JRNE   23BE0h
23480: 8588                      MOVE   *A12,A8,0
23490: ca77                      JREQ   23C10h
234a0: 110c                      ADDK   8h,A12
234b0: 8588                      MOVE   *A12,A8,0
234c0: 0b48 ffd5                 CMPI   2Ah,A8
234e0: ca26                      JREQ   23750h
234f0: 8588                      MOVE   *A12,A8,0
23500: 0b48 ffd2                 CMPI   2Dh,A8
23520: ca02                      JREQ   23550h
23530: 1826                      MOVK   1h,A6
23540: c003                      JR     23580h
23550: 110c                      ADDK   8h,A12
23560: 09c6 ffff                 MOVI   FFFFh,A6
23580: 4421                      SUB    A1,A1
23590: a3cf                      MOVE   A14,-*SP,1
235a0: 8588                      MOVE   *A12,A8,0
235b0: 930e                      MOVE   A8,*A14+,1
235c0: 0d5f 40f0 0002            CALLA  240F0h
235f0: 4d08                      MOVE   A8,A8
23600: ca12                      JREQ   23730h
23610: 4c28                      MOVE   A1,A8
23620: 4d02                      MOVE   A8,A2
23630: 2468                      SLL    3h,A8
23640: 2422                      SLL    1h,A2
23650: 4048                      ADD    A2,A8
23660: 0548                      SETF   8h,0,0
23670: 9581                      MOVE   *A12+,A1,0
23680: 4101                      ADD    A8,A1
23690: 0be1 ffcf                 SUBI   30h,A1
236b0: a3cf                      MOVE   A14,-*SP,1
236c0: 8582                      MOVE   *A12,A2,0
236d0: 924e                      MOVE   A2,*A14+,1
236e0: 0d5f 40f0 0002            CALLA  240F0h
23710: 4d02                      MOVE   A8,A2
23720: cbee                      JRNE   23610h
23730: 5cc1                      MPYS   A6,A1
23740: c003                      JR     23780h
23750: 110c                      ADDK   8h,A12
23760: 0570                      SETF   10h,1,0
23770: 9481                      MOVE   *A4+,A1,0
23780: a3cf                      MOVE   A14,-*SP,1
23790: 0548                      SETF   8h,0,0
237a0: 8586                      MOVE   *A12,A6,0
237b0: 92ce                      MOVE   A6,*A14+,1
237c0: 0d5f 4230 0002            CALLA  24230h
237f0: 0be8 ff9e                 SUBI   61h,A8
23810: ca2b                      JREQ   23AD0h
23820: 1488                      SUBK   4h,A8
23830: ca23                      JREQ   23A70h
23840: 1428                      DEC    A8
23850: ca0f                      JREQ   23950h
23860: 1588                      SUBK   Ch,A8
23870: cb2e                      JRNE   23B60h
23880: 44c6                      SUB    A6,A6
23890: 0570                      SETF   10h,1,0
238a0: 0586 0060 0000            MOVE   A6,@60h,0
238d0: 0786 0080 0000            MOVE   A6,@80h,1
23900: 0586 0070 0000            MOVE   A6,@70h,0
23930: 102a                      INC    A10
23940: c021                      JR     23B60h
23950: 1826                      MOVK   1h,A6
23960: 07a2 0080 0000            MOVE   @80h,A2,1
23990: 52c2                      ANDN   A6,A2
239a0: 0782 0080 0000            MOVE   A2,@80h,1
239d0: 4c28                      MOVE   A1,A8
239e0: 1828                      MOVK   1h,A8
239f0: cb01                      JRNE   23A10h
23a00: 4508                      SUB    A8,A8
23a10: 5448                      OR     A2,A8
23a20: 0788 0080 0000            MOVE   A8,@80h,1
23a50: 102a                      INC    A10
23a60: c00f                      JR     23B60h
23a70: 0570                      SETF   10h,1,0
23a80: 0581 0070 0000            MOVE   A1,@70h,0
23ab0: 102a                      INC    A10
23ac0: c009                      JR     23B60h
23ad0: 4c22                      MOVE   A1,A2
23ae0: 1826                      MOVK   1h,A6
23af0: c701                      JRGT   23B10h
23b00: 44c6                      SUB    A6,A6
23b10: 0570                      SETF   10h,1,0
23b20: 0586 0060 0000            MOVE   A6,@60h,0
23b50: 102a                      INC    A10
23b60: 110c                      ADDK   8h,A12
23b70: 0548                      SETF   8h,0,0
23b80: 8586                      MOVE   *A12,A6,0
23b90: ca07                      JREQ   23C10h
23ba0: 8586                      MOVE   *A12,A6,0
23bb0: 0b46 ffda                 CMPI   25h,A6
23bd0: ca8a                      JREQ   23480h
23be0: 110c                      ADDK   8h,A12
23bf0: 8586                      MOVE   *A12,A6,0
23c00: cb83                      JRNE   23440h
23c10: 4d48                      MOVE   A10,A8
23c20: b7ee 0100                 MOVE   *SP(100h),A14,1
23c40: 09af 3456                 MMFM   SP,A1,A2,A4,A6,A10,A12,A13
23c60: 0962                      RETS   2h

_get_textattr:
23c70: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
23c90: 4dcd                      MOVE   A14,A13
23ca0: b7a6 ffa0                 MOVE   *A13(FFA0h),A6,1
23cc0: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
23ce0: 454a                      SUB    A10,A10
23cf0: 0548                      SETF   8h,0,0
23d00: 8588                      MOVE   *A12,A8,0
23d10: cb30                      JRNE   24020h
23d20: c036                      JR     24090h
23d30: 8588                      MOVE   *A12,A8,0
23d40: 0b48 ffda                 CMPI   25h,A8
23d60: cb2f                      JRNE   24060h
23d70: 8588                      MOVE   *A12,A8,0
23d80: ca30                      JREQ   24090h
23d90: a3cf                      MOVE   A14,-*SP,1
23da0: 110c                      ADDK   8h,A12
23db0: 8588                      MOVE   *A12,A8,0
23dc0: 930e                      MOVE   A8,*A14+,1
23dd0: 0d5f 4230 0002            CALLA  24230h
23e00: 0be8 ff9e                 SUBI   61h,A8
23e20: ca12                      JREQ   23F50h
23e30: 1488                      SUBK   4h,A8
23e40: ca0a                      JREQ   23EF0h
23e50: 3b08                      DSJS   A8,23FE0h
23e60: 07a8 0080 0000            MOVE   @80h,A8,1
23e90: 1824                      MOVK   1h,A4
23ea0: 5104                      AND    A8,A4
23eb0: 0570                      SETF   10h,1,0
23ec0: 9086                      MOVE   A4,*A6+,0
23ed0: 102a                      INC    A10
23ee0: c00f                      JR     23FE0h
23ef0: 0570                      SETF   10h,1,0
23f00: d406 0070 0000            MOVE   @70h,*A6+,0
23f30: 102a                      INC    A10
23f40: c009                      JR     23FE0h
23f50: 0570                      SETF   10h,1,0
23f60: 05a4 0060 0000            MOVE   @60h,A4,0
23f90: 1828                      MOVK   1h,A8
23fa0: c701                      JRGT   23FC0h
23fb0: 4508                      SUB    A8,A8
23fc0: 9106                      MOVE   A8,*A6+,0
23fd0: 102a                      INC    A10
23fe0: 110c                      ADDK   8h,A12
23ff0: 0548                      SETF   8h,0,0
24000: 8584                      MOVE   *A12,A4,0
24010: ca07                      JREQ   24090h
24020: 8584                      MOVE   *A12,A4,0
24030: 0b44 ffda                 CMPI   25h,A4
24050: cad1                      JREQ   23D70h
24060: 110c                      ADDK   8h,A12
24070: 8584                      MOVE   *A12,A4,0
24080: cbca                      JRNE   23D30h
24090: 4d48                      MOVE   A10,A8
240a0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
240c0: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
240e0: 0962                      RETS   2h
240f0: 098f 000c                 MMTM   SP,A12,A13
24110: 4dcd                      MOVE   A14,A13
24120: afa8 ffe0                 MOVB   *A13(FFE0h),A8
24140: 4f0e                      MOVE   A8,B14
24150: 458c                      SUB    A12,A12
24160: 0b5e ffcf                 CMPI   30h,B14
24180: c404                      JRLT   241D0h
24190: 0b5e ffc6                 CMPI   39h,B14
241b0: c701                      JRGT   241D0h
241c0: 182c                      MOVK   1h,A12
241d0: 4d88                      MOVE   A12,A8
241e0: b7ee 0060                 MOVE   *SP(60h),A14,1
24200: 09af 3000                 MMFM   SP,A12,A13
24220: 0962                      RETS   2h
24230: 098f 000c                 MMTM   SP,A12,A13
24250: 4dcd                      MOVE   A14,A13
24260: afac ffe0                 MOVB   *A13(FFE0h),A12
24280: 0b4c ffbe                 CMPI   41h,A12
242a0: c406                      JRLT   24310h
242b0: 0b4c ffa5                 CMPI   5Ah,A12
242d0: c703                      JRGT   24310h
242e0: 100c                      ADDK   20h,A12
242f0: 270c                      SLL    18h,A12
24300: 290c                      SRA    18h,A12
24310: 4d88                      MOVE   A12,A8
24320: b7ee 0060                 MOVE   *SP(60h),A14,1
24340: 09af 3000                 MMFM   SP,A12,A13
24360: 0962                      RETS   2h

_text_width:
24370: 098f fe00                 MMTM   SP,A0-A6
24390: 0550                      SETF   10h,0,0
243a0: a7c0                      MOVE   -*A14,A0,1
243b0: 07a8 0040 0000            MOVE   @40h,A8,1
243e0: b501 0130                 MOVE   *A8(130h),A1,0
24400: b505 0140                 MOVE   *A8(140h),A5,0
24420: b506 0120                 MOVE   *A8(120h),A6,0
24440: b703 0230                 MOVE   *A8(230h),A3,1
24460: b502 0170                 MOVE   *A8(170h),A2,0
24480: 4103                      ADD    A8,A3
24490: 4c42                      MOVE   A2,A2
244a0: ca0d                      JREQ   24580h
244b0: 5708                      CLR    A8
244c0: 0548                      SETF   8h,0,0
244d0: 9404                      MOVE   *A0+,A4,0
244e0: ca26                      JREQ   24750h
244f0: 4885                      CMP    A4,A5
24500: c803                      JRC    24540h
24510: 4424                      SUB    A1,A4
24520: ce01                      JRN    24540h
24530: c002                      JR     24560h
24540: 4cc6                      MOVE   A6,A6
24550: caf7                      JREQ   244D0h
24560: 4048                      ADD    A2,A8
24570: c0f5                      JR     244D0h
24580: 05a2 0070 0000            MOVE   @70h,A2,0
245b0: 0502                      SEXT   A2,0
245c0: 5708                      CLR    A8
245d0: 0548                      SETF   8h,0,0
245e0: 9404                      MOVE   *A0+,A4,0
245f0: 0550                      SETF   10h,0,0
24600: ca14                      JREQ   24750h
24610: 4885                      CMP    A4,A5
24620: c803                      JRC    24660h
24630: 4424                      SUB    A1,A4
24640: ce01                      JRN    24660h
24650: c003                      JR     24690h
24660: 4cc4                      MOVE   A6,A4
24670: caf5                      JREQ   245D0h
24680: 4424                      SUB    A1,A4
24690: 2484                      SLL    4h,A4
246a0: 4064                      ADD    A3,A4
246b0: 8484                      MOVE   *A4,A4,0
246c0: 0504                      SEXT   A4,0
246d0: 0b44 0000                 CMPI   FFFFh,A4
246f0: caf6                      JREQ   24660h
24700: 2704                      SLL    18h,A4
24710: 2d04                      SRL    18h,A4
24720: 4044                      ADD    A2,A4
24730: 4088                      ADD    A4,A8
24740: c0e8                      JR     245D0h
24750: 09af 007f                 MMFM   SP,A0-A6
24770: 0962                      RETS   2h

_trig_values:
24780: 0550                      SETF   10h,0,0
24790: a20f                      MOVE   A0,-*SP,1
247a0: a7c8                      MOVE   -*A14,A8,1
247b0: a7ce                      MOVE   -*A14,A14,1
247c0: 0d3f 0006                 CALLR  24840h
247e0: 930e                      MOVE   A8,*A14+,1
247f0: 920e                      MOVE   A0,*A14+,1
24800: 97e0                      MOVE   *SP+,A0,1
24810: b7ee 0020                 MOVE   *SP(20h),A14,1
24830: 0962                      RETS   2h
24840: 4d00                      MOVE   A8,A0
24850: 0380                      ABS    A0
24860: 0b40 fe97                 CMPI   168h,A0
24880: ce03                      JRN    248C0h
24890: 09c0 0168                 MOVI   168h,A0
248b0: 6c08                      MODS   A0,A8
248c0: 2488                      SLL    4h,A8
248d0: c902                      JRNC   24900h
248e0: 0b08 1680                 ADDI   1680h,A8
24900: 0b48 f4bf                 CMPI   B40h,A8
24920: cf19                      JRNN   24AC0h
24930: 0b48 fa5f                 CMPI   5A0h,A8
24950: cf0a                      JRNN   24A00h
24960: 09e0 7380 0002            MOVI   27380h,A0
24990: 4500                      SUB    A8,A0
249a0: 8400                      MOVE   *A0,A0,0
249b0: 0b28 6de0 0002            ADDI   26DE0h,A8
249e0: 8508                      MOVE   *A8,A8,0
249f0: 0960                      RETS   
24a00: 09e0 6840 0002            MOVI   26840h,A0
24a30: 4100                      ADD    A8,A0
24a40: 8400                      MOVE   *A0,A0,0
24a50: 03a0                      NEG    A0
24a60: 03a8                      NEG    A8
24a70: 0b28 7920 0002            ADDI   27920h,A8
24aa0: 8508                      MOVE   *A8,A8,0
24ab0: 0960                      RETS   
24ac0: 0b48 ef1f                 CMPI   10E0h,A8
24ae0: cf0c                      JRNN   24BB0h
24af0: 09e0 7ec0 0002            MOVI   27EC0h,A0
24b20: 4500                      SUB    A8,A0
24b30: 8400                      MOVE   *A0,A0,0
24b40: 03a0                      NEG    A0
24b50: 0b28 62a0 0002            ADDI   262A0h,A8
24b80: 8508                      MOVE   *A8,A8,0
24b90: 03a8                      NEG    A8
24ba0: 0960                      RETS   
24bb0: 09e0 5d00 0002            MOVI   25D00h,A0
24be0: 4100                      ADD    A8,A0
24bf0: 8400                      MOVE   *A0,A0,0
24c00: 03a8                      NEG    A8
24c10: 0b28 8460 0002            ADDI   28460h,A8
24c40: 8508                      MOVE   *A8,A8,0
24c50: 03a8                      NEG    A8
24c60: 0960                      RETS   

_zoom_rect:
24c70: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
24c90: 099f e7fe                 MMTM   SP,B0-B2,B5-B14
24cb0: 0bee fedf                 SUBI   120h,A14
24cd0: 09ae 01ff                 MMFM   A14,A0-A8
24cf0: c00f                      JR     24DF0h

_dm_zoom_rect:
24d00: a7c8                      MOVE   -*A14,A8,1
24d10: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
24d30: 099f e7fe                 MMTM   SP,B0-B2,B5-B14
24d50: 0570                      SETF   10h,1,0
24d60: 9500                      MOVE   *A8+,A0,0
24d70: 9501                      MOVE   *A8+,A1,0
24d80: 9502                      MOVE   *A8+,A2,0
24d90: 9503                      MOVE   *A8+,A3,0
24da0: 9504                      MOVE   *A8+,A4,0
24db0: 9505                      MOVE   *A8+,A5,0
24dc0: 9506                      MOVE   *A8+,A6,0
24dd0: 9507                      MOVE   *A8+,A7,0
24de0: 8708                      MOVE   *A8,A8,1
24df0: 0550                      SETF   10h,0,0
24e00: 4f0a                      MOVE   A8,B10
24e10: 07a8 0060 0000            MOVE   @60h,A8,1
24e40: cb00 01d0                 JRNE   26B60h
24e60: 4ce8                      MOVE   A7,A8
24e70: 2608                      SLL    10h,A8
24e80: ecc8                      MOVX   A6,A8
24e90: 07ac 0000 0000            MOVE   @0h,A12,1
24ec0: e188                      ADDXY  A12,A8
24ed0: e708                      CPW    A8,A8
24ee0: cd06                      JRNV   24F50h
24ef0: 1f28                      BTST   6h,A8
24f00: cb00 01c4                 JRNE   26B60h
24f20: 1ee8                      BTST   8h,A8
24f30: cb00 01c1                 JRNE   26B60h
24f50: ef8d                      MOVY   A12,A13
24f60: 2a0d                      SRA    10h,A13
24f70: 050c                      SEXT   A12,0
24f80: 07a8 0040 0000            MOVE   @40h,A8,1
24fb0: cb19                      JRNE   25150h
24fc0: 4186                      ADD    A12,A6
24fd0: 4182                      ADD    A12,A2
24fe0: cf07                      JRNN   25060h
24ff0: 4c88                      MOVE   A4,A8
25000: 5c48                      MPYS   A2,A8
25010: 5808                      DIVS   A0,A8
25020: 4104                      ADD    A8,A4
25030: 4506                      SUB    A8,A6
25040: 4040                      ADD    A2,A0
25050: 5642                      CLR    A2
25060: 41a7                      ADD    A13,A7
25070: 41a3                      ADD    A13,A3
25080: cf07                      JRNN   25100h
25090: 4ca8                      MOVE   A5,A8
250a0: 5c68                      MPYS   A3,A8
250b0: 5828                      DIVS   A1,A8
250c0: 4105                      ADD    A8,A5
250d0: 4507                      SUB    A8,A7
250e0: 4061                      ADD    A3,A1
250f0: 5663                      CLR    A3
25100: 2603                      SLL    10h,A3
25110: ee62                      MOVY   A3,A2
25120: 4c71                      MOVE   B3,B1
25130: e842                      CVXYL  A2,A2
25140: c016                      JR     252B0h
25150: b509 0050                 MOVE   *A8(50h),A9,0
25170: 05aa 0150 c000            MOVE   @C0000150h,A10,0
251a0: 492a                      CMP    A9,A10
251b0: cb00 0199                 JRNE   26B60h
251d0: b509 0020                 MOVE   *A8(20h),A9,0
251f0: 4f21                      MOVE   A9,B1
25200: 5d23                      MPYS   A9,A3
25210: 6b4a                      LMO    A10,A10
25220: 17ea                      SUBK   1Fh,A10
25230: 03aa                      NEG    A10
25240: 6342                      SLL    A10,A2
25250: 4062                      ADD    A3,A2
25260: b709 0000                 MOVE   *A8(0h),A9,1
25280: 4122                      ADD    A9,A2
25290: 4186                      ADD    A12,A6
252a0: 41a7                      ADD    A13,A7
252b0: 0541                      SETF   1h,0,0
252c0: 09ed 00b5 c000            MOVI   C00000B5h,A13
252f0: 85a8                      MOVE   *A13,A8,0
25300: 5729                      CLR    A9
25310: 812d                      MOVE   A9,*A13,0
25320: 0550                      SETF   10h,0,0
25330: a30f                      MOVE   A8,-*SP,1
25340: 4c00                      MOVE   A0,A0
25350: c600 0179                 JRLE   26B00h
25370: 4c21                      MOVE   A1,A1
25380: c600 0176                 JRLE   26B00h
253a0: 4c84                      MOVE   A4,A4
253b0: c600 0173                 JRLE   26B00h
253d0: 4ca5                      MOVE   A5,A5
253e0: c600 0170                 JRLE   26B00h
25400: 05ad 0150 c000            MOVE   @C0000150h,A13,0
25430: 4880                      CMP    A4,A0
25440: c512                      JRGE   25570h
25450: 5708                      CLR    A8
25460: 4c89                      MOVE   A4,A9
25470: 5a08                      DIVU   A0,A8
25480: 4d29                      MOVE   A9,A9
25490: cb04                      JRNE   254E0h
254a0: 09ec 5ed0 0002            MOVI   25ED0h,A12
254d0: c039                      JR     25870h
254e0: 4129                      ADD    A9,A9
254f0: 4d2a                      MOVE   A9,A10
25500: 440a                      SUB    A0,A10
25510: 4d4b                      MOVE   A10,A11
25520: 440b                      SUB    A0,A11
25530: 09ec 6270 0002            MOVI   26270h,A12
25560: c030                      JR     25870h
25570: 5708                      CLR    A8
25580: 4c09                      MOVE   A0,A9
25590: 5a88                      DIVU   A4,A8
255a0: 4129                      ADD    A9,A9
255b0: 4d2a                      MOVE   A9,A10
255c0: 448a                      SUB    A4,A10
255d0: 4d4b                      MOVE   A10,A11
255e0: 448b                      SUB    A4,A11
255f0: 4ed3                      MOVE   B6,A3
25600: 0523                      ZEXT   A3,0
25610: 1023                      INC    A3
25620: 44c3                      SUB    A6,A3
25630: 4483                      SUB    A4,A3
25640: cf01                      JRNN   25660h
25650: 4064                      ADD    A3,A4
25660: 4eb3                      MOVE   B5,A3
25670: 0523                      ZEXT   A3,0
25680: 44c3                      SUB    A6,A3
25690: c613                      JRLE   257D0h
256a0: 4066                      ADD    A3,A6
256b0: 4464                      SUB    A3,A4
256c0: c600 0142                 JRLE   26B00h
256e0: 4f08                      MOVE   A8,B8
256f0: e918                      CVXYL  B8,B8
25700: 4498                      SUB    B4,B8
25710: 4f1e                      MOVE   B8,A14
25720: 4f1c                      MOVE   B8,A12
25730: 41ac                      ADD    A13,A12
25740: 4d4a                      MOVE   A10,A10
25750: c504                      JRGE   257A0h
25760: 41c2                      ADD    A14,A2
25770: 412a                      ADD    A9,A10
25780: 3c83                      DSJS   A3,25750h
25790: c003                      JR     257D0h
257a0: 4182                      ADD    A12,A2
257b0: 416a                      ADD    A11,A10
257c0: 3d03                      DSJS   A3,25750h
257d0: 57de                      CLR    B14
257e0: edd5                      MOVX   B14,B5
257f0: 05be 01c0 0000            MOVE   @1C0h,B14,0
25820: 143e                      DEC    B14
25830: edd6                      MOVX   B14,B6
25840: 09ec 6750 0002            MOVI   26750h,A12
25870: 098f 08fc                 MMTM   SP,A4,A8-A13
25890: 4e8e                      MOVE   A4,B14
258a0: 48a1                      CMP    A5,A1
258b0: c51e                      JRGE   25AA0h
258c0: 5708                      CLR    A8
258d0: 4ca9                      MOVE   A5,A9
258e0: 5a28                      DIVU   A1,A8
258f0: 4129                      ADD    A9,A9
25900: 4d24                      MOVE   A9,A4
25910: 4424                      SUB    A1,A4
25920: 4c8b                      MOVE   A4,A11
25930: 442b                      SUB    A1,A11
25940: 2607                      SLL    10h,A7
25950: eee6                      MOVY   A7,A6
25960: 1e06                      BTST   Fh,A6
25970: cb0e                      JRNE   25A60h
25980: e6c5                      CPW    A6,A5
25990: 1f05                      BTST   7h,A5
259a0: cb0b                      JRNE   25A60h
259b0: 09ed 00ba c000            MOVI   C00000BAh,A13
259e0: 0745                      SETF   5h,0,1
259f0: 87ae                      MOVE   *A13,A14,1
25a00: 0740                      SETF   20h,0,1
25a10: cb04                      JRNE   25A60h
25a20: 09f8 6070 0002            MOVI   26070h,B8
25a50: c033                      JR     25D90h
25a60: 09f8 6470 0002            MOVI   26470h,B8
25a90: c02f                      JR     25D90h
25aa0: 5708                      CLR    A8
25ab0: 4c29                      MOVE   A1,A9
25ac0: 5aa8                      DIVU   A5,A8
25ad0: 4129                      ADD    A9,A9
25ae0: 4d24                      MOVE   A9,A4
25af0: 44a4                      SUB    A5,A4
25b00: 4c8b                      MOVE   A4,A11
25b10: 44ab                      SUB    A5,A11
25b20: 4ed3                      MOVE   B6,A3
25b30: 2e03                      SRL    10h,A3
25b40: 1023                      INC    A3
25b50: 44e3                      SUB    A7,A3
25b60: 44a3                      SUB    A5,A3
25b70: cf01                      JRNN   25B90h
25b80: 4065                      ADD    A3,A5
25b90: 4eb3                      MOVE   B5,A3
25ba0: 2e03                      SRL    10h,A3
25bb0: 44e3                      SUB    A7,A3
25bc0: c615                      JRLE   25D20h
25bd0: 4067                      ADD    A3,A7
25be0: 4465                      SUB    A3,A5
25bf0: c704                      JRGT   25C40h
25c00: 0b0f 00e0                 ADDI   E0h,SP
25c20: c000 00ec                 JR     26B00h
25c40: 4f09                      MOVE   A8,B9
25c50: 5c39                      MPYS   B1,B9
25c60: 4f3e                      MOVE   B9,A14
25c70: 4039                      ADD    B1,B9
25c80: 4f3c                      MOVE   B9,A12
25c90: 4c84                      MOVE   A4,A4
25ca0: c504                      JRGE   25CF0h
25cb0: 41c2                      ADD    A14,A2
25cc0: 4124                      ADD    A9,A4
25cd0: 3c83                      DSJS   A3,25CA0h
25ce0: c003                      JR     25D20h
25cf0: 4182                      ADD    A12,A2
25d00: 4164                      ADD    A11,A4
25d10: 3d03                      DSJS   A3,25CA0h
25d20: 2607                      SLL    10h,A7
25d30: eee6                      MOVY   A7,A6
25d40: 4ca1                      MOVE   A5,A1
25d50: 0535                      ZEXT   B5,0
25d60: 09f8 6870 0002            MOVI   26870h,B8
25d90: 4f5c                      MOVE   B10,A12
25da0: 05ad 0150 c000            MOVE   @C0000150h,A13,0
25dd0: d50d                      EXGF   A13,0
25de0: 09ed 00ba c000            MOVI   C00000BAh,A13
25e10: 0745                      SETF   5h,0,1
25e20: 87ae                      MOVE   *A13,A14,1
25e30: 09f7 0000 0001            MOVI   10000h,B7
25e60: 4ef3                      MOVE   B7,A3
25e70: 4e3a                      MOVE   B1,A10
25e80: 4dd1                      MOVE   B14,B1
25e90: 4de7                      MOVE   SP,A7
25ea0: 098f 4cfc                 MMTM   SP,A1,A4,A5,A8-A13
25ec0: 0178                      JUMP   B8
25ed0: 9419                      MOVE   *B0+,B9,0
25ee0: 4c01                      MOVE   A0,A1
25ef0: 56a5                      CLR    A5
25f00: 4105                      ADD    A8,A5
25f10: 9418                      MOVE   *B0+,B8,0
25f20: 4919                      CMP    B8,B9
25f30: 0da1 fffb                 DSJEQ  A1,25F00h
25f50: 4fab                      MOVE   A13,B11
25f60: 6b7c                      LMO    B11,B12
25f70: 175c                      SUBK   1Ah,B12
25f80: ca05                      JREQ   25FE0h
25f90: 4d3a                      MOVE   B9,B10
25fa0: 637a                      SLL    B11,B10
25fb0: 5559                      OR     B10,B9
25fc0: 243b                      SLL    1h,B11
25fd0: 3cbc                      DSJS   B12,25F90h
25fe0: 4ee2                      MOVE   A7,B2
25ff0: e0a7                      ADDXY  A5,A7
26000: e065                      ADDXY  A3,A5
26010: 4ea7                      MOVE   A5,B7
26020: 0fe0                      FILL   XY
26030: 4d19                      MOVE   B8,B9
26040: 1421                      DEC    A1
26050: c1e9                      JRP    25EF0h
26060: 012c                      EXGPC  A12
26070: 4d05                      MOVE   A8,A5
26080: 4c84                      MOVE   A4,A4
26090: c502                      JRGE   260C0h
260a0: 4124                      ADD    A9,A4
260b0: c002                      JR     260E0h
260c0: 1025                      INC    A5
260d0: 4164                      ADD    A11,A4
260e0: 4ce8                      MOVE   A7,A8
260f0: 0988 4c00                 MMTM   A8,A1,A4,A5
26110: 09a7 3f10                 MMFM   A7,A4,A8-A13
26130: 4e40                      MOVE   A2,B0
26140: 4cc7                      MOVE   A6,A7
26150: 012c                      EXGPC  A12
26160: ec37                      MOVX   B1,B7
26170: 4de7                      MOVE   SP,A7
26180: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
261a0: 4ec8                      MOVE   A6,B8
261b0: 4066                      ADD    A3,A6
261c0: 1425                      DEC    A5
261d0: c605                      JRLE   26230h
261e0: e910                      CVXYL  B8,B0
261f0: 4ec2                      MOVE   A6,B2
26200: 4066                      ADD    A3,A6
26210: 0f20                      PIXBLT L,XY
26220: 3ca5                      DSJS   A5,261E0h
26230: 4142                      ADD    A10,A2
26240: 3fc1                      DSJS   A1,26070h
26250: c000 0087                 JR     26AE0h
26270: 9419                      MOVE   *B0+,B9,0
26280: 4c01                      MOVE   A0,A1
26290: 56a5                      CLR    A5
262a0: 4105                      ADD    A8,A5
262b0: 4d4a                      MOVE   A10,A10
262c0: c502                      JRGE   262F0h
262d0: 412a                      ADD    A9,A10
262e0: c002                      JR     26310h
262f0: 1025                      INC    A5
26300: 416a                      ADD    A11,A10
26310: 9418                      MOVE   *B0+,B8,0
26320: 4919                      CMP    B8,B9
26330: 0da1 fff5                 DSJEQ  A1,262A0h
26350: 4fab                      MOVE   A13,B11
26360: 6b7c                      LMO    B11,B12
26370: 175c                      SUBK   1Ah,B12
26380: ca05                      JREQ   263E0h
26390: 4d3a                      MOVE   B9,B10
263a0: 637a                      SLL    B11,B10
263b0: 5559                      OR     B10,B9
263c0: 243b                      SLL    1h,B11
263d0: 3cbc                      DSJS   B12,26390h
263e0: 4ee2                      MOVE   A7,B2
263f0: e0a7                      ADDXY  A5,A7
26400: e065                      ADDXY  A3,A5
26410: 4ea7                      MOVE   A5,B7
26420: 0fe0                      FILL   XY
26430: 4d19                      MOVE   B8,B9
26440: 1421                      DEC    A1
26450: c1e3                      JRP    26290h
26460: 012c                      EXGPC  A12
26470: 4d05                      MOVE   A8,A5
26480: 4c84                      MOVE   A4,A4
26490: c502                      JRGE   264C0h
264a0: 4124                      ADD    A9,A4
264b0: c002                      JR     264E0h
264c0: 1025                      INC    A5
264d0: 4164                      ADD    A11,A4
264e0: 826d                      MOVE   A3,*A13,1
264f0: 099f 0c00                 MMTM   SP,B4,B5
26510: 4f84                      MOVE   A12,B4
26520: 56b5                      CLR    B5
26530: 4fc8                      MOVE   A14,B8
26540: 09f9 0400 4812            MOVI   48120400h,B9
26570: 6319                      SLL    B8,B9
26580: 2839                      SRA    1Fh,B9
26590: ec37                      MOVX   B1,B7
265a0: 5652                      CLR    B2
265b0: 0fe0                      FILL   XY
265c0: 83cd                      MOVE   A14,*A13,1
265d0: 4ce8                      MOVE   A7,A8
265e0: 0988 4c00                 MMTM   A8,A1,A4,A5
26600: 09a7 3f10                 MMFM   A7,A4,A8-A13
26620: 4e40                      MOVE   A2,B0
26630: 56e7                      CLR    A7
26640: 012c                      EXGPC  A12
26650: 4c98                      MOVE   B4,B8
26660: ec37                      MOVX   B1,B7
26670: 09bf 0030                 MMFM   SP,B4,B5
26690: 4de7                      MOVE   SP,A7
266a0: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
266c0: 4d10                      MOVE   B8,B0
266d0: 4ec2                      MOVE   A6,B2
266e0: 4066                      ADD    A3,A6
266f0: 0f20                      PIXBLT L,XY
26700: 3ca5                      DSJS   A5,266C0h
26710: 4142                      ADD    A10,A2
26720: 0d81 ffd3                 DSJ    A1,26470h
26740: c039                      JR     26AE0h
26750: 4ee2                      MOVE   A7,B2
26760: 4faa                      MOVE   A13,B10
26770: 183b                      MOVK   1h,B11
26780: 4c81                      MOVE   A4,A1
26790: 4d05                      MOVE   A8,A5
267a0: 4d4a                      MOVE   A10,A10
267b0: c502                      JRGE   267E0h
267c0: 412a                      ADD    A9,A10
267d0: c002                      JR     26800h
267e0: 1025                      INC    A5
267f0: 416a                      ADD    A11,A10
26800: fa1c                      PIXT   *B0,B12
26810: f192                      PIXT   B12,*B2,XY
26820: 4150                      ADD    B10,B0
26830: 3c85                      DSJS   A5,26800h
26840: e172                      ADDXY  B11,B2
26850: 3da1                      DSJS   A1,26790h
26860: 012c                      EXGPC  A12
26870: 826d                      MOVE   A3,*A13,1
26880: 4d05                      MOVE   A8,A5
26890: 4c84                      MOVE   A4,A4
268a0: c502                      JRGE   268D0h
268b0: 4124                      ADD    A9,A4
268c0: c002                      JR     268F0h
268d0: 1025                      INC    A5
268e0: 4164                      ADD    A11,A4
268f0: 4e0a                      MOVE   A0,B10
26900: ed57                      MOVX   B10,B7
26910: 4e40                      MOVE   A2,B0
26920: 4142                      ADD    A10,A2
26930: 5652                      CLR    B2
26940: 4e98                      MOVE   B4,A8
26950: 4f84                      MOVE   A12,B4
26960: 0f20                      PIXBLT L,XY
26970: 83cd                      MOVE   A14,*A13,1
26980: 1425                      DEC    A5
26990: c605                      JRLE   269F0h
269a0: 4e40                      MOVE   A2,B0
269b0: 4142                      ADD    A10,A2
269c0: 5652                      CLR    B2
269d0: 0f20                      PIXBLT L,XY
269e0: 3ca5                      DSJS   A5,269A0h
269f0: 4c90                      MOVE   B4,B0
26a00: 4f04                      MOVE   A8,B4
26a10: 4ce8                      MOVE   A7,A8
26a20: 0988 4800                 MMTM   A8,A1,A4
26a40: 09a7 3f10                 MMFM   A7,A4,A8-A13
26a60: 4cc7                      MOVE   A6,A7
26a70: 012c                      EXGPC  A12
26a80: 4de7                      MOVE   SP,A7
26a90: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
26ab0: 4066                      ADD    A3,A6
26ac0: 0d81 ffd9                 DSJ    A1,26870h
26ae0: 0b0f 0200                 ADDI   200h,SP
26b00: 0740                      SETF   20h,0,1
26b10: 97e8                      MOVE   *SP+,A8,1
26b20: 0541                      SETF   1h,0,0
26b30: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
26b60: 09bf 7fe7                 MMFM   SP,B0-B2,B5-B14
26b80: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
26ba0: b7ee 0020                 MOVE   *SP(20h),A14,1
26bc0: 0962                      RETS   2h
